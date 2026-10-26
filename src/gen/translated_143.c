#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c02620 */
uint F_00c02620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02620u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  iVar2 = *(int *)(in_edi + 0x14);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  piVar3 = *(int * PTR32 *)(iVar2 + 4);
  if ((piVar3[2] == 6) && (*(char *)(*piVar3 + 6) == '\0')) {
    uVar1 = F_00c01a30(iVar2,in_edi);
    if (((*(int * PTR32 *)(iVar2 + 4))[2] == 6) &&
       (iVar2 = **(int * PTR32 *)(iVar2 + 4), *(char *)(iVar2 + 6) == '\0')) {
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    else {
      iVar2 = 0;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0x10)),*(int *)(iVar2 + 0x20) + 0x10,0x3c);
    piVar3 = (int *)F_00c00790(in_edi,((char *)REFP(0x13477f4)),((undefined1 *)(gen_frame + 0x10)),uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)piVar3;
}

/* ref: FUN_00c026b0 */
uint F_00c026b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc026b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x74))));
    if (puVar3[2] != 6) {
                    
      F_00bb93a0(param_1,5);
    }
    puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar2 + -0x10) = *puVar3;
    *(undefined4 *)(iVar2 + -0xc) = puVar3[1];
    *(undefined4 *)(iVar2 + -8) = puVar3[2];
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    F_00bb9600(param_1,*(int *)(param_1 + 8) + -0x20,1);
  }
                    
  F_00bb93a0(param_1,2);
}

/* ref: FUN_00c02740 */
uint F_00c02740(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc02740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  F_00c02620(param_1,uVar1);
  uVar1 = F_00c026b0(param_1);
  return uVar1;
}

/* ref: FUN_00c02770 */
uint F_00c02770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02770u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint local_4;
  
  local_4 = 1;
  if (param_4 != 0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case 'L': ;
      case 'f': ;
        break;
      default: ;
        local_4 = 0;
        break;
      case 'S': ;
        F_00c01c90(in_esi,param_4);
        break;
      case 'l': ;
        if (param_5 == 0) {
          *(undefined4 *)(in_esi + 0x14) = 0xffffffff;
        }
        else {
          uVar2 = F_00c01a30(param_5,param_2);
          *(uint *)(in_esi + 0x14) = uVar2;
        }
        break;
      case 'n': ;
        if (param_5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = F_00c02550(param_5,param_2,in_esi + 4);
        }
        *(uint *)(in_esi + 8) = uVar2;
        if (uVar2 == 0) {
          *(undefined * PTR32 *)(in_esi + 8) = &REFG(undefined, 0x14c5be7);
          *(undefined4 *)(in_esi + 4) = 0;
        }
        break;
      case 'u': ;
        *(uint *)(in_esi + 0x18) = (uint)*(byte *)(param_4 + 7);
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return local_4;
  }
  *(undefined * PTR32 *)(in_esi + 8) = &REFG(undefined, 0x14c5be6);
  *(undefined * PTR32 *)(in_esi + 4) = &REFG(undefined, 0x14c5be6);
  *(undefined4 *)(in_esi + 0x14) = 0xffffffff;
  *(undefined4 *)(in_esi + 0x1c) = 0xffffffff;
  *(undefined4 *)(in_esi + 0x20) = 0xffffffff;
  *(undefined * PTR32 *)(in_esi + 0xc) = &REFG(undefined, 0x1347704);
  *(char * PTR32 *)(in_esi + 0x10) = ((char *)REFP(0x134770c));
  F_00c007b0(in_esi + 0x24,((char *)REFP(0x134770c)),0x3c);
  *(undefined4 *)(in_esi + 0x18) = 0;
  return 1;
}

/* ref: FUN_00c028c0 */
uint F_00c028c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc028c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char * pcVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if (*param_2 == '>') {
    iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
    pcVar7 = param_2 + 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x60);
    pcVar7 = param_2;
    if (iVar1 != 0) {
      iVar6 = **((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 4 + iVar1 * 0x18)));
      iVar5 = *(int *)(param_1 + 0x28) + iVar1 * 0x18;
    }
  }
  uVar3 = F_00c02770(param_3,param_1,pcVar7,iVar6,iVar5);
  uVar4 = F_00c51da0(pcVar7,0x66);
  if (uVar4 != 0) {
    piVar2 = *(int * PTR32 *)(param_1 + 8);
    if (iVar6 == 0) {
      piVar2[2] = 0;
    }
    else {
      *piVar2 = iVar6;
      piVar2[2] = 6;
    }
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  uVar4 = F_00c51da0(pcVar7,0x4c);
  if (uVar4 != 0) {
    F_00c01d50(param_1,iVar6);
  }
  return uVar3;
}

/* ref: FUN_00c02970 */
uint F_00c02970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[*(int *)(param_2 + 8)];
  puVar2 = *(uint * PTR32 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar3 = *puVar2;
  do {
    if (puVar2[2] <= uVar3) {
LAB_00c029ab: ;
      uVar3 = F_00c02740(param_1,((char *)REFP(0x1347770)),param_3,puVar1);
      return uVar3;
    }
    if (param_2 == uVar3) {
      uVar3 = F_00c023d0(param_1,puVar2,(int)(param_2 - *(int *)(param_1 + 0xc)) >> 4,&(*(undefined4 *)(gen_frame + 0xc)));
      if (uVar3 != 0) {
        uVar3 = F_00c02740(param_1,((char *)REFP(0x134774c)),param_3,uVar3,
                             (*(undefined4 *)(gen_frame + 0xc)),puVar1);
        return uVar3;
      }
      goto LAB_00c029ab;
    }
    uVar3 = uVar3 + 0x10;
  } while( true );
}

/* ref: FUN_00c02a00 */
uint F_00c02a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 8) == 4) || (iVar2 = param_2, *(int *)(param_2 + 8) == 3)) {
    iVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,iVar2,((char *)REFP(0x134778c)));
  return uVar1;
}

/* ref: FUN_00c02a30 */
uint F_00c02a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = F_00c02bc0(param_2,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = param_2;
  if (uVar1 != 0) {
    uVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,uVar2,((char *)REFP(0x1347798)));
  return uVar1;
}

/* ref: FUN_00c02a70 */
uint F_00c02a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * puVar1;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[*(int *)(param_2 + 8)];
  if (puVar1[2] == (&REFG(undefined * PTR32, 0x110e598))[*(int *)(param_3 + 8)][2]) {
    F_00c02740(param_1,((char *)REFP(0x13477b0)),puVar1);
    return 0;
  }
  F_00c02740(param_1,((char *)REFP(0x13477d4)),puVar1,
               (&REFG(undefined * PTR32, 0x110e598))[*(int *)(param_3 + 8)]);
  return 0;
}

/* ref: FUN_00c02ad0 */
unsigned int F_00c02ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xc02ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0xbc;
  do {
    pcVar3 = *(char * PTR32 *)(&REFG(undefined, 0x110e50c) + iVar6);
    pcVar4 = pcVar3;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = F_00c05a80(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    *((uint *)GEN_TOP((iVar6 + *(int *)(param_1 + 0x10)))) = uVar5;
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar6))) + 5)));
    *pbVar1 = *pbVar1 | 0x20;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x100);
  return 0;
}

/* ref: FUN_00c02b30 */
uint F_00c02b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02b30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c051b0(param_1,param_3);
  if (*(int *)(uVar1 + 8) == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | '\x01' << ((byte)param_2 & 0x1f);
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c02b60 */
uint F_00c02b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02b60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[2];
  if (iVar1 == 5) {
    iVar1 = *(int *)(*param_2 + 8);
  }
  else if (iVar1 == 7) {
    iVar1 = *(int *)(*param_2 + 8);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar1 * 4)));
  }
  if (iVar1 != 0) {
    uVar2 = F_00c051b0(iVar1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xbc + param_3 * 4))));
    return uVar2;
  }
  return 0x110e488;
}

/* ref: FUN_00c02bc0 */
uint F_00c02bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02bc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_1;
  if (param_1[2] != 3) {
    if (param_1[2] == 4) {
      uVar1 = F_00c00370(*param_1 + 0x10,&(*(undefined8 *)(gen_frame + 0x8)));
      if (uVar1 != 0) {
        *param_2 = (*(undefined8 *)(gen_frame + 0x8));
        *(undefined4 *)(param_2 + 1) = 3;
        return (uint)param_2;
      }
    }
    piVar2 = (int *)0x0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00c02c10 */
uint F_00c02c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0xc));
  if (param_2[2] != 3) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0xc)) ^ (uint)((char *)(gen_frame + 0xc)));
    return 0;
  }
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x13478f0)),(int)*(undefined8 *)param_2,
           (int)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_2) >> 0x20));
  pcVar2 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,((char *)(gen_frame + 0xc)),(int)pcVar2 - (int)(((char *)(gen_frame + 0xc)) + 1));
  *param_2 = uVar3;
  param_2[2] = 4;
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)((char *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00c02ca0 */
uint F_00c02ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(in_esi + 0x38);
  uVar2 = *(uint *)(in_esi + 0x18);
  *(uint *)(in_esi + 0x18) = param_2;
  if (((bVar1 & 8) != 0) && (*(int *)(in_esi + 0x40) == 0)) {
    *(undefined4 *)(in_esi + 0x40) = *(undefined4 *)(in_esi + 0x3c);
    in_EAX = F_00bb8d80(in_esi,3,0xffffffff);
  }
  if ((bVar1 & 4) != 0) {
    iVar5 = *((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) + 0x10)));
    iVar3 = *(int *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x14);
    uVar4 = ((int)(param_2 - iVar3) >> 2) - 1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + uVar4 * 4);
    }
    if ((uVar4 != 0) && (uVar2 < param_2)) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *((int *)GEN_TOP((iVar5 + -4 + ((int)(uVar2 - iVar3) >> 2) * 4)));
      }
      if (iVar6 == iVar5) {
        return uVar4;
      }
    }
    in_EAX = F_00bb8d80(in_esi,2,iVar6);
  }
  return in_EAX;
}

/* ref: FUN_00c02d30 */
uint F_00c02d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = *(undefined4 * PTR32 *)(param_3 + 8);
  *puVar2 = *param_5;
  puVar2[1] = param_5[1];
  puVar2[2] = param_5[2];
  iVar3 = *(int *)(param_3 + 8);
  *(undefined4 *)(iVar3 + 0x10) = *param_2;
  *(undefined4 *)(iVar3 + 0x14) = param_2[1];
  *(undefined4 *)(iVar3 + 0x18) = param_2[2];
  iVar3 = *(int *)(param_3 + 8);
  *(undefined4 *)(iVar3 + 0x20) = *param_1;
  *(undefined4 *)(iVar3 + 0x24) = param_1[1];
  *(undefined4 *)(iVar3 + 0x28) = param_1[2];
  if (*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 8) < 0x31) {
    F_00bb8d50(param_3,3);
  }
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 0x30;
  F_00bb9600(param_3,*(int *)(param_3 + 8) + -0x30,1);
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_3 + 8);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + (param_4 - iVar1))));
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  uVar4 = puVar2[2];
  puVar5[2] = uVar4;
  return uVar4;
}

/* ref: FUN_00c02de0 */
uint F_00c02de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int in_esi = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 8);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x10) = *param_5;
  *(undefined4 *)(iVar2 + 0x14) = param_5[1];
  *(undefined4 *)(iVar2 + 0x18) = param_5[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x20) = *in_edx;
  *(undefined4 *)(iVar2 + 0x24) = in_edx[1];
  *(undefined4 *)(iVar2 + 0x28) = in_edx[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x30) = *in_ecx;
  *(undefined4 *)(iVar2 + 0x34) = in_ecx[1];
  *(undefined4 *)(iVar2 + 0x38) = in_ecx[2];
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x41) {
    F_00bb8d50(in_esi,4);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x40;
  uVar3 = F_00bb9600(in_esi,*(int *)(in_esi + 8) + -0x40,0);
  return uVar3;
}

/* ref: FUN_00c02e80 */
uint F_00c02e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc02e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int local_4;
  
  local_4 = 0;
  piVar5 = param_2;
  do {
    if (piVar5[2] == 5) {
      iVar1 = *piVar5;
      puVar2 = (undefined4 *)F_00c051f0(iVar1,param_3);
      if (((puVar2[2] != 0) || (iVar1 = *(int *)(iVar1 + 8), iVar1 == 0)) ||
         ((*(byte *)(iVar1 + 6) & 1) != 0)) {
LAB_00c02edb: ;
        *param_4 = *puVar2;
        param_4[1] = puVar2[1];
        param_4[2] = puVar2[2];
        return (uint)param_4;
      }
      piVar3 = (int *)F_00c02b30(iVar1,0,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xbc))));
      if (piVar3 == (int *)0x0) goto LAB_00c02edb;
    }
    else {
      piVar3 = (int *)F_00c02b60(param_1,piVar5,0);
      if (piVar3[2] == 0) {
        F_00c02970(param_1,piVar5,((char *)REFP(0x13478f8)));
      }
    }
    if (piVar3[2] == 6) {
      uVar4 = F_00c02d30(param_3,piVar5,param_1,param_4,piVar3);
      return uVar4;
    }
    local_4 = local_4 + 1;
    piVar5 = piVar3;
    if (99 < local_4) {
      uVar4 = F_00c02740(param_1,((char *)REFP(0x1347900)));
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00c02f70 */
uint F_00c02f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc02f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int local_8;
  
  local_8 = 0;
  piVar6 = param_2;
  do {
    if (piVar6[2] == 5) {
      iVar1 = *piVar6;
      puVar3 = (uint *)F_00c052a0(param_1,iVar1,param_3);
      if ((((puVar3[2] != 0) || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) ||
          ((*(byte *)(iVar2 + 6) & 2) != 0)) ||
         (piVar4 = (int *)F_00c02b30(iVar2,1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc0)))),
         piVar4 == (int *)0x0)) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        if ((int)param_4[2] < 4) {
          return (uint)param_4;
        }
        uVar5 = *param_4;
        if ((*(byte *)(uVar5 + 5) & 3) == 0) {
          return uVar5;
        }
        if ((*(byte *)(iVar1 + 5) & 4) == 0) {
          return uVar5;
        }
        uVar5 = F_00c01940(param_1,iVar1);
        return uVar5;
      }
    }
    else {
      piVar4 = (int *)F_00c02b60(param_1,piVar6,1);
      if (piVar4[2] == 0) {
        F_00c02970(param_1,piVar6,((char *)REFP(0x1347914)));
      }
    }
    if (piVar4[2] == 6) {
      uVar5 = F_00c02de0(param_4,param_3,param_1,piVar4,piVar6);
      return uVar5;
    }
    local_8 = local_8 + 1;
    piVar6 = piVar4;
  } while (local_8 < 100);
  uVar5 = F_00c02740(param_1,((char *)REFP(0x134791c)));
  return uVar5;
}

/* ref: FUN_00c03090 */
uint F_00c03090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc03090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c02b60(in_esi,param_3,in_edi);
  if (*(int *)(uVar1 + 8) == 0) {
    uVar1 = F_00c02b60(in_esi,param_4,in_edi);
    if (*(int *)(uVar1 + 8) == 0) {
      return 0;
    }
  }
  F_00c02d30(param_4,param_3,in_esi,param_5,uVar1);
  return 1;
}

/* ref: FUN_00c030e0 */
uint F_00c030e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc030e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((in_edi != 0) &&
      (bVar1 = (byte)(1 << ((byte)in_esi & 0x1f)), (*(byte *)(in_edi + 6) & bVar1) == 0)) &&
     (uVar2 = F_00c02b30(in_edi,in_esi,
                           *((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x10) + 0xbc + in_esi * 4)))),
     uVar2 != 0)) {
    if (in_edi == param_4) {
      return uVar2;
    }
    if (((param_4 != 0) && ((*(byte *)(param_4 + 6) & bVar1) == 0)) &&
       (uVar3 = F_00c02b30(param_4,in_esi,
                             *((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x10) + 0xbc + in_esi * 4)))),
       uVar3 != 0)) {
      uVar3 = F_00c00310(uVar2,uVar3);
      return -(uint)(uVar3 != 0) & uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c03170 */
uint F_00c03170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc03170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00c02b60(in_eax,param_2,param_4);
  if (*(int *)(uVar2 + 8) != 0) {
    uVar3 = F_00c02b60(in_eax,param_3,param_4);
    uVar3 = F_00c00310(uVar2,uVar3);
    if (uVar3 != 0) {
      F_00c02d30(param_3,param_2,in_eax,*(undefined4 *)(in_eax + 8),uVar2);
      iVar1 = (*(int * PTR32 *)(in_eax + 8))[2];
      if ((iVar1 != 0) && ((iVar1 != 1 || (**(int * PTR32 *)(in_eax + 8) != 0)))) {
        return 1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c031f0 */
uint F_00c031f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc031f0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char * _Str1;
  char * _Str2;
  
  iVar5 = *(int *)(in_eax + 0xc);
  iVar6 = *(int *)(in_ecx + 0xc);
  _Str2 = (char *)(in_eax + 0x10);
  _Str1 = (char *)(in_ecx + 0x10);
  uVar2 = F_00c527e2(_Str1,_Str2);
  if (uVar2 == 0) {
    while( true ) {
      pcVar3 = _Str1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - (int)(_Str1 + 1);
      if (iVar4 == iVar5) {
        return (uint)(iVar4 != iVar6);
      }
      if (iVar4 == iVar6) break;
      iVar4 = iVar4 + 1;
      _Str2 = _Str2 + iVar4;
      _Str1 = _Str1 + iVar4;
      iVar6 = iVar6 - iVar4;
      iVar5 = iVar5 - iVar4;
      uVar2 = F_00c527e2(_Str1,_Str2);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c03260 */
uint F_00c03260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  double dVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != *(int *)(param_3 + 1)) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
    return uVar3;
  }
  if (iVar2 == 3) {
    dVar1 = *param_3;
    if ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(*param_2)) && (!(dVar1 < *param_2) && dVar1 != *param_2)) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 4) {
    uVar3 = F_00c031f0(*(undefined4 *)param_3,*(undefined4 *)param_2);
    return (uint)((int)uVar3 < 0);
  }
  uVar3 = F_00c03170(param_1,param_2,param_3,0xd);
  if (uVar3 == 0xffffffff) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
  }
  return uVar3;
}

/* ref: FUN_00c032f0 */
uint F_00c032f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc032f0u, gen_a0, gen_a1, gen_a2, 0u);
  double * in_esi = (double *)(uintptr_t)gen_a0;
  double * in_edi = (double *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_edi + 1);
  if (iVar1 == *(int *)(in_esi + 1)) {
    if (iVar1 == 3) {
      if (!(*in_edi <= *in_esi)) {
        return 0;
      }
      return 1;
    }
    if (iVar1 == 4) {
      uVar2 = F_00c031f0(*(undefined4 *)in_esi,*(undefined4 *)in_edi);
      return (uint)((int)uVar2 < 1);
    }
    uVar2 = F_00c03170(param_3,in_edi,in_esi,0xe);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar2 = F_00c03170(param_3,in_esi,in_edi,0xd);
    if (uVar2 != 0xffffffff) {
      return (uint)(uVar2 == 0);
    }
  }
  uVar2 = F_00c02a70(param_3,in_edi,in_esi);
  return uVar2;
}

/* ref: FUN_00c03370 */
uint F_00c03370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 1))) {
  case 0: ;
    goto switchD_00c03384_caseD_0;
  default: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 2: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 3: ;
    bVar3 = GEN_ISNAN(*param_2) || GEN_ISNAN(*param_3);
    if (bVar3 == (bVar3 || *param_2 == *param_3)) {
      return 0;
    }
    return 1;
  case 5: ;
  case 7: ;
    if (*(int *)param_2 != *(int *)param_3) {
      uVar2 = F_00c030e0(4,*(undefined4 *)(*(int *)param_2 + 8),param_1,
                           *(undefined4 *)(*(int *)param_3 + 8));
      if (uVar2 == 0) {
        return 0;
      }
      F_00c02d30(param_3,param_2,param_1,*(undefined4 *)(param_1 + 8),uVar2);
      iVar1 = (*(int * PTR32 *)(param_1 + 8))[2];
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 != 1) {
        return 1;
      }
      if (**(int * PTR32 *)(param_1 + 8) == 0) {
        return 0;
      }
      return 1;
    }
switchD_00c03384_caseD_0: ;
    return 1;
  }
}

/* ref: FUN_00c03460 */
unsigned int F_00c03460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint * puVar6;
  int local_c;
  int local_8;
  
  do {
    iVar5 = (param_3 + 1) * 0x10 + *(int *)(param_1 + 0xc);
    iVar3 = 2;
    if (((*(int *)(iVar5 + -0x18) == 4) || (*(int *)(iVar5 + -0x18) == 3)) &&
       ((*(int *)(iVar5 + -8) == 4 || (uVar2 = F_00c02c10(param_1,iVar5 + -0x10), uVar2 != 0)))) {
      local_c = *((int *)GEN_TOP((*(int *)(iVar5 + -0x10) + 0xc)));
      if (local_c == 0) {
        if (*(int *)(iVar5 + -0x18) != 4) {
          F_00c02c10(param_1,iVar5 + -0x20);
        }
      }
      else {
        iVar3 = 1;
        local_8 = 1;
        if (1 < param_2) {
          piVar4 = (int *)(iVar5 + -0x20);
          do {
            if ((piVar4[2] != 4) &&
               (uVar2 = F_00c02c10(param_1,piVar4), local_8 = iVar3, uVar2 == 0)) break;
            uVar2 = *(uint *)(*piVar4 + 0xc);
            if (-local_c - 3U <= uVar2) {
              F_00c02740(param_1,((char *)REFP(0x1347930)));
            }
            local_c = local_c + uVar2;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + -4;
            local_8 = iVar3;
          } while (iVar3 < param_2);
        }
        uVar2 = F_00c06140(param_1,*(int *)(param_1 + 0x10) + 0x34,local_c);
        iVar3 = 0;
        if (0 < local_8) {
          piVar4 = (int *)(iVar5 + local_8 * -0x10);
          local_c = local_8;
          do {
            iVar1 = *(int *)(*piVar4 + 0xc);
            F_00c46aa0(uVar2 + iVar3,*piVar4 + 0x10,iVar1);
            local_c = local_c + -1;
            iVar3 = iVar3 + iVar1;
            piVar4 = piVar4 + 4;
          } while (0 < local_c);
        }
        puVar6 = (uint *)(iVar5 + local_8 * -0x10);
        uVar2 = F_00c05a80(param_1,uVar2,iVar3);
        *puVar6 = uVar2;
        puVar6[2] = 4;
        iVar3 = local_8;
      }
    }
    else {
      iVar1 = iVar5 + -0x10;
      iVar5 = iVar5 + -0x20;
      uVar2 = F_00c02b60(param_1,iVar5,0xf);
      if ((*(int *)(uVar2 + 8) == 0) &&
         (uVar2 = F_00c02b60(param_1,iVar1,0xf), *(int *)(uVar2 + 8) == 0)) {
        F_00c02a00(param_1,iVar5,iVar1);
      }
      else {
        F_00c02d30(iVar1,iVar5,param_1,iVar5,uVar2);
      }
    }
    param_3 = param_3 + (1 - iVar3);
    param_2 = param_2 + (1 - iVar3);
    if (param_2 < 2) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c03850 */
uint F_00c03850(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc03850u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float10 fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 * puVar11;
  int iVar12;
  uint * puVar13;
  double * pdVar14;
  double * pdVar15;
  double * pdVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  float in_xmm0_00;
  double dVar21;
  double dVar22;
  float in_xmm2_00;
  double dVar23;
  char * pcVar24;
  
  dVar23 = gen_bits2d((ulonglong)(uint)gen_fl2bits(in_xmm2));
  dVar21 = gen_bits2d((ulonglong)(uint)gen_fl2bits(in_xmm0));
LAB_00c0385c: ;
  iVar17 = *(int *)(param_7 + 0xc);
  iVar10 = **((int * PTR32 *)GEN_TOP((*(int *)(param_7 + 0x14) + 4)));
  iVar12 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x10) + 8)));
  puVar13 = *(uint * PTR32 *)(param_7 + 0x18);
