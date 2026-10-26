#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c39e70 */
uint F_00c39e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39e70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 8) & 2) != 0)) {
    *(int *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39eb0 */
uint F_00c39eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + in_esi) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + in_esi) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  *param_2 = uVar2;
  return uVar1;
}

/* ref: FUN_00c39f10 */
uint F_00c39f10(unsigned int gen_a0)
{
  GEN_ENTER(0xc39f10u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (((*(int * PTR32 *)&gen_args[0])[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar1 != 0x1f) {
    uVar3 = piVar1[0xf] & 7;
    piVar1[0xe] = piVar1[0xe] << (sbyte)uVar3;
    uVar3 = piVar1[0xf] - uVar3;
    iVar4 = 0;
    *piVar1 = 0x1f;
    piVar1[0xf] = uVar3;
    if (7 < uVar3) {
      uVar5 = piVar1[0xe];
      do {
        uVar3 = uVar3 - 8;
        *((char *)GEN_TOP(((int)&(*(int * PTR32 *)&gen_args[0]) + iVar4))) = (char)piVar1[0xe];
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + 1;
        piVar1[0xe] = uVar5;
        piVar1[0xf] = uVar3;
      } while (7 < uVar3);
    }
    piVar1[0x1a] = 0;
    F_00c39eb0(&(*(int * PTR32 *)&gen_args[0]),piVar1 + 0x1a,iVar4);
  }
  uVar3 = F_00c39eb0(*piVar2,piVar1 + 0x1a,piVar2[1]);
  piVar2[2] = piVar2[2] + uVar3;
  piVar2[1] = piVar2[1] - uVar3;
  *piVar2 = *piVar2 + uVar3;
  iVar4 = piVar2[2];
  if (piVar1[0x1a] != 4) {
    return 0xfffffffd;
  }
  (*(int * PTR32 *)&gen_args[0]) = (int *)piVar2[5];
  F_00c399a0(piVar2);
  piVar2[2] = iVar4;
  piVar2[5] = (int)(*(int * PTR32 *)&gen_args[0]);
  *piVar1 = 0xb;
  return 0;
}

/* ref: FUN_00c3a000 */
uint F_00c3a000(unsigned int gen_a0)
{
  GEN_ENTER(0xc3a000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 0xd) && (piVar1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c3a040 */
uint F_00c3a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = param_2[7], iVar1 == 0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  uVar3 = (*(code *)param_2[8])(param_2[10],1,0x1bcc);
  if (uVar3 == 0) {
    return 0xfffffffc;
  }
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(iVar1 + 0x34) != 0) &&
     (param_2 = ((undefined4 *)GEN_TOP((*(code *)puVar5[8])(puVar5[10],1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1)))
     , param_2 == (undefined4 *)0x0)) {
    (*(code *)puVar5[9])(puVar5[10],uVar3);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00c46aa0(uVar3,iVar1,0x1bcc);
  uVar2 = *(uint *)(iVar1 + 0x4c);
  if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x1bbcU)) {
    *(uint *)(uVar3 + 0x4c) = uVar3 + 0x530 + ((int)((uVar2 - iVar1) + -0x530) >> 2) * 4;
    *(uint *)(uVar3 + 0x50) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x50) - iVar1) + -0x530 >> 2) * 4;
  }
  *(uint *)(uVar3 + 0x6c) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x6c) - iVar1) + -0x530 >> 2) * 4;
  if (param_2 != (undefined4 *)0x0) {
    F_00c46aa0(param_2,*(undefined4 *)(iVar1 + 0x34),
               1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f));
  }
  *(undefined4 * PTR32 *)(uVar3 + 0x34) = param_2;
  param_1[7] = uVar3;
  return 0;
}

/* ref: FUN_00c3a1a0 */
uint F_00c3a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a1a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1bc0))) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3a1d0 */
uint F_00c3a1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3a1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xffff0000;
  }
  if (*piVar1 == 0xf) {
    return piVar1[0x6f1] * 0x10000 + piVar1[0x10];
  }
  if (*piVar1 == 0x18) {
    return piVar1[0x6f1] * 0x10000 + (piVar1[0x6f2] - piVar1[0x10]);
  }
  return piVar1[0x6f1] << 0x10;
}

/* ref: FUN_00c3a250 */
uint F_00c3a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a250u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1114bd8) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1114bd8) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c3a510 */
uint F_00c3a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a510u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx + -4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c3a830 */
uint F_00c3a830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c3a850 */
uint F_00c3a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c3a830(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c3a880 */
uint F_00c3a880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c3a850(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c3a850(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c3a850(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c3a830(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c3a850(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c3a830(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this ^ param_1;
}

/* ref: FUN_00c3a970 */
uint F_00c3a970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3a880(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3a990 */
uint F_00c3a990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3a880(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3a9b0 */
uint F_00c3a9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a9b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c3ac20 */
uint F_00c3ac20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ac20u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c3acc0 */
uint F_00c3acc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3acc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3ac20(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c3ace0 */
uint F_00c3ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3ac20(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c3ad10 */
uint F_00c3ad10(unsigned int gen_a0)
{
  GEN_ENTER(0xc3ad10u, gen_a0, 0u, 0u, 0u);
  int in_edx = (int)gen_a0;
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(in_edx + 0x94);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0x988);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0xa7c);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(in_edx + 0x494) = 1;
  *(undefined4 *)(in_edx + 0x16ac) = 0;
  *(undefined4 *)(in_edx + 0x16a8) = 0;
  *(undefined4 *)(in_edx + 0x16b0) = 0;
  *(undefined4 *)(in_edx + 0x16a0) = 0;
  return 0;
}

/* ref: FUN_00c3ad90 */
ulonglong F_00c3ad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ad90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(in_eax + 0x1450);
  iVar3 = *(int *)(in_eax + 0xb5c + param_3 * 4);
  iVar6 = param_3 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar7 < iVar6) {
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
    return CONCAT44(iVar7,in_eax);
  }
  while( true ) {
    iVar7 = iVar6;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(in_eax + 0xb60 + iVar6 * 4);
      uVar1 = *(ushort *)(in_edi + iVar5 * 4);
      uVar2 = *((ushort *)GEN_TOP((in_edi + *(int *)(in_eax + 0xb5c + iVar6 * 4) * 4)));
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + in_eax) <=
           *((byte *)GEN_TOP((*(int *)(in_eax + 0xb5c + iVar6 * 4) + 0x1458 + in_eax))))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(in_eax + 0xb5c + iVar7 * 4);
    uVar1 = *(ushort *)(in_edi + iVar3 * 4);
    uVar2 = *(ushort *)(in_edi + iVar5 * 4);
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(iVar3 + 0x1458 + in_eax) <= *(byte *)(iVar5 + 0x1458 + in_eax))))) break;
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar5;
    iVar4 = *(int *)(in_eax + 0x1450);
    iVar6 = iVar7 * 2;
    bVar8 = SBORROW4(iVar6,iVar4);
    iVar5 = iVar6 - iVar4;
    param_3 = iVar7;
    if (iVar4 < iVar6) {
      *(int *)(in_eax + 0xb5c + iVar7 * 4) = iVar3;
      return CONCAT44(iVar4,in_eax);
    }
  }
  *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
  return CONCAT44(iVar3,in_eax);
}

/* ref: FUN_00c3ae70 */
unsigned int F_00c3ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ae70u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short * psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort * puVar15;
  int local_18;
  int local_14;
  int * local_10;
  int local_c;
  
  iVar2 = in_ecx[1];
  iVar3 = *in_ecx;
  piVar4 = (int *)in_ecx[2];
  iVar9 = *piVar4;
  iVar5 = piVar4[1];
  iVar6 = piVar4[2];
  uVar11 = piVar4[4];
  *(undefined4 *)(in_eax + 0xb3c) = 0;
  *(undefined4 *)(in_eax + 0xb40) = 0;
  *(undefined4 *)(in_eax + 0xb44) = 0;
  *(undefined4 *)(in_eax + 0xb48) = 0;
  *(undefined4 *)(in_eax + 0xb4c) = 0;
  *(undefined4 *)(in_eax + 0xb50) = 0;
  *(undefined4 *)(in_eax + 0xb54) = 0;
  *(undefined4 *)(in_eax + 0xb58) = 0;
  *((undefined2 *)GEN_TOP((iVar3 + 2 + *((int *)GEN_TOP((in_eax + 0xb5c + *(int *)(in_eax + 0x1454) * 4))) * 4))) = 0;
  iVar12 = 0;
  iVar7 = *(int *)(in_eax + 0x1454) + 1;
  local_c = 0;
  if (iVar7 < 0x23d) {
    local_10 = (int *)(in_eax + 0xb5c + iVar7 * 4);
    local_18 = 0x23d - iVar7;
    local_14 = iVar7 + local_18;
    do {
      iVar7 = *local_10;
      uVar8 = *((ushort *)GEN_TOP((iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar7 * 4) * 4))) + 1;
      if ((int)uVar11 < (int)uVar8) {
        iVar12 = iVar12 + 1;
        uVar8 = uVar11;
        local_c = iVar12;
      }
      *(short *)(iVar3 + 2 + iVar7 * 4) = (short)uVar8;
      if (iVar7 <= iVar2) {
        psVar10 = (short *)(in_eax + 0xb3c + uVar8 * 2);
        *psVar10 = *psVar10 + 1;
        iVar13 = 0;
        if (iVar6 <= iVar7) {
          iVar13 = *((int *)GEN_TOP((iVar5 + (iVar7 - iVar6) * 4)));
        }
        uVar14 = (uint)*(ushort *)(iVar3 + iVar7 * 4);
        *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar8 + iVar13) * uVar14;
        iVar12 = local_c;
        if (iVar9 != 0) {
          *(int *)(in_eax + 0x16ac) =
               *(int *)(in_eax + 0x16ac) +
               ((uint)*(ushort *)(iVar9 + 2 + iVar7 * 4) + iVar13) * uVar14;
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    if (iVar12 != 0) {
      puVar15 = (ushort *)(in_eax + 0xb3c + uVar11 * 2);
      do {
        iVar9 = uVar11 - 1;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        sVar1 = *(short *)(in_eax + 0xb3c + iVar9 * 2);
        while (sVar1 == 0) {
          psVar10 = psVar10 + -1;
          iVar9 = iVar9 + -1;
          sVar1 = *psVar10;
        }
        psVar10 = (short *)(in_eax + 0xb3e + iVar9 * 2);
        *psVar10 = *psVar10 + 2;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        *psVar10 = *psVar10 + -1;
        *puVar15 = *puVar15 - 1;
        iVar12 = iVar12 + -2;
      } while (0 < iVar12);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar8 = (uint)*puVar15;
        if (uVar8 != 0) {
          iVar9 = in_eax + 0xb5c + local_14 * 4;
          local_10 = (int *)uVar8;
          do {
            iVar5 = *(int *)(iVar9 + -4);
            local_14 = local_14 + -1;
            iVar9 = iVar9 + -4;
            if (iVar5 <= iVar2) {
              uVar8 = (uint)*(ushort *)(iVar3 + 2 + iVar5 * 4);
              if (uVar8 != uVar11) {
                *(int *)(in_eax + 0x16a8) =
                     *(int *)(in_eax + 0x16a8) +
                     (uVar11 - uVar8) * (uint)*(ushort *)(iVar3 + iVar5 * 4);
                *(short *)(iVar3 + 2 + iVar5 * 4) = (short)uVar11;
              }
              uVar8 = (int)local_10 - 1;
              local_10 = (int *)uVar8;
            }
          } while (uVar8 != 0);
        }
        puVar15 = puVar15 + -1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c3b070 */
unsigned int F_00c3b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b070u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  short * psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  uint local_8;
  
  uVar2 = *(ushort *)(in_eax + 2);
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar3 = 7;
  iVar7 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)(in_eax + 6 + (int)((int)(uintptr_t)param_3) * 4) = 0xffff;
  if (-1 < (int)param_3) {
    local_c = (int)param_3 + 1;
    uVar5 = (uint)uVar2;
    param_3 = (ushort *)(in_eax + 6);
    do {
      uVar6 = (uint)*param_3;
      iVar4 = iVar4 + 1;
      if ((iVar3 <= iVar4) || (uVar5 != uVar6)) {
        if (iVar4 < iVar7) {
          psVar1 = (short *)(param_2 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar4;
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_2 + 0xac0) = *(short *)(param_2 + 0xac0) + 1;
          }
          else {
            *(short *)(param_2 + 0xac4) = *(short *)(param_2 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_8) {
            psVar1 = (short *)(param_2 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_2 + 0xabc) = *(short *)(param_2 + 0xabc) + 1;
        }
        iVar4 = 0;
        local_8 = uVar5;
        if (uVar6 == 0) {
          iVar3 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar3 = 6;
          iVar7 = 3;
        }
        else {
          iVar3 = 7;
          iVar7 = 4;
        }
      }
      param_3 = param_3 + 2;
      local_c = local_c + -1;
      uVar5 = uVar6;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: FUN_00c3b150 */
unsigned int F_00c3b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b150u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  ushort * local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0xffffffff;
  iVar2 = 7;
  local_8 = 4;
  if (*(ushort *)(param_3 + 2) == 0) {
    iVar2 = 0x8a;
    local_8 = 3;
  }
  if (-1 < in_ecx) {
    local_10 = (ushort *)(param_3 + 6);
    local_18 = in_ecx + 1;
    iVar4 = 0;
    local_c = (uint)*(ushort *)(param_3 + 2);
    do {
      uVar6 = (uint)*local_10;
      param_3 = iVar4 + 1;
      if ((iVar2 <= param_3) || (local_c != uVar6)) {
        if (param_3 < local_8) {
          do {
            uVar7 = (uint)*(ushort *)(in_eax + 0xa7e + local_c * 4);
            iVar2 = *(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_c * 4);
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              iVar2 = *(int *)(in_eax + 0x16bc) + -0x10;
              *(ushort *)(in_eax + 0x16b8) =
                   uVar3 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_c * 4) << ((byte)iVar2 & 0x1f);
            }
            param_3 = param_3 + -1;
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar7;
          } while (param_3 != 0);
        }
        else if (local_c == 0) {
          if (param_3 < 0xb) {
            uVar7 = (uint)*(ushort *)(in_eax + 0xac2);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac0);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac0) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 + -2);
            if (iVar2 < 0xe) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 3;
LAB_00c3b679: ;
              *(int *)(in_eax + 0x16bc) = iVar2;
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(int *)(in_eax + 0x16bc) = iVar2 + -0xd;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            uVar7 = (uint)*(ushort *)(in_eax + 0xac6);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 + -10);
            if (iVar2 < 10) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 7;
              goto LAB_00c3b679;
            }
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(int *)(in_eax + 0x16bc) = iVar2 + -9;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          iVar5 = param_3;
          if (local_c != local_14) {
            uVar7 = (uint)*(ushort *)(in_eax + 0xa7e + local_c * 4);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            iVar5 = iVar4;
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_c * 4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_c * 4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
          }
          uVar7 = (uint)*(ushort *)(in_eax + 0xabe);
          iVar2 = *(int *)(in_eax + 0x16bc);
          if ((int)(0x10 - uVar7) < iVar2) {
            uVar3 = *(ushort *)(in_eax + 0xabc);
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(uint *)(in_eax + 0x16bc) = iVar2 + -0x10 + uVar7;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xabc) << ((byte)iVar2 & 0x1f);
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar7;
          }
          iVar2 = *(int *)(in_eax + 0x16bc);
          uVar3 = (ushort)(iVar5 + -3);
          if (iVar2 < 0xf) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            iVar2 = iVar2 + 2;
            goto LAB_00c3b679;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar2 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(int *)(in_eax + 0x16bc) = iVar2 + -0xe;
          *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
        }
        param_3 = 0;
        local_14 = local_c;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          local_8 = 3;
        }
        else if (local_c == uVar6) {
          iVar2 = 6;
          local_8 = 3;
        }
        else {
          iVar2 = 7;
          local_8 = 4;
        }
      }
      local_10 = local_10 + 2;
      local_18 = local_18 + -1;
      iVar4 = param_3;
      local_c = uVar6;
    } while (local_18 != 0);
  }
  return 0;
}

/* ref: FUN_00c3b6d0 */
unsigned int F_00c3b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3b6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_2 - 0x101;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_3 - 1;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_4 - 4;
  if (iVar3 < 0xd) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 + -0xc;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar1 = *(int *)(in_esi + 0x16bc);
      if (iVar1 < 0xe) {
        *(ushort *)(in_esi + 0x16b8) =
             *(ushort *)(in_esi + 0x16b8) |
             *(short *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[iVar3] * 4) <<
             ((byte)iVar1 & 0x1f);
        *(int *)(in_esi + 0x16bc) = iVar1 + 3;
      }
      else {
        uVar2 = *(ushort *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[iVar3] * 4);
        *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar1 & 0x1f);
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b8);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b9);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_esi + 0x16bc) & 0x1f);
        *(int *)(in_esi + 0x16bc) = *(int *)(in_esi + 0x16bc) + -0xd;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  F_00c3b150(in_esi,param_2 + -1,in_esi + 0x94);
  F_00c3b150(in_esi,param_3 + -1,in_esi + 0x988);
  return 0;
}

/* ref: FUN_00c3b920 */
uint F_00c3b920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short * psVar1;
  byte bVar2;
  
  *((short *)GEN_TOP((*(int *)(param_1 + 0x16a4) + *(int *)(param_1 + 0x16a0) * 2))) = (short)param_2;
  *((char *)GEN_TOP((*(int *)(param_1 + 0x1698) + *(int *)(param_1 + 0x16a0)))) = (char)param_3;
  *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + 1;
  if (param_2 == 0) {
    psVar1 = (short *)(param_1 + 0x94 + param_3 * 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    *(int *)(param_1 + 0x16b0) = *(int *)(param_1 + 0x16b0) + 1;
    psVar1 = (short *)(param_1 + 0x498 + (uint)(byte)(&REFG(undefined, 0x1117428))[param_3] * 4);
    *psVar1 = *psVar1 + 1;
    if (param_2 - 1U < 0x100) {
      bVar2 = (&REFG(undefined, 0x1117227))[param_2];
    }
    else {
      bVar2 = (&REFG(undefined, 0x1117328))[param_2 - 1U >> 7];
    }
    psVar1 = (short *)(param_1 + 0x988 + (uint)bVar2 * 4);
    *psVar1 = *psVar1 + 1;
  }
  return (uint)(*(int *)(param_1 + 0x16a0) == *(int *)(param_1 + 0x169c) + -1);
}

/* ref: FUN_00c3b9d0 */
unsigned int F_00c3b9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 0;
  if (*(int *)(in_eax + 0x16a0) != 0) {
    do {
      uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(in_eax + 0x16a4) + uVar6 * 2)));
      bVar3 = *((byte *)GEN_TOP((uVar6 + *(int *)(in_eax + 0x1698))));
      uVar8 = (uint)bVar3;
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(in_eax + 0x16bc);
      bVar2 = (byte)iVar5;
      if (uVar4 == 0) {
        uVar4 = (uint)*(ushort *)(param_2 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar4) < iVar5) {
          uVar7 = *(ushort *)(param_2 + uVar8 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar4;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + uVar8 * 4) << (bVar2 & 0x1f);
          iVar5 = iVar5 + uVar4;
LAB_00c3bd0f: ;
          *(int *)(in_eax + 0x16bc) = iVar5;
        }
      }
      else {
        uVar9 = (uint)(byte)(&REFG(undefined, 0x1117428))[uVar8];
        uVar8 = (uint)*(ushort *)(param_2 + 0x406 + uVar9 * 4);
        if ((int)(0x10 - uVar8) < iVar5) {
          uVar7 = *(ushort *)(param_2 + 0x404 + uVar9 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar8;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_2 + 0x404 + uVar9 * 4) << (bVar2 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar8;
        }
        iVar5 = *(int *)(&REFG(undefined, 0x1116bd8) + uVar9 * 4);
        if (iVar5 != 0) {
          uVar7 = (ushort)bVar3 - (short)*(undefined4 *)(&REFG(undefined, 0x1117528) + uVar9 * 4);
          iVar1 = *(int *)(in_eax + 0x16bc);
          if (0x10 - iVar5 < iVar1) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar1 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            iVar1 = *(int *)(in_eax + 0x16bc) + -0x10;
            *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar1 & 0x1f);
          }
          *(int *)(in_eax + 0x16bc) = iVar1 + iVar5;
        }
        uVar8 = uVar4 - 1;
        if (uVar8 < 0x100) {
          bVar3 = (&REFG(undefined, 0x1117227))[uVar4];
        }
        else {
          bVar3 = (&REFG(undefined, 0x1117328))[uVar8 >> 7];
        }
        uVar4 = (uint)bVar3;
        uVar9 = (uint)*(ushort *)(param_3 + 2 + uVar4 * 4);
        iVar5 = *(int *)(in_eax + 0x16bc);
        if ((int)(0x10 - uVar9) < iVar5) {
          uVar7 = *(ushort *)(param_3 + uVar4 * 4);
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar9;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_3 + uVar4 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar9;
        }
        iVar1 = *(int *)(&REFG(undefined, 0x1116c60) + uVar4 * 4);
        if (iVar1 != 0) {
          uVar7 = (short)uVar8 - (short)*(undefined4 *)(&REFG(undefined, 0x11175a8) + uVar4 * 4);
          iVar5 = *(int *)(in_eax + 0x16bc);
          if (iVar5 <= 0x10 - iVar1) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
            iVar5 = iVar5 + iVar1;
            goto LAB_00c3bd0f;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
          *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + -0x10 + iVar1;
        }
      }
    } while (uVar6 < *(uint *)(in_eax + 0x16a0));
  }
  uVar6 = (uint)*(ushort *)(param_2 + 0x402);
  iVar5 = *(int *)(in_eax + 0x16bc);
  if (iVar5 <= (int)(0x10 - uVar6)) {
    *(ushort *)(in_eax + 0x16b8) =
         *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(in_eax + 0x16bc) = iVar5 + uVar6;
    *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
    return 0;
  }
  uVar7 = *(ushort *)(param_2 + 0x400);
  *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = *(undefined1 *)(in_eax + 0x16b8)
  ;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = *(undefined1 *)(in_eax + 0x16b9)
  ;
  iVar5 = *(int *)(in_eax + 0x16bc);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *(uint *)(in_eax + 0x16bc) = iVar5 + -0x10 + uVar6;
  *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
  *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
  return 0;
}

