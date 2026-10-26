#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  ((int *)(gen_frame + 0x10))[3] = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x4));
  uVar1 = in_esi[1];
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1347a98);
  (*(undefined1 *)(gen_frame + 0x8)) = 0x51;
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined1 *)(gen_frame + 0xb)) = 4;
  (*(undefined1 *)(gen_frame + 0xc)) = 4;
  (*(undefined1 *)(gen_frame + 0xd)) = 4;
  (*(undefined1 *)(gen_frame + 0xe)) = 8;
  (*(undefined1 *)(gen_frame + 0xf)) = 0;
  uVar2 = F_00c060b0(uVar1,((int *)(gen_frame + 0x10)),0xc);
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar2 = 0xc;
  iVar3 = 0;
  do {
    if (*(int *)((int)&(*(int *)(gen_frame + 0x4)) + iVar3) != *(int *)((int)((int *)(gen_frame + 0x10)) + iVar3)) {
      F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a70)));
                    
      F_00bb93a0(*in_esi,3);
    }
    uVar2 = uVar2 - 4;
    iVar3 = iVar3 + 4;
  } while (3 < uVar2);
  F_00c47745(((int *)(gen_frame + 0x10))[3] ^ (uint)&(*(int *)(gen_frame + 0x4)));
  return uVar2;
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
  GEN_ENTER(0xc07460u, gen_trace_f(gen_a0), 0u, 0u, 0u);
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
  undefined1 SVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  SVar1 = this[0x24];
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (SVar1 == (undefined1)0x0) {
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
  SOCKET s;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  s = *(SOCKET *)(this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  gen_imp_setsockopt(s,0xffff,4,(char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
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
  SOCKET s;
  int iVar1;
  
  s = *(SOCKET *)(this + 4);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x4)) = 4;
  iVar1 = gen_imp_getsockopt(s,0xffff,0x1007,(char *)&(*(uint *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
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
uint F_00c08080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  return (uint)this;
}

/* ref: FUN_00c080b0 */
uint F_00c080b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)this;
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
uint F_00c082b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)this;
}

/* ref: FUN_00c08300 */
uint F_00c08300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x608;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return (uint)in_ecx;
}

/* ref: FUN_00c08330 */
uint F_00c08330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)this;
}

/* ref: FUN_00c08380 */
uint F_00c08380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x610;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)in_ecx;
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
uint F_00c08590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0x7c)) {
    *(uint *)(in_ecx + 0x7c) = param_2;
  }
  return param_2;
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
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
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
    pvVar1 = REFG(void * PTR32, 0x14c5958);
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
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    (*(undefined1 *)(gen_frame + 0x8)) = 0x60;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
    (*(char *)(gen_frame + 0x9)) = ((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c))) + 6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)(byte)((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
    (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
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
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar5 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = uVar5;
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
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
      (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
      (*(undefined2 *)(gen_frame + 0x8)) = 0x640;
      (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
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
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
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
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
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
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = *(int *)((int)this + 0x1c4);
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
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
    pvVar3 = REFG(void * PTR32, 0x14c5958);
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
      this_00 = REFG(void * PTR32, 0x14c5958);
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
uint F_00c0bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
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
  return (uint)this;
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
uint F_00c0c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c5a0 */
uint F_00c0c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c600 */
uint F_00c0c600(unsigned int gen_a0)
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
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c670 */
uint F_00c0c670(unsigned int gen_a0)
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
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
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
uint F_00c0c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c800 */
uint F_00c0c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c820 */
uint F_00c0c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
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
uint F_00c0c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0c8b0 */
uint F_00c0c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c8c0 */
uint F_00c0c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
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
uint F_00c0cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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
uint F_00c0d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
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
uint F_00c0d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
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
uint F_00c0d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
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
uint F_00c0d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
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
uint F_00c0d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0d3c0 */
uint F_00c0d3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
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
uint F_00c0d5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
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
uint F_00c0d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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
uint F_00c0df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0df70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
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
uint F_00c0eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)param_2;
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

/* ref: Client::Network::Socket::PollerWinsock::vf1 */
uint F_00c0fd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c11300((undefined *)this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c0fd80 */
uint F_00c0fd80(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c116d0(this);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  return (uint)this;
}

/* ref: FUN_00c0fdb0 */
uint F_00c0fdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  uVar1 = F_00c11750(this);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerWinsock::vf2 */
uint F_00c0fdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0fdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  uVar1 = F_00c11830((undefined *)this,param_1);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(this + 0x44);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x48;
LAB_00c0fdf0: ;
    if (*(int *)pPVar3 != param_1) goto code_r0x00c0fdf4;
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x48;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x44) - 1U);
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + -1;
  }
LAB_00c0fe1b: ;
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(int *)pPVar3 == param_1) {
        if (uVar2 < uVar1 - 1) {
          pPVar3 = this + uVar2 * 4 + 0x14c;
          do {
            *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
            uVar2 = uVar2 + 1;
            pPVar3 = pPVar3 + 4;
          } while (uVar2 < *(int *)(this + 0x148) - 1U);
        }
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
        break;
      }
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
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
  return 0;
code_r0x00c0fdf4: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fe1b;
  goto LAB_00c0fdf0;
}