switchD_00c038db_default: ;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
  uVar8 = *(*(uint * PTR32 *)(gen_frame + 0xc));
  puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
  if ((*(byte *)(param_7 + 0x38) & 0xc) != 0) {
    piVar6 = (int *)(param_7 + 0x40);
    *piVar6 = *piVar6 + -1;
    if ((*piVar6 == 0) || ((*(byte *)(param_7 + 0x38) & 4) != 0)) {
      uVar3 = F_00c02ca0(param_7,puVar13);
      if (*(char *)(param_7 + 6) == '\x01') {
        *(uint * PTR32 *)(param_7 + 0x18) = (*(uint * PTR32 *)(gen_frame + 0xc));
        return uVar3;
      }
      iVar17 = *(int *)(param_7 + 0xc);
    }
  }
  uVar3 = uVar8 >> 6 & 0xff;
  iVar4 = uVar3 * 0x10;
  pdVar14 = (double *)(iVar4 + iVar17);
  in_xmm0_00 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar21));
  in_xmm2_00 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar23));
  switch((unsigned int)(uintptr_t)(uVar8 & 0x3f)) {
  case 0: ;
    puVar7 = ((undefined4 *)GEN_TOP(((uVar8 >> 0x17) * 0x10 + iVar17)));
    goto LAB_00c038ea;
  case 1: ;
    puVar7 = ((undefined4 *)GEN_TOP(((uVar8 >> 0xe) * 0x10 + iVar12)));
LAB_00c038ea: ;
    *(undefined4 *)pdVar14 = *puVar7;
    *(undefined4 *)((int)pdVar14 + 4) = puVar7[1];
    *(undefined4 *)(pdVar14 + 1) = puVar7[2];
    goto switchD_00c038db_default;
  case 2: ;
    *(uint *)pdVar14 = uVar8 >> 0x17;
    *(undefined4 *)(pdVar14 + 1) = 1;
    if ((uVar8 & 0x7fc000) != 0) {
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 2;
    }
    goto switchD_00c038db_default;
  case 3: ;
    pdVar16 = ((double *)GEN_TOP(((uVar8 >> 0x17) * 0x10 + iVar17)));
    do {
      *(undefined4 *)(pdVar16 + 1) = 0;
      pdVar16 = pdVar16 + -2;
    } while (pdVar14 <= pdVar16);
    goto switchD_00c038db_default;
  case 4: ;
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x14 + (uVar8 >> 0x17) * 4))) + 8)));
    *(undefined4 *)pdVar14 = *puVar7;
    *(undefined4 *)((int)pdVar14 + 4) = puVar7[1];
    *(undefined4 *)(pdVar14 + 1) = puVar7[2];
    goto switchD_00c038db_default;
  case 5: ;
    ((undefined4 *)(gen_frame + 0x48))[0] = *(undefined4 *)(iVar10 + 0xc);
    (*(undefined4 *)(gen_frame + 0x50)) = 5;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    F_00c02e80(param_7,((undefined4 *)(gen_frame + 0x48)),(uVar8 >> 0xe) * 0x10 + iVar12,pdVar14);
    iVar17 = *(int *)(param_7 + 0xc);
    goto switchD_00c038db_default;
  case 6: ;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    uVar3 = uVar8 >> 0xe;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar12;
    }
    F_00c02e80(param_7,(uVar8 >> 0x17) * 0x10 + iVar17,iVar4,pdVar14);
    iVar17 = *(int *)(param_7 + 0xc);
    goto switchD_00c038db_default;
  case 7: ;
    ((undefined4 *)(gen_frame + 0x58))[0] = *(undefined4 *)(iVar10 + 0xc);
    (*(undefined4 *)(gen_frame + 0x60)) = 5;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    F_00c02f70(param_7,((undefined4 *)(gen_frame + 0x58)),(uVar8 >> 0xe) * 0x10 + iVar12,pdVar14);
    iVar17 = *(int *)(param_7 + 0xc);
    goto switchD_00c038db_default;
  case 8: ;
    iVar4 = *((int *)GEN_TOP((iVar10 + 0x14 + (uVar8 >> 0x17) * 4)));
    puVar7 = *(undefined4 * PTR32 *)(iVar4 + 8);
    *puVar7 = *(undefined4 *)pdVar14;
    puVar7[1] = *(undefined4 *)((int)pdVar14 + 4);
    puVar7[2] = *(undefined4 *)(pdVar14 + 1);
    if (((3 < *(int *)(pdVar14 + 1)) && ((*(byte *)(*(int *)pdVar14 + 5) & 3) != 0)) &&
       ((*(byte *)(iVar4 + 5) & 4) != 0)) {
      F_00c01900(param_7,iVar4,*(int *)pdVar14);
    }
    goto switchD_00c038db_default;
  case 9: ;
    uVar3 = uVar8 >> 0xe;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = uVar8 >> 0x17;
    if ((uVar8 & 0x100) == 0) {
      F_00c02f70(param_7,pdVar14,uVar8 * 0x10 + iVar17,iVar4);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    else {
      F_00c02f70(param_7,pdVar14,(uVar8 & 0xff) * 0x10 + iVar12,iVar4);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 10: ;
    uVar3 = F_00c002c0(uVar8 >> 0xe & 0x1ff);
    uVar8 = F_00c002c0(uVar8 >> 0x17);
    uVar8 = F_00c05020(param_7,uVar8,uVar3);
    *(uint *)pdVar14 = uVar8;
    *(undefined4 *)(pdVar14 + 1) = 5;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    bVar20 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x44))) < *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
    goto LAB_00c047c8;
  case 0xb: ;
    iVar4 = (uVar8 >> 0x17) * 0x10;
    iVar18 = iVar4 + iVar17;
    *(undefined4 *)(pdVar14 + 2) = *(undefined4 *)(iVar4 + iVar17);
    *(undefined4 *)((int)pdVar14 + 0x14) = *(undefined4 *)(iVar18 + 4);
    *(undefined4 *)(pdVar14 + 3) = *(undefined4 *)(iVar18 + 8);
    uVar8 = uVar8 >> 0xe;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if ((uVar8 & 0x100) == 0) {
      iVar17 = (uVar8 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar17 = (uVar8 & 0xff) * 0x10 + iVar12;
    }
    F_00c02e80(param_7,iVar18,iVar17,pdVar14);
    iVar17 = *(int *)(param_7 + 0xc);
    goto switchD_00c038db_default;
  case 0xc: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      dVar21 = *pdVar15 + *pdVar16;
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,5);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xd: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      dVar21 = *pdVar16 - *pdVar15;
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,6);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xe: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      dVar21 = *pdVar15 * *pdVar16;
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,7);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xf: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      dVar21 = *pdVar16 / *pdVar15;
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,8);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x10: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      dVar22 = *pdVar16 / *pdVar15;
      dVar23 = gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar22));
      in_xmm3 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar23));
      dVar21 = (dVar22 + gen_bits2d(REFG(ulonglong, 0x110e620) | (ulonglong)gen_d2bits(dVar23))) -
               gen_bits2d(REFG(ulonglong, 0x110e620) | (ulonglong)gen_d2bits(dVar23));
      dVar21 = (dVar21 - gen_bits2d(-(ulonglong)!(dVar21 - dVar22 <= dVar23) & REFG(ulonglong, 0x1088130))) *
               *pdVar15;
      dVar23 = *pdVar16 - dVar21;
      *pdVar14 = dVar23;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,9);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x11: ;
    uVar3 = uVar8 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar16 = (double *)(uVar3 * 0x10 + iVar17);
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar12)));
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0x1ff) * 0x10 + iVar17)));
    }
    else {
      pdVar15 = ((double *)GEN_TOP(((uVar8 & 0xff) * 0x10 + iVar12)));
    }
    if ((*(int *)(pdVar16 + 1) == 3) && (*(int *)(pdVar15 + 1) == 3)) {
      fVar2 = ((float10)GEN_TOD(pow((float10)*pdVar16,(float10)*pdVar15)));
      *pdVar14 = (double)fVar2;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      F_00c03630(pdVar16,pdVar14,in_xmm0_00,in_xmm2_00,in_xmm3,in_xmm7,param_7,pdVar15,10);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x12: ;
    pdVar16 = ((double *)GEN_TOP(((uVar8 >> 0x17) * 0x10 + iVar17)));
    if (*(int *)(pdVar16 + 1) == 3) {
      dVar21 = gen_bits2d((ulonglong)gen_d2bits(*pdVar16) ^ REFG(ulonglong, 0x110e610));
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
      goto switchD_00c038db_default;
    }
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    (*(double * PTR32 *)(gen_frame + 0x1c)) = pdVar16;
    if (*(int *)(pdVar16 + 1) == 3) {
LAB_00c03fbd: ;
      if ((*(int *)(pdVar16 + 1) == 3) ||
         ((*(int *)(pdVar16 + 1) == 4 &&
          (uVar8 = F_00c00370(*(int *)pdVar16 + 0x10,((undefined1 *)(gen_frame + 0x40))), uVar8 != 0)))) {
        dVar21 = gen_bits2d((ulonglong)gen_d2bits(*(*(double * PTR32 *)(gen_frame + 0x1c))) ^ REFG(ulonglong, 0x110e610));
        *pdVar14 = dVar21;
        *(undefined4 *)(pdVar14 + 1) = 3;
        iVar17 = *(int *)(param_7 + 0xc);
        goto switchD_00c038db_default;
      }
    }
    else if ((*(int *)(pdVar16 + 1) == 4) &&
            (uVar8 = F_00c00370(*(int *)pdVar16 + 0x10,&(*(double *)(gen_frame + 0x28))), uVar8 != 0)) {
      (*(double *)(gen_frame + 0x68)) = (*(double *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x70)) = 3;
      dVar21 = (*(double *)(gen_frame + 0x28));
      (*(double * PTR32 *)(gen_frame + 0x1c)) = &(*(double *)(gen_frame + 0x68));
      goto LAB_00c03fbd;
    }
    uVar8 = F_00c02b60(param_7,pdVar16,0xb);
    if ((*(int *)(uVar8 + 8) == 0) &&
       (uVar8 = F_00c02b60(param_7,pdVar16,0xb), *(int *)(uVar8 + 8) == 0)) {
      F_00c02a30(param_7,pdVar16,pdVar16);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    else {
      F_00c02d30(pdVar16,pdVar16,param_7,pdVar14,uVar8);
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x13: ;
    iVar18 = (uVar8 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar18 + 8 + iVar17);
    if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(iVar18 + iVar17) == 0)))) {
      *(undefined4 *)pdVar14 = 1;
      *(undefined4 *)(pdVar14 + 1) = 1;
    }
    else {
      *(undefined4 *)pdVar14 = 0;
      *(undefined4 *)(pdVar14 + 1) = 1;
    }
    goto switchD_00c038db_default;
  case 0x14: ;
    iVar18 = (uVar8 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar18 + 8 + iVar17);
    piVar6 = (int *)(iVar18 + iVar17);
    if (iVar4 == 4) {
      dVar22 = (double)*(int *)(*piVar6 + 0xc);
      if (*(int *)(*piVar6 + 0xc) < 0) {
        dVar22 = dVar22 + *(double *)&REFG(double, 0x10b8de8);
      }
      *pdVar14 = dVar22;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else if (iVar4 == 5) {
      uVar8 = F_00c05400(*piVar6);
      dVar21 = (double)(int)uVar8;
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      uVar8 = F_00c03090(param_7,0xc,piVar6,&REFG(undefined, 0x110e488),pdVar14);
      if (uVar8 == 0) {
        F_00c02970(param_7,piVar6,((char *)REFP(0x1347948)));
      }
      iVar17 = *(int *)(param_7 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x15: ;
    uVar3 = uVar8 >> 0xe & 0x1ff;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    F_00c03460(param_7,(uVar3 - (uVar8 >> 0x17)) + 1,uVar3);
    if (*((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x44)))) {
      F_00c01810(param_7);
    }
    iVar17 = *(int *)(param_7 + 0xc);
    iVar18 = (uVar8 >> 0x17) * 0x10;
    iVar19 = iVar18 + iVar17;
    *(undefined4 *)(iVar4 + iVar17) = *(undefined4 *)(iVar18 + iVar17);
    *(undefined4 *)(iVar4 + 4 + iVar17) = *(undefined4 *)(iVar19 + 4);
    *(undefined4 *)(iVar4 + 8 + iVar17) = *(undefined4 *)(iVar19 + 8);
    goto switchD_00c038db_default;
  case 0x16: ;
    goto switchD_00c038db_caseD_16;
  case 0x17: ;
    uVar5 = uVar8 >> 0x17;
    if ((uVar5 & 0x100) == 0) {
      iVar4 = uVar5 * 0x10 + iVar17;
    }
    else {
      iVar4 = (uVar5 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = uVar8 >> 0xe;
    if ((uVar8 & 0x100) == 0) {
      iVar17 = (uVar8 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar17 = (uVar8 & 0xff) * 0x10 + iVar12;
    }
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if ((*(int *)(iVar4 + 8) == *(int *)(iVar17 + 8)) &&
       (uVar8 = F_00c03370(param_7,iVar4,iVar17), uVar8 != 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    if (uVar8 == uVar3) {
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar13 >> 0xe) - 0x1fffe);
    }
    iVar17 = *(int *)(param_7 + 0xc);
    puVar13 = puVar13 + 1;
    goto switchD_00c038db_default;
  case 0x18: ;
    uVar5 = uVar8 >> 0xe;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if ((uVar5 & 0x100) == 0) {
      iVar4 = (uVar5 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar4 = (uVar5 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = uVar8 >> 0x17;
    if ((uVar8 & 0x100) == 0) {
      iVar17 = uVar8 * 0x10 + iVar17;
    }
    else {
      iVar17 = (uVar8 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = F_00c03260(param_7,iVar17,iVar4);
    if (uVar8 == uVar3) {
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar13 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
    iVar17 = *(int *)(param_7 + 0xc);
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
    goto switchD_00c038db_default;
  case 0x19: ;
    uVar5 = uVar8 >> 0xe;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if ((uVar5 & 0x100) == 0) {
      iVar4 = (uVar5 & 0x1ff) * 0x10 + iVar17;
    }
    else {
      iVar4 = (uVar5 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = uVar8 >> 0x17;
    if ((uVar8 & 0x100) == 0) {
      iVar17 = uVar8 * 0x10 + iVar17;
    }
    else {
      iVar17 = (uVar8 & 0xff) * 0x10 + iVar12;
    }
    uVar8 = F_00c032f0(iVar4,iVar17,param_7);
    if (uVar8 == uVar3) {
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar13 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
    iVar17 = *(int *)(param_7 + 0xc);
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
    goto switchD_00c038db_default;
  case 0x1a: ;
    if ((*(int *)(pdVar14 + 1) == 0) || ((*(int *)(pdVar14 + 1) == 1 && (*(int *)pdVar14 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar8 >> 0xe & 0x1ff)) {
LAB_00c04601: ;
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar13 >> 0xe) - 0x1fffe);
    }
    break;
  case 0x1b: ;
    iVar18 = (uVar8 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar18 + 8 + iVar17);
    piVar6 = (int *)(iVar18 + iVar17);
    if ((iVar4 == 0) || ((iVar4 == 1 && (*piVar6 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar8 >> 0xe & 0x1ff)) {
      *(int *)pdVar14 = *piVar6;
      *(int *)((int)pdVar14 + 4) = piVar6[1];
      *(int *)(pdVar14 + 1) = piVar6[2];
      goto LAB_00c04601;
    }
    break;
  case 0x1c: ;
    iVar17 = (uVar8 >> 0xe & 0x1ff) - 1;
    if (uVar8 >> 0x17 != 0) {
      *(double * PTR32 *)(param_7 + 8) = pdVar14 + (uVar8 >> 0x17) * 2;
    }
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    uVar8 = F_00bb9430(param_7,pdVar14,iVar17);
    if (uVar8 == 0) {
      param_8 = param_8 + 1;
      goto LAB_00c0385c;
    }
    if (uVar8 - 1 != 0) {
      return uVar8 - 1;
    }
    if (-1 < iVar17) {
      *(undefined4 *)(param_7 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x14) + 8)));
    }
    iVar17 = *(int *)(param_7 + 0xc);
    goto switchD_00c038db_default;
  case 0x1d: ;
    if (uVar8 >> 0x17 != 0) {
      *(double * PTR32 *)(param_7 + 8) = pdVar14 + (uVar8 >> 0x17) * 2;
    }
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    uVar8 = F_00bb9430(param_7,pdVar14,0xffffffff);
    if (uVar8 != 0) {
      if (uVar8 - 1 != 0) {
        return uVar8 - 1;
      }
      iVar17 = *(int *)(param_7 + 0xc);
      goto switchD_00c038db_default;
    }
    piVar6 = *(int * PTR32 *)(param_7 + 0x14);
    puVar7 = (undefined4 *)piVar6[1];
    iVar17 = piVar6[-5];
    if (*(int *)(param_7 + 0x68) != 0) {
      F_00c05da0(param_7,piVar6[-6]);
    }
    iVar10 = piVar6[-5] + (*piVar6 - (int)((int)(uintptr_t)puVar7) >> 4) * 0x10;
    piVar6[-6] = iVar10;
    iVar12 = 0;
    *(int *)(param_7 + 0xc) = iVar10;
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (puVar7 < *(undefined4 * PTR32 *)(param_7 + 8)) {
      iVar10 = 0;
      puVar11 = puVar7;
      do {
        *(undefined4 *)(iVar10 + iVar17) = *puVar11;
        *(undefined4 *)(iVar10 + 4 + iVar17) = puVar11[1];
        *(undefined4 *)(iVar10 + 8 + iVar17) = puVar11[2];
        iVar12 = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar10 = iVar12 * 0x10;
        puVar11 = puVar7 + iVar12 * 4;
        (*(uint *)(gen_frame + 0x20)) = iVar12;
      } while (puVar11 < *(undefined4 * PTR32 *)(param_7 + 8));
    }
    iVar17 = iVar12 * 0x10 + iVar17;
    *(int *)(param_7 + 8) = iVar17;
    piVar6[-4] = iVar17;
    iVar17 = *(int *)(param_7 + 0x18);
    piVar6[-1] = piVar6[-1] + 1;
    piVar6[-3] = iVar17;
    *(int *)(param_7 + 0x14) = *(int *)(param_7 + 0x14) + -0x18;
    goto LAB_00c0385c;
  case 0x1e: ;
    goto switchD_00c038db_caseD_1e;
  case 0x1f: ;
    dVar23 = pdVar14[2];
    dVar21 = pdVar14[4] + *pdVar14;
    if (*(double *)&REFG(undefined, 0x108bec8) < pdVar14[4]) {
      bVar20 = dVar21 <= dVar23;
    }
    else {
      bVar20 = dVar23 <= dVar21;
    }
    if (bVar20) {
      *pdVar14 = dVar21;
      *(undefined4 *)(pdVar14 + 1) = 3;
      pdVar14[6] = dVar21;
      *(undefined4 *)(pdVar14 + 7) = 3;
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((uVar8 >> 0xe) - 0x1fffe);
    }
    goto switchD_00c038db_default;
  case 0x20: ;
    (*(double * PTR32 *)(gen_frame + 0x18)) = pdVar14 + 4;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    if (*(int *)(pdVar14 + 1) == 3) {
LAB_00c044cb: ;
      if (*(int *)(pdVar14 + 3) != 3) {
        if ((*(int *)(pdVar14 + 3) != 4) ||
           (uVar3 = F_00c00370(*(int *)(pdVar14 + 2) + 0x10,&(*(double *)(gen_frame + 0x38))), uVar3 == 0)) {
          pcVar24 = ((char *)REFP(0x1347980));
          goto LAB_00c0452b;
        }
        pdVar14[2] = (*(double *)(gen_frame + 0x38));
        *(undefined4 *)(pdVar14 + 3) = 3;
      }
      if ((*(int *)(pdVar14 + 5) != 3) &&
         ((*(double * PTR32 *)(gen_frame + 0x18)) = (double *)F_00c02bc0((*(double * PTR32 *)(gen_frame + 0x18)),(*(double * PTR32 *)(gen_frame + 0x18))), (*(double * PTR32 *)(gen_frame + 0x18)) == (double *)0x0)) {
        pcVar24 = ((char *)REFP(0x13479a0));
        goto LAB_00c0452b;
      }
    }
    else {
      if ((*(int *)(pdVar14 + 1) == 4) &&
         (uVar3 = F_00c00370(*(int *)pdVar14 + 0x10,&(*(double *)(gen_frame + 0x30))), uVar3 != 0)) {
        *pdVar14 = (*(double *)(gen_frame + 0x30));
        *(undefined4 *)(pdVar14 + 1) = 3;
        goto LAB_00c044cb;
      }
      pcVar24 = ((char *)REFP(0x1347958));
LAB_00c0452b: ;
      F_00c02740(param_7,pcVar24);
    }
    dVar21 = *pdVar14 - *(*(double * PTR32 *)(gen_frame + 0x18));
    *pdVar14 = dVar21;
    *(undefined4 *)(pdVar14 + 1) = 3;
switchD_00c038db_caseD_16: ;
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((uVar8 >> 0xe) - 0x1fffe);
    goto switchD_00c038db_default;
  case 0x21: ;
    *(undefined4 *)(pdVar14 + 10) = *(undefined4 *)(pdVar14 + 4);
    *(undefined4 *)((int)pdVar14 + 0x54) = *(undefined4 *)((int)pdVar14 + 0x24);
    *(undefined4 *)(pdVar14 + 0xb) = *(undefined4 *)(pdVar14 + 5);
    *(undefined4 *)(pdVar14 + 8) = *(undefined4 *)(pdVar14 + 2);
    *(undefined4 *)((int)pdVar14 + 0x44) = *(undefined4 *)((int)pdVar14 + 0x14);
    *(undefined4 *)(pdVar14 + 9) = *(undefined4 *)(pdVar14 + 3);
    *(undefined4 *)(pdVar14 + 6) = *(undefined4 *)pdVar14;
    *(undefined4 *)((int)pdVar14 + 0x34) = *(undefined4 *)((int)pdVar14 + 4);
    *(undefined4 *)(pdVar14 + 7) = *(undefined4 *)(pdVar14 + 1);
    *(double * PTR32 *)(param_7 + 8) = pdVar14 + 0xc;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    F_00bb9600(param_7,pdVar14 + 6,uVar8 >> 0xe & 0x1ff);
    iVar17 = *(int *)(param_7 + 0xc);
    puVar7 = ((undefined4 *)GEN_TOP(((uVar3 + 3) * 0x10 + iVar17)));
    *(undefined4 *)(param_7 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x14) + 8)));
    if (puVar7[2] != 0) {
      puVar7[-4] = *puVar7;
      puVar7[-3] = puVar7[1];
      puVar7[-2] = puVar7[2];
      goto LAB_00c04601;
    }
    break;
  case 0x22: ;
    (*(double * PTR32 *)(gen_frame + 0x1c)) = (double *)(uVar8 >> 0x17);
    uVar8 = uVar8 >> 0xe & 0x1ff;
    if ((*(double * PTR32 *)(gen_frame + 0x1c)) == (double *)0x0) {
      (*(double * PTR32 *)(gen_frame + 0x1c)) = ((double *)GEN_TOP(((*(int *)(param_7 + 8) - (int)((int)(uintptr_t)pdVar14) >> 4) - 1)));
      *(undefined4 *)(param_7 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x14) + 8)));
    }
    if (uVar8 == 0) {
      uVar8 = *puVar13;
      puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 2;
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc));
    if (*(int *)(pdVar14 + 1) == 5) {
      iVar18 = *(int *)pdVar14;
      iVar4 = uVar8 * 0x32 + -0x32 + (int)(*(double * PTR32 *)(gen_frame + 0x1c));
      if (*(int *)(iVar18 + 0x1c) < iVar4) {
        F_00c05640(param_7,iVar18,iVar4);
      }
      if (0 < (int)(*(double * PTR32 *)(gen_frame + 0x1c))) {
        pdVar14 = pdVar14 + (int)((int)(uintptr_t)(*(double * PTR32 *)(gen_frame + 0x1c))) * 2;
        do {
          puVar7 = (undefined4 *)F_00c05310(param_7,iVar18,iVar4);
          *puVar7 = *(undefined4 *)pdVar14;
          puVar7[1] = *(undefined4 *)((int)pdVar14 + 4);
          iVar4 = iVar4 + -1;
          puVar7[2] = *(undefined4 *)(pdVar14 + 1);
          if (((3 < *(int *)(pdVar14 + 1)) && ((*(byte *)(*(int *)pdVar14 + 5) & 3) != 0)) &&
             ((*(byte *)(iVar18 + 5) & 4) != 0)) {
            F_00c01940(param_7,iVar18);
          }
          (*(double * PTR32 *)(gen_frame + 0x1c)) = (double *)((int)(*(double * PTR32 *)(gen_frame + 0x1c)) - 1);
          pdVar14 = pdVar14 + -2;
        } while (0 < (int)(*(double * PTR32 *)(gen_frame + 0x1c)));
      }
    }
    goto switchD_00c038db_default;
  case 0x23: ;
    F_00c05da0(param_7,pdVar14);
    goto switchD_00c038db_default;
  case 0x24: ;
    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar10 + 0x10) + 0x10))) + (uVar8 >> 0xe) * 4)));
    (*(uint *)(gen_frame + 0x20)) = (uint)*(byte *)(iVar4 + 0x48);
    uVar8 = F_00c05c10(param_7,(*(uint *)(gen_frame + 0x20)),*(undefined4 *)(iVar10 + 0xc));
    *(int *)(uVar8 + 0x10) = iVar4;
    if ((*(uint *)(gen_frame + 0x20)) != 0) {
      (*(double * PTR32 *)(gen_frame + 0x1c)) = (double *)(uVar8 + 0x14);
      do {
        uVar3 = *puVar13 >> 0x17;
        if (((byte)*puVar13 & 0x3f) == 4) {
          uVar3 = *(uint *)(iVar10 + 0x14 + uVar3 * 4);
        }
        else {
          uVar3 = F_00c05cb0(param_7,uVar3 * 0x10 + iVar17);
        }
        puVar13 = puVar13 + 1;
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
        *(uint *)(*(double * PTR32 *)(gen_frame + 0x1c)) = uVar3;
        (*(double * PTR32 *)(gen_frame + 0x1c)) = (double *)((int)(*(double * PTR32 *)(gen_frame + 0x1c)) + 4);
      } while ((*(uint *)(gen_frame + 0x20)) != 0);
    }
    *(uint *)pdVar14 = uVar8;
    *(undefined4 *)(pdVar14 + 1) = 6;
    *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
    bVar20 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x44))) < *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