/* ref: FUN_00c3bde0 */
uint F_00c3bde0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3bde0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = 0xf3ffc07f;
  iVar1 = 0;
  psVar2 = (short *)(in_esi + 0x94);
  while (((uVar3 & 1) == 0 || (*psVar2 == 0))) {
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 2;
    uVar3 = uVar3 >> 1;
    if (0x1f < iVar1) {
      if (((*(short *)(in_esi + 0xb8) == 0) && (*(short *)(in_esi + 0xbc) == 0)) &&
         (*(short *)(in_esi + 200) == 0)) {
        iVar1 = 0x20;
        psVar2 = (short *)(in_esi + 0x114);
        while (*psVar2 == 0) {
          iVar1 = iVar1 + 1;
          psVar2 = psVar2 + 2;
          if (0xff < iVar1) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c3be50 */
ushort F_00c3be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3be50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_2 = param_2 + -1;
    param_1 = param_1 >> 1;
    uVar1 = (uVar2 | uVar3) * 2;
  } while (0 < param_2);
  return (ushort)uVar2 | (ushort)uVar3;
}

/* ref: FUN_00c3be70 */
uint F_00c3be70(unsigned int gen_a0)
{
  GEN_ENTER(0xc3be70u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  if (*(int *)(in_eax + 0x16bc) == 0x10) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
         *(undefined1 *)(in_eax + 0x16b9);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(undefined2 *)(in_eax + 0x16b8) = 0;
    *(undefined4 *)(in_eax + 0x16bc) = 0;
    return in_eax;
  }
  if (7 < *(int *)(in_eax + 0x16bc)) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + -8;
    *(ushort *)(in_eax + 0x16b8) = (ushort)*(byte *)(in_eax + 0x16b9);
  }
  return in_eax;
}

/* ref: FUN_00c3bef0 */
uint F_00c3bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3bef0u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(in_eax + 0x16bc) < 9) {
    if (*(int *)(in_eax + 0x16bc) < 1) goto LAB_00c3bf34;
    iVar1 = *(int *)(in_eax + 8);
    iVar2 = *(int *)(in_eax + 0x14);
    uVar3 = *(undefined1 *)(in_eax + 0x16b8);
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    iVar1 = *(int *)(in_eax + 0x14);
    iVar2 = *(int *)(in_eax + 8);
    uVar3 = *(undefined1 *)(in_eax + 0x16b9);
  }
  *(undefined1 *)(iVar1 + iVar2) = uVar3;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
LAB_00c3bf34: ;
  *(undefined2 *)(in_eax + 0x16b8) = 0;
  *(undefined4 *)(in_eax + 0x16bc) = 0;
  return in_eax;
}

/* ref: FUN_00c3bf50 */
uint F_00c3bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3bf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = F_00c3bef0(in_eax);
  *(undefined4 *)(uVar1 + 0x16b4) = 8;
  iVar3 = param_3;
  if (param_4 != 0) {
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = (byte)param_3;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    bVar2 = (byte)((uint)param_3 >> 8);
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~(byte)param_3;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = *in_ecx;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    in_ecx = in_ecx + 1;
  }
  return uVar1;
}

/* ref: FUN_00c3c000 */
uint F_00c3c000(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x1117690))[-param_1];
}

/* ref: FUN_00c3c020 */
uint F_00c3c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c51787(param_2 * param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00c3c040 */
uint F_00c3c040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint extraout_EAX = 0;
  
  F_00c4c68f(param_2);
  return extraout_EAX;
}

/* ref: FUN_00c3c060 */
uint F_00c3c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) && (param_2 != 0)) &&
     ((iVar3 = *(int *)(iVar1 + 0x18), iVar3 != 2 && ((iVar3 != 1 || (*(int *)(iVar1 + 4) == 0x2a)))
      ))) {
    if (iVar3 != 0) {
      uVar2 = F_00c3a9b0(*(undefined4 *)(param_1 + 0x30),param_2,param_3);
      *(uint *)(param_1 + 0x30) = uVar2;
    }
    if (2 < param_3) {
      uVar2 = *(uint *)(iVar1 + 0x2c);
      iVar3 = param_2;
      uVar5 = param_3;
      if (uVar2 < param_3) {
        iVar3 = param_2 + (param_3 - uVar2);
        uVar5 = uVar2;
      }
      F_00c46aa0(*(undefined4 *)(iVar1 + 0x38),iVar3,uVar5);
      *(uint *)(iVar1 + 0x6c) = uVar5;
      *(uint *)(iVar1 + 0x5c) = uVar5;
      uVar2 = (uint)**(byte * PTR32 *)(iVar1 + 0x38);
      *(uint *)(iVar1 + 0x48) = uVar2;
      uVar4 = 0;
      *(uint *)(iVar1 + 0x48) =
           (uVar2 << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f) ^
           (uint)(*(byte * PTR32 *)(iVar1 + 0x38))[1]) & *(uint *)(iVar1 + 0x54);
      do {
        uVar2 = ((uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 0x38) + 2 + uVar4))) ^
                *(int *)(iVar1 + 0x48) << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f)) &
                *(uint *)(iVar1 + 0x54);
        *(uint *)(iVar1 + 0x48) = uVar2;
        *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x40) + (*(uint *)(iVar1 + 0x34) & uVar4) * 2))) =
             *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x44) + uVar2 * 2)));
        *((short *)GEN_TOP((*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x48) * 2))) = (short)uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar5 - 3);
    }
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c160 */
uint F_00c3c160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) == 2)) {
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c190 */
uint F_00c3c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16bc))) = param_2;
    *((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16b8))) =
         (1 << ((byte)param_2 & 0x1f)) - 1U & (ushort)param_3;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c1e0 */
uint F_00c3c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc3c1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0x80) = param_3;
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x7c) = param_5;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c230 */
uint F_00c3c230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c230u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  
  iVar1 = (param_2 + 7 >> 3) + 5 + (param_2 + 0x3f >> 6) + param_2;
  if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 0x1c), iVar3 == 0)) {
    return iVar1 + 6;
  }
  iVar5 = *(int *)(iVar3 + 0x18);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else if (iVar5 == 1) {
    iVar5 = (-(uint)(*(int *)(iVar3 + 0x6c) != 0) & 4) + 6;
  }
  else if (iVar5 == 2) {
    iVar4 = *(int *)(iVar3 + 0x1c);
    iVar5 = 0x12;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar5 = *(int *)(iVar4 + 0x14) + 0x14;
      }
      pcVar6 = *(char * PTR32 *)(iVar4 + 0x1c);
      if (pcVar6 != (char *)0x0) {
        do {
          cVar2 = *pcVar6;
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      pcVar6 = *(char * PTR32 *)(iVar4 + 0x24);
      if (pcVar6 != (char *)0x0) {
        do {
          cVar2 = *pcVar6;
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        iVar5 = iVar5 + 2;
      }
    }
  }
  else {
    iVar5 = 6;
  }
  if ((*(int *)(iVar3 + 0x30) == 0xf) && (*(int *)(iVar3 + 0x50) == 0xf)) {
    return (param_2 >> 0xc) + (param_2 >> 0xe) + iVar5 + (param_2 >> 0x19) + 7 + param_2;
  }
  return iVar5 + iVar1;
}

/* ref: FUN_00c3c310 */
uint F_00c3c310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c310u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  *((char *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = (char)((uint)in_ecx >> 8);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((char *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = (char)in_ecx;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  return in_eax;
}

/* ref: FUN_00c3c340 */
unsigned int F_00c3c340(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c340u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x14)));
  if (*(uint *)(in_eax + 0x10) < uVar3) {
    uVar3 = *(uint *)(in_eax + 0x10);
  }
  if (uVar3 != 0) {
    F_00c46aa0(*(undefined4 *)(in_eax + 0xc),*((undefined4 *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x10))),uVar3);
    *(int *)(in_eax + 0xc) = *(int *)(in_eax + 0xc) + uVar3;
    piVar1 = ((int *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x10)));
    *piVar1 = *piVar1 + uVar3;
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + uVar3;
    *(int *)(in_eax + 0x10) = *(int *)(in_eax + 0x10) - uVar3;
    piVar1 = ((int *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x14)));
    *piVar1 = *piVar1 - uVar3;
    iVar2 = *(int *)(in_eax + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00c3c390 */
uint F_00c3c390(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(iVar1 + 4);
  if ((((iVar2 != 0x2a) && (iVar2 != 0x45)) && (iVar2 != 0x49)) &&
     (((iVar2 != 0x5b && (iVar2 != 0x67)) && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x44)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x40)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x38)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}

/* ref: FUN_00c3c470 */
uint F_00c3c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
     (iVar1 = param_2[7], iVar1 == 0)) {
    return 0xfffffffe;
  }
  puVar3 = param_2;
  puVar6 = param_1;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(code *)param_1[8])(param_1[10],1,0x16c4)));
  if (puVar3 != (undefined4 *)0x0) {
    uVar16 = 0x16c4;
    param_1[7] = puVar3;
    puVar6 = puVar3;
    iVar5 = iVar1;
    F_00c46aa0(puVar3,iVar1,0x16c4);
    uVar14 = puVar3[0xb];
    *puVar3 = param_1;
    uVar13 = param_1[10];
    uVar15 = 2;
    uVar4 = (*(code *)param_1[8])(uVar13,uVar14,2);
    uVar11 = puVar3[0xb];
    puVar3[0xe] = uVar4;
    uVar10 = param_1[10];
    uVar12 = 2;
    uVar4 = (*(code *)param_1[8])(uVar10,uVar11,2);
    uVar8 = puVar3[0x13];
    puVar3[0x10] = uVar4;
    uVar7 = param_1[10];
    uVar9 = 2;
    uVar4 = (*(code *)param_1[8])(uVar7,uVar8,2);
    puVar3[0x11] = uVar4;
    uVar4 = (*(code *)param_1[8])
                      (param_1[10],puVar3[0x5a7],4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,puVar6,iVar5,uVar16);
    puVar3[2] = uVar4;
    if (((puVar3[0xe] != 0) && (puVar3[0x10] != 0)) && ((puVar3[0x11] != 0 && (uVar4 != 0)))) {
      F_00c46aa0(puVar3[0xe],*(undefined4 *)(iVar1 + 0x38),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x10],*(undefined4 *)(iVar1 + 0x40),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x11],*(undefined4 *)(iVar1 + 0x44),puVar3[0x13] * 2);
      F_00c46aa0(puVar3[2],*(undefined4 *)(iVar1 + 8),puVar3[3]);
      uVar2 = puVar3[0x5a7];
      puVar3[4] = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 8)) + puVar3[2];
      puVar3[0x5a9] = uVar4 + (uVar2 & 0xfffffffe);
      puVar3[0x5a6] = puVar3[2] + uVar2 * 2 + uVar2;
      puVar3[0x2c9] = puVar3 + 0x262;
      puVar3[0x2c6] = puVar3 + 0x25;
      puVar3[0x2cc] = puVar3 + 0x29f;
      return 0;
    }
    F_00c3c390(param_1);
  }
  return 0xfffffffc;
}

/* ref: FUN_00c3c610 */
unsigned int F_00c3c610(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c610u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  ushort uVar1;
  int iVar2;
  
  *(int *)(in_esi + 0x3c) = *(int *)(in_esi + 0x2c) * 2;
  *((undefined2 *)GEN_TOP((*(int *)(in_esi + 0x44) + -2 + *(int *)(in_esi + 0x4c) * 2))) = 0;
  F_00c48350(*(undefined * PTR32 *)(in_esi + 0x44),0,*(int *)(in_esi + 0x4c) * 2 - 2);
  iVar2 = *(int *)(in_esi + 0x84) * 0xc;
  *(uint *)(in_esi + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x11176ba) + *(int *)(in_esi + 0x84) * 0xc);
  *(uint *)(in_esi + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x11176b8) + iVar2);
  *(uint *)(in_esi + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x11176bc) + iVar2);
  uVar1 = *(ushort *)(&REFG(undefined, 0x11176be) + iVar2);
  *(undefined4 *)(in_esi + 0x6c) = 0;
  *(undefined4 *)(in_esi + 0x5c) = 0;
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x68) = 0;
  *(undefined4 *)(in_esi + 0x48) = 0;
  *(uint *)(in_esi + 0x7c) = (uint)uVar1;
  *(undefined4 *)(in_esi + 0x78) = 2;
  *(undefined4 *)(in_esi + 0x60) = 2;
  return 0;
}

/* ref: FUN_00c3c6a0 */
uint F_00c3c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c6a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_6;
  char local_5;
  
  uVar2 = *(uint *)((*(int *)&gen_args[0]) + 0x6c);
  local_c = *(uint *)((*(int *)&gen_args[0]) + 0x7c);
  pcVar4 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + uVar2)));
  pcVar3 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x78);
  if (*(int *)((*(int *)&gen_args[0]) + 0x2c) - 0x106U < uVar2) {
    local_14 = (uVar2 - *(int *)((*(int *)&gen_args[0]) + 0x2c)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = pcVar4[(int)(pcVar3 + -1)];
  local_6 = pcVar4[(int)pcVar3];
  pcVar1 = pcVar4 + 0x102;
  if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x8c) <= pcVar3) {
    local_c = local_c >> 2;
  }
  local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x90);
  if (*(uint *)((*(int *)&gen_args[0]) + 0x74) < *(uint *)((*(int *)&gen_args[0]) + 0x90)) {
    local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x74);
  }
  do {
    pcVar7 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + (*(uint *)&gen_args[1]))));
    if ((((pcVar7[(int)pcVar3] == local_6) && (pcVar7[(int)(pcVar3 + -1)] == local_5)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar3 < (int)pcVar7) {
        *(uint *)((*(int *)&gen_args[0]) + 0x70) = (*(uint *)&gen_args[1]);
        if ((int)local_10 <= (int)pcVar7) {
LAB_00c3c7ea: ;
          if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74) < pcVar7) {
            pcVar7 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74);
          }
          return (uint)pcVar7;
        }
        local_5 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_6 = pcVar4[(int)pcVar7];
        pcVar3 = pcVar7;
      }
    }
    pcVar7 = pcVar3;
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x40) + (*(uint *)((*(int *)&gen_args[0]) + 0x34) & (*(uint *)&gen_args[1])) * 2)));
    if (((*(uint *)&gen_args[1]) <= local_14) || (local_c = local_c - 1, pcVar3 = pcVar7, local_c == 0))
    goto LAB_00c3c7ea;
  } while( true );
}

/* ref: FUN_00c3c800 */
uint F_00c3c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c385b0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3c830 */
uint F_00c3c830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c830u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  uint * in_eax;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte * pbVar10;
  byte * pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (in_eax = (uint *)param_1[7], in_eax == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return 0xfffffffe;
  }
  if (*in_eax == 0xb) {
    *in_eax = 0xc;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
  pbVar10 = (byte *)*param_1;
  (*(uint *)(gen_frame + 0xc)) = param_1[4];
  uVar6 = param_1[1];
  uVar14 = in_eax[0xe];
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  uVar4 = *in_eax;
  uVar16 = in_eax[0xf];
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    pbVar11 = pbVar10;
    uVar13 = (*(uint *)(gen_frame + 0x20));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (in_eax[2] == 0) {
        *in_eax = 0xc;
      }
      else {
        for (; (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        if (((in_eax[2] & 2) == 0) || (uVar14 != 0x8b1f)) {
          in_eax[4] = 0;
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x30) = 0xffffffff;
          }
          if (((in_eax[2] & 1) == 0) || (((uVar14 & 0xff) * 0x100 + (uVar14 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else {
            if (((byte)uVar14 & 0xf) == 8) {
              uVar16 = uVar16 - 4;
              uVar4 = (uVar14 >> 4 & 0xf) + 8;
              if (in_eax[9] == 0) {
                in_eax[9] = uVar4;
              }
              else if (in_eax[9] < uVar4) {
                param_1[6] = (int)"invalid window size";
                uVar14 = uVar14 >> 4;
                goto LAB_00c3db41;
              }
              in_eax[5] = 1 << (sbyte)uVar4;
              uVar4 = F_00c38d10(0,0,0);
              in_eax[6] = uVar4;
              param_1[0xc] = uVar4;
              *in_eax = ~(uVar14 >> 0xc) & 2 | 9;
              uVar14 = 0;
              uVar16 = 0;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              break;
            }
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00c3db41;
        }
        uVar4 = F_00c3c800(0,0,0);
        in_eax[6] = uVar4;
        (*(undefined2 *)(gen_frame + 0x18)) = 0x8b1f;
        uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
        uVar14 = 0;
        in_eax[6] = uVar4;
        uVar16 = 0;
        *in_eax = 1;
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
      }
      break;
    case 1: ;
      for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[4] = uVar14;
      if ((char)uVar14 == '\b') {
        if ((uVar14 & 0xe000) == 0) {
          if ((uint *)in_eax[8] != (uint *)0x0) {
            *(uint *)in_eax[8] = uVar14 >> 8 & 1;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c3c800(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 2;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
joined_r0x00c3ca97: ;
          } while (uVar16 < 0x20);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 4) = uVar14;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            (*(undefined1 *)(gen_frame + 0x1a)) = (char)(uVar14 >> 0x10);
            (*(undefined1 *)(gen_frame + 0x1b)) = (char)(uVar14 >> 0x18);
            uVar4 = F_00c3c800(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),4);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 3;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar16;
            pbVar10 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar14 = uVar14 + ((uint)*pbVar11 << (bVar7 & 0x1f));
joined_r0x00c3cb12: ;
            pbVar11 = pbVar10;
          } while (uVar16 < 0x10);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 8) = uVar14 & 0xff;
            *(uint *)(in_eax[8] + 0xc) = uVar14 >> 8;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c3c800(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 4;
          goto switchD_00c3c8a8_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00c3db41;
    case 2: ;
      goto joined_r0x00c3ca97;
    case 3: ;
      goto joined_r0x00c3cb12;
    case 4: ;
switchD_00c3c8a8_caseD_4: ;
      if ((in_eax[4] & 0x400) == 0) {
        if (in_eax[8] != 0) {
          *(undefined4 *)(in_eax[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        in_eax[0x10] = uVar14;
        if (in_eax[8] != 0) {
          *(uint *)(in_eax[8] + 0x14) = uVar14;
        }
        if ((in_eax[4] & 0x200) != 0) {
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
          (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
          uVar4 = F_00c3c800(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
          in_eax[6] = uVar4;
          pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 5;
    case 5: ;
      if ((in_eax[4] & 0x400) == 0) {
LAB_00c3cca2: ;
        in_eax[0x10] = 0;
        *in_eax = 6;
switchD_00c3c8a8_caseD_6: ;
        if ((in_eax[4] & 0x800) == 0) {
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x1c) = 0;
          }
LAB_00c3cd4e: ;
          in_eax[0x10] = 0;
          *in_eax = 7;
switchD_00c3c8a8_caseD_7: ;
          if ((in_eax[4] & 0x1000) == 0) {
            if (in_eax[8] != 0) {
              *(undefined4 *)(in_eax[8] + 0x24) = 0;
            }
LAB_00c3cdfa: ;
            *in_eax = 8;
switchD_00c3c8a8_caseD_8: ;
            pbVar11 = pbVar10;
            if ((in_eax[4] & 0x200) != 0) {
              for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                pbVar10 = pbVar11;
                uVar13 = (*(uint *)(gen_frame + 0x20));
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
                uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
                pbVar11 = pbVar11 + 1;
              }
              if (uVar14 != (ushort)in_eax[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00c3db41;
              }
              uVar14 = 0;
              uVar16 = 0;
            }
            if (in_eax[8] != 0) {
              *(uint *)(in_eax[8] + 0x2c) = (int)in_eax[4] >> 9 & 1;
              *(undefined4 *)(in_eax[8] + 0x30) = 1;
            }
            uVar4 = F_00c3c800(0,0,0);
            in_eax[6] = uVar4;
            param_1[0xc] = uVar4;
            *in_eax = 0xb;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            break;
          }
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x24) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x28))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x24) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3cdfa;
          }
        }
        else {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x1c) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x20))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x1c) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3cd4e;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          if ((in_eax[8] != 0) && (iVar5 = *(int *)(in_eax[8] + 0x10), iVar5 != 0)) {
            iVar15 = *(int *)(in_eax[8] + 0x14) - in_eax[0x10];
            uVar4 = *(uint *)(in_eax[8] + 0x18);
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (uVar4 < iVar15 + (*(uint *)(gen_frame + 0x20))) {
              uVar13 = uVar4 - iVar15;
            }
            F_00c46aa0(iVar5 + iVar15,(*(byte * PTR32 *)(gen_frame + 0x24)),uVar13);
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
          pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
          in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        }
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if (in_eax[0x10] == 0) goto LAB_00c3cca2;
      }
LAB_00c3dba5: ;
      (*(uint *)(gen_frame + 0x20)) = uVar13;
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)pbVar10;
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar14;
      in_eax[0xf] = uVar16;
      if (((in_eax[10] == 0) && ((0x19 < (int)*in_eax || ((*(uint *)(gen_frame + 0xc)) == param_1[4])))) ||
         (uVar4 = F_00c39c20((*(uint *)(gen_frame + 0xc)),param_1), uVar4 == 0)) {
        iVar5 = uVar6 - param_1[1];
        iVar15 = (*(uint *)(gen_frame + 0xc)) - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + iVar15;
        in_eax[7] = in_eax[7] + iVar15;
        if ((in_eax[2] != 0) && (iVar15 != 0)) {
          if (in_eax[4] == 0) {
            uVar6 = F_00c38d10(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          else {
            uVar6 = F_00c3c800(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          in_eax[6] = uVar6;
          param_1[0xc] = uVar6;
        }
        uVar6 = *in_eax;
        if ((uVar6 == 0x13) || (param_1 = (int *)0x0, uVar6 == 0xe)) {
          param_1 = (int *)0x100;
        }
        piVar2[0xb] = ((uVar6 != 0xb) - 1 & 0x80) + (-(uint)(in_eax[1] != 0) & 0x40) + (int)param_1
                      + in_eax[0xf];
        if (((iVar5 != 0) || (iVar15 != 0)) && (param_2 != 4)) {
          return (*(uint *)(gen_frame + 0x4));
        }
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          return (*(uint *)(gen_frame + 0x4));
        }
        return 0xfffffffb;
      }
      *in_eax = 0x1e;
switchD_00c3c8a8_caseD_1e: ;
      return 0xfffffffc;
    case 6: ;
      goto switchD_00c3c8a8_caseD_6;
    case 7: ;
      goto switchD_00c3c8a8_caseD_7;
    case 8: ;
      goto switchD_00c3c8a8_caseD_8;
    case 9: ;
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = (uVar14 >> 8 & 0xff00) + ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 +
              (uVar14 >> 0x18);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      uVar14 = 0;
      uVar16 = 0;
      *in_eax = 10;
    case 10: ;
      if (in_eax[3] == 0) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)pbVar10;
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xf] = uVar16;
        in_eax[0xe] = uVar14;
        return 2;
      }
      uVar4 = F_00c38d10(0,0,0);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      *in_eax = 0xb;
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
switchD_00c3c8a8_caseD_b: ;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((param_2 == 5) || (param_2 == 6)) goto LAB_00c3dba5;
switchD_00c3c8a8_caseD_c: ;
      if (in_eax[1] != 0) {
        uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
        uVar16 = uVar16 - (uVar16 & 7);
        *in_eax = 0x1a;
        break;
      }
      for (; uVar16 < 3; uVar16 = uVar16 + 8) {
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[1] = uVar14 & 1;
      switch((unsigned int)(uintptr_t)(uVar14 >> 1 & 3)) {
      case 0: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0xd;
        uVar16 = uVar16 - 3;
        goto LAB_00c3db47;
      case 1: ;
        F_00c39c00(in_eax);
        *in_eax = 0x13;
        if (param_2 == 6) {
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          goto LAB_00c3dba5;
        }
        break;
      case 2: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0x10;
        uVar16 = uVar16 - 3;
        goto LAB_00c3db47;
      case 3: ;
        param_1[6] = (int)"invalid block type";
        *in_eax = 0x1d;
      }
      uVar14 = uVar14 >> 3;
      uVar16 = uVar16 - 3;
      break;
    case 0xb: ;
      goto switchD_00c3c8a8_caseD_b;
    case 0xc: ;
      goto switchD_00c3c8a8_caseD_c;
    case 0xd: ;
      uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); pbVar10 = pbVar11, uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = uVar14 & 0xffff;
      if (uVar4 == ~uVar14 >> 0x10) {
        uVar14 = 0;
        uVar16 = 0;
        in_eax[0x10] = uVar4;
        *in_eax = 0xe;
        if (param_2 != 6) goto switchD_00c3c8a8_caseD_e;
        goto LAB_00c3dba5;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_00c3db41;
    case 0xe: ;
switchD_00c3c8a8_caseD_e: ;
      *in_eax = 0xf;
    case 0xf: ;
      (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
LAB_00c3d711: ;
        *in_eax = 0xb;
        pbVar10 = pbVar11;
        break;
      }
      if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
      }
      if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
      }
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x20));
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
        break;
      }
      goto LAB_00c3dba5;
    case 0x10: ;
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[0x18] = (uVar14 & 0x1f) + 0x101;
      uVar12 = uVar14 >> 10;
      uVar4 = (uVar14 >> 5 & 0x1f) + 1;
      uVar14 = uVar14 >> 0xe;
      uVar16 = uVar16 - 0xe;
      in_eax[0x19] = uVar4;
      in_eax[0x17] = (uVar12 & 0xf) + 4;
      if ((in_eax[0x18] < 0x11f) && (uVar4 < 0x1f)) {
        in_eax[0x1a] = 0;
        *in_eax = 0x11;
        goto switchD_00c3c8a8_caseD_11;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00c3db41;
    case 0x11: ;
switchD_00c3c8a8_caseD_11: ;
      if (in_eax[0x1a] < in_eax[0x17]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar10 = pbVar11;
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          }
          *((ushort *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x11180c0) + in_eax[0x1a] * 2) * 2 + 0x70)))
               = (ushort)uVar14 & 7;
          in_eax[0x1a] = in_eax[0x1a] + 1;
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
        } while (in_eax[0x1a] < in_eax[0x17]);
      }
      uVar4 = in_eax[0x1a];
      while (uVar4 < 0x13) {
        *((undefined2 *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x11180c0) + in_eax[0x1a] * 2) * 2 + 0x70))) = 0;
        in_eax[0x1a] = in_eax[0x1a] + 1;
        uVar4 = in_eax[0x1a];
      }
      in_eax[0x1b] = (uint)(in_eax + 0x14c);
      in_eax[0x13] = (uint)(in_eax + 0x14c);
      in_eax[0x15] = 7;
      (*(uint *)(gen_frame + 0x4)) = F_00c39060(0,in_eax + 0x1c,0x13,in_eax + 0x1b,in_eax + 0x15,in_eax + 0xbc);
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        in_eax[0x1a] = 0;
        *in_eax = 0x12;
        goto switchD_00c3c8a8_caseD_12;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00c3db41: ;
      *in_eax = 0x1d;
      pbVar10 = pbVar11;
      break;
    case 0x12: ;