/* ref: FUN_00c0fed0 */
uint F_00c0fed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00c0fee0 */
uint F_00c0fee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0ff20 */
uint F_00c0ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c0ffa0 */
uint F_00c0ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ffa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c0ffd0 */
uint F_00c0ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10010 */
uint F_00c10010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10060 */
uint F_00c10060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c100b0 */
uint F_00c100b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc100b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c10100 */
uint F_00c10100(unsigned int gen_a0)
{
  GEN_ENTER(0xc10100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10110 */
uint F_00c10110(unsigned int gen_a0)
{
  GEN_ENTER(0xc10110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10180 */
uint F_00c10180(unsigned int gen_a0)
{
  GEN_ENTER(0xc10180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c101e0 */
uint F_00c101e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc101e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c101f0 */
uint F_00c101f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc101f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10200 */
uint F_00c10200(unsigned int gen_a0)
{
  GEN_ENTER(0xc10200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10240 */
uint F_00c10240(unsigned int gen_a0)
{
  GEN_ENTER(0xc10240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10280 */
uint F_00c10280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102a0 */
uint F_00c102a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc102a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c102b0 */
uint F_00c102b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc102b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102d0 */
uint F_00c102d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc102d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c102f0 */
uint F_00c102f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc102f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10300 */
uint F_00c10300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10320 */
uint F_00c10320(unsigned int gen_a0)
{
  GEN_ENTER(0xc10320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10330 */
uint F_00c10330(unsigned int gen_a0)
{
  GEN_ENTER(0xc10330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10370 */
uint F_00c10370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00c103d0 */
uint F_00c103d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc103d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c10410 */
undefined4 * F_00c10410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c10460 */
uint F_00c10460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00bae660(this);
  return (uint)param_1;
}

/* ref: FUN_00c104b0 */
uint F_00c104b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc104b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c104e0 */
uint F_00c104e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc104e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c10180(this);
  return (uint)this;
}

/* ref: FUN_00c104f0 */
uint F_00c104f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc104f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10510 */
uint F_00c10510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10530 */
uint F_00c10530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10550 */
uint F_00c10550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10570 */
uint F_00c10570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10590 */
uint F_00c10590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c105d0 */
uint F_00c105d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc105d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bae660(this);
  return (uint)this;
}

/* ref: FUN_00c105e0 */
uint F_00c105e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc105e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00c10660 */
uint F_00c10660(unsigned int gen_a0)
{
  GEN_ENTER(0xc10660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c106e0 */
unsigned int F_00c106e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc106e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c106e0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x25a);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00c10720 */
uint F_00c10720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c10740 */
uint F_00c10740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10760 */
uint F_00c10760(unsigned int gen_a0)
{
  GEN_ENTER(0xc10760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c10180(this);
  return (uint)this;
}

/* ref: FUN_00c10770 */
uint F_00c10770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00c10790 */
unsigned int F_00c10790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00c107b0 */
uint F_00c107b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc107b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c107d0 */
uint F_00c107d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc107d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10830 */
uint F_00c10830(unsigned int gen_a0)
{
  GEN_ENTER(0xc10830u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00c108f0 */
uint F_00c108f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc108f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00c106e0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x25a);
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

/* ref: FUN_00c10950 */
uint F_00c10950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc10950u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_4,0x18,0x25a);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
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
LAB_00c10b4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
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
        goto LAB_00c10b4d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00c10b80 */
uint F_00c10b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10b80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c10ba0 */
unsigned int F_00c10ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10ba0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c10bd0 */
unsigned int F_00c10bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10bd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c10c00 */
uint F_00c10c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00bae660(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_00c10d1a;
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
      piVar4 = (int *)F_00bae620(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00c0fee0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c10d1a: ;
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
            F_00c105e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00c10370((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00c10dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00c10dd8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x25a);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c10e60 */
uint F_00c10e60(unsigned int gen_a0)
{
  GEN_ENTER(0xc10e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c10e90 */
uint F_00c10e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10e90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c10f10 */
uint F_00c10f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00c108f0(this);
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
    F_00c10c00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c10fb0 */
uint F_00c10fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c10180(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c11090 */
uint F_00c11090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
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

/* ref: FUN_00c110e0 */
unsigned int F_00c110e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc110e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c11110 */
unsigned int F_00c11110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c11140 */
uint F_00c11140(unsigned int gen_a0)
{
  GEN_ENTER(0xc11140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c11170 */
uint F_00c11170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c11220 */
uint F_00c11220(unsigned int gen_a0)
{
  GEN_ENTER(0xc11220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c10f10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c11240 */
uint F_00c11240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_2[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_2;
    puVar2[4] = uVar1;
  }
  F_00c10fb0(this,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_00c112a0 */
unsigned int F_00c112a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc112a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c112d0 */
unsigned int F_00c112d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc112d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::Network::Socket::PollerBase::vf1 */
uint F_00c11300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = (int *)F_00c11170((*(undefined * PTR32 *)&gen_args[0]) + 4,&(*(uint *)(gen_frame + 0x18)),&(*(int *)&gen_args[1]));
  if (*piVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]));
    if (uVar2 != 0) {
      (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[1]);
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      F_00c11240((*(undefined * PTR32 *)&gen_args[0]) + 4,((undefined1 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x14)));
      *(undefined2 *)(uVar2 + 4) = 0;
      *(undefined1 *)(uVar2 + 6) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c113a0 */
uint F_00c113a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc113a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c113d0 */
uint F_00c113d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc113d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11450 */
uint F_00c11450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11450u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x25a);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00c115d0 */
uint F_00c115d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc115d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11650 */
uint F_00c11650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00c11450(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