LAB_00c047c8: ;
    if (!bVar20) {
      F_00c01810(param_7);
    }
    iVar17 = *(int *)(param_7 + 0xc);
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc));
    goto switchD_00c038db_default;
  case 0x25: ;
    piVar6 = *(int * PTR32 *)(param_7 + 0x14);
    iVar18 = (uVar8 >> 0x17) - 1;
    iVar19 = ((*piVar6 - piVar6[1] >> 4) - (uint)*((byte *)GEN_TOP((*(int *)(iVar10 + 0x10) + 0x49)))) + -1;
    if (iVar18 == -1) {
      *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
      if (*(int *)(param_7 + 0x1c) - *(int *)(param_7 + 8) <= iVar19 * 0x10) {
        F_00bb8d50(param_7,iVar19);
      }
      iVar17 = *(int *)(param_7 + 0xc);
      pdVar14 = (double *)(iVar4 + iVar17);
      *(double * PTR32 *)(param_7 + 8) = pdVar14 + iVar19 * 2;
      iVar18 = iVar19;
    }
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (0 < iVar18) {
      iVar4 = iVar19 * -0x10;
      pdVar14 = pdVar14 + 1;
      do {
        if ((int)(*(uint *)(gen_frame + 0x20)) < iVar19) {
          iVar9 = *piVar6 + iVar4;
          *(undefined4 *)(pdVar14 + -1) = *(undefined4 *)(*piVar6 + iVar4);
          *(undefined4 *)((int)pdVar14 + -4) = *(undefined4 *)(iVar9 + 4);
          *(undefined4 *)pdVar14 = *(undefined4 *)(iVar9 + 8);
        }
        else {
          *(undefined4 *)pdVar14 = 0;
        }
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar4 = iVar4 + 0x10;
        pdVar14 = pdVar14 + 2;
      } while ((int)(*(uint *)(gen_frame + 0x20)) < iVar18);
    }
  default: ;
    goto switchD_00c038db_default;
  }
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar13;
  puVar13 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
  goto switchD_00c038db_default;
switchD_00c038db_caseD_1e: ;
  if (uVar8 >> 0x17 != 0) {
    *(double * PTR32 *)(param_7 + 8) = pdVar14 + (uVar8 >> 0x17) * 2 + -2;
  }
  if (*(int *)(param_7 + 0x68) != 0) {
    F_00c05da0(param_7,iVar17);
  }
  *(uint * PTR32 *)(param_7 + 0x18) = puVar13;
  uVar8 = F_00bb90b0(param_7,pdVar14);
  param_8 = param_8 + -1;
  if (param_8 == 0) {
    return uVar8;
  }
  if (uVar8 != 0) {
    *(undefined4 *)(param_7 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x14) + 8)));
  }
  goto LAB_00c0385c;
}

/* ref: FUN_00c04a40 */
uint F_00c04a40(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc04a40u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  if ((GEN_ISNAN((*(double *)&gen_args[1])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
      ((GEN_ISNAN((*(double *)&gen_args[1])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || (*(double *)&gen_args[1]) == *(double *)&REFG(undefined, 0x108bec8))) {
    return *(uint *)((*(int *)&gen_args[0]) + 0x10);
  }
  return ((uint)((*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4)) + (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 0))) % ((1 << (*(byte *)((*(int *)&gen_args[0]) + 7) & 0x1f)) - 1U | 1))
         * 0x20 + *(int *)((*(int *)&gen_args[0]) + 0x10);
}

/* ref: FUN_00c04a80 */
uint F_00c04a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04a80u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  double * in_edx = (double *)(uintptr_t)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_edx + 1))) {
  case 1: ;
    return ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U & *(uint *)in_edx) * 0x20 +
           *(int *)(in_eax + 0x10);
  default: ;
    return (*(uint *)((int)(uintptr_t)in_edx) % ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U | 1)) * 0x20 +
           *(int *)(in_eax + 0x10);
  case 3: ;
    uVar1 = F_00c04a40(in_eax,*in_edx);
    return uVar1;
  case 4: ;
    return ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U & *(uint *)(*(int *)in_edx + 8)) * 0x20 +
           *(int *)(in_eax + 0x10);
  }
}

/* ref: FUN_00c04b10 */
uint F_00c04b10(unsigned int gen_a0)
{
  GEN_ENTER(0xc04b10u, gen_a0, 0u, 0u, 0u);
  double * in_eax = (double *)(uintptr_t)gen_a0;
  double dVar1;
  bool bVar2;
  double dVar3;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar1 = *in_eax;
    dVar3 = (double)(int)ROUND(dVar1);
    bVar2 = GEN_ISNAN(dVar3) || GEN_ISNAN(dVar1);
    if (bVar2 != (bVar2 || dVar3 == dVar1)) {
      return (int)ROUND(dVar1);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c04b50 */
uint F_00c04b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04b50u, gen_a0, gen_a1, gen_a2, 0u);
  double * in_edi = (double *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_edi + 1) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(in_edi + 1) == 3) {
    dVar2 = *in_edi;
    iVar1 = (int)ROUND(dVar2);
    bVar5 = GEN_ISNAN((double)iVar1) || GEN_ISNAN(dVar2);
    if (((bVar5 != (bVar5 || (double)iVar1 == dVar2)) && (0 < iVar1)) &&
       (iVar1 <= *(int *)(param_3 + 0x1c))) {
      return iVar1 - 1;
    }
  }
  uVar3 = F_00c04a80(param_3,in_edi);
  while( true ) {
    uVar4 = F_00c00310((int *)(uVar3 + 0x10),in_edi);
    if ((uVar4 != 0) ||
       (((*(int *)(uVar3 + 0x18) == 0xb && (3 < *(int *)(in_edi + 1))) &&
        (*(int *)(uVar3 + 0x10) == *(int *)in_edi)))) break;
    uVar3 = *(uint *)(uVar3 + 0x1c);
    if (uVar3 == 0) {
      F_00c02740(param_2,((char *)REFP(0x13479bc)));
      return 0;
    }
  }
  return ((int)(uVar3 - *(int *)(param_3 + 0x10)) >> 5) + *(int *)(param_3 + 0x1c);
}

/* ref: FUN_00c04c10 */
uint F_00c04c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  uVar2 = F_00c04b50(param_3,param_1,param_2);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar3 = uVar2 + 1;
  if (iVar3 < iVar6) {
    piVar5 = ((int *)GEN_TOP((iVar3 * 0x10 + 8 + *(int *)(param_2 + 0xc))));
    do {
      if (*piVar5 != 0) {
        *(undefined4 *)(param_3 + 1) = 3;
        *param_3 = (double)(iVar3 + 1);
        puVar4 = ((undefined4 *)GEN_TOP((iVar3 * 0x10 + *(int *)(param_2 + 0xc))));
        *(undefined4 *)(param_3 + 2) = *puVar4;
        *(undefined4 *)((int)param_3 + 0x14) = puVar4[1];
        *(undefined4 *)(param_3 + 3) = puVar4[2];
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar3 < iVar6);
  }
  iVar3 = iVar3 - iVar6;
  iVar6 = 1 << (*(byte *)(param_2 + 7) & 0x1f);
  if (iVar3 < iVar6) {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar5 = (int *)(iVar3 * 0x20 + 8 + iVar1);
    do {
      if (*piVar5 != 0) {
        iVar3 = iVar3 * 0x20;
        *(undefined4 *)param_3 = *(undefined4 *)(iVar1 + 0x10 + iVar3);
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar1 + 0x14 + iVar3);
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar1 + 0x18 + iVar3);
        iVar6 = *(int *)(param_2 + 0x10) + iVar3;
        *(undefined4 *)(param_3 + 2) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + iVar3)));
        *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(iVar6 + 4);
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(iVar6 + 8);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar3 < iVar6);
  }
  return 0;
}

/* ref: FUN_00c04cf0 */
uint F_00c04cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04cf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_2;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  uVar2 = 1;
  if (0 < (int)*param_2) {
    uVar3 = 0;
    param_2 = (uint *)in_eax;
    do {
      if ((0 < (int)*param_2) && (uVar4 = uVar4 + *param_2, (int)uVar2 / 2 < (int)uVar4)) {
        uVar3 = uVar4;
        uVar5 = uVar2;
      }
      if (uVar4 == *puVar1) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 * 2;
    } while ((int)uVar2 / 2 < (int)*puVar1);
  }
  *puVar1 = uVar5;
  return uVar3;
}

/* ref: FUN_00c04d50 */
uint F_00c04d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04d50u, gen_a0, gen_a1, 0u, 0u);
  double * in_eax = (double *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar3 = *in_eax;
    iVar2 = (int)ROUND(dVar3);
    bVar5 = GEN_ISNAN((double)iVar2) || GEN_ISNAN(dVar3);
    if (((bVar5 != (bVar5 || (double)iVar2 == dVar3)) && (0 < iVar2)) && (iVar2 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar2 + -1);
      piVar1 = (int *)(param_2 + 4 + uVar4 * 4);
      *piVar1 = *piVar1 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c04db0 */
uint F_00c04db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint local_4;
  
  iVar6 = 0;
  iVar4 = 1;
  local_4 = 0;
  iVar2 = 1;
  do {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    if (iVar1 < iVar2) {
      if (iVar1 < iVar4) {
        return local_4;
      }
LAB_00c04de1: ;
      iVar1 = (iVar1 - iVar4) + 1;
      piVar5 = ((int *)GEN_TOP((iVar4 * 0x10 + -8 + *(int *)(param_1 + 0xc))));
      iVar4 = iVar4 + iVar1;
      do {
        if (*piVar5 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar5 = piVar5 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      iVar1 = iVar2;
      if (iVar4 <= iVar2) goto LAB_00c04de1;
    }
    piVar5 = (int *)(param_2 + iVar6 * 4);
    *piVar5 = *piVar5 + iVar3;
    local_4 = local_4 + iVar3;
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 * 2;
    if (0x1a < iVar6) {
      return local_4;
    }
  } while( true );
}

/* ref: FUN_00c04e30 */
uint F_00c04e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_1c;
  uint local_18;
  
  iVar5 = 1 << (*(byte *)(param_1 + 7) & 0x1f);
  local_18 = 0;
  local_1c = 0;
  if (iVar5 == 0) {
    *param_3 = *param_3;
    return 0;
  }
  iVar6 = iVar5 << 5;
  do {
    iVar6 = iVar6 + -0x20;
    iVar3 = *(int *)(param_1 + 0x10) + iVar6;
    iVar5 = iVar5 + -1;
    if (*(int *)(iVar3 + 8) != 0) {
      if (*(int *)(iVar3 + 0x18) == 3) {
        dVar2 = *(double *)(iVar3 + 0x10);
        iVar3 = (int)ROUND(dVar2);
        bVar7 = GEN_ISNAN((double)iVar3) || GEN_ISNAN(dVar2);
        if (((bVar7 == (bVar7 || (double)iVar3 == dVar2)) || (iVar3 < 1)) || (0x4000000 < iVar3))
        goto LAB_00c04ec6;
        uVar4 = F_00c002e0(iVar3 + -1);
        piVar1 = (int *)(param_2 + 4 + uVar4 * 4);
        *piVar1 = *piVar1 + 1;
        iVar3 = 1;
      }
      else {
LAB_00c04ec6: ;
        iVar3 = 0;
      }
      local_1c = local_1c + iVar3;
      local_18 = local_18 + 1;
    }
    if (iVar5 == 0) {
      *param_3 = *param_3 + local_1c;
      return local_18;
    }
  } while( true );
}

/* ref: FUN_00c04f00 */
uint F_00c04f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (in_edi + 1U < 0x10000000) {
    uVar1 = F_00c11930(in_eax,*(undefined4 *)(in_esi + 0xc),*(int *)(in_esi + 0x1c) << 4,
                         in_edi << 4);
  }
  else {
    uVar1 = F_00c11910(in_eax);
  }
  iVar2 = *(int *)(in_esi + 0x1c);
  *(uint *)(in_esi + 0xc) = uVar1;
  if (iVar2 < in_edi) {
    uVar1 = iVar2 << 4;
    iVar2 = in_edi - iVar2;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(in_esi + 0xc) + 8 + uVar1))) = 0;
      uVar1 = uVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(in_esi + 0x1c) = in_edi;
  return uVar1;
}

/* ref: FUN_00c04f60 */
uint F_00c04f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04f60u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (in_eax == 0) {
    *(undefined * PTR32 *)(in_edi + 0x10) = &REFG(undefined, 0x110e630);
    *(undefined1 *)(in_edi + 7) = 0;
    *(undefined4 *)(in_edi + 0x14) = *(undefined4 *)(in_edi + 0x10);
    return 0;
  }
  uVar1 = F_00c002e0(in_eax + -1);
  if (0x1a < (int)(uVar1 + 1)) {
    F_00c02740(param_3,((char *)REFP(0x13479d4)));
  }
  bVar2 = (byte)(uVar1 + 1);
  iVar5 = 1 << (bVar2 & 0x1f);
  if (iVar5 + 1U < 0x8000000) {
    uVar1 = F_00c11930(param_3,0,0,iVar5 << 5);
  }
  else {
    uVar1 = F_00c11910(param_3);
  }
  *(uint *)(in_edi + 0x10) = uVar1;
  if (0 < iVar5) {
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      uVar1 = *(int *)(in_edi + 0x10) + iVar3;
      iVar3 = iVar3 + 0x20;
      iVar4 = iVar4 + -1;
      *(undefined4 *)(uVar1 + 0x1c) = 0;
      *(undefined4 *)(uVar1 + 0x18) = 0;
      *(undefined4 *)(uVar1 + 8) = 0;
    } while (iVar4 != 0);
  }
  *(byte *)(in_edi + 7) = bVar2;
  *(int *)(in_edi + 0x14) = iVar5 * 0x20 + *(int *)(in_edi + 0x10);
  return uVar1;
}

/* ref: FUN_00c05020 */
uint F_00c05020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_esi;
  
  in_esi = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,in_esi,5);
  *(undefined4 *)(in_esi + 8) = 0;
  *(undefined1 *)(in_esi + 6) = 0xff;
  *(undefined4 *)(in_esi + 0xc) = 0;
  *(undefined4 *)(in_esi + 0x1c) = 0;
  *(undefined1 *)(in_esi + 7) = 0;
  *(undefined * PTR32 *)(in_esi + 0x10) = &REFG(undefined, 0x110e630);
  F_00c04f00(param_1,in_esi,param_2);
  F_00c04f60(param_3,in_esi,param_1);
  return in_esi;
}

/* ref: FUN_00c05080 */
uint F_00c05080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_2 + 0x10) != &REFG(undefined, 0x110e630)) {
    F_00c11930(param_1,*(undefined * PTR32 *)(param_2 + 0x10),(1 << (*(byte *)(param_2 + 7) & 0x1f)) << 5
                 ,0);
  }
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x1c) << 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x20,0);
  return uVar1;
}

/* ref: FUN_00c05110 */
uint F_00c05110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05110u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  bool bVar2;
  double dVar3;
  int local_8;
  int uStack_4;
  
  if (param_2 - 1U < *(uint *)(param_1 + 0x1c)) {
    return *(int *)(param_1 + 0xc) + -0x10 + param_2 * 0x10;
  }
  dVar3 = (double)param_2;
  if ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) ==
      ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar3 == *(double *)&REFG(undefined, 0x108bec8))) {
    local_8 = (int)(ulonglong)gen_d2bits(dVar3);
    uStack_4 = (int)((ulonglong)gen_d2bits(dVar3) >> 0x20);
    uVar1 = ((uint)(uStack_4 + local_8) % ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U | 1)) * 0x20
            + *(int *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  while ((*(int *)(uVar1 + 0x18) != 3 ||
         (bVar2 = GEN_ISNAN(*(double *)(uVar1 + 0x10)) || GEN_ISNAN(dVar3),
         bVar2 == (bVar2 || *(double *)(uVar1 + 0x10) == dVar3)))) {
    uVar1 = *(uint *)(uVar1 + 0x1c);
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: FUN_00c051b0 */
uint F_00c051b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc051b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U & *(uint *)(param_2 + 8)) * 0x20 +
          *(int *)(param_1 + 0x10);
  while ((*(int *)(uVar1 + 0x18) != 4 || (*(int *)(uVar1 + 0x10) != param_2))) {
    uVar1 = *(uint *)(uVar1 + 0x1c);
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: FUN_00c051f0 */
uint F_00c051f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc051f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    return 0x110e488;
  }
  if (iVar1 == 3) {
    dVar5 = (double)(int)ROUND(*param_2);
    bVar4 = GEN_ISNAN(dVar5) || GEN_ISNAN(*param_2);
    if (bVar4 != (bVar4 || dVar5 == *param_2)) {
      uVar2 = F_00c05110(param_1,(int)ROUND(*param_2));
      return uVar2;
    }
  }
  else if (iVar1 == 4) {
    uVar2 = F_00c051b0(param_1,*(undefined4 *)param_2);
    return uVar2;
  }
  uVar2 = F_00c04a80(param_1,param_2);
  do {
    uVar3 = F_00c00310(uVar2 + 0x10,param_2);
    if (uVar3 != 0) {
      return uVar2;
    }
    uVar2 = *(uint *)(uVar2 + 0x1c);
  } while (uVar2 != 0);
  return 0x110e488;
}

/* ref: FUN_00c052a0 */
uint F_00c052a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc052a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  
  puVar1 = (undefined *)F_00c051f0(param_2,param_3);
  *(undefined1 *)(param_2 + 6) = 0;
  if (puVar1 != &REFG(undefined, 0x110e488)) {
    return (uint)puVar1;
  }
  if (*(int *)(param_3 + 1) == 0) {
    pcVar3 = ((char *)REFP(0x13479e4));
  }
  else {
    if ((*(int *)(param_3 + 1) != 3) || (!GEN_ISNAN(*param_3))) goto LAB_00c052f3;
    pcVar3 = ((char *)REFP(0x13479f8));
  }
  F_00c02740(param_1,pcVar3);
LAB_00c052f3: ;
  uVar2 = F_00c057c0(param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00c05310 */
uint F_00c05310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00c05110(param_2,param_3);
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    (*(double *)(gen_frame + 0x0)) = (double)param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    puVar1 = (undefined *)F_00c057c0(param_1,param_2,&(*(double *)(gen_frame + 0x0)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c05400 */
uint F_00c05400(unsigned int gen_a0)
{
  GEN_ENTER(0xc05400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 == 0) || (*((int *)GEN_TOP((uVar3 * 0x10 + -8 + *(int *)(param_1 + 0xc)))) != 0)) {
    if (*(undefined * PTR32 *)(param_1 + 0x10) != &REFG(undefined, 0x110e630)) {
      uVar2 = F_00c05110(param_1,uVar3 + 1);
      iVar1 = *(int *)(uVar2 + 8);
      uVar2 = uVar3 + 1;
      while( true ) {
        if (iVar1 == 0) {
          uVar5 = uVar2 - uVar3;
          while (1 < uVar5) {
            uVar7 = uVar3 + uVar2 >> 1;
            uVar5 = F_00c05110(param_1,uVar7);
            uVar4 = uVar7;
            if (*(int *)(uVar5 + 8) == 0) {
              uVar4 = uVar3;
              uVar2 = uVar7;
            }
            uVar3 = uVar4;
            uVar5 = uVar2 - uVar4;
          }
          return uVar3;
        }
        uVar5 = uVar2 * 2;
        if (0x7ffffffd < uVar5) break;
        uVar3 = F_00c05110(param_1,uVar5);
        iVar1 = *(int *)(uVar3 + 8);
        uVar3 = uVar2;
        uVar2 = uVar5;
      }
      iVar6 = 1;
      uVar3 = F_00c05110(param_1,1);
      iVar1 = *(int *)(uVar3 + 8);
      while (iVar1 != 0) {
        iVar6 = iVar6 + 1;
        uVar3 = F_00c05110(param_1,iVar6);
        iVar1 = *(int *)(uVar3 + 8);
      }
      return iVar6 - 1;
    }
  }
  else {
    uVar2 = uVar3;
    uVar4 = 0;
    uVar5 = uVar3;
    while (uVar3 = uVar4, 1 < uVar5) {
      uVar4 = uVar3 + uVar2 >> 1;
      if (*((int *)GEN_TOP((uVar4 * 0x10 + -8 + *(int *)(param_1 + 0xc)))) == 0) {
        uVar2 = uVar4;
        uVar4 = uVar3;
      }
      uVar5 = uVar2 - uVar4;
    }
  }
  return uVar3;
}

/* ref: FUN_00c05460 */
uint F_00c05460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  double * pdVar9;
  char * pcVar10;
  
  bVar1 = *(byte *)(in_eax + 7);
  iVar7 = *(int *)(in_eax + 0x1c);
  puVar2 = *(undefined * PTR32 *)(in_eax + 0x10);
  if (iVar7 < param_3) {
    F_00c04f00(param_2,in_eax,param_3);
  }
  F_00c04f60(param_4,in_eax,param_2);
  if (param_3 < iVar7) {
    iVar3 = param_3 << 4;
    uVar5 = param_3 + 1;
    (*(int *)(gen_frame + 0xc)) = iVar7 - param_3;
    *(int *)(in_eax + 0x1c) = param_3;
    uVar8 = uVar5;
    param_3 = iVar3;
    do {
      puVar6 = ((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + param_3)));
      if (*((int *)GEN_TOP((*(int *)(in_eax + 0xc) + 8 + param_3))) != 0) {
        puVar4 = (undefined4 *)F_00c05110(in_eax,uVar8);
        if (puVar4 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          (*(double *)(gen_frame + 0x20)) = (double)(int)uVar8;
          (*(undefined4 *)(gen_frame + 0x28)) = 3;
          puVar4 = (undefined4 *)F_00c057c0(param_2,in_eax,&(*(double *)(gen_frame + 0x20)));
        }
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
      }
      param_3 = param_3 + 0x10;
      uVar8 = uVar8 + 1;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    } while ((*(int *)(gen_frame + 0xc)) != 0);
    if (uVar5 < 0x10000000) {
      uVar5 = F_00c11930(param_2,*(undefined4 *)(in_eax + 0xc),iVar7 << 4,iVar3);
      *(uint *)(in_eax + 0xc) = uVar5;
    }
    else {
      uVar5 = F_00c11910(param_2);
      *(uint *)(in_eax + 0xc) = uVar5;
    }
  }
  uVar5 = 1 << (bVar1 & 0x1f);
  iVar7 = uVar5 - 1;
  if (-1 < iVar7) {
    pdVar9 = (double *)(puVar2 + iVar7 * 0x20 + 0x10);
    do {
      if (*(int *)(pdVar9 + -1) != 0) {
        puVar6 = (undefined4 *)F_00c051f0(in_eax,pdVar9);
        *(undefined1 *)(in_eax + 6) = 0;
        if (puVar6 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          if (*(int *)(pdVar9 + 1) == 0) {
            pcVar10 = ((char *)REFP(0x13479e4));
LAB_00c055e1: ;
            F_00c02740(param_2,pcVar10);
          }
          else if ((*(int *)(pdVar9 + 1) == 3) && (GEN_ISNAN(*pdVar9))) {
            pcVar10 = ((char *)REFP(0x13479f8));
            goto LAB_00c055e1;
          }
          puVar6 = (undefined4 *)F_00c057c0(param_2,in_eax,pdVar9);
        }
        *puVar6 = *(undefined4 *)(pdVar9 + -2);
        puVar6[1] = *(undefined4 *)((int)pdVar9 + -0xc);
        puVar6[2] = *(undefined4 *)(pdVar9 + -1);
      }
      iVar7 = iVar7 + -1;
      pdVar9 = pdVar9 + -4;
    } while (-1 < iVar7);
  }
  if (puVar2 != &REFG(undefined, 0x110e630)) {
    uVar5 = F_00c11930(param_2,puVar2,uVar5 << 5,0);
  }
  return uVar5;
}