switchD_00c3c8a8_caseD_12: ;
      if (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]) {
        do {
          uVar13 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar16 < (uVar13 >> 8 & 0xff)) {
            do {
              pbVar10 = pbVar11;
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
              bVar7 = *pbVar11;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              bVar9 = (byte)uVar16;
              pbVar11 = pbVar11 + 1;
              uVar16 = uVar16 + 8;
              uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
              uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar13;
            } while (uVar16 < (uVar13 >> 8 & 0xff));
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = (short)(uVar13 >> 0x10);
          bVar7 = (byte)(uVar13 >> 8);
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar13 >> 0x10 < 0x10) {
            if (uVar16 < (uVar13 >> 8 & 0xff)) {
              do {
                pbVar10 = pbVar11;
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                bVar9 = *pbVar11;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                bVar8 = (byte)uVar16;
                pbVar11 = pbVar11 + 1;
                uVar16 = uVar16 + 8;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
              } while (uVar16 < (uVar13 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> (bVar7 & 0x1f);
            uVar16 = uVar16 - (uVar13 >> 8 & 0xff);
            *(short *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2));
            in_eax[0x1a] = in_eax[0x1a] + 1;
          }
          else {
            if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x10) {
              uVar4 = uVar13 >> 8 & 0xff;
              if (uVar16 < uVar4 + 2) {
                do {
                  pbVar10 = pbVar11;
                  if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                  bVar9 = *pbVar11;
                  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                  bVar8 = (byte)uVar16;
                  pbVar11 = pbVar11 + 1;
                  uVar16 = uVar16 + 8;
                  uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                } while (uVar16 < uVar4 + 2);
              }
              uVar13 = uVar14 >> (bVar7 & 0x1f);
              uVar16 = uVar16 - uVar4;
              if (in_eax[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                uVar14 = uVar13;
                goto LAB_00c3db41;
              }
              uVar1 = *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x6e);
              uVar14 = uVar13 >> 2;
              (*(uint *)(gen_frame + 0x20)) = (uVar13 & 3) + 3;
              uVar16 = uVar16 - 2;
            }
            else {
              uVar4 = uVar13 >> 8 & 0xff;
              if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x11) {
                if (uVar16 < uVar4 + 3) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 3);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 7) + 3;
                uVar14 = uVar14 >> 3;
                iVar5 = -3;
              }
              else {
                if (uVar16 < uVar4 + 7) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 7);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 0x7f) + 0xb;
                uVar14 = uVar14 >> 7;
                iVar5 = -7;
              }
              uVar16 = uVar16 + (iVar5 - uVar4);
              uVar1 = 0;
            }
            if (in_eax[0x19] + in_eax[0x18] < in_eax[0x1a] + (*(uint *)(gen_frame + 0x20))) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_00c3db41;
            }
            while ((*(uint *)(gen_frame + 0x20)) != 0) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
              *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = uVar1;
              in_eax[0x1a] = in_eax[0x1a] + 1;
            }
          }
        } while (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]);
      }
      pbVar10 = pbVar11;
      if (*in_eax != 0x1d) {
        if ((short)in_eax[0x9c] == 0) {
          param_1[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          in_eax[0x1b] = (uint)(in_eax + 0x14c);
          in_eax[0x13] = (uint)(in_eax + 0x14c);
          in_eax[0x15] = 9;
          (*(uint *)(gen_frame + 0x4)) = F_00c39060(1,in_eax + 0x1c,in_eax[0x18],in_eax + 0x1b,in_eax + 0x15,
                                  in_eax + 0xbc);
          if ((*(uint *)(gen_frame + 0x4)) == 0) {
            in_eax[0x14] = in_eax[0x1b];
            in_eax[0x16] = 6;
            (*(uint *)(gen_frame + 0x4)) = F_00c39060(2,(int)in_eax + in_eax[0x18] * 2 + 0x70,in_eax[0x19],
                                    in_eax + 0x1b,in_eax + 0x16,in_eax + 0xbc);
            if ((*(uint *)(gen_frame + 0x4)) == 0) {
              *in_eax = 0x13;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if (param_2 != 6) goto switchD_00c3c8a8_caseD_13;
              goto LAB_00c3dba5;
            }
            param_1[6] = (int)"invalid distances set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
        }
        goto LAB_00c3db41;
      }
      break;
    case 0x13: ;
switchD_00c3c8a8_caseD_13: ;
      *in_eax = 0x14;
      pbVar11 = pbVar10;
    case 0x14: ;
      if ((5 < (*(uint *)(gen_frame + 0x28))) && (0x101 < (*(uint *)(gen_frame + 0x1c)))) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)(*(byte * PTR32 *)(gen_frame + 0x24));
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xe] = uVar14;
        in_eax[0xf] = uVar16;
        F_00c39590(param_1,(*(uint *)(gen_frame + 0xc)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
        uVar14 = in_eax[0xe];
        uVar16 = in_eax[0xf];
        pbVar10 = (byte *)*param_1;
        (*(uint *)(gen_frame + 0x1c)) = param_1[4];
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = param_1[1];
        if (*in_eax == 0xb) {
          in_eax[0x6f1] = 0xffffffff;
        }
        break;
      }
      in_eax[0x6f1] = 0;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      cVar3 = (char)uVar4;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((cVar3 != '\0') && ((uVar4 & 0xf0) == 0)) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                          ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                              ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                              (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      in_eax[0x10] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
        *in_eax = 0x19;
        pbVar10 = pbVar11;
        break;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x20) != 0) {
        in_eax[0x6f1] = 0xffffffff;
        goto LAB_00c3d711;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c3db41;
      }
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x15;
switchD_00c3c8a8_caseD_15: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x10] = in_eax[0x10] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      in_eax[0x6f2] = in_eax[0x10];
      *in_eax = 0x16;
switchD_00c3c8a8_caseD_16: ;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((uVar4 & 0xf0) == 0) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                          ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                              ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >>
                               (bVar7 & 0x1f)) + (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = in_eax[0x6f1] + (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00c3db41;
      }
      in_eax[0x11] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x17;
switchD_00c3c8a8_caseD_17: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x11] = in_eax[0x11] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      *in_eax = 0x18;
switchD_00c3c8a8_caseD_18: ;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) != 0) {
        uVar4 = in_eax[0x11];
        if ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)) < uVar4) {
          (*(uint *)(gen_frame + 0x20)) = uVar4 - ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)));
          if ((in_eax[0xb] < (*(uint *)(gen_frame + 0x20))) && (in_eax[0x6f0] != 0)) {
            param_1[6] = (int)"invalid distance too far back";
            goto LAB_00c3db41;
          }
          if (in_eax[0xc] < (*(uint *)(gen_frame + 0x20))) {
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - in_eax[0xc];
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] + in_eax[10]) - (*(uint *)(gen_frame + 0x20));
          }
          else {
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] - (*(uint *)(gen_frame + 0x20))) + in_eax[0xc];
          }
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
          if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x20))) goto LAB_00c3d9bc;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - uVar4;
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
LAB_00c3d9bc: ;
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x8));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x20));
        iVar5 = (*(int *)(gen_frame + 0x0)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        do {
          *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar5];
          (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
          uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar4 != 0);
        if (in_eax[0x10] == 0) {
          *in_eax = 0x14;
        }
        break;
      }
      goto LAB_00c3dba5;
    case 0x15: ;
      goto switchD_00c3c8a8_caseD_15;
    case 0x16: ;
      goto switchD_00c3c8a8_caseD_16;
    case 0x17: ;
      goto switchD_00c3c8a8_caseD_17;
    case 0x18: ;
      goto switchD_00c3c8a8_caseD_18;
    case 0x19: ;
      if ((*(uint *)(gen_frame + 0x1c)) == 0) goto LAB_00c3dba5;
      *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (char)in_eax[0x10];
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - 1;
      *in_eax = 0x14;
      break;
    case 0x1a: ;
      if (in_eax[2] != 0) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
          uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
          pbVar11 = pbVar11 + 1;
        }
        iVar5 = (*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c));
        param_1[5] = param_1[5] + iVar5;
        in_eax[7] = in_eax[7] + iVar5;
        if (iVar5 != 0) {
          if (in_eax[4] == 0) {
            uVar4 = F_00c38d10(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          else {
            uVar4 = F_00c3c800(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          in_eax[6] = uVar4;
          param_1[0xc] = uVar4;
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c));
        uVar4 = uVar14;
        if (in_eax[4] == 0) {
          uVar4 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
                  (uVar14 >> 0x18);
        }
        if (uVar4 != in_eax[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00c3db41;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1b;
    case 0x1b: ;
      if ((in_eax[2] != 0) && (in_eax[4] != 0)) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar11 = pbVar11 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        if (uVar14 != in_eax[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00c3db41;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1c;
switchD_00c3c8a8_caseD_1c: ;
      (*(uint *)(gen_frame + 0x4)) = 1;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00c3dba5;
    case 0x1c: ;
      goto switchD_00c3c8a8_caseD_1c;
    case 0x1d: ;
      (*(uint *)(gen_frame + 0x4)) = 0xfffffffd;
      goto LAB_00c3dba5;
    case 0x1e: ;
      goto switchD_00c3c8a8_caseD_1e;
    default: ;
      return 0xfffffffe;
    }
LAB_00c3db47: ;
    uVar4 = *in_eax;
  } while( true );
}

/* ref: FUN_00c3dd60 */
uint F_00c3dd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3dd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00c39ab0(((byte *)(gen_frame + 0x4)),0xfffffff1,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar1 = F_00c3c830(((byte *)(gen_frame + 0x4)),4);
    if (uVar1 != 1) {
      F_00c39d20(((byte *)(gen_frame + 0x4)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
    uVar1 = F_00c39d20(((byte *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00c3de00 */
uint F_00c3de00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3de00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c3a250(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3de30 */
uint F_00c3de30(unsigned int gen_a0)
{
  GEN_ENTER(0xc3de30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb20) = &REFG(undefined * PTR32, 0x134a818);
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb2c) = &REFG(undefined * PTR32, 0x134a82c);
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined * PTR32 *)(param_1 + 0xb38) = &REFG(undefined, 0x134a840);
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  uVar1 = F_00c3ad10(param_1);
  return uVar1;
}

/* ref: FUN_00c3dea0 */
ushort F_00c3dea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3dea0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = 0;
  uVar2 = 1;
  do {
    uVar1 = (*(short *)(in_edx + uVar2 * 2 + -2) + uVar1) * 2;
    ((ushort *)(gen_frame + 0x8))[(int)(uVar2)] = uVar1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  iVar4 = 0;
  if (-1 < param_3) {
    do {
      uVar3 = (uint)*(ushort *)(in_edi + 2 + iVar4 * 4);
      if (uVar3 != 0) {
        uVar1 = ((ushort *)(gen_frame + 0x8))[(int)(uVar3)];
        ((ushort *)(gen_frame + 0x8))[(int)(uVar3)] = uVar1 + 1;
        uVar1 = F_00c3be50((uint)uVar1,uVar3);
        uVar2 = (uint)uVar1;
        *(ushort *)(in_edi + iVar4 * 4) = uVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= param_3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (ushort)uVar2;
}

/* ref: FUN_00c3df20 */
ushort F_00c3df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3df20u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  int in_edi;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  in_edi = *param_2;
  local_c = ((int *)param_2[2])[3];
  iVar8 = *(int *)param_2[2];
  iVar6 = -1;
  iVar5 = 0;
  local_8 = -1;
  *(undefined4 *)(in_esi + 0x1450) = 0;
  *(undefined4 *)(in_esi + 0x1454) = 0x23d;
  if (0 < local_c) {
    do {
      if (*(short *)(in_edi + iVar5 * 4) == 0) {
        *(undefined2 *)(in_edi + 2 + iVar5 * 4) = 0;
      }
      else {
        *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
        *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
        *(undefined1 *)(iVar5 + 0x1458 + in_esi) = 0;
        iVar6 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_c);
  }
  iVar5 = *(int *)(in_esi + 0x1450);
  iVar3 = local_8;
  while (iVar5 < 2) {
    if (iVar6 < 2) {
      iVar5 = iVar6 + 1;
      iVar6 = iVar5;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
    *(undefined2 *)(in_edi + iVar5 * 4) = 1;
    *(undefined1 *)(in_esi + 0x1458 + iVar5) = 0;
    *(int *)(in_esi + 0x16a8) = *(int *)(in_esi + 0x16a8) + -1;
    if (iVar8 != 0) {
      *(int *)(in_esi + 0x16ac) =
           *(int *)(in_esi + 0x16ac) - (uint)*(ushort *)(iVar8 + 2 + iVar5 * 4);
    }
    iVar3 = iVar6;
    iVar5 = *(int *)(in_esi + 0x1450);
  }
  param_2[1] = iVar6;
  for (iVar8 = *(int *)(in_esi + 0x1450) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    F_00c3ad90(in_esi,in_edi,iVar8);
  }
  do {
    uVar2 = *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4)));
    iVar8 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + -1;
    *(undefined4 *)(in_esi + 0xb60) = uVar2;
    F_00c3ad90(in_esi,in_edi,1);
    iVar6 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar8;
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar6;
    *(short *)(in_edi + local_c * 4) =
         *(short *)(in_edi + iVar6 * 4) + *(short *)(in_edi + iVar8 * 4);
    bVar1 = *(byte *)(in_esi + 0x1458 + iVar6);
    bVar7 = *(byte *)(in_esi + 0x1458 + iVar8);
    if (bVar7 < bVar1) {
      bVar7 = bVar1;
    }
    *(byte *)(in_esi + 0x1458 + local_c) = bVar7 + 1;
    *(short *)(in_edi + 2 + iVar6 * 4) = (short)local_c;
    *(short *)(in_edi + 2 + iVar8 * 4) = (short)local_c;
    *(int *)(in_esi + 0xb60) = local_c;
    local_c = local_c + 1;
    F_00c3ad90(in_esi,in_edi,1);
  } while (1 < *(int *)(in_esi + 0x1450));
  *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) + -1;
  *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = *(undefined4 *)(in_esi + 0xb60);
  F_00c3ae70(in_esi,param_2);
  uVar4 = F_00c3dea0(in_esi + 0xb3c,in_edi,iVar3);
  return uVar4;
}

/* ref: FUN_00c3e120 */
uint F_00c3e120(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e120u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  
  F_00c3b070(in_eax + 0x94,in_eax,*(undefined4 *)(in_eax + 0xb1c));
  F_00c3b070(in_eax + 0x988,in_eax,*(undefined4 *)(in_eax + 0xb28));
  F_00c3df20(in_eax,in_eax + 0xb30);
  uVar1 = 0x12;
  do {
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[uVar1] * 4) != 0) {
LAB_00c3e1db: ;
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c4b))[uVar1] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 1) * 3 + 0x11;
      return uVar1 - 1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c4a))[uVar1] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 2) * 3 + 0x11;
      return uVar1 - 2;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c49))[uVar1] * 4) != 0) {
      uVar1 = uVar1 - 3;
      goto LAB_00c3e1db;
    }
    uVar1 = uVar1 - 4;
    if ((int)uVar1 < 3) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_00c3e1f0 */
uint F_00c3e1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3e1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  if (0xd < iVar1) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b8) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
    uVar2 = F_00c3bf50(param_1,param_2,param_3,1);
    return uVar2;
  }
  *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  *(ushort *)(param_1 + 0x16b8) =
       *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
  uVar2 = F_00c3bf50(param_1,param_2,param_3,1);
  return uVar2;
}

/* ref: FUN_00c3e2a0 */
uint F_00c3e2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 0xe) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
  }
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 10) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 7;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 + -9;
    *(ushort *)(param_1 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
  }
  uVar2 = F_00c3be70(param_1);
  iVar1 = *(int *)(uVar2 + 0x16bc);
  if ((*(int *)(uVar2 + 0x16b4) - iVar1) + 0xb < 9) {
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
    if (iVar1 < 0xe) {
      *(int *)(uVar2 + 0x16bc) = iVar1 + 3;
    }
    else {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 + -0xd;
      *(ushort *)(uVar2 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
    }
    iVar1 = *(int *)(uVar2 + 0x16bc);
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
    if (9 < iVar1) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 + -9;
      *(ushort *)(uVar2 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
      uVar2 = F_00c3be70(uVar2);
      *(undefined4 *)(uVar2 + 0x16b4) = 7;
      return uVar2;
    }
    *(int *)(uVar2 + 0x16bc) = iVar1 + 7;
    uVar2 = F_00c3be70(uVar2);
  }
  *(undefined4 *)(uVar2 + 0x16b4) = 7;
  return uVar2;
}

/* ref: FUN_00c3e4a0 */
uint F_00c3e4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3e4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (param_1[0x21] < 1) {
    uVar2 = param_3 + 5;
  }
  else {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x2c) == 2) {
      uVar2 = F_00c3bde0(param_1);
      *(uint *)(iVar1 + 0x2c) = uVar2;
    }
    F_00c3df20(param_1,param_1 + 0x2c6);
    F_00c3df20(param_1,param_1 + 0x2c9);
    local_8 = F_00c3e120(param_1);
    uVar4 = param_1[0x5aa] + 10U >> 3;
    uVar2 = param_1[0x5ab] + 10U >> 3;
    if (uVar4 < uVar2) goto LAB_00c3e515;
  }
  uVar4 = uVar2;
