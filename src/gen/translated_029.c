#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0057fd70 */
unsigned int F_0057fd70(unsigned int gen_a0)
{
  GEN_ENTER(0x57fd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((*(byte *)((int)this + 0x1b0) & 8) != 0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      ((code *)*(gen_code32 *)(*(int *)puVar2[2] + 0x7c))((int *)puVar2[2],0);
    }
  }
  return 0;
}

/* ref: FUN_0057fda0 */
unsigned int F_0057fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x57fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xb4);
    piVar3 = (int *)*piVar1;
    if (piVar3 != piVar1) {
      while (*(byte *)(piVar3[2] + 0x13a) != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar1) {
          return 0;
        }
      }
      iVar2 = piVar3[2];
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0xf9) = *(byte *)(iVar2 + 0xf9) | 4;
        *(undefined1 *)(iVar2 + 0x13b) = (undefined1)param_2;
      }
    }
  }
  return 0;
}

/* ref: FUN_0057fe00 */
unsigned int F_0057fe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x57fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int * piVar5;
  uint in_ecx;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xb4);
  piVar5 = (int *)*piVar1;
  if (piVar5 == piVar1) {
    return 0;
  }
  while (*(byte *)(piVar5[2] + 0x13a) != param_1) {
    piVar5 = (int *)*piVar5;
    if (piVar5 == piVar1) {
      return 0;
    }
  }
  iVar2 = piVar5[2];
  if (iVar2 == 0) {
    return 0;
  }
  bVar4 = false;
  if ((*(char *)(iVar2 + 0x10c) == '2') && (param_3 == 0x50)) {
    bVar4 = true;
  }
  if ((*(byte *)(iVar2 + 0xfb) & 1) == 0) {
    if (((*(byte *)(iVar2 + 0x13c) != 0) && ((*(byte *)(iVar2 + 0xfb) & 2) == 0)) &&
       (in_ecx = F_0057f810(this,(uint)*(byte *)(iVar2 + 0x13c)), in_ecx != 0)) {
      if ((*(char *)(in_ecx + 0x10c) == '2') && (param_3 == 0x50)) {
        bVar4 = true;
      }
      if ((char)param_2 == '\0') {
        F_005b8b40(in_ecx);
        *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) & 0xfffd;
        goto LAB_0057ff56;
      }
      *(char *)(in_ecx + 0x10d) = *(char *)(in_ecx + 0x10d) + '\x01';
      if (bVar4) {
        *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) | 2;
      }
    }
  }
  else {
    for (piVar5 = (int *)*piVar1; piVar5 != piVar1; piVar5 = (int *)*piVar5) {
      iVar3 = piVar5[2];
      if (((iVar3 != iVar2) && (*(byte *)(iVar3 + 0x13c) == param_1)) &&
         ((*(byte *)(iVar3 + 0xfb) & 2) == 0)) {
        if ((char)param_2 == '\0') {
          if ('\0' < *(char *)(iVar3 + 0x10d)) {
            *(char *)(iVar3 + 0x10d) = *(char *)(iVar3 + 0x10d) + -1;
          }
          *(ushort *)(iVar3 + 0x126) = *(ushort *)(iVar3 + 0x126) & 0xfffd;
        }
        else {
          *(char *)(iVar3 + 0x10d) = *(char *)(iVar3 + 0x10d) + '\x01';
          if (bVar4) {
            *(ushort *)(iVar3 + 0x126) = *(ushort *)(iVar3 + 0x126) | 2;
          }
        }
      }
    }
  }
  if ((char)param_2 != '\0') {
    *(char *)(iVar2 + 0x10d) = *(char *)(iVar2 + 0x10d) + '\x01';
    if (!bVar4) {
      return 0;
    }
    *(ushort *)(iVar2 + 0x126) = *(ushort *)(iVar2 + 0x126) | 2;
    return 0;
  }
LAB_0057ff56: ;
  if ('\0' < *(char *)(iVar2 + 0x10d)) {
    *(char *)(iVar2 + 0x10d) = *(char *)(iVar2 + 0x10d) + -1;
  }
  *(ushort *)(iVar2 + 0x126) = *(ushort *)(iVar2 + 0x126) & 0xfffd;
  return 0;
}

/* ref: FUN_0057ff80 */
unsigned int F_0057ff80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x57ff80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  int * piVar2;
  int * piVar3;
  
  if (param_1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xb4);
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      while (*(byte *)(piVar3[2] + 0x13a) != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar2) {
          return 0;
        }
      }
      if (piVar3[2] != 0) {
        pbVar1 = (byte *)(piVar3[2] + 0xfa);
        *pbVar1 = *pbVar1 | 0x80;
      }
    }
  }
  return 0;
}

/* ref: FUN_0057ffd0 */
uint F_0057ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x57ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0);
  if (iVar1 >> 2 == 0) {
    return CONCAT31((int3)(iVar1 >> 10),1);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xf0);
  do {
    if (piVar2 == *(int * PTR32 *)((int)this + 0xf4)) {
LAB_00580034: ;
      return (uint)(*(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0) >> 2 == 0);
    }
    if (*piVar2 == param_1) {
      F_00c46e20(piVar2,piVar2 + 1,(*(int *)((int)this + 0xf4) - (int)(piVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) + -4;
      goto LAB_00580034;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

/* ref: FUN_00580045 */
uint F_00580045(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580045u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (uint)(in_eax <= in_ecx);
}

/* ref: FUN_00580050 */
byte F_00580050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        if (puVar1[2] == 0) {
          return 0;
        }
        return *(byte *)(puVar1[2] + 0xf9) & 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005800a0 */
byte F_005800a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5800a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xb4);
  piVar3 = (int *)*piVar1;
  bVar2 = 1;
  if (piVar3 != piVar1) {
    while ((*(byte *)(piVar3[2] + 0x13b) != param_1 || ((*(byte *)(piVar3[2] + 0xf9) & 1) != 0))) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return bVar2;
      }
    }
    bVar2 = 0;
  }
  return bVar2;
}

/* ref: FUN_005800f0 */
byte F_005800f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5800f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int * in_ecx;
  byte bVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        in_ecx = (int *)puVar1[2];
        if (in_ecx == (int *)0x0) {
          return 0;
        }
        if ((*(byte *)((int)in_ecx + 0xf9) & 1) == 0) {
          return 0;
        }
        if ((*(byte *)(in_ecx + 0x3e) & 0x80) != 0) {
          return 0;
        }
        uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0x74))(in_ecx);
        if ((char)uVar3 != '\0') {
          return 0;
        }
        bVar2 = F_005b89f0(in_ecx);
        if (bVar2 == 0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*in_ecx + 0x8c))(in_ecx);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00580170 */
byte F_00580170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        iVar2 = puVar1[2];
        if (iVar2 == 0) {
          return 0;
        }
        if ((char)param_2 == '\0') {
          *(uint *)(iVar2 + 0x120) = *(uint *)(iVar2 + 0x120) & 0xffffefff;
          return 1;
        }
        *(uint *)(iVar2 + 0x120) = *(uint *)(iVar2 + 0x120) | 0x1000;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005801e0 */
uint F_005801e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5801e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb4);
  puVar2 = (undefined4 *)*puVar1;
  uVar3 = 0;
  do {
    if (puVar2 == puVar1) {
      return uVar3;
    }
    if (*(byte *)(puVar2[2] + 0x13b) == param_2) {
      if (param_3 <= (int)uVar3) {
        return uVar3;
      }
      *(undefined4 *)(param_1 + uVar3 * 4) = puVar2[2];
      uVar3 = uVar3 + 1;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

/* ref: FUN_00580230 */
uint F_00580230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580230u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  char cVar2;
  int * piVar3;
  uint in_EAX = 0;
  uint3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return in_EAX;
  }
  if ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\0') {
    F_005730d0((*(undefined * PTR32 *)&gen_args[1]));
    in_EAX = (uint)extraout_var << 8;
  }
  bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfb)));
  uVar4 = CONCAT31((int3)(in_EAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    cVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x13c)));
    if (((cVar2 == '\0') || ((bVar1 & 2) != 0)) ||
       (uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x120))) >> 10, (uVar4 & 1) != 0)) goto LAB_005802ea;
  }
  else {
    cVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x13a)));
  }
  if (cVar2 != '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar5 = (int *)*piVar3;
    if (piVar5 == piVar3) {
      return uVar4;
    }
    do {
      uVar4 = piVar5[2];
      if ((((*(char *)(uVar4 + 0x13c) != '\0') && ((*(byte *)(uVar4 + 0xfb) & 2) == 0)) &&
          (*(char *)(uVar4 + 0x13c) == cVar2)) ||
         (((*(byte *)(uVar4 + 0xfb) & 1) != 0 && (*(char *)(uVar4 + 0x13a) == cVar2)))) {
        (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)uVar4;
        uVar4 = F_005c4950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))),&(*(undefined * PTR32 *)&gen_args[2]));
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar3);
    return uVar4;
  }
LAB_005802ea: ;
  (*(undefined * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 *)&gen_args[1]);
  uVar4 = F_005c4950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))),&(*(undefined * PTR32 *)&gen_args[2]));
  return uVar4;
}

/* ref: FUN_00580310 */
byte F_00580310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc0)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0xc0)) {
      return 0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

/* ref: FUN_00580360 */
uint F_00580360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x580360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  bool bVar6;
  uint local_8;
  
  *param_2 = 0;
  local_8 = 0;
  *param_3 = 0;
  puVar4 = (uint *)0x0;
  if (param_1 != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + ((*(ushort *)(param_1 + 0xf6) & 0xf) * 3 + 6) * 4)));
    puVar2 = (undefined4 *)*puVar1;
    bVar6 = false;
    uVar3 = 0;
    while ((uVar5 = local_8, puVar2 != puVar1 &&
           (uVar5 = (uint)*(byte *)(puVar2[2] + 0x13a), !bVar6))) {
      bVar6 = uVar5 == *(byte *)(param_1 + 0x13a);
      if (bVar6) {
        uVar5 = uVar3;
      }
      puVar2 = (undefined4 *)*puVar2;
      uVar3 = uVar5;
    }
    local_8 = uVar5;
    *param_2 = uVar3;
    *param_3 = local_8;
    puVar4 = param_3;
  }
  return (uint)puVar4;
}

/* ref: FUN_005803e0 */
uint F_005803e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5803e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    in_EAX = puVar2[2];
    if (*(char *)(in_EAX + 0x13c) == '\0') {
      if (((*(uint *)&gen_args[1]) != 0) && ((*(uint *)(in_EAX + 0x108) & (*(uint *)&gen_args[1])) != 0)) {
        if ((char)(*(undefined4 *)&gen_args[4]) == '\0') {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) & ~(ushort)(*(undefined4 *)&gen_args[3]);
        }
        else {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) | (ushort)(*(undefined4 *)&gen_args[3]);
        }
      }
      if (((*(uint *)&gen_args[2]) != 0) && ((*(uint *)(in_EAX + 0x120) & (*(uint *)&gen_args[2])) != 0)) {
        if ((char)(*(undefined4 *)&gen_args[4]) == '\0') {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) & ~(ushort)(*(undefined4 *)&gen_args[3]);
        }
        else {
          *(ushort *)(in_EAX + 0x126) = *(ushort *)(in_EAX + 0x126) | (ushort)(*(undefined4 *)&gen_args[3]);
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00580470 */
uint F_00580470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  uVar2 = 0;
  if (piVar3 != piVar1) {
    while (uVar2 = piVar3[2], *(int *)(uVar2 + 0x1c) != param_1) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005804a0 */
uint F_005804a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5804a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x10) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_005804e0 */
uint F_005804e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5804e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != *(int * PTR32 *)((int)this + 0xc)) {
    while (param_1 != *piVar1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int * PTR32 *)((int)this + 0xc)) {
        return (uint)piVar1;
      }
    }
    piVar1 = (int *)F_00c46e20(piVar1,piVar1 + 1,
                               (*(int *)((int)this + 0xc) - (int)(piVar1 + 1) >> 2) * 4);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -4;
  }
  return (uint)piVar1;
}

/* ref: FUN_00580530 */
uint F_00580530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x580530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*(int *)((int)this + 0x34) != 0) {
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    uVar2 = (uint)*(byte *)(param_3 + 0xb);
    if (*(byte *)(param_3 + 0xb) == 0) {
      uVar2 = 10000;
    }
    *(uint *)((int)this + 0xa0) = uVar2;
    *(uint *)((int)this + 0xa4) = (uint)*(ushort *)(param_3 + 6);
    *(uint *)((int)this + 0xa8) = (uint)*(byte *)(param_3 + 0xc);
    uVar2 = (uint)*(ushort *)(param_3 + 4);
    if (*(ushort *)(param_3 + 4) == 0) {
      uVar2 = 60000;
    }
    *(uint *)((int)this + 0xbc) = uVar2;
    uVar2 = (uint)*(ushort *)(param_3 + 0xe);
    if (*(ushort *)(param_3 + 0xe) == 0) {
      uVar2 = 0x7fffffff;
    }
    *(uint *)((int)this + 0xc0) = uVar2;
    *(undefined4 *)((int)this + 0xc4) = 0;
    F_0042aca0((int)this + 0xcc);
    *(undefined * PTR32 *)((int)this + 200) = param_1;
    *(undefined1 *)((int)this + 0xac) = 1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30))));
    *(bool *)((int)this + 0xad) = 3 < *piVar3;
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa8);
    *(uint *)((int)this + 0xb4) = (uint)*(byte *)(param_3 + 0xd);
    F_005796e0(this,param_3,param_4);
    uVar2 = F_0042a990(param_2);
    uVar2 = F_00579d40(this,uVar2);
    iVar1 = *(int *)((int)this + 0x38);
    if (iVar1 != 0) {
      if ((char)param_4 == '\0') {
        puVar5 = (undefined4 *)(iVar1 + 0xa8);
        puVar6 = (undefined4 *)(iVar1 + 100);
        for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    F_0042e360(param_1,(int)this + 0xcc);
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
    if (-1 < (int)uVar2) {
      uVar2 = *(uint *)((int)this + 0x9c);
    }
    return uVar2;
  }
  return 0xffffd8f0;
}

/* ref: FUN_00580840 */
uint F_00580840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x580840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[2]);
  F_005796e0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),0);
  F_005797b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(uint)*(ushort *)(uVar2 + 4),(uint)*(ushort *)(uVar2 + 0xe),&(*(uint *)&gen_args[2]));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0xa8);
    puVar5 = (undefined4 *)(iVar1 + 100);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  }
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_005808a0 */
uint F_005808a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5808a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[2]);
  F_005796e0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),0);
  F_005797b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(uint)*(ushort *)(uVar2 + 4),(uint)*(ushort *)(uVar2 + 0xe),&(*(uint *)&gen_args[2]));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0xa8);
    puVar5 = (undefined4 *)(iVar1 + 100);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  }
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00580900 */
uint F_00580900(unsigned int gen_a0)
{
  GEN_ENTER(0x580900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005c8bd0((undefined *)((int)this + 0x14));
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x10),0,*(int *)((int)this + 0xc) * 4);
  *(undefined4 *)((int)this + 8) = 0;
  F_00a4b410(this,0);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_005809c0 */
uint F_005809c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5809c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined * this_00;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar3;
  if (((*(int *)((int)this + 0xc) == 0) || (*(int *)((int)this + 0x10) == 0)) ||
     (*(int *)((int)this + 0x14) == 0)) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = this_00;
  if (this_00 == (undefined *)0x0) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  uVar3 = F_004d6dd0(this_00,0,((byte *)(gen_frame + 0x0)) + 4,2);
  if (uVar3 != 0) {
    iVar5 = *(int *)((int)this + 0xc);
    uVar3 = (uint)(*(ulonglong *)(iVar5 + 0x10) >> 0x20);
    ((byte *)(gen_frame + 0x0))[0] = 0;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
    F_00573b10(*(undefined * PTR32 *)((int)this + 0x10),((undefined4 *)(gen_frame + 0x58)),(uVar3 >> 4 & 0xf) * 0x10 + (uVar3 & 0xf));
    bVar2 = F_0056c1b0(*(undefined * PTR32 *)((int)this + 0x14),
                         (uint)((byte)((uint)*(undefined4 *)(iVar5 + 0x10) >> 8) & 0x3f));
    if (bVar2 != 0) {
      uVar3 = *(uint *)((int)this + 0x30);
      ((byte *)(gen_frame + 0x0))[0x14] = (char)uVar3;
      ((byte *)(gen_frame + 0x0))[0x15] = (char)(uVar3 >> 8);
      ((byte *)(gen_frame + 0x0))[0x16] = (char)(uVar3 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0x17] = (char)(uVar3 >> 0x18);
      if (uVar3 < *(int *)((int)this + 0x34) + uVar3) {
        do {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar3;
          if (*(uint *)((int)this_00 + 0x1c) <= uVar3) break;
          F_00573bb0(*(undefined * PTR32 *)((int)this + 0x14),((byte *)(gen_frame + 0x18)),uVar3);
          uVar1 = *(uint *)((int)this_00 + 0x18);
          uVar4 = 0;
          if (uVar1 != 0) {
            do {
              ((undefined4 *)(gen_frame + 0x98))[(int)(uVar4)] = ((undefined4 *)(gen_frame + 0x58))[(int)(((byte *)(gen_frame + 0x18))[(int)((int)(uVar4))] >> 4)];
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
          }
          puVar6 = ((undefined4 *)(gen_frame + 0x98));
          puVar7 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) * uVar3 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)))));
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 1;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar3;
          this_00 = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
        } while (uVar3 < (uint)(*(int *)((int)this + 0x30) + *(int *)((int)this + 0x34)));
      }
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + *(int *)((int)this + 0x34);
      F_0056c230(*(undefined * PTR32 *)((int)this + 0x14));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = 2 - (uint)(*(uint *)((int)this + 0x30) < *(uint *)((int)this_00 + 0x1c));
    }
    F_004d6e60(this_00,0);
  }
  (*(undefined1 *)((char *)&uVar3 + 0)) = ((byte *)(gen_frame + 0x0))[0x14];
  (*(undefined1 *)((char *)&uVar3 + 1)) = ((byte *)(gen_frame + 0x0))[0x15];
  (*(undefined1 *)((char *)&uVar3 + 2)) = ((byte *)(gen_frame + 0x0))[0x16];
  (*(undefined1 *)((char *)&uVar3 + 3)) = ((byte *)(gen_frame + 0x0))[0x17];
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return uVar3;
}

/* ref: FUN_00580b80 */
uint F_00580b80(unsigned int gen_a0)
{
  GEN_ENTER(0x580b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  return (uint)this;
}

/* ref: FUN_00580bd0 */
byte F_00580bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_005c8b30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00580c00 */
uint F_00580c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  char * pcVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
  if (param_1 == 1) {
    pcVar2 = "Tooltip";
  }
  else {
    if (param_1 == 2) {
      uVar1 = F_0057f860(this_00,"ItemDetail");
      goto joined_r0x00580c2f;
    }
    if (param_1 != 3) {
      return 0;
    }
    pcVar2 = "ActionDetail";
  }
  uVar1 = F_0057f860(this_00,pcVar2);
joined_r0x00580c2f: ;
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 + 0x180;
}

/* ref: FUN_00580c50 */
uint F_00580c50(unsigned int gen_a0)
{
  GEN_ENTER(0x580c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  char * pcVar6;
  int * piVar7;
  float fVar8;
  
  if (*(char *)((int)this + 0xe) == '\0') {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3);
    if ((char)uVar4 == '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar4;
    }
  }
  iVar2 = *(int *)this;
  uVar4 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x14) + 0xcc)));
  if (*(uint *)((int)this + 4) != uVar4) {
    *(undefined4 *)((int)this + 8) = 0;
    if ((uVar4 == 0) || ((*(byte *)(uVar4 + 0xf9) & 1) == 0)) {
      *(undefined4 *)((int)this + 4) = 0;
      return uVar4 & 0xffffff00;
    }
    *(uint *)((int)this + 4) = uVar4;
    do {
      iVar5 = 0;
      pcVar6 = (char *)(uVar4 + 0x144);
      do {
        if (*pcVar6 != -1) goto LAB_00580cda;
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 0xc;
      } while (iVar5 < 5);
      uVar4 = F_0057f810(*(undefined * PTR32 *)(iVar2 + 0x14),(uint)*(byte *)(uVar4 + 0x13c));
    } while (uVar4 != 0);
LAB_00580cda: ;
    *(uint *)((int)this + 8) = uVar4;
  }
  piVar3 = *(int * PTR32 *)((int)this + 8);
  if (piVar3 != (int *)0x0) {
    uVar4 = 0;
    piVar7 = piVar3 + 0x51;
    do {
      if ((char)*piVar7 != -1) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x10)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x48))))(*(int * PTR32 *)((int)this + 8),((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0xc)),0)
        ;
        uVar4 = *(uint *)((int)this + 8);
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
        if (*(int *)(uVar4 + 0x90) != 0) {
          (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((*(int *)(uVar4 + 0x90) + 0x40)));
        }
        fVar8 = *(float *)(uVar4 + 0x118);
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) / (float10)*(float *)(uVar4 + 0x118))));
        if ((((((short *)(gen_frame + 0x14))[0] == *(short *)((int)this + 0x10)) &&
             (((short *)(gen_frame + 0x10))[0] == *(short *)((int)this + 0x12))) &&
            (uVar4 = CONCAT22((short)(uVar4 >> 0x10),((short *)(gen_frame + 0x18))[0]),
            ((short *)(gen_frame + 0x18))[0] == *(short *)((int)this + 0x14))) &&
           (((short *)(gen_frame + 0xc))[0] == *(short *)((int)this + 0x16))) {
          uVar4 = F_005608a0(fVar8,*(float *)((int)this + 0x1c));
          if ((char)uVar4 != '\0') {
            uVar4 = F_005608a0(fVar1,*(float *)((int)this + 0x18));
            if ((char)uVar4 != '\0') goto LAB_00580df5;
          }
        }
        *(undefined1 *)((int)this + 0xd) = 1;
        *(short *)((int)this + 0x10) = ((short *)(gen_frame + 0x14))[0];
        *(short *)((int)this + 0x12) = ((short *)(gen_frame + 0x10))[0];
        *(short *)((int)this + 0x14) = ((short *)(gen_frame + 0x18))[0];
        *(short *)((int)this + 0x16) = ((short *)(gen_frame + 0xc))[0];
        *(float *)((int)this + 0x18) = fVar1;
        *(float *)((int)this + 0x1c) = fVar8;
LAB_00580df5: ;
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 3;
    } while ((int)uVar4 < 5);
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00580e00 */
uint F_00580e00(unsigned int gen_a0)
{
  GEN_ENTER(0x580e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  iVar1 = *(int *)(REFG(int, 0x1379860) + 0x24);
  piVar4 = *(int * PTR32 *)(iVar1 + 8);
  do {
    if (piVar4 == *(int * PTR32 *)(iVar1 + 0xc)) {
LAB_00580e4b: ;
      piVar2 = *(int * PTR32 *)((int)this + 4);
      *(undefined1 *)((int)this + 0x20) = 0;
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        while (iVar1 != 0) {
          iVar3 = *(int *)(iVar1 + 0x10);
          F_00406ad0(iVar1);
          iVar1 = iVar3;
        }
        *piVar2 = 0;
        piVar4 = (int *)F_00406ad0(piVar2);
        *(undefined4 *)((int)this + 4) = 0;
      }
      *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
      return (uint)piVar4;
    }
    if (this == (undefined *)*piVar4) {
      piVar4 = (int *)F_00c46e20(piVar4,piVar4 + 1,
                                 (*(int *)(iVar1 + 0xc) - (int)(piVar4 + 1) >> 2) * 4);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -4;
      goto LAB_00580e4b;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

/* ref: FUN_00580ea0 */
uint F_00580ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x580ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0fe0));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = REFG(undefined4, 0x1379860);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00580f60 */
unsigned int F_00580f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x580f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if (*(int *)(puVar2[2] + 4) != 0) {
      piVar3 = *(int * PTR32 *)(puVar2[2] + 4);
      ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,param_1);
    }
  }
  return 0;
}

/* ref: FUN_00580fa0 */
unsigned int F_00580fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x580fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if (*(int *)(puVar2[2] + 4) != 0) {
      piVar3 = *(int * PTR32 *)(puVar2[2] + 4);
      ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    }
  }
  return 0;
}

/* ref: FUN_00580fd0 */
uint F_00580fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x580fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    uVar2 = puVar1[2];
    if (((*(byte *)(uVar2 + 0x2e) & 8) != 0) && ((*(byte *)(uVar2 + 0x2c) & 8) != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return uVar2;
}

/* ref: FUN_00581000 */
uint F_00581000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 4) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581030 */
uint F_00581030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0x14) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581060 */
uint F_00581060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0x18) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

/* ref: FUN_00581090 */
uint F_00581090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  iVar2 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return puVar1[2];
}

/* ref: FUN_005810f0 */
unsigned int F_005810f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5810f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    bVar1 = *(byte *)(puVar3[2] + 0x2c);
    if (((bVar1 & 1) != 0) && (((bVar1 & 8) != 0 || ((char)param_3 != '\0')))) {
      piVar4 = *(int * PTR32 *)(puVar3[2] + 4);
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_00581150 */
uint F_00581150(unsigned int gen_a0)
{
  GEN_ENTER(0x581150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_005811a0 */
uint F_005811a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5811a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_005811c0 */
uint F_005811c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5811c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a104c));
  return (uint)this;
}

/* ref: FUN_00581210 */
uint F_00581210(unsigned int gen_a0)
{
  GEN_ENTER(0x581210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581230 */
uint F_00581230(unsigned int gen_a0)
{
  GEN_ENTER(0x581230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a109c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = uVar1;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 100;
  *(undefined4 *)((int)this + 0xe4) = 0x32;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined2 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xee) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0x32;
  return (uint)this;
}

/* ref: FUN_00581350 */
uint F_00581350(unsigned int gen_a0)
{
  GEN_ENTER(0x581350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581370 */
uint F_00581370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0xe4) != param_1) {
    *(uint *)((int)this + 0xe4) = param_1;
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x9c),param_1,0,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_005813a0 */
uint F_005813a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5813a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a10ec));
  *(undefined4 *)((int)this + 0x9c) = 100;
  *(undefined4 *)((int)this + 0xa0) = 0x32;
  *(undefined4 *)((int)this + 0xa4) = 1;
  *(undefined2 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0xaa) = 0;
  *(undefined2 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xae) = 1;
  return (uint)this;
}

/* ref: FUN_00581470 */
uint F_00581470(unsigned int gen_a0)
{
  GEN_ENTER(0x581470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x84) == 0) {
    uVar1 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x84) = uVar1;
  }
  return *(uint *)((int)this + 0x84);
}

/* ref: FUN_005814a0 */
uint F_005814a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5814a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  *(undefined4 *)((int)this + 0x84) = 0x10000;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 200) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined1 *)((int)this + 0xf0) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 500;
  *(undefined4 *)((int)this + 0xfc) = 200;
  *(undefined1 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x8d) = 1;
  *(undefined1 *)((int)this + 0x8f) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x92) = 0;
  return (uint)this;
}

/* ref: FUN_00581600 */
uint F_00581600(unsigned int gen_a0)
{
  GEN_ENTER(0x581600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0));
  F_00580e00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentButton::vf22 */
unsigned int F_00581880(unsigned int gen_a0)
{
  GEN_ENTER(0x581880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x104);
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0xfc) & 0xf) < 3)) {
    F_00577d20(this_00,((undefined1 *)(gen_frame + 0x4)),((short *)(gen_frame + 0x8)),0,0,REFG(undefined4, 0x108cc50),0);
    uVar1 = *(uint *)(this + 0x70);
    if (uVar1 != 0) {
      F_0057f1a0(uVar1,(uint)*(ushort *)(uVar1 + 0x7c),(uint)*(ushort *)(uVar1 + 0x7e),
                   (uint)*(ushort *)(uVar1 + 0x7c),
                   (uint)(ushort)(*(short *)(this + 0xa0) + *(short *)(this + 0x98) + ((short *)(gen_frame + 0x8))[0]),1)
      ;
    }
  }
  return 0;
}

/* ref: FUN_00581900 */
uint F_00581900(unsigned int gen_a0)
{
  GEN_ENTER(0x581900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a119c));
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  return (uint)this;
}

/* ref: FUN_00581950 */
uint F_00581950(unsigned int gen_a0)
{
  GEN_ENTER(0x581950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0));
  F_00580e00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581990 */
uint F_00581990(unsigned int gen_a0)
{
  GEN_ENTER(0x581990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x136) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1204));
  *(undefined2 *)((int)this + 0x134) = 0;
  return (uint)this;
}

/* ref: FUN_005819c0 */
uint F_005819c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5819c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = 0xffffffff;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined2 *)((int)this + 0xf6) = 0;
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(undefined2 *)((int)this + 0xfa) = 1;
  *(undefined2 *)((int)this + 0xfc) = 1;
  *(undefined2 *)((int)this + 0xfe) = 0;
  *(undefined2 *)((int)this + 0x100) = 0;
  *(undefined2 *)((int)this + 0x102) = 0;
  *(undefined2 *)((int)this + 0x104) = 0;
  *(undefined2 *)((int)this + 0x106) = 0;
  *(undefined2 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10a) = 1;
  *(undefined2 *)((int)this + 0x10c) = 1;
  *(undefined4 *)((int)this + 0x10e) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a126c));
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
  *(undefined4 *)((int)this + 0xcc) = 0xfffffffe;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x112) = 0x101;
  *(undefined4 *)((int)this + 0x116) = 0x1010101;
  *(undefined4 *)((int)this + 0x11a) = 0;
  *(undefined4 *)((int)this + 0x11e) = 0;
  *(undefined4 *)((int)this + 0x122) = 0;
  *(undefined2 *)((int)this + 0x126) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  return (uint)this;
}

/* ref: FUN_00581b60 */
uint F_00581b60(unsigned int gen_a0)
{
  GEN_ENTER(0x581b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00581e10 */
unsigned int F_00581e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)((int)this + 0x70);
    if (iVar1 != 0) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x7e);
      *(short *)(iVar1 + 0x7c) = (short)param_1;
      *(ushort *)(iVar1 + 0x7e) = *(ushort *)(iVar1 + 0x7e);
    }
    uVar2 = *(uint *)((int)this + 0x70);
    if (uVar2 != 0) {
      F_0057f1a0(uVar2,(uint)*(ushort *)(uVar2 + 0x7c),(uint)*(ushort *)(uVar2 + 0x7e),param_1,
                   uVar3,1);
    }
  }
  return 0;
}

/* ref: FUN_00581e60 */
unsigned int F_00581e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x581e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(byte *)((int)this + 0x220) & 4) != 0) && (*(int *)((int)this + 0x1e0) != 0)) {
    F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e0) + 0xbc))),param_1,0,0,0,0);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf33 */
unsigned int F_00581ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x581ea0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint * puVar5;
  undefined * PTR32 * ppAVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  
  if ((int)(*(uint *)&gen_args[1]) < 0) {
    return 0;
  }
  uVar10 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    iVar8 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
    piVar7 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 300)));
    (*(uint *)&gen_args[2]) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    if ((iVar8 != 0) && (iVar8 <= (int)(*(uint *)&gen_args[1]))) {
      (*(uint *)&gen_args[1]) = iVar8 - 1;
    }
    if (piVar7 != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130)))) {
      do {
        iVar8 = *piVar7;
        if (*(byte *)(iVar8 + 0x2c) == (ushort)(*(uint *)&gen_args[2])) {
          bVar1 = *(byte *)(iVar8 + 0x2b);
          if ((bVar1 & 4) == 0) {
            if ((*(uint *)&gen_args[1]) == (*(uint *)(gen_frame + 0x4))) break;
            (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
          }
          if (((bVar1 & 2) == 0) || ((*(byte *)(iVar8 + 0x2a) & 1) == 0)) {
            if ((bVar1 & 1) != 0) {
              (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + -1;
            }
          }
          else {
            (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
          }
        }
        piVar7 = piVar7 + 1;
        uVar10 = uVar10 + 1;
      } while (piVar7 != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))));
      (*(uint *)(gen_frame + 0x8)) = uVar10;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[1]);
  }
  uVar10 = (*(uint *)(gen_frame + 0x8));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))))((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x8)),0);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = uVar10;
  if (uVar10 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)))) {
    iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 300))) + uVar10 * 4)));
  }
  else {
    iVar8 = 0;
  }
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  if ((*(undefined * PTR32 *)&gen_args[0])[0x114] == (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_0057c130((*(undefined * PTR32 *)&gen_args[0]),uVar10,0);
  iVar8 = *(int *)(iVar8 + 0x20);
  (*(uint *)(gen_frame + 0x4)) = iVar8;
  if (((*(uint *)(gen_frame + 0x8)) == 0) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0)) {
    F_00562160((*(undefined * PTR32 *)&gen_args[0]),0);
    F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))),0,1,1);
    return 0;
  }
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) != 0) && ((*(uint *)&gen_args[1]) == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xac))) - 1U)) {
    F_00562160((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154))));
    F_00574c80(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))),*((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0xa8))),1,1);
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) < (int)(*(uint *)(gen_frame + 0x8))) {
    iVar9 = (uint)uVar2 - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)&gen_args[0]) + 0xb8;
    if (-1 < iVar9) {
      if ((int)(*(uint *)(gen_frame + 0x8)) < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x164)))) {
        if (iVar8 == 0) {
          return 0;
        }
        uVar3 = F_005c0650(iVar8);
        (*(uint *)&gen_args[2]) = (uint)uVar3 + iVar9;
        uVar3 = F_005c0650((*(undefined * PTR32 *)&gen_args[0]));
        if ((int)(*(uint *)&gen_args[2]) < (int)(uint)uVar3) {
          return 0;
        }
      }
      (*(uint *)&gen_args[2]) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
      (*(uint *)(gen_frame + 0x8)) = 0;
      uVar3 = F_005c0650((*(undefined * PTR32 *)&gen_args[0]));
      uVar4 = F_005c0650((*(uint *)(gen_frame + 0x4)));
      uVar4 = (uVar2 - uVar3) + uVar4;
      (*(uint *)&gen_args[1]) = (uint)uVar4;
      puVar5 = &(*(uint *)&gen_args[1]);
      if ((short)(ushort)(*(uint *)&gen_args[2]) <= (short)uVar4) {
        puVar5 = &(*(uint *)&gen_args[2]);
      }
      if ((short)*puVar5 < 1) {
        puVar5 = &(*(uint *)(gen_frame + 0x8));
      }
      F_00562160((*(undefined * PTR32 *)&gen_args[0]),(int)(short)*puVar5);
      iVar9 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
      iVar8 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      goto LAB_00582103;
    }
  }
  (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  (*(uint *)&gen_args[2]) = (uint)uVar2;
  ppAVar6 = (undefined * PTR32 *)&(*(uint *)&gen_args[2]);
  if ((short)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154))) <= (short)uVar2) {
    ppAVar6 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
  }
  if (*(short *)ppAVar6 < 1) {
    ppAVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != (int)*(short *)ppAVar6) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = (int)*(short *)ppAVar6;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  iVar9 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  iVar8 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
LAB_00582103: ;
  fVar11 = (float10)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x154)));
  if (iVar9 < 0) {
    fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  F_00574c80(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))),
               (int)(((float10)iVar8 / fVar11) * (float10)*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0xa8)))),0,
               1);
  return 0;
}

/* ref: FUN_00582140 */
uint F_00582140(unsigned int gen_a0)
{
  GEN_ENTER(0x582140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xba) = 0;
  *(undefined2 *)((int)this + 0xbc) = 1;
  *(undefined2 *)((int)this + 0xbe) = 1;
  *(undefined2 *)((int)this + 0xc0) = 0;
  *(undefined2 *)((int)this + 0xc2) = 1;
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1304));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 100;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc6) = 0x10000;
  *(undefined4 *)((int)this + 0xca) = 0x1000001;
  *(undefined1 *)((int)this + 0xce) = 0;
  return (uint)this;
}

/* ref: FUN_00582240 */
uint F_00582240(unsigned int gen_a0)
{
  GEN_ENTER(0x582240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582260 */
uint F_00582260(unsigned int gen_a0)
{
  GEN_ENTER(0x582260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1354));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x10000;
  *(undefined1 *)((int)this + 0x94) = 0;
  return (uint)this;
}

/* ref: FUN_005822d0 */
uint F_005822d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5822d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582350 */
uint F_00582350(unsigned int gen_a0)
{
  GEN_ENTER(0x582350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582370 */
uint F_00582370(unsigned int gen_a0)
{
  GEN_ENTER(0x582370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a140c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined2 *)((int)this + 0xa0) = 0x100;
  return (uint)this;
}

/* ref: FUN_005823f0 */
uint F_005823f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5823f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582410 */
byte F_00582410(unsigned int gen_a0)
{
  GEN_ENTER(0x582410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = REFG(int, 0x1379860);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x68);
  F_005c8b30((undefined *)(REFG(int, 0x1379860) + 0xe4),&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  return (*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0xe8);
}

/* ref: FUN_00582450 */
uint F_00582450(unsigned int gen_a0)
{
  GEN_ENTER(0x582450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined1 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x96) = 0;
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(byte *)((int)this + 0xaa) = *(byte *)((int)this + 0xaa) & 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a149c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a145c));
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined2 *)((int)this + 0xa8) = 0x101;
  return (uint)this;
}

/* ref: FUN_00582510 */
uint F_00582510(unsigned int gen_a0)
{
  GEN_ENTER(0x582510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  F_0042b630((int)this + 0x9c);
  F_0042b630((int)this + 0xf0);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0xffffffff;
  *(undefined4 *)((int)this + 0x158) = 0xffffffff;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  F_0042e430((undefined *)((int)this + 0xf0),"");
  F_0042e430((undefined *)((int)this + 0x9c),"");
  *(undefined4 *)((int)this + 0x88) = 0xa000d268;
  return (uint)this;
}

/* ref: FUN_00582610 */
uint F_00582610(unsigned int gen_a0)
{
  GEN_ENTER(0x582610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880((undefined *)((int)this + 0xf0));
  F_0042c880((undefined *)((int)this + 0x9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00582650 */
uint F_00582650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x582650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(undefined * PTR32 *)((int)this + 0x8c) != (undefined *)0x0) {
    this_00 = (undefined *)F_005684e0(*(undefined * PTR32 *)((int)this + 0x8c),1);
    uVar1 = F_00576af0(this_00,param_1);
    puVar3 = (undefined4 *)((int)this_00 + 0xa8);
    puVar4 = (undefined4 *)((int)this_00 + 100);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return uVar1 + 1;
  }
  return 0;
}

/* ref: FUN_005826a0 */
uint F_005826a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5826a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x144) == 0) {
    uVar1 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar1;
  }
  return *(uint *)((int)this + 0x144);
}

/* ref: Component::GUI2::AtkComponentTextInput::vf8 */
uint F_005826d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5826d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  byte * pbVar2;
  float fVar3;
  int iVar4;
  undefined * this_00;
  ushort uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined * local_c;
  float local_8;
  
  uVar10 = 0;
  if ((this != (undefined *)0x0) && (*(int *)(this + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  do {
    while( true ) {
      if ((*(int *)(this + 0xc) == 0) ||
         ((uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) <= uVar10)) {
        if (*(int *)(this + 0x68) == 0) {
          *(int *)(this + 0x68) = *(int *)(this + 0x6c);
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x6c) + 0x84)));
          *puVar1 = *puVar1 | 0x1000000;
          if (*(int *)(this + 0x68) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x68) + 0x84)));
            *puVar1 = *puVar1 | 0x4000000;
          }
        }
        if (*(int *)(this + 0x98) == 0) {
          *(int *)(this + 0x98) = *(int *)(this + 0x8c);
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x8c) + 0x84)));
          *puVar1 = *puVar1 | 0x1000000;
        }
        if (*(int *)(this + 0x300) != 0) {
          *(undefined2 *)(this + 0x336) = 4;
          if ((*(int *)(this + 0x30c) == 0) ||
             (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x30c) + 0x70))), iVar11 == 0)) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = *(float *)(iVar11 + 0x3c);
          }
          iVar11 = *(int *)(this + 0x308);
          if ((iVar11 == 0) || (*(int *)(iVar11 + 0x70) == 0)) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = *((float *)GEN_TOP((*(int *)(iVar11 + 0x70) + 0x3c)));
          }
          iVar4 = *(int *)(this + 0x330);
          *(short *)(this + 0x334) = (short)(int)fVar14 - (short)(int)fVar15;
          if (iVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined2 *)(iVar4 + 0x7e);
          }
          *(undefined2 *)(this + 0x338) = uVar8;
          if ((iVar11 == 0) || (*(int *)(iVar11 + 0x70) == 0)) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = *((float *)GEN_TOP((*(int *)(iVar11 + 0x70) + 0x38)));
          }
          if (iVar4 == 0) {
            local_c = (undefined *)0x0;
          }
          else {
            local_c = *(undefined * PTR32 *)(iVar4 + 0x38);
          }
          *(int *)(this + 0x33c) = (int)((float10)(int)(short)(int)fVar14 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))))
          ;
          if (iVar4 == 0) {
            fVar14 = 0.0;
            uVar9 = 0;
          }
          else {
            fVar14 = *(float *)(iVar4 + 0x38);
            uVar9 = *(ushort *)(iVar4 + 0x7c);
          }
          iVar11 = *(int *)(this + 0x32c);
          if (iVar11 == 0) {
            fVar15 = 0.0;
            uVar5 = 0;
          }
          else {
            fVar15 = *(float *)(iVar11 + 0x38);
            uVar5 = *(ushort *)(iVar11 + 0x7c);
          }
          *(int *)(this + 0x344) =
               (int)((((float10)uVar9 + (float10)fVar14) - (float10)fVar15) - (float10)uVar5);
          *(int *)(this + 0x340) = (int)*((float *)GEN_TOP((*(int *)(this + 0x300) + 0x3c)));
          if (iVar4 == 0) {
            fVar14 = 0.0;
            uVar9 = 0;
          }
          else {
            fVar14 = *(float *)(iVar4 + 0x3c);
            uVar9 = *(ushort *)(iVar4 + 0x7e);
          }
          if (iVar11 == 0) {
            local_8 = 0.0;
            uVar5 = 0;
          }
          else {
            local_8 = *(float *)(iVar11 + 0x3c);
            uVar5 = *(ushort *)(iVar11 + 0x7e);
          }
          *(int *)(this + 0x348) =
               (int)((((float10)uVar9 + (float10)fVar14) - (float10)local_8) - (float10)uVar5);
          if (*((int *)GEN_TOP((*(int *)(this + 0x308) + 0x104))) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x308) + 0x104))) + 0x50)));
          }
          *(undefined4 *)(this + 0x34c) = uVar16;
          F_0056e5a0(this);
          local_c = this + 0x308;
          iVar11 = 0;
          do {
            if ((*(int *)local_c != 0) && (iVar4 = *(int *)(*(int *)local_c + 0x70), iVar4 != 0)) {
              if (*(int *)(iVar4 + 0x80) == 0) {
                uVar16 = 0;
                uVar10 = F_00404270();
                puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else {
                  *puVar7 = 0;
                }
                *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar7;
              }
              F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),0x17,iVar11,0,iVar4,this,0);
            }
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)local_c + 0x30))))(*(int * PTR32 *)local_c,0);
            iVar11 = iVar11 + 1;
            local_c = local_c + 4;
          } while (iVar11 < 9);
        }
        if (*(int *)(this + 0x98) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
          *puVar1 = *puVar1 | 0x2000000;
        }
        if (*(int *)(this + 0x98) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x98) + 0x84)));
          *puVar1 = *puVar1 | 0x4000000;
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0x11,0x200,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0x12,0x201,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0xc,0x300,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),3,0x400,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0xf,0,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x98);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),9,0,0,iVar11,this,0);
        }
        iVar11 = *(int *)(this + 0x68);
        if (iVar11 != 0) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0xc,0x301,0,iVar11,this,0);
        }
        if ((this[0x80] == (undefined1)0x1) &&
           (iVar11 = *(int *)(this + 0x70), iVar11 != 0)) {
          if (*(int *)(iVar11 + 0x80) == 0) {
            uVar16 = 0;
            uVar10 = F_00404270();
            puVar7 = (undefined4 *)F_00406bd0(4,0,uVar10,uVar16);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = 0;
            }
            *(undefined4 * PTR32 *)(iVar11 + 0x80) = puVar7;
          }
          F_00565340(*(undefined * PTR32 *)(iVar11 + 0x80),0x46,0,0,iVar11,this,0);
        }
        if (*(int *)(this + 0x8c) != 0) {
          pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xfe)));
          *pbVar2 = *pbVar2 & 0xfe;
        }
        if (*(int *)(this + 0x8c) != 0) {
          pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xff)));
          *pbVar2 = *pbVar2 | 1;
        }
        iVar11 = *(int *)(this + 0x8c);
        if (iVar11 != 0) {
          local_c = *(undefined * PTR32 *)(iVar11 + 0x38);
          local_8 = *(float *)(iVar11 + 0x3c);
        }
        iVar11 = *(int *)(this + 0x90);
        if (iVar11 == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = *(float *)(iVar11 + 0x74);
        }
        if (iVar11 == 0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = *(float *)(iVar11 + 0x78);
        }
        fVar3 = (float)((float10)local_8 - (float10)fVar15);
        if (iVar11 != 0) {
          if (((*(uint *)(iVar11 + 0x88) & 1) == 0) &&
             ((fVar13 = (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))) - (float10)fVar14),
              bVar12 = GEN_ISNAN((float10)*(float *)(iVar11 + 0x38)) || GEN_ISNAN(fVar13),
              bVar12 == (bVar12 || (float10)*(float *)(iVar11 + 0x38) == fVar13) ||
              (fVar13 = (float10)fVar3,
              bVar12 = GEN_ISNAN((float10)*(float *)(iVar11 + 0x3c)) || GEN_ISNAN(fVar13),
              bVar12 == (bVar12 || (float10)*(float *)(iVar11 + 0x3c) == fVar13))))) {
            *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 1;
          }
          *(float *)(iVar11 + 0x38) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(local_c))) - (float10)fVar14);
          *(float *)(iVar11 + 0x3c) = fVar3;
        }
        iVar11 = *(int *)(this + 0x90);
        if ((iVar11 == 0) || (*(int *)(iVar11 + 0x1c) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar11 + 0x1c) + 0x10)));
        }
        if ((iVar11 != 0) && (this_00 = *(undefined * PTR32 *)(iVar11 + 0x1c), this_00 != (undefined *)0x0)) {
          *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
          *(uint *)((int)this_00 + 0x18) = uVar10 - 1;
          F_00573430(this_00,uVar10 - 1);
        }
        iVar11 = *(int *)(this + 0x90);
        if (iVar11 != 0) {
          *(uint *)(iVar11 + 0x84) = *(uint *)(iVar11 + 0x84) & 0xffefffff;
          *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 0x80;
        }
        *(short *)(this + 0x1f2) = (short)(int)((float10)local_8 - (float10)fVar15);
        uVar10 = *(uint *)(this + 0x8c);
        if (uVar10 != 0) {
          *(undefined4 *)(uVar10 + 0x98) = *(undefined4 *)(this + 0x88);
        }
        return uVar10;
      }
      uVar6 = F_00578ee0(this + 4,uVar10);
      if (uVar6 != 0) break;
LAB_00582742: ;
      uVar10 = uVar10 + 1;
    }
    if ((*(uint *)(uVar6 + 0x84) & 0x1000000) == 0) {
      *(uint *)(uVar6 + 0x84) = *(uint *)(uVar6 + 0x84) & 0xfdffffff;
      goto LAB_00582742;
    }
    *(uint *)(this + 0x98) = uVar6;
    uVar10 = uVar10 + 1;
  } while( true );
}

/* ref: FUN_00582dd0 */
uint F_00582dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x582dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00582510(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a154c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a153c));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x184) = 0x101;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 1;
  *(undefined2 *)((int)this + 400) = 1;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_0042b630((int)this + 0x198);
  F_0042b630((int)this + 0x1ec);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x248) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x30),((undefined1 *)(gen_frame + 0x4)),"<color(0xffffc050)>");
  F_0042ccf0((undefined *)((int)this + 0x198),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x30) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x30),((undefined1 *)(gen_frame + 0x4)),"<color(stackcolor)>");
  F_0042ccf0((undefined *)((int)this + 0x1ec),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00582ed0 */
uint F_00582ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x582ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a154c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a153c));
  F_0042c880((undefined *)((int)this + 0x1ec));
  F_0042c880((undefined *)((int)this + 0x198));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880((undefined *)((int)this + 0xf0));
  F_0042c880((undefined *)((int)this + 0x9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf16 */
uint F_00582f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x582f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  undefined * pAVar5;
  
  pcVar4 = param_1;
  pAVar5 = this + 0x240;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pAVar5 = pAVar5 + 4;
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x250));
  if ((uVar2 == 0) || (*(short *)(uVar2 + 0x18) != 3)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x8c) = uVar2;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x254));
  *(uint *)(this + 0x94) = uVar2;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 600));
  *(uint *)(this + 0x90) = uVar2;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x25c));
  if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
      (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
     ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
      ((*(char *)(iVar3 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))))
  {
    iVar3 = 0;
  }
  *(int *)(this + 0x170) = iVar3;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x260));
  if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
      ((iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0 ||
       ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
        (*(char *)(iVar3 + 0x1c) != '\x01')))))) ||
     (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')) {
    iVar3 = 0;
  }
  *(int *)(this + 0x174) = iVar3;
  iVar3 = *(int *)(this + 0x264);
  if (*(int *)(this + 0x264) < *(int *)(this + 0x268)) {
    iVar3 = *(int *)(this + 0x268);
  }
  if (*(int *)(this + 0x26c) < iVar3) {
    iVar3 = *(int *)(this + 0x26c);
  }
  *(int *)(this + 0x178) = iVar3;
  F_0056e6e0(this);
  if (*(int *)(this + 0x8c) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x8c) + 0xfe)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  uVar2 = F_0057eb30(*(undefined * PTR32 *)(this + 0x8c),*(undefined4 *)(this + 0x178),(uint)(byte)this[0x278]
                       ,0,(uint)(byte)this[0x180],0);
  if (*(int *)(this + 0x270) < 1) {
    *(undefined4 *)(this + 0x270) = 1;
  }
  return uVar2;
}

/* ref: FUN_00583100 */
uint F_00583100(unsigned int gen_a0)
{
  GEN_ENTER(0x583100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  *(undefined1 *)((int)this + 0x191) = 0;
  if (*(int *)((int)this + 0x144) == 0) {
    uVar2 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar2;
  }
  F_0056b780(*(undefined * PTR32 *)((int)this + 0x144),3);
  if (*(int *)((int)this + 0x144) == 0) {
    uVar2 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar2;
  }
  bVar1 = F_0056b780(*(undefined * PTR32 *)((int)this + 0x144),4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00583170 */
uint F_00583170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x583170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if ((*(char *)((int)this + 0x186) != (char)param_1) &&
     (*(char *)((int)this + 0x186) = (char)param_1, (char)param_2 != '\0')) {
    if ((char)param_1 == '\0') {
      *(undefined1 *)((int)this + 0x191) = 1;
      return uVar1;
    }
    *(undefined1 *)((int)this + 0x191) = 0;
    uVar1 = F_00583100(this);
  }
  return uVar1;
}

/* ref: FUN_005831b0 */
uint F_005831b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5831b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a159c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  return (uint)this;
}

/* ref: FUN_00583230 */
uint F_00583230(unsigned int gen_a0)
{
  GEN_ENTER(0x583230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583250 */
uint F_00583250(unsigned int gen_a0)
{
  GEN_ENTER(0x583250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a15ec));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  return (uint)this;
}

/* ref: FUN_005832c0 */
uint F_005832c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5832c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_005832e0 */
uint F_005832e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5832e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float local_8;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  if (this_00 == (undefined *)0x0) {
    return in_EAX;
  }
  iVar4 = *(int *)((int)this + 0x88);
  if (iVar4 == 0) {
    return 0;
  }
  local_8 = *(float *)(iVar4 + 0x38);
  uVar7 = (uint)*(ushort *)(iVar4 + 0x7c);
  uVar2 = *(ushort *)((int)this_00 + 0x7c);
  fVar1 = *(float *)(iVar4 + 0x3c);
  uVar3 = *(ushort *)(iVar4 + 0x7e);
  uVar5 = F_00577bc0(this_00,0,0,REFG(undefined4, 0x108cc50),0);
  uVar8 = uVar5 + (uVar7 - uVar2) & 0xffff;
  uVar5 = *(uint *)((int)this + 0x88);
  if (uVar5 != 0) {
    F_0057f1a0(uVar5,(uint)*(ushort *)(uVar5 + 0x7c),(uint)*(ushort *)(uVar5 + 0x7e),uVar8,
                 (uint)uVar3,1);
  }
  uVar5 = *((byte *)GEN_TOP((*(int *)((int)this + 0x84) + 0xfc))) & 0xf;
  uVar6 = uVar5 - 1;
  if (uVar6 < 8) {
    uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5833f4) + uVar5 + 3)));
    switch((unsigned int)(uintptr_t)(uVar5)) {
    default: ;
      uVar6 = (int)(uVar8 - uVar7) / 2;
      fVar9 = (float10)local_8 - (float10)(int)uVar6;
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      fVar9 = (float10)local_8 - (float10)(int)(uVar8 - uVar7);
      break;
    case 3: ;
    case 6: ;
      goto switchD_00583386_caseD_3;
    }
    local_8 = (float)fVar9;
  }
switchD_00583386_caseD_3: ;
  *(float *)((int)this + 0x8c) = local_8;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    uVar6 = F_00559da0(*(undefined4 *)((int)this + 0x88),local_8,fVar1);
  }
  return uVar6;
}

/* ref: FUN_00583400 */
uint F_00583400(unsigned int gen_a0)
{
  GEN_ENTER(0x583400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a163c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  F_00c48350((undefined *)((int)this + 0x23c),0,0x60);
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  return (uint)this;
}

/* ref: FUN_00583530 */
uint F_00583530(unsigned int gen_a0)
{
  GEN_ENTER(0x583530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583550 */
unsigned int F_00583550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583550u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (undefined *)0x0)) &&
      (uVar1 = F_0057dd60(param_2), param_1[0x2a] == 0)) && (uVar1 != 0)) {
    param_1[0x1a] = uVar1;
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x4000000;
    ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,1);
    if (*(short *)(uVar1 + 0x18) == 8) {
      *(int * PTR32 *)(uVar1 + 0x98) = param_1;
    }
  }
  return 0;
}

/* ref: FUN_005835b0 */
uint F_005835b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5835b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a168c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_00583610 */
uint F_00583610(unsigned int gen_a0)
{
  GEN_ENTER(0x583610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583630 */
uint F_00583630(unsigned int gen_a0)
{
  GEN_ENTER(0x583630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a16dc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b90));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bd8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[5])REFP(0x10a0bf0));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[5])REFP(0x10a0c10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  *(undefined4 *)((int)this + 0x140) = 0;
  F_0055b910((undefined *)((int)this + 0x2c0));
  F_005643c0(this);
  return (uint)this;
}

/* ref: FUN_00583700 */
uint F_00583700(unsigned int gen_a0)
{
  GEN_ENTER(0x583700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00583770 */
uint F_00583770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x583770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint in_EAX = 0;
  int iVar3;
  uint uVar4;
  undefined4 extraout_EAX = 0;
  undefined * this_00;
  
  this_00 = (undefined *)(REFG(int, 0x1379860) + 0x220);
  uVar4 = in_EAX & 0xffffff00;
  iVar2 = *(int *)this;
joined_r0x0058378d: ;
  do {
    if (iVar2 == 0) {
      return uVar4;
    }
    if (((param_1 == 0x49) ||
        ((((*(uint *)(iVar2 + 0x14) & 0xff) == param_1 && (*(int *)(iVar2 + 0xc) == param_2)) &&
         (((byte)(*(uint *)(iVar2 + 0x14) >> 0x14) & 1) == (byte)param_4)))) &&
       (*(int *)(iVar2 + 8) == param_3)) {
      if ((*(uint *)(iVar2 + 0x14) & 0x40000) == 0) {
        F_0057e530(this_00,iVar2);
        iVar1 = *(int *)this;
        do {
          iVar3 = iVar1;
          if (iVar3 == 0) {
            iVar3 = 0;
            break;
          }
          iVar1 = *(int *)(iVar3 + 0x10);
        } while (*(int *)(iVar3 + 0x10) != iVar2);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x10) = iVar1;
        }
        if (iVar2 == *(int *)this) {
          *(int *)this = iVar1;
        }
        uVar4 = F_00406ad0(iVar2);
        uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
        iVar2 = iVar1;
        goto joined_r0x0058378d;
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x20000;
      F_0057e530(this_00,iVar2);
      uVar4 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}

/* ref: FUN_00583840 */
byte F_00583840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x14);
  iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  (*(byte *)(gen_frame + 0x2b)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_1 + 0x1c);
  do {
    while( true ) {
      if (iVar4 == 0) {
        iVar4 = *(int *)((int)this + 4);
        if (iVar4 != *(int *)((int)this + 8)) {
          F_00c46e20(iVar4,*(int *)((int)this + 8),0);
          *(int *)((int)this + 8) = iVar4;
        }
        F_0056f680(*(undefined * PTR32 *)this);
        return (*(byte *)(gen_frame + 0x2b));
      }
      piVar1 = *(int * PTR32 *)((int)this + 4);
      iVar2 = *piVar1;
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffd4ffff | 0x40000;
      *(undefined1 *)((int)this + 0x14) = 0;
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
      if ((*(uint *)(iVar2 + 0x14) & 0x100000) == 0) break;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 8) + 4))))
                (*(undefined4 *)(iVar2 + 8),(uint)(*(ushort *)(iVar2 + 0x14) & 0xff),
                 *(undefined4 *)(iVar2 + 0xc),iVar2,&(*(undefined4 *)(gen_frame + 0xc)));
LAB_00583967: ;
      uVar3 = *(uint *)(iVar2 + 0x14) >> 0x15;
      if ((uVar3 & 1) != 0) {
        *(byte *)(param_1 + 2) =
             *(byte *)(param_1 + 2) ^ ((char)uVar3 * '\x02' ^ *(byte *)(param_1 + 2)) & 2;
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffdfffff;
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffbffff;
      if (((*(byte *)(gen_frame + 0x2b)) == 0) && ((*(uint *)(iVar2 + 0x14) & 0x10000) != 0)) {
        (*(byte *)(gen_frame + 0x2b)) = 1;
      }
      if (iVar4 == *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2) {
        F_00c46e20((*(int * PTR32 *)(gen_frame + 0x24)),(*(int * PTR32 *)(gen_frame + 0x24)) + 1,(*(int *)((int)this + 8) - (int)((*(int * PTR32 *)(gen_frame + 0x24)) + 1) >> 2) * 4);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -4;
      }
      iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 8) + 8))))
              (*(undefined4 *)(iVar2 + 8),(uint)(*(ushort *)(iVar2 + 0x14) & 0xff),
               *(undefined4 *)(iVar2 + 0xc),iVar2,&(*(undefined4 *)(gen_frame + 0xc)));
    if ((*(char *)((int)this + 0x14) == '\0') ||
       (iVar4 == *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
      if ((*(uint *)(iVar2 + 0x14) & 0x80000) != 0) {
        *(uint *)(param_1 + 4) = (uint)*(byte *)(iVar2 + 0x15);
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfff7ffff;
      }
      goto LAB_00583967;
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
    if (((*(byte *)(gen_frame + 0x2b)) == 0) && ((*(byte *)(iVar2 + 0x16) & 1) != 0)) {
      (*(byte *)(gen_frame + 0x2b)) = 1;
    }
  } while( true );
}

/* ref: FUN_00583a30 */
uint F_00583a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != piVar2) {
    while (param_1 != *piVar3) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar2) {
        return (uint)piVar2;
      }
    }
    piVar2 = (int *)F_00c46e20(piVar3,piVar3 + 1,((int)piVar2 - (int)(piVar3 + 1) >> 2) * 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) * 4,400);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      piVar2 = (int *)F_00406ad0(param_1);
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00583ab0 */
uint F_00583ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * this_00;
  byte bVar6;
  undefined4 * this_01;
  int iVar7;
  
  if (*(int *)((int)this + 4) == 0) {
    piVar2 = (int *)F_00404270();
    pvVar3 = (undefined *)F_00406bd0(0x980,0,piVar2,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)F_005cc9f0(pvVar3);
    }
    *(undefined * PTR32 *)((int)this + 0x24) = pvVar3;
    F_00558c30(pvVar3,this);
    *(ushort *)((int)this + 8) = (ushort)param_1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)(ushort)param_1 * 0x74,0x10)));
    *(undefined * PTR32 *)((int)this + 4) = pvVar3;
    F_00c48350(pvVar3,0,(uint)*(ushort *)((int)this + 8) * 0x74);
    puVar4 = (undefined4 *)F_00406c00(0x7e4,0,piVar2,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 6;
      puVar4 = puVar4 + 1;
      param_1 = 5;
      this_01 = puVar4;
      do {
        F_0057e5a0(this_01);
        this_01 = this_01 + 0x54;
        param_1 = param_1 + -1;
      } while (-1 < param_1);
    }
    *(undefined4 * PTR32 *)this = puVar4;
    iVar7 = 0;
    do {
      F_00557cf0((undefined *)(*(int *)this + iVar7),param_2,this,*(undefined4 *)((int)this + 0x24));
      iVar7 = iVar7 + 0x150;
    } while (iVar7 < 0x7e0);
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x1c,0x10)));
    *(undefined4 * PTR32 *)((int)this + 0xc) = puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    uVar1 = REFG(undefined4, 0x1306878);
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,REFG(undefined4, 0x1306878),0x10);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xdc,0x10)));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x14,0x10)));
    if (pvVar3 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_00405b40(pvVar3,uVar5,uVar1,0,0,0,0,0);
    }
    *(uint *)((int)this + 0x10) = uVar5;
    if (this_00 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_004050c0(this_00,uVar5,0,0x10);
    }
    *(uint *)((int)this + 0x14) = uVar5;
    *(undefined4 *)((int)this + 0x20) = param_3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0xf0,0x10)));
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar3;
    F_00c48350(pvVar3,0,0xf0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0x2000,0x10)));
    *(undefined * PTR32 *)((int)this + 0x2c) = pvVar3;
    F_00c48350(pvVar3,0,0x2000);
    piVar2 = &REFG(undefined4, 0x10a1728);
    bVar6 = 0;
    do {
      iVar7 = piVar2[1];
      if (bVar6 < 0x1e) {
        *((int *)GEN_TOP(((uint)bVar6 * 8 + *(int *)((int)this + 0x28)))) = *piVar2;
        *((int *)GEN_TOP(((uint)bVar6 * 8 + 4 + *(int *)((int)this + 0x28)))) = iVar7;
      }
      piVar2 = piVar2 + 2;
      bVar6 = bVar6 + 1;
    } while (*piVar2 != 0);
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00583cc0 */
uint F_00583cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x583cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  short sVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar1 = param_1 * 0x150 + 100 + *(int *)this;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x1c);
  sVar2 = (short)param_4;
  if ((short)param_4 == 0) {
    sVar2 = -1;
  }
  (*(short *)(gen_frame + 0x8)) = sVar2;
  (*(undefined1 *)(gen_frame + 0xc)) = (char)param_1;
  (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0xf)) = 0xffff;
  (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0xd)) = (char)(int)*(float *)(iVar1 + 4);
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_3,REFG(undefined4, 0x108cc50));
  F_00580530(*(undefined * PTR32 *)((int)this + 0x18),param_2,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),1);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar3;
}

/* ref: FUN_00583d70 */
uint F_00583d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    uVar2 = param_2;
    if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
      uVar2 = param_2 | 0x100;
    }
    if ((*(uint *)(param_1 + 0x10) != uVar2) || (*(int *)(param_1 + 0x24) != param_3)) {
      *(uint *)(param_1 + 0x10) = uVar2;
      *(int *)(param_1 + 0x24) = param_3;
      uVar1 = F_00577690(param_1 + 0x14,uVar2,param_3);
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf3 */
uint F_00583dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pAVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  local_8 = 0;
  local_c = 0;
  uVar2 = 0;
  if (this[0x16e] != (undefined1)0x0) {
    iVar3 = *(int *)(this + 0x174);
    pAVar1 = this + 0x174;
    if (iVar3 != 0) {
      local_8 = *(undefined4 *)(iVar3 + 0x14);
      local_c = *(undefined4 *)(iVar3 + 0x20);
      uVar6 = *(undefined4 *)(iVar3 + 0x10);
      uVar2 = *(undefined2 *)(iVar3 + 0x1e);
      *(int *)(iVar3 + 8) = (int)*(float *)(this + 0x158);
      *(int *)(*(int *)pAVar1 + 0xc) =
           (int)((float10)*(float *)(this + 0x15c) + (float10)*(float *)(this + 0x148));
      F_005cd7d0(*(undefined * PTR32 *)(this + 0x170),pAVar1);
      *(int *)pAVar1 = 0;
    }
  }
  uVar4 = F_005585d0((undefined *)this,param_1);
  *(short *)(this + 0x16c) = *(short *)(this + 0x16c) + 1;
  if (this[0x16e] != (undefined1)0x0) {
    uVar4 = F_00404270();
    piVar5 = (int *)F_00406bd0(0x30,0,uVar4,0);
    *(int * PTR32 *)(this + 0x174) = piVar5;
    *piVar5 = (int)*(float *)(this + 0x158);
    *((int *)GEN_TOP((*(int *)(this + 0x174) + 4))) = (int)*(float *)(this + 0x15c);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x10))) = uVar6;
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x14))) = local_8;
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x18))) = *(undefined2 *)(this + 0x168);
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x1a))) = *(undefined2 *)(this + 0x16c);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x174) + 0x20))) = local_c;
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x174) + 0x1e))) = uVar2;
    uVar4 = *(uint *)(this + 0x174);
    *(undefined4 *)(uVar4 + 0x2c) = *(undefined4 *)(this + 0x34);
  }
  return uVar4;
}

/* ref: FUN_00583f00 */
uint F_00583f00(unsigned int gen_a0)
{
  GEN_ENTER(0x583f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
    F_005691b0(*(undefined * PTR32 *)((int)this + 0xbc));
  }
  F_00583ab0((undefined *)((int)this + 0xec),0x1e,(int)this + 0xbc,(int)this + 0x124);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,1,0);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf23 */
uint F_00583f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x583f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_0057f810(*(undefined * PTR32 *)(this + 0x130),param_1);
    if (uVar1 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x28))))
                        (*(int * PTR32 *)(this + 0x130),uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf26 */
byte F_00583f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_00580050(*(undefined * PTR32 *)(this + 0x130),param_1);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf27 */
byte F_00583fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x583fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_005800f0(*(undefined * PTR32 *)(this + 0x130),param_1);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf28 */
byte F_00583fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x583fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_00580170(*(undefined * PTR32 *)(this + 0x130),param_1,param_2);
  return bVar1;
}

/* ref: Component::GUI2::AtkModule::vf47 */
unsigned int F_00584000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((*(int *)&gen_args[1]) != 0) {
    F_005c6630((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_005c9de0((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00584040 */
uint F_00584040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4),0x22,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_00584060 */
uint F_00584060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4),0x11,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_00584080 */
uint F_00584080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005cf050(*(undefined * PTR32 *)((int)this + 4),0x10,param_1,(int)this + 0x14);
  return uVar1;
}

/* ref: FUN_005840a0 */
uint F_005840a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5840a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0)) {
    uVar1 = F_00583770(*(undefined * PTR32 *)((int)this + 0x80),param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_005840c0 */
unsigned int F_005840c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5840c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00584110 */
uint F_00584110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  short sVar1;
  char * pcVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  pcVar2 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  (*(char * PTR32 *)(gen_frame + 0x78)) = pcVar2;
  if (this == (undefined *)0x0) goto LAB_0058428c;
  this_00 = (undefined *)((int)this + 0x9c);
  (*(bool *)(gen_frame + 0x23)) = **(char * PTR32 *)((int)this + 0x9c) == '\0';
  if (param_1 == (char *)0x0) {
    pcVar2 = "";
LAB_0058423c: ;
    F_0042e430(this_00,pcVar2);
  }
  else if ((*(byte *)((int)this + 0xfe) & 0x40) == 0) {
    pcVar2 = param_1;
    if ((*(byte *)((int)this + 0xff) & 4) == 0) goto LAB_0058423c;
    sVar1 = *(short *)((int)this + 0x7c) + -5;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    if (sVar1 == 0) {
      sVar1 = -1;
    }
    (*(byte *)(gen_frame + 0x14)) = *(byte *)((int)this + 0xfc) >> 4;
    (*(short *)(gen_frame + 0x10)) = sVar1;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x15)) = *(undefined1 *)((int)this + 0xfd);
    (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x16)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x1a)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)),param_1,REFG(undefined4, 0x108cc50));
    F_00580670((*(undefined * PTR32 *)(gen_frame + 0x1c)),this_00,((undefined1 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  }
  else {
    F_0042aca0(this_00);
    pvVar3 = (undefined *)F_005684e0(this,0);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar3;
    F_00583cc0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 8),(uint)(*(byte *)((int)this + 0xfc) >> 4),this_00,
                 param_1,(uint)*(ushort *)((int)this + 0x7c));
    puVar6 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xa8);
    puVar7 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 100);
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  uVar4 = F_0042a990((int)this + 0x9c);
  *(uint *)((int)this + 0xf0) = uVar4;
  pcVar2 = *(char * PTR32 *)((int)this + 0x9c);
  if (*pcVar2 == '\0') {
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) & 0xffefffff;
  }
  else if ((*(bool *)(gen_frame + 0x23)) != false) {
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) | 0x100000;
  }
  if ((*(byte *)((int)this + 0xfe) & 1) != 0) {
    pcVar2 = (char *)F_00578070(this);
  }
LAB_0058428c: ;
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)pcVar2;
}

/* ref: FUN_005842a0 */
unsigned int F_005842a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5842a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this != (undefined *)0x0) {
    uVar1 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),param_1,
                         (uint)*(byte *)((int)this + 0x114));
    F_00584110(this,uVar1);
  }
  return 0;
}

/* ref: FUN_005842e0 */
byte F_005842e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5842e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this_00;
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (param_1 != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    F_0042b630(((undefined1 *)(gen_frame + 0x64)));
    if (this == (undefined *)0x0) {
      sVar2 = 0;
      uVar4 = 0;
    }
    else {
      sVar2 = *(short *)((int)this + 0x7c);
      uVar4 = *(undefined1 *)((int)this + 0xfd);
    }
    sVar2 = sVar2 + -5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(byte *)(gen_frame + 0x8)) = *(byte *)((int)this + 0xfc) >> 4;
    (*(short *)(gen_frame + 0x4)) = sVar2;
    (*(undefined1 *)(gen_frame + 0xc)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x9)) = uVar4;
    (*(undefined2 *)(gen_frame + 0x6)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0xa)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0xe)) = (undefined2)param_2;
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)),param_1,REFG(undefined4, 0x108cc50));
    bVar1 = F_00580670(this_00,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)));
    F_00584110(this,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return bVar1 == 0;
  }
  F_0042e430((undefined *)((int)this + 0x9c),"");
  uVar3 = F_0042a990((int)this + 0x9c);
  *(uint *)((int)this + 0xf0) = uVar3;
  *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) & 0xffefffff;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00584440 */
byte F_00584440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if (param_1 != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    if ((*(uint *)&REFG(undefined, 0x1379b5c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1379b5c) = *(uint *)&REFG(undefined, 0x1379b5c) | 1;
      F_0042b630(&REFG(undefined, 0x1379b08));
      F_00c47de6(((code *)REFP(0x107be10)));
    }
    if (this == (undefined *)0x0) {
      sVar2 = 0;
      uVar3 = 0;
    }
    else {
      sVar2 = *(short *)((int)this + 0x7c);
      uVar3 = *(undefined1 *)((int)this + 0xfd);
    }
    sVar2 = sVar2 + -5;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(byte *)(gen_frame + 0xc)) = *(byte *)((int)this + 0xfc) >> 4;
    (*(short *)(gen_frame + 0x8)) = sVar2;
    (*(undefined1 *)(gen_frame + 0x10)) = 0xff;
    (*(undefined1 *)(gen_frame + 0xd)) = uVar3;
    (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0xe)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_1,REFG(undefined4, 0x108cc50));
    bVar1 = F_00580670(this_00,&REFG(undefined, 0x1379b08),((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return bVar1 == 0;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00584550 */
uint F_00584550(unsigned int gen_a0)
{
  GEN_ENTER(0x584550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  ushort uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *(undefined4 *)((int)this + 0xf0);
  this_00 = (undefined *)F_005684e0(this,1);
  uVar2 = F_00576af0(this_00,uVar1);
  puVar4 = (undefined4 *)((int)this_00 + 0xa8);
  puVar5 = (undefined4 *)((int)this_00 + 100);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar2 + 1;
}

/* ref: FUN_00584580 */
uint F_00584580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int in_ecx;
  byte bVar1;
  undefined * this_00;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  if (((byte)param_1 != 0) &&
     (*(byte *)((int)this + 0xfe) = *(byte *)((int)this + 0xfe) | 0x80,
     *(char *)((int)this + 0x116) == '\0')) {
    cVar2 = *(char *)((int)this + 0xfd) + '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
    *(char *)((int)this + 0x116) = cVar2;
  }
  if (this != (undefined *)0x0) {
    bVar1 = *(byte *)((int)this + 0xfe);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if (((bVar1 >> 6 & 1) != (byte)param_1) &&
       (*(byte *)((int)this + 0xfe) = ((byte)param_1 << 6 ^ bVar1) & 0x40 ^ bVar1,
       (byte)param_1 != 0)) {
      in_ecx = (int)this + 0x9c;
      F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),in_ecx);
      F_0042aca0(in_ecx);
      uVar3 = F_005684e0(this,1);
      this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 8);
      uVar4 = (uint)*(ushort *)((int)this + 0x7c);
      uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      F_00583cc0(this_00,(uint)(*(byte *)((int)this + 0xfc) >> 4),in_ecx,uVar5,uVar4);
      puVar7 = (undefined4 *)(uVar3 + 0xa8);
      puVar8 = (undefined4 *)(uVar3 + 100);
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar3 = F_0042a990(in_ecx);
      *(uint *)((int)this + 0xf0) = uVar3;
      uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = (uint)uVar9;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_005848c0 */
unsigned int F_005848c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5848c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  
  if (this != (undefined *)0x0) {
    if (((char)param_1 != '\0') && (*(int *)((int)this + 0xf8) == 0)) {
      uVar10 = 0;
      uVar5 = F_00404270();
      pvVar6 = (undefined *)F_00406bd0(0xc,0,uVar5,uVar10);
      if (pvVar6 == (undefined *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = F_005c8db0(pvVar6);
      }
      *(uint *)((int)this + 0xf8) = uVar5;
    }
    *(byte *)((int)this + 0xff) =
         *(byte *)((int)this + 0xff) ^ ((char)param_1 * '\x02' ^ *(byte *)((int)this + 0xff)) & 2;
    if (*(int * PTR32 *)((int)this + 0xf8) != (int *)0x0) {
      piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xf8)));
      piVar4 = (int *)*piVar1;
      while (piVar4 != piVar1) {
        piVar2 = *(int * PTR32 *)((int)this + 0xf8);
        iVar7 = piVar4[2];
        piVar3 = (int *)*piVar4;
        if (piVar4 != (int *)*piVar2) {
          *(int * PTR32 *)piVar4[1] = piVar3;
          *(int *)(*piVar4 + 4) = piVar4[1];
          F_00429760(piVar4,0xc,400);
          piVar2 = piVar2 + 1;
          *piVar2 = *piVar2 + -1;
        }
        piVar4 = piVar3;
        if (iVar7 != 0) {
          F_00406ad0(iVar7);
        }
      }
      F_005c4820(*(undefined * PTR32 *)((int)this + 0xf8));
    }
    if (((*(byte *)((int)this + 0xff) & 2) != 0) && (*(int *)((int)this + 0xf8) != 0)) {
      *(undefined2 *)((int)this + 0x118) = 0xffff;
      pvVar6 = (undefined *)F_005684e0(this,1);
      if (pvVar6 != (undefined *)0x0) {
        F_00577400(pvVar6,*(undefined4 *)((int)this + 0xf0),*(undefined4 *)((int)this + 0xf8));
        puVar8 = (undefined4 *)((int)pvVar6 + 0xa8);
        puVar9 = (undefined4 *)((int)pvVar6 + 100);
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf4 */
uint F_005849f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5849f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (*(int *)&gen_args[1]);
  bVar2 = *(byte *)((*(int *)&gen_args[1]) + 0x93);
  (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x8c) + 8))) +
                    (uint)*(ushort *)((*(int *)&gen_args[1]) + 0x90) * 0xc)));
  F_005ba3d0(&(*(int *)&gen_args[1]),&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),(*(int *)&gen_args[1]),(uint)(bVar2 >> 4 & 7),
               (uint)*(byte *)((*(int *)&gen_args[1]) + 0x92));
  iVar5 = (*(int *)(gen_frame + 0x8));
  if ((bVar2 & 4) == 0) {
    iVar6 = 2;
    if ((bVar2 & 8) == 0) {
      iVar6 = (*(int *)&gen_args[1]);
    }
  }
  else {
    iVar6 = 1;
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x74))) = iVar6;
  iVar6 = *(int *)((*(int *)(gen_frame + 0x8)) + 8);
  if (iVar6 == 0) {
    if (*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0xfc)));
      goto LAB_00584a9a;
    }
  }
  else if (iVar6 == 1) {
    if (*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0x18)));
      goto LAB_00584a9a;
    }
  }
  else if (iVar6 == 2) {
    iVar6 = *(int *)((*(int *)(gen_frame + 0x8)) + 0xc);
    goto LAB_00584a9a;
  }
  iVar6 = 0;
LAB_00584a9a: ;
  iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(int *)(iVar3 + 0x10) != (*(int *)(gen_frame + 0x4))) || (*(int *)(iVar3 + 0x24) != iVar6)) {
    *(int *)(iVar3 + 0x10) = (*(int *)(gen_frame + 0x4));
    *(int *)(iVar3 + 0x24) = iVar6;
    F_00577690(iVar3 + 0x14,(*(int *)(gen_frame + 0x4)),iVar6);
  }
  if ((*(uint *)(iVar4 + 0x84) & 0x40000000) == 0) {
    uVar7 = (uint)(ushort)((*((short *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x2c))) -
                           ((ushort)((uint)*(undefined4 *)(iVar4 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar7 < 0xffff) {
      uVar7 = 0xffff - uVar7;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = F_005596f0(*(float *)(iVar4 + 0x60));
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x70))) = uVar7;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0x0));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0xa4)));
  *pbVar1 = *pbVar1 & 0xfe;
  uVar8 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))),0x22,4,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14);
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = F_00571010(uVar8,iVar4,iVar5,1,0);
  }
  return uVar7;
}

/* ref: FUN_00584b60 */
uint F_00584b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x584b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  byte * pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  short * psVar14;
  short * psVar15;
  
  (*(uint *)(gen_frame + 0x1ac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1b0);
  F_00568720(((undefined1 *)(gen_frame + 0x138)),param_1);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  (*(uint *)(gen_frame + 0x20)) = (uint)*(uint3 *)(param_1 + 0x6e);
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(param_1 + 0x6c);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar9 = *(byte *)(param_1 + 0x9c) | 0x12000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
  }
  else {
    uVar9 = *(byte *)(param_1 + 0x9c) | 74000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
  }
  iVar10 = uVar9 << 4;
  if ((*(uint *)&REFG(undefined, 0x1379ba8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379ba8) = *(uint *)&REFG(undefined, 0x1379ba8) | 1;
    REFG(float, 0x1379b60) = REFG(float, 0x1087f04);
    REFG(float, 0x1379b64) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b68) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b6c) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b70) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b74) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b78) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b7c) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b80) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b84) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b88) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b8c) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b90) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b94) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b98) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379b9c) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379ba0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379ba4) = REFG(float, 0x1087f04);
  }
  F_005689b0(&REFG(float, 0x1379b60),param_1,(uint)((undefined1 *)(gen_frame + 0x138)));
  F_00568ac0((uint)((undefined4 *)(gen_frame + 0x30)),&REFG(float, 0x1379b60),((undefined1 *)(gen_frame + 0x138)),param_1,1);
  iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + *(int *)(param_1 + 0x90) * 0xc)));
  iVar12 = 0;
  if (iVar7 != 0) {
    iVar12 = *(int *)(iVar7 + 8);
    if (iVar12 == 0) {
      if (*(int *)(iVar7 + 0xc) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xfc)));
        goto LAB_00584d44;
      }
    }
    else if (iVar12 == 1) {
      if (*(int *)(iVar7 + 0xc) != 0) {
        iVar12 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0x18)));
        goto LAB_00584d44;
      }
    }
    else if (iVar12 == 2) {
      iVar12 = *(int *)(iVar7 + 0xc);
      goto LAB_00584d44;
    }
    iVar12 = 0;
  }
LAB_00584d44: ;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x74))) = 0;
  iVar7 = *(int *)((int)this + 4);
  if ((*(int *)(iVar7 + 0x10) != iVar10) || (*(int *)(iVar7 + 0x24) != iVar12)) {
    *(int *)(iVar7 + 0x10) = iVar10;
    *(int *)(iVar7 + 0x24) = iVar12;
    F_00577690(iVar7 + 0x14,iVar10,iVar12);
  }
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar9 = (uint)(ushort)((*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))) -
                           ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar9 < 0xffff) {
      uVar9 = 0xffff - uVar9;
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = F_005596f0(*(float *)(param_1 + 0x60));
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x70))) = uVar9;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0x28));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xa4)));
  *pbVar1 = *pbVar1 & 0xfe;
  uVar11 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))),0x22,0x24,
                        *(int *)((int)this + 4) + 0x14);
  uVar9 = 0;
  if (uVar11 != 0) {
    bVar3 = *(byte *)(param_1 + 0xa0);
    psVar14 = ((short *)(gen_frame + 0x13c));
    (*(byte * PTR32 *)(gen_frame + 0x0)) = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + 1)));
    (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)&REFG(float, 0x1379b60);
    (*(int *)(gen_frame + 0x4)) = 9;
    psVar15 = (short *)(uVar11 + 0x32);
    do {
      sVar5 = *psVar14;
      (*(short *)(gen_frame + 0x2c)) = psVar14[2] + sVar5;
      sVar6 = psVar14[1];
      sVar13 = psVar14[3] + sVar6;
      if ((bVar3 & 2) == 2) {
        (*(short *)(gen_frame + 0x2c)) = (short)(int)((float10)(int)(*(short *)(gen_frame + 0x2c)) * (float10)*(*(float * PTR32 *)(gen_frame + 0xc)));
        sVar13 = (short)(int)((float10)(int)sVar13 * (float10)(*(float * PTR32 *)(gen_frame + 0xc))[1]);
      }
      psVar15[-0x11] = sVar5;
      psVar15[-0x10] = sVar6;
      *psVar15 = sVar13;
      psVar15[-1] = sVar5;
      psVar15[0x10] = sVar13;
      psVar15[0xf] = (*(short *)(gen_frame + 0x2c));
      psVar15[0x1f] = (*(short *)(gen_frame + 0x2c));
      psVar15[0x20] = sVar6;
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[-1];
      *(undefined4 *)(psVar15 + -0x15) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + -0x19) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + -0x17) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + -0x13) = *(undefined4 *)(param_1 + 100);
      *(uint *)(psVar15 + -0xb) = (*(uint *)(gen_frame + 0x1c));
      *(undefined4 *)(psVar15 + -0xd) = uVar8;
      *(uint *)(psVar15 + -0xf) = (*(uint *)(gen_frame + 0x20));
      bVar4 = *(*(byte * PTR32 *)(gen_frame + 0x0));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + -9) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + -7) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + -5) = uVar2;
      *(undefined4 *)(psVar15 + -3) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 3) = uVar8;
      *(uint *)(psVar15 + 5) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 1) = (*(uint *)(gen_frame + 0x20));
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[1];
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + 7) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + 9) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + 0xb) = uVar2;
      *(undefined4 *)(psVar15 + 0xd) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 0x13) = uVar8;
      *(uint *)(psVar15 + 0x15) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 0x11) = (*(uint *)(gen_frame + 0x20));
      bVar4 = (*(byte * PTR32 *)(gen_frame + 0x0))[2];
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(psVar15 + 0x17) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4)];
      *(undefined4 *)(psVar15 + 0x19) = ((undefined4 *)(gen_frame + 0x30))[(int)((uint)bVar4 * 4 + 1)];
      *(undefined4 *)(psVar15 + 0x1b) = uVar2;
      *(undefined4 *)(psVar15 + 0x1d) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(psVar15 + 0x23) = uVar8;
      *(uint *)(psVar15 + 0x25) = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(psVar15 + 0x21) = (*(uint *)(gen_frame + 0x20));
      psVar14 = psVar14 + 6;
      (*(float * PTR32 *)(gen_frame + 0xc)) = (*(float * PTR32 *)(gen_frame + 0xc)) + 2;
      (*(byte * PTR32 *)(gen_frame + 0x0)) = (*(byte * PTR32 *)(gen_frame + 0x0)) + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      uVar9 = (*(uint *)(gen_frame + 0x20));
      psVar15 = psVar15 + 0x40;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1ac)) ^ (uint)(uint)(gen_frame + 0x1b0));
  return uVar9;
}

/* ref: FUN_005850a0 */
uint F_005850a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5850a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte * pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined * this_00;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 * puVar12;
  short sVar13;
  short * psVar14;
  short sVar15;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  uVar11 = *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + *(int *)(param_1 + 0x90) * 0xc;
  uVar9 = *(undefined4 *)(param_1 + 0x68);
  (*(uint *)(gen_frame + 0x24)) = (uint)*(ushort *)(param_1 + 0x6c);
  (*(uint *)(gen_frame + 0x28)) = (uint)*(uint3 *)(param_1 + 0x6e);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar10 = *(byte *)(param_1 + 0x9c) | 0x12000;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
  }
  else {
    uVar10 = *(byte *)(param_1 + 0x9c) | 74000;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
  }
  (*(uint *)(gen_frame + 0x38)) = uVar10 << 4;
  if ((*(uint *)&REFG(undefined, 0x1379bf8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379bf8) = *(uint *)&REFG(undefined, 0x1379bf8) | 1;
    *(undefined4 *)&REFG(undefined, 0x1379bb0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bb4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bb8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bbc) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bc0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bc4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bc8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bcc) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bd0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bd4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bd8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bdc) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379be0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379be4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379be8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bec) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bf0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1379bf4) = REFG(float, 0x1087f04);
  }
  F_005689b0(&REFG(undefined, 0x1379bb0),param_1,uVar11);
  F_00568ac0((uint)((undefined4 *)(gen_frame + 0x40)),&REFG(undefined, 0x1379bb0),uVar11,param_1,1);
  if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
    uVar10 = (uint)(ushort)((*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))) -
                            ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1)) * 0x40);
    if (uVar10 < 0xffff) {
      (*(uint *)(gen_frame + 0x14)) = 0xffff - uVar10;
    }
    else {
      (*(uint *)(gen_frame + 0x14)) = 0;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x14)) = F_005596f0(*(float *)(param_1 + 0x60));
  }
  bVar3 = *(byte *)(param_1 + 0xa0);
  psVar14 = (short *)(uVar11 + 4);
  (*(uint *)(gen_frame + 0x30)) = 0;
  do {
    iVar7 = *(int *)(psVar14 + -2);
    (*(int *)(gen_frame + 0x2c)) = 0;
    if (iVar7 != 0) {
      iVar8 = *(int *)(iVar7 + 8);
      if (iVar8 == 0) {
        if (*(int *)(iVar7 + 0xc) == 0) goto LAB_0058533d;
        (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xfc)));
      }
      else if (iVar8 == 1) {
        if (*(int *)(iVar7 + 0xc) == 0) goto LAB_0058533d;
        (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0x18)));
      }
      else if (iVar8 == 2) {
        (*(int *)(gen_frame + 0x2c)) = *(int *)(iVar7 + 0xc);
      }
      else {
LAB_0058533d: ;
        (*(int *)(gen_frame + 0x2c)) = 0;
      }
    }
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x30)))) {
    case 0: ;
    case 2: ;
    case 6: ;
    case 8: ;
      uVar10 = (*(uint *)(param_1 + 0x84) >> 0x1e | 6) << 0xc;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff6fff;
      break;
    case 1: ;
    case 7: ;
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(param_1 + 0x84) >> 0x1e & 1) << 0xd | (*(uint *)(gen_frame + 0x38)) & 0xffff9fff | 0x9000;
      goto LAB_005853e2;
    case 3: ;
    case 5: ;
      uVar10 = (*(uint *)(param_1 + 0x84) >> 0x1e & 1 | 4) << 0xd;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff8fff;
      break;
    default: ;
      uVar10 = (-(uint)((*(uint *)(param_1 + 0x84) & 0x40000000) != 0) & 0x1100) + 0x120000;
      uVar11 = (*(uint *)(gen_frame + 0x38)) & 0xffff0fff;
    }
    (*(uint *)(gen_frame + 0x38)) = uVar10 | uVar11;
LAB_005853e2: ;
    sVar5 = *psVar14;
    sVar15 = psVar14[2] + sVar5;
    sVar6 = psVar14[1];
    uVar2 = *(undefined4 *)psVar14;
    sVar13 = psVar14[3] + sVar6;
    if ((bVar3 & 2) == 2) {
      sVar15 = (short)(int)((float10)(int)sVar15 *
                           (float10)*(float *)(&REFG(undefined, 0x1379bb0) + (*(uint *)(gen_frame + 0x30)) * 8));
      sVar13 = (short)(int)((float10)(int)sVar13 *
                           (float10)*(float *)(&REFG(undefined, 0x1379bb4) + (*(uint *)(gen_frame + 0x30)) * 8));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x154)) + 0)) = sVar15;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = sVar15;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14c)) + 2)) = sVar6;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 2)) = sVar6;
    (*(undefined4 *)(gen_frame + 0x158)) = CONCAT22(sVar6,sVar15);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x150)) + 2)) = sVar13;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x154)) + 2)) = sVar13;
    (*(undefined4 *)(gen_frame + 0x154)) = CONCAT22(sVar13,sVar15);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x74))) = 0;
    iVar7 = *(int *)((int)this + 4);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14c)) + 0)) = sVar5;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x150)) + 0)) = sVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = CONCAT22(sVar13,sVar5);
    (*(undefined4 *)(gen_frame + 0x14c)) = uVar2;
    if ((*(uint *)(iVar7 + 0x10) != (*(uint *)(gen_frame + 0x38))) || (*(int *)(iVar7 + 0x24) != (*(int *)(gen_frame + 0x2c)))) {
      *(uint *)(iVar7 + 0x10) = (*(uint *)(gen_frame + 0x38));
      *(int *)(iVar7 + 0x24) = (*(int *)(gen_frame + 0x2c));
      F_00577690(iVar7 + 0x14,(*(uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x2c)));
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x70))) = (*(uint *)(gen_frame + 0x14));
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x78))) = (*(undefined4 *)(gen_frame + 0xc));
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xa4)));
    *pbVar1 = *pbVar1 & 0xfe;
    iVar7 = *(int *)((int)this + 4) + 0x14;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    if (*(int *)((int)this_00 + 0x74) == 1) {
      uVar11 = F_005bfe10(this_00,0x22,0x50,1);
      puVar12 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar12 = (undefined4 *)F_005c83b0(this_00,uVar11,0x22,4,iVar7);
        *(undefined4 *)(uVar11 + 0x3c) = 1;
        *(undefined4 *)(uVar11 + 0x24) = *(undefined4 *)((int)this_00 + 0x7c);
        *(uint *)(uVar11 + 0x30) = *(uint *)((int)this_00 + 0x88) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x40) = *(undefined4 *)((int)this_00 + 0x94);
        *(undefined4 *)(uVar11 + 0x44) = *(undefined4 *)((int)this_00 + 0x98);
        *(undefined4 *)(uVar11 + 0x48) = *(undefined4 *)((int)this_00 + 0x9c);
        *(undefined4 *)(uVar11 + 0x4c) = *(undefined4 *)((int)this_00 + 0xa0);
      }
    }
    else if (*(int *)((int)this_00 + 0x74) == 2) {
      uVar11 = F_005bfe10(this_00,0x22,0x50,1);
      if (uVar11 == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12 = (undefined4 *)F_005c83b0(this_00,uVar11,0x22,4,iVar7);
        *(undefined4 *)(uVar11 + 0x3c) = 2;
        *(undefined4 *)(uVar11 + 0x24) = *(undefined4 *)((int)this_00 + 0x7c);
        *(uint *)(uVar11 + 0x30) = *(uint *)((int)this_00 + 0x88) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x28) = *(undefined4 *)((int)this_00 + 0x80);
        *(uint *)(uVar11 + 0x34) = *(uint *)((int)this_00 + 0x8c) & 0xfffffff;
        *(undefined4 *)(uVar11 + 0x40) = *(undefined4 *)((int)this_00 + 0x94);
        *(undefined4 *)(uVar11 + 0x44) = *(undefined4 *)((int)this_00 + 0x98);
        *(undefined4 *)(uVar11 + 0x48) = *(undefined4 *)((int)this_00 + 0x9c);
        *(undefined4 *)(uVar11 + 0x4c) = *(undefined4 *)((int)this_00 + 0xa0);
      }
    }
    else {
      uVar11 = F_005bfe10(this_00,0x22,0x24,0);
      puVar12 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar12 = (undefined4 *)F_005c83b0(this_00,uVar11,0x22,4,iVar7);
      }
    }
    if (puVar12 != (undefined4 *)0x0) {
      bVar4 = *((byte *)GEN_TOP(((*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)))));
      puVar12[2] = *(undefined4 *)(param_1 + 0x60);
      *puVar12 = ((undefined4 *)(gen_frame + 0x40))[(int)((uint)bVar4 * 4)];
      puVar12[1] = ((undefined4 *)(gen_frame + 0x40))[(int)((uint)bVar4 * 4 + 1)];
      puVar12[3] = *(undefined4 *)(param_1 + 100);
      puVar12[4] = (*(undefined4 *)(gen_frame + 0x14c));
      puVar12[6] = uVar9;
      puVar12[7] = (*(uint *)(gen_frame + 0x24));
      puVar12[5] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 1)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[8] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[9] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[10] = uVar2;
      puVar12[0xb] = *(undefined4 *)(param_1 + 100);
      puVar12[0xc] = (*(undefined4 *)(gen_frame + 0x150));
      puVar12[0xe] = uVar9;
      puVar12[0xf] = (*(uint *)(gen_frame + 0x24));
      puVar12[0xd] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 2)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[0x10] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[0x11] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[0x12] = uVar2;
      puVar12[0x13] = *(undefined4 *)(param_1 + 100);
      puVar12[0x14] = (*(undefined4 *)(gen_frame + 0x154));
      puVar12[0x16] = uVar9;
      puVar12[0x17] = (*(uint *)(gen_frame + 0x24));
      puVar12[0x15] = (*(uint *)(gen_frame + 0x28));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 (*)[1])REFP(0x109fa2c)) + (*(uint *)(gen_frame + 0x30)) * 4 + 3)));
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      puVar12[0x18] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4)];
      puVar12[0x19] = ((undefined4 *)(gen_frame + 0x40))[(int)(uVar11 * 4 + 1)];
      puVar12[0x1a] = uVar2;
      puVar12[0x1b] = *(undefined4 *)(param_1 + 100);
      puVar12[0x1c] = (*(undefined4 *)(gen_frame + 0x158));
      puVar12[0x1e] = uVar9;
      puVar12[0x1f] = (*(uint *)(gen_frame + 0x24));
      puVar12[0x1d] = (*(uint *)(gen_frame + 0x28));
    }
    psVar14 = psVar14 + 6;
    (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) + 1;
    if (8 < (*(uint *)(gen_frame + 0x30))) {
      F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
      return (uint)puVar12;
    }
  } while( true );
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf4 */
uint F_005857e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5857e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  byte * pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 in_EAX = 0;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char * pcVar10;
  int iVar11;
  int local_8;
  
  iVar5 = param_1;
  pcVar10 = *(char * PTR32 *)(param_1 + 0xf4);
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),*pcVar10);
  local_8 = 0;
  if (*pcVar10 != '\0') {
    iVar3 = *(int *)(param_1 + 0x90) * 0xc;
    do {
      if ((((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) + iVar3 != 0) &&
           (cVar6 = (char)uVar7, '\x1f' < cVar6)) && (cVar6 < '@')) &&
         (((cVar6 == ' ' || (cVar6 == ',')) || ((cVar6 == '.' || (('/' < cVar6 && (cVar6 < ':'))))))
         )) {
        local_8 = local_8 + 1;
      }
      pcVar1 = pcVar10 + 1;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),*pcVar1);
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (local_8 != 0) {
      iVar3 = *((int *)GEN_TOP((iVar3 + *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))))));
      if ((*(uint *)(param_1 + 0x84) & 0x40000000) == 0) {
        iVar11 = 0x120000;
        param_1 = 0;
      }
      else {
        iVar11 = 0x121100;
        param_1 = 0x10;
      }
      iVar9 = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x74))) = 0;
      iVar4 = *(int *)(iVar3 + 8);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0xc) != 0) {
          iVar9 = *((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xfc)));
        }
      }
      else if (iVar4 == 1) {
        if (*(int *)(iVar3 + 0xc) != 0) {
          iVar9 = *((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0x18)));
        }
      }
      else if (iVar4 == 2) {
        iVar9 = *(int *)(iVar3 + 0xc);
      }
      iVar4 = *(int *)(this + 4);
      if ((*(int *)(iVar4 + 0x10) != iVar11) || (*(int *)(iVar4 + 0x24) != iVar9)) {
        *(int *)(iVar4 + 0x10) = iVar11;
        *(int *)(iVar4 + 0x24) = iVar9;
        F_00577690(iVar4 + 0x14,iVar11,iVar9);
      }
      uVar7 = F_005c0920(iVar5,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x70))) = uVar7;
      *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0x78))) = param_1;
      pbVar2 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 4))) + 0xa4)));
      *pbVar2 = *pbVar2 & 0xfe;
      uVar8 = F_005cf050(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 4) + 4))),0x22,local_8 * 4,
                           *(int *)(this + 4) + 0x14);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00568df0(this,uVar8,iVar5,iVar3);
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00585950 */
uint F_00585950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x585950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar4 = *(int *)(iVar3 + 0x1a8);
  F_00572240(this,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00572550(this,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar8 = *(int *)((int)this + 0x23c) << 0x1b | *(uint *)(iVar4 + 8) & 0x7ffffff;
  *(uint *)(iVar4 + 8) = uVar8;
  uVar8 = (*(int *)((int)this + 0x240) << 0x17 ^ uVar8) & 0x7800000 ^ uVar8;
  *(uint *)(iVar4 + 8) = uVar8;
  uVar8 = (*(int *)((int)this + 0x244) << 0x13 ^ uVar8) & 0x780000 ^ uVar8;
  *(uint *)(iVar4 + 8) = uVar8;
  *(uint *)(iVar4 + 8) = (*(uint *)((int)this + 0x248) ^ uVar8) & 0x7ffff ^ uVar8;
  iVar5 = *(int *)((int)this + 0x250);
  uVar6 = *(undefined4 *)((int)this + 0x24c);
  *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar4 + 0x6c) =
       *(uint *)(iVar4 + 0x6c) ^ (iVar5 << 8 ^ *(uint *)(iVar4 + 0x6c)) & 0x7fffff00;
  *(char *)(iVar4 + 0x6c) = (char)uVar6;
  *(uint *)(iVar4 + 0x6c) = *(uint *)(iVar4 + 0x6c) & 0x7fffffff;
  iVar5 = *(int *)((int)this + 0x260);
  uVar6 = *(undefined4 *)((int)this + 0x25c);
  *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar4 + 0x74) =
       *(uint *)(iVar4 + 0x74) ^ (iVar5 << 8 ^ *(uint *)(iVar4 + 0x74)) & 0x7fffff00;
  *(char *)(iVar4 + 0x74) = (char)uVar6;
  *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0x7fffffff;
  iVar5 = *(int *)((int)this + 0x270);
  uVar6 = *(undefined4 *)((int)this + 0x26c);
  *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)((int)this + 0x9c);
  *(uint *)(iVar4 + 0x7c) =
       *(uint *)(iVar4 + 0x7c) ^ (iVar5 << 8 ^ *(uint *)(iVar4 + 0x7c)) & 0x7fffff00;
  *(char *)(iVar4 + 0x7c) = (char)uVar6;
  *(uint *)(iVar4 + 0x7c) = *(uint *)(iVar4 + 0x7c) & 0x7fffffff;
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)((int)this + 0xa0);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)((int)this + 0x94);
  *(uint *)(iVar4 + 0x38) = REFG(undefined4, 0x1302354) & 0x7ffffff;
  *(uint *)(iVar4 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar8 = REFG(undefined4, 0x1302368);
  *(uint *)(iVar4 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)(iVar4 + 0x58) = uVar8 & 0xfe000000;
  *(uint *)(iVar4 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((iVar4 + 0xa8 + *(int *)((int)this + 0x220) * 4))) =
       *(undefined4 *)((int)this + 0x208);
  *((undefined4 *)GEN_TOP((iVar4 + 0xa8 + *(int *)((int)this + 0x22c) * 4))) =
       *(undefined4 *)((int)this + 0x20c);
  *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)this + 0x228) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)this + 0x228) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)this + 0x230) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)this + 0x230) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)this + 0x234) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)this + 0x234) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)this + 0x238) * 8))) =
       *(undefined4 *)((int)this + 0x210);
  *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)this + 0x238) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar4 + 0xa8 + *(int *)((int)this + 0x27c) * 4))) =
       *(undefined4 *)((int)this + 0x280);
  *(undefined4 *)((int)this + 0x4334) = 0;
  uVar6 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  uVar7 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
  *(undefined4 *)((int)this + 0x42b4) = 0;
  *(undefined4 *)((int)this + 0x42b8) = 0;
  *(undefined4 *)((int)this + 0x42bc) = uVar6;
  *(undefined4 *)((int)this + 0x42c0) = uVar7;
  iVar5 = REFG(int, 0x1370b90);
  iVar4 = *(int *)(iVar3 + 0x1a8);
  uVar8 = *(int *)(iVar4 + 0x18) + 0x20;
  if (uVar8 < 0x8001) {
    puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18))));
    *(uint *)(iVar4 + 0x18) = uVar8;
  }
  else {
    piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 0x8000;
    UNLOCK();
    (*(int *)(gen_frame + 0x14)) = iVar2;
    if (*(uint *)(iVar5 + 0xb8) < (uint)(*(int *)(iVar5 + 0xc4) * 3 + *piVar1)) {
      LOCK();
      *piVar1 = *piVar1 + -0x8000;
      UNLOCK();
      goto LAB_00585c93;
    }
    puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0xbc) + iVar2)));
    if (puVar9 == (undefined4 *)0x0) goto LAB_00585c93;
    *(undefined4 * PTR32 *)(iVar4 + 0xc) = puVar9;
    *(undefined4 *)(iVar4 + 0x18) = 0x20;
  }
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 2;
    puVar9[1] = *(undefined4 *)((int)this + 0x42b4);
    puVar9[2] = *(undefined4 *)((int)this + 0x42b8);
    puVar9[3] = *(undefined4 *)((int)this + 0x42bc);
    puVar9[4] = *(undefined4 *)((int)this + 0x42c0);
    F_004d4810(iVar4,puVar9);
  }
LAB_00585c93: ;
  (*(int *)(gen_frame + 0x14)) = *(int *)(REFG(int, 0x1371288) + 400);
  F_004daa40(*(undefined * PTR32 *)(iVar3 + 0x1a8),1,&(*(int *)(gen_frame + 0x14)),0,0,0);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x1c))) == 2) {
    uVar8 = F_005ca370(this,param_1);
    return uVar8;
  }
  uVar8 = F_005caac0(this,param_1);
  return uVar8;
}

/* ref: FUN_00585cf0 */
uint F_00585cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x585cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  byte * pbVar1;
  int iVar2;
  int iVar3;
  undefined * puVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  uint uVar8;
  float * pfVar9;
  undefined4 * puVar10;
  float fVar11;
  float fVar12;
  undefined * pvVar13;
  float * pfVar14;
  int * piVar15;
  uint uVar16;
  uint * puVar17;
  float * pfVar18;
  undefined2 * puVar19;
  undefined * pvVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = param_1;
  if ((*(uint *)((int)this + 0x100) & 0x10) != 0) {
    (*(int *)(gen_frame + 0x14)) = (int)*(float *)((int)this + 0x90);
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) ^ (*(uint *)((int)this + 0x100) * 4 ^ (*(uint *)(gen_frame + 0x10))) & 0x7fff800;
    (*(int *)(gen_frame + 0x18)) = (int)*(float *)((int)this + 0x94);
    (*(int *)(gen_frame + 0x1c)) = (int)*(float *)((int)this + 0x98);
    (*(int *)(gen_frame + 0x20)) = (int)*(float *)((int)this + 0x9c);
    *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = *(undefined * PTR32 *)((int)param_1 + 4);
    uVar8 = F_005bfe10(*(undefined * PTR32 *)((int)param_1 + 4),2,0x1c,0);
    if (uVar8 != 0) {
      *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0xa4) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0xa4) | 2;
      *(int *)(uVar8 + 0xc) = (*(int *)(gen_frame + 0x14));
      *(int *)(uVar8 + 0x10) = (*(int *)(gen_frame + 0x18));
      *(int *)(uVar8 + 0x14) = (*(int *)(gen_frame + 0x1c));
      *(undefined4 *)(uVar8 + 8) = 1;
      *(int *)(uVar8 + 0x18) = (*(int *)(gen_frame + 0x20));
      F_005bfeb0((*(undefined * PTR32 *)(gen_frame + 0xc4)),uVar8);
    }
  }
  fVar12 = *(float *)((int)this + 0xf8);
  (*(int * PTR32 *)(gen_frame + 0xd4)) = *(int * PTR32 *)((int)this + 0xe8);
  fVar25 = gen_bits2f((uint)*(int * PTR32 *)((int)this + 0xe8) ^ REFG(uint, 0x10920d0));
  (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar12)));
  (*(float *)(gen_frame + 0xb8)) = fVar25;
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 0xec))));
  fVar26 = gen_bits2f((uint)gen_fl2bits(*(float *)((int)this + 0xec)) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0xbc)) = fVar26;
  fVar11 = *(float *)((int)this + 0xf4);
  (*(float *)(gen_frame + 0xd0)) = fVar11;
  (*(float *)(gen_frame + 0xac)) = (float)((float10)fVar12 * (float10)0);
  (*(float *)(gen_frame + 0xa8)) = fVar11;
  (*(float *)(gen_frame + 0xb4)) = fVar12;
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar11 * (float10)0);
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)fVar11 * (float10)fVar25);
  (*(float *)(gen_frame + 0xbc)) = (float)((float10)fVar12 * (float10)fVar26);
  F_005b7670(&(*(float *)(gen_frame + 0xa8)),*(float *)((int)this + 0xfc));
  fVar21 = (float10)(*(float *)(gen_frame + 0xb8));
  fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd4)))));
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar21 + fVar23);
  (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)&REFG(undefined, 0x4);
  fVar22 = (float10)(*(float *)(gen_frame + 0xbc));
  fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xcc)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (undefined4 *)((int)((float *)(gen_frame + 0xe0)) - (int)this);
  (*(float *)(gen_frame + 0xbc)) = (float)(fVar22 + fVar24);
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)((float *)(gen_frame + 0xe0)) - (int)this + 4);
  fVar12 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xdc) + (float10)(float)(fVar21 + fVar23))));
  (*(float *)(gen_frame + 0xb8)) = fVar12;
  fVar11 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)(float)(fVar22 + fVar24))));
  (*(float *)(gen_frame + 0xbc)) = fVar11;
  pfVar14 = (float *)((int)this + 4);
  pfVar18 = ((float *)(gen_frame + 0xe0));
  do {
    (*(float *)(gen_frame + 0xd0)) = *pfVar14;
    pfVar9 = pfVar14 + 4;
    piVar15 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd4)) + -1);
    (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar14[-1])));
    fVar23 = (float10)pfVar14[-1];
    fVar24 = (float10)*pfVar14;
    *pfVar18 = ((float)GEN_TOF(((fVar23 * (float10)(*(float *)(gen_frame + 0xa8)) + (float10)(*(float *)(gen_frame + 0xb0)) * fVar24) + (float10)fVar12)));
    *(float *)((int)&(*(float *)(gen_frame + 0xd0)) - (int)this + (int)pfVar9) =
         ((float)GEN_TOF(((fVar23 * (float10)(*(float *)(gen_frame + 0xac)) + fVar24 * (float10)(*(float *)(gen_frame + 0xb4))) + (float10)fVar11)));
    *(float *)((int)&(*(int * PTR32 *)(gen_frame + 0xd4)) - (int)this + (int)pfVar9) = pfVar14[1];
    pfVar14 = pfVar9;
    pfVar18 = pfVar18 + 4;
  } while (piVar15 != (int *)0x0);
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x74))) = *(uint *)((int)this + 0x100) & 0xf;
  iVar2 = *(int *)((int)this + 0xd8);
  iVar3 = *(int *)((int)this + 0xc0);
  if ((*(int *)((int)param_1 + 0x10) != iVar2) || (*(int *)((int)param_1 + 0x24) != iVar3)) {
    *(int *)((int)param_1 + 0x10) = iVar2;
    *(int *)((int)param_1 + 0x24) = iVar3;
    F_00577690((int)param_1 + 0x14,iVar2,iVar3);
  }
  if ((*(uint *)((int)this + 0x100) >> 5 & 0xf) == 1) {
    uVar8 = F_00567770(param_1,4,((float *)(gen_frame + 0xe0)));
  }
  else {
    uVar8 = *(uint *)((int)this + 0x100) >> 9 & 0xffff;
    if (uVar8 < 0xffff) {
      uVar8 = 0xffff - uVar8;
    }
    else {
      uVar8 = 0;
    }
  }
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x70))) = uVar8;
  *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x78))) = *(uint *)((int)this + 0x100) >> 5 & 0xf;
  if ((*(uint *)((int)this + 0x100) & 0x2000000) != 0) {
    (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)0x0;
    (*(float *)(gen_frame + 0xd0)) = 5.60519e-45;
    pvVar20 = param_1;
    do {
      pvVar20 = *(undefined * PTR32 *)((int)pvVar20 + 4);
      if (*(int *)((int)pvVar20 + 0x74) == 1) {
        pvVar13 = (undefined *)F_005bfe10(pvVar20,0x11,0x50,1);
        (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
        fVar12 = 0.0;
        if (pvVar13 != (undefined *)0x0) {
          fVar12 = gen_bits2f(F_005c83b0(pvVar20,pvVar13,0x11,2,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c) = 1;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x24) = *(undefined4 *)((int)pvVar20 + 0x7c);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x30) = *(uint *)((int)pvVar20 + 0x88) & 0xfffffff;
LAB_005861f7: ;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x40) = *(undefined4 *)((int)pvVar20 + 0x94);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x44) = *(undefined4 *)((int)pvVar20 + 0x98);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x48) = *(undefined4 *)((int)pvVar20 + 0x9c);
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x4c) = *(undefined4 *)((int)pvVar20 + 0xa0);
        }
      }
      else if (*(int *)((int)pvVar20 + 0x74) == 2) {
        pvVar13 = (undefined *)F_005bfe10(pvVar20,0x11,0x50,1);
        (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
        fVar12 = 0.0;
        if (pvVar13 != (undefined *)0x0) {
          fVar12 = gen_bits2f(F_005c83b0(pvVar20,pvVar13,0x11,2,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c) = 2;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x24) = *(undefined4 *)((int)pvVar20 + 0x7c);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x30) = *(uint *)((int)pvVar20 + 0x88) & 0xfffffff;
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x28) = *(undefined4 *)((int)pvVar20 + 0x80);
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x34) = *(uint *)((int)pvVar20 + 0x8c) & 0xfffffff;
          goto LAB_005861f7;
        }
      }
      else {
        puVar10 = (undefined4 *)F_005bfe10(pvVar20,0x11,0x24,0);
        (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = puVar10;
        fVar12 = 0.0;
        if (puVar10 != (undefined4 *)0x0) {
          puVar4 = (&REFG(undefined * PTR32, 0x10a0c2c))[*(int *)((int)pvVar20 + 0x74)];
          iVar2 = *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24);
          piVar15 = (int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x3c);
          *piVar15 = *piVar15 + 2;
          pvVar13 = (undefined *)(iVar2 + 2);
          (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
          if (pvVar13 < (undefined *)0x4001) {
            (*(float *)(gen_frame + 0xd8)) = gen_bits2f(*((int *)GEN_TOP(((int)pvVar20 +
                                          (int)(&REFG(undefined * PTR32, 0x10a0c2c))[*(int *)((int)pvVar20 + 0x74)] * 4 +
                                          0x30))) * iVar2 +
                                  *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x18));
            *(undefined * PTR32 *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24) = pvVar13;
LAB_005860dc: ;
            if ((*(float *)(gen_frame + 0xd8)) == 0.0) {
LAB_005860e0: ;
              fVar12 = 0.0;
            }
            else {
              F_004d41c0(puVar10 + 2,(int)(*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x14);
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8)));
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[6] = 2;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] ^ ((*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] ^ *(uint *)((int)pvVar20 + 0x74)) & 0xf;
              uVar8 = (uint)*(byte *)((int)pvVar20 + 0x78) << 4 | (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] & 0xfff0000f;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = uVar8;
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc))[8] = ((uint)*(byte *)((int)pvVar20 + 0xa4) << 0x14 ^ uVar8) & 0x100000 ^
                            uVar8;
              F_005bfeb0(pvVar20,(*(undefined4 * PTR32 *)(gen_frame + 0xcc)));
              fVar12 = (*(float *)(gen_frame + 0xd8));
            }
          }
          else {
            fVar12 = *(float *)((int)pvVar20 + 0x10);
            piVar15 = ((int *)GEN_TOP(((int)gen_fl2bits(fVar12) + 0x24cU +
                             (int)(&REFG(undefined * PTR32, 0x10a0c2c))[*(int *)((int)pvVar20 + 0x74)] * 0x10)));
            (*(float *)(gen_frame + 0xd8)) = fVar12;
            fVar11 = gen_bits2f(*piVar15 * 0x4000);
            (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
            (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
            puVar17 = (uint *)(piVar15 + 3);
            LOCK();
            pvVar13 = (undefined *)*puVar17;
            *puVar17 = *puVar17 + (int)gen_fl2bits(fVar11);
            UNLOCK();
            (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
            puVar17 = (uint *)(piVar15 + 3);
            if (*puVar17 <= (uint)piVar15[2]) {
              (*(float *)(gen_frame + 0xd8)) = gen_bits2f(*(int *)((int)gen_fl2bits(fVar12) + 0x294) + piVar15[1] +
                                    (int)pvVar13);
              if ((*(float *)(gen_frame + 0xd8)) != 0.0) {
                *(float *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x18) = (*(float *)(gen_frame + 0xd8));
                piVar15 = (int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x3c);
                *piVar15 = *piVar15 + (0x4000 - *(int *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24));
                *(undefined4 *)((int)pvVar20 + (int)((int)(uintptr_t)puVar4) * 4 + 0x24) = 2;
                goto LAB_005860dc;
              }
              goto LAB_005860e0;
            }
            LOCK();
            *puVar17 = *puVar17 + *piVar15 * -0x4000;
            UNLOCK();
            fVar12 = 0.0;
          }
        }
      }
      fVar11 = REFG(float, 0x10a0a58);
      if (fVar12 != 0.0) {
        (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x2;
        pfVar14 = (float *)((int)gen_fl2bits(fVar12) + 4);
        pfVar18 = (*(float * PTR32 *)(gen_frame + 0xc8));
        do {
          uVar8 = (uint)pfVar18 & 0x80000003;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
          }
          uVar8 = uVar8 & 0xff;
          pfVar14[1] = fVar11;
          pfVar18 = (float *)((int)pfVar18 + 1);
          piVar15 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd4)) + -1);
          (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
          pfVar14[-1] = ((float *)(gen_frame + 0xe0))[(int)(uVar8 * 4)];
          *pfVar14 = ((float *)(gen_frame + 0xe0))[(int)(uVar8 * 4 + 1)];
          pfVar14[2] = *(float *)((int)this + uVar8 * 4 + 0x40);
          pfVar14[5] = REFG(undefined4, 0x13799b0);
          pfVar14[6] = REFG(undefined4, 0x13799b4);
          pfVar14[4] = REFG(undefined4, 0x131de48);
          pfVar14 = pfVar14 + 8;
        } while (piVar15 != (int *)0x0);
      }
      uVar8 = 1;
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + 1);
      fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xd0))) - 1);
      (*(float *)(gen_frame + 0xd0)) = fVar12;
      pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
    } while (fVar12 != 0.0);
    goto LAB_00586493;
  }
  iVar2 = *(int *)((int)this + 0xc0);
  (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1087f04);
  if (iVar2 != 0) {
    fVar23 = (float10)*(int *)(iVar2 + 0x18);
    if (*(int *)(iVar2 + 0x18) < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    (*(float *)(gen_frame + 0xd0)) = (float)fVar23;
    (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
    fVar23 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0xd8)) = (float)fVar23;
  }
  pvVar20 = *(undefined * PTR32 *)((int)param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar20;
  if (*(int *)((int)pvVar20 + 0x74) == 1) {
    uVar27 = 1;
LAB_0058632a: ;
    uVar16 = F_005cc4d0(pvVar20,uVar27,0x22,4,(int)param_1 + 0x14);
  }
  else {
    if (*(int *)((int)pvVar20 + 0x74) == 2) {
      uVar27 = 2;
      goto LAB_0058632a;
    }
    uVar8 = F_005bfe10(pvVar20,0x22,0x24,0);
    uVar16 = 0;
    if (uVar8 != 0) {
      uVar16 = F_005c83b0((*(undefined * PTR32 *)(gen_frame + 0xdc)),uVar8,0x22,4,(int)param_1 + 0x14);
    }
  }
  dVar6 = *(double *)&REFG(undefined, 0x1088118);
  dVar5 = *(double *)&REFG(undefined, 0x1088100);
  uVar8 = 0;
  pvVar20 = param_1;
  if (uVar16 != 0) {
    fVar23 = (float10)(*(float *)(gen_frame + 0xd0));
    fVar24 = (float10)(*(float *)(gen_frame + 0xd8));
    piVar15 = ((int *)(gen_frame + 0xe8));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((int)this + 0x50);
    (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (undefined4 *)((int)this + 0x40);
    (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
    (*(undefined * PTR32 *)(gen_frame + 0xc4)) = (undefined *)0x4;
    puVar19 = (undefined2 *)(uVar16 + 0x1a);
    do {
      *(int *)(puVar19 + -0xd) = piVar15[-2];
      *(int *)(puVar19 + -0xb) = piVar15[-1];
      *(int *)(puVar19 + -9) = *piVar15;
      *(undefined4 *)(puVar19 + -7) = *(*(undefined4 * PTR32 *)(gen_frame + 0xcc));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)GEN_TOP(((int)((float10)(*(float * PTR32 *)(gen_frame + 0xc8))[1] * fVar24) & 0xffff)));
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined2)(int)((float10)(*(float * PTR32 *)(gen_frame + 0xc8))[1] * fVar24);
      puVar19[-5] = (short)(int)((float10)*(*(float * PTR32 *)(gen_frame + 0xc8)) * fVar23);
      puVar19[-4] = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      uVar8 = (uint)((double)*(float *)((int)this + 0xb8) * dVar5);
      (*(float *)(gen_frame + 0xd0)) = gen_bits2f(uVar8 & 0xffff);
      fVar25 = (*(float *)(gen_frame + 0xd0));
      uVar16 = (uint)((double)*(float *)((int)this + 0xb4) * dVar5);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)(uVar16 & 0xffff);
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined2)uVar16;
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd8)) + 2)) = ((undefined2)0x27f);
      puVar19[-1] = (short)(int)((double)*(float *)((int)this + 0xb0) * dVar5);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd0)) + 0)) = (undefined2)uVar8;
      puVar19[1] = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd0)) + 0));
      *puVar19 = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      puVar19[2] = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) + 1;
      piVar15 = piVar15 + 4;
      (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar15;
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 2;
      iVar2 = (int)TRUNC((double)*(float *)((int)this + 0xa8) * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined1)iVar2;
      uVar7 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      iVar2 = (int)TRUNC((double)*(float *)((int)this + 0xa4) * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)iVar2;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = (undefined1)iVar2;
      fVar11 = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0xd8)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xd8)) + 0))));
      *(undefined1 *)((int)puVar19 + -5) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      *(undefined1 *)(puVar19 + -2) = uVar7;
      fVar12 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + -1);
      (*(undefined * PTR32 *)(gen_frame + 0xc4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar12)));
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      *(undefined1 *)((int)puVar19 + -3) = 0;
      pvVar20 = (undefined *)(int)TRUNC((double)fVar11 * dVar6);
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar20;
      pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)) = SUB41(pvVar20,0);
      uVar8 = CONCAT31((int3)((((undefined2)0x27f) | 0xc00) >> 8),(*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0)));
      *(undefined1 *)(puVar19 + -3) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0));
      pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
      puVar19 = puVar19 + 0x10;
      (*(float *)(gen_frame + 0xd0)) = fVar25;
      (*(undefined * PTR32 *)(gen_frame + 0xdc)) = pvVar13;
    } while (fVar12 != 0.0);
  }
LAB_00586493: ;
  if (((*(byte *)((int)this + 0x100) & 0x10) != 0) && (((*(uint *)(gen_frame + 0xc)) & 0xf) == 0)) {
    *((uint *)GEN_TOP((*(int *)((int)pvVar20 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
    pvVar20 = *(undefined * PTR32 *)((int)pvVar20 + 4);
    uVar16 = F_005bfe10(pvVar20,2,0x1c,0);
    uVar8 = 0;
    if (uVar16 != 0) {
      *(byte *)((int)pvVar20 + 0xa4) = *(byte *)((int)pvVar20 + 0xa4) & 0xfd;
      *(int *)(uVar16 + 0xc) = (*(int *)(gen_frame + 0x14));
      *(int *)(uVar16 + 0x10) = (*(int *)(gen_frame + 0x18));
      *(int *)(uVar16 + 0x14) = (*(int *)(gen_frame + 0x1c));
      *(undefined4 *)(uVar16 + 8) = 0;
      *(int *)(uVar16 + 0x18) = (*(int *)(gen_frame + 0x20));
      uVar8 = F_005bfeb0(pvVar20,uVar16);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar8;
}

/* ref: FUN_00586530 */
uint F_00586530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x586530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  undefined * this_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  float * pfVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  float local_14;
  
  iVar7 = (uint)*(ushort *)((int)this + 0x22) + (uint)*(ushort *)((int)this + 0x20);
  if (iVar7 == 0) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
  if ((*(int *)(param_1 + 0x10) != 0x120000) || (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0x120000;
    *(undefined4 *)(param_1 + 0x24) = 0;
    F_00577690(param_1 + 0x14,0x120000,0);
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x78))) = 0;
  pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  if (*(ushort *)((int)this + 0x2c) < 0xffff) {
    iVar8 = 0xffff - (uint)*(ushort *)((int)this + 0x2c);
  }
  else {
    iVar8 = 0;
  }
  *((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) = iVar8;
  this_00 = *(undefined * PTR32 *)(param_1 + 4);
  iVar8 = iVar7 * 2;
  if (*(int *)((int)this_00 + 0x74) == 1) {
    uVar16 = 1;
  }
  else {
    if (*(int *)((int)this_00 + 0x74) != 2) {
      uVar9 = F_005bfe10(this_00,0x10,0x24,0);
      pfVar10 = (float *)0x0;
      if (uVar9 != 0) {
        pfVar10 = (float *)F_005c83b0(this_00,uVar9,0x10,iVar8,param_1 + 0x14);
      }
      goto LAB_00586611;
    }
    uVar16 = 2;
  }
  pfVar10 = (float *)F_005cc4d0(this_00,uVar16,0x10,iVar8,param_1 + 0x14);
LAB_00586611: ;
  pfVar11 = (float *)0x0;
  if (pfVar10 != (float *)0x0) {
    if (iVar7 != 0) {
      pfVar11 = pfVar10 + 7;
      do {
        pfVar11[-4] = *(float *)((int)this + 0x28);
        *(undefined2 *)(pfVar11 + -3) = 0;
        *(undefined2 *)((int)pfVar11 + -10) = 0;
        pfVar11[-1] = REFG(undefined4, 0x13799b0);
        *pfVar11 = REFG(undefined4, 0x13799b4);
        pfVar11[-2] = REFG(undefined4, 0x131de48);
        pfVar11 = pfVar11 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    fVar12 = (float10)*(float *)((int)this + 0x10);
    fVar2 = (float)(fVar12 * (float10)REFG(undefined4, 0x131de4c));
    fVar13 = (float10)*(float *)((int)this + 0x14);
    uVar6 = *(ushort *)((int)this + 0x24);
    fVar3 = (float)(fVar13 * (float10)REFG(undefined4, 0x131de50));
    local_14 = 0.0;
    fVar4 = (float)((float10)REFG(undefined4, 0x131de54) * fVar12);
    if (*(int *)((int)this + 4) == 1) {
      local_14 = (float)uVar6;
    }
    fVar14 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) +
                             (float10)(float)(fVar13 * (float10)REFG(undefined4, 0x131de60)))));
    fVar12 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) +
                             (float10)(float)((float10)REFG(undefined4, 0x131de5c) * fVar12))));
    iVar7 = 0;
    fVar13 = (float10)(float)((float10)REFG(undefined4, 0x131de58) * fVar13);
    if (*(short *)((int)this + 0x20) != 0) {
      pfVar11 = pfVar10;
      do {
        pfVar11[2] = 0.0;
        fVar15 = (float10)local_14;
        iVar7 = iVar7 + 1;
        pfVar10 = pfVar11 + 0x10;
        *pfVar11 = ((float)GEN_TOF(((fVar15 * (float10)fVar2 + (float10)(double)((float10)fVar4 * (float10)0)
                           ) + fVar12)));
        pfVar11[1] = ((float)GEN_TOF((((float10)(double)((float10)0 * fVar13) + (float10)fVar3 * fVar15) +
                            fVar14)));
        fVar5 = *(float *)((int)this + 0x1c);
        pfVar11[10] = 0.0;
        pfVar11[8] = ((float)GEN_TOF((fVar12 + ((float10)fVar5 * (float10)fVar4 + fVar15 * (float10)fVar2))));
        pfVar11[9] = ((float)GEN_TOF((fVar14 + ((float10)fVar5 * fVar13 + (float10)fVar3 * fVar15))));
        local_14 = (float)(fVar15 + (float10)uVar6);
        pfVar11 = pfVar10;
      } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x20));
    }
    uVar6 = *(ushort *)((int)this + 0x26);
    local_14 = 0.0;
    if (*(int *)((int)this + 4) == 1) {
      local_14 = (float)uVar6;
    }
    iVar7 = 0;
    if (*(short *)((int)this + 0x22) == 0) {
      return (uint)pfVar10;
    }
    do {
      pfVar10[2] = 0.0;
      fVar15 = (float10)local_14;
      iVar7 = iVar7 + 1;
      pfVar11 = pfVar10 + 0x10;
      *pfVar10 = ((float)GEN_TOF((((float10)((double)fVar2 * 0.0) + fVar15 * (float10)fVar4) + fVar12)));
      pfVar10[1] = ((float)GEN_TOF((((float10)((double)fVar3 * 0.0) + fVar13 * fVar15) + fVar14)));
      fVar5 = *(float *)((int)this + 0x18);
      pfVar10[10] = 0.0;
      pfVar10[8] = ((float)GEN_TOF((fVar12 + ((float10)fVar5 * (float10)fVar2 + fVar15 * (float10)fVar4))));
      pfVar10[9] = ((float)GEN_TOF((fVar14 + ((float10)fVar5 * (float10)fVar3 + fVar13 * fVar15))));
      local_14 = (float)(fVar15 + (float10)uVar6);
      pfVar10 = pfVar11;
    } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x22));
  }
  return (uint)pfVar11;
}

/* ref: FUN_00586850 */
uint F_00586850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x586850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x23c),param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00586870 */
uint F_00586870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x586870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x23c),0x49,0,param_1,0);
  return uVar1;
}

/* ref: FUN_00586890 */
uint F_00586890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x586890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int in_ecx;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(uint *)(gen_frame + 0x0)) = 0;
  uVar2 = F_0042a970(param_1);
  pvVar5 = (undefined *)((int)this + 0x330);
  F_0042ccf0(pvVar5,param_1);
  pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x18)),param_3);
  uVar4 = F_0042e360(pvVar3,pvVar5);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x114)),uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  uVar7 = param_4;
  pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x114)));
  uVar4 = F_0042e360(pvVar5,uVar7);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)),uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  pvVar5 = (undefined *)((int)this + 0x57c);
  F_0042ccf0(pvVar5,((undefined1 *)(gen_frame + 0xc0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)));
  in_ecx = (int)this + 0x2dc;
  F_0042aca0(in_ecx);
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  iVar8 = *piVar1;
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,in_ecx);
  uVar6 = ((code *)*(gen_code32 *)(iVar8 + 0xc))(*(undefined4 *)((int)this + 0x14),pvVar5,uVar4);
  uVar4 = uVar2;
  while( true ) {
    if ((int)uVar6 < 1) {
      uVar4 = F_0042aca0(param_1);
      F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
      return uVar4;
    }
    F_0042aca0(pvVar5);
    uVar6 = F_00580530(*(undefined * PTR32 *)((int)this + 0x1c),pvVar5,in_ecx,param_2,0);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    if (-1 < (int)uVar6) {
      F_0042ccf0((undefined *)((int)this + 0x330),param_1);
      (*(uint *)(gen_frame + 0x0)) = uVar4;
      (*(uint *)(gen_frame + 0x4)) = uVar2;
    }
    uVar2 = (int)((*(uint *)(gen_frame + 0x4)) - (*(uint *)(gen_frame + 0x0))) / 2 + (*(uint *)(gen_frame + 0x0));
    if ((uVar2 == 0) || (uVar2 == uVar4)) break;
    F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x330,uVar2);
    iVar8 = (int)this + 0x330;
    pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x18)),param_3);
    uVar4 = F_0042e360(pvVar3,iVar8);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x114)),uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    uVar7 = param_4;
    pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x114)));
    uVar4 = F_0042e360(pvVar3,uVar7);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)),uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
    F_0042ccf0(pvVar5,((undefined1 *)(gen_frame + 0xc0)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x114)));
    F_0042aca0(in_ecx);
    iVar8 = **(int * PTR32 *)((int)this + 0x14);
    uVar4 = ((code *)*(gen_code32 *)(iVar8 + 4))(*(int * PTR32 *)((int)this + 0x14),in_ecx);
    uVar6 = ((code *)*(gen_code32 *)(iVar8 + 0xc))(*(undefined4 *)((int)this + 0x14),pvVar5,uVar4);
    uVar4 = uVar2;
    uVar2 = (*(uint *)(gen_frame + 0x4));
  }
  uVar4 = F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18),param_1,(*(uint *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return uVar4;
}

/* ref: FUN_00586b50 */
uint F_00586b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x586b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(byte *)(param_4 + 0xb) < 2) {
    uVar1 = F_00a27030(*(undefined * PTR32 *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x4)),param_1);
    F_0042ccf0(param_1,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = F_0056a610(this,param_1,param_2,param_3,param_5,param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  if (*(short *)(param_4 + 4) == 0) {
    uVar1 = F_0055bea0(this,param_1,(uint)*(byte *)(param_4 + 0xb),param_3);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  F_0056a610(this,param_1,param_2,param_3,param_5,param_6);
  uVar1 = F_00586890(this,param_1,param_4,param_5,param_6);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00586c30 */
ushort F_00586c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x586c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  undefined * this_00;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  char * pcVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int *)(gen_frame + 0x28)) = (int)*(short *)((int)this + 0x22);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 1;
  (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0xffffffff;
  if (*(short *)((int)this + 0x83c) == 0) {
    pcVar7 = (char *)F_0042a990(param_1);
    (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
    while( true ) {
      uVar8 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18),pcVar7);
      uVar9 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x44)),(int)pcVar7 - (int)(*(char * PTR32 *)(gen_frame + 0x1c)),uVar8);
      F_0042ccf0((undefined *)((int)this + 0x330),uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x44)));
      uVar9 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x330,0);
      cVar1 = pcVar7[uVar8];
      if (cVar1 != '\0') {
        uVar9 = uVar9 + 1;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar9;
      if (((*(int *)(gen_frame + 0x28)) < 0) || (((*(int *)(gen_frame + 0x28)) == 0 && (uVar9 == 0)))) {
        if ((int)(*(uint *)(gen_frame + 0x38)) < 0) {
          (*(uint *)(gen_frame + 0x30)) = uVar9 + (*(int *)(gen_frame + 0x28));
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
          (*(uint *)(gen_frame + 0x38)) = uVar9;
        }
        else if ((int)(*(uint *)(gen_frame + 0x2c)) < 0) {
          (*(uint *)(gen_frame + 0x2c)) = uVar9;
        }
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = uVar9;
      }
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + uVar8 + 1;
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
    }
  }
  else {
    pcVar7 = (char *)F_0042a990(param_1);
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
    while( true ) {
      uVar8 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18),pcVar7);
      uVar9 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x44)),(int)pcVar7 - (int)(*(char * PTR32 *)(gen_frame + 0xc)),uVar8);
      F_0042ccf0((undefined *)((int)this + 0x330),uVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x44)));
      (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7 + uVar8;
      pcVar7 = (char *)F_0042a990((int)this + 0x330);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
      (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
      while( true ) {
        this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
        F_005796e0(this_00,(int)this + 0x838,0);
        F_005797b0(this_00,(*(char * PTR32 *)(gen_frame + 0x34)),(uint)*(ushort *)((int)this + 0x83c),
                     (uint)*(ushort *)((int)this + 0x846),&(*(int *)(gen_frame + 0x4)));
        iVar4 = (*(int *)(gen_frame + 0x4));
        iVar2 = *(int *)((int)this_00 + 0x38);
        if (iVar2 != 0) {
          puVar12 = (undefined4 *)(iVar2 + 0xa8);
          puVar13 = (undefined4 *)(iVar2 + 100);
          for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined4 *)((int)this_00 + 0x38) = 0;
          this = (*(undefined * PTR32 *)(gen_frame + 0x10));
        }
        uVar8 = F_0042d2c0((undefined *)((int)this + 0x330),((undefined1 *)(gen_frame + 0x44)),(int)(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 *)(gen_frame + 0x8)),
                             (*(int *)(gen_frame + 0x4)));
        F_0042ccf0((undefined *)((int)this + 0x2dc),uVar8);
        F_0042c880(((undefined1 *)(gen_frame + 0x44)));
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x20));
        (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x34)) + iVar4;
        (*(char *)(gen_frame + 0x43)) = 0;
        if (*(*(char * PTR32 *)(gen_frame + 0x20)) != '\0') {
          (*(char *)(gen_frame + 0x43)) = 1;
        }
        (*(char *)(gen_frame + 0x43)) = *(*(char * PTR32 *)(gen_frame + 0x20)) != '\0';
        uVar9 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18),(undefined *)((int)this + 0x2dc),0);
        if (((*pcVar7 != '\0') && (*(*(char * PTR32 *)(gen_frame + 0x34)) == '\0')) &&
           ((*pcVar7 != '\x02' || (pcVar7[1] != '\x10')))) {
          uVar9 = uVar9 + 1;
        }
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar9;
        if (((*(int *)(gen_frame + 0x28)) < 0) || (((*(int *)(gen_frame + 0x28)) == 0 && ((*(char *)(gen_frame + 0x43)) == '\0')))) {
          if ((int)(*(uint *)(gen_frame + 0x38)) < 0) {
            (*(uint *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x28)) + uVar9;
            (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
            (*(uint *)(gen_frame + 0x38)) = uVar9;
          }
          else if ((int)(*(uint *)(gen_frame + 0x2c)) < 0) {
            (*(uint *)(gen_frame + 0x2c)) = uVar9;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = uVar9;
        }
        if (*(*(char * PTR32 *)(gen_frame + 0x34)) == '\0') break;
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
      }
      if (*pcVar7 == '\0') break;
      if ((*pcVar7 == '\x02') && (pcVar7[1] == '\x10')) {
        uVar8 = F_00a24d30(*(undefined * PTR32 *)((int)this + 0x1c),pcVar7 + 2,
                             (int)*(undefined * PTR32 *)((int)this + 0x1c) + 0x350,&(*(char * PTR32 *)(gen_frame + 0x1c)),1);
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
        pcVar7 = pcVar7 + 3 + (int)((*(char * PTR32 *)(gen_frame + 0x1c)) + uVar8);
        (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7;
      }
      else {
        pcVar7 = pcVar7 + 1;
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
        (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar7;
      }
    }
  }
  if ((*(int *)(gen_frame + 0x28)) == 0) {
    (*(uint *)(gen_frame + 0x30)) = uVar9;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
    (*(uint *)(gen_frame + 0x38)) = uVar9;
  }
  *(short *)((int)this + 0xd4) = (short)(*(int *)(gen_frame + 0x3c));
  sVar10 = (short)(*(uint *)(gen_frame + 0x30));
  sVar3 = (short)(*(uint *)(gen_frame + 0x38));
  if ((*(int *)(gen_frame + 0x24)) < (*(int *)(gen_frame + 0x3c))) {
    if ((int)(*(uint *)(gen_frame + 0x30)) < (int)(*(uint *)(gen_frame + 0x2c))) {
      *(short *)((int)this + 0xd8) = sVar3;
    }
    else {
      sVar5 = ((short)(*(uint *)(gen_frame + 0x2c)) - sVar10) + sVar3;
      *(short *)((int)this + 0xd8) = sVar5;
      if ((*(int *)(gen_frame + 0x24)) < (*(int *)(gen_frame + 0x3c)) + -1) {
        *(short *)((int)this + 0xd8) = sVar5 + -1;
      }
    }
    uVar6 = *(short *)((int)this + 0x22) - sVar10;
    *(ushort *)((int)this + 0xdc) = (uVar6 - 1) + sVar3;
  }
  else {
    *(short *)((int)this + 0xd8) = sVar3 - sVar10;
    uVar6 = *(short *)((int)this + 0x22) - sVar10;
    *(ushort *)((int)this + 0xdc) = uVar6 + sVar3;
  }
  *(ushort *)((int)this + 0xda) = uVar6;
  uVar8 = (*(uint *)(gen_frame + 0x30));
  if (1 < (*(int *)(gen_frame + 0x24))) {
    if ((int)(*(uint *)(gen_frame + 0x30)) < (int)(*(uint *)(gen_frame + 0x18))) {
      *(short *)((int)this + 0xd6) = (short)(*(uint *)(gen_frame + 0x18));
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
      return uVar6;
    }
    uVar8 = (*(uint *)(gen_frame + 0x30)) + 1;
  }
  *(short *)((int)this + 0xd6) = (short)uVar8;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar6;
}

/* ref: FUN_00586fc0 */
unsigned int F_00586fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x586fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar2 = *(int * PTR32 *)this;
  piVar5 = (int *)*piVar2;
joined_r0x00586fd1: ;
  do {
    piVar4 = piVar5;
    if (piVar4 == piVar2) {
      return 0;
    }
    iVar3 = piVar4[2];
    if ((*(int *)(iVar3 + 8) != 0) && (*(int *)(iVar3 + 0x10) == 1)) {
      piVar5 = ((int *)GEN_TOP((*(int *)(iVar3 + 8) + 0x88)));
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (iVar1 == 2) {
        *(undefined4 *)(iVar3 + 0x10) = 2;
        piVar5 = ((int *)GEN_TOP((*(int *)(iVar3 + 8) + 0x8c)));
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5;
        UNLOCK();
        if (7 < iVar1) {
          if (piVar4[2] != 0) {
            F_00406ad0(piVar4[2]);
            piVar4[2] = 0;
          }
          piVar5 = (int *)*piVar4;
          if (piVar4 != *(int * PTR32 *)this) {
            *(int * PTR32 *)piVar4[1] = piVar5;
            *(int *)(*piVar4 + 4) = piVar4[1];
            F_00429760(piVar4,0xc,400);
            *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
          }
          goto joined_r0x00586fd1;
        }
        *(undefined4 *)(iVar3 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 8) + 0xfc)));
      }
    }
    piVar5 = (int *)*piVar4;
  } while( true );
}

/* ref: FUN_00587080 */
unsigned int F_00587080(unsigned int gen_a0)
{
  GEN_ENTER(0x587080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  while (piVar2 = piVar3, piVar2 != piVar1) {
    if (piVar2[2] != 0) {
      F_00406ad0(piVar2[2]);
      piVar2[2] = 0;
    }
    piVar3 = (int *)*piVar2;
    if (piVar2 != *(int * PTR32 *)this) {
      *(int * PTR32 *)piVar2[1] = piVar3;
      *(int *)(*piVar2 + 4) = piVar2[1];
      F_00429760(piVar2,0xc,400);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
  }
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0xc,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00587110 */
uint F_00587110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined4 uVar8;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  pcVar4 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x28)),(*(char * PTR32 *)&gen_args[1]),(int)pcVar4 - (int)((*(char * PTR32 *)&gen_args[1]) + 1));
  uVar5 = F_00408810(((undefined1 *)(gen_frame + 0x28)));
  if ((uVar5 != 0) && (uVar5 != 0x7405a171)) {
    for (puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))); puVar2 != *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
        puVar2 = (undefined4 *)*puVar2) {
      if (*(uint *)puVar2[2] == uVar5) {
        uVar5 = F_00513f60(((uint *)puVar2[2])[2],0,0);
        F_004087f0(((undefined1 *)(gen_frame + 0x28)));
        return uVar5;
      }
    }
    uVar8 = 0;
    uVar6 = F_00404270();
    puVar7 = (uint *)F_00406bd0(0x14,0,uVar6,uVar8);
    if (puVar7 != (uint *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0xffffffff;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar7;
      F_004ff310(((undefined1 *)(gen_frame + 0x38)),(*(undefined4 *)&gen_args[2]),0);
      (*(char * PTR32 *)&gen_args[1]) = (char *)0x746578;
      F_004d4610(((undefined1 *)(gen_frame + 0x0)),2,0);
      *puVar7 = uVar5;
      uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(char * PTR32 *)&gen_args[1]),pcVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
      puVar7[2] = uVar5;
      puVar7[4] = 1;
      F_005cd300((*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(uint * PTR32 *)(gen_frame + 0x34)));
      uVar5 = puVar7[2];
      F_004087f0(((undefined1 *)(gen_frame + 0x28)));
      return uVar5;
    }
  }
  F_004087f0(((undefined1 *)(gen_frame + 0x28)));
  return 0;
}

/* ref: FUN_00587250 */
uint F_00587250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x587250u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  char * pcVar2;
  uint uVar3;
  uint * puVar4;
  char * pcVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = (*(uint *)&gen_args[1]);
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0])));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  for (; puVar1 != *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]); puVar1 = (undefined4 *)*puVar1) {
    if (*(uint *)(puVar1[2] + 4) == (*(uint *)&gen_args[1])) {
      uVar6 = F_00513f60(*(undefined4 *)(puVar1[2] + 8),0,0);
      return uVar6;
    }
  }
  uVar7 = 0;
  uVar3 = F_00404270();
  puVar4 = (uint *)F_00406bd0(0x14,0,uVar3,uVar7);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar4;
    F_004ff310(((undefined1 *)(gen_frame + 0x38)),(*(undefined4 *)&gen_args[3]),0);
    (*(uint *)&gen_args[1]) = 0x746578;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x18)) = 5000;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined2 *)(gen_frame + 0x21)) = 0;
    F_0055c510(&REFG(undefined1, 0x1379868),uVar6,(*(undefined4 *)&gen_args[2]));
    pcVar2 = &REFG(undefined1, 0x1379868);
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    F_0040b1a0(((undefined1 *)(gen_frame + 0x28)),&REFG(undefined1, 0x1379868),pcVar5 + -0x1379868);
    uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x28)));
    puVar4[1] = uVar6;
    *puVar4 = uVar3;
    uVar6 = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(uint *)&gen_args[1]),&REFG(undefined1, 0x1379868),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    puVar4[2] = uVar6;
    puVar4[4] = 1;
    F_005cd300((*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(uint * PTR32 *)(gen_frame + 0x34)));
    uVar6 = puVar4[2];
    F_004087f0(((undefined1 *)(gen_frame + 0x28)));
    return uVar6;
  }
  return 0;
}

/* ref: FUN_005873b0 */
uint F_005873b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5873b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  do {
    if (piVar2 == piVar1) {
LAB_0058742a: ;
      F_0050c620(param_1,0,0);
      return 0;
    }
    iVar3 = piVar2[2];
    iVar4 = *(int *)(iVar3 + 8);
    if (iVar4 == param_1) {
      piVar5 = (int *)(iVar4 + 0x94);
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (iVar4 < 2) {
        if (piVar2 != *(int * PTR32 *)this) {
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          F_00429760(piVar2,0xc,400);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
        }
        F_00406ad0(iVar3);
        goto LAB_0058742a;
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

/* ref: FUN_00587440 */
uint F_00587440(unsigned int gen_a0)
{
  GEN_ENTER(0x587440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar3 = 0;
    if (*(int *)(iVar1 + 4) == 0) {
      return 0;
    }
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + uVar3 * 4)));
      if ((*(short *)((int)this_00 + 0x18) == 3) && (*(int *)((int)this_00 + 0x8c) != 0)) {
        uVar2 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)((int)this_00 + 0x8c),
                             (uint)*(byte *)((int)this_00 + 0x114));
        F_00584110(this_00,uVar2);
      }
      iVar1 = *(int *)((int)this + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 4));
    return 0;
  }
  return 0;
}

/* ref: FUN_005874c0 */
uint F_005874c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5874c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != 0) {
    F_0057f0d0(this,param_1,*(undefined4 *)(param_1 + 8),param_2);
  }
  return 0;
}

/* ref: FUN_005874e0 */
uint F_005874e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5874e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != *(int *)((int)this + 0x3c)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x3c),0);
    *(int *)((int)this + 0x3c) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_00587550 */
uint F_00587550(unsigned int gen_a0)
{
  GEN_ENTER(0x587550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x14) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = F_005c9280(this);
  return uVar2;
}

/* ref: FUN_005875a0 */
byte F_005875a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5875a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  int * piVar6;
  undefined4 uVar7;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  uVar5 = F_00404270();
  uVar5 = F_00406c00(pcVar4 + (1 - (int)(param_1 + 1)),0,uVar5,uVar7);
  F_00c49908(uVar5,pcVar4 + (1 - (int)(param_1 + 1)),param_1);
  iVar2 = *(int *)this;
  iVar3 = *(int *)(iVar2 + 4);
  piVar6 = (int *)F_004296a0(0xc,0,400);
  *piVar6 = iVar2;
  piVar6[1] = iVar3;
  if ((uint *)(piVar6 + 2) != (uint *)0x0) {
    piVar6[2] = uVar5;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar6;
  *(int * PTR32 *)piVar6[1] = piVar6;
  return 1;
}

/* ref: FUN_005876a0 */
uint F_005876a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5876a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x90);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0057f0d0((undefined *)((int)this + 0x24),iVar1,*(undefined4 *)(iVar1 + 8),0);
  }
  return uVar2;
}

/* ref: FUN_005876c0 */
uint F_005876c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5876c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x90);
  if ((uVar2 != 0) && ((*(uint *)((int)this + 0x120) >> 7 & 1) == 0)) {
    if (*(undefined * PTR32 *)(uVar2 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(uVar2 + 0x80),0xc,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1,0xd,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1,0x47,0,this,1);
    }
    if ((*(int *)((int)this + 0x90) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar1 != (undefined *)0x0)) {
      F_00583770(pvVar1,0x3f,0,this,1);
    }
    uVar2 = *(uint *)((int)this + 0x90);
    if ((uVar2 != 0) && (*(undefined * PTR32 *)(uVar2 + 0x80) != (undefined *)0x0)) {
      uVar2 = F_00583770(*(undefined * PTR32 *)(uVar2 + 0x80),0x40,0,this,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00587780 */
unsigned int F_00587780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,param_1,param_2);
    iVar1 = *(int *)((int)this + 0x90);
    if (iVar1 != 0) {
      F_0057f0d0((undefined *)((int)this + 0x24),iVar1,*(undefined4 *)(iVar1 + 8),0);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
    F_0056b300(this,0);
  }
  return 0;
}

/* ref: FUN_005877e0 */
uint F_005877e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5877e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = REFG(int, 0x1379860);
  if (param_1 != 0) {
    iVar1 = param_1;
    iVar5 = *(int *)((int)this + 0x90);
    while (iVar5 != 0) {
      if (iVar1 == *(int *)((int)this + 0x90)) {
        if ((param_1 == *(int *)((int)this + 0xa0)) ||
           (iVar5 = param_1, (*(uint *)(param_1 + 0x84) >> 0x1a & 1) == 0)) {
          iVar5 = *(int *)((int)this + 0xa4);
        }
        goto LAB_00587870;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar5 = iVar1;
    }
  }
  iVar5 = *(int *)((int)this + 0xa4);
  if (iVar5 != 0) {
    iVar2 = iVar5;
    iVar1 = *(int *)((int)this + 0x90);
    while( true ) {
      if (iVar1 == 0) {
        this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14);
        uVar4 = F_0057f8d0(this_00,iVar5);
        if (uVar4 == 0) {
          uVar4 = F_0057f8d0(this_00,iVar5);
        }
        uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar3 + 0x18),iVar5,uVar4,0);
        return uVar4;
      }
      if (iVar2 == *(int *)((int)this + 0x90)) break;
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = iVar2;
    }
  }
LAB_00587870: ;
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18),iVar5,this,0);
  return uVar4;
}

/* ref: FUN_00587890 */
uint F_00587890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 == 3) || (uVar2 == 2)) || ((char)param_1 != '\0')) &&
     ((*(byte *)((int)this + 0xf8) & 0x80) == 0)) {
    iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
    if (*(short *)(iVar1 + 0xc68) == 0) {
      uVar2 = F_005877e0(this,*(undefined4 *)(iVar1 + 0xc58));
      return uVar2;
    }
    uVar2 = F_005877e0(this,*((undefined4 *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc))));
  }
  return uVar2;
}

/* ref: FUN_005878f0 */
uint F_005878f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5878f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_0056b4e0(param_1,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    iVar1 = param_1[0x24];
    if (iVar1 != 0) {
      F_0057f0d0(param_1 + 9,iVar1,*(undefined4 *)(iVar1 + 8),0);
    }
    uVar3 = F_00578ee0(param_1 + 9,0);
    uVar3 = F_0055d7f0(param_1 + 9,uVar3,param_2);
    if ((char)param_3 != '\0') {
      ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1);
      uVar3 = F_0056b300(param_1,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00587960 */
uint F_00587960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_1);
  *(undefined1 *)((int)this + 0x10c) = (undefined1)param_1;
  if (((*(byte *)((int)this + 0x122) & 1) != 0) && (uVar1 = 0, param_2 != 0)) {
    uVar1 = F_0057f810(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),param_2);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0x10c) == '2')) {
      *(undefined1 *)((int)this + 0x10c) = 0x50;
    }
  }
  return uVar1;
}

/* ref: FUN_005879b0 */
uint F_005879b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5879b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * this_00;
  undefined3 extraout_var_00 = 0;
  
  this_00 = *(int * PTR32 *)(REFG(int, 0x1379860) + 0x14);
  if (*(char *)((int)this + 0x13c) != '\0') {
    piVar1 = *(int * PTR32 *)((int)this_00 + 0xb4);
    this_00 = (int *)*piVar1;
    if (this_00 != piVar1) {
      while (*(char *)(this_00[2] + 0x13a) != *(char *)((int)this + 0x13c)) {
        this_00 = (int *)*this_00;
        if (this_00 == piVar1) {
          return (uint)this_00;
        }
      }
      this_00 = (int *)this_00[2];
      if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this + 0xfb) & 4) != 0)) {
        if (param_1 != 0) {
          bVar2 = F_0056b630(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
          return CONCAT31(extraout_var,bVar2);
        }
        bVar2 = F_0056b780(this_00,0);
        this_00 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar2)));
      }
    }
  }
  return (uint)this_00;
}

/* ref: Component::GUI2::AtkUnitManager::vf3 */
unsigned int F_00587a40(unsigned int gen_a0)
{
  GEN_ENTER(0x587a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  pAVar1 = this + 0x100;
  if (pAVar1 != (undefined *)0x0) {
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(this + 0x180),0xc,0,this,0);
    }
    if (pAVar1 != (undefined *)0x0) {
      if (*(int *)(this + 0x180) == 0) {
        uVar4 = 0;
        uVar2 = F_00404270();
        puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar4);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
        }
        *(undefined4 * PTR32 *)(this + 0x180) = puVar3;
      }
      F_00565340(*(undefined * PTR32 *)(this + 0x180),0xc,0,0,pAVar1,this,0);
    }
  }
  return 0;
}

/* ref: FUN_00587ac0 */
unsigned int F_00587ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int * piVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)((int)this + 0xec);
    if (iVar1 != 0) {
      iVar2 = *(int *)(*param_1 + 0x90);
      iVar6 = iVar2;
      while (iVar6 != 0) {
        if (iVar1 == iVar2) {
          *(undefined4 *)((int)this + 0xec) = 0;
          break;
        }
        iVar1 = *(int *)(iVar1 + 8);
        iVar6 = iVar1;
      }
    }
    iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
    iVar2 = *param_1;
    if (iVar2 != 0) {
      if ((*(int *)(iVar1 + 0xc58) != 0) &&
         (bVar4 = F_0055de10(iVar2,*(int *)(iVar1 + 0xc58)), bVar4 != 0)) {
        *(undefined4 *)(iVar1 + 0xc58) = 0;
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar1 + 0xc68)) {
        piVar5 = (int *)(iVar1 + 0x58);
        do {
          if (*piVar5 == iVar2) {
            *piVar5 = 0;
            piVar5[1] = 0;
            piVar5[2] = 0;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 3;
        } while (iVar6 < *(short *)(iVar1 + 0xc68));
      }
    }
    if ((*param_1 != 0) && (iVar1 = *(int *)(REFG(int, 0x1379860) + 0x1c), *(int *)(iVar1 + 4) == *param_1))
    {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined1 *)(iVar1 + 0x20) = 0;
    }
    F_00580230(this,*param_1,1);
    if (*(int *)((int)this + 0xcc) == *param_1) {
      *(undefined4 *)((int)this + 0xcc) = 0;
    }
    if (*(int *)((int)this + 0xd0) == *param_1) {
      *(undefined4 *)((int)this + 0xd0) = 0;
    }
    F_00a4b450((undefined *)((int)this + 4),(uint)*(byte *)(*param_1 + 0x13a));
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,*param_1);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x94))((int *)*param_1);
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *param_1 = 0;
    }
  }
  return 0;
}

/* ref: FUN_00587c00 */
unsigned int F_00587c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x587c00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  int * piVar1;
  bool bVar2;
  int * piVar3;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar1 = (int *)*this_00;
    piVar3 = (int *)*piVar1;
    bVar2 = false;
    if (piVar3 != piVar1) {
      do {
        if (piVar3[2] == (*(int *)&gen_args[1])) break;
        if (piVar3[2] == (*(int *)&gen_args[2])) {
          bVar2 = true;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar1);
      if ((!bVar2) && (piVar3 != piVar1)) {
        F_005c4950(this_00,&(*(int *)&gen_args[2]));
        F_005ce470(this_00,&(*(int *)&gen_args[1]),piVar3,&(*(int *)&gen_args[2]));
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf31 */
uint F_00587c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587c60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0) && ((*(uint *)((*(int *)&gen_args[1]) + 0x120) >> 5 & 1) == 0)) {
    uVar3 = F_005ce470((*(undefined * PTR32 *)&gen_args[0]) + 0xb4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) + 4))),&(*(int *)&gen_args[1]));
    return uVar3;
  }
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  iVar2 = *(int *)(iVar1 + 4);
  piVar4 = (int *)F_004296a0(0xc,0,400);
  *piVar4 = iVar1;
  piVar4[1] = iVar2;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (*(int *)&gen_args[1]);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar4;
  *(int * PTR32 *)piVar4[1] = piVar4;
  return (uint)piVar4;
}

/* ref: FUN_00587d10 */
byte F_00587d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587d10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0x10) != 0)) {
    iVar1 = (*(ushort *)((*(int *)&gen_args[1]) + 0xf6) & 0xf) * 3 + 6;
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4)));
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == (*(int *)&gen_args[1])) {
        *(byte *)((*(int *)&gen_args[1]) + 0xf8) = *(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0xef;
        F_005cda40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4))),&(*(int *)&gen_args[1]),puVar3);
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00587d80 */
uint F_00587d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  F_00580230(this,param_1,0);
  iVar1 = *(int *)((int)this + 0xc0);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  if (*(int *)((int)this + 0xc4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00587df0 */
uint F_00587df0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x587df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * this;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  float fVar7;
  
  uVar5 = param_2;
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xfb) & 1) == 0) {
      bVar4 = *(byte *)(param_2 + 0x13c);
    }
    else {
      bVar4 = *(byte *)(param_2 + 0x13a);
    }
    uVar6 = (uint)bVar4;
    if (uVar6 == 0) {
      uVar5 = F_005878f0(param_2,param_3,param_4);
      return uVar5;
    }
    puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xb4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      this = (int *)puVar2[2];
      uVar5 = (uint)*(byte *)(this + 0x4f);
      if ((uVar5 == uVar6) ||
         (((*(byte *)((int)this + 0xfb) & 1) != 0 && (*(byte *)((int)this + 0x13a) == uVar6)))) {
        bVar4 = F_0056b4e0(this,param_3);
        uVar5 = CONCAT31(extraout_var,bVar4);
        if (bVar4 != 0) {
          iVar3 = this[0x24];
          if (iVar3 != 0) {
            F_0057f0d0(this + 9,iVar3,*(undefined4 *)(iVar3 + 8),0);
          }
          fVar7 = param_3;
          uVar5 = F_00578ee0(this + 9,0);
          uVar5 = F_0055d7f0(this + 9,uVar5,fVar7);
          if ((char)param_4 != '\0') {
            ((code *)*(gen_code32 *)(*this + 0x78))(this);
            uVar5 = F_0056b300(this,0);
          }
        }
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00587ef0 */
uint F_00587ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x587ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *(uint *)this = uVar1;
  *(uint *)uVar1 = uVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00587f50 */
uint F_00587f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x587f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  short * psVar3;
  int iVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  uVar6 = 0;
  if (*(short *)((int)this + 0x10) != 0) {
    while (*((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uint)uVar6 * 0x10))) != (param_1 & 0xffff)) {
      uVar6 = uVar6 + 1;
      if (*(ushort *)((int)this + 0x10) <= uVar6) {
        return 0;
      }
    }
    iVar11 = (uint)uVar6 * 0x10 + *(int *)((int)this + 0xc);
    if (iVar11 != 0) {
      uVar6 = *(ushort *)((int)this + 0x18);
      bVar5 = *(ushort *)((int)this + 0x12) <= uVar6;
      if (bVar5) {
        uVar7 = F_00404270();
        piVar8 = (int *)F_00406bd0(0x24,0,uVar7,0);
      }
      else {
        piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x14) + (uint)uVar6 * 0x24)));
        *(ushort *)((int)this + 0x18) = uVar6 + 1;
      }
      piVar10 = (int *)0x0;
      if (piVar8 != (int *)0x0) {
        piVar8[4] = 0;
        piVar8[7] = 0;
        piVar8[6] = 1;
        piVar8[2] = 1;
        *(undefined2 *)((int)piVar8 + 0x12) = 1;
        *piVar8 = iVar11;
        piVar8[1] = 0;
        piVar8[3] = 0;
        piVar8[5] = 0;
        piVar8[8] = 0x7f0000;
        psVar3 = *(short * PTR32 *)(iVar11 + 0xc);
        if (psVar3 != (short *)0x0) {
          *(undefined2 *)((int)piVar8 + 0x22) = 0x807f;
          sVar1 = psVar3[1];
          sVar2 = *psVar3;
          *(short *)((int)piVar8 + 0x12) = sVar1;
          *(short *)(piVar8 + 4) = sVar1 - sVar2;
        }
        piVar10 = piVar8;
        if (bVar5) {
          iVar11 = *(int *)((int)this + 0x1c);
          *(int *)((int)this + 0x1c) = iVar11 + 1;
          piVar8[7] = iVar11;
          iVar11 = *(int *)this;
          iVar4 = *(int *)(iVar11 + 4);
          piVar9 = (int *)F_004296a0(0xc,0,400);
          piVar9[1] = iVar4;
          *piVar9 = iVar11;
          if ((uint *)(piVar9 + 2) != (uint *)0x0) {
            piVar9[2] = (int)piVar8;
          }
          if (*(int *)((int)this + 4) == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
          *(int * PTR32 *)(iVar11 + 4) = piVar9;
          *(int * PTR32 *)piVar9[1] = piVar9;
        }
      }
      return (uint)piVar10;
    }
  }
  return 0;
}

/* ref: FUN_005880a0 */
uint F_005880a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5880a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  if ((*(int *)&gen_args[1]) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  piVar4 = (int *)*piVar1;
  piVar3 = piVar4;
  if (piVar4 != piVar1) {
    while (*(int *)(piVar3[2] + 0x1c) != (*(int *)&gen_args[1])) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return 0xffffffff;
      }
    }
    if (piVar3[2] != 0) {
      if (piVar4 != piVar1) {
        while (iVar2 = piVar4[2], *(int *)(iVar2 + 0x1c) != (*(int *)&gen_args[1])) {
          piVar4 = (int *)*piVar4;
          if (piVar4 == piVar1) {
            return 0;
          }
        }
        if (iVar2 != 0) {
          F_00406ad0(iVar2);
          piVar4[2] = 0;
        }
        F_005cddb0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),piVar4);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00588130 */
unsigned int F_00588130(unsigned int gen_a0)
{
  GEN_ENTER(0x588130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != *(int *)((int)this + 0xc)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0xc),0);
    *(int *)((int)this + 0xc) = iVar1;
  }
  return 0;
}

/* ref: FUN_00588170 */
uint F_00588170(unsigned int gen_a0)
{
  GEN_ENTER(0x588170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005c9640((undefined *)((int)this + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x18,400);
  uVar1 = F_00a4b380(this);
  return uVar1;
}

/* ref: FUN_005881b0 */
byte F_005881b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5881b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_005cd5c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
}

/* ref: FUN_005881e0 */
uint F_005881e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5881e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * in_EAX = 0;
  int * piVar6;
  int * piVar7;
  
  iVar4 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    in_EAX = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    piVar7 = (int *)*in_EAX;
    if (piVar7 != in_EAX) {
      do {
        if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)piVar7[2]) break;
        piVar7 = (int *)*piVar7;
      } while (piVar7 != in_EAX);
      if (piVar7 != in_EAX) {
        piVar2 = piVar7 + 3;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
          piVar6 = (int *)*piVar2;
          if (piVar6 != piVar2) {
            do {
              if ((undefined *)piVar6[2] == (*(undefined * PTR32 *)&gen_args[1])) break;
              piVar6 = (int *)*piVar6;
            } while (piVar6 != piVar2);
            if (piVar6 != piVar2) {
              (*(undefined * PTR32 *)&gen_args[1]) = pvVar1;
              F_005cd750(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar6);
              pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
            }
          }
          (*(undefined * PTR32 *)&gen_args[1]) = pvVar1;
          iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (*(int *)(iVar3 + 0xc) == iVar4) {
            *(undefined4 *)(iVar3 + 0xc) = 0;
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          iVar4 = piVar7[2];
          piVar2 = *(int * PTR32 *)(iVar4 + 0x18);
          if (piVar2 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            *(undefined4 *)(iVar4 + 0x18) = 0;
          }
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 8) = 0;
          puVar5 = (undefined4 *)piVar7[2];
          if (puVar5 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
            piVar7[2] = 0;
          }
          in_EAX = (int *)F_005cd6a0((*(undefined * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)&gen_args[1]),piVar7);
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005882a0 */
byte F_005882a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5882a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = F_005809c0(this);
    if (uVar2 == 2) {
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 8) = 1;
      return 1;
    }
LAB_005882c1: ;
    if (uVar2 != 0) goto LAB_005882d2;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = F_0056bd70(this);
      if (uVar2 == 2) {
        *(undefined4 *)((int)this + 0x30) = 0;
        *(undefined4 *)((int)this + 8) = 2;
        return 1;
      }
      goto LAB_005882c1;
    }
    if (iVar1 == 2) {
      uVar2 = F_00573740(this);
      if (uVar2 != 2) goto LAB_005882c1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 0x30) = 0;
LAB_005882d2: ;
  return uVar2 != 0;
}

/* ref: FUN_00588320 */
uint F_00588320(unsigned int gen_a0)
{
  GEN_ENTER(0x588320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar1 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))),0x49,0,this,0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00588350 */
uint F_00588350(unsigned int gen_a0)
{
  GEN_ENTER(0x588350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))),3,0,this,0);
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))),4,0,this,0);
    uVar1 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))),5,0,this,0);
  }
  return uVar1;
}

/* ref: FUN_005883a0 */
uint F_005883a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5883a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined2 uVar2;
  int * this;
  undefined * this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  this = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x6c) + 0x14))) + 0xe4)));
  if (this == (int *)0x0) {
    return 0;
  }
  uVar5 = (uint)this[0x3d] >> 0x14 & 0xf;
  if ((uVar5 == 3) || (uVar5 == 2)) {
    F_00573cd0(param_1);
  }
  ((code *)*(gen_code32 *)(*this + 0x14))(this,1);
  *(uint *)((int)param_1 + 0x74) = param_2;
  uVar5 = F_007e8d80(this);
  *(uint *)((int)param_1 + 0x78) = uVar5;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x6c) + 0x14)));
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_2 + 0xc))(param_2);
  uVar5 = F_0057f8d0(this_00,uVar5);
  if ((*(int *)((int)param_1 + 0x78) != 0) && (uVar5 != 0)) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x70)));
    fVar1 = ((float)GEN_TOF((((float10)1 / (float10)*(float *)(uVar5 + 0x11c)) *
                   (float10)*(float *)(uVar5 + 0x118))));
    if (iVar3 != 0) {
      F_00567d00(iVar3,fVar1,fVar1);
    }
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_2 + 0xc))(param_2);
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x84) = *(uint *)(uVar5 + 0x84) & 0xffefffff;
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x80;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x84))) + 0xc))))
                    (*(int *)((int)param_1 + 0x78) + 0x84);
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x84) = *(uint *)(uVar5 + 0x84) | 0x100000;
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) & 0xffffff7f;
  }
  ((code *)*(gen_code32 *)(*(int *)param_2 + 4))(param_2,&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
  F_005c0450(*(undefined4 *)((int)param_1 + 0x78),(int)(*(float *)(gen_frame + 0x4)) & 0xffff,(int)(*(float *)(gen_frame + 0x8)) & 0xffff);
  uVar2 = *(undefined2 *)(param_2 + 0x12);
  iVar3 = *(int *)((int)param_1 + 0x78);
  *(undefined2 *)(iVar3 + 0x94) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(iVar3 + 0x96) = uVar2;
  F_0056e340(*(undefined * PTR32 *)((int)param_1 + 0x78));
  *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x98))) = *(undefined4 *)(param_2 + 0x14);
  *((undefined2 *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0x9c))) = *(undefined2 *)(param_2 + 0x18);
  iVar3 = this[0x24];
  if (iVar3 != 0) {
    F_0057f0d0(this + 9,iVar3,*(undefined4 *)(iVar3 + 8),0);
  }
  iVar3 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + 0xa4)));
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xb4);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    iVar4 = *(int *)(iVar3 + 0xbc);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(iVar3 + 0xb8);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
  }
  return *(uint *)((int)param_1 + 0x78);
}

/* ref: FUN_005885a0 */
uint F_005885a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5885a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  uVar3 = F_00404270();
  puVar4 = (undefined4 *)F_00406bd0(8,0,uVar3,0);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_2;
    puVar4[1] = param_3;
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 4);
    piVar5 = (int *)F_004296a0(0xc,0,400);
    *piVar5 = iVar1;
    piVar5[1] = iVar2;
    if ((uint *)(piVar5 + 2) != (uint *)0x0) {
      piVar5[2] = (int)puVar4;
    }
    if (param_1[1] == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar5;
    *(int * PTR32 *)piVar5[1] = piVar5;
  }
  return (uint)piVar5;
}

/* ref: FUN_00588630 */
uint F_00588630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x588630u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar1 = (int *)*param_1;
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (iVar2 = piVar3[2], *(int *)(iVar2 + 4) != param_2) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return (uint)piVar3;
      }
    }
    if (piVar3 != piVar1) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00429760(piVar3,0xc,400);
      param_1[1] = param_1[1] + -1;
    }
    piVar3 = (int *)F_00406ad0(iVar2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00588690 */
unsigned int F_00588690(unsigned int gen_a0)
{
  GEN_ENTER(0x588690u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar1 = (int *)*param_1;
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    iVar2 = piVar4[2];
    piVar3 = (int *)*piVar4;
    if (piVar4 != (int *)*param_1) {
      *(int * PTR32 *)piVar4[1] = piVar3;
      *(int *)(*piVar4 + 4) = piVar4[1];
      F_00429760(piVar4,0xc,400);
      param_1[1] = param_1[1] + -1;
    }
    piVar4 = piVar3;
    if (iVar2 != 0) {
      F_00406ad0(iVar2);
    }
  }
  piVar1 = (int *)*param_1;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar4 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar4;
      F_00429760(piVar4,0xc,400);
      piVar4 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return 0;
}

/* ref: FUN_00588720 */
unsigned int F_00588720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x588720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80),6,0,this,0);
    }
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80),7,0,this,0);
    }
    if (*(undefined * PTR32 *)(param_1 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_1 + 0x80),3,0,this,0);
    }
  }
  return 0;
}

/* ref: FUN_00588780 */
uint F_00588780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x588780u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  undefined4 * in_ecx;
  ushort uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  ushort uVar7;
  undefined * pvVar8;
  uint uVar9;
  int * piVar10;
  float10 fVar11;
  char * pcVar12;
  
  uVar9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
    piVar10 = *(int * PTR32 *)(iVar1 + 0x14);
    uVar4 = ((code *)*(gen_code32 *)(*piVar10 + 0x34))(piVar10,&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),&(*(undefined4 * PTR32 *)(gen_frame + 0x24)),0);
    if ((char)uVar4 == '\0') {
      uVar4 = *(uint *)(iVar1 + 0x18);
      uVar3 = *(ushort *)(uVar4 + 0xc5c);
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)(uint)uVar3;
      uVar7 = *(ushort *)(uVar4 + 0xc5e);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)(uint)uVar7;
    }
    else {
      uVar3 = (ushort)(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      uVar7 = (ushort)(*(undefined4 * PTR32 *)(gen_frame + 0x24));
    }
    if ((short)uVar3 < 0) {
      return uVar4;
    }
    if ((short)uVar7 < 0) {
      return uVar4;
    }
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
    if (*(uint *)(uVar4 + 0x234) < (uint)(int)(short)uVar3) {
      return uVar4;
    }
    if (*(uint *)(uVar4 + 0x238) < (uint)(int)(short)uVar7) {
      return uVar4;
    }
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
  uVar4 = 1;
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[1]) & 0xff;
  piVar10 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x50);
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38));
  do {
    if (((((*(uint *)(gen_frame + 0x1c)) & uVar4) == 0) && (-1 < (int)uVar9)) && (uVar9 < 4)) {
      *(*(undefined1 * PTR32 *)(gen_frame + 0x30)) = 0;
      piVar6 = (int *)*piVar10;
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
        *piVar10 = 0;
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
    }
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (*(undefined1 * PTR32 *)(gen_frame + 0x30)) + 0x28;
    uVar9 = uVar9 + 1;
    piVar10 = piVar10 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
  } while ((int)uVar9 < 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)((int)pvVar8 + 0x1c);
  puVar5 = (undefined4 *)((int)pvVar8 + 0x3c);
  (*(char *)(gen_frame + 0x4b)) = '\0';
  *(undefined1 *)((int)pvVar8 + 0xdc) = (undefined1)(*(uint *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)0x1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar5;
  do {
    if ((*(uint *)((int)pvVar8 + 0xd8) & (*(uint *)(gen_frame + 0x1c)) & (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x30))) != 0) {
      if ((*(int *)(gen_frame + 0xc)) == 1) {
        pcVar12 = "Tooltip";
      }
      else if ((*(int *)(gen_frame + 0xc)) == 2) {
        pcVar12 = "ItemDetail";
      }
      else {
        puVar5 = (undefined4 *)((*(int *)(gen_frame + 0xc)) + -3);
        if (puVar5 != (undefined4 *)0x0) goto LAB_00588a24;
        pcVar12 = "ActionDetail";
      }
      puVar5 = (undefined4 *)F_0057f860(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar8 + 0x14) + 0x14))),pcVar12);
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      if (puVar5 != (undefined4 *)0x0) {
        piVar10 = puVar5 + 0x60;
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar10;
        if (piVar10 != (int *)0x0) {
          piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10)));
          in_ecx = (*(undefined4 * PTR32 *)&gen_args[3]);
          puVar5 = (undefined4 *)0x0;
          pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38));
          if (piVar6 != (int *)0x0) {
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x30)) != (undefined1 *)0x2) {
              *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 5) = 0;
              *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
            }
            uVar9 = ((code *)*(gen_code32 *)(*piVar10 + 4))(piVar10,0,(*(undefined4 *)&gen_args[4]),(*(undefined4 * PTR32 *)&gen_args[3]));
            if ((char)uVar9 != '\0') {
              if ((in_ecx == (undefined4 *)0x0) || ((char)(*(undefined4 *)&gen_args[6]) != '\0')) {
                iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x14);
                piVar2 = *(int * PTR32 *)(iVar1 + 0x14);
                uVar9 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),0);
                if ((char)uVar9 == '\0') {
                  iVar1 = *(int *)(iVar1 + 0x18);
                  (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(iVar1 + 0xc5c);
                  (*(uint *)(gen_frame + 0x14)) = (uint)*(ushort *)(iVar1 + 0xc5e);
                }
                ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,((ushort *)(gen_frame + 0x3c)),((short *)(gen_frame + 0x40)),0);
                ((code *)*(gen_code32 *)(*piVar6 + 0x2c))
                          (piVar6,(uint)(ushort)((short)(*(uint *)(gen_frame + 0x10)) - (((ushort *)(gen_frame + 0x3c))[0] >> 1)),
                           (uint)(ushort)(((short)(*(uint *)(gen_frame + 0x14)) - ((short *)(gen_frame + 0x40))[0]) - 8));
                F_0056b300(piVar6,1);
              }
              else {
                (*(float *)(gen_frame + 0x2c)) = gen_bits2f(in_ecx[0xc]);
                (*(float *)(gen_frame + 0x28)) = gen_bits2f(in_ecx[0xd]);
                ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,&(*(uint *)&gen_args[1]),((ushort *)(gen_frame + 0x44)),0);
                if ((*(gen_code32 *)&gen_args[5]) == (code *)0x0) {
                  uVar3 = F_0055a020(in_ecx);
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)(uVar3 >> 1));
                  uVar9 = (*(uint *)&gen_args[1]) >> 1 & 0x7fff;
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar9);
                  fVar11 = (float10)(uVar3 >> 1) + (float10)(*(float *)(gen_frame + 0x2c));
                }
                else {
                  ((code *)(*(gen_code32 *)&gen_args[5]))(&(*(float *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x28)),in_ecx);
                  fVar11 = (float10)(*(float *)(gen_frame + 0x2c));
                  uVar9 = (*(uint *)&gen_args[1]) >> 1 & 0x7fff;
                  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar9);
                }
                (*(float *)(gen_frame + 0x18)) = (float)(fVar11 - (float10)uVar9);
                ((code *)*(gen_code32 *)(*piVar6 + 0x2c))
                          (piVar6,(int)(fVar11 - (float10)uVar9) & 0xffff,
                           (int)(((float10)(*(float *)(gen_frame + 0x28)) - (float10)((ushort *)(gen_frame + 0x44))[0]) -
                                (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xffff);
                uVar9 = F_0056b300(piVar6,1);
                piVar10 = (*(int * PTR32 *)(gen_frame + 0x34));
                if ((uVar9 & 4) != 0) {
                  iVar1 = *piVar6;
                  uVar3 = F_0055a030(in_ecx);
                  ((code *)*(gen_code32 *)(iVar1 + 0x34))
                            (piVar6,(int)(((float10)uVar3 + (float10)(*(float *)(gen_frame + 0x28))) +
                                         (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xffff);
                  piVar10 = (*(int * PTR32 *)(gen_frame + 0x34));
                }
              }
            }
            *(*(undefined4 * PTR32 *)(gen_frame + 0x24)) = piVar10;
            (*(char *)(gen_frame + 0x4b)) = '\x01';
            puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x38));
          }
        }
      }
    }
LAB_00588a24: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 10;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (undefined1 *)((int)((int)(uintptr_t)(*(undefined1 * PTR32 *)(gen_frame + 0x30))) << 1 | (uint)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x30)) < 0));
    if (3 < (*(int *)(gen_frame + 0xc))) {
      if ((*(char *)(gen_frame + 0x4b)) != '\0') {
        *(undefined4 * PTR32 *)((int)pvVar8 + 0x18) = (*(undefined4 * PTR32 *)&gen_args[3]);
        *(undefined4 *)((int)pvVar8 + 0xd0) = (*(undefined4 *)&gen_args[2]);
        puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
      }
      return (uint)puVar5;
    }
  } while( true );
}

/* ref: FUN_00588ae0 */
unsigned int F_00588ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x588ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (((*(int *)((int)this + 0x24) != 0) && (*(char *)((int)this + 0x46) == '\0')) &&
     (*(int *)((int)this + 0x30) != 0)) {
    *(undefined1 *)((int)this + 0x46) = 1;
    uVar1 = *(uint *)((int)this + 0x20);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x14) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x14);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    F_00cb45d0(this,0);
    F_00cb4540(this,0,*(undefined4 *)(iVar2 + 4));
    F_00cb4650(this,iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x48))))(*(int * PTR32 *)((int)this + 0x30),this);
  }
  return 0;
}

/* ref: FUN_00588b50 */
uint F_00588b50(unsigned int gen_a0)
{
  GEN_ENTER(0x588b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)this != 0) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xd8)));
    if ((uVar2 != 0) && (piVar1 = (int *)(uVar2 + 0x180), piVar1 != (int *)0x0)) {
      if (*(char *)((int)this + 0xd) != '\0') {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
      }
      uVar2 = F_00580c50(this);
      if ((char)uVar2 == '\0') {
        if (*(char *)((int)this + 0xc) != '\0') {
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,2,0,0);
          *(undefined1 *)((int)this + 0xc) = 0;
          *(undefined1 *)((int)this + 0xd) = 0;
          return uVar2;
        }
      }
      else if ((*(char *)((int)this + 0xc) == '\0') || (*(char *)((int)this + 0xd) != '\0')) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))
                          (piVar1,1,*(int *)((int)this + 8) + 0x144,
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x90))));
        *(undefined1 *)((int)this + 0xc) = 1;
      }
    }
    *(undefined1 *)((int)this + 0xd) = 0;
  }
  return uVar2;
}

/* ref: FUN_00588be0 */
unsigned int F_00588be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00583770(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3,0);
  }
  return 0;
}

/* ref: FUN_00588c10 */
unsigned int F_00588c10(unsigned int gen_a0)
{
  GEN_ENTER(0x588c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  int iVar5;
  code * pcVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    this_00 = (undefined *)puVar2[2];
    if ((((*(byte *)((int)this_00 + 0x2e) & 8) != 0) &&
        (piVar3 = *(int * PTR32 *)((int)this_00 + 4), piVar3 != (int *)0x0)) &&
       ((*(byte *)((int)this_00 + 0x2c) & 8) != 0)) {
      piVar4 = *(int * PTR32 *)((int)this + 0x18);
      if ((*(byte *)(piVar4 + 0x3e) & 8) != 0) {
        uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4);
        uVar7 = uVar7 & 0xffff;
        uVar8 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
        F_00560e00(this_00,uVar8 & 0xffff,uVar7);
        iVar5 = piVar3[0x24];
        if (iVar5 != 0) {
          F_0057f0d0(piVar3 + 9,iVar5,*(undefined4 *)(iVar5 + 8),0);
        }
      }
      pcVar6 = *(gen_code32 *)(*piVar3 + 0x9c);
      *(undefined2 *)(piVar3 + 0x4a) = *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x128)));
      (*pcVar6)(piVar3);
    }
  }
  return 0;
}

/* ref: FUN_00588cd0 */
uint F_00588cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  code * pcVar6;
  int * piVar7;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14)));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  puVar3 = (undefined4 *)*puVar2;
  *param_1 = (int)puVar3;
  while (puVar3 != puVar2) {
    iVar4 = ((undefined4 *)*param_1)[2];
    if (iVar4 == param_2) {
      if (*(uint *)(iVar4 + 0x14) == 0) goto LAB_00588db6;
      piVar5 = *(int * PTR32 *)(iVar1 + 0xb4);
      piVar7 = (int *)*piVar5;
      if (piVar7 == piVar5) goto LAB_00588db6;
      goto LAB_00588d30;
    }
    puVar3 = *(undefined4 * PTR32 *)*param_1;
    *param_1 = (int)puVar3;
  }
  goto LAB_00588de4;
  while (piVar7 = (int *)*piVar7, piVar7 != piVar5) {
LAB_00588d30: ;
    if ((uint)*(byte *)(piVar7[2] + 0x13a) == *(uint *)(iVar4 + 0x14)) {
      piVar5 = (int *)piVar7[2];
      if (piVar5 != (int *)0x0) {
        if (*(int *)(iVar4 + 8) != 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 0x80)));
          if (this_00 != (undefined *)0x0) {
            F_00583770(this_00,0x16,(uint)*(byte *)((int)piVar5 + 0x13a),(int)this + 4,0);
          }
        }
        *(undefined1 *)((int)piVar5 + 0x13b) = 0;
        if ((char)param_3 == '\0') {
          piVar5[0x48] = piVar5[0x48] & 0xfffffbff;
        }
        else {
          piVar5[0x48] = piVar5[0x48] | 0x400;
        }
        pcVar6 = *(gen_code32 *)(*piVar5 + 0x18);
        *(byte *)(piVar5 + 0x3e) = *(byte *)(piVar5 + 0x3e) & 0xfe;
        (*pcVar6)(piVar5,1,0);
        ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5,1);
      }
      break;
    }
  }
LAB_00588db6: ;
  piVar5 = (int *)*param_1;
  iVar1 = *piVar5;
  if (piVar5 != (int *)*(int *)((int)this + 8)) {
    *(int *)piVar5[1] = iVar1;
    *(int *)(*piVar5 + 4) = piVar5[1];
    F_00429760(piVar5,0xc,400);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  }
  *param_1 = iVar1;
LAB_00588de4: ;
  if (param_2 != 0) {
    F_00406ad0(param_2);
  }
  return (uint)param_1;
}

/* ref: FUN_00588e00 */
unsigned int F_00588e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x588e00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[1]);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    puVar4 = (undefined4 *)F_00588cd0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),puVar4[2],uVar3);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    do {
      piVar2 = (int *)*piVar5;
      F_00429760(piVar5,0xc,400);
      piVar5 = piVar2;
    } while (piVar2 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  }
  return 0;
}

/* ref: FUN_00588e70 */
uint F_00588e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x588e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * _Dst;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar2 = F_00404270();
  _Dst = (undefined4 *)F_00406bd0(0x30,0,uVar2,0);
  if (_Dst == (undefined4 *)0x0) {
    return 0;
  }
  F_00c48350(_Dst,0,0x30);
  _Dst[8] = GEN_FLT_TO(_Dst[8], REFG(float, 0x1087f04));
  puVar5 = param_1;
  puVar6 = _Dst;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)((int)this + 8);
  iVar1 = *(int *)(iVar4 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar4;
  piVar3[1] = iVar1;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)_Dst;
  }
  if (*(int *)((int)this + 0xc) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int * PTR32 *)(iVar4 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)_Dst;
}

/* ref: FUN_00588f20 */
uint F_00588f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x588f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00583770((undefined *)((int)this + 0x14),param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00588f40 */
uint F_00588f40(unsigned int gen_a0)
{
  GEN_ENTER(0x588f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 4;
  }
  F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x23c))),4,0,iVar1,0);
  uVar2 = F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x23c))),5,0,(int)this + 4,0);
  return uVar2;
}

/* ref: FUN_00588f80 */
uint F_00588f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x588f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
    uVar1 = F_00583770(*(undefined * PTR32 *)((int)this + 0x28),param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00588fa0 */
uint F_00588fa0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x588fa0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  uint uVar1;
  undefined * this;
  uVar1 = (*(uint *)&gen_args[1]);
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]))) {
  case 0: ;
    uVar1 = F_00559eb0(*(undefined4 *)((*(int *)&gen_args[0]) + 8),(int)(*(float *)&gen_args[2]) & 0xffff);
    return uVar1;
  case 1: ;
    uVar1 = F_00559f40(*(undefined4 *)((*(int *)&gen_args[0]) + 8),(int)(*(float *)&gen_args[2]) & 0xffff);
    return uVar1;
  case 2: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      uVar1 = F_00567d90(*(int *)((*(int *)&gen_args[0]) + 8),(*(float *)&gen_args[2]));
      return uVar1;
    }
    break;
  case 3: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      uVar1 = F_00567e10(*(int *)((*(int *)&gen_args[0]) + 8),(*(float *)&gen_args[2]));
      return uVar1;
    }
    break;
  case 5: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = (undefined1)(int)TRUNC((double)(*(float *)&gen_args[2]) * *(double *)&REFG(undefined, 0x1088100));
      *((undefined1 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x53))) = (undefined1)(*(uint *)&gen_args[1]);
      return CONCAT11((char)((ushort)((undefined2)0x27f) >> 8),(undefined1)(*(uint *)&gen_args[1])) | 0xc00;
    }
    break;
  case 6: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x7c))) = (short)(int)(*(float *)&gen_args[2]);
      return (*(uint *)&gen_args[1]);
    }
    break;
  case 7: ;
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + 0x7e))) = (short)(int)(*(float *)&gen_args[2]);
      return (int)(*(float *)&gen_args[2]);
    }
    break;
  case 8: ;
    this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8);
    if ((this == (undefined *)0x0) || (*(short *)((int)this + 0x18) != 3)) {
      this = (undefined *)0x0;
    }
    uVar1 = F_00560910((int)(*(float *)&gen_args[2]));
    uVar1 = F_00584110(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_005890d0 */
uint F_005890d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5890d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a10ec));
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00589110 */
uint F_00589110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  int iVar3;
  float * pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  sVar1 = *(short *)((*(int *)&gen_args[0]) + 0xac);
  if (sVar1 != 0) {
    iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x70);
    if (iVar7 != 0) {
      (*(float *)(gen_frame + 0xc)) = *(float *)(iVar7 + 0x30);
      (*(float *)(gen_frame + 0x8)) = *(float *)(iVar7 + 0x34);
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    if (*(int *)((*(int *)&gen_args[0]) + 0x84) == 0) {
      uVar2 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((*(int *)&gen_args[0]) + 0x6c));
      *(uint *)((*(int *)&gen_args[0]) + 0x84) = uVar2;
    }
    if (*(int *)((*(int *)&gen_args[0]) + 0x84) != 0) {
      (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x84) + 0x118)));
    }
    iVar3 = (int)*(short *)((*(int *)&gen_args[0]) + 0xa8);
    fVar5 = gen_bits2f(((int)sVar1 - (int)*(short *)((*(int *)&gen_args[0]) + 0xaa)) - iVar3);
    (*(float *)(gen_frame + 0x10)) = fVar5;
    (*(int *)(gen_frame + 0x14)) = iVar3;
    fVar5 = (float)((float10)(int)gen_fl2bits(fVar5) * (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x10)) = fVar5;
    if ((*(byte *)((*(int *)&gen_args[0]) + 0xae) & 0x10) == 0) {
      iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x98);
      iVar6 = *(int *)((*(int *)&gen_args[0]) + 0x9c) - iVar7;
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar6);
      (*(float *)(gen_frame + 0x18)) = (float)iVar6;
      fVar8 = (float10)(int)(short)(*(uint *)&gen_args[1]) - (float10)(*(float *)(gen_frame + 0xc));
    }
    else {
      uVar2 = (*(uint *)&gen_args[1]);
      if (iVar7 != 0) {
        uVar2 = (uint)*(ushort *)(iVar7 + 0x7e);
      }
      iVar7 = *(int *)((*(int *)&gen_args[0]) + 0x98);
      iVar6 = *(int *)((*(int *)&gen_args[0]) + 0x9c) - iVar7;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar6);
      (*(float *)(gen_frame + 0x18)) = (float)iVar6;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar2 & 0xffff);
      fVar8 = ((float10)(uVar2 & 0xffff) + (float10)(*(float *)(gen_frame + 0x8))) - (float10)(int)(short)(*(uint *)&gen_args[1]);
    }
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar4 = (float *)&(*(uint *)&gen_args[1]);
    fVar5 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x18)) * (fVar8 - (float10)iVar3)) / (float10)fVar5)));
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar5);
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x18));
    if (!((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x18)))) {
      pfVar4 = &(*(float *)(gen_frame + 0x10));
    }
    if (!(0.0 < *pfVar4)) {
      pfVar4 = &(*(float *)(gen_frame + 0x8));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar4);
    uVar2 = F_0056cef0((*(int *)&gen_args[0]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    return uVar2 + iVar7;
  }
  return *(uint *)((*(int *)&gen_args[0]) + 0x98);
}

/* ref: FUN_00589280 */
uint F_00589280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x104) != 0) {
    if (param_1 != 0) {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x104) + 0xfe)));
      *pbVar1 = *pbVar1 | 1;
      F_00584110(*(undefined * PTR32 *)((int)this + 0x104),param_1);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
      }
    }
    uVar2 = *(uint *)((int)this + 0x104);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) =
           *(uint *)(uVar2 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
      *(uint *)(uVar2 + 0x88) =
           *(uint *)(uVar2 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
    }
  }
  return uVar2;
}

/* ref: FUN_00589320 */
byte F_00589320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  
  if (*(int *)((int)this + 0x104) != 0) {
    bVar3 = 0;
    if (param_1 != 0) {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x104) + 0xfe)));
      *pbVar1 = *pbVar1 & 0xfe;
      bVar3 = F_005842e0(*(undefined * PTR32 *)((int)this + 0x104),param_1,0);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
      }
    }
    iVar2 = *(int *)((int)this + 0x104);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x84) =
           *(uint *)(iVar2 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(iVar2 + 0x84)) & 0x100000;
      *(uint *)(iVar2 + 0x88) =
           *(uint *)(iVar2 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(iVar2 + 0x88)) & 0x80;
    }
    return bVar3;
  }
  return 0;
}

/* ref: FUN_005893d0 */
unsigned int F_005893d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5893d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(char *)((int)this + 0x89) = (char)param_1;
  if ((char)param_1 != '\0') {
    F_00581640(this);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentButton::vf16 */
uint F_005893f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5893f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  short sVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x114) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x14);
  this_00 = (undefined *)F_0055d920(this + 4,*(undefined4 *)(this + 0x120));
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x104) = this_00;
  uVar4 = F_0055d920(this + 4,*(undefined4 *)(this + 0x124));
  *(uint *)(this + 0x108) = uVar4;
  if (this_00 == (undefined *)0x0) {
    return uVar4;
  }
  if (*(int *)(this + 0x128) != 0) {
    uVar4 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)(this + 0x128),
                         (uint)*(byte *)((int)this_00 + 0x114));
    F_00584110(this_00,uVar4);
  }
  iVar1 = *(int *)(this + 0x104);
  if (iVar1 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = (short)(int)*(float *)(iVar1 + 0x38);
  }
  iVar6 = (int)sVar3;
  *(int *)(this + 0x94) = iVar6;
  if (iVar1 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = (short)(int)*(float *)(iVar1 + 0x3c);
  }
  *(int *)(this + 0x98) = (int)sVar3;
  switch((unsigned int)(uintptr_t)(*(byte *)(iVar1 + 0xfc) & 0xf)) {
  case 0: ;
  case 3: ;
  case 6: ;
    if (*(int *)(this + 0x108) == 0) {
      uVar4 = -iVar6;
    }
    else {
      uVar4 = (short)(int)*((float *)GEN_TOP((*(int *)(this + 0x108) + 0x38))) - iVar6;
    }
    break;
  case 1: ;
  case 4: ;
  case 7: ;
    if (*(int *)(this + 0x108) == 0) {
      uVar4 = -iVar6 >> 0x1f;
      iVar6 = ((-iVar6 ^ uVar4) - uVar4) * 2;
    }
    else {
      uVar4 = (short)(int)*((float *)GEN_TOP((*(int *)(this + 0x108) + 0x38))) - iVar6;
      uVar5 = (int)uVar4 >> 0x1f;
      iVar6 = ((uVar4 ^ uVar5) - uVar5) * 2;
    }
    goto LAB_005895ad;
  case 2: ;
  case 5: ;
  case 8: ;
    iVar2 = *(int *)(this + 0x108);
    if (iVar2 == 0) {
      sVar7 = 0;
      uVar4 = 0;
    }
    else {
      sVar7 = (short)(int)*(float *)(iVar2 + 0x38);
      uVar4 = (uint)*(ushort *)(iVar2 + 0x7c);
    }
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar1 + 0x7c);
    }
    uVar4 = ((uVar4 - uVar5) - iVar6) + (int)sVar7;
    break;
  default: ;
    goto switchD_00589513_default;
  }
  iVar6 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
LAB_005895ad: ;
  *(int *)(this + 0x9c) = iVar6;
switchD_00589513_default: ;
  if (*(int *)(this + 0x70) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x70) + 0x7e)));
  }
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x7e);
  }
  *(uint *)(this + 0xa0) = (uVar4 - uVar5) - (int)sVar3;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xfe) = *(byte *)(iVar1 + 0xfe) | 1;
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf16 */
unsigned int F_00589610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = param_1;
    pAVar4 = this + 0x134;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pAVar4 = pAVar4 + 4;
    }
    uVar1 = F_0055d920(this + 4,*(undefined4 *)(this + 0x148));
    *(uint *)(this + 0x130) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x14c);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x4)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x144);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
    (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(param_1 + 2);
    F_005893f0((undefined *)this,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf16 */
unsigned int F_00589690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_0055d920(this + 4,param_1[5]);
    *(uint *)(this + 0x130) = uVar1;
    *(undefined2 *)(this + 0x134) = *(undefined2 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x10)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x18)) = param_1[7];
    (*(undefined4 *)(gen_frame + 0x4)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = param_1[4];
    (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(param_1 + 2);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
    F_005893f0((undefined *)this,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00589700 */
uint F_00589700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x11f) != (char)param_1) {
    *(char *)((int)this + 0x11f) = (char)param_1;
    if ((char)param_1 == '\0') {
      *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
      F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),3,4,this,0);
      uVar1 = F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),5,4,this,0);
    }
    else {
      uVar1 = F_00565340((undefined *)(REFG(int, 0x1379860) + 0x23c),3,4,0,REFG(int, 0x1379860),this,0);
      if (uVar1 != 0) {
        *(uint *)(uVar1 + 0x14) = *(uint *)(uVar1 + 0x14) | 0x400000;
      }
      uVar2 = F_00565340((undefined *)(REFG(int, 0x1379860) + 0x23c),5,4,0,REFG(int, 0x1379860),this,0);
      uVar1 = 0;
      if (uVar2 != 0) {
        *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) | 0x400000;
        return uVar2;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005897b0 */
unsigned int F_005897b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5897b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x117) != (char)param_1) {
    iVar1 = *(int *)((int)this + 0x90);
    *(char *)((int)this + 0x117) = (char)param_1;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)((char)param_1 == '\0') << 0x1b ^ *(uint *)(iVar1 + 0x84)) & 0x8000000;
    }
    if ((char)param_1 == '\0') {
      F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0x31,0,this,0,0);
      F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0x30,0,this,0,0);
    }
    else {
      if ((*(int *)((int)this + 0x90) != 0) &&
         (pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar2 != (undefined *)0x0)) {
        F_00583770(pvVar2,0x31,0,this,0);
      }
      if ((*(int *)((int)this + 0x90) != 0) &&
         (pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x80))), pvVar2 != (undefined *)0x0)) {
        F_00583770(pvVar2,0x30,0,this,0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00589870 */
uint F_00589870(unsigned int gen_a0)
{
  GEN_ENTER(0x589870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),4,0,this,0);
  uVar1 = F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),5,0,this,0);
  return uVar1;
}

/* ref: FUN_005898b0 */
uint F_005898b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5898b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = F_0057bd00(this,(int)this + 4);
  if (uVar1 != 0) {
    piVar2 = (int *)F_00404270();
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)uVar1 * 4,0x10);
    *(uint *)((int)this + 0x1e8) = uVar3;
  }
  *(undefined2 *)((int)this + 0x20c) = 0;
  uVar3 = F_0057bc60(this,param_1);
  if ((*(int *)((int)this + 0x68) == 0) && (*(short *)((int)this + 0x20c) != 0)) {
    uVar3 = **(uint * PTR32 *)((int)this + 0x1e8);
    *(uint *)((int)this + 0x68) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00589920 */
uint F_00589920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x589920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x70);
  }
  uVar2 = (uint)(short)param_3;
  fVar8 = (float)(int)uVar2;
  if (iVar3 == 0) goto LAB_00589992;
  if ((*(uint *)(iVar3 + 0x88) & 1) == 0) {
    fVar6 = (float10)(int)(short)param_2;
    fVar7 = (float10)*(float *)(iVar3 + 0x38);
    bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || fVar7 == fVar6;
    uVar1 = CONCAT22((short)param_3 >> 0xf,
                     CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)param_3));
    if (bVar4 != bVar5) {
      fVar6 = (float10)(int)uVar2;
      fVar7 = (float10)*(float *)(iVar3 + 0x3c);
      bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
      bVar5 = bVar4 || fVar7 == fVar6;
      uVar2 = CONCAT22((short)param_3 >> 0xf,
                       CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)param_3));
      uVar1 = uVar2;
      if (bVar4 != bVar5) goto LAB_00589987;
    }
    uVar2 = uVar1;
    *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
  }
LAB_00589987: ;
  *(float *)(iVar3 + 0x38) = (float)(int)(short)param_2;
  *(float *)(iVar3 + 0x3c) = fVar8;
LAB_00589992: ;
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0x70), uVar2 = 0, iVar3 != 0)) {
    uVar2 = F_0057f0d0((undefined *)(param_1 + 4),iVar3,*(undefined4 *)(iVar3 + 8),0);
  }
  return uVar2;
}

/* ref: FUN_005899b0 */
uint F_005899b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5899b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00589920(this,(uint)(ushort)(*(short *)((int)this + 0x200) + (short)param_1),
                       (uint)(ushort)(*(short *)((int)this + 0x202) + (short)param_2));
  return uVar1;
}

/* ref: FUN_005899e0 */
unsigned int F_005899e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5899e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(byte *)((int)this + 0x220) & 4) != 0) && (*(int *)((int)this + 0x1e0) != 0)) {
    F_00584110(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e0) + 0xbc))),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00589a10 */
uint F_00589a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),4,0,(int)this + -0x130,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),5,0,(int)this + -0x130,0);
  *(undefined1 *)((int)this + 0x1a) = 0;
  if (((char)param_1 != '\0') && (*(int *)((int)this + 0xe0) != 0)) {
    F_005c0450(*(int *)((int)this + 0xe0),(uint)*(ushort *)((int)this + 0xec),
                 (uint)*(ushort *)((int)this + 0xee));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this);
  return uVar1;
}

/* ref: FUN_00589a90 */
uint F_00589a90(unsigned int gen_a0)
{
  GEN_ENTER(0x589a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)this + 0xf0) & 4) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)((int)this + 0xb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x70)));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,uVar3);
  uVar1 = F_005883a0(REFG(int, 0x1379860) + 0x3c,-(uint)(this != (undefined *)0x130) & (uint)this);
  if ((*(byte *)((int)this + 0xf0) & 4) == 0) {
    iVar2 = (int)this + -0x130;
    if (iVar2 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
      return uVar1;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0xb0);
    if (iVar2 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
      return uVar1;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,*(undefined4 *)(iVar2 + 0x70));
  return uVar1;
}

/* ref: FUN_00589b30 */
unsigned int F_00589b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x104) != (undefined *)0x0) {
    if (param_1 != 0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x104),param_1);
      if (*(char *)((int)this + 0x89) != '\0') {
        F_00581640(this);
      }
      if (*(char *)((int)this + 0x8a) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
      }
    }
    iVar1 = *(int *)((int)this + 0x104);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(iVar1 + 0x84)) & 0x100000;
      *(uint *)(iVar1 + 0x88) =
           *(uint *)(iVar1 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(iVar1 + 0x88)) & 0x80;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf22 */
unsigned int F_00589bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x589bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined * pvVar5;
  int iVar6;
  byte bVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x104);
  if ((pvVar5 != (undefined *)0x0) && ((*(byte *)((int)pvVar5 + 0xfc) & 0xf) < 6)) {
    uVar1 = *(undefined4 *)((int)pvVar5 + 0xf0);
    pvVar5 = (undefined *)F_005684e0(pvVar5,1);
    uVar3 = F_00576af0(pvVar5,uVar1);
    puVar8 = (undefined4 *)((int)pvVar5 + 0xa8);
    puVar9 = (undefined4 *)((int)pvVar5 + 100);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar4 = *(ushort *)(this + 0x206);
    if (1 < uVar3 + 1) {
      if (*(int *)(this + 0x104) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = *((byte *)GEN_TOP((*(int *)(this + 0x104) + 0x116)));
      }
      uVar4 = ((short)(uVar3 + 1) + -1) * (ushort)bVar7 + uVar4;
    }
    uVar2 = *(uint *)(this + 0x70);
    if (uVar2 != 0) {
      F_0057f1a0(uVar2,(uint)*(ushort *)(uVar2 + 0x7c),(uint)*(ushort *)(uVar2 + 0x7e),
                   (uint)*(ushort *)(uVar2 + 0x7c),(uint)uVar4,1);
    }
  }
  return 0;
}

/* ref: FUN_00589c70 */
uint F_00589c70(unsigned int gen_a0)
{
  GEN_ENTER(0x589c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_005819c0(this);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a181c));
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0xfffffffe;
  *(undefined4 *)((int)this + 0x16c) = uVar1;
  *(undefined4 *)((int)this + 0x18e) = 0x100;
  *(undefined4 *)((int)this + 0x164) = 0xffffffff;
  *(undefined4 *)((int)this + 0x168) = 0xffffffff;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  return (uint)this;
}

/* ref: FUN_00589d40 */
uint F_00589d40(unsigned int gen_a0)
{
  GEN_ENTER(0x589d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10a181c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  iVar1 = *(int *)((int)this + 300);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x134) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf32 */
uint F_00589db0(unsigned int gen_a0)
{
  GEN_ENTER(0x589db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int local_14;
  uint local_10;
  int * local_c;
  
  if (this == (undefined *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(this + 0x70);
  }
  piVar2 = *(int * PTR32 *)(this + 300);
  piVar3 = *(int * PTR32 *)(this + 0x130);
  bVar7 = false;
  bVar8 = false;
  local_10 = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  iVar6 = -*(int *)(this + 0xb8);
  while (piVar2 != piVar3) {
    local_10 = local_10 + 1;
    iVar4 = *piVar2;
    iVar5 = *(int *)(iVar4 + 0x20);
    iVar9 = iVar6;
    if (bVar7) {
LAB_00589edf: ;
      if ((*(byte *)(iVar4 + 0x2b) & 1) != 0) {
        bVar7 = false;
      }
    }
    else {
      iVar9 = (uint)*(ushort *)(iVar4 + 0x28) + iVar6;
      if (iVar9 < 0) {
        if (((*(byte *)(iVar4 + 0x2b) & 2) != 0) && (*(char *)(iVar4 + 0x2a) == '\0')) {
          bVar7 = true;
        }
        goto LAB_00589edf;
      }
      if (*(int *)(this + 0xb0) < 0) {
        *(uint *)(this + 0xb0) = local_10;
      }
      F_00589920(iVar5,(uint)*(ushort *)(iVar5 + 0x200),
                   (uint)(ushort)(*(short *)(iVar5 + 0x202) + (short)iVar6));
      if ((int)(uint)*(ushort *)(local_14 + 0x7e) <= iVar6) break;
      if ((this[400] == (undefined1)0x0) || (!bVar8)) {
        iVar9 = iVar6 + (uint)*(ushort *)(iVar4 + 0x28);
      }
      else {
        iVar9 = iVar6 + (int)((float10)*(ushort *)(iVar4 + 0x28) * (float10)*(float *)(this + 0x16c)
                             );
        if ((*(byte *)(iVar4 + 0x2b) & 1) != 0) {
          bVar8 = false;
        }
      }
      if ((*(byte *)(iVar4 + 0x2b) & 2) != 0) {
        bVar1 = *(byte *)(iVar4 + 0x2a);
        if (bVar1 == 0) {
          bVar7 = true;
        }
        else if ((bVar1 & 0x10) != 0) {
          if (this[400] == (undefined1)0x0) {
            *(byte *)(iVar4 + 0x2a) = bVar1 & 0xef;
          }
          bVar8 = true;
        }
      }
    }
    local_c = piVar2 + 1;
    iVar6 = iVar9;
    piVar2 = local_c;
  }
  *(uint *)(this + 0x164) = local_10;
  if (*(int *)(this + 0x168) < 0) {
    *(uint *)(this + 0x168) = local_10;
  }
  return local_10;
}

/* ref: FUN_00589f20 */
uint F_00589f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x589f20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint * puVar5;
  ushort * puVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  sVar7 = 0;
  sVar3 = 0;
  if (((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && (iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))), iVar2 != 0)) {
    sVar7 = *(short *)(iVar2 + 0x7c);
    sVar3 = *(short *)(iVar2 + 0x7e);
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == '\0') {
    sVar3 = sVar7;
  }
  sVar3 = sVar3 + *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) * -2;
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = sVar3;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = (*(uint *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xca))) != '\0') {
    uVar4 = (int)sVar3 - (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbe)));
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    (*(uint *)(gen_frame + 0x4)) = 0;
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((int)uVar4 <= (int)(*(uint *)&gen_args[1])) {
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    if ((int)*puVar5 < 1) {
      puVar5 = &(*(uint *)(gen_frame + 0x4));
    }
    uVar4 = *puVar5;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar4;
    return uVar4;
  }
  uVar9 = (uint)sVar3;
  (*(uint *)(gen_frame + 0x4)) = uVar9;
  uVar4 = (uint)((float10)(int)uVar9 /
                ((float10)(int)(*(uint *)&gen_args[1]) / (float10)(int)uVar9 + (float10)REFG(double, 0x1088130)));
  puVar6 = ((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbe)));
  (*(uint *)&gen_args[1]) = uVar4 & 0xffff;
  if ((short)*puVar6 <= (short)uVar4) {
    puVar6 = (ushort *)&(*(uint *)&gen_args[1]);
  }
  uVar1 = *puVar6;
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar9 - (int)(short)uVar1;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == '\0') {
    if (uVar4 == 0) goto LAB_0058a033;
    uVar8 = (uint)*(ushort *)(uVar4 + 0x7e);
    uVar9 = (uint)uVar1;
  }
  else {
    if (uVar4 == 0) goto LAB_0058a033;
    uVar9 = (uint)*(ushort *)(uVar4 + 0x7c);
    uVar8 = (uint)uVar1;
  }
  F_0057f1a0(uVar4,(uint)*(ushort *)(uVar4 + 0x7c),(uint)*(ushort *)(uVar4 + 0x7e),uVar9,uVar8,1);
LAB_0058a033: ;
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = F_0057f0d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar2,*(undefined4 *)(iVar2 + 8),0);
  }
  return uVar4;
}

/* ref: FUN_0058a060 */
unsigned int F_0058a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pvVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined * pvVar8;
  undefined4 * puVar9;
  uint uVar10;
  undefined4 * puVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar10 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  if (uVar10 == 0) {
    return 0;
  }
  uVar5 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))));
  if (uVar5 != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = *(undefined4 *)(uVar5 + 0x118);
  }
  sVar4 = *(short *)(uVar10 + 0x18);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xce))) = 0;
  pvVar8 = ((undefined *)GEN_TOP(((sVar4 != 3) - 1 & uVar10)));
  if (pvVar8 != (undefined *)0x0) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xce))) = 1;
    F_00577d20(pvVar8,&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,0,REFG(undefined4, 0x108cc50),0);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),*(ushort *)((int)pvVar8 + 0x7e) < (ushort)(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_005c06e0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    *(byte *)((int)pvVar8 + 0xff) =
         *(byte *)((int)pvVar8 + 0xff) ^ (*(byte *)((int)pvVar8 + 0xff) ^ (byte)(*(undefined4 *)&gen_args[1])) & 1;
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      return 0;
    }
    uVar10 = (int)pvVar2 - (uint)*(ushort *)((int)pvVar8 + 0x7e);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc6))) = (short)uVar10;
    F_00589f20((*(undefined * PTR32 *)&gen_args[0]),uVar10 & 0xffff);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcd))) = 1;
    (*(undefined4 *)&gen_args[1]) = *(undefined4 *)((int)pvVar8 + 0xf0);
    pvVar8 = (undefined *)F_005684e0(pvVar8,1);
    uVar3 = F_00576af0(pvVar8,(*(undefined4 *)&gen_args[1]));
    puVar9 = (undefined4 *)((int)pvVar8 + 0xa8);
    puVar11 = (undefined4 *)((int)pvVar8 + 100);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc2))) = (short)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xffff) / (uVar3 + 1));
    goto LAB_0058a216;
  }
  uVar3 = (ushort)(*(undefined4 *)&gen_args[1]);
  if (uVar3 == 0) {
    return 0;
  }
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),uVar3 < *(ushort *)(uVar10 + 0x7e));
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_005c06e0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]),uVar1);
  if ((byte)(*(undefined4 *)&gen_args[1]) == '\0') {
    return 0;
  }
  iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == '\0') {
    if (iVar7 == 0) goto LAB_0058a1e6;
    uVar6 = (undefined2)(int)*(float *)(iVar7 + 0x38);
  }
  else if (iVar7 == 0) {
LAB_0058a1e6: ;
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)(int)*(float *)(iVar7 + 0x3c);
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = uVar6;
  if (iVar7 == 0) {
    sVar4 = 0;
  }
  else {
    sVar4 = *(short *)(iVar7 + 0x7e);
  }
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc6))) = sVar4 - uVar3;
  F_00589f20((*(undefined * PTR32 *)&gen_args[0]),(uint)(ushort)(sVar4 - uVar3));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcd))) = 1;
LAB_0058a216: ;
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))),8,5,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))),8,5,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  return 0;
}

/* ref: FUN_0058a250 */
uint F_0058a250(unsigned int gen_a0)
{
  GEN_ENTER(0x58a250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a18b4));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 1;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (uint)this;
}

/* ref: FUN_0058a300 */
uint F_0058a300(unsigned int gen_a0)
{
  GEN_ENTER(0x58a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_0058a320 */
uint F_0058a320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58a320u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  undefined * pvVar2;
  undefined * this;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  uint local_8;
  
  pvVar2 = (undefined *)F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(param_1 + 0x88));
  if ((pvVar2 == (undefined *)0x0) || (*(short *)((int)pvVar2 + 0x18) != 3)) {
    pvVar2 = (undefined *)0x0;
  }
  bVar4 = false;
  local_8 = 0;
  if (pvVar2 != (undefined *)0x0) {
    bVar4 = param_2 != 0;
    if (bVar4) {
      F_00584110(pvVar2,param_2);
      local_8 = F_00577bc0(pvVar2,0,0,REFG(undefined4, 0x108cc50),0);
    }
    *(uint *)((int)pvVar2 + 0x84) =
         *(uint *)((int)pvVar2 + 0x84) ^
         ((uint)bVar4 << 0x14 ^ *(uint *)((int)pvVar2 + 0x84)) & 0x100000;
    *(uint *)((int)pvVar2 + 0x88) =
         *(uint *)((int)pvVar2 + 0x88) ^ ((uint)!bVar4 << 7 ^ *(uint *)((int)pvVar2 + 0x88)) & 0x80;
  }
  this = (undefined *)F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(param_1 + 0x8c));
  pvVar2 = this;
  if ((this != (undefined *)0x0) && (*(short *)((int)this + 0x18) == 3)) {
    if ((param_3 == 0) || (!bVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      F_00584110(this,param_3);
      fVar5 = (float10)(int)(local_8 + 4);
      if ((int)(local_8 + 4) < 0) {
        fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = ((float)GEN_TOF((fVar5 + (float10)*(float *)(param_1 + 0xb8))));
      if (((*(uint *)((int)this + 0x88) & 1) == 0) &&
         ((fVar5 = (float10)fVar1, bVar4 = GEN_ISNAN((float10)*(float *)((int)this + 0x38)) || GEN_ISNAN(fVar5),
          bVar4 == (bVar4 || (float10)*(float *)((int)this + 0x38) == fVar5) ||
          (GEN_ISNAN((float10)*(float *)((int)this + 0x3c)) || GEN_ISNAN((float10)*(float *)((int)this + 0x3c)))
          ))) {
        *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 1;
      }
      *(float *)((int)this + 0x38) = fVar1;
    }
    pvVar2 = ((undefined *)GEN_TOP(((iVar3 << 0x14 ^ *(uint *)((int)this + 0x84)) & 0x100000)));
    *(uint *)((int)this + 0x84) = *(uint *)((int)this + 0x84) ^ (uint)pvVar2;
    *(uint *)((int)this + 0x88) =
         *(uint *)((int)this + 0x88) ^
         ((uint)((char)iVar3 == '\0') << 7 ^ *(uint *)((int)this + 0x88)) & 0x80;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0058a4b0 */
uint F_0058a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x8c),param_1);
  return uVar1;
}

/* ref: FUN_0058a4c0 */
uint F_0058a4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x58a4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a149c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a145c));
  if (*(int *)((int)this + 0x90) != 0) {
    F_00406ad0(*(int *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (*(int *)((int)this + 0x90) != 0) {
    F_00406ad0(*(int *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar1 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_0058a550 */
uint F_0058a550(unsigned int gen_a0)
{
  GEN_ENTER(0x58a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x95))) = 0;
  }
  uVar1 = F_005883a0(REFG(int, 0x1379860) + 0x3c,-(uint)(this != (undefined *)0x84) & (uint)this);
  return uVar1;
}

/* ref: FUN_0058a580 */
uint F_0058a580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a580u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  
  if (param_2 != (byte *)0x0) {
    pbVar5 = &REFG(undefined1, 0x109d02e);
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0058a5b2: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0058a5b7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0058a5b2;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0058a5b7: ;
    if (iVar3 != 0) {
      iVar3 = 1;
      goto LAB_0058a5c1;
    }
  }
  iVar3 = 0;
LAB_0058a5c1: ;
  if (param_1 != (undefined *)0x0) {
    *(uint *)((int)param_1 + 0x84) =
         *(uint *)((int)param_1 + 0x84) ^
         (iVar3 << 0x14 ^ *(uint *)((int)param_1 + 0x84)) & 0x100000;
    *(uint *)((int)param_1 + 0x88) =
         *(uint *)((int)param_1 + 0x88) ^
         ((uint)((char)iVar3 == '\0') << 7 ^ *(uint *)((int)param_1 + 0x88)) & 0x80;
  }
  if ((char)iVar3 != '\0') {
    uVar4 = F_00584110(param_1,param_2);
    return uVar4;
  }
  uVar4 = F_00584110(param_1,&REFG(undefined1, 0x109d02f));
  return uVar4;
}

/* ref: FUN_0058a660 */
uint F_0058a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(byte *)((int)this + 0x1df) =
       *(byte *)((int)this + 0x1df) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x1df)) & 4;
  uVar1 = F_00584580(*(undefined * PTR32 *)((int)this + 0x8c),param_1);
  return uVar1;
}

/* ref: FUN_0058a690 */
uint F_0058a690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1 << 4 ^ *(byte *)((int)this + 0x1df)) &
          0xffffff10;
  *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) ^ (byte)uVar1;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*(byte *)((int)this + 0x1df));
  if ((char)param_1 != '\0') {
    *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) | 4;
    uVar1 = F_00584580(*(undefined * PTR32 *)((int)this + 0x8c),1);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf16 */
unsigned int F_0058a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  undefined1 AVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * pAVar8;
  int iVar9;
  int * piVar10;
  char * pcVar11;
  
  pcVar11 = param_1;
  pAVar8 = this + 0x174;
  for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pAVar8 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pAVar8 = pAVar8 + 4;
  }
  (*(int *)(gen_frame + 0x0)) = 0xff;
  pAVar8 = this + 0x1d0;
  if (0xfe < *(uint *)(this + 0x1d0)) {
    pAVar8 = (undefined *)&(*(int *)(gen_frame + 0x0));
  }
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)pAVar8;
  if (*param_1 != '\0') {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0xc);
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x184));
  if ((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0x8c) = uVar5;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x188));
  *(uint *)(this + 0x94) = uVar5;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x18c));
  *(uint *)(this + 0x90) = uVar5;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x1c0));
  if ((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) {
    uVar5 = 0;
  }
  *(uint *)(this + 0x2f8) = uVar5;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 400));
  *(uint *)(this + 0x300) = uVar5;
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x100000;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x308;
  (*(int *)(gen_frame + 0x0)) = 9;
  do {
    if ((((byte)this[0x60] & 1) == 0) || (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) + -0x174) == 0)) {
LAB_0058a885: ;
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(this + 0xc);
      iVar9 = 0;
      if ((iVar7 != 0) && ((uVar5 = *(uint *)(iVar7 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
        piVar3 = *(int * PTR32 *)(iVar7 + 8);
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
        piVar10 = piVar3;
        do {
          if (*(int *)(*piVar10 + 4) == *(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) + -0x174)) {
            iVar9 = piVar3[uVar6];
            goto LAB_0058a84c;
          }
          uVar6 = uVar6 + 1;
          piVar10 = piVar10 + 1;
        } while (uVar6 < uVar5);
        iVar9 = 0;
      }
LAB_0058a84c: ;
      if (iVar9 == 0) goto LAB_0058a885;
      if ((((*(ushort *)(iVar9 + 0x18) < 1000) || (iVar7 = *(int *)(iVar9 + 0x8c), iVar7 == 0)) ||
          ((*(byte *)(iVar7 + 0x60) & 1) == 0)) ||
         ((((*(byte *)(iVar7 + 0x60) & 4) == 0 || (*(char *)(iVar7 + 0x1c) != '\x01')) ||
          (*((char *)GEN_TOP((*(int *)(iVar7 + 0xc) + 0xf))) != '\x01')))) {
        iVar7 = 0;
      }
    }
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = iVar7;
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x70) != 0)) {
      puVar1 = ((uint *)GEN_TOP((*(int *)(iVar7 + 0x70) + 0x88)));
      *puVar1 = *puVar1 | 0x100000;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    iVar7 = (*(int *)(gen_frame + 0x0)) + -1;
    (*(int *)(gen_frame + 0x0)) = iVar7;
  } while (iVar7 != 0);
  if ((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x1b8) != 0)) {
    iVar7 = *(int *)(this + 0xc);
    iVar9 = 0;
    if ((iVar7 != 0) && ((uVar5 = *(uint *)(iVar7 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
      piVar3 = *(int * PTR32 *)(iVar7 + 8);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
      piVar10 = piVar3;
      do {
        if (*(int *)(*piVar10 + 4) == *(int *)(this + 0x1b8)) {
          iVar9 = piVar3[uVar6];
          goto LAB_0058a8fa;
        }
        uVar6 = uVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar6 < uVar5);
      iVar9 = 0;
    }
LAB_0058a8fa: ;
    if ((iVar9 != 0) && (*(short *)(iVar9 + 0x18) == 3)) goto LAB_0058a907;
  }
  iVar9 = 0;
LAB_0058a907: ;
  *(int *)(this + 0x32c) = iVar9;
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x100000;
  }
  if ((((byte)this[0x60] & 1) == 0) || (*(int *)(this + 0x1bc) == 0)) {
    iVar7 = 0;
  }
  else {
    iVar9 = *(int *)(this + 0xc);
    iVar7 = 0;
    if (((iVar9 != 0) && (uVar5 = *(uint *)(iVar9 + 4), uVar5 != 0)) && (uVar6 = 0, uVar5 != 0)) {
      piVar3 = *(int * PTR32 *)(iVar9 + 8);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
      piVar10 = piVar3;
      do {
        if (*(int *)(*piVar10 + 4) == *(int *)(this + 0x1bc)) {
          iVar7 = piVar3[uVar6];
          goto LAB_0058a972;
        }
        uVar6 = uVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar6 < uVar5);
      iVar7 = 0;
    }
  }
LAB_0058a972: ;
  *(int *)(this + 0x330) = iVar7;
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 0x100000;
  }
  AVar2 = this[0x1df];
  this[0x1df] = (undefined1)
                ((byte)this[0x1df] ^ (((byte)AVar2 >> 4 & 1) << 4 ^ (byte)this[0x1df]) & 0x10);
  if (((byte)AVar2 >> 4 & 1) != 0) {
    this[0x1df] = (undefined1)((byte)this[0x1df] | 4);
    F_00584580(*(undefined * PTR32 *)(this + 0x8c),1);
  }
  if (((byte)this[0x1df] & 8) != 0) {
    this[0x1de] = (undefined1)((byte)this[0x1de] & 0xf7);
  }
  if (((byte)this[0x1df] & 4) != 0) {
    F_00584580(*(undefined * PTR32 *)(this + 0x8c),1);
  }
  iVar7 = *(int *)(this + 0x8c);
  if (((iVar7 != 0) &&
      (bVar4 = ((char)this[0x1df] << 4 ^ *(byte *)(iVar7 + 0xfe)) & 0x7f ^ (char)this[0x1df] << 4,
      *(byte *)(iVar7 + 0xfe) = bVar4, (char)bVar4 < '\0')) && (*(char *)(iVar7 + 0x116) == '\0')) {
    *(char *)(iVar7 + 0x116) = *(char *)(iVar7 + 0xfd) + '\x01';
  }
  AVar2 = this[0x1de];
  *(undefined2 *)(this + 0x1f0) = 0;
  if (((byte)AVar2 & 0x40) != 0) {
    *(undefined2 *)(this + 0x1f0) = 1;
  }
  if ((char)AVar2 < '\0') {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 2;
  }
  if (((byte)this[0x1df] & 1) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 4;
  }
  if (((byte)this[0x1df] & 2) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 8;
  }
  *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x10;
  if (((byte)AVar2 & 0x10) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x20;
  }
  if (((byte)AVar2 & 4) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x40;
  }
  if (((byte)AVar2 & 1) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x80;
  }
  if (((byte)AVar2 & 0x20) != 0) {
    *(ushort *)(this + 0x1f0) = *(ushort *)(this + 0x1f0) | 0x100;
  }
  iVar7 = 0;
  do {
    this[iVar7 + 0x1e0] = *(undefined *)(param_1 + iVar7 + 0x6c);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return 0;
}

/* ref: FUN_0058aaf0 */
uint F_0058aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58aaf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  undefined2 local_18;
  uint local_14;
  float local_10;
  uint local_8;
  
  iVar13 = *(int *)param_2;
  if (((iVar13 < 0) || (piVar9 = *(int * PTR32 *)(param_2 + 4), piVar9 == (int *)0x0)) ||
     ((piVar9[1] - *piVar9 & 0xfffffffcU) == 0)) {
    uVar8 = F_0056e5a0((undefined *)(param_1 + -0x16c));
  }
  else {
    iVar4 = iVar13 / 9;
    iVar11 = piVar9[1] - *piVar9 >> 2;
    iVar5 = (iVar11 + -1) / 9;
    local_8 = iVar4 * 9;
    iVar12 = *(int *)(param_1 + 0x19c);
    *(uint *)(param_1 + 0x198) = local_8;
    if (iVar4 == iVar5) {
      if ((iVar12 == 0) || (*(int *)(iVar12 + 0x70) == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *((float *)GEN_TOP((*(int *)(iVar12 + 0x70) + 0x3c)));
      }
      iVar12 = (iVar11 + iVar4 * -9) * (int)*(short *)(param_1 + 0x1c8) + (int)(short)(int)fVar18;
    }
    else {
      if ((iVar12 == 0) || (*(int *)(iVar12 + 0x70) == 0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *((float *)GEN_TOP((*(int *)(iVar12 + 0x70) + 0x3c)));
      }
      iVar12 = *(short *)(param_1 + 0x1c8) * 9 + (int)(short)(int)fVar18;
    }
    F_00559f00(*(undefined4 *)(param_1 + 0x1c0),(float)iVar12);
    uVar8 = F_0055baf0(REFG(int, 0x1379860),"%d/%d(%d/%d)",iVar13 + 1,iVar11,iVar4 + 1,iVar5 + 1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x1c0),uVar8);
    iVar12 = *(int *)(param_1 + 0x1c0);
    if (iVar12 != 0) {
      *(uint *)(iVar12 + 0x84) = *(uint *)(iVar12 + 0x84) | 0x100000;
      *(uint *)(iVar12 + 0x88) = *(uint *)(iVar12 + 0x88) & 0xffffff7f;
    }
    local_14 = F_00577bc0(*(undefined * PTR32 *)(param_1 + 0x1c0),0,0,REFG(undefined4, 0x108cc50),0);
    piVar9 = (int *)(param_1 + 0x19c);
    iVar12 = 0;
    do {
      if ((int)local_8 < iVar11) {
        this = (undefined *)*piVar9;
        iVar4 = *(int *)((int)this + 0x104);
        if (iVar12 == iVar13 % 9) {
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x58);
          }
        }
        else if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1e0);
        }
        iVar4 = **(int * PTR32 *)(param_2 + 4);
        if ((uint)((*(int * PTR32 *)(param_2 + 4))[1] - iVar4 >> 2) <= local_8) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        uVar8 = F_0055baf0(REFG(int, 0x1379860),"%d : %s",iVar12 + 1,*(undefined4 *)(iVar4 + local_8 * 4))
        ;
        F_00589280(this,uVar8);
        iVar4 = *(int *)((int)this + 0x70);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x100000;
          *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) & 0xffffff7f;
        }
        *(undefined1 *)((int)this + 0x89) = 1;
        F_00581640(this);
        if (*(int *)((int)this + 0x70) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7c)));
        }
        if (local_14 < uVar8) {
          local_14 = uVar8;
        }
      }
      else if ((*piVar9 != 0) && (iVar4 = *(int *)(*piVar9 + 0x70), iVar4 != 0)) {
        *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
      }
      local_8 = local_8 + 1;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar12 < 9);
    iVar13 = *(int *)(param_1 + 0x198);
    param_2 = iVar13 + 2;
    piVar9 = (int *)(param_1 + 0x1a0);
    local_10 = 4.2039e-45;
    do {
      sVar14 = (short)local_14;
      if (iVar13 < iVar11) {
        if ((piVar9[-1] != 0) && (iVar12 = *(int *)(piVar9[-1] + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      if ((int)(param_2 - 1) < iVar11) {
        if ((*piVar9 != 0) && (iVar12 = *(int *)(*piVar9 + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      if ((int)param_2 < iVar11) {
        if ((piVar9[1] != 0) && (iVar12 = *(int *)(piVar9[1] + 0x70), iVar12 != 0)) {
          *(short *)(iVar12 + 0x7c) =
               *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
        }
      }
      param_2 = param_2 + 3;
      piVar9 = piVar9 + 3;
      iVar13 = iVar13 + 3;
      local_10 = gen_bits2f((int)gen_fl2bits(local_10) + -1);
    } while (local_10 != 0.0);
    if (*(int *)(param_1 + 0x1c4) != 0) {
      *((short *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7c))) =
           *(short *)(param_1 + 0x1d8) + *(short *)(param_1 + 0x1d0) + sVar14;
    }
    if (*(int *)(param_1 + 0x1c0) == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *((float *)GEN_TOP((*(int *)(param_1 + 0x1c0) + 0x3c)));
    }
    if (*(int *)(param_1 + 0x1c4) != 0) {
      local_18 = (undefined2)
                 (int)TRUNC(((float10)(int)*(short *)(param_1 + 0x1c8) + (float10)fVar18) +
                            (float10)*(int *)(param_1 + 0x1dc));
      *((undefined2 *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7e))) = local_18;
    }
    if (*(int *)(param_1 + 0x1c4) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7c)));
    }
    iVar13 = *(int *)(param_1 + 0x1c0);
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*(ushort *)(iVar13 + 0x7c);
    }
    iVar12 = (uVar8 - *(int *)(param_1 + 0x1d8)) - uVar10;
    param_2 = (uint)gen_fl2bits((float)iVar12);
    if (iVar13 != 0) {
      if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
         (fVar16 = (float10)iVar12, bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar16),
         bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar16))) {
        *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
      }
      *(uint *)(iVar13 + 0x38) = param_2;
    }
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      iVar13 = *(int *)(param_1 + -0xdc);
      local_10 = 0.0;
      if (iVar13 != 0) {
        local_10 = *(float *)(iVar13 + 0x38);
        param_2 = *(uint *)(iVar13 + 0x3c);
      }
      fVar18 = *(float *)(iVar13 + 0x30);
      fVar1 = *(float *)(iVar13 + 0x34);
      if (iVar13 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ushort *)(iVar13 + 0x7e);
      }
      sVar14 = *(short *)(param_1 + 0x1c8);
      iVar13 = *(int *)(param_1 + 0x194);
      fVar16 = (float10)0;
      fVar2 = (float)((float10)local_10 + fVar16);
      fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(int *)(param_1 + 0x1d4) +
                                      ((float10)GEN_TOD(gen_bits2f(param_2)))))) + fVar16)));
      if (iVar13 != 0) {
        if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
           ((fVar17 = (float10)fVar2,
            bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar17),
            bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar17) ||
            (fVar17 = (float10)fVar3,
            bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x3c)) || GEN_ISNAN(fVar17),
            bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x3c) == fVar17))))) {
          *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
        }
        *(float *)(iVar13 + 0x38) = fVar2;
        *(float *)(iVar13 + 0x3c) = fVar3;
      }
      iVar13 = *(int *)(param_1 + 0x1c4);
      if (iVar13 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ushort *)(iVar13 + 0x7c);
      }
      iVar12 = *(int *)(REFG(int, 0x1379860) + 0x234);
      fVar17 = (float10)iVar12;
      if (iVar12 < 0) {
        fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar17 < (float10)fVar18 + (float10)uVar7) {
        if (iVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*(ushort *)(iVar13 + 0x7c);
        }
        fVar17 = (float10)(int)(iVar12 - uVar8);
        if ((int)(iVar12 - uVar8) < 0) {
          fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar13 = *(int *)(param_1 + 0x194);
        fVar18 = ((float)GEN_TOF((fVar16 + (float10)((float)GEN_TOF((((float10)local_10 - (float10)fVar18) + fVar17))))));
        if (iVar13 != 0) {
          if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
             (fVar16 = (float10)fVar18,
             bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x38)) || GEN_ISNAN(fVar16),
             bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x38) == fVar16))) {
            *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
          }
          *(float *)(iVar13 + 0x38) = fVar18;
        }
      }
      fVar16 = (float10)*(int *)(REFG(int, 0x1379860) + 0x238);
      if (*(int *)(REFG(int, 0x1379860) + 0x238) < 0) {
        fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar16 < (float10)(int)*(short *)(param_1 + 0x1cc) +
                   (float10)((float)GEN_TOF(((float10)(int)((uint)uVar6 + (int)sVar14) + (float10)fVar1)))) {
        if (*(int *)(param_1 + 0x1c4) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x7e)));
        }
        iVar13 = *(int *)(param_1 + 0x194);
        if (iVar13 != 0) {
          if (((*(uint *)(iVar13 + 0x88) & 1) == 0) &&
             (fVar16 = (float10)(int)(-8 - uVar8),
             bVar15 = GEN_ISNAN((float10)*(float *)(iVar13 + 0x3c)) || GEN_ISNAN(fVar16),
             bVar15 == (bVar15 || (float10)*(float *)(iVar13 + 0x3c) == fVar16))) {
            *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) | 1;
          }
          *(float *)(iVar13 + 0x3c) = (float)(int)(-8 - uVar8);
        }
      }
      *(undefined1 *)(param_1 + 0x1ce) = 0;
    }
    iVar13 = *(int *)(param_1 + 0x1c4);
    if (iVar13 != 0) {
      *(uint *)(iVar13 + 0x84) = *(uint *)(iVar13 + 0x84) | 0x100000;
      *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) & 0xffffff7f;
    }
    iVar13 = *(int *)(param_1 + 0x194);
    if (iVar13 != 0) {
      *(uint *)(iVar13 + 0x84) = *(uint *)(iVar13 + 0x84) | 0x100000;
      *(uint *)(iVar13 + 0x88) = *(uint *)(iVar13 + 0x88) & 0xffffff7f;
    }
    uVar10 = *(uint *)(param_1 + 400);
    uVar8 = 0;
    if (uVar10 != 0) {
      *(undefined4 *)(uVar10 + 0x98) = *(undefined4 *)(param_1 + 0x194);
      return uVar10;
    }
  }
  return uVar8;
}

/* ref: FUN_0058b190 */
unsigned int F_0058b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x2f8);
  if (pvVar3 == (undefined *)0x0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x1d8);
  if (iVar5 == 0) {
    if (*(int *)((int)this + 0x1d0) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x8c) + 0xf0)));
      pvVar3 = (undefined *)F_005684e0(*(undefined * PTR32 *)((int)this + 0x8c),1);
      uVar2 = F_00576af0(pvVar3,uVar1);
      puVar6 = (undefined4 *)((int)pvVar3 + 0xa8);
      puVar7 = (undefined4 *)((int)pvVar3 + 100);
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x2f8);
      uVar4 = F_0055baf0(REFG(undefined4, 0x1379860),"%d/%d",uVar2 + 1,*(undefined4 *)((int)this + 0x1d0));
      F_00584110(pvVar3,uVar4);
      goto LAB_0058b25b;
    }
    iVar5 = *(int *)((int)this + 0x1d4);
    if (iVar5 == 0) {
      *(uint *)((int)pvVar3 + 0x84) = *(uint *)((int)pvVar3 + 0x84) & 0xffefffff;
      *(uint *)((int)pvVar3 + 0x88) = *(uint *)((int)pvVar3 + 0x88) | 0x80;
      return 0;
    }
    pcVar8 = "%d/%d";
  }
  else {
    pcVar8 = "%d/%d";
  }
  uVar4 = F_0055baf0(REFG(undefined4, 0x1379860),pcVar8,param_1,iVar5);
  F_00584110(pvVar3,uVar4);
LAB_0058b25b: ;
  iVar5 = *(int *)((int)this + 0x2f8);
  if (iVar5 == 0) {
    return 0;
  }
  *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 0x100000;
  *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) & 0xffffff7f;
  return 0;
}

/* ref: FUN_0058b2a0 */
uint F_0058b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x58b2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  undefined * this_01;
  short sVar1;
  uint uVar2;
  char * pcVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if ((*(byte *)((int)this + 0x1de) & 2) == 0) {
    uVar2 = F_0042a990((int)this + 0xf0);
    uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x8c),uVar2);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar2;
  }
  uVar2 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x1c))),(int)this + 0xf0,1);
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    F_0042dc00(((undefined1 *)(gen_frame + 0x74)),0x2a);
  }
  pcVar3 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0x74)));
  this_01 = *(undefined * PTR32 *)((int)this + 0x8c);
  if (this_01 == (undefined *)0x0) goto LAB_0058b4a6;
  this_00 = (undefined *)((int)this_01 + 0x9c);
  (*(bool *)(gen_frame + 0x1f)) = **(char * PTR32 *)((int)this_01 + 0x9c) == '\0';
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
LAB_0058b454: ;
    F_0042e430(this_00,pcVar3);
  }
  else if ((*(byte *)((int)this_01 + 0xfe) & 0x40) == 0) {
    if ((*(byte *)((int)this_01 + 0xff) & 4) == 0) goto LAB_0058b454;
    sVar1 = *(short *)((int)this_01 + 0x7c) + -5;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18)));
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    if (sVar1 == 0) {
      sVar1 = -1;
    }
    (*(byte *)(gen_frame + 0x10)) = *(byte *)((int)this_01 + 0xfc) >> 4;
    (*(short *)(gen_frame + 0xc)) = sVar1;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined1 *)(gen_frame + 0x11)) = *(undefined1 *)((int)this_01 + 0xfd);
    (*(undefined2 *)(gen_frame + 0xe)) = 0xffff;
    (*(undefined2 *)(gen_frame + 0x12)) = 0xff01;
    (*(undefined2 *)(gen_frame + 0x16)) = 0xffff;
    F_0042cc20(((undefined1 *)(gen_frame + 0x20)),pcVar3,REFG(undefined4, 0x108cc50));
    F_00580670((*(undefined * PTR32 *)(gen_frame + 0x18)),this_00,((undefined1 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x8)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  }
  else {
    F_0042aca0(this_00);
    pvVar4 = (undefined *)F_005684e0(this_01,0);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar4;
    F_00583cc0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 8),(uint)(*(byte *)((int)this_01 + 0xfc) >> 4),this_00,
                 pcVar3,(uint)*(ushort *)((int)this_01 + 0x7c));
    puVar6 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa8);
    puVar7 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 100);
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  uVar2 = F_0042a990((int)this_01 + 0x9c);
  *(uint *)((int)this_01 + 0xf0) = uVar2;
  if (**(char * PTR32 *)((int)this_01 + 0x9c) == '\0') {
    *(uint *)((int)this_01 + 0x84) = *(uint *)((int)this_01 + 0x84) & 0xffefffff;
  }
  else if ((*(bool *)(gen_frame + 0x1f)) != false) {
    *(uint *)((int)this_01 + 0x84) = *(uint *)((int)this_01 + 0x84) | 0x100000;
  }
  if ((*(byte *)((int)this_01 + 0xfe) & 1) != 0) {
    F_00578070(this_01);
  }
LAB_0058b4a6: ;
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)uVar8;
}

/* ref: FUN_0058b4f0 */
unsigned int F_0058b4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58b4f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * pvVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  float local_c;
  float local_8;
  
  if (((*(char *)(param_1 + -0xe8) != '\0') && (*(char *)(param_1 + 0x19) != '\0')) &&
     (*(char *)(param_1 + 0x1a) == '\0')) {
    if ((*(int *)(param_1 + -0xe0) != 0) && (*((char *)GEN_TOP(**(undefined4 * PTR32 *)(param_2 + 0xc))) != '\0')) {
      pvVar1 = (undefined *)(param_1 + -0xd0);
      F_0042ccf0(pvVar1,*(undefined4 * PTR32 *)(param_2 + 0xc));
      F_0042ccf0((undefined *)(param_1 + -0x7c),pvVar1);
      uVar5 = F_0042a990(pvVar1);
      F_00584110(*(undefined * PTR32 *)(param_1 + -0xe0),uVar5);
    }
    if ((*(undefined * PTR32 *)(param_1 + -0xe0) != (undefined *)0x0) && (*(int *)(param_1 + -0xdc) != 0)) {
      uVar2 = *(ushort *)(param_2 + 2);
      *(int *)(param_1 + -0x1c) = (int)(short)uVar2;
      uVar3 = *(ushort *)(param_2 + 4);
      *(int *)(param_1 + -0x18) = (int)(short)uVar3;
      *(int *)(param_1 + -0x14) = (int)(short)uVar3;
      F_0055ad50(*(undefined * PTR32 *)(param_1 + -0xe0),(uint)uVar2,(uint)uVar3);
      pvVar1 = *(undefined * PTR32 *)(param_1 + -0xe0);
      if (pvVar1 != (undefined *)0x0) {
        param_2 = *(uint *)((int)pvVar1 + 0x38);
        local_c = *(float *)((int)pvVar1 + 0x3c);
      }
      uVar5 = F_00577c70(pvVar1,0,0,*(undefined4 *)(param_1 + -0x14));
      fVar6 = (float10)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      iVar4 = *(int *)(param_1 + -0xdc);
      fVar7 = 0.0;
      if (iVar4 == 0) {
        local_8 = 0.0;
      }
      else {
        local_8 = *(float *)(iVar4 + 0x74);
      }
      if (iVar4 != 0) {
        fVar7 = *(float *)(iVar4 + 0x78);
      }
      F_00559da0(iVar4,((float)GEN_TOF(((float10)(float)(fVar6 + ((float10)GEN_TOD(gen_bits2f(param_2)))) -
                                (float10)local_8))),(float)((float10)local_c - (float10)fVar7));
    }
  }
  return 0;
}

/* ref: FUN_0058b640 */
uint F_0058b640(unsigned int gen_a0)
{
  GEN_ENTER(0x58b640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*(char *)((int)this + 0x84) == '\0') {
    uVar1 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c),*(undefined4 *)((int)this + 0x178),
                         (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
    if (*(int *)((int)this + 0x194) != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 0x8c) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0xf0)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),uVar5,REFG(undefined4, 0x108cc50));
      F_0042e370(((undefined1 *)(gen_frame + 0xb4)),*(undefined4 *)((int)this + 0x194));
      uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
      F_00584110(*(undefined * PTR32 *)((int)this + 0x8c),uVar1);
      uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      uVar1 = (uint)uVar10;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar1;
  }
  uVar1 = F_00563b70(*(undefined4 *)((int)this + 0x178));
  uVar2 = F_00563b70(*(undefined4 *)((int)this + 0x18c));
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  iVar8 = 0;
  if (0 < (int)(uVar2 - uVar1)) {
    do {
      if (iVar8 == 0) {
        iVar6 = (int)this + 0x1ec;
        puVar11 = ((undefined1 *)(gen_frame + 0xc));
        pvVar4 = (undefined *)F_0042cdb0((undefined *)((int)this + 0x198),((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10a0870));
        uVar3 = F_0042cd30(pvVar4,puVar11,iVar6);
        F_0042e360(((undefined1 *)(gen_frame + 0xb4)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      }
      else {
        F_0042e370(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10a086c));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uVar2 - uVar1));
  }
  iVar8 = 0;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
    do {
      uVar3 = uVar3 - 1;
      iVar6 = *(int *)((int)this + 0x178);
      uVar9 = uVar3;
      if (0 < (int)uVar3) {
        do {
          iVar6 = iVar6 / 10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar7 = (int)((ulonglong)((longlong)iVar6 * -0x66666667) >> 0x20);
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),iVar6 + ((iVar7 >> 2) - (iVar7 >> 0x1f)) * 10);
      if (uVar1 - uVar2 == iVar8) {
        iVar6 = (int)this + 0x1ec;
        puVar11 = ((undefined1 *)(gen_frame + 0x60));
        pvVar4 = (undefined *)F_0042cdb0((undefined *)((int)this + 0x198),((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x1379720));
        uVar9 = F_0042cd30(pvVar4,puVar11,iVar6);
        F_0042e360(((undefined1 *)(gen_frame + 0xb4)),uVar9);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      else {
        F_0042e370(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x1379720));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar1);
  }
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x8c),uVar1);
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar10;
}

/* ref: FUN_0058b8b0 */
uint F_0058b8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x58b8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  uint in_EAX = 0;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ushort uVar9;
  
  if (*(char *)((int)this + 400) == '\0') {
    uVar7 = F_00583100(this);
    return uVar7;
  }
  iVar2 = *(int *)((int)this + 0x170);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x70);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x70) + 0x7c)));
    }
    fVar1 = *(float *)(iVar3 + 0x30);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x20))))(*(int * PTR32 *)((int)this + 0x144));
    if (*(int *)((int)this + 0x144) == 0) {
      uVar8 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar8;
    }
    dVar5 = (double)((float)GEN_TOF(((float10)(uVar9 >> 1) + ((float10)fVar1 - (float10)(int)(short)uVar7)))) -
            *(double *)&REFG(undefined, 0x10944e0);
    fVar1 = *(float *)(iVar3 + 0x34);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x24))))(*(int * PTR32 *)((int)this + 0x144));
    dVar4 = (double)(float)((float10)fVar1 - (float10)(int)(short)uVar7) - *(double *)&REFG(undefined, 0x10947f0);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    bVar6 = F_0056b630(*(undefined * PTR32 *)((int)this + 0x144),0xc8e,0,3,9,(int)dVar5 & 0xffff,
                         (int)dVar4 & 0xffff);
    in_EAX = CONCAT31(extraout_var,bVar6);
  }
  iVar2 = *(int *)((int)this + 0x174);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x70);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x70) + 0x7c)));
    }
    fVar1 = *(float *)(iVar3 + 0x30);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x20))))(*(int * PTR32 *)((int)this + 0x144));
    if (*(int *)((int)this + 0x144) == 0) {
      uVar8 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar8;
    }
    dVar4 = (double)((float)GEN_TOF(((float10)(uVar9 >> 1) + ((float10)fVar1 - (float10)(int)(short)uVar7)))) +
            *(double *)&REFG(undefined, 0x1092098);
    fVar1 = *(float *)(iVar3 + 0x34);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x144) + 0x24))))(*(int * PTR32 *)((int)this + 0x144));
    dVar5 = (double)(float)((float10)fVar1 - (float10)(int)(short)uVar7) - *(double *)&REFG(undefined, 0x10947f0);
    if (*(int *)((int)this + 0x144) == 0) {
      uVar7 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),*(undefined4 *)((int)this + 0x6c));
      *(uint *)((int)this + 0x144) = uVar7;
    }
    bVar6 = F_0056b630(*(undefined * PTR32 *)((int)this + 0x144),0xc8d,0,4,9,(int)dVar4 & 0xffff,
                         (int)dVar5 & 0xffff);
    in_EAX = CONCAT31(extraout_var_00,bVar6);
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentTextNineGrid::vf16 */
unsigned int F_0058bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    this_00 = (undefined *)F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
    if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
      this_00 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)(this + 0x84) = this_00;
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x70);
    if ((this_00 != (undefined *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
      uVar1 = F_0056c6b0(*(undefined4 *)(REFG(int, 0x1379860) + 0x30),*(int *)(param_1 + 0x14),
                           (uint)*(byte *)((int)this_00 + 0x114));
      F_00584110(this_00,uVar1);
    }
  }
  return 0;
}

/* ref: FUN_0058bba0 */
uint F_0058bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if ((*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) && (in_EAX = 0, param_1 != 0)) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    in_EAX = F_005832e0(this);
  }
  return in_EAX;
}

/* ref: FUN_0058bbd0 */
uint F_0058bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x138);
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  uVar1 = F_00584110(this_00,param_1);
  return uVar1;
}

/* ref: FUN_0058bbf0 */
uint F_0058bbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58bbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x120);
  if ((this_00 == (undefined *)0x0) || (*(short *)((int)this_00 + 0x18) != 3)) {
    this_00 = (undefined *)0x0;
  }
  F_00584110(this_00,param_1);
  uVar1 = *(uint *)((int)this + 0x11c);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x100000;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) & 0xffffff7f;
  }
  return uVar1;
}

/* ref: FUN_0058bc40 */
byte F_0058bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x58bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 * puVar14;
  byte bVar15;
  undefined4 * puVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint local_10;
  
  iVar13 = *(int *)((int)this + 0xb4);
  if ((((iVar13 == 0) || (*(int *)(iVar13 + 8) != 0)) || (*(int *)(iVar13 + 0xc) == 0)) ||
     (uVar9 = F_00572c50(*(int *)(iVar13 + 0xc)), uVar9 != 2)) {
    return 0;
  }
  iVar4 = *(int *)(REFG(int, 0x1379860) + 4);
  uVar9 = *(uint *)((int)this + 0x250) >> 9 & 0xffff;
  if (uVar9 < 0xffff) {
    uVar9 = 0xffff - uVar9;
  }
  else {
    uVar9 = 0;
  }
  uVar5 = *(undefined4 *)((int)this + 0x140);
  *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + 0x70))) = uVar9 & 0xffff;
  pvVar6 = *(undefined * PTR32 *)(iVar4 + 4);
  uVar10 = F_005bfe10(pvVar6,1,0x50,2);
  if (uVar10 != 0) {
    *(byte *)((int)pvVar6 + 0xa4) = *(byte *)((int)pvVar6 + 0xa4) | 4;
    *(undefined4 *)(uVar10 + 0xc) = uVar5;
    *(undefined4 *)(uVar10 + 8) = 1;
    puVar14 = &REFG(undefined4, 0x1302d40);
    puVar16 = (undefined4 *)(uVar10 + 0x10);
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005bfeb0(pvVar6,uVar10);
  }
  iVar12 = *(int *)(iVar13 + 8);
  if (iVar12 == 0) {
    if (*(int *)(iVar13 + 0xc) != 0) {
      iVar13 = *((int *)GEN_TOP((*(int *)(iVar13 + 0xc) + 0xfc)));
      goto LAB_0058bd30;
    }
  }
  else if (iVar12 == 1) {
    if (*(int *)(iVar13 + 0xc) != 0) {
      iVar13 = *((int *)GEN_TOP((*(int *)(iVar13 + 0xc) + 0x18)));
      goto LAB_0058bd30;
    }
  }
  else if (iVar12 == 2) {
    iVar13 = *(int *)(iVar13 + 0xc);
    goto LAB_0058bd30;
  }
  iVar13 = 0;
LAB_0058bd30: ;
  *(int *)((int)this + 0x210) = iVar13;
  if (iVar13 != 0) {
    *(undefined4 *)((int)this + 0x218) = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)((int)this + 0x21c) = *(undefined4 *)(iVar13 + 0x1c);
  }
  local_10 = 0;
  bVar15 = 1;
  do {
    fVar17 = (float10)(int)local_10;
    uVar10 = 0;
    if ((int)local_10 < 0) {
      fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    bVar8 = bVar15 + 0xc;
    fVar1 = (float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10a1918));
    fVar2 = (float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x10a1918));
    do {
      uVar5 = REFG(float, 0x1087f04);
      fVar17 = (float10)*(double *)&REFG(undefined, 0x1094878);
      fVar18 = (float10)(int)uVar10;
      if ((int)uVar10 < 0) {
        fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      *(float *)((int)this + 0x1a4) = fVar1;
      fVar3 = (float)(fVar18 * fVar17);
      uVar11 = 1 << (bVar15 + 1 & 0x1f);
      *(float *)((int)this + 0x1a0) = fVar3;
      *(float *)((int)this + 0x1ac) = fVar2;
      *(float *)((int)this + 0x1a8) = fVar3;
      *(float *)((int)this + 0x1b4) = fVar2;
      fVar3 = (float)((float10)fVar3 + fVar17);
      *(float *)((int)this + 0x1b0) = fVar3;
      *(float *)((int)this + 0x1bc) = fVar1;
      *(float *)((int)this + 0x1b8) = fVar3;
      uVar7 = *(uint *)((int)this + 0x264);
      if ((uVar11 & uVar7) == 0) {
        uVar21 = uVar5;
        if ((*(uint *)((int)this + 0x260) & uVar11) != 0) {
          uVar21 = 0;
        }
      }
      else {
        uVar21 = *(undefined4 *)((int)this + 0x268);
      }
      uVar11 = 1 << (bVar15 & 0x1f);
      if ((uVar11 & uVar7) == 0) {
        uVar20 = uVar5;
        if ((*(uint *)((int)this + 0x260) & uVar11) != 0) {
          uVar20 = 0;
        }
      }
      else {
        uVar20 = *(undefined4 *)((int)this + 0x268);
      }
      uVar11 = 1 << (bVar15 - 1 & 0x1f);
      if ((uVar11 & uVar7) == 0) {
        uVar19 = 0;
        if ((*(uint *)((int)this + 0x260) & uVar11) == 0) {
          uVar19 = uVar5;
        }
      }
      else {
        uVar19 = *(undefined4 *)((int)this + 0x268);
      }
      *(undefined4 *)((int)this + 0x1f0) = uVar19;
      *(undefined4 *)((int)this + 500) = uVar20;
      *(undefined4 *)((int)this + 0x1f8) = uVar21;
      *(undefined4 *)((int)this + 0x1fc) = uVar5;
      F_00585cf0((undefined *)((int)this + 0x150),iVar4);
      uVar10 = uVar10 + 1;
      bVar15 = bVar15 + 3;
    } while (uVar10 < 4);
    local_10 = local_10 + 1;
    bVar15 = bVar8;
  } while (local_10 < 3);
  uVar5 = *(undefined4 *)((int)this + 0x140);
  *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + 0x70))) = uVar9 & 0xffff;
  pvVar6 = *(undefined * PTR32 *)(iVar4 + 4);
  uVar9 = F_005bfe10(pvVar6,1,0x50,2);
  if (uVar9 != 0) {
    *(byte *)((int)pvVar6 + 0xa4) = *(byte *)((int)pvVar6 + 0xa4) & 0xfb;
    *(undefined4 *)(uVar9 + 0xc) = uVar5;
    *(undefined4 *)(uVar9 + 8) = 0;
    puVar14 = &REFG(undefined4, 0x1302d40);
    puVar16 = (undefined4 *)(uVar9 + 0x10);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005bfeb0(pvVar6,uVar9);
  }
  return 1;
}

/* ref: FUN_0058bf60 */
uint F_0058bf60(unsigned int gen_a0)
{
  GEN_ENTER(0x58bf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint in_EAX = 0;
  undefined1 * puVar2;
  
  if (*(char *)((int)this + 0xbc) != '\0') {
    ((undefined1 *)(gen_frame + 0x6))[1] = 0xff;
    ((undefined1 *)(gen_frame + 0x6))[0] = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0))));
    (*(char *)(gen_frame + 0x0)) = (char)(int)TRUNC(((double)GEN_TOD(((uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x67))) *
                                        (uint)(*(undefined1 *)((char *)&REFG(undefined4, 0x131de68) + 3))))) / *(double *)&REFG(undefined, 0x1088100));
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 3)) = (*(char *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT13((*(char *)(gen_frame + 0x0)),GEN_PIECE(&(*(float *)(gen_frame + 0x8)), 0, 3)));
    if ((*(char *)(gen_frame + 0x0)) == -1) {
      puVar2 = ((undefined1 *)(gen_frame + 0x6)) + 1;
    }
    else {
      puVar2 = (undefined1 *)((int)&(*(float *)(gen_frame + 0x8)) + 3);
      if ((*(char *)(gen_frame + 0x0)) == '\0') {
        puVar2 = ((undefined1 *)(gen_frame + 0x6));
      }
    }
    *(undefined1 *)((int)this + 0x2eb) = *puVar2;
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x88) + 0x34))) -
                   (float10)(int)*(short *)((int)this + 0x292))));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    *(float *)((int)this + 0x2c8) =
         ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x88) + 0x30))) -
                (float10)(int)*(short *)((int)this + 0x290))));
    *(float *)((int)this + 0x2cc) = fVar1;
    *(short *)((int)this + 0x2ec) = *(short *)((int)this + 0x30) << 6;
    in_EAX = F_00586530((undefined *)((int)this + 0x2c0),*(undefined4 *)(REFG(int, 0x1379860) + 4));
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentMap::DiscoveryRenderer::vf4 */
uint F_0058c050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58c050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = *(undefined * PTR32 *)(this + 0xc);
  if (*(int *)((int)this_00 + 0x88) != param_1) {
    uVar5 = F_005849f0((undefined *)this,param_1,param_2);
    return uVar5;
  }
  if (*(char *)((int)this_00 + 0xb9) == '\0') {
    F_005849f0((undefined *)this,param_1,param_2);
    uVar5 = F_0058bf60(*(undefined * PTR32 *)(this + 0xc));
    return uVar5;
  }
  if (*(int *)((int)this_00 + 0xac) != 0) {
    iVar1 = *(int *)((int)this_00 + 0xac) + 4;
    uVar5 = F_0056a740(iVar1);
    if (uVar5 != 0) {
      if (*(char *)((int)this_00 + 0xbb) != '\0') {
        bVar4 = F_0058bc40(this_00);
        if (bVar4 != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 0xc) + 0xbb))) = 0;
        }
      }
      uVar5 = REFG(undefined4, 0x1302378);
      iVar2 = *(int *)(REFG(int, 0x1379860) + 4);
      iVar3 = *(int *)(iVar2 + 4);
      uVar6 = F_0056a740(iVar1);
      *(uint *)(iVar3 + 0x7c) = uVar6;
      *(uint *)(iVar3 + 0x88) = uVar5 & 0xfffffff;
      iVar1 = *(int *)(iVar2 + 4);
      *(undefined4 *)(iVar1 + 0x80) = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x140)));
      *(uint *)(iVar1 + 0x8c) = uVar5 & 0xfffffff;
      F_005849f0((undefined *)this,param_1,param_2);
    }
  }
  uVar5 = F_0058bf60(*(undefined * PTR32 *)(this + 0xc));
  return uVar5;
}

/* ref: FUN_0058c140 */
unsigned int F_0058c140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58c140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  if (this != (undefined *)0x0) {
    if (*(char *)((int)this + 0x20) != '\x02') {
      switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x20))) {
      case '\0': ;
      case '\x01': ;
        F_00584110(*(undefined * PTR32 *)((int)this + 4),param_1);
        return 0;
      case '\x02': ;
        if (*(int *)this != 0) {
          F_00584110(*(undefined * PTR32 *)(*(int *)this + 0x84),param_1);
          return 0;
        }
switchD_0058c180_caseD_3: ;
        F_00584110(*(undefined * PTR32 *)((int)this + 8),param_1);
        return 0;
      case '\x03': ;
        goto switchD_0058c180_caseD_3;
      default: ;
        F_00584110((undefined *)0x0,param_1);
        return 0;
      }
    }
    this_00 = *(undefined * PTR32 *)this;
    if (((this_00 != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this_00 + 0x84) != (undefined *)0x0)) &&
       (param_1 != 0)) {
      F_00584110(*(undefined * PTR32 *)((int)this_00 + 0x84),param_1);
      F_005832e0(this_00);
    }
  }
  return 0;
}

/* ref: FUN_0058c1d0 */
unsigned int F_0058c1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x58c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)this;
  *(undefined1 *)((int)this + 0x10) = 0;
  if (piVar1 != *(int * PTR32 *)((int)this + 4)) {
    do {
      do {
        iVar2 = *piVar1;
        F_00c46e20(piVar1,piVar1 + 1,(*(int *)((int)this + 4) - (int)(piVar1 + 1) >> 2) * 4);
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
      } while (iVar2 == 0);
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 != 0) {
        F_00429760(iVar3,(*(int *)(iVar2 + 0xc) - iVar3 >> 2) * 4,400);
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      F_00406ad0(iVar2);
    } while( true );
  }
  return 0;
}

/* ref: FUN_0058c250 */
uint F_0058c250(unsigned int gen_a0)
{
  GEN_ENTER(0x58c250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  
  iVar5 = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)this != 0) {
    iVar4 = 6;
    do {
      F_00557e00((undefined *)(iVar5 + *(int *)this));
      iVar5 = iVar5 + 0x150;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar5 = *(int *)this;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + -4);
      this_00 = (undefined *)(iVar4 * 0x150 + iVar5);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        this_00 = (undefined *)((int)this_00 + -0x150);
        F_0057e680(this_00);
      }
      F_00406b30(iVar5 + -4);
      *(undefined4 *)this = 0;
    }
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406810(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*(int *)((int)this + 0x14) != 0) {
      F_00406810(*(int *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    if (*(int *)((int)this + 0x10) != 0) {
      F_00406810(*(int *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (uVar3 != 0) {
      F_00406810(uVar3);
    }
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406810(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar3 = F_00406810(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar3;
}

/* ref: FUN_0058c380 */
byte F_0058c380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58c380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_c;
  int * local_8;
  
  iVar3 = (int)param_1 + 0x10;
  *((int *)GEN_TOP((*(int *)(param_2 + 4) + 0x74))) = param_4;
  param_1 = (uint *)((int)((int)(uintptr_t)param_1) * 0x40 + 0x2a0 + (int)this);
  local_c = 0;
  if (*(short *)(param_3 + 0x6c) != 0) {
    local_8 = (int *)(param_3 + 0x24);
    iVar3 = iVar3 * 0x20 - (int)param_1;
    do {
      iVar1 = *(int *)((int)this + iVar3 + (int)param_1);
      if (iVar1 != 0) {
        iVar2 = *local_8;
        iVar4 = 0x122000;
        if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
          iVar4 = 0x122100;
        }
        if ((*(int *)(param_2 + 0x10) != iVar4) || (*(int *)(param_2 + 0x24) != iVar2)) {
          *(int *)(param_2 + 0x10) = iVar4;
          *(int *)(param_2 + 0x24) = iVar2;
          F_00577690(param_2 + 0x14,iVar4,iVar2);
        }
        this_00 = *(undefined * PTR32 *)(param_2 + 4);
        iVar1 = iVar1 * 4;
        if (*(int *)((int)this_00 + 0x74) == 1) {
          uVar7 = 1;
LAB_0058c461: ;
          uVar6 = F_005cc4d0(this_00,uVar7,0x22,iVar1,param_2 + 0x14);
        }
        else {
          if (*(int *)((int)this_00 + 0x74) == 2) {
            uVar7 = 2;
            goto LAB_0058c461;
          }
          uVar5 = F_005bfe10(this_00,0x22,0x24,0);
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = F_005c83b0(this_00,uVar5,0x22,iVar1,param_2 + 0x14);
          }
        }
        if (uVar6 == 0) {
          return 0;
        }
        if ((&REFG(undefined * PTR32, 0x10a0c2c))[param_4] == (undefined *)0x1) {
          *param_1 = uVar6;
        }
        else if ((&REFG(undefined * PTR32, 0x10a0c2c))[param_4] == (undefined *)0x2) {
          param_1[8] = uVar6;
        }
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (local_c < *(ushort *)(param_3 + 0x6c));
  }
  return 1;
}

/* ref: FUN_0058c4d0 */
uint F_0058c4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x58c4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  short sVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  sVar1 = (short)param_6;
  if ((short)param_6 == 0) {
    sVar1 = -1;
  }
  (*(short *)(gen_frame + 0x8)) = sVar1;
  (*(undefined1 *)(gen_frame + 0xc)) = (undefined1)param_4;
  (*(undefined2 *)(gen_frame + 0xa)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)param_5;
  (*(char *)(gen_frame + 0xf)) = (char)param_7;
  if ((char)param_7 == '\0') {
    (*(char *)(gen_frame + 0xf)) = -1;
  }
  (*(undefined1 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined2 *)(gen_frame + 0x12)) = 0xffff;
  F_00586b50((undefined *)((int)this + 0x2224c),param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x14)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf4 */
uint F_0058c5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58c5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    uVar1 = F_00584b60(this,param_1);
  }
  else {
    uVar1 = (*(byte *)(param_1 + 0xa0) & 1) - 1;
    if (uVar1 == 0) {
      uVar1 = F_005850a0(this,param_1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0058c5d0 */
uint F_0058c5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x58c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 8) != 0) {
      uVar3 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),*(int *)((int)this + 8));
      if (uVar3 != 0) {
        return uVar3;
      }
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)((int)this + 8) != 0) {
      F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c),*(int *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
      return 0;
    }
  }
  else if ((iVar1 == 2) && (piVar2 = *(int * PTR32 *)((int)this + 8), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_0058c640 */
unsigned int F_0058c640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58c640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 4) != param_1) {
    F_0058c5d0(this);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_0058c660 */
uint F_0058c660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58c660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  uint local_c;
  
  uVar5 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    local_c = 0;
    iVar9 = param_3;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4)));
      iVar4 = param_3;
      if (((uVar5 != 0) &&
          ((((iVar3 = *((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4 + -4))), iVar3 != 0 &&
             (10000 < *(uint *)(iVar3 + 4))) || (iVar2 == 0)) ||
           (iVar4 = iVar9, *(uint *)(iVar2 + 4) < 0x2711)))) &&
         (((iVar4 = param_3, iVar3 != 0 && (10000 < *(uint *)(iVar3 + 4))) &&
          ((iVar2 == 0 || (*(uint *)(iVar2 + 4) < 0x2711)))))) {
        iVar4 = param_3 + (uint)*(ushort *)(param_3 + 0x18);
      }
      param_3 = iVar4;
      iVar9 = param_3;
      if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
        uVar6 = F_00587f50(*(undefined * PTR32 *)((int)this + 0x28),(uint)*(ushort *)(param_3 + 0x56));
        *(uint *)(iVar2 + 0x1c) = uVar6;
        if (uVar6 != 0) {
          *(int *)(uVar6 + 4) = iVar2;
        }
      }
      uVar1 = *(ushort *)(iVar2 + 0x18);
      if (999 < uVar1) {
        uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
        if (uVar6 != 0) {
          puVar7 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
          uVar8 = 0;
          if (uVar6 != 0) {
            do {
              if (*puVar7 == (uint)uVar1) {
                F_0058f840(((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 8) + local_c * 4))) + 0x8c)))
                                     + 4))),param_1,(uint)uVar1,param_4);
                break;
              }
              uVar8 = uVar8 + 1;
              puVar7 = (uint *)((int)puVar7 + (uint)(ushort)puVar7[3]);
            } while ((uVar8 & 0xffff) < uVar6);
          }
        }
      }
      if (*(uint *)(iVar2 + 4) < 0x2711) {
        param_3 = param_3 + (uint)*(ushort *)(param_3 + 0x18);
      }
      uVar5 = uVar5 + 1;
      local_c = (uint)uVar5;
    } while (local_c < *(uint *)(param_2 + 4));
  }
  return 0;
}

/* ref: FUN_0058c7c0 */
uint F_0058c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x58c7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00404270();
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar1 = F_00406bd0(0x8c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_00570ce0(uVar1);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = F_00406bd0(0x94,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cccf0(uVar1);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = F_00406bd0(0x11c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd20(uVar1);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = F_00406bd0(0xa4,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd60(uVar1);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = F_00406bd0(0xf8,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccd90(uVar1);
      return uVar1;
    }
    break;
  case 6: ;
    uVar1 = F_00406bd0(0x148,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cf450(uVar1);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = F_00406bd0(0x138,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cf490(uVar1);
      return uVar1;
    }
    break;
  case 8: ;
    uVar1 = F_00406bd0(0x9c,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005ccdd0(uVar1);
      return uVar1;
    }
    break;
  case 9: ;
    uVar1 = F_00406bd0(0x98,0,uVar1,0);
    if (uVar1 != 0) {
      uVar1 = F_005cce00(uVar1);
      return uVar1;
    }
    break;
  default: ;
    if (param_1 < 1000) {
      puVar2 = (undefined4 *)F_00406bd0(0x8c,0,uVar1,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
        goto LAB_0058c964;
      }
    }
    else {
      puVar2 = (undefined4 *)F_00406bd0(0x90,0,uVar1,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10a0f44));
LAB_0058c964: ;
        puVar2[2] = 0;
        puVar2[0x22] = 0;
        puVar2[0x21] = 0;
        puVar2[0x20] = 0;
        puVar2[7] = 0;
        return (uint)puVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_0058c9c0 */
uint F_0058c9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58c9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && (*(int *)((int)this + 8) != 0)) {
    iVar1 = **((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    if (iVar1 != 0) {
      F_0057f0d0(this,iVar1,*(undefined4 *)(iVar1 + 8),param_1);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: Component::GUI2::AtkUnitBase::vf3 */
byte F_0058ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) & 0xfff7ffff;
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar2 != 3) && (uVar2 != 2)) {
    if ((((byte)this[0xf8] & 0x10) != 0) && ((*(uint *)(this + 0xf4) >> 0x10 & 0xf) != param_1)) {
      F_00587d10(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),this);
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x14);
    *(uint *)(this + 0xf4) =
         *(uint *)(this + 0xf4) ^ (param_1 << 0x10 ^ *(uint *)(this + 0xf4)) & 0xf0000;
    (*pcVar1)(this,0);
    this[0xf8] = (undefined1)((byte)this[0xf8] & 0xbf);
  }
  return 1;
}

/* ref: FUN_0058ca80 */
byte F_0058ca80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if (((uVar1 == 3) || (uVar1 == 2)) && ((*(byte *)((int)this + 0xf8) & 0x80) == 0)) {
    if ((*(byte *)((int)this + 0xf9) & 1) == 0) {
      F_0056b870(this);
      return 1;
    }
    F_00587890(this,param_1);
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf17 */
uint F_0058cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0055e750(((float)GEN_TOF((((float10)1 / (float10)*(float *)(this + 0x11c)) *
                              (float10)*(float *)(this + 0x118)))));
  fVar2 = *(float *)&REFG(undefined, 0x109fec8);
  if ((uVar1 != 1) && (fVar2 = REFG(float, 0x1087f04), uVar1 == 2)) {
    fVar2 = REFG(float, 0x109fec0);
  }
  uVar1 = F_00587df0(*(undefined4 *)(REFG(int, 0x1379860) + 0x14),this,fVar2,param_1);
  return uVar1;
}

/* ref: FUN_0058cb40 */
byte F_0058cb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58cb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[2]);
  if (((*(int *)&gen_args[2]) == 0) || ((*(int *)&gen_args[1]) == 0)) {
    return 0;
  }
  F_00587d10((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]));
  *(uint *)(iVar2 + 0xf4) =
       *(uint *)(iVar2 + 0xf4) ^ (*(uint *)((*(int *)&gen_args[1]) + 0xf4) ^ *(uint *)(iVar2 + 0xf4)) & 0xf0000;
  *(byte *)(iVar2 + 0xf8) = *(byte *)(iVar2 + 0xf8) | 0x10;
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(ushort *)(iVar2 + 0xf6) & 0xf) + 2) * 0xc)));
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    F_005cd980(this_00,&(*(int *)&gen_args[2]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    return 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)*this_00));
  if (puVar1 != (undefined4 *)*this_00) {
    F_005ce470(this_00,&(*(undefined4 *)&gen_args[3]),puVar1,&(*(int *)&gen_args[2]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    return 1;
  }
  F_005cd9e0(this_00,&(*(int *)&gen_args[2]));
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
  return 1;
}

/* ref: FUN_0058cc00 */
uint F_0058cc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58cc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  int * piVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  if (((*(int *)&gen_args[2]) == 0) || ((*(int *)&gen_args[1]) == 0)) {
    return in_EAX & 0xffffff00;
  }
  *(uint *)((*(int *)&gen_args[2]) + 0xf4) =
       *(uint *)((*(int *)&gen_args[2]) + 0xf4) ^ (*(uint *)((*(int *)&gen_args[1]) + 0xf4) ^ *(uint *)((*(int *)&gen_args[2]) + 0xf4)) & 0xf0000
  ;
  *(byte *)((*(int *)&gen_args[2]) + 0xf8) = *(byte *)((*(int *)&gen_args[2]) + 0xf8) | 0x10;
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(ushort *)((*(int *)&gen_args[2]) + 0xf6) & 0xf) * 3 + 6) * 4)));
  piVar1 = (int *)*this_00;
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      if ((*(char *)(piVar3[2] + 0x13a) == *(char *)((*(int *)&gen_args[1]) + 0x13a)) &&
         (((char)(*(undefined4 *)&gen_args[3]) != '\0' || (piVar3 = (int *)*piVar3, piVar3 != piVar1)))) {
        uVar4 = F_005ce470(this_00,&(*(int *)&gen_args[1]),piVar3,&(*(int *)&gen_args[2]));
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
  }
  bVar2 = F_0058cb40((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_0058ccd0 */
unsigned int F_0058ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0xc4) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc0) + 4))) + 8)));
  }
  *(int * PTR32 *)((int)this + 0xcc) = piVar4;
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x74))(piVar4);
    if ((((char)uVar2 != '\0') &&
        (uVar2 = F_0057f930(this,*(undefined4 *)((int)this + 0xcc)), uVar2 != 0)) &&
       ((uVar3 = *(uint *)(uVar2 + 0xf4) >> 0x14 & 0xf, uVar3 == 3 || (uVar3 == 2)))) {
      F_00587d80(this,uVar2);
      *(uint *)((int)this + 0xcc) = uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xcc) + 0xd4))))(*(int * PTR32 *)((int)this + 0xcc),1);
    if ((((char)param_1 != '\0') &&
        (this_00 = *(undefined * PTR32 *)((int)this + 0xcc), (*(byte *)((int)this_00 + 0xf9) & 1) != 0)) &&
       (((uVar2 = *(uint *)((int)this_00 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
        ((*(byte *)((int)this_00 + 0xf8) & 0x80) == 0)))) {
      iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
      if (*(short *)(iVar1 + 0xc68) == 0) {
        F_005877e0(this_00,*(undefined4 *)(iVar1 + 0xc58));
        return 0;
      }
      F_005877e0(this_00,*((undefined4 *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc))));
    }
  }
  return 0;
}

/* ref: FUN_0058cdd0 */
uint F_0058cdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x58cdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a4b300(this,0x800);
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00a4b410(this,0);
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0058ce50 */
uint F_0058ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00a4b3a0(this);
  if (*(uint *)((int)this + 0x24) == uVar1) {
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x28) == uVar1) {
    *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x2c) == uVar1) {
    *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x30) == uVar1) {
    *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x34) == uVar1) {
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x38) == uVar1) {
    *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x3c) == uVar1) {
    *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x40) == uVar1) {
    *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  }
  puVar2 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar2 = *(undefined4 *)((int)this + 0x18);
  puVar2[1] = *(undefined4 *)((int)this + 0x18);
  puVar2[2] = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)(puVar2 + 5) = 0;
  if (puVar2 + 3 != (uint *)0x0) {
    puVar2[3] = uVar1;
    puVar2[4] = param_1;
  }
  F_005cb640((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  *(uint *)(param_1 + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_0058cf00 */
uint F_0058cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58cf00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if (0 < (int)(*(uint *)&gen_args[1])) {
    F_00a4b450((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
    F_005c60b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    uVar1 = F_005c9640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_0058cf50 */
unsigned int F_0058cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58cf50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    while (piVar6[4] != (*(int *)&gen_args[1])) {
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
      if (piVar6 == piVar2) {
        return 0;
      }
    }
    iVar4 = piVar6[3];
    (*(int *)&gen_args[1]) = iVar4;
    F_00a4b450((*(undefined * PTR32 *)&gen_args[0]),iVar4);
    F_005c60b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_005c9640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: FUN_0058d050 */
uint F_0058d050(unsigned int gen_a0)
{
  GEN_ENTER(0x58d050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar5 = (int *)((int)this + 0x20);
  iVar4 = 2;
  do {
    iVar1 = piVar5[-1];
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*piVar5 != 0) {
        uVar3 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),*piVar5);
        if (uVar3 == 0) goto LAB_0058d0b4;
      }
    }
    else if (iVar1 == 1) {
      uVar3 = 0;
      if (*piVar5 != 0) {
        uVar3 = F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c),*piVar5);
        goto LAB_0058d0b4;
      }
    }
    else {
      uVar3 = iVar1 - 2;
      if ((uVar3 == 0) && (piVar2 = (int *)*piVar5, piVar2 != (int *)0x0)) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
LAB_0058d0b4: ;
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 3;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_0058d140 */
uint F_0058d140(unsigned int gen_a0)
{
  GEN_ENTER(0x58d140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x90)));
    if ((iVar1 != 0) && (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x80), pvVar2 != (undefined *)0x0)) {
      F_00583770(pvVar2,0x38,0,this,0);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x90)));
    if ((iVar1 != 0) && (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x80), pvVar2 != (undefined *)0x0)) {
      F_00583770(pvVar2,0x39,0,this,0);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x18))))(*(int * PTR32 *)((int)this + 0x10),0,0);
  }
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar3;
}

/* ref: FUN_0058d1b0 */
uint F_0058d1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x58d1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))),0x49,0,this,0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  uVar1 = F_0042c880((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return (uint)uVar1;
}

/* ref: FUN_0058d1f0 */
uint F_0058d1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x58d1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1924));
  this_00 = (undefined *)((int)this + 0xd0);
  iVar1 = 3;
  do {
    this_00 = (undefined *)((int)this_00 + -0x28);
    F_00580e00(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_005ca2d0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 8),0x18,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return (uint)uVar2;
}

/* ref: FUN_0058d250 */
uint F_0058d250(unsigned int gen_a0)
{
  GEN_ENTER(0x58d250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[3];
    if (iVar4 != 0) {
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80),6,0,this,0);
      }
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80),7,0,this,0);
      }
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80),3,0,this,0);
      }
    }
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x15);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  F_005c8ad0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_0058d370 */
uint F_0058d370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined * in_EAX = 0;
  
  iVar2 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) == 0) && ((*(int *)&gen_args[1]) != 0)) &&
     (F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1])), in_EAX = (*(undefined * PTR32 *)(gen_frame + 0x8)),
     (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    in_EAX = (undefined *)F_00588780((*(undefined * PTR32 *)&gen_args[0]),(uint)*(byte *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),
                                  iVar2,iVar1,0,0);
  }
  return (uint)in_EAX;
}

/* ref: FUN_0058d400 */
uint F_0058d400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  for (puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))));
      puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 4) == (*(int *)&gen_args[1])) goto LAB_0058d421;
  }
  iVar3 = 0;
LAB_0058d421: ;
  uVar2 = F_00588cd0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),iVar3,0);
  return uVar2;
}

/* ref: FUN_0058d440 */
uint F_0058d440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d440u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  for (puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))));
      puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 0x14) == (*(int *)&gen_args[1])) goto LAB_0058d461;
  }
  iVar3 = 0;
LAB_0058d461: ;
  uVar2 = F_00588cd0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),iVar3,0);
  return uVar2;
}

/* ref: FUN_0058d480 */
uint F_0058d480(unsigned int gen_a0)
{
  GEN_ENTER(0x58d480u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0xffffffff;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0058d4b0 */
uint F_0058d4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x58d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  F_0058cf50(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x28),this);
  F_0056c5f0(this);
  uVar2 = F_00573eb0(((undefined *)(uint)(this)));
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 0x1c) - iVar1) / 0x14) * 0x14,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return uVar2;
}

/* ref: FUN_0058d530 */
uint F_0058d530(unsigned int gen_a0)
{
  GEN_ENTER(0x58d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x28);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x24);
  uVar1 = F_005cd5c0((undefined *)((int)this_00 + 0x14),&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)((int)this_00 + 0x18)) {
    uVar1 = F_0058ce50(this_00,this);
    *(uint *)((int)this + 0x24) = uVar1;
    uVar1 = *(uint *)(REFG(int, 0x1379860) + 0x28);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0x44);
    *(undefined4 *)((int)this + 4) = 1;
  }
  return uVar1;
}

/* ref: FUN_0058d590 */
uint F_0058d590(unsigned int gen_a0)
{
  GEN_ENTER(0x58d590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x98) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))));
  }
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  return 0xffffffff;
}

/* ref: Component::GUI2::AtkComponentTab::vf23 */
uint F_0058d5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
  }
  uVar2 = F_005885a0(param_1 + 0x10,*(undefined4 *)(iVar1 + 8),this);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf23 */
uint F_0058d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
  }
  uVar2 = F_005885a0(param_1 + 4,*(undefined4 *)(iVar1 + 8),this);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentList::vf7 */
unsigned int F_0058d640(unsigned int gen_a0)
{
  GEN_ENTER(0x58d640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * pvVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (((byte)this[0x66] & 1) != 0) {
    if (this[0x123] != (undefined1)0x0) {
      *(undefined2 *)(this + 0x30) = *((undefined2 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x19e)));
    }
    if ((((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
        (*(int *)(this + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)) {
      F_005715d0(*(undefined * PTR32 *)(this + 0x38),this + 4,this);
    }
    pvVar1 = *(undefined * PTR32 *)(this + 0x90);
    if (pvVar1 != (undefined *)0x0) {
      (*(float *)(gen_frame + 0xac)) = *(float *)((int)pvVar1 + 0x30);
      (*(float *)(gen_frame + 0xb0)) = *(float *)((int)pvVar1 + 0x34);
    }
    fVar4 = REFG(float, 0x1087f04);
    if (this[0x125] != (undefined1)0x0) {
      fVar4 = REFG(float, 0x10928e4);
    }
    (*(float *)(gen_frame + 0xb4)) = fVar4;
    uVar2 = F_00568270(pvVar1);
    (*(uint *)(gen_frame + 0xb8)) = (uint)uVar2;
    (*(float *)(gen_frame + 0x9c)) = (float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0xac)));
    uVar2 = F_005682d0(pvVar1);
    (*(uint *)(gen_frame + 0xb8)) = (uint)uVar2;
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)uVar2 + (float10)(*(float *)(gen_frame + 0xb0)));
    F_00c48350(((byte *)(gen_frame + 0xc)),0,0x88);
    iVar6 = (int)(*(float *)(gen_frame + 0xac));
    iVar7 = *(int *)(REFG(int, 0x1379860) + 4);
    iVar5 = (*(ushort *)(this + 0x30) & 0x3ff) * -0x40 + 0xffff;
    *((int *)GEN_TOP((*(int *)(iVar7 + 4) + 0x70))) = iVar5;
    pvVar1 = *(undefined * PTR32 *)(iVar7 + 4);
    (*(int *)(gen_frame + 0xa4)) = iVar5;
    uVar3 = F_005bfe10(pvVar1,2,0x1c,0);
    if (uVar3 != 0) {
      *(byte *)((int)pvVar1 + 0xa4) = *(byte *)((int)pvVar1 + 0xa4) | 2;
      *(int *)(uVar3 + 0xc) = iVar6;
      *(int *)(uVar3 + 0x10) = (int)(*(float *)(gen_frame + 0xb0));
      *(int *)(uVar3 + 0x14) = (int)(*(float *)(gen_frame + 0x9c));
      *(int *)(uVar3 + 0x18) = (int)(*(float *)(gen_frame + 0xa0));
      *(undefined4 *)(uVar3 + 8) = 1;
      F_005bfeb0(pvVar1,uVar3);
    }
    (*(int *)(gen_frame + 0xa8)) = (uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0);
    iVar7 = 0;
    uVar3 = (uint)(*(int *)(this + 0xb8) != 0) + (uint)*(ushort *)(this + 0xe8);
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0xb8)) = uVar3;
      do {
        (*(float *)(gen_frame + 0xb4)) = 0.0;
        if (*(short *)(this + 0xee) != 0) {
          do {
            fVar4 = 0.0;
            iVar5 = (*(int *)(gen_frame + 0xa8)) + iVar7;
            iVar7 = iVar7 + 1;
            if (-1 < iVar5) {
              if (*(int *)(this + 0xac) <= iVar5) break;
              iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x98) + iVar5 * 8)));
              *(undefined2 *)(iVar6 + 0x30) = *(undefined2 *)(this + 0x30);
              if (*(int *)(this + 0xd0) == iVar5) {
                iVar5 = *(int *)(iVar6 + 0x70);
                if (iVar5 == 0) {
                  fVar8 = 0.0;
                }
                else {
                  fVar8 = *(float *)(iVar5 + 0x3c);
                  fVar4 = *(float *)(iVar5 + 0x38);
                }
                F_00589920(iVar6,(uint)(ushort)((short)(int)fVar4 - 3),
                             (uint)(ushort)((short)(int)fVar8 - 2));
                if ((((*(byte *)(iVar6 + 0x60) & 1) != 0) && (*(int *)(iVar6 + 0x24) == 3)) &&
                   ((*(int *)(iVar6 + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(iVar6 + 0xc) + 4))) != 0)))) {
                  F_005715d0(*(undefined * PTR32 *)(iVar6 + 0x38),iVar6 + 4,iVar6);
                }
                iVar5 = *(int *)(iVar6 + 0x70);
                if (iVar5 == 0) {
                  fVar4 = 0.0;
                  fVar8 = 0.0;
                }
                else {
                  fVar4 = *(float *)(iVar5 + 0x3c);
                  fVar8 = *(float *)(iVar5 + 0x38);
                }
                F_00589920(iVar6,(uint)(ushort)((short)(int)fVar8 + 3),
                             (uint)(ushort)((short)(int)fVar4 + 2));
              }
              else if ((((*(byte *)(iVar6 + 0x60) & 1) != 0) && (*(int *)(iVar6 + 0x24) == 3)) &&
                      ((*(int *)(iVar6 + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(iVar6 + 0xc) + 4))) != 0))))
              {
                F_005715d0(*(undefined * PTR32 *)(iVar6 + 0x38),iVar6 + 4,iVar6);
              }
            }
            fVar4 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xb4))) + 1);
            (*(float *)(gen_frame + 0xb4)) = fVar4;
          } while ((int)gen_fl2bits(fVar4) < (int)(uint)*(ushort *)(this + 0xee));
        }
        uVar3 = (*(uint *)(gen_frame + 0xb8)) - 1;
        (*(uint *)(gen_frame + 0xb8)) = uVar3;
      } while (uVar3 != 0);
    }
    iVar7 = *(int *)(REFG(int, 0x1379860) + 4);
    *((int *)GEN_TOP((*(int *)(iVar7 + 4) + 0x70))) = (*(int *)(gen_frame + 0xa4));
    pvVar1 = *(undefined * PTR32 *)(iVar7 + 4);
    uVar3 = F_005bfe10(pvVar1,2,0x1c,0);
    if (uVar3 != 0) {
      *(byte *)((int)pvVar1 + 0xa4) = *(byte *)((int)pvVar1 + 0xa4) & 0xfd;
      *(int *)(uVar3 + 0xc) = (int)(*(float *)(gen_frame + 0xac));
      *(int *)(uVar3 + 0x10) = (int)(*(float *)(gen_frame + 0xb0));
      *(int *)(uVar3 + 0x14) = (int)(*(float *)(gen_frame + 0x9c));
      *(int *)(uVar3 + 0x18) = (int)(*(float *)(gen_frame + 0xa0));
      *(undefined4 *)(uVar3 + 8) = 0;
      F_005bfeb0(pvVar1,uVar3);
    }
  }
  return 0;
}

/* ref: FUN_0058d980 */
uint F_0058d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58d980u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * puVar1;
  code * pcVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  F_005741a0(param_1,param_2);
  param_1[0x2b] = (int)(short)param_2;
  if ((int)(short)param_2 <= param_1[0x30]) {
    ((code *)*(gen_code32 *)(*param_1 + 0x74))(param_1,0xfffffffe,0);
    param_1[0x30] = -1;
  }
  sVar9 = *(short *)((int)param_1 + 0x10e);
  dVar3 = (double)((float)GEN_TOF(((float10)param_1[0x2b] / (float10)*(ushort *)((int)param_1 + 0xee))));
  fVar12 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar3),
                        (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
  sVar10 = (short)(int)fVar12;
  if ((param_1[0x22] == 0) ||
     ((int)sVar10 + (int)(short)(ushort)(sVar9 != 0) <= (int)(uint)*(ushort *)(param_1 + 0x3a))) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  *(char *)(param_1 + 0x45) = cVar5;
  if (cVar5 == '\0') {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)sVar10 - (uint)*(ushort *)(param_1 + 0x3a);
  }
  param_1[0x2f] = iVar6;
  if ((iVar6 < param_1[0x2c]) && (param_1[0x2c] = iVar6, param_1[0x2e] != 0)) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x80);
    param_1[0x2e] = 0;
    (*pcVar2)(param_1);
  }
  if (*(char *)((int)param_1 + 0x11b) != '\0') {
    if ((((char)param_1[0x47] == '\0') || (sVar10 == 0)) ||
       ((uint)*(ushort *)(param_1 + 0x3a) == (int)sVar10)) {
      if ((char)param_1[0x45] != '\0') {
        sVar9 = (short)param_1[0x41];
        goto LAB_0058db07;
      }
      if ((sVar10 != 0) && (sVar10 <= *(short *)((int)param_1 + 0xfa))) {
        sVar9 = (short)param_1[0x41] -
                (*(short *)((int)param_1 + 0xfa) - sVar10) * *(short *)(param_1[0x21] + 0x206);
        goto LAB_0058db07;
      }
    }
    else {
      sVar9 = (short)param_1[0x41] -
              (*(short *)((int)param_1 + 0xfa) - sVar10) * *(short *)(param_1[0x21] + 0x206);
LAB_0058db07: ;
      if (param_1[0x1c] != 0) {
        *(short *)(param_1[0x1c] + 0x7e) = sVar9;
      }
      uVar8 = param_1[0x1c];
      if (uVar8 != 0) {
        F_0057f1a0(uVar8,(uint)*(ushort *)(uVar8 + 0x7c),(uint)*(ushort *)(uVar8 + 0x7e),
                     (uint)*(ushort *)(uVar8 + 0x7c),(uint)*(ushort *)(uVar8 + 0x7e),1);
      }
    }
    if ((char)param_1[0x47] != '\0') {
      iVar6 = param_1[0x1c];
      if (iVar6 == 0) {
        sVar9 = 0;
      }
      else {
        sVar9 = *(short *)(iVar6 + 0x7e);
      }
      iVar7 = (int)(short)(((short)param_1[0x41] + (short)param_1[0x40]) - sVar9);
      if (iVar6 != 0) {
        if (((*(uint *)(iVar6 + 0x88) & 1) == 0) &&
           (fVar12 = (float10)iVar7, bVar11 = GEN_ISNAN((float10)*(float *)(iVar6 + 0x3c)) || GEN_ISNAN(fVar12),
           bVar11 == (bVar11 || (float10)*(float *)(iVar6 + 0x3c) == fVar12))) {
          *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) | 1;
        }
        *(float *)(iVar6 + 0x3c) = (float)iVar7;
      }
    }
  }
  if (param_1[0x22] != 0) {
    if (((char)param_1[0x45] == '\0') && (*(char *)((int)param_1 + 0x116) != '\0')) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
    iVar7 = *(int *)(param_1[0x22] + 0x70);
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x84) =
           *(uint *)(iVar7 + 0x84) ^ (iVar6 << 0x14 ^ *(uint *)(iVar7 + 0x84)) & 0x100000;
      *(uint *)(iVar7 + 0x88) =
           *(uint *)(iVar7 + 0x88) ^
           ((uint)((char)iVar6 == '\0') << 7 ^ *(uint *)(iVar7 + 0x88)) & 0x80;
    }
    ((code *)*(gen_code32 *)(*(int *)param_1[0x22] + 0x28))
              ((int *)param_1[0x22],(uint)*(byte *)(param_1 + 0x45));
    if ((param_1[0x22] != 0) && (iVar6 = *(int *)(param_1[0x22] + 0x70), iVar6 != 0)) {
      puVar1 = (uint *)(iVar6 + 0x84);
      *puVar1 = *puVar1 & 0xfdffffff;
    }
    if ((char)param_1[0x45] != '\0') {
      if (*(char *)((int)param_1 + 0x112) == '\0') {
        sVar10 = *(short *)((int)param_1 + 0xea) * sVar10;
      }
      else {
        sVar10 = (short)param_1[0x3b] * (short)param_1[0x2f];
      }
      F_00589f20((undefined *)param_1[0x22],(int)*(short *)((int)param_1 + 0x10e) + (int)sVar10);
    }
    F_0057ac30(param_1,param_1[0x2c]);
  }
  uVar8 = F_005615f0(param_1);
  if (((((char)uVar8 != '\0') && (param_1[0x2b] != 0)) && (param_1[0x33] == -2)) &&
     (cVar5 = (char)param_1[0x20], -1 < cVar5)) {
    if (cVar5 < '\x03') {
      uVar13 = 1;
      uVar4 = 0;
    }
    else {
      if (cVar5 != '\x03') goto LAB_0058dcda;
      uVar13 = 0;
      uVar4 = 0xffffffff;
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x74))(param_1,uVar4,uVar13);
  }
LAB_0058dcda: ;
  pcVar2 = *(gen_code32 *)(*param_1 + 0x80);
  *(undefined1 *)((int)param_1 + 0x11d) = 1;
  uVar8 = (*pcVar2)(param_1);
  return uVar8;
}

/* ref: FUN_0058dd00 */
unsigned int F_0058dd00(unsigned int gen_a0)
{
  GEN_ENTER(0x58dd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  
  if ((*(int *)((int)this + 0x9c) != 0) &&
     (piVar5 = *(int * PTR32 *)((int)this + 0x98), piVar5 != (int *)0x0)) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x84) + 0x200)));
    iVar4 = 0;
    uVar6 = (uint)*((short *)GEN_TOP((*(int *)((int)this + 0x84) + 0x202)));
    if (0 < *(int *)((int)this + 0x9c)) {
      do {
        F_00589920(*piVar5,(uint)uVar1,uVar6);
        if ((*piVar5 == 0) || (iVar2 = *(int *)(*piVar5 + 0x70), iVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)*(ushort *)(iVar2 + 0x7e);
        }
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + uVar3;
        piVar5 = piVar5 + 2;
      } while (iVar4 < *(int *)((int)this + 0x9c));
    }
  }
  return 0;
}

/* ref: FUN_0058dd80 */
unsigned int F_0058dd80(unsigned int gen_a0)
{
  GEN_ENTER(0x58dd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  uint local_c;
  byte local_5;
  
  uVar6 = 0;
  local_5 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = (uint)*(ushort *)((int)this + 0x1a) + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  }
  if (local_c != 0) {
    do {
      uVar2 = F_00578ee0((undefined *)((int)this + 4),uVar6);
      if (((uVar2 != 0) && (999 < *(ushort *)(uVar2 + 0x18))) &&
         (this_00 = *(undefined * PTR32 *)(uVar2 + 0x8c), this_00 != (undefined *)0x0)) {
        if ((((*(byte *)((int)this_00 + 0x60) & 1) != 0) &&
            ((*(byte *)((int)this_00 + 0x60) & 4) != 0)) &&
           ((*(char *)((int)this_00 + 0x1c) == '\x01' &&
            (*((char *)GEN_TOP((*(int *)((int)this_00 + 0xc) + 0xf))) == '\x0e')))) {
          local_5 = local_5 + 1;
          F_00574490(this,this_00);
          if (*(int *)((int)this_00 + 0x70) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x84)));
            *puVar1 = *puVar1 & 0xdfffffff;
          }
          if (*(int *)((int)this_00 + 0x70) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x84)));
            *puVar1 = *puVar1 | 0x2000000;
          }
          F_005898b0(this_00,(int)this_00 + 4);
          *(uint *)((int)this_00 + 100) =
               *(uint *)((int)this_00 + 100) ^
               ((uint)(*(short *)((int)this_00 + 0x20c) != 0) << 0x11 ^
               *(uint *)((int)this_00 + 100)) & 0x20000;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_c);
  }
  *(byte *)((int)this + 0x110) = local_5;
  piVar3 = (int *)F_00404270();
  uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,(uint)local_5 * 0xc,0x10);
  *(uint *)((int)this + 0xa0) = uVar6;
  local_5 = 0;
  local_10 = 0;
  if (local_c != 0) {
    do {
      if (((*(byte *)((int)this + 0x60) & 1) != 0) &&
         (iVar4 = *(int *)((int)this + 0xc), iVar4 != 0)) {
        if (local_10 < *(uint *)(iVar4 + 4)) {
          iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 8) + local_10 * 4)));
LAB_0058def5: ;
          if (((((iVar4 != 0) && (999 < *(ushort *)(iVar4 + 0x18))) &&
               (iVar4 = *(int *)(iVar4 + 0x8c), iVar4 != 0)) &&
              (((*(byte *)(iVar4 + 0x60) & 1) != 0 && ((*(byte *)(iVar4 + 0x60) & 4) != 0)))) &&
             ((*(char *)(iVar4 + 0x1c) == '\x01' &&
              (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) == '\x0e')))) {
            iVar5 = (uint)local_5 * 0xc;
            *((undefined2 *)GEN_TOP((iVar5 + 8 + *(int *)((int)this + 0xa0)))) = 0;
            if (*(int *)(iVar4 + 0x70) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *((uint *)GEN_TOP((*(int *)(iVar4 + 0x70) + 4)));
              if (10000 < uVar6) {
                uVar6 = uVar6 / 10000;
              }
            }
            local_5 = local_5 + 1;
            *((short *)GEN_TOP((iVar5 + 10 + *(int *)((int)this + 0xa0)))) = (short)uVar6;
            *((int *)GEN_TOP((iVar5 + *(int *)((int)this + 0xa0)))) = iVar4;
          }
        }
        else {
          iVar4 = local_10 - *(uint *)(iVar4 + 4);
          for (piVar3 = *(int * PTR32 *)((int)this + 0x4c); piVar3 != *(int * PTR32 *)((int)this + 0x50);
              piVar3 = piVar3 + 1) {
            iVar5 = iVar4 - ((int *)*piVar3)[1];
            if (iVar5 < 0) {
              iVar4 = iVar4 * 0x90 + *(int *)*piVar3;
              goto LAB_0058def5;
            }
            iVar4 = iVar5;
          }
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_c);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf32 */
unsigned int F_0058dfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x58dfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(this + 0x98) != 0) {
    sVar8 = *((short *)GEN_TOP((*(int *)(this + 0x84) + 0x200)));
    sVar6 = *((short *)GEN_TOP((*(int *)(this + 0x84) + 0x202)));
    if (this[0x112] == (undefined1)0x0) {
      sVar8 = sVar8 - *(short *)(this + 0xb8);
    }
    else {
      sVar6 = sVar6 - *(short *)(this + 0xb8);
    }
    uVar2 = (uint)*(ushort *)(this + 0xee);
    iVar4 = *(int *)(this + 0xb0) * uVar2;
    local_8 = 0;
    iVar5 = (uint)(*(int *)(this + 0xb8) != 0) + (uint)*(ushort *)(this + 0xe8);
    local_10 = 0;
    if (iVar5 != 0) {
      do {
        uVar9 = (uint)*(ushort *)(this + 0xea) * local_10 + (int)sVar8;
        uVar7 = (uint)*(ushort *)(this + 0xec) * local_10 + (int)sVar6;
        local_c = 0;
        if (uVar2 != 0) {
          do {
            iVar3 = iVar4 + local_8;
            local_8 = local_8 + 1;
            if (-1 < iVar3) {
              if (*(int *)(this + 0xac) <= iVar3) {
                return 0;
              }
              piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x98) + iVar3 * 8)));
              F_00589920(*piVar1,uVar9,uVar7);
              *(int *)(*piVar1 + 0x1fc) = iVar3;
              uVar9 = uVar9 + *(ushort *)(this + 0xf0);
              uVar7 = uVar7 + *(ushort *)(this + 0xf2);
            }
            uVar2 = (uint)*(ushort *)(this + 0xee);
            local_c = local_c + 1;
          } while (local_c < (int)uVar2);
        }
        local_10 = local_10 + 1;
      } while (local_10 < iVar5);
    }
  }
  return 0;
}

/* ref: FUN_0058e100 */
uint F_0058e100(unsigned int gen_a0)
{
  GEN_ENTER(0x58e100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int * piVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  
  uVar4 = 0;
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0x70) != 0)) {
    uVar4 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e)));
  }
  uVar8 = (uint)uVar4;
  uVar5 = *(uint *)((int)this + 0x150);
  *(bool *)((int)this + 0x114) = uVar8 < uVar5;
  if (uVar8 < uVar5) {
    uVar5 = uVar5 - uVar8;
  }
  else {
    uVar5 = 0;
  }
  puVar1 = (uint *)((int)this + 0x154);
  *puVar1 = uVar5;
  piVar2 = (int *)((int)this + 0xb8);
  (*(uint *)(gen_frame + 0x4)) = uVar5 & 0xffff;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0xb8);
  puVar6 = &(*(uint *)(gen_frame + 0x8));
  if ((short)uVar5 <= (short)*(ushort *)((int)this + 0xb8)) {
    puVar6 = &(*(uint *)(gen_frame + 0x4));
  }
  if ((short)*puVar6 < 1) {
    puVar6 = &(*(uint *)(gen_frame + 0x0));
  }
  if (*piVar2 != (int)(short)*puVar6) {
    *piVar2 = (int)(short)*puVar6;
    ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    if ((*(char *)((int)this + 0x114) == '\0') && (*(char *)((int)this + 0x116) != '\0')) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x70)));
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) =
           *(uint *)(iVar3 + 0x84) ^ (iVar7 << 0x14 ^ *(uint *)(iVar3 + 0x84)) & 0x100000;
      *(uint *)(iVar3 + 0x88) =
           *(uint *)(iVar3 + 0x88) ^
           ((uint)((char)iVar7 == '\0') << 7 ^ *(uint *)(iVar3 + 0x88)) & 0x80;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x28))))
              (*(int * PTR32 *)((int)this + 0x88),(uint)*(byte *)((int)this + 0x114));
    if ((*(int *)((int)this + 0x88) != 0) &&
       (iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x70))), iVar7 != 0)) {
      puVar6 = (uint *)(iVar7 + 0x84);
      *puVar6 = *puVar6 & 0xfdffffff;
    }
    F_00589f20(*(undefined * PTR32 *)((int)this + 0x88),*puVar1);
    fVar9 = (float10)(int)*puVar1;
    if ((int)*puVar1 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar5 = F_00574c80(*(int *)((int)this + 0x88),
                         (int)(((float10)*piVar2 / fVar9) *
                              (float10)*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0xa8)))),0,1);
  }
  return uVar5;
}

/* ref: FUN_0058e260 */
uint F_0058e260(unsigned int gen_a0)
{
  GEN_ENTER(0x58e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0057c1a0(this,*(undefined4 *)((int)this + 0xcc));
  *(uint *)((int)this + 0x14c) = uVar1;
  F_0057c0b0(this,(int)this + 0x150,(int)this + 0x15c);
  F_0058e100(((undefined *)(uint)(this)));
  F_0057c230(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar1;
}

/* ref: FUN_0058e2b0 */
uint F_0058e2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58e2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 0;
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    uVar1 = F_0058e260(this);
  }
  return uVar1;
}

/* ref: FUN_0058e2d0 */
uint F_0058e2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x58e2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  for (piVar2 = *(int * PTR32 *)((int)this + 300); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((*(byte *)(*piVar2 + 0x2b) & 2) != 0) {
      *(undefined1 *)(*piVar2 + 0x2a) = 0;
    }
  }
  uVar3 = F_0057c1a0(this,*(undefined4 *)((int)this + 0xcc));
  *(uint *)((int)this + 0x14c) = uVar3;
  F_0057c0b0(this,(int)this + 0x150,(int)this + 0x15c);
  F_0058e100(((undefined *)(uint)(this)));
  F_0057c230(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: FUN_0058e350 */
uint F_0058e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x158);
  if (param_1 < uVar2) {
    if (*(int *)((int)this + 0x140) != *((int *)GEN_TOP((*(int *)((int)this + 300) + param_1 * 4)))) {
      if (param_1 < uVar2) {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + param_1 * 4)));
      }
      else {
        uVar1 = 0;
      }
      *(undefined4 *)((int)this + 0x148) = uVar1;
      *(undefined4 *)((int)this + 0x140) = uVar1;
      F_005623b0(this,param_1);
      if ((char)param_2 != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,param_1,1);
      }
    }
    uVar2 = F_0058e260(this);
  }
  return uVar2;
}

/* ref: FUN_0058e3c0 */
unsigned int F_0058e3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58e3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x9c) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x80)));
    if (pvVar1 != (undefined *)0x0) {
      F_00583770(pvVar1,8,5,this,0);
    }
    iVar2 = *(int *)((int)this + 0x9c);
    if (((iVar2 == 0) || (*(short *)(iVar2 + 0x18) != 3)) && (iVar2 != param_1)) {
      if (*(char *)((int)this + 200) == '\0') {
        F_00559eb0(iVar2,(uint)*(ushort *)((int)this + 0xc4));
      }
      else {
        F_00559f40(iVar2,(uint)*(ushort *)((int)this + 0xc4));
      }
    }
  }
  *(int *)((int)this + 0x9c) = param_1;
  if ((*(int *)((int)this + 0xa0) != 0) &&
     (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x80))), pvVar1 != (undefined *)0x0)) {
    F_00583770(pvVar1,8,5,this,0);
  }
  *(int *)((int)this + 0xa0) = param_2;
  if (param_2 != 0) {
    if (*(undefined * PTR32 *)(param_2 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_2 + 0x80),8,5,this,0);
    }
    if ((short)param_3 == 0) {
      if (*(int *)((int)this + 0xa0) == 0) {
        F_0058a060(this,0);
        return 0;
      }
      F_0058a060(this,(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x7e))));
      return 0;
    }
  }
  F_0058a060(this,param_3);
  return 0;
}

/* ref: FUN_0058e4c0 */
uint F_0058e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  if (this_00 == (undefined *)0x0) {
    return (uint)this;
  }
  if (*(char *)((int)this + 0x94) != '\0') {
    bVar1 = F_00589320(this_00,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_00589280(this_00,param_1);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentWindow::vf8 */
uint F_0058e4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x58e4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,0);
  if (*(int *)(this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x88));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xfdffffff;
  }
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x8c));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xfdffffff;
  }
  if (*(int *)(this + 0xa8) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0xa8) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  bVar6 = ((byte)this[0xbc] & 2) == 2;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x90));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  bVar6 = ((byte)this[0xbc] & 4) == 4;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x94));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  bVar6 = ((byte)this[0xbc] & 8) == 8;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x98));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,(uint)(((byte)this[0xbc] & 0x10) == 0x10));
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x90));
  if (uVar2 != 0) {
    if ((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
        ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80),0x17,2,0,iVar3,this,0);
    }
  }
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x94));
  if (uVar2 != 0) {
    if ((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
        ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80),0x17,3,0,iVar3,this,0);
    }
  }
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(this + 0x98));
  if (uVar2 != 0) {
    if (((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
         ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
        (((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')))) ||
       (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80),0x17,4,0,iVar3,this,0);
    }
  }
  uVar7 = *(undefined4 *)(REFG(int, 0x1379860) + 0x30);
  if ((*(uint *)&REFG(undefined, 0x1379c54) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379c54) = *(uint *)&REFG(undefined, 0x1379c54) | 1;
    F_0042b630(&REFG(undefined, 0x1379c00));
    F_00c47de6(((code *)REFP(0x107be50)));
  }
  iVar3 = *(int *)(this + 0xb0);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x88));
    if ((uVar5 != 0) && (*(short *)(uVar5 + 0x18) == 3)) {
      uVar5 = F_0056c6b0(uVar7,iVar3,(uint)*(byte *)(uVar5 + 0x114));
      uVar2 = 0;
      if (uVar5 != 0) {
        F_0042e430(&REFG(undefined, 0x1379c00),uVar5);
        uVar2 = F_0042a990(&REFG(undefined, 0x1379c00));
      }
    }
  }
  iVar3 = *(int *)(this + 0xb4);
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(this + 0x8c));
  if (((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) ||
     (*(undefined4 *)(this + 0xb8) = *(undefined4 *)(uVar5 + 0x38), iVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_0056c6b0(uVar7,iVar3,(uint)*(byte *)(uVar5 + 0x114));
  }
  uVar2 = F_0058a320(this,uVar2,uVar5);
  if (this[0x80] == (undefined1)0x2) {
    uVar2 = *(uint *)(this + 0xa8);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) | 0x4000000;
    }
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0xa8);
  }
  return uVar2;
}

/* ref: FUN_0058e950 */
uint F_0058e950(unsigned int gen_a0)
{
  GEN_ENTER(0x58e950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x88) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))));
  }
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_0058e9a0 */
uint F_0058e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    uVar1 = F_0058a580(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xb8))),param_1);
  }
  return uVar1;
}

/* ref: FUN_0058e9d0 */
uint F_0058e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  if (*(int *)((int)this + 0xa4) != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
    if (-1 < param_1) {
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1379720));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xb8)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_0058a580(uVar1,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0058ea60 */
uint F_0058ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    uVar1 = F_0058a580(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xbc))),param_1);
  }
  return uVar1;
}

/* ref: FUN_0058ea90 */
uint F_0058ea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  if (*(int *)((int)this + 0xa4) != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
    if (-1 < param_1) {
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1379720));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xbc)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_0058a580(uVar1,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0058eb20 */
uint F_0058eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 * '\x02' ^ *(byte *)((int)this + 0x1de)) & 2;
  if ((char)param_1 != '\0') {
    uVar1 = F_0058b2a0(this);
  }
  return uVar1;
}

/* ref: FUN_0058eb50 */
unsigned int F_0058eb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58eb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190(this,0);
    return 0;
  }
  this_01 = (undefined *)F_005684e0(this_00,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190(this,0);
    return 0;
  }
  uVar1 = F_005769d0(this_01,*(undefined4 *)((int)this_00 + 0xf0));
  puVar3 = (undefined4 *)((int)this_01 + 0xa8);
  puVar4 = (undefined4 *)((int)this_01 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_0058b190(this,uVar1);
  return 0;
}

/* ref: FUN_0058ebd0 */
unsigned int F_0058ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x1d8) = param_1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190(this,0);
    return 0;
  }
  this_01 = (undefined *)F_005684e0(this_00,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190(this,0);
    return 0;
  }
  uVar1 = F_005769d0(this_01,*(undefined4 *)((int)this_00 + 0xf0));
  puVar3 = (undefined4 *)((int)this_01 + 0xa8);
  puVar4 = (undefined4 *)((int)this_01 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_0058b190(this,uVar1);
  return 0;
}

/* ref: FUN_0058ec50 */
unsigned int F_0058ec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58ec50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * PTR32 * ppvVar1;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xff;
  ppvVar1 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
  if (0xfe < (*(uint *)&gen_args[1])) {
    ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = *ppvVar1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190((*(undefined * PTR32 *)&gen_args[0]),0);
    return 0;
  }
  this_01 = (undefined *)F_005684e0(this_00,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190((*(undefined * PTR32 *)&gen_args[0]),0);
    return 0;
  }
  uVar2 = F_005769d0(this_01,*(undefined4 *)((int)this_00 + 0xf0));
  puVar4 = (undefined4 *)((int)this_01 + 0xa8);
  puVar5 = (undefined4 *)((int)this_01 + 100);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  F_0058b190((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf4 */
uint F_0058ece0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58ece0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((*(int *)&gen_args[3]) + 4);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[2]))) {
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x1d: ;
    break;
  case 0x12: ;
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = (*(uint *)&gen_args[1]);
LAB_0058efe3: ;
    uVar5 = F_00557a80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar4);
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),uVar5);
    }
    break;
  case 0x13: ;
    iVar1 = uVar4 + 2;
    uVar4 = uVar4 + 2 + (*(uint *)&gen_args[1]);
    if (*(char *)(iVar1 + (*(uint *)&gen_args[1])) != -0x14) {
      F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4,
                   (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
      F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c,(*(undefined * PTR32 *)&gen_args[0]) + 0x34);
      (*(undefined * PTR32 *)&gen_args[0])[0x34] = SUB41((uint)(*(int *)&gen_args[3]) >> 0x10,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x36] = SUB41((*(int *)&gen_args[3]),0);
      (*(undefined * PTR32 *)&gen_args[0])[0x35] = SUB41((uint)(*(int *)&gen_args[3]) >> 8,0);
      (*(uint *)&gen_args[1]) = CONCAT13((*(undefined * PTR32 *)&gen_args[0])[0x52],(undefined3)(*(uint *)&gen_args[1])) & 0x1ffffff;
      F_005d0f60((*(undefined * PTR32 *)&gen_args[0]) + 0x8c,(int)&(*(uint *)&gen_args[1]) + 3);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) | 0x10000;
      uVar4 = F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x74,(*(undefined * PTR32 *)&gen_args[0]) + 0x38);
      (*(undefined * PTR32 *)&gen_args[0])[0x38] = (undefined1)0x0;
      *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x39))) = 0;
      return uVar4;
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) != 0) {
      puVar3 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *puVar3;
      F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c);
      pbVar2 = (byte *)F_005cd400((*(undefined * PTR32 *)&gen_args[0]) + 0x8c);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^ ((uint)*pbVar2 << 0x10 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x10000;
      F_005c46e0((*(undefined * PTR32 *)&gen_args[0]) + 0x8c);
      puVar3 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x74);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar3;
      uVar4 = F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x74);
      return uVar4;
    }
    break;
  case 0x14: ;
    iVar1 = uVar4 + 2;
    uVar4 = uVar4 + 2 + (*(uint *)&gen_args[1]);
    if (*(char *)(iVar1 + (*(uint *)&gen_args[1])) != -0x14) {
      F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4,
                   (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
      F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x74,(*(undefined * PTR32 *)&gen_args[0]) + 0x38);
      (*(undefined * PTR32 *)&gen_args[0])[0x38] = SUB41((*(uint *)&gen_args[1]) >> 0x10,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x39] = SUB41((*(uint *)&gen_args[1]) >> 8,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x3a] = SUB41((*(uint *)&gen_args[1]),0);
      return (*(uint *)&gen_args[1]);
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84))) != 0) {
      puVar3 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x74);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar3;
      uVar4 = F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x74);
      return uVar4;
    }
    break;
  case 0x19: ;
    uVar5 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = 0;
    if (uVar5 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x17 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x800000;
      return uVar5;
    }
    break;
  case 0x1a: ;
    uVar5 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = 0;
    if (uVar5 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x18 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x1000000;
      uVar4 = CONCAT31((int3)(uVar5 >> 8),(*(undefined * PTR32 *)&gen_args[0])[0x53]) & 0xffffff01;
      if ((((byte)(*(undefined * PTR32 *)&gen_args[0])[0x53] & 1) != 0) && (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x53] & 1) == 0)) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) | 0x10000000;
        return uVar4;
      }
    }
    break;
  case 0x1b: ;
    uVar5 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = 0;
    if (uVar5 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x10 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x10000;
      return uVar5;
    }
    break;
  case 0x1c: ;
    uVar5 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = 0;
    if (uVar5 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x13 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x80000;
      return uVar5;
    }
    break;
  case 0x1e: ;
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar4 + 2 + (*(uint *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar4 = F_00558330(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(uint *)&gen_args[1]));
  case 1: ;
    goto LAB_0058efe3;
  default: ;
    goto switchD_0058ed01_default;
  }
switchD_0058ed01_default: ;
  return uVar4;
}

/* ref: FUN_0058f050 */
uint F_0058f050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x58f050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var = 0;
  undefined * pvVar7;
  
  *(undefined4 *)((int)this + 0xb4) = param_4;
  *(undefined4 *)((int)this + 0xb8) = param_5;
  F_00c48350((undefined *)((int)this + 0x2a0),0,0x100);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  F_0056fc60((undefined *)((int)this + 0x140),param_2,param_3,*(undefined4 *)((int)this + 0xb4),
               *(undefined4 *)((int)this + 0xb8));
  if (*(int *)((int)this + 0x1e4) == 0) {
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    return uVar5;
  }
  if ((*(uint *)((int)this + 0x50) & 0x4000000) == 0) {
    uVar5 = *(uint *)((int)this + 0x50) & 0xffff;
    if (uVar5 < 0xffff) {
      uVar5 = 0xffff - uVar5;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = F_005596f0(*(float *)((int)this + 0x2c));
  }
  *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) = uVar5;
  *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x78))) = (*(uint *)((int)this + 0x50) >> 0x1a & 1) << 4;
  pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  iVar2 = *(int *)((int)this + 0x1f0);
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
    iVar6 = 0x120000;
    if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
      iVar6 = 0x120100;
    }
    if ((*(int *)(param_1 + 0x10) != iVar6) || (*(int *)(param_1 + 0x24) != 0)) {
      *(int *)(param_1 + 0x10) = iVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
      F_00577690(param_1 + 0x14,iVar6,0);
    }
    uVar5 = F_005cf050(*(undefined * PTR32 *)(param_1 + 4),0x22,iVar2 * 4,param_1 + 0x14);
    *(uint *)((int)this + 0x3a4) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
  }
  uVar3 = *(undefined4 *)((int)this + 0xc);
  bVar4 = F_0058c380(this,2,param_1,uVar3,5);
  uVar5 = CONCAT31(extraout_var,bVar4);
  if (bVar4 == 0) {
    if ((*(undefined * PTR32 *)((int)this + 0x3a4) != (undefined *)0x0) && (iVar2 != 0)) {
      pvVar7 = F_00c48350(*(undefined * PTR32 *)((int)this + 0x3a4),0,iVar2 << 7);
      return (uint)pvVar7;
    }
  }
  else {
    bVar4 = F_0058c380(this,1,param_1,uVar3,4);
    if (bVar4 == 0) {
      if ((*(undefined * PTR32 *)((int)this + 0x3a4) != (undefined *)0x0) && (iVar2 != 0)) {
        F_00c48350(*(undefined * PTR32 *)((int)this + 0x3a4),0,iVar2 << 7);
      }
      uVar5 = F_005589b0(this,2);
      return uVar5;
    }
    bVar4 = F_0058c380(this,3,param_1,uVar3,7);
    if (bVar4 == 0) {
      F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
      F_005589b0(this,2);
      uVar5 = F_005589b0(this,1);
      return uVar5;
    }
    bVar4 = F_0058c380(this,0,param_1,uVar3,
                         (-(uint)((*(uint *)((int)this + 0x50) & 0x40000) != 0) & 3) + 3);
    if (bVar4 == 0) {
      F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
      F_005589b0(this,2);
      F_005589b0(this,1);
      uVar5 = F_005589b0(this,3);
      return uVar5;
    }
    iVar6 = *(int *)((int)this + 0x1ec);
    if (iVar6 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
      F_00583d70(this,param_1,0x123000,
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) + 8))));
      uVar5 = F_005cf050(*(undefined * PTR32 *)(param_1 + 4),0x22,iVar6 * 4,param_1 + 0x14);
      *(uint *)((int)this + 0x3a0) = uVar5;
      if (uVar5 == 0) {
        F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
        F_005589b0(this,2);
        F_005589b0(this,1);
        F_005589b0(this,3);
        uVar5 = F_005589b0(this,0);
        return uVar5;
      }
    }
    uVar5 = F_0056fc00(this,param_2,param_3);
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf4 */
uint F_0058f340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pAVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  if ((*(int *)&gen_args[2]) != 0x27) {
    uVar2 = F_0058ece0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    return uVar2;
  }
  iVar5 = *(int *)((*(int *)&gen_args[3]) + 4) + 2;
  uVar2 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),iVar5 + (*(int *)&gen_args[1]),
                       (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
  if ((*(int *)&gen_args[3]) == 0xce) {
    if ((*(undefined * PTR32 *)&gen_args[0])[0x16e] != (undefined1)0x0) {
      pAVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x174;
      uVar2 = 0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) != 0) {
        *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 8))) = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)));
        *(int *)(*(int *)pAVar1 + 0xc) =
             (int)((float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x15c))) + (float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x148))));
        uVar2 = F_005cd7d0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x170))),pAVar1);
        *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168))) + 1;
        *(int *)pAVar1 = 0;
        (*(undefined * PTR32 *)&gen_args[0])[0x16e] = (undefined1)0x0;
        return uVar2;
      }
    }
  }
  else if ((*(undefined * PTR32 *)&gen_args[0])[0x16e] == (undefined1)0x0) {
    uVar3 = F_00404270();
    piVar4 = (int *)F_00406bd0(0x30,0,uVar3,0);
    *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) = piVar4;
    *piVar4 = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 4))) = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x15c)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x10))) = (*(int *)&gen_args[1]);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x14))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xbc)));
    iVar5 = iVar5 + uVar2;
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x18))) = *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168)));
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x1a))) = *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x1e))) = (undefined2)(*(int *)&gen_args[3]);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x2c))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
    uVar2 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),iVar5 + (*(int *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x20))) = (*(int *)&gen_args[3]);
    iVar5 = iVar5 + uVar2;
    uVar2 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),iVar5 + (*(int *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x24))) = (*(int *)&gen_args[3]);
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))),uVar2 + iVar5 + (*(int *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    uVar2 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174)));
    *(int *)(uVar2 + 0x28) = (*(int *)&gen_args[3]);
    (*(undefined * PTR32 *)&gen_args[0])[0x16e] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: FUN_0058f530 */
unsigned int F_0058f530(unsigned int gen_a0)
{
  GEN_ENTER(0x58f530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(char *)((int)this + 0x22d28) != '\0') {
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_00572040(*(undefined * PTR32 *)((int)this + 0xbc));
    }
    F_0057f6a0(*(undefined * PTR32 *)((int)this + 0x130));
    this_00 = *(undefined * PTR32 *)((int)this + 0xbc);
    if (this_00 != (undefined *)0x0) {
      F_004d6970(*(undefined * PTR32 *)((int)this_00 + 0x9c));
      uVar1 = F_005725c0(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *(uint *)((int)this_00 + 0x2a0) = uVar1;
      *(undefined * PTR32 *)((int)this_00 + 0x2a4) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_00585950(*(undefined * PTR32 *)((int)this + 0xbc),(uint)*(byte *)((int)this + 0xe8));
    }
  }
  return 0;
}

/* ref: FUN_0058f5b0 */
uint F_0058f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x58f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                    (uint)*(ushort *)((int)this + 0x90) * 0xc)));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0058c5d0((undefined *)(iVar1 + 4));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0058f5e0 */
uint F_0058f5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x58f5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  F_0058d250((undefined *)((int)this + 0xe0));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = puVar1[2];
  if (iVar2 != puVar1[3]) {
    F_00c46e20(iVar2,puVar1[3],0);
    puVar1[3] = iVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x10))))(*(int * PTR32 *)((int)this + 0x14));
  F_00580900(*(undefined * PTR32 *)((int)this + 0x28));
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  F_0058c1d0((undefined *)((int)this + 0x220));
  uVar3 = F_00558dc0(*(undefined * PTR32 *)((int)this + 0x18));
  *(undefined * PTR32 *)((int)this + 0x1ec) = this;
  *(undefined1 *)((int)this + 0x1fa) = 0;
  *(undefined1 *)((int)this + 0x230) = 1;
  return uVar3;
}

/* ref: FUN_0058f6c0 */
uint F_0058f6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58f6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this);
  }
  *(undefined4 *)((int)this + 4) = 0;
  uVar2 = *(undefined4 *)((int)this + 8);
  uVar3 = F_00587110(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),param_1,param_2);
  *(uint *)((int)this + 8) = uVar3;
  F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),uVar2);
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f730 */
uint F_0058f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this);
  }
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  uVar3 = F_00587250(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),param_1,param_2,param_3);
  *(uint *)((int)this + 8) = uVar3;
  F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),uVar2);
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f7a0 */
uint F_0058f7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58f7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this);
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(int *)((int)this + 8) != param_1) {
    F_0058c5d0(this);
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00513f60(param_1,0,0);
    }
    *(uint *)((int)this + 8) = uVar2;
    if (uVar2 != 0) {
      piVar3 = (int *)(uVar2 + 0x8c);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar1 < 8) {
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_0058f810 */
uint F_0058f810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58f810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 4) != 2) {
    F_0058c5d0(this);
  }
  *(undefined4 *)((int)this + 4) = 2;
  *(int * PTR32 *)((int)this + 8) = param_1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return 0;
}

/* ref: FUN_0058f840 */
uint F_0058f840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_c;
  
  *(undefined4 *)((int)this + 0x28) = param_3;
  iVar6 = *(int *)(param_1 + 0x10) + param_1;
  uVar8 = *(uint *)(iVar6 + 8);
  if (uVar8 == 0) {
    return 0xffffffff;
  }
  piVar7 = (int *)(iVar6 + 0x10);
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      if (*piVar7 == param_2) {
        iVar6 = *(int *)((int)this + 8);
        iVar11 = (uint)*(ushort *)((int)piVar7 + 0xe) + (int)piVar7;
        uVar5 = 0;
        if (*(int *)(iVar6 + 4) != 0) {
          local_c = 0;
          iVar13 = iVar11;
          param_2 = iVar11;
          do {
            iVar2 = *((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4)));
            iVar12 = iVar11;
            iVar4 = param_2;
            if (((uVar5 != 0) &&
                ((((iVar3 = *((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4 + -4))), iVar3 != 0 &&
                   (10000 < *(uint *)(iVar3 + 4))) || (iVar2 == 0)) ||
                 (iVar12 = iVar13, iVar4 = iVar13, *(uint *)(iVar2 + 4) < 0x2711)))) &&
               (((iVar12 = iVar11, iVar4 = param_2, iVar3 != 0 && (10000 < *(uint *)(iVar3 + 4))) &&
                ((iVar2 == 0 || (*(uint *)(iVar2 + 4) < 0x2711)))))) {
              iVar12 = iVar11 + (uint)*(ushort *)(iVar11 + 0x18);
              iVar4 = iVar12;
            }
            param_2 = iVar4;
            if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
              uVar8 = F_00587f50(*(undefined * PTR32 *)((int)this + 0x28),(uint)*(ushort *)(iVar12 + 0x56));
              *(uint *)(iVar2 + 0x1c) = uVar8;
              if (uVar8 != 0) {
                *(int *)(uVar8 + 4) = iVar2;
              }
            }
            uVar1 = *(ushort *)(iVar2 + 0x18);
            if (999 < uVar1) {
              uVar8 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
              if (uVar8 != 0) {
                puVar9 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
                uVar10 = 0;
                if (uVar8 != 0) {
                  do {
                    if (*puVar9 == (uint)uVar1) {
                      F_0058f840(((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4))) +
                                                    0x8c))) + 4))),param_1,(uint)uVar1,param_3);
                      break;
                    }
                    puVar9 = (uint *)((int)puVar9 + (uint)(ushort)puVar9[3]);
                    uVar10 = uVar10 + 1;
                    iVar12 = param_2;
                  } while ((uVar10 & 0xffff) < uVar8);
                }
              }
            }
            iVar11 = iVar12;
            if (*(uint *)(iVar2 + 4) < 0x2711) {
              iVar11 = iVar12 + (uint)*(ushort *)(iVar12 + 0x18);
              param_2 = iVar11;
            }
            uVar5 = uVar5 + 1;
            local_c = (uint)uVar5;
            iVar13 = iVar12;
          } while (local_c < *(uint *)(iVar6 + 4));
        }
        return 0;
      }
      uVar10 = uVar10 + 1;
      piVar7 = ((int *)GEN_TOP(((int)piVar7 + (uint)*(ushort *)(piVar7 + 3))));
    } while ((uVar10 & 0xffff) < uVar8);
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f9f0 */
uint F_0058f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58f9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined * pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_3 + 0x18) + param_3;
  if (*(int *)(iVar2 + 8) != 0) {
    pvVar1 = (undefined *)F_00406bd0(0x24,0,param_1,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00587ef0(pvVar1);
    }
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
    if (*(int *)(param_2 + 0x14) != 0) {
      F_005734e0(pvVar1,*(int *)(param_2 + 0x14) + param_2,param_4 & 0xffff);
      param_4 = *(int *)((int)this + 8);
      iVar3 = iVar2 + 0x10;
      param_3 = 0;
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          F_0058c660(this,param_2,param_4,iVar3 + 0x10,*(undefined4 *)((int)this + 0x28));
          param_4 = param_4 + 0x18;
          iVar3 = iVar3 + (uint)*(ushort *)(iVar3 + 0xe);
          param_3 = param_3 + 1;
        } while (param_3 < *(uint *)(iVar2 + 8));
      }
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_0058faa0 */
unsigned int F_0058faa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint local_c;
  uint * local_8;
  
  if ((param_4 != 0) && (*(int *)(param_2 + 8) != 0)) {
    uVar5 = -(uint)((int)((ulonglong)param_4 * 0x10 >> 0x20) != 0) |
            (uint)((ulonglong)param_4 * 0x10);
    puVar1 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,param_1,0);
    if (puVar1 == (uint *)0x0) {
      local_8 = (uint *)0x0;
    }
    else {
      *puVar1 = param_4;
      local_8 = puVar1 + 1;
      uVar5 = param_4;
      while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
        puVar1[2] = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    *(uint * PTR32 *)this = local_8;
    if (local_8 == (uint *)0x0) {
      return 0;
    }
    *(short *)((int)this + 0x10) = (short)param_4;
    param_1 = (uint *)(param_2 + 0x10);
    local_c = 0;
    if (*(int *)(param_2 + 8) != 0) {
      puVar1 = local_8 + 3;
      do {
        if (param_4 != 0) {
          uVar5 = 0;
          uVar6 = 0;
          do {
            if (*(uint *)(param_3 + uVar5 * 4) == *param_1) {
              *local_8 = *param_1;
              *(undefined4 *)((int)this + 0x20) = 2;
              *puVar1 = 0;
              uVar5 = param_1[0xc];
              if (uVar5 == 0) {
                if ((char)param_1[1] != '\0') {
                  F_0058f6c0(puVar1 + -2,param_1 + 1,6);
                }
              }
              else {
                if (puVar1[-1] != 0) {
                  F_0058c5d0(puVar1 + -2);
                }
                uVar6 = *puVar1;
                puVar1[-1] = 0;
                uVar5 = F_00587250(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),uVar5,0,6);
                *puVar1 = uVar5;
                F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),uVar6);
                if (*puVar1 != 0) {
                  puVar2 = (undefined4 *)(*puVar1 + 0x8c);
                  LOCK();
                  *puVar2 = *puVar2;
                  UNLOCK();
                }
              }
              local_8 = local_8 + 4;
              puVar1 = puVar1 + 4;
              break;
            }
            uVar6 = uVar6 + 1;
            uVar5 = uVar6 & 0xffff;
          } while (uVar5 < param_4);
        }
        param_1 = param_1 + 0xd;
        local_c = local_c + 1;
      } while ((local_c & 0xffff) < *(uint *)(param_2 + 8));
    }
  }
  *(undefined4 *)((int)this + 0x20) = 2;
  if ((*(int *)((int)this + 4) != 0) && (uVar4 = 0, *(short *)((int)this + 0x12) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    do {
      piVar7 = (int *)puVar1[1];
      param_4 = 0;
      if (*puVar1 != 0) {
        do {
          piVar3 = *(int * PTR32 *)((int)this + 0x30);
          if ((piVar3 == (int *)0x0) || (*piVar3 != *piVar7)) {
            uVar5 = 0;
            if (*(short *)((int)this + 0x10) != 0) {
              piVar3 = *(int * PTR32 *)this;
              do {
                if (*piVar3 == *piVar7) {
                  piVar3 = *(int * PTR32 *)this + uVar5 * 4;
                  *(int * PTR32 *)((int)this + 0x30) = piVar3;
                  goto LAB_0058fca4;
                }
                uVar5 = uVar5 + 1;
                piVar3 = piVar3 + 4;
              } while (uVar5 < *(ushort *)((int)this + 0x10));
            }
            piVar3 = (int *)0x0;
          }
LAB_0058fca4: ;
          *piVar7 = (int)piVar3;
          param_4 = param_4 + 1;
          piVar7 = piVar7 + 3;
        } while ((param_4 & 0xffff) < *puVar1);
      }
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 3;
    } while (uVar4 < *(ushort *)((int)this + 0x12));
  }
  return 0;
}

/* ref: FUN_0058fce0 */
unsigned int F_0058fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x58fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (param_1 == 0) goto LAB_0058fe64;
  uVar1 = *(ushort *)(param_1 + 0x18);
  if (uVar1 < 1000) {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        if (*(int * PTR32 *)(param_1 + 0xf8) != (int *)0x0) {
          piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 0xf8)));
          piVar6 = (int *)*piVar2;
          while (piVar6 != piVar2) {
            piVar3 = *(int * PTR32 *)(param_1 + 0xf8);
            iVar4 = piVar6[2];
            piVar5 = (int *)*piVar6;
            if (piVar6 != (int *)*piVar3) {
              *(int * PTR32 *)piVar6[1] = piVar5;
              *(int *)(*piVar6 + 4) = piVar6[1];
              F_00429760(piVar6,0xc,400);
              piVar3 = piVar3 + 1;
              *piVar3 = *piVar3 + -1;
            }
            piVar6 = piVar5;
            if (iVar4 != 0) {
              F_00406ad0(iVar4);
            }
          }
          F_005c4820(*(undefined * PTR32 *)(param_1 + 0xf8));
        }
        goto LAB_0058fe64;
      }
      if ((uVar1 != 4) && (uVar1 != 5)) {
        if ((uVar1 == 6) || ((((uVar1 == 7 || (uVar1 == 8)) || (uVar1 == 9)) || (uVar1 != 10000))))
        goto LAB_0058fe64;
        goto LAB_0058fe4b;
      }
    }
    piVar2 = *(int * PTR32 *)(param_1 + 0x8c);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      F_0058c5d0((undefined *)(*(int *)piVar2[2] + 4));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
      if (*piVar2 != 0) {
        iVar4 = *piVar2;
        if (iVar4 != 0) {
          *(undefined * PTR32 * PTR32 *)(iVar4 + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
          F_00406ad0(iVar4);
        }
        **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) = 0;
      }
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
      if (iVar4 != 0) {
        F_00406b30(iVar4);
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) = 0;
      }
      if (*(int *)(param_1 + 0x8c) != 0) {
        F_00406ad0(*(int *)(param_1 + 0x8c));
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
    }
  }
  else {
LAB_0058fe4b: ;
    F_005595d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x10),(uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x8c) + 100))));
  }
LAB_0058fe64: ;
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0)) {
    F_005880a0(*(undefined * PTR32 *)((int)this + 0x28),*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1c))));
  }
  return 0;
}

/* ref: FUN_0058fe90 */
uint F_0058fe90(unsigned int gen_a0)
{
  GEN_ENTER(0x58fe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 in_EAX = 0;
  int iVar3;
  undefined4 * puVar4;
  ushort uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int local_c;
  uint local_8;
  
  bVar1 = *(byte *)((int)this + 0x5c);
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) != 0) {
    *(byte *)((int)this + 0x5c) = bVar1 & 0xfe;
    if ((*(int *)((int)this + 0x1c) != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      F_0050c620(*(int *)((int)this + 0x1c),0,0);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) & 0xfd;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    if (*(int *)((int)this + 8) != 0) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x14) != 0) {
        do {
          iVar8 = *(int *)((int)this + 8);
          if (iVar8 == 0) {
LAB_0058ff16: ;
            iVar8 = 0;
          }
          else if (*(char *)((int)this + 0x18) == '\x01') {
            iVar8 = iVar8 + (uint)uVar5 * 0x10;
          }
          else {
            if (*(char *)((int)this + 0x18) != '\x02') goto LAB_0058ff16;
            iVar8 = iVar8 + (uint)uVar5 * 0x18;
          }
          uVar6 = 0;
          local_8 = 0;
          if (*(int *)(iVar8 + 4) != 0) {
            do {
              F_0058fce0(this,*((undefined4 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))));
              if (*((int *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))) != 0) {
                puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4)));
                if (puVar4 != (undefined4 *)0x0) {
                  ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
                }
                *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))) = 0;
              }
              local_8 = local_8 + 1;
              uVar6 = local_8 & 0xffff;
            } while (uVar6 < *(uint *)(iVar8 + 4));
          }
          if (*(int *)(iVar8 + 8) != 0) {
            F_00406b30(*(int *)(iVar8 + 8));
            *(undefined4 *)(iVar8 + 8) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x14));
      }
      if (*(int *)((int)this + 8) != 0) {
        F_00406810(*(int *)((int)this + 8));
        *(undefined4 *)((int)this + 8) = 0;
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x4c);
      for (piVar7 = *(int * PTR32 *)((int)this + 0x48); piVar7 != piVar2; piVar7 = piVar7 + 1) {
        local_c = *(int *)(*piVar7 + 4);
        if (local_c != 0) {
          iVar8 = 0;
          do {
            F_0058fce0(this,*(int *)*piVar7 + iVar8);
            iVar8 = iVar8 + 0x90;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)*piVar7 != 0) {
          puVar4 = *(undefined4 * PTR32 *)*piVar7;
          if (puVar4 != (undefined4 *)0x0) {
            if (puVar4[-1] == 0) {
              F_00406b30(puVar4 + -1);
            }
            else {
              ((code *)*(gen_code32 *)*puVar4)(puVar4,3);
            }
          }
          *(undefined4 *)*piVar7 = 0;
        }
        if (*piVar7 != 0) {
          F_00406ad0(*piVar7);
          *piVar7 = 0;
        }
      }
      iVar8 = *(int *)((int)this + 0x48);
      if (iVar8 != *(int *)((int)this + 0x4c)) {
        F_00c46e20(iVar8,*(int *)((int)this + 0x4c),0);
        *(int *)((int)this + 0x4c) = iVar8;
      }
    }
    if ((*(int *)this != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x10) != 0) {
        do {
          iVar8 = *(int *)this + 4 + (uint)uVar5 * 0x10;
          iVar3 = *(int *)(iVar8 + 4);
          if (iVar3 == 0) {
            if ((*(int *)(iVar8 + 8) != 0) &&
               (uVar6 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),*(int *)(iVar8 + 8)), uVar6 == 0
               )) goto LAB_005900cb;
          }
          else if (iVar3 == 1) {
            if (*(int *)(iVar8 + 8) != 0) {
              F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c),*(int *)(iVar8 + 8));
              goto LAB_005900cb;
            }
          }
          else if ((iVar3 == 2) && (piVar2 = *(int * PTR32 *)(iVar8 + 8), piVar2 != (int *)0x0)) {
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
LAB_005900cb: ;
            *(undefined4 *)(iVar8 + 8) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x10));
      }
      iVar8 = *(int *)this;
      if (iVar8 != 0) {
        iVar3 = *(int *)(iVar8 + -4) + -1;
        if (-1 < iVar3) {
          puVar4 = ((undefined4 *)GEN_TOP((*(int *)(iVar8 + -4) * 0x10 + iVar8 + 4)));
          do {
            puVar4 = puVar4 + -4;
            iVar3 = iVar3 + -1;
            *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
          } while (-1 < iVar3);
        }
        F_00406b30(iVar8 + -4);
        *(undefined4 *)this = 0;
      }
    }
    if ((*(int *)((int)this + 4) != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x12) != 0) {
        do {
          iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 8 + (uint)uVar5 * 0xc)));
          if (iVar8 != 0) {
            F_00406b30(iVar8);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + (uint)uVar5 * 0xc))) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x12));
      }
      if (*(int *)((int)this + 4) != 0) {
        F_00406810(*(int *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    if ((*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) && (*(char *)((int)this + 0x18) == '\x02')) {
      F_0056b9c0(*(undefined * PTR32 *)((int)this + 0x28));
      this_00 = *(undefined * PTR32 *)((int)this + 0x28);
      if (this_00 != (undefined *)0x0) {
        F_005cdd00(this_00);
        F_00406ad0(this_00);
        *(undefined4 *)((int)this + 0x28) = 0;
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      F_00406ad0(*(int *)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    if (*(int *)((int)this + 0x24) != 0) {
      F_00406b30(*(int *)((int)this + 0x24));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    uVar6 = 0;
    *(undefined2 *)((int)this + 0x2e) = 0;
    iVar8 = *(int *)((int)this + 0x38);
    if (iVar8 != *(int *)((int)this + 0x3c)) {
      uVar6 = F_00c46e20(iVar8,*(int *)((int)this + 0x3c),0);
      *(int *)((int)this + 0x3c) = iVar8;
    }
    if (*(char *)((int)this + 0x18) == '\x02') {
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x34);
      if (puVar4 == (undefined4 *)0x0) {
        return uVar6;
      }
      uVar6 = ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return uVar6;
}

/* ref: FUN_00590210 */
uint F_00590210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x590210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar6 = (int)((int)(uintptr_t)param_1) * 10000 + 1 + param_2;
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x4c)) {
    while (*(int *)(*(int *)*piVar3 + 4) != iVar6) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int * PTR32 *)((int)this + 0x4c)) {
        return (uint)piVar3;
      }
    }
    piVar7 = (int *)*piVar3;
    if (piVar7 != (int *)0x0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x38);
      iVar4 = 0;
      if (piVar3 != *(int * PTR32 *)((int)this + 0x3c)) {
LAB_00590280: ;
        iVar5 = *piVar3;
        if (*(int *)(iVar5 + 4) != *(int *)(*piVar7 + 4)) goto code_r0x00590287;
        iVar1 = *(int *)(iVar5 + 0xc);
        param_2 = 0;
        if (piVar7[1] != 0) {
          do {
            iVar5 = *piVar3;
            iVar4 = *(int *)(iVar5 + 0x10);
            F_00c46e20(piVar3,piVar3 + 1,(*(int *)((int)this + 0x3c) - (int)(piVar3 + 1) >> 2) * 4);
            *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + -4;
            param_2 = param_2 + 1;
          } while (param_2 < (uint)piVar7[1]);
        }
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x10) = iVar4;
        }
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0xc) = iVar1;
        }
        for (iVar4 = *(int *)(iVar1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
          if (*(int *)(iVar4 + 0x14) == iVar5) {
            *(int *)(iVar4 + 0x14) = iVar1;
          }
          *(short *)(iVar4 + 0x1a) = *(short *)(iVar4 + 0x1a) - (short)piVar7[1];
          if (*(int *)(iVar4 + 4) == 1) break;
        }
      }
LAB_00590317: ;
      piVar7 = *(int * PTR32 *)((int)this + 0x48);
      piVar3 = *(int * PTR32 *)((int)this + 0x4c);
      if (piVar7 != piVar3) {
        while (*(int *)(*(int *)*piVar7 + 4) != iVar6) {
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar3) {
            return (uint)piVar3;
          }
        }
        piVar3 = ((int *)GEN_TOP(((int *)*piVar7)[1]));
        if (piVar3 != (int *)0x0) {
          iVar6 = 0;
          param_1 = piVar3;
          do {
            F_0058fce0(this,*(int *)*piVar7 + iVar6);
            iVar6 = iVar6 + 0x90;
            param_1 = (int *)((int)param_1 + -1);
          } while (param_1 != (int *)0x0);
        }
        if (*(int *)*piVar7 != 0) {
          puVar2 = *(undefined4 * PTR32 *)*piVar7;
          if (puVar2 != (undefined4 *)0x0) {
            if (puVar2[-1] == 0) {
              F_00406b30(puVar2 + -1);
            }
            else {
              ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
            }
          }
          *(undefined4 *)*piVar7 = 0;
        }
        if (*piVar7 != 0) {
          F_00406ad0(*piVar7);
          *piVar7 = 0;
        }
        F_00c46e20(piVar7,piVar7 + 1,(*(int *)((int)this + 0x4c) - (int)(piVar7 + 1) >> 2) * 4);
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -4;
        *(short *)((int)this + 0x16) = *(short *)((int)this + 0x16) - (short)piVar3;
        *(short *)((int)this + 0x2e) = *(short *)((int)this + 0x2e) - (short)piVar3;
      }
    }
  }
  return (uint)piVar3;
code_r0x00590287: ;
  piVar3 = piVar3 + 1;
  if (piVar3 == *(int * PTR32 *)((int)this + 0x3c)) goto LAB_00590317;
  goto LAB_00590280;
}

/* ref: FUN_005903f0 */
uint F_005903f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5903f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10a1944));
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = uVar1;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0xffff0000;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x100) = 100;
  *(undefined4 *)((int)this + 0x104) = 100;
  *(undefined2 *)((int)this + 0x126) = 0;
  *(undefined2 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 0x12a) = 0;
  *(undefined2 *)((int)this + 300) = 0;
  *(undefined2 *)((int)this + 0x12e) = 0;
  *(undefined2 *)((int)this + 0x130) = 0;
  *(undefined2 *)((int)this + 0x132) = 0;
  *(undefined2 *)((int)this + 0x134) = 0;
  *(undefined2 *)((int)this + 0x136) = 0xffff;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0x97ff;
  *(undefined2 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0x97ff;
  *(undefined2 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0x97ff;
  *(undefined2 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0x97ff;
  *(undefined2 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0x97ff;
  *(undefined2 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x108) | 0x20000000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_00590600 */
uint F_00590600(unsigned int gen_a0)
{
  GEN_ENTER(0x590600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10a1944));
  iVar1 = *(int *)((int)this + 0xe4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xec) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  F_0058d4b0((undefined *)((int)this + 0xb0));
  uVar2 = F_0057f460((undefined *)((int)this + 0x24));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00590670 */
byte F_00590670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x590670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0x10) == 0)) {
    *(byte *)((*(int *)&gen_args[1]) + 0xf8) = *(byte *)((*(int *)&gen_args[1]) + 0xf8) | 0x10;
    F_005cd980(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(ushort *)((*(int *)&gen_args[1]) + 0xf6) & 0xf) * 3 + 6) * 4))),&(*(int *)&gen_args[1]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    if (((*(uint *)(iVar1 + 0x120) >> 2 & 1) != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) != 0)) {
      F_0058cb40((*(undefined * PTR32 *)&gen_args[0]),iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))),0);
    }
    iVar2 = 0;
    pcVar3 = (char *)(iVar1 + 0x144);
    do {
      if (*pcVar3 != -1) {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) != 0) {
          F_0058cb40((*(undefined * PTR32 *)&gen_args[0]),iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))),1);
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xc;
    } while (iVar2 < 5);
    return 1;
  }
  return 0;
}

/* ref: FUN_00590750 */
unsigned int F_00590750(unsigned int gen_a0)
{
  GEN_ENTER(0x590750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  iVar1 = *(int *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  F_0058c5d0((undefined *)(iVar1 + 4));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4))));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  F_0058d050(*(undefined * PTR32 *)((int)this + 4));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    iVar1 = puVar3[2];
    piVar4 = *(int * PTR32 *)(iVar1 + 0x18);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    puVar5 = (undefined4 *)puVar3[2];
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      puVar3[2] = 0;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  piVar6 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      piVar4 = (int *)*piVar6;
      F_00429760(piVar6,0x10,400);
      piVar6 = piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x10));
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1c);
  piVar6 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c)) {
    do {
      piVar4 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00590870 */
byte F_00590870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x590870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0xc) == 0) && (param_1 != 0)) {
    *(undefined4 *)((int)this + 4) = 1;
    *(int *)((int)this + 0xc) = param_1;
    uVar3 = 6;
    uVar2 = 0;
    uVar1 = F_004353d0(*(uint *)(param_1 + 0x10) >> 0xe & 0xff);
    F_0058f730((undefined *)((int)this + 0x18),uVar1,uVar2,uVar3);
    uVar3 = 6;
    uVar2 = 0;
    uVar1 = F_004353e0((uint)*(byte *)(param_1 + 0x10),
                         (uint)((byte)(*(uint *)(param_1 + 0x10) >> 0x16) & 0xf));
    F_0058f730((undefined *)((int)this + 0x24),uVar1,uVar2,uVar3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00590930 */
uint F_00590930(unsigned int gen_a0)
{
  GEN_ENTER(0x590930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  F_00588690((undefined *)((int)this + 4));
  F_00588690((undefined *)((int)this + 0x10));
  F_005c87d0((undefined *)((int)this + 0x10));
  uVar1 = F_005c87d0((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00590960 */
uint F_00590960(unsigned int gen_a0)
{
  GEN_ENTER(0x590960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1924));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 8) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x50) = 1;
  *(undefined1 *)((int)this + 0x78) = 1;
  *(undefined1 *)((int)this + 0xa0) = 1;
  *(undefined1 *)((int)this + 200) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 300000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x68) = 300000;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x90) = 100000;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0xb8) = 100000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)this;
}

/* ref: FUN_00590aa0 */
uint F_00590aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x590aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_0058d250(this);
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0x34);
  do {
    if ((undefined *)*puVar3 != (undefined *)0x0) {
      uVar1 = F_00583770((undefined *)*puVar3,0x3a,iVar2,this,0);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 10;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: FUN_00590ad0 */
uint F_00590ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x590ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[4]);
  this_00 = (*(undefined * PTR32 *)&gen_args[3]);
  if ((((*(undefined * PTR32 *)&gen_args[3]) != (undefined *)0x0) && ((*(undefined4 * PTR32 *)&gen_args[4]) != (undefined4 *)0x0)) && ((*(int *)&gen_args[2]) != 0)) {
    F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 * PTR32 *)&gen_args[4]),&(*(undefined * PTR32 *)&gen_args[3]));
    if ((*(undefined4 * PTR32 *)&gen_args[4]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(0x14,0,uVar3,0);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      puVar4[3] = (*(int *)&gen_args[2]);
      *(undefined1 *)(puVar4 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
      F_005d04e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),((undefined1 *)(gen_frame + 0xc)),&(*(undefined * PTR32 *)(gen_frame + 0x14)));
      F_00568380(this_00,6,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(this_00,7,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(this_00,3,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      in_EAX = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 0x1c)));
      pvVar1 = *(undefined * PTR32 *)(in_EAX + 8);
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[4])[4]));
      *(undefined1 *)(puVar4 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(in_EAX + 0x1c) + 8)));
    }
    if ((pvVar1 == this_00) && (in_EAX = F_0055a350(this_00), (char)in_EAX != '\0')) {
      in_EAX = F_0058d370((*(undefined * PTR32 *)&gen_args[0]),this_00);
    }
  }
  return in_EAX;
}

/* ref: FUN_00590be0 */
unsigned int F_00590be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x590be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[3]) != 0) {
    F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[3]));
    if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == iVar2)) {
      puVar1 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      *(undefined1 *)(puVar1 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[4]);
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[4])[1];
      puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[4])[2];
      F_0058d370((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    }
  }
  return 0;
}

/* ref: FUN_00590c40 */
uint F_00590c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x590c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)((int)piVar4 + 0xb4);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(byte *)(piVar4[2] + 0x13a) != param_1) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return (uint)piVar4;
        }
      }
      piVar4 = (int *)piVar4[2];
      if (((piVar4 != (int *)0x0) && (iVar2 = *(int *)((int)this + 0x18), iVar2 != 0)) &&
         (iVar3 = iVar2, *(int *)((int)piVar4 + 0x90) != 0)) {
        while (iVar3 != *(int *)((int)piVar4 + 0x90)) {
          piVar1 = (int *)(iVar3 + 8);
          iVar3 = *piVar1;
          if (*piVar1 == 0) {
            return 0;
          }
        }
        piVar4 = (int *)F_0058d370(this,iVar2);
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00590cc0 */
uint F_00590cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x590cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0fe0));
  F_00588e00(this,0);
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar3 = F_005c9330((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return uVar3;
}

/* ref: FUN_00590d40 */
uint F_00590d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x590d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  F_005d1020((undefined *)((int)this + 0x14),((undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x14);
  iVar3 = (*(int *)((int)this + 0x18) - iVar1) / 0x14;
  if (iVar3 == 1) {
    *(undefined4 *)(iVar1 + 4) = 0;
    return *(int *)((int)this + 0x18) - 0x14;
  }
  iVar2 = (iVar3 * 5 + -10) * 4;
  *(int *)(iVar2 + iVar1) = iVar1 + -0x14 + iVar3 * 0x14;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + -0x10 + iVar3 * 0x14))) = iVar2 + *(int *)((int)this + 0x14);
  return *(int *)((int)this + 0x18) - 0x14;
}

/* ref: Component::GUI2::AtkComponentBase::vf4 */
uint F_00590dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x590dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIcon::vf4 */
uint F_00590e00(unsigned int gen_a0)
{
  GEN_ENTER(0x590e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)(this + 0x98) + 4))));
  }
  iVar1 = *(int *)(this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  F_005618f0(this);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentButton::vf4 */
uint F_00590e70(unsigned int gen_a0)
{
  GEN_ENTER(0x590e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf4 */
uint F_00590ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x590ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: FUN_00590ed0 */
uint F_00590ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x590ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1204));
  iVar1 = REFG(int, 0x1379860);
  F_00588630(REFG(int, 0x1379860) + 0xc4,this);
  F_00588630(iVar1 + 0xd0,this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0));
  F_00580e00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00590f40 */
uint F_00590f40(unsigned int gen_a0)
{
  GEN_ENTER(0x590f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  short * psVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  uint local_18;
  int local_c;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x110) == '\0') {
LAB_0059116a: ;
    uVar6 = 0;
    if (*(int *)((int)this + 0xa0) != 0) {
      uVar6 = F_00406810(*(int *)((int)this + 0xa0));
      *(undefined4 *)((int)this + 0xa0) = 0;
    }
    return uVar6;
  }
  psVar4 = ((short *)GEN_TOP((*(int *)((int)this + 0xa0) + 10)));
LAB_00590f70: ;
  if (psVar4[-1] != 0) {
    iVar7 = *psVar4 * 10000 + 0x3e9;
    for (piVar5 = *(int * PTR32 *)((int)this + 0x4c); piVar5 != *(int * PTR32 *)((int)this + 0x50);
        piVar5 = piVar5 + 1) {
      if (*(int *)(*(int *)*piVar5 + 4) == iVar7) {
        piVar5 = (int *)*piVar5;
        if (piVar5 != (int *)0x0) {
          piVar9 = *(int * PTR32 *)((int)this + 0x3c);
          local_c = 0;
          if (piVar9 == *(int * PTR32 *)((int)this + 0x40)) goto LAB_00591086;
          goto LAB_00590fe0;
        }
        break;
      }
    }
  }
  goto LAB_0059114b;
LAB_00590fe0: ;
  iVar8 = *piVar9;
  if (*(int *)(iVar8 + 4) != *(int *)(*piVar5 + 4)) goto code_r0x00590fe7;
  iVar1 = *(int *)(iVar8 + 0xc);
  local_18 = 0;
  if (piVar5[1] != 0) {
    do {
      iVar8 = *piVar9;
      local_c = *(int *)(iVar8 + 0x10);
      F_00c46e20(piVar9,piVar9 + 1,(*(int *)((int)this + 0x40) - (int)(piVar9 + 1) >> 2) * 4);
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -4;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)piVar5[1]);
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = local_c;
  }
  if (local_c != 0) {
    *(int *)(local_c + 0xc) = iVar1;
  }
  for (iVar2 = *(int *)(iVar1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (*(int *)(iVar2 + 0x14) == iVar8) {
      *(int *)(iVar2 + 0x14) = iVar1;
    }
    *(short *)(iVar2 + 0x1a) = *(short *)(iVar2 + 0x1a) - (short)piVar5[1];
    if (*(int *)(iVar2 + 4) == 1) break;
  }
LAB_00591086: ;
  piVar5 = *(int * PTR32 *)((int)this + 0x4c);
  while( true ) {
    if (piVar5 == *(int * PTR32 *)((int)this + 0x50)) goto LAB_0059114b;
    if (*(int *)(*(int *)*piVar5 + 4) == iVar7) break;
    piVar5 = piVar5 + 1;
  }
  iVar7 = *(int *)(*piVar5 + 4);
  if (iVar7 != 0) {
    iVar8 = 0;
    local_18 = iVar7;
    do {
      F_0058fce0((undefined *)((int)this + 4),*(int *)*piVar5 + iVar8);
      iVar8 = iVar8 + 0x90;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (*(int *)*piVar5 != 0) {
    puVar3 = *(undefined4 * PTR32 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[-1] == 0) {
        F_00406b30(puVar3 + -1);
      }
      else {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,3);
      }
    }
    *(undefined4 *)*piVar5 = 0;
  }
  if (*piVar5 != 0) {
    F_00406ad0(*piVar5);
    *piVar5 = 0;
  }
  F_00c46e20(piVar5,piVar5 + 1,(*(int *)((int)this + 0x50) - (int)(piVar5 + 1) >> 2) * 4);
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + -4;
  *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) - (short)iVar7;
  *(short *)((int)this + 0x32) = *(short *)((int)this + 0x32) - (short)iVar7;
LAB_0059114b: ;
  local_5 = local_5 + 1;
  psVar4 = psVar4 + 6;
  if (*(byte *)((int)this + 0x110) <= local_5) goto LAB_0059116a;
  goto LAB_00590f70;
code_r0x00590fe7: ;
  piVar9 = piVar9 + 1;
  if (piVar9 == *(int * PTR32 *)((int)this + 0x40)) goto LAB_00591086;
  goto LAB_00590fe0;
}

/* ref: FUN_00591190 */
uint F_00591190(unsigned int gen_a0)
{
  GEN_ENTER(0x591190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  *(undefined4 *)((int)this + 0x144) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x14a) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined2 *)((int)this + 0x148) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a1a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a1a44));
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(byte *)((int)this + 0x220) = *(byte *)((int)this + 0x220) & 0xf0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined2 *)((int)this + 0x208) = 0;
  *(undefined2 *)((int)this + 0x20c) = 0;
  *(undefined2 *)((int)this + 0x8d) = 0x101;
  return (uint)this;
}

/* ref: FUN_00591270 */
uint F_00591270(unsigned int gen_a0)
{
  GEN_ENTER(0x591270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a1a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a1a44));
  iVar1 = *(int *)((int)this + 0x1ec);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 500) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (*(int *)((int)this + 0x13c) != 0) {
    F_00406ad0(*(int *)((int)this + 0x13c));
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0));
  F_00580e00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00591330 */
uint F_00591330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1f0);
  for (iVar3 = *(int *)((int)this + 0x1ec); iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    in_EAX = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),*(undefined4 *)(iVar3 + 4));
  }
  uVar2 = *(uint *)((int)this + 0x1f0);
  if (*(uint *)((int)this + 0x1ec) != uVar2) {
    *(uint *)((int)this + 0x1f0) = *(uint *)((int)this + 0x1ec);
    in_EAX = uVar2;
  }
  if (((char)param_1 != '\0') && ((*(byte *)((int)this + 0x220) & 4) == 0)) {
    in_EAX = 0;
    if (*(int *)((int)this + 0x1e0) != 0) {
      uVar2 = F_0055da10(*(int *)((int)this + 0x1e0));
      in_EAX = 0;
      if (uVar2 != 0) {
        in_EAX = F_0058c5d0((undefined *)(uVar2 + 4));
      }
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf25 */
uint F_005913e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5913e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0058e100(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar1;
}

/* ref: FUN_00591410 */
uint F_00591410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x130);
  for (puVar4 = *(undefined4 * PTR32 *)((int)this + 300); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    piVar2 = (int *)*puVar4;
    if (piVar2 != (int *)0x0) {
      iVar3 = piVar2[4];
      if (iVar3 != 0) {
        F_00429760(iVar3,(piVar2[6] - iVar3 >> 2) * 4,400);
      }
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        F_00429760(iVar3,(piVar2[2] - iVar3 >> 2) * 4,400);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      F_00406ad0(piVar2);
    }
  }
  iVar3 = *(int *)((int)this + 300);
  if (iVar3 != *(int *)((int)this + 0x130)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0x130),0);
    *(int *)((int)this + 0x130) = iVar3;
  }
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: FUN_00591550 */
uint F_00591550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    uVar1 = F_0058e260(this);
  }
  return uVar1;
}

/* ref: FUN_00591570 */
uint F_00591570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 300);
  iVar2 = 0;
  do {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x130)) {
LAB_005915a5: ;
      if ((char)param_2 == '\0') {
        piVar1 = (int *)F_0058e260(this);
      }
      return (uint)piVar1;
    }
    if (iVar2 == param_1) {
      piVar1 = (int *)*piVar1;
      *(undefined1 *)((int)piVar1 + 0x2a) = 0;
      goto LAB_005915a5;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf4 */
uint F_005915c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5915c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf4 */
uint F_005915f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5915f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIconText::vf4 */
uint F_00591620(unsigned int gen_a0)
{
  GEN_ENTER(0x591620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x88) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)(this + 0x88) + 4))));
  }
  iVar1 = *(int *)(this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4);
  return uVar2;
}

/* ref: FUN_00591690 */
uint F_00591690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x591690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00590ad0((undefined *)(REFG(int, 0x1379860) + 0xe0),param_1,param_2,
                       *(undefined4 *)((int)this + 0x68),param_3);
  return uVar1;
}

/* ref: FUN_005916c0 */
uint F_005916c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5916c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1379860);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x14))))((int)this + 0x84);
  uVar2 = F_00590ad0((undefined *)(iVar1 + 0xe0),param_1,param_2,uVar2,param_3);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf4 */
uint F_00591700(unsigned int gen_a0)
{
  GEN_ENTER(0x591700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf4 */
uint F_00591730(unsigned int gen_a0)
{
  GEN_ENTER(0x591730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: FUN_00591760 */
uint F_00591760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)((int)this + param_1 * 4 + 0x2a0);
  if (uVar2 == 0) {
    return 0;
  }
  if (1 < uVar2) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      iVar1 = *(int *)((int)this + 0x98);
      break;
    case 1: ;
      iVar1 = *(int *)((int)this + 0x9c);
      break;
    case 2: ;
      iVar1 = *(int *)((int)this + 0xa0);
      break;
    case 3: ;
      iVar1 = *(int *)((int)this + 0xa4);
      break;
    default: ;
      goto switchD_00591783_default;
    }
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4);
      if (10000 < uVar2) {
        uVar2 = uVar2 / 10000;
      }
      F_00590210((undefined *)((int)this + 4),uVar2,0);
    }
  }
switchD_00591783_default: ;
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x2b0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00406b30(iVar1 + -4);
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + param_1 * 4 + 0x2b0) = 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2a0) = 0;
  return uVar2;
}

/* ref: FUN_00591820 */
byte F_00591820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0xac);
  if (iVar1 != 0) {
    uVar2 = F_0058f6c0((undefined *)(iVar1 + 4),param_2,6);
    if (uVar2 == 0) {
      iVar1 = *(int *)((int)this + 0x88);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
      }
      *(undefined1 *)((int)this + 0xb8) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00591880 */
unsigned int F_00591880(unsigned int gen_a0)
{
  GEN_ENTER(0x591880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x22d2b) != '\0') {
    F_0058f5e0(*(undefined * PTR32 *)((int)this + 0xb8));
    ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
    F_00558f10(this);
    *(undefined1 *)((int)this + 0x22cf0) = 0;
    *(undefined2 *)((int)this + 0x22d2b) = 0;
  }
  return 0;
}

/* ref: FUN_005918c0 */
byte F_005918c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5918c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x22be8))) {
  case 2: ;
    F_00559010(this);
    *(undefined1 *)((int)this + 0x22be8) = 0;
    return 0;
  case 3: ;
    if (((*(char *)((int)this + 0x22d28) == '\0') || (REFG(void * PTR32, 0x137104c) == (undefined *)0x0)) ||
       (bVar3 = F_00976910(REFG(void * PTR32, 0x137104c)), bVar3 == 0)) {
      if (*(char *)((int)this + 0x22d29) != '\0') {
        F_00c49908((int)this + 0x22d00,0x10,(int)this + 0x22cf0);
        *(undefined1 *)((int)this + 0x22be8) = 4;
        *(undefined1 *)((int)this + 0x22d29) = 0;
        F_00591880(this);
        return 1;
      }
      *(undefined1 *)((int)this + 0x22be8) = 0;
      F_00591880(this);
    }
    return 1;
  case 4: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xdc))(this,(int)this + 0x22d00);
    ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,uVar4,1);
    *(undefined1 *)((int)this + 0x22be8) = 5;
    break;
  case 5: ;
    uVar4 = F_0056fad0((undefined *)((int)this + 0xec));
    if (uVar4 == 2) {
      pcVar1 = (char *)((int)this + 0x22d00);
      pcVar5 = pcVar1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (pcVar5 == (char *)((int)this + 0x22d01)) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,pcVar1,0,0);
      *pcVar1 = '\0';
      return 0;
    }
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Component::GUI2::AtkModule::vf17 */
uint F_005919f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5919f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = this + 0x22214;
  uVar1 = *(int *)(this + 0x22218) - *(int *)(this + 0x22214) >> 2;
  if (uVar1 <= param_1) {
    F_005d2940(this_00,param_1 + 1);
    *(uint *)(*(int *)this_00 + param_1 * 4) = param_2;
    return param_2;
  }
  *(uint *)(*(int *)this_00 + param_1 * 4) = param_2;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf20 */
byte F_00591a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x591a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),(*(int *)&gen_args[5]),0);
    if ((char)uVar3 != '\0') {
      if ((*(int *)&gen_args[2]) != 0) {
        bVar1 = *(byte *)((int)piVar2 + 0x13a);
        (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)bVar1;
        F_005cdc90((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,&(*(int *)&gen_args[5]),&(*(int * PTR32 *)&gen_args[1]));
        if ((*(int *)&gen_args[5]) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) {
          *(int *)((*(int *)&gen_args[5]) + 0x10) = (*(int *)&gen_args[2]);
          *(undefined4 *)((*(int *)&gen_args[5]) + 0x14) = (*(undefined4 *)&gen_args[3]);
          return 1;
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[2]);
        (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[3]);
        F_005d2f70((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x8)));
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf22 */
byte F_00591af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x591af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0057f860(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))),(*(int *)&gen_args[1]));
  if (uVar2 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))) + 0x28))))
                      (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))),uVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    if (((char)uVar3 != '\0') || ((char)(*(uint *)&gen_args[6]) != '\0')) {
      if ((*(int *)&gen_args[4]) != 0) {
        bVar1 = *(byte *)(uVar2 + 0x13b);
        if (bVar1 == 0) {
          bVar1 = *(byte *)(uVar2 + 0x13a);
        }
        (*(uint *)&gen_args[6]) = (uint)bVar1;
        F_005cdc90((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,&(*(int *)&gen_args[1]),&(*(uint *)&gen_args[6]));
        if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) {
          *(int *)((*(int *)&gen_args[1]) + 0x10) = (*(int *)&gen_args[4]);
          *(undefined4 *)((*(int *)&gen_args[1]) + 0x14) = (*(undefined4 *)&gen_args[5]);
          return 1;
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[4]);
        (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[5]);
        F_005d2f70((*(undefined * PTR32 *)&gen_args[0]) + 0x22228,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x8)));
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00591bc0 */
uint F_00591bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0058f6c0((undefined *)(iVar1 + 4),param_1,6);
  }
  return uVar2;
}

/* ref: FUN_00591c00 */
uint F_00591c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0058f730((undefined *)(iVar1 + 4),param_1,param_2,6);
  }
  return uVar2;
}

/* ref: FUN_00591c40 */
uint F_00591c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                    (uint)*(ushort *)((int)this + 0x90) * 0xc)));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0058f7a0((undefined *)(iVar1 + 4),param_1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00591c80 */
uint F_00591c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x591c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 2) {
      F_0058c5d0((undefined *)(iVar1 + 4));
    }
    *(undefined4 *)(iVar1 + 8) = 2;
    *(int * PTR32 *)(iVar1 + 0xc) = param_1;
    if (param_1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    }
  }
  return 0;
}

/* ref: FUN_00591ce0 */
unsigned int F_00591ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x591ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * local_8;
  
  if (*(int *)((int)this + 0xa8) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x23c))),0x49,0,(int)this + 0x3c,0);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  F_0058d250((undefined *)((int)this + 0xe0));
  local_8 = (undefined4 *)((int)this + 0x114);
  iVar1 = 0;
  do {
    if ((undefined *)*local_8 != (undefined *)0x0) {
      F_00583770((undefined *)*local_8,0x3a,iVar1,(undefined *)((int)this + 0xe0),0);
    }
    local_8 = local_8 + 10;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  F_0058c1d0((undefined *)((int)this + 0x220));
  return 0;
}

/* ref: FUN_00591da0 */
uint F_00591da0(unsigned int gen_a0)
{
  GEN_ENTER(0x591da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint local_8;
  
  uVar2 = *(uint *)((int)this + 0x3c);
  iVar1 = *(int *)((int)this + 0x38);
  if ((int)(uVar2 - iVar1) >> 2 != 0) {
    local_8 = (uint)this & 0xffffff00;
    uVar2 = F_005d1cc0(iVar1,uVar2,(int)(uVar2 - iVar1) >> 2,local_8);
  }
  return uVar2;
}

/* ref: FUN_00591de0 */
byte F_00591de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x591de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  byte bVar5;
  undefined4 * puVar6;
  byte local_5;
  
  bVar5 = *(byte *)(param_1 + 0xfb);
  iVar2 = param_1;
  while( true ) {
    if ((bVar5 & 1) != 0) {
      local_5 = 0;
      bVar5 = F_00587d10(this,iVar2);
      if (bVar5 != 0) {
        *(uint *)(iVar2 + 0xf4) =
             *(uint *)(iVar2 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar2 + 0xf4)) & 0xf0000;
        F_00590670(this,iVar2);
      }
      puVar6 = *(undefined4 * PTR32 *)((int)this + 0xb4);
      for (puVar3 = (undefined4 *)*puVar6; puVar3 != puVar6; puVar3 = (undefined4 *)*puVar3) {
        iVar4 = puVar3[2];
        if (((iVar4 != iVar2) && (*(char *)(iVar4 + 0x13c) == *(char *)(iVar2 + 0x13a))) &&
           (((char)param_3 != '\0' || ((~(*(byte *)(iVar4 + 0xfb) >> 1) & 1) != 0)))) {
          bVar5 = F_00587d10(this,iVar4);
          if (bVar5 != 0) {
            *(uint *)(iVar4 + 0xf4) =
                 *(uint *)(iVar4 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar4 + 0xf4)) & 0xf0000;
            F_00590670(this,iVar4);
          }
          local_5 = 1;
        }
      }
      return local_5;
    }
    pcVar1 = (char *)(iVar2 + 0x13c);
    if ((*pcVar1 == '\0') ||
       (((char)param_3 == '\0' && ((~(*(byte *)(iVar2 + 0xfb) >> 1) & 1) == 0)))) break;
    puVar6 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
    while( true ) {
      if (puVar6 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
        return 0;
      }
      iVar2 = puVar6[2];
      if ((*(char *)(iVar2 + 0x13a) == *pcVar1) && ((*(byte *)(iVar2 + 0xfb) & 1) != 0)) break;
      puVar6 = (undefined4 *)*puVar6;
    }
    bVar5 = *(byte *)(iVar2 + 0xfb);
  }
  return 0;
}

/* ref: FUN_00591f20 */
byte F_00591f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        iVar2 = puVar1[2];
        if (iVar2 == 0) {
          return 0;
        }
        if ((*(ushort *)(iVar2 + 0xf6) & 0xf) != param_2) {
          bVar3 = F_00591de0(this,iVar2,param_2,1);
          if (bVar3 == 0) {
            F_00587d10(this,iVar2);
            *(uint *)(iVar2 + 0xf4) =
                 *(uint *)(iVar2 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar2 + 0xf4)) & 0xf0000;
            F_00590670(this,iVar2);
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00591fc0 */
byte F_00591fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x591fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if ((param_3 == 0) && (param_4 == 0)) {
      bVar1 = F_00591f20(this,(uint)*(byte *)(param_1 + 0x13a),param_2);
      return bVar1;
    }
    if ((*(ushort *)(param_1 + 0xf6) & 0xf) != param_2) {
      F_00587d10(this,param_1);
      *(uint *)(param_1 + 0xf4) =
           *(uint *)(param_1 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(param_1 + 0xf4)) & 0xf0000;
      if (param_4 != 0) {
        uVar2 = F_0057f810(this,param_4);
        if (uVar2 != 0) {
          F_0058cc00(this,uVar2,param_1,1);
          return 1;
        }
      }
      if (param_3 != 0) {
        uVar2 = F_0057f810(this,param_3);
        if (uVar2 != 0) {
          F_0058cc00(this,uVar2,param_1,0);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00592080 */
byte F_00592080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x592080u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  if (0xff < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) >> 2)) {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
      F_005d28d0(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(int *)&gen_args[1]));
      return 1;
    }
    if (*piVar1 == (*(int *)&gen_args[1])) break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}

/* ref: FUN_005920d0 */
unsigned int F_005920d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5920d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  undefined * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  uVar4 = F_00404270();
  puVar5 = (undefined4 *)F_00406bd0(0x10,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cb4));
    puVar5[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  puVar3 = REFG(undefined * PTR32, 0x131dbb8);
  *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
  F_0058f6c0(puVar5 + 1,puVar3,6);
  puVar5 = (undefined4 *)F_00406bd0(0x24,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cbc));
    puVar5[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
  puVar5[7] = 0;
  puVar3 = REFG(undefined * PTR32, 0x131dbbc);
  *(undefined1 *)(puVar5 + 8) = 0;
  F_0058f6c0(puVar5 + 1,puVar3,6);
  puVar5 = (undefined4 *)F_00406bd0(0x38,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c94));
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0x40;
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
  puVar5[4] = *(undefined4 *)((int)this + 8);
  puVar5[5] = uVar1;
  puVar5[1] = 0;
  puVar5[3] = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0x10,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x10));
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00592220 */
unsigned int F_00592220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x592220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)pvVar1 + 4) == 0)) {
      iVar2 = **(int * PTR32 *)((int)this + 0x1c);
      F_00590870(pvVar1,*(undefined4 *)(iVar2 + 8));
      F_005cd750((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    if (*(int *)((int)pvVar1 + 0xc) != 0) {
      iVar2 = *(int *)((int)pvVar1 + 4);
      if (iVar2 == 1) {
        F_005736f0(pvVar1);
      }
      else {
        if (iVar2 == 2) {
          F_005882a0(pvVar1);
          return 0;
        }
        if (iVar2 == 3) {
          *((undefined4 *)GEN_TOP((*(int *)((int)pvVar1 + 0xc) + 8))) = 2;
          *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          *(undefined4 *)((int)pvVar1 + 4) = 0;
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005922a0 */
uint F_005922a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5922a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  
  (*(int *)(gen_frame + 0x14)) = *param_1;
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  piVar2 = (int *)*piVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)param_1[1];
  if (piVar2 != piVar1) {
    do {
      if ((*param_1 == *(int *)(piVar2[2] + 0x10)) &&
         ((undefined4 *)param_1[1] == *(undefined4 * PTR32 *)(piVar2[2] + 0x14))) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      piVar2[3] = piVar2[3] + 1;
      return piVar2[2];
    }
  }
  uVar3 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x20,0,uVar3,0);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  this_00[2] = 0;
  this_00[3] = 0;
  this_00[6] = 0;
  *this_00 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c9c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this_00;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_005cd630((undefined *)((int)this + 0x10),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_0056c130(this_00,0x40,param_1);
  if (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 4))) == 0) {
    F_00590870(*(undefined * PTR32 *)((int)this + 4),this_00);
    return (uint)this_00;
  }
  F_005cd6f0((undefined *)((int)this + 0x1c),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  return (uint)this_00;
}

/* ref: FUN_00592380 */
uint F_00592380(unsigned int gen_a0)
{
  GEN_ENTER(0x592380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(uint * PTR32 *)(REFG(int, 0x1379860) + 0x24);
  piVar4 = (int *)puVar1[2];
  if ((uint)((int)(puVar1[3] - (int)piVar4) >> 2) < 0x100) {
    for (; piVar4 != (int *)puVar1[3]; piVar4 = piVar4 + 1) {
      if ((undefined *)*piVar4 == this) goto LAB_005923c4;
    }
    piVar4 = (int *)F_005d28d0(puVar1 + 2,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
LAB_005923c4: ;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x10) + *puVar1;
  *(uint *)((int)this + 0x1c) =
       *(int *)((int)this + 0x14) + uVar3 + (uint)CARRY4(*(uint *)((int)this + 0x10),uVar2);
  *(undefined1 *)((int)this + 0x20) = 1;
  return (uint)piVar4;
}

/* ref: FUN_005923e0 */
unsigned int F_005923e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5923e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_005d29e0(*(undefined * PTR32 *)((int)this + 4),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00592400 */
uint F_00592400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x592400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 gen_out[0x4];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  iVar1 = *(int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x14) != iVar1) {
    uVar3 = F_005c6b30(iVar1,iVar1,*(int *)((int)this + 0x14));
    *(uint *)((int)this + 0x18) = uVar3;
  }
  uVar3 = F_005cfbd0((undefined *)((int)this + 0x14),0x10);
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = *(int *)(param_1 + uVar4 * 8);
      if (iVar1 == 4) {
        uVar3 = F_00590d40(this,2);
        if (*(int *)((int)this + 8) != 0) {
          local_10 = *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x40)));
        }
        *(float *)(uVar3 + 0xc) = local_10;
        *(float *)(uVar3 + 0x10) =
             ((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)local_10)));
        uVar3 = F_00590d40(this,3);
        if (*(int *)((int)this + 8) != 0) {
          local_c = *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x44)));
        }
        *(float *)(uVar3 + 0xc) = local_c;
        fVar5 = (float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)local_c;
      }
      else {
        uVar3 = F_00590d40(this,iVar1);
        fVar5 = F_00561130(this,*(uint *)(param_1 + uVar4 * 8));
        *(float *)(uVar3 + 0xc) = (float)fVar5;
        fVar5 = (float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)(float)fVar5;
      }
      uVar4 = uVar4 + 1;
      *(float *)(uVar3 + 0x10) = (float)fVar5;
    } while (uVar4 < param_2);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return uVar3;
}

/* ref: FUN_005924f0 */
byte F_005924f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5924f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x98) == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(undefined4 *)((int)this + 0x90) = param_3;
  if ((((char)param_1[2] != '\0') && (*(int *)((int)this + 0x84) == *param_1)) &&
     (*(int *)((int)this + 0x88) == param_1[1])) {
LAB_00592600: ;
    F_00561950(this);
    return 1;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))));
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  iVar1 = *param_1;
  *(int *)((int)this + 0x84) = iVar1;
  iVar2 = param_1[1];
  *(int *)((int)this + 0x88) = iVar2;
  if (iVar1 == -1) {
    iVar1 = *(int *)((int)this + 0xac);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
    }
    if ((code *)*(gen_code32 *)((int)this + 0x8c) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x8c))(this,*(undefined4 *)((int)this + 0x90));
    }
  }
  else {
    uVar3 = F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))),iVar1,iVar2,6);
    if (uVar3 == 0) {
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x98) + 8))) == 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x98) + 0xc))), iVar1 != 0)) {
        uVar3 = F_00572c50(iVar1);
        if (uVar3 == 2) goto LAB_00592600;
      }
      *(undefined1 *)((int)this + 0x94) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00592620 */
uint F_00592620(unsigned int gen_a0)
{
  GEN_ENTER(0x592620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x136) = 0;
  *(undefined2 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1aec));
  *(undefined1 *)((int)this + 0x138) = 1;
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentList::vf4 */
uint F_00592660(unsigned int gen_a0)
{
  GEN_ENTER(0x592660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x11f] != (undefined1)0x0) {
    this[0x11f] = (undefined1)0x0;
    *(undefined4 *)(this + 0xd8) = 0xffffffff;
    F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),3,4,this,0);
    F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),5,4,this,0);
  }
  F_00590f40(this);
  if (*(int *)(this + 0x98) != 0) {
    F_00406810(*(int *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4);
  return uVar1;
}

/* ref: FUN_00592700 */
uint F_00592700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x592700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  }
  else {
    uVar1 = F_0055d920((undefined *)((int)this + 4),param_1);
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
      this_00 = (undefined *)0x0;
    }
    else if ((((*(ushort *)(uVar1 + 0x18) < 1000) ||
              (pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x8c), pvVar2 == (undefined *)0x0)) ||
             ((*(byte *)((int)pvVar2 + 0x60) & 1) == 0)) ||
            ((((*(byte *)((int)pvVar2 + 0x60) & 4) == 0 || (*(char *)((int)pvVar2 + 0x1c) != '\x01')
              ) || (this_00 = pvVar2, *((char *)GEN_TOP((*(int *)((int)pvVar2 + 0xc) + 0xf))) != '\x0e')))) {
      pvVar2 = (undefined *)0x0;
      this_00 = pvVar2;
    }
  }
  if (this_00 != (undefined *)0x0) {
    pvVar2 = (undefined *)F_00591330(this_00,1);
  }
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf4 */
uint F_00592770(unsigned int gen_a0)
{
  GEN_ENTER(0x592770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x1e8) != 0) {
    F_00406810(*(int *)(this + 0x1e8));
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  iVar1 = *(int *)(this + 0x1f0);
  for (iVar3 = *(int *)(this + 0x1ec); iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc),*(undefined4 *)(iVar3 + 4));
  }
  if (*(int *)(this + 0x1ec) != *(int *)(this + 0x1f0)) {
    *(int *)(this + 0x1f0) = *(int *)(this + 0x1ec);
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),4,0,this,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),5,0,this,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf4 */
uint F_00592850(unsigned int gen_a0)
{
  GEN_ENTER(0x592850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00591410(this,1);
  uVar1 = F_00592660((undefined *)this);
  return uVar1;
}

/* ref: FUN_00592870 */
uint F_00592870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x592870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint in_EAX = 0;
  int iVar2;
  uint * puVar3;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x130);
  iVar2 = 0;
  for (puVar3 = *(uint * PTR32 *)((int)this + 300); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    if (iVar2 == param_1) {
      in_EAX = *puVar3;
      *(undefined1 *)(in_EAX + 0x2a) = 1;
    }
    else if (((*(char *)((int)this + 0x18e) != '\0') &&
             (in_EAX = *puVar3, (*(byte *)(in_EAX + 0x2b) & 2) != 0)) &&
            ((*(byte *)(in_EAX + 0x2a) & 0xf) != 0)) {
      *(undefined1 *)(in_EAX + 0x2a) = 0;
      in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,iVar2,0,0);
    }
    iVar2 = iVar2 + 1;
  }
  if ((char)param_2 == '\0') {
    in_EAX = F_0058e260(this);
  }
  return in_EAX;
}

/* ref: FUN_005928f0 */
unsigned int F_005928f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5928f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  iVar3 = 0;
  for (piVar4 = *(int * PTR32 *)((int)this + 300); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (param_1 == iVar2) {
      *(undefined1 *)(iVar2 + 0x2a) = 1;
    }
    else if (((*(char *)((int)this + 0x18e) != '\0') && ((*(byte *)(iVar2 + 0x2b) & 2) != 0)) &&
            ((*(byte *)(iVar2 + 0x2a) & 0xf) != 0)) {
      *(undefined1 *)(iVar2 + 0x2a) = 0;
      ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,iVar3,0,0);
    }
    iVar3 = iVar3 + 1;
  }
  if ((char)param_2 == '\0') {
    F_0058e260(this);
  }
  return 0;
}

/* ref: FUN_00592970 */
unsigned int F_00592970(unsigned int gen_a0)
{
  GEN_ENTER(0x592970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  for (piVar2 = *(int * PTR32 *)((int)this + 300); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((*(byte *)(*piVar2 + 0x2b) & 2) != 0) {
      F_005928f0(this,*piVar2,1);
    }
  }
  return 0;
}

/* ref: FUN_005929b0 */
uint F_005929b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5929b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x84);
  if ((uVar3 != 0) && (param_1 != 0)) {
    uVar3 = *(uint *)(uVar3 + 0x108);
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    if ((((uVar3 != 0) && (*(int *)(uVar3 + 0x8c) != 0)) &&
        (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) +
                         (uint)*(ushort *)(uVar3 + 0x90) * 0xc))), uVar3 = 0, piVar1 != (int *)0x0))
       && (iVar2 = *piVar1, uVar3 = 0, iVar2 != 0)) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar3 = F_0058f7a0((undefined *)(iVar2 + 4),*(undefined4 *)(param_1 + 0xc));
        return uVar3;
      }
      uVar3 = F_0058f7a0((undefined *)(iVar2 + 4),0);
    }
  }
  return uVar3;
}

/* ref: FUN_00592a30 */
byte F_00592a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x88) == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x90) = param_2;
  *(undefined4 *)((int)this + 0x94) = param_3;
  if ((((char)param_1[2] != '\0') && (*(int *)((int)this + 0x98) == *param_1)) &&
     (*(int *)((int)this + 0x9c) == param_1[1])) {
LAB_00592b40: ;
    F_00562ea0(this);
    return 1;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))));
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  iVar1 = *param_1;
  *(int *)((int)this + 0x98) = iVar1;
  iVar2 = param_1[1];
  *(int *)((int)this + 0x9c) = iVar2;
  if (iVar1 == -1) {
    iVar1 = *(int *)((int)this + 0x84);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
    }
    if ((code *)*(gen_code32 *)((int)this + 0x90) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x90))(this,*(undefined4 *)((int)this + 0x94));
    }
  }
  else {
    uVar3 = F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))),iVar1,iVar2,6);
    if (uVar3 == 0) {
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) == 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0xc))), iVar1 != 0)) {
        uVar3 = F_00572c50(iVar1);
        if (uVar3 == 2) goto LAB_00592b40;
      }
      *(undefined1 *)((int)this + 0xa0) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00592b60 */
unsigned int F_00592b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (this != (undefined *)0x0) {
    if (param_1 == 0) {
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
        return 0;
      }
    }
    else {
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
      }
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x90) + 4))),param_1,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x94) + 4))),param_2,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))),param_3,0,6);
    }
  }
  return 0;
}

/* ref: FUN_00592c00 */
uint F_00592c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x592c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar2 = *(uint *)((int)this + 0xc0);
    uVar4 = 0;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
      *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
      return uVar2;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0xc4);
    if ((iVar3 == 0) || (*(short *)(iVar3 + 0x18) != 2)) {
      iVar3 = 0;
    }
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x8c) != 0)) &&
        (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0x8c) + 8))) +
                         (uint)*(ushort *)(iVar3 + 0x90) * 0xc))), piVar1 != (int *)0x0)) &&
       (iVar3 = *piVar1, iVar3 != 0)) {
      F_0058f730((undefined *)(iVar3 + 4),param_1,0,6);
    }
    uVar4 = *(uint *)((int)this + 0xc0);
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) | 0x100000;
      *(uint *)(uVar4 + 0x88) = *(uint *)(uVar4 + 0x88) & 0xffffff7f;
    }
  }
  return uVar4;
}

/* ref: FUN_00592ca0 */
unsigned int F_00592ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x592ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float fVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  undefined4 * puVar7;
  
  bVar5 = param_3 != 0;
  (*(int *)(gen_frame + 0x18)) = param_1;
  if ((param_2 != (int *)0x0) && (iVar4 = param_2[0x1c], iVar4 != 0)) {
    *(uint *)(iVar4 + 0x84) =
         *(uint *)(iVar4 + 0x84) ^ ((uint)bVar5 << 0x14 ^ *(uint *)(iVar4 + 0x84)) & 0x100000;
    *(uint *)(iVar4 + 0x88) =
         *(uint *)(iVar4 + 0x88) ^ ((uint)!bVar5 << 7 ^ *(uint *)(iVar4 + 0x88)) & 0x80;
  }
  if (bVar5) {
    uVar3 = F_0055d920(param_2 + 1,param_2[0x25]);
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    iVar4 = 0;
    if (uVar3 != 0) {
      if ((*(int *)(uVar3 + 0x8c) != 0) &&
         (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) +
                          (uint)*(ushort *)(uVar3 + 0x90) * 0xc))), piVar1 != (int *)0x0)) {
        iVar4 = *piVar1;
      }
      if (iVar4 != 0) {
        F_0058f730((undefined *)(iVar4 + 4),param_3,0,6);
      }
    }
    uVar3 = F_0055d920(param_2 + 1,param_2[0x24]);
    if (((((uVar3 != 0) && (999 < *(ushort *)(uVar3 + 0x18))) &&
         (this = *(undefined * PTR32 *)(uVar3 + 0x8c), this != (undefined *)0x0)) &&
        (((*(byte *)((int)this + 0x60) & 1) != 0 && ((*(byte *)((int)this + 0x60) & 4) != 0)))) &&
       ((*(char *)((int)this + 0x1c) == '\x01' &&
        (*((char *)GEN_TOP((*(int *)((int)this + 0xc) + 0xf))) == '\x13')))) {
      iVar4 = *(int *)((int)this + 0x88);
      *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1;
      fVar2 = *(float *)((int)this + 0x8c);
      if (iVar4 != 0) {
        if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
           (fVar6 = (float10)fVar2, bVar5 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x38)) || GEN_ISNAN(fVar6),
           bVar5 == (bVar5 || (float10)*(float *)(iVar4 + 0x38) == fVar6))) {
          *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
        }
        *(float *)(iVar4 + 0x38) = fVar2;
      }
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_4);
      if (*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) {
        F_00584110(*(undefined * PTR32 *)((int)this + 0x84),&REFG(undefined, 0x1379720));
        F_005832e0(this);
      }
      F_005832e0(this);
    }
    iVar4 = REFG(int, 0x1379860);
    (*(undefined4 *)(gen_frame + 0xc)) = param_5;
    puVar7 = &(*(undefined4 *)(gen_frame + 0xc));
    (*(undefined2 *)(gen_frame + 0x14)) = 0xffff;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined2 *)(gen_frame + 0x16)) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x38))(param_2);
    F_00590ad0((undefined *)(iVar4 + 0xe0),2,*(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x84),uVar3,puVar7);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentMap::vf4 */
uint F_00592e80(unsigned int gen_a0)
{
  GEN_ENTER(0x592e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    F_00591760(this,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  piVar1 = *(int * PTR32 *)(this + 0x140);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x140) = 0;
  }
  F_005643c0(this);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c),0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4);
  return uVar2;
}

/* ref: FUN_00592ee0 */
byte F_00592ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x592ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (param_1 == (char *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),param_1,(int)pcVar3 - (int)(param_1 + 1));
  uVar4 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  if (*(uint *)((int)this + 0x298) == uVar4) {
    F_004087f0(((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 1;
  }
  *(uint *)((int)this + 0x298) = uVar4;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",param_1);
  bVar2 = F_00591820(this,1,((undefined1 *)(gen_frame + 0x8)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return bVar2;
}

/* ref: FUN_00592fc0 */
byte F_00592fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte * pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),(*(char * PTR32 *)&gen_args[1]),(int)pcVar5 - (int)((*(char * PTR32 *)&gen_args[1]) + 1));
  uVar6 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) == uVar6) {
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) != (*(uint *)&gen_args[2])) {
      if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))) = REFG(float, 0x1087f04);
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xba))) = 1;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) = ~*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) & (*(uint *)&gen_args[2]);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))) = 0;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))) = REFG(float, 0x10a0898);
      }
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[2]);
    }
    F_004087f0(((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 1;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = uVar6;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[2]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
  pcVar7 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (pcVar7 == (*(char * PTR32 *)&gen_args[1]) + 1) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb9))) = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
      pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x93)));
      *pbVar1 = *pbVar1 & 0xf7;
    }
    F_004087f0(((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb9))) = 1;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x93)));
    *pbVar1 = *pbVar1 | 8;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",(*(char * PTR32 *)&gen_args[1]));
  bVar3 = F_00591820((*(undefined * PTR32 *)&gen_args[0]),0,((undefined1 *)(gen_frame + 0x8)));
  F_00c49908(((undefined1 *)(gen_frame + 0x8)),0x100,(*(char * PTR32 *)&gen_args[1]));
  *((undefined2 *)GEN_TOP((((undefined1 *)(gen_frame + 0x0)) + ((int)pcVar5 - (int)((*(char * PTR32 *)&gen_args[1]) + 1)) + 5))) = 100;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",((undefined1 *)(gen_frame + 0x8)));
  bVar4 = F_00591820((*(undefined * PTR32 *)&gen_args[0]),2,((undefined1 *)(gen_frame + 0x8)));
  if ((bVar3 == 0) || (bVar4 == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return bVar3;
}

/* ref: FUN_005931d0 */
uint F_005931d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5931d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 < 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffefffff;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x80;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                      (uint)*(ushort *)(param_1 + 0x90) * 0xc)));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = F_0058c5d0((undefined *)(iVar1 + 4));
        return uVar2;
      }
    }
    else {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x100000;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffff7f;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                      (uint)*(ushort *)(param_1 + 0x90) * 0xc)));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = F_0058f730((undefined *)(iVar1 + 4),param_2,0,6);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00593250 */
uint F_00593250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != '\0') {
    uVar1 = F_00404270();
    puVar2 = (undefined4 *)F_00406bd0(0x18,0,uVar1,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
      F_005d3300((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf9 */
uint F_005932b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5932b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  bool bVar12;
  float10 fVar13;
  
  uVar8 = (*(uint *)&gen_args[1]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(uint *)&gen_args[1]);
  bVar3 = *(byte *)((*(uint *)&gen_args[1]) + 0x148);
  bVar5 = false;
  (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),1);
  bVar12 = false;
  if ((bVar3 & 4) != 0) {
    bVar6 = F_005664e0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]));
    bVar12 = bVar6 == 0;
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) = !bVar12;
    (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),(bool)(bVar3 >> 3 & 1) == (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)));
    bVar5 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3));
  }
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x148)));
  *pbVar1 = *pbVar1 ^ (bVar5 * '\b' ^ *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x148)))) & 8;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x74))) =
       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x6c)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x70))) =
       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x68)));
  if (bVar12) {
    fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x6c)));
    uVar7 = F_00557c70(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),fVar2);
    fVar13 = (float10)*((float *)GEN_TOP((((int)(uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) + 8 + (uint)uVar7 * 0xc)));
    *((float *)GEN_TOP((((int)(uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) + 0x74))) = (float)(fVar13 * (float10)fVar2);
    *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x70))) =
         ((float)GEN_TOF((fVar13 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x68))))));
  }
  uVar8 = F_00558000((undefined *)uVar8,(*(undefined4 *)(gen_frame + 0x6)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar8;
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  puVar10 = (undefined4 *)(iVar4 + 100);
  puVar11 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  F_005d3370(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),iVar4 + 0xf4);
  F_005d3370(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10c);
  uVar8 = F_005d3530(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x124);
  return uVar8;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf9 */
uint F_005933d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5933d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x24))))(this + 0x140,param_1,param_2);
  uVar1 = F_005932b0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00593410 */
uint F_00593410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = (undefined4 *)(param_2 + 0x18);
  puVar4 = (undefined4 *)(param_1 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_005d3370((undefined *)(param_1 + 0xf4),param_2 + 0x5c);
  F_005d3370((undefined *)(param_1 + 0x10c),param_2 + 0x74);
  uVar1 = F_005d3530((undefined *)(param_1 + 0x124),param_2 + 0x8c);
  return uVar1;
}

/* ref: FUN_00593470 */
byte F_00593470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593470u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  
  if ((char)param_1[0x8b4a] == '\0') {
    iVar1 = param_1[0x2e];
    param_1[0x83a7] = param_2;
    *(int *)(iVar1 + 0xa8) = iVar1;
    F_00573d50((undefined *)(iVar1 + 0xe0),iVar1);
    *(int *)(iVar1 + 0x1c0) = iVar1;
    *(int *)(iVar1 + 0x1e4) = iVar1;
    *(int *)(iVar1 + 0x1ec) = iVar1;
    *(undefined1 *)(iVar1 + 0x1fa) = 0;
    *(undefined1 *)(iVar1 + 0x230) = 1;
    F_00577990(param_1 + 0x2f);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10a0a50);
    param_1[0x3c] = 0;
    *(undefined2 *)(param_1 + 0x3d) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x43] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    fVar2 = ((float10)GEN_TOD(fcos(fVar2)));
    *(float *)&REFG(undefined, 0x1379968) = (float)fVar2;
    ((code *)*(gen_code32 *)(*(int *)param_1[0x4c] + 0xc))((int *)param_1[0x4c]);
    F_00c48350(param_1 + 0x52,0,0x20000);
    F_00c48350((undefined *)param_1[0x51],0,param_1[0x50] * 4);
    param_1[0x4f] = 0;
    F_00a4b410(param_1 + 0x4d,0);
    F_005920d0(param_1 + 0x839c);
    *(undefined1 *)(param_1 + 0x8b4a) = 1;
    F_00579550(param_1 + 0x83a8,param_1 + 0x3b);
    if ((undefined *)param_1[0x2f] != (undefined *)0x0) {
      F_005691b0((undefined *)param_1[0x2f]);
    }
    F_00583ab0(param_1 + 0x3b,0x1e,param_1 + 0x2f,param_1 + 0x49);
    ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1,1,0);
    ((code *)*(gen_code32 *)(param_1[0x8afb] + 4))(param_1 + 0x8afb);
  }
  return 1;
}

/* ref: FUN_005935e0 */
unsigned int F_005935e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5935e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(char *)((int)this + 0x22d28) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x22bec) + 0xc))))((int)this + 0x22bec);
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_0055b610(*(undefined * PTR32 *)((int)this + 0xbc));
    }
    F_00565dd0((undefined *)((int)this + 0xec));
    *(undefined4 *)((int)this + 0x20ed4) = 0;
    if (*(char *)((int)this + 0x22d2b) != '\0') {
      F_0058f5e0(*(undefined * PTR32 *)((int)this + 0xb8));
      ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      F_00558f10(this);
      *(undefined1 *)((int)this + 0x22cf0) = 0;
      *(undefined2 *)((int)this + 0x22d2b) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_0055b460(*(undefined * PTR32 *)((int)this + 0xbc));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xbc);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *(undefined4 *)((int)this + 0xbc) = 0;
      }
    }
    F_0058c250((undefined *)((int)this + 0xec));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0x10))))(*(int * PTR32 *)((int)this + 0x130));
    *(undefined4 *)((int)this + 0x20e10) = 0;
    *(undefined4 *)((int)this + 0x20e14) = 0;
    iVar2 = *(int *)((int)this + 0x20e18);
    if (iVar2 != *(int *)((int)this + 0x20e1c)) {
      F_00c46e20(iVar2,*(int *)((int)this + 0x20e1c),0);
      *(int *)((int)this + 0x20e1c) = iVar2;
    }
    F_00580900((undefined *)((int)this + 0x20e28));
    F_00590750((undefined *)((int)this + 0x20e70));
    F_00587080((undefined *)((int)this + 0x124));
    F_00558dc0((undefined *)((int)this + 0x20148));
    F_00591ce0(*(undefined * PTR32 *)((int)this + 0xb8));
    *(undefined1 *)((int)this + 0x22d28) = 0;
  }
  return 0;
}

/* ref: FUN_00593720 */
uint F_00593720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x104)));
  pcVar2 = (char *)F_0042a990(param_1);
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      if (*((char * PTR32 *)(gen_frame + 0x104))[0] != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"",REFG(undefined4, 0x108cc50));
        uVar3 = REFG(undefined4, 0x108cc50);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)),((char * PTR32 *)(gen_frame + 0x104)));
        (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
        F_005d3a70(param_2,((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
        F_0042c880(((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0x0)));
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x104)));
      }
      uVar5 = (int)pcVar2[2] + 3;
      F_0042d120(((char * PTR32 *)(gen_frame + 0x104)),pcVar2,uVar5);
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"",REFG(undefined4, 0x108cc50));
      uVar3 = REFG(undefined4, 0x108cc50);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x54)),((char * PTR32 *)(gen_frame + 0x104)));
      F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)),((undefined1 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
      (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
      F_005d3a70(param_2,((undefined1 *)(gen_frame + 0x54)));
      F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar4 = F_0042aca0(((char * PTR32 *)(gen_frame + 0x104)));
    }
    else {
      uVar5 = F_0042acc0(uVar3);
      uVar4 = F_0042d590(((char * PTR32 *)(gen_frame + 0x104)),pcVar2,uVar5);
    }
    cVar1 = pcVar2[uVar5];
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    pcVar2 = pcVar2 + uVar5;
  }
  if (*((char * PTR32 *)(gen_frame + 0x104))[0] != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"",REFG(undefined4, 0x108cc50));
    uVar3 = REFG(undefined4, 0x108cc50);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
    F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)),((char * PTR32 *)(gen_frame + 0x104)));
    (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
    F_005d3a70(param_2,((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  }
  uVar6 = F_0042c880(((char * PTR32 *)(gen_frame + 0x104)));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return (uint)uVar6;
}

/* ref: FUN_00593950 */
uint F_00593950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x593950u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint * puVar1;
  undefined * pvVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  undefined * pvVar7;
  undefined2 extraout_var = 0;
  undefined2 uVar8;
  int iVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)&gen_args[2]);
  uVar4 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)&gen_args[2]),0);
  if ((short)(*(undefined4 *)&gen_args[3]) < 0) {
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[4]) + 0)) = (short)uVar4;
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[5]) + 0)) = (short)(*(undefined4 *)&gen_args[4]);
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = (short)(*(undefined4 *)&gen_args[4]);
  }
  else if ((int)uVar4 < (int)(short)(*(undefined4 *)&gen_args[3])) {
    uVar4 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)&gen_args[2]),0);
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = (short)uVar4;
  }
  (*(bool *)(gen_frame + 0x33)) = (short)(*(undefined4 *)&gen_args[3]) < *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22)));
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)(*(undefined4 *)&gen_args[3]);
  uVar4 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)&gen_args[2]),0);
  iVar9 = (*(int *)(gen_frame + 0x28));
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (short)uVar4;
  if ((short)(*(undefined4 *)&gen_args[4]) < (short)(*(undefined4 *)&gen_args[5])) {
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)(*(undefined4 *)&gen_args[4]);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)(*(undefined4 *)&gen_args[5]);
  }
  else {
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)(*(undefined4 *)&gen_args[5]);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)(*(undefined4 *)&gen_args[4]);
  }
  F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x528))),(*(int *)(gen_frame + 0x28)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6cc))),(*(undefined * PTR32 *)&gen_args[2]));
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00593720(iVar9,&(*(uint * PTR32 *)(gen_frame + 0xc)));
  uVar4 = 0;
  if ((*(uint * PTR32 *)(gen_frame + 0xc)) != (*(uint * PTR32 *)(gen_frame + 0x10))) {
    puVar6 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 0x2a;
    do {
      if (*(char *)puVar6[-0x2a] == '\0') {
        *puVar6 = uVar4;
        uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),puVar6 + -0x15,1);
        puVar6[1] = uVar5 + uVar4;
      }
      else {
        if (puVar6 + 2 == (*(uint * PTR32 *)(gen_frame + 0x10))) {
          *puVar6 = uVar4;
          uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)(gen_frame + 0x2c)),1);
        }
        else {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x1c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),puVar6 + -0x2a,puVar6 + -0x15);
          uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),puVar6 + -0x15,1);
          uVar5 = uVar5 + 2 + uVar4;
          *puVar6 = uVar4;
        }
        puVar6[1] = uVar5;
        F_0042ccf0(puVar6 + -0x15,(*(undefined * PTR32 *)(gen_frame + 0x2c)));
        F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),puVar6 + -0x15,uVar4,puVar6[1] - uVar4);
        uVar4 = *puVar6;
        if ((uVar4 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26)))) &&
           (uVar5 = puVar6[1], *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) < uVar5)) {
          if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0') {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar4 = uVar5;
            }
            uVar8 = (undefined2)uVar4;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar8;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar8;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = uVar8;
          }
          else if ((short)(*(undefined4 *)&gen_args[4]) == (short)(*(undefined4 *)&gen_args[5])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar4 = uVar5;
            }
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)uVar4;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)*puVar6;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)puVar6[1];
          }
          else if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[4])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar4 = uVar5;
            }
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)uVar4;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)uVar4;
          }
          else if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[5])) {
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)uVar4;
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar8 = (undefined2)puVar6[1];
            }
            else {
              uVar8 = (undefined2)*puVar6;
            }
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar8;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar8;
          }
        }
        if ((*puVar6 < (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)))) &&
           ((uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) < puVar6[1])) {
          uVar8 = (undefined2)*puVar6;
          if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[4])) {
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = uVar8;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar8;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)puVar6[1];
          }
          else if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) == (short)(*(undefined4 *)&gen_args[5])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar8 = (undefined2)puVar6[1];
            }
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar8;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar8;
          }
        }
      }
      uVar4 = puVar6[1];
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 0x2c;
    } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  ((uint *)(gen_frame + 0x34))[0] = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26)));
  iVar9 = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  ((uint *)(gen_frame + 0x34))[1] = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) - (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26)));
  ((uint *)(gen_frame + 0x34))[2] = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) - (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5d0);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x624);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x678);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42c);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x480);
  puVar6 = (uint *)F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4d4);
  if ((*(uint * PTR32 *)(gen_frame + 0xc)) != (*(uint * PTR32 *)(gen_frame + 0x10))) {
    (*(uint * PTR32 *)(gen_frame + 0x24)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + 0x15;
    do {
      puVar6 = (*(uint * PTR32 *)(gen_frame + 0x24));
      if (2 < iVar9) break;
      if ((int)((uint *)(gen_frame + 0x34))[(int)(iVar9)] < 1) {
        iVar9 = iVar9 + 1;
        (*(int *)(gen_frame + 0x20)) = iVar9;
      }
      (*(int *)(gen_frame + 0x28)) = (*(uint * PTR32 *)(gen_frame + 0x24))[0x16] - (*(uint * PTR32 *)(gen_frame + 0x24))[0x15];
      (*(int *)(gen_frame + 0x1c)) = 0;
      if (0 < (*(int *)(gen_frame + 0x28))) {
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP((iVar9 * 0x54 + 0x5d0 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        do {
          if (2 < iVar9) break;
          uVar4 = ((uint *)(gen_frame + 0x34))[(int)(iVar9)];
          if ((*(int *)(gen_frame + 0x28)) <= (int)uVar4) {
            puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x720)));
            F_0042ccf0(puVar1,(*(uint * PTR32 *)(gen_frame + 0x24)));
            F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),puVar1,(*(int *)(gen_frame + 0x1c)),REFG(undefined4, 0x108cc50));
            puVar6 = puVar1;
            if (*(char *)(*(uint * PTR32 *)(gen_frame + 0x24))[-0x15] != '\0') {
              puVar6 = (*(uint * PTR32 *)(gen_frame + 0x24)) + -0x15;
            }
            pvVar7 = ((undefined *)GEN_TOP((iVar9 * 0x54 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
            (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar7;
            F_0042d4d0((undefined *)((int)pvVar7 + 0x42c),puVar6);
            F_0042d4d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x5d0),puVar1);
            ((uint *)(gen_frame + 0x34))[(int)(iVar9)] = ((uint *)(gen_frame + 0x34))[(int)(iVar9)] - (*(int *)(gen_frame + 0x28));
            break;
          }
          pvVar7 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x720)));
          F_0042ccf0(pvVar7,(*(uint * PTR32 *)(gen_frame + 0x24)));
          F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),pvVar7,(*(int *)(gen_frame + 0x1c)),uVar4);
          F_0042d4d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + -0x1a4),pvVar7);
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x2c)),pvVar7);
          iVar9 = (*(int *)(gen_frame + 0x20)) + 1;
          (*(int *)(gen_frame + 0x20)) = iVar9;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + uVar4;
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar4;
          (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)((int)pvVar2 + 0x54);
          iVar9 = (*(int *)(gen_frame + 0x20));
        } while (0 < (*(int *)(gen_frame + 0x28)));
      }
      puVar6 = (*(uint * PTR32 *)(gen_frame + 0x24)) + 0x2c;
      puVar1 = (*(uint * PTR32 *)(gen_frame + 0x24)) + 0x17;
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar6;
    } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  puVar1 = (*(uint * PTR32 *)(gen_frame + 0xc));
  if (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x843))) < 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xda))) = 0;
  }
  else {
    uVar3 = F_00586c30((*(undefined * PTR32 *)&gen_args[0]),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6cc);
    puVar6 = ((uint *)GEN_TOP(CONCAT22(extraout_var,uVar3)));
  }
  if (puVar1 != (uint *)0x0) {
    puVar6 = puVar1;
    if (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10))) {
      do {
        F_0042c880(puVar6 + 0x15);
        F_0042c880(puVar6);
        puVar6 = puVar6 + 0x2c;
      } while (puVar6 != (*(uint * PTR32 *)(gen_frame + 0x10)));
    }
    uVar10 = F_00429760(puVar1,(((*(int *)(gen_frame + 0x14)) - (int)puVar1) / 0xb0) * 0xb0,0x2c0);
    puVar6 = (uint *)uVar10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)puVar6;
}

/* ref: FUN_00593de0 */
uint F_00593de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x593de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  sVar5 = (short)param_4;
  if (((char)param_6 != '\0') && (sVar5 != (short)param_5)) {
    sVar3 = (short)param_3;
    if (sVar3 == sVar5) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar3 = sVar3 + -1;
    }
    *(short *)((int)this + 0x22) = sVar3;
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  bVar2 = F_0042ac50(param_2,(int)this + 0x6cc);
  F_00593950(this,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((char)param_7 == '\0') {
    if ((((int)sVar5 == (uint)*(ushort *)((int)this + 0x26)) &&
        (uVar4 = (uint)(short)param_5, uVar4 == *(ushort *)((int)this + 0x28))) && (bVar2 != 0))
    goto LAB_00593ec3;
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x109fdb0),REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  }
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar4 = (uint)uVar6;
LAB_00593ec3: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_00593ee0 */
uint F_00593ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x593ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00593950(this,param_1,param_2,0xffffffff,0,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_00593f50 */
uint F_00593f50(unsigned int gen_a0)
{
  GEN_ENTER(0x593f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = F_0042cd30((undefined *)((int)this + 0x42c),((undefined1 *)(gen_frame + 0x4)),(int)this + 0x4d4);
  F_0042ccf0((undefined *)((int)this + 0x528),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0042cd30((undefined *)((int)this + 0x5d0),((undefined1 *)(gen_frame + 0x4)),(int)this + 0x678);
  F_0042ccf0((undefined *)((int)this + 0x6cc),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = (uint)*(ushort *)((int)this + 0x26);
  F_00593950(this,(undefined *)((int)this + 0x528),(undefined *)((int)this + 0x6cc),uVar2,uVar2,uVar2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar3;
}

/* ref: FUN_00594010 */
uint F_00594010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (int)this + 0x2c;
  if ((**(char * PTR32 *)((int)this + 0x2c) == '\0') &&
     (iVar1 = (int)this + 0x624, **(char * PTR32 *)((int)this + 0x624) == '\0')) {
    uVar2 = F_0055c2f0((int)this + 0x42c);
    if (uVar2 != 0) {
      this_00 = (undefined *)((int)this + 0x3d8);
      F_0042e430(this_00,uVar2);
      uVar3 = (uint)*(ushort *)((int)this + 0x22);
      uVar4 = 0;
      uVar2 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18),this_00,0);
      F_00593950(this,(int)this + 0x528,(int)this + 0x6cc,(uint)*(ushort *)((int)this + 0x22),
                   (uint)(ushort)(*(short *)((int)this + 0x22) - (short)uVar2),uVar3,uVar4);
      F_0042ccf0((undefined *)((int)this + 0x720),this_00);
      F_0042cbc0(param_1,(undefined *)((int)this + 0x720));
      return (uint)param_1;
    }
    F_0042aca0((int)this + 0x720);
    F_0042cbc0(param_1,(int)this + 0x720);
    return (uint)param_1;
  }
  F_0042ccf0((undefined *)((int)this + 0x720),iVar1);
  F_0042cbc0(param_1,(undefined *)((int)this + 0x720));
  return (uint)param_1;
}

/* ref: FUN_005940f0 */
uint F_005940f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5940f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(short *)((int)this + 0x7c8) != 0) {
    uVar2 = F_00572b60(this,1,1);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar2;
  }
  this_00 = (undefined *)((int)this + 0x774);
  uVar2 = F_00594010(this,((undefined1 *)(gen_frame + 0x4)));
  F_0042ccf0(this_00,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8),this_00,(int)this + 0x7d4);
  *(uint *)((int)this + 2000) = uVar2;
  if (uVar2 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))
                      (*(int * PTR32 *)((int)this + 8),0xffffffff,(int)this + 0x7d4);
    *(uint *)((int)this + 2000) = uVar2;
    F_0042aca0(this_00);
    uVar2 = (uint)*(ushort *)((int)this + 0x22);
    F_00593950(this,(int)this + 0x528,(int)this + 0x6cc,uVar2,uVar2,uVar2,0);
  }
  piVar1 = *(int * PTR32 *)((int)this + 2000);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    *(undefined2 *)((int)this + 0x7cc) = 0;
    if (piVar1[1] - *piVar1 >> 2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)*piVar1,REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1,*(undefined4 *)((int)this + 2000),(int)*(short *)((int)this + 0x7cc));
    *(short *)((int)this + 0x7c8) = *(short *)((int)this + 0x7c8) + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00594240 */
uint F_00594240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * PTR32 * PTR32 * pppuVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  F_0042cc20(((undefined1 *)(gen_frame + 0x28)),"",REFG(undefined4, 0x108cc50));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00593720(param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x100)) = 3;
  (*(uint *)(gen_frame + 0xfc)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (*(undefined4 * PTR32 *)(gen_frame + 0x10))) {
    do {
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
      if (*(char *)*puVar6 == '\0') {
        F_0042eca0(puVar6 + 0x15,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)));
        F_0042e230(((undefined1 *)(gen_frame + 0x7c)),((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)));
        uVar4 = F_00a26ce0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x18),((undefined1 *)(gen_frame + 0x7c)),1);
        (*(uint *)(gen_frame + 0x20)) = uVar4;
        F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          do {
            if ((*(uint *)(gen_frame + 0xfc)) <= uVar4) {
                    
              F_00c457e7("invalid string position");
            }
            ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
            if ((*(uint *)(gen_frame + 0x100)) < 4) {
              ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec));
            }
            pppuVar1 = ppppuVar5[uVar4];
            if (pppuVar1 + -8 < (undefined4 * PTR32 * PTR32 *)0x5f) {
              bVar3 = F_0055c370((*(undefined * PTR32 *)(gen_frame + 0x24)),(int)(char)pppuVar1);
              if (bVar3 != 0) {
                F_0042e3c0(((undefined1 *)(gen_frame + 0x28)),pppuVar1);
              }
            }
            else if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7d8) >> 5 & 1) != 0) {
              (*(uint *)(gen_frame + 0xe4)) = 3;
              (*(undefined4 *)(gen_frame + 0xe0)) = 0;
              ((undefined4 *)(gen_frame + 0xd0))[0] = 0;
              F_005ce350(((undefined4 *)(gen_frame + 0xd0)),((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)),uVar4,1);
              F_0042e230(((undefined1 *)(gen_frame + 0x7c)),((undefined4 *)(gen_frame + 0xd0)));
              F_0042e360(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x7c)));
              F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
              if (3 < (*(uint *)(gen_frame + 0xe4))) {
                F_00429760(((undefined4 *)(gen_frame + 0xd0))[0],(*(uint *)(gen_frame + 0xe4)) * 4 + 4,0x3c);
              }
            }
            uVar4 = uVar4 + 1;
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
          } while (uVar4 < (*(uint *)(gen_frame + 0x20)));
        }
      }
      else if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7d8) >> 6 & 1) != 0) {
        F_0042e360(((undefined1 *)(gen_frame + 0x28)),puVar6);
      }
      puVar6 = puVar6 + 0x2c;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
    } while (puVar6 != (*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xc) + 4)));
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x28)));
  if (3 < (*(uint *)(gen_frame + 0x100))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0],(*(uint *)(gen_frame + 0x100)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0x100)) = 3;
  (*(uint *)(gen_frame + 0xfc)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_005d1440(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x28)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar7;
}

/* ref: FUN_005944b0 */
uint F_005944b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5944b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 1) {
    F_0058c5d0(this);
  }
  *(undefined4 *)((int)this + 4) = 1;
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = F_005922a0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c),param_1);
  *(uint *)((int)this + 8) = uVar2;
  F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c),uVar1);
  return 0;
}

/* ref: FUN_00594500 */
uint F_00594500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594500u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_005d36f0((undefined *)((*(int *)&gen_args[0]) + 0x38),&(*(undefined4 *)&gen_args[1]));
  *(*(int * PTR32 *)&gen_args[2]) = *(*(int * PTR32 *)&gen_args[2]) + 1;
  return (uint)(*(int * PTR32 *)&gen_args[2]);
}

/* ref: FUN_00594520 */
byte F_00594520(unsigned int gen_a0)
{
  GEN_ENTER(0x594520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  uint * this_00;
  int * piVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  piVar1 = *(int * PTR32 *)this;
  piVar8 = (int *)*piVar1;
  (*(int * PTR32 *)(gen_frame + 0x38)) = this;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar1;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
  F_004ff310(((undefined1 *)(gen_frame + 0x30)),6,0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x756c64;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  piVar9 = this;
  if (piVar8 != piVar1) {
    this_00 = (uint *)((int)this + 0xc);
    do {
      (*(int *)(gen_frame + 0x3c)) = piVar8[2];
      F_00c472af(((undefined1 *)(gen_frame + 0x48)),0x100,REFG(undefined * PTR32, 0x131db98),piVar8[2]);
      uVar4 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      puVar2 = *(uint * PTR32 *)((int)this + 0x10);
      (*(uint *)(gen_frame + 0x40)) = uVar4;
      if ((&(*(uint *)(gen_frame + 0x40)) < puVar2) && (puVar3 = (uint *)*this_00, puVar3 <= &(*(uint *)(gen_frame + 0x40)))) {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x14)) {
          iVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar5 == -1) {
LAB_0059474b: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar6 = iVar5 + 1;
          uVar4 = (int)*(uint * PTR32 *)((int)this + 0x14) - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar4 < uVar6) {
            if (-(uVar4 >> 1) - 1 < uVar4) {
              uVar4 = 0;
            }
            else {
              uVar4 = uVar4 + (uVar4 >> 1);
            }
            if (uVar4 < uVar6) {
              uVar4 = uVar6;
            }
            F_005d1bc0(this_00,uVar4);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x44));
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x10) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x10) =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x14)) {
          iVar5 = (int)((int)puVar2 - *this_00) >> 2;
          if (iVar5 == -1) goto LAB_0059474b;
          uVar7 = iVar5 + 1;
          uVar6 = (int)((int)*(uint * PTR32 *)((int)this + 0x14) - *this_00) >> 2;
          if (uVar6 < uVar7) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar7) {
              uVar6 = uVar7;
            }
            F_005d1bc0(this_00,uVar6);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x44));
          }
        }
        if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
          **(uint * PTR32 *)((int)this + 0x10) = uVar4;
        }
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
      if ((*(int *)(gen_frame + 0x3c)) != 0) {
        F_00406ad0((*(int *)(gen_frame + 0x3c)));
      }
      piVar8 = (int *)*piVar8;
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x38));
    } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  piVar1 = (int *)*piVar9;
  piVar8 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*piVar9 + 4) = *piVar9;
  piVar9[1] = 0;
  if (piVar8 != (int *)*piVar9) {
    do {
      piVar1 = (int *)*piVar8;
      F_00429760(piVar8,0xc,400);
      piVar8 = piVar1;
    } while (piVar1 != (int *)*piVar9);
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return 1;
}

/* ref: FUN_00594760 */
byte F_00594760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00591f20(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),(uint)*(byte *)((int)this + 0x13a),param_1);
  return bVar1;
}

/* ref: FUN_00594790 */
uint F_00594790(unsigned int gen_a0)
{
  GEN_ENTER(0x594790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  while( true ) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14);
    if ((((this != (int *)0x0) && ((*(byte *)((int)this + 0xf8) & 0x10) == 0)) &&
        (iVar1 = (*(ushort *)((int)this + 0xf6) & 0xf) * 3 + 6,
        *(int *)((int)this_00 + iVar1 * 4 + 4) != 0)) &&
       (uVar3 = **(uint * PTR32 *)((int)this_00 + iVar1 * 4), *(int * PTR32 *)(uVar3 + 8) == this)) {
      return uVar3;
    }
    bVar2 = F_00591de0(this_00,this,*(ushort *)((int)this + 0xf6) & 0xf,0);
    if (bVar2 == 0) {
      F_00587d10(this_00,this);
      F_00590670(this_00,this);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
    if ((char)uVar3 == '\0') break;
    this = (undefined *)F_0057f930(this_00,this);
    if (this == (int *)0x0) {
      return 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00594820 */
unsigned int F_00594820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594820u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)((*(int *)&gen_args[1]) + 0x3c);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x38);
  do {
    if (iVar1 == iVar2) {
      return 0;
    }
    iVar3 = *(int *)(iVar1 + -4);
    if (iVar3 != 0) {
      (*(int *)&gen_args[1]) = iVar3;
      if (((*(uint *)(iVar3 + 0x84) & 0x1000000) != 0) &&
         ((*(uint *)(iVar3 + 0x84) & 0x20000000) != 0)) {
        this_00 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)));
        puVar4 = (undefined4 *)this_00[1];
        if (&(*(int *)&gen_args[1]) < puVar4) {
          puVar5 = (undefined4 *)*this_00;
          if (&(*(int *)&gen_args[1]) < puVar5) goto LAB_005948ae;
          if (puVar4 == (undefined4 *)this_00[2]) {
            F_005d2af0(this_00,1);
          }
          if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
            *(undefined4 *)this_00[1] =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(int *)&gen_args[1]) - (int)((int)(uintptr_t)puVar5) >> 2) * 4)));
          }
        }
        else {
LAB_005948ae: ;
          if (puVar4 == (undefined4 *)this_00[2]) {
            F_005d2af0(this_00,1);
          }
          if ((int *)this_00[1] != (int *)0x0) {
            *(int *)this_00[1] = iVar3;
          }
        }
        this_00[1] = this_00[1] + 4;
      }
      if ((999 < *(ushort *)(iVar3 + 0x18)) && (*(int *)(iVar3 + 0x8c) != 0)) {
        F_00594820((*(undefined * PTR32 *)&gen_args[0]),*(int *)(iVar3 + 0x8c) + 4);
      }
    }
    iVar1 = iVar1 + -4;
  } while( true );
}

/* ref: FUN_00594910 */
unsigned int F_00594910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)this + 0xf9) & 0x80) == 0) {
    if ((*(int *)((int)this + 0x2c) != 0) &&
       ((uint)*(ushort *)((int)this + 0x3a) + *((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 4))) != 0)) {
      if (*(undefined * PTR32 *)((int)this + 0x140) != (undefined *)0x0) {
        F_005cd030(*(undefined * PTR32 *)((int)this + 0x140),1);
        *(undefined4 *)((int)this + 0x140) = 0;
      }
      uVar3 = 0;
      uVar1 = F_00404270();
      puVar2 = (undefined4 *)F_00406bd0(0x10,0,uVar1,uVar3);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *(undefined4 * PTR32 *)((int)this + 0x140) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        F_00594820(this,(int)this + 0x24);
        this_00 = *(int * PTR32 *)((int)this + 0x140);
        if ((*this_00 == this_00[1]) && (this_00 != (int *)0x0)) {
          F_005cd030(this_00,1);
          *(undefined4 *)((int)this + 0x140) = 0;
        }
        if ((char)param_1 != '\0') {
          *(undefined1 *)((int)this + 0x13e) = 0xff;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
        if ((uVar1 == 5) || (uVar1 == 4)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        if (*(char *)((int)this + 0x13e) == -1) {
          F_005732f0(this,(int)this + 0x24,uVar3);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00594a00 */
uint F_00594a00(unsigned int gen_a0)
{
  GEN_ENTER(0x594a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  undefined3 extraout_var_02 = 0;
  char * pcVar5;
  
  iVar2 = *(int *)((int)this + 0xcc);
  if (*(int *)((int)this + 0xd0) == iVar2) {
    if (iVar2 != 0) {
      uVar4 = 0;
      pcVar5 = (char *)(iVar2 + 0x144);
      while (*pcVar5 == -1) {
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0xc;
        if (4 < (int)uVar4) {
          return uVar4;
        }
      }
      in_EAX = *(undefined4 * PTR32 *)((int)this + 0xd8);
      if ((in_EAX != (undefined4 *)0x0) &&
         (*(ushort *)(iVar2 + 0x128) <= *(ushort *)(in_EAX + 0x4a))) {
        bVar3 = F_0058cb40(this,iVar2,in_EAX,1);
        in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_02,bVar3)));
      }
    }
  }
  else {
    *(int *)((int)this + 0xd0) = iVar2;
    if (((iVar2 != 0) &&
        ((((*(byte *)(iVar2 + 0xf8) & 0x10) != 0 ||
          (iVar1 = (*(ushort *)(iVar2 + 0xf6) & 0xf) * 3 + 6,
          in_EAX = (undefined4 *)((int)this + iVar1 * 4), *(int *)((int)this + iVar1 * 4 + 4) == 0))
         || (in_EAX = *(undefined4 * PTR32 *)*in_EAX, in_EAX[2] != iVar2)))) &&
       ((*(byte *)(iVar2 + 0xfb) & 0x10) == 0)) {
      bVar3 = F_00591de0(this,iVar2,*(ushort *)(iVar2 + 0xf6) & 0xf,0);
      in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 == 0) {
        bVar3 = F_00587d10(this,*(undefined4 *)((int)this + 0xcc));
        in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_00,bVar3)));
        if (bVar3 != 0) {
          bVar3 = F_00590670(this,*(undefined4 *)((int)this + 0xcc));
          return CONCAT31(extraout_var_01,bVar3);
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00594ae0 */
uint F_00594ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594ae0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint * this_00;
  int * piVar7;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  uVar1 = *(*(uint * PTR32 *)&gen_args[1]);
  if (uVar1 != (*(uint * PTR32 *)&gen_args[1])[1]) {
    F_00c46e20(uVar1,(*(uint * PTR32 *)&gen_args[1])[1],0);
    this_00[1] = uVar1;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  piVar7 = piVar2;
  for (piVar3 = (int *)*piVar2; piVar3 != piVar2; piVar3 = (int *)*piVar3) {
    iVar4 = piVar3[2];
    if ((*(char *)(iVar4 + 0x13c) == '\0') && ((*(uint *)(iVar4 + 0x108) & (*(uint *)&gen_args[2])) != 0)) {
      puVar5 = (undefined4 *)this_00[1];
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar4;
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar5) && (puVar6 = (undefined4 *)*this_00, puVar6 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar5 == (undefined4 *)this_00[2]) {
          F_005d2e00(this_00,1);
        }
        piVar7 = (int *)this_00[1];
        if (piVar7 != (int *)0x0) {
          *piVar7 = *((int *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar6) >> 2) * 4)));
        }
      }
      else {
        if (puVar5 == (undefined4 *)this_00[2]) {
          F_005d2e00(this_00,1);
        }
        piVar7 = (int *)this_00[1];
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar4;
        }
      }
      this_00[1] = this_00[1] + 4;
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00594bb0 */
unsigned int F_00594bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x594bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(byte *)(piVar4[2] + 0x13a) != (*(uint *)&gen_args[1])) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return 0;
        }
      }
      iVar2 = piVar4[2];
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0xf8) = *(byte *)(iVar2 + 0xf8) | 1;
        cVar3 = (char)(*(undefined4 *)&gen_args[2]);
        if (((char)(*(undefined4 *)&gen_args[2]) == '\0') && ((*(byte *)(iVar2 + 0xf9) & 2) != 0)) {
          cVar3 = '\x01';
        }
        *(byte *)(iVar2 + 0xf9) =
             *(byte *)(iVar2 + 0xf9) ^ (cVar3 * '\x02' ^ *(byte *)(iVar2 + 0xf9)) & 2;
        if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
          F_005d3840(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))),&(*(uint *)&gen_args[1]));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00594c40 */
unsigned int F_00594c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      while (*(byte *)(piVar2[2] + 0x13a) != (*(uint *)&gen_args[1])) {
        piVar2 = (int *)*piVar2;
        if (piVar2 == piVar1) {
          return 0;
        }
      }
      if (piVar2[2] != 0) {
        F_005d3840(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))),&(*(uint *)&gen_args[1]));
      }
    }
  }
  return 0;
}

/* ref: FUN_00594ca0 */
uint F_00594ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0xe8);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x90);
      while (iVar2 != 0) {
        if (iVar1 == *(int *)(param_1 + 0x90)) {
          *(undefined4 *)((int)this + 0xe8) = 0;
          break;
        }
        iVar1 = *(int *)(iVar1 + 8);
        iVar2 = iVar1;
      }
    }
    in_EAX = F_00580230(this,param_1,1);
    if (*(int *)((int)this + 0xcc) == param_1) {
      bVar3 = F_00596a60(this);
      in_EAX = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        F_0058ccd0(this,1);
        in_EAX = F_00594a00(this);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00594d10 */
byte F_00594d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 != (int *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x3e);
    if ((byte)param_2 != (bVar1 >> 3 & 1)) {
      *(byte *)(param_1 + 0x3e) = ((byte)param_2 * '\b' ^ bVar1) & 8 ^ bVar1;
      if ((byte)param_2 == 0) {
        F_0056ae10(param_1);
        ((code *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
        ((code *)*(gen_code32 *)(*param_1 + 0x7c))(param_1,1);
        if ((*(byte *)((int)param_1 + 0xf9) & 0x20) != 0) {
          F_00594ca0(this,param_1);
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00594d90 */
uint F_00594d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x594d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00573dd0(this);
    return uVar1;
  }
  uVar1 = 1;
  piVar3 = (int *)((int)this + 0x1c);
  puVar2 = (undefined4 *)((int)this + 0x3c);
  param_1 = 4;
  do {
    if ((int *)*piVar3 != (int *)0x0) {
      if (uVar1 == 2) {
        ((code *)*(gen_code32 *)(*(int *)*piVar3 + 8))();
        *piVar3 = 0;
      }
      else {
        *(undefined1 *)(puVar2 + 5) = 0;
        *puVar2 = 0;
        F_00592380(puVar2 + -3);
      }
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 10;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  return (uint)this;
}

/* ref: FUN_00594da8 */
uint F_00594da8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594da8u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 1;
  piVar4 = (int *)(in_ecx + 0x1c);
  puVar2 = (undefined4 *)(in_ecx + 0x3c);
  *(undefined4 *)(in_ebp + 8) = 4;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      if (uVar3 == 2) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      else {
        *(undefined1 *)(puVar2 + 5) = 0;
        *puVar2 = 0;
        F_00592380(puVar2 + -3);
      }
    }
    piVar4 = piVar4 + 1;
    puVar2 = puVar2 + 10;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    piVar1 = (int *)(in_ebp + 8);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  uVar3 = *(uint *)(in_ebp + -4);
  *(undefined4 *)(uVar3 + 0x18) = 0;
  *(undefined4 *)(uVar3 + 0xd0) = 0;
  return uVar3;
}