/* ref: FUN_00c05640 */
uint F_00c05640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_2 + 0x10) == &REFG(undefined, 0x110e630)) {
    uVar1 = F_00c05460(param_2,param_1,param_3,0);
    return uVar1;
  }
  uVar1 = F_00c05460(param_2,param_1,param_3,1 << (*(byte *)(param_2 + 7) & 0x1f));
  return uVar1;
}

/* ref: FUN_00c05690 */
uint F_00c05690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((int *)(gen_frame + 0x18))[0] = 0;
  ((int *)(gen_frame + 0x18))[1] = 0;
  ((int *)(gen_frame + 0x18))[2] = 0;
  ((int *)(gen_frame + 0x18))[3] = 0;
  ((int *)(gen_frame + 0x18))[4] = 0;
  ((int *)(gen_frame + 0x18))[5] = 0;
  ((int *)(gen_frame + 0x18))[6] = 0;
  ((int *)(gen_frame + 0x18))[7] = 0;
  ((int *)(gen_frame + 0x18))[8] = 0;
  ((int *)(gen_frame + 0x18))[9] = 0;
  ((int *)(gen_frame + 0x18))[10] = 0;
  ((int *)(gen_frame + 0x18))[0xb] = 0;
  ((int *)(gen_frame + 0x18))[0xc] = 0;
  ((int *)(gen_frame + 0x18))[0xd] = 0;
  ((int *)(gen_frame + 0x18))[0xe] = 0;
  ((int *)(gen_frame + 0x18))[0xf] = 0;
  ((int *)(gen_frame + 0x18))[0x10] = 0;
  ((int *)(gen_frame + 0x18))[0x11] = 0;
  ((int *)(gen_frame + 0x18))[0x12] = 0;
  ((int *)(gen_frame + 0x18))[0x13] = 0;
  ((int *)(gen_frame + 0x18))[0x14] = 0;
  ((int *)(gen_frame + 0x18))[0x15] = 0;
  ((int *)(gen_frame + 0x18))[0x16] = 0;
  ((int *)(gen_frame + 0x18))[0x17] = 0;
  ((int *)(gen_frame + 0x18))[0x18] = 0;
  ((int *)(gen_frame + 0x18))[0x19] = 0;
  uVar2 = F_00c04db0(in_edi,&(*(undefined4 *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  uVar3 = F_00c04e30(in_edi,&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x4)));
  if (*(int *)(param_3 + 1) == 3) {
    dVar1 = *param_3;
    (*(double *)(gen_frame + 0xc)) = dVar1;
    iVar5 = (int)ROUND(dVar1);
    (*(int *)(gen_frame + 0x8)) = iVar5;
    bVar6 = GEN_ISNAN((double)iVar5) || GEN_ISNAN(dVar1);
    if (((bVar6 != (bVar6 || (double)iVar5 == dVar1)) && (0 < iVar5)) && (iVar5 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar5 + -1);
      ((int *)(gen_frame + 0x18))[(int)(uVar4)] = ((int *)(gen_frame + 0x18))[(int)(uVar4)] + 1;
      iVar5 = 1;
      goto LAB_00c0577f;
    }
  }
  iVar5 = 0;
LAB_00c0577f: ;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + iVar5;
  uVar4 = F_00c04cf0(&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x4)));
  uVar2 = F_00c05460(in_edi,param_2,(*(uint *)(gen_frame + 0x4)),((uVar2 + uVar3) - uVar4) + 1);
  return uVar2;
}

/* ref: FUN_00c057c0 */
uint F_00c057c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc057c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  undefined8 * puVar2;
  uint uVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  
  puVar2 = (undefined8 *)F_00c04a80(param_2,param_3);
  if ((*(int *)(puVar2 + 1) == 0) && (puVar5 = puVar2, puVar2 != (undefined8 *)&REFG(undefined, 0x110e630))) {
LAB_00c05886: ;
    *(int *)(puVar5 + 2) = *param_3;
    *(int *)((int)puVar5 + 0x14) = param_3[1];
    *(int *)(puVar5 + 3) = param_3[2];
    if (((3 < param_3[2]) && ((*(byte *)(*param_3 + 5) & 3) != 0)) &&
       ((*(byte *)(param_2 + 5) & 4) != 0)) {
      F_00c01940(param_1,param_2);
    }
    return (uint)puVar5;
  }
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_2 + 0x14)) {
    do {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x20;
      puVar5 = *(undefined8 * PTR32 *)(param_2 + 0x14);
      if (*(int *)(puVar5 + 3) == 0) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00c05812;
        puVar4 = (undefined8 *)F_00c04a80(param_2,puVar2 + 2);
        if (puVar4 == puVar2) {
          *(undefined4 *)((int)puVar5 + 0x1c) = *(undefined4 *)((int)puVar2 + 0x1c);
          *(undefined8 * PTR32 *)((int)puVar2 + 0x1c) = puVar5;
        }
        else {
          puVar1 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
          while (puVar1 != puVar2) {
            puVar4 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
            puVar1 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
          }
          *(undefined8 * PTR32 *)((int)puVar4 + 0x1c) = puVar5;
          *puVar5 = *puVar2;
          puVar5[1] = puVar2[1];
          puVar5[2] = puVar2[2];
          puVar5[3] = puVar2[3];
          *(undefined4 *)((int)puVar2 + 0x1c) = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          puVar5 = puVar2;
        }
        goto LAB_00c05886;
      }
    } while (*(undefined8 * PTR32 *)(param_2 + 0x10) < puVar5);
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x20;
LAB_00c05812: ;
  F_00c05690(param_2,param_1,param_3);
  uVar3 = F_00c052a0(param_1,param_2,param_3);
  return uVar3;
}

/* ref: FUN_00c058d0 */
uint F_00c058d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc058d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00c051b0(param_2,param_3);
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    ((undefined4 *)(gen_frame + 0x0))[0] = param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    puVar1 = (undefined *)F_00c057c0(param_1,param_2,((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c05920 */
uint F_00c05920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_4;
  
  uVar6 = *(uint *)((*(int *)&gen_args[0]) + 0x10);
  if (*(char *)(uVar6 + 0x15) != '\x02') {
    if ((*(int *)&gen_args[1]) + 1U < 0x40000000) {
      puVar3 = (undefined4 *)F_00c11930((*(int *)&gen_args[0]),0,0,(*(int *)&gen_args[1]) * 4);
    }
    else {
      puVar3 = (undefined4 *)F_00c11910((*(int *)&gen_args[0]));
    }
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x10);
    iVar5 = (*(int *)&gen_args[1]);
    puVar7 = puVar3;
    if (0 < (*(int *)&gen_args[1])) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    local_4 = 0;
    if (0 < piVar1[2]) {
      do {
        piVar4 = *(int * PTR32 *)(*piVar1 + local_4 * 4);
        if (piVar4 != (int *)0x0) {
          do {
            piVar2 = (int *)*piVar4;
            uVar6 = piVar4[2] & (*(int *)&gen_args[1]) - 1U;
            *piVar4 = puVar3[uVar6];
            puVar3[uVar6] = piVar4;
            piVar4 = piVar2;
          } while (piVar2 != (int *)0x0);
        }
        local_4 = local_4 + 1;
      } while (local_4 < piVar1[2]);
    }
    uVar6 = F_00c11930((*(int *)&gen_args[0]),*piVar1,piVar1[2] * 4,0);
    *piVar1 = (int)puVar3;
    piVar1[2] = (*(int *)&gen_args[1]);
  }
  return uVar6;
}

/* ref: FUN_00c059e0 */
uint F_00c059e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc059e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (0xffffffed < in_edi + 1U) {
    F_00c11910(param_2);
  }
  puVar2 = (undefined4 *)F_00c11930(param_2,0,0,in_edi + 0x11);
  puVar2[3] = in_edi;
  puVar2[2] = param_4;
  *(byte *)((int)puVar2 + 5) = *((byte *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x14))) & 3;
  *(undefined1 *)(puVar2 + 1) = 4;
  *(undefined1 *)((int)puVar2 + 6) = 0;
  F_00c46aa0(puVar2 + 4,param_3,in_edi);
  *(undefined1 *)((int)puVar2 + in_edi + 0x10) = 0;
  piVar1 = *(int * PTR32 *)(param_2 + 0x10);
  uVar3 = param_4 & piVar1[2] - 1U;
  *puVar2 = *(undefined4 *)(*piVar1 + uVar3 * 4);
  *(undefined4 * PTR32 *)(*piVar1 + uVar3 * 4) = puVar2;
  piVar1[1] = piVar1[1] + 1;
  uVar3 = piVar1[2];
  if ((uVar3 < (uint)piVar1[1]) && ((int)uVar3 < 0x3fffffff)) {
    F_00c05920(param_2,uVar3 * 2);
  }
  return (uint)puVar2;
}

/* ref: FUN_00c05a80 */
uint F_00c05a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  uVar2 = (param_3 >> 5) + 1;
  uVar5 = param_3;
  for (uVar3 = param_3; uVar2 <= uVar3; uVar3 = uVar3 - uVar2) {
    uVar5 = uVar5 ^ (uint)*((byte *)GEN_TOP(((int)param_2 + (uVar3 - 1)))) + uVar5 * 0x20 + (uVar5 >> 2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + ((*(int * PTR32 *)(param_1 + 0x10))[2] - 1U & uVar5) * 4)));
  do {
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = F_00c059e0(param_3,param_1,param_2,uVar5);
      return uVar3;
    }
    if (puVar1[3] == param_3) {
      piVar4 = puVar1 + 4;
      piVar6 = param_2;
      for (uVar3 = param_3; 3 < uVar3; uVar3 = uVar3 - 4) {
        if (*piVar6 != *piVar4) goto LAB_00c05b20;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      if ((uVar3 == 0) ||
         (((char)*piVar4 == (char)*piVar6 &&
          ((uVar3 < 2 ||
           ((*(char *)((int)piVar4 + 1) == *(char *)((int)piVar6 + 1) &&
            ((uVar3 < 3 || (*(char *)((int)piVar4 + 2) == *(char *)((int)piVar6 + 2))))))))))) {
        if ((*(byte *)((int)puVar1 + 5) & 3 & ~*((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x14)))) != 0) {
          *(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) ^ 3;
        }
        return (uint)puVar1;
      }
    }
LAB_00c05b20: ;
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/* ref: FUN_00c05b70 */
uint F_00c05b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05b70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 * puVar2;
  
  if (0xffffffe5 < param_2) {
    F_00c11910(param_1);
  }
  puVar2 = (undefined4 *)F_00c11930(param_1,0,0,param_2 + 0x18);
  bVar1 = *((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x14)));
  puVar2[4] = param_2;
  *(byte *)((int)puVar2 + 5) = bVar1 & 3;
  *(undefined1 *)(puVar2 + 1) = 7;
  puVar2[2] = 0;
  puVar2[3] = param_3;
  *puVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70)));
  **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70))) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c05bd0 */
uint F_00c05bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,param_2 * 0x10 + 0x18);
  F_00c01960(param_1,uVar1,6);
  *(char *)(uVar1 + 7) = (char)param_2;
  *(undefined1 *)(uVar1 + 6) = 1;
  *(undefined4 *)(uVar1 + 0xc) = param_3;
  return uVar1;
}

/* ref: FUN_00c05c10 */
uint F_00c05c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = param_2 * 4 + 0x14;
  uVar1 = F_00c11930(param_1,0,0,iVar3);
  F_00c01960(param_1,uVar1,6);
  *(undefined1 *)(uVar1 + 6) = 0;
  *(undefined4 *)(uVar1 + 0xc) = param_3;
  *(char *)(uVar1 + 7) = (char)param_2;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(iVar3 + uVar1);
    iVar3 = param_2;
    do {
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = 0;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00c05c70 */
uint F_00c05c70(unsigned int gen_a0)
{
  GEN_ENTER(0xc05c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,uVar1,10);
  *(uint *)(uVar1 + 8) = uVar1 + 0x10;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  return uVar1;
}

/* ref: FUN_00c05cb0 */
uint F_00c05cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05cb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x68);
  piVar4 = (int *)(param_1 + 0x68);
  while (iVar2 != 0) {
    piVar5 = (int *)*piVar4;
    if ((uint)piVar5[2] < param_2) break;
    if (piVar5[2] == param_2) {
      if ((~*(byte *)(iVar3 + 0x14) & *(byte *)((int)piVar5 + 5) & 3) == 0) {
        return (uint)piVar5;
      }
      *(byte *)((int)piVar5 + 5) = *(byte *)((int)piVar5 + 5) ^ 3;
      return (uint)piVar5;
    }
    piVar4 = piVar5;
    iVar2 = *piVar5;
  }
  piVar5 = (int *)F_00c11930(param_1,0,0,0x20);
  *(undefined1 *)(piVar5 + 1) = 10;
  bVar1 = *(byte *)(iVar3 + 0x14);
  piVar5[2] = param_2;
  *(byte *)((int)piVar5 + 5) = bVar1 & 3;
  *piVar5 = *piVar4;
  *piVar4 = (int)piVar5;
  piVar5[4] = iVar3 + 0x78;
  iVar2 = *(int *)(iVar3 + 0x8c);
  piVar5[5] = iVar2;
  *(int * PTR32 *)(iVar2 + 0x10) = piVar5;
  *(int * PTR32 *)(iVar3 + 0x8c) = piVar5;
  return (uint)piVar5;
}

/* ref: FUN_00c05d60 */
uint F_00c05d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x10);
  if (*(int * PTR32 *)(param_2 + 8) != piVar1) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x14) + 0x10))) = *piVar1;
    *(undefined4 *)(*piVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  uVar2 = F_00c11930(param_1,param_2,0x20,0);
  return uVar2;
}

/* ref: FUN_00c05da0 */
unsigned int F_00c05da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar2 = *(int *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x10);
  while ((iVar2 != 0 && (puVar4 = *(undefined4 * PTR32 *)(param_1 + 0x68), param_2 <= (uint)puVar4[2]))) {
    *(undefined4 *)(param_1 + 0x68) = *puVar4;
    piVar1 = puVar4 + 4;
    if ((~*(byte *)(iVar3 + 0x14) & *(byte *)((int)puVar4 + 5) & 3) == 0) {
      *(int *)(puVar4[5] + 0x10) = *piVar1;
      *(undefined4 *)(*piVar1 + 0x14) = puVar4[5];
      piVar5 = (int *)puVar4[2];
      *piVar1 = *piVar5;
      puVar4[5] = piVar5[1];
      puVar4[6] = piVar5[2];
      puVar4[2] = piVar1;
      F_00c01990(param_1,puVar4);
    }
    else {
      if ((int *)puVar4[2] != piVar1) {
        *(int *)(puVar4[5] + 0x10) = *piVar1;
        *(undefined4 *)(*piVar1 + 0x14) = puVar4[5];
      }
      F_00c11930(param_1,puVar4,0x20,0);
    }
    iVar2 = *(int *)(param_1 + 0x68);
  }
  return 0;
}

/* ref: FUN_00c05e50 */
uint F_00c05e50(unsigned int gen_a0)
{
  GEN_ENTER(0xc05e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x4c);
  F_00c01960(param_1,uVar1,9);
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0x28) = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  *(undefined4 *)(uVar1 + 0x2c) = 0;
  *(undefined4 *)(uVar1 + 0x30) = 0;
  *(undefined4 *)(uVar1 + 0x24) = 0;
  *(undefined1 *)(uVar1 + 0x48) = 0;
  *(undefined4 *)(uVar1 + 0x1c) = 0;
  *(undefined1 *)(uVar1 + 0x49) = 0;
  *(undefined1 *)(uVar1 + 0x4a) = 0;
  *(undefined1 *)(uVar1 + 0x4b) = 0;
  *(undefined4 *)(uVar1 + 0x14) = 0;
  *(undefined4 *)(uVar1 + 0x38) = 0;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  *(undefined4 *)(uVar1 + 0x3c) = 0;
  *(undefined4 *)(uVar1 + 0x40) = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0;
  return uVar1;
}

/* ref: FUN_00c05eb0 */
uint F_00c05eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x2c) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 0x34) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 8),*(int *)(param_2 + 0x28) << 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0x30) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x18),*(int *)(param_2 + 0x38) * 0xc,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x1c),*(int *)(param_2 + 0x24) * 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x4c,0);
  return uVar1;
}

/* ref: FUN_00c05f50 */
uint F_00c05f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(char *)(param_2 + 6) != '\0') {
    uVar1 = F_00c11930(param_1,param_2,(uint)*(byte *)(param_2 + 7) * 0x10 + 0x18,0);
    return uVar1;
  }
  uVar1 = F_00c11930(param_1,param_2,(uint)*(byte *)(param_2 + 7) * 4 + 0x14,0);
  return uVar1;
}

/* ref: FUN_00c05f90 */
uint F_00c05f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05f90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 8)));
    iVar3 = param_2;
    do {
      if (param_3 < piVar2[-1]) {
        return 0;
      }
      if ((param_3 < *piVar2) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
        return *((int *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar1 * 0xc))) + 0x10;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  return 0;
}

/* ref: FUN_00c05fe0 */
uint F_00c05fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc05fe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != (byte *)0x0) && ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0)) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) + -1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    return (uint)bVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00c06020 */
uint F_00c06020(unsigned int gen_a0)
{
  GEN_ENTER(0xc06020u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (*(*(int * PTR32 *)&gen_args[0]) != 0) {
LAB_00c06069: ;
    return (uint)*(byte *)piVar2[1];
  }
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != (byte *)0x0) && ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0)) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) + -1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    if (bVar1 != 0xffffffff) {
      *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]);
      piVar2[1] = (int)pbVar3;
      goto LAB_00c06069;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c06080 */
unsigned int F_00c06080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc06080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  param_2[4] = param_1;
  param_2[2] = param_3;
  param_2[3] = param_4;
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}

/* ref: FUN_00c060b0 */
uint F_00c060b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc060b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (*(int *)&gen_args[1]);
  uVar3 = (*(uint *)&gen_args[2]);
  do {
    if (uVar3 == 0) {
      return 0;
    }
    if (*(*(uint * PTR32 *)&gen_args[0]) == 0) {
      pbVar2 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2])))((*(uint * PTR32 *)&gen_args[0])[4],(*(uint * PTR32 *)&gen_args[0])[3],&(*(uint *)&gen_args[2]))));
      if (pbVar2 == (byte *)0x0) {
        return uVar3;
      }
      if ((*(uint *)&gen_args[2]) == 0) {
        return uVar3;
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar2;
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]) - 1;
      bVar1 = *pbVar2;
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)(pbVar2 + 1);
      if (bVar1 == 0xffffffff) {
        return uVar3;
      }
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]);
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar2;
    }
    if (*((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) == 0xffffffff) {
      return uVar3;
    }
    uVar5 = *(*(uint * PTR32 *)&gen_args[0]);
    if (uVar3 <= *(*(uint * PTR32 *)&gen_args[0])) {
      uVar5 = uVar3;
    }
    F_00c46aa0(iVar4,((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])),uVar5);
    *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) - uVar5;
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar3 - uVar5;
  } while( true );
}

/* ref: FUN_00c06140 */
uint F_00c06140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc06140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (param_3 <= param_2[2]) {
    return *param_2;
  }
  uVar2 = param_3;
  if (param_3 < 0x20) {
    uVar2 = 0x20;
  }
  if (uVar2 + 1 < 0xfffffffe) {
    uVar1 = F_00c11930(param_1,*param_2,param_2[2],uVar2);
    param_2[2] = uVar2;
    *param_2 = uVar1;
    return uVar1;
  }
  uVar1 = F_00c11910(param_1);
  param_2[2] = uVar2;
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00c061c0 */
uint F_00c061c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc061c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0));
  uVar1 = F_00c072c0(((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)(in_esi + 6));
  if (in_esi[4] == 0) {
    uVar1 = (*(code *)in_esi[1])(*in_esi,((undefined1 *)(gen_frame + 0x0)),0xc,in_esi[2]);
    in_esi[4] = uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc)) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c06230 */
uint F_00c06230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc06230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined1 * puVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined1 * PTR32 *)(gen_frame + 0xc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_2;
  if (param_3[5] == 0) {
    puVar2 = param_1;
    if (param_3[4] == 0) {
      puVar2 = ((undefined1 *)GEN_TOP((*(code *)param_3[1])(*param_3,param_1,param_2 * (int)this,param_3[2])));
      param_3[4] = puVar2;
    }
  }
  else {
    uVar6 = param_2 * (int)this;
    (*(uint *)(gen_frame + 0x18)) = uVar6;
    if (uVar6 < 0x201) {
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x1c));
    }
    else {
      puVar2 = (undefined1 *)F_00c11930(*param_3,0,0,uVar6);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    }
    F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(undefined1 * PTR32 *)(gen_frame + 0x10)),uVar6);
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (*(undefined1 * PTR32 *)(gen_frame + 0xc)) + uVar6;
    uVar5 = param_2;
    for (puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0xc)); puVar2 < (*(undefined1 * PTR32 *)(gen_frame + 0xc)) + uVar6; puVar2 = puVar2 + uVar5) {
      iVar3 = 0;
      if (param_2 >> 1 != 0) {
        puVar4 = puVar2 + (uVar5 - 1);
        do {
          uVar1 = *puVar4;
          *puVar4 = puVar2[iVar3];
          puVar2[iVar3] = uVar1;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + -1;
          uVar5 = (*(uint *)(gen_frame + 0x14));
        } while (iVar3 < (int)(param_2 >> 1));
      }
    }
    if (param_3[4] == 0) {
      uVar6 = (*(code *)param_3[1])(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x18)),param_3[2]);
      param_3[4] = uVar6;
    }
    puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0xc)) != ((undefined1 *)(gen_frame + 0x1c))) {
      puVar2 = (undefined1 *)F_00c11930(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
  return (uint)puVar2;
}

/* ref: FUN_00c06400 */
uint F_00c06400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06400u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if ((in_eax == 0) || (in_eax + 0x10 == 0)) {
    (*(int *)(gen_frame + 0xc)) = 0;
    uVar1 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,in_esi);
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *(int *)(in_eax + 0xc) + 1;
    uVar1 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,in_esi);
    if (in_esi[4] == 0) {
      uVar1 = (*(code *)in_esi[1])(*in_esi,in_eax + 0x10,(*(int *)(gen_frame + 0xc)),in_esi[2]);
      in_esi[4] = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00c06470 */
uint F_00c06470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x28);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
  F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_2 + 8) + iVar3)));
      ((undefined1 *)(gen_frame + 0xb))[0] = *((undefined1 *)GEN_TOP((*(int *)(param_2 + 8) + 8 + iVar3)));
      F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)),1,in_eax);
      iVar1 = *(int *)(puVar4 + 1);
      if (iVar1 == 1) {
        uVar6 = 1;
        puVar5 = (undefined8 *)((undefined1 *)(gen_frame + 0xb));
        ((undefined1 *)(gen_frame + 0xb))[0] = *(undefined1 *)puVar4;
LAB_00c06512: ;
        F_00c06230((undefined *)0x1,puVar5,uVar6,in_eax);
      }
      else {
        if (iVar1 == 3) {
          uVar6 = 8;
          puVar5 = &(*(undefined8 *)(gen_frame + 0x10));
          (*(undefined8 *)(gen_frame + 0x10)) = *puVar4;
          goto LAB_00c06512;
        }
        if (iVar1 == 4) {
          F_00c06400(*(undefined4 *)puVar4,in_eax);
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar1 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) + -1;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
  uVar2 = F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = F_00c06700(*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + iVar3 * 4))),
                           *(undefined4 *)(param_2 + 0x20),in_eax);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return uVar2;
}