LAB_00c3e515: ;
  if ((uVar4 < param_3 + 4U) || (param_2 == 0)) {
    if ((param_1[0x22] == 4) || (uVar2 == uVar4)) {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 2;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00c3b9d0(param_1,&REFG(undefined, 0x1116d30),&REFG(undefined, 0x11171b0));
    }
    else {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 4;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00c3b6d0(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,local_8 + 1);
      F_00c3b9d0(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    F_00c3e1f0(param_1,param_2,param_3,param_4);
  }
  uVar2 = F_00c3ad10(param_1);
  if (param_4 != 0) {
    uVar2 = F_00c3bef0(param_1);
  }
  return uVar2;
}

/* ref: FUN_00c3e6a0 */
uint F_00c3e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e6a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_esi;
  uint uVar1;
  
  if ((((param_1 != 0) && (in_esi = *(int *)(param_1 + 0x1c), in_esi != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(in_esi + 0x10) = *(undefined4 *)(in_esi + 8);
    *(undefined4 *)(in_esi + 0x14) = 0;
    if (*(int *)(in_esi + 0x18) < 0) {
      *(int *)(in_esi + 0x18) = -*(int *)(in_esi + 0x18);
    }
    *(uint *)(in_esi + 4) = (-(uint)(*(int *)(in_esi + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(in_esi + 0x18) == 2) {
      uVar1 = F_00c3de00(0,0,0);
    }
    else {
      uVar1 = F_00c3a9b0(0,0,0);
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(in_esi + 0x28) = 0;
    F_00c3de30(in_esi);
    F_00c3c610(in_esi);
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3e740 */
uint F_00c3e740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3e740u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_esi[1];
  uVar2 = uVar1;
  if (in_ecx < uVar1) {
    uVar2 = in_ecx;
  }
  if (uVar2 == 0) {
    return 0;
  }
  in_esi[1] = uVar1 - uVar2;
  if (*(int *)(in_esi[7] + 0x18) == 1) {
    uVar1 = F_00c3a9b0(in_esi[0xc],*in_esi,uVar2);
  }
  else {
    if (*(int *)(in_esi[7] + 0x18) != 2) goto LAB_00c3e78b;
    uVar1 = F_00c3de00(in_esi[0xc],*in_esi,uVar2);
  }
  in_esi[0xc] = uVar1;
LAB_00c3e78b: ;
  F_00c46aa0(param_3,*in_esi,uVar2);
  *in_esi = *in_esi + uVar2;
  in_esi[2] = in_esi[2] + uVar2;
  return uVar2;
}

/* ref: FUN_00c3e7b0 */
uint F_00c3e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e7b0u, gen_a0, 0u, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  ushort * puVar1;
  undefined * pvVar2;
  short sVar3;
  uint uVar4;
  undefined * pvVar5;
  short * psVar6;
  uint uVar7;
  uint uVar8;
  int in_ecx;
  undefined * pvVar9;
  
  uVar7 = in_edi[0xb];
  while( true ) {
    in_ecx = (in_edi[0xf] - in_edi[0x1d]) - in_edi[0x1b];
    if ((uVar7 - 0x106) + in_edi[0xb] <= in_edi[0x1b]) {
      F_00c46aa0(in_edi[0xe],in_edi[0xe] + uVar7,uVar7);
      uVar8 = in_edi[0x13];
      in_edi[0x1c] = in_edi[0x1c] - uVar7;
      in_edi[0x1b] = in_edi[0x1b] - uVar7;
      in_edi[0x17] = in_edi[0x17] - uVar7;
      psVar6 = (short *)(in_edi[0x11] + uVar8 * 2);
      do {
        puVar1 = (ushort *)(psVar6 + -1);
        psVar6 = psVar6 + -1;
        if (*puVar1 < uVar7) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar7;
        }
        uVar8 = uVar8 - 1;
        *psVar6 = sVar3;
      } while (uVar8 != 0);
      psVar6 = (short *)(in_edi[0x10] + uVar7 * 2);
      uVar8 = uVar7;
      do {
        puVar1 = (ushort *)(psVar6 + -1);
        psVar6 = psVar6 + -1;
        if (*puVar1 < uVar7) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar7;
        }
        uVar8 = uVar8 - 1;
        *psVar6 = sVar3;
      } while (uVar8 != 0);
      in_ecx = in_ecx + uVar7;
    }
    uVar8 = *in_edi;
    if (*(int *)(uVar8 + 4) == 0) break;
    uVar8 = F_00c3e740(in_ecx,uVar8,in_edi[0x1d] + in_edi[0x1b] + in_edi[0xe]);
    in_edi[0x1d] = in_edi[0x1d] + uVar8;
    uVar8 = in_edi[0x1d];
    if (2 < uVar8) {
      uVar4 = (uint)*(byte *)(in_edi[0x1b] + in_edi[0xe]);
      in_edi[0x12] = uVar4;
      in_edi[0x12] = (uVar4 << ((byte)in_edi[0x16] & 0x1f) ^
                     (uint)((byte *)(in_edi[0x1b] + in_edi[0xe]))[1]) & in_edi[0x15];
    }
    if ((0x105 < uVar8) || (*(int *)(*in_edi + 4) == 0)) {
      pvVar5 = (undefined *)in_edi[0x5b0];
      pvVar2 = (undefined *)in_edi[0xf];
      if (pvVar5 < pvVar2) {
        pvVar9 = (undefined *)(in_edi[0x1b] + uVar8);
        if (pvVar5 < pvVar9) {
          uVar7 = (int)pvVar2 - (int)pvVar9;
          if (0x102 < uVar7) {
            uVar7 = 0x102;
          }
          pvVar5 = F_00c48350((undefined *)(in_edi[0xe] + (int)pvVar9),0,uVar7);
          in_edi[0x5b0] = uVar7 + (int)pvVar9;
          return (uint)pvVar5;
        }
        if (pvVar5 < (undefined *)((int)pvVar9 + 0x102U)) {
          uVar7 = (int)pvVar9 + (0x102 - (int)pvVar5);
          if ((uint)((int)pvVar2 - (int)pvVar5) < uVar7) {
            uVar7 = (int)pvVar2 - (int)pvVar5;
          }
          pvVar5 = F_00c48350((undefined *)(in_edi[0xe] + (int)pvVar5),0,uVar7);
          in_edi[0x5b0] = in_edi[0x5b0] + uVar7;
        }
      }
      return (uint)pvVar5;
    }
  }
  return uVar8;
}

/* ref: FUN_00c3e900 */
uint F_00c3e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3e900u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1d];
    if (uVar3 < 2) {
      F_00c3e7b0(param_1);
      uVar3 = param_1[0x1d];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar4,param_1[0x1b] - iVar2,(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)(param_2 == 4) * 2 + 1;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    piVar1 = param_1 + 0x1b;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x17];
    param_1[0x1d] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x1b])) {
      param_1[0x1d] = param_1[0x1b] - uVar3;
      param_1[0x1b] = uVar3;
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar4,uVar3 - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x17];
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - iVar2)) {
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar4,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3ea40 */
uint F_00c3ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ea40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  bool bVar8;
  
  do {
    uVar4 = param_1[0x1d];
    if (uVar4 < 0x106) {
      F_00c3e7b0(param_1);
      uVar4 = param_1[0x1d];
      if ((uVar4 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar5,param_1[0x1b] - iVar2,(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (uint)(param_2 == 4) * 2 + 1;
      }
    }
    if (2 < uVar4) {
      uVar4 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar4;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar4 * 2);
      uVar4 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      if ((uVar4 != 0) && (param_1[0x1b] - uVar4 <= param_1[0xb] - 0x106U)) {
        uVar4 = F_00c3c6a0(param_1,uVar4);
        param_1[0x18] = uVar4;
      }
    }
    if ((uint)param_1[0x18] < 3) {
      bVar3 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar3 + 0x25) = (short)param_1[bVar3 + 0x25] + 1;
      bVar8 = param_1[0x5a8] == param_1[0x5a7] + -1;
      param_1[0x1d] = param_1[0x1d] + -1;
LAB_00c3ec81: ;
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar6 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar2 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar6;
      bVar3 = (char)iVar2 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x1117428))[bVar3] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x1117428))[bVar3] + 0x126] + 1;
      uVar7 = sVar6 - 1;
      if (uVar7 < 0x100) {
        bVar3 = (&REFG(undefined, 0x1117228))[uVar7];
      }
      else {
        bVar3 = (&REFG(undefined, 0x1117328))[uVar7 >> 7];
      }
      *(short *)(param_1 + bVar3 + 0x262) = (short)param_1[bVar3 + 0x262] + 1;
      uVar4 = param_1[0x18];
      bVar8 = param_1[0x5a8] == param_1[0x5a7] + -1;
      param_1[0x1d] = param_1[0x1d] - uVar4;
      if ((uVar4 <= (uint)param_1[0x20]) && (2 < (uint)param_1[0x1d])) {
        param_1[0x18] = uVar4 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar4 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar4;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar4 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_00c3ec81;
      }
      param_1[0x1b] = param_1[0x1b] + uVar4;
      param_1[0x18] = 0;
      uVar4 = (uint)*(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = uVar4;
      param_1[0x12] =
           (uVar4 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)((byte *)(param_1[0xe] + param_1[0x1b]))[1]) & param_1[0x15];
    }
    if (bVar8) {
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar5,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3ed30 */
uint F_00c3ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ed30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  short sVar10;
  
LAB_00c3ed40: ;
  do {
    uVar7 = param_1[0x1d];
    if (uVar7 < 0x106) {
      F_00c3e7b0(param_1);
      uVar7 = param_1[0x1d];
      if ((uVar7 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar7 == 0) {
        if (param_1[0x1a] != 0) {
          bVar5 = *(byte *)(param_1[0x1b] + -1 + param_1[0xe]);
          *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
          *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)(param_2 == 4) * 2 + 1;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    uVar6 = 0;
    if (2 < uVar7) {
      uVar7 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar7;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar7 * 2);
      uVar6 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    uVar7 = param_1[0x18];
    param_1[0x1e] = uVar7;
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar6 != 0) && (uVar7 < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar6 <= param_1[0xb] - 0x106U)) {
      uVar7 = F_00c3c6a0(param_1,uVar6);
      param_1[0x18] = uVar7;
      if ((uVar7 < 6) &&
         ((param_1[0x22] == 1 || ((uVar7 == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c])))))
         )) {
        param_1[0x18] = 2;
      }
    }
    if (((uint)param_1[0x1e] < 3) || ((uint)param_1[0x1e] < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        param_1[0x1a] = 1;
        goto LAB_00c3ed40;
      }
      bVar5 = *(byte *)(param_1[0x1b] + -1 + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a7] + -1) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,0);
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] + -1;
      iVar2 = *(int *)(*param_1 + 0x10);
    }
    else {
      sVar10 = (short)param_1[0x1b] - (short)param_1[0x19];
      iVar2 = param_1[0x1b];
      iVar9 = param_1[0x1d];
      iVar4 = param_1[0x1e];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar10 + -1;
      bVar5 = (char)iVar4 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x1117428))[bVar5] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x1117428))[bVar5] + 0x126] + 1;
      uVar8 = sVar10 - 2;
      if (uVar8 < 0x100) {
        bVar5 = (&REFG(undefined, 0x1117228))[uVar8];
      }
      else {
        bVar5 = (&REFG(undefined, 0x1117328))[uVar8 >> 7];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      iVar4 = param_1[0x5a7];
      iVar3 = param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        param_1[0x1b] = param_1[0x1b] + 1;
        uVar7 = param_1[0x1b];
        if (uVar7 <= (uint)(iVar2 + -3 + iVar9)) {
          uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + uVar7)) & param_1[0x15];
          param_1[0x12] = uVar6;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & uVar7) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar6 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      if (iVar3 != iVar4 + -1) goto LAB_00c3ed40;
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      iVar2 = *(int *)(*param_1 + 0x10);
    }
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c3f100 */
uint F_00c3f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f100u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  bool bVar9;
  
  do {
    uVar4 = in_eax[0x1d];
    if (uVar4 < 0x102) {
      F_00c3e7b0(in_eax);
      uVar4 = in_eax[0x1d];
      if ((uVar4 < 0x102) && (param_2 == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar2 = in_eax[0x17];
        if (iVar2 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = in_eax[0xe] + iVar2;
        }
        F_00c3e4a0(in_eax,iVar7,in_eax[0x1b] - iVar2,(uint)(param_2 == 4));
        in_eax[0x17] = in_eax[0x1b];
        F_00c3c340(*in_eax);
        if (*(int *)(*in_eax + 0x10) != 0) {
          return (uint)(param_2 == 4) * 2 + 1;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    in_eax[0x18] = 0;
    if ((2 < uVar4) && (in_eax[0x1b] != 0)) {
      pcVar8 = (char *)(in_eax[0xe] + in_eax[0x1b]);
      cVar1 = pcVar8[-1];
      if ((cVar1 == *pcVar8) && ((cVar1 == pcVar8[1] && (cVar1 == pcVar8[2])))) {
        pcVar5 = pcVar8 + 2;
        do {
          pcVar6 = pcVar5 + 1;
          if (((((cVar1 != pcVar5[1]) || (pcVar6 = pcVar5 + 2, cVar1 != pcVar5[2])) ||
               (pcVar6 = pcVar5 + 3, cVar1 != pcVar5[3])) ||
              ((pcVar6 = pcVar5 + 4, cVar1 != pcVar5[4] || (pcVar6 = pcVar5 + 5, cVar1 != pcVar5[5])
               ))) || ((pcVar6 = pcVar5 + 6, cVar1 != pcVar5[6] ||
                       ((pcVar6 = pcVar5 + 7, cVar1 != pcVar5[7] ||
                        (pcVar6 = pcVar5 + 8, cVar1 != pcVar5[8])))))) break;
          pcVar5 = pcVar6;
        } while (pcVar6 < pcVar8 + 0x102);
        in_eax[0x18] = (int)(pcVar6 + (0x102 - (int)(pcVar8 + 0x102)));
        if ((char *)in_eax[0x1d] < pcVar6 + (0x102 - (int)(pcVar8 + 0x102))) {
          in_eax[0x18] = in_eax[0x1d];
        }
      }
    }
    if ((uint)in_eax[0x18] < 3) {
      bVar3 = *(byte *)(in_eax[0xe] + in_eax[0x1b]);
      *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 0;
      *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar3;
      in_eax[0x5a8] = in_eax[0x5a8] + 1;
      *(short *)(in_eax + bVar3 + 0x25) = (short)in_eax[bVar3 + 0x25] + 1;
      bVar9 = in_eax[0x5a8] == in_eax[0x5a7] + -1;
      in_eax[0x1d] = in_eax[0x1d] + -1;
      in_eax[0x1b] = in_eax[0x1b] + 1;
    }
    else {
      bVar3 = (char)in_eax[0x18] - 3;
      *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 1;
      *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar3;
      in_eax[0x5a8] = in_eax[0x5a8] + 1;
      *(short *)(in_eax + (byte)(&REFG(undefined, 0x1117428))[bVar3] + 0x126) =
           (short)in_eax[(byte)(&REFG(undefined, 0x1117428))[bVar3] + 0x126] + 1;
      *(short *)(in_eax + 0x262) = (short)in_eax[0x262] + 1;
      iVar2 = in_eax[0x18];
      bVar9 = in_eax[0x5a8] == in_eax[0x5a7] + -1;
      in_eax[0x18] = 0;
      in_eax[0x1d] = in_eax[0x1d] - iVar2;
      in_eax[0x1b] = in_eax[0x1b] + iVar2;
    }
    if (bVar9) {
      iVar2 = in_eax[0x17];
      if (iVar2 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = in_eax[0xe] + iVar2;
      }
      F_00c3e4a0(in_eax,iVar7,in_eax[0x1b] - iVar2,0);
      in_eax[0x17] = in_eax[0x1b];
      F_00c3c340(*in_eax);
      if (*(int *)(*in_eax + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3f370 */
uint F_00c3f370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f370u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  while ((in_eax[0x1d] != 0 || (F_00c3e7b0(in_eax), in_eax[0x1d] != 0))) {
    in_eax[0x18] = 0;
    bVar1 = *(byte *)(in_eax[0x1b] + in_eax[0xe]);
    *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 0;
    *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar1;
    in_eax[0x5a8] = in_eax[0x5a8] + 1;
    *(short *)(in_eax + bVar1 + 0x25) = (short)in_eax[bVar1 + 0x25] + 1;
    in_eax[0x1b] = in_eax[0x1b] + 1;
    in_eax[0x1d] = in_eax[0x1d] + -1;
    if (in_eax[0x5a8] == in_eax[0x5a7] + -1) {
      iVar2 = in_eax[0x17];
      if (iVar2 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = in_eax[0xe] + iVar2;
      }
      F_00c3e4a0(in_eax,iVar3,in_eax[0x1b] - iVar2,0);
      in_eax[0x17] = in_eax[0x1b];
      F_00c3c340(*in_eax);
      if (*(int *)(*in_eax + 0x10) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = in_eax[0x17];
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_eax[0xe] + iVar2;
  }
  F_00c3e4a0(in_eax,iVar3,in_eax[0x1b] - iVar2,(uint)(param_2 == 4));
  in_eax[0x17] = in_eax[0x1b];
  F_00c3c340(*in_eax);
  if (*(int *)(*in_eax + 0x10) != 0) {
    return (uint)(param_2 == 4) * 2 + 1;
  }
  return (param_2 != 4) - 1 & 2;
}

/* ref: FUN_00c3f4a0 */
uint F_00c3f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f4a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14040];
  undefined4 uVar1;
  undefined8 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x1402c)) = 0xc3f4c0;
  (*(uint *)(gen_frame + 0x1402c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar2 = *(undefined8 * PTR32 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  (*(int *)(gen_frame + 0x10014)) = (int)((ulonglong)puVar2[1] >> 0x20);
  (*(int *)(gen_frame + 0x1001c)) = *(int *)(param_2 + 100);
  (*(int *)(gen_frame + 0x1001c)) = 0x4000;
  if ((*(int *)(gen_frame + 0x10014)) != 0) {
    (*(int *)(gen_frame + 0x10010)) = (int)puVar2[1];
    (*(int *)(gen_frame + 0x10008)) = (int)*puVar2;
    if ((*(int *)(gen_frame + 0x10010)) == 32000) {
      F_00c46aa0(((undefined1 *)(gen_frame + 0x10020)),(*(int *)(gen_frame + 0x10008)) + (int)puVar2,(*(int *)(gen_frame + 0x10014)));
      iVar3 = (*(int *)(gen_frame + 0x10014));
    }
    else {
      F_00c3dd60(((undefined1 *)(gen_frame + 0x10020)),&(*(int *)(gen_frame + 0x1001c)),(*(int *)(gen_frame + 0x10008)) + (int)puVar2,(*(int *)(gen_frame + 0x10010)));
      iVar3 = (*(int *)(gen_frame + 0x1001c));
    }
    uVar4 = F_00c46aa0(uVar1,((undefined1 *)(gen_frame + 0x10020)),iVar3);
    puVar2 = (undefined8 *)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x1402c)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)puVar2;
}

/* ref: FUN_00c3f590 */
uint F_00c3f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc3f590u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  char * param_7 = (char *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_8;
  
  local_8 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc3c020));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc3c040));
  }
  if (param_2 == 0xffffffff) {
    param_2 = 6;
  }
  if (param_4 < 0) {
    local_8 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    local_8 = 2;
    param_4 = param_4 + -0x10;
  }
  if (((param_5 - 1U < 9) && (param_3 == 8)) &&
     ((param_4 - 8U < 8 && ((param_2 < 10 && (param_6 < 5)))))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c4)));
    if (piVar1 != (int *)0x0) {
      *(int * PTR32 *)(param_1 + 0x1c) = piVar1;
      piVar1[6] = local_8;
      piVar1[0xc] = param_4;
      iVar6 = 1 << ((byte)param_4 & 0x1f);
      iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar1[0x14] = param_5 + 7;
      piVar1[0xd] = iVar6 + -1;
      piVar1[0x13] = iVar2;
      piVar1[0x15] = iVar2 + -1;
      *piVar1 = param_1;
      piVar1[7] = 0;
      piVar1[0xb] = iVar6;
      piVar1[0x16] = (param_5 + 9U) / 3;
      uVar12 = *(undefined4 *)(param_1 + 0x28);
      uVar13 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar12,iVar6,2);
      iVar2 = piVar1[0xb];
      piVar1[0xe] = uVar3;
      uVar10 = *(undefined4 *)(param_1 + 0x28);
      uVar11 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar10,iVar2,2);
      iVar8 = piVar1[0x13];
      piVar1[0x10] = uVar3;
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      uVar9 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar7,iVar8,2);
      piVar1[0x11] = uVar3;
      iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar1[0x5b0] = 0;
      piVar1[0x5a7] = iVar4;
      uVar5 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x28),iVar4,4,uVar7,iVar8,uVar9,uVar10,iVar2,
                         uVar11,uVar12,iVar6,uVar13);
      uVar3 = piVar1[0x5a7];
      piVar1[2] = uVar5;
      piVar1[3] = uVar3 * 4;
      if ((((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (piVar1[0x11] != 0)) && (uVar5 != 0)) {
        piVar1[0x5a9] = uVar5 + (uVar3 & 0xfffffffe);
        piVar1[0x5a6] = uVar5 + uVar3 * 3;
        piVar1[0x21] = param_2;
        piVar1[0x22] = param_6;
        *(undefined1 *)(piVar1 + 9) = 8;
        uVar3 = F_00c3e6a0(param_1);
        return uVar3;
      }
      piVar1[1] = 0x29a;
      *(char * PTR32 *)(param_1 + 0x18) = "insufficient memory";
      F_00c3c390(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3f7d0 */
uint F_00c3f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f7d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  undefined4 * in_eax;
  int iVar2;
  int * piVar3;
  bool bVar4;
  int * in_eax_00;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  in_eax_00 = param_1;
  if (((param_1 == (int *)0x0) || (in_eax = (undefined4 *)param_1[7], in_eax == (undefined4 *)0x0))
     || (5 < param_2)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((in_eax[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  iVar2 = in_eax[10];
  *in_eax = param_1;
  in_eax[10] = param_2;
  if (in_eax[1] == 0x2a) {
    if (in_eax[6] == 2) {
      uVar6 = F_00c3de00(0,0,0);
      param_1[0xc] = uVar6;
      *(undefined1 *)(in_eax[2] + in_eax[5]) = 0x1f;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 0x8b;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 8;
      in_eax[5] = in_eax[5] + 1;
      piVar3 = (int *)in_eax[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0xb;
        in_eax[5] = in_eax[5] + 1;
        in_eax[1] = 0x71;
      }
      else {
        *(byte *)(in_eax[5] + in_eax[2]) =
             (-(piVar3[9] != 0) & 0x10U) + (-(piVar3[0xb] != 0) & 2U) + (-(piVar3[7] != 0) & 8U) +
             (-(piVar3[4] != 0) & 4U) + (*piVar3 != 0);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 4);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 5);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 6);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 7);
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0xc);
        in_eax[5] = in_eax[5] + 1;
        iVar7 = in_eax[5];
        if (*(int *)(in_eax[7] + 0x10) != 0) {
          *(undefined1 *)(iVar7 + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x14);
          in_eax[5] = in_eax[5] + 1;
          *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x15);
          in_eax[5] = in_eax[5] + 1;
          iVar7 = in_eax[5];
        }
        if (*(int *)(in_eax[7] + 0x2c) != 0) {
          uVar6 = F_00c3de00(param_1[0xc],in_eax[2],iVar7);
          param_1[0xc] = uVar6;
        }
        in_eax[8] = 0;
        in_eax[1] = 0x45;
      }
    }
    else {
      if (((int)in_eax[0x22] < 2) && (iVar7 = in_eax[0x21], 1 < iVar7)) {
        if (iVar7 < 6) {
          iVar7 = 1;
        }
        else {
          iVar7 = (iVar7 != 6) + 2;
        }
      }
      else {
        iVar7 = 0;
      }
      uVar6 = (in_eax[0xc] + -8) * 0x1000 + 0x800U | iVar7 << 6;
      if (in_eax[0x1b] != 0) {
        uVar6 = uVar6 | 0x20;
      }
      in_eax[1] = 0x71;
      uVar6 = F_00c3c310(in_eax,(uVar6 / 0x1f + 1) * 0x1f);
      if (in_eax[0x1b] != 0) {
        uVar6 = F_00c3c310(uVar6,(uint)*(ushort *)((int)param_1 + 0x32));
        F_00c3c310(uVar6,(uint)*(ushort *)(param_1 + 0xc));
      }
      uVar6 = F_00c3a9b0(0,0,0);
      param_1[0xc] = uVar6;
    }
  }
  if (in_eax[1] == 0x45) {
    if (*(int *)(in_eax[7] + 0x10) != 0) {
      uVar6 = in_eax[5];
      param_1 = (int *)uVar6;
      if ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14)) {
        do {
          uVar6 = in_eax[5];
          if (uVar6 == in_eax[3]) {
            if ((*(int *)(in_eax[7] + 0x2c) != 0) && (param_1 < uVar6)) {
              uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + (int)param_1,uVar6 - (int)param_1);
              in_eax_00[0xc] = uVar6;
            }
            F_00c3c340(in_eax_00);
            uVar6 = in_eax[5];
            param_1 = (int *)uVar6;
            if (uVar6 == in_eax[3]) break;
          }
          *(undefined1 *)(uVar6 + in_eax[2]) =
               *((undefined1 *)GEN_TOP((*(int *)(in_eax[7] + 0x10) + in_eax[8])));
          in_eax[5] = in_eax[5] + 1;
          in_eax[8] = in_eax[8] + 1;
          uVar6 = (uint)param_1;
        } while ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14));
      }
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,in_eax[5] - uVar6);
        in_eax_00[0xc] = uVar6;
      }
      if (in_eax[8] != *(int *)(in_eax[7] + 0x14)) goto LAB_00c3fbc8;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x49;
  }