/* ref: FUN_00c06580 */
uint F_00c06580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06580u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * this;
  int iVar5;
  
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x30)));
  }
  else {
    this = (undefined *)0x0;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14)));
  (*(undefined * PTR32 *)&gen_args[1]) = this;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  F_00c06230(this,uVar1,4,(*(undefined4 * PTR32 *)&gen_args[0]));
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    iVar4 = *(int *)(iVar2 + 0x38);
  }
  else {
    iVar4 = 0;
  }
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)iVar4;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      F_00c06400(*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x18) + iVar5))),(*(undefined4 * PTR32 *)&gen_args[0]));
      (*(undefined * PTR32 *)&gen_args[1]) = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x18) + 4 + iVar5)));
      F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*(int *)(iVar2 + 0x18) + 8 + iVar5)));
      F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    (*(undefined * PTR32 *)&gen_args[1]) = *(undefined * PTR32 *)(iVar2 + 0x24);
  }
  else {
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
  }
  iVar4 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = (int)(*(undefined * PTR32 *)&gen_args[1]);
  uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x1c) + iVar5 * 4)));
      if ((iVar4 == 0) || (iVar4 + 0x10 == 0)) {
        (*(int *)(gen_frame + 0xc)) = 0;
        uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      }
      else {
        (*(int *)(gen_frame + 0xc)) = *(int *)(iVar4 + 0xc) + 1;
        uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
        if ((*(undefined4 * PTR32 *)&gen_args[0])[4] == 0) {
          uVar3 = (*((code *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[1])))(*(*(undefined4 * PTR32 *)&gen_args[0]),iVar4 + 0x10,(*(int *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[0])[2]);
          (*(undefined4 * PTR32 *)&gen_args[0])[4] = uVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(*(undefined * PTR32 *)&gen_args[1]));
  }
  return uVar3;
}

/* ref: FUN_00c06700 */
uint F_00c06700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc06700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this;
  undefined4 uVar1;
  int iVar2;
  int in_eax;
  int in_eax_00;
  uint uVar3;
  
  in_eax = (*(int *)&gen_args[2]);
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]);
  in_eax_00 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if ((in_eax_00 == (*(int *)&gen_args[1])) || (*(int *)((*(int *)&gen_args[2]) + 0xc) != 0)) {
    in_eax_00 = 0;
  }
  F_00c06400(in_eax_00,(*(int *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[0]) = *(undefined * PTR32 *)(iVar2 + 0x3c);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = *(undefined * PTR32 *)(iVar2 + 0x40);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x48);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x49);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x4a);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),*(undefined1 *)(iVar2 + 0x4b))));
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  this = *(undefined * PTR32 *)(iVar2 + 0x2c);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  (*(undefined * PTR32 *)&gen_args[0]) = this;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  F_00c06230(this,uVar1,4,in_eax);
  F_00c06470(in_eax,iVar2);
  uVar3 = F_00c06580(in_eax,iVar2);
  return uVar3;
}

/* ref: FUN_00c06800 */
uint F_00c06800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc06800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_5;
  (*(uint *)(gen_frame + 0x14)) = 0;
  bVar1 = F_00c07300();
  (*(byte *)(gen_frame + 0x1c)) = (byte)param_6;
  (*(uint *)(gen_frame + 0x18)) = (uint)((byte)param_6 != bVar1);
  F_00c072c0(((undefined1 *)(gen_frame + 0x20)),param_6);
  if ((*(uint *)(gen_frame + 0x14)) == 0) {
    uVar2 = (*(code *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),((undefined1 *)(gen_frame + 0x20)),0xc,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
    (*(uint *)(gen_frame + 0x14)) = uVar2;
  }
  F_00c06700(param_2,0,((byte *)(gen_frame + 0x4)));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00c06960 */
uint F_00c06960(unsigned int gen_a0)
{
  GEN_ENTER(0xc06960u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00c060b0(in_esi[1],&(*(uint *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((int)(*(uint *)(gen_frame + 0xc)) < 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a38)));
                    
    F_00bb93a0(*in_esi,3);
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00c06a20 */
uint F_00c06a20(unsigned int gen_a0)
{
  GEN_ENTER(0xc06a20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c060b0(in_esi[1],&(*(int *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((*(int *)(gen_frame + 0xc)) == 0) {
    return 0;
  }
  uVar1 = F_00c06140(*in_esi,in_esi[2],(*(int *)(gen_frame + 0xc)));
  uVar2 = F_00c060b0(in_esi[1],uVar1,(*(int *)(gen_frame + 0xc)));
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar1 = F_00c05a80(*in_esi,uVar1,(*(int *)(gen_frame + 0xc)) + -1);
  return uVar1;
}

/* ref: FUN_00c06ad0 */
uint F_00c06ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(param_2 + 0xc) = uVar2;
  *(uint *)(param_2 + 0x2c) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  return 0;
}

/* ref: FUN_00c06b60 */
uint F_00c06b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06b60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  
  iVar1 = (*(int *)&gen_args[1]);
  uVar2 = F_00c06960((*(undefined4 * PTR32 *)&gen_args[0]));
  if (uVar2 + 1 < 0x10000000) {
    uVar3 = F_00c11930(*(*(undefined4 * PTR32 *)&gen_args[0]),0,0,uVar2 << 4);
  }
  else {
    uVar3 = F_00c11910(*(*(undefined4 * PTR32 *)&gen_args[0]));
  }
  iVar5 = 0;
  *(uint *)(iVar1 + 8) = uVar3;
  *(uint *)(iVar1 + 0x28) = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    uVar3 = uVar2;
    do {
      *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)(iVar1 + 8)))) = 0;
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (0 < (int)uVar2) {
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      do {
        puVar6 = ((uint *)GEN_TOP((*(int *)(iVar1 + 8) + iVar5)));
        uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(int *)&gen_args[1]),1);
        if (uVar2 != 0) {
          F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
        }
        switch((unsigned int)(uintptr_t)((undefined1)(*(int *)&gen_args[1]))) {
        case 0: ;
          puVar6[2] = 0;
          break;
        case 1: ;
          uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(char *)(gen_frame + 0x3)),1);
          if (uVar2 != 0) {
            F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                         ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
          }
          puVar6[2] = 1;
          *puVar6 = (uint)((*(char *)(gen_frame + 0x3)) != '\0');
          break;
        default: ;
          F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                       ((char *)REFP(0x1347a44)));
                    
          F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
        case 3: ;
          uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(undefined8 *)(gen_frame + 0x8)),8);
          if (uVar2 != 0) {
            F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                         ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
          }
          *(undefined8 *)puVar6 = (*(undefined8 *)(gen_frame + 0x8));
          puVar6[2] = 3;
          break;
        case 4: ;
          uVar2 = F_00c06a20((*(undefined4 * PTR32 *)&gen_args[0]));
          *puVar6 = uVar2;
          puVar6[2] = 4;
        }
        iVar5 = iVar5 + 0x10;
        uVar2 = (*(uint *)(gen_frame + 0x4)) - 1;
        (*(uint *)(gen_frame + 0x4)) = uVar2;
      } while (uVar2 != 0);
    }
  }
  uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(int *)&gen_args[1]),4);
  iVar5 = (*(int *)&gen_args[1]);
  if (uVar2 == 0) {
    if ((*(int *)&gen_args[1]) < 0) {
      F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a38)));
                    
      F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
    }
    if ((*(int *)&gen_args[1]) + 1U < 0x40000000) {
      uVar2 = F_00c11930(*(*(undefined4 * PTR32 *)&gen_args[0]),0,0,(*(int *)&gen_args[1]) * 4);
    }
    else {
      uVar2 = F_00c11910(*(*(undefined4 * PTR32 *)&gen_args[0]));
    }
    *(uint *)(iVar1 + 0x10) = uVar2;
    uVar2 = 0;
    *(int *)(iVar1 + 0x34) = iVar5;
    if (0 < iVar5) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + uVar2 * 4))) = 0;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar5);
    }
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        uVar2 = F_00c070c0((*(undefined4 * PTR32 *)&gen_args[0]),*(undefined4 *)(iVar1 + 0x20));
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x10) + iVar4 * 4))) = uVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    return uVar2;
  }
  F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a28)));
                    
  F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
}

/* ref: FUN_00c06e00 */
uint F_00c06e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(in_edi + 0x14) = uVar2;
  *(uint *)(in_edi + 0x30) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x15555556) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 0xc);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(in_edi + 0x18) = uVar2;
  *(uint *)(in_edi + 0x38) = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    uVar2 = uVar1;
    do {
      *((undefined4 *)GEN_TOP((iVar3 + *(int *)(in_edi + 0x18)))) = 0;
      iVar3 = iVar3 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (0 < (int)uVar1) {
      iVar3 = 0;
      do {
        uVar2 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*(int *)(in_edi + 0x18) + iVar3))) = uVar2;
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0x8)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0x8)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*(int *)(in_edi + 0x18) + 4 + iVar3))) = (*(int *)(gen_frame + 0x8));
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0xc)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0xc)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*(int *)(in_edi + 0x18) + 8 + iVar3))) = (*(int *)(gen_frame + 0xc));
        iVar3 = iVar3 + 0xc;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  uVar1 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    if ((*(int *)(gen_frame + 0xc)) + 1U < 0x40000000) {
      uVar1 = F_00c11930(*in_eax,0,0,(*(int *)(gen_frame + 0xc)) * 4);
    }
    else {
      uVar1 = F_00c11910(*in_eax);
    }
    *(uint *)(in_edi + 0x1c) = uVar1;
    uVar1 = 0;
    *(int *)(in_edi + 0x24) = (*(int *)(gen_frame + 0xc));
    if (0 < (*(int *)(gen_frame + 0xc))) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x1c) + uVar1 * 4))) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (*(int *)(gen_frame + 0xc)));
    }
    iVar3 = 0;
    if (0 < (*(int *)(gen_frame + 0xc))) {
      do {
        uVar1 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*(int *)(in_edi + 0x1c) + iVar3 * 4))) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (*(int *)(gen_frame + 0xc)));
    }
    return uVar1;
  }
  F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a38)));
                    
  F_00bb93a0(*in_eax,3);
}

/* ref: FUN_00c070c0 */
uint F_00c070c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc070c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  int iVar2;
  int * in_esi;
  uint in_edi;
  uint uVar3;
  
  in_esi = (*(int * PTR32 *)&gen_args[0]);
  *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) = *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) + 1;
  if (200 < *((ushort *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34)))) {
    F_00c00790(*(*(int * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(int * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a54))
                );
                    
    F_00bb93a0(*in_esi,3);
  }
  in_edi = F_00c05e50(*(*(int * PTR32 *)&gen_args[0]));
  puVar1 = *(uint * PTR32 *)(*in_esi + 8);
  *puVar1 = in_edi;
  puVar1[2] = 9;
  iVar2 = *in_esi;
  if (*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 8) < 0x11) {
    F_00bb8d50(iVar2,1);
  }
  *(int *)(*in_esi + 8) = *(int *)(*in_esi + 8) + 0x10;
  uVar3 = F_00c06a20(in_esi);
  *(uint *)(in_edi + 0x20) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(in_edi + 0x20) = (*(undefined4 *)&gen_args[1]);
  }
  uVar3 = F_00c06960(in_esi);
  *(uint *)(in_edi + 0x3c) = uVar3;
  uVar3 = F_00c06960(in_esi);
  *(uint *)(in_edi + 0x40) = uVar3;
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x48) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x49) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x4a) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x4b) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  F_00c06ad0(in_esi,in_edi);
  F_00c06b60(in_esi,in_edi);
  F_00c06e00(in_esi,in_edi);
  uVar3 = F_00c02380(in_edi);
  if (uVar3 == 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a64)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *(int *)(*in_esi + 8) = *(int *)(*in_esi + 8) + -0x10;
  *(short *)(*in_esi + 0x34) = *(short *)(*in_esi + 0x34) + -1;
  return in_edi;
}

/* ref: FUN_00c072c0 */
uint F_00c072c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc072c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = REFG(undefined4, 0x1347a98);
  *(undefined1 *)(param_1 + 1) = 0x51;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(bool *)((int)param_1 + 6) = (char)param_2 == 'l';
  *(undefined1 *)((int)param_1 + 7) = 4;
  *(undefined1 *)(param_1 + 2) = 4;
  *(undefined1 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 10) = 8;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  return (uint)((int)param_1 + 10);
}

/* ref: FUN_00c07300 */
byte F_00c07300(void)
{
  GEN_ENTER(0xc07300u, 0u, 0u, 0u, 0u);
  return 0x6c;
}

/* ref: FUN_00c07310 */
uint F_00c07310(unsigned int gen_a0)
{
  GEN_ENTER(0xc07310u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  ((int *)(gen_frame + 0x10))[3] = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1347a98);
  (*(undefined1 *)(gen_frame + 0x8)) = 0x51;
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined1 *)(gen_frame + 0xb)) = 4;
  (*(undefined1 *)(gen_frame + 0xc)) = 4;
  (*(undefined1 *)(gen_frame + 0xd)) = 4;
  (*(undefined1 *)(gen_frame + 0xe)) = 8;
  (*(undefined1 *)(gen_frame + 0xf)) = 0;
  uVar1 = F_00c060b0(in_esi[1],((int *)(gen_frame + 0x10)),0xc);
  if (uVar1 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar1 = 0xc;
  iVar2 = 0;
  do {
    if (*(int *)((int)&(*(int *)(gen_frame + 0x4)) + iVar2) != *(int *)((int)((int *)(gen_frame + 0x10)) + iVar2)) {
      F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a70)));
                    
      F_00bb93a0(*in_esi,3);
    }
    uVar1 = uVar1 - 4;
    iVar2 = iVar2 + 4;
  } while (3 < uVar1);
  F_00c47745(((int *)(gen_frame + 0x10))[3] ^ (uint)&(*(int *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00c073f0 */
uint F_00c073f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc073f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  cVar1 = *param_4;
  if ((cVar1 == '@') || (cVar1 == '=')) {
    pcVar3 = param_4 + 1;
  }
  else {
    pcVar3 = param_4;
    if (cVar1 == REFG(char, 0x1347a7c)) {
      (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x1347a84));
      goto LAB_00c07418;
    }
  }
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
LAB_00c07418: ;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  F_00c07310(&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00c05a80(param_1,&REFG(undefined, 0x1347a94),2);
  uVar2 = F_00c070c0(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
  return uVar2;
}

/* ref: FUN_00c07460 */
unsigned int F_00c07460(float gen_a0)
{
  GEN_ENTER(0xc07460u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00c07480 */
unsigned int F_00c07480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c07620 */
uint F_00c07620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x32;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c07680 */
uint F_00c07680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x31;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c076e0 */
uint F_00c076e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc076e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x2b3;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c07ad0 */
uint F_00c07ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xf;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00439fa0(this,param_2);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::SocketWinsock::vf2 */
uint F_00c07b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07b30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  SOCKET s;
  int iVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  ((char *)(gen_frame + 0x8))[0] = '\x01';
  ((char *)(gen_frame + 0x8))[1] = '\0';
  ((char *)(gen_frame + 0x8))[2] = '\0';
  ((char *)(gen_frame + 0x8))[3] = '\0';
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int *)&gen_args[1]);
  iVar2 = ((*(int *)&gen_args[1]) != 0) + 1;
  if ((*(int *)&gen_args[1]) == 4) {
    iVar2 = 3;
  }
  s = gen_imp_socket(2,iVar2,(uint)((*(int *)&gen_args[1]) == 4));
  *((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = s;
  if (s != 0xffffffff) {
    if (iVar2 == 2) {
      (*(int *)&gen_args[1]) = 0;
      iVar2 = gen_imp_WSAIoctl(s,0x9800000c,&(*(int *)&gen_args[1]),4,0,0,((undefined1 *)(gen_frame + 0x4)),0,0);
      if (iVar2 == -1) {
        iVar2 = gen_imp_WSAGetLastError();
        return -(uint)(iVar2 != 0x2733);
      }
    }
    else if (iVar1 == 6) {
      gen_imp_setsockopt(s,6,1,((char *)(gen_frame + 0x8)),4);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: Client::Network::Socket::SocketWinsock::vf3 */
uint F_00c07bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc07bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_closesocket(*(SOCKET *)(this + 4));
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::vf1 */
uint F_00c07c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc07c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (this[0x24] == (undefined1)0x0) {
    gen_imp_ioctlsocket(*(SOCKET *)(this + 4),-0x7ffb9982,(ulong *)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    this[0x24] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::vf4 */
uint F_00c07c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  gen_imp_setsockopt(*(SOCKET *)(this + 4),0xffff,4,(char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
  uVar1 = gen_imp_bind(*(SOCKET *)(this + 4),param_1,param_2);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf5 */
uint F_00c07c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_listen(*(SOCKET *)(this + 4),param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf6 */
uint F_00c07ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xc07ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_accept(*(SOCKET *)(this + 4),(undefined *)0x0,(int *)0x0);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    if (((iVar2 != 0x2714) && (iVar2 != 0x2733)) && (iVar2 != 0x2745)) {
      return 0xffffffff;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf7 */
uint F_00c07ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc07ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_connect(*(SOCKET *)(this + 4),param_1,param_2);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf8 */
uint F_00c07d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_send(*(SOCKET *)(this + 4),param_1,param_2,0);
  if ((int)uVar1 < 0) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf9 */
uint F_00c07d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_recv(*(SOCKET *)(this + 4),param_1,param_2,0);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf10 */
uint F_00c07d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc07d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_sendto(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf11 */
uint F_00c07dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc07dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = gen_imp_recvfrom(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    gen_imp_WSAGetLastError();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf17 */
uint F_00c07e10(unsigned int gen_a0)
{
  GEN_ENTER(0xc07e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x4)) = 4;
  iVar1 = gen_imp_getsockopt(*(SOCKET *)(this + 4),0xffff,0x1007,(char *)&(*(uint *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: Client::Network::Socket::SocketWinsock::vf12 */
uint F_00c07e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = gen_imp_getpeername(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if ((iVar1 != -1) && (iVar1 != 0x2736)) {
    return (-(uint)(iVar1 != 0x2749) & 0xffffe8b7) + 0x2749;
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf13 */
uint F_00c07eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = gen_imp_getsockname(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf14 */
uint F_00c07f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0xffff,0x1005,(char *)&(*(undefined4 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf15 */
uint F_00c07f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0xffff,0x1006,(char *)&(*(undefined4 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf16 */
uint F_00c07fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(gen_imp_inet_addr((*(char * PTR32 *)&gen_args[1]))));
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,9,(char *)&(*(char * PTR32 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: FUN_00c08080 */
unsigned int F_00c08080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc08080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined1 *)((int)this + 6) = (undefined1)param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 5) = (undefined1)param_2;
  *(undefined1 *)((int)this + 7) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00c080b0 */
unsigned int F_00c080b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc080b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00c08120 */
byte F_00c08120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = *(byte *)(in_ecx + 4) | 0x40;
  *(byte *)(in_ecx + 7) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf3 */
uint F_00c08160(unsigned int gen_a0)
{
  GEN_ENTER(0xc08160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 5);
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf4 */
byte F_00c08170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar1) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf0 */
uint F_00c081b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc081b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c081e0 */
uint F_00c081e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc081e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 6) = (undefined1)param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  *(undefined2 *)((int)this + 4) = 0x640;
  *(undefined1 *)((int)this + 7) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_00c08210 */
uint F_00c08210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  return (uint)this;
}

/* ref: FUN_00c08260 */
uint F_00c08260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  uVar1 = param_1[3];
  *(undefined1 * PTR32 *)((int)this + 0xc) = param_1 + 6;
  *(undefined1 *)((int)this + 7) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *(int *)((int)this + 0x10) = param_2 + -6;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c082b0 */
unsigned int F_00c082b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc082b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  uVar1 = param_1[3];
  *(undefined1 * PTR32 *)((int)this + 0xc) = param_1 + 4;
  *(undefined1 *)((int)this + 7) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *(int *)((int)this + 0x10) = param_2 + -6;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00c08300 */
unsigned int F_00c08300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x608;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return 0;
}

/* ref: FUN_00c08330 */
unsigned int F_00c08330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return 0;
}

/* ref: FUN_00c08380 */
unsigned int F_00c08380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x610;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return 0;
}

/* ref: FUN_00c083b0 */
uint F_00c083b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc083b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf1 */
uint F_00c08450(unsigned int gen_a0)
{
  GEN_ENTER(0xc08450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x80) = 1;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf2 */
uint F_00c08460(unsigned int gen_a0)
{
  GEN_ENTER(0xc08460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x7c))) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
  case 3: ;
    return 3;
  case 4: ;
  case 5: ;
    return 4;
  case 6: ;
    return 7;
  }
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf11 */
uint F_00c084b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x7c) != 4) {
    return 0x2749;
  }
  F_00ba6880(param_1,this + 0x82);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf12 */
uint F_00c084e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba7750(*(undefined * PTR32 *)(this + 0x74),param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf13 */
uint F_00c084f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba89b0(*(undefined * PTR32 *)(this + 0x74),param_1);
  return uVar1;
}

/* ref: FUN_00c08500 */
unsigned int F_00c08500(unsigned int gen_a0)
{
  GEN_ENTER(0xc08500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(char *)((int)this + 0x80) != '\0') && (*(int *)((int)this + 0x70) != 0)) &&
     ((code *)*(gen_code32 *)((int)this + 0x24) != (code *)0x0)) {
    ((code *)*(gen_code32 *)((int)this + 0x24))(*(int *)((int)this + 0x70));
  }
  return 0;
}

/* ref: FUN_00c08530 */
uint F_00c08530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(in_ecx + 0xd0);
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(in_ecx + 0xcc);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x40;
    *(char *)(param_2 + 7) = (char)uVar2;
    uVar3 = param_2;
  }
  return uVar3;
}

/* ref: FUN_00c08560 */
uint F_00c08560(unsigned int gen_a0)
{
  GEN_ENTER(0xc08560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xf8) = 0;
  *(undefined4 *)(in_ecx + 0x170) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 0x148) = 0;
  *(undefined4 *)(in_ecx + 0x198) = 0;
  return 0;
}

/* ref: FUN_00c08590 */
unsigned int F_00c08590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != *(int *)(in_ecx + 0x7c)) {
    *(int *)(in_ecx + 0x7c) = param_2;
  }
  return 0;
}

/* ref: FUN_00c085d0 */
unsigned int F_00c085d0(void)
{
  GEN_ENTER(0xc085d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c085e0 */
uint F_00c085e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc085e0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  if (5 < param_2) {
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      return 1;
    }
    if ((bVar1 & 8) != 0) {
      return 5;
    }
    if ((bVar1 & 0x20) != 0) {
      return 3;
    }
    if ((bVar1 & 0x10) != 0) {
      return 4;
    }
    if ((bVar1 & 0x40) != 0) {
      return (param_2 != 6) - 1 & 2;
    }
  }
  return 6;
}

/* ref: FUN_00c08640 */
unsigned int F_00c08640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xc08640u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined1 *)((int)this + 6) = (undefined1)param_1;
  *(undefined1 *)((int)this + 7) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  *(undefined1 *)((int)this + 0xd) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_3;
  *(undefined2 *)((int)this + 0x12) = (undefined2)param_4;
  *(undefined2 *)((int)this + 0x14) = (undefined2)param_5;
  *(undefined2 *)((int)this + 0x16) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_7;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_8;
  *(undefined2 *)((int)this + 4) = 0x1680;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *(undefined1 *)((int)this + 0x1a) = (undefined1)param_9;
  *(undefined1 *)((int)this + 0x1b) = (undefined1)param_10;
  return 0;
}

/* ref: FUN_00c086b0 */
unsigned int F_00c086b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc086b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *(byte *)((int)this + 0xc) = (byte)param_1[4] >> 4;
  *(undefined1 *)((int)this + 0xd) = param_1[5];
  *(undefined1 *)((int)this + 0xe) = param_1[6];
  *(ushort *)((int)this + 0x10) = CONCAT11(param_1[8],param_1[9]);
  *(ushort *)((int)this + 0x12) = CONCAT11(param_1[10],param_1[0xb]);
  *(ushort *)((int)this + 0x14) = CONCAT11(param_1[0xc],param_1[0xd]);
  *(ushort *)((int)this + 0x16) = CONCAT11(param_1[0xe],param_1[0xf]);
  *(undefined1 *)((int)this + 0x18) = param_1[0x10];
  *(undefined1 *)((int)this + 0x19) = param_1[0x11];
  *(undefined1 *)((int)this + 0x1a) = param_1[0x12];
  *(undefined1 *)((int)this + 0x1b) = param_1[0x13];
  return 0;
}

/* ref: FUN_00c08780 */
uint F_00c08780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12010];
  undefined4 uVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x12008)) = 0xc0878d;
  (*(uint *)(gen_frame + 0x12008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if (((uVar2 == 0) || ((3 < (int)uVar2 && ((int)uVar2 < 6)))) &&
     (iVar5 = *(int *)((int)this + 0xd0), *(undefined4 *)((int)this + 0xd0) = 0, iVar5 != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0xcc);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
    *(char *)((int)param_1 + 7) = (char)uVar1;
  }
  if ((uVar2 == 0) || (uVar2 == 4)) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0xe0) = (int)_Var3;
    uVar4 = F_00427d90();
    *(ulonglong *)((int)this + 0xe8) = uVar4;
    uVar4 = F_00427e30();
    *(ulonglong *)((int)this + 0xf0) = uVar4;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,((undefined1 *)(gen_frame + 0x10008)),0x2000);
  if ((char)uVar2 != '\0') {
    iVar5 = (int)this + 0x82;
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    uVar2 = F_00baa590(*(undefined * PTR32 *)((int)this + 0x74),((undefined1 *)(gen_frame + 0x10008)),uVar2,iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x12008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar2;
}

/* ref: FUN_00c08860 */
uint F_00c08860(unsigned int gen_a0)
{
  GEN_ENTER(0xc08860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)*(int *)((int)this + 0xcc);
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((*(int *)((int)this + 0xcc) + 1) % 0xff);
    uVar2 = F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00c088c0 */
uint F_00c088c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc088c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  if (*(int *)((int)this + 0x7c) != 5) {
    *(undefined4 *)((int)this + 0x7c) = 5;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
  *(undefined4 *)((int)this + 0x198) = 1;
  *(int *)((int)this + 0x19c) = iVar1 * 2;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x180) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)((int)this + 0x188) = uVar4;
  uVar4 = F_00427e30();
  uVar2 = (uint)uVar4;
  *(ulonglong *)((int)this + 400) = uVar4;
  if (*(char *)((int)this + 0x80) == '\0') {
    iVar1 = *(int *)((int)this + 0x7c);
    while (iVar1 != 6) {
      uVar2 = F_00bada50();
      iVar1 = *(int *)((int)this + 0x7c);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf3 */
uint F_00c08960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)(this + 0x74) + 0x24))),0);
  F_00baba80(*(undefined * PTR32 *)(this + 0x74));
  if (*(int *)(this + 0x7c) != 1) {
    *(undefined4 *)(this + 0x7c) = 1;
  }
  return 0;
}