LAB_00c3fbc8: ;
  if (in_eax[1] == 0x49) {
    if (*(int *)(in_eax[7] + 0x1c) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_00c3c340(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_00c3fc42;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x1c) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_00c3fc42: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_00c3fc75;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x5b;
  }
LAB_00c3fc75: ;
  if (in_eax[1] == 0x5b) {
    if (*(int *)(in_eax[7] + 0x24) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_00c3c340(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_00c3fcf0;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x24) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_00c3fcf0: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_00c3fd20;
    }
    in_eax[1] = 0x67;
  }
LAB_00c3fd20: ;
  if (in_eax[1] == 0x67) {
    if (*(int *)(in_eax[7] + 0x2c) != 0) {
      if ((uint)in_eax[3] < in_eax[5] + 2) {
        F_00c3c340(in_eax_00);
      }
      if ((uint)in_eax[3] < in_eax[5] + 2) goto LAB_00c3fd81;
      *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[0xc];
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
      in_eax[5] = in_eax[5] + 1;
      uVar6 = F_00c3de00(0,0,0);
      in_eax_00[0xc] = uVar6;
    }
    in_eax[1] = 0x71;
  }
LAB_00c3fd81: ;
  if (in_eax[5] == 0) {
    if (((in_eax_00[1] == 0) && ((int)param_2 <= iVar2)) && (param_2 != 4)) {
      in_eax_00[6] = (int)"buffer error";
      return 0xfffffffb;
    }
  }
  else {
    F_00c3c340(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
  if (in_eax[1] == 0x29a) {
    if (in_eax_00[1] != 0) {
      in_eax_00[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_00c3fdfc: ;
    if ((in_eax[0x1d] == 0) && ((param_2 == 0 || (in_eax[1] == 0x29a)))) goto LAB_00c3ff03;
  }
  else if (in_eax_00[1] == 0) goto LAB_00c3fdfc;
  if (in_eax[0x22] == 2) {
    uVar6 = F_00c3f370(in_eax,param_2);
  }
  else if (in_eax[0x22] == 3) {
    uVar6 = F_00c3f100(in_eax,param_2);
  }
  else {
    uVar6 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x11176c0))[in_eax[0x21] * 3])))(in_eax,param_2);
  }
  if ((uVar6 == 2) || (uVar6 == 3)) {
    in_eax[1] = 0x29a;
  }
  if ((uVar6 == 0) || (uVar6 == 2)) {
    if (in_eax_00[4] != 0) {
      return 0;
    }
    in_eax[10] = 0xffffffff;
    return 0;
  }
  if (uVar6 == 1) {
    if (param_2 == 1) {
      F_00c3e2a0(in_eax);
    }
    else if ((param_2 != 5) && (F_00c3e1f0(in_eax,0,0,0), param_2 == 3)) {
      *(undefined2 *)(in_eax[0x11] + -2 + in_eax[0x13] * 2) = 0;
      F_00c48350((undefined *)in_eax[0x11],0,in_eax[0x13] * 2 - 2);
      if (in_eax[0x1d] == 0) {
        in_eax[0x1b] = 0;
        in_eax[0x17] = 0;
      }
    }
    F_00c3c340(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
LAB_00c3ff03: ;
  if (param_2 != 4) {
    return 0;
  }
  if ((int)in_eax[6] < 1) {
    return 1;
  }
  if (in_eax[6] == 2) {
    *(char *)(in_eax[2] + in_eax[5]) = (char)in_eax_00[0xc];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x32);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x33);
    in_eax[5] = in_eax[5] + 1;
    *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[2];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 9);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 10);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0xb);
    in_eax[5] = in_eax[5] + 1;
  }
  else {
    uVar6 = F_00c3c310(in_eax,(uint)*(ushort *)((int)in_eax_00 + 0x32));
    F_00c3c310(uVar6,(uint)*(ushort *)(in_eax_00 + 0xc));
  }
  F_00c3c340(in_eax_00);
  if (0 < (int)in_eax[6]) {
    in_eax[6] = -in_eax[6];
  }
  return (uint)(in_eax[5] == 0);
}

/* ref: FUN_00c40020 */
uint F_00c40020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc40020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_1;
  pbVar1 = param_5;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = param_4;
  uVar2 = F_00c3f590(((byte *)(gen_frame + 0x4)),param_6,8,0xfffffff1,8,0,"1.2.5",0x38);
  if (uVar2 == 0) {
    uVar3 = F_00c3f7d0(((byte *)(gen_frame + 0x4)),4);
    if (uVar3 == 1) {
      *(undefined4 *)param_5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
      uVar2 = 1;
    }
    else {
      F_00c3c390(((byte *)(gen_frame + 0x4)));
      uVar2 = 0xfffffffb;
      if (uVar3 != 0) {
        return uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00c400b0 */
uint F_00c400b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc400b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00c3f590(((byte *)(gen_frame + 0x4)),param_5,8,0xfffffff1,8,0,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar2 = F_00c3f7d0(((byte *)(gen_frame + 0x4)),4);
    if (uVar2 == 1) {
      *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
      uVar1 = F_00c3c390(((byte *)(gen_frame + 0x4)));
    }
    else {
      F_00c3c390(((byte *)(gen_frame + 0x4)));
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00c40150 */
uint F_00c40150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c400b0(param_1,param_2,param_3,param_4,9);
  return uVar1;
}

/* ref: FUN_00c40170 */
uint F_00c40170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c3f590(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c401a0 */
uint F_00c401a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc401a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 == -1) {
    iVar3 = 6;
  }
  else {
    if (param_2 < 0) {
      return 0xfffffffe;
    }
    iVar3 = param_2;
    if (9 < param_2) {
      return 0xfffffffe;
    }
  }
  if (4 < param_3) {
    return 0xfffffffe;
  }
  if (((param_3 != *(uint *)(iVar1 + 0x88)) ||
      ((*(undefined * PTR32 (*)[1])REFP(0x11176c0))[*(int *)(iVar1 + 0x84) * 3] != (*(undefined * PTR32 (*)[1])REFP(0x11176c0))[iVar3 * 3])) &&
     (*(int *)(param_1 + 8) != 0)) {
    local_8 = F_00c3f7d0(param_1,5);
  }
  if (*(int *)(iVar1 + 0x84) != iVar3) {
    *(int *)(iVar1 + 0x84) = iVar3;
    iVar2 = iVar3 * 0xc;
    *(uint *)(iVar1 + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x11176ba) + iVar3 * 0xc);
    *(uint *)(iVar1 + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x11176b8) + iVar2);
    *(uint *)(iVar1 + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x11176bc) + iVar2);
    *(uint *)(iVar1 + 0x7c) = (uint)*(ushort *)(&REFG(undefined, 0x11176be) + iVar2);
  }
  *(uint *)(iVar1 + 0x88) = param_3;
  return local_8;
}

/* ref: FUN_00c402a0 */
unsigned int F_00c402a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc402a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * puVar1;
  
  puVar1 = *(undefined8 * PTR32 *)(param_2 + 0x60);
  (*(undefined4 *)((char *)&REFG(undefined8, 0x14c9cc0) + 0)) = (*(int * PTR32 *)(param_1 + 4))[1] + **(int * PTR32 *)(param_1 + 4);
  *puVar1 = CONCAT44((*(undefined4 *)((char *)&REFG(undefined8, 0x14c9cc0) + 4)),(int)REFG(undefined8, 0x14c9cc0));
  puVar1[1] = REFG(undefined8, 0x14c9cc8);
  return 0;
}

/* ref: FUN_00c40300 */
unsigned int F_00c40300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40300u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = in_esi[1];
  pfVar9 = (float *)*param_4;
  fVar2 = *in_esi;
  fVar3 = in_esi[2];
  fVar4 = in_edx[2];
  fVar5 = *in_edx;
  fVar16 = in_edx[1];
  fVar15 = ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar16 + (double)fVar5 * (double)*pfVar9) +
                   (double)pfVar9[8] * (double)fVar4) + (double)pfVar9[0xc])));
  fVar6 = in_ecx[2];
  fVar7 = *in_ecx;
  fVar11 = ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar5 + (double)pfVar9[6] * (double)fVar16) +
                   (double)pfVar9[10] * (double)fVar4) + (double)pfVar9[0xe])));
  fVar8 = in_ecx[1];
  fVar16 = ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar5 + (double)pfVar9[5] * (double)fVar16) +
                   (double)pfVar9[9] * (double)fVar4) + (double)pfVar9[0xd])));
  fVar5 = fVar15 - ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar1 + (double)fVar2 * (double)*pfVar9) +
                           (double)pfVar9[8] * (double)fVar3) + (double)pfVar9[0xc])));
  fVar4 = ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar7 + (double)pfVar9[5] * (double)fVar8) +
                  (double)pfVar9[9] * (double)fVar6) + (double)pfVar9[0xd]))) - fVar16;
  fVar16 = fVar16 - ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar2 + (double)pfVar9[5] * (double)fVar1)
                            + (double)pfVar9[9] * (double)fVar3) + (double)pfVar9[0xd])));
  fVar10 = ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar7 + (double)pfVar9[6] * (double)fVar8) +
                   (double)pfVar9[10] * (double)fVar6) + (double)pfVar9[0xe]))) - fVar11;
  fVar11 = fVar11 - ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar2 + (double)pfVar9[6] * (double)fVar1)
                            + (double)pfVar9[10] * (double)fVar3) + (double)pfVar9[0xe])));
  fVar15 = ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar8 + (double)fVar7 * (double)*pfVar9) +
                   (double)pfVar9[8] * (double)fVar6) + (double)pfVar9[0xc]))) - fVar15;
  dVar12 = (double)(float)((double)fVar10 * (double)fVar16 - (double)fVar4 * (double)fVar11);
  dVar13 = (double)(float)((double)fVar11 * (double)fVar15 - (double)fVar10 * (double)fVar5);
  dVar14 = (double)(float)((double)fVar4 * (double)fVar5 - (double)fVar16 * (double)fVar15);
  if (0.0 < ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar13 * dVar13 + dVar12 * dVar12) + dVar14 * dVar14)))))))))) {
    return 0;
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  return 0;
}

/* ref: FUN_00c40760 */
uint F_00c40760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  F_00554700(param_2,*(undefined4 *)(param_1 + 4),uVar1);
  uVar2 = F_00c46aa0(*(undefined4 *)((int)param_2 + 0x88),uVar1,0x60);
  return (uint)uVar2;
}