/* ref: FUN_00c08990 */
uint F_00c08990(unsigned int gen_a0)
{
  GEN_ENTER(0xc08990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  local_c = 0;
  bVar3 = false;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar1 = (int *)piVar5[2];
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar4 == 0) {
        piVar2 = (int *)piVar1[5];
        if (piVar2 == (int *)0x0) {
          iVar6 = piVar1[4];
        }
        else {
          iVar6 = piVar2[1] - *piVar2;
        }
        local_c = local_c + iVar6;
LAB_00c089ed: ;
        piVar5 = (int *)*piVar5;
      }
      else {
        if (uVar4 != 4) goto LAB_00c089ed;
        if (local_c == 0) {
          bVar3 = true;
        }
        piVar5 = *(int * PTR32 *)((int)this + 0x1d0);
      }
    } while (piVar5 != *(undefined4 * PTR32 *)((int)this + 0x1d0));
    if (local_c != 0) {
      return local_c;
    }
    if (bVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c08a10 */
unsigned int F_00c08a10(unsigned int gen_a0)
{
  GEN_ENTER(0xc08a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar3 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar3[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x1ac));
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1ac);
  piVar2 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  if (piVar2 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      piVar3 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x1ac));
  }
  return 0;
}

/* ref: FUN_00c08a80 */
unsigned int F_00c08a80(unsigned int gen_a0)
{
  GEN_ENTER(0xc08a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return 0;
}

/* ref: FUN_00c08ae0 */
uint F_00c08ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc08ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x78;
  *(undefined4 *)((int)this + 0x30) = 0x2d;
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
  *(undefined4 *)((int)this + 0x70) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00ba85b0(uVar1,1);
    }
  }
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  F_00ba6710((int)this + 0x82);
  *(undefined2 *)((int)this + 0xc2) = 0;
  puVar2 = (undefined4 *)F_00406b90(0x2c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x20;
    puVar2[1] = 0x20;
    puVar2[2] = 0x400;
    puVar2[3] = 3;
    puVar2[4] = 0;
    puVar2[5] = 3;
    puVar2[6] = 3;
    puVar2[7] = 3;
    puVar2[8] = 2000;
    puVar2[9] = 600;
    puVar2[10] = 300;
  }
  *(undefined4 * PTR32 *)((int)this + 0xc4) = puVar2;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_00a1af40((undefined *)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  F_00a1af40((undefined *)((int)this + 0x108));
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  F_00a1af40((undefined *)((int)this + 0x130));
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  F_00a1af40((undefined *)((int)this + 0x158));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  F_00a1af40((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 1;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1ac) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1bc) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1b8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1b8) + 4))) = *(int *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1c4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x1d4) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1d0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) = *(int *)((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = **(undefined4 * PTR32 *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0x1e0) = (*(undefined4 * PTR32 *)((int)this + 0xc4))[1];
  return (uint)this;
}

/* ref: FUN_00c08d70 */
uint F_00c08d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08d70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != '\0') {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00ba85b0(uVar1,3);
    }
    uVar1 = F_00ba6e30(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))));
    if (uVar1 == 0) {
      uVar1 = REFG(undefined4, 0x14c5958);
    }
    (*(int * PTR32 *)&gen_args[1])[0x1c] = (int)this_00;
    F_00ba86b0(this_00,(*(int * PTR32 *)&gen_args[1]));
    F_00ba9ae0(this_00,uVar1);
    uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    if ((uVar1 != 0) && (*((gen_code32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != (code *)0x0)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(uVar1,this_00);
    }
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500))) + 4))) < 0x7fffffff) {
    uVar1 = F_00c0eda0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500))),&(*(int * PTR32 *)&gen_args[1]));
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c08e20 */
uint F_00c08e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint local_8;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  uVar2 = 0;
  local_8 = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar1 = (int *)piVar5[2];
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 == 0) {
        piVar6 = (int *)piVar1[5];
        if (piVar6 == (int *)0x0) {
          iVar4 = piVar1[4];
          iVar3 = piVar1[3];
        }
        else {
          iVar4 = piVar6[1] - *piVar6;
          iVar3 = *piVar6;
        }
        F_00c46aa0(local_8 + param_1,iVar3,iVar4);
        local_8 = local_8 + iVar4;
        piVar6 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
          *(int * PTR32 *)piVar5[1] = piVar6;
          *(int *)(*piVar5 + 4) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + -1;
        }
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      }
      else if (uVar2 == 4) {
        if (local_8 == 0) {
          if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
            *(int *)piVar5[1] = *piVar5;
            *(int *)(*piVar5 + 4) = piVar5[1];
            F_00429760(piVar5,0xc,0x25c);
            *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + -1;
          }
          ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        }
        piVar6 = *(int * PTR32 *)((int)this + 0x1d0);
      }
      else {
        piVar6 = (int *)*piVar5;
      }
      uVar2 = local_8;
      piVar5 = piVar6;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x1d0));
  }
  return uVar2;
}

/* ref: FUN_00c08f30 */
uint F_00c08f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08f30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = F_00ba6930((*(undefined * PTR32 *)&gen_args[1]));
  uVar4 = (uint)(uVar5 >> 0x20);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8)));
  (*(ulonglong *)(gen_frame + 0x4)) = uVar5;
  uVar2 = F_00c0d000(this_00,&(*(ulonglong *)(gen_frame + 0x4)));
  uVar1 = *(uint *)((int)this_00 + 4);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)uVar2;
  if (uVar2 != uVar1) {
    if ((*(uint *)(uVar2 + 0x14) <= uVar4) &&
       ((uVar4 != *(uint *)(uVar2 + 0x14) || (*(uint *)(uVar2 + 0x10) <= (uint)uVar5)))) {
      puVar3 = (uint *)&(*(undefined * PTR32 *)&gen_args[1]);
      goto LAB_00c08f7f;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 4)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(uVar1,(undefined4)(*(ulonglong *)(gen_frame + 0x4)));
  puVar3 = (uint *)((int)&(*(ulonglong *)(gen_frame + 0x4)) + 4);
LAB_00c08f7f: ;
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    uVar1 = *(uint *)(uVar2 + 0x18);
    F_00c0e0e0(this_00,&(*(undefined * PTR32 *)&gen_args[1]),uVar2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c08fb0 */
uint F_00c08fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) == 0) &&
      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))))) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) <= *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0xc))))) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) + 1;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
    F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),&(*(int * PTR32 *)&gen_args[1]));
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) == 0) {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x24)));
        F_00c0cbc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))),uVar1,uVar1);
      }
    }
    F_00c08780((*(undefined * PTR32 *)&gen_args[0]),piVar5);
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
    return uVar4;
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
  iVar3 = *(int *)(iVar2 + 4);
  piVar5 = (int *)F_004296a0(0xc,0,0x25c);
  piVar5[1] = iVar3;
  *piVar5 = iVar2;
  if ((uint *)(piVar5 + 2) != (uint *)0x0) {
    piVar5[2] = (int)(*(int * PTR32 *)&gen_args[1]);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar5;
  *(int * PTR32 *)piVar5[1] = piVar5;
  return (uint)piVar5;
}

/* ref: FUN_00c090e0 */
uint F_00c090e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc090e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  ulonglong uVar7;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x1c4);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      puVar1 = (undefined4 *)piVar5[2];
      piVar4 = (int *)(uint)*(byte *)((int)puVar1 + 6);
      if (piVar4 == ((int *)GEN_TOP(((*(int *)((int)this + 0xcc) + 1) % 0xff)))) {
        *(int * PTR32 *)((int)this + 0xcc) = piVar4;
        if ((char)param_1 == '\0') {
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        else {
          iVar2 = *(int *)((int)this + 0x1d0);
          iVar3 = *(int *)(iVar2 + 4);
          piVar4 = (int *)F_004296a0(0xc,0,0x25c);
          piVar4[1] = iVar3;
          *piVar4 = iVar2;
          if (piVar4 + 2 != (int *)0x0) {
            piVar4[2] = (int)puVar1;
          }
          if (*(int *)((int)this + 0x1d4) == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 1;
          *(int * PTR32 *)(iVar2 + 4) = piVar4;
          *(int * PTR32 *)piVar4[1] = piVar4;
        }
        piVar6 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1c4)) {
          *(int * PTR32 *)piVar5[1] = piVar6;
          *(int *)(*piVar5 + 4) = piVar5[1];
          uVar7 = F_00429760(piVar5,0xc,0x25c);
          piVar4 = (int *)uVar7;
          *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + -1;
        }
      }
      else {
        piVar6 = (int *)*piVar5;
      }
      piVar5 = piVar6;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x1c4));
  }
  return (uint)piVar4;
}

/* ref: FUN_00c091e0 */
uint F_00c091e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc091e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 8);
  puVar1[1] = *(undefined4 *)((int)this + 8);
  puVar1[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  F_00c0e8e0((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return ((*(char *)(gen_frame + 0x8)) != '\0') - 1;
}

/* ref: FUN_00c09240 */
unsigned int F_00c09240(unsigned int gen_a0)
{
  GEN_ENTER(0xc09240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf4 */
uint F_00c092a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc092a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  if (this[0xc2] != (undefined1)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0x1f8) == 0) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
    case 0: ;
    case 1: ;
    case 6: ;
      F_00c08560(this);
      if (*(int *)(this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)(this + 0x74));
      }
    case 3: ;
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      break;
    case 2: ;
    case 4: ;
      iVar4 = (*(int *)(this + 200) + 1) % 0xff;
      (*(undefined2 *)(gen_frame + 0x4)) = 0x610;
      (*(undefined1 *)(gen_frame + 0x7)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
      *(int *)(this + 200) = iVar4;
      (*(undefined1 *)(gen_frame + 0x6)) = (char)iVar4;
      F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      F_00c088c0(this);
      this[0xc2] = (undefined1)0x1;
      return 0;
    case 5: ;
      if (*(int *)(this + 0x198) == 0) {
        F_00c08a10(this);
        F_00c088c0(this);
        this[0xc2] = (undefined1)0x1;
        return 0;
      }
    }
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4)));
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        ((code *)*(gen_code32 *)(*(int *)piVar5[6] + 0x10))((int *)piVar5[6]);
        if (*(char *)((int)piVar5 + 0x21) == '\0') {
          piVar2 = (int *)piVar5[2];
          if (*(char *)((int)piVar2 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x21);
              piVar5 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x21);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
            while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
              cVar1 = *(char *)(piVar5[1] + 0x21);
              piVar3 = (int *)piVar5[1];
              piVar2 = piVar5;
            }
          }
        }
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4))));
      this[0xc2] = (undefined1)0x1;
      return 0;
    }
  }
  this[0xc2] = (undefined1)0x1;
  return 0;
}

/* ref: FUN_00c09410 */
uint F_00c09410(unsigned int gen_a0)
{
  GEN_ENTER(0xc09410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if (*(char *)((int)this + 0xc3) == '\0') {
    *(undefined1 *)((int)this + 0xc3) = 1;
    if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
      if (((*(char *)((int)this + 0x80) != '\0') && (*(int *)((int)this + 0x70) != 0)) &&
         ((code *)*(gen_code32 *)((int)this + 8) != (code *)0x0)) {
        ((code *)*(gen_code32 *)((int)this + 8))(*(int *)((int)this + 0x70),0);
      }
    }
    else {
      F_00c08d70(*(undefined * PTR32 *)((int)this + 0x78),this);
    }
  }
  else {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0xe0) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0xe8) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)((int)this + 0xf0) = uVar5;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)((int)this + 0x168) = uVar5;
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
  *(undefined4 *)((int)this + 0xf8) = 1;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0xe0) = (int)_Var4;
  uVar5 = F_00427d90();
  *(ulonglong *)((int)this + 0xe8) = uVar5;
  uVar5 = F_00427e30();
  uVar3 = (uint)uVar5;
  *(ulonglong *)((int)this + 0xf0) = uVar5;
  if (*(char *)((int)this + 0x1a8) != '\0') {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
    *(undefined4 *)((int)this + 0x170) = 1;
    *(int *)((int)this + 0x174) = iVar2 * 6;
    *(int *)((int)this + 0x178) = iVar2 * 6;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    uVar3 = (uint)uVar5;
    *(ulonglong *)((int)this + 0x168) = uVar5;
  }
  return uVar3;
}

/* ref: FUN_00c09570 */
uint F_00c09570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar3 = (int *)F_00c08f30(this,param_1 + 0x82);
  if (*(char *)((int)this + 0x80) == '\0') {
    piVar1 = *(int * PTR32 *)((int)this + 500);
    piVar2 = (int *)*piVar1;
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      while (piVar3[2] != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar2) {
          return (uint)piVar3;
        }
      }
      if (piVar3 != piVar2) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        uVar4 = F_00429760(piVar3,0xc,0x25c);
        piVar3 = (int *)uVar4;
        piVar1 = piVar1 + 1;
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00c095e0 */
uint F_00c095e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc095e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  pvVar1 = (undefined *)F_00406b90(0x200,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00c08ae0(pvVar1,0,*(undefined4 *)((int)this + 0x74),this);
  }
  pvVar1 = (undefined *)F_00ba6e30(*(undefined4 *)((int)this + 0x70));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = REFG(undefined4, 0x14c5958);
  }
  uVar3 = F_00ba7110(pvVar1);
  puVar4 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar4 = *(undefined4 *)(uVar3 + 8);
  puVar4[1] = *(undefined4 *)(uVar3 + 8);
  puVar4[2] = *(undefined4 *)(uVar3 + 8);
  *(undefined2 *)(puVar4 + 4) = 0;
  if (puVar4 + 3 != (uint *)0x0) {
    puVar4[3] = uVar2;
  }
  F_00c0e8e0((undefined *)(uVar3 + 4),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
  F_00ba6880((undefined *)(uVar2 + 0x82),param_1);
  if (*(int *)(uVar2 + 0x7c) != 1) {
    *(undefined4 *)(uVar2 + 0x7c) = 1;
  }
  uVar5 = F_00ba6930(param_1);
  pvVar1 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1f8);
  puVar4 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar4 = *(undefined4 *)((int)pvVar1 + 4);
  puVar4[1] = *(undefined4 *)((int)pvVar1 + 4);
  puVar4[2] = *(undefined4 *)((int)pvVar1 + 4);
  *(undefined2 *)(puVar4 + 8) = 0;
  if ((ulonglong *)(puVar4 + 4) != (ulonglong *)0x0) {
    *(ulonglong *)(puVar4 + 4) = uVar5;
    puVar4[6] = uVar2;
  }
  F_00c0e9c0(pvVar1,&(*(int *)(gen_frame + 0x14)),puVar4,0);
  return *(uint *)((*(int *)(gen_frame + 0x14)) + 0x18);
}

/* ref: FUN_00c09700 */
uint F_00c09700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc09700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(ulonglong *)(gen_frame + 0x0)) = F_00ba6930(param_1);
  uVar4 = (uint)((*(ulonglong *)(gen_frame + 0x0)) >> 0x20);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1f8);
  uVar1 = F_00c0d000(this_00,&(*(ulonglong *)(gen_frame + 0x0)));
  uVar3 = *(uint *)((int)this_00 + 4);
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 != uVar3) {
    if ((*(uint *)(uVar1 + 0x14) <= uVar4) &&
       ((uVar4 != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= (uint)(*(ulonglong *)(gen_frame + 0x0)))))) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
      goto LAB_00c09750;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = uVar3;
  puVar2 = (uint *)((int)&(*(ulonglong *)(gen_frame + 0x0)) + 4);
LAB_00c09750: ;
  if (*puVar2 != uVar3) {
    return *(uint *)(*puVar2 + 0x18);
  }
  uVar3 = F_00c085e0(param_2,param_3);
  if (uVar3 != 1) {
    return 0;
  }
  uVar3 = F_00c095e0(this,param_1);
  return uVar3;
}

/* ref: FUN_00c097a0 */
uint F_00c097a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc097a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_EAX = 0;
  int * piVar6;
  uint uVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  iVar1 = *(int *)((int)this + 0x1bc);
  while( true ) {
    if (((iVar1 == 0) ||
        (in_EAX = *(uint *)((int)this + 0x1b0), *(int *)((int)this + 0x1dc) <= (int)in_EAX)) ||
       (*((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0xc))) < *(int *)((int)this + 0xd8))) {
      return in_EAX;
    }
    piVar6 = *(int * PTR32 *)((int)this + 0x1b8);
    piVar2 = *(int * PTR32 *)(*piVar6 + 8);
    piVar3 = (int *)*piVar6;
    if (piVar3 != piVar6) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00429760(piVar3,0xc,0x25c);
      *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) + -1;
    }
    *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
    iVar1 = *(int *)((int)this + 0x1ac);
    iVar4 = *(int *)(iVar1 + 4);
    piVar6 = (int *)F_004296a0(0xc,0,0x25c);
    piVar6[1] = iVar4;
    *piVar6 = iVar1;
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = (int)piVar2;
    }
    if (*(int *)((int)this + 0x1b0) == -2) break;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar6;
    *(int * PTR32 *)piVar6[1] = piVar6;
    uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*(int *)((int)this + 0x120) == 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x24)));
        *(undefined4 *)((int)this + 0x120) = 1;
        *(undefined4 *)((int)this + 0x124) = uVar5;
        *(undefined4 *)((int)this + 0x128) = uVar5;
        _Var8 = F_00c4b7c2((__time64_t *)0x0);
        *(int *)((int)this + 0x108) = (int)_Var8;
        uVar9 = F_00427d90();
        *(ulonglong *)((int)this + 0x110) = uVar9;
        uVar9 = F_00427e30();
        *(ulonglong *)((int)this + 0x118) = uVar9;
      }
    }
    in_EAX = F_00c08780(this,piVar2);
    iVar1 = *(int *)((int)this + 0x1bc);
  }
                    
  F_00c4579a("list<T> too long");
}

/* ref: FUN_00c09930 */
uint F_00c09930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar3 = param_1;
  if ((*(byte *)(param_1 + 4) & 0x40) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 7);
    *(undefined4 *)((int)this + 0xd8) = 0;
    if (*(int *)((int)this + 0x7c) == 2) {
      *(undefined4 *)((int)this + 0x7c) = 4;
      F_00c09410(this);
    }
    piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
    if (piVar4 != *(int * PTR32 *)((int)this + 0x1ac)) {
      do {
        puVar1 = (undefined4 *)piVar4[2];
        uVar2 = (uint)*(byte *)((int)puVar1 + 6);
        if ((uVar2 == uVar3) ||
           (((uVar3 <= uVar2 || ((int)(uVar3 - uVar2) < 0x80)) &&
            ((uVar2 <= uVar3 || (0x7e < (int)(uVar2 - uVar3))))))) {
          piVar5 = (int *)*piVar4;
          if (piVar4 != *(int * PTR32 *)((int)this + 0x1ac)) {
            *(int * PTR32 *)piVar4[1] = piVar5;
            *(int *)(*piVar4 + 4) = piVar4[1];
            F_00429760(piVar4,0xc,0x25c);
            *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
          }
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        else {
          piVar5 = (int *)*piVar4;
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int * PTR32 *)((int)this + 0x1ac));
    }
    uVar3 = F_00c097a0(this);
    if (*(int *)((int)this + 0x1b0) == 0) {
      *(undefined4 *)((int)this + 0x120) = 0;
      return uVar3;
    }
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x108) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)((int)this + 0x110) = uVar7;
    uVar7 = F_00427e30();
    uVar3 = (uint)uVar7;
    *(ulonglong *)((int)this + 0x118) = uVar7;
  }
  return uVar3;
}

/* ref: FUN_00c09a50 */
uint F_00c09a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc09a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c09a90 */
uint F_00c09a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09a90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c0ece0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)(gen_frame + 0x8)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    return 0xffffffff;
  }
  F_00c0d6f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  F_00c0eeb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_00c09af0 */
uint F_00c09af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc09af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    in_EAX = F_00c09570(*(undefined * PTR32 *)((int)this + 0x78),this);
  }
  if ((*(char *)((int)this + 0x80) == '\0') || (*(int *)((int)this + 0x70) == 0)) {
    if (*(int *)((int)this + 0x70) == 0) {
      in_EAX = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
    }
  }
  else {
    in_EAX = 0;
    if ((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0x70));
      if (((char)in_EAX != '\0') &&
         (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70), puVar1 != (undefined4 *)0x0)) {
        uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00c09b50 */
uint F_00c09b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c09930(this,param_1);
  return uVar1;
}

/* ref: FUN_00c09b60 */
uint F_00c09b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((0 < *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10)))) &&
     (param_1[2] = param_1[2] + 1, *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10))) < param_1[2])) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    uVar1 = F_00c09af0(this);
    return uVar1;
  }
  F_00c08780(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  return uVar1;
}

/* ref: FUN_00c09bf0 */
uint F_00c09bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x14,0,0x25c);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x11))) = 1;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf10 */
uint F_00c09c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc09c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  
  this_00 = this + 0x1e4;
  iVar4 = *(int *)this_00;
  local_c = 0;
  if (iVar4 != *(int *)(this + 0x1e8)) {
    local_c = *(int *)(this + 0x1e8) - iVar4;
    iVar3 = local_c - param_2;
    if (iVar3 < 1) {
      F_00c46aa0(param_1,iVar4,local_c);
      iVar4 = *(int *)this_00;
      if (iVar4 != *(int *)(this + 0x1e8)) {
        F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
        *(int *)(this + 0x1e8) = iVar4;
      }
    }
    else {
      F_00c46aa0(param_1,iVar4,param_2);
      F_00c46e20(*(int *)this_00,*(int *)this_00 + param_2,iVar3);
      F_00bb6510(this_00,iVar3);
      local_c = param_2;
    }
  }
  bVar1 = false;
  do {
    if ((int)param_2 <= (int)local_c) {
      return local_c;
    }
    uVar2 = F_00c08990(this);
    if ((int)uVar2 < 0) {
      if (bVar1) {
        return local_c;
      }
    }
    else {
      bVar1 = true;
      if (uVar2 == 0) {
        if (local_c == 0) {
          F_00c08e20(this,0,0);
        }
        return local_c;
      }
      F_00bb6510(this_00,uVar2);
      iVar3 = param_2 - local_c;
      uVar2 = F_00c08e20(this,*(int *)this_00,uVar2);
      iVar4 = uVar2 - iVar3;
      if (iVar4 < 1) {
        F_00c46aa0(local_c + param_1,*(int *)this_00,uVar2);
        iVar4 = *(int *)this_00;
        if (iVar4 != *(int *)(this + 0x1e8)) {
          F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
          *(int *)(this + 0x1e8) = iVar4;
        }
        local_c = local_c + uVar2;
      }
      else {
        F_00c46aa0(local_c + param_1,*(int *)this_00,iVar3);
        F_00c46e20(*(int *)this_00,*(int *)this_00 + iVar3,iVar4);
        F_00bb6510(this_00,iVar4);
        local_c = local_c + iVar3;
      }
    }
    F_00bada50();
  } while( true );
}

/* ref: FUN_00c09dd0 */
uint F_00c09dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  uint local_14;
  int local_c;
  
  piVar5 = *(int * PTR32 *)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
    local_18 = *(int *)(param_1 + 0xc);
    local_c = *(int *)(param_1 + 0x10);
  }
  else {
    local_18 = *piVar5;
    local_c = piVar5[1] - *piVar5;
  }
  if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)*(byte *)(param_1 + 7);
  }
  uVar4 = (uint)*(byte *)(local_c + -1 + local_18);
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar5[2];
      uVar3 = (uint)*(byte *)((int)puVar1 + 6);
      if ((uVar3 == local_14) ||
         ((((int)local_14 <= (int)uVar3 || ((int)(local_14 - uVar3) < 0x80)) &&
          (((int)uVar3 <= (int)local_14 || (0x7e < (int)(uVar3 - local_14))))))) {
        piVar2 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
          *(int * PTR32 *)piVar5[1] = piVar2;
          *(int *)(*piVar5 + 4) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
        }
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        piVar5 = piVar2;
      }
      else {
        iVar6 = 0;
        bVar7 = local_c == 0;
        if (0 < local_c) {
          do {
            if (uVar3 == *(byte *)(iVar6 + local_18)) {
              piVar2 = (int *)*piVar5;
              if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
                *(int * PTR32 *)piVar5[1] = piVar2;
                *(int *)(*piVar5 + 4) = piVar5[1];
                F_00429760(piVar5,0xc,0x25c);
                *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
              }
              ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
              piVar5 = piVar2;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_c);
          bVar7 = iVar6 == local_c;
        }
        if (bVar7) {
          piVar5 = (int *)*piVar5;
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x1ac));
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      uVar3 = (uint)*(byte *)(piVar5[2] + 6);
      if ((((local_14 != uVar3) &&
           (((int)uVar3 <= (int)local_14 || ((int)(uVar3 - local_14) < 0x80)))) &&
          ((((int)local_14 <= (int)uVar3 || (0x7e < (int)(local_14 - uVar3))) && (uVar4 != uVar3))))
         && (((uVar4 < uVar3 && (0x7f < (int)(uVar3 - uVar4))) ||
             ((uVar3 < uVar4 && ((int)(uVar4 - uVar3) < 0x7f)))))) {
        F_00c09b60(this,piVar5[2]);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)((int)this + 0x1ac));
  }
  F_00c097a0(this);
  uVar4 = F_00c09930(this,param_1);
  return uVar4;
}

/* ref: FUN_00c09fb0 */
uint F_00c09fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc09fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * this_00;
  
  this_00 = (int *)0x0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x640;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[4]);
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00,(*(uint *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c0a050 */
uint F_00c0a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc0a050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  int * this_00;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 5))) = (byte)(*(undefined4 *)&gen_args[4]) + 6;
  this_00 = (int *)0x0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x20;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  if ((char)(*(undefined4 *)&gen_args[5]) == '\0') {
    uVar1 = (uint)(byte)(*(undefined4 *)&gen_args[4]);
  }
  else {
    uVar1 = 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar1;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00,(uint)(byte)(*(undefined4 *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf9 */
uint F_00c0a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0a100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((this[0xc2] == (undefined1)0x0) && (this[0xc3] != (undefined1)0x0)) {
    uVar4 = 0;
    (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 8))) + -6;
    if (0 < param_2) {
      do {
        iVar5 = param_2 - uVar4;
        if ((*(int *)(gen_frame + 0x28)) < iVar5) {
          iVar5 = (*(int *)(gen_frame + 0x28));
        }
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0xcc);
        uVar2 = (*(undefined4 *)(gen_frame + 0x24));
        iVar3 = (*(int *)(this + 200) + 1) % 0xff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = (undefined1)*(undefined4 *)(this + 0xcc);
        (*(undefined1 *)(gen_frame + 0x13)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        (*(int *)(gen_frame + 0x18)) = param_1 + uVar4;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        (*(undefined2 *)(gen_frame + 0x10)) = 0x640;
        *(int *)(this + 200) = iVar3;
        (*(undefined1 *)(gen_frame + 0x12)) = (char)iVar3;
        (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
        F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x20));
        uVar4 = uVar4 + iVar5;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        if ((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) {
          iVar5 = *(*(int * PTR32 *)(gen_frame + 0x20));
          if (iVar5 != 0) {
            F_00429760(iVar5,(*(int * PTR32 *)(gen_frame + 0x20))[2] - iVar5,0x25c);
          }
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[2] = 0;
          F_00406ad0(piVar1);
        }
      } while ((int)uVar4 < param_2);
    }
    return uVar4;
  }
  return 0xffffffff;
}

/* ref: FUN_00c0a200 */
uint F_00c0a200(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)0x0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    F_00bb6510(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),*(undefined4 *)((int)this + 0x1c8));
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
    puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    if (piVar3 != *(int * PTR32 *)((int)this + 0x1c4)) {
      do {
        *puVar4 = *(undefined1 *)(piVar3[2] + 6);
        piVar3 = (int *)*piVar3;
        puVar4 = puVar4 + 1;
      } while (piVar3 != (int *)*(int *)((int)this + 0x1c4));
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    (*(undefined1 *)(gen_frame + 0x8)) = 0x60;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)*(int *)((int)this + 0xcc);
    (*(char *)(gen_frame + 0x9)) = ((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c))) + 6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)(byte)((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
    (*(undefined1 *)(gen_frame + 0xa)) = (char)((*(int *)((int)this + 0xcc) + 1) % 0xff);
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x18));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int * PTR32 *)(gen_frame + 0x18))[2] - iVar1,0x25c);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      F_00406ad0(piVar3);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
    uVar2 = 0;
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x1c)) != (undefined1 *)0x0) {
      uVar5 = F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x24)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),0x25c);
      uVar2 = (uint)uVar5;
    }
  }
  return uVar2;
}

/* ref: FUN_00c0a320 */
uint F_00c0a320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar6 == uVar5) ||
     ((((int)uVar5 <= (int)uVar6 || ((int)(uVar5 - uVar6) < 0x80)) &&
      (((int)uVar6 <= (int)uVar5 || (0x7e < (int)(uVar6 - uVar5))))))) goto LAB_00c0a4bd;
  if (uVar6 == (int)(uVar5 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar6;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]),1);
    }
    goto LAB_00c0a4bd;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0a4bd;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0a44b: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    (*(uint *)(gen_frame + 0x10)) = uVar5;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(iVar1 + 4);
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x14));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x10));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_00c0a4b4;
      uVar6 = (uint)*(byte *)(piVar4[2] + 6);
      uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar5 == uVar6) {
LAB_00c0a437: ;
        (*(char *)(gen_frame + 0x1b)) = '\x01';
      }
      else if (((uVar6 <= uVar5) || ((int)(uVar6 - uVar5) < 0x80)) &&
              ((uVar5 <= uVar6 || (0x7e < (int)(uVar5 - uVar6))))) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        (*(uint *)(gen_frame + 0x14)) = uVar5;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)(gen_frame + 0x10)),piVar4,&(*(uint *)(gen_frame + 0x14)));
        goto LAB_00c0a437;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0x1b)) == '\0') goto LAB_00c0a44b;
  }
LAB_00c0a4b4: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
LAB_00c0a4bd: ;
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]));
    uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar5;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
  if ((iVar1 < 1) ||
     ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar2 != 0 && (iVar1 <= iVar2)))) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
      _Var7 = F_00c4b7c2((__time64_t *)0x0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var7;
      uVar8 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar8;
      uVar8 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar8;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
    if (iVar1 != 0) {
      (*(undefined1 *)(gen_frame + 0xb)) = (char)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
      (*(undefined2 *)(gen_frame + 0x8)) = 0x640;
      (*(undefined1 *)(gen_frame + 0xa)) = (char)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) + 1) % 0xff);
      F_00c08780((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
      return uVar5;
    }
  }
  uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
  return uVar5;
}

/* ref: FUN_00c0a5d0 */
uint F_00c0a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1c8) != 0) {
    uVar2 = F_00c0a200(this);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)*(int *)((int)this + 0xcc);
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((*(int *)((int)this + 0xcc) + 1) % 0xff);
    uVar2 = F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00c0a640 */
uint F_00c0a640(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int * piVar8;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x7c))) {
  case 0: ;
  case 1: ;
  case 6: ;
    goto switchD_00c0a65d_caseD_0;
  case 3: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180)), bVar3 != 0)) {
      *(undefined4 *)((int)this + 0x198) = 0;
      F_00c08500(this);
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
    }
    break;
  case 5: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       ((*(int *)((int)this + 0x1b0) == 0 ||
        (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180)), bVar3 != 0)))) {
      F_00c08560(this);
      if (*(int *)((int)this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
      }
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
      F_00c09af0(this);
      return 0;
    }
  case 4: ;
    if ((*(char *)((int)this + 0x80) != '\0') && (uVar5 = F_00c08990(this), -1 < (int)uVar5)) {
      uVar4 = uVar5;
      if ((int)uVar5 < 1) {
        uVar4 = 1;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (undefined * PTR32 *)0x0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      F_00bb6510(&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
      uVar2 = (*(undefined4 *)(gen_frame + 0xc));
      uVar5 = F_00c08e20(this,(*(undefined4 *)(gen_frame + 0xc)),uVar5);
      if (*(int *)((int)this + 0x70) != 0) {
        F_00badf20((undefined *)((int)this + 8),*(int *)((int)this + 0x70),uVar2,uVar5);
      }
      F_00bb4550(&(*(undefined4 *)(gen_frame + 0xc)));
    }
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0xe0));
  if ((bVar3 != 0) && (*(int *)((int)this + 0x1b0) == 0)) {
    iVar7 = (*(int *)((int)this + 200) + 1) % 0xff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x608;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    *(int *)((int)this + 200) = iVar7;
    uVar6 = (undefined1)iVar7;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = (uint)CONCAT12(uVar6,0x608);
    F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x108));
  if ((bVar3 != 0) &&
     (piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac))), piVar8 != *(int * PTR32 *)((int)this + 0x1ac))) {
    do {
      F_00c09b60(this,piVar8[2]);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)((int)this + 0x1ac));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x130));
  if (bVar3 != 0) {
    F_00c0a5d0(this);
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x158));
  if (bVar3 != 0) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_00c09570(*(undefined * PTR32 *)((int)this + 0x78),this);
    }
    if ((*(char *)((int)this + 0x80) == '\0') || (*(int *)((int)this + 0x70) == 0)) {
      if (*(int *)((int)this + 0x70) == 0) {
        (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
      }
    }
    else if ((((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) &&
             (uVar5 = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0x70)),
             (char)uVar5 != '\0')) &&
            (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70), puVar1 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      return 0;
    }
  }
switchD_00c0a65d_caseD_0: ;
  return 0;
}

/* ref: FUN_00c0a8a0 */
uint F_00c0a8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a8a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  iVar14 = (*(int *)&gen_args[1]);
  iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (iVar11 != 1) {
    if (iVar11 == 3) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 4) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 4;
      }
      F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]));
      F_00c09410((*(undefined * PTR32 *)&gen_args[0]));
      uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
      return uVar16;
    }
    if (iVar11 != 6) goto LAB_00c0aa81;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  puVar15 = (undefined4 *)F_00406b90(0x2c,0,0);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    uVar7 = *(ushort *)((*(int *)&gen_args[1]) + 0x16);
    (*(uint *)(gen_frame + 0x2c)) = (uint)uVar7;
    bVar2 = *(byte *)((*(int *)&gen_args[1]) + 0x1b);
    (*(byte *)(gen_frame + 0x38)) = bVar2;
    bVar3 = *(byte *)((*(int *)&gen_args[1]) + 0x1a);
    uVar8 = *(ushort *)((*(int *)&gen_args[1]) + 0x14);
    uVar9 = *(ushort *)((*(int *)&gen_args[1]) + 0x12);
    (*(byte *)(gen_frame + 0x39)) = bVar3;
    bVar4 = *(byte *)((*(int *)&gen_args[1]) + 0x19);
    (*(byte *)(gen_frame + 0x3a)) = bVar4;
    bVar5 = *(byte *)((*(int *)&gen_args[1]) + 0x18);
    (*(byte *)(gen_frame + 0x3b)) = bVar5;
    bVar6 = *(byte *)((*(int *)&gen_args[1]) + 0xd);
    uVar10 = *(ushort *)((*(int *)&gen_args[1]) + 0x10);
    (*(uint *)(gen_frame + 0x30)) = (uint)uVar10;
    uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0)));
    (*(undefined4 *)(gen_frame + 0x34)) = uVar12;
    *puVar15 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc)));
    puVar15[1] = uVar12;
    puVar15[2] = (uint)uVar10;
    puVar15[3] = (uint)bVar6;
    puVar15[4] = (uint)bVar5;
    puVar15[5] = (uint)bVar4;
    puVar15[6] = (uint)bVar3;
    puVar15[7] = (uint)bVar2;
    puVar15[8] = (uint)uVar7;
    puVar15[9] = (uint)uVar9;
    puVar15[10] = (uint)uVar8;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = puVar15;
  uVar12 = puVar15[7];
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar15[6];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar15[5];
  (*(undefined4 *)(gen_frame + 0x24)) = puVar15[4];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar15[8];
  (*(undefined4 *)(gen_frame + 0x34)) = puVar15[10];
  uVar13 = puVar15[3];
  (*(uint *)(gen_frame + 0x30)) = puVar15[9];
  (*(uint *)(gen_frame + 0x2c)) = puVar15[2];
  uVar16 = F_00c4f2dd();
  (*(undefined2 *)(gen_frame + 0x12)) = (undefined2)(*(uint *)(gen_frame + 0x30));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)(gen_frame + 0x18)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
  (*(undefined2 *)(gen_frame + 0x16)) = (undefined2)(*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  (*(undefined1 *)(gen_frame + 0xc)) = 1;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0x1a)) = (undefined1)(*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined1 *)(gen_frame + 0x1b)) = (char)uVar12;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x16c0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = (int)uVar16 % 0xff;
  puVar1 = (undefined1 *)((*(int *)&gen_args[1]) + 6);
  (*(undefined1 *)(gen_frame + 0x6)) = (char)((int)uVar16 % 0xff);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) = (undefined1)uVar13;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(*(int *)&gen_args[1]);
  (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(undefined4 *)(gen_frame + 0x34));
  (*(undefined1 *)(gen_frame + 0x19)) = (undefined1)(*(undefined4 *)(gen_frame + 0x20));
  (*(undefined1 *)(gen_frame + 0x7)) = *puVar1;
  F_00c08fb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
LAB_00c0aa81: ;
  uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),iVar14);
  return uVar16;
}

/* ref: FUN_00c0aaa0 */
uint F_00c0aaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0aaa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (((iVar1 != 3) && (iVar1 != 6)) && (iVar1 != 5)) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 5;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0ac6b;
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar5;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]),1);
    }
    F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0ac6b;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0abf9: ;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    (*(uint *)(gen_frame + 0x4)) = *(uint *)(iVar1 + 4);
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0ac62;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar3 == uVar5) {
LAB_00c0abe5: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0abe5;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0abf9;
  }
LAB_00c0ac62: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
LAB_00c0ac6b: ;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))))))) {
    F_00c08860((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var6;
    uVar7 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar7;
    uVar7 = F_00427e30();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar7;
  }
  uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
  return uVar3;
}

/* ref: FUN_00c0ad40 */
uint F_00c0ad40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ad40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar5 = (uint)*(byte *)((int)param_1 + 6);
  uVar3 = *(uint *)((int)this + 0xcc);
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0aecb;
  iVar1 = *(int *)((int)this + 0x1d4);
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((iVar1 == 0) || (*(int *)((int)this + 0x1c8) + iVar1 < *(int *)((int)this + 0x1e0))) {
      *(uint *)((int)this + 0xcc) = uVar5;
      F_00c090e0(this,0);
    }
    F_00c0a5d0(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x1e0) <= iVar1 + *(int *)((int)this + 0x1c8)) goto LAB_00c0aecb;
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *(int * PTR32 *)((int)this + 0x1c4)) {
LAB_00c0ae5b: ;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = *(int *)((int)this + 0x1c4);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    (*(uint *)(gen_frame + 0x4)) = *(uint *)(iVar1 + 4);
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*(int *)((int)this + 0x1c8) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0aec4;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*(byte *)((int)param_1 + 6);
      if (uVar3 == uVar5) {
LAB_00c0ae47: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010((undefined *)((int)this + 0x1c4),&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0ae47;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x1c4));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0ae5b;
  }
LAB_00c0aec4: ;
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
LAB_00c0aecb: ;
  if ((0 < *(int *)((int)this + 0xd4)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x18))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd4))))) {
    F_00c0a200(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if ((0 < *(int *)((int)this + 0xd0)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x14))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd0))))) {
    F_00c08860(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x148) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x28)));
    *(undefined4 *)((int)this + 0x148) = 1;
    *(undefined4 *)((int)this + 0x14c) = uVar2;
    *(undefined4 *)((int)this + 0x150) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x130) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)((int)this + 0x138) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)((int)this + 0x140) = uVar7;
  }
  uVar3 = F_00c09930(this,param_1);
  return uVar3;
}

/* ref: FUN_00c0b1d0 */
unsigned int F_00c0b1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined * this;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((byte *)(gen_frame + 0x4))[0x44] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0x45] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0x46] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x47] = (char)(uVar1 >> 0x18);
  this = *(undefined * PTR32 *)(param_1 + 0x24);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  if (*(int *)((int)this + 0x1f8) != 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    uVar1 = F_00ba7220(((byte *)(gen_frame + 0x4)) + 4,param_4,0);
    this = (undefined *)F_00c09700(this,uVar1,uVar2,uVar3);
    F_00ba6730();
  }
  if (this != (undefined *)0x0) {
    F_00c0afb0(this,param_2,param_3);
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00c0b250 */
uint F_00c0b250(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *(int * PTR32 *)((int)this + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      piVar5 = piVar4;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar5 = (int *)piVar4[2];
        if (*(char *)((int)piVar5 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x11);
          piVar3 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
      piVar3 = (int *)F_00c0a640((undefined *)piVar4[3]);
      piVar4 = piVar5;
    } while (piVar5 != *(int * PTR32 *)((int)this + 8));
  }
  return (uint)piVar3;
}

/* ref: FUN_00c0b2c0 */
uint F_00c0b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined4 in_ecx;
  int * piVar7;
  ulonglong uVar8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  F_00c0a640(this);
  if (*(int *)((int)this + 0x78) == 0) {
    in_ecx = *(undefined4 *)((int)this + 0x70);
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x70)));
  }
  pvVar3 = (undefined *)F_00ba6e30(in_ecx);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = REFG(undefined4, 0x14c5958);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = F_00ba7110(pvVar3);
  F_00c0ece0((undefined *)(uVar4 + 4),&(*(int *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)(uVar4 + 8)) {
    F_00c0d6f0((undefined *)(uVar4 + 4),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00c0eeb0((undefined *)(uVar4 + 4),&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  }
  if (*(int *)((int)this + 0xc4) != 0) {
    F_00406ad0(*(int *)((int)this + 0xc4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1b8)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  piVar7 = *(int * PTR32 *)((int)this + 500);
  if (piVar7 != (int *)0x0) {
    piVar6 = (int *)*piVar7;
    piVar5 = (int *)*piVar6;
    *piVar6 = (int)piVar6;
    *(int *)(*piVar7 + 4) = *piVar7;
    piVar7[1] = 0;
    if (piVar5 != (int *)*piVar7) {
      do {
        piVar6 = (int *)*piVar5;
        F_00429760(piVar5,0xc,0x25c);
        piVar5 = piVar6;
      } while (piVar6 != (int *)*piVar7);
    }
    F_00429760(*piVar7,0xc,0x25c);
    F_00406ad0(piVar7);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x1f8);
  if (pvVar3 != (undefined *)0x0) {
    F_00c0ef70(pvVar3,&(*(int *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)pvVar3 + 4),
                 *(undefined4 * PTR32 *)((int)pvVar3 + 4));
    F_00429760(*(undefined4 *)((int)pvVar3 + 4),0x28,0x25c);
    F_00406ad0(pvVar3);
  }
  if ((*(int *)((int)this + 0x78) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x74), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  iVar2 = *(int *)((int)this + 0x1e4);
  if (iVar2 != 0) {
    F_00429760(iVar2,*(int *)((int)this + 0x1ec) - iVar2,0x25c);
  }
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  piVar7 = *(int * PTR32 *)((int)this + 0x1d0);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) = *(int *)((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1d0),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1c4);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1c4),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1b8);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1b8) + 4))) = *(int *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1b8),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1ac);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  uVar8 = F_00429760(*(undefined4 *)((int)this + 0x1ac),0xc,0x25c);
  F_00ba6730();
  return (uint)uVar8;
}

/* ref: FUN_00c0b630 */
uint F_00c0b630(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = *(uint *)((int)this + 0x74);
  if (*(int *)(uVar1 + 0x24) == 0) {
    this_00 = (undefined *)F_00ba6e30(*(undefined4 *)((int)this + 0x70));
    if (this_00 == (undefined *)0x0) {
      this_00 = REFG(undefined4, 0x14c5958);
    }
    pvVar2 = this;
    this_01 = (undefined *)F_00ba7110(this_00);
    F_00c091e0(this_01,pvVar2);
    gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)((int)this + 0x74) + 0x24))),(LONG)this);
    F_00ba79d0(*(undefined4 *)((int)this + 0x74),((code *)REFP(0xc0b1d0)));
    F_00ba7aa0(*(undefined * PTR32 *)((int)this + 0x74),0,0xffffffff);
    uVar1 = F_00ba9ae0(*(undefined * PTR32 *)((int)this + 0x74),this_00);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf5 */