/* ref: FUN_00c40790 */
unsigned int F_00c40790(void)
{
  GEN_ENTER(0xc40790u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407a0 */
unsigned int F_00c407a0(void)
{
  GEN_ENTER(0xc407a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407b0 */
unsigned int F_00c407b0(void)
{
  GEN_ENTER(0xc407b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407c0 */
unsigned int F_00c407c0(void)
{
  GEN_ENTER(0xc407c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407d0 */
unsigned int F_00c407d0(void)
{
  GEN_ENTER(0xc407d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407e0 */
unsigned int F_00c407e0(void)
{
  GEN_ENTER(0xc407e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c407f0 */
unsigned int F_00c407f0(void)
{
  GEN_ENTER(0xc407f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c40800 */
unsigned int F_00c40800(void)
{
  GEN_ENTER(0xc40800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c40810 */
uint F_00c40810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c40830 */
uint F_00c40830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c40890 */
uint F_00c40890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10 + param_2 * 4);
}

/* ref: FUN_00c408b0 */
uint F_00c408b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc408b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 4) * 0x20 + in_ecx;
}

/* ref: FUN_00c40910 */
uint F_00c40910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c40930 */
uint F_00c40930(unsigned int gen_a0)
{
  GEN_ENTER(0xc40930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14e9d80))[param_1];
}

/* ref: FUN_00c40940 */
byte F_00c40940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(uint *)((int)this + 0x18) <= param_1) &&
     (param_1 < *(int *)((int)this + 0x10) + *(uint *)((int)this + 0x18))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c409a0 */
uint F_00c409a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc409a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c409f0 */
uint F_00c409f0(void)
{
  GEN_ENTER(0xc409f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c40a00 */
unsigned int F_00c40a00(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x14e9d80))[param_1] = 0;
  }
  return 0;
}

/* ref: FUN_00c40a20 */
uint F_00c40a20(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c40a40 */
unsigned int F_00c40a40(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xc40a40u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00c40a60 */
uint F_00c40a60(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00c40a80 */
uint F_00c40a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40a80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x40;
  uVar1 = param_1;
  if (param_2 != 0) {
    iVar2 = 0x20;
    uVar1 = param_2;
  }
  if (uVar1 >> 0x10 != 0) {
    iVar2 = iVar2 + -0x10;
    uVar1 = uVar1 >> 0x10;
  }
  if (uVar1 >> 8 != 0) {
    iVar2 = iVar2 + -8;
    uVar1 = uVar1 >> 8;
  }
  if (uVar1 >> 4 != 0) {
    iVar2 = iVar2 + -4;
    uVar1 = uVar1 >> 4;
  }
  if (uVar1 >> 2 != 0) {
    iVar2 = iVar2 + -2;
    uVar1 = uVar1 >> 2;
  }
  if ((uVar1 & 0xfffffffe) == 0) {
    return (uVar1 - iVar2) + 0x3f;
  }
  return 0x41 - iVar2;
}

/* ref: FUN_00c40b20 */
uint F_00c40b20(float gen_a0)
{
  GEN_ENTER(0xc40b20u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (GEN_ISNAN(param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40b40 */
byte F_00c40b40(float gen_a0)
{
  GEN_ENTER(0xc40b40u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (REFG(double, 0x10909a0) < (double)param_1) {
    return 1;
  }
  return (!GEN_ISNAN(REFG(double, 0x10909a8)) && !GEN_ISNAN((double)param_1)) && !(REFG(double, 0x10909a8) <= (double)param_1);
}

/* ref: FUN_00c40b80 */
uint F_00c40b80(float gen_a0)
{
  GEN_ENTER(0xc40b80u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00c40b40(param_1);
  uVar2 = F_00c40b20(param_1);
  return uVar2 | bVar1;
}

/* ref: FUN_00c40bb0 */
uint F_00c40bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc40bb0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00c40bd0 */
uint F_00c40bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0 && (((*(uint *)&gen_args[1]) - 1) + (uint)((*(uint *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1])) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40c00 */
uint F_00c40c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40c00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (uint)(param_1 % param_2 == 0);
}

/* ref: FUN_00c40c20 */
uint F_00c40c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (CONCAT44(param_2,param_1) % CONCAT44(param_4,param_3) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40c50 */
uint F_00c40c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40c50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)(((*(int *)&gen_args[1]) - 1U & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00c40c70 */
uint F_00c40c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  if (((*(int *)&gen_args[2]) - 1U & (*(uint *)&gen_args[0])) == 0 && ((*(int *)&gen_args[3]) + -1 + (uint)((*(int *)&gen_args[2]) != 0) & (*(uint *)&gen_args[1])) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40ca0 */
uint F_00c40ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40ca0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (param_1 / param_2) * param_2;
}

/* ref: FUN_00c40cc0 */
uint F_00c40cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(param_2,param_1);
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 0)) = (int)((*(ulonglong *)(gen_frame + 0x4)) / CONCAT44(param_4,param_3));
  return (int)(*(ulonglong *)(gen_frame + 0x4)) * param_3;
}

/* ref: FUN_00c40cf0 */
uint F_00c40cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40cf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c40d00 */
uint F_00c40d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  return ~((*(int *)&gen_args[2]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c40d20 */
uint F_00c40d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc40d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 | param_1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  return uVar1 - (uVar1 >> 1);
}

/* ref: FUN_00c40d50 */
uint F_00c40d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40d50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 | param_2 >> 1;
  uVar1 = param_1 | param_1 >> 1 | param_2 << 0x1f;
  uVar3 = uVar2 | uVar2 >> 2;
  uVar1 = uVar1 | uVar1 >> 2 | uVar2 << 0x1e;
  uVar2 = uVar3 | uVar3 >> 4;
  uVar1 = uVar1 | uVar1 >> 4 | uVar3 << 0x1c;
  uVar3 = uVar2 | uVar2 >> 8;
  uVar1 = uVar1 | uVar1 >> 8 | uVar2 << 0x18;
  uVar2 = uVar3 | uVar3 >> 0x10;
  uVar1 = uVar1 | uVar1 >> 0x10 | uVar3 << 0x10 | uVar2;
  return uVar1 - (uVar1 >> 1 | uVar2 << 0x1f);
}

/* ref: FUN_00c40dc0 */
uint F_00c40dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40dc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return ((param_1 + -1 + param_2) / param_2) * param_2;
}

/* ref: FUN_00c40de0 */
uint F_00c40de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(param_2 + param_4 + (uint)CARRY4(param_1,param_3) + -1 +
                       (uint)(param_1 + param_3 != 0),param_1 + param_3 + -1);
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 0)) = (int)((*(ulonglong *)(gen_frame + 0x4)) / CONCAT44(param_4,param_3));
  return (int)(*(ulonglong *)(gen_frame + 0x4)) * param_3;
}

/* ref: FUN_00c40e20 */
uint F_00c40e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

/* ref: FUN_00c40e40 */
uint F_00c40e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (param_1 + param_3) - 1U & ~(param_3 - 1U);
}

/* ref: FUN_00c40e70 */
uint F_00c40e70(unsigned int gen_a0)
{
  GEN_ENTER(0xc40e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 >> 0x10 | uVar1) + 1;
}

/* ref: FUN_00c40ea0 */
uint F_00c40ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 + -1 + (uint)(param_1 != 0);
  uVar2 = uVar1 | uVar1 >> 1;
  uVar3 = param_1 - 1U | param_1 - 1U >> 1 | uVar1 * ((int)0x80000000);
  uVar1 = uVar2 | uVar2 >> 2;
  uVar3 = uVar3 | uVar3 >> 2 | uVar2 << 0x1e;
  uVar2 = uVar1 | uVar1 >> 4;
  uVar3 = uVar3 | uVar3 >> 4 | uVar1 << 0x1c;
  uVar3 = uVar3 | uVar3 >> 8 | uVar2 << 0x18;
  uVar2 = uVar2 | uVar2 >> 8;
  return (uVar2 | uVar2 >> 0x10 | uVar3 | uVar3 >> 0x10 | uVar2 << 0x10) + 1;
}

/* ref: FUN_00c40f10 */
uint F_00c40f10(unsigned int gen_a0)
{
  GEN_ENTER(0xc40f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55555555) + (param_1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  uVar1 = (uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
  return (uVar1 >> 0x10) + (uVar1 & 0xffff);
}

/* ref: FUN_00c40f70 */
uint F_00c40f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40f70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1 >> 1 & 0x55555555;
  uVar2 = uVar1 + (param_1 & 0x55555555);
  uVar3 = (param_2 >> 1 & 0x55555555) + (param_2 & 0x55555555) +
          (uint)CARRY4(uVar1,param_1 & 0x55555555);
  uVar1 = uVar2 & 0x33333333;
  uVar2 = uVar2 >> 2 & 0x33333333;
  uVar4 = uVar2 + uVar1;
  uVar5 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333) + (uint)CARRY4(uVar2,uVar1);
  uVar3 = uVar4 & 0xf0f0f0f;
  uVar1 = uVar4 >> 4 & 0xf0f0f0f;
  uVar2 = uVar1 + uVar3;
  uVar3 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f) + (uint)CARRY4(uVar1,uVar3);
  uVar4 = uVar2 >> 8 & 0xff00ff;
  uVar2 = uVar2 & 0xff00ff;
  uVar1 = uVar4 + uVar2;
  uVar3 = (uVar3 >> 8 & 0xff00ff) + (uVar3 & 0xff00ff) + (uint)CARRY4(uVar4,uVar2);
  uVar2 = uVar1 & 0xffff;
  uVar1 = uVar1 >> 0x10;
  return (uVar3 >> 0x10) + (uVar3 & 0xffff) + (uint)CARRY4(uVar1,uVar2) + uVar1 + uVar2;
}

/* ref: FUN_00c41040 */
uint F_00c41040(unsigned int gen_a0)
{
  GEN_ENTER(0xc41040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}

/* ref: FUN_00c41060 */
uint F_00c41060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41060u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c40f70(param_1 - 1 & ~param_1,(param_2 - 1) + (uint)(param_1 != 0) & ~param_2);
  return uVar1;
}

/* ref: FUN_00c41090 */
uint F_00c41090(unsigned int gen_a0)
{
  GEN_ENTER(0xc41090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x20;
  }
  return 0x1f - iVar1;
}

/* ref: FUN_00c410c0 */
uint F_00c410c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc410c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x40;
  uVar2 = param_1;
  if (param_2 != 0) {
    iVar1 = 0x20;
    uVar2 = param_2;
  }
  if (uVar2 >> 0x10 != 0) {
    iVar1 = iVar1 + -0x10;
    uVar2 = uVar2 >> 0x10;
  }
  if (uVar2 >> 8 != 0) {
    iVar1 = iVar1 + -8;
    uVar2 = uVar2 >> 8;
  }
  if (uVar2 >> 4 != 0) {
    iVar1 = iVar1 + -4;
    uVar2 = uVar2 >> 4;
  }
  if (uVar2 >> 2 != 0) {
    iVar1 = iVar1 + -2;
    uVar2 = uVar2 >> 2;
  }
  if ((uVar2 & 0xfffffffe) == 0) {
    return iVar1 - uVar2;
  }
  return iVar1 - 2;
}

/* ref: FUN_00c41160 */
uint F_00c41160(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc41160u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *param_1 = 0;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_00c41180 */
uint F_00c41180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c411a0 */
uint F_00c411a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc411a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c411d0 */
uint F_00c411d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc411d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c41220 */
uint F_00c41220(unsigned int gen_a0)
{
  GEN_ENTER(0xc41220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c40a20(param_1);
  return uVar1;
}

/* ref: FUN_00c41230 */
uint F_00c41230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c412c0 */
int F_00c412c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc412c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c413e0 */
unsigned int F_00c413e0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc413e0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = REFG(float, 0x1087f04);
  *param_5 = (float)fVar3;
  param_5[1] = 0.0;
  param_5[4] = 0.0;
  param_5[5] = fVar1;
  param_5[6] = 0.0;
  param_5[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_5[9] = 0.0;
  param_5[0xc] = 0.0;
  param_5[8] = (float)fVar2;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[10] = (float)fVar3;
  return 0;
}

/* ref: FUN_00c41550 */
float10 F_00c41550(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc41550u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)param_5 = 0;
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  *(float *)(param_5 + 4) = (float)fVar1;
  *(undefined4 *)(param_5 + 8) = 0;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  *(float *)(param_5 + 0xc) = (float)fVar2;
  return extraout_ST1;
}

/* ref: FUN_00c415a0 */
unsigned int F_00c415a0(void)
{
  GEN_ENTER(0xc415a0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  for (puVar1 = REFG(undefined4, 0x14e9d8c); puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    F_00c411a0(puVar1[4],puVar1[3],puVar1[2],(int)puVar1[2] >> 0x1f);
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[5] = puVar1[2];
    }
  }
  return 0;
}

/* ref: FUN_00c415e0 */
uint F_00c415e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc415e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c41ec0(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c409f0();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x14e9d80))[param_3] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c41650 */
unsigned int F_00c41650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)this;
  if (piVar5 == (int *)0x0) {
    F_00c41f20(this,param_1);
    return 0;
  }
  do {
    if (param_1 < piVar5) {
      if (piVar5 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar5;
          param_1[1] = piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar5[1] = param_1;
          }
          piVar5[1] = (int)piVar3;
          if (piVar5 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar5) {
          param_1[2] = piVar5[2] + 0x10 + param_1[2];
          if (piVar5 == *(int * PTR32 *)this) {
            *(int *)this = *piVar5;
          }
          if (piVar5 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar5[1];
          }
          if (*piVar5 != 0) {
            *(int *)(*piVar5 + 4) = piVar5[1];
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            *(int *)piVar5[1] = *piVar5;
          }
          *piVar5 = 0;
          piVar5[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c41745;
      }
      break;
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    if (piVar5 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar5;
      param_1[1] = (int)piVar5;
      if (*piVar5 != 0) {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      *piVar5 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c41745: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c417b0 */
unsigned int F_00c417b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc417b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00c41650(this,param_1 + -0x10);
  }
  return 0;
}

/* ref: FUN_00c417d0 */
uint F_00c417d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc417d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c411d0(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c41fd0(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c41230(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c41650(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c418a0 */
uint F_00c418a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc418a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c417d0(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c418d0 */
uint F_00c418d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc418d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar1 = F_004c4060(&(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00c41a30 */
uint F_00c41a30(void)
{
  GEN_ENTER(0xc41a30u, 0u, 0u, 0u, 0u);
  F_00c415e0(&REFG(undefined, 0x14c9d80),0x20000,0,0);
  REFG(undefined4, 0x14c9d00) = REFG(undefined4, 0x14e9d80);
  *(undefined4 *)&REFG(undefined, 0x14e9d90) = 0;
  REFG(undefined4, 0x14e9d8c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14e9d94) = 0;
  return REFG(undefined4, 0x14e9d80);
}

/* ref: FUN_00c41a70 */
unsigned int F_00c41a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c417b0(this,param_1);
  return 0;
}

/* ref: FUN_00c41a80 */
uint F_00c41a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c417d0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c41a90 */
uint F_00c41a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc41a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c418a0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c41aa0 */
unsigned int F_00c41aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc41aa0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  uint in_edx;
  undefined4 * puVar1;
  
  this = REFG(undefined4, 0x14c9d00);
  if (*param_1 != 0) {
    in_edx = F_00c41a80(REFG(undefined4, 0x14c9d00),param_2,0,0x80);
    puVar1 = (undefined4 *)F_00c41a80(this,0x18,0,0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    if ((char)param_3 != '\0') {
      F_00c41180(param_2,in_edx,*param_1,(int)*param_1 >> 0x1f);
    }
    if ((param_1 < *(uint * PTR32 *)((int)this + 0x18)) ||
       (((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (int)*(uint * PTR32 *)((int)this + 0x18)))) <= param_1)) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = param_1;
    }
    puVar1[2] = *param_1;
    puVar1[3] = in_edx;
    puVar1[4] = param_2;
    F_00c42030(&REFG(undefined4, 0x14e9d8c),puVar1);
    *param_1 = in_edx;
  }
  return 0;
}

/* ref: FUN_00c41b50 */
unsigned int F_00c41b50(unsigned int gen_a0)
{
  GEN_ENTER(0xc41b50u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00c41aa0(in_eax,0x3c,1);
  piVar1 = (int *)*in_eax;
  F_00c41aa0(piVar1 + 1,piVar1[2] * 0x30,1);
  F_00c41aa0(piVar1 + 4,piVar1[5] * 0x30,1);
  F_00c41aa0(piVar1 + 7,piVar1[8] * 4,1);
  F_00c41aa0(piVar1 + 0xc,piVar1[0xd] * 4,1);
  F_00c41aa0(piVar1,0x54,1);
  F_00c41aa0(*piVar1 + 0xc,*(int *)(*piVar1 + 0x10) * 2,1);
  return 0;
}

/* ref: FUN_00c41be0 */
unsigned int F_00c41be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = in_eax;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = in_ecx;
  F_00c41b50(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
  F_00c41b50(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00d32a50((*(undefined * PTR32 *)(gen_frame + 0x8)));
  F_00d31650((*(undefined * PTR32 *)(gen_frame + 0x4)),uVar1);
  return 0;
}

/* ref: FUN_00c41c20 */
uint F_00c41c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41c20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  iVar3 = *piVar1;
  if (0 < iVar3) {
    piVar2 = piVar1 + 0x21;
    do {
      if (piVar2[-1] == 0) {
        F_00c41a30();
        F_00c41be0(*piVar2,piVar2[1]);
        if (piVar2[2] != 0) {
          F_00c41be0(piVar2[3],piVar2[4]);
        }
        F_00c415a0();
      }
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar1[1] = 0;
  uVar4 = F_00c46aa0(*(undefined4 *)(param_2 + 0x58),piVar1,0x80);
  return (uint)uVar4;
}

/* ref: FUN_00c41cb0 */
uint F_00c41cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41cb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c41cc0 */
uint F_00c41cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c41d00 */
uint F_00c41d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc41d00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c41d30 */
uint F_00c41d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41d30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c41d40 */
uint F_00c41d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c41d90 */
unsigned int F_00c41d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c41dd0 */
unsigned int F_00c41dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c41e40 */
uint F_00c41e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41e40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c41e60 */
uint F_00c41e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41e60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c41e80 */
unsigned int F_00c41e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c41ec0 */
unsigned int F_00c41ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c41f20 */
unsigned int F_00c41f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c41f80 */
unsigned int F_00c41f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc41f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c41fd0 */
unsigned int F_00c41fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c42030 */
unsigned int F_00c42030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar2 = piVar1;
    for (piVar3 = (int *)*piVar1; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      piVar2 = piVar3;
    }
    *piVar2 = *param_1;
    piVar1[1] = (int)param_1;
    if (*param_1 != 0) {
      *(int * PTR32 *)(*param_1 + 4) = piVar2;
    }
    *param_1 = (int)piVar1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)this = param_1;
  }
  return 0;
}

/* ref: FUN_00c42120 */
uint F_00c42120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42120u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_2 < *param_1);
}

/* ref: FUN_00c42140 */
uint F_00c42140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42140u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 <= *param_2);
}

/* ref: FUN_00c42160 */
uint F_00c42160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c42180 */
uint F_00c42180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c421b0 */
uint F_00c421b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc421b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c42350(param_2 + 0x50,*param_1);
  return uVar1;
}

/* ref: FUN_00c421d0 */
unsigned int F_00c421d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc421d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int iVar1;
  uint * puVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  int local_8;
  
  iVar1 = (int)param_4;
  if (param_3 < (int)param_4) {
    if ((int)param_4 - param_3 < 7) {
      *(undefined4 *)(param_1 + param_3 * 8) = *(undefined4 *)(param_2 + param_3 * 8);
      *(undefined4 *)(param_1 + 4 + param_3 * 8) = *(undefined4 *)(param_2 + 4 + param_3 * 8);
      iVar3 = param_3 + 1;
      if (iVar3 <= (int)param_4) {
        puVar2 = (uint *)(param_2 + iVar3 * 8);
        puVar4 = (uint *)(param_1 + -8 + iVar3 * 8);
        param_4 = puVar4;
        iVar6 = iVar3;
        do {
          for (; (param_3 < iVar3 && (*puVar2 < *puVar4)); puVar4 = puVar4 + -2) {
            puVar4[2] = *puVar4;
            puVar4[3] = puVar4[1];
            iVar3 = iVar3 + -1;
          }
          puVar4 = param_4 + 2;
          *(uint *)(param_1 + iVar3 * 8) = *puVar2;
          *(uint *)(param_1 + 4 + iVar3 * 8) = puVar2[1];
          iVar3 = iVar6 + 1;
          puVar2 = puVar2 + 2;
          param_4 = puVar4;
          iVar6 = iVar3;
        } while (iVar3 <= iVar1);
        return 0;
      }
    }
    else {
      iVar6 = param_3 + (int)((int)(uintptr_t)param_4) >> 1;
      F_00c421d0(param_2,param_1,param_3,(uint *)iVar6);
      iVar3 = iVar6 + 1;
      F_00c421d0(param_2,param_1,iVar3,param_4);
      puVar2 = (uint *)(param_1 + param_3 * 8);
      local_8 = param_3;
      puVar4 = (uint *)(param_2 + iVar3 * 8);
      puVar7 = (uint *)(param_2 + param_3 * 8);
      param_4 = (uint *)iVar3;
      while ((iVar3 = (int)param_4, param_3 <= iVar6 && (iVar3 = param_3, (int)param_4 <= iVar1))) {
        if (*puVar4 < *puVar7) {
          param_4 = (uint *)((int)param_4 + 1);
          *puVar2 = *puVar4;
          uVar5 = puVar4[1];
          puVar4 = puVar4 + 2;
        }
        else {
          param_3 = param_3 + 1;
          *puVar2 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        puVar2[1] = uVar5;
        local_8 = local_8 + 1;
        puVar2 = puVar2 + 2;
        if (iVar1 < local_8) {
          return 0;
        }
      }
      F_00c46aa0(param_1 + local_8 * 8,param_2 + iVar3 * 8,(iVar1 - local_8) * 8 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00c42350 */
uint F_00c42350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_eax;
  undefined * in_ecx;
  undefined * in_edx;
  
  iVar1 = param_1;
  iVar2 = *(int *)(param_1 + 4);
  in_edx = &REFG(undefined, 0x14e9e00);
  in_ecx = &REFG(undefined, 0x14e9e00) + (*(int *)(param_1 + 0x14) + 0x7fU & 0xffffff80);
  if (0 < *(int *)(param_1 + 0x18)) {
    in_eax = *(int *)(param_1 + 0xc);
    param_1 = *(int *)(param_1 + 0x18);
    do {
      F_00c42160(in_eax,in_edx,iVar2,iVar2 >> 0x1f);
      in_eax = *(int *)(iVar1 + 0xc);
      iVar2 = *((int *)GEN_TOP((in_edx + (in_eax - *(int *)(iVar1 + 0x10)))));
      in_edx = in_edx + in_eax;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  F_00c46aa0(in_ecx,&REFG(undefined, 0x14e9e00),*(undefined4 *)(iVar1 + 0x14));
  F_00c421d0(in_ecx,&REFG(undefined, 0x14e9e00),0,*(int *)(iVar1 + 0x1c) + -1);
  uVar3 = F_00c42180(*(undefined4 *)(iVar1 + 0x14),in_ecx,*(int *)(iVar1 + 8),
                       *(int *)(iVar1 + 8) >> 0x1f);
  return uVar3;
}

/* ref: FUN_00c423e0 */
uint F_00c423e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc423e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c42400 */
uint F_00c42400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c42420 */
uint F_00c42420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x58);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(uint *)(param_2 + 0x60);
  F_00c46aa0(&REFG(undefined, 0x151a200) + (uVar1 & 0xf),uVar1,uVar2);
  F_00c46e20(&REFG(undefined, 0x151a200) + (uVar3 & 0xf),&REFG(undefined, 0x151a200) + (uVar1 & 0xf),uVar2);
  uVar4 = F_00c46aa0(uVar3,&REFG(undefined, 0x151a200) + (uVar3 & 0xf),uVar2);
  return (uint)uVar4;
}

/* ref: FUN_00c42480 */
uint F_00c42480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c424a0 */
uint F_00c424a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc424a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x156f300))[param_1];
}

/* ref: FUN_00c424e0 */
uint F_00c424e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc424e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c42530 */
uint F_00c42530(void)
{
  GEN_ENTER(0xc42530u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c42540 */
unsigned int F_00c42540(unsigned int gen_a0)
{
  GEN_ENTER(0xc42540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x156f300))[param_1] = 0;
  }
  return 0;
}

/* ref: FUN_00c42560 */
uint F_00c42560(unsigned int gen_a0)
{
  GEN_ENTER(0xc42560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c42580 */
uint F_00c42580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c425a0 */
uint F_00c425a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc425a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c425c0 */
uint F_00c425c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc425c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c425f0 */
uint F_00c425f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc425f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c42640 */
uint F_00c42640(unsigned int gen_a0)
{
  GEN_ENTER(0xc42640u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c42560(param_1);
  return uVar1;
}

/* ref: FUN_00c42650 */
uint F_00c42650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c426e0 */
int F_00c426e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc426e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c42710 */
uint F_00c42710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c430f0(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c42530();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x156f300))[param_3] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c42780 */
unsigned int F_00c42780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)this;
  if (piVar5 == (int *)0x0) {
    F_00c43150(this,param_1);
    return 0;
  }
  do {
    if (param_1 < piVar5) {
      if (piVar5 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar5;
          param_1[1] = piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar5[1] = param_1;
          }
          piVar5[1] = (int)piVar3;
          if (piVar5 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar5) {
          param_1[2] = piVar5[2] + 0x10 + param_1[2];
          if (piVar5 == *(int * PTR32 *)this) {
            *(int *)this = *piVar5;
          }
          if (piVar5 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar5[1];
          }
          if (*piVar5 != 0) {
            *(int *)(*piVar5 + 4) = piVar5[1];
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            *(int *)piVar5[1] = *piVar5;
          }
          *piVar5 = 0;
          piVar5[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c42875;
      }
      break;
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    if (piVar5 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar5;
      param_1[1] = (int)piVar5;
      if (*piVar5 != 0) {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      *piVar5 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c42875: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c428e0 */
unsigned int F_00c428e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc428e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00c42780(this,param_1 + -0x10);
  }
  return 0;
}

/* ref: FUN_00c42900 */
uint F_00c42900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c425f0(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c43200(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c42650(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c42780(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c429d0 */
uint F_00c429d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc429d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c42900(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c42a00 */
uint F_00c42a00(void)
{
  GEN_ENTER(0xc42a00u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x154a284) = 0;
  F_00c42710(&REFG(undefined, 0x154f300),0x20000,0,0);
  REFG(undefined4, 0x154a280) = REFG(undefined4, 0x156f300);
  return REFG(undefined4, 0x156f300);
}

/* ref: FUN_00c42a30 */
unsigned int F_00c42a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c428e0(this,param_1);
  return 0;
}

/* ref: FUN_00c42a40 */
uint F_00c42a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c42900(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c42a50 */
uint F_00c42a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc42a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c429d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c42a60 */
unsigned int F_00c42a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42a60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_edx;
  
  if (*in_edi != 0) {
    in_edx = F_00c42a40(REFG(undefined4, 0x154a280),param_2,0,0x80);
    F_00c42580(param_2,in_edx,*in_edi,(int)*in_edi >> 0x1f);
    *(uint *)(&REFG(undefined, 0x154e288) + REFG(int, 0x154a284) * 4) = in_edx;
    REFG(int, 0x154a284) = REFG(int, 0x154a284) + 1;
    *in_edi = in_edx;
  }
  return 0;
}

/* ref: FUN_00c42ab0 */
unsigned int F_00c42ab0(void)
{
  GEN_ENTER(0xc42ab0u, 0u, 0u, 0u, 0u);
  int iVar1;
  undefined * this;
  
  this = REFG(undefined4, 0x154a280);
  iVar1 = REFG(int, 0x154a284);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    F_00c42a30(this,*(undefined4 *)(&REFG(undefined, 0x154e288) + iVar1 * 4));
  }
  REFG(int, 0x154a284) = 0;
  return 0;
}

/* ref: FUN_00c42ae0 */
uint F_00c42ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc42ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int * piVar6;
  int * in_edi;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(uint *)(gen_frame + 0x18)) = param_1;
  (*(uint *)(gen_frame + 0x1c)) = *(uint *)(param_2 + 0x40);
  (*(int *)(gen_frame + 0x8)) = *(int *)(param_2 + 0x48);
  (*(uint *)(gen_frame + 0xc)) = param_3;
  (*(int *)(gen_frame + 0x10)) = *(int *)(param_2 + 0x30);
  (*(int *)(gen_frame + 0x0)) = *(int *)(param_2 + 0x44);
  (*(int *)(gen_frame + 0x4)) = *(int *)(param_2 + 0x34);
  F_00c42a60(&(*(uint *)(gen_frame + 0x1c)),*(int *)(param_2 + 0x48) * 0x30);
  F_00c42a60(&(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 2 + 0xfU & 0xfffffff0);
  F_00c42a60(&(*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x4)) * 0x120);
  F_0054fa20(((undefined1 *)(gen_frame + 0xe0)),param_2);
  F_004ef5a0((uint)((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined1 *)(gen_frame + 0xe0)),(*(uint *)(gen_frame + 0x18)));
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (0 < (*(int *)(gen_frame + 0x4))) {
      piVar6 = (int *)((*(int *)(gen_frame + 0x10)) + 0xbc);
      do {
        iVar3 = *piVar6;
        if (iVar3 != 0) {
          if ((*(int *)(gen_frame + 0x14)) == 0) {
            iVar5 = 0x3c;
            in_edi = piVar6;
          }
          else {
            if ((*(int *)(gen_frame + 0x14)) != 1) goto LAB_00c42c14;
            if (*(char *)(iVar3 + 0x28) == '\0') {
              F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
              return 0xffffffff;
            }
            iVar5 = *(int *)(iVar3 + 0x14) * 0x30;
            in_edi = (int *)(iVar3 + 0x10);
          }
          F_00c42a60(in_edi,iVar5);
        }
LAB_00c42c14: ;
        iVar3 = (*(uint *)(gen_frame + 0x18)) + 1;
        piVar6 = piVar6 + 0x48;
        (*(uint *)(gen_frame + 0x18)) = iVar3;
      } while (iVar3 < (*(int *)(gen_frame + 0x4)));
    }
    uVar7 = (*(uint *)(gen_frame + 0xc));
    iVar3 = (*(int *)(gen_frame + 0x14)) + 1;
    (*(int *)(gen_frame + 0x14)) = iVar3;
    if (1 < iVar3) {
      iVar3 = 0;
      if (0 < (*(int *)(gen_frame + 0x8))) {
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0xc));
        do {
          uVar1 = *(ushort *)((*(int *)(gen_frame + 0x0)) + iVar3 * 2);
          bVar4 = (byte)(uVar1 >> 0xc);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = uVar1 & 0xfff;
          uVar2 = CONCAT22(uVar1,(undefined2)(*(uint *)(gen_frame + 0x1c)));
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = bVar4;
          (*(uint *)(gen_frame + 0x1c)) = CONCAT31((int3)((uint)uVar2 >> 8),bVar4) & 0xfffffff;
          F_0063a020(((undefined1 *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x10)));
          F_004ef5a0((uint)((undefined1 *)(gen_frame + 0x60)),(uint)((undefined1 *)(gen_frame + 0x20)),(uint)((undefined1 *)(gen_frame + 0xa0)));
          F_004f35b0(uVar7,(*(uint *)(gen_frame + 0xc)) + uVar7,(uint)((undefined1 *)(gen_frame + 0x60)));
          iVar3 = iVar3 + 1;
          uVar7 = uVar7 + 0x30;
        } while (iVar3 < (*(int *)(gen_frame + 0x8)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c42d20 */
uint F_00c42d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 * in_edx;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_eax;
  undefined4 * puVar6;
  undefined * this;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar1 = *param_1;
  uVar2 = *(uint *)(param_2 + 0x60);
  uVar5 = *(uint *)(param_2 + 0x58);
  (*(uint *)(gen_frame + 0x0)) = 0;
  F_00c42a00();
  in_edx = (undefined4 *)F_00c42a40(REFG(undefined4, 0x154a280),0x4050,0,0x80);
  iVar3 = *(int *)(param_2 + 0x50);
  F_00c42580(0x50,in_edx,iVar3,iVar3 >> 0x1f);
  if (uVar5 < uVar2) {
    iVar3 = iVar3 + 0x50 + uVar5 * 8;
    F_00c425a0((uVar2 - uVar5) * 8,in_edx + uVar5 * 2 + 0x14,iVar3,iVar3 >> 0x1f);
  }
  REFG(undefined4, 0x154f28c) = 0;
  REFG(undefined4, 0x154f288) = 0;
  this = REFG(undefined4, 0x154a280);
  for (; REFG(undefined4, 0x154a280) = this, uVar5 < uVar2; uVar5 = uVar5 + 1) {
    (&REFG(undefined4, 0x154a288))[REFG(undefined4, 0x154f28c)] = uVar5;
    REFG(undefined4, 0x154f28c) = REFG(undefined4, 0x154f28c) + 1;
    this = REFG(undefined4, 0x154a280);
  }
  puVar6 = in_edx;
  puVar7 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar5 = F_00c42a40(this,0x50,0,0x80);
  uVar2 = uVar5;
  while ((*(uint *)(gen_frame + 0x4)) = 0, REFG(undefined4, 0x154f28c) != 0) {
    do {
      iVar3 = (&REFG(undefined4, 0x154a288))[(*(uint *)(gen_frame + 0x4))];
      F_00c42580(0x50,uVar5,in_edx[iVar3 * 2 + 0x15],(int)in_edx[iVar3 * 2 + 0x15] >> 0x1f);
      if ((*(uint *)(gen_frame + 0x0)) != 0) {
        F_00c42a30(this,(*(uint *)(gen_frame + 0x0)));
      }
      in_eax = *(int *)(uVar5 + 0x48) * 0x30;
      (*(uint *)(gen_frame + 0x0)) = F_00c42a40(this,in_eax,0,0x80);
      uVar2 = F_00c42ae0(((undefined4 *)(gen_frame + 0x10)),uVar5,(*(uint *)(gen_frame + 0x0)),uVar1);
      if ((int)uVar2 < 0) {
        (&REFG(undefined4, 0x154c288))[REFG(undefined4, 0x154f288)] = iVar3;
        REFG(undefined4, 0x154f288) = REFG(undefined4, 0x154f288) + 1;
      }
      else {
        F_00c425c0(in_eax,(*(uint *)(gen_frame + 0x0)),in_edx[iVar3 * 2 + 0x14],(int)in_edx[iVar3 * 2 + 0x14] >> 0x1f
                    );
      }
      uVar4 = REFG(undefined4, 0x154f288);
      F_00c42ab0();
      uVar2 = (*(uint *)(gen_frame + 0x4)) + 1;
      this = REFG(undefined4, 0x154a280);
      (*(uint *)(gen_frame + 0x4)) = uVar2;
    } while (uVar2 < REFG(undefined4, 0x154f28c));
    if (uVar4 == 0) break;
    REFG(undefined4, 0x154f28c) = REFG(undefined4, 0x154f288);
    puVar6 = &REFG(undefined4, 0x154c288);
    puVar7 = &REFG(undefined4, 0x154a288);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    REFG(undefined4, 0x154f288) = 0;
    this = REFG(undefined4, 0x154a280);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar2;
}

/* ref: FUN_00c42f60 */
uint F_00c42f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42f60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c42f70 */
uint F_00c42f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c42fb0 */
uint F_00c42fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc42fb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c42fe0 */
uint F_00c42fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42fe0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c42ff0 */
uint F_00c42ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc42ff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c43000 */
unsigned int F_00c43000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c43040 */
unsigned int F_00c43040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c430b0 */
uint F_00c430b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc430b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c430d0 */
uint F_00c430d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc430d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c430f0 */
unsigned int F_00c430f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc430f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c43150 */
unsigned int F_00c43150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c431b0 */
unsigned int F_00c431b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc431b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c43200 */
unsigned int F_00c43200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c43270 */
unsigned int F_00c43270(void)
{
  GEN_ENTER(0xc43270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43280 */
uint F_00c43280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x80 + param_2 * 4;
}

/* ref: FUN_00c432a0 */
uint F_00c432a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc432a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c432c0 */
uint F_00c432c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc432c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x1592480))[param_1];
}

/* ref: FUN_00c43300 */
uint F_00c43300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c43350 */
uint F_00c43350(void)
{
  GEN_ENTER(0xc43350u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43360 */
unsigned int F_00c43360(unsigned int gen_a0)
{
  GEN_ENTER(0xc43360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x1592480))[param_1] = 0;
  }
  return 0;
}

/* ref: FUN_00c43380 */
uint F_00c43380(unsigned int gen_a0)
{
  GEN_ENTER(0xc43380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c433a0 */
uint F_00c433a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc433a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (in_eax != 0) {
    uVar2 = F_00c46aa0(in_ecx,param_3,in_eax);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c433c0 */
uint F_00c433c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc433c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (in_eax != 0) {
    uVar2 = F_00c46aa0(in_ecx,param_3,in_eax);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c433e0 */
uint F_00c433e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc433e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (in_eax != 0) {
    uVar2 = F_00c46aa0(param_3,param_2,in_eax);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c43410 */
uint F_00c43410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43410u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (in_eax != 0) {
    uVar1 = F_00c433e0(in_eax,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00c43430 */
uint F_00c43430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c43480 */
uint F_00c43480(unsigned int gen_a0)
{
  GEN_ENTER(0xc43480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c43380(param_1);
  return uVar1;
}

/* ref: FUN_00c43490 */
uint F_00c43490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c43520 */
int F_00c43520(unsigned int gen_a0)
{
  GEN_ENTER(0xc43520u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c43550 */
uint F_00c43550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c43c30(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c43350();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x1592480))[param_3] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c435c0 */
unsigned int F_00c435c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc435c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)this;
  if (piVar5 == (int *)0x0) {
    F_00c43c90(this,param_1);
    return 0;
  }
  do {
    if (param_1 < piVar5) {
      if (piVar5 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar5;
          param_1[1] = piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar5[1] = param_1;
          }
          piVar5[1] = (int)piVar3;
          if (piVar5 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar5) {
          param_1[2] = piVar5[2] + 0x10 + param_1[2];
          if (piVar5 == *(int * PTR32 *)this) {
            *(int *)this = *piVar5;
          }
          if (piVar5 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar5[1];
          }
          if (*piVar5 != 0) {
            *(int *)(*piVar5 + 4) = piVar5[1];
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            *(int *)piVar5[1] = *piVar5;
          }
          *piVar5 = 0;
          piVar5[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c436b5;
      }
      break;
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    if (piVar5 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar5;
      param_1[1] = (int)piVar5;
      if (*piVar5 != 0) {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      *piVar5 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c436b5: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c43720 */
unsigned int F_00c43720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00c435c0(this,param_1 + -0x10);
  }
  return 0;
}

/* ref: FUN_00c43740 */
uint F_00c43740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c43430(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c43d40(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c43490(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c435c0(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c43810 */
uint F_00c43810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c43740(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c43840 */
uint F_00c43840(void)
{
  GEN_ENTER(0xc43840u, 0u, 0u, 0u, 0u);
  F_00c43550(&REFG(undefined, 0x1572480),0x20000,0,0);
  REFG(undefined4, 0x156f380) = REFG(undefined4, 0x1592480);
  return REFG(undefined4, 0x1592480);
}

/* ref: FUN_00c43870 */
unsigned int F_00c43870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c43720(this,param_1);
  return 0;
}

/* ref: FUN_00c43880 */
uint F_00c43880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c43740(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c43890 */
uint F_00c43890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c43810(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c438a0 */
uint F_00c438a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc438a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  uint uVar4;
  int * in_ecx;
  uint in_ecx_00;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int in_eax;
  
  iVar6 = *(int *)(param_2 + 0x50);
  uVar4 = F_00c433a0(0x80,&REFG(undefined, 0x156f400),iVar6,iVar6 >> 0x1f);
  uVar5 = *(uint *)(param_2 + 0x58);
  iVar1 = *(int *)(param_2 + 0x60);
  if ((int)uVar5 < iVar1) {
    iVar6 = iVar6 + 0x80 + uVar5 * 4;
    F_00c433c0((iVar1 - uVar5) * 4,&REFG(undefined, 0x156f480) + uVar5 * 4,iVar6,iVar6 >> 0x1f);
    F_00c43840();
    F_00c48350(&REFG(undefined, 0x1571480),0,0x1000);
    uVar4 = 2;
    puVar7 = &REFG(undefined4, 0x1570480);
    for (iVar6 = 0x400; this = REFG(undefined4, 0x156f380), iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 2;
      puVar7 = puVar7 + 1;
    }
    while (REFG(undefined4, 0x156f380) = this, (int)uVar5 < iVar1) {
      iVar6 = *(int *)(&REFG(undefined, 0x156f480) + uVar5 * 4);
      in_ecx = (int *)F_00c43880(this,0x3c,0,0x80);
      F_00c433a0(0x3c,in_ecx,iVar6,iVar6 >> 0x1f);
      uVar4 = F_00c43880(this,0x54,0,0x80);
      F_00c433a0(0x54,uVar4,*in_ecx,*in_ecx >> 0x1f);
      iVar2 = in_ecx[0xb];
      iVar3 = in_ecx[0xd];
      in_eax = iVar2 * 0x30;
      in_ecx_00 = F_00c43880(REFG(undefined4, 0x156f380),in_eax,0,0x80);
      F_00c433a0(in_eax,in_ecx_00,*(int *)(uVar4 + 0x24),*(int *)(uVar4 + 0x24) >> 0x1f);
      *(undefined2 *)(in_ecx + 10) = 0x100;
      F_00c43410(iVar2 * 4,&REFG(undefined4, 0x1570480),in_ecx[7],in_ecx[7] >> 0x1f);
      F_00c43410(iVar3 * 4,&REFG(undefined, 0x1571480),in_ecx[0xc],in_ecx[0xc] >> 0x1f);
      F_00c43410(in_eax,in_ecx_00,in_ecx[1],in_ecx[1] >> 0x1f);
      F_00c43410(0x3c,in_ecx,iVar6,iVar6 >> 0x1f);
      uVar5 = uVar5 + 1;
      uVar4 = uVar5;
      this = REFG(undefined4, 0x156f380);
    }
  }
  return uVar4;
}

/* ref: FUN_00c43a60 */
uint F_00c43a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43a60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c43a70 */
uint F_00c43a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c43ab0 */
uint F_00c43ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xc43ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c43ae0 */
uint F_00c43ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43ae0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c43af0 */
uint F_00c43af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c43b40 */
unsigned int F_00c43b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c43b80 */
unsigned int F_00c43b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c43bf0 */
uint F_00c43bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43bf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c43c10 */
uint F_00c43c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c43c30 */
unsigned int F_00c43c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c43c90 */
unsigned int F_00c43c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c43cf0 */
unsigned int F_00c43cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c43d40 */
unsigned int F_00c43d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c43d90 */
uint F_00c43d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c43de0 */
uint F_00c43de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c43e30 */
uint F_00c43e30(void)
{
  GEN_ENTER(0xc43e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43e40 */
unsigned int F_00c43e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc43e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    *(undefined4 *)(&REFG(undefined, 0x159248c) + param_1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00c43e60 */
uint F_00c43e60(unsigned int gen_a0)
{
  GEN_ENTER(0xc43e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c43e80 */
unsigned int F_00c43e80(void)
{
  GEN_ENTER(0xc43e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43e90 */
uint F_00c43e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c43ee0 */
uint F_00c43ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc43ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c43e60(param_1);
  return uVar1;
}

/* ref: FUN_00c43ef0 */
uint F_00c43ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c43f80 */
int F_00c43f80(unsigned int gen_a0)
{
  GEN_ENTER(0xc43f80u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c43fb0 */
uint F_00c43fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c44470(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c43e30();
  this[5] = uVar2;
  if (param_3 < 3) {
    *(undefined4 * PTR32 *)(&REFG(undefined, 0x159248c) + param_3 * 4) = this;
  }
  return (uint)this;
}

/* ref: FUN_00c44020 */
unsigned int F_00c44020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)this;
  if (piVar5 == (int *)0x0) {
    F_00c444d0(this,param_1);
    return 0;
  }
  do {
    if (param_1 < piVar5) {
      if (piVar5 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar5;
          param_1[1] = piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar5[1] = param_1;
          }
          piVar5[1] = (int)piVar3;
          if (piVar5 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar5) {
          param_1[2] = piVar5[2] + 0x10 + param_1[2];
          if (piVar5 == *(int * PTR32 *)this) {
            *(int *)this = *piVar5;
          }
          if (piVar5 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar5[1];
          }
          if (*piVar5 != 0) {
            *(int *)(*piVar5 + 4) = piVar5[1];
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            *(int *)piVar5[1] = *piVar5;
          }
          *piVar5 = 0;
          piVar5[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c44115;
      }
      break;
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    if (piVar5 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar5;
      param_1[1] = (int)piVar5;
      if (*piVar5 != 0) {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      *piVar5 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c44115: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c44180 */
unsigned int F_00c44180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00c44020(this,param_1 + -0x10);
  }
  return 0;
}

/* ref: FUN_00c441a0 */
uint F_00c441a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc441a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c43e90(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c44580(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c43ef0(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c44020(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c44270 */
uint F_00c44270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c441a0(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c442a0 */
unsigned int F_00c442a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c44180(this,param_1);
  return 0;
}

/* ref: FUN_00c442b0 */
uint F_00c442b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc442b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c441a0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c442c0 */
uint F_00c442c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc442c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c44270(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c442e0 */
uint F_00c442e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c442f0 */
uint F_00c442f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44330 */
uint F_00c44330(unsigned int gen_a0)
{
  GEN_ENTER(0xc44330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c44360 */
uint F_00c44360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44360u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44370 */
uint F_00c44370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44380 */
unsigned int F_00c44380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c443c0 */
unsigned int F_00c443c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc443c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c44430 */
uint F_00c44430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c44450 */
uint F_00c44450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c44470 */
unsigned int F_00c44470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c444d0 */
unsigned int F_00c444d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc444d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c44530 */
unsigned int F_00c44530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c44580 */
unsigned int F_00c44580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c445d0 */
unsigned int F_00c445d0(void)
{
  GEN_ENTER(0xc445d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c445e0 */
uint F_00c445e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc445e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c44600 */
uint F_00c44600(unsigned int gen_a0)
{
  GEN_ENTER(0xc44600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x15b2580))[param_1];
}

/* ref: FUN_00c44610 */
byte F_00c44610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(uint *)((int)this + 0x18) <= param_1) &&
     (param_1 < *(int *)((int)this + 0x10) + *(uint *)((int)this + 0x18))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c44670 */
uint F_00c44670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c446c0 */
uint F_00c446c0(void)
{
  GEN_ENTER(0xc446c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c446d0 */
unsigned int F_00c446d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc446d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x15b2580))[param_1] = 0;
  }
  return 0;
}

/* ref: FUN_00c446f0 */
uint F_00c446f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc446f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c44710 */
uint F_00c44710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c44730 */
uint F_00c44730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c44760 */
uint F_00c44760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c447b0 */
uint F_00c447b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc447b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c446f0(param_1);
  return uVar1;
}

/* ref: FUN_00c447c0 */
uint F_00c447c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc447c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c44850 */
int F_00c44850(unsigned int gen_a0)
{
  GEN_ENTER(0xc44850u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c44880 */
unsigned int F_00c44880(void)
{
  GEN_ENTER(0xc44880u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  for (puVar1 = REFG(undefined4, 0x15b258c); puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    F_00c44730(puVar1[4],puVar1[3],puVar1[2],(int)puVar1[2] >> 0x1f);
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[5] = puVar1[2];
    }
  }
  return 0;
}

/* ref: FUN_00c448c0 */
uint F_00c448c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc448c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c45060(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c446c0();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x15b2580))[param_3] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c44930 */
unsigned int F_00c44930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)this;
  if (piVar5 == (int *)0x0) {
    F_00c450c0(this,param_1);
    return 0;
  }
  do {
    if (param_1 < piVar5) {
      if (piVar5 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar5;
          param_1[1] = piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar5[1] = param_1;
          }
          piVar5[1] = (int)piVar3;
          if (piVar5 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar5) {
          param_1[2] = piVar5[2] + 0x10 + param_1[2];
          if (piVar5 == *(int * PTR32 *)this) {
            *(int *)this = *piVar5;
          }
          if (piVar5 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar5[1];
          }
          if (*piVar5 != 0) {
            *(int *)(*piVar5 + 4) = piVar5[1];
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            *(int *)piVar5[1] = *piVar5;
          }
          *piVar5 = 0;
          piVar5[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c44a25;
      }
      break;
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 4);
    if (piVar5 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar5;
      param_1[1] = (int)piVar5;
      if (*piVar5 != 0) {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      *piVar5 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c44a25: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c44a90 */
unsigned int F_00c44a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00c44930(this,param_1 + -0x10);
  }
  return 0;
}

/* ref: FUN_00c44ab0 */
uint F_00c44ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c44760(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c45170(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c447c0(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c44930(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c44b80 */
uint F_00c44b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c44ab0(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c44bb0 */
uint F_00c44bb0(void)
{
  GEN_ENTER(0xc44bb0u, 0u, 0u, 0u, 0u);
  F_00c448c0(&REFG(undefined, 0x1592580),0x20000,0,0);
  REFG(undefined4, 0x1592500) = REFG(undefined4, 0x15b2580);
  *(undefined4 *)&REFG(undefined, 0x15b2590) = 0;
  REFG(undefined4, 0x15b258c) = 0;
  *(undefined4 *)&REFG(undefined, 0x15b2594) = 0;
  return REFG(undefined4, 0x15b2580);
}

/* ref: FUN_00c44bf0 */
unsigned int F_00c44bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c44a90(this,param_1);
  return 0;
}

/* ref: FUN_00c44c00 */
uint F_00c44c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c44ab0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c44c10 */
uint F_00c44c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c44b80(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c44c20 */
unsigned int F_00c44c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44c20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_edx;
  
  if (*in_edi != 0) {
    in_edx = F_00c44c00(REFG(undefined4, 0x1592500),param_2,0,0x80);
    F_00c44710(param_2,in_edx,*in_edi,(int)*in_edi >> 0x1f);
    *in_edi = in_edx;
  }
  return 0;
}

/* ref: FUN_00c44c60 */
unsigned int F_00c44c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44c60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint in_edx;
  undefined4 * puVar1;
  
  this = REFG(undefined4, 0x1592500);
  if (*in_edi != 0) {
    in_edx = F_00c44c00(REFG(undefined4, 0x1592500),param_2,0,0x80);
    puVar1 = (undefined4 *)F_00c44c00(this,0x18,0,0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    F_00c44710(param_2,in_edx,*in_edi,(int)*in_edi >> 0x1f);
    if ((in_edi < *(uint * PTR32 *)((int)this + 0x18)) ||
       (((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (int)*(uint * PTR32 *)((int)this + 0x18)))) <= in_edi)) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = in_edi;
    }
    puVar1[2] = *in_edi;
    puVar1[3] = in_edx;
    puVar1[4] = param_2;
    F_00c451d0(&REFG(undefined4, 0x15b258c),puVar1);
    *in_edi = in_edx;
  }
  return 0;
}

/* ref: FUN_00c44d00 */
unsigned int F_00c44d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44d00u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * in_edi;
  int iVar1;
  
  in_edi = (int *)*in_ecx;
  if (in_eax == 0) {
    F_00c44c60(in_ecx,0x3c);
  }
  else {
    if (in_eax == 1) {
      F_00c44c60(in_edi + 1,in_edi[2] * 0x30);
      F_00c44c60(in_edi + 4,in_edi[5] * 0x30);
      F_00c44c60(in_edi + 7,in_edi[8] * 4);
      F_00c44c60(in_edi + 0xc,in_edi[0xd] * 4);
      F_00c44c60(in_edi,0x54);
      return 0;
    }
    if ((in_eax == 2) && (iVar1 = *in_edi, iVar1 != 0)) {
      F_00c44c60(iVar1 + 0xc,*(int *)(iVar1 + 0x10) * 2);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c44d90 */
unsigned int F_00c44d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * in_ecx;
  undefined * this_00;
  int in_eax;
  
  in_ecx = (int *)((int)this + 0xbc);
  if (*(int *)((int)this + 0xbc) != 0) {
    in_eax = 0;
    while ((*in_ecx == 0 || (F_00c44d00(in_eax,in_ecx), in_eax != 3))) {
      in_eax = in_eax + 1;
      if (3 < in_eax) {
        return 0;
      }
    }
    this_00 = (undefined *)*in_ecx;
    if (this_00 != (undefined *)0x0) {
      F_00d31f70(this_00);
      F_00d31b70(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00c44de0 */
unsigned int F_00c44de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x50);
  if (iVar2 != 0) {
    piVar3 = (int *)((*(int *)&gen_args[1]) + 0x58);
    do {
      (*(undefined4 * PTR32 *)&gen_args[0]) = (undefined4 *)*piVar3;
      if ((*(undefined4 * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
        F_00c44bb0();
        F_00c44c20(&(*(undefined4 * PTR32 *)&gen_args[0]),0x120);
        F_00c44d90((*(undefined4 * PTR32 *)&gen_args[0]),uVar1);
        F_00c44880();
      }
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00c44e50 */
uint F_00c44e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44e50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44e60 */
uint F_00c44e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44ea0 */
uint F_00c44ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xc44ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c44ed0 */
uint F_00c44ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44ee0 */
uint F_00c44ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44f30 */
unsigned int F_00c44f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c44f70 */
unsigned int F_00c44f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c44fe0 */
uint F_00c44fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c45000 */
uint F_00c45000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c45020 */
unsigned int F_00c45020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c45060 */
unsigned int F_00c45060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c450c0 */
unsigned int F_00c450c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc450c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return 0;
}

/* ref: FUN_00c45120 */
unsigned int F_00c45120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc45120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c45170 */
unsigned int F_00c45170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c451d0 */
unsigned int F_00c451d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc451d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 0;
    }
    piVar2 = piVar1;
    for (piVar3 = (int *)*piVar1; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      piVar2 = piVar3;
    }
    *piVar2 = *param_1;
    piVar1[1] = (int)param_1;
    if (*param_1 != 0) {
      *(int * PTR32 *)(*param_1 + 4) = piVar2;
    }
    *param_1 = (int)piVar1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)this = param_1;
  }
  return 0;
}

/* ref: FUN_00c45290 */
unsigned int F_00c45290(void)
{
  GEN_ENTER(0xc45290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c452a0 */
uint F_00c452a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc452a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_5 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00c452c0 */
uint F_00c452c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc452c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte * pbVar2;
  undefined * PTR32 * ppuVar3;
  undefined1 * in_ecx;
  int iVar4;
  bool bVar5;
  
  in_ecx = ((undefined1 *)(gen_frame + 0xc));
  iVar4 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_01050e60(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x14)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined1, 0x15b2600),0);
  F_01050ed0(0);
  ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x111864c));
  pbVar2 = &REFG(undefined1, 0x15b2600);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *(byte *)ppuVar3;
    if (bVar1 != *(byte *)ppuVar3) {
LAB_00c45338: ;
      iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto joined_r0x00c4533f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < *(byte *)((int)ppuVar3 + 1);
    if (bVar1 != *(byte *)((int)ppuVar3 + 1)) goto LAB_00c45338;
    pbVar2 = pbVar2 + 2;
    ppuVar3 = (undefined * PTR32 *)((int)ppuVar3 + 2);
  } while (bVar1 != 0);
  iVar4 = 0;
joined_r0x00c4533f: ;
  do {
    if (iVar4 == 0) {
      iVar4 = 1;
      do {
        F_01050e50();
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return 0;
    }
    F_00c49908(&REFG(undefined1, 0x15b2600),0x4000,"okaeri");
    F_01050f10(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined1, 0x15b2600),0);
    F_01050f40(0);
    F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined1, 0x15b2600),0);
    F_01050ed0(0);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x111864c));
    pbVar2 = &REFG(undefined1, 0x15b2600);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *(byte *)ppuVar3;
      if (bVar1 != *(byte *)ppuVar3) {
LAB_00c453b4: ;
        iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto joined_r0x00c4533f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < *(byte *)((int)ppuVar3 + 1);
      if (bVar1 != *(byte *)((int)ppuVar3 + 1)) goto LAB_00c453b4;
      pbVar2 = pbVar2 + 2;
      ppuVar3 = (undefined * PTR32 *)((int)ppuVar3 + 2);
    } while (bVar1 != 0);
    iVar4 = 0;
  } while( true );
}

/* ref: FUN_00c453e0 */
uint F_00c453e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc453e0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < REFG(int, 0x15b6600)) {
    pcVar1 = param_1;
    do {
      if (*pcVar1 != pcVar1[param_2 - (int)param_1]) {
        return (int)param_1[iVar2] - (int)*(char *)(iVar2 + param_2);
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 < REFG(int, 0x15b6600));
  }
  return 0;
}

/* ref: FUN_00c45430 */
uint F_00c45430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45430u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  if (0 < REFG(int, 0x15b6600)) {
    pcVar2 = param_1;
    do {
      if (*pcVar2 != pcVar2[param_2 - (int)param_1]) {
        return (int)*(char *)(iVar1 + param_2) - (int)param_1[iVar1];
      }
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (iVar1 < REFG(int, 0x15b6600));
  }
  return 0;
}

/* ref: FUN_00c45480 */
uint F_00c45480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  gen_size32 _SizeOfElements;
  code * _PtFuncCompare;
  undefined1 * in_ecx;
  undefined * puVar1;
  int iVar2;
  uint uVar3;
  
  in_ecx = ((undefined1 *)(gen_frame + 0x0));
  iVar2 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_01050e60(((undefined1 *)(gen_frame + 0x0)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x8)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x15b6680),0);
  F_01050ed0(0);
  (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
  (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
  _SizeOfElements = REFG(undefined4, 0x15b6684);
  do {
    REFG(undefined4, 0x15b6600) = _SizeOfElements;
    REFG(undefined4, 0x15b6684) = _SizeOfElements;
    (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
    if (REFG(undefined4, 0x15b6688) == 0) {
      iVar2 = 1;
      REFG(undefined4, 0x15b6688) = 0;
      (*(gen_size32 *)(gen_frame + 0x18)) = 0;
      do {
        F_01050e50();
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      return 0;
    }
    uVar3 = _SizeOfElements * REFG(undefined4, 0x15b6688);
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
    if (uVar3 != 0) {
      puVar1 = &REFG(undefined, 0x15b6680);
      do {
        F_01050ea0(((undefined1 *)(gen_frame + 0x0)),puVar1,0);
        F_01050ed0(0);
        if (uVar3 < 0x4001) break;
        puVar1 = puVar1 + 0x4000;
        uVar3 = uVar3 - 0x4000;
      } while (uVar3 != 0);
    }
    _PtFuncCompare = ((code *)REFP(0xc453e0));
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      _PtFuncCompare = ((code *)REFP(0xc45430));
    }
    F_00c4f040(&REFG(undefined, 0x15b6680),(*(gen_size32 *)(gen_frame + 0x18)),_SizeOfElements,_PtFuncCompare);
    if ((*(uint *)(gen_frame + 0x10)) != 0) {
      puVar1 = &REFG(undefined, 0x15b6680);
      uVar3 = (*(uint *)(gen_frame + 0x10));
      do {
        F_01050f10(((undefined1 *)(gen_frame + 0x8)),puVar1,0);
        F_01050f40(0);
        if (uVar3 < 0x4001) break;
        puVar1 = puVar1 + 0x4000;
        uVar3 = uVar3 - 0x4000;
      } while (uVar3 != 0);
    }
    F_01050ea0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x15b6680),0);
    F_01050ed0(0);
    (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
    (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
    _SizeOfElements = REFG(undefined4, 0x15b6684);
  } while( true );
}

/* ref: FUN_00c455f0 */
uint F_00c455f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc455f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * in_ecx;
  int iVar1;
  
  in_ecx = ((undefined1 *)(gen_frame + 0xc));
  iVar1 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_01050e60(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x14)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x15d6700),0);
  F_01050ed0(0);
  *(int *)&REFG(undefined, 0x15d6680) = REFG(int, 0x15d6704) + *(int *)&REFG(undefined, 0x15d6700);
  F_01050f10(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x15d6680),0);
  F_01050f40(0);
  iVar1 = 1;
  do {
    F_01050e50();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}

/* ref: FUN_00c45686 */
uint F_00c45686(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45686u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118664));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456a9 */
uint F_00c456a9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456a9u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456d2 */
uint F_00c456d2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456d2u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456fb */
uint F_00c456fb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456fbu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c45724 */
uint F_00c45724(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45724u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c4574d */
unsigned int F_00c4574d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4574du, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5b54));
}

/* ref: FUN_00c4577d */
uint F_00c4577d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4577du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118664));
  return (uint)this;
}

/* ref: FUN_00c4579a */
unsigned int F_00c4579a(unsigned int gen_a0)
{
  GEN_ENTER(0xc4579au, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5bc8));
}

/* ref: FUN_00c457ca */
uint F_00c457ca(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc457cau, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
  return (uint)this;
}

/* ref: FUN_00c457e7 */
unsigned int F_00c457e7(unsigned int gen_a0)
{
  GEN_ENTER(0xc457e7u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c04));
}

/* ref: FUN_00c45817 */
uint F_00c45817(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45817u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
  return (uint)this;
}

/* ref: FUN_00c45834 */
unsigned int F_00c45834(unsigned int gen_a0)
{
  GEN_ENTER(0xc45834u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c40));
}

/* ref: FUN_00c45864 */
uint F_00c45864(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45864u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
  return (uint)this;
}

/* ref: FUN_00c45881 */
unsigned int F_00c45881(unsigned int gen_a0)
{
  GEN_ENTER(0xc45881u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c98));
}

/* ref: std::logic_error::vf0 */
uint F_00c458b1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458b1u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::invalid_argument::vf0 */
uint F_00c458d2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458d2u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::length_error::vf0 */
uint F_00c458f3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458f3u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::out_of_range::vf0 */
uint F_00c45914(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45914u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::overflow_error::vf0 */
uint F_00c45935(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45935u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c45956 */
uint F_00c45956(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45956u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
  return (uint)this;
}

/* ref: FUN_00c45973 */
uint F_00c45973(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45973u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
  return (uint)this;
}

/* ref: __Tolower */
int F_00c45990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * p_Var1;
  uint uVar2;
  short * _Code_page;
  int iVar3;
  ushort * puVar4;
  
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    uVar2 = F_00c54bcd();
    (*(LPCWSTR *)(gen_frame + 0x0)) = *(LPCWSTR *)(uVar2 + 8);
    _Code_page = (short *)F_00c54b81();
  }
  else {
    (*(LPCWSTR *)(gen_frame + 0x0)) = (LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1]))));
    _Code_page = (*((short * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[1])) + 4)))));
  }
  if ((*(LPCWSTR *)(gen_frame + 0x0)) == (LPCWSTR)0x0) {
    if (0x19 < (*(int *)&gen_args[0]) - 0x41U) {
      return (*(int *)&gen_args[0]);
    }
    return (*(int *)&gen_args[0]) + 0x20;
  }
  if ((uint)(*(int *)&gen_args[0]) < 0x100) {
    if (p_Var1 != (undefined *)0x0) {
      if ((*((byte *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + (*(int *)&gen_args[0]) * 2))) & 1) == 0) {
        return (*(int *)&gen_args[0]);
      }
      goto LAB_00c45a05;
    }
    iVar3 = F_00c48539((*(int *)&gen_args[0]));
    if (iVar3 == 0) {
      return (*(int *)&gen_args[0]);
    }
  }
  else {
LAB_00c45a05: ;
    if (p_Var1 != (undefined *)0x0) {
      uVar2 = (uint)(int)*((short *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + ((*(int *)&gen_args[0]) >> 8 & 0xffU) * 2))) >> 0xf & 1;
      goto LAB_00c45a40;
    }
  }
  puVar4 = F_00c5476c();
  uVar2 = puVar4[(*(int *)&gen_args[0]) >> 8 & 0xff] & 0x8000;
LAB_00c45a40: ;
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if (uVar2 == 0) {
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = (ushort)(byte)(*(int *)&gen_args[0]);
    iVar3 = 1;
  }
  else {
    (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = CONCAT11((byte)(*(int *)&gen_args[0]),(*(undefined1 *)(gen_frame + 0x4)));
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (3) * 16)))) = SUB41(p_Var1,3);
    gen_piece_set(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3, (unsigned long long)((uint3)(ushort)(*(undefined * PTR32 *)&gen_args[1])));
    iVar3 = 2;
  }
  iVar3 = F_00c54720((undefined *)0x0,(*(LPCWSTR *)(gen_frame + 0x0)),0x100,(LPCSTR)&(*(undefined * PTR32 *)&gen_args[1]),iVar3,(LPSTR)&(*(byte *)(gen_frame + 0x8)),3,
                             (int)_Code_page,1);
  uVar2 = (*(int *)&gen_args[0]);
  if ((iVar3 != 0) && (uVar2 = (uint)(*(byte *)(gen_frame + 0x8)), iVar3 != 1)) {
    uVar2 = (uint)CONCAT11((*(byte *)(gen_frame + 0x8)),(*(undefined1 *)(gen_frame + 0x9)));
  }
  return uVar2;
}

/* ref: __Getctype */
undefined * F_00c45a9d(unsigned int gen_a0)
{
  GEN_ENTER(0xc45a9du, gen_a0, 0u, 0u, 0u);
  undefined * __return_storage_ptr__ = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  undefined * pvVar3;
  ushort * puVar4;
  undefined4 uVar5;
  
  uVar1 = F_00c54bcd();
  (*(uint *)((char *)(__return_storage_ptr__))) = *(uint *)(uVar1 + 4);
  psVar2 = (short *)F_00c54b81();
  (*(short * PTR32 *)(((char *)(__return_storage_ptr__) + 4))) = psVar2;
  pvVar3 = F_00c54c73(0x100,2);
  (*(int *)(((char *)(__return_storage_ptr__) + 8))) = (int)pvVar3;
  if (pvVar3 == (undefined *)0x0) {
    puVar4 = F_00c5476c();
    (*(wchar_t * PTR32 *)(((char *)(__return_storage_ptr__) + 12))) = (wchar_t *)0x0;
    (*(int *)(((char *)(__return_storage_ptr__) + 8))) = (int)puVar4;
  }
  else {
    uVar5 = 0x200;
    puVar4 = F_00c5476c();
    F_00c46aa0((*(int *)(((char *)(__return_storage_ptr__) + 8))),puVar4,uVar5);
    (*(wchar_t * PTR32 *)(((char *)(__return_storage_ptr__) + 12))) = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}

/* ref: std::_Init_locks::_Init_locks */
undefined * F_00c45afd(unsigned int gen_a0)
{
  GEN_ENTER(0xc45afdu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG LVar1;
  undefined * p_Var2;
  
  LVar1 = gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x134a9e4));
  if (LVar1 == 0) {
    p_Var2 = (undefined *)&REFG(undefined, 0x15d6718);
    do {
      F_00c4682b(p_Var2);
      p_Var2 = p_Var2 + (1) * 24;
    } while ((int)p_Var2 < 0x15d6778);
  }
  return this;
}

/* ref: std::_Lockit::_Lockit */
undefined * F_00c45bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  (*(int *)((char *)(this))) = param_1;
  if (param_1 < 4) {
    F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + param_1 * 0x18));
  }
  return this;
}

/* ref: FUN_00c45be8 */
uint F_00c45be8(unsigned int gen_a0)
{
  GEN_ENTER(0xc45be8u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 4) {
    F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + uVar1 * 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: std::_Lockit::_Lockit_ctor */
unsigned int F_00c45c0b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45c0bu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  (*(int *)((char *)(param_1))) = param_2 & 3U;
  F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + (param_2 & 3U) * 0x18));
  return 0;
}

/* ref: std::_Lockit::_Lockit_dtor */
unsigned int F_00c45c2c(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c2cu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + (*(int *)((char *)(param_1))) * 0x18));
  return 0;
}

/* ref: FUN_00c45c47 */
unsigned int F_00c45c47(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c47u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + (param_1 & 3) * 0x18));
  return 0;
}

/* ref: FUN_00c45c63 */
uint F_00c45c63(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c63u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + (param_1 & 3) * 0x18));
  return extraout_EAX;
}

/* ref: FUN_00c45c85 */
uint F_00c45c85(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45c85u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c45c95 */
uint F_00c45c95(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc45c95u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: std::_Fac_node::~_Fac_node */
unsigned int F_00c45cab(unsigned int gen_a0)
{
  GEN_ENTER(0xc45cabu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00478dc0(*(undefined * PTR32 *)(this + 4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  return 0;
}

/* ref: std::_Fac_node::`scalar_deleting_destructor' */
undefined * F_00c45cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c45cab(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return this;
}

/* ref: Facet_Register */
uint F_00c45ce1(unsigned int gen_a0)
{
  GEN_ENTER(0xc45ce1u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = REFG(undefined4, 0x15d677c);
    puVar1[1] = param_1;
  }
  REFG(undefined4, 0x15d677c) = puVar1;
  return (uint)puVar1;
}

/* ref: __Deletegloballocale */
uint F_00c45d0b(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d0bu, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar1 = (undefined4 *)F_00478dc0((undefined *)*param_1);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
    }
  }
  return (uint)puVar2;
}

/* ref: tidy_global */
uint F_00c45d2c(void)
{
  GEN_ENTER(0xc45d2cu, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  F_00c45d0b(&REFG(undefined4, 0x15d6780));
  REFG(undefined4, 0x15d6780) = 0;
  uVar1 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00c45d58 */
uint F_00c45d58(void)
{
  GEN_ENTER(0xc45d58u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d6780);
}

/* ref: std::locale::_Setgloballocale */
unsigned int F_00c45d5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d5eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (REFG(char, 0x15d67a5) == '\0') {
    REFG(char, 0x15d67a5) = '\x01';
    F_00c4686b(((code *)REFP(0xc45d2c)));
  }
  REFG(undefined4, 0x15d6780) = param_1;
  return 0;
}

/* ref: std::locale::_Locimp::_Locimp_dtor */
unsigned int F_00c45d88(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d88u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xc45d94;
  F_00c45bc0(((undefined1 *)(gen_frame + 0xc)),0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + iVar3 * 4)));
    if (*piVar1 != 0) {
      puVar2 = (undefined4 *)F_00478dc0((undefined *)*piVar1);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
  }
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  F_00c45be8(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: std::_Locinfo::_Locinfo_dtor */
unsigned int F_00c45e96(unsigned int gen_a0)
{
  GEN_ENTER(0xc45e96u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (*(char * PTR32 *)(param_1 + 0x14) != (char *)0x0) {
    F_00c4a76c(0,*(char * PTR32 *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: std::_Yarn<char>::operator= */
undefined * F_00c45eb1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45eb1u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  undefined * pvVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  if (pcVar2 != param_1) {
    if (pcVar2 != (char *)0x0) {
      F_00c4c68f(pcVar2);
    }
    *(undefined4 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar2 = param_1;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      pvVar3 = F_00c51787(pcVar2 + (1 - (int)param_1));
      *(undefined * PTR32 *)this = pvVar3;
      if (pvVar3 != (undefined *)0x0) {
        F_00c46aa0(pvVar3,param_1,pcVar2 + (1 - (int)param_1));
      }
    }
  }
  return this;
}

/* ref: std::_Locinfo::_Locinfo_ctor */
unsigned int F_00c45f09(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45f09u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c4a76c(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  F_00c45eb1((undefined *)(param_1 + 0x14),pcVar1);
  if (param_2 != (char *)0x0) {
    pcVar1 = F_00c4a76c(0,param_2);
    if (pcVar1 != (char *)0x0) goto LAB_00c45f4a;
  }
  pcVar1 = "*";
LAB_00c45f4a: ;
  F_00c45eb1((undefined *)(param_1 + 0x1c),pcVar1);
  return 0;
}

/* ref: std::locale::_Locimp::_Locimp */
undefined * F_00c45f74(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45f74u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool param_1 = (bool)gen_a1;
  this[0x14] = (undefined1)param_1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11186a4));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (undefined1)0x0;
  F_00c45eb1((undefined *)(this + 0x18),"*");
  return this;
}

/* ref: std::locale::_Locimp::~_Locimp */
unsigned int F_00c45fb3(unsigned int gen_a0)
{
  GEN_ENTER(0xc45fb3u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11186a4));
  F_00c45d88((*(undefined * PTR32 *)&gen_args[0]));
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return 0;
}

/* ref: std::locale::_Locimp::`scalar_deleting_destructor' */
undefined * F_00c45ff6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45ff6u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c45fb3(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return this;
}

/* ref: std::locale::_Init */
undefined * F_00c46017(void)
{
  GEN_ENTER(0xc46017u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined * this;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xc46023;
  this = (undefined *)0x0;
  p_Var1 = REFG(undefined4, 0x15d6780);
  if (REFG(undefined4, 0x15d6780) == (undefined *)0x0) {
    F_00c45bc0(((undefined1 *)(gen_frame + 0xc)),0);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    p_Var1 = REFG(undefined4, 0x15d6780);
    if (REFG(undefined4, 0x15d6780) == (undefined *)0x0) {
      p_Var1 = (undefined *)F_004069f0(0x20);
      if (p_Var1 != (undefined *)0x0) {
        this = (undefined *)F_00c45f74(p_Var1,false);
      }
      F_00c45d5e(this);
      *(undefined4 *)(this + 0x10) = 0x3f;
      F_00c45eb1((undefined *)(this + 0x18),"C");
      REFG(undefined4, 0x15d6784) = this;
      F_00478d90(this);
      *(undefined * PTR32 *)&REFG(undefined, 0x15d679c) = REFG(undefined4, 0x15d6784);
      p_Var1 = this;
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    F_00c45be8(((undefined1 *)(gen_frame + 0xc)));
  }
  return p_Var1;
}

/* ref: std::locale::empty */
uint F_00c460b1(unsigned int gen_a0)
{
  GEN_ENTER(0xc460b1u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 uVar1;
  
  F_00c46017();
  this = (undefined *)F_004069f0(0x20);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c45f74(this,true);
  }
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c460f2 */
byte F_00c460f2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc460f2u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx == param_2;
}

/* ref: std::error_category::vf0 */
uint F_00c46103(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46103u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c4612c */
uint F_00c4612c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4612cu, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: std::error_condition::operator== */
bool F_00c46149(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46149u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

/* ref: std::error_category::vf3 */
uint F_00c4616a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4616au, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = this;
  return (uint)param_1;
}

/* ref: std::error_category::equivalent_00c4617e */
bool F_00c4617e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4617eu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(&(*(undefined * PTR32 *)(gen_frame + 0x4)),param_1)));
  bVar1 = F_00c46149(this_00,param_2);
  return bVar1;
}

/* ref: std::error_category::equivalent_00c4619f */
uint F_00c4619f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4619fu, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if ((in_ecx == param_2[1]) && (*param_2 == param_3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c461ce */
uint F_00c461ce(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc461ceu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c461ec */
unsigned int F_00c461ec(unsigned int gen_a0)
{
  GEN_ENTER(0xc461ecu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  F_00c5437e(this);
  return 0;
}

/* ref: std::bad_alloc::vf0 */
uint F_00c461f7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc461f7u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Generic_error_category::vf1 */
uint F_00c4621e(unsigned int gen_a0)
{
  GEN_ENTER(0xc4621eu, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: std::_Iostream_error_category::vf1 */
uint F_00c46239(unsigned int gen_a0)
{
  GEN_ENTER(0xc46239u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: std::_System_error_category::vf1 */
uint F_00c4625b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4625bu, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: std::_System_error_category::vf3 */
uint F_00c4625f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4625fu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = this;
  return (uint)param_1;
}

/* ref: FUN_00c46280 */
uint F_00c46280(void)
{
  GEN_ENTER(0xc46280u, 0u, 0u, 0u, 0u);
  return 0x134aad8;
}

/* ref: FUN_00c4628c */
uint F_00c4628c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4628cu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  return (uint)this;
}

/* ref: std::_Generic_error_category::vf0 */
uint F_00c462a9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462a9u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Iostream_error_category::vf0 */
uint F_00c462cb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462cbu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_System_error_category::vf0 */
uint F_00c462ed(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462edu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