uint F_00c0b6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0b630(this);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf6 */
uint F_00c0b6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c0b630(this);
  if (this[0x80] == (undefined1)0x0) {
    puVar1 = (uint *)F_00406b90(0xc,0,0);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1[1] = 0;
      uVar2 = F_004296a0(0xc,0,0x25c);
      *puVar1 = uVar2;
      *(uint *)uVar2 = uVar2;
      *(uint *)(*puVar1 + 4) = *puVar1;
    }
    *(uint * PTR32 *)(this + 500) = puVar1;
  }
  uVar2 = F_00406b90(0x10,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(uVar2 + 8) = 0;
    uVar3 = F_004296a0(0x28,0,0x25c);
    *(uint *)(uVar2 + 4) = uVar3;
    *(uint *)uVar3 = uVar3;
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 4))) = *(int *)(uVar2 + 4);
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 8))) = *(int *)(uVar2 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x21))) = 1;
  }
  *(uint *)(this + 0x1f8) = uVar2;
  uVar2 = F_00ba7510(*(undefined * PTR32 *)(this + 0x74),param_1,param_2);
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf7 */
uint F_00c0b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0b770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  F_00c0b630(this);
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  while (iVar1 == 0) {
    F_00bada50();
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  }
  piVar2 = *(int * PTR32 *)(this + 500);
  piVar3 = (int *)*piVar2;
  iVar1 = *(int *)(*piVar3 + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    F_00429760(piVar4,0xc,0x25c);
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar2 + -1;
  }
  *(undefined4 *)(iVar1 + 0x70) = param_2;
  F_00bb1770(param_1,iVar1);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf8 */
uint F_00c0b7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  F_00c0b630(this);
  if ((this[0xc2] != (undefined1)0x0) || (this[0xc3] != (undefined1)0x0)) {
    return 0xffffffff;
  }
  F_00ba6880(this + 0x82,param_1);
  if (*(int *)(this + 0x7c) != 3) {
    *(undefined4 *)(this + 0x7c) = 3;
  }
  iVar1 = *(int *)(this + 0xc4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0x20);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar1 + 0x28);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar1 + 0x24);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar1 + 8);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = F_00c4f2dd();
  *(int *)(this + 200) = (int)uVar6 % 0xff;
  F_00c08640(((undefined1 *)(gen_frame + 0x8)),(int)uVar6 % 0xff,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),uVar2,
               uVar3,uVar4);
  F_00c08fb0(this,((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)(this + 0x198) = 1;
  *(int *)(this + 0x19c) = *(int *)(this + 0x2c) * 1000;
  *(undefined4 *)(this + 0x1a0) = 0;
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(this + 0x180) = (int)_Var7;
  uVar8 = F_00427d90();
  *(ulonglong *)(this + 0x188) = uVar8;
  uVar8 = F_00427e30();
  *(ulonglong *)(this + 400) = uVar8;
  if (this[0x80] == (undefined1)0x0) {
    bVar5 = F_00c0cc30(this + 0x180);
    while ((bVar5 != 0 && (F_00bada50(), *(int *)(this + 0x7c) != 4))) {
      bVar5 = F_00c0cc30(this + 0x180);
    }
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x7c) != 4) {
      F_00c08a10(this);
      *(undefined4 *)(this + 0xd4) = 0;
      *(undefined4 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      *(undefined4 *)(this + 0x120) = 0;
      if (*(int *)(this + 0x7c) == 3) {
        F_00c08500(this);
      }
      else if (*(int *)(this + 0x7c) != 5) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf2 */
uint F_00c0b9b0(void)
{
  GEN_ENTER(0xc0b9b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf2 */
uint F_00c0b9c0(void)
{
  GEN_ENTER(0xc0b9c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf2 */
uint F_00c0b9d0(void)
{
  GEN_ENTER(0xc0b9d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf2 */
uint F_00c0b9e0(void)
{
  GEN_ENTER(0xc0b9e0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf2 */
uint F_00c0b9f0(void)
{
  GEN_ENTER(0xc0b9f0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00c0ba30 */
uint F_00c0ba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ba30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c0ba60 */
uint F_00c0ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ba60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c0bb20 */
uint F_00c0bb20(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1af40(this);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return (uint)this;
}

/* ref: FUN_00c0bc00 */
unsigned int F_00c0bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xc0bc00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  *(undefined4 *)((int)this + 0x28) = param_11;
  return 0;
}

/* ref: FUN_00c0bda0 */
uint F_00c0bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf2 */
uint F_00c0bdc0(void)
{
  GEN_ENTER(0xc0bdc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf4 */
byte F_00c0bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if ((int)uVar1 <= param_2) {
    *param_1 = this[4];
    param_1[1] = this[5];
    param_1[2] = this[6];
    param_1[3] = this[7];
    param_1[4] = (undefined1)((char)this[0xc] << 4);
    param_1[5] = this[0xd];
    param_1[6] = this[0xe];
    param_1[7] = (undefined1)0x0;
    param_1[8] = this[0x11];
    param_1[9] = this[0x10];
    param_1[10] = this[0x13];
    param_1[0xb] = this[0x12];
    param_1[0xc] = this[0x15];
    param_1[0xd] = this[0x14];
    param_1[0xe] = this[0x17];
    param_1[0xf] = this[0x16];
    param_1[0x10] = this[0x18];
    param_1[0x11] = this[0x19];
    param_1[0x12] = this[0x1a];
    param_1[0x13] = this[0x1b];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c0bed0 */
byte F_00c0bed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0bef0 */
byte F_00c0bef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0bf10 */
uint F_00c0bf10(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0bf20 */
uint F_00c0bf20(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0bf30 */
uint F_00c0bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0bf60 */
uint F_00c0bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0bf90 */
uint F_00c0bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c0bfc0 */
uint F_00c0bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bfc0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00c0bfe0 */
byte F_00c0bfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c010 */
uint F_00c0c010(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c020 */
uint F_00c0c020(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c030 */
uint F_00c0c030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c060 */
uint F_00c0c060(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00c0c070 */
uint F_00c0c070(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00c0c080 */
uint F_00c0c080(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c090 */
uint F_00c0c090(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c0a0 */
uint F_00c0c0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c0b0 */
uint F_00c0c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0c0c0 */
uint F_00c0c0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0c0e0 */
uint F_00c0c0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00c0c120 */
uint F_00c0c120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c150 */
byte F_00c0c150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c190 */
uint F_00c0c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0c1b0 */
byte F_00c0c1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c210 */
uint F_00c0c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c240 */
uint F_00c0c240(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c250 */
uint F_00c0c250(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c280 */
uint F_00c0c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c2b0 */
uint F_00c0c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c2c0 */
uint F_00c0c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c2c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c2e0 */
uint F_00c0c2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c2e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c340 */
unsigned int F_00c0c340(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00c0c390 */
uint F_00c0c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c3a0 */
uint F_00c0c3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0c3b0 */
uint F_00c0c3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00c0c3c0 */
uint F_00c0c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c3d0 */
uint F_00c0c3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c3e0 */
uint F_00c0c3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0c400 */
uint F_00c0c400(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c400u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00c0c420 */
uint F_00c0c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c450 */
uint F_00c0c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c480 */
uint F_00c0c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c490 */
uint F_00c0c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c4e0 */
uint F_00c0c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c4f0 */
uint F_00c0c4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c500 */
uint F_00c0c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c510 */
uint F_00c0c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c530 */
uint F_00c0c530(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c570 */
unsigned int F_00c0c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c0c5a0 */
unsigned int F_00c0c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c0c600 */
unsigned int F_00c0c600(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00c0c670 */
unsigned int F_00c0c670(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00c0c6d0 */
uint F_00c0c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6e0 */
uint F_00c0c6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6f0 */
uint F_00c0c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c700 */
uint F_00c0c700(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c710 */
uint F_00c0c710(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c720 */
uint F_00c0c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c740 */
uint F_00c0c740(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c750 */
uint F_00c0c750(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c760 */
uint F_00c0c760(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c7e0 */
unsigned int F_00c0c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: FUN_00c0c800 */
unsigned int F_00c0c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c0c820 */
unsigned int F_00c0c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c0c840 */
uint F_00c0c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c860 */
uint F_00c0c860(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c870 */
uint F_00c0c870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c890 */
unsigned int F_00c0c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00c0c8b0 */
uint F_00c0c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c8c0 */
unsigned int F_00c0c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf1 */
uint F_00c0c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined1 AVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (((byte)this[4] & 0x40) == 0) {
      AVar2 = (undefined1)0xff;
    }
    else {
      AVar2 = this[7];
    }
    *(undefined *)((int)puVar1 + 6) = this[6];
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    *(undefined2 *)(puVar1 + 1) = 0x640;
    *(undefined *)((int)puVar1 + 7) = AVar2;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf0 */
uint F_00c0c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf3 */
uint F_00c0c960(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    return ((uint)(byte)this[5] + piVar1[1]) - *piVar1;
  }
  return (uint)(byte)this[5] + *(int *)(this + 0x10);
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf4 */
byte F_00c0c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 6,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 6,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf4 */
byte F_00c0ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 4,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 4,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf1 */
uint F_00c0cae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 NVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    NVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x608;
    *(undefined *)((int)puVar2 + 6) = NVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf0 */
uint F_00c0cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf1 */
uint F_00c0cb50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 RVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    RVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x610;
    *(undefined *)((int)puVar2 + 6) = RVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf0 */
uint F_00c0cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cbc0 */
uint F_00c0cbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c0cc30 */
byte F_00c0cc30(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  __time64_t _Var2;
  
  if (*(int *)((int)this + 0x18) == 1) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x1c) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      if (*(int *)((int)this + 0x20) == 0) {
        *(undefined4 *)((int)this + 0x18) = 0;
        return 1;
      }
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      *(undefined4 *)((int)this + 0x18) = 2;
      return 1;
    }
  }
  else if (*(int *)((int)this + 0x18) == 2) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x20) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf1 */
uint F_00c0cce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 SVar1;
  undefined1 SVar2;
  undefined1 SVar3;
  undefined1 SVar4;
  undefined1 SVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 * puVar10;
  
  puVar10 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar10 != (undefined4 *)0x0) {
    SVar1 = this[0x1b];
    SVar2 = this[0x1a];
    SVar3 = this[0x19];
    SVar4 = this[0x18];
    uVar6 = *(undefined2 *)(this + 0x14);
    uVar7 = *(undefined2 *)(this + 0x12);
    uVar8 = *(undefined2 *)(this + 0x10);
    uVar9 = *(undefined2 *)(this + 0x16);
    SVar5 = this[0xd];
    *(undefined *)((int)puVar10 + 6) = this[6];
    *(undefined1 *)((int)puVar10 + 7) = 0;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 1;
    *(undefined1 *)((int)puVar10 + 0xe) = 1;
    *(undefined2 *)(puVar10 + 4) = uVar8;
    *(undefined2 *)((int)puVar10 + 0x12) = uVar7;
    *(undefined2 *)(puVar10 + 5) = uVar6;
    *(undefined *)(puVar10 + 6) = SVar4;
    *(undefined2 *)((int)puVar10 + 0x16) = uVar9;
    *(undefined *)((int)puVar10 + 0x19) = SVar3;
    *(undefined *)((int)puVar10 + 0xd) = SVar5;
    *(undefined2 *)(puVar10 + 1) = 0x1680;
    *puVar10 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
    *(undefined *)((int)puVar10 + 0x1a) = SVar2;
    *(undefined *)((int)puVar10 + 0x1b) = SVar1;
    return (uint)puVar10;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf0 */
uint F_00c0cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cdf0 */
byte F_00c0cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce10 */
byte F_00c0ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce40 */
byte F_00c0ce40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce80 */
uint F_00c0ce80(unsigned int gen_a0)
{
  GEN_ENTER(0xc0ce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c0ce90 */
uint F_00c0ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ce90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0cea0 */
uint F_00c0cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0cef0 */
unsigned int F_00c0cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x21))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00c0cf50 */
uint F_00c0cf50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cf50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0cf70 */
uint F_00c0cf70(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c340(this);
  return (uint)this;
}

/* ref: FUN_00c0cf90 */
uint F_00c0cf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d000 */
uint F_00c0d000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00c0d050 */
uint F_00c0d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d060 */
uint F_00c0d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d070 */
unsigned int F_00c0d070(unsigned int gen_a0)
{
  GEN_ENTER(0xc0d070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00c0d0f0 */
unsigned int F_00c0d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x11))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00c0d180 */
uint F_00c0d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00c0c340(this);
  return (uint)param_1;
}

/* ref: FUN_00c0d1d0 */
unsigned int F_00c0d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c0d200 */
uint F_00c0d200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d220 */
unsigned int F_00c0d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c0d240 */
uint F_00c0d240(unsigned int gen_a0)
{
  GEN_ENTER(0xc0d240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c600(this);
  return (uint)this;
}

/* ref: FUN_00c0d260 */
uint F_00c0d260(unsigned int gen_a0)
{
  GEN_ENTER(0xc0d260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c670(this);
  return (uint)this;
}

/* ref: FUN_00c0d270 */
uint F_00c0d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d290 */
uint F_00c0d290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d2b0 */
unsigned int F_00c0d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: FUN_00c0d2d0 */
uint F_00c0d2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d320 */
uint F_00c0d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d360 */
uint F_00c0d360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d380 */
uint F_00c0d380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d3a0 */
unsigned int F_00c0d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00c0d3c0 */
unsigned int F_00c0d3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00c0d3e0 */
uint F_00c0d3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d3f0 */
uint F_00c0d3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d440 */
uint F_00c0d440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d460 */
uint F_00c0d460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d4a0 */
uint F_00c0d4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0d4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c340(this);
  return (uint)this;
}

/* ref: FUN_00c0d570 */
uint F_00c0d570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d5d0 */
unsigned int F_00c0d5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x21) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_00c0d650 */
uint F_00c0d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d660 */
uint F_00c0d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d670 */
uint F_00c0d670(unsigned int gen_a0)
{
  GEN_ENTER(0xc0d670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0d070(this);
  return (uint)this;
}

/* ref: FUN_00c0d680 */
uint F_00c0d680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d6b0 */
uint F_00c0d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d6f0 */
uint F_00c0d6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0d780 */
undefined4 * F_00c0d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c0d830 */
uint F_00c0d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d860 */
uint F_00c0d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d8e0 */
unsigned int F_00c0d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d8e0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return 0;
}

/* ref: FUN_00c0d920 */
unsigned int F_00c0d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_00c0d980 */
unsigned int F_00c0d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d980(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00c0d9c0 */
uint F_00c0d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c0d9e0 */
uint F_00c0d9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0da50 */
uint F_00c0da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc0da50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_4,0x14,0x25c);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
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
LAB_00c0dc4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
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
        goto LAB_00c0dc4d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_00c0dc80 */
uint F_00c0dc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc0dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_4,0x28,0x25c);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)param_1;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
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
LAB_00c0de7d: ;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
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
        goto LAB_00c0de7d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00c0deb0 */
uint F_00c0deb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0deb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c670(this);
  return (uint)this;
}

/* ref: FUN_00c0dec0 */
uint F_00c0dec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0dec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0dee0 */
uint F_00c0dee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0dee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0df00 */
unsigned int F_00c0df00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0df00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_00c0df70 */
unsigned int F_00c0df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0df70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00c0dfd0 */
uint F_00c0dfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0dfd0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0e020 */
uint F_00c0e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e030 */
uint F_00c0e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e080 */
uint F_00c0e080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e090 */
uint F_00c0e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e0b0 */
uint F_00c0e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0d0 */
uint F_00c0e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0e0 */
uint F_00c0e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00c0c340(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00c0e1fa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00c0c0e0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00c0c0c0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e1fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00c0e2b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00c0e2b8;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e340 */
uint F_00c0e340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00c0d070(this);
  return (uint)param_1;
}

/* ref: FUN_00c0e360 */
uint F_00c0e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e370 */
uint F_00c0e370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0e420 */
uint F_00c0e420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0e460 */
uint F_00c0e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c0d6f0(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00c0e480 */
uint F_00c0e480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e490 */
uint F_00c0e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0e580 */
uint F_00c0e580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c0d000(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0e5a0 */
uint F_00c0e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e5a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00c0d070(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00c0e6ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_00c0c400(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00c0c3e0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e6ba: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d920((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00c0e778: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_00c0e778;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e800 */
uint F_00c0e800(unsigned int gen_a0)
{
  GEN_ENTER(0xc0e800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_00c0d8e0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c0e860 */
uint F_00c0e860(unsigned int gen_a0)
{
  GEN_ENTER(0xc0e860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    F_00c0d980(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x28,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c0e8c0 */
unsigned int F_00c0e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00c0df00(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00c0e8e0 */
uint F_00c0e8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c0c600(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e9c0 */
uint F_00c0e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00c0c670(&(*(undefined4 * PTR32 *)&gen_args[3]));
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00c0ea33;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00c0ea33: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00c0eae0 */
uint F_00c0eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0eb60 */
unsigned int F_00c0eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
  }
  return 0;
}

/* ref: FUN_00c0ebd0 */
uint F_00c0ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0ec30 */
uint F_00c0ec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0ec90 */
uint F_00c0ec90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ec90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ece0 */
uint F_00c0ece0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0ed50 */
uint F_00c0ed50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0ed50u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0eda0 */
uint F_00c0eda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0eda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0ee00 */
uint F_00c0ee00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ee00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ee50 */
uint F_00c0ee50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ee50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c0d000(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0eeb0 */
uint F_00c0eeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0eeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c0e800(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c0e5a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0ef50 */
uint F_00c0ef50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0ef50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0eeb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0ef70 */
uint F_00c0ef70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0ef70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c0e860(this);
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
    F_00c0e0e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0f010 */
uint F_00c0f010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
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

/* ref: FUN_00c0f080 */
uint F_00c0f080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00c0e8e0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00c0f0e0 */
uint F_00c0f0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_1;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00c0f130 */
uint F_00c0f130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f1c0 */
uint F_00c0f1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f1f0 */
uint F_00c0f1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f230 */
uint F_00c0f230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c0d6f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00c0df00((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00c0eeb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00c0f290 */
uint F_00c0f290(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f2c0 */
uint F_00c0f2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0ef70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0f2e0 */
uint F_00c0f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  F_00c0e9c0(this,param_1,puVar3,0);
  return param_1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf0 */
uint F_00c0f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3c0 */
uint F_00c0f3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c0ed50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3f0 */
uint F_00c0f3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f470 */
uint F_00c0f470(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf0 */
uint F_00c0f4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f520 */
uint F_00c0f520(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f5a0 */
uint F_00c0f5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f620 */
uint F_00c0f620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00bb6510(this,param_1);
  return (uint)this;
}

/* ref: FUN_00c0f640 */
uint F_00c0f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf1 */
uint F_00c0f690(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 DVar1;
  undefined1 DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    uVar5 = *(undefined4 *)(this + 0x10);
    iVar8 = *(int *)(this + 0xc);
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7,uVar5);
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar3 = piVar7[1];
    iVar4 = *piVar7;
    iVar8 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7,iVar3 - iVar4);
    }
  }
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,iVar8,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = DVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf1 */
uint F_00c0f7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0f7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 EVar1;
  undefined1 EVar2;
  undefined1 EVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  int local_14;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[0x10];
    local_14 = *(int *)(this + 0xc);
    EVar3 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(byte *)((int)puVar6 + 5) = (char)EVar2 + 6;
    *(undefined *)((int)puVar6 + 6) = EVar3;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7,(uint)(byte)EVar2);
      goto LAB_00c0f913;
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar4 = piVar7[1];
    iVar5 = *piVar7;
    local_14 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(char *)((int)puVar6 + 5) = (char)(iVar4 - iVar5) + '\x06';
    *(undefined *)((int)puVar6 + 6) = EVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7,iVar4 - iVar5 & 0xff);
      goto LAB_00c0f913;
    }
  }
  piVar7 = (int *)0x0;
LAB_00c0f913: ;
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,local_14,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = EVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf0 */
uint F_00c0f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c0b2c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerWinsock::vf8 */
uint F_00c0f990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 != 1) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x14c) = param_1;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x250) = param_1;
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf6 */
uint F_00c0fa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0fa30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(this + 0x148);
    if (uVar1 != 0) {
      pPVar3 = this + 0x14c;
      uVar2 = 0;
LAB_00c0fa52: ;
      if (*(int *)pPVar3 != param_1) goto code_r0x00c0fa56;
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x14c;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x148) - 1U);
      }
      *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
    }
LAB_00c0fa8a: ;
    uVar1 = *(uint *)(this + 0x24c);
    uVar2 = 0;
    if (uVar1 != 0) {
      pPVar3 = this + 0x250;
      while (*(int *)pPVar3 != param_1) {
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x250;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x24c) - 1U);
      }
      *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + -1;
    }
  }
  return 0;
code_r0x00c0fa56: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fa8a;
  goto LAB_00c0fa52;
}

/* ref: Client::Network::Socket::PollerWinsock::vf5 */
uint F_00c0faf0(void)
{
  GEN_ENTER(0xc0faf0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = gen_imp_WSAGetLastError();
  return -(uint)(iVar1 != 0x2734);
}

/* ref: Client::Network::Socket::PollerWinsock::vf7 */
uint F_00c0fb00(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined * readfds;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined * pPVar8;
  int * piVar9;
  undefined * pfVar10;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (*(int *)(this + 0xc) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c) ^ (uint)(uint)(gen_frame + 0x21c));
    return 0;
  }
  piVar9 = *(int * PTR32 *)(this + 8);
  readfds = (undefined *)(this + 0x44);
  (*(uint *)((char *)(readfds))) = 0;
  piVar4 = (int *)*piVar9;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (piVar4 != piVar9) {
    do {
      iVar7 = piVar4[4];
      *(undefined2 *)(iVar7 + 4) = 0;
      *(undefined1 *)(iVar7 + 6) = 0;
      uVar2 = (*(uint *)((char *)(readfds)));
      uVar6 = 0;
      if (uVar2 != 0) {
        pPVar8 = this + 0x48;
        do {
          if (*(int *)pPVar8 == piVar4[3]) break;
          uVar6 = uVar6 + 1;
          pPVar8 = pPVar8 + 4;
        } while (uVar6 < uVar2);
      }
      if ((uVar6 == uVar2) && (uVar2 < 0x40)) {
        *(int *)(this + uVar6 * 4 + 0x48) = piVar4[3];
        (*(uint *)((char *)(readfds))) = (*(uint *)((char *)(readfds))) + 1;
      }
      if ((*(uint *)(gen_frame + 0x8)) < (uint)piVar4[3]) {
        (*(uint *)(gen_frame + 0x8)) = piVar4[3];
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar9 = (int *)piVar4[2];
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar9 + 0x15);
          piVar4 = piVar9;
          piVar9 = (int *)*piVar9;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar9 + 0x15);
            piVar4 = piVar9;
            piVar9 = (int *)*piVar9;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar9 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar9 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar9 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 8));
  }
  pPVar8 = this + 0x148;
  pfVar10 = ((undefined *)(gen_frame + 0x10));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = 0;
  (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = 0;
  pPVar8 = this + 0x24c;
  pfVar10 = ((undefined *)(gen_frame + 0x114));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  iVar7 = gen_imp_select((*(uint *)(gen_frame + 0x8)) + 1,readfds,((undefined *)(gen_frame + 0x10)),((undefined *)(gen_frame + 0x114)),&(*(undefined8 *)(gen_frame + 0x0)));
  if (iVar7 != 0) {
    if (-1 < iVar7) {
      piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)));
      if (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)) {
        do {
          iVar7 = piVar9[4];
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],readfds);
          *(bool *)(iVar7 + 4) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x10)));
          *(bool *)(iVar7 + 5) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x114)));
          *(bool *)(iVar7 + 6) = iVar5 != 0;
          if (*(char *)((int)piVar9 + 0x15) == '\0') {
            piVar4 = (int *)piVar9[2];
            if (*(char *)((int)piVar4 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x15);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar4 + 0x15);
                piVar9 = piVar4;
                piVar4 = (int *)*piVar4;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x15);
              piVar3 = (int *)piVar9[1];
              piVar4 = piVar9;
              while ((piVar9 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar9[2]))) {
                cVar1 = *(char *)(piVar9[1] + 0x15);
                piVar3 = (int *)piVar9[1];
                piVar4 = piVar9;
              }
            }
          }
        } while (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8));
      }
      F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
      return 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
    return 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return 0;
}

