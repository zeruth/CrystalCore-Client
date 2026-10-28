#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ceb540 */
GEN_FRAME uint F_00ceb540(unsigned int gen_a0)
{
  GEN_ENTER(0xceb540u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(0x200000 / (ulonglong)(*(uint *)&gen_args[0]));
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[0]) - 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00ceb570 */
GEN_FRAME uint F_00ceb570(unsigned int gen_a0)
{
  GEN_ENTER(0xceb570u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 * puVar5;
  
  puVar5 = *(undefined1 * PTR32 *)(in_eax + 0x10);
  uVar1 = *puVar5;
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 1;
  uVar2 = puVar5[1];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 2;
  uVar3 = puVar5[2];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 3;
  uVar4 = puVar5[3];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),uVar2),uVar1);
}

/* ref: FUN_00ceb5c0 */
GEN_NOFRAME uint F_00ceb5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xceb5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  if (*(uint *)(in_esi + 0x18) < (uint)(*(int *)(in_esi + 0x10) + in_edi)) {
    *(undefined4 *)(in_esi + 0x34) = 1;
    return 0;
  }
  F_00c46aa0(in_edx,*(int *)(in_esi + 0x10),in_edi);
  *(int *)(in_esi + 0x10) = *(int *)(in_esi + 0x10) + in_edi;
  return 1;
}

/* ref: FUN_00ceb650 */
GEN_FRAME uint F_00ceb650(unsigned int gen_a0)
{
  GEN_ENTER(0xceb650u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char * pcVar10;
  uint uVar11;
  int iVar12;
  
  pcVar10 = *(char * PTR32 *)(in_esi + 0x10);
  cVar1 = *pcVar10;
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 1;
  if (cVar1 != '\0') {
    *(undefined4 *)(in_esi + 0x38) = 0x1f;
    if (*(int *)(in_esi + 0x34) == 0) {
      *(undefined4 *)(in_esi + 0x38) = 0x1f;
    }
    return 0;
  }
  *(char *)(in_esi + 0x533) = pcVar10[1];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 2;
  cVar1 = pcVar10[2];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 3;
  cVar2 = pcVar10[3];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 4;
  cVar3 = pcVar10[4];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 5;
  cVar4 = pcVar10[5];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 6;
  iVar12 = CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1);
  cVar1 = pcVar10[6];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 7;
  cVar2 = pcVar10[7];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 8;
  cVar3 = pcVar10[8];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 9;
  cVar4 = pcVar10[9];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0xe;
  cVar5 = pcVar10[0xe];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0xf;
  cVar6 = pcVar10[0xf];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x10;
  cVar7 = pcVar10[0x10];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x11;
  cVar8 = pcVar10[0x11];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x16;
  *(uint *)(in_esi + 0x42c) = CONCAT31(CONCAT21(CONCAT11(cVar8,cVar7),cVar6),cVar5);
  uVar11 = (uint)(byte)pcVar10[0x16];
  pcVar10 = pcVar10 + 0x17;
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10;
  *(uint *)(in_esi + 0x430) = uVar11;
  if (*(int *)(in_esi + 0x34) == 0) {
    if (pcVar10 + uVar11 <= *(char * PTR32 *)(in_esi + 0x18)) {
      F_00c46aa0(in_esi + 0x434,pcVar10,uVar11);
      *(int *)(in_esi + 0x10) = *(int *)(in_esi + 0x10) + uVar11;
      *(undefined4 *)(in_esi + 0x550) = 0xfffffffe;
      if ((iVar12 != -1) || ((int)CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1) != -1)) {
        iVar9 = *(int *)(in_esi + 0x430);
        do {
          iVar9 = iVar9 - 1;
          if (iVar9 < 0) goto LAB_00ceb7c4;
        } while (*(char *)(in_esi + 0x434 + iVar9) == -1);
        if (-1 < iVar9) {
          *(int *)(in_esi + 0x550) = iVar9;
          *(int *)(in_esi + 0x554) = iVar12;
        }
      }
LAB_00ceb7c4: ;
      *(undefined4 *)(in_esi + 0x538) = 0;
      return 1;
    }
    *(undefined4 *)(in_esi + 0x34) = 1;
  }
  *(undefined4 *)(in_esi + 0x38) = 10;
  return 0;
}

/* ref: FUN_00ceb7e0 */
GEN_NOFRAME uint F_00ceb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xceb7e0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = *(char * PTR32 *)(in_eax + 0x10);
  cVar1 = *pcVar2;
  *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 1;
  if (cVar1 == 'O') {
    cVar1 = pcVar2[1];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 2;
    if (cVar1 == 'g') {
      cVar1 = pcVar2[2];
      *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 3;
      if ((cVar1 == 'g') &&
         (cVar1 = pcVar2[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 4, cVar1 == 'S')) {
        uVar3 = F_00ceb650(in_eax);
        return uVar3;
      }
    }
  }
  *(undefined4 *)(in_eax + 0x38) = 0x1e;
  if (*(int *)(in_eax + 0x34) == 0) {
    *(undefined4 *)(in_eax + 0x38) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb830 */
GEN_NOFRAME uint F_00ceb830(unsigned int gen_a0)
{
  GEN_ENTER(0xceb830u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(in_eax + 0x538);
  while( true ) {
    if (iVar2 != -1) {
      *(undefined4 *)(in_eax + 0x53c) = 0;
      *(undefined4 *)(in_eax + 0x548) = 0;
      *(undefined4 *)(in_eax + 0x544) = 0;
      *(undefined1 *)(in_eax + 0x534) = 0;
      return 1;
    }
    pcVar3 = *(char * PTR32 *)(in_eax + 0x10);
    cVar1 = *pcVar3;
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 1;
    if (cVar1 != 'O') break;
    cVar1 = pcVar3[1];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 2;
    if (cVar1 != 'g') break;
    cVar1 = pcVar3[2];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 3;
    if ((cVar1 != 'g') || (cVar1 = pcVar3[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 4, cVar1 != 'S'))
    break;
    uVar4 = F_00ceb650(in_eax);
    if (uVar4 == 0) {
      return 0;
    }
    if ((*(byte *)(in_eax + 0x533) & 1) != 0) {
      uVar5 = 0x20;
      goto LAB_00ceb8af;
    }
    iVar2 = *(int *)(in_eax + 0x538);
  }
  uVar5 = 0x1e;
LAB_00ceb8af: ;
  *(undefined4 *)(in_eax + 0x38) = uVar5;
  if (*(int *)(in_eax + 0x34) == 0) {
    *(undefined4 *)(in_eax + 0x38) = uVar5;
  }
  return 0;
}

/* ref: FUN_00ceb8d0 */
GEN_NOFRAME uint F_00ceb8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xceb8d0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*(int *)(in_eax + 0x538) != -1) {
LAB_00ceb954: ;
    uVar3 = F_00ceb830(in_eax);
    return uVar3;
  }
  pcVar2 = *(char * PTR32 *)(in_eax + 0x10);
  cVar1 = *pcVar2;
  *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 1;
  if (*(int *)(in_eax + 0x34) == 0) {
    if (cVar1 == 'O') {
      cVar1 = pcVar2[1];
      *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 2;
      if (cVar1 == 'g') {
        cVar1 = pcVar2[2];
        *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 3;
        if ((cVar1 == 'g') &&
           (cVar1 = pcVar2[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 4, cVar1 == 'S')) {
          uVar3 = F_00ceb650(in_eax);
          if (uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(in_eax + 0x533) & 1) != 0) {
            *(undefined4 *)(in_eax + 0x53c) = 0;
            *(undefined1 *)(in_eax + 0x534) = 0;
            *(undefined4 *)(in_eax + 0x38) = 0x20;
            if (*(int *)(in_eax + 0x34) != 0) {
              return 0;
            }
            *(undefined4 *)(in_eax + 0x38) = 0x20;
            return 0;
          }
          goto LAB_00ceb954;
        }
      }
    }
    *(undefined4 *)(in_eax + 0x38) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb960 */
GEN_NOFRAME uint F_00ceb960(unsigned int gen_a0)
{
  GEN_ENTER(0xceb960u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(in_esi + 0x53c) != 0) {
    return 0;
  }
  if (*(int *)(in_esi + 0x538) == -1) {
    *(int *)(in_esi + 0x540) = *(int *)(in_esi + 0x430) - 1;
    uVar3 = F_00ceb7e0(in_esi);
    if (uVar3 == 0) {
      *(undefined4 *)(in_esi + 0x53c) = 1;
      return 0;
    }
    if ((*(byte *)(in_esi + 0x533) & 1) == 0) {
      *(undefined4 *)(in_esi + 0x38) = 0x20;
      if (*(int *)(in_esi + 0x34) == 0) {
        *(undefined4 *)(in_esi + 0x38) = 0x20;
      }
      return 0;
    }
  }
  iVar2 = *(int *)(in_esi + 0x538);
  bVar1 = *(byte *)(iVar2 + 0x434 + in_esi);
  *(int *)(in_esi + 0x538) = iVar2 + 1;
  if (bVar1 < 0xff) {
    *(undefined4 *)(in_esi + 0x53c) = 1;
    *(int *)(in_esi + 0x540) = iVar2;
  }
  if (*(int *)(in_esi + 0x430) <= iVar2 + 1) {
    *(undefined4 *)(in_esi + 0x538) = 0xffffffff;
  }
  *(byte *)(in_esi + 0x534) = bVar1;
  return (uint)bVar1;
}

/* ref: FUN_00ceba40 */
GEN_NOFRAME uint F_00ceba40(unsigned int gen_a0)
{
  GEN_ENTER(0xceba40u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)(in_eax + 0x534) == '\0') {
    if (*(int *)(in_eax + 0x53c) == 0) {
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 != 0) goto LAB_00ceba63;
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_00ceba63: ;
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) - 1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
  }
  *(undefined4 *)(in_eax + 0x548) = 0;
  *(undefined4 *)(in_eax + 0x544) = 0;
  return uVar2;
}

/* ref: FUN_00ceba90 */
GEN_NOFRAME uint F_00ceba90(unsigned int gen_a0)
{
  GEN_ENTER(0xceba90u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*(char *)(in_eax + 0x534) == '\0') {
      if (*(int *)(in_eax + 0x53c) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) - 1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00cebad0 */
GEN_FRAME uint F_00cebad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcebad0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x548);
  if (iVar2 < 0) {
    return 0;
  }
  if (iVar2 < param_2) {
    if (0x18 < param_2) {
      uVar3 = F_00cebad0(param_1,0x18);
      uVar4 = F_00cebad0(param_1,param_2 - 0x18);
      return uVar4 << 0x18 | uVar3;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x544) = 0;
    }
    do {
      if ((*(char *)(param_1 + 0x534) == '\0') &&
         ((*(int *)(param_1 + 0x53c) != 0 || (uVar3 = F_00ceb960(param_1), uVar3 == 0)))) {
LAB_00cebb9e: ;
        *(undefined4 *)(param_1 + 0x548) = 0xffffffff;
        return 0;
      }
      *(char *)(param_1 + 0x534) = *(char *)(param_1 + 0x534) - 1;
      bVar1 = **(byte * PTR32 *)(param_1 + 0x10);
      *(byte * PTR32 *)(param_1 + 0x10) = *(byte * PTR32 *)(param_1 + 0x10) + 1;
      uVar3 = (uint)bVar1;
      if (uVar3 == 0xffffffff) goto LAB_00cebb9e;
      iVar2 = *(int *)(param_1 + 0x548);
      iVar5 = iVar2 + 8;
      *(int *)(param_1 + 0x548) = iVar5;
      *(uint *)(param_1 + 0x544) = *(uint *)(param_1 + 0x544) | uVar3 << ((byte)iVar2 & 0x1f);
    } while (iVar5 < param_2);
  }
  if (*(int *)(param_1 + 0x548) < 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x544);
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) - param_2;
  *(uint *)(param_1 + 0x544) = uVar3 >> ((byte)param_2 & 0x1f);
  return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar3;
}

/* ref: FUN_00cebbb0 */
GEN_NOFRAME uint F_00cebbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcebbb0u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*(char *)(in_eax + 0x534) == '\0') {
      if (*(int *)(in_eax + 0x53c) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) - 1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    *(uint *)(in_eax + 0x544) =
         *(uint *)(in_eax + 0x544) | uVar2 << ((byte)*(int *)(in_eax + 0x548) & 0x1f);
    uVar2 = *(int *)(in_eax + 0x548) + 8;
    *(uint *)(in_eax + 0x548) = uVar2;
  } while ((int)uVar2 < 0x19);
  return uVar2;
}

/* ref: FUN_00cebc10 */
GEN_FRAME uint F_00cebc10(unsigned int gen_a0)
{
  GEN_ENTER(0xcebc10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cebc20 */
GEN_FRAME uint F_00cebc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcebc20u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (*(char *)(param_2 + 0x25) != '\0') {
    if (*(int *)(in_edi + 0x548) < 8) {
      F_00cebbb0(in_edi);
    }
    uVar3 = *(uint *)(in_edi + 0x544);
    uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
    if ((int)uVar4 < 0) {
      if (*(int *)(in_edi + 0x548) < 0x19) {
        F_00cebbb0(in_edi);
      }
      uVar3 = *(uint *)(in_edi + 0x544);
      uVar2 = uVar3 >> 8;
      do {
        uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
        uVar2 = uVar2 >> 2;
      } while ((int)uVar4 < 0);
    }
    piVar1 = (int *)(in_edi + 0x548);
    *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
    *(uint *)(in_edi + 0x544) = uVar3 >> ((byte)((int)uVar4 >> 0x1a) & 0x1f);
    if (*piVar1 < 0) {
      *(undefined4 *)(in_edi + 0x548) = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar4 & 0x3ffffff;
      if (uVar4 != 0xffffffff) {
        return uVar4;
      }
    }
    if ((*(char *)(in_edi + 0x534) == '\0') && (*(int *)(in_edi + 0x53c) != 0)) {
      return 0xffffffff;
    }
  }
  *(undefined4 *)(in_edi + 0x38) = 0x15;
  if (*(int *)(in_edi + 0x34) == 0) {
    *(undefined4 *)(in_edi + 0x38) = 0x15;
  }
  return uVar4;
}

/* ref: FUN_00cebd00 */
GEN_FRAME uint F_00cebd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcebd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float local_8;
  
  if (*(char *)(in_esi + 0x25) == '\0') {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    if (*(int *)(param_2 + 0x34) != 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    return 0;
  }
  if (*(int *)(param_2 + 0x548) < 8) {
    F_00cebbb0(param_2);
  }
  uVar7 = *(uint *)(param_2 + 0x544);
  uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + (uVar7 & 0xff) * 4)));
  if ((int)uVar9 < 0) {
    if (*(int *)(param_2 + 0x548) < 0x19) {
      F_00cebbb0(param_2);
    }
    uVar7 = *(uint *)(param_2 + 0x544);
    uVar3 = uVar7 >> 8;
    do {
      uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar9) * 4)));
      uVar3 = uVar3 >> 2;
    } while ((int)uVar9 < 0);
  }
  piVar1 = (int *)(param_2 + 0x548);
  *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
  *(uint *)(param_2 + 0x544) = uVar7 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
  if (*piVar1 < 0) {
    *(undefined4 *)(param_2 + 0x548) = 0;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar9 & 0x3ffffff;
    if (uVar9 != 0xffffffff) goto LAB_00cebdd9;
  }
  if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
LAB_00cebdd9: ;
  if ((int)uVar9 < 0) {
    return 0;
  }
  iVar4 = *(int *)(in_esi + 8);
  if (iVar4 < param_4) {
    param_4 = iVar4;
  }
  iVar4 = iVar4 * uVar9;
  iVar6 = 0;
  if (*(char *)(in_esi + 0x26) == '\0') {
    fVar11 = (float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = (float *)(param_3 + 8);
      do {
        pfVar2 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 - 1;
        pfVar5[-2] = ((float)GEN_TOF((((float10)*pfVar2 + fVar11) + (float10)pfVar5[-2])));
        pfVar5[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 0xc + iVar8))) + fVar11) +
                            (float10)pfVar5[-1])));
        *pfVar5 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 8 + iVar8))) + fVar11) +
                         (float10)*pfVar5)));
        pfVar5[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 4 + iVar8))) + fVar11) +
                           (float10)pfVar5[1])));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((iVar4 + *(int *)(in_esi + 4))));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        *(float *)(param_3 - 4 + iVar6 * 4) =
             ((float)GEN_TOF((((float10)*pfVar5 + fVar11) + (float10)*(float *)(param_3 - 4 + iVar6 * 4))));
      } while (iVar6 < param_4);
    }
  }
  else {
    local_8 = (float)(float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = (float *)(param_3 + 8);
      do {
        pfVar2 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 - 1;
        fVar11 = (float10)(float)((float10)*pfVar2 + (float10)local_8);
        pfVar5[-2] = (float)(fVar11 + (float10)pfVar5[-2]);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 0xc + iVar8))))));
        pfVar5[-1] = (float)(fVar11 + (float10)pfVar5[-1]);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 8 + iVar8))))));
        *pfVar5 = (float)(fVar11 + (float10)*pfVar5);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) - 4 + iVar8))))));
        pfVar5[1] = (float)(fVar11 + (float10)pfVar5[1]);
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c))));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar4)));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        fVar11 = (float10)(float)((float10)*pfVar5 + (float10)local_8);
        *(float *)(param_3 - 4 + iVar6 * 4) =
             ((float)GEN_TOF((fVar11 + (float10)*(float *)(param_3 - 4 + iVar6 * 4))));
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c))));
      } while (iVar6 < param_4);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00cebfc0 */
GEN_FRAME uint F_00cebfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcebfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  float * local_1c;
  float * local_18;
  float * local_14;
  float * local_10;
  float local_8;
  
  uVar10 = 0xffffffff;
  if (*(char *)(in_edi + 0x25) != '\0') {
    if (*(int *)(param_2 + 0x548) < 8) {
      F_00cebbb0(param_2);
    }
    uVar6 = *(uint *)(param_2 + 0x544);
    uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + (uVar6 & 0xff) * 4)));
    if ((int)uVar10 < 0) {
      if (*(int *)(param_2 + 0x548) < 0x19) {
        F_00cebbb0(param_2);
      }
      uVar6 = *(uint *)(param_2 + 0x544);
      uVar3 = uVar6 >> 8;
      do {
        uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar10) * 4)));
        uVar3 = uVar3 >> 2;
      } while ((int)uVar10 < 0);
    }
    piVar1 = (int *)(param_2 + 0x548);
    *piVar1 = *piVar1 - ((int)uVar10 >> 0x1a);
    *(uint *)(param_2 + 0x544) = uVar6 >> ((byte)((int)uVar10 >> 0x1a) & 0x1f);
    if (*piVar1 < 0) {
      *(undefined4 *)(param_2 + 0x548) = 0;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = uVar10 & 0x3ffffff;
      if (uVar10 != 0xffffffff) goto LAB_00cec08e;
    }
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      uVar10 = 0xffffffff;
      goto LAB_00cec08e;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
LAB_00cec08e: ;
  local_8 = (float)(float10)0;
  if (-1 < (int)uVar10) {
    iVar4 = *(int *)(in_edi + 8);
    if (iVar4 < param_4) {
      param_4 = iVar4;
    }
    iVar9 = 0;
    if (3 < param_4) {
      local_1c = param_3 + param_5 * 3;
      local_10 = param_3;
      local_18 = param_3 + param_5 * 2;
      local_14 = param_3 + param_5;
      iVar7 = iVar4 * uVar10 * 4;
      iVar5 = (param_4 - 4U >> 2) + 1;
      iVar9 = iVar5 * 4;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_10 = (float)((float10)fVar2 + (float10)*local_10);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 4 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_14 = (float)((float10)fVar2 + (float10)*local_14);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 8 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_18 = (float)((float10)fVar2 + (float10)*local_18);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0xc + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_1c = (float)((float10)fVar2 + (float10)*local_1c);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        local_10 = local_10 + param_5 * 4;
        local_14 = local_14 + param_5 * 4;
        local_18 = local_18 + param_5 * 4;
        local_1c = local_1c + param_5 * 4;
        iVar7 = iVar7 + 0x10;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    if (iVar9 < param_4) {
      iVar4 = (iVar4 * uVar10 + iVar9) * 4;
      pfVar8 = param_3 + iVar9 * param_5;
      iVar9 = param_4 - iVar9;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_edi + 4) + iVar4))) + (float10)local_8)));
        *pfVar8 = (float)((float10)fVar2 + (float10)*pfVar8);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        pfVar8 = pfVar8 + param_5;
        iVar4 = iVar4 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cec220 */
GEN_FRAME uint F_00cec220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcec220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int * piVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float local_c;
  int local_8;
  
  local_8 = *param_6;
  iVar8 = *param_5;
  iVar3 = *(int *)(param_2 + 8);
  if (*(char *)(param_2 + 0x25) == '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0x15;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0x15;
    }
    return 0;
  }
  iVar5 = param_8;
  if (*(char *)(param_2 + 0x26) == '\0') {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      if (*(int *)(param_1 + 0x548) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *(uint *)(param_1 + 0x544);
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*(int *)(param_1 + 0x548) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *(uint *)(param_1 + 0x544);
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = (int *)(param_1 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *(uint *)(param_1 + 0x544) = uVar6 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x548) = 0;
LAB_00cec4c2: ;
        if ((*(char *)(param_1 + 0x534) == '\0') && (*(int *)(param_1 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        if (*(int *)(param_1 + 0x34) != 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec4c2;
      local_c = 0.0;
      if (0 < iVar3) {
        iVar10 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*(int *)(param_3 + iVar8 * 4) + local_8 * 4)));
          iVar8 = iVar8 + 1;
          *pfVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + *(int *)(param_2 + 4)))) +
                                            (float10)*(double *)&REFG(undefined, 0x108bec8)))) + (float10)*pfVar2)));
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          local_c = gen_bits2f((int)gen_fl2bits(local_c) + 1);
          iVar10 = iVar10 + 4;
        } while ((int)gen_fl2bits(local_c) < iVar3);
      }
    }
  }
  else {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      local_c = (float)(float10)0;
      if (*(int *)(param_1 + 0x548) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *(uint *)(param_1 + 0x544);
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*(int *)(param_1 + 0x548) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *(uint *)(param_1 + 0x544);
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = (int *)(param_1 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *(uint *)(param_1 + 0x544) = uVar6 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x548) = 0;
LAB_00cec389: ;
        if ((*(char *)(param_1 + 0x534) == '\0') && (*(int *)(param_1 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        if (*(int *)(param_1 + 0x34) == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0x15;
        }
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec389;
      iVar10 = 0;
      if (0 < iVar3) {
        iVar7 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*(int *)(param_3 + iVar8 * 4) + local_8 * 4)));
          local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *(int *)(param_2 + 4)))) + (float10)local_c)));
          iVar8 = iVar8 + 1;
          *pfVar2 = (float)((float10)local_c + (float10)*pfVar2);
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar10 < iVar3);
      }
    }
  }
LAB_00cec4f0: ;
  *param_5 = iVar8;
  *param_6 = local_8;
  return 1;
}

/* ref: FUN_00cec510 */
GEN_FRAME uint F_00cec510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcec510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_3;
  iVar2 = *(int *)(param_3 + 8);
  if (*(char *)(param_3 + 0x25) == '\0') {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    if (*(int *)(param_2 + 0x34) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 0x15;
    }
    return 0;
  }
  if (*(char *)(param_3 + 0x26) == '\0') {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar7 = *(uint *)(param_2 + 0x544);
      uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + (uVar7 & 0xff) * 4)));
      if ((int)uVar6 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar7 = *(uint *)(param_2 + 0x544);
        uVar5 = uVar7 >> 8;
        do {
          uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + ((uVar5 & 3) + 0x80000000 + uVar6) * 4)));
          uVar5 = uVar5 >> 2;
        } while ((int)uVar6 < 0);
      }
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar6 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar7 >> ((byte)((int)uVar6 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) break;
      if ((uVar6 & 0x3ffffff) == 0xffffffff) goto LAB_00cec781;
      if (0 < iVar2) {
        iVar8 = (uVar6 & 0x3ffffff) * iVar2 * 4;
        iVar4 = 0;
        do {
          in_eax = in_eax + 1;
          *(float *)(param_4 - 4 + in_eax * 4) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar8 + *(int *)(param_3 + 4)))) +
                                       (float10)*(double *)&REFG(undefined, 0x108bec8)))) +
                      (float10)*(float *)(param_4 - 4 + in_eax * 4))));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar4 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *(undefined4 *)(param_2 + 0x548) = 0;
LAB_00cec781: ;
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      return 0;
    }
  }
  else {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      param_3 = (uint)gen_fl2bits((float)(float10)0);
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar6 = *(uint *)(param_2 + 0x544);
      uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar5 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar6 = *(uint *)(param_2 + 0x544);
        uVar3 = uVar6 >> 8;
        do {
          uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar5) * 4)));
          uVar3 = uVar3 >> 2;
        } while ((int)uVar5 < 0);
      }
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar5 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar6 >> ((byte)((int)uVar5 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) break;
      if ((uVar5 & 0x3ffffff) == 0xffffffff) goto LAB_00cec65b;
      iVar8 = 0;
      if (0 < iVar2) {
        iVar4 = (uVar5 & 0x3ffffff) * iVar2 * 4;
        do {
          in_eax = in_eax + 1;
          param_3 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + *(int *)(uVar7 + 4)))) +
                                             ((float10)GEN_TOD(gen_bits2f(param_3)))))));
          *(float *)(param_4 - 4 + in_eax * 4) =
               ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*(float *)(param_4 - 4 + in_eax * 4)
                      )));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar8 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *(undefined4 *)(param_2 + 0x548) = 0;
LAB_00cec65b: ;
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
  return 0;
}

/* ref: FUN_00cec7c0 */
GEN_FRAME uint F_00cec7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcec7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_edi = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  
  uVar1 = in_ecx - in_edi >> 0x1f;
  return ((((in_ecx - in_edi ^ uVar1) - uVar1) * (in_eax - param_4) * param_5 >> 0x15 ^ uVar1) -
         uVar1) + in_edi;
}

/* ref: FUN_00cec7f0 */
GEN_FRAME unsigned int F_00cec7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcec7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  
  uVar8 = param_5 - param_3;
  iVar2 = in_eax - param_4;
  if (iVar2 < 0) {
    uVar3 = (uint)(iVar2 * -0x1000000) / uVar8;
    uVar5 = param_4 * -0x1000000;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar3 = uVar3 + 1;
    }
    iVar2 = param_3 + 1;
    *(float *)(param_2 - 4 + iVar2 * 4) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*(float *)(param_2 + param_3 * 4))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar1 = iVar2 * 4;
        param_4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar2 = iVar2 + param_4 * 4;
        pfVar7 = (float *)(param_2 + 8 + iVar1);
        do {
          uVar8 = uVar5 + uVar3 + uVar3;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 + uVar3 >> 0x18) * -4) *
                              (float10)pfVar7[-2])));
          uVar6 = uVar8 + uVar3;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar8 >> 0x18) * -4) *
                              (float10)pfVar7[-1])));
          uVar5 = uVar6 + uVar3;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar6 >> 0x18) * -4) *
                           (float10)*pfVar7)));
          param_4 = param_4 - 1;
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 >> 0x18) * -4) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (param_4 != 0);
      }
      if (iVar2 < param_5) {
        do {
          uVar5 = uVar5 + uVar3;
          iVar2 = iVar2 + 1;
          *(float *)(param_2 - 4 + iVar2 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 >> 0x18) * -4) *
                      (float10)*(float *)(param_2 - 4 + iVar2 * 4))));
        } while (iVar2 < param_5);
        return 0;
      }
    }
  }
  else {
    uVar5 = (uint)(iVar2 * 0x1000000) / uVar8;
    uVar3 = param_4 << 0x18;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar5 = uVar5 + 1;
    }
    iVar2 = param_3 + 1;
    *(float *)(param_2 - 4 + iVar2 * 4) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*(float *)(param_2 + param_3 * 4))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + iVar4 * 4;
        pfVar7 = (float *)(param_2 + 8 + iVar1);
        do {
          uVar8 = uVar3 + uVar5 + uVar5;
          uVar6 = uVar8 + uVar5;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 + uVar5 >> 0x18) * 4) *
                              (float10)pfVar7[-2])));
          uVar3 = uVar6 + uVar5;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                              (float10)pfVar7[-1])));
          iVar4 = iVar4 - 1;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar6 >> 0x18) * 4) *
                           (float10)*pfVar7)));
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (iVar4 != 0);
      }
      while (iVar2 < param_5) {
        uVar3 = uVar3 + uVar5;
        iVar2 = iVar2 + 1;
        *(float *)(param_2 - 4 + iVar2 * 4) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                    (float10)*(float *)(param_2 - 4 + iVar2 * 4))));
      }
    }
  }
  return 0;
}

/* ref: FUN_00cec9f0 */
GEN_FRAME uint F_00cec9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcec9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  int local_8;
  
  local_8 = 0;
  if (param_6 == 0) {
    uVar10 = (uint)(*(int *)(in_eax + 0xc) * param_5) >> 0x15;
    if (uVar10 != 0) {
      param_6 = param_5 - param_4;
      iVar9 = param_3 + param_4 * 4;
      do {
        uVar3 = F_00cebfc0(in_eax,param_2,iVar9,param_6,uVar10);
        if (uVar3 == 0) {
          return 0;
        }
        param_6 = param_6 - 1;
        local_8 = local_8 + 1;
        iVar9 = iVar9 + 4;
      } while (local_8 < (int)uVar10);
      return 1;
    }
  }
  else if (0 < param_5) {
    do {
      iVar4 = param_5 - local_8;
      iVar9 = param_3 + param_4 * 4;
      if (*(char *)(in_eax + 0x25) == '\0') {
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        if (*(int *)(param_2 + 0x34) != 0) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        return 0;
      }
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar10 = *(uint *)(param_2 + 0x544);
      uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + (uVar10 & 0xff) * 4)));
      if ((int)uVar3 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar10 = *(uint *)(param_2 + 0x544) >> 8;
        do {
          uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + ((uVar10 & 3) + 0x80000000 + uVar3) * 4)));
          uVar10 = uVar10 >> 2;
        } while ((int)uVar3 < 0);
        uVar10 = *(uint *)(param_2 + 0x544);
      }
      fVar12 = (float10)0;
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar3 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar10 >> ((byte)((int)uVar3 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_2 + 0x548) = 0;
        uVar3 = 0xffffffff;
LAB_00cecb2a: ;
        if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        if (*(int *)(param_2 + 0x34) == 0) {
          *(undefined4 *)(param_2 + 0x38) = 0x15;
        }
      }
      else {
        uVar3 = uVar3 & 0x3ffffff;
        if (uVar3 == 0xffffffff) goto LAB_00cecb2a;
      }
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar5 = *(int *)(in_eax + 8);
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
      }
      iVar5 = iVar5 * uVar3;
      iVar8 = 0;
      if (*(char *)(in_eax + 0x26) == '\0') {
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar8 = iVar11 * 4;
          pfVar6 = (float *)(iVar9 + 8);
          iVar7 = iVar5 * 4;
          do {
            iVar11 = iVar11 - 1;
            pfVar6[-2] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + *(int *)(in_eax + 4)))) + fVar12) +
                                (float10)pfVar6[-2])));
            pfVar6[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 4 + *(int *)(in_eax + 4)))) + fVar12) +
                                (float10)pfVar6[-1])));
            *pfVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 8 + *(int *)(in_eax + 4)))) + fVar12) +
                             (float10)*pfVar6)));
            pfVar6[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 0xc + *(int *)(in_eax + 4)))) + fVar12) +
                               (float10)pfVar6[1])));
            pfVar6 = pfVar6 + 4;
            iVar7 = iVar7 + 0x10;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((*(int *)(in_eax + 4) + iVar5)));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            *(float *)(iVar9 - 4 + iVar8 * 4) =
                 ((float)GEN_TOF((((float10)*pfVar6 + (float10)0) +
                        (float10)*(float *)(iVar9 - 4 + iVar8 * 4))));
          } while (iVar8 < iVar4);
        }
      }
      else {
        param_6 = (uint)gen_fl2bits((float)(float10)0);
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar7 = iVar5 * 4;
          iVar8 = iVar11 * 4;
          pfVar6 = (float *)(iVar9 + 8);
          do {
            pfVar2 = ((float *)GEN_TOP((*(int *)(in_eax + 4) + iVar7)));
            iVar7 = iVar7 + 0x10;
            iVar11 = iVar11 - 1;
            fVar12 = (float10)(float)((float10)*pfVar2 + ((float10)GEN_TOD(gen_bits2f(param_6))));
            pfVar6[-2] = (float)(fVar12 + (float10)pfVar6[-2]);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) - 0xc + iVar7))))));
            pfVar6[-1] = (float)(fVar12 + (float10)pfVar6[-1]);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) - 8 + iVar7))))));
            *pfVar6 = (float)(fVar12 + (float10)*pfVar6);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) - 4 + iVar7))))));
            pfVar6[1] = (float)(fVar12 + (float10)pfVar6[1]);
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c)))));
            pfVar6 = pfVar6 + 4;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((iVar5 + *(int *)(in_eax + 4))));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            fVar12 = (float10)(float)((float10)*pfVar6 + ((float10)GEN_TOD(gen_bits2f(param_6))));
            *(float *)(iVar9 - 4 + iVar8 * 4) =
                 ((float)GEN_TOF((fVar12 + (float10)*(float *)(iVar9 - 4 + iVar8 * 4))));
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c)))));
          } while (iVar8 < iVar4);
        }
      }
      param_4 = param_4 + *(int *)(in_eax + 8);
      local_8 = local_8 + *(int *)(in_eax + 8);
    } while (local_8 < param_5);
  }
  return 1;
}

/* ref: FUN_00cecd50 */
GEN_NOFRAME uint F_00cecd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcecd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x12090];
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  undefined4 * puVar19;
  
  (*(uint *)(gen_frame + 0x1207c)) = 0xcecd70;
  (*(uint *)(gen_frame + 0x1207c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12080);
  iVar3 = *(int *)(in_edi + 0x158);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10044)) = param_2;
  (*(uint *)(gen_frame + 0x10040)) = (uint)*(ushort *)(in_edi + 0xd8 + param_5 * 2);
  piVar2 = (int *)(iVar3 + param_5 * 0x1c);
  (*(int *)(gen_frame + 0x10048)) = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + (uint)*(byte *)((int)piVar2 + 0x11) * 4)))
                       + 8)));
  puVar14 = *(undefined4 * PTR32 *)(in_edi + 8);
  puVar12 = ((undefined4 *)GEN_TOP(((uint)((piVar2[1] - *piVar2) * piVar2[3]) >> 0x15)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10050)) = puVar12;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = puVar14;
  ((int *)(gen_frame + 0x1000c))[8] = 0xcecde4;
  iVar3 = -(((int)((int)(uintptr_t)puVar12) * 4 + 4) * (int)puVar14);
  iVar13 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1004c)) = ((int *)GEN_TOP((((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + (iVar3))))));
  puVar16 = ((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + ((int)((int)(uintptr_t)puVar14) * 4 + iVar3)));
  if (0 < (int)puVar14) {
    do {
      *((undefined1 * PTR32 *)GEN_TOP((((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + (iVar13 * 4 + iVar3)))))) = puVar16;
      iVar13 = iVar13 + 1;
      puVar16 = puVar16 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) * 4;
    } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)));
  }
  if (((*(uint *)(gen_frame + 0x10040)) == 2) && (param_3 != (undefined4 *)0x1)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)((int)((int)(uintptr_t)param_3) * (*(int *)&gen_a3));
    puVar14 = (undefined4 *)0x0;
    if (0 < (int)param_3) {
      do {
        if (*(char *)((int)puVar14 + param_6) == '\0') break;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while ((int)puVar14 < (int)param_3);
    }
    if (puVar14 != param_3) {
      if ((param_3 == (undefined4 *)0x2) && ((*(int *)&gen_a3) < 0x401)) {
        *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = (int)((int)(uintptr_t)param_3) * (*(int *)&gen_a3) * 4;
        *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = 0;
        *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = ((undefined4 *)(gen_frame + 0x10070));
        *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = 0xcece88;
        F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10064)) = 0;
          if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)0x0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) {
                (*(int *)(gen_frame + 0x10054)) = *((int *)GEN_TOP((*(int *)(in_edi + 0x48) +
                                     (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (*(int *)(in_edi + 0x548) < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xcecee7;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10054)) + 0x2c + (uVar17 & 0xff) * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = puVar14;
                if ((int)puVar14 < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xcecf18;
                    F_00cebbb0(in_edi);
                    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10058));
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10054)) + 0x2c + ((uVar17 & 3) + 0x80000000 + (int)puVar14) * 4)));
                    uVar17 = uVar17 >> 2;
                  } while ((int)puVar14 < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)puVar14) >> 0x1a);
                iVar13 = *piVar1;
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)((int)((int)(uintptr_t)puVar14) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)puVar14) >> 0x1a) & 0x1f);
                if (iVar13 < 0) {
                  *(undefined4 *)(in_edi + 0x548) = 0;
                  goto LAB_00ced077;
                }
                if (((uint)puVar14 & 0x3ffffff) == 0xffffffff) goto LAB_00ced077;
                *(undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + *(*(int * PTR32 *)(gen_frame + 0x1004c))) =
                     *((undefined4 *)GEN_TOP((piVar2[5] + ((uint)puVar14 & 0x3ffffff) * 4)));
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x1006c)) = 0;
              if (0 < (*(int *)(gen_frame + 0x10048))) {
                do {
                  if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= iVar13) break;
                  iVar15 = piVar2[2];
                  iVar4 = *piVar2;
                  iVar18 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                               (uint)*((byte *)GEN_TOP((*(int *)(*(*(int * PTR32 *)(gen_frame + 0x1004c)) +
                                                                       (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) + (*(int *)(gen_frame + 0x1006c))
                                                              ))) * 2) * 2)));
                  if (-1 < iVar18) {
                    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar18 * 4)));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = piVar2[2];
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = ((undefined4 *)(gen_frame + 0x10070));
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = uVar5;
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0xc) = 0xced016;
                    uVar17 = F_00cec510(iVar15 * iVar13 + iVar4,
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10),
                                          *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
                    if (uVar17 == 0) goto LAB_00ced077;
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                  iVar15 = (*(int *)(gen_frame + 0x1006c)) + 1;
                  (*(int *)(gen_frame + 0x1006c)) = iVar15;
                  iVar13 = (*(int *)(gen_frame + 0x10064));
                } while (iVar15 < (*(int *)(gen_frame + 0x10048)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + 1;
            } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
          }
          puVar14 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar14;
        } while ((int)puVar14 < 8);
LAB_00ced077: ;
        puVar12 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10044));
        puVar19 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x10044))[1];
        puVar14 = (undefined4 *)0x0;
        if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) {
          do {
            uVar5 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 1)];
            uVar6 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 2)];
            uVar7 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 3)];
            uVar8 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)(puVar14 + 1))];
            uVar9 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 5)];
            uVar10 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 6)];
            uVar11 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 7)];
            *puVar12 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14)];
            puVar12[1] = uVar6;
            puVar12[2] = uVar8;
            puVar12[3] = uVar10;
            *puVar19 = uVar5;
            puVar19[1] = uVar7;
            puVar19[2] = uVar9;
            puVar19[3] = uVar11;
            puVar14 = puVar14 + 2;
            puVar12 = puVar12 + 4;
            puVar19 = puVar19 + 4;
          } while ((int)puVar14 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)));
        }
      }
      else {
        (*(int *)(gen_frame + 0x1006c)) = 0;
        if (0 < (int)param_3) {
          do {
            iVar13 = (*(int *)(gen_frame + 0x1006c));
            puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
            if (*(char *)((*(int *)(gen_frame + 0x1006c)) + param_6) == '\0') {
              *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = (*(int *)&gen_a3) * 4;
              uVar5 = puVar14[iVar13];
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = 0;
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = uVar5;
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = 0xced10b;
              F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                      *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                      *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
              iVar13 = (*(int *)(gen_frame + 0x1006c));
            }
            (*(int *)(gen_frame + 0x1006c)) = iVar13 + 1;
          } while (iVar13 + 1 < (int)param_3);
        }
        iVar13 = (int)(0x200000 / ZEXT48(param_3));
        (*(int *)(gen_frame + 0x10054)) = iVar13;
        if (((uint)param_3 & (int)param_3 - 1U) != 0) {
          (*(int *)(gen_frame + 0x10054)) = iVar13 + 1;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10064)) = 0;
          if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)0x0;
            do {
              iVar15 = piVar2[2] * iVar13 + *piVar2;
              uVar17 = (uint)((*(int *)(gen_frame + 0x10054)) * iVar15) >> 0x15;
              (*(uint *)(gen_frame + 0x10040)) = uVar17;
              (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)(iVar15 - uVar17 * (int)param_3);
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) {
                (*(int *)(gen_frame + 0x1003c)) = *((int *)GEN_TOP((*(int *)(in_edi + 0x48) +
                                     (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (*(int *)(in_edi + 0x548) < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xced1c3;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1003c)) + 0x2c + (uVar17 & 0xff) * 4)));
                if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xced1f4;
                    F_00cebbb0(in_edi);
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1003c)) + 0x2c +
                                  ((uVar17 & 3) + 0x80000000 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) * 4)));
                    uVar17 = uVar17 >> 2;
                  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) >> 0x1a) & 0x1f);
                puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10060));
                if (*piVar1 < 0) goto LAB_00ced672;
                puVar14 = (undefined4 *)((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) & 0x3ffffff);
                if (puVar14 == (undefined4 *)0xffffffff) goto LAB_00ced67c;
                *(undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + *(*(int * PTR32 *)(gen_frame + 0x1004c))) =
                     *(undefined4 *)(piVar2[5] + (int)((int)(uintptr_t)puVar14) * 4);
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x1006c)) = 0;
              if (0 < (*(int *)(gen_frame + 0x10048))) {
                do {
                  if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= iVar13) break;
                  iVar15 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                               (uint)*((byte *)GEN_TOP((*(int *)(*(*(int * PTR32 *)(gen_frame + 0x1004c)) +
                                                                       (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) + (*(int *)(gen_frame + 0x1006c))
                                                              ))) * 2) * 2)));
                  if (iVar15 < 0) {
                    iVar13 = piVar2[2] * iVar13 + *piVar2 + piVar2[2];
                    uVar17 = (uint)((*(int *)(gen_frame + 0x10054)) * iVar13) >> 0x15;
                    (*(uint *)(gen_frame + 0x10040)) = uVar17;
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)(iVar13 - uVar17 * (int)param_3);
                  }
                  else {
                    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar15 * 4)));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = piVar2[2];
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = (*(int *)&gen_a3);
                    *(uint * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = &(*(uint *)(gen_frame + 0x10040));
                    *(undefined4 * PTR32 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = &(*(undefined4 * PTR32 *)(gen_frame + 0x10058));
                    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10) = param_3;
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0xc) = puVar14;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 8) = uVar5;
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 4) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3) = 0xced302;
                    uVar17 = F_00cec220(*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 4),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 8),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0xc),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
                    puVar14 = (undefined4 *)0x0;
                    if (uVar17 == 0) goto LAB_00ced67c;
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                  iVar15 = (*(int *)(gen_frame + 0x1006c)) + 1;
                  (*(int *)(gen_frame + 0x1006c)) = iVar15;
                  iVar13 = (*(int *)(gen_frame + 0x10064));
                } while (iVar15 < (*(int *)(gen_frame + 0x10048)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + 1;
            } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
          }
          puVar14 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar14;
        } while ((int)puVar14 < 8);
      }
    }
  }
  else {
    (*(int *)(gen_frame + 0x1006c)) = 0;
    if (0 < (int)param_3) {
      do {
        iVar13 = (*(int *)(gen_frame + 0x1006c));
        puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
        if (*(char *)((*(int *)(gen_frame + 0x1006c)) + param_6) == '\0') {
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = (*(int *)&gen_a3) * 4;
          uVar5 = puVar14[iVar13];
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = 0;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = uVar5;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = 0xced3bb;
          F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                  *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
          iVar13 = (*(int *)(gen_frame + 0x1006c));
        }
        (*(int *)(gen_frame + 0x1006c)) = iVar13 + 1;
      } while (iVar13 + 1 < (int)param_3);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10050));
    do {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)0x0;
      if (0 < (int)puVar14) {
        (*(int *)(gen_frame + 0x10054)) = 0;
        do {
          if (((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) && ((*(int *)(gen_frame + 0x10064)) = 0, 0 < (int)param_3)) {
            do {
              iVar13 = (*(int *)(gen_frame + 0x10064));
              if (*(char *)((*(int *)(gen_frame + 0x10064)) + param_6) == '\0') {
                iVar13 = *(int *)(in_edi + 0x548);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(in_edi + 0x48) + (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (iVar13 < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xced44d;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x10058))[(uVar17 & 0xff) + 0xb];
                if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = 0xced47e;
                    F_00cebbb0(in_edi);
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)
                                 (*(undefined4 * PTR32 *)(gen_frame + 0x10058))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + (uVar17 & 3) + 0x8000000b];
                    uVar17 = uVar17 >> 2;
                  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) >> 0x1a) & 0x1f);
                puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                if (*piVar1 < 0) goto LAB_00ced672;
                puVar14 = (undefined4 *)((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) & 0x3ffffff);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = puVar14;
                if (puVar14 == (undefined4 *)0xffffffff) goto LAB_00ced67c;
                *(undefined4 *)((*(int *)(gen_frame + 0x10054)) + (*(int * PTR32 *)(gen_frame + 0x1004c))[(*(int *)(gen_frame + 0x10064))]) =
                     *(undefined4 *)(piVar2[5] + (int)((int)(uintptr_t)puVar14) * 4);
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x10064)) = iVar13 + 1;
            } while (iVar13 + 1 < (int)param_3);
          }
          (*(int *)(gen_frame + 0x1006c)) = 0;
          if (0 < (*(int *)(gen_frame + 0x10048))) {
            do {
              if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) break;
              (*(int *)(gen_frame + 0x10064)) = 0;
              if (0 < (int)param_3) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x1004c)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10044)));
                do {
                  if ((*(char *)((*(int *)(gen_frame + 0x10064)) + param_6) == '\0') &&
                     (iVar13 = (int)*((short *)GEN_TOP((piVar2[6] +
                                              (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                                   (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10058))
                                                                                    + (int)
                                                  (*(undefined4 * PTR32 *)(gen_frame + 0x10068))) + (*(int *)(gen_frame + 0x10054))))) + (*(int *)(gen_frame + 0x1006c))))) * 2) * 2))),
                     -1 < iVar13)) {
                    iVar15 = piVar2[2] * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060));
                    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar13 * 4)));
                    iVar13 = *piVar2;
                    *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20) = (*(uint *)(gen_frame + 0x10040));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c) = piVar2[2];
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18) = iVar15 + iVar13;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14) = *(*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0xc) = 0xced5f7;
                    uVar17 = F_00cec9f0(uVar5,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x10),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x1c),
                                          *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar3 + 0x20));
                    puVar14 = (undefined4 *)0x0;
                    if (uVar17 == 0) goto LAB_00ced67c;
                  }
                  (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + 1;
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                } while (iVar13 < (int)param_3);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + 1);
              iVar13 = (*(int *)(gen_frame + 0x1006c)) + 1;
              (*(int *)(gen_frame + 0x1006c)) = iVar13;
            } while (iVar13 < (*(int *)(gen_frame + 0x10048)));
          }
          (*(int *)(gen_frame + 0x10054)) = (*(int *)(gen_frame + 0x10054)) + 4;
          puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10050));
        } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
      }
      puVar12 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar12;
    } while ((int)puVar12 < 8);
  }
LAB_00ced67c: ;
  F_00c47745((*(uint *)(gen_frame + 0x1207c)) ^ (uint)(uint)(gen_frame + 0x12080) GEN_EDX_ARG);
  return (uint)puVar14;
LAB_00ced672: ;
  *(undefined4 *)(in_edi + 0x548) = 0;
  goto LAB_00ced67c;
}

/* ref: FUN_00ced6a0 */
GEN_NOFRAME unsigned int F_00ced6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xced6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined8 * param_6 = (undefined8 *)(uintptr_t)gen_a5;
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  float * pfVar13;
  float * pfVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_18;
  undefined8 * local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  pfVar11 = (float *)(in_ecx - 0xc + in_eax * 4);
  pfVar12 = pfVar11 + param_4;
  local_18 = param_3 >> 2;
  if (0 < local_18) {
    pfVar14 = pfVar12 + param_5;
    pfVar13 = pfVar11 + param_5;
    local_14 = param_6 + 4;
    do {
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = *param_6;
      uVar3 = *local_14;
      puVar1 = param_6 + 8;
      fVar19 = *pfVar11 - *pfVar12;
      fVar20 = pfVar11[1] - fVar4;
      fVar21 = pfVar11[2] - fVar5;
      fVar22 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      *pfVar12 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[3] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      param_6 = param_6 + 0x10;
      fVar19 = *pfVar13 - *pfVar14;
      fVar20 = pfVar13[1] - fVar4;
      fVar21 = pfVar13[2] - fVar5;
      fVar22 = pfVar13[3] - fVar6;
      *pfVar13 = *pfVar14 + *pfVar13;
      pfVar13[1] = fVar4 + pfVar13[1];
      pfVar13[2] = fVar5 + pfVar13[2];
      pfVar13[3] = fVar6 + pfVar13[3];
      *pfVar14 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[3] = fVar21 * fVar26 + fVar22 * fVar15;
      uVar2 = *puVar1;
      fVar4 = pfVar12[-3];
      fVar5 = pfVar12[-2];
      fVar6 = pfVar12[-1];
      uVar3 = local_14[8];
      local_14 = local_14 + 0x10;
      fVar19 = pfVar11[-4] - pfVar12[-4];
      fVar20 = pfVar11[-3] - fVar4;
      fVar21 = pfVar11[-2] - fVar5;
      fVar22 = pfVar11[-1] - fVar6;
      pfVar11[-4] = pfVar12[-4] + pfVar11[-4];
      pfVar11[-3] = fVar4 + pfVar11[-3];
      pfVar11[-2] = fVar5 + pfVar11[-2];
      pfVar11[-1] = fVar6 + pfVar11[-1];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      pfVar12[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[-3];
      fVar5 = pfVar14[-2];
      fVar6 = pfVar14[-1];
      fVar19 = pfVar13[-4] - pfVar14[-4];
      fVar20 = pfVar13[-3] - fVar4;
      fVar21 = pfVar13[-2] - fVar5;
      fVar22 = pfVar13[-1] - fVar6;
      pfVar13[-4] = pfVar14[-4] + pfVar13[-4];
      pfVar13[-3] = fVar4 + pfVar13[-3];
      pfVar13[-2] = fVar5 + pfVar13[-2];
      pfVar13[-1] = fVar6 + pfVar13[-1];
      local_18 = local_18 - 1;
      pfVar14[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      pfVar11 = pfVar11 - 8;
      pfVar13 = pfVar13 - 8;
      pfVar12 = pfVar12 - 8;
      pfVar14 = pfVar14 - 8;
    } while (0 < local_18);
  }
  return 0;
}

/* ref: FUN_00ced810 */
GEN_NOFRAME unsigned int GEN_FASTCALL F_00ced810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xced810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  undefined8 * puVar13;
  float * pfVar14;
  float * pfVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  pfVar11 = (float *)(param_1 - 0x1c + param_4 * 4);
  local_14 = param_3 >> 2;
  pfVar12 = pfVar11 + param_5;
  if (0 < local_14) {
    puVar13 = (undefined8 *)((int)param_2 + param_7 * 4);
    do {
      uVar2 = *param_2;
      uVar3 = *puVar13;
      fVar4 = pfVar12[5];
      fVar5 = pfVar12[6];
      fVar6 = pfVar12[7];
      pfVar14 = pfVar11 + param_6 + 4;
      fVar20 = pfVar11[4] - pfVar12[4];
      fVar21 = pfVar11[5] - fVar4;
      fVar22 = pfVar11[6] - fVar5;
      fVar23 = pfVar11[7] - fVar6;
      pfVar11[4] = pfVar12[4] + pfVar11[4];
      pfVar11[5] = fVar4 + pfVar11[5];
      pfVar11[6] = fVar5 + pfVar11[6];
      pfVar11[7] = fVar6 + pfVar11[7];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      pfVar12[4] = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[5] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[6] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[7] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar1 = pfVar12 + param_6 + 4;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar15 = pfVar12 + param_6 + 4;
      fVar20 = *pfVar14 - *pfVar1;
      fVar21 = pfVar14[1] - fVar4;
      fVar22 = pfVar14[2] - fVar5;
      fVar23 = pfVar14[3] - fVar6;
      *pfVar14 = *pfVar1 + *pfVar14;
      pfVar14[1] = fVar4 + pfVar14[1];
      pfVar14[2] = fVar5 + pfVar14[2];
      pfVar14[3] = fVar6 + pfVar14[3];
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = param_2[param_7];
      uVar3 = puVar13[param_7];
      param_2 = param_2 + param_7 * 2;
      puVar13 = puVar13 + param_7 * 2;
      fVar20 = *pfVar11 - *pfVar12;
      fVar21 = pfVar11[1] - fVar4;
      fVar22 = pfVar11[2] - fVar5;
      fVar23 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      pfVar1 = pfVar11 + param_6;
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      *pfVar12 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar14 = pfVar12 + param_6;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      pfVar15 = pfVar12 + param_6;
      fVar20 = *pfVar1 - *pfVar14;
      fVar21 = pfVar1[1] - fVar4;
      fVar22 = pfVar1[2] - fVar5;
      fVar23 = pfVar1[3] - fVar6;
      *pfVar1 = *pfVar14 + *pfVar1;
      pfVar1[1] = fVar4 + pfVar1[1];
      pfVar1[2] = fVar5 + pfVar1[2];
      pfVar1[3] = fVar6 + pfVar1[3];
      local_14 = local_14 - 1;
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar11 = pfVar11 - 8;
      pfVar12 = pfVar12 - 8;
    } while (0 < local_14);
  }
  return 0;
}

/* ref: FUN_00ced9b0 */
GEN_NOFRAME unsigned int F_00ced9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xced9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar1 = *(undefined8 *)((int)in_ecx + in_eax * 4);
  fVar15 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  fVar8 = gen_bits2f((uint)*in_ecx);
  uVar11 = (uint)((ulonglong)*in_ecx >> 0x20);
  fVar22 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar23 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar24 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar25 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  uVar1 = *(undefined8 *)((int)in_ecx + in_eax * 0xc);
  fVar16 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  pfVar5 = (float *)(param_4 - 0x1c + param_5 * 4);
  fVar9 = gen_bits2f((uint)in_ecx[in_eax]);
  uVar11 = (uint)((ulonglong)in_ecx[in_eax] >> 0x20);
  fVar17 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar19 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar20 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar21 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  pfVar6 = pfVar5 + param_6;
  for (iVar7 = param_3; 0 < iVar7; iVar7 = iVar7 - 1) {
    fVar2 = pfVar6[5];
    fVar3 = pfVar6[6];
    fVar4 = pfVar6[7];
    fVar10 = pfVar5[4] - pfVar6[4];
    fVar12 = pfVar5[5] - fVar2;
    fVar13 = pfVar5[6] - fVar3;
    fVar14 = pfVar5[7] - fVar4;
    pfVar5[4] = pfVar6[4] + pfVar5[4];
    pfVar5[5] = fVar2 + pfVar5[5];
    pfVar5[6] = fVar3 + pfVar5[6];
    pfVar5[7] = fVar4 + pfVar5[7];
    pfVar6[4] = fVar12 * fVar22 + fVar10 * fVar15;
    pfVar6[5] = fVar10 * fVar23 + fVar12 * fVar15;
    pfVar6[6] = fVar14 * fVar24 + fVar13 * fVar8;
    pfVar6[7] = fVar13 * fVar25 + fVar14 * fVar8;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    fVar10 = *pfVar5 - *pfVar6;
    fVar12 = pfVar5[1] - fVar2;
    fVar13 = pfVar5[2] - fVar3;
    fVar14 = pfVar5[3] - fVar4;
    *pfVar5 = *pfVar6 + *pfVar5;
    pfVar5[1] = fVar2 + pfVar5[1];
    pfVar5[2] = fVar3 + pfVar5[2];
    pfVar5[3] = fVar4 + pfVar5[3];
    *pfVar6 = fVar12 * fVar17 + fVar10 * fVar16;
    pfVar6[1] = fVar10 * fVar19 + fVar12 * fVar16;
    pfVar6[2] = fVar14 * fVar20 + fVar13 * fVar9;
    pfVar6[3] = fVar13 * fVar21 + fVar14 * fVar9;
    pfVar5 = pfVar5 - param_7;
    pfVar6 = pfVar6 - param_7;
  }
  return 0;
}

/* ref: FUN_00cedaa0 */
GEN_FRAME unsigned int F_00cedaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcedaa0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3 + *in_ecx;
  fVar3 = param_3[1] + in_ecx[1];
  fVar5 = param_3[2] + in_ecx[2];
  fVar6 = param_3[3] + in_ecx[3];
  fVar7 = *in_ecx - *param_3;
  fVar8 = in_ecx[1] - param_3[1];
  fVar9 = in_ecx[2] - param_3[2];
  fVar10 = in_ecx[3] - param_3[3];
  fVar11 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x1130584));
  fVar12 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130588));
  fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x113058c));
  fVar2 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130570));
  fVar4 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x1130574));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130578));
  fVar7 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x113057c));
  in_eax[-3] = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar5;
  in_eax[-2] = fVar11 + fVar6;
  in_eax[-1] = fVar12 + fVar5;
  *in_eax = fVar3 + fVar6;
  in_eax[-7] = fVar2 + fVar9;
  in_eax[-6] = fVar4 + fVar10;
  in_eax[-5] = fVar8 + fVar9;
  in_eax[-4] = fVar7 + fVar10;
  return 0;
}

/* ref: FUN_00cedaf0 */
GEN_FRAME unsigned int F_00cedaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcedaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar4 = *(float *)&REFG(undefined, 0x11305a0);
  uVar1 = param_3 + param_4 * 4;
  uVar7 = uVar1 + in_edx * -0x40;
  fVar2 = *((float *)GEN_TOP((param_5 + (in_eax >> 3) * 4)));
  if (uVar7 < uVar1) {
    pfVar5 = (float *)(uVar1 - 0x3c);
    iVar6 = ((uVar1 - uVar7) - 1 >> 6) + 1;
    do {
      fVar9 = pfVar5[0xe];
      fVar10 = pfVar5[0xf];
      fVar26 = pfVar5[0xc] - pfVar5[4];
      fVar27 = pfVar5[0xd] - pfVar5[5];
      fVar14 = pfVar5[4] + pfVar5[0xc];
      fVar16 = pfVar5[5] + pfVar5[0xd];
      fVar18 = pfVar5[6] + fVar9;
      fVar20 = pfVar5[7] + fVar10;
      uVar8 = (uint)gen_fl2bits(pfVar5[8] - *pfVar5) ^ *(uint *)&REFG(undefined, 0x1130560);
      fVar11 = gen_bits2f((uint)gen_fl2bits(pfVar5[9] - pfVar5[1]) ^ *(uint *)&REFG(undefined, 0x1130564));
      fVar12 = gen_bits2f((uint)gen_fl2bits(pfVar5[10] - pfVar5[2]) ^ *(uint *)&REFG(undefined, 0x1130568));
      fVar13 = gen_bits2f((uint)gen_fl2bits(pfVar5[0xb] - pfVar5[3]) ^ *(uint *)&REFG(undefined, 0x113056c));
      fVar22 = *pfVar5 + pfVar5[8];
      fVar23 = pfVar5[1] + pfVar5[9];
      fVar24 = pfVar5[2] + pfVar5[10];
      fVar25 = pfVar5[3] + pfVar5[0xb];
      fVar15 = fVar22 + fVar14;
      fVar17 = fVar23 + fVar16;
      fVar19 = fVar24 + fVar18;
      fVar21 = fVar25 + fVar20;
      fVar14 = fVar14 - fVar22;
      fVar16 = fVar16 - fVar23;
      fVar18 = fVar18 - fVar24;
      fVar20 = fVar20 - fVar25;
      fVar24 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar25 = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar17 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[0xc] = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar19;
      pfVar5[0xd] = fVar24 + fVar21;
      pfVar5[0xe] = fVar25 + fVar19;
      pfVar5[0xf] = fVar17 + fVar21;
      uVar3 = *(uint *)&REFG(undefined, 0x113059c);
      uVar7 = *(uint *)&REFG(undefined, 0x1130598);
      uVar1 = *(uint *)&REFG(undefined, 0x1130590);
      pfVar5[8] = fVar22 + fVar18;
      pfVar5[9] = fVar23 + fVar20;
      pfVar5[10] = fVar16 + fVar18;
      pfVar5[0xb] = fVar14 + fVar20;
      fVar23 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar11) * fVar2;
      fVar18 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar11) * fVar2;
      fVar19 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x1130558)) + fVar13) * fVar4;
      fVar12 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x113055c)) + fVar12) * fVar4;
      fVar22 = (gen_bits2f((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar26) * fVar2;
      fVar14 = (gen_bits2f((uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar27) * fVar2;
      fVar16 = (gen_bits2f(uVar3 ^ *(uint *)&REFG(undefined, 0x1130558)) + (fVar9 - pfVar5[6])) * fVar4;
      fVar17 = (gen_bits2f(uVar7 ^ *(uint *)&REFG(undefined, 0x113055c)) + (fVar10 - pfVar5[7])) * fVar4;
      fVar9 = fVar23 + fVar22;
      fVar11 = fVar18 + fVar14;
      fVar13 = fVar19 + fVar16;
      fVar15 = fVar12 + fVar17;
      fVar22 = fVar22 - fVar23;
      fVar14 = fVar14 - fVar18;
      fVar16 = fVar16 - fVar19;
      fVar17 = fVar17 - fVar12;
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar18 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar11 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar10 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar12 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[4] = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar13;
      pfVar5[5] = fVar23 + fVar15;
      pfVar5[6] = fVar18 + fVar13;
      pfVar5[7] = fVar11 + fVar15;
      *pfVar5 = fVar10 + fVar16;
      pfVar5[1] = fVar12 + fVar17;
      pfVar5[2] = fVar14 + fVar16;
      pfVar5[3] = fVar22 + fVar17;
      pfVar5 = pfVar5 - 0x10;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00cedc20 */
GEN_FRAME uint GEN_THISCALL F_00cedc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcedc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100a0];
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * puVar5;
  float * pfVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  float * pfVar16;
  float * pfVar17;
  int iVar18;
  float * pfVar19;
  float * pfVar20;
  uint uVar21;
  ushort * puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint * puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  
  uVar48 = *(uint *)&REFG(undefined, 0x113059c);
  uVar46 = *(uint *)&REFG(undefined, 0x1130598);
  uVar44 = *(uint *)&REFG(undefined, 0x1130594);
  uVar42 = *(uint *)&REFG(undefined, 0x1130590);
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(uint *)(gen_frame + 0x10098)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar26 = (int)param_1 >> 1;
  iVar18 = (int)param_1 >> 2;
  (*(uint *)(gen_frame + 0x10084)) = (int)param_1 >> 3;
  (*(int *)(gen_frame + 0x10058)) = iVar26;
  (*(float * PTR32 *)(gen_frame + 0x10074)) = (float *)iVar18;
  ((int *)(gen_frame + 0x1000c))[0xe] = 0xcedc58;
  iVar25 = -(iVar26 * 4 + 0xf);
  pfVar6 = *(float * PTR32 *)(param_2 + 0x400 + param_3 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10070)) = pfVar6;
  (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar6;
  pfVar17 = (float *)((int)this + iVar26 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10060)) = pfVar17;
  pfVar16 = (float *)((int)&(*(int *)(gen_frame + 0x10054)) + iVar25 + 3 & 0xfffffff0);
  pfVar19 = pfVar16 + iVar26 - 4;
  iVar23 = (int)pfVar6 + ((iVar26 * 4 - 0x10) - (int)pfVar19);
  (*(float * PTR32 *)(gen_frame + 0x10064)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x1005c)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x1008c)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = this;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar16;
  (*(int *)(gen_frame + 0x10078)) = iVar23;
  do {
    fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10090));
    fVar32 = (*(float * PTR32 *)(gen_frame + 0x10090))[1];
    fVar35 = (*(float * PTR32 *)(gen_frame + 0x10090))[2];
    fVar38 = (*(float * PTR32 *)(gen_frame + 0x10090))[3];
    pfVar19 = (float *)(iVar23 + (int)(*(float * PTR32 *)(gen_frame + 0x1008c)));
    fVar40 = *pfVar19;
    fVar41 = pfVar19[1];
    fVar43 = pfVar19[2];
    fVar45 = pfVar19[3];
    fVar47 = (*(float * PTR32 *)(gen_frame + 0x10088))[4];
    fVar8 = (*(float * PTR32 *)(gen_frame + 0x10088))[5];
    fVar28 = (*(float * PTR32 *)(gen_frame + 0x10088))[6];
    fVar31 = (*(float * PTR32 *)(gen_frame + 0x10088))[7];
    fVar34 = *(*(float * PTR32 *)(gen_frame + 0x10088));
    fVar37 = (*(float * PTR32 *)(gen_frame + 0x10088))[1];
    fVar9 = (*(float * PTR32 *)(gen_frame + 0x10088))[2];
    fVar10 = (*(float * PTR32 *)(gen_frame + 0x10088))[3];
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (*(float * PTR32 *)(gen_frame + 0x10090)) + 4;
    *(*(float * PTR32 *)(gen_frame + 0x1008c)) = gen_bits2f((uint)gen_fl2bits(fVar35) ^ uVar21) * fVar28 + fVar47 * fVar38;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[1] = gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) * fVar28 + fVar47 * fVar35;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[2] = gen_bits2f((uint)gen_fl2bits(fVar29) ^ uVar14) * fVar9 + fVar34 * fVar32;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[3] = gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) * fVar9 + fVar34 * fVar29;
    (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x1008c)) - 4;
    pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10088)) + 8;
    *(*(float * PTR32 *)(gen_frame + 0x10094)) = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar43) ^ uVar21) * fVar37
                                            + fVar10 * fVar45) ^ uVar42);
    (*(float * PTR32 *)(gen_frame + 0x10094))[1] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar45) ^ uVar24) *
                                              fVar37 + fVar10 * fVar43) ^ uVar44);
    (*(float * PTR32 *)(gen_frame + 0x10094))[2] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar40) ^ uVar14) * fVar8
                                              + fVar31 * fVar41) ^ uVar46);
    (*(float * PTR32 *)(gen_frame + 0x10094))[3] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar41) ^ uVar15) * fVar8
                                              + fVar31 * fVar40) ^ uVar48);
    (*(float * PTR32 *)(gen_frame + 0x10094)) = (*(float * PTR32 *)(gen_frame + 0x10094)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x10088)) = pfVar19;
  } while (pfVar19 != pfVar17);
  pfVar17 = pfVar6 + iVar26 - 8;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar17;
  (*(int *)(gen_frame + 0x10078)) = iVar18 * 4;
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = pfVar16 + iVar18;
  pfVar19 = (float *)(iVar18 * 4 + (int)this);
  (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar19;
  if (pfVar6 <= pfVar17) {
    (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)((int)pfVar16 - (int)this);
    pfVar20 = pfVar19 - iVar18;
    iVar18 = (int)(pfVar16 + iVar18) - (int)pfVar19;
    (*(int *)(gen_frame + 0x10078)) = iVar18;
    do {
      fVar29 = *pfVar17;
      fVar32 = pfVar17[1];
      fVar35 = pfVar17[4];
      fVar38 = pfVar17[5];
      pfVar1 = (float *)(iVar18 + (int)pfVar19);
      fVar40 = pfVar1[1];
      fVar41 = pfVar1[2];
      fVar43 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP((((int)pfVar16 - (int)this) + (int)pfVar20)));
      fVar45 = pfVar2[1];
      fVar47 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar28 = *pfVar1 - *pfVar2;
      fVar31 = fVar40 - fVar45;
      fVar34 = fVar41 - fVar47;
      fVar37 = fVar43 - fVar8;
      *pfVar19 = *pfVar2 + *pfVar1;
      pfVar19[1] = fVar45 + fVar40;
      pfVar19[2] = fVar47 + fVar41;
      pfVar19[3] = fVar8 + fVar43;
      pfVar19 = pfVar19 + 4;
      pfVar17 = pfVar17 - 8;
      (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar19;
      *pfVar20 = fVar31 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar21) + fVar28 * fVar35;
      pfVar20[1] = fVar28 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) + fVar31 * fVar35;
      pfVar20[2] = fVar37 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar14) + fVar34 * fVar29;
      pfVar20[3] = fVar34 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) + fVar37 * fVar29;
      pfVar20 = pfVar20 + 4;
      (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar17;
    } while (pfVar6 <= pfVar17);
  }
  iVar18 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar18 == 0; iVar18 = iVar18 - 1) {
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)iVar18;
  if (param_1 != 0) {
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)(iVar18 + 1);
  }
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = pfVar6;
  uVar21 = -((int)param_1 >> 3);
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = -(int)(*(float * PTR32 *)(gen_frame + 0x10074));
  *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = uVar21;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)uVar21;
  (*(int *)(gen_frame + 0x10078)) = (int)param_1 >> 4;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = (int)param_1 >> 4;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = 0xcede05;
  F_00ced6a0(iVar26 - 1,this,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = 0x10;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = pfVar17;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x20) = -(*(int *)(gen_frame + 0x10078));
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(-(*(int *)(gen_frame + 0x10078))));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x1c) = iVar26 - 1;
  (*(int *)(gen_frame + 0x10078)) = (int)param_1 >> 5;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x18) = (int)param_1 >> 5;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14) = 0xcede2c;
  F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x18),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x1c),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x20),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28));
  pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10088));
  uVar21 = (*(uint *)(gen_frame + 0x10084));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14) = 0x10;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x10) = pfVar19;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0xc) = pfVar17;
  iVar18 = (*(int *)(gen_frame + 0x10078));
  *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 8) = iVar26 + uVar21 * -2 - 1;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 4) = iVar18;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25) = 0xcede50;
  F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 4),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 8),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0xc),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x10),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14));
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10090)) - 4 >> 1;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)0x2;
  (*(int *)(gen_frame + 0x10080)) = iVar18;
  uVar21 = 4;
  if (2 < iVar18) {
    do {
      bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10094));
      iVar18 = (int)param_1 >> (bVar7 + 2 & 0x1f);
      uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      (*(uint *)(gen_frame + 0x10084)) = uVar21;
      (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)(iVar18 >> 1);
      uVar24 = 1 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f);
      (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = (undefined *)uVar24;
      if (0 < (int)uVar21) {
        (*(int *)(gen_frame + 0x10050)) = -iVar18;
        (*(int *)(gen_frame + 0x10068)) = iVar18 * -2;
        (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)(iVar26 - 1);
        (*(int *)(gen_frame + 0x10054)) = -(iVar18 >> 1);
        (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)(uVar24 << 3 | uVar24 >> 0x1d);
        (*(uint *)(gen_frame + 0x10084)) = (uVar21 - 1 >> 1) + 1;
        (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(((int)param_1 >> (bVar7 + 4 & 0x1f))));
        do {
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
          iVar18 = (*(int *)(gen_frame + 0x10050));
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(float * PTR32 *)(gen_frame + 0x10088));
          iVar23 = (*(int *)(gen_frame + 0x10054));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar18;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = iVar23;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = pfVar19;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = pfVar17;
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = 0xcedefe;
          F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
          (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1008c)) + (*(int *)(gen_frame + 0x10068)));
          uVar21 = (*(uint *)(gen_frame + 0x10084)) - 1;
          (*(uint *)(gen_frame + 0x10084)) = uVar21;
        } while (uVar21 != 0);
      }
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10094)) + 1;
      uVar21 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x1006c))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x1006c)) < 0);
      (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)iVar18;
    } while (iVar18 < (*(int *)(gen_frame + 0x10080)));
  }
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10090)) - 7;
  bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10094)) & 0x1f;
  pfVar17 = (float *)(1 << bVar7 | 1U >> 0x20 - bVar7);
  if ((int)(*(float * PTR32 *)(gen_frame + 0x10094)) < iVar18) {
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10094)) + 6);
    (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)(iVar18 - (int)(*(float * PTR32 *)(gen_frame + 0x10094)));
    do {
      uVar24 = (int)param_1 >> ((byte)(*(float * PTR32 *)(gen_frame + 0x10090)) - 4 & 0x1f);
      uVar21 = (int)((int)(uintptr_t)pfVar17) << 3 | (uint)((int)(uintptr_t)pfVar17) >> 0x1d;
      (*(uint *)(gen_frame + 0x10084)) = uVar21;
      iVar18 = (int)uVar24 >> 1;
      (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)(iVar26 - 1);
      (*(int *)(gen_frame + 0x10080)) = iVar18;
      iVar26 = (int)param_1 >> ((byte)(*(float * PTR32 *)(gen_frame + 0x10090)) & 0x1f);
      (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)((int)((int)(uintptr_t)pfVar17) << 1 | (uint)((int)pfVar17 < 0));
      (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = (undefined *)uVar24;
      (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x10070));
      if (0 < iVar26) {
        (*(int *)(gen_frame + 0x10080)) = -iVar18;
        (*(int *)(gen_frame + 0x10068)) = uVar21 << 4;
        do {
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10094));
          iVar18 = (*(int *)(gen_frame + 0x10080));
          *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(undefined * PTR32 *)(gen_frame + 0x1006c));
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar18;
          uVar21 = (*(uint *)(gen_frame + 0x10084));
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = pfVar19;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c));
          *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = this;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = pfVar17;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = 0xcedfac;
          F_00ced9b0(uVar21,pfVar19,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
          (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1008c)) + (*(int *)(gen_frame + 0x10068)));
          (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10094)) - 8);
          iVar26 = iVar26 - 1;
        } while (0 < iVar26);
      }
      (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10090)) + 1);
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x1007c)) - 1;
      (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)iVar18;
      pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
      iVar26 = (*(int *)(gen_frame + 0x10058));
    } while (iVar18 != 0);
  }
  iVar18 = (*(int *)(gen_frame + 0x10078));
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar26 - 1;
  *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = this;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = 0xcedfe9;
  F_00cedaf0(param_1,iVar18,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
  puVar22 = *(ushort * PTR32 *)(param_2 + 0x420 + param_3 * 4);
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064)) + (int)(*(float * PTR32 *)(gen_frame + 0x10074)) - 4;
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17) {
    iVar25 = (int)(*(float * PTR32 *)(gen_frame + 0x1005c)) - (int)pfVar17;
    (*(int *)(gen_frame + 0x10080)) = iVar25;
    do {
      puVar3 = (undefined4 *)((int)this + (uint)*puVar22 * 4);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      fVar29 = gen_bits2f(puVar3[2]);
      fVar32 = gen_bits2f(puVar3[3]);
      puVar3 = (undefined4 *)((int)this + (uint)puVar22[1] * 4);
      uVar13 = *puVar3;
      fVar35 = gen_bits2f(puVar3[2]);
      fVar38 = gen_bits2f(puVar3[3]);
      puVar4 = (undefined4 *)(iVar25 + (int)pfVar17);
      *puVar4 = puVar3[1];
      puVar4[1] = uVar13;
      puVar4[2] = uVar12;
      puVar4[3] = uVar11;
      *pfVar17 = fVar38;
      pfVar17[1] = fVar35;
      pfVar17[2] = fVar32;
      pfVar17[3] = fVar29;
      pfVar17 = pfVar17 - 4;
      puVar22 = puVar22 + 2;
    } while ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)*(uint * PTR32 *)(param_2 + 0x410 + param_3 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10074)) = (*(float * PTR32 *)(gen_frame + 0x10064));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1005c));
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) < (*(float * PTR32 *)(gen_frame + 0x1005c))) {
    do {
      uVar42 = (uint)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x1008c)));
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 1;
      puVar27 = (uint *)((*(float * PTR32 *)(gen_frame + 0x1008c)) + 2);
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 3;
      (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 4;
      fVar41 = *(*(float * PTR32 *)(gen_frame + 0x10074)) + gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar43 = (*(float * PTR32 *)(gen_frame + 0x10074))[1] + gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar45 = (*(float * PTR32 *)(gen_frame + 0x10074))[2] + gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar47 = (*(float * PTR32 *)(gen_frame + 0x10074))[3] + gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10074)) - gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar32 = (*(float * PTR32 *)(gen_frame + 0x10074))[1] - gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar35 = (*(float * PTR32 *)(gen_frame + 0x10074))[2] - gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar38 = (*(float * PTR32 *)(gen_frame + 0x10074))[3] - gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar40 = fVar32 * gen_bits2f(uVar42 ^ uVar21) + fVar29 * *pfVar19;
      fVar29 = fVar29 * gen_bits2f(uVar42 ^ uVar24) + fVar32 * *pfVar19;
      fVar32 = fVar38 * gen_bits2f(*puVar27 ^ uVar14) + fVar35 * *pfVar6;
      fVar35 = fVar35 * gen_bits2f(*puVar27 ^ uVar15) + fVar38 * *pfVar6;
      *(*(float * PTR32 *)(gen_frame + 0x10074)) = fVar40 + fVar41;
      (*(float * PTR32 *)(gen_frame + 0x10074))[1] = fVar29 + fVar43;
      (*(float * PTR32 *)(gen_frame + 0x10074))[2] = fVar32 + fVar45;
      (*(float * PTR32 *)(gen_frame + 0x10074))[3] = fVar35 + fVar47;
      *pfVar17 = gen_bits2f((uint)gen_fl2bits(fVar45 - fVar32) ^ uVar14);
      pfVar17[1] = gen_bits2f((uint)gen_fl2bits(fVar47 - fVar35) ^ uVar15);
      pfVar17[2] = gen_bits2f((uint)gen_fl2bits(fVar41 - fVar40) ^ uVar21);
      pfVar17[3] = gen_bits2f((uint)gen_fl2bits(fVar43 - fVar29) ^ uVar24);
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10074)) + 4;
      pfVar17 = pfVar17 - 4;
      (*(float * PTR32 *)(gen_frame + 0x10074)) = pfVar19;
    } while (pfVar19 < pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113059c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130598);
  uVar24 = *(uint *)&REFG(undefined, 0x1130594);
  uVar21 = *(uint *)&REFG(undefined, 0x1130590);
  pfVar19 = ((float *)GEN_TOP((*(int *)(param_2 + 0x408 + param_3 * 4) + iVar26 * 4 - 0x20)));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064)) + iVar26 - 8;
  iVar25 = (int)this + param_1 * 4 - 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = this;
  puVar27 = (uint *)((int)this + iVar26 * 4 - 0x10);
  (*(int *)(gen_frame + 0x10080)) = iVar25;
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17) {
    iVar26 = (int)(*(float * PTR32 *)(gen_frame + 0x10060)) - (int)this;
    iVar25 = iVar25 - (int)puVar27;
    (*(int *)(gen_frame + 0x10080)) = iVar25;
    (*(int *)(gen_frame + 0x10068)) = iVar26;
    do {
      fVar29 = *pfVar19;
      fVar32 = pfVar19[1];
      fVar35 = pfVar19[2];
      fVar38 = pfVar19[3];
      fVar40 = pfVar19[4];
      fVar41 = pfVar19[5];
      fVar43 = pfVar19[6];
      fVar45 = pfVar19[7];
      fVar47 = pfVar17[4];
      fVar8 = pfVar17[5];
      fVar28 = pfVar17[6];
      fVar31 = pfVar17[7];
      fVar34 = *pfVar17;
      fVar37 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      fVar30 = fVar28 * fVar45 - fVar31 * fVar43;
      fVar33 = fVar47 * fVar41 - fVar8 * fVar40;
      fVar36 = fVar9 * fVar38 - fVar10 * fVar35;
      fVar39 = fVar34 * fVar32 - fVar37 * fVar29;
      *(float *)this = fVar30;
      *(float *)((int)this + 4) = fVar33;
      *(float *)((int)this + 8) = fVar36;
      *(float *)((int)this + 0xc) = fVar39;
      uVar42 = (uint)gen_fl2bits(fVar28 * fVar43 + fVar31 * fVar45) ^ uVar21;
      uVar44 = (uint)gen_fl2bits(fVar47 * fVar40 + fVar8 * fVar41) ^ uVar24;
      uVar46 = (uint)gen_fl2bits(fVar9 * fVar35 + fVar10 * fVar38) ^ uVar14;
      uVar48 = (uint)gen_fl2bits(fVar34 * fVar29 + fVar37 * fVar32) ^ uVar15;
      *puVar27 = (uint)gen_fl2bits(fVar39) ^ uVar15;
      puVar27[1] = (uint)gen_fl2bits(fVar36) ^ uVar14;
      puVar27[2] = (uint)gen_fl2bits(fVar33) ^ uVar24;
      puVar27[3] = (uint)gen_fl2bits(fVar30) ^ uVar21;
      puVar5 = (uint *)(iVar26 + (int)this);
      *puVar5 = uVar42;
      puVar5[1] = uVar44;
      puVar5[2] = uVar46;
      puVar5[3] = uVar48;
      puVar5 = (uint *)(iVar25 + (int)puVar27);
      *puVar5 = uVar48;
      puVar5[1] = uVar46;
      puVar5[2] = uVar44;
      puVar5[3] = uVar42;
      pfVar17 = pfVar17 - 8;
      pfVar19 = pfVar19 - 8;
      this = (undefined *)((int)this + 0x10);
      puVar27 = puVar27 - 4;
    } while ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17);
  }
  F_00c47745((*(uint *)(gen_frame + 0x10098)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)pfVar17;
}

/* ref: FUN_00cee1d0 */
GEN_FRAME uint F_00cee1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcee1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  short * param_6 = (short *)(uintptr_t)gen_a5;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_8;
  
  iVar1 = in_eax >> 1;
  uVar2 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*(int *)(param_3 + 4) + 2 + param_4 * 3))) + 9 + param_3)));
  if (*(short *)(in_ecx + 0x50 + uVar2 * 2) == 0) {
    *(undefined4 *)(in_ecx + 0x38) = 0x15;
    if (*(int *)(in_ecx + 0x34) == 0) {
      *(undefined4 *)(in_ecx + 0x38) = 0x15;
    }
    return 0;
  }
  iVar3 = uVar2 * 0xa24 + *(int *)(in_ecx + 0xd0);
  iVar10 = (int)*param_6 * (uint)*(byte *)(iVar3 + 0xa1c);
  uVar2 = 0;
  param_3 = 0;
  local_8 = 1;
  uVar9 = uVar2;
  iVar11 = iVar10;
  if (1 < *(int *)(iVar3 + 0xa20)) {
    do {
      uVar12 = (uint)*(byte *)(iVar3 + 0x346 + local_8);
      uVar2 = uVar9;
      iVar10 = iVar11;
      if (-1 < param_6[uVar12]) {
        uVar2 = (uint)*(ushort *)(iVar3 + 0x152 + uVar12 * 2);
        iVar10 = (int)param_6[uVar12] * (uint)*(byte *)(iVar3 + 0xa1c);
        uVar9 = uVar2 - uVar9;
        iVar4 = iVar10 - iVar11;
        if (iVar4 < 0) {
          uVar5 = (uint)(iVar4 * -0x1000000) / uVar9;
          uVar12 = iVar11 * -0x1000000;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *(float *)(param_5 - 4 + uVar9 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*(float *)(param_5 + param_3 * 4))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              param_4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + param_4 * 4;
              pfVar6 = (float *)(param_5 + 8 + iVar11);
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) +
                                                        (uVar12 + uVar5 >> 0x18) * -4) *
                                    (float10)pfVar6[-2])));
                uVar8 = uVar7 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar7 >> 0x18) * -4) *
                                    (float10)pfVar6[-1])));
                uVar12 = uVar8 + uVar5;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar8 >> 0x18) * -4) *
                                 (float10)*pfVar6)));
                param_4 = param_4 - 1;
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar12 >> 0x18) * -4) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (param_4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + 1;
              *(float *)(param_5 - 4 + uVar9 * 4) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar12 >> 0x18) * -4) *
                          (float10)*(float *)(param_5 + iVar11))));
            }
          }
        }
        else {
          uVar5 = (uint)(iVar4 * 0x1000000) / uVar9;
          uVar12 = iVar11 << 0x18;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *(float *)(param_5 - 4 + uVar9 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*(float *)(param_5 + param_3 * 4))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              iVar4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + iVar4 * 4;
              pfVar6 = (float *)(param_5 + 8 + iVar11);
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                uVar8 = uVar7 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) +
                                                        (uVar12 + uVar5 >> 0x18) * 4) *
                                    (float10)pfVar6[-2])));
                uVar12 = uVar8 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar7 >> 0x18) * 4) *
                                    (float10)pfVar6[-1])));
                iVar4 = iVar4 - 1;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                                 (float10)*pfVar6)));
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (iVar4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              uVar9 = uVar9 + 1;
              *(float *)(param_5 - 4 + uVar9 * 4) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                          (float10)*(float *)(param_5 - 4 + uVar9 * 4))));
            }
          }
        }
      }
      local_8 = local_8 + 1;
      uVar9 = uVar2;
      iVar11 = iVar10;
    } while (local_8 < *(int *)(iVar3 + 0xa20));
  }
  if ((int)uVar2 < iVar1) {
    if (3 < (int)(iVar1 - uVar2)) {
      iVar3 = ((iVar1 - uVar2) - 4 >> 2) + 1;
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + iVar3 * 4;
      pfVar6 = (float *)(param_5 + 8 + iVar11);
      do {
        iVar3 = iVar3 - 1;
        pfVar6[-2] = ((float)GEN_TOF(((float10)pfVar6[-2] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[-1] = ((float)GEN_TOF(((float10)pfVar6[-1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        *pfVar6 = ((float)GEN_TOF(((float10)*pfVar6 * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[1] = ((float)GEN_TOF(((float10)pfVar6[1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6 = pfVar6 + 4;
      } while (iVar3 != 0);
    }
    while ((int)uVar2 < iVar1) {
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(float *)(param_5 - 4 + uVar2 * 4) =
           ((float)GEN_TOF(((float10)*(float *)(param_5 + iVar11) *
                  (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
    }
  }
  return 1;
}

/* ref: FUN_00cee500 */
GEN_FRAME uint GEN_FASTCALL F_00cee500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcee500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x9b0];
  int * piVar1;
  float * pfVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort * puVar12;
  uint uVar13;
  int iVar14;
  byte * pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte * pbVar19;
  float * pfVar20;
  byte * pbVar21;
  byte * pbVar22;
  undefined2 uVar23;
  undefined2 * puVar24;
  undefined4 * puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  
  (*(uint *)(gen_frame + 0x9a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9ac);
  (*(int * PTR32 *)(gen_frame + 0x54)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x80)) = param_2;
  *(undefined4 *)(param_3 + 0x5b8) = 0;
  *(undefined4 *)(param_3 + 0x5b4) = 0;
  if ((*(int *)(param_3 + 0x34) != 0) || (uVar13 = F_00ceb8d0(param_3), uVar13 == 0)) {
LAB_00cee56a: ;
    F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac) GEN_EDX_ARG);
    return 0;
  }
  uVar13 = F_00cebad0(param_3,1);
  if (uVar13 != 0) {
    *(undefined4 *)(param_3 + 0x38) = 0x23;
    if (*(int *)(param_3 + 0x34) == 0) {
      *(undefined4 *)(param_3 + 0x38) = 0x23;
    }
    goto LAB_00cee56a;
  }
  uVar13 = *(int *)(param_3 + 0x164) - 1;
  iVar14 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar14 == 0; iVar14 = iVar14 - 1) {
    }
  }
  if (uVar13 != 0) {
    iVar14 = iVar14 + 1;
  }
  uVar13 = F_00cebad0(param_3,iVar14);
  if ((uVar13 == 0xffffffff) || (*(int *)(param_3 + 0x164) <= (int)uVar13)) goto LAB_00cee56a;
  iVar14 = uVar13 * 3 + 0xb4;
  (*(byte * PTR32 *)(gen_frame + 0x5c)) = (byte *)(param_3 + iVar14 * 2);
  if (*(char *)(param_3 + iVar14 * 2) == '\0') {
    iVar14 = *(int *)(param_3 + 0x3c);
    pbVar15 = (byte *)0x0;
    (*(uint *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x74)) = iVar14;
  }
  else {
    iVar14 = *(int *)(param_3 + 0x40);
    (*(int *)(gen_frame + 0x74)) = iVar14;
    pbVar15 = (byte *)F_00cebad0(param_3,1);
    (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    uVar13 = F_00cebad0(param_3,1);
    (*(uint *)(gen_frame + 0x7c)) = uVar13;
    pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x84));
  }
  iVar16 = iVar14 >> 1;
  (*(int *)(gen_frame + 0x78)) = iVar16;
  if ((*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0) || (pbVar15 != (byte *)0x0)) {
    (*(int *)(gen_frame + 0x64)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x64)) = iVar14 - *(int *)(param_3 + 0x3c) >> 2;
  }
  if ((*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0) || ((*(uint *)(gen_frame + 0x7c)) != 0)) {
    (*(uint *)(gen_frame + 0x7c)) = iVar16;
    (*(int *)(gen_frame + 0x60)) = iVar14;
  }
  else {
    iVar16 = iVar14 * 3 - *(int *)(param_3 + 0x3c) >> 2;
    (*(uint *)(gen_frame + 0x7c)) = iVar16;
    (*(int *)(gen_frame + 0x60)) = *(int *)(param_3 + 0x3c) + iVar14 * 3 >> 2;
  }
  *(*(int * PTR32 *)(gen_frame + 0x80)) = iVar16;
  *(*(int * PTR32 *)(gen_frame + 0x50)) = (*(int *)(gen_frame + 0x64));
  (*(ushort * PTR32 *)(gen_frame + 0x94)) = ((ushort *)GEN_TOP((*(int *)(param_3 + 0x160) + (uint)(*(byte * PTR32 *)(gen_frame + 0x5c))[1] * 0x28)));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = iVar16;
  if (0 < *(int *)(param_3 + 8)) {
    (*(int *)(gen_frame + 0x58)) = 0;
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x3b0);
    do {
      ((int *)(gen_frame + 0x4a8))[(int)((*(uint *)(gen_frame + 0xa4)))] = 0;
      uVar13 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2) + 2 + (*(int *)(gen_frame + 0x58))))) + 9 +
                              (int)(*(ushort * PTR32 *)(gen_frame + 0x94)))));
      if (*(short *)(param_3 + 0x50 + uVar13 * 2) == 0) {
        *(undefined4 *)(param_3 + 0x38) = 0x15;
        if (*(int *)(param_3 + 0x34) == 0) {
          *(undefined4 *)(param_3 + 0x38) = 0x15;
        }
        F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac) GEN_EDX_ARG);
        return 0;
      }
      (*(byte * PTR32 *)(gen_frame + 0x8c)) = ((byte *)GEN_TOP((uVar13 * 0xa24 + *(int *)(param_3 + 0xd0))));
      uVar13 = F_00cebad0(param_3,1);
      if (uVar13 == 0) {
LAB_00ceeb8c: ;
        ((int *)(gen_frame + 0x4a8))[(int)((*(uint *)(gen_frame + 0xa4)))] = 1;
      }
      else {
        pbVar15 = *(byte * PTR32 *)(&REFG(undefined1, 0x134fbc4) + (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[0xa1c] * 4);
        puVar24 = (undefined2 *)*(*(int * PTR32 *)(gen_frame + 0xa0));
        (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
        iVar14 = 0x1f;
        if (pbVar15 != (byte *)0x0) {
          for (; (uint)((int)(uintptr_t)pbVar15) >> iVar14 == 0; iVar14 = iVar14 - 1) {
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x2;
        (*(undefined2 * PTR32 *)(gen_frame + 0x88)) = puVar24;
        if (pbVar15 != (byte *)0x0) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 - 1);
        *puVar24 = (short)uVar13;
        iVar14 = 0x1f;
        if ((*(byte * PTR32 *)(gen_frame + 0x84)) != (byte *)0x0) {
          for (; (uint)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x84))) >> iVar14 == 0; iVar14 = iVar14 - 1) {
          }
        }
        if ((*(byte * PTR32 *)(gen_frame + 0x84)) != (byte *)0x0) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 - 1);
        puVar24[1] = (short)uVar13;
        (*(int *)(gen_frame + 0x9c)) = 0;
        if (*(*(byte * PTR32 *)(gen_frame + 0x8c)) != 0) {
          do {
            uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[(*(int *)(gen_frame + 0x9c)) + 1];
            bVar3 = (*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x31];
            (*(byte * PTR32 *)(gen_frame + 0x70)) = (byte *)(uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x21];
            (*(uint *)(gen_frame + 0x68)) = uVar13;
            (*(uint *)(gen_frame + 0x4c)) = (uint)bVar3;
            (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)0x0;
            (*(uint *)(gen_frame + 0x6c)) = (1 << (bVar3 & 0x1f)) - 1;
            if (bVar3 != 0) {
              (*(byte * PTR32 *)(gen_frame + 0x98)) = *((byte * PTR32 *)GEN_TOP((*(int *)(param_3 + 0x48) + (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x41] * 4)));
              if (*(int *)(param_3 + 0x548) < 8) {
                F_00cebbb0(param_3);
              }
              uVar13 = *(uint *)(param_3 + 0x544);
              uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x98)) + (uVar13 & 0xff) * 4 + 0x2c)));
              if ((int)uVar18 < 0) {
                if (*(int *)(param_3 + 0x548) < 0x19) {
                  F_00cebbb0(param_3);
                }
                uVar13 = *(uint *)(param_3 + 0x544);
                uVar17 = uVar13 >> 8;
                do {
                  uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x98)) + ((uVar17 & 3) + 0x80000000 + uVar18) * 4 + 0x2c)));
                  uVar17 = uVar17 >> 2;
                } while ((int)uVar18 < 0);
              }
              piVar1 = (int *)(param_3 + 0x548);
              *piVar1 = *piVar1 - ((int)uVar18 >> 0x1a);
              *(uint *)(param_3 + 0x544) = uVar13 >> ((byte)((int)uVar18 >> 0x1a) & 0x1f);
              if (*piVar1 < 0) {
                *(undefined4 *)(param_3 + 0x548) = 0;
                (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)0xffffffff;
              }
              else {
                (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)(uVar18 & 0x3ffffff);
              }
            }
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x70));
            if (0 < (int)(*(byte * PTR32 *)(gen_frame + 0x70))) {
              (*(byte * PTR32 *)(gen_frame + 0x70)) = (byte *)((*(uint *)(gen_frame + 0x68)) * 8);
              (*(byte * PTR32 *)(gen_frame + 0x98)) = pbVar15;
              do {
                uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x90)) & (*(uint *)(gen_frame + 0x6c));
                uVar23 = 0;
                (*(byte * PTR32 *)(gen_frame + 0x90)) = ((byte *)GEN_TOP(((int)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x90))) >> ((byte)(*(uint *)(gen_frame + 0x4c)) & 0x1f))));
                if (-1 < *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + (int)((*(byte * PTR32 *)(gen_frame + 0x70)) + uVar13) * 2 + 0x52)))) {
                  (*(uint *)(gen_frame + 0x68)) = *((uint *)GEN_TOP((*(int *)(param_3 + 0x48) +
                                       *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + (int)((*(byte * PTR32 *)(gen_frame + 0x70)) + uVar13) * 2 + 0x52)))
                                       * 4)));
                  if (*(int *)(param_3 + 0x548) < 8) {
                    F_00cebbb0(param_3);
                  }
                  uVar13 = *(uint *)(param_3 + 0x544);
                  iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x68)) + 0x2c + (uVar13 & 0xff) * 4)));
                  if (iVar14 < 0) {
                    if (*(int *)(param_3 + 0x548) < 0x19) {
                      F_00cebbb0(param_3);
                    }
                    uVar13 = *(uint *)(param_3 + 0x544);
                    uVar18 = uVar13 >> 8;
                    do {
                      iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x68)) + 0x2c + ((uVar18 & 3) + 0x80000000 + iVar14) * 4)))
                      ;
                      uVar18 = uVar18 >> 2;
                    } while (iVar14 < 0);
                  }
                  piVar1 = (int *)(param_3 + 0x548);
                  *piVar1 = *piVar1 - (iVar14 >> 0x1a);
                  *(uint *)(param_3 + 0x544) = uVar13 >> ((byte)(iVar14 >> 0x1a) & 0x1f);
                  if (*piVar1 < 0) {
                    *(undefined4 *)(param_3 + 0x548) = 0;
                    uVar23 = 0xffff;
                  }
                  else {
                    uVar23 = (undefined2)iVar14;
                  }
                }
                (*(undefined2 * PTR32 *)(gen_frame + 0x88))[(int)(*(int * PTR32 *)(gen_frame + 0x80))] = uVar23;
                pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x98)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x98)) = pbVar15;
                (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x80)) + 1);
              } while (pbVar15 != (byte *)0x0);
            }
            iVar14 = (*(int *)(gen_frame + 0x9c)) + 1;
            (*(int *)(gen_frame + 0x9c)) = iVar14;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x88));
          } while (iVar14 < (int)(uint)*(*(byte * PTR32 *)(gen_frame + 0x8c)));
        }
        if (*(int *)(param_3 + 0x548) == -1) goto LAB_00ceeb8c;
        ((char *)(gen_frame + 0x8a8))[0] = '\x01';
        ((char *)(gen_frame + 0x8a8))[1] = '\x01';
        (*(int *)(gen_frame + 0x9c)) = 2;
        if (2 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20)) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x8c)) + 0x445;
          (*(byte * PTR32 *)(gen_frame + 0x98)) = (*(byte * PTR32 *)(gen_frame + 0x8c)) + 0x63c;
          (*(byte * PTR32 *)(gen_frame + 0x90)) = pbVar15;
          do {
            uVar13 = (uint)pbVar15[-1];
            pbVar22 = (byte *)(int)(short)puVar24[uVar13];
            (*(uint *)(gen_frame + 0x6c)) = uVar13;
            (*(byte * PTR32 *)(gen_frame + 0x70)) = pbVar22;
            uVar18 = (int)(short)puVar24[*pbVar15] - (int)((int)(uintptr_t)pbVar22) >> 0x1f;
            pbVar22 = pbVar22 + (((((int)(short)puVar24[*pbVar15] - (int)pbVar22 ^ uVar18) - uVar18)
                                  * ((uint)*(ushort *)(pbVar15 - 0x2ef) -
                                    (uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + uVar13 * 2 + 0x152)) *
                                  *(int *)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x98))) >> 0x15 ^ uVar18) - uVar18);
            pbVar21 = (byte *)(int)(short)(*(undefined2 * PTR32 *)(gen_frame + 0x88))[(*(int *)(gen_frame + 0x9c))];
            ((char *)(gen_frame + 0x8a8))[(int)((*(int *)(gen_frame + 0x9c)))] = '\0';
            pbVar19 = pbVar22;
            if (pbVar21 != (byte *)0x0) {
              ((char *)(gen_frame + 0x8a8))[(int)((*(int *)(gen_frame + 0x9c)))] = '\x01';
              ((char *)(gen_frame + 0x8a8))[(int)(*pbVar15)] = '\x01';
              ((char *)(gen_frame + 0x8a8))[(int)(pbVar15[-1])] = '\x01';
              uVar13 = (int)(*(byte * PTR32 *)(gen_frame + 0x84)) - (int)pbVar22;
              (*(uint *)(gen_frame + 0x6c)) = uVar13;
              if ((int)pbVar22 < (int)uVar13) {
                pbVar19 = pbVar21;
                if ((int)pbVar21 < (int)((int)(uintptr_t)pbVar22) * 2) {
LAB_00ceeaf4: ;
                  pbVar19 = pbVar22 + (-((uint)pbVar21 & 1) ^ (int)((int)(uintptr_t)pbVar21) >> 1);
                }
              }
              else {
                if ((int)pbVar21 < (int)(uVar13 * 2)) goto LAB_00ceeaf4;
                pbVar19 = pbVar22 + (uVar13 - (int)pbVar21) - 1;
              }
            }
            (*(byte * PTR32 *)(gen_frame + 0x98)) = (*(byte * PTR32 *)(gen_frame + 0x98)) + 4;
            (*(undefined2 * PTR32 *)(gen_frame + 0x88))[(*(int *)(gen_frame + 0x9c))] = (short)pbVar19;
            iVar14 = (*(int *)(gen_frame + 0x9c)) + 1;
            pbVar15 = pbVar15 + 2;
            (*(int *)(gen_frame + 0x9c)) = iVar14;
            (*(byte * PTR32 *)(gen_frame + 0x90)) = pbVar15;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x88));
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20));
        }
        iVar14 = 0;
        if (0 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20)) {
          do {
            if (((char *)(gen_frame + 0x8a8))[(int)(iVar14)] == '\0') {
              puVar24[iVar14] = 0xffff;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20));
        }
      }
      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 3;
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
      iVar14 = (*(uint *)(gen_frame + 0xa4)) + 1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x94));
  F_00c46aa0(((int *)(gen_frame + 0xa8)),((int *)(gen_frame + 0x4a8)),*(int *)(param_3 + 8) * 4);
  if ((int *)(uint)*puVar12 != (int *)0x0) {
    iVar14 = 0;
    pbVar15 = ((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1)));
    (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)(uint)*puVar12;
    do {
      if ((((int *)(gen_frame + 0x4a8))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14))))] == 0) || (((int *)(gen_frame + 0x4a8))[(int)(*pbVar15)] == 0))
      {
        bVar3 = *((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14)));
        ((int *)(gen_frame + 0x4a8))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1 + iVar14))))] = 0;
        ((int *)(gen_frame + 0x4a8))[(int)(bVar3)] = 0;
      }
      pbVar15 = pbVar15 + 3;
      iVar14 = iVar14 + 3;
      piVar1 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x80)) - 1);
      (*(int * PTR32 *)(gen_frame + 0x80)) = piVar1;
      (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    } while (piVar1 != (int *)0x0);
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if ((char)(*(ushort * PTR32 *)(gen_frame + 0x94))[4] != '\0') {
    do {
      iVar14 = 0;
      (*(int *)(gen_frame + 0x9c)) = 0;
      if (0 < *(int *)(param_3 + 8)) {
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x2ec);
        pbVar15 = ((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2) + 2)));
        do {
          if (*pbVar15 == (*(uint *)(gen_frame + 0xa4))) {
            iVar16 = 0;
            if (((int *)(gen_frame + 0x4a8))[(int)((*(int *)(gen_frame + 0x9c)))] == 0) {
              ((char *)(gen_frame + 0x8a8))[(int)(iVar14)] = '\0';
              iVar16 = *(*(int * PTR32 *)(gen_frame + 0xa0));
            }
            else {
              ((char *)(gen_frame + 0x8a8))[(int)(iVar14)] = '\x01';
            }
            ((int *)(gen_frame + 0xc))[(int)(iVar14)] = iVar16;
            iVar14 = iVar14 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
          iVar16 = (*(int *)(gen_frame + 0x9c)) + 1;
          pbVar15 = pbVar15 + 3;
          (*(int *)(gen_frame + 0x9c)) = iVar16;
        } while (iVar16 < *(int *)(param_3 + 8));
      }
      uVar13 = (*(uint *)(gen_frame + 0xa4));
      F_00cecd50(param_3,((int *)(gen_frame + 0xc)),iVar14,(*(int *)(gen_frame + 0x78)),
                   (uint)*(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x94)) + (*(uint *)(gen_frame + 0xa4)) + 0x18),((char *)(gen_frame + 0x8a8)));
      (*(uint *)(gen_frame + 0xa4)) = uVar13 + 1;
    } while ((int)(uVar13 + 1) < (int)(uint)(byte)(*(ushort * PTR32 *)(gen_frame + 0x94))[4]);
  }
  fVar11 = *(float *)&REFG(undefined, 0x113059c);
  fVar10 = *(float *)&REFG(undefined, 0x1130598);
  fVar9 = *(float *)&REFG(undefined, 0x1130594);
  fVar8 = *(float *)&REFG(undefined, 0x1130590);
  iVar14 = *(*(ushort * PTR32 *)(gen_frame + 0x94)) - 1;
  (*(uint *)(gen_frame + 0xa4)) = iVar14;
  if (-1 < iVar14) {
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(iVar14 * 3);
    do {
      pfVar20 = *((float * PTR32 *)GEN_TOP((param_3 + 0x2ec + (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa0)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2)))) * 4)));
      if (0 < (*(int *)(gen_frame + 0x78))) {
        iVar16 = *((int *)GEN_TOP((param_3 + 0x2ec +
                         (uint)(((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa0)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2)))))[1] * 4))) -
                 (int)pfVar20;
        iVar14 = ((*(int *)(gen_frame + 0x78)) - 1U >> 2) + 1;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar6 = pfVar20[2];
          fVar7 = pfVar20[3];
          pfVar2 = (float *)(iVar16 + (int)pfVar20);
          uVar13 = -(uint)(fVar8 < *pfVar2);
          uVar18 = -(uint)(fVar9 < pfVar2[1]);
          uVar17 = -(uint)(fVar10 < pfVar2[2]);
          uVar26 = -(uint)(fVar11 < pfVar2[3]);
          uVar27 = -(uint)(fVar8 < fVar4) & (uint)gen_fl2bits(fVar8) ^ (uint)gen_fl2bits(*pfVar2);
          uVar28 = -(uint)(fVar9 < fVar5) & (uint)gen_fl2bits(fVar9) ^ (uint)gen_fl2bits(pfVar2[1]);
          uVar29 = -(uint)(fVar10 < fVar6) & (uint)gen_fl2bits(fVar10) ^
                   (uint)gen_fl2bits(pfVar2[2]);
          uVar30 = -(uint)(fVar11 < fVar7) & (uint)gen_fl2bits(fVar11) ^
                   (uint)gen_fl2bits(pfVar2[3]);
          pfVar2 = (float *)(iVar16 + (int)pfVar20);
          *pfVar2 = gen_bits2f(uVar13 & uVar27) + fVar4;
          pfVar2[1] = gen_bits2f(uVar18 & uVar28) + fVar5;
          pfVar2[2] = gen_bits2f(uVar17 & uVar29) + fVar6;
          pfVar2[3] = gen_bits2f(uVar26 & uVar30) + fVar7;
          *pfVar20 = fVar4 - gen_bits2f(~uVar13 & uVar27);
          pfVar20[1] = fVar5 - gen_bits2f(~uVar18 & uVar28);
          pfVar20[2] = fVar6 - gen_bits2f(~uVar17 & uVar29);
          pfVar20[3] = fVar7 - gen_bits2f(~uVar26 & uVar30);
          pfVar20 = pfVar20 + 4;
          iVar14 = iVar14 - 1;
        } while (iVar14 != 0);
      }
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xa0)) - 3);
      iVar14 = (*(uint *)(gen_frame + 0xa4)) - 1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (-1 < iVar14);
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (0 < *(int *)(param_3 + 8)) {
    puVar25 = (undefined4 *)(param_3 + 0x2ec);
    do {
      if (((int *)(gen_frame + 0xa8))[(int)((*(uint *)(gen_frame + 0xa4)))] == 0) {
        F_00cee1d0((*(int *)(gen_frame + 0x74)),param_3,(*(ushort * PTR32 *)(gen_frame + 0x94)),(*(uint *)(gen_frame + 0xa4)),*puVar25,puVar25[0x31]);
      }
      else {
        F_00c48350((undefined *)*puVar25,0,(*(int *)(gen_frame + 0x78)) * 4);
      }
      iVar14 = (*(uint *)(gen_frame + 0xa4)) + 1;
      puVar25 = puVar25 + 1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  iVar14 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x2ec);
    do {
      F_00cedc20((undefined *)*(*(int * PTR32 *)(gen_frame + 0xa0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x74)),param_3,(uint)*(*(byte * PTR32 *)(gen_frame + 0x5c)));
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  do {
    if ((*(char *)(param_3 + 0x534) == '\0') &&
       ((*(int *)(param_3 + 0x53c) != 0 || (uVar13 = F_00ceb960(param_3), uVar13 == 0)))) break;
    *(char *)(param_3 + 0x534) = *(char *)(param_3 + 0x534) - 1;
    bVar3 = **(byte * PTR32 *)(param_3 + 0x10);
    *(byte * PTR32 *)(param_3 + 0x10) = *(byte * PTR32 *)(param_3 + 0x10) + 1;
  } while (bVar3 != 0xffffffff);
  iVar14 = (*(int *)(gen_frame + 0x64));
  if (*(char *)(param_3 + 0x535) == '\0') {
    if (*(int *)(param_3 + 0x558) != 0) {
      iVar14 = (*(int *)(gen_frame + 0x64)) + *(int *)(param_3 + 0x558);
      *(*(int * PTR32 *)(gen_frame + 0x50)) = iVar14;
      *(undefined4 *)(param_3 + 0x558) = 0;
    }
  }
  else {
    *(int *)(param_3 + 0x3f0) = -(*(int *)(gen_frame + 0x78));
    *(int *)(param_3 + 0x558) = (*(int *)(gen_frame + 0x74)) - (*(int *)(gen_frame + 0x60));
    *(undefined4 *)(param_3 + 0x3f4) = 1;
    *(undefined1 *)(param_3 + 0x535) = 0;
  }
  if (*(int *)(param_3 + 0x540) == *(int *)(param_3 + 0x550)) {
    if ((*(int *)(param_3 + 0x3f4) != 0) && ((*(byte *)(param_3 + 0x533) & 4) != 0)) {
      uVar13 = *(uint *)(param_3 + 0x3f0);
      uVar18 = (*(int *)(param_3 + 0x554) - (*(int *)(gen_frame + 0x74))) + (*(int *)(gen_frame + 0x60));
      if (uVar18 < (*(int *)(gen_frame + 0x60)) + uVar13) {
        if (uVar18 < uVar13) {
          *(*(int * PTR32 *)(gen_frame + 0x54)) = 0;
          *(*(int * PTR32 *)(gen_frame + 0x54)) = *(*(int * PTR32 *)(gen_frame + 0x54)) + iVar14;
          *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + *(*(int * PTR32 *)(gen_frame + 0x54));
        }
        else {
          *(*(int * PTR32 *)(gen_frame + 0x54)) = uVar18 - uVar13;
          *(*(int * PTR32 *)(gen_frame + 0x54)) = *(*(int * PTR32 *)(gen_frame + 0x54)) + iVar14;
          *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + *(*(int * PTR32 *)(gen_frame + 0x54));
        }
        goto LAB_00cef029;
      }
    }
    *(undefined4 *)(param_3 + 0x3f4) = 1;
    *(int *)(param_3 + 0x3f0) = (*(int *)(param_3 + 0x554) - (*(int *)(gen_frame + 0x78))) + iVar14;
  }
  if (*(int *)(param_3 + 0x3f4) != 0) {
    *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + ((*(uint *)(gen_frame + 0x7c)) - iVar14);
  }
  *(*(int * PTR32 *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x60));
LAB_00cef029: ;
  F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cef040 */
GEN_FRAME uint F_00cef040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcef040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  float * pfVar30;
  undefined4 * puVar31;
  int iVar32;
  undefined4 * puVar33;
  int * piVar34;
  float * pfVar35;
  int iVar36;
  int iVar37;
  int local_c;
  int local_8;
  
  iVar37 = param_4;
  iVar4 = *(int *)(param_1 + 0x3ac);
  if (iVar4 != 0) {
    if (iVar4 * 2 == *(int *)(param_1 + 0x3c)) {
      local_8 = *(int *)(param_1 + 0x418);
    }
    else if (iVar4 * 2 == *(int *)(param_1 + 0x40)) {
      local_8 = *(int *)(param_1 + 0x41c);
    }
    else {
      local_8 = 0;
    }
    local_c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar34 = (int *)(param_1 + 0x2ec);
      do {
        pfVar30 = (float *)(*piVar34 + param_3 * 4);
        if (0 < iVar4) {
          pfVar35 = (float *)(local_8 - 0x10 + iVar4 * 4);
          iVar29 = local_8 - (int)pfVar30;
          iVar36 = piVar34[0x20] - (int)pfVar30;
          iVar32 = (iVar4 - 1U >> 2) + 1;
          do {
            fVar5 = *pfVar35;
            fVar6 = pfVar35[1];
            fVar7 = pfVar35[2];
            pfVar1 = (float *)(iVar36 + (int)pfVar30);
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar2 = (float *)(iVar29 + (int)pfVar30);
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            *pfVar30 = *pfVar1 * pfVar35[3] + *pfVar2 * *pfVar30;
            pfVar30[1] = fVar8 * fVar7 + fVar11 * pfVar30[1];
            pfVar30[2] = fVar9 * fVar6 + fVar12 * pfVar30[2];
            pfVar30[3] = fVar10 * fVar5 + fVar13 * pfVar30[3];
            pfVar35 = pfVar35 - 4;
            pfVar30 = pfVar30 + 4;
            iVar32 = iVar32 - 1;
          } while (iVar32 != 0);
        }
        local_c = local_c + 1;
        piVar34 = piVar34 + 1;
      } while (local_c < *(int *)(param_1 + 8));
    }
  }
  iVar4 = *(int *)(param_1 + 0x3ac);
  *(int *)(param_1 + 0x3ac) = param_2 - param_4;
  param_4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar34 = (int *)(param_1 + 0x2ec);
    do {
      iVar29 = piVar34[0x20];
      iVar32 = *piVar34 + iVar37 * 4;
      if (iVar37 < param_2) {
        puVar33 = (undefined4 *)(iVar29 + 0x30);
        puVar31 = (undefined4 *)(iVar32 + 0x20);
        iVar36 = iVar37;
        do {
          uVar14 = puVar31[-4];
          uVar15 = puVar31[-3];
          uVar16 = puVar31[-2];
          uVar17 = puVar31[-1];
          uVar18 = *puVar31;
          uVar19 = puVar31[1];
          uVar20 = puVar31[2];
          uVar21 = puVar31[3];
          uVar22 = puVar31[4];
          uVar23 = puVar31[5];
          uVar24 = puVar31[6];
          uVar25 = puVar31[7];
          uVar26 = puVar31[-7];
          uVar27 = puVar31[-6];
          uVar28 = puVar31[-5];
          puVar33[-0xc] = puVar31[-8];
          puVar33[-0xb] = uVar26;
          puVar33[-10] = uVar27;
          puVar33[-9] = uVar28;
          puVar33[-8] = uVar14;
          puVar33[-7] = uVar15;
          puVar33[-6] = uVar16;
          puVar33[-5] = uVar17;
          puVar3 = ((undefined4 *)GEN_TOP(((iVar29 - iVar32) + (int)puVar31)));
          *puVar3 = uVar18;
          puVar3[1] = uVar19;
          puVar3[2] = uVar20;
          puVar3[3] = uVar21;
          *puVar33 = uVar22;
          puVar33[1] = uVar23;
          puVar33[2] = uVar24;
          puVar33[3] = uVar25;
          iVar36 = iVar36 + 0x10;
          puVar31 = puVar31 + 0x10;
          puVar33 = puVar33 + 0x10;
        } while (iVar36 < param_2);
      }
      param_4 = param_4 + 1;
      piVar34 = piVar34 + 1;
    } while (param_4 < *(int *)(param_1 + 8));
  }
  if (iVar4 != 0) {
    if (param_2 < iVar37) {
      iVar37 = param_2;
    }
    *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + (iVar37 - param_3);
    return iVar37 - param_3;
  }
  return 0;
}

/* ref: FUN_00cef1d0 */
GEN_FRAME uint F_00cef1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  iVar5 = *(int *)(in_edi + 0x538);
  pbVar8 = *(byte * PTR32 *)(in_edi + 0x10);
  bVar3 = true;
  if (iVar5 != -1) {
    iVar2 = *(int *)(in_edi + 0x430);
    for (; (iVar5 < iVar2 &&
           (bVar1 = *(byte *)(in_edi + 0x434 + iVar5), pbVar8 = pbVar8 + bVar1, bVar1 == 0xff));
        iVar5 = iVar5 + 1) {
    }
    if ((param_2 != 0) && (iVar5 < iVar2 - 1)) {
LAB_00cef222: ;
      *(undefined4 *)(in_edi + 0x38) = 0x15;
      if (*(int *)(in_edi + 0x34) == 0) {
        *(undefined4 *)(in_edi + 0x38) = 0x15;
      }
      return 0;
    }
    if (iVar5 == iVar2) {
      iVar5 = -1;
    }
    bVar3 = false;
    if (*(byte * PTR32 *)(in_edi + 0x18) < pbVar8) {
LAB_00cef249: ;
      *(undefined4 *)(in_edi + 0x38) = 1;
      return 0;
    }
    if (iVar5 != -1) {
      return 1;
    }
  }
  pbVar7 = *(byte * PTR32 *)(in_edi + 0x18);
  do {
    if (pbVar7 <= pbVar8 + 0x1a) {
LAB_00cef2fe: ;
      *(undefined4 *)(in_edi + 0x38) = 1;
      return 0;
    }
    if ((*(int *)pbVar8 != REFG(int, 0x134f7b8)) || (pbVar8[4] != 0)) goto LAB_00cef222;
    if (bVar3) {
      if ((*(int *)(in_edi + 0x3ac) != 0) && ((pbVar8[5] & 1) != 0)) goto LAB_00cef222;
    }
    else if ((pbVar8[5] & 1) == 0) goto LAB_00cef222;
    uVar4 = (uint)pbVar8[0x1a];
    pbVar9 = pbVar8 + uVar4 + 0x1b;
    if (pbVar7 <= pbVar9) goto LAB_00cef2fe;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        pbVar9 = pbVar9 + pbVar8[uVar6 + 0x1b];
        if (pbVar8[uVar6 + 0x1b] != 0xff) break;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
      pbVar7 = *(byte * PTR32 *)(in_edi + 0x18);
    }
    if ((param_2 != 0) && ((int)uVar6 < (int)(uVar4 - 1))) goto LAB_00cef222;
    if (uVar6 == uVar4) {
      uVar6 = 0xffffffff;
    }
    bVar3 = false;
    if (pbVar7 < pbVar9) goto LAB_00cef249;
    pbVar8 = pbVar9;
    if (uVar6 != 0xffffffff) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00cef340 */
GEN_FRAME uint F_00cef340(unsigned int gen_a0)
{
  GEN_ENTER(0xcef340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (*(int *)(param_1 + 0x3f4) != 0) {
    return *(uint *)(param_1 + 0x3f0);
  }
  return 0xffffffff;
}

/* ref: FUN_00cef360 */
GEN_FRAME uint F_00cef360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  param_1[2] = param_2[2];
  *param_1 = *param_2;
  iVar1 = param_2[0x10];
  param_1[1] = param_2[1];
  param_1[3] = iVar1 >> 1;
  return (uint)param_1;
}

/* ref: FUN_00cef390 */
GEN_FRAME uint F_00cef390(unsigned int gen_a0)
{
  GEN_ENTER(0xcef390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return uVar1;
}

/* ref: FUN_00cef3b0 */
GEN_FRAME uint F_00cef3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcef3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined1 *)(param_1 + 0x535) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  return param_1;
}

/* ref: FUN_00cef3f0 */
GEN_FRAME uint F_00cef3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcef3f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x560)) {
    puVar7 = (undefined4 *)(param_1 + 0x570);
    do {
      *puVar7 = 0;
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar3 < *(int *)(param_1 + 0x560));
  }
  local_c = *(int *)(param_1 + 0x560);
  if (local_c < 4) {
    if ((int)param_3 < 4) {
      return 0;
    }
    uVar4 = param_3 - 3;
    uVar11 = 0;
    param_3 = uVar4;
    if (0 < (int)uVar4) {
      uVar5 = REFG(undefined4, 0x134f7b8);
      do {
        pbVar1 = (byte *)(param_2 + 3 + uVar11);
        if ((*(char *)(param_2 + uVar11) == 'O') &&
           (((*(uint *)(pbVar1 - 3) == uVar5 ||
             ((((iVar3 = (uint)pbVar1[-3] - (uVar5 & 0xff), iVar3 == 0 &&
                (iVar3 = (uint)pbVar1[-2] - (uVar5 >> 8 & 0xff), iVar3 == 0)) &&
               (iVar3 = (uint)pbVar1[-1] - (REFG(undefined4, 0x134f7b8) >> 0x10 & 0xff), iVar3 == 0)) &&
              (iVar3 = (uint)*pbVar1 - (REFG(undefined4, 0x134f7b8) >> 0x18), iVar3 == 0)))) ||
            ((iVar3 >> 0x1f | 1U) == 0)))) {
          param_3 = uVar11;
          if (((int)uVar4 <= (int)(pbVar1 + (0x17 - param_2))) ||
             (uVar5 = (uint)*(byte *)(uVar11 + 0x1a + param_2),
             (int)uVar4 <= (int)(uVar5 + 0x1b + uVar11))) break;
          local_8 = uVar5 + 0x1b;
          iVar9 = 0;
          iVar10 = 0;
          iVar3 = 0;
          if (1 < uVar5) {
            do {
              iVar9 = iVar9 + (uint)pbVar1[iVar3 + 0x18];
              iVar6 = iVar3 + 0x19;
              iVar3 = iVar3 + 2;
              iVar10 = iVar10 + (uint)pbVar1[iVar6];
            } while (iVar3 < (int)(uVar5 - 1));
          }
          if (iVar3 < (int)(uint)*(byte *)(uVar11 + 0x1a + param_2)) {
            local_8 = local_8 + (uint)*(byte *)(iVar3 + uVar11 + 0x1b + param_2);
          }
          uVar5 = 0;
          iVar3 = 0;
          do {
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)((uint)pbVar1[iVar3 - 3] ^ uVar5 >> 0x18)];
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)((uint)pbVar1[iVar3 - 2] ^ uVar5 >> 0x18)];
            iVar3 = iVar3 + 2;
          } while (iVar3 < 0x16);
          if (iVar3 < 0x1a) {
            iVar6 = 0x1a - iVar3;
            iVar3 = iVar3 + iVar6;
            do {
              uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)(uVar5 >> 0x18)];
              iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
          }
          *(int *)(param_1 + 0x560) = local_c + 1;
          iVar6 = param_1 + local_c * 0x14;
          *(int *)(iVar6 + 0x568) = (local_8 + iVar10 + iVar9) - iVar3;
          *(uint *)(iVar6 + 0x56c) = uVar5;
          *((uint *)GEN_TOP((param_1 + (local_c * 5 + 0x159) * 4))) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + 0x19 + param_2),
                                          *(undefined1 *)(uVar11 + 0x18 + param_2)),
                                 *(undefined1 *)(uVar11 + 0x17 + param_2)),
                        *(undefined1 *)(uVar11 + 0x16 + param_2));
          if (*((char *)GEN_TOP((*(byte *)(uVar11 + 0x1a + param_2) + uVar11 + 0x1a + param_2))) == -1) {
            *(undefined4 *)(iVar6 + 0x574) = 0xffffffff;
          }
          else {
            *(uint *)(iVar6 + 0x574) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + 9 + param_2),
                                            *(undefined1 *)(uVar11 + 8 + param_2)),
                                   *(undefined1 *)(uVar11 + 7 + param_2)),
                          *(undefined1 *)(uVar11 + 6 + param_2));
          }
          *(uint *)(iVar6 + 0x570) = iVar3 + uVar11;
          local_c = *(int *)(param_1 + 0x560);
          uVar5 = REFG(undefined4, 0x134f7b8);
          param_3 = uVar4;
          if (local_c == 4) break;
        }
        uVar11 = uVar11 + 1;
        param_3 = uVar4;
      } while ((int)uVar11 < (int)uVar4);
    }
  }
  piVar8 = (int *)(param_1 + 0x560);
  param_1 = 0;
  if (0 < *piVar8) {
    piVar8 = (int *)(iVar2 + 0x568);
    do {
      iVar3 = piVar8[2];
      iVar9 = *piVar8;
      if ((int)(param_3 - iVar3) < *piVar8) {
        iVar9 = param_3 - iVar3;
      }
      uVar4 = piVar8[1];
      local_c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = uVar4 << 8 ^
                  (&REFG(undefined4, 0x15d8df8))[(int)((uint)*(byte *)(iVar3 + param_2 + local_c) ^ uVar4 >> 0x18)];
          local_c = local_c + 1;
        } while (local_c < iVar9);
      }
      iVar10 = *piVar8;
      *piVar8 = iVar10 - iVar9;
      piVar8[1] = uVar4;
      if (iVar10 - iVar9 == 0) {
        if (uVar4 == piVar8[-1]) {
          *(undefined4 *)(iVar2 + 0x560) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x3ac) = 0;
          *(undefined4 *)(iVar2 + 0x538) = 0xffffffff;
          iVar10 = *(int *)(iVar2 + 0x574 + param_1 * 0x14);
          *(int *)(iVar2 + 0x3f0) = iVar10;
          *(uint *)(iVar2 + 0x3f4) = (uint)(iVar10 != -1);
          return iVar9 + iVar3;
        }
        *(int *)(iVar2 + 0x560) = *(int *)(iVar2 + 0x560) - 1;
        iVar9 = *(int *)(iVar2 + 0x560) * 5 + 0x159;
        iVar3 = iVar2 + iVar9 * 4;
        piVar8[-1] = *(int *)(iVar2 + iVar9 * 4);
        *piVar8 = *(int *)(iVar3 + 4);
        piVar8[1] = *(int *)(iVar3 + 8);
        piVar8[2] = *(int *)(iVar3 + 0xc);
        piVar8[3] = *(int *)(iVar3 + 0x10);
      }
      else {
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 5;
      }
    } while (param_1 < *(int *)(iVar2 + 0x560));
  }
  return param_3;
}

/* ref: FUN_00cef770 */
GEN_FRAME unsigned int F_00cef770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xcef770u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * in_eax = (float *)(uintptr_t)gen_a0;
  uint in_edx = (uint)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  gen_v16 * pauVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pauVar1 = param_3;
  for (uVar2 = in_edx >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    (*(undefined4 *)((char *)&auVar3 + 0)) = (int)(*in_eax * param_4);
    (*(undefined4 *)((char *)&auVar3 + 4)) = (int)(in_eax[1] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 8)) = (int)(in_eax[2] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 12)) = (int)(in_eax[3] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 4)) = (int)(in_eax[5] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 0)) = (int)(in_eax[4] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 8)) = (int)(in_eax[6] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 12)) = (int)(in_eax[7] * param_4);
    gen_packssdw(&(auVar4), &(auVar3), &(auVar4));
    memcpy(&(*pauVar1), &(auVar4), sizeof(auVar4) < sizeof(*pauVar1) ? sizeof(auVar4) : sizeof(*pauVar1));
    in_eax = in_eax + 8;
    pauVar1 = pauVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cef7d0 */
GEN_FRAME unsigned int GEN_FASTCALL F_00cef7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xcef7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * pfVar1;
  undefined1 auVar2 [16];
  float * pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar4 = param_1 >> 2;
  if (uVar4 != 0) {
    pfVar3 = param_4;
    do {
      pfVar1 = ((float *)GEN_TOP(((int)pfVar3 + (param_2 - (int)param_4))));
      (*(undefined4 *)((char *)&auVar5 + 0)) = (int)(*pfVar1 * param_5);
      (*(undefined4 *)((char *)&auVar5 + 4)) = (int)(pfVar1[1] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 8)) = (int)(pfVar1[2] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 12)) = (int)(pfVar1[3] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar6 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar7), &(auVar6), &(auVar5));
      (*(undefined4 *)((char *)&auVar2 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar2 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar6), &(auVar5), &(auVar2));
      gen_piece_set(&auVar11, 0, 12, (unsigned long long)(GEN_PIECE(&auVar7, 0, 12)));
      (*(undefined2 *)((char *)&auVar11 + 12)) = (*(undefined2 *)((char *)&auVar7 + 6));
      (*(undefined2 *)((char *)&auVar11 + 14)) = (*(undefined2 *)((char *)&auVar6 + 6));
      (*(undefined4 *)((char *)&auVar10 + 12)) = (*(undefined4 *)((char *)&auVar11 + 12));
      gen_piece_set(&auVar10, 0, 10, (unsigned long long)(GEN_PIECE(&auVar7, 0, 10)));
      (*(undefined2 *)((char *)&auVar10 + 10)) = (*(undefined2 *)((char *)&auVar6 + 4));
      gen_piece_set(&auVar9, 10, 6, (unsigned long long)(GEN_PIECE(&auVar10, 10, 6)));
      (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar9 + 8)) = (*(undefined2 *)((char *)&auVar7 + 4));
      (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar9 + 8));
      (*(undefined2 *)((char *)&auVar8 + 6)) = (*(undefined2 *)((char *)&auVar6 + 2));
      (*(undefined2 *)((char *)&auVar8 + 4)) = (*(undefined2 *)((char *)&auVar7 + 2));
      (*(undefined2 *)((char *)&auVar8 + 0)) = (*(undefined2 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar8 + 2)) = (*(undefined2 *)((char *)&auVar6 + 0));
      memcpy(&(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))), &(auVar8), sizeof(auVar8) < sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))) ? sizeof(auVar8) : sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))));
      pfVar3 = pfVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00cef840 */
GEN_FRAME uint F_00cef840(unsigned int gen_a0)
{
  GEN_ENTER(0xcef840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d92f8) = param_1;
  return param_1;
}

/* ref: FUN_00cef860 */
GEN_FRAME uint F_00cef860(unsigned int gen_a0)
{
  GEN_ENTER(0xcef860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d92fc) = param_1;
  return param_1;
}

/* ref: FUN_00cef8b0 */
GEN_NOFRAME uint F_00cef8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcef8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return -(uint)(REFG(char, 0x15d91f8) != '\0') & 0x15d91f8;
}

/* ref: FUN_00cef8d0 */
GEN_FRAME uint GEN_STDCALL F_00cef8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(param_1 + 0x1c);
  }
  if (param_2 != 1) {
    return 0;
  }
  return 0x10;
}

/* ref: FUN_00cef900 */
GEN_FRAME uint GEN_STDCALL F_00cef900(unsigned int gen_a0)
{
  GEN_ENTER(0xcef900u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  *(undefined4 *)(uVar1 + 0x3ac) = 0;
  *(undefined4 *)(uVar1 + 0x560) = 0;
  *(undefined4 *)(uVar1 + 0x558) = 0;
  *(undefined4 *)(uVar1 + 0x3f4) = 0;
  *(undefined1 *)(uVar1 + 0x535) = 0;
  *(undefined4 *)(uVar1 + 0x55c) = 0;
  *(undefined4 *)(uVar1 + 0x5b4) = 0;
  *(undefined4 *)(uVar1 + 0x5b8) = 0;
  return uVar1;
}

/* ref: FUN_00cefa40 */
GEN_NOFRAME uint F_00cefa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefa40u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*(int *)(in_ecx + 0x24) == 0) {
    *(int *)(in_ecx + 0x30) = *(int *)(in_ecx + 0x30) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *(int *)(in_ecx + 0x2c);
  uVar2 = iVar1 + uVar2;
  if (*(uint *)(in_ecx + 0x28) < uVar2) {
    return 0;
  }
  *(uint *)(in_ecx + 0x2c) = uVar2;
  return iVar1 + *(int *)(in_ecx + 0x24);
}

/* ref: FUN_00cefa80 */
GEN_NOFRAME uint F_00cefa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefa80u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*(int *)(in_ecx + 0x24) == 0) {
    *(int *)(in_ecx + 0x30) = *(int *)(in_ecx + 0x30) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *(int *)(in_ecx + 0x2c);
  uVar2 = iVar1 + uVar2;
  if (*(uint *)(in_ecx + 0x28) < uVar2) {
    return 0;
  }
  *(uint *)(in_ecx + 0x2c) = uVar2;
  return iVar1 + *(int *)(in_ecx + 0x24);
}

/* ref: FUN_00cefb60 */
GEN_NOFRAME unsigned int F_00cefb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefb60u, gen_a0, gen_a1, 0u, 0u);
  uint in_edx = (uint)gen_a0;
  int in_edi = (int)gen_a1;
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0x1f;
  if (in_edx != 0) {
    for (; in_edx >> iVar1 == 0; iVar1 = iVar1 - 1) {
    }
  }
  cVar2 = (char)iVar1;
  if (in_edx != 0) {
    cVar2 = cVar2 + '\x01';
  }
  uVar3 = 0;
  if (0 < (int)in_edx >> 3) {
    do {
      uVar7 = uVar3 >> 8;
      uVar4 = uVar3 & 0xff;
      uVar5 = uVar3 >> 0x10;
      uVar6 = uVar3 >> 0x18;
      uVar3 = uVar3 + 1;
      *(short *)(in_edi - 2 + uVar3 * 2) =
           (short)(CONCAT31(CONCAT21(CONCAT11((&REFG(undefined1, 0x15d8cf8))[(int)(uVar4)],(&REFG(undefined1, 0x15d8cf8))[(int)(uVar7 & 0xff)]),
                                     (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 & 0xff)]),(&REFG(undefined1, 0x15d8cf8))[(int)(uVar6)]) >>
                  (0x23U - (cVar2 - 1) & 0x1f)) * 4;
    } while ((int)uVar3 < (int)in_edx >> 3);
  }
  return 0;
}

/* ref: FUN_00cefbf0 */
GEN_FRAME uint F_00cefbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcefbf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = ((param_3 >> 1) + (param_3 >> 2) + param_3) * 4 + 0x10;
  if (*(int *)(in_esi + 0x24) == 0) {
    *(int *)(in_esi + 0x30) = *(int *)(in_esi + 0x30) + iVar2;
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(iVar2);
  }
  else {
    uVar4 = *(int *)(in_esi + 0x2c) + iVar2;
    if (*(uint *)(in_esi + 0x28) < uVar4) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_esi + 0x2c) + *(int *)(in_esi + 0x24);
      *(uint *)(in_esi + 0x2c) = uVar4;
    }
  }
  *(uint *)(in_esi + 0x3f8 + param_2 * 4) = uVar3;
  if (uVar3 != 0) {
    uVar4 = uVar3 + 0xf & 0xfffffff0;
    iVar2 = uVar4 + (param_3 >> 1) * 4;
    iVar1 = uVar4 + param_3 * 4;
    *(uint *)(in_esi + 0x400 + param_2 * 4) = uVar4;
    *(int *)(in_esi + 0x408 + param_2 * 4) = iVar2;
    *(int *)(in_esi + 0x410 + param_2 * 4) = iVar1;
    F_00ceb2e0(iVar2,uVar4,param_3,iVar1);
    iVar2 = uVar4 + ((param_3 >> 2) + param_3) * 4;
    *(int *)(in_esi + 0x418 + param_2 * 4) = iVar2;
    if (iVar2 != 0) {
      F_00ceb430(param_3,iVar2);
      uVar4 = (param_3 >> 3) * 2 + 3U & 0xfffffffc;
      if (*(int *)(in_esi + 0x24) == 0) {
        *(int *)(in_esi + 0x30) = *(int *)(in_esi + 0x30) + uVar4;
        uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar4);
      }
      else {
        uVar4 = uVar4 + *(int *)(in_esi + 0x2c);
        if (*(uint *)(in_esi + 0x28) < uVar4) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(int *)(in_esi + 0x24) + *(int *)(in_esi + 0x2c);
          *(uint *)(in_esi + 0x2c) = uVar4;
        }
      }
      *(uint *)(in_esi + 0x420 + param_2 * 4) = uVar3;
      if (uVar3 != 0) {
        F_00cefb60(param_3,uVar3);
        return 1;
      }
    }
  }
  *(undefined4 *)(in_esi + 0x38) = 3;
  if (*(int *)(in_esi + 0x34) == 0) {
    *(undefined4 *)(in_esi + 0x38) = 3;
  }
  return 0;
}

/* ref: FUN_00cefd20 */
GEN_FRAME uint F_00cefd20(unsigned int gen_a0)
{
  GEN_ENTER(0xcefd20u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x770];
  ushort uVar1;
  char * pcVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined * pvVar11;
  float * pfVar12;
  uint uVar13;
  int iVar14;
  float * pfVar15;
  float fVar16;
  byte * pbVar17;
  float * pfVar18;
  float * pfVar19;
  int iVar20;
  byte * pbVar21;
  float * pfVar22;
  uint * puVar23;
  ushort * puVar24;
  short * psVar25;
  float * pfVar26;
  float * pfVar27;
  bool bVar28;
  float10 fVar29;
  
  (*(uint *)(gen_frame + 0x768)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x76c);
  pcVar2 = (char *)param_1[4];
  cVar5 = *pcVar2;
  bVar6 = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  param_1[4] = (uint)(pcVar2 + 1);
  if (cVar5 == 'O') {
    cVar5 = pcVar2[1];
    param_1[4] = (uint)(pcVar2 + 2);
    if (cVar5 != 'g') goto LAB_00cefd76;
    cVar5 = pcVar2[2];
    param_1[4] = (uint)(pcVar2 + 3);
    if ((cVar5 != 'g') || (cVar5 = pcVar2[3], param_1[4] = (uint)(pcVar2 + 4), cVar5 != 'S'))
    goto LAB_00cefd76;
    uVar9 = F_00ceb650(param_1);
    if (uVar9 == 0) goto LAB_00cf088d;
    bVar4 = *(byte *)((int)param_1 + 0x533);
    if ((bVar4 & 2) == 0) {
      bVar28 = param_1[0xd] == 0;
      uVar9 = 0x22;
    }
    else if ((bVar4 & 4) == 0) {
      if ((bVar4 & 1) == 0) {
        if (param_1[0x10c] == 1) {
          if ((char)param_1[0x10d] == '\x1e') {
            cVar5 = *(char *)param_1[4];
            param_1[4] = (uint)((char *)param_1[4] + 1);
            if (cVar5 == '\x01') {
              uVar9 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x760)),param_1,6);
              if (uVar9 == 0) {
                uVar9 = 10;
              }
              else {
                uVar9 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x760)));
                if (uVar9 == 0) {
                  uVar9 = 0x22;
                }
                else {
                  uVar9 = F_00ceb570(param_1);
                  if (uVar9 == 0) {
                    bVar4 = *(byte *)param_1[4];
                    uVar9 = (uint)bVar4;
                    param_1[4] = (uint)((byte *)param_1[4] + 1);
                    param_1[2] = uVar9;
                    if (bVar4 == 0) {
                      uVar9 = 0x22;
                    }
                    else {
                      uVar10 = F_00ceb540(uVar9);
                      param_1[3] = uVar10;
                      if (uVar9 < 0x11) {
                        uVar9 = F_00ceb570(param_1);
                        *param_1 = uVar9;
                        if (uVar9 == 0) {
                          uVar9 = 0x22;
                        }
                        else {
                          F_00ceb570(param_1);
                          uVar9 = F_00ceb570(param_1);
                          param_1[1] = uVar9;
                          F_00ceb570(param_1);
                          pbVar21 = (byte *)param_1[4];
                          bVar4 = *pbVar21 >> 4;
                          uVar9 = *pbVar21 & 0xf;
                          param_1[4] = (uint)(pbVar21 + 1);
                          param_1[0xf] = 1 << (sbyte)uVar9;
                          param_1[0x10] = 1 << bVar4;
                          if (((uVar9 - 6 < 8) && (bVar4 - 6 < 8)) && (uVar9 <= bVar4)) {
                            bVar4 = pbVar21[1];
                            param_1[4] = (uint)(pbVar21 + 2);
                            if ((bVar4 & 1) == 0) {
                              uVar9 = 0x22;
                              goto LAB_00cf0881;
                            }
                            uVar9 = F_00ceb7e0(param_1);
                            if ((uVar9 == 0) || (uVar9 = F_00ceb830(param_1), uVar9 == 0))
                            goto LAB_00cf088d;
                            do {
                              uVar9 = F_00ceb960(param_1);
                              param_1[4] = param_1[4] + uVar9;
                              if (param_1[6] <= param_1[4]) {
                                param_1[0xd] = 1;
                              }
                              *(undefined1 *)(param_1 + 0x14d) = 0;
                            } while (uVar9 != 0);
                            uVar9 = F_00ceb830(param_1);
                            if (uVar9 == 0) goto LAB_00cf088d;
                            uVar9 = F_00cef1d0(param_1,1);
                            if (uVar9 == 0) {
                              if (param_1[0xe] == 0x15) {
                                param_1[0xe] = 0x14;
                                F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c) GEN_EDX_ARG);
                                return 0;
                              }
                              goto LAB_00cf088d;
                            }
                            F_00ceac70();
                            F_00ceadd0();
                            uVar9 = F_00ceba40(param_1);
                            if (uVar9 == 5) {
                              iVar20 = 0;
                              do {
                                uVar9 = F_00ceba40(param_1);
                                *(char *)((int)((byte * PTR32 *)(gen_frame + 0x760)) + iVar20) = (char)uVar9;
                                iVar20 = iVar20 + 1;
                              } while (iVar20 < 6);
                              uVar9 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x760)));
                              if (uVar9 == 0) {
                                bVar28 = param_1[0xd] == 0;
                                uVar9 = 0x14;
                              }
                              else {
                                uVar9 = F_00cebad0(param_1,8);
                                param_1[0x11] = uVar9 + 1;
                                pvVar11 = (undefined *)F_00cefa40((uVar9 + 1) * 4,param_1);
                                param_1[0x12] = (uint)pvVar11;
                                if (pvVar11 != (undefined *)0x0) {
                                  F_00c48350(pvVar11,0,param_1[0x11] * 4);
                                  (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                  if (param_1[9] == 0) {
                                    pfVar12 = ((float *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x2002c)));
                                    (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                  }
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x11]) {
                                    do {
                                      (*(float *)(gen_frame + 0x738)) = 0.0;
                                      (*(float * PTR32 *)(gen_frame + 0x73c)) = (float *)0x0;
                                      (*(float * PTR32 *)(gen_frame + 0x740)) = (float *)0x0;
                                      (*(uint *)(gen_frame + 0x744)) = 0;
                                      (*(uint *)(gen_frame + 0x748)) = 0;
                                      (*(undefined4 *)(gen_frame + 0x74c)) = 0;
                                      (*(uint *)(gen_frame + 0x750)) = 0;
                                      (*(float *)(gen_frame + 0x754)) = 0.0;
                                      (*(float *)(gen_frame + 0x758)) = 0.0;
                                      (*(uint *)(gen_frame + 0x75c)) = 0;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if ((((char)uVar9 != 'B') ||
                                          (uVar9 = F_00cebad0(param_1,8), pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)),
                                          (char)uVar9 != 'C')) ||
                                         (uVar9 = F_00cebad0(param_1,8), pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)),
                                         (char)uVar9 != 'V')) {
override_prt_cf0873_1085496d: ;
                                        ((code *)REFG(gen_code32, 0x15d92fc))(pfVar12);
                                        goto LAB_00cf087c;
                                      }
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pfVar12 = (float *)(uVar9 * 0x100 + (uint)(*(byte *)(gen_frame + 0x27)));
                                      (*(float * PTR32 *)(gen_frame + 0x740)) = pfVar12;
                                      uVar9 = F_00ceb540(pfVar12);
                                      (*(uint *)(gen_frame + 0x744)) = uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x1b)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      uVar10 = (uVar9 * 0x100 + (uint)(*(byte *)(gen_frame + 0x1b))) * 0x100 +
                                               (uint)(*(byte *)(gen_frame + 0x27));
                                      (*(uint *)(gen_frame + 0x748)) = uVar10;
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        pfVar12 = (float *)F_00cebad0(param_1,1);
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
                                      }
                                      else {
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
                                      }
                                      pfVar12 = (float *)F_00cefa80(uVar10,param_1);
                                      (*(float * PTR32 *)(gen_frame + 0x2c)) = pfVar12;
                                      if (pfVar12 == (float *)0x0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                        goto LAB_00cf08b0;
                                      }
                                      if (uVar9 == 0) {
                                        iVar20 = 0;
                                        if (0 < (int)uVar10) {
                                          do {
                                            if (((*(float * PTR32 *)(gen_frame + 0x28)) == (float *)0x0) ||
                                               (uVar9 = F_00cebad0(param_1,1), uVar9 != 0)) {
                                              uVar9 = F_00cebad0(param_1,5);
                                              *(char *)(iVar20 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))) =
                                                   (char)uVar9 + '\x01';
                                            }
                                            else {
                                              *(undefined1 *)(iVar20 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))) = 0xff;
                                            }
                                            iVar20 = iVar20 + 1;
                                          } while (iVar20 < (int)uVar10);
                                        }
                                      }
                                      else {
                                        pfVar12 = (float *)0x0;
                                        uVar9 = F_00cebad0(param_1,5);
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(uVar9 + 1);
                                        if (0 < (int)uVar10) {
                                          do {
                                            uVar9 = uVar10 - (int)pfVar12;
                                            iVar20 = 0x1f;
                                            if (uVar9 != 0) {
                                              for (; uVar9 >> iVar20 == 0; iVar20 = iVar20 - 1) {
                                              }
                                            }
                                            if (uVar9 != 0) {
                                              iVar20 = iVar20 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar20);
                                            (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)(uVar9 + (int)pfVar12);
                                            if ((int)uVar10 < (int)(uVar9 + (int)pfVar12)) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                              pfVar12 = (*(float * PTR32 *)(gen_frame + 0x2c));
                                              if (param_1[9] == 0)
                                              goto override_prt_cf0873_1085496d;
                                              goto LAB_00cf087c;
                                            }
                                            F_00c48350((undefined1 *)((int)pfVar12 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))),
                                                    (int)(*(float * PTR32 *)(gen_frame + 0x28)),uVar9);
                                            (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1);
                                            pfVar12 = (*(float * PTR32 *)(gen_frame + 0x14));
                                          } while ((int)(*(float * PTR32 *)(gen_frame + 0x14)) < (int)uVar10);
                                        }
                                      }
                                      uVar9 = F_00cebad0(param_1,4);
                                      bVar4 = (byte)uVar9;
                                      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) = bVar4;
                                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = CONCAT11(bVar4,(char)(*(uint *)(gen_frame + 0x75c)));
                                      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if (2 < bVar4) goto override_prt_cf0873_1085496d;
                                      if (bVar4 != 0) {
                                        uVar9 = F_00cebad0(param_1,0x20);
                                        fVar29 = F_00ceae60(uVar9);
                                        (*(float *)(gen_frame + 0x754)) = (float)fVar29;
                                        uVar9 = F_00cebad0(param_1,0x20);
                                        fVar29 = F_00ceae60(uVar9);
                                        (*(float *)(gen_frame + 0x758)) = (float)fVar29;
                                        uVar9 = F_00cebad0(param_1,4);
                                        cVar5 = (char)uVar9 + '\x01';
                                        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = cVar5;
                                        (*(uint *)(gen_frame + 0x75c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x75c)), 1, 3),cVar5);
                                        uVar9 = F_00cebad0(param_1,1);
                                        bVar28 = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) == '\x01';
                                        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) = (char)uVar9;
                                        gen_piece_set(&(*(uint *)(gen_frame + 0x75c)), 0, 3, (unsigned long long)(CONCAT12((char)uVar9,(ushort)(*(uint *)(gen_frame + 0x75c)))));
                                        if (bVar28) {
                                          uVar9 = F_00cefae0(uVar10,(uint)(*(float * PTR32 *)(gen_frame + 0x740)));
                                        }
                                        else {
                                          uVar9 = uVar10 * (int)(*(float * PTR32 *)(gen_frame + 0x740));
                                        }
                                        (*(uint *)(gen_frame + 0x750)) = uVar9;
                                        pfVar12 = (float *)F_00cefa80(uVar9 * 2,param_1);
                                        (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar12;
                                        if (pfVar12 == (float *)0x0) {
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                          uVar9 = 3;
                                        }
                                        else {
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                          if (0 < (int)uVar9) {
                                            do {
                                              uVar13 = F_00cebad0(param_1,(*(uint *)(gen_frame + 0x75c)) & 0xff);
                                              if (uVar13 == 0xffffffff) {
                                                pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                                if (param_1[9] == 0) {
                                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                                  pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                                }
                                                goto override_prt_cf0873_1085496d;
                                              }
                                              *(short *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2) =
                                                   (short)uVar13;
                                              uVar13 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                              (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar13;
                                            } while ((int)uVar13 < (int)uVar9);
                                          }
                                          if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) != '\x01') {
                                            pfVar12 = (float *)F_00cefa40(uVar9 * 4,param_1);
                                            (*(float * PTR32 *)(gen_frame + 0x73c)) = pfVar12;
                                            if (0 < (int)uVar9) {
                                              iVar20 = 0;
                                              do {
                                                pfVar26 = (float *)(uint)*(ushort *)
                                                                          ((int)(*(float * PTR32 *)(gen_frame + 0x20)) +
                                                                          iVar20 * 2);
                                                (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar26;
                                                iVar14 = iVar20 + 1;
                                                pfVar12[iVar20] =
                                                     (float)((float10)(int)((int)(uintptr_t)pfVar26) * (float10)(*(float *)(gen_frame + 0x758)) + (float10)(*(float *)(gen_frame + 0x754)));
                                                iVar20 = iVar14;
                                              } while (iVar14 < (int)uVar9);
                                            }
                                            if (param_1[9] == 0) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                            }
                                            if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) != '\x02') goto LAB_00cf0448;
LAB_00cf0425: ;
                                            if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) != '\0') {
                                              iVar20 = 1;
                                              if (1 < (int)uVar9) {
                                                do {
                                                  iVar14 = iVar20 + 1;
                                                  (*(float * PTR32 *)(gen_frame + 0x73c))[iVar20] = (*(float * PTR32 *)(gen_frame + 0x73c))[iVar20 - 1];
                                                  iVar20 = iVar14;
                                                } while (iVar14 < (int)uVar9);
                                              }
                                              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) = 0;
                                              gen_piece_set(&(*(uint *)(gen_frame + 0x75c)), 0, 3, (unsigned long long)((uint3)(ushort)(*(uint *)(gen_frame + 0x75c))));
                                            }
                                            goto LAB_00cf0448;
                                          }
                                          pfVar12 = (float *)F_00cefa40(uVar10 * (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x740))) * 4
                                                                          ,param_1);
                                          (*(float * PTR32 *)(gen_frame + 0x73c)) = pfVar12;
                                          if (pfVar12 != (float *)0x0) {
                                            (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                            if (0 < (int)uVar10) {
                                              (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
                                              do {
                                                iVar20 = 1;
                                                if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x740))) {
                                                  (*(float * PTR32 *)(gen_frame + 0x14)) = (*(float * PTR32 *)(gen_frame + 0x740));
                                                  pfVar12 = (*(float * PTR32 *)(gen_frame + 0x28));
                                                  do {
                                                    lVar3 = (longlong)iVar20;
                                                    iVar20 = iVar20 * uVar9;
                                                    pfVar26 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x14)) - 1);
                                                    (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar26;
                                                    pfVar19 = (float *)(uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x20)) +
                                                                              (int)(((longlong)
                                                                                     (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) / lVar3 &
                                                                                    0xffffffffU) %
                                                                                   (ulonglong)uVar9)
                                                                              * 2)));
                                                    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar19;
                                                    *pfVar12 = (float)((float10)(int)((int)(uintptr_t)pfVar19) * (float10)(*(float *)(gen_frame + 0x758)) +
                                                                      (float10)(*(float *)(gen_frame + 0x754)));
                                                    pfVar12 = pfVar12 + 1;
                                                  } while (pfVar26 != (float *)0x0);
                                                }
                                                (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + (int)(*(float * PTR32 *)(gen_frame + 0x740));
                                                uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                                (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar10;
                                              } while ((int)uVar10 < (int)(*(uint *)(gen_frame + 0x748)));
                                            }
                                            if (param_1[9] == 0) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                            }
                                            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) = 2;
                                            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = CONCAT11(2,(char)(*(uint *)(gen_frame + 0x75c)));
                                            goto LAB_00cf0425;
                                          }
                                          if (param_1[9] == 0) {
                                            ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                          }
LAB_00cf0924: ;
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                          uVar9 = 3;
                                        }
                                        goto LAB_00cf0881;
                                      }
LAB_00cf0448: ;
                                      uVar9 = param_1[9];
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if (uVar9 != 0) {
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(param_1[0xb] + uVar9);
                                      }
                                      pfVar12 = &(*(float *)(gen_frame + 0x738));
                                      pfVar26 = (*(float * PTR32 *)(gen_frame + 0x28));
                                      for (iVar20 = 10; iVar20 != 0; iVar20 = iVar20 - 1) {
                                        *pfVar26 = *pfVar12;
                                        pfVar12 = pfVar12 + 1;
                                        pfVar26 = pfVar26 + 1;
                                      }
                                      uVar9 = F_00ceb070((*(float * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x748)));
                                      if (uVar9 == 0) {
                                        pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                        if (param_1[9] == 0) {
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x2c)));
                                          pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                        }
                                        goto override_prt_cf0873_1085496d;
                                      }
                                      if (param_1[9] == 0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x2c)));
                                      }
                                      iVar20 = (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x28))[10]) * 4 + 0x2c;
                                      uVar9 = F_00cefa40(iVar20,param_1);
                                      *(uint *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4) = uVar9;
                                      if (*(int *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4) == 0)
                                      goto LAB_00cf0924;
                                      if (param_1[9] == 0) {
                                        F_00c46aa0(*(undefined4 *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4),
                                                   (*(float * PTR32 *)(gen_frame + 0x34)),iVar20);
                                      }
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x11]);
                                  }
                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                  iVar20 = 0;
                                  uVar9 = F_00cebad0(param_1,6);
                                  uVar9 = (uint)(byte)((char)uVar9 + 1);
                                  if (uVar9 != 0) {
                                    do {
                                      uVar10 = F_00cebad0(param_1,0x10);
                                      if (uVar10 != 0) goto LAB_00cf087c;
                                      iVar20 = iVar20 + 1;
                                    } while (iVar20 < (int)uVar9);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x13] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0xa24,param_1);
                                  param_1[0x34] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x13]) {
LAB_00cf0580: ;
                                    uVar9 = F_00cebad0(param_1,0x10);
                                    uVar8 = (ushort)uVar9;
                                    *(ushort *)((int)param_1 + (*(int *)(gen_frame + 0x10)) * 2 + 0x50) = uVar8;
                                    if (uVar8 < 2) {
                                      pbVar21 = (byte *)((*(int *)(gen_frame + 0x10)) * 0xa24 + param_1[0x34]);
                                      if (uVar8 != 0) goto code_r0x00cf05af;
                                      uVar9 = F_00cebad0(param_1,8);
                                      *pbVar21 = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(short *)(pbVar21 + 2) = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(short *)(pbVar21 + 4) = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,6);
                                      pbVar21[6] = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pbVar21[7] = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,4);
                                      bVar6 = (char)uVar9 + 1;
                                      pbVar21[8] = bVar6;
                                      iVar20 = 0;
                                      if (bVar6 != 0) {
                                        do {
                                          uVar9 = F_00cebad0(param_1,8);
                                          pbVar21[iVar20 + 9] = (byte)uVar9;
                                          iVar20 = iVar20 + 1;
                                        } while (iVar20 < (int)(uint)pbVar21[8]);
                                      }
                                      uVar9 = 4;
                                      goto LAB_00cf0881;
                                    }
                                    goto LAB_00cf087c;
                                  }
LAB_00cf0dc5: ;
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x35] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0x1c,param_1);
                                  param_1[0x56] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x35]) {
                                    (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)0x0;
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(param_1 + 0x36);
                                    do {
                                      puVar23 = (uint *)(param_1[0x56] + (int)(*(float * PTR32 *)(gen_frame + 0x2c)));
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(ushort *)(*(float * PTR32 *)(gen_frame + 0x28)) = (ushort)uVar9;
                                      if (2 < (ushort)uVar9) goto LAB_00cf087c;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      *puVar23 = uVar9;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      puVar23[1] = uVar9;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      puVar23[2] = uVar9 + 1;
                                      uVar9 = F_00ceb540(uVar9 + 1);
                                      puVar23[3] = uVar9;
                                      uVar9 = F_00cebad0(param_1,6);
                                      *(char *)(puVar23 + 4) = (char)uVar9 + '\x01';
                                      uVar9 = F_00cebad0(param_1,8);
                                      iVar20 = 0;
                                      *(char *)((int)puVar23 + 0x11) = (char)uVar9;
                                      if ((char)puVar23[4] != '\0') {
                                        do {
                                          (*(byte *)(gen_frame + 0x27)) = 0;
                                          uVar9 = F_00cebad0(param_1,3);
                                          (*(byte *)(gen_frame + 0x1b)) = (byte)uVar9;
                                          uVar9 = F_00cebad0(param_1,1);
                                          if (uVar9 != 0) {
                                            uVar9 = F_00cebad0(param_1,5);
                                            (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                          }
                                          iVar14 = iVar20 + 1;
                                          ((byte *)(gen_frame + 0x720))[(int)(iVar20)] = (*(byte *)(gen_frame + 0x27)) * '\b' + (*(byte *)(gen_frame + 0x1b));
                                          iVar20 = iVar14;
                                        } while (iVar14 < (int)(uint)(byte)puVar23[4]);
                                      }
                                      uVar9 = F_00cefa40((uint)(byte)puVar23[4] << 4,param_1);
                                      puVar23[6] = uVar9;
                                      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                      if ((char)puVar23[4] != '\0') {
                                        do {
                                          (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                          ((byte * PTR32 *)(gen_frame + 0x760))[0] = (byte *)(uint)((byte *)(gen_frame + 0x720))[(int)((int)(*(float * PTR32 *)(gen_frame + 0x30)))];
                                          do {
                                            if (((uint)((byte * PTR32 *)(gen_frame + 0x760))[0] & 1 << ((byte)(*(float * PTR32 *)(gen_frame + 0x34)) & 0x1f))
                                                == 0) {
                                              *((undefined2 *)GEN_TOP((puVar23[6] +
                                               (int)((*(float * PTR32 *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2) * 2))) = 0xffff;
                                            }
                                            else {
                                              pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2;
                                              uVar9 = F_00cebad0(param_1,8);
                                              *(short *)((int)((int)(uintptr_t)pfVar12) * 2 + puVar23[6]) =
                                                   (short)uVar9;
                                              if ((int)param_1[0x11] <=
                                                  (int)*(short *)((int)((int)(uintptr_t)pfVar12) * 2 + puVar23[6]))
                                              goto LAB_00cf087c;
                                            }
                                            pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
                                            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                          } while ((int)pfVar12 < 8);
                                          uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        } while ((int)uVar9 < (int)(uint)(byte)puVar23[4]);
                                      }
                                      pvVar11 = (undefined *)F_00cefa40(*((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12]
                                                                                      + (uint)*((byte *)GEN_TOP(((
                                                  int)puVar23 + 0x11))) * 4))) + 0x10))) * 4,param_1);
                                      puVar23[5] = (uint)pvVar11;
                                      if (pvVar11 == (undefined *)0x0) goto LAB_00cf08b0;
                                      F_00c48350(pvVar11,0,
                                              *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                               (uint)*(byte *)((int)puVar23 + 0x11)
                                                               * 4))) + 0x10))) * 4);
                                      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                      if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                               (uint)*(byte *)((int)puVar23 + 0x11)
                                                               * 4))) + 0x10)))) {
                                        do {
                                          pfVar12 = (*(float * PTR32 *)(gen_frame + 0x30));
                                          pbVar21 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                       (uint)*(byte *)((int)puVar23
                                                                                      + 0x11) * 4))) +
                                                              8)));
                                          ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21;
                                          uVar9 = F_00cefa40(pbVar21,param_1);
                                          *(uint *)(puVar23[5] + (int)((int)(uintptr_t)pfVar12) * 4) = uVar9;
                                          (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)(((byte * PTR32 *)(gen_frame + 0x760))[0] - 1);
                                          if (-1 < (int)(((byte * PTR32 *)(gen_frame + 0x760))[0] - 1)) {
                                            uVar9 = (uint)(byte)puVar23[4];
                                            do {
                                              *((char *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x34)) +
                                                       *(int *)(puVar23[5] + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 4)))) =
                                                   (char)((int)((int)(uintptr_t)pfVar12) % (int)uVar9);
                                              uVar9 = (uint)(byte)puVar23[4];
                                              pfVar12 = (float *)((int)((int)(uintptr_t)pfVar12) / (int)uVar9);
                                              pfVar26 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) - 1);
                                              (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar26;
                                            } while (-1 < (int)pfVar26);
                                          }
                                          uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        } while ((int)uVar9 <
                                                 *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                  (uint)*(byte *)((int)puVar23 +
                                                                                 0x11) * 4))) + 0x10))))
                                        ;
                                      }
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 2);
                                      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 7;
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x35]);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x57] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0x28,param_1);
                                  param_1[0x58] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x57]) {
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
                                    do {
                                      puVar24 = (ushort *)(param_1[0x58] + (int)(*(float * PTR32 *)(gen_frame + 0x28)));
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      if (uVar9 != 0) goto LAB_00cf087c;
                                      uVar9 = F_00cefa40(param_1[2] * 3,param_1);
                                      *(uint *)(puVar24 + 2) = uVar9;
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        *(undefined1 *)(puVar24 + 4) = 1;
                                      }
                                      else {
                                        uVar9 = F_00cebad0(param_1,4);
                                        *(char *)(puVar24 + 4) = (char)uVar9;
                                      }
                                      if (bVar6 < (byte)puVar24[4]) {
                                        bVar6 = (byte)puVar24[4];
                                      }
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        *puVar24 = 0;
                                      }
                                      else {
                                        uVar9 = F_00cebad0(param_1,8);
                                        uVar8 = (short)uVar9 + 1;
                                        *puVar24 = uVar8;
                                        (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                        if (uVar8 != 0) {
                                          uVar9 = param_1[2];
                                          iVar20 = 0;
                                          do {
                                            iVar14 = 0x1f;
                                            if (uVar9 != 0) {
                                              for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 - 1) {
                                              }
                                            }
                                            if (uVar9 != 0) {
                                              iVar14 = iVar14 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar14 - 1);
                                            *((char *)GEN_TOP((iVar20 + *(int *)(puVar24 + 2)))) = (char)uVar9;
                                            iVar14 = 0x1f;
                                            bVar28 = param_1[2] != 0;
                                            if (bVar28) {
                                              for (; param_1[2] >> iVar14 == 0; iVar14 = iVar14 - 1
                                                  ) {
                                              }
                                            }
                                            if (bVar28) {
                                              iVar14 = iVar14 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar14 - 1);
                                            *((char *)GEN_TOP((iVar20 + 1 + *(int *)(puVar24 + 2)))) =
                                                 (char)uVar9;
                                            uVar9 = param_1[2];
                                            pbVar21 = ((byte *)GEN_TOP((iVar20 + *(int *)(puVar24 + 2))));
                                            if ((((int)uVar9 <= (int)(uint)*pbVar21) ||
                                                ((int)uVar9 <= (int)(uint)pbVar21[1])) ||
                                               (*pbVar21 == pbVar21[1])) goto LAB_00cf087c;
                                            pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
                                            iVar20 = iVar20 + 3;
                                            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                          } while ((int)pfVar12 < (int)(uint)*puVar24);
                                        }
                                      }
                                      uVar9 = F_00cebad0(param_1,2);
                                      if (uVar9 != 0) goto LAB_00cf087c;
                                      if ((byte)puVar24[4] < 2) {
                                        iVar20 = 0;
                                        if (0 < (int)param_1[2]) {
                                          iVar14 = 0;
                                          do {
                                            *((undefined1 *)GEN_TOP((iVar14 + 2 + *(int *)(puVar24 + 2)))) = 0;
                                            iVar20 = iVar20 + 1;
                                            iVar14 = iVar14 + 3;
                                          } while (iVar20 < (int)param_1[2]);
                                        }
                                      }
                                      else {
                                        (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        if (0 < (int)param_1[2]) {
                                          iVar20 = 0;
                                          do {
                                            uVar9 = F_00cebad0(param_1,4);
                                            *((char *)GEN_TOP((iVar20 + 2 + *(int *)(puVar24 + 2)))) =
                                                 (char)uVar9;
                                            if ((byte)puVar24[4] <=
                                                *((byte *)GEN_TOP((iVar20 + 2 + *(int *)(puVar24 + 2)))))
                                            goto LAB_00cf087c;
                                            uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                            iVar20 = iVar20 + 3;
                                            (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                          } while ((int)uVar9 < (int)param_1[2]);
                                        }
                                      }
                                      if ((char)puVar24[4] != '\0') {
                                        pbVar21 = (byte *)((int)puVar24 + 9);
                                        ((byte * PTR32 *)(gen_frame + 0x760))[0] = (byte *)(-9 - (int)puVar24);
                                        do {
                                          F_00cebad0(param_1,8);
                                          uVar9 = F_00cebad0(param_1,8);
                                          *pbVar21 = (byte)uVar9;
                                          uVar9 = F_00cebad0(param_1,8);
                                          pbVar21[0xf] = (byte)uVar9;
                                          if (((int)param_1[0x13] <= (int)(uint)*pbVar21) ||
                                             ((int)param_1[0x35] <= (int)(uVar9 & 0xff)))
                                          goto LAB_00cf087c;
                                          pbVar21 = pbVar21 + 1;
                                        } while ((int)(((byte * PTR32 *)(gen_frame + 0x760))[0] + (int)pbVar21) <
                                                 (int)(uint)(byte)puVar24[4]);
                                      }
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 10;
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x57]);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  iVar20 = 0;
                                  param_1[0x59] = uVar9 + 1;
                                  if (0 < (int)(uVar9 + 1)) {
                                    psVar25 = (short *)((int)param_1 + 0x16a);
                                    do {
                                      uVar9 = F_00cebad0(param_1,1);
                                      *(char *)(psVar25 - 1) = (char)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *psVar25 = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      psVar25[1] = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      *(char *)((int)psVar25 - 1) = (char)uVar9;
                                      if (((*psVar25 != 0) || (psVar25[1] != 0)) ||
                                         ((int)param_1[0x57] <= (int)(uVar9 & 0xff)))
                                      goto LAB_00cf087c;
                                      iVar20 = iVar20 + 1;
                                      psVar25 = psVar25 + 3;
                                    } while (iVar20 < (int)param_1[0x59]);
                                  }
                                  F_00ceba90(param_1);
                                  param_1[0xeb] = 0;
                                  uVar9 = F_00cefa40(param_1[2] *
                                                       (((param_1[0x10] & 0x3fffffff) * 2 + 0xf +
                                                         ((*(int *)(gen_frame + 0xc)) + param_1[0x10] * 2) * 2 &
                                                        0xfffffff0) + 0x180) + 0xf,param_1);
                                  param_1[0xba] = uVar9;
                                  iVar20 = 0;
                                  uVar9 = uVar9 + 0xf & 0xfffffff0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xbb;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      puVar23 = puVar23 + 1;
                                      uVar9 = uVar9 + 0x80 + param_1[0x10] * 4;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  iVar20 = 0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xdb;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      puVar23 = puVar23 + 1;
                                      uVar9 = uVar9 + 0x80 + (param_1[0x10] & 0x3fffffff) * 2;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  iVar20 = 0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xec;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      uVar9 = uVar9 + ((*(int *)(gen_frame + 0xc)) * 2 + 0xfU & 0xfffffff0) + 0x80;
                                      puVar23 = puVar23 + 1;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  uVar9 = F_00cefbf0(param_1,0,param_1[0xf]);
                                  if ((uVar9 != 0) &&
                                     (uVar9 = F_00cefbf0(param_1,1,param_1[0x10]), uVar9 != 0)) {
                                    *(undefined1 *)((int)param_1 + 0x535) = 1;
                                    F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c) GEN_EDX_ARG);
                                    return 1;
                                  }
                                  goto LAB_00cf088d;
                                }
                                bVar28 = param_1[0xd] == 0;
                                uVar9 = 3;
                              }
                              goto LAB_00cf0885;
                            }
                          }
LAB_00cf087c: ;
                          uVar9 = 0x14;
                        }
                      }
                      else {
                        uVar9 = 5;
                      }
                    }
                  }
                  else {
                    uVar9 = 0x22;
                  }
                }
              }
LAB_00cf0881: ;
              bVar28 = param_1[0xd] == 0;
            }
            else {
              bVar28 = param_1[0xd] == 0;
              uVar9 = 0x22;
            }
          }
          else {
            bVar28 = param_1[0xd] == 0;
            uVar9 = 0x22;
          }
        }
        else {
          bVar28 = param_1[0xd] == 0;
          uVar9 = 0x22;
        }
      }
      else {
        bVar28 = param_1[0xd] == 0;
        uVar9 = 0x22;
      }
    }
    else {
      bVar28 = param_1[0xd] == 0;
      uVar9 = 0x22;
    }
  }
  else {
LAB_00cefd76: ;
    bVar28 = param_1[0xd] == 0;
    uVar9 = 0x1e;
  }
LAB_00cf0885: ;
  param_1[0xe] = uVar9;
  if (bVar28) {
    param_1[0xe] = uVar9;
  }
LAB_00cf088d: ;
  F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c) GEN_EDX_ARG);
  return 0;
code_r0x00cf05af: ;
  ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21;
  (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)0xffffffff;
  uVar9 = F_00cebad0(param_1,5);
  iVar20 = 0;
  *pbVar21 = (byte)uVar9;
  if ((byte)uVar9 != 0) {
    do {
      uVar9 = F_00cebad0(param_1,4);
      pbVar21[iVar20 + 1] = (byte)uVar9;
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2c)) < (int)(uVar9 & 0xff)) {
        (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uVar9 & 0xff);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)(uint)*pbVar21);
  }
  iVar20 = 0;
  if (-1 < (int)(*(float * PTR32 *)(gen_frame + 0x2c))) {
    (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(pbVar21 + 0x52);
    do {
      uVar9 = F_00cebad0(param_1,3);
      pbVar21[iVar20 + 0x21] = (char)uVar9 + 1;
      uVar9 = F_00cebad0(param_1,2);
      pbVar21[iVar20 + 0x31] = (byte)uVar9;
      if ((byte)uVar9 != 0) {
        uVar9 = F_00cebad0(param_1,8);
        pbVar21[iVar20 + 0x41] = (byte)uVar9;
        if ((int)param_1[0x11] <= (int)(uVar9 & 0xff)) goto LAB_00cf087c;
      }
      (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
      if (0 < 1 << (pbVar21[iVar20 + 0x31] & 0x1f)) {
        (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x20));
        do {
          uVar9 = F_00cebad0(param_1,8);
          sVar7 = (short)uVar9 - 1;
          *(short *)(*(float * PTR32 *)(gen_frame + 0x28)) = sVar7;
          if ((int)param_1[0x11] <= (int)sVar7) goto LAB_00cf087c;
          bVar4 = pbVar21[iVar20 + 0x31];
          (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 2);
          pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
          (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
        } while ((int)pfVar12 < 1 << (bVar4 & 0x1f));
      }
      (*(float * PTR32 *)(gen_frame + 0x20)) = (*(float * PTR32 *)(gen_frame + 0x20)) + 4;
      iVar20 = iVar20 + 1;
    } while (iVar20 <= (int)(*(float * PTR32 *)(gen_frame + 0x2c)));
  }
  uVar9 = F_00cebad0(param_1,2);
  pbVar21[0xa1c] = (char)uVar9 + 1;
  uVar9 = F_00cebad0(param_1,4);
  pbVar21[0x152] = 0;
  pbVar21[0x153] = 0;
  pbVar21[0xa1d] = (byte)uVar9;
  *(short *)(pbVar21 + 0x154) = 1 << ((byte)uVar9 & 0x1f);
  pbVar21[0xa20] = 2;
  pbVar21[0xa21] = 0;
  pbVar21[0xa22] = 0;
  pbVar21[0xa23] = 0;
  (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
  if (*pbVar21 != 0) {
    do {
      iVar20 = 0;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)(uint)pbVar21[(int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1];
      if ((pbVar21 + 0x21)[(int)(uint)pbVar21[(int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1]] != 0) {
        do {
          uVar9 = F_00cebad0(param_1,(uint)pbVar21[0xa1d]);
          *((short *)GEN_TOP((pbVar21 + *(int *)(pbVar21 + 0xa20) * 2 + 0x152))) = (short)uVar9;
          *(int *)(pbVar21 + 0xa20) = *(int *)(pbVar21 + 0xa20) + 1;
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)(uint)pbVar21[(int)((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + 0x21)]);
      }
      iVar20 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)iVar20;
    } while (iVar20 < (int)(uint)*pbVar21);
  }
  iVar20 = 0;
  if (0 < *(int *)(pbVar21 + 0xa20)) {
    pbVar17 = pbVar21 + 0x152;
    do {
      *(undefined2 *)(&(*(undefined4 *)(gen_frame + 0x338)) + iVar20) = *(undefined2 *)pbVar17;
      *(short *)((int)&(*(undefined4 *)(gen_frame + 0x338)) + iVar20 * 4 + 2) = (short)iVar20;
      iVar20 = iVar20 + 1;
      pbVar17 = pbVar17 + 2;
    } while (iVar20 < *(int *)(pbVar21 + 0xa20));
  }
  pfVar19 = *(float * PTR32 *)(pbVar21 + 0xa20);
  (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)&(*(undefined4 *)(gen_frame + 0x338));
  pfVar12 = (float *)&(*(undefined4 *)(gen_frame + 0x338));
  pfVar26 = &(*(float *)(gen_frame + 0x334)) + (int)pfVar19;
  pfVar22 = pfVar19;
  do {
    pfVar18 = (*(float * PTR32 *)(gen_frame + 0x34));
    (*(float * PTR32 *)(gen_frame + 0x34)) = (*(float * PTR32 *)(gen_frame + 0x34)) - 3;
    pfVar22 = ((float *)GEN_TOP((((uint)((int)(uintptr_t)pfVar22) >> 1) + ((uint)((int)(uintptr_t)pfVar22) >> 2))));
  } while (pfVar22 != (float *)0x0);
  pfVar18[-4] = 0.0;
  pbVar21 = ((byte * PTR32 *)(gen_frame + 0x760))[0];
  while (pfVar22 = (*(float * PTR32 *)(gen_frame + 0x34)), ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21, pfVar19 != (float *)0x0) {
    while ((float *)0x1 < pfVar19) {
      if (pfVar19 == (float *)0x2) {
        if (*(ushort *)pfVar26 < *(ushort *)pfVar12) {
          fVar16 = *pfVar12;
          *pfVar12 = *pfVar26;
          *pfVar26 = fVar16;
        }
        break;
      }
      pfVar18 = pfVar12 + ((uint)((int)(uintptr_t)pfVar19) >> 1);
      (*(float * PTR32 *)(gen_frame + 0x2c)) = pfVar18;
      uVar8 = *(ushort *)pfVar18;
      uVar1 = *(ushort *)pfVar26;
      if (uVar8 < *(ushort *)pfVar12) {
        if (uVar8 < uVar1) {
          if (*(ushort *)pfVar12 < uVar1) {
            pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar12)));
            (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
            *pfVar12 = *pfVar18;
            *pfVar18 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
          }
          else {
            pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar26)));
            (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
            *pfVar26 = *pfVar12;
            *pfVar12 = *pfVar18;
            *pfVar18 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
          }
        }
        else {
          fVar16 = *pfVar12;
          *pfVar12 = *pfVar26;
          *pfVar26 = fVar16;
        }
      }
      else if (uVar1 < uVar8) {
        if (*(ushort *)pfVar12 < uVar1) {
          pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar18)));
          (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
          *pfVar18 = *pfVar26;
          *pfVar26 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        }
        else {
          pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar26)));
          (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
          *pfVar26 = *pfVar18;
          *pfVar18 = *pfVar12;
          *pfVar12 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        }
      }
      if (pfVar19 < &REFG(undefined, 0x5)) {
        if (pfVar19 != (float *)0x3) {
          uVar8 = *(ushort *)(pfVar12 + 1);
          if (*(ushort *)pfVar18 < uVar8) {
            if (uVar8 < *(ushort *)pfVar26) {
              fVar16 = pfVar12[1];
              pfVar12[1] = *pfVar18;
              *pfVar18 = fVar16;
            }
            else {
              fVar16 = *pfVar26;
              *pfVar26 = pfVar12[1];
              pfVar12[1] = *pfVar18;
              *pfVar18 = fVar16;
            }
          }
          else if (uVar8 < *(ushort *)pfVar12) {
            fVar16 = *pfVar12;
            *pfVar12 = pfVar12[1];
            pfVar12[1] = fVar16;
          }
        }
        break;
      }
      if (pfVar22 == (float *)&(*(undefined4 *)(gen_frame + 0x338))) {
        pfVar18 = pfVar12 + ((uint)((int)(uintptr_t)pfVar19) >> 1);
        uVar9 = (uint)((int)(uintptr_t)pfVar19) >> 1;
LAB_00cf0b35: ;
        uVar10 = uVar9 - 1;
        pfVar18 = pfVar18 - 1;
        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar18;
        (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(uVar9 + uVar10);
LAB_00cf0b60: ;
        pfVar15 = pfVar12 + (int)(*(float * PTR32 *)(gen_frame + 0x20));
        (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar15;
        pfVar27 = pfVar15 + 1;
        (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar27;
        uVar8 = *(ushort *)pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
        if ((pfVar27 <= pfVar26) && (uVar8 < *(ushort *)pfVar27)) {
          (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) + 1);
          (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar27;
          uVar8 = *(ushort *)pfVar27;
        }
        if (*(ushort *)(*(float * PTR32 *)(gen_frame + 0x28)) < uVar8) goto code_r0x00cf0bc0;
        goto LAB_00cf0bfe;
      }
      uVar8 = *(ushort *)pfVar18;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
      fVar16 = *pfVar18;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
      *pfVar18 = *pfVar12;
      *pfVar12 = fVar16;
      (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar26;
      pfVar19 = pfVar26;
      pfVar18 = pfVar12;
      while( true ) {
        do {
          pfVar19 = pfVar19 - 1;
        } while (uVar8 < *(ushort *)pfVar19);
        pfVar15 = pfVar18;
        if (pfVar19 <= pfVar18) break;
        do {
          pfVar18 = pfVar15;
          pfVar15 = pfVar18 + 1;
        } while (*(ushort *)pfVar15 < uVar8);
        if (pfVar19 <= pfVar15) break;
        fVar16 = *pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
        *pfVar15 = *pfVar19;
        *pfVar19 = fVar16;
        pfVar18 = pfVar15;
      }
      uVar8 = *(ushort *)pfVar12;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
      fVar16 = *pfVar12;
      *pfVar12 = *pfVar18;
      *pfVar18 = fVar16;
      (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar18;
      pfVar15 = pfVar18;
      do {
        pfVar15 = pfVar15 + 1;
        if (pfVar26 <= pfVar15) break;
      } while (*(ushort *)pfVar15 <= uVar8);
      pfVar18 = pfVar18 - 1;
      (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar15;
      (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar18;
      if (pfVar12 < pfVar18) {
        do {
          if (*(ushort *)pfVar18 < uVar8) break;
          pfVar18 = pfVar18 - 1;
        } while (pfVar12 < pfVar18);
        (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar18;
      }
      pfVar27 = ((float *)GEN_TOP((((int)pfVar18 - (int)((int)(uintptr_t)pfVar12) >> 2) + 1)));
      pfVar19 = ((float *)GEN_TOP((((int)pfVar26 - (int)((int)(uintptr_t)pfVar15) >> 2) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar27;
      if (pfVar19 < pfVar27) {
        pfVar22[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar26)));
        pfVar22[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        *pfVar22 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        pfVar15 = pfVar12;
        pfVar19 = pfVar27;
        pfVar26 = pfVar18;
      }
      else {
        *pfVar22 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
        pfVar22[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)));
        pfVar22[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar27)));
      }
      pfVar22 = pfVar22 + 3;
      (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar22;
      pfVar12 = pfVar15;
    }
LAB_00cf0c92: ;
    pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-1])));
    pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-3])));
    pfVar26 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-2])));
    (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar22 - 3;
    pbVar21 = ((byte * PTR32 *)(gen_frame + 0x760))[0];
  }
  iVar20 = 0;
  if (0 < *(int *)(pbVar21 + 0xa20)) {
    do {
      pbVar21[iVar20 + 0x346] = *(byte *)((int)&(*(undefined4 *)(gen_frame + 0x338)) + iVar20 * 4 + 2);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(pbVar21 + 0xa20));
  }
  (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x2;
  if (2 < *(int *)(pbVar21 + 0xa20)) {
    (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(pbVar21 + 0x63c);
    (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(pbVar21 + 0x445);
    do {
      (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)0x0;
      (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
      F_00ceb4d0(pbVar21 + 0x152,(*(float * PTR32 *)(gen_frame + 0x30)),&(*(float * PTR32 *)(gen_frame + 0x14)),&(*(float * PTR32 *)(gen_frame + 0x28)));
      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x20));
      *(char *)(*(float * PTR32 *)(gen_frame + 0x20)) = (char)(*(float * PTR32 *)(gen_frame + 0x28));
      *(char *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) - 1) = (char)(*(float * PTR32 *)(gen_frame + 0x14));
      fVar16 = gen_bits2f(F_00ceb540((uint)*(ushort *)(pbVar21 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x28))) * 2 + 0x152) -
                                       (uint)*(ushort *)(pbVar21 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x14))) * 2 + 0x152)));
      *(*(float * PTR32 *)(gen_frame + 0x2c)) = fVar16;
      uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)((int)pfVar12 + 2);
    } while ((int)uVar9 < *(int *)(pbVar21 + 0xa20));
  }
  if ((*(int *)(gen_frame + 0xc)) < *(int *)(pbVar21 + 0xa20)) {
    (*(int *)(gen_frame + 0xc)) = *(int *)(pbVar21 + 0xa20);
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((int)param_1[0x13] <= (*(int *)(gen_frame + 0x10))) goto LAB_00cf0dc5;
  goto LAB_00cf0580;
code_r0x00cf0bc0: ;
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x28)))));
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
  *(*(float * PTR32 *)(gen_frame + 0x28)) = *(*(float * PTR32 *)(gen_frame + 0x30));
  *(*(float * PTR32 *)(gen_frame + 0x30)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
  pfVar15 = (float *)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x20))) * 2 + 1);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar15;
  if (pfVar19 <= pfVar15) {
LAB_00cf0bfe: ;
    uVar9 = uVar10;
    if (uVar10 == 0) {
      fVar16 = *pfVar12;
      *pfVar12 = *pfVar26;
      *pfVar26 = fVar16;
      pfVar19 = (float *)((int)pfVar19 - 1);
      pfVar26 = pfVar26 - 1;
      (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
      (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)0x1;
      if (pfVar19 < (float *)0x2) goto LAB_00cf0c92;
      goto LAB_00cf0b60;
    }
    goto LAB_00cf0b35;
  }
  goto LAB_00cf0b60;
LAB_00cf08b0: ;
  uVar9 = 3;
  goto LAB_00cf0881;
}

/* ref: FUN_00cf1530 */
GEN_FRAME unsigned int F_00cf1530(unsigned int gen_a0)
{
  GEN_ENTER(0xcf1530u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < *(int *)(in_esi + 0xd4)) {
    local_8 = 0;
    do {
      iVar2 = *(int *)(in_esi + 0x158) + local_8;
      if (*(int *)(iVar2 + 0x14) == 0) {
LAB_00cf15a9: ;
        if (*(int *)(in_esi + 0x24) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar2 + 0x18));
        }
      }
      else {
        iVar1 = 0;
        if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_esi + 0x48) + (uint)*(byte *)(iVar2 + 0x11) * 4))) +
                        0x10)))) {
          do {
            if (*(int *)(in_esi + 0x24) == 0) {
              ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x14) + iVar1 * 4))));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_esi + 0x48) +
                                            (uint)*(byte *)(iVar2 + 0x11) * 4))) + 0x10))));
        }
        if (*(int *)(in_esi + 0x24) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar2 + 0x14));
          goto LAB_00cf15a9;
        }
      }
      local_8 = local_8 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < *(int *)(in_esi + 0xd4));
  }
  if (*(int *)(in_esi + 0x48) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_esi + 0x44)) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(in_esi + 0x48) + iVar2 * 4)));
        if ((*(int *)(in_esi + 0x24) == 0) &&
           (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar1 + 4)), *(int *)(in_esi + 0x24) == 0)) {
          ((code *)REFG(gen_code32, 0x15d92fc))(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_esi + 0x44));
    }
    if (*(int *)(in_esi + 0x24) != 0) goto LAB_00cf167a;
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x48));
  }
  if ((((*(int *)(in_esi + 0x24) == 0) &&
       (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x420)), *(int *)(in_esi + 0x24) == 0)) &&
      (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x424)), *(int *)(in_esi + 0x24) == 0)) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0xd0)), *(int *)(in_esi + 0x24) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x158));
  }
LAB_00cf167a: ;
  iVar2 = 0;
  if (0 < *(int *)(in_esi + 0x15c)) {
    iVar1 = 0;
    do {
      if (*(int *)(in_esi + 0x24) == 0) {
        ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*(int *)(in_esi + 0x160) + 4 + iVar1))));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)(in_esi + 0x15c));
  }
  if ((*(int *)(in_esi + 0x24) == 0) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x160)), *(int *)(in_esi + 0x24) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x2e8));
  }
  puVar3 = (undefined4 *)(in_esi + 0x3f8);
  iVar2 = 2;
  do {
    if (*(int *)(in_esi + 0x24) == 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*puVar3);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00cf1710 */
GEN_FRAME unsigned int F_00cf1710(unsigned int gen_a0)
{
  GEN_ENTER(0xcf1710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    F_00cf1530(param_1);
  }
  return;
}

/* ref: FUN_00cf1770 */
GEN_FRAME uint F_00cf1770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf1770u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int in_edi;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  in_edi = (*(int *)&gen_args[0]);
  if ((*(int *)((*(int *)&gen_args[0]) + 0x14) == *(int *)((*(int *)&gen_args[0]) + 0x10)) &&
     (uVar2 = F_00cefd20((*(int *)&gen_args[0])), uVar2 == 0)) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  if (-1 < *(int *)(in_edi + 0x560)) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    uVar2 = F_00cef3f0(in_edi,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]));
    return uVar2;
  }
  *(int *)(in_edi + 0x10) = (*(int *)&gen_args[1]);
  *(int *)(in_edi + 0x18) = (*(int *)&gen_args[1]) + (*(int *)&gen_args[2]);
  *(undefined4 *)(in_edi + 0x38) = 0;
  uVar2 = F_00cef1d0(in_edi,0);
  if (uVar2 == 0) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  uVar2 = F_00cee500(&(*(int *)(gen_frame + 0x8)),&(*(int *)&gen_args[0]),in_edi,&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    uVar2 = F_00cef040(in_edi,(*(undefined4 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)),(*(int *)&gen_args[0]));
    iVar4 = 0;
    if (0 < *(int *)(in_edi + 8)) {
      piVar3 = (int *)(in_edi + 0x32c);
      do {
        *piVar3 = piVar3[-0x10] + (*(int *)(gen_frame + 0x8)) * 4;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *(int *)(in_edi + 8));
    }
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = *(undefined4 *)(in_edi + 8);
    }
    *(*(uint * PTR32 *)&gen_args[5]) = uVar2;
    *(*(int * PTR32 *)&gen_args[4]) = in_edi + 0x32c;
    return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
  }
  iVar4 = *(int *)(in_edi + 0x38);
  if (iVar4 != 0x23) {
    if ((iVar4 == 0x20) && (*(int *)(in_edi + 0x3ac) == 0)) {
      *(undefined4 *)(in_edi + 0x38) = 0;
      uVar2 = F_00ceba40(in_edi);
      while ((uVar2 != 0xffffffff && (*(int *)(in_edi + 0x34) == 0))) {
        uVar2 = F_00ceba40(in_edi);
      }
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
    }
    F_00cef3b0(in_edi);
    *(int *)(in_edi + 0x38) = iVar4;
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 1;
  }
  *(undefined4 *)(in_edi + 0x38) = 0;
  do {
    if (*(char *)(in_edi + 0x534) == '\0') {
      if (*(int *)(in_edi + 0x53c) == 0) {
        uVar2 = F_00ceb960(in_edi);
        if (uVar2 != 0) goto LAB_00cf1836;
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
LAB_00cf1836: ;
      *(char *)(in_edi + 0x534) = *(char *)(in_edi + 0x534) - 1;
      bVar1 = **(byte * PTR32 *)(in_edi + 0x10);
      *(byte * PTR32 *)(in_edi + 0x10) = *(byte * PTR32 *)(in_edi + 0x10) + 1;
      uVar2 = (uint)bVar1;
    }
    *(undefined4 *)(in_edi + 0x548) = 0;
    *(undefined4 *)(in_edi + 0x544) = 0;
    if ((uVar2 == 0xffffffff) || (*(int *)(in_edi + 0x34) != 0)) {
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
    }
  } while( true );
}

/* ref: FUN_00cf1940 */
GEN_FRAME uint F_00cf1940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf1940u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x5d0];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x5c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5cc);
  F_00c48350(((byte *)(gen_frame + 0xc)),0,0x5bc);
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x56c)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = param_2 + param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = param_1;
  ((byte *)(gen_frame + 0xc))[0x20] = 1;
  uVar1 = F_00cefd20(((byte *)(gen_frame + 0xc)));
  if (uVar1 == 0) {
    if ((*(int *)(gen_frame + 0x40)) != 0) {
      *param_4 = 1;
      F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
      return 0;
    }
    *param_4 = (*(undefined4 *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
    return 0;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48)) + 0x5bc;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) < (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 0x5bc) goto LAB_00cf1a87;
    puVar2 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)))));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 0x5bc;
  }
  if (puVar2 != (undefined4 *)0x0) {
    pbVar4 = ((byte *)(gen_frame + 0xc));
    puVar5 = puVar2;
    for (iVar3 = 0x16f; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    *param_3 = puVar2[4] - param_1;
    *param_4 = 0;
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
    return (uint)puVar2;
  }
LAB_00cf1a87: ;
  F_00cf1530(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cf1ab0 */
GEN_FRAME uint F_00cf1ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf1ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x5c0];
  undefined4 * puVar1;
  int iVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  
  F_00c48350(((byte *)(gen_frame + 0x0)),0,0x5bc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x560)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = param_1 + param_2;
  ((byte *)(gen_frame + 0x0))[0x20] = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = param_3;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = param_4;
  if (param_3 == (undefined4 *)0x0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x5bc;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if (param_4 < 0x5bc) {
      return 0;
    }
    ((byte *)(gen_frame + 0x0))[0x2c] = 0xbc;
    ((byte *)(gen_frame + 0x0))[0x2d] = 5;
    ((byte *)(gen_frame + 0x0))[0x2e] = 0;
    ((byte *)(gen_frame + 0x0))[0x2f] = 0;
    puVar1 = param_3;
  }
  if (puVar1 != (undefined4 *)0x0) {
    pbVar3 = ((byte *)(gen_frame + 0x0));
    puVar4 = puVar1;
    for (iVar2 = 0x16f; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cf1b70 */
GEN_FRAME uint GEN_FASTCALL F_00cf1b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf1b70u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11320];
  char * pcVar1;
  byte * pbVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  short * psVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0x11318)) = 0xcf1b7d;
  (*(uint *)(gen_frame + 0x11318)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pcVar1 = (char *)param_2[4];
  cVar4 = *pcVar1;
  (*(int *)(gen_frame + 0x10018)) = 0;
  (*(uint *)(gen_frame + 0x10008)) = 0;
  (*(int *)(gen_frame + 0x1000c)) = 0;
  param_2[4] = (uint)(pcVar1 + 1);
  if (cVar4 == 'O') {
    cVar4 = pcVar1[1];
    param_2[4] = (uint)(pcVar1 + 2);
    if (cVar4 != 'g') goto LAB_00cf1bdd;
    cVar4 = pcVar1[2];
    param_2[4] = (uint)(pcVar1 + 3);
    if ((cVar4 != 'g') || (cVar4 = pcVar1[3], param_2[4] = (uint)(pcVar1 + 4), cVar4 != 'S'))
    goto LAB_00cf1bdd;
    uVar6 = F_00ceb650(param_2);
    if (uVar6 == 0) goto LAB_00cf1c07;
    bVar11 = *(byte *)((int)param_2 + 0x533);
    if (((((bVar11 & 2) != 0) && ((bVar11 & 4) == 0)) && ((bVar11 & 1) == 0)) &&
       (((param_2[0x10c] == 1 && ((char)param_2[0x10d] == '\x1e')) &&
        (cVar4 = *(char *)param_2[4], param_2[4] = (uint)((char *)param_2[4] + 1), cVar4 == '\x01'))
       )) {
      uVar6 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x11310)),param_2,6);
      if (uVar6 == 0) {
        bVar15 = param_2[0xd] == 0;
        uVar6 = 10;
      }
      else {
        uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11310)));
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
        }
        else {
          uVar6 = F_00ceb570(param_2);
          if (uVar6 == 0) {
            bVar11 = *(byte *)param_2[4];
            param_2[4] = (uint)((byte *)param_2[4] + 1);
            uVar6 = (uint)bVar11;
            param_2[2] = uVar6;
            if (uVar6 == 0) {
              bVar15 = param_2[0xd] == 0;
              uVar6 = 0x22;
            }
            else if (uVar6 < 0x11) {
              uVar6 = F_00ceb570(param_2);
              *param_2 = uVar6;
              if (uVar6 == 0) {
                bVar15 = param_2[0xd] == 0;
                uVar6 = 0x22;
              }
              else {
                F_00ceb570(param_2);
                uVar6 = F_00ceb570(param_2);
                param_2[1] = uVar6;
                F_00ceb570(param_2);
                pbVar2 = (byte *)param_2[4];
                bVar11 = *pbVar2 >> 4;
                uVar6 = *pbVar2 & 0xf;
                param_2[4] = (uint)(pbVar2 + 1);
                param_2[0xf] = 1 << (sbyte)uVar6;
                param_2[0x10] = 1 << bVar11;
                if (((uVar6 - 6 < 8) && (bVar11 - 6 < 8)) && (uVar6 <= bVar11)) {
                  bVar11 = pbVar2[1];
                  param_2[4] = (uint)(pbVar2 + 2);
                  if ((bVar11 & 1) != 0) {
                    uVar6 = F_00ceb7e0(param_2);
                    if ((uVar6 == 0) || (uVar6 = F_00ceb830(param_2), uVar6 == 0))
                    goto LAB_00cf2ae2;
                    do {
                      uVar6 = F_00ceb960(param_2);
                      param_2[4] = param_2[4] + uVar6;
                      if (param_2[6] <= param_2[4]) {
                        param_2[0xd] = 1;
                      }
                      *(undefined1 *)(param_2 + 0x14d) = 0;
                    } while (uVar6 != 0);
                    uVar6 = F_00ceb830(param_2);
                    if (uVar6 == 0) goto LAB_00cf2ae2;
                    uVar6 = F_00cef1d0(param_2,1);
                    if (uVar6 == 0) {
                      if (param_2[0xe] == 0x15) {
                        param_2[0xe] = 0x14;
                        F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
                        return 0;
                      }
                      goto LAB_00cf2ae2;
                    }
                    uVar6 = F_00ceba40(param_2);
                    if (uVar6 == 5) {
                      iVar14 = 0;
                      do {
                        uVar6 = F_00ceba40(param_2);
                        *(char *)((int)((byte * PTR32 *)(gen_frame + 0x11310)) + iVar14) = (char)uVar6;
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < 6);
                      uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11310)));
                      if (uVar6 != 0) {
                        uVar6 = F_00cebad0(param_2,8);
                        uVar6 = uVar6 + 1;
                        (*(int *)(gen_frame + 0x10038)) = uVar6 * 4;
                        param_2[0x11] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar6 = F_00cebad0(param_2,8);
                            if ((((char)uVar6 != 'B') ||
                                (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'C')) ||
                               (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'V'))
                            goto LAB_00cf2ad1;
                            uVar6 = F_00cebad0(param_2,8);
                            uVar7 = F_00cebad0(param_2,8);
                            uVar6 = uVar7 * 0x100 + (uVar6 & 0xff);
                            uVar7 = F_00cebad0(param_2,8);
                            uVar8 = F_00cebad0(param_2,8);
                            uVar9 = F_00cebad0(param_2,8);
                            uVar7 = (uVar9 * 0x100 + (uVar8 & 0xff)) * 0x100 + (uVar7 & 0xff);
                            uVar8 = F_00cebad0(param_2,1);
                            if (uVar8 == 0) {
                              (*(uint *)(gen_frame + 0x10030)) = F_00cebad0(param_2,1);
                            }
                            else {
                              (*(uint *)(gen_frame + 0x10030)) = 0;
                            }
                            (*(int *)(gen_frame + 0x10018)) = (*(int *)(gen_frame + 0x10018)) + (uVar7 + 3 & 0xfffffffc);
                            ((uint *)(gen_frame + 0x10e90))[(int)((*(int *)(gen_frame + 0x10034)))] = uVar7;
                            ((uint *)(gen_frame + 0x10a90))[(int)((*(int *)(gen_frame + 0x10034)))] = uVar6;
                            (*(int *)(gen_frame + 0x1002c)) = 0;
                            F_00c48350(((int *)(gen_frame + 0x11290)),0,0x80);
                            bVar15 = false;
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if (uVar8 == 0) {
                              if (0 < (int)uVar7) {
                                do {
                                  if (((*(uint *)(gen_frame + 0x10030)) == 0) ||
                                     (uVar8 = F_00cebad0(param_2,1), uVar8 != 0)) {
                                    uVar9 = F_00cebad0(param_2,5);
                                    uVar9 = uVar9 + 1;
                                    uVar8 = uVar9;
                                    if (bVar15) {
                                      for (; (0 < (int)uVar8 && (((int *)(gen_frame + 0x11290))[(int)(uVar8)] == 0));
                                          uVar8 = uVar8 - 1) {
                                      }
                                      if (uVar8 == 0) goto LAB_00cf2ad1;
                                      ((byte * PTR32 *)(gen_frame + 0x11310))[0] = (byte *)((int *)(gen_frame + 0x11290))[(int)(uVar8)];
                                      ((int *)(gen_frame + 0x11290))[(int)(uVar8)] = 0;
                                      if ((int)uVar8 < (int)uVar9) {
                                        iVar14 = 0x20 - uVar9;
                                        do {
                                          if ((8 < (int)uVar9) && ((uVar9 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          bVar11 = (byte)iVar14;
                                          uVar10 = uVar9 - 1;
                                          iVar14 = iVar14 + 1;
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar9)] =
                                               (int)(((byte * PTR32 *)(gen_frame + 0x11310))[0] + (1 << (bVar11 & 0x1f)));
                                          uVar9 = uVar10;
                                        } while ((int)uVar8 < (int)uVar10);
                                      }
                                    }
                                    else {
                                      uVar8 = 1;
                                      bVar15 = true;
                                      (*(int *)(gen_frame + 0x1002c)) = 0x100;
                                      if (0 < (int)uVar9) {
                                        bVar11 = 0x1f;
                                        do {
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar8)] = 1 << (bVar11 & 0x1f);
                                          if ((8 < (int)uVar8) && ((uVar8 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          uVar8 = uVar8 + 1;
                                          bVar11 = bVar11 - 1;
                                        } while ((int)uVar8 <= (int)uVar9);
                                      }
                                    }
                                  }
                                  (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar7);
                              }
                            }
                            else {
                              uVar8 = F_00cebad0(param_2,5);
                              uVar8 = uVar8 + 1;
                              if (0 < (int)uVar7) {
                                (*(short * PTR32 *)(gen_frame + 0x10028)) = (short *)(0x20 - uVar8);
                                do {
                                  uVar9 = uVar7 - (*(int *)(gen_frame + 0x1003c));
                                  iVar14 = 0x1f;
                                  if (uVar9 != 0) {
                                    for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 - 1) {
                                    }
                                  }
                                  if (uVar9 != 0) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar9 = F_00cebad0(param_2,iVar14);
                                  if ((int)uVar7 < (int)(uVar9 + (*(int *)(gen_frame + 0x1003c)))) goto LAB_00cf2ad1;
                                  if (uVar9 == 0xff) {
                                    (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 0xff;
                                  }
                                  else {
                                    if (!bVar15) {
                                      uVar10 = 1;
                                      bVar15 = true;
                                      (*(int *)(gen_frame + 0x1002c)) = 0x100;
                                      if (0 < (int)uVar8) {
                                        bVar11 = 0x1f;
                                        do {
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar10)] = 1 << (bVar11 & 0x1f);
                                          if ((8 < (int)uVar10) && ((uVar10 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          uVar10 = uVar10 + 1;
                                          bVar11 = bVar11 - 1;
                                        } while ((int)uVar10 <= (int)uVar8);
                                      }
                                      (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                      uVar9 = uVar9 - 1;
                                    }
                                    (*(int *)(gen_frame + 0x1001c)) = 0;
                                    if (0 < (int)uVar9) {
                                      do {
                                        (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                        for (uVar10 = uVar8;
                                            (0 < (int)uVar10 && (((int *)(gen_frame + 0x11290))[(int)(uVar10)] == 0));
                                            uVar10 = uVar10 - 1) {
                                        }
                                        if (uVar10 == 0) goto LAB_00cf2ad1;
                                        ((byte * PTR32 *)(gen_frame + 0x11310))[0] = (byte *)((int *)(gen_frame + 0x11290))[(int)(uVar10)];
                                        ((int *)(gen_frame + 0x11290))[(int)(uVar10)] = 0;
                                        uVar3 = uVar8;
                                        psVar12 = (*(short * PTR32 *)(gen_frame + 0x10028));
                                        if (uVar8 != uVar10) {
                                          for (; (int)uVar10 < (int)uVar3; uVar3 = uVar3 - 1) {
                                            if ((8 < (int)uVar3) && ((uVar3 & 1) != 0)) {
                                              (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                            }
                                            bVar11 = (byte)psVar12;
                                            psVar12 = (short *)((int)psVar12 + 1);
                                            ((int *)(gen_frame + 0x11290))[(int)(uVar3)] =
                                                 (int)(((byte * PTR32 *)(gen_frame + 0x11310))[0] + (1 << (bVar11 & 0x1f)));
                                          }
                                        }
                                        (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
                                      } while ((*(int *)(gen_frame + 0x1001c)) < (int)uVar9);
                                    }
                                  }
                                  (*(short * PTR32 *)(gen_frame + 0x10028)) = (short *)((int)(*(short * PTR32 *)(gen_frame + 0x10028)) - 1);
                                  uVar8 = uVar8 + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar7);
                              }
                            }
                            uVar8 = F_00cebad0(param_2,4);
                            cVar4 = (char)uVar8;
                            if ('\x02' < cVar4) goto LAB_00cf2ad1;
                            if ('\0' < cVar4) {
                              F_00cebad0(param_2,0x20);
                              F_00cebad0(param_2,0x20);
                              uVar8 = F_00cebad0(param_2,4);
                              F_00cebad0(param_2,1);
                              if (cVar4 == '\x01') {
                                uVar9 = F_00cefae0(uVar7,uVar6);
                              }
                              else {
                                uVar9 = uVar7 * uVar6;
                              }
                              (*(int *)(gen_frame + 0x10018)) = (*(int *)(gen_frame + 0x10018)) + (uVar9 * 2 + 3 & 0xfffffffc);
                              (*(int *)(gen_frame + 0x1003c)) = 0;
                              if (0 < (int)uVar9) {
                                do {
                                  uVar10 = F_00cebad0(param_2,uVar8 + 1);
                                  if (uVar10 == 0xffffffff) goto LAB_00cf2ad1;
                                  (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar9);
                              }
                              if (cVar4 == '\x01') {
                                (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar7 * uVar6 * 4;
                              }
                              else {
                                (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar9 * 4;
                              }
                            }
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + (*(int *)(gen_frame + 0x1002c)) * 4 + 0x2c;
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x11]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = (uint)(byte)((char)uVar6 + 1);
                        if (uVar6 != 0) {
                          iVar14 = 0;
                          do {
                            uVar7 = F_00cebad0(param_2,0x10);
                            if (uVar7 != 0) goto LAB_00cf2ad1;
                            iVar14 = iVar14 + 1;
                          } while (iVar14 < (int)uVar6);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = uVar6 + 1;
                        param_2[0x13] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar7 = F_00cebad0(param_2,0x10);
                            if (1 < uVar7) goto LAB_00cf2ad1;
                            if (uVar7 == 0) {
                              uVar6 = 4;
                              goto LAB_00cf2ad6;
                            }
                            uVar8 = F_00cebad0(param_2,5);
                            uVar7 = 0xffffffff;
                            iVar14 = 0;
                            (*(uint *)(gen_frame + 0x10030)) = 0xffffffff;
                            if ((char)uVar8 != '\0') {
                              do {
                                uVar9 = F_00cebad0(param_2,4);
                                ((byte *)(gen_frame + 0x10045))[(int)(iVar14)] = (byte)uVar9;
                                if ((int)uVar7 < (int)(uVar9 & 0xff)) {
                                  uVar7 = uVar9 & 0xff;
                                }
                                iVar14 = iVar14 + 1;
                                (*(uint *)(gen_frame + 0x10030)) = uVar7;
                              } while (iVar14 < (int)(uVar8 & 0xff));
                            }
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if (-1 < (int)(*(uint *)(gen_frame + 0x10030))) {
                              (*(short * PTR32 *)(gen_frame + 0x10028)) = ((short *)(gen_frame + 0x10096));
                              do {
                                uVar7 = F_00cebad0(param_2,3);
                                ((byte *)(gen_frame + 0x10065))[(int)((*(int *)(gen_frame + 0x1003c)))] = (char)uVar7 + 1;
                                uVar7 = F_00cebad0(param_2,2);
                                bVar11 = (byte)uVar7;
                                ((byte *)(gen_frame + 0x10075))[(int)((*(int *)(gen_frame + 0x1003c)))] = bVar11;
                                if (bVar11 != 0) {
                                  uVar7 = F_00cebad0(param_2,8);
                                  ((undefined1 *)(gen_frame + 0x10085))[(int)((*(int *)(gen_frame + 0x1003c)))] = (char)uVar7;
                                  if ((int)param_2[0x11] <= (int)(uVar7 & 0xff)) goto LAB_00cf2ad1;
                                }
                                iVar14 = 0;
                                psVar12 = (*(short * PTR32 *)(gen_frame + 0x10028));
                                if (0 < 1 << (bVar11 & 0x1f)) {
                                  do {
                                    uVar7 = F_00cebad0(param_2,8);
                                    sVar5 = (short)uVar7 - 1;
                                    *psVar12 = sVar5;
                                    if ((int)param_2[0x11] <= (int)sVar5) goto LAB_00cf2ad1;
                                    iVar14 = iVar14 + 1;
                                    psVar12 = psVar12 + 1;
                                  } while (iVar14 < 1 << (((byte *)(gen_frame + 0x10075))[(int)((*(int *)(gen_frame + 0x1003c)))] & 0x1f));
                                }
                                (*(short * PTR32 *)(gen_frame + 0x10028)) = (*(short * PTR32 *)(gen_frame + 0x10028)) + 8;
                                (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                              } while ((*(int *)(gen_frame + 0x1003c)) <= (int)(*(uint *)(gen_frame + 0x10030)));
                            }
                            uVar7 = F_00cebad0(param_2,2);
                            (*(char *)(gen_frame + 0x10a60)) = (char)uVar7 + '\x01';
                            uVar7 = F_00cebad0(param_2,4);
                            ((short *)(gen_frame + 0x10196))[0] = 0;
                            iVar14 = 2;
                            (*(byte *)(gen_frame + 0x10a61)) = (byte)uVar7;
                            ((short *)(gen_frame + 0x10196))[1] = 1 << ((byte)uVar7 & 0x1f);
                            (*(int *)(gen_frame + 0x10a64)) = 2;
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if ((char)uVar8 != '\0') {
                              do {
                                iVar13 = 0;
                                if (((byte *)(gen_frame + 0x10065))[(int)(((byte *)(gen_frame + 0x10045))[(int)((int)((*(int *)(gen_frame + 0x1003c))))])] != 0) {
                                  ((byte * PTR32 *)(gen_frame + 0x11310))[0] = ((byte *)(gen_frame + 0x10065)) + ((byte *)(gen_frame + 0x10045))[(int)((*(int *)(gen_frame + 0x1003c)))];
                                  do {
                                    uVar7 = F_00cebad0(param_2,(uint)(*(byte *)(gen_frame + 0x10a61)));
                                    ((short *)(gen_frame + 0x10196))[(int)(iVar14)] = (short)uVar7;
                                    iVar14 = (*(int *)(gen_frame + 0x10a64)) + 1;
                                    (*(int *)(gen_frame + 0x10a64)) = iVar14;
                                    iVar13 = iVar13 + 1;
                                  } while (iVar13 < (int)(uint)*((byte * PTR32 *)(gen_frame + 0x11310))[0]);
                                }
                                (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                              } while ((*(int *)(gen_frame + 0x1003c)) < (int)(uVar8 & 0xff));
                            }
                            if ((*(int *)(gen_frame + 0x1000c)) < iVar14) {
                              (*(int *)(gen_frame + 0x1000c)) = iVar14;
                            }
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)uVar6);
                        }
                        uVar7 = F_00cebad0(param_2,6);
                        uVar7 = uVar7 + 1;
                        (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0xa24 + uVar7 * 0x1c;
                        param_2[0x35] = uVar7;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar7) {
                          (*(uint * PTR32 *)(gen_frame + 0x10020)) = param_2 + 0x36;
                          do {
                            uVar6 = F_00cebad0(param_2,0x10);
                            *(ushort *)(*(uint * PTR32 *)(gen_frame + 0x10020)) = (ushort)uVar6;
                            if (2 < (ushort)uVar6) goto LAB_00cf2ad1;
                            F_00cebad0(param_2,0x18);
                            F_00cebad0(param_2,0x18);
                            F_00cebad0(param_2,0x18);
                            uVar6 = F_00cebad0(param_2,6);
                            uVar7 = F_00cebad0(param_2,8);
                            (*(byte *)(gen_frame + 0x10a85)) = (byte)uVar7;
                            uVar6 = uVar6 + 1 & 0xff;
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                cVar4 = '\0';
                                uVar7 = F_00cebad0(param_2,3);
                                uVar8 = F_00cebad0(param_2,1);
                                if (uVar8 != 0) {
                                  uVar8 = F_00cebad0(param_2,5);
                                  cVar4 = (char)uVar8;
                                }
                                iVar13 = iVar14 + 1;
                                ((byte *)(gen_frame + 0x112d0))[(int)(iVar14)] = cVar4 * '\b' + (char)uVar7;
                                iVar14 = iVar13;
                              } while (iVar13 < (int)uVar6);
                            }
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                iVar13 = 0;
                                do {
                                  if ((((uint)((byte *)(gen_frame + 0x112d0))[(int)(iVar14)] & 1 << ((byte)iVar13 & 0x1f)) != 0)
                                     && (uVar7 = F_00cebad0(param_2,8),
                                        (int)param_2[0x11] <= (int)uVar7)) goto LAB_00cf2ad1;
                                  iVar13 = iVar13 + 1;
                                } while (iVar13 < 8);
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)uVar6);
                            }
                            uVar7 = ((uint *)(gen_frame + 0x10e90))[(int)((*(byte *)(gen_frame + 0x10a85)))];
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0x10 + uVar7 * 4;
                            if (0 < (int)uVar7) {
                              (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) +
                                           (((uint *)(gen_frame + 0x10a90))[(int)((*(byte *)(gen_frame + 0x10a85)))] + 3 & 0xfffffffc) * uVar7;
                            }
                            (*(uint * PTR32 *)(gen_frame + 0x10020)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x10020)) + 2);
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x35]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = uVar6 + 1;
                        (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0x28;
                        param_2[0x57] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar6 = F_00cebad0(param_2,0x10);
                            if (uVar6 != 0) goto LAB_00cf2ad1;
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + (param_2[2] * 3 + 3 & 0xfffffffc);
                            uVar6 = F_00cebad0(param_2,1);
                            if (uVar6 == 0) {
                              (*(byte *)(gen_frame + 0x10a70)) = 1;
                            }
                            else {
                              uVar6 = F_00cebad0(param_2,4);
                              (*(byte *)(gen_frame + 0x10a70)) = (byte)uVar6;
                            }
                            uVar6 = (uint)(*(byte *)(gen_frame + 0x10a70));
                            if ((*(uint *)(gen_frame + 0x10008)) < uVar6) {
                              (*(uint *)(gen_frame + 0x10008)) = uVar6;
                            }
                            uVar7 = F_00cebad0(param_2,1);
                            if (uVar7 != 0) {
                              uVar7 = F_00cebad0(param_2,8);
                              uVar7 = uVar7 + 1 & 0xffff;
                              (*(uint *)(gen_frame + 0x10030)) = 0;
                              if (uVar7 != 0) {
                                uVar8 = param_2[2];
                                do {
                                  iVar14 = 0x1f;
                                  if (uVar8 != 0) {
                                    for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 - 1) {
                                    }
                                  }
                                  if (uVar8 != 0) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar9 = F_00cebad0(param_2,iVar14 - 1);
                                  iVar14 = 0x1f;
                                  bVar15 = param_2[2] != 0;
                                  if (bVar15) {
                                    for (; param_2[2] >> iVar14 == 0; iVar14 = iVar14 - 1) {
                                    }
                                  }
                                  if (bVar15) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar10 = F_00cebad0(param_2,iVar14 - 1);
                                  uVar8 = param_2[2];
                                  if ((((int)uVar8 <= (int)uVar9) || ((int)uVar8 <= (int)uVar10)) ||
                                     (uVar9 == uVar10)) goto LAB_00cf2ad1;
                                  (*(uint *)(gen_frame + 0x10030)) = (*(uint *)(gen_frame + 0x10030)) + 1;
                                } while ((int)(*(uint *)(gen_frame + 0x10030)) < (int)uVar7);
                              }
                            }
                            uVar7 = F_00cebad0(param_2,2);
                            if (uVar7 != 0) goto LAB_00cf2ad1;
                            if ((1 < (*(byte *)(gen_frame + 0x10a70))) && (iVar14 = 0, 0 < (int)param_2[2])) {
                              do {
                                uVar7 = F_00cebad0(param_2,4);
                                if ((int)uVar6 <= (int)uVar7) goto LAB_00cf2ad1;
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)param_2[2]);
                            }
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                F_00cebad0(param_2,8);
                                uVar6 = F_00cebad0(param_2,8);
                                ((undefined1 *)(gen_frame + 0x10a71))[(int)(iVar14)] = (char)uVar6;
                                uVar7 = F_00cebad0(param_2,8);
                                ((undefined1 *)(gen_frame + 0x10a80))[(int)(iVar14)] = (char)uVar7;
                                if (((int)param_2[0x13] <= (int)(uVar6 & 0xff)) ||
                                   ((int)param_2[0x35] <= (int)(uVar7 & 0xff))) goto LAB_00cf2ad1;
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)(uint)(*(byte *)(gen_frame + 0x10a70)));
                            }
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x57]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        iVar14 = 0;
                        param_2[0x59] = uVar6 + 1;
                        if (0 < (int)(uVar6 + 1)) {
                          psVar12 = (short *)((int)param_2 + 0x16a);
                          do {
                            uVar6 = F_00cebad0(param_2,1);
                            *(char *)(psVar12 - 1) = (char)uVar6;
                            uVar6 = F_00cebad0(param_2,0x10);
                            *psVar12 = (short)uVar6;
                            uVar6 = F_00cebad0(param_2,0x10);
                            psVar12[1] = (short)uVar6;
                            uVar6 = F_00cebad0(param_2,8);
                            *(char *)((int)psVar12 - 1) = (char)uVar6;
                            if (((*psVar12 != 0) || (psVar12[1] != 0)) ||
                               ((int)param_2[0x57] <= (int)(uVar6 & 0xff))) goto LAB_00cf2ad1;
                            iVar14 = iVar14 + 1;
                            psVar12 = psVar12 + 3;
                          } while (iVar14 < (int)param_2[0x59]);
                        }
                        F_00ceba90(param_2);
                        uVar6 = param_2[0x10];
                        uVar7 = param_2[0xf];
                        param_2[0xeb] = 0;
                        *param_1 = (((int)uVar6 >> 3) * 2 + 3U & 0xfffffffc) +
                                   (((int)uVar7 >> 3) * 2 + 3U & 0xfffffffc) + (*(int *)(gen_frame + 0x10038)) +
                                   (((uVar6 & 0x3fffffff) * 2 + 0xf + ((*(int *)(gen_frame + 0x1000c)) + uVar6 * 2) * 2 &
                                    0xfffffff0) + 0x180) * param_2[2] +
                                   (((int)uVar7 >> 1) + ((int)uVar7 >> 2) + uVar7) * 4 +
                                   (((int)uVar6 >> 1) + ((int)uVar6 >> 2) + uVar6) * 4 + 0x5ec;
                        *param_3 = (*(int *)(gen_frame + 0x10018));
                        F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
                        return 1;
                      }
                    }
                    goto LAB_00cf2ad1;
                  }
                  uVar6 = 0x22;
                }
                else {
LAB_00cf2ad1: ;
                  uVar6 = 0x14;
                }
LAB_00cf2ad6: ;
                bVar15 = param_2[0xd] == 0;
              }
            }
            else {
              bVar15 = param_2[0xd] == 0;
              uVar6 = 5;
            }
          }
          else {
            bVar15 = param_2[0xd] == 0;
            uVar6 = 0x22;
          }
        }
      }
      param_2[0xe] = uVar6;
      if (bVar15) {
        param_2[0xe] = uVar6;
      }
LAB_00cf2ae2: ;
      F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
      return 0;
    }
    uVar6 = 0x22;
  }
  else {
LAB_00cf1bdd: ;
    uVar6 = 0x1e;
  }
  param_2[0xe] = uVar6;
  if (param_2[0xd] == 0) {
    param_2[0xe] = uVar6;
  }
LAB_00cf1c07: ;
  F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cf2b00 */
GEN_FRAME unsigned int F_00cf2b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf2b00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00cef7d0(param_5,param_3,in_ecx,in_eax,param_4);
  return;
}

/* ref: FUN_00cf2b20 */
GEN_FRAME unsigned int F_00cf2b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xcf2b20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  F_00cef770(param_3,in_edx,in_eax,param_4);
  return;
}

/* ref: FUN_00cf2b40 */
GEN_FRAME uint GEN_STDCALL F_00cf2b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf2b40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (param_2 == -2) {
    iVar1 = -1;
  }
  else {
    param_1[0x4013] = 0;
    param_1[0x4012] = 0;
    iVar1 = param_2;
  }
  param_1[0xb] = iVar1;
  if (iVar1 != -1) {
    param_1[10] = iVar1;
  }
  iVar1 = *(int *)*param_1;
  *(undefined4 *)(iVar1 + 0x3ac) = 0;
  *(undefined4 *)(iVar1 + 0x560) = 0;
  *(undefined4 *)(iVar1 + 0x558) = 0;
  *(undefined4 *)(iVar1 + 0x3f4) = 0;
  *(undefined1 *)(iVar1 + 0x535) = 0;
  *(undefined4 *)(iVar1 + 0x55c) = 0;
  *(undefined4 *)(iVar1 + 0x5b4) = 0;
  *(undefined4 *)(iVar1 + 0x5b8) = 0;
  *(undefined4 *)(*param_1 + 0x28) = 0;
  *(undefined4 *)(*param_1 + 0x24) = 0;
  return 0;
}

/* ref: FUN_00cf2c00 */
GEN_NOFRAME uint F_00cf2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcf2c00u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(*in_esi + 0x14) = 0;
  *(undefined4 *)(*in_esi + 0x18) = 0;
  *(undefined4 *)(*in_esi + 0xc) = 0;
  puVar1 = (undefined4 *)*in_esi;
  uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                       puVar1 + 4,puVar1 + 3);
  *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) + uVar3;
  iVar2 = *(int *)(*in_esi + 0xc);
  while( true ) {
    if (0 < iVar2) {
      *(int *)(*in_esi + 0x14) = *(int *)(*in_esi + 0xc) * in_esi[8];
      return 1;
    }
    iVar2 = *in_esi;
    if (*(int *)(iVar2 + 0x20) < *(int *)(iVar2 + 0x24) + 0x400) {
      iVar5 = in_esi[0x10] + *(int *)(iVar2 + 0x28);
      F_00c46e20(iVar5 - 0x400,iVar5,*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x28));
      *(int *)(*in_esi + 0x24) = *(int *)(*in_esi + 0x24) - 0x400;
      *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) - 0x400;
    }
    uVar4 = (*(code *)in_esi[2])
                      (in_esi[1],*(int *)(*in_esi + 0x24) + in_esi[0x10],0x400,in_esi[0xb]);
    in_esi[10] = in_esi[10] + uVar4;
    in_esi[0xb] = -1;
    *(int *)(*in_esi + 0x24) = *(int *)(*in_esi + 0x24) + uVar4;
    if ((uVar4 == 0) && (uVar3 == 0)) break;
    *(undefined4 *)(*in_esi + 0xc) = 0;
    puVar1 = (undefined4 *)*in_esi;
    uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                         puVar1 + 4,puVar1 + 3);
    *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) + uVar3;
    iVar2 = *(int *)(*in_esi + 0xc);
  }
  return 1;
}

/* ref: FUN_00cf2d10 */
GEN_FRAME uint F_00cf2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf2d10u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  double dVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 * puVar6;
  uint uVar7;
  int iVar8;
  undefined2 * puVar9;
  float10 fVar10;
  int local_c;
  
  dVar2 = *(double *)&REFG(undefined, 0x10920e0);
  uVar7 = *(uint *)(*param_1 + 0x14);
  if ((int)uVar7 < (int)param_2) {
    param_2 = uVar7;
  }
  iVar4 = *(int *)(*param_1 + 0x18) / param_1[8];
  iVar1 = iVar4 + (int)param_2 / param_1[8];
  iVar8 = param_1[7];
  if (iVar8 == 1) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 2;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffff8;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef770(**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4,uVar7,puVar9,
                                     *(float *)&REFG(undefined, 0x1130ad0));
    }
    puVar9 = puVar9 + uVar7;
    for (iVar4 = iVar4 + uVar7; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    }
  }
  else if (iVar8 == 2) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      iVar8 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + 4))) + iVar4 * 4))) *
                   fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      puVar9[1] = uVar3;
      puVar9 = puVar9 + 2;
      uVar7 = uVar7 + 4;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffffc;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef7d0(uVar7,(*(int * PTR32 *)(*param_1 + 0x10))[1] + iVar4 * 4,puVar9,
                                     **(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4,*(float *)&REFG(undefined, 0x1130ad0)
                                    );
    }
    puVar9 = puVar9 + uVar7 * 2;
    local_c = 0;
    iVar8 = uVar7 + iVar4;
    puVar6 = puVar9;
    do {
      for (; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        iVar5 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + local_c))) + iVar8 * 4)))
                     * fVar10);
        if (iVar5 < 0x7fff) {
          if (iVar5 < -0x7fff) {
            uVar3 = 0x8000;
          }
          else {
            uVar3 = (undefined2)iVar5;
          }
        }
        else {
          uVar3 = 0x7fff;
        }
        *puVar9 = uVar3;
        puVar9 = puVar9 + 2;
      }
      local_c = local_c + 4;
      puVar9 = puVar6 + 1;
      iVar8 = uVar7 + iVar4;
      puVar6 = puVar9;
    } while (local_c < 8);
  }
  else {
    local_c = 0;
    if (0 < iVar8) {
      do {
        iVar5 = local_c;
        if (iVar8 < 7) {
          iVar5 = *(int *)(&REFG(undefined, 0x1130598) + (local_c + iVar8 * 6) * 4);
        }
        puVar9 = param_3 + iVar5;
        for (iVar8 = iVar4; iVar8 < iVar1; iVar8 = iVar8 + 1) {
          iVar5 = (int)((double)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + local_c * 4))) +
                                          iVar8 * 4))) * dVar2);
          if (iVar5 < 0x7fff) {
            if (iVar5 < -0x7fff) {
              uVar3 = 0x8000;
            }
            else {
              uVar3 = (undefined2)iVar5;
            }
          }
          else {
            uVar3 = 0x7fff;
          }
          *puVar9 = uVar3;
          puVar9 = puVar9 + param_1[7];
        }
        iVar8 = param_1[7];
        local_c = local_c + 1;
      } while (local_c < iVar8);
    }
  }
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) - param_2;
  *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + param_2;
  return param_2;
}

/* ref: FUN_00cf3040 */
GEN_FRAME uint F_00cf3040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x5d0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x5c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5cc);
  (*(int *)(gen_frame + 0x8)) = param_2;
  param_3[4] = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0xc)),0,0x5bc);
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x8)) + param_1;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x56c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 *)(gen_frame + 0x2c)) = 1;
  uVar1 = F_00cf1b70(&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    param_3[3] = (*(int *)(gen_frame + 0x8)) + (*(int *)(gen_frame + 0x4));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x10));
    *param_3 = (*(undefined4 *)(gen_frame + 0xc));
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
    return 1;
  }
  if ((*(int *)(gen_frame + 0x40)) != 0) {
    param_3[4] = 1;
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
    return 0;
  }
  param_3[4] = (*(undefined4 *)(gen_frame + 0x44));
  F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cf3160 */
GEN_NOFRAME uint F_00cf3160(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3160u, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  int in_esi;
  code * pcVar1;
  uint uVar2;
  
  in_edi[0xc] = in_edi[0xc] + 1;
  if (in_edi[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (*in_edi != 0) {
    if (in_edi[0x10] != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(in_edi[0x10]);
    }
    if (*(int *)*in_edi != 0) {
      in_esi = *(int *)*in_edi;
      if (in_esi != 0) {
        F_00cf1530(in_esi);
      }
      *(undefined4 *)*in_edi = 0;
    }
    if (*(int *)(*in_edi + 4) != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*(int *)(*in_edi + 4));
    }
    ((code *)REFG(gen_code32, 0x15d92fc))(*in_edi);
    *in_edi = 0;
  }
  in_edi[0xc] = in_edi[0xc] - 1;
  ((code *)REFG(gen_code32, 0x15d92fc))(in_edi);
  return 0;
}

/* ref: FUN_00cf31e0 */
GEN_FRAME uint GEN_STDCALL F_00cf31e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf31e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  code * pcVar1;
  int * in_esi;
  gen_size32 sVar2;
  uint uVar3;
  int iVar4;
  gen_size32 sVar5;
  gen_size32 sVar6;
  
  sVar2 = param_3;
  in_esi = param_1;
  param_1[0xc] = param_1[0xc] + 1;
  if (param_1[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  param_1 = (int *)0x0;
  while( true ) {
    sVar5 = in_esi[0x4013];
    if (0 < (int)sVar5) {
      if ((int)param_3 < (int)sVar5) {
        sVar5 = param_3;
      }
      F_00c46aa0((int)param_1 + param_2,(int)in_esi + in_esi[0x4012] + 0x48,sVar5);
      in_esi[0x4012] = in_esi[0x4012] + sVar5;
      in_esi[0x4013] = in_esi[0x4013] - sVar5;
      param_1 = (int *)((int)param_1 + sVar5);
      param_3 = param_3 - sVar5;
    }
    if (param_3 == 0) goto LAB_00cf32d4;
    in_esi[0x4012] = 0;
    uVar3 = F_00cf2c00(in_esi);
    if (uVar3 == 0) {
      pcVar1 = ((code *)GEN_TOP(swi(3)));
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    sVar5 = *(gen_size32 *)(*in_esi + 0x14);
    if (sVar5 == 0) break;
    if (0 < (int)sVar5) {
      sVar6 = param_3;
      if ((int)sVar5 < (int)param_3) {
        sVar6 = sVar5;
      }
      F_00cf2d10(in_esi,sVar6,(int)param_1 + param_2);
      param_1 = (int *)((int)param_1 + sVar6);
      param_3 = param_3 - sVar6;
      iVar4 = sVar5 - sVar6;
      if (0 < iVar4) {
        F_00cf2d10(in_esi,iVar4,in_esi[0x4013] + 0x48 + (int)in_esi);
        in_esi[0x4013] = in_esi[0x4013] + iVar4;
      }
    }
  }
  if (0 < (int)param_3) {
    F_00c48350((undefined *)((int)param_1 + param_2),0,param_3);
  }
LAB_00cf32d4: ;
  if ((in_esi[4] <= in_esi[10]) && (param_3 == sVar2)) {
    (*(code *)in_esi[2])(in_esi[1],0,0,in_esi[0xb]);
  }
  in_esi[0xc] = in_esi[0xc] - 1;
  return sVar2 - param_3;
}

/* ref: FUN_00cf3310 */
GEN_FRAME uint F_00cf3310(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3310u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)(*in_eax + 4) = 0;
  *(undefined4 *)(*in_eax + 0x28) = 0;
  *(undefined4 *)(*in_eax + 0x24) = 0;
  *(undefined4 *)(*in_eax + 0x20) = 0x10000;
  uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(*(undefined4 *)(*in_eax + 0x20));
  in_eax[0x10] = uVar2;
  if (uVar2 == 0) {
    pcVar5 = "ASI_stream_open() failed -- out of memory";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    return 0;
  }
  uVar2 = (*(code *)in_eax[2])(in_eax[1],uVar2,0x2000,0);
  if (uVar2 == 0) {
    pcVar5 = "ASI_stream_open() failed -- truncated file";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00cf3040(in_eax[0x10],uVar2,&(*(int *)(gen_frame + 0x8)));
  uVar1 = (*(undefined4 *)(gen_frame + 0x14));
  in_eax[6] = (*(int *)(gen_frame + 0x8));
  in_eax[7] = (*(int *)(gen_frame + 0xc));
  in_eax[9] = (*(int *)(gen_frame + 0x10));
  if (uVar3 != 0) {
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))((*(undefined4 *)(gen_frame + 0x14)));
    *(uint *)(*in_eax + 4) = uVar3;
    if (*(int *)(*in_eax + 4) == 0) {
      pcVar5 = "ASI_stream_open() failed -- out of memory";
      puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      return 0;
    }
    uVar3 = F_00cf1ab0(in_eax[0x10],uVar2,*(int *)(*in_eax + 4),uVar1);
    *(uint *)*in_eax = uVar3;
  }
  if (*(int *)*in_eax == 0) {
    pcVar5 = "ASI_stream_open() failed -- could not initialize Vorbis decoder";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    return 0;
  }
  if (in_eax[9] == 0) {
    in_eax[9] = 320000;
  }
  ((int *)*in_eax)[9] = uVar2;
  *(undefined4 *)(*in_eax + 0x28) = 0;
  in_eax[10] = uVar2;
  in_eax[0xb] = -1;
  return 1;
}

/* ref: FUN_00cf3470 */
GEN_FRAME uint GEN_STDCALL F_00cf3470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * _Dst;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10050)));
  if (puVar1 == (undefined4 *)0x0) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  uVar7 = 0x10050;
  uVar6 = 0;
  puVar5 = puVar1;
  F_00c48350(puVar1,0,0x10050);
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  puVar1[0xf] = 0xffffffff;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  _Dst = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10034,puVar5,uVar6,uVar7)));
  *puVar1 = _Dst;
  if (_Dst == (undefined *)0x0) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  F_00c48350(_Dst,0,0x10034);
  uVar2 = F_00cf3310(puVar1);
  if (uVar2 == 0) {
    F_00cf3160(puVar1);
    return 0;
  }
  puVar1[8] = puVar1[7] * 2;
  return (uint)puVar1;
}

/* ref: FUN_00cf3530 */
GEN_FRAME uint GEN_STDCALL F_00cf3530(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cf3160(param_1);
  return uVar1;
}

/* ref: FUN_00cf3550 */
GEN_FRAME uint F_00cf3550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(param_1 * param_2) >> 0x15;
}

/* ref: FUN_00cf3560 */
GEN_FRAME uint F_00cf3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x548) < 8) {
    F_00cebbb0(param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x544);
  uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
  if ((int)uVar4 < 0) {
    if (*(int *)(param_1 + 0x548) < 0x19) {
      F_00cebbb0(param_1);
    }
    uVar3 = *(uint *)(param_1 + 0x544);
    uVar2 = uVar3 >> 8;
    do {
      uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
      uVar2 = uVar2 >> 2;
    } while ((int)uVar4 < 0);
  }
  piVar1 = (int *)(param_1 + 0x548);
  *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
  *(uint *)(param_1 + 0x544) = uVar3 >> ((byte)((int)uVar4 >> 0x1a) & 0x1f);
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x548) = 0;
    return 0xffffffff;
  }
  return uVar4 & 0x3ffffff;
}

/* ref: FUN_00cf3600 */
GEN_FRAME byte F_00cf3600(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3600u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}

/* ref: FUN_00cf3650 */
GEN_FRAME byte F_00cf3650(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3650u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cf3600(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00cf3668 */
GEN_NOFRAME uint F_00cf3668(void)
{
  GEN_ENTER(0xcf3668u, 0u, 0u, 0u, 0u);
  uint unaff_ECX = 0;
  
  LOCK();
  UNLOCK();
  return unaff_ECX;
}

/* ref: FUN_00cf3673 */
GEN_NOFRAME unsigned int F_00cf3673(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3673u, gen_a0, gen_a1, gen_a2, 0u);
  LONG * param_1 = (LONG *)(uintptr_t)gen_a0;
  LONG param_2 = (LONG)gen_a1;
  LONG param_3 = (LONG)gen_a2;
  return (uint)(gen_imp_InterlockedCompareExchange(param_1,param_2,param_3));
}

/* ref: FUN_00cf36bc */
GEN_NOFRAME uint GEN_THISCALL F_00cf36bc(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf36bcu, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00cf36d5 */
GEN_NOFRAME uint F_00cf36d5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf36d5u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  char * in_edi = (char *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  _Count = in_eax - 1;
  uVar2 = 0;
  uVar1 = F_01051c9c(in_edi,_Count,param_4,param_5);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    in_edi[_Count] = '\0';
    uVar2 = 0x8007007a;
    uVar1 = _Count;
  }
  else if (uVar1 == _Count) {
    in_edi[_Count] = '\0';
    uVar1 = _Count;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return uVar2;
}

/* ref: XAPOBaseWaveHlpNameSpace::GuidFromWaveFormatTag */
GEN_NOFRAME undefined * GEN_STDCALL F_00cf371c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf371cu, gen_a0, gen_a1, 0u, 0u);
  undefined * __return_storage_ptr__ = (undefined *)(uintptr_t)gen_a0;
  ushort param_1 = (ushort)gen_a1;
  undefined2 uVar1;
  
  (*(ulong *)((char *)(__return_storage_ptr__))) = REFG(undefined4, 0x1130ad4);
  uVar1 = (*(undefined2 *)((char *)&REFG(undefined4, 0x1130ad8) + 2));
  (*(ushort *)(((char *)(__return_storage_ptr__) + 4))) = (undefined2)REFG(undefined4, 0x1130ad8);
  (*(ushort *)(((char *)(__return_storage_ptr__) + 6))) = uVar1;
  *(undefined4 *)((uchar *)(((char *)(__return_storage_ptr__) + 8))) = REFG(undefined4, 0x1130adc);
  *((undefined4 *)GEN_TOP((((uchar *)(((char *)(__return_storage_ptr__) + 8))) + 4))) = REFG(undefined4, 0x1130ae0);
  (*(ulong *)((char *)(__return_storage_ptr__))) = (uint)param_1;
  return __return_storage_ptr__;
}

/* ref: FUN_00cf373d */
GEN_NOFRAME uint F_00cf373d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf373du, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = F_00c61f68((undefined *)(param_3 + in_eax),(undefined *)(param_4 + in_eax),in_ecx - in_eax);
  return (uint)(iVar1 == 0);
}

/* ref: FUN_00cf3762 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3762(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3762u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*param_1 == 0x165) {
    uVar1 = 0x20;
  }
  else if (*param_1 == 1) {
    uVar1 = (uint)(param_2 != 0) * 2 + 0x10;
  }
  else {
    uVar1 = (ushort)param_1[8] + 0x12;
  }
  return uVar1;
}

/* ref: FUN_00cf379a */
GEN_NOFRAME uint GEN_STDCALL F_00cf379a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf379au, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar1 = (undefined *)*param_3;
  pvVar2 = (undefined *)F_00cf3762(param_1,1);
  *param_3 = (uint)pvVar2;
  if (pvVar2 <= pvVar1) {
    uVar3 = F_00cf3762(param_1,0);
    F_00c46aa0(param_2,param_1,uVar3);
    pvVar2 = F_00c48350((undefined *)(uVar3 + param_2),0,(int)pvVar1 - uVar3);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00cf37e7 */
GEN_NOFRAME uint GEN_STDCALL F_00cf37e7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf37e7u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00cf3762(param_1,0);
  uVar2 = F_00cf3762(param_1,1);
  uVar3 = F_004069f0(uVar2);
  if (uVar3 != 0) {
    F_00c46aa0(uVar3,param_1,uVar1);
    F_00c48350((undefined *)(uVar3 + uVar1),0,uVar2 - uVar1);
  }
  return uVar3;
}

/* ref: FUN_00cf3838 */
GEN_NOFRAME ushort GEN_STDCALL F_00cf3838(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3838u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xfffe) {
    iVar2 = F_00c61f68(param_1 + 0xe,&REFG(undefined4, 0x1130ad8),0xc);
    if (iVar2 == 0) {
      uVar1 = param_1[0xc];
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cf3872 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3872(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3872u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint * puVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0xfffe) {
    puVar2 = (uint *)(param_2 + 0xc);
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1130ad4);
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1130ad8);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1130adc);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1130ae0);
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
    puVar2 = &(*(uint *)(gen_frame + 0xc));
  }
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  return (uint)param_1;
}

/* ref: FUN_00cf38b4 */
GEN_NOFRAME uint GEN_STDCALL F_00cf38b4(unsigned int gen_a0)
{
  GEN_ENTER(0xcf38b4u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 8) {
    uVar1 = *(uint *)(&REFG(undefined, 0x134fbd4) + param_1 * 4);
  }
  return uVar1;
}

/* ref: FUN_00cf38d1 */
GEN_NOFRAME uint GEN_THISCALL F_00cf38d1(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf38d1u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)((int)this + 0xe);
  uVar4 = 1;
  if ((((uVar3 != 8) && (uVar3 != 0x10)) && (uVar3 != 0x18)) && (uVar3 != 0x20)) {
    uVar4 = 0;
  }
  if (*(short *)this == -2) {
    uVar1 = *(ushort *)((int)this + 0x12);
    if ((((uVar1 != 0) && (uVar1 != 8)) && ((uVar1 != 0x10 && ((uVar1 != 0x14 && (uVar1 != 0x18)))))
        ) && (uVar1 != 0x20)) {
      uVar4 = 0;
    }
    if (*(ushort *)((int)this + 0xe) < uVar1) {
      uVar4 = 0;
    }
  }
  iVar2 = *(ushort *)((int)this + 2) * uVar3;
  if ((uint)*(ushort *)((int)this + 0xc) != (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) {
    uVar4 = 0;
  }
  if (*(int *)((int)this + 8) != *(int *)((int)this + 4) * (uint)*(ushort *)((int)this + 0xc)) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00cf3951 */
GEN_NOFRAME uint GEN_THISCALL F_00cf3951(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3951u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(ushort *)((int)this + 0xe) == 0x20);
  if (((*(short *)this == -2) && (*(short *)((int)this + 0x12) != 0x20)) &&
     (*(short *)((int)this + 0x12) != 0)) {
    uVar2 = 0;
  }
  iVar1 = (uint)*(ushort *)((int)this + 2) * (uint)*(ushort *)((int)this + 0xe);
  if ((uint)*(ushort *)((int)this + 0xc) != (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) {
    uVar2 = 0;
  }
  if (*(int *)((int)this + 8) != *(int *)((int)this + 4) * (uint)*(ushort *)((int)this + 0xc)) {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00cf39a7 */
GEN_NOFRAME uint F_00cf39a7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf39a7u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  short * psVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if ((*(short *)(in_eax + 2) != 1) && (*(short *)(in_eax + 2) != 2)) {
    uVar3 = 0;
  }
  if (*(short *)(in_eax + 0xe) != 4) {
    uVar3 = 0;
  }
  if (*(short *)(in_eax + 0x10) != 0x20) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    if (*(short *)(in_eax + 0x14) == 7) {
      psVar1 = (short *)(in_eax + 0x18);
      iVar2 = 0;
      do {
        if (psVar1[-1] != *(short *)((int)&REFG(undefined2, 0x1130ae4) + iVar2)) {
          uVar3 = 0;
        }
        if (*psVar1 != *(short *)((int)&REFG(undefined2, 0x1130af4) + iVar2)) {
          uVar3 = 0;
        }
        iVar2 = iVar2 + 2;
        psVar1 = psVar1 + 2;
      } while (iVar2 < 0xe);
    }
    else {
      uVar3 = 0;
    }
    if ((uint)*(ushort *)(in_eax + 0x12) !=
        (int)(((uint)*(ushort *)(in_eax + 0xc) + (uint)*(ushort *)(in_eax + 2) * -7) * 8) /
        (int)((uint)*(ushort *)(in_eax + 2) << 2) + 2U) {
      uVar3 = 0;
    }
    if (*(ushort *)(in_eax + 0x12) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* ref: XAPOBaseWaveHlpNameSpace::WaveFillSilence */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cf3a6c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3a6cu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  ushort uVar1;
  uint _Val;
  
  uVar1 = F_00cf3838(param_3);
  if (uVar1 != 1) {
    uVar1 = F_00cf3838(param_3);
    if (uVar1 != 3) {
      _Val = 0;
      goto LAB_00cf3aa8;
    }
  }
  _Val = (*(short *)(param_3 + 0xe) != 8) - 1 & 0x80;
LAB_00cf3aa8: ;
  return (uint)(F_00c48350(param_1,_Val,param_2));
}

/* ref: FUN_00cf3ab8 */
GEN_NOFRAME float10 GEN_STDCALL F_00cf3ab8(float gen_a0)
{
  GEN_ENTER(0xcf3ab8u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)param_1),0xd));
  return (float10)(float)dVar2;
}

/* ref: FUN_00cf3ae6 */
GEN_NOFRAME float10 GEN_STDCALL F_00cf3ae6(float gen_a0)
{
  GEN_ENTER(0xcf3ae6u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00cf3ab8((float)((float10)param_1 / (float10)*(double *)&REFG(undefined, 0x10920b0)));
  return (float10)(float)((float10)param_1 - fVar1 * (float10)*(double *)&REFG(undefined, 0x10920b0));
}

/* ref: FUN_00cf3b1e */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3b1e(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3b1eu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(LPVOID *)((int)this + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3b37 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3b37(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3b37u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_CoTaskMemAlloc(0x42c);
  uVar2 = (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  if (-1 < (int)uVar2) {
    F_00c46aa0(pvVar1,*(undefined4 *)(param_1 + 4),0x42c);
    *param_2 = pvVar1;
  }
  return uVar2;
}

/* ref: FUN_00cf3b7f */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cf3b7f(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3b7fu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(LPVOID *)(param_1 + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 7;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return 0;
}

/* ref: FUN_00cf3bb5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3bb5(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcf3bb5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * puVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != (*(uint *)&gen_args[2])) {
    puVar2 = &(*(uint *)&gen_args[1]);
    if (*(uint * PTR32 *)((*(int *)&gen_args[0]) + 0xc) != (uint *)0x0) {
      puVar2 = *(uint * PTR32 *)((*(int *)&gen_args[0]) + 0xc);
    }
    ((byte *)(gen_frame + 0x4))[0xc] = 0;
    ((byte *)(gen_frame + 0x4))[0xd] = 0;
    ((byte *)(gen_frame + 0x4))[0xe] = 0;
    ((byte *)(gen_frame + 0x4))[0xf] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = puVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x10);
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[4]) & 0xffff;
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)&gen_args[5]) & 0xffff;
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x14);
    (*(uint *)&gen_args[1]) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = uVar1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (*(uint *)&gen_args[2]);
    (*(int *)(gen_frame + 0x18)) = ((*(uint *)&gen_args[4]) & 0xffff) * (*(int *)&gen_args[3]);
    ((code *)*(gen_code32 *)((*(int *)&gen_args[0]) + 8))(((byte *)(gen_frame + 0x4)));
  }
  return;
}

/* ref: FUN_00cf3c40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(LPVOID *)((int)this + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3c60 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3c60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LONG LVar1;
  ulonglong uVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 0x20) + 0x3c))))(param_1 - 0x20 GEN_EDX_ARG,param_2,param_3);
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = gen_imp_InterlockedExchange((LONG *)(param_1 + 8),-1);
    *(LONG *)(param_1 + 0xc) = LVar1;
  }
  F_00c46aa0(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  uVar2 = F_00c46aa0(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 2,param_2,param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3cc0 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3cc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LONG LVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    do {
      LVar1 = gen_imp_InterlockedCompareExchange((LONG *)(param_1 + 8),
                         (*(uint *)(param_1 + 0x10) ^ 1) * *(int *)(param_1 + 0x14) +
                         *(int *)(param_1 + 4),
                         *(uint *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) +
                         *(int *)(param_1 + 4));
    } while (LVar1 == -1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar2 = F_00c46aa0(param_2,(*(uint *)(param_1 + 0x10) ^ 1) * *(int *)(param_1 + 0x14) +
                             *(int *)(param_1 + 4),param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3d40 */
GEN_NOFRAME uint GEN_THISCALL F_00cf3d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar1 = gen_imp_InterlockedExchange((LONG *)((int)this + 0x28),-1);
    *(uint *)((int)this + 0x2c) = uVar1;
    return uVar1;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    LOCK();
    UNLOCK();
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x2c);
    *(undefined4 *)((int)this + 0x38) = 1;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  return *(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 2;
}

/* ref: CXAPOParametersBase::EndProcess */
GEN_NOFRAME uint GEN_THISCALL F_00cf3d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)(in_ecx + 0x3c) != 0) {
    LOCK();
    UNLOCK();
    in_EAX = *(uint *)(in_ecx + 0x2c);
    *(uint *)(in_ecx + 0x28) = in_EAX;
    *(undefined4 *)(in_ecx + 0x38) = 1;
    *(undefined4 *)(in_ecx + 0x2c) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00cf3db7 */
GEN_NOFRAME ushort GEN_STDCALL F_00cf3db7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3db7u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  for (uVar2 = (ushort)param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3dd2 */
GEN_NOFRAME ushort GEN_STDCALL F_00cf3dd2(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3dd2u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3e04 */
GEN_NOFRAME uint F_00cf3e04(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xcf3e04u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  if (-1 < (int)uVar1) {
    _Count = param_2 - 1;
    uVar1 = 0;
    uVar2 = F_01051c9c(param_1,_Count,param_3,((undefined *)&gen_args[3]));
    if (((int)uVar2 < 0) || (_Count < uVar2)) {
      param_1[_Count] = '\0';
      uVar1 = 0x8007007a;
    }
    else if (uVar2 == _Count) {
      param_1[_Count] = '\0';
    }
  }
  return uVar1;
}

/* ref: FUN_00cf3e5e */
GEN_NOFRAME uint GEN_STDCALL F_00cf3e5e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf3e5eu, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint param_8 = (uint)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  
  if ((ushort)param_6 == 0) {
    if ((ushort)param_3 == 2) {
      param_6 = 4;
    }
    else {
      param_6 = ((ushort)param_3 != 3) - 1 & 0x20;
    }
  }
  else {
    param_6 = (uint)(ushort)param_6;
  }
  param_1[8] = (short)param_2 - 0x12;
  param_1[1] = (ushort)param_4;
  *(int *)(param_1 + 2) = param_5;
  param_1[7] = (ushort)param_6;
  uVar8 = (uint)(ushort)param_4;
  if ((ushort)param_3 == 2) {
    iVar7 = ((ushort)param_9 - 2) * uVar8 * 4;
    uVar4 = (short)((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + (ushort)param_4 * 7;
    param_1[6] = uVar4;
    iVar7 = 0;
    *(uint *)(param_1 + 4) = ((uint)uVar4 * param_5) / (uint)(ushort)param_9;
    param_1[9] = (ushort)param_9;
    param_1[10] = 7;
    puVar6 = param_1 + 0xc;
    do {
      puVar6[-1] = *(ushort *)((int)&REFG(undefined2, 0x1130ae4) + iVar7);
      *puVar6 = *(ushort *)((int)&REFG(undefined2, 0x1130af4) + iVar7);
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 2;
    } while (iVar7 < 0xe);
  }
  else {
    uVar5 = (int)(param_6 * uVar8 + ((int)(param_6 * uVar8) >> 0x1f & 7U)) >> 3;
    param_1[6] = (ushort)uVar5;
    puVar6 = ((ushort *)GEN_TOP(((uVar5 & 0xffff) * param_5)));
    *(ushort * PTR32 *)(param_1 + 4) = puVar6;
  }
  if (param_2 == 0x28) {
    *param_1 = 0xfffe;
    uVar3 = REFG(undefined4, 0x1130ae0);
    uVar2 = REFG(undefined4, 0x1130adc);
    uVar1 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_1 + 0xc) = (uint)(ushort)param_3;
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x12) = uVar3;
    uVar4 = (ushort)param_7;
    if ((ushort)param_7 == 0) {
      uVar4 = (ushort)param_6;
    }
    param_1[9] = uVar4;
    uVar5 = param_8;
    if (param_8 == 0xffffffff) {
      uVar5 = F_00cf38b4(uVar8);
    }
    *(uint *)(param_1 + 10) = uVar5;
  }
  else {
    uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar6) >> 0x10),(ushort)param_3);
    *param_1 = (ushort)param_3;
  }
  return uVar5;
}

/* ref: FUN_00cf3fa0 */
GEN_NOFRAME uint GEN_STDCALL F_00cf3fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcf3fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  int iVar2;
  
  if ((short)param_2 == 2) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = param_1;
    if (param_1 == 0) {
      iVar2 = 0x12;
    }
    if (((ushort)param_3 < 3) && ((*(int *)&gen_a6) == 0)) {
      if ((((ushort)param_6 == 0) || ((ushort)param_6 == (ushort)param_5)) &&
         (((short)param_2 != 1 || ((ushort)param_5 < 0x11)))) goto LAB_00cf3fe9;
    }
    iVar2 = 0x28;
  }
LAB_00cf3fe9: ;
  uVar1 = F_004069f0(iVar2);
  if (uVar1 != 0) {
    F_00cf3e5e(uVar1,iVar2,param_2,param_3,param_4,param_5,param_6,(*(int *)&gen_a6),param_8);
  }
  return uVar1;
}

/* ref: FUN_00cf4019 */
GEN_NOFRAME uint GEN_STDCALL F_00cf4019(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf4019u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  short sVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  sVar1 = *param_1;
  uVar2 = 0;
  if (sVar1 == 0x165) {
    uVar4 = (uint)(ushort)param_1[4];
    if (uVar4 != 0) {
      puVar3 = (ushort *)(param_1 + 0xf);
      do {
        uVar2 = uVar2 | *puVar3 & 0xff | (uint)(*puVar3 >> 8);
        puVar3 = puVar3 + 10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if ((sVar1 == 0x166) || (sVar1 == -2)) {
    uVar2 = *(uint *)(param_1 + 10);
  }
  else {
    uVar4 = (uint)(ushort)param_1[1];
    if (uVar4 == 1) {
      uVar2 = 4;
    }
    else if (uVar4 == 2) {
      uVar2 = 3;
    }
    else if (param_2 != 0) {
      uVar2 = F_00cf38b4(uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00cf4093 */
GEN_NOFRAME uint F_00cf4093(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4093u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  byte * pbVar4;
  uint uVar5;
  uint local_8;
  
  if (*(ushort *)(in_eax + 0x10) < 0x20) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(short *)(in_eax + 2) == 0x10);
    if (*(char *)(in_eax + 0xb) != '\x02') {
      uVar5 = 0;
    }
    local_8 = (uint)*(ushort *)(in_eax + 8);
    if (*(ushort *)(in_eax + 8) == 0) {
      uVar5 = 0;
    }
    iVar2 = *(int *)(in_eax + 0x10);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    if (local_8 != 0) {
      pbVar4 = (byte *)(in_eax + 0x1c);
      do {
        if (*(int *)(pbVar4 - 0xc) != iVar2) {
          uVar5 = 0;
        }
        if (4 < (*pbVar4 & 0xf)) {
          uVar5 = 0;
        }
        if (0x30 < (*pbVar4 & 0xf0)) {
          uVar5 = 0;
        }
        bVar1 = pbVar4[1];
        if ((bVar1 != 1) && (bVar1 != 2)) {
          uVar5 = 0;
        }
        if ((*(ushort *)(pbVar4 + 2) != 0) &&
           (uVar3 = F_00cf3db7((uint)*(ushort *)(pbVar4 + 2)), uVar3 != bVar1)) {
          uVar5 = 0;
        }
        pbVar4 = pbVar4 + 0x14;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar5;
}

/* ref: FUN_00cf4139 */
GEN_NOFRAME uint F_00cf4139(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4139u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(in_esi + 2);
  uVar3 = (uint)((uint)*(ushort *)(in_esi + 0xc) == (uint)uVar1 * 2);
  if (*(short *)(in_esi + 0xe) != 0x10) {
    uVar3 = 0;
  }
  if (*(short *)(in_esi + 0x10) == 0x22) {
    if (*(byte *)(in_esi + 0x31) < 3) {
      uVar3 = 0;
    }
    if (*(short *)(in_esi + 0x32) == 0) {
      uVar3 = 0;
    }
    if ((*(uint *)(in_esi + 0x1c) == 0) || (0x7ff800 < *(uint *)(in_esi + 0x1c))) {
      uVar3 = 0;
    }
    if ((*(int *)(in_esi + 0x14) != 0) &&
       (uVar2 = F_00cf3dd2(*(int *)(in_esi + 0x14)), uVar2 != *(ushort *)(in_esi + 2))) {
      uVar3 = 0;
    }
    if ((uint)*(ushort *)(in_esi + 0x12) != (uVar1 + 1) / 2) {
      uVar3 = 0;
    }
    if (*(uint *)(in_esi + 0x18) < (uint)(*(int *)(in_esi + 0x24) + *(int *)(in_esi + 0x20))) {
      uVar3 = 0;
    }
    if ((uint)(*(int *)(in_esi + 0x2c) + *(int *)(in_esi + 0x28)) <= *(uint *)(in_esi + 0x18)) {
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cf41f0 */
GEN_NOFRAME uint GEN_STDCALL F_00cf41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf41f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 0x165) {
    uVar3 = F_00cf3e04(param_2,param_3,&REFG(undefined, 0x1130bd4));
  }
  else {
    sVar1 = *(short *)(param_1 + 2);
    if (sVar1 == 1) {
      pcVar5 = "Mono";
    }
    else if (sVar1 == 2) {
      pcVar5 = "Stereo";
    }
    else if (sVar1 == 3) {
      pcVar5 = "2.1";
    }
    else if (sVar1 == 4) {
      pcVar5 = "Quad";
    }
    else if (sVar1 == 5) {
      pcVar5 = "4.1";
    }
    else if (sVar1 == 6) {
      pcVar5 = "5.1";
    }
    else if (sVar1 == 7) {
      pcVar5 = "6.1";
    }
    else {
      pcVar5 = "7.1";
      if (sVar1 != 8) {
        pcVar5 = "ManyChannels";
      }
    }
    if (uVar2 == 3) {
      pcVar4 = "Float";
    }
    else if (uVar2 == 2) {
      pcVar4 = "Adpcm";
    }
    else if (uVar2 == 0x166) {
      pcVar4 = "XMA2";
    }
    else if (uVar2 == 0x161) {
      pcVar4 = "WMAStd";
    }
    else if (uVar2 == 0x162) {
      pcVar4 = "WMAPro";
    }
    else if (uVar2 == 0x164) {
      pcVar4 = "WMASpdif";
    }
    else if (uVar2 == 0x92) {
      pcVar4 = "AC3Spdif";
    }
    else if (uVar2 == 1) {
      sVar1 = *(short *)(param_1 + 0xe);
      if (sVar1 == 8) {
        pcVar4 = "Pcm8Bit";
      }
      else if (sVar1 == 0x10) {
        pcVar4 = "Pcm16Bit";
      }
      else if (sVar1 == 0x18) {
        pcVar4 = "Pcm24Bit";
      }
      else {
        pcVar4 = "Pcm32Bit";
        if (sVar1 != 0x20) {
          pcVar4 = "BadBitsPerSample";
        }
      }
    }
    else {
      pcVar4 = "Unknown";
    }
    uVar3 = F_00cf3e04(param_2,param_3,"%luk%s%s",*(uint *)(param_1 + 4) / 1000,pcVar4,pcVar5);
  }
  return uVar3;
}

/* ref: FUN_00cf436b */
GEN_NOFRAME unsigned int F_00cf436b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf436bu, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  float * pfVar4;
  bool bVar5;
  float * pfVar6;
  int iVar7;
  
  do {
    iVar7 = 0;
    bVar5 = false;
    if (in_eax - 1 < 1) {
      return 0;
    }
    pfVar4 = param_2;
    do {
      pfVar6 = pfVar4 + 1;
      if ((float10)*pfVar6 < (float10)*pfVar4) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar6;
        *pfVar6 = fVar2;
        puVar1 = (undefined4 *)(param_3 + iVar7 * 4);
        uVar3 = *puVar1;
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6)));
        *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6))) = uVar3;
        bVar5 = true;
      }
      iVar7 = iVar7 + 1;
      pfVar4 = pfVar6;
    } while (iVar7 < in_eax - 1);
  } while (bVar5);
  return 0;
}

/* ref: FUN_00cf43cb */
GEN_NOFRAME uint GEN_STDCALL F_00cf43cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf43cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float fVar1;
  double dVar2;
  double dVar4;
  uint uVar5;
  uint uVar6;
  HANDLE pvVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float * pfVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int * piVar16;
  int iVar17;
  int iVar18;
  code * pcVar19;
  int * piVar20;
  undefined4 * puVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  float fVar25;
  longlong lVar26;
  uint local_24;
  uint local_20;
  undefined4 * puStack_14;
  LPVOID local_10;
  LPVOID local_c;
  uint local_8;
  
  uVar6 = param_2;
  uVar5 = param_1;
  pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
  lVar26 = (ulonglong)(param_1 << 2) << 0x20;
  local_20 = 0;
  local_c = (LPVOID)0x0;
  local_10 = (LPVOID)0x0;
  pvVar7 = gen_imp_GetProcessHeap();
  pvVar8 = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  if (pvVar8 != (LPVOID)0x0) {
    lVar26 = (ulonglong)(param_2 << 2) << 0x20;
    pvVar7 = gen_imp_GetProcessHeap();
    local_c = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
    if (local_c != (LPVOID)0x0) {
      lVar26 = (ulonglong)(param_2 << 2) << 0x20;
      pvVar7 = gen_imp_GetProcessHeap();
      local_10 = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
      if (local_10 != (LPVOID)0x0) {
        iVar9 = 0;
        if (0 < (int)param_1) {
          do {
            *(int *)((int)pvVar8 + iVar9 * 4) = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_1);
        }
        iVar9 = 0;
        if (0 < (int)param_2) {
          do {
            *(int *)((int)local_c + iVar9 * 4) = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_2);
        }
        F_00cf436b(param_1,param_3,pvVar8);
        F_00cf436b(param_2,param_4,local_c);
        uVar10 = 0;
        local_24 = param_1;
        local_8 = param_2;
        uVar14 = local_24;
        if (0 < (int)param_1) {
          do {
            fVar25 = *(float *)(param_3 + uVar10 * 4);
            uVar14 = uVar10;
            if (!GEN_ISNAN(fVar25) && !(fVar25 < 0.0)) break;
            uVar10 = uVar10 + 1;
            uVar14 = local_24;
          } while ((int)uVar10 < (int)param_1);
        }
        local_24 = uVar14;
        uVar10 = 0;
        uVar14 = local_8;
        if (0 < (int)param_2) {
          do {
            fVar25 = *(float *)(param_4 + uVar10 * 4);
            uVar14 = uVar10;
            if (!GEN_ISNAN(fVar25) && !(fVar25 < 0.0)) break;
            uVar10 = uVar10 + 1;
            uVar14 = local_8;
          } while ((int)uVar10 < (int)param_2);
        }
        local_8 = uVar14;
        iVar9 = param_2 - local_8;
        iVar17 = 0;
        if (0 < (int)param_2) {
          puStack_14 = param_5;
          do {
            *(undefined4 *)((int)local_10 + iVar17 * 4) = 0;
            uVar14 = param_1;
            puVar21 = puStack_14;
            if (0 < (int)param_1) {
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar21 = 0;
                puVar21 = puVar21 + 1;
              }
            }
            puStack_14 = puStack_14 + param_1;
            iVar17 = iVar17 + 1;
          } while (iVar17 < (int)param_2);
        }
        if (0 < iVar9) {
          if ((int)local_24 < (int)param_1) {
            piVar20 = (int *)((int)pvVar8 + local_24 * 4);
            iVar17 = param_3 - (int)pvVar8;
            do {
              uVar14 = local_8;
              if ((int)local_8 < (int)param_2) {
                do {
                  fVar23 = (float10)*(float *)(iVar17 + (int)piVar20);
                  fVar24 = (float10)*(float *)(param_4 + uVar14 * 4);
                  if ((!GEN_ISNAN(fVar24) && !GEN_ISNAN(fVar23)) && !(fVar24 < fVar23)) break;
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)param_2);
              }
              iVar22 = (int)(uVar14 - local_8) % iVar9 + local_8;
              iVar11 = iVar22 * 4;
              iVar18 = (int)((uVar14 - local_8) - 1 + iVar9) % iVar9 + local_8;
              iVar15 = iVar18 * 4;
              fVar23 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar11 + param_4) -
                                           (float10)*(float *)(iVar15 + param_4)))));
              fVar25 = (float)fVar23;
              fVar23 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar17 + (int)piVar20) -
                                           (float10)*(float *)(iVar15 + param_4)))));
              if (iVar18 == iVar22) {
                param_5[*(int *)(iVar15 + (int)local_c) * param_1 + *piVar20] =
                     (undefined4)gen_fl2bits(REFG(float, 0x1087f04));
                pfVar12 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar15 + (int)local_c) * 4)));
                fVar23 = (float10)*pfVar12 + (float10)REFG(double, 0x1088130);
              }
              else {
                if ((GEN_ISNAN(fVar25) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
                    ((GEN_ISNAN(fVar25) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                    fVar25 == *(float *)&REFG(undefined, 0x1088114))) {
                  local_20 = 0x80070057;
                  pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
                  goto LAB_00cf4772;
                }
                dVar2 = ((double)GEN_TOD(((((float10)(float)fVar23 / (float10)fVar25) *
                                 (float10)*(double *)&REFG(undefined, 0x1130be0)) * (float10)REFG(double, 0x1088108))));
                dVar4 = (GEN_X87MATH((dVar2),0xc));
                param_3 = (uint)gen_fl2bits((float)dVar4);
                if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
                  param_3 = 0;
                }
                dVar2 = (GEN_X87MATH((dVar2),0xb));
                puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)dVar2)));
                if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) < (float10)0) {
                  puStack_14 = (undefined4 *)0x0;
                }
                if (param_2 == 1) {
                  puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
                  param_3 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
                }
                piVar16 = (int *)((int)local_c + iVar11);
                param_5[*(int *)(iVar15 + (int)local_c) * param_1 + *piVar20] = param_3;
                param_5[*piVar16 * param_1 + *piVar20] = puStack_14;
                pfVar12 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar15 + (int)local_c) * 4)));
                *pfVar12 = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*pfVar12);
                pfVar12 = (float *)((int)local_10 + *piVar16 * 4);
                fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) + (float10)*pfVar12;
              }
              local_24 = local_24 + 1;
              *pfVar12 = (float)fVar23;
              piVar20 = piVar20 + 1;
              pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
            } while ((int)local_24 < (int)param_1);
          }
          iVar9 = 0;
          fVar25 = 0.0;
          param_2 = 0;
          if (0 < (int)uVar6) {
            do {
              fVar1 = *(float *)((int)local_10 + iVar9 * 4);
              if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar1) {
                fVar25 = fVar1;
                param_2 = (uint)gen_fl2bits(fVar1);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)uVar6);
            if (GEN_ISNAN(fVar25) == (GEN_ISNAN(fVar25) || fVar25 == 0.0)) {
              fVar23 = (float10)*(double *)&REFG(undefined, 0x10912a8);
              param_1 = (uint)param_5;
              param_5 = (undefined4 *)uVar6;
              do {
                if (0 < (int)uVar5) {
                  param_4 = uVar5;
                  pfVar12 = (float *)param_1;
                  do {
                    *pfVar12 = ((float)GEN_TOF(((float10)(int)((float10)(float)((float10)*pfVar12 /
                                                                      ((float10)GEN_TOD(gen_bits2f(param_2))))
                                                      * fVar23 + (float10)REFG(double, 0x1088108)) / fVar23)));
                    pfVar12 = pfVar12 + 1;
                    param_4 = param_4 - 1;
                  } while (param_4 != 0);
                }
                param_1 = param_1 + uVar5 * 4;
                param_5 = (undefined4 *)((int)param_5 - 1);
              } while (param_5 != (undefined4 *)0x0);
            }
          }
        }
        goto LAB_00cf4772;
      }
    }
  }
  local_20 = 0x8007000e;
LAB_00cf4772: ;
  lVar26 = ZEXT48(pvVar8) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  lVar26 = ZEXT48(local_c) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  lVar26 = ZEXT48(local_10) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  return local_20;
}

/* ref: FUN_00cf47af */
GEN_NOFRAME uint GEN_FASTCALL F_00cf47af(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf47afu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (((*(uint *)&gen_args[0]) == 0) || ((*(uint *)&gen_args[2]) == 0)) {
LAB_00cf4b70: ;
    uVar3 = 0x80070057;
    goto LAB_00cf4b75;
  }
  if ((*(uint *)&gen_args[3]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[3]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[0]) != uVar8) goto LAB_00cf4b70;
  }
  if ((*(uint *)&gen_args[4]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[4]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[2]) != uVar8) goto LAB_00cf4b70;
  }
  if ((((*(uint *)&gen_args[3]) == 0x3f) || ((*(uint *)&gen_args[3]) == 0x60f)) && (((*(uint *)&gen_args[4]) == 0x3f || ((*(uint *)&gen_args[4]) == 0x60f)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(uint *)&gen_args[3]) == 0) || ((*(uint *)&gen_args[4]) == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    F_00c48350((*(float * PTR32 *)&gen_args[1]),0,(*(uint *)&gen_args[2]) * (*(uint *)&gen_args[0]) * 4);
    uVar3 = (*(uint *)&gen_args[0]);
    if ((int)(*(uint *)&gen_args[2]) < (int)(*(uint *)&gen_args[0])) {
      uVar3 = (*(uint *)&gen_args[2]);
    }
    if (0 < (int)uVar3) {
      do {
        *(*(float * PTR32 *)&gen_args[1]) = GEN_FLT_TO(*(*(float * PTR32 *)&gen_args[1]), REFG(float, 0x1087f04));
        (*(float * PTR32 *)&gen_args[1]) = (*(float * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[0]) + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    if ((*(uint *)&gen_args[3]) != 4) {
      ((float *)(gen_frame + 0x2c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x2c))[0], REFG(float, 0x1130bfc));
      ((float *)(gen_frame + 0x2c))[1] = gen_bits2f(REFG(float, 0x10947a4));
      ((float *)(gen_frame + 0x2c))[2] = 0.0;
      ((float *)(gen_frame + 0x2c))[3] = gen_bits2f(REFG(float, 0x1130bf8));
      ((float *)(gen_frame + 0x2c))[4] = gen_bits2f(REFG(float, 0x1130bf4));
      ((float *)(gen_frame + 0x2c))[5] = gen_bits2f(REFG(float, 0x1094864));
      ((float *)(gen_frame + 0x2c))[6] = gen_bits2f(REFG(float, 0x1130bf0));
      ((float *)(gen_frame + 0x2c))[7] = gen_bits2f(REFG(float, 0x1094838));
      ((float *)(gen_frame + 0x2c))[8] = gen_bits2f(REFG(float, 0x10943cc));
      iVar9 = (*(uint *)&gen_args[0]) << 2;
      uVar3 = 0;
      ((float *)(gen_frame + 0x2c))[9] = gen_bits2f(REFG(float, 0x1130bec));
      uVar13 = 0;
      uVar8 = 0;
      (*(uint *)(gen_frame + 0x18)) = 1;
      (*(LPVOID *)(gen_frame + 0x4)) = (LPVOID)0x0;
      ((float *)(gen_frame + 0x2c))[10] = gen_bits2f(REFG(float, 0x1130be8));
      pvVar4 = gen_imp_GetProcessHeap();
      pvVar5 = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
      if (pvVar5 == (LPVOID)0x0) {
LAB_00cf4983: ;
        (*(uint *)(gen_frame + 0x20)) = 0x8007000e;
      }
      else {
        iVar9 = (*(uint *)&gen_args[2]) << 2;
        uVar13 = 0;
        pvVar4 = gen_imp_GetProcessHeap();
        (*(LPVOID *)(gen_frame + 0x4)) = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
        if ((*(LPVOID *)(gen_frame + 0x4)) == (LPVOID)0x0) goto LAB_00cf4983;
        uVar6 = 0;
        do {
          if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar8 != (*(uint *)&gen_args[0])) {
              *(float *)((int)pvVar5 + uVar8 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
              uVar8 = uVar8 + 1;
              goto LAB_00cf49b0;
            }
LAB_00cf4ab9: ;
            (*(uint *)(gen_frame + 0x20)) = 0x80070057;
            goto LAB_00cf4b4b;
          }
LAB_00cf49b0: ;
          if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar3 == (*(uint *)&gen_args[2])) goto LAB_00cf4ab9;
            *(float *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
            uVar3 = uVar3 + 1;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xb);
        if ((int)uVar8 < (int)(*(uint *)&gen_args[0])) {
          puVar11 = (undefined4 *)((int)pvVar5 + uVar8 * 4);
          for (iVar9 = (*(uint *)&gen_args[0]) - uVar8; iVar9 != 0; iVar9 = iVar9 - 1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        if ((int)uVar3 < (int)(*(uint *)&gen_args[2])) {
          puVar11 = (undefined4 *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4);
          for (iVar9 = (*(uint *)&gen_args[2]) - uVar3; iVar9 != 0; iVar9 = iVar9 - 1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        (*(uint *)(gen_frame + 0x20)) = F_00cf43cb((*(uint *)&gen_args[0]),(*(uint *)&gen_args[2]),(uint)pvVar5,(*(LPVOID *)(gen_frame + 0x4)),(*(float * PTR32 *)&gen_args[1]));
        if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x18)) = 1;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(int *)(gen_frame + 0x0)) = 0;
          do {
            if ((10 < (*(uint *)(gen_frame + 0xc))) || (!(*(float *)&REFG(undefined, 0x1088114) <= ((float *)(gen_frame + 0x2c))[(int)((*(uint *)(gen_frame + 0xc)))]))) {
              if ((((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) != 0) && (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0)) {
                (*(float * PTR32 *)&gen_args[1])[(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))] = REFG(float, 0x1087f04);
              }
              if (((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) == 0) {
                if ((((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) && (((*(uint *)(gen_frame + 0x18)) & 8) == 0)) {
LAB_00cf4b42: ;
                  (*(uint *)(gen_frame + 0x20)) = 0x80004001;
                  break;
                }
              }
              else if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) == 0) {
                if (((*(uint *)(gen_frame + 0x18)) & 8) == 0) goto LAB_00cf4b42;
                if ((*(uint *)&gen_args[0]) == 1) {
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                    for (uVar3 = (*(uint *)&gen_args[2]); uVar3 != 0; uVar3 = uVar3 - 1) {
                      *pfVar10 = (float)((float10)1 / (float10)(int)(*(uint *)&gen_args[2]));
                      pfVar10 = pfVar10 + 1;
                    }
                  }
                }
                else {
                  fVar1 = ((float)GEN_TOF(((float10)1 / (float10)(int)((*(uint *)&gen_args[0]) - 1))));
                  pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                  uVar3 = (*(uint *)&gen_args[2]);
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    do {
                      iVar9 = 0;
                      if (0 < (int)(*(uint *)&gen_args[0])) {
                        pfVar7 = pfVar10;
                        do {
                          if (iVar9 == (*(int *)(gen_frame + 0x14))) {
                            fVar12 = (float10)fVar1;
                          }
                          else {
                            fVar12 = (float10)(int)(*(uint *)&gen_args[2]) * (float10)*pfVar7;
                          }
                          iVar9 = iVar9 + 1;
                          *pfVar7 = ((float)GEN_TOF((fVar12 / ((float10)(int)(*(uint *)&gen_args[2]) + (float10)fVar1))));
                          pfVar7 = pfVar7 + 1;
                        } while (iVar9 < (int)(*(uint *)&gen_args[0]));
                      }
                      uVar3 = uVar3 - 1;
                      pfVar10 = pfVar10 + (*(uint *)&gen_args[0]);
                    } while (uVar3 != 0);
                  }
                }
              }
            }
            if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
            }
            if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + (*(uint *)&gen_args[0]);
            }
            (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((*(uint *)(gen_frame + 0xc)) < 0xb);
        }
      }
LAB_00cf4b4b: ;
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,pvVar5);
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,(*(LPVOID *)(gen_frame + 0x4)));
      uVar3 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00cf4b75;
    }
    *(*(float * PTR32 *)&gen_args[1]) = GEN_FLT_TO(*(*(float * PTR32 *)&gen_args[1]), REFG(float, 0x1087f04));
    if ((1 < (int)(*(uint *)&gen_args[2])) && ((*(float * PTR32 *)&gen_args[1])[1] = fVar1, 2 < (int)(*(uint *)&gen_args[2]))) {
      pfVar10 = (*(float * PTR32 *)&gen_args[1]) + 2;
      for (iVar9 = (*(uint *)&gen_args[2]) - 2; iVar9 != 0; iVar9 = iVar9 - 1) {
        *pfVar10 = 0.0;
        pfVar10 = pfVar10 + 1;
      }
    }
  }
  uVar3 = 0;
LAB_00cf4b75: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00cf4b89 */
GEN_NOFRAME uint GEN_STDCALL F_00cf4b89(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf4b89u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  short sVar1;
  short * psVar2;
  int iVar3;
  ushort uVar4;
  LPVOID pvVar5;
  float * pfVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_10;
  uint local_c;
  short local_8;
  
  iVar3 = param_1;
  if (param_2 != 0) {
    piVar8 = param_5;
    do {
      if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) != 0) {
        F_00cf3838(*((undefined4 *)GEN_TOP((((int)param_3 - (int)param_5) + (int)piVar8))));
        F_00cf3838(*piVar8);
      }
      piVar8 = piVar8 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  local_c = 0;
  if (((byte)*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) == 2) {
    uVar9 = (uint)*(ushort *)(*param_3 + 2);
    uVar7 = (uint)*(ushort *)(*param_5 + 2);
    pvVar5 = gen_imp_CoTaskMemAlloc(uVar7 * uVar9 * 4);
    *(LPVOID *)(param_1 + 0xc) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      local_c = 0x8007000e;
    }
    else {
      psVar2 = (short *)*param_3;
      sVar1 = psVar2[7];
      param_1 = 0;
      local_8 = sVar1;
      if (*psVar2 == -2) {
        param_1 = *(uint *)(psVar2 + 10);
        local_8 = psVar2[9];
      }
      param_2 = 0;
      if (*(short *)*param_5 == -2) {
        param_2 = *(uint *)((short *)*param_5 + 10);
      }
      if (param_1 == 0) {
        param_1 = F_00cf38b4(uVar9);
      }
      if (param_2 == 0) {
        param_2 = F_00cf38b4(uVar7);
      }
      local_c = F_00cf47af(uVar9,pvVar5,uVar7,param_1,param_2);
      if (-1 < (int)local_c) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        param_5 = (int *)0x4;
        if (uVar9 == uVar7) {
          param_5 = (int *)0x7;
          param_1 = 0;
          if (uVar7 != 0) {
            local_10 = 0;
            do {
              param_2 = 0;
              if (uVar9 != 0) {
                pfVar6 = ((float *)GEN_TOP((local_10 + (int)*(float * PTR32 *)(iVar3 + 0xc))));
                do {
                  if (param_2 == param_1) {
                    fVar11 = ((float10)GEN_TOD(**(float * PTR32 *)(iVar3 + 0xc)));
                    bVar10 = GEN_ISNAN((float10)*pfVar6) || GEN_ISNAN(fVar11);
                    if (bVar10 == (bVar10 || (float10)*pfVar6 == fVar11)) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffe);
                    }
                  }
                  else {
                    bVar10 = GEN_ISNAN(*pfVar6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                    if (bVar10 == (bVar10 || *pfVar6 == *(float *)&REFG(undefined, 0x1088114))) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffc);
                    }
                  }
                  param_2 = param_2 + 1;
                  pfVar6 = pfVar6 + 1;
                } while (param_2 < uVar9);
              }
              param_1 = param_1 + 1;
              local_10 = local_10 + uVar9 * 4;
            } while (param_1 < uVar7);
          }
        }
        if (((uint)param_5 & 1) != 0) {
          gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
        uVar4 = F_00cf3838(*param_3);
        if (uVar4 == 1) {
          if (sVar1 == 0x20) {
            if (local_8 == 0x20) {
              uVar12 = 6;
            }
            else if (local_8 == 0x18) {
              uVar12 = 5;
            }
            else {
              uVar12 = 3;
            }
          }
          else {
            if (sVar1 != 0x18) {
              if (sVar1 == 0x10) {
                uVar7 = F_00cfeb30(1,uVar9,uVar7,param_5);
                *(uint *)(iVar3 + 8) = uVar7;
                *(undefined4 *)(iVar3 + 0x10) = 1;
              }
              else {
                uVar7 = F_00cfeb30(0,uVar9,uVar7,param_5);
                *(undefined4 *)(iVar3 + 0x10) = 0;
                *(uint *)(iVar3 + 8) = uVar7;
              }
              goto LAB_00cf4c38;
            }
            if (local_8 == 0x18) {
              uVar12 = 4;
            }
            else {
              uVar12 = 2;
            }
          }
        }
        else {
          uVar12 = 7;
        }
        uVar7 = F_00cfeb30(uVar12,uVar9,uVar7,param_5);
        *(uint *)(iVar3 + 8) = uVar7;
        *(undefined4 *)(iVar3 + 0x10) = uVar12;
        goto LAB_00cf4c38;
      }
    }
    if (*(LPVOID *)(iVar3 + 0xc) != (LPVOID)0x0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 7;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    if ((int)local_c < 0) {
      return local_c;
    }
  }
LAB_00cf4c38: ;
  *(undefined4 *)(iVar3 + 0x18) = 1;
  return local_c;
}

/* ref: FUN_00cf4deb */
GEN_NOFRAME uint GEN_STDCALL F_00cf4deb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf4debu, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  F_00cf379a(param_1,param_2,param_3);
  puVar5 = (undefined4 *)0xfffe;
  if (uVar1 != 0xfffe) {
    *param_2 = 0xfffe;
    param_2[8] = 0x16;
    param_2[9] = param_1[7];
    uVar6 = F_00cf4019(param_1,param_4);
    *(uint *)(param_2 + 10) = uVar6;
    uVar4 = REFG(undefined4, 0x1130ae0);
    uVar3 = REFG(undefined4, 0x1130adc);
    uVar2 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_2 + 0xc) = (uint)uVar1;
    *(undefined4 *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar4;
    *param_3 = 0x28;
    puVar5 = param_3;
  }
  return (uint)puVar5;
}

/* ref: XAPOBaseWaveHlpNameSpace::AllocateWaveFormatExtensibleCopy */
GEN_NOFRAME undefined * GEN_STDCALL F_00cf4e61(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf4e61u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pWVar2;
  
  uVar1 = F_00cf3762(param_1,1);
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 < 0x28) {
    (*(uint *)(gen_frame + 0x8)) = 0x28;
  }
  pWVar2 = (undefined *)F_004069f0((*(uint *)(gen_frame + 0x8)));
  if (pWVar2 != (undefined *)0x0) {
    F_00cf4deb(param_1,pWVar2,&(*(uint *)(gen_frame + 0x8)),param_2);
  }
  return pWVar2;
}

/* ref: FUN_00cf4ea4 */
GEN_NOFRAME uint GEN_STDCALL F_00cf4ea4(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4ea4u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x4)) = 1;
  if ((*param_1 != 0x165) && ((*(uint *)(gen_frame + 0x4)) = (uint)(param_1[1] != 0), *(int *)(param_1 + 2) == 0)) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 1) {
    uVar3 = F_00cf38d1(param_1 GEN_EDX_ARG);
  }
  else if (uVar2 == 2) {
    uVar3 = F_00cf39a7(param_1);
  }
  else if (uVar2 == 3) {
    uVar3 = F_00cf3951(param_1 GEN_EDX_ARG);
  }
  else {
    if (uVar2 < 0x161) goto LAB_00cf4f72;
    if (uVar2 < 0x163) {
      uVar3 = (uint)(param_1[7] == 0x10);
      if ((*param_1 == -2) && (param_1[9] != 0x10)) {
        uVar3 = 0;
      }
      if (param_1[6] == 0) {
        uVar3 = 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar3 = 0;
      }
    }
    else if (uVar2 == 0x165) {
      uVar3 = F_00cf4093(param_1);
    }
    else {
      if (uVar2 != 0x166) goto LAB_00cf4f72;
      uVar3 = F_00cf4139(param_1);
    }
  }
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
LAB_00cf4f72: ;
  sVar1 = *param_1;
  if ((sVar1 == -2) &&
     (((ushort)param_1[8] < 0x16 ||
      ((*(int *)(param_1 + 10) != 0 &&
       (uVar2 = F_00cf3dd2(*(int *)(param_1 + 10)), uVar2 != param_1[1])))))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  if (((*(uint *)(gen_frame + 0x4)) == 0) && (sVar1 != 0x165)) {
    F_00cf41f0(param_1,((undefined1 *)(gen_frame + 0x8)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00cf4fcb */
GEN_NOFRAME uint GEN_STDCALL F_00cf4fcb(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4fcbu, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SIZE_T cb;
  undefined2 * puVar4;
  uint uVar5;
  
  cb = F_00cf3762(param_1,1);
  if (cb < 0x28) {
    cb = 0x28;
  }
  puVar4 = gen_imp_CoTaskMemAlloc(cb);
  if (puVar4 != (undefined2 *)0x0) {
    uVar5 = F_00cf3762(param_1,0);
    F_00c46aa0(puVar4,param_1,uVar5);
    F_00c48350((undefined *)(uVar5 + (int)puVar4),0,cb - uVar5);
    if (*param_1 != 0xfffe) {
      puVar4[9] = param_1[7];
      uVar5 = F_00cf4019(param_1,1);
      *puVar4 = 0xfffe;
      *(uint *)(puVar4 + 10) = uVar5;
      puVar4[8] = 0x16;
      uVar3 = REFG(undefined4, 0x1130ae0);
      uVar2 = REFG(undefined4, 0x1130adc);
      uVar1 = REFG(undefined4, 0x1130ad8);
      *(uint *)(puVar4 + 0xc) = (uint)*param_1;
      *(undefined4 *)(puVar4 + 0xe) = uVar1;
      *(undefined4 *)(puVar4 + 0x10) = uVar2;
      *(undefined4 *)(puVar4 + 0x12) = uVar3;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cf506d */
GEN_NOFRAME uint GEN_THISCALL F_00cf506d(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf506du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 1;
  return (uint)this;
}

/* ref: FUN_00cf5099 */
GEN_NOFRAME uint GEN_STDCALL F_00cf5099(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5099u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_8;
  
  local_8 = 0;
  uVar5 = F_00cf4ea4(param_1);
  if (uVar5 == 0) {
    return 0x80070057;
  }
  uVar3 = F_00cf3838(param_1);
  uVar2 = REFG(undefined4, 0x1130ae0);
  uVar1 = REFG(undefined4, 0x1130adc);
  uVar6 = REFG(undefined4, 0x1130ad8);
  if ((uVar3 != 3) && (local_8 = 0x88970001, param_2 != 0)) {
    if (*param_1 == -2) {
      param_1[0xc] = 3;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
    else {
      *param_1 = 3;
    }
  }
  if (param_1[1] == 0) {
    local_8 = 0x88970001;
    if (param_2 == 0) goto LAB_00cf5131;
    sVar4 = 1;
  }
  else {
    if (((ushort)param_1[1] < 0x41) || (local_8 = 0x88970001, param_2 == 0)) goto LAB_00cf5131;
    sVar4 = 0x40;
  }
  local_8 = 0x88970001;
  param_1[1] = sVar4;
LAB_00cf5131: ;
  uVar6 = 1000;
  if (((*(uint *)(param_1 + 2) < 1000) || (uVar6 = 200000, 200000 < *(uint *)(param_1 + 2))) &&
     (local_8 = 0x88970001, param_2 != 0)) {
    *(undefined4 *)(param_1 + 2) = uVar6;
  }
  if ((param_1[7] != 0x20) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[7] = 0x20;
  }
  if (((*param_1 == -2) && (param_1[9] != 0x20)) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[9] = 0x20;
  }
  return local_8;
}

/* ref: FUN_00cf518e */
GEN_NOFRAME uint GEN_THISCALL F_00cf518e(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf518eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short sVar1;
  uint local_8;
  
  local_8 = 0;
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 1) != 0) && (param_2[1] != param_1[1])) &&
     (local_8 = 0x88970001, param_3 != 0)) {
    param_2[1] = param_1[1];
  }
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 2) != 0) &&
      (*(int *)(param_2 + 2) != *(int *)(param_1 + 2))) && (local_8 = 0x88970001, param_3 != 0)) {
    *(int *)(param_2 + 2) = *(int *)(param_1 + 2);
  }
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 4) != 0) {
    if ((param_2[7] != param_1[7]) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[7] = param_1[7];
    }
    if (*param_1 == -2) {
      if (*param_2 != -2) {
        if (param_2[7] == param_1[9]) {
          return local_8;
        }
        return 0x88970001;
      }
      sVar1 = param_1[9];
    }
    else {
      if (*param_2 != -2) {
        return local_8;
      }
      sVar1 = param_1[7];
    }
    if ((param_2[9] != sVar1) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[9] = sVar1;
    }
  }
  return local_8;
}

/* ref: FUN_00cf5256 */
GEN_NOFRAME uint GEN_STDCALL F_00cf5256(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf5256u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID param_3 = (LPVOID)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1 GEN_EDX_ARG,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf5314 */
GEN_NOFRAME uint GEN_STDCALL F_00cf5314(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf5314u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID param_3 = (LPVOID)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1 GEN_EDX_ARG,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf53e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf53e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x3c) = param_4;
  return (uint)this;
}

/* ref: FUN_00cf5430 */
GEN_FRAME unsigned int F_00cf5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5430u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cf5450 */
GEN_FRAME uint GEN_THISCALL F_00cf5450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(int *)((int)this + 8) = param_1;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  param_1 = 3;
  do {
    F_00cea700(in_ecx GEN_EDX_ARG);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf41 */
GEN_NOFRAME uint GEN_THISCALL F_00cf55b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf55b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  
  fVar1 = (float10)1;
  *(float *)(this + 0x40) = (float)fVar1;
  *(float *)(this + 0x44) = (float)fVar1;
  *(float *)(this + 0x48) = (float)fVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar2 = (float10)0;
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x4c) = (float)fVar2;
  *(undefined4 *)(this + 0x88) = 0;
  *(float *)(this + 0x50) = (float)fVar2;
  this[0x80] = (undefined1)0x0;
  *(float *)(this + 0x54) = (float)fVar2;
  *(float *)(this + 0x14) = (float)fVar1;
  F_00cea740(this + 0x144 GEN_EDX_FWD);
  F_00cea740(this + 0xf0 GEN_EDX_ARG);
  F_00cea740(this + 0x198 GEN_EDX_ARG);
  uVar3 = F_00cea740(this + 0x1ec GEN_EDX_ARG);
  fVar1 = (float10)0;
  *(float *)(this + 0x4c) = (float)fVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(float *)(this + 0x50) = (float)fVar1;
  *(float *)(this + 0x54) = (float)fVar1;
  return uVar3;
}

/* ref: FUN_00cf5630 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf5630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 100))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x48))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xc) = 0;
    if (*(char *)((int)this + 0x2e) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x34))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,0);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_ARG);
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    if ((char)uVar3 == '\0') {
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0x18) = 0;
        return;
      }
    }
    else {
      if (*(int *)((int)this + 0x34) == 3) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG);
        *(undefined4 *)((int)this + 0x18) = 0;
        return;
      }
      ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,0);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf49 */
GEN_FRAME uint GEN_THISCALL F_00cf5700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5700u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x5c))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf8 */
GEN_FRAME byte GEN_THISCALL F_00cf5720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0,0);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 1;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG,param_2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,0,0);
  }
  return 1;
}

/* ref: FUN_00cf5770 */
GEN_FRAME uint GEN_THISCALL F_00cf5770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  iVar6 = *(int *)((int)this + 0xa8);
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar5 = *(uint *)((int)this + 0x94);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (iVar6 == 0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xa0);
    if (iVar1 == 0xf) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else if (iVar1 == 0xb) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0xa4) & 0xffffff80;
      (*(uint *)(gen_frame + 0x18)) = (iVar6 - *(uint *)((int)this + 0xa4)) + 0x7f & 0xffffff80;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else {
      uVar2 = *(uint *)((int)this + 0xa4);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      if (iVar1 == 0xc) {
        (*(uint *)(gen_frame + 0x18)) = iVar6 - uVar2;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = (iVar6 - uVar2) + 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
    }
  }
  if (param_2 != 0) {
    iVar6 = *(int *)((int)this + 0xa0);
    (*(uint *)(gen_frame + 0xc)) = param_2;
    if (iVar6 == 1) {
      uVar5 = uVar5 / (uint)(*(int *)((int)this + 0x98) * 2);
    }
    else if (iVar6 == 0xc) {
      iVar6 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) - 0x20;
      uVar5 = F_00ce93e0(iVar6);
      iVar6 = iVar6 + uVar5;
      uVar5 = (*(uint *)((int)this + 0x94) / (uint)*(ushort *)(iVar6 + 0xc)) *
              (uint)*(ushort *)(iVar6 + 0x12);
    }
    else if (iVar6 == 0xb) {
      iVar6 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) - 0x20;
      uVar5 = F_00ce93e0(iVar6);
      uVar5 = *(uint *)(uVar5 + 0x18 + iVar6);
    }
    else {
      uVar5 = uVar5 >> 1;
    }
    if (uVar5 < param_2) {
      return uVar5;
    }
    (*(int *)(gen_frame + 0x10)) = uVar5 - param_2;
  }
  if (*(int *)((int)this + 0xa0) != 0xf) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    return uVar5;
  }
  puVar3 = *(uint * PTR32 *)((int)this + 0x24);
  piVar4 = *(int * PTR32 *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar3 + 1;
  (*(uint *)(gen_frame + 0x28)) = *puVar3 >> 2;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint * PTR32 *)(gen_frame + 0x24)));
  return uVar5;
}

/* ref: FUN_00cf5910 */
GEN_FRAME byte GEN_THISCALL F_00cf5910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  iVar5 = *(int *)((int)this + 0xa0);
  if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 0xd)) && (iVar5 != 6)) {
    if (iVar5 == 0xc) {
      uVar3 = F_00ce93e0(param_2);
      uVar4 = *(ushort *)(uVar3 + 0x10 + param_2) + 0x12;
      if ((uVar4 < 0x33) && (*(short *)(uVar3 + param_2 + 0x14) == 7)) {
        F_00c46aa0(param_1,uVar3 + param_2,uVar4);
        return 1;
      }
    }
    else if (iVar5 == 0xf) {
      puVar6 = (undefined4 *)(param_2 + 0x20);
      puVar7 = param_1;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
    return 0;
  }
  *(undefined2 *)param_1 = 1;
  sVar1 = *(short *)((int)this + 0x98);
  *(short *)((int)param_1 + 2) = sVar1;
  param_1[1] = *(undefined4 *)((int)this + 0x9c);
  uVar2 = sVar1 * 2;
  *(ushort *)(param_1 + 3) = uVar2;
  *(undefined2 *)((int)param_1 + 0xe) = 0x10;
  param_1[2] = (uint)uVar2 * param_1[1];
  *(undefined2 *)(param_1 + 4) = 0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_00cf59e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x3c) != 0) {
    *(undefined4 *)(this + 0xd4) = 4;
    return in_EAX;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_00cf5a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xd4) != 2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  *(undefined4 *)(this + 0xd4) = 5;
  *(undefined4 *)(this + 0xdc) = 0;
  if (*(uint *)(this + 0xa4) < *(uint *)(this + 0xa8)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return *(uint *)(this + 0xa8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_00cf5a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  *(undefined4 *)(this + 0xd4) = 6;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_FWD,0,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf5a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0xd4) == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0x20,0);
    *(undefined4 *)(this + 0xd4) = 3;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_00cf5aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xd4) == 3) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf19 */
GEN_FRAME uint GEN_THISCALL F_00cf5ac0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcf5ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = F_00c51673((double)param_2);
  if (iVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0);
  }
  *(float *)(param_1 + 0x44) = param_2;
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf30 */
GEN_FRAME uint GEN_THISCALL F_00cf5b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined * pVVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = (int *)F_00d2ccd0();
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x124))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      iVar4 = F_00c51673((double)param_1[iVar6]);
      if (iVar4 != 0) {
        param_1[iVar6] = (float)(float10)1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  uVar5 = uVar3;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == 1))
  {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)*param_1)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)param_1[1] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[2])));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[3] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[4])));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)param_1[5] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[6])));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)param_1[7] * (float10)*(float *)(this + 0x14))));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (this[0x80] != (undefined1)0x0) {
      pVVar7 = this + 0x60;
      do {
        piVar2 = *(int * PTR32 *)(this + 0xc);
        fVar8 = (float10)*(float *)(pVVar7 + 0x10);
        uVar1 = *(undefined4 *)pVVar7;
        (*(float *)(gen_frame + 0x8)) = (float)(fVar8 * (float10)*param_1);
        (*(float *)(gen_frame + 0xc)) = (float)((float10)param_1[1] * fVar8);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)param_1[2] * fVar8);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[3] * fVar8);
        (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[4] * fVar8);
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_1[5] * fVar8);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)param_1[6] * fVar8);
        (*(float *)(gen_frame + 0x24)) = (float)(fVar8 * (float10)param_1[7]);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2 GEN_EDX_ARG,uVar1,1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
        uVar5 = (*(uint *)(gen_frame + 0x0)) + 1;
        pVVar7 = pVVar7 + 4;
        (*(uint *)(gen_frame + 0x0)) = uVar5;
      } while ((int)uVar5 < (int)(uint)(byte)this[0x80]);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf45 */
GEN_FRAME uint GEN_THISCALL F_00cf5c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  int iVar2;
  int * piVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(int *)(gen_frame + 0x10)) = param_2;
  if (0 < param_1) {
    iVar10 = 0;
    do {
      iVar2 = F_00c51673((double)*(float *)((*(int *)(gen_frame + 0x10)) + iVar10 * 4));
      if (iVar2 != 0) {
        *(float *)((*(int *)(gen_frame + 0x10)) + iVar10 * 4) = (float)(float10)1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1);
  }
  piVar3 = (int *)F_00d2ccd0();
  fVar4 = gen_bits2f(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x124))(piVar3 GEN_EDX_ARG));
  iVar2 = (*(int *)(gen_frame + 0x10));
  iVar10 = *(int *)(this + 0xc);
  (*(float *)(gen_frame + 0x8)) = fVar4;
  if (((iVar10 != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == param_1)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_1,
               (undefined4)gen_fl2bits(fVar4),(*(int *)(gen_frame + 0x10)),0);
  }
  ((float *)(gen_frame + 0x118))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x18))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x118))[1] = 0.0;
  ((float *)(gen_frame + 0x118))[2] = 0.0;
  ((float *)(gen_frame + 0x118))[3] = 0.0;
  ((float *)(gen_frame + 0x118))[4] = 0.0;
  ((float *)(gen_frame + 0x118))[5] = 0.0;
  ((float *)(gen_frame + 0x118))[6] = 0.0;
  ((float *)(gen_frame + 0x118))[7] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x18)) + 1,0,0xfc);
  iVar10 = 0;
  iVar11 = iVar2;
  if (3 < param_1 * 8) {
    (*(int *)(gen_frame + 0xc)) = (int)((float *)(gen_frame + 0x18)) - iVar2;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_1 * 8 - 3);
    pfVar6 = (float *)(iVar2 + 8);
    iVar9 = iVar10;
    do {
      iVar10 = iVar9 + 4;
      pfVar5 = pfVar6 + 4;
      (&(*(float *)(gen_frame + 0x8)))[iVar10] = ((float)GEN_TOF(((float10)pfVar6[-2] * (float10)*(float *)(this + 0x90))));
      (&(*(float *)(gen_frame + 0x8)))[iVar9 + 5] = ((float)GEN_TOF(((float10)pfVar6[-1] * (float10)*(float *)(this + 0x90))));
      *(float *)((*(int *)(gen_frame + 0xc)) - 0x10 + (int)pfVar5) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x90) * (float10)*pfVar6)));
      *((float *)GEN_TOP((((int)&(*(int *)(gen_frame + 0xc)) - iVar2) + (int)pfVar5))) =
           ((float)GEN_TOF(((float10)pfVar6[1] * (float10)*(float *)(this + 0x90))));
      pfVar6 = pfVar5;
      iVar9 = iVar10;
      iVar11 = (*(int *)(gen_frame + 0x10));
    } while (iVar10 < (int)gen_fl2bits((*(float *)(gen_frame + 0x14))));
  }
  while (iVar10 < param_1 * 8) {
    iVar2 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    (&(*(float *)(gen_frame + 0x14)))[iVar10] =
         ((float)GEN_TOF(((float10)*(float *)(iVar11 + iVar2) * (float10)*(float *)(this + 0x90))));
  }
  if (0 < param_1) {
    pfVar6 = ((float *)(gen_frame + 0x18)) + 1;
    iVar10 = 0;
    do {
      fVar4 = pfVar6[-1];
      iVar2 = iVar10 + 1;
      fVar1 = ((float *)(gen_frame + 0x108))[(int)(iVar10 + 4)];
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 + (float10)fVar1);
      fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar1) + (float10)*pfVar6)));
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[1]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[2]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[3]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[4]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[5]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      ((float *)(gen_frame + 0x108))[(int)(iVar10 + 4)] = (float)((float10)fVar4 + (float10)pfVar6[6]);
      pfVar6 = pfVar6 + 8;
      iVar10 = iVar2;
    } while (iVar2 < param_1);
  }
  fVar12 = (float10)*(double *)&REFG(double, 0x10948e0);
  uVar7 = 0;
  if (3 < param_1) {
    uVar8 = uVar7;
    do {
      uVar7 = uVar8 + 4;
      ((float *)(gen_frame + 0x108))[(int)(uVar7)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 4)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 5)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 5)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 6)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 6)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 7)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 7)] * fVar12);
      uVar8 = uVar7;
    } while ((int)uVar7 < param_1 - 3);
  }
  for (; (int)uVar7 < param_1; uVar7 = uVar7 + 1) {
    ((float *)(gen_frame + 0x108))[(int)(uVar7 + 4)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 4)] * fVar12);
  }
  if ((*(int *)(this + 0x88) != 0) && (*(int *)(this + 0x84) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(int *)(this + 0x88),param_1,
               (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))),((float *)(gen_frame + 0x18)),0);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                      (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(undefined4 *)(this + 0x84),param_1,1,((float *)(gen_frame + 0x108)) + 4,0
                      );
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf31 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf69d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf32 */
GEN_FRAME uint GEN_THISCALL F_00cf69e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcf69e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xd4) != 6)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),0)));
  }
  *(float *)(param_1 + 0x48) = param_2;
  return (uint)piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf33 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf6a20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcf6a20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0xe8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 0xc))))
              (*(int * PTR32 *)(param_1 + 0xe8) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 4))))(*(int * PTR32 *)(param_1 + 0xe8) GEN_EDX_ARG,0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf34 */
GEN_FRAME float10 GEN_THISCALL F_00cf6a60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcf6a60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 in_ST0 = 0;
  float fVar1;
  
  if ((*(int *)((int)param_1 + 0x84) != 0) && (*(int *)((int)param_1 + 0x88) != 0)) {
    *(float *)((int)param_1 + 0x14) = param_2;
    *(float *)((int)param_1 + 0x90) = (float)(float10)0;
    *(float *)((int)param_1 + 0x8c) = param_3;
    fVar1 = F_00cf5f80(param_1 GEN_EDX_FWD);
    in_ST0 = (float10)fVar1;
  }
  return in_ST0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf35 */
GEN_FRAME uint GEN_THISCALL F_00cf6aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00cf6ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf6ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf37 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf6ac0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcf6ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf11 */
GEN_NOFRAME unsigned int F_00cf6ad0(void)
{
  GEN_ENTER(0xcf6ad0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cf6ae0 */
GEN_FRAME uint GEN_THISCALL F_00cf6ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x240) = param_1;
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = param_1 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cf6b20 */
GEN_FRAME byte GEN_THISCALL F_00cf6b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  if (*(int *)((int)this + 0x240) == 0) {
    return 0;
  }
  sVar1 = *(short *)((int)this + 0x248);
  bVar4 = 0;
  uVar3 = param_1 / *(uint *)((int)this + 0x98) >> 1;
  *(int *)((int)this + 0x24c) = *(int *)((int)this + 0x24c) + uVar3;
  if (-1 < sVar1) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x244) + sVar1 * 4)));
    if ((*(int *)((int)this + 0x24c) < iVar2) &&
       ((int)(uVar3 / 2) <= iVar2 - *(int *)((int)this + 0x24c))) {
      local_5 = 0;
      bVar4 = local_5;
    }
    else {
      *(short *)((int)this + 0x248) = sVar1 + 1;
      bVar4 = 1;
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10))) <= (int)(short)(sVar1 + 1)) {
        *(undefined2 *)((int)this + 0x248) = 0xffff;
      }
    }
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x24c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x240) + 8)));
    *(undefined2 *)((int)this + 0x248) = 0;
    if (**(int * PTR32 *)((int)this + 0x244) <= *(int *)((int)this + 0x24c)) {
      while (*(short *)((int)this + 0x248) = *(short *)((int)this + 0x248) + 1,
            (int)*(short *)((int)this + 0x248) < *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10)))) {
        if (*(int *)((int)this + 0x24c) <
            *((int *)GEN_TOP((*(int *)((int)this + 0x244) + *(short *)((int)this + 0x248) * 4)))) {
          return bVar4;
        }
      }
      *(undefined2 *)((int)this + 0x248) = 0xffff;
    }
  }
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_00cf6c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x34))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf43 */
GEN_FRAME uint GEN_THISCALL F_00cf6c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x40))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf13 */
GEN_FRAME byte GEN_THISCALL F_00cf6c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar5 = *(int *)(this + 0xa0);
    if (iVar5 == 1) {
      fVar6 = (float10)param_1;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(this + 0x9c);
      if (*(int *)(this + 0x9c) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = *(uint *)(this + 0xa8);
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((uVar3 != 0) && (uVar3 < local_10)) {
        do {
          uVar4 = uVar4 + (*(int *)(this + 0xa4) - uVar3);
        } while (uVar3 < uVar4);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0,0);
    }
    else {
      if (iVar5 != 0xc) {
        if (iVar5 == 6) {
          iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) - 0x20;
          uVar4 = F_00ce93e0(iVar5);
          pcVar1 = (char *)(iVar5 + uVar4);
          if ((*pcVar1 != '\0') && (*(uint *)(pcVar1 + 0x10) != 0)) {
            bVar2 = pcVar1[1];
            fVar6 = (float10)param_1;
            uVar4 = *(uint *)(pcVar1 + 0x10) >> 2;
            if (param_1 < 0) {
              fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            iVar5 = (int)((fVar6 * (float10)REFG(double, 0x1091858)) / (float10)*(float *)(pcVar1 + 0xc));
            if ((int)uVar4 <= iVar5) {
              if (*(uint *)(this + 0xa8) <= *(uint *)(this + 0xa4)) {
                return 0;
              }
              do {
                iVar5 = iVar5 + (*(int *)(pcVar1 + 0x18) - uVar4);
              } while ((int)uVar4 <= iVar5);
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,*(undefined4 *)(pcVar1 + iVar5 * 4 + (uint)bVar2),1);
            return 1;
          }
        }
        return 0;
      }
      iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) - 0x20;
      uVar4 = F_00ce93e0(iVar5);
      fVar6 = (float10)param_1;
      iVar5 = iVar5 + uVar4;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(iVar5 + 4);
      if (*(int *)(iVar5 + 4) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((*(uint *)(this + 0x94) / (uint)*(ushort *)(iVar5 + 0xc)) *
          (uint)*(ushort *)(iVar5 + 0x12) <= local_10) {
        uVar3 = *(uint *)(this + 0xa8);
        if (uVar3 <= *(uint *)(this + 0xa4)) {
          return 0;
        }
        if (uVar3 < local_10) {
          do {
            uVar4 = uVar4 + (*(uint *)(this + 0xa4) - uVar3);
          } while (uVar3 < uVar4);
        }
      }
      uVar4 = uVar4 - uVar4 % (uint)*(ushort *)(iVar5 + 0x12);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
    F_00cf5770(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1c),uVar4);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_00cf6ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x54))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cf6ee0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf6ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c) GEN_EDX_ARG);
    if (((((char)uVar1 == '\0') && (*(int *)(param_1 + 0xd4) == 2)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x50))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,0x20,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 3;
    }
  }
  return;
}

/* ref: FUN_00cf6f50 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf6f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c) GEN_EDX_ARG);
    if (((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xd4) == 3)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x4c))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,0,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 2;
    }
  }
  return;
}

/* ref: FUN_00cf6fc0 */
GEN_FRAME uint GEN_THISCALL F_00cf6fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 0xd0) = 6;
  return param_1;
}

/* ref: FUN_00cf6fe0 */
GEN_FRAME float GEN_THISCALL F_00cf6fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  float10 in_ST0 = 0;
  float fVar1;
  
  if (param_2 == 1) {
    fVar1 = F_00cd8d60(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_FWD,0xff,0);
    in_ST0 = (float10)fVar1;
  }
  return (float)in_ST0;
}

/* ref: FUN_00cf7000 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf7000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00cf7010 */
GEN_FRAME uint GEN_THISCALL F_00cf7010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 - 4) + 0x40))))(param_1 - 4 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cf7030 */
GEN_FRAME uint GEN_THISCALL F_00cf7030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  int local_8;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  local_8 = 3;
  do {
    F_00cea700(in_ecx GEN_EDX_ARG);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_00cf7190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  F_00cf5630(this GEN_EDX_FWD);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  uVar2 = (*pcVar1)(this);
  *(undefined4 *)(this + 0x34) = 0;
  this[0x5c] = (undefined1)0x0;
  this[0x38] = (undefined1)0x0;
  return uVar2;
}

/* ref: FUN_00cf71c0 */
GEN_FRAME uint GEN_THISCALL F_00cf71c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf71c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  
  if (((*param_2 == '\x02') &&
      (bVar2 = param_2[1], iVar3 = *(int *)(param_2 + 0x10),
      *(int *)(param_2 + (uint)bVar2 + iVar3) != 0x5367674f)) &&
     (uVar4 = 0, *(int *)(param_2 + 0x14) != 0)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar4 + (int)(param_2 + (uint)bVar2 + iVar3))));
      *pbVar1 = *pbVar1 ^ param_2[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x14));
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x68,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)F_00cfed50(this_00 GEN_EDX_ARG,param_1,*(undefined4 *)((int)this + 0x94),
                                 *(int *)((int)this + 0x98) << 0xb,4,0,param_2,0);
  }
  *(int * PTR32 *)((int)this + 0x18) = piVar5;
  if (*(int *)((int)this + 0xa8) != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x2c))
              (piVar5 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xa4),*(int *)((int)this + 0xa8));
  }
  uVar4 = F_00ce9400(param_3);
  *(uint *)((int)this + 0x240) = uVar4;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
    uVar4 = uVar4 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cf72c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf72c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf72c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x38) != '\x01') {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar1;
    if (piVar1 != (int *)0x0) {
      if (*(int *)((int)this + 0x34) == 3) {
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_FWD);
        if (uVar3 != 0) {
          while (piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)), uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG),
                (char)uVar3 == '\0') {
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
            if (uVar3 == 0xffffffff) {
              F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) GEN_EDX_ARG);
              break;
            }
            if (((*(int *)(gen_frame + 0x24)) == 0) || ((*(int *)(gen_frame + 0x28)) == 0)) break;
            (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x24));
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)*(undefined4 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x28));
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),(uint)(uVar3 == 3));
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            if (0 < (int)uVar3) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
            }
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                              (*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
            if ((int)uVar3 < 0) break;
            uVar5 = (*(uint *)(gen_frame + 0x38)) + 1;
            (*(uint *)(gen_frame + 0x38)) = uVar5;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return;
            }
          }
        }
      }
      else {
        uVar5 = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG);
        if (uVar3 != 0) {
          while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))
                                   (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG), (char)uVar3 == '\0') {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x20))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
            piVar1 = *(int * PTR32 *)((int)this + 0x18);
            (*(undefined4 *)(gen_frame + 0x0)) = 0;
            (*(uint *)(gen_frame + 0x4)) = 0;
            (*(uint *)(gen_frame + 0x8)) = 0;
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
            uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            if (uVar4 == 0) break;
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))
                              (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,uVar5);
            piVar1 = *(int * PTR32 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = piVar1;
            if (uVar3 != 0) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
              ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,1);
            }
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))
                              (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,uVar5);
            bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),uVar3 & 0xff);
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
            uVar5 = uVar5 + 1;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return;
            }
          }
        }
      }
      *(undefined1 *)((int)this + 0x38) = 1;
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00cf74f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd4);
  if ((uVar1 == 1) || (uVar1 == 3)) {
    F_00cf72c0(this GEN_EDX_FWD);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
    *(undefined4 *)(this + 0xd4) = 2;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf29 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf7530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cf9bb0(this + 0x144 GEN_EDX_FWD,param_1 + 0x54);
  F_00cf9bb0(this + 0xf0 GEN_EDX_ARG,param_1);
  F_00cf9bb0(this + 0x198 GEN_EDX_ARG,param_1 + 0xa8);
  F_00cf9bb0(this + 0x1ec GEN_EDX_ARG,param_1 + 0xfc);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf46 */
GEN_FRAME float10 GEN_THISCALL F_00cf7580(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf7580u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  
  *(float *)((int)param_1 + 0x4c) = param_2;
  *(undefined4 *)((int)param_1 + 0x58) = param_5;
  *(float *)((int)param_1 + 0x50) = param_3;
  *(float *)((int)param_1 + 0x54) = param_4;
  fVar1 = F_00cf5f80(param_1 GEN_EDX_FWD);
  return (float10)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf51 */
GEN_FRAME uint GEN_THISCALL F_00cf75b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xcf75b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  undefined * pvVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  float10 extraout_ST0;
  
  piVar4 = *(int * PTR32 *)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_FWD,0);
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,0);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if ((pvVar2 == (undefined *)0x0) ||
       (piVar4 = (int *)F_00cf9500(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1), piVar4 == (int *)0x0)) break;
LAB_00cf7633: ;
    piVar4 = ((int *)GEN_TOP((*(int *)(*piVar4 + 4) + (int)piVar4)));
    goto LAB_00cf763a;
  case 2: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9570(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 != (int *)0x0) goto LAB_00cf7633;
      piVar4 = (int *)0x0;
      goto LAB_00cf763a;
    }
    break;
  case 3: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf95e0(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 4: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9650(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 5: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf96c0(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 6: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9800(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 7: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9940(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  default: ;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    goto LAB_00cf7782;
  }
  piVar4 = (int *)0x0;
LAB_00cf763a: ;
  *(int * PTR32 *)(param_1 + 0xe0) = piVar4;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),0,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe0) + 0xc))))
            (*(int * PTR32 *)(param_1 + 0xe0) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_4),1,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe0) + 0xc))))
            (*(int * PTR32 *)(param_1 + 0xe0) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_5),2,0);
LAB_00cf7782: ;
  (*(uint * PTR32 *)(gen_frame + 0x28)) = ((uint *)(gen_frame + 0xc));
  piVar4 = *(int * PTR32 *)(param_1 + 0xe0);
  (*(int *)(gen_frame + 0x24)) = 0;
  if (piVar4 != (int *)0x0) {
    ((uint *)(gen_frame + 0xc))[2] = *(undefined4 *)(param_1 + 0x98);
    ((uint *)(gen_frame + 0xc))[1] = 1;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 8)));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
    iVar3 = (*(int *)(gen_frame + 0x24));
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0);
    ((uint *)(gen_frame + 0xc))[(int)(iVar3 * 3 + 2)] = *(uint *)(param_1 + 0x98);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 0x18))))(*(int * PTR32 *)(param_1 + 0xe8) GEN_EDX_ARG);
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
  piVar4 = *(int * PTR32 *)(param_1 + 0xe0);
  if (piVar4 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc),0);
  }
  uVar5 = (uint)(piVar4 != (int *)0x0);
  piVar4 = *(int * PTR32 *)(param_1 + 0xe8);
  if (piVar4 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc),uVar5);
  }
  return uVar5;
}

/* ref: FUN_00cf7890 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf7890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x18) != 0)) &&
      (iVar4 = *(int *)((int)this + 0xd4), iVar4 != 6)) &&
     ((*(int *)((int)this + 0x34) != 2 || ((iVar4 != 4 && (iVar4 != 5)))))) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb8);
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    iVar4 = *(int *)((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xb4) = 0;
    (*(int *)(gen_frame + 0x38)) = iVar4;
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (*(int *)((int)this + 0x34) == 3) {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(uint *)(gen_frame + 0x24)) = 0;
      if ((*(int *)(gen_frame + 0x38)) != 0) {
        while (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG), (char)uVar3 == '\0') {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x28)));
          if (uVar3 == 0xffffffff) {
            F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) GEN_EDX_ARG);
            break;
          }
          if (((*(int *)(gen_frame + 0x28)) == 0) || ((*(int *)(gen_frame + 0x2c)) == 0)) break;
          (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x2c));
          (*(uint *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x28));
          if (uVar3 == 1) {
            (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          }
          bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x2c)),(uint)(uVar3 == 3));
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) - 1;
          (*(uint *)(gen_frame + 0x24)) = (uint)(bVar2 == 1);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                            (*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),0);
          if ((int)uVar3 < 0) break;
          if ((*(int *)(gen_frame + 0x38)) == 0) {
            return;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x38));
        if ((*(int *)(gen_frame + 0x38)) != 0) {
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_EnterCriticalSection(lpCriticalSection);
          }
          *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + iVar4;
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return;
          }
        }
      }
    }
    else if (iVar4 != 0) {
      while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG)
            , (char)uVar3 == '\0') {
        piVar1 = *(int * PTR32 *)((int)this + 0x18);
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG);
        if ((uVar3 != 0) || (*(int *)((int)this + 0xd4) == 5)) {
          piVar1 = *(int * PTR32 *)((int)this + 0x18);
          (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,1);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x58))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
          if ((char)uVar3 != '\0') {
            F_00cd87f0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,0);
            return;
          }
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x14))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
        if ((int)uVar3 < 0) {
          return;
        }
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        if (uVar3 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x30))))
                    (*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),0);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x8)) = uVar3;
          *(undefined1 *)((int)this + 0x5c) = 1;
        }
        else if (*(char *)((int)this + 0x5c) != '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x44));
          *(undefined1 *)((int)this + 0x5c) = 0;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x18))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
        iVar4 = uVar3 - 1;
        if (iVar4 < 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
          iVar4 = uVar3 - 1;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,iVar4);
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,iVar4)
        ;
        bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),uVar3 & 0xff);
        if (bVar2 == 1) {
          (*(uint *)(gen_frame + 0x24)) = 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),0);
        iVar4 = (*(int *)(gen_frame + 0x38)) - 1;
        (*(int *)(gen_frame + 0x38)) = iVar4;
        if (iVar4 == 0) {
          return;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00cf7b70 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf7b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf7bb0 */
GEN_FRAME uint GEN_THISCALL F_00cf7bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*(uint *)((int)this + 8) + 8)));
  if (piVar4 == (int *)0x0) {
    return *(uint *)((int)this + 8);
  }
  this_00 = *(int * PTR32 *)((int)this + 0xec);
  if (this_00 != (int *)0x0) {
    *this_00 = (int)&REFG(undefined, 0x112a2b8);
    this_00[4] = (int)&REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0(this_00 + 6 GEN_EDX_FWD,0);
    F_00cd0850(this_00 GEN_EDX_ARG,this_00 + 0x22,0,0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *(int *)(this_00[4] + 4) + 0x10))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *(int *)(*this_00 + 4)))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
    *((int *)GEN_TOP((*(int *)(*this_00 + 4) - 4 + (int)this_00))) = *(int *)(*this_00 + 4) - 0x18;
    *(int *)((int)this + 0xe8) = *(int *)(*this_00 + 4) + (int)this_00;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
    if ((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0) {
      iVar1 = *(int *)this;
      extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
      ((code *)*(gen_code32 *)(iVar1 + 0x84))(this,(undefined4)gen_fl2bits((float)extraout_ST0_00));
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb4))(piVar4 GEN_EDX_ARG);
  uVar3 = uVar3 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf9500(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
LAB_00cf7e83: ;
      *(int *)((int)this + 0xe0) = *(int *)(*piVar4 + 4) + (int)piVar4;
      return (uint)piVar4;
    }
    break;
  case 1: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf9570(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
LAB_00cf7e2f: ;
      *(int *)((int)this + 0xe0) = *(int *)(*piVar4 + 4) + (int)piVar4;
      return (uint)piVar4;
    }
    goto LAB_00cf7e20;
  case 2: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf95e0(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 3: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf9650(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e2f;
    }
    goto LAB_00cf7e20;
  case 4: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf96c0(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 5: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf9800(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) goto LAB_00cf7e2f;
    }
LAB_00cf7e20: ;
    *(undefined4 *)((int)this + 0xe0) = 0;
    return uVar3;
  case 6: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4 GEN_EDX_ARG);
      piVar4 = (int *)F_00cf9940(pvVar2 GEN_EDX_ARG,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) goto LAB_00cf7e83;
    }
    break;
  default: ;
    *(undefined4 *)((int)this + 0xe0) = 0;
    return uVar3;
  }
  *(undefined4 *)((int)this + 0xe0) = 0;
  return uVar3;
}

/* ref: FUN_00cf7ed0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf7ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xe8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  }
  F_00cf5630(this GEN_EDX_ARG);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  (*pcVar1)(this);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  if (*(int *)((int)this + 0xe4) != 0) {
    F_00406810(*(int *)((int)this + 0xe4));
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    F_00406810(*(int *)((int)this + 0xec));
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  iVar3 = 3;
  iVar4 = (int)this + 0x244;
  do {
    F_00cccb40(iVar4 - 0x30 GEN_EDX_ARG);
    F_00cccb40(iVar4 - 0x54 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    iVar4 = iVar4 - 0x54;
  } while (-1 < iVar3);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  return 0;
}

/* ref: FUN_00cf7fa0 */
GEN_FRAME byte GEN_THISCALL F_00cf7fa0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7fa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  code * pcVar4;
  float10 fVar5;
  float10 fVar6;
  byte bVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float * pfVar11;
  uint uVar12;
  undefined4 uVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  (*(float *)(gen_frame + 0x3c)) = param_1;
  if (REFG(char, 0x15d8bd9) != '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec) ^ (uint)(uint)(gen_frame + 0x1ec) GEN_EDX_FWD);
    return 0;
  }
  uVar8 = F_00cd7ae0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  uVar12 = 1;
  ((float *)(gen_frame + 0x1c4))[4] = 0.0;
  ((float *)(gen_frame + 0x1c4))[5] = 0.0;
  ((float *)(gen_frame + 0x1c4))[6] = 0.0;
  ((float *)(gen_frame + 0x1c4))[7] = 0.0;
  ((float *)(gen_frame + 0x1c4))[8] = 0.0;
  (*(uint *)(gen_frame + 0x38)) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    *(undefined1 *)((int)this + 0x2e) = 0;
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    fVar14 = gen_bits2f(F_00ccb4d0(uVar8 - 1));
    *(float *)((int)this + 0x10) = fVar14;
    if (fVar14 == 0.0) goto LAB_00cf8463;
    ((float *)(gen_frame + 0x1c4))[4] = fVar14;
    if ((char)param_2 != '\0') {
      F_00d2de20(((undefined1 *)(gen_frame + 0x30)),0);
      bVar7 = F_00cbb930(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      iVar10 = -(uint)(bVar7 != 0);
      if (-1 < iVar10) {
        uVar8 = F_00ccb560(iVar10);
        *(uint *)((int)this + 0x84) = uVar8;
        fVar9 = gen_bits2f(F_00ccb580(iVar10));
        fVar14 = *(float *)((int)this + 0x84);
        *(float *)((int)this + 0x88) = fVar9;
        if ((fVar14 != 0.0) && (fVar9 != 0.0)) {
          (*(uint *)(gen_frame + 0x38)) = 3;
          uVar12 = 3;
          *(float *)((int)this + 0x14) = (float)(float10)0;
          ((float *)(gen_frame + 0x1c4))[5] = fVar9;
          *(float *)((int)this + 0x8c) = (float)(float10)1;
          ((float *)(gen_frame + 0x1c4))[6] = fVar14;
          *(float *)((int)this + 0x90) = (float)(float10)1;
          *(undefined1 *)((int)this + 0x80) = 0;
        }
      }
      F_00cbb890(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    }
  }
  else {
    bVar7 = F_00cd7b40(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,0);
    iVar10 = REFG(int, 0x15d8bac);
    if (bVar7 == 0) {
      *(int *)((int)this + 0x10) = REFG(int, 0x15d8bac);
      if (iVar10 == 0) {
        *(undefined4 *)((int)this + 0x10) = REFG(undefined4, 0x15d8ba8);
      }
    }
    else {
      uVar8 = F_00ccb4d0(bVar7 - 1);
      *(uint *)((int)this + 0x10) = uVar8;
    }
    ((float *)(gen_frame + 0x1c4))[4] = *(float *)((int)this + 0x10);
    bVar7 = F_00cd7c00(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    if (bVar7 != 0) {
      fVar14 = F_00cd7ba0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,0);
      *(float *)((int)this + 0x14) = fVar14;
    }
    bVar7 = F_00cd7c00(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    if ((byte)(bVar7 - 1) != 0) {
      pfVar11 = (float *)((int)this + 0x70);
      (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)(byte)(bVar7 - 1);
      uVar8 = uVar12;
      do {
        bVar7 = F_00cd7b40(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar8);
        if (bVar7 != 0) {
          fVar14 = gen_bits2f(F_00ccb4d0(bVar7 - 1));
          ((float *)(gen_frame + 0x1c4))[(int)((*(uint *)(gen_frame + 0x38)) + 4)] = fVar14;
          pfVar11[-4] = fVar14;
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
          fVar14 = F_00cd7ba0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar8);
          *pfVar11 = fVar14;
        }
        uVar8 = (uint)(byte)((char)uVar8 + 1);
        pfVar11 = pfVar11 + 1;
        piVar2 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) - 1);
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar2;
        uVar12 = (*(uint *)(gen_frame + 0x38));
      } while (piVar2 != (int *)0x0);
    }
    bVar7 = F_00cd7d80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    *(byte *)((int)this + 0x2e) = bVar7;
    if (bVar7 == 0) {
      *(undefined4 *)((int)this + 0xd8) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0xd8) = 2;
      uVar8 = F_00d2dec0(((undefined1 *)(gen_frame + 0x30)),0);
      uVar8 = F_00cc6b40(uVar8 GEN_EDX_ARG);
      *(uint *)((int)this + 0x30) = uVar8;
      F_00cc6ac0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x30))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x3c))))(*(int * PTR32 *)((int)this + 0x30));
      F_00cd6890(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,(float)extraout_ST0);
    }
  }
  iVar10 = 0;
  ((float *)(gen_frame + 0x140))[0] = 0.0;
  ((float *)(gen_frame + 0x140))[1] = 0.0;
  ((float *)(gen_frame + 0x140))[2] = 0.0;
  ((float *)(gen_frame + 0x140))[3] = 0.0;
  ((float *)(gen_frame + 0x140))[4] = 0.0;
  ((float *)(gen_frame + 0x140))[5] = 0.0;
  ((float *)(gen_frame + 0x140))[6] = 0.0;
  ((float *)(gen_frame + 0x140))[7] = 0.0;
  ((float *)(gen_frame + 0x140))[8] = 0.0;
  ((float *)(gen_frame + 0x140))[9] = 0.0;
  if (0 < (int)uVar12) {
    do {
      fVar14 = ((float *)(gen_frame + 0x1c4))[(int)(iVar10 + 4)];
      ((float *)(gen_frame + 0x140))[(int)(iVar10 * 2)] = 0.0;
      ((float *)(gen_frame + 0x140))[(int)(iVar10 * 2 + 1)] = fVar14;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar12);
  }
  (*(uint *)(gen_frame + 0x20)) = uVar12;
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)(gen_frame + 0x140));
  F_00cf7bb0(this GEN_EDX_ARG);
  (*(uint * PTR32 *)(gen_frame + 0x2c)) = ((uint *)(gen_frame + 0x8));
  piVar2 = *(int * PTR32 *)((int)this + 0xe0);
  (*(int *)(gen_frame + 0x28)) = 0;
  if (piVar2 != (int *)0x0) {
    ((uint *)(gen_frame + 0x8))[2] = *(undefined4 *)((int)this + 0x98);
    ((uint *)(gen_frame + 0x8))[1] = 0;
    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  }
  if (*(int *)((int)this + 0xe8) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x100))(piVar2);
    iVar10 = (*(int *)(gen_frame + 0x28));
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0_00);
    ((uint *)(gen_frame + 0x8))[(int)(iVar10 * 3 + 2)] = *(uint *)((int)this + 0x98);
    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe8) + 0x18))))(*(int * PTR32 *)((int)this + 0xe8) GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  }
  fVar14 = (*(float *)(gen_frame + 0x1b4));
  piVar2 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0x34)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) == (int *)0x0) goto LAB_00cf8463;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1b4)) + 0)) = 0;
  (*(float *)(gen_frame + 0x1b4)) = gen_bits2f((uint)gen_fl2bits(fVar14) & 0xffff0000);
  F_00c48350((undefined *)((int)&(*(float *)(gen_frame + 0x1b4)) + 2),0,0x32);
  fVar14 = (*(float *)(gen_frame + 0x3c));
  bVar7 = F_00cf5910(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1b4)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))));
  if (bVar7 == 0) goto LAB_00cf8463;
  if (*(int *)((int)this + 0xa0) == 0xc) {
    if (*(int *)((int)this + 0xa8) != 0) {
      uVar8 = F_00ce9420((int)this + 0x94);
      uVar12 = (uint)gen_fl2bits(((float *)(gen_frame + 0x1c4))[0]) >> 0x10;
      if (uVar8 == 1) {
        *(uint *)((int)this + 0xa4) = (*(uint *)((int)this + 0xa4) / uVar12) * uVar12;
        uVar8 = *(int *)((int)this + 0xa8) + 1;
      }
      else {
        *(uint *)((int)this + 0xa4) = (*(uint *)((int)this + 0xa4) / uVar12) * uVar12;
        uVar8 = *(uint *)((int)this + 0xa8);
      }
      *(uint *)((int)this + 0xa8) = (uVar8 / uVar12) * uVar12;
    }
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) & 0xffff;
    if (*(uint *)((int)this + 0x94) % uVar12 != 0) {
      *(uint *)((int)this + 0x94) = (*(uint *)((int)this + 0x94) / uVar12) * uVar12;
    }
LAB_00cf8416: ;
    *(uint *)((int)this + 0x20) = uVar12;
  }
  else if (*(int *)((int)this + 0xa0) == 0xf) {
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) & 0xffff;
    *(int *)((int)this + 0x24) = (int)gen_fl2bits(fVar14) + 0x32;
    goto LAB_00cf8416;
  }
  puVar1 = (undefined4 *)((int)this + 0xc);
  uVar12 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))
                     ((*(int * PTR32 *)(gen_frame + 0x34)),puVar1,&(*(float *)(gen_frame + 0x1b4)),0,*(undefined4 *)&REFG(undefined, 0x134c7f0),(int)this + 4,
                      &(*(uint *)(gen_frame + 0x20)),-(uint)((*(int *)(gen_frame + 0x28)) != 0) & (uint)&(*(int *)(gen_frame + 0x28)));
  if (-1 < (int)uVar12) {
    piVar2 = *(int * PTR32 *)((int)this + 0xe0);
    uVar13 = 0;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG,*puVar1,0);
      piVar2 = *(int * PTR32 *)((int)this + 0x30);
      uVar13 = 1;
      if ((piVar2 != (int *)0x0) &&
         (uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2 GEN_EDX_ARG), (char)uVar12 == '\0')) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x50))((int *)*puVar1 GEN_EDX_ARG,0x20,0);
      }
    }
    piVar2 = *(int * PTR32 *)((int)this + 0xe8);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG,*puVar1,uVar13);
    }
    iVar10 = *(int *)this;
    fVar14 = F_00cd83d0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar10 + 0x4c))(this,(undefined4)gen_fl2bits(fVar14));
    iVar10 = *(int *)this;
    fVar14 = F_00cd68f0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar10 + 0x80))(this,(undefined4)gen_fl2bits(fVar14));
    if ((*(int *)((int)this + 0x84) != 0) && (*(int *)((int)this + 0x88) != 0)) {
      ((float *)(gen_frame + 0x1c4))[1] = (float)(float10)0;
      ((float *)(gen_frame + 0x1c4))[2] = 0.0;
      ((float *)(gen_frame + 0x1c4))[3] = 0.0;
      ((float *)(gen_frame + 0x1c4))[4] = 0.0;
      ((float *)(gen_frame + 0x1c4))[5] = 0.0;
      ((float *)(gen_frame + 0x1c4))[6] = 0.0;
      ((float *)(gen_frame + 0x1c4))[7] = 0.0;
      ((float *)(gen_frame + 0x1c4))[8] = 0.0;
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x44))
                ((int *)*puVar1 GEN_EDX_ARG,*(int *)((int)this + 0x88),*(undefined4 *)((int)this + 0x98),8,
                 ((float *)(gen_frame + 0x40)));
      uVar12 = *(uint *)((int)this + 0x98);
      uVar8 = 0;
      if (uVar12 != 0) {
        pfVar11 = ((float *)(gen_frame + 0x40)) + 1;
        do {
          uVar8 = uVar8 + 1;
          (*(float *)(gen_frame + 0x3c)) = (float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1c4))[(int)(uVar8)]);
          fVar14 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1c4))[(int)(uVar8)]) +
                          (float10)*pfVar11)));
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[1]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[2]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[3]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[4]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[5]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          ((float *)(gen_frame + 0x1c4))[(int)(uVar8)] = (float)((float10)fVar14 + (float10)pfVar11[6]);
          pfVar11 = pfVar11 + 8;
        } while (uVar8 < uVar12);
      }
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar3 = *(uint *)((int)this + 0x98);
        do {
          uVar13 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          ((float *)(gen_frame + 0x1c4))[(int)(uVar8)] = (float)((float10)((float *)(gen_frame + 0x1c4))[(int)(uVar13)] * (float10)*(double *)&REFG(double, 0x10948e0));
        } while (uVar8 < uVar3);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x40))
                ((int *)*puVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x84),uVar12,1,((float *)(gen_frame + 0x1c4)) + 1,0);
    }
    if (*(int *)((int)this + 0x98) == 4) {
      fVar5 = (float10)1;
      ((float *)(gen_frame + 0x140))[10] = (float)fVar5;
      pcVar4 = *(gen_code32 *)(*(int *)this + 0xb4);
      fVar6 = (float10)0;
      (*(float *)(gen_frame + 0x16c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x170)) = (float)fVar6;
      (*(float *)(gen_frame + 0x174)) = (float)fVar6;
      (*(float *)(gen_frame + 0x178)) = (float)fVar6;
      (*(float *)(gen_frame + 0x180)) = (float)fVar6;
      (*(float *)(gen_frame + 0x184)) = (float)fVar6;
      (*(float *)(gen_frame + 0x188)) = (float)fVar6;
      (*(float *)(gen_frame + 0x18c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x190)) = (float)fVar6;
      (*(float *)(gen_frame + 0x194)) = (float)fVar6;
      (*(float *)(gen_frame + 0x198)) = (float)fVar6;
      (*(float *)(gen_frame + 0x19c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a0)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a4)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a8)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1ac)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1b4)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1b8)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1bc)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1c0)) = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[1] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[2] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[3] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[4] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[5] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[6] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[7] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[8] = (float)fVar6;
      (*(float *)(gen_frame + 0x17c)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b0)) = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[0] = (float)fVar5;
      (*pcVar4)(this,4,((float *)(gen_frame + 0x140)) + 10);
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x16c))(piVar2 GEN_EDX_ARG);
    if ((((char)uVar12 != '\0') && (bVar7 = F_00d2cdf0(), bVar7 != 0)) &&
       (*(int *)((int)this + 0x98) == 2)) {
      fVar5 = (float10)0;
      pcVar4 = *(gen_code32 *)(*(int *)this + 0xb4);
      (*(float *)(gen_frame + 0x1a8)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1ac)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b0)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b4)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b8)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1bc)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1c0)) = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[0] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[1] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[2] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[3] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[4] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[5] = (float)(float10)1;
      ((float *)(gen_frame + 0x1c4))[8] = (float)(float10)1;
      ((float *)(gen_frame + 0x1c4))[6] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[7] = (float)fVar5;
      (*pcVar4)(this,2,&(*(float *)(gen_frame + 0x1a8)));
    }
    F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec) GEN_EDX_ARG);
    return 1;
  }
  *puVar1 = 0;
LAB_00cf8463: ;
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec) GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf28 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf8730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00cf9bb0((undefined *)((int)param_1 + 0x54) GEN_EDX_FWD,this + 0x144);
  F_00cf9bb0(param_1 GEN_EDX_ARG,this + 0xf0);
  F_00cf9bb0((undefined *)((int)param_1 + 0xa8) GEN_EDX_ARG,this + 0x198);
  F_00cf9bb0((undefined *)((int)param_1 + 0xfc) GEN_EDX_ARG,this + 0x1ec);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf8790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if (*(int *)(this + 0xd4) == 5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 100))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)));
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      *(undefined4 *)(this + 0xd4) = 6;
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
    if (1000 < *(uint *)(this + 0xdc)) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_ARG);
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
    F_00cf93f0(this GEN_EDX_ARG,param_1);
    if (*(int *)(this + 0xd8) == 2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
      *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
  }
  else {
    F_00cf93f0(this GEN_EDX_ARG,param_1);
  }
  F_00cf7890(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00cf8850 */
GEN_FRAME uint F_00cf8850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf8850u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf6 */
GEN_FRAME uint GEN_THISCALL F_00cf88f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf88f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pVVar5;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') && (*(int *)(this + 0xd4) != 1)) {
    return uVar2;
  }
  F_00cf5630(this GEN_EDX_ARG);
  puVar4 = param_1;
  pVVar5 = this + 0x94;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pVVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pVVar5 = pVVar5 + 4;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0xac) + 0x20 + (int)param_1;
  iVar3 = *(int *)(this + 0xa0);
  if ((((iVar3 != 0xd) && (iVar3 != 5)) && ((iVar3 != 0xb || (*(uint *)(this + 0x94) < 0x7ff801))))
     && ((*(uint *)(this + 0x94) < 0x80000001 && (iVar3 != -1)))) {
    bVar1 = F_00cf7fa0(this GEN_EDX_ARG,GEN_TOF(param_1),param_2);
    if (bVar1 == 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(this + 0xa0) == 6) {
      puVar4 = param_1;
      uVar2 = F_00ce93e0(param_1);
      F_00cf71c0(this GEN_EDX_ARG,*(int *)(this + 0xac) + 0x20 + (int)param_1,uVar2 + (int)param_1,puVar4);
      *(undefined4 *)(this + 0x34) = 1;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
    F_00cf5770(this GEN_EDX_ARG,*(int *)(this + 0xac) + 0x20 + (int)param_1,0);
    *(undefined4 *)(this + 0x34) = 1;
    *(undefined4 *)(this + 0xd4) = 1;
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG);
  return uVar2 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf9 */
GEN_FRAME byte GEN_THISCALL F_00cf8a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * this_00;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pVVar7;
  
  F_00cf5630(this GEN_EDX_FWD);
  this_00 = (int *)F_00cd7cc0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x14))(this_00 GEN_EDX_ARG,0)));
  puVar6 = puVar2;
  pVVar7 = this + 0x94;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
    *(undefined4 *)pVVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pVVar7 = pVVar7 + 4;
  }
  iVar5 = *(int *)(this + 0xa0);
  if (iVar5 != -1) {
    if (iVar5 == 6) {
      *(undefined1 *)(this_00 + 0x33) = 1;
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      this_00[0x2b] = this_00[0x29];
      this_00[0x2c] = this_00[0x2a];
      if ((char)this_00[0x33] != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      }
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29 GEN_EDX_ARG,0x38,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff5e0(pvVar3 GEN_EDX_ARG,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
      uVar4 = F_00ce9400(puVar2);
      *(uint *)(this + 0x240) = uVar4;
      if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
        *(undefined2 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x24c) = 0;
        *(uint *)(this + 0x244) = uVar4 + 0x14;
      }
    }
    else {
      if (iVar5 != 0xc) goto LAB_00cf8b73;
      F_00cf9b60(this_00 GEN_EDX_ARG);
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29 GEN_EDX_ARG,0x18,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff240(pvVar3 GEN_EDX_ARG,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
    }
    bVar1 = F_00cf7fa0(this GEN_EDX_ARG,GEN_TOF(puVar2),param_2);
    if (bVar1 != 0) {
      *(undefined4 *)(this + 0x34) = 3;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
  }
LAB_00cf8b73: ;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_00cf8b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][driver][voice]SetStreamAudioData is not use","XA2\\VoiceXA2.cpp",
                  0x180,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetStreamAudioData");
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf20 */
GEN_FRAME uint GEN_THISCALL F_00cf8be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7d),"XA2\\VoiceXA2.cpp",
                    0x50e,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationMode");
  }
  *(uint *)(this + (uint)(byte)param_1 * 0x54 + 0xec) = param_2 & 0xff;
  return param_2 & 0xff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf21 */
GEN_FRAME uint GEN_THISCALL F_00cf8c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7e),"XA2\\VoiceXA2.cpp",
                    0x519,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::DisableModulation");
  }
  uVar1 = F_00cea740(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf22 */
GEN_FRAME uint GEN_THISCALL F_00cf8cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8cc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7f),"XA2\\VoiceXA2.cpp",
                    0x524,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationDepth");
  }
  uVar1 = F_00ceaa80((uint)(byte)param_2 * 0x54 + 0x9c + param_1 GEN_EDX_ARG,param_3,param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf23 */
GEN_FRAME uint GEN_THISCALL F_00cf8d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xcf8d40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc2),"XA2\\VoiceXA2.cpp",
                    0x52f,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationDepth");
  }
  this = (undefined *)((uint)(byte)param_2 * 0x54 + 0x9c + param_1);
  fVar2 = (float10)F_00ceaab0(this GEN_EDX_ARG);
  param_3 = (float)(fVar2 + (float10)param_3);
  fVar2 = (float10)1;
  fVar3 = (float10)param_3;
  if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
     (fVar2 = (float10)0, fVar3 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar3)) && fVar2 != fVar3))) {
    param_3 = (float)fVar2;
  }
  uVar1 = F_00ceaa80(this GEN_EDX_ARG,param_3,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf24 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf8df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc3),"XA2\\VoiceXA2.cpp",
                    0x541,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationDepth");
  }
  F_00ceaab0(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf25 */
GEN_FRAME uint GEN_THISCALL F_00cf8e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf5),"XA2\\VoiceXA2.cpp",
                    0x54c,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationSpeed");
  }
  uVar1 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf26 */
GEN_FRAME uint GEN_THISCALL F_00cf8ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf6),"XA2\\VoiceXA2.cpp",
                    0x557,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG);
  uVar1 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG,param_2 + uVar1,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf27 */
GEN_FRAME uint GEN_THISCALL F_00cf8f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf7),"XA2\\VoiceXA2.cpp",
                    0x566,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf1 */
GEN_NOFRAME uint F_00cf8fd0(void)
{
  GEN_ENTER(0xcf8fd0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf2 */
GEN_NOFRAME byte F_00cf8fe0(void)
{
  GEN_ENTER(0xcf8fe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf3 */
GEN_NOFRAME byte F_00cf8ff0(void)
{
  GEN_ENTER(0xcf8ff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_00cf9000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf9000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf8 */
GEN_NOFRAME byte GEN_THISCALL F_00cf9010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_00cf9020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf34 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf45 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf46 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf47 */
GEN_NOFRAME uint F_00cf9060(void)
{
  GEN_ENTER(0xcf9060u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf48 */
GEN_NOFRAME unsigned int F_00cf9070(void)
{
  GEN_ENTER(0xcf9070u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf49 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf51 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf90a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf90a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf52 */
GEN_NOFRAME uint F_00cf90b0(void)
{
  GEN_ENTER(0xcf90b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf53 */
GEN_NOFRAME unsigned int F_00cf90c0(void)
{
  GEN_ENTER(0xcf90c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf54 */
GEN_NOFRAME uint F_00cf90d0(void)
{
  GEN_ENTER(0xcf90d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cf90e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf90e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cf9110 */
GEN_FRAME uint GEN_THISCALL F_00cf9110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x50) = param_2;
  return param_2;
}

/* ref: FUN_00cf9170 */
GEN_FRAME uint GEN_THISCALL F_00cf9170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131288);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  return (uint)this;
}

/* ref: FUN_00cf91c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf91c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf91c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cf91f0 */
GEN_FRAME uint GEN_THISCALL F_00cf91f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf91f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x11312d8);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  return (uint)this;
}

/* ref: FUN_00cf9240 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cf9270 */
GEN_FRAME uint GEN_THISCALL F_00cf9270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131328);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  return (uint)this;
}

/* ref: FUN_00cf92c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf92c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf92c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf4 */
GEN_FRAME uint GEN_THISCALL F_00cf9310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0xd4) != 6) && (*(int *)(in_ecx + 0xd4) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0xd4) != 1) && (*(int *)(in_ecx + 0xd4) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf44 */
GEN_NOFRAME byte GEN_THISCALL F_00cf9370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x98);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf52 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe0);
}

/* ref: FUN_00cf9390 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf9390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)(param_1 + 0x23);
  return 0;
}

/* ref: FUN_00cf93f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf93f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf93f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  byte bVar4;
  float fVar5;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    fVar3 = (float10)1;
    fVar2 = (float10)*(float *)((int)param_1 + 0x40);
    if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
       (bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0xf0) GEN_EDX_FWD), bVar4 != 0)) {
      iVar1 = **(int * PTR32 *)((int)param_1 + 0xc);
      fVar5 = F_00cea780((undefined *)((int)param_1 + 0xf0) GEN_EDX_ARG);
      ((code *)*(gen_code32 *)(iVar1 + 0x30))
                (*(undefined4 *)((int)param_1 + 0xc),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x44) *
                                     (float10)*(float *)((int)param_1 + 0x40)) *
                                    ((float10)fVar5 + (float10)REFG(double, 0x1088130)))))));
      F_00cea9f0((int)param_1 + 0xf0 GEN_EDX_ARG,param_2);
    }
    bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x144) GEN_EDX_ARG);
    if (bVar4 != 0) {
      iVar1 = **(int * PTR32 *)((int)param_1 + 0xc);
      fVar5 = F_00cea780((undefined *)((int)param_1 + 0x144) GEN_EDX_ARG);
      ((code *)*(gen_code32 *)(iVar1 + 0x68))
                (*(undefined4 *)((int)param_1 + 0xc),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)fVar5 + (float10)REFG(double, 0x1088130)) *
                                    (float10)*(float *)((int)param_1 + 0x48))))));
      F_00cea9f0((int)param_1 + 0x144 GEN_EDX_ARG,param_2);
    }
    bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x198) GEN_EDX_ARG);
    if ((bVar4 != 0) || (bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x1ec) GEN_EDX_ARG), bVar4 != 0)) {
      F_00cf5f80(param_1 GEN_EDX_ARG);
      F_00cea9f0((int)param_1 + 0x198 GEN_EDX_ARG,param_2);
      F_00cea9f0((int)param_1 + 0x1ec GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: FUN_00cf9500 */
GEN_FRAME uint GEN_THISCALL F_00cf9500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9570 */
GEN_FRAME uint GEN_THISCALL F_00cf9570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf95e0 */
GEN_FRAME uint GEN_THISCALL F_00cf95e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf95e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9650 */
GEN_FRAME uint GEN_THISCALL F_00cf9650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf96c0 */
GEN_FRAME uint GEN_THISCALL F_00cf96c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf96c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131488);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1131480);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x113143c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9730 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9c60(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cf9750 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9750u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd440();
  return uVar1;
}

/* ref: FUN_00cf9760 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xcf9760u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  float param_4 = (float)gen_a4;
  F_00ccd450((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf9770 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf97b0 */
GEN_FRAME uint GEN_THISCALL F_00cf97b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf97b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9800 */
GEN_FRAME uint GEN_THISCALL F_00cf9800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x11314e0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x11314d8);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131494));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xcf9870u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  float param_4 = (float)gen_a4;
  F_00ccd490((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf9880 */
GEN_NOFRAME uint GEN_THISCALL F_00cf9880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9cb0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cf98a0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf98a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd480();
  return uVar1;
}

/* ref: FUN_00cf98b0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf98b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf98f0 */
GEN_FRAME uint GEN_THISCALL F_00cf98f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf98f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9940 */
GEN_FRAME uint GEN_THISCALL F_00cf9940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131538);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1131530);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11314ec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf99b0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf99b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf99b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9d00(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cf99d0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf99d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd4c0();
  return uVar1;
}

/* ref: FUN_00cf99e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf99e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xcf99e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  float param_4 = (float)gen_a4;
  F_00ccdbe0((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf99f0 */
GEN_NOFRAME uint GEN_THISCALL F_00cf99f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf9a30 */
GEN_FRAME uint GEN_THISCALL F_00cf9a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9a80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)((int)this + 8) = *(undefined4 *)this;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cf9ab0 */
GEN_FRAME uint GEN_THISCALL F_00cf9ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 == 0) {
    if (*(char *)((int)this + 0x28) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = ((iVar2 - 1 + param_2) / param_2) * param_2;
  iVar1 = uVar4 + param_1;
  uVar3 = iVar1 - iVar2;
  if (*(uint *)((int)this + 0xc) < uVar3) {
    if (*(char *)((int)this + 0x28) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *(int *)((int)this + 8) = iVar1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) - uVar3;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

/* ref: FUN_00cf9b60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0xcc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa8);
  if (*(char *)((int)this + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf9ba0 */
GEN_FRAME uint GEN_THISCALL F_00cf9ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cf9ab0((undefined *)((int)this + 0xa4) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cf9bb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cf9bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)((int)param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)((int)param_1 + 0x26);
  *(undefined1 *)((int)this + 0x27) = *(undefined1 *)((int)param_1 + 0x27);
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined1 *)((int)this + 0x48) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)this + 0x49) = *(undefined1 *)((int)param_1 + 0x49);
  *(undefined1 *)((int)this + 0x4a) = *(undefined1 *)((int)param_1 + 0x4a);
  *(undefined1 *)((int)this + 0x4b) = *(undefined1 *)((int)param_1 + 0x4b);
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  return 0;
}

/* ref: FUN_00cf9c60 */
GEN_FRAME uint GEN_THISCALL F_00cf9c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9cb0 */
GEN_FRAME uint GEN_THISCALL F_00cf9cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9d00 */
GEN_FRAME uint GEN_THISCALL F_00cf9d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9d50 */
GEN_FRAME uint GEN_THISCALL F_00cf9d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cf7ed0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cf9d75 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9d75(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9d75u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  uint uVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float10 fVar14;
  float fVar15;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar5 = (int)gen_fl2bits(param_1[8]);
  uVar11 = (uint)gen_fl2bits(param_1[7]);
  uVar12 = (uint)gen_fl2bits(param_1[6]);
  local_8 = (int)gen_fl2bits(param_1[1]);
  if (param_1[9] != 0.0) {
    uVar12 = 1;
    uVar11 = 1;
  }
  pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[3])));
  if (pfVar6 == (float *)0x0) {
    local_10 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    if (local_10 != 0) {
      pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        uVar8 = 0;
        if (uVar11 != 0) {
          fVar2 = *param_1;
          pfVar7 = pfVar6;
          do {
            fVar15 = fVar2 * *pfVar7;
            uVar9 = 1;
            pfVar7 = pfVar7 + 1;
            if (1 < uVar12) {
              do {
                pfVar10 = param_1 + uVar9;
                fVar3 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + *pfVar10 * fVar3;
              } while (uVar9 < uVar12);
            }
            if (iVar5 != 0) {
              fVar15 = fVar15 + *(float *)(local_8 + uVar8 * 4);
            }
            *(float *)(local_8 + uVar8 * 4) = fVar15;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar8 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    local_10 = 0;
    if (uVar8 != 0) {
      pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        local_c = 0;
        if (uVar11 != 0) {
          fVar14 = (float10)(int)local_10;
          fVar2 = *param_1;
          if ((int)local_10 < 0) {
            fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          pfVar10 = pfVar6;
          pfVar13 = pfVar7;
          do {
            fVar15 = *pfVar10;
            fVar3 = *pfVar13;
            uVar9 = 1;
            pfVar10 = pfVar10 + 1;
            pfVar13 = pfVar13 + 1;
            fVar15 = (fVar15 * (float)fVar14 + fVar3) * fVar2;
            if (1 < uVar12) {
              do {
                fVar3 = *pfVar10;
                fVar4 = *pfVar13;
                pfVar1 = param_1 + uVar9;
                pfVar10 = pfVar10 + 1;
                pfVar13 = pfVar13 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + (fVar3 * (float)fVar14 + fVar4) * *pfVar1;
              } while (uVar9 < uVar12);
            }
            if (iVar5 == 0) {
              *(float *)(local_8 + local_c * 4) = fVar15;
            }
            else {
              pfVar1 = (float *)(local_8 + local_c * 4);
              *pfVar1 = fVar15 + *pfVar1;
            }
            local_c = local_c + 1;
          } while (local_c < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar8);
    }
  }
  return 0;
}

/* ref: FUN_00cf9f10 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9f10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar4 = (float *)*param_1;
  pfVar3 = (float *)param_1[1];
  iVar1 = param_1[8];
  iVar5 = param_1[5];
  pfVar2 = (float *)param_1[3];
  fVar9 = *(float *)param_1[2];
  fVar8 = ((float *)param_1[2])[1];
  if (pfVar2 == (float *)0x0) {
    if (iVar5 != 0) {
      do {
        fVar6 = *pfVar4;
        iVar5 = iVar5 - 1;
        pfVar4 = pfVar4 + 1;
        fVar10 = fVar6 * fVar9;
        fVar6 = fVar6 * fVar8;
        if (iVar1 == 0) {
          *pfVar3 = fVar10;
        }
        else {
          *pfVar3 = fVar10 + *pfVar3;
          fVar6 = fVar6 + pfVar3[1];
        }
        pfVar3[1] = fVar6;
        pfVar3 = pfVar3 + 2;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar2;
    fVar10 = pfVar2[1];
    while (iVar5 != 0) {
      fVar7 = *pfVar4;
      iVar5 = iVar5 - 1;
      pfVar4 = pfVar4 + 1;
      fVar11 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar8;
      if (iVar1 == 0) {
        *pfVar3 = fVar11;
      }
      else {
        *pfVar3 = fVar11 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
      }
      pfVar3[1] = fVar7;
      fVar9 = fVar9 + fVar6;
      pfVar3 = pfVar3 + 2;
      fVar8 = fVar10 + fVar8;
    }
  }
  return 0;
}

/* ref: FUN_00cf9fe0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cf9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar9 = (float *)param_1[2];
  pfVar8 = (float *)param_1[1];
  fVar14 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = pfVar9[3];
  fVar18 = pfVar9[4];
  fVar13 = pfVar9[5];
  iVar6 = param_1[8];
  pfVar9 = (float *)*param_1;
  iVar10 = param_1[5];
  pfVar7 = (float *)param_1[3];
  if (pfVar7 == (float *)0x0) {
    if (iVar10 != 0) {
      do {
        fVar11 = *pfVar9;
        iVar10 = iVar10 - 1;
        pfVar9 = pfVar9 + 1;
        if (iVar6 == 0) {
          *pfVar8 = fVar11 * fVar14;
          pfVar8[1] = fVar11 * fVar15;
          pfVar8[2] = fVar11 * fVar16;
          pfVar8[3] = fVar11 * fVar17;
          pfVar8[4] = fVar11 * fVar18;
          fVar11 = fVar11 * fVar13;
        }
        else {
          *pfVar8 = fVar11 * fVar14 + *pfVar8;
          pfVar8[1] = fVar11 * fVar15 + pfVar8[1];
          pfVar8[2] = fVar11 * fVar16 + pfVar8[2];
          pfVar8[3] = fVar11 * fVar17 + pfVar8[3];
          pfVar8[4] = fVar11 * fVar18 + pfVar8[4];
          fVar11 = fVar11 * fVar13 + pfVar8[5];
        }
        pfVar8[5] = fVar11;
        pfVar8 = pfVar8 + 6;
      } while (iVar10 != 0);
      return 0;
    }
  }
  else {
    fVar11 = *pfVar7;
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    fVar3 = pfVar7[3];
    fVar4 = pfVar7[4];
    fVar5 = pfVar7[5];
    while (iVar10 != 0) {
      fVar12 = *pfVar9;
      iVar10 = iVar10 - 1;
      pfVar9 = pfVar9 + 1;
      if (iVar6 == 0) {
        *pfVar8 = fVar12 * fVar14;
        pfVar8[1] = fVar12 * fVar15;
        pfVar8[2] = fVar12 * fVar16;
        pfVar8[3] = fVar12 * fVar17;
        pfVar8[4] = fVar12 * fVar18;
        fVar12 = fVar12 * fVar13;
      }
      else {
        *pfVar8 = fVar12 * fVar14 + *pfVar8;
        pfVar8[1] = fVar12 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar12 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar12 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar12 * fVar18 + pfVar8[4];
        fVar12 = fVar12 * fVar13 + pfVar8[5];
      }
      fVar14 = fVar14 + fVar11;
      fVar15 = fVar15 + fVar1;
      fVar16 = fVar16 + fVar2;
      fVar17 = fVar17 + fVar3;
      fVar18 = fVar18 + fVar4;
      pfVar8[5] = fVar12;
      pfVar8 = pfVar8 + 6;
      fVar13 = fVar5 + fVar13;
    }
  }
  return 0;
}

/* ref: FUN_00cfa210 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfa210(unsigned int gen_a0)
{
  GEN_ENTER(0xcfa210u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  int iVar15;
  float * pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar12 = (float *)param_1[2];
  local_24 = pfVar12[4];
  fVar22 = pfVar12[3];
  fVar19 = *pfVar12;
  fVar20 = pfVar12[1];
  fVar21 = pfVar12[2];
  pfVar16 = (float *)*param_1;
  pfVar14 = (float *)param_1[1];
  iVar13 = param_1[8];
  local_20 = pfVar12[5];
  local_1c = pfVar12[6];
  local_18 = pfVar12[7];
  local_14 = pfVar12[8];
  local_10 = pfVar12[9];
  local_c = pfVar12[10];
  local_8 = pfVar12[0xb];
  pfVar12 = (float *)param_1[3];
  iVar15 = param_1[5];
  if (pfVar12 == (float *)0x0) {
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar17 = *pfVar16;
        fVar1 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar23 = fVar1 * fVar20 + fVar17 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar23;
          pfVar14[1] = fVar1 * fVar22 + fVar17 * fVar21;
          pfVar14[2] = fVar1 * local_20 + fVar17 * local_24;
          pfVar14[3] = fVar1 * local_18 + fVar17 * local_1c;
          pfVar14[4] = fVar1 * local_10 + fVar17 * local_14;
          fVar17 = fVar1 * local_8 + fVar17 * local_c;
        }
        else {
          *pfVar14 = fVar23 + *pfVar14;
          pfVar14[1] = (fVar1 * fVar22 + fVar17 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar1 * local_20 + fVar17 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar1 * local_18 + fVar17 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar1 * local_10 + fVar17 * local_14) + pfVar14[4];
          fVar17 = (fVar1 * local_8 + fVar17 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar17;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 - 1;
      } while (iVar15 != 0);
      return 0;
    }
  }
  else {
    fVar17 = *pfVar12;
    fVar1 = pfVar12[1];
    fVar23 = pfVar12[2];
    fVar2 = pfVar12[3];
    fVar3 = pfVar12[4];
    fVar4 = pfVar12[5];
    fVar5 = pfVar12[6];
    fVar6 = pfVar12[7];
    fVar7 = pfVar12[8];
    fVar8 = pfVar12[9];
    fVar9 = pfVar12[10];
    fVar10 = pfVar12[0xb];
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar18 = *pfVar16;
        fVar11 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar24 = fVar11 * fVar20 + fVar18 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar24;
          pfVar14[1] = fVar11 * fVar22 + fVar18 * fVar21;
          pfVar14[2] = fVar11 * local_20 + fVar18 * local_24;
          pfVar14[3] = fVar11 * local_18 + fVar18 * local_1c;
          pfVar14[4] = fVar11 * local_10 + fVar18 * local_14;
          fVar18 = fVar11 * local_8 + fVar18 * local_c;
        }
        else {
          *pfVar14 = fVar24 + *pfVar14;
          pfVar14[1] = (fVar11 * fVar22 + fVar18 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar11 * local_20 + fVar18 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar11 * local_18 + fVar18 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar11 * local_10 + fVar18 * local_14) + pfVar14[4];
          fVar18 = (fVar11 * local_8 + fVar18 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar18;
        local_24 = fVar3 + local_24;
        local_20 = fVar4 + local_20;
        fVar22 = fVar2 + fVar22;
        fVar19 = fVar19 + fVar17;
        fVar20 = fVar20 + fVar1;
        fVar21 = fVar21 + fVar23;
        local_1c = fVar5 + local_1c;
        local_18 = fVar6 + local_18;
        local_14 = fVar7 + local_14;
        local_10 = fVar8 + local_10;
        local_c = fVar9 + local_c;
        local_8 = fVar10 + local_8;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 - 1;
      } while (iVar15 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfa670 */
GEN_NOFRAME float * GEN_STDCALL F_00cfa670(unsigned int gen_a0)
{
  GEN_ENTER(0xcfa670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  float * pfVar18;
  int iVar19;
  int iVar20;
  float * pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar17 = *(float * PTR32 *)(param_1 + 8);
  local_30 = pfVar17[2];
  fVar24 = *pfVar17;
  fVar25 = pfVar17[1];
  pfVar18 = *(float * PTR32 *)param_1;
  local_2c = pfVar17[3];
  local_28 = pfVar17[4];
  local_24 = pfVar17[5];
  local_20 = pfVar17[6];
  local_1c = pfVar17[7];
  local_18 = pfVar17[8];
  local_14 = pfVar17[9];
  local_10 = pfVar17[10];
  iVar16 = *(int *)(param_1 + 0x20);
  local_c = pfVar17[0xb];
  pfVar17 = *(float * PTR32 *)(param_1 + 0xc);
  pfVar21 = *(float * PTR32 *)(param_1 + 4);
  iVar20 = *(int *)(param_1 + 0x14);
  if (pfVar17 == (float *)0x0) {
    if (iVar20 != 0) {
      iVar19 = (iVar20 - 1U) / 6 + 1;
      do {
        pfVar17 = pfVar18 + 5;
        pfVar1 = pfVar18 + 1;
        fVar22 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        pfVar18 = pfVar18 + 6;
        fVar26 = ((((*pfVar1 * fVar25 + fVar22 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28) + *pfVar17 * local_24;
        fVar22 = ((((*pfVar1 * local_1c + fVar22 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + *pfVar17 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar26;
        }
        else {
          *pfVar21 = fVar26 + *pfVar21;
          fVar22 = fVar22 + pfVar21[1];
        }
        pfVar21[1] = fVar22;
        pfVar21 = pfVar21 + 2;
        iVar19 = iVar19 - 1;
      } while (iVar19 != 0);
      return ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
    }
  }
  else {
    fVar22 = *pfVar17;
    fVar26 = pfVar17[1];
    fVar5 = pfVar17[2];
    fVar6 = pfVar17[3];
    fVar7 = pfVar17[4];
    fVar8 = pfVar17[5];
    fVar9 = pfVar17[6];
    fVar10 = pfVar17[7];
    fVar11 = pfVar17[8];
    fVar12 = pfVar17[9];
    fVar13 = pfVar17[10];
    fVar14 = pfVar17[0xb];
    if (iVar20 != 0) {
      pfVar17 = ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
      iVar20 = (iVar20 - 1U) / 6 + 1;
      do {
        fVar15 = pfVar18[5];
        pfVar1 = pfVar18 + 1;
        fVar23 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        fVar27 = (((*pfVar1 * fVar25 + fVar23 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28;
        pfVar18 = pfVar18 + 6;
        fVar23 = ((((*pfVar1 * local_1c + fVar23 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + fVar15 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar27 + fVar15 * local_24;
        }
        else {
          *pfVar21 = (fVar27 + fVar15 * local_24) + *pfVar21;
          fVar23 = fVar23 + pfVar21[1];
        }
        pfVar21[1] = fVar23;
        local_30 = fVar5 + local_30;
        local_2c = fVar6 + local_2c;
        local_28 = fVar7 + local_28;
        fVar24 = fVar22 + fVar24;
        fVar25 = fVar26 + fVar25;
        local_24 = fVar8 + local_24;
        local_20 = fVar9 + local_20;
        local_1c = fVar10 + local_1c;
        local_18 = fVar11 + local_18;
        local_14 = fVar12 + local_14;
        local_10 = fVar13 + local_10;
        pfVar21 = pfVar21 + 2;
        iVar20 = iVar20 - 1;
        local_c = fVar14 + local_c;
      } while (iVar20 != 0);
    }
  }
  return pfVar17;
}

/* ref: FUN_00cfaa50 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfaa50(unsigned int gen_a0)
{
  GEN_ENTER(0xcfaa50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float * pfVar25;
  int iVar26;
  float * pfVar27;
  int iVar28;
  float * pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar25 = (float *)param_1[2];
  local_58 = pfVar25[3];
  local_54 = pfVar25[4];
  local_50 = pfVar25[5];
  local_4c = pfVar25[6];
  local_48 = pfVar25[7];
  local_44 = pfVar25[8];
  local_40 = pfVar25[9];
  local_3c = pfVar25[10];
  local_38 = pfVar25[0xb];
  local_34 = pfVar25[0xc];
  fVar35 = pfVar25[1];
  fVar36 = pfVar25[2];
  fVar32 = *pfVar25;
  local_30 = pfVar25[0xd];
  pfVar29 = (float *)*param_1;
  pfVar27 = (float *)param_1[1];
  iVar26 = param_1[8];
  local_2c = pfVar25[0xe];
  local_28 = pfVar25[0xf];
  local_24 = pfVar25[0x10];
  local_20 = pfVar25[0x11];
  local_1c = pfVar25[0x12];
  local_18 = pfVar25[0x13];
  local_14 = pfVar25[0x14];
  local_10 = pfVar25[0x15];
  local_c = pfVar25[0x16];
  local_8 = pfVar25[0x17];
  pfVar25 = (float *)param_1[3];
  iVar28 = param_1[5];
  if (pfVar25 == (float *)0x0) {
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar30 = pfVar29[1];
        fVar1 = *pfVar29;
        fVar2 = pfVar29[2];
        fVar3 = pfVar29[3];
        fVar37 = ((fVar30 * fVar35 + fVar1 * fVar32) + fVar2 * fVar36) + fVar3 * local_58;
        fVar33 = ((fVar30 * local_50 + fVar1 * local_54) + fVar2 * local_4c) + fVar3 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar37;
          pfVar27[1] = fVar33;
          pfVar27[2] = ((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38;
          pfVar27[3] = ((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28;
          pfVar27[4] = ((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18;
          fVar30 = ((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8;
        }
        else {
          *pfVar27 = fVar37 + *pfVar27;
          pfVar27[1] = fVar33 + pfVar27[1];
          pfVar27[2] = (((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18) + pfVar27[4];
          fVar30 = (((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8) +
                   pfVar27[5];
        }
        pfVar27[5] = fVar30;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 - 1;
      } while (iVar28 != 0);
      return 0;
    }
  }
  else {
    fVar30 = *pfVar25;
    fVar1 = pfVar25[1];
    fVar2 = pfVar25[2];
    fVar3 = pfVar25[3];
    fVar33 = pfVar25[4];
    fVar37 = pfVar25[5];
    fVar4 = pfVar25[6];
    fVar5 = pfVar25[7];
    fVar6 = pfVar25[8];
    fVar7 = pfVar25[9];
    fVar8 = pfVar25[10];
    fVar9 = pfVar25[0xb];
    fVar10 = pfVar25[0xc];
    fVar11 = pfVar25[0xd];
    fVar12 = pfVar25[0xe];
    fVar13 = pfVar25[0xf];
    fVar14 = pfVar25[0x10];
    fVar15 = pfVar25[0x11];
    fVar16 = pfVar25[0x12];
    fVar17 = pfVar25[0x13];
    fVar18 = pfVar25[0x14];
    fVar19 = pfVar25[0x15];
    fVar20 = pfVar25[0x16];
    fVar21 = pfVar25[0x17];
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar31 = pfVar29[1];
        fVar22 = *pfVar29;
        fVar23 = pfVar29[2];
        fVar24 = pfVar29[3];
        fVar38 = ((fVar31 * fVar35 + fVar22 * fVar32) + fVar23 * fVar36) + fVar24 * local_58;
        fVar34 = ((fVar31 * local_50 + fVar22 * local_54) + fVar23 * local_4c) + fVar24 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar38;
          pfVar27[1] = fVar34;
          pfVar27[2] = ((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38;
          pfVar27[3] = ((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28;
          pfVar27[4] = ((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18;
          fVar31 = ((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8;
        }
        else {
          *pfVar27 = fVar38 + *pfVar27;
          pfVar27[1] = fVar34 + pfVar27[1];
          pfVar27[2] = (((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18) + pfVar27[4];
          fVar31 = (((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8)
                   + pfVar27[5];
        }
        pfVar27[5] = fVar31;
        local_58 = fVar3 + local_58;
        local_54 = fVar33 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar4 + local_4c;
        local_48 = fVar5 + local_48;
        local_44 = fVar6 + local_44;
        local_40 = fVar7 + local_40;
        local_3c = fVar8 + local_3c;
        local_38 = fVar9 + local_38;
        local_34 = fVar10 + local_34;
        local_30 = fVar11 + local_30;
        local_2c = fVar12 + local_2c;
        local_28 = fVar13 + local_28;
        local_24 = fVar14 + local_24;
        local_20 = fVar15 + local_20;
        fVar35 = fVar1 + fVar35;
        fVar36 = fVar2 + fVar36;
        fVar32 = fVar32 + fVar30;
        local_1c = fVar16 + local_1c;
        local_18 = fVar17 + local_18;
        local_14 = fVar18 + local_14;
        local_10 = fVar19 + local_10;
        local_c = fVar20 + local_c;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 - 1;
        local_8 = fVar21 + local_8;
      } while (iVar28 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfb2a0 */
GEN_NOFRAME uint GEN_STDCALL F_00cfb2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb2a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar5;
  (*(uint *)(gen_frame + 0x4)) = param_1[6];
  iVar1 = *param_1;
  uVar2 = param_1[5];
  iVar3 = param_1[1];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4)))) {
  case 1: ;
    pfVar7 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[0] = *(float *)param_1[2];
    if (pfVar7 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar7;
    }
    break;
  case 2: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[1] = pfVar7[3];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[3];
    }
    break;
  case 3: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[4];
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[8];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[4];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[8];
    }
    break;
  case 4: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[5];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[10];
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0xf];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[5];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[10];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0xf];
    }
    break;
  case 5: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[6];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[0xc];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0x12];
    pfVar8 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x38)) = pfVar7[0x18];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[6];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[0xc];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0x12];
      (*(float *)(gen_frame + 0x18)) = pfVar8[0x18];
    }
    break;
  case 6: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[7];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[0xe];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0x15];
    (*(float *)(gen_frame + 0x38)) = pfVar7[0x1c];
    pfVar8 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x3c)) = pfVar7[0x23];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[7];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[0xe];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0x15];
      (*(float *)(gen_frame + 0x18)) = pfVar8[0x1c];
      (*(float *)(gen_frame + 0x1c)) = pfVar8[0x23];
    }
  }
  uVar6 = 0;
  uVar9 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar2) {
      pfVar7 = (float *)(iVar3 + 4);
      pfVar8 = (float *)(iVar1 + 0xc);
      iVar10 = (uVar2 - 4 >> 2) + 1;
      uVar9 = iVar10 * 4;
      do {
        if (iVar4 == 0) {
          pfVar7[-1] = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-3];
        }
        else {
          pfVar7[-1] = pfVar7[-1] + ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-3];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *((float *)GEN_TOP(((iVar1 - iVar3) + (int)pfVar7)));
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        if (iVar4 == 0) {
          pfVar7[1] = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-1];
        }
        else {
          pfVar7[1] = pfVar7[1] + ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-1];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *pfVar8;
        if (iVar4 != 0) {
          fVar11 = fVar11 + pfVar7[2];
        }
        uVar6 = uVar6 + 1;
        pfVar7[2] = fVar11;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 4;
        pfVar8 = pfVar8 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    if (uVar9 < uVar2) {
      iVar10 = uVar2 - uVar9;
      pfVar7 = (float *)(iVar3 + uVar9 * 4);
      do {
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *((float *)GEN_TOP(((int)pfVar7 + (iVar1 - iVar3))));
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return uVar6;
    }
  }
  else {
    if (3 < (int)uVar2) {
      pfVar7 = (float *)(iVar1 + 0xc);
      pfVar8 = (float *)(iVar3 + 4);
      iVar10 = (uVar2 - 4 >> 2) + 1;
      uVar9 = iVar10 * 4;
      do {
        fVar11 = pfVar7[-3] * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[-1] = fVar11;
        }
        else {
          pfVar8[-1] = pfVar8[-1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = *((float *)GEN_TOP(((int)pfVar8 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          *pfVar8 = fVar11;
        }
        else {
          *pfVar8 = *pfVar8 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = pfVar7[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[1] = fVar11;
        }
        else {
          pfVar8[1] = pfVar8[1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = *pfVar7 * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 != 0) {
          fVar11 = fVar11 + pfVar8[2];
        }
        uVar6 = uVar6 + 1;
        pfVar8[2] = fVar11;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar8 = pfVar8 + 4;
        pfVar7 = pfVar7 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    if (uVar9 < uVar2) {
      iVar10 = uVar2 - uVar9;
      pfVar7 = (float *)(iVar3 + uVar9 * 4);
      do {
        fVar11 = *((float *)GEN_TOP(((int)pfVar7 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00cfb810 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfb810(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb810u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  pfVar7 = (float *)*param_1;
  pfVar8 = (float *)param_1[1];
  uVar6 = param_1[5];
  iVar1 = param_1[8];
  pfVar2 = (float *)param_1[2];
  pfVar3 = (float *)param_1[3];
  fVar25 = *pfVar2;
  fVar26 = pfVar2[1];
  if (pfVar3 == (float *)0x0) {
    fStack_28 = *pfVar2;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_24 = fVar26;
  }
  else {
    fStack_18 = *pfVar3;
    fStack_28 = *pfVar2 + fStack_18;
    fStack_14 = pfVar3[1];
    fStack_24 = pfVar2[1] + fStack_14;
  }
  fVar27 = fStack_28;
  fVar28 = fStack_24;
  if (((uint)pfVar8 & 0x38) != 0) {
    if ((int)uVar6 < 8) goto LAB_00cfb940;
    do {
      fVar29 = *pfVar7 * fVar25;
      fVar30 = *pfVar7 * fVar26;
      fVar25 = fVar25 + fStack_18;
      fVar26 = fVar26 + fStack_14;
      fVar27 = fVar27 + fStack_18;
      fVar28 = fVar28 + fStack_14;
      pfVar7 = pfVar7 + 1;
      if (iVar1 != 0) {
        fVar29 = fVar29 + *pfVar8;
        fVar30 = fVar30 + pfVar8[1];
      }
      uVar6 = uVar6 - 1;
      *pfVar8 = fVar29;
      pfVar8[1] = fVar30;
      pfVar8 = pfVar8 + 2;
    } while (((uint)pfVar8 & 0x38) != 0);
  }
  if (7 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffff8;
    uVar6 = uVar6 & 7;
    fVar29 = fStack_18 + fStack_18;
    fVar30 = fStack_14 + fStack_14;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    pfVar7 = pfVar7 + uVar4;
    pfVar8 = pfVar8 + uVar4 * 2;
    iVar5 = -uVar4;
    do {
      pfVar2 = pfVar7 + iVar5;
      pfVar3 = pfVar7 + iVar5 + 4;
      fVar9 = *pfVar2 * fVar25;
      fVar10 = *pfVar2 * fVar26;
      fVar11 = pfVar2[1] * fVar27;
      fVar12 = pfVar2[1] * fVar28;
      fVar13 = pfVar2[2] * (fVar25 + fVar29);
      fVar14 = pfVar2[2] * (fVar26 + fVar30);
      fVar15 = pfVar2[3] * (fVar27 + fVar31);
      fVar16 = pfVar2[3] * (fVar28 + fVar32);
      fVar25 = (fVar25 + fVar29) + fVar29;
      fVar26 = (fVar26 + fVar30) + fVar30;
      fVar27 = (fVar27 + fVar31) + fVar31;
      fVar28 = (fVar28 + fVar32) + fVar32;
      fVar17 = *pfVar3 * fVar25;
      fVar18 = *pfVar3 * fVar26;
      fVar19 = pfVar3[1] * fVar27;
      fVar20 = pfVar3[1] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      fVar21 = pfVar3[2] * fVar25;
      fVar22 = pfVar3[2] * fVar26;
      fVar23 = pfVar3[3] * fVar27;
      fVar24 = pfVar3[3] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      if (iVar1 != 0) {
        pfVar2 = pfVar8 + iVar5 * 2;
        fVar9 = fVar9 + *pfVar2;
        fVar10 = fVar10 + pfVar2[1];
        fVar11 = fVar11 + pfVar2[2];
        fVar12 = fVar12 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 4;
        fVar13 = fVar13 + *pfVar2;
        fVar14 = fVar14 + pfVar2[1];
        fVar15 = fVar15 + pfVar2[2];
        fVar16 = fVar16 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 8;
        fVar17 = fVar17 + *pfVar2;
        fVar18 = fVar18 + pfVar2[1];
        fVar19 = fVar19 + pfVar2[2];
        fVar20 = fVar20 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
        fVar21 = fVar21 + *pfVar2;
        fVar22 = fVar22 + pfVar2[1];
        fVar23 = fVar23 + pfVar2[2];
        fVar24 = fVar24 + pfVar2[3];
      }
      pfVar2 = pfVar8 + iVar5 * 2;
      *pfVar2 = fVar9;
      pfVar2[1] = fVar10;
      pfVar2[2] = fVar11;
      pfVar2[3] = fVar12;
      pfVar2 = pfVar8 + iVar5 * 2 + 4;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar14;
      pfVar2[2] = fVar15;
      pfVar2[3] = fVar16;
      pfVar2 = pfVar8 + iVar5 * 2 + 8;
      *pfVar2 = fVar17;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
      *pfVar2 = fVar21;
      pfVar2[1] = fVar22;
      pfVar2[2] = fVar23;
      pfVar2[3] = fVar24;
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0);
  }
LAB_00cfb940: ;
  while ((uVar6 & 7) != 0) {
    fVar27 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    uVar6 = uVar6 - 1;
    fVar28 = fVar27 * fVar25;
    fVar27 = fVar27 * fVar26;
    fVar25 = fVar25 + fStack_18;
    fVar26 = fVar26 + fStack_14;
    if (iVar1 != 0) {
      fVar28 = fVar28 + *pfVar8;
      fVar27 = fVar27 + pfVar8[1];
    }
    *pfVar8 = fVar28;
    pfVar8[1] = fVar27;
    pfVar8 = pfVar8 + 2;
  }
  return 0;
}

/* ref: FUN_00cfb9d0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfb9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb9d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  (*(float * PTR32 *)(gen_frame + 0x78)) = (float *)param_1[1];
  iVar1 = param_1[8];
  (*(float * PTR32 *)(gen_frame + 0x74)) = (float *)*param_1;
  (*(uint *)(gen_frame + 0x70)) = param_1[5];
  pfVar5 = (float *)param_1[2];
  fVar11 = *pfVar5;
  pfVar6 = (float *)param_1[3];
  fVar12 = pfVar5[1];
  fVar13 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar15 = pfVar5[4];
  fVar16 = pfVar5[5];
  if (pfVar6 == (float *)0x0) {
    (*(float *)(gen_frame + 0x8)) = *pfVar5;
    (*(float *)(gen_frame + 0xc)) = pfVar5[1];
    (*(float *)(gen_frame + 0x10)) = pfVar5[2];
    (*(float *)(gen_frame + 0x14)) = pfVar5[3];
    (*(float *)(gen_frame + 0x18)) = pfVar5[4];
    (*(float *)(gen_frame + 0x1c)) = pfVar5[5];
    F_00c48350(&(*(float *)(gen_frame + 0x20)),0,0x30);
  }
  else {
    (*(float *)(gen_frame + 0x8)) = *pfVar5 + *pfVar6;
    (*(float *)(gen_frame + 0xc)) = pfVar6[1] + pfVar5[1];
    (*(float *)(gen_frame + 0x10)) = pfVar6[2] + pfVar5[2];
    (*(float *)(gen_frame + 0x14)) = pfVar6[3] + pfVar5[3];
    (*(float *)(gen_frame + 0x18)) = pfVar6[4] + pfVar5[4];
    (*(float *)(gen_frame + 0x1c)) = pfVar6[5] + pfVar5[5];
    fVar17 = pfVar6[1];
    (*(float *)(gen_frame + 0x20)) = *pfVar6;
    (*(float *)(gen_frame + 0x24)) = fVar17;
    (*(float *)(gen_frame + 0x28)) = pfVar6[2];
    (*(float *)(gen_frame + 0x2c)) = pfVar6[3];
    (*(float *)(gen_frame + 0x30)) = pfVar6[4];
    (*(float *)(gen_frame + 0x34)) = pfVar6[5];
    (*(float *)(gen_frame + 0x38)) = *pfVar6;
    (*(float *)(gen_frame + 0x3c)) = pfVar6[1];
    (*(float *)(gen_frame + 0x40)) = pfVar6[2];
    (*(float *)(gen_frame + 0x44)) = pfVar6[3];
    (*(float *)(gen_frame + 0x48)) = pfVar6[4];
    (*(float *)(gen_frame + 0x4c)) = pfVar6[5];
  }
  uVar4 = (*(uint *)(gen_frame + 0x70));
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x74));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x78));
  fVar17 = (*(float *)(gen_frame + 0x8));
  fVar18 = (*(float *)(gen_frame + 0xc));
  fVar19 = (*(float *)(gen_frame + 0x10));
  fVar20 = (*(float *)(gen_frame + 0x14));
  fVar21 = (*(float *)(gen_frame + 0x18));
  fVar22 = (*(float *)(gen_frame + 0x1c));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x78)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x70)) < 2) goto LAB_00cfbbcf;
    do {
      fVar10 = *pfVar5;
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x40));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x44));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x48));
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x4c));
      fVar7 = fVar10 * fVar11;
      fVar8 = fVar10 * fVar12;
      fVar9 = fVar10 * fVar13;
      fVar10 = fVar10 * fVar14;
      fVar11 = fVar11 + (*(float *)(gen_frame + 0x20));
      fVar12 = fVar12 + (*(float *)(gen_frame + 0x24));
      fVar13 = fVar13 + (*(float *)(gen_frame + 0x28));
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x2c));
      if (iVar1 != 0) {
        fVar7 = fVar7 + *pfVar6;
        fVar8 = fVar8 + pfVar6[1];
        fVar9 = fVar9 + pfVar6[2];
        fVar10 = fVar10 + pfVar6[3];
      }
      *pfVar6 = fVar7;
      pfVar6[1] = fVar8;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar10;
      fVar10 = *pfVar5 * fVar15;
      fVar7 = *pfVar5 * fVar16;
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x30));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x34));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x38));
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x3c));
      pfVar5 = pfVar5 + 1;
      if (iVar1 != 0) {
        fVar10 = fVar10 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
        fVar7 = fVar7 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits(fVar10));
      uVar4 = uVar4 - 1;
      pfVar6 = pfVar6 + 6;
    } while (((uint)pfVar6 & 0xc) != 0);
  }
  if (1 < (int)uVar4) {
    uVar2 = uVar4 & 0xfffffffe;
    uVar4 = uVar4 & 1;
    pfVar5 = pfVar5 + uVar2;
    iVar3 = -uVar2;
    do {
      fVar10 = gen_bits2f((uint)*(undefined8 *)(pfVar5 + iVar3));
      fVar7 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar5 + iVar3) >> 0x20));
      if (iVar1 == 0) {
        *pfVar6 = fVar10 * fVar11;
        pfVar6[1] = fVar10 * fVar12;
        pfVar6[2] = fVar10 * fVar13;
        pfVar6[3] = fVar10 * fVar14;
        pfVar6[4] = fVar10 * fVar15;
        pfVar6[5] = fVar10 * fVar16;
        pfVar6[6] = fVar7 * fVar17;
        pfVar6[7] = fVar7 * fVar18;
        pfVar6[8] = fVar7 * fVar19;
        pfVar6[9] = fVar7 * fVar20;
        pfVar6[10] = fVar7 * fVar21;
        pfVar6[0xb] = fVar7 * fVar22;
      }
      else {
        *pfVar6 = fVar10 * fVar11 + *pfVar6;
        pfVar6[1] = fVar10 * fVar12 + pfVar6[1];
        pfVar6[2] = fVar10 * fVar13 + pfVar6[2];
        pfVar6[3] = fVar10 * fVar14 + pfVar6[3];
        pfVar6[4] = fVar10 * fVar15 + pfVar6[4];
        pfVar6[5] = fVar10 * fVar16 + pfVar6[5];
        pfVar6[6] = fVar7 * fVar17 + pfVar6[6];
        pfVar6[7] = fVar7 * fVar18 + pfVar6[7];
        pfVar6[8] = fVar7 * fVar19 + pfVar6[8];
        pfVar6[9] = fVar7 * fVar20 + pfVar6[9];
        pfVar6[10] = fVar7 * fVar21 + pfVar6[10];
        pfVar6[0xb] = fVar7 * fVar22 + pfVar6[0xb];
      }
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x4c)) + (*(float *)(gen_frame + 0x4c)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x48)) + (*(float *)(gen_frame + 0x48)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar13 = fVar13 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar12 = fVar12 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar11 = fVar11 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      pfVar6 = pfVar6 + 0xc;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0);
  }
LAB_00cfbbcf: ;
  if ((uVar4 & 1) != 0) {
    fVar17 = *pfVar5;
    fVar11 = fVar17 * fVar11;
    fVar12 = fVar17 * fVar12;
    fVar13 = fVar17 * fVar13;
    fVar14 = fVar17 * fVar14;
    fVar15 = fVar17 * fVar15;
    fVar17 = fVar17 * fVar16;
    if (iVar1 != 0) {
      fVar11 = fVar11 + *pfVar6;
      fVar12 = fVar12 + pfVar6[1];
      fVar13 = fVar13 + pfVar6[2];
      fVar14 = fVar14 + pfVar6[3];
      fVar15 = fVar15 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
      fVar17 = fVar17 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
    }
    *pfVar6 = fVar11;
    pfVar6[1] = fVar12;
    pfVar6[2] = fVar13;
    pfVar6[3] = fVar14;
    *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar17),(uint)gen_fl2bits(fVar15));
  }
  return 0;
}

/* ref: FUN_00cfbc70 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfbc70(unsigned int gen_a0)
{
  GEN_ENTER(0xcfbc70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar9 = (float *)*param_1;
  pfVar10 = (float *)param_1[1];
  uVar8 = param_1[5];
  iVar3 = param_1[8];
  iVar6 = param_1[6];
  if (param_1[9] != 0) {
    iVar6 = 1;
  }
  if (iVar6 == 1) {
    local_30 = *(float *)param_1[2];
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if ((float *)param_1[3] == (float *)0x0) {
LAB_00cfbdbe: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar28 = *(float *)param_1[3];
      fVar29 = *(float *)param_1[2];
      fStack_2c = fVar29 + fVar28;
      fStack_28 = fVar28 * REFG(float, 0x10928e4) + fVar29;
      local_20 = fVar28 * REFG(float, 0x1094870);
      fStack_24 = fVar28 * REFG(float, 0x1087ef8) + fVar29;
      fStack_1c = local_20;
      fStack_18 = local_20;
      fStack_14 = local_20;
    }
  }
  else if (iVar6 == 2) {
    pfVar4 = (float *)param_1[2];
    local_30 = *pfVar4;
    pfVar5 = (float *)param_1[3];
    fStack_2c = pfVar4[3];
    if (pfVar5 == (float *)0x0) {
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_28 = local_30;
      fStack_24 = fStack_2c;
    }
    else {
      fStack_28 = *pfVar4 + *pfVar5;
      local_20 = *pfVar5 * REFG(float, 0x10928e4);
      fStack_1c = pfVar5[3] * REFG(float, 0x10928e4);
      fStack_24 = pfVar5[3] + pfVar4[3];
      fStack_18 = local_20;
      fStack_14 = fStack_1c;
    }
  }
  else if (iVar6 == 4) {
    pfVar4 = (float *)param_1[2];
    local_30 = *pfVar4;
    pfVar5 = (float *)param_1[3];
    fStack_2c = pfVar4[5];
    fStack_28 = pfVar4[10];
    fStack_24 = pfVar4[0xf];
    if (pfVar5 == (float *)0x0) goto LAB_00cfbdbe;
    local_20 = *pfVar5;
    fStack_1c = pfVar5[5];
    fStack_18 = pfVar5[10];
    fStack_14 = pfVar5[0xf];
  }
  fVar28 = local_30;
  fVar29 = fStack_2c;
  fVar30 = fStack_28;
  fVar31 = fStack_24;
  fVar12 = local_20;
  fVar32 = fStack_1c;
  fVar33 = fStack_18;
  fVar34 = fStack_14;
  if (((uint)pfVar10 & 0x3c) != 0) {
    fVar11 = local_30;
    fVar13 = fStack_2c;
    fVar14 = fStack_28;
    fVar15 = local_20;
    fVar12 = local_20;
    fVar16 = fStack_1c;
    fVar17 = fStack_18;
    if ((int)uVar8 < 0x10) goto LAB_00cfbebd;
    do {
      fVar33 = fVar34;
      fVar32 = fVar17;
      fVar12 = fVar16;
      fVar34 = fVar15;
      fVar30 = fVar31;
      fVar29 = fVar14;
      fVar28 = fVar13;
      fVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      uVar8 = uVar8 - 1;
      fVar13 = fVar13 * fVar11;
      fVar31 = fVar11 + fVar34;
      if (iVar3 != 0) {
        fVar13 = fVar13 + *pfVar10;
      }
      *pfVar10 = fVar13;
      pfVar10 = pfVar10 + 1;
      fVar11 = fVar28;
      fVar13 = fVar29;
      fVar14 = fVar30;
      fVar15 = fVar12;
      fVar16 = fVar32;
      fVar17 = fVar33;
    } while (((uint)pfVar10 & 0x3c) != 0);
  }
  if (0xf < (int)uVar8) {
    uVar7 = uVar8 & 0xfffffff0;
    uVar8 = uVar8 & 0xf;
    pfVar9 = pfVar9 + uVar7;
    pfVar10 = pfVar10 + uVar7;
    iVar6 = -uVar7;
    do {
      pfVar4 = pfVar9 + iVar6;
      pfVar5 = pfVar9 + iVar6 + 4;
      pfVar1 = pfVar9 + iVar6 + 8;
      pfVar2 = pfVar9 + iVar6 + 0xc;
      fVar11 = *pfVar4 * fVar28;
      fVar13 = pfVar4[1] * fVar29;
      fVar14 = pfVar4[2] * fVar30;
      fVar15 = pfVar4[3] * fVar31;
      fVar16 = *pfVar5 * (fVar28 + fVar12);
      fVar17 = pfVar5[1] * (fVar29 + fVar32);
      fVar18 = pfVar5[2] * (fVar30 + fVar33);
      fVar19 = pfVar5[3] * (fVar31 + fVar34);
      fVar28 = (fVar28 + fVar12) + fVar12;
      fVar29 = (fVar29 + fVar32) + fVar32;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar20 = *pfVar1 * fVar28;
      fVar21 = pfVar1[1] * fVar29;
      fVar22 = pfVar1[2] * fVar30;
      fVar23 = pfVar1[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar24 = *pfVar2 * fVar28;
      fVar25 = pfVar2[1] * fVar29;
      fVar26 = pfVar2[2] * fVar30;
      fVar27 = pfVar2[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      if (iVar3 != 0) {
        pfVar4 = pfVar10 + iVar6;
        fVar11 = fVar11 + *pfVar4;
        fVar13 = fVar13 + pfVar4[1];
        fVar14 = fVar14 + pfVar4[2];
        fVar15 = fVar15 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 4;
        fVar16 = fVar16 + *pfVar4;
        fVar17 = fVar17 + pfVar4[1];
        fVar18 = fVar18 + pfVar4[2];
        fVar19 = fVar19 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 8;
        fVar20 = fVar20 + *pfVar4;
        fVar21 = fVar21 + pfVar4[1];
        fVar22 = fVar22 + pfVar4[2];
        fVar23 = fVar23 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 0xc;
        fVar24 = fVar24 + *pfVar4;
        fVar25 = fVar25 + pfVar4[1];
        fVar26 = fVar26 + pfVar4[2];
        fVar27 = fVar27 + pfVar4[3];
      }
      pfVar4 = pfVar10 + iVar6;
      *pfVar4 = fVar11;
      pfVar4[1] = fVar13;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar15;
      pfVar4 = pfVar10 + iVar6 + 4;
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = fVar19;
      pfVar4 = pfVar10 + iVar6 + 8;
      *pfVar4 = fVar20;
      pfVar4[1] = fVar21;
      pfVar4[2] = fVar22;
      pfVar4[3] = fVar23;
      pfVar4 = pfVar10 + iVar6 + 0xc;
      *pfVar4 = fVar24;
      pfVar4[1] = fVar25;
      pfVar4[2] = fVar26;
      pfVar4[3] = fVar27;
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0);
  }
LAB_00cfbebd: ;
  while (fVar11 = fVar12, (uVar8 & 0xf) != 0) {
    fVar12 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    uVar8 = uVar8 - 1;
    fVar12 = fVar12 * fVar28;
    fVar13 = fVar28 + fVar11;
    if (iVar3 != 0) {
      fVar12 = fVar12 + *pfVar10;
    }
    *pfVar10 = fVar12;
    pfVar10 = pfVar10 + 1;
    fVar28 = fVar29;
    fVar29 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar13;
    fVar12 = fVar32;
    fVar32 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar11;
  }
  return 0;
}

/* ref: FUN_00cfbf33 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfbf33(unsigned int gen_a0)
{
  GEN_ENTER(0xcfbf33u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  short * psVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float * pfVar7;
  float fVar8;
  float * pfVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  uint uVar13;
  uint uVar14;
  float * pfVar15;
  float10 fVar16;
  float fVar17;
  uint local_10;
  uint local_c;
  int local_8;
  
  fVar8 = REFG(float, 0x1131540);
  iVar6 = *(int *)((int)param_1 + 0x20);
  uVar13 = *(uint *)((int)param_1 + 0x1c);
  uVar14 = *(uint *)((int)param_1 + 0x18);
  local_8 = *(int *)((int)param_1 + 4);
  if (*(int *)((int)param_1 + 0x24) != 0) {
    uVar14 = 1;
    uVar13 = 1;
  }
  pfVar7 = *(float * PTR32 *)((int)param_1 + 0xc);
  if (pfVar7 == (float *)0x0) {
    local_10 = *(uint *)((int)param_1 + 0x14) / uVar14;
    if (local_10 != 0) {
      pfVar7 = *(float * PTR32 *)((int)param_1 + 8);
      param_1 = *(short * PTR32 *)param_1;
      do {
        uVar10 = 0;
        if (uVar13 != 0) {
          sVar5 = *param_1;
          pfVar9 = pfVar7;
          do {
            fVar17 = *pfVar9;
            uVar11 = 1;
            pfVar9 = pfVar9 + 1;
            fVar17 = ((float)(int)sVar5 * fVar17) * fVar8;
            if (1 < uVar14) {
              do {
                psVar1 = param_1 + uVar11;
                fVar3 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((float)(int)*psVar1 * fVar3) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *(float *)(local_8 + uVar10 * 4) = fVar17;
            }
            else {
              *(float *)(local_8 + uVar10 * 4) = *(float *)(local_8 + uVar10 * 4) + fVar17;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar10 = *(uint *)((int)param_1 + 0x14) / uVar14;
    local_10 = 0;
    if (uVar10 != 0) {
      pfVar9 = *(float * PTR32 *)((int)param_1 + 8);
      param_1 = *(short * PTR32 *)param_1;
      do {
        local_c = 0;
        if (uVar13 != 0) {
          fVar16 = (float10)(int)local_10;
          sVar5 = *param_1;
          if ((int)local_10 < 0) {
            fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          pfVar12 = pfVar7;
          pfVar15 = pfVar9;
          do {
            fVar17 = *pfVar12;
            fVar3 = *pfVar15;
            uVar11 = 1;
            pfVar12 = pfVar12 + 1;
            pfVar15 = pfVar15 + 1;
            fVar17 = ((fVar17 * (float)fVar16 + fVar3) * (float)(int)sVar5) * fVar8;
            if (1 < uVar14) {
              do {
                fVar3 = *pfVar12;
                psVar1 = param_1 + uVar11;
                fVar4 = *pfVar15;
                pfVar12 = pfVar12 + 1;
                pfVar15 = pfVar15 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((fVar3 * (float)fVar16 + fVar4) * (float)(int)*psVar1) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *(float *)(local_8 + local_c * 4) = fVar17;
            }
            else {
              pfVar2 = (float *)(local_8 + local_c * 4);
              *pfVar2 = *pfVar2 + fVar17;
            }
            local_c = local_c + 1;
          } while (local_c < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar10);
    }
  }
  return 0;
}

/* ref: FUN_00cfc120 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc120(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  psVar5 = (short *)*param_1;
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  iVar6 = param_1[5];
  pfVar3 = (float *)param_1[3];
  fVar9 = *(float *)param_1[2] * REFG(float, 0x1131540);
  fVar10 = ((float *)param_1[2])[1] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar6 != 0) {
      do {
        sVar1 = *psVar5;
        iVar6 = iVar6 - 1;
        psVar5 = psVar5 + 1;
        fVar11 = (float)(int)sVar1 * fVar9;
        fVar7 = (float)(int)sVar1 * fVar10;
        if (iVar2 == 0) {
          *pfVar4 = fVar11;
        }
        else {
          *pfVar4 = fVar11 + *pfVar4;
          fVar7 = fVar7 + pfVar4[1];
        }
        pfVar4[1] = fVar7;
        pfVar4 = pfVar4 + 2;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar11 = pfVar3[1] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      sVar1 = *psVar5;
      iVar6 = iVar6 - 1;
      psVar5 = psVar5 + 1;
      fVar12 = (float)(int)sVar1 * fVar9;
      fVar8 = (float)(int)sVar1 * fVar10;
      if (iVar2 == 0) {
        *pfVar4 = fVar12;
      }
      else {
        *pfVar4 = fVar12 + *pfVar4;
        fVar8 = fVar8 + pfVar4[1];
      }
      pfVar4[1] = fVar8;
      pfVar4 = pfVar4 + 2;
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar11;
    }
  }
  return 0;
}

/* ref: FUN_00cfc220 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc220(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc220u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar1 = (float *)param_1[2];
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  psVar5 = (short *)*param_1;
  iVar6 = param_1[5];
  pfVar3 = (float *)param_1[3];
  fVar9 = *pfVar1 * REFG(float, 0x1131540);
  fVar10 = pfVar1[1] * REFG(float, 0x1131540);
  fVar11 = pfVar1[2] * REFG(float, 0x1131540);
  fVar12 = pfVar1[3] * REFG(float, 0x1131540);
  fVar13 = pfVar1[4] * REFG(float, 0x1131540);
  fVar14 = pfVar1[5] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar6 != 0) {
      do {
        iVar6 = iVar6 - 1;
        fVar7 = (float)(int)*psVar5;
        psVar5 = psVar5 + 1;
        if (iVar2 == 0) {
          *pfVar4 = fVar7 * fVar9;
          pfVar4[1] = fVar7 * fVar10;
          pfVar4[2] = fVar7 * fVar11;
          pfVar4[3] = fVar7 * fVar12;
          pfVar4[4] = fVar7 * fVar13;
          fVar7 = fVar7 * fVar14;
        }
        else {
          *pfVar4 = fVar7 * fVar9 + *pfVar4;
          pfVar4[1] = fVar7 * fVar10 + pfVar4[1];
          pfVar4[2] = fVar7 * fVar11 + pfVar4[2];
          pfVar4[3] = fVar7 * fVar12 + pfVar4[3];
          pfVar4[4] = fVar7 * fVar13 + pfVar4[4];
          fVar7 = fVar7 * fVar14 + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar15 = pfVar3[1] * REFG(float, 0x1131540);
    fVar16 = pfVar3[2] * REFG(float, 0x1131540);
    fVar17 = pfVar3[3] * REFG(float, 0x1131540);
    fVar18 = pfVar3[4] * REFG(float, 0x1131540);
    fVar19 = pfVar3[5] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      iVar6 = iVar6 - 1;
      fVar8 = (float)(int)*psVar5;
      psVar5 = psVar5 + 1;
      if (iVar2 == 0) {
        *pfVar4 = fVar8 * fVar9;
        pfVar4[1] = fVar8 * fVar10;
        pfVar4[2] = fVar8 * fVar11;
        pfVar4[3] = fVar8 * fVar12;
        pfVar4[4] = fVar8 * fVar13;
        fVar8 = fVar8 * fVar14;
      }
      else {
        *pfVar4 = fVar8 * fVar9 + *pfVar4;
        pfVar4[1] = fVar8 * fVar10 + pfVar4[1];
        pfVar4[2] = fVar8 * fVar11 + pfVar4[2];
        pfVar4[3] = fVar8 * fVar12 + pfVar4[3];
        pfVar4[4] = fVar8 * fVar13 + pfVar4[4];
        fVar8 = fVar8 * fVar14 + pfVar4[5];
      }
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar15;
      fVar11 = fVar11 + fVar16;
      fVar12 = fVar12 + fVar17;
      fVar13 = fVar13 + fVar18;
      fVar14 = fVar14 + fVar19;
      pfVar4[5] = fVar8;
      pfVar4 = pfVar4 + 6;
    }
  }
  return 0;
}

/* ref: FUN_00cfc490 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc490(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc490u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  short * psVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = (float *)param_1[2];
  local_24 = pfVar1[4] * REFG(float, 0x1131540);
  local_20 = pfVar1[5] * REFG(float, 0x1131540);
  psVar6 = (short *)*param_1;
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  local_1c = pfVar1[6] * REFG(float, 0x1131540);
  local_18 = pfVar1[7] * REFG(float, 0x1131540);
  local_14 = pfVar1[8] * REFG(float, 0x1131540);
  local_10 = pfVar1[9] * REFG(float, 0x1131540);
  local_c = pfVar1[10] * REFG(float, 0x1131540);
  pfVar3 = (float *)param_1[3];
  iVar5 = param_1[5];
  fVar23 = pfVar1[3] * REFG(float, 0x1131540);
  local_8 = pfVar1[0xb] * REFG(float, 0x1131540);
  fVar20 = *pfVar1 * REFG(float, 0x1131540);
  fVar21 = pfVar1[1] * REFG(float, 0x1131540);
  fVar22 = pfVar1[2] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar9 = (float)(int)*psVar6;
        fVar7 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar24 = fVar7 * fVar21 + fVar9 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar24;
          pfVar4[1] = fVar7 * fVar23 + fVar9 * fVar22;
          pfVar4[2] = fVar7 * local_20 + fVar9 * local_24;
          pfVar4[3] = fVar7 * local_18 + fVar9 * local_1c;
          pfVar4[4] = fVar7 * local_10 + fVar9 * local_14;
          fVar7 = fVar7 * local_8 + fVar9 * local_c;
        }
        else {
          *pfVar4 = fVar24 + *pfVar4;
          pfVar4[1] = (fVar7 * fVar23 + fVar9 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar7 * local_20 + fVar9 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar7 * local_18 + fVar9 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar7 * local_10 + fVar9 * local_14) + pfVar4[4];
          fVar7 = (fVar7 * local_8 + fVar9 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar9 = pfVar3[1] * REFG(float, 0x1131540);
    fVar24 = pfVar3[2] * REFG(float, 0x1131540);
    fVar10 = pfVar3[3] * REFG(float, 0x1131540);
    fVar11 = pfVar3[4] * REFG(float, 0x1131540);
    fVar12 = pfVar3[5] * REFG(float, 0x1131540);
    fVar13 = pfVar3[6] * REFG(float, 0x1131540);
    fVar14 = pfVar3[7] * REFG(float, 0x1131540);
    fVar15 = pfVar3[8] * REFG(float, 0x1131540);
    fVar16 = pfVar3[9] * REFG(float, 0x1131540);
    fVar17 = pfVar3[10] * REFG(float, 0x1131540);
    fVar18 = pfVar3[0xb] * REFG(float, 0x1131540);
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar19 = (float)(int)*psVar6;
        fVar8 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar25 = fVar8 * fVar21 + fVar19 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar25;
          pfVar4[1] = fVar8 * fVar23 + fVar19 * fVar22;
          pfVar4[2] = fVar8 * local_20 + fVar19 * local_24;
          pfVar4[3] = fVar8 * local_18 + fVar19 * local_1c;
          pfVar4[4] = fVar8 * local_10 + fVar19 * local_14;
          fVar8 = fVar8 * local_8 + fVar19 * local_c;
        }
        else {
          *pfVar4 = fVar25 + *pfVar4;
          pfVar4[1] = (fVar8 * fVar23 + fVar19 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar8 * local_20 + fVar19 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar8 * local_18 + fVar19 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar8 * local_10 + fVar19 * local_14) + pfVar4[4];
          fVar8 = (fVar8 * local_8 + fVar19 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar8;
        local_24 = fVar11 + local_24;
        local_20 = fVar12 + local_20;
        fVar23 = fVar10 + fVar23;
        fVar20 = fVar20 + fVar7;
        fVar21 = fVar21 + fVar9;
        fVar22 = fVar22 + fVar24;
        local_1c = fVar13 + local_1c;
        local_18 = fVar14 + local_18;
        local_14 = fVar15 + local_14;
        local_10 = fVar16 + local_10;
        local_c = fVar17 + local_c;
        local_8 = fVar18 + local_8;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfc980 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfc980(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short * psVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  short * psVar5;
  short sVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  short * psVar10;
  int iVar11;
  float * pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar7 = *(float * PTR32 *)(param_1 + 8);
  local_30 = pfVar7[2] * REFG(float, 0x1131540);
  local_2c = pfVar7[3] * REFG(float, 0x1131540);
  local_28 = pfVar7[4] * REFG(float, 0x1131540);
  local_24 = pfVar7[5] * REFG(float, 0x1131540);
  psVar10 = *(short * PTR32 *)param_1;
  local_20 = pfVar7[6] * REFG(float, 0x1131540);
  local_1c = pfVar7[7] * REFG(float, 0x1131540);
  local_18 = pfVar7[8] * REFG(float, 0x1131540);
  local_14 = pfVar7[9] * REFG(float, 0x1131540);
  local_10 = pfVar7[10] * REFG(float, 0x1131540);
  iVar8 = *(int *)(param_1 + 0x20);
  pfVar9 = *(float * PTR32 *)(param_1 + 0xc);
  pfVar12 = *(float * PTR32 *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0x14);
  fVar25 = *pfVar7 * REFG(float, 0x1131540);
  fVar26 = pfVar7[1] * REFG(float, 0x1131540);
  local_c = pfVar7[0xb] * REFG(float, 0x1131540);
  if (pfVar9 == (float *)0x0) {
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        psVar5 = psVar10 + 5;
        psVar10 = psVar10 + 6;
        fVar27 = (((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                   (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28) + (float)(int)*psVar5 * local_24;
        fVar13 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + (float)(int)*psVar5 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar27;
        }
        else {
          *pfVar12 = fVar27 + *pfVar12;
          fVar13 = fVar13 + pfVar12[1];
        }
        pfVar12[1] = fVar13;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 - 1;
      } while (iVar11 != 0);
      return 0;
    }
  }
  else {
    fVar13 = *pfVar9 * REFG(float, 0x1131540);
    fVar27 = pfVar9[1] * REFG(float, 0x1131540);
    fVar15 = pfVar9[2] * REFG(float, 0x1131540);
    fVar16 = pfVar9[3] * REFG(float, 0x1131540);
    fVar17 = pfVar9[4] * REFG(float, 0x1131540);
    fVar18 = pfVar9[5] * REFG(float, 0x1131540);
    fVar19 = pfVar9[6] * REFG(float, 0x1131540);
    fVar20 = pfVar9[7] * REFG(float, 0x1131540);
    fVar21 = pfVar9[8] * REFG(float, 0x1131540);
    fVar22 = pfVar9[9] * REFG(float, 0x1131540);
    fVar23 = pfVar9[10] * REFG(float, 0x1131540);
    fVar24 = pfVar9[0xb] * REFG(float, 0x1131540);
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        fVar28 = (float)(int)psVar10[5];
        fVar29 = ((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                  (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28;
        psVar10 = psVar10 + 6;
        fVar14 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + fVar28 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar29 + fVar28 * local_24;
        }
        else {
          *pfVar12 = (fVar29 + fVar28 * local_24) + *pfVar12;
          fVar14 = fVar14 + pfVar12[1];
        }
        pfVar12[1] = fVar14;
        local_30 = fVar15 + local_30;
        local_2c = fVar16 + local_2c;
        local_28 = fVar17 + local_28;
        fVar25 = fVar13 + fVar25;
        fVar26 = fVar27 + fVar26;
        local_24 = fVar18 + local_24;
        local_20 = fVar19 + local_20;
        local_1c = fVar20 + local_1c;
        local_18 = fVar21 + local_18;
        local_14 = fVar22 + local_14;
        local_10 = fVar23 + local_10;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 - 1;
        local_c = fVar24 + local_c;
      } while (iVar11 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfce10 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfce10(unsigned int gen_a0)
{
  GEN_ENTER(0xcfce10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  short * psVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = (float *)param_1[2];
  local_58 = pfVar1[3] * REFG(float, 0x1131540);
  local_54 = pfVar1[4] * REFG(float, 0x1131540);
  local_50 = pfVar1[5] * REFG(float, 0x1131540);
  local_4c = pfVar1[6] * REFG(float, 0x1131540);
  local_48 = pfVar1[7] * REFG(float, 0x1131540);
  local_44 = pfVar1[8] * REFG(float, 0x1131540);
  local_40 = pfVar1[9] * REFG(float, 0x1131540);
  local_3c = pfVar1[10] * REFG(float, 0x1131540);
  local_38 = pfVar1[0xb] * REFG(float, 0x1131540);
  local_34 = pfVar1[0xc] * REFG(float, 0x1131540);
  local_30 = pfVar1[0xd] * REFG(float, 0x1131540);
  local_2c = pfVar1[0xe] * REFG(float, 0x1131540);
  local_28 = pfVar1[0xf] * REFG(float, 0x1131540);
  local_24 = pfVar1[0x10] * REFG(float, 0x1131540);
  psVar5 = (short *)*param_1;
  pfVar3 = (float *)param_1[1];
  iVar2 = param_1[8];
  local_20 = pfVar1[0x11] * REFG(float, 0x1131540);
  local_1c = pfVar1[0x12] * REFG(float, 0x1131540);
  local_18 = pfVar1[0x13] * REFG(float, 0x1131540);
  local_14 = pfVar1[0x14] * REFG(float, 0x1131540);
  local_10 = pfVar1[0x15] * REFG(float, 0x1131540);
  local_c = pfVar1[0x16] * REFG(float, 0x1131540);
  iVar4 = param_1[5];
  fVar33 = pfVar1[1] * REFG(float, 0x1131540);
  fVar36 = pfVar1[2] * REFG(float, 0x1131540);
  local_8 = pfVar1[0x17] * REFG(float, 0x1131540);
  fVar32 = *pfVar1 * REFG(float, 0x1131540);
  pfVar1 = (float *)param_1[3];
  if (pfVar1 == (float *)0x0) {
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar8 = (float)(int)*psVar5;
        fVar6 = (float)(int)psVar5[1];
        fVar28 = (float)(int)psVar5[2];
        fVar30 = (float)(int)psVar5[3];
        fVar37 = ((fVar6 * fVar33 + fVar8 * fVar32) + fVar28 * fVar36) + fVar30 * local_58;
        fVar34 = ((fVar6 * local_50 + fVar8 * local_54) + fVar28 * local_4c) + fVar30 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar37;
          pfVar3[1] = fVar34;
          pfVar3[2] = ((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38;
          pfVar3[3] = ((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28;
          pfVar3[4] = ((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18;
          fVar6 = ((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8;
        }
        else {
          *pfVar3 = fVar37 + *pfVar3;
          pfVar3[1] = fVar34 + pfVar3[1];
          pfVar3[2] = (((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18) + pfVar3[4];
          fVar6 = (((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar6;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar1 * REFG(float, 0x1131540);
    fVar8 = pfVar1[1] * REFG(float, 0x1131540);
    fVar28 = pfVar1[2] * REFG(float, 0x1131540);
    fVar30 = pfVar1[3] * REFG(float, 0x1131540);
    fVar34 = pfVar1[4] * REFG(float, 0x1131540);
    fVar37 = pfVar1[5] * REFG(float, 0x1131540);
    fVar9 = pfVar1[6] * REFG(float, 0x1131540);
    fVar10 = pfVar1[7] * REFG(float, 0x1131540);
    fVar11 = pfVar1[8] * REFG(float, 0x1131540);
    fVar12 = pfVar1[9] * REFG(float, 0x1131540);
    fVar13 = pfVar1[10] * REFG(float, 0x1131540);
    fVar14 = pfVar1[0xb] * REFG(float, 0x1131540);
    fVar15 = pfVar1[0xc] * REFG(float, 0x1131540);
    fVar16 = pfVar1[0xd] * REFG(float, 0x1131540);
    fVar17 = pfVar1[0xe] * REFG(float, 0x1131540);
    fVar18 = pfVar1[0xf] * REFG(float, 0x1131540);
    fVar19 = pfVar1[0x10] * REFG(float, 0x1131540);
    fVar20 = pfVar1[0x11] * REFG(float, 0x1131540);
    fVar21 = pfVar1[0x12] * REFG(float, 0x1131540);
    fVar22 = pfVar1[0x13] * REFG(float, 0x1131540);
    fVar23 = pfVar1[0x14] * REFG(float, 0x1131540);
    fVar24 = pfVar1[0x15] * REFG(float, 0x1131540);
    fVar25 = pfVar1[0x16] * REFG(float, 0x1131540);
    fVar26 = pfVar1[0x17] * REFG(float, 0x1131540);
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar27 = (float)(int)*psVar5;
        fVar7 = (float)(int)psVar5[1];
        fVar29 = (float)(int)psVar5[2];
        fVar31 = (float)(int)psVar5[3];
        fVar38 = ((fVar7 * fVar33 + fVar27 * fVar32) + fVar29 * fVar36) + fVar31 * local_58;
        fVar35 = ((fVar7 * local_50 + fVar27 * local_54) + fVar29 * local_4c) + fVar31 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar38;
          pfVar3[1] = fVar35;
          pfVar3[2] = ((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38;
          pfVar3[3] = ((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28;
          pfVar3[4] = ((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18;
          fVar7 = ((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8;
        }
        else {
          *pfVar3 = fVar38 + *pfVar3;
          pfVar3[1] = fVar35 + pfVar3[1];
          pfVar3[2] = (((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18) + pfVar3[4];
          fVar7 = (((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar7;
        local_58 = fVar30 + local_58;
        local_54 = fVar34 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar9 + local_4c;
        local_48 = fVar10 + local_48;
        local_44 = fVar11 + local_44;
        local_40 = fVar12 + local_40;
        local_3c = fVar13 + local_3c;
        local_38 = fVar14 + local_38;
        local_34 = fVar15 + local_34;
        local_30 = fVar16 + local_30;
        local_2c = fVar17 + local_2c;
        local_28 = fVar18 + local_28;
        local_24 = fVar19 + local_24;
        local_20 = fVar20 + local_20;
        fVar33 = fVar8 + fVar33;
        fVar36 = fVar28 + fVar36;
        fVar32 = fVar32 + fVar6;
        local_1c = fVar21 + local_1c;
        local_18 = fVar22 + local_18;
        local_14 = fVar23 + local_14;
        local_10 = fVar24 + local_10;
        local_c = fVar25 + local_c;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 - 1;
        local_8 = fVar26 + local_8;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfd750 */
GEN_NOFRAME uint GEN_STDCALL F_00cfd750(unsigned int gen_a0)
{
  GEN_ENTER(0xcfd750u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  short * psVar8;
  float * pfVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar6;
  (*(uint *)(gen_frame + 0x4)) = param_1[6];
  iVar1 = param_1[1];
  iVar2 = *param_1;
  uVar3 = param_1[5];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4)))) {
  case 1: ;
    pfVar9 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[0] = *(float *)param_1[2] * REFG(float, 0x1131540);
    if (pfVar9 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar9 * REFG(float, 0x1131540);
    }
    break;
  case 2: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[1] = pfVar9[3] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[3] * REFG(float, 0x1131540);
    }
    break;
  case 3: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[4] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[2] = pfVar9[8] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[4] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[8] * REFG(float, 0x1131540);
    }
    break;
  case 4: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[5] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[10] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0xf] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[5] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[10] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0xf] * REFG(float, 0x1131540);
    }
    break;
  case 5: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[6] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[0xc] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0x12] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x38)) = pfVar9[0x18] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[6] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[0xc] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0x12] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x18)) = pfVar5[0x18] * REFG(float, 0x1131540);
    }
    break;
  case 6: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[7] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[0xe] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0x15] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x38)) = pfVar9[0x1c] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x3c)) = pfVar9[0x23] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[7] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[0xe] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0x15] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x18)) = pfVar5[0x1c] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x1c)) = pfVar5[0x23] * REFG(float, 0x1131540);
    }
  }
  uVar7 = 0;
  uVar11 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar3) {
      pfVar9 = (float *)(iVar1 + 8);
      iVar10 = (uVar3 - 4 >> 2) + 1;
      psVar8 = (short *)(iVar2 + 4);
      uVar11 = iVar10 * 4;
      do {
        if (iVar4 == 0) {
          pfVar9[-2] = (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          pfVar9[-2] = pfVar9[-2] + (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        if (iVar4 == 0) {
          pfVar9[-1] = (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          pfVar9[-1] = pfVar9[-1] + (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        if (iVar4 == 0) {
          *pfVar9 = (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          *pfVar9 = *pfVar9 + (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 != 0) {
          fVar12 = fVar12 + pfVar9[1];
        }
        uVar7 = uVar7 + 1;
        pfVar9[1] = fVar12;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        psVar8 = psVar8 + 4;
        pfVar9 = pfVar9 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    if (uVar11 < uVar3) {
      do {
        fVar12 = (float)(int)*(short *)(iVar2 + uVar11 * 2) * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          *(float *)(iVar1 + uVar11 * 4) = fVar12;
        }
        else {
          *(float *)(iVar1 + uVar11 * 4) = *(float *)(iVar1 + uVar11 * 4) + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
      F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return uVar7;
    }
  }
  else {
    if (3 < (int)uVar3) {
      pfVar9 = (float *)(iVar1 + 8);
      iVar10 = (uVar3 - 4 >> 2) + 1;
      psVar8 = (short *)(iVar2 + 4);
      uVar11 = iVar10 * 4;
      do {
        fVar12 = (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[-2] = fVar12;
        }
        else {
          pfVar9[-2] = pfVar9[-2] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[-1] = fVar12;
        }
        else {
          pfVar9[-1] = pfVar9[-1] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 != 0) {
          fVar12 = fVar12 + *pfVar9;
        }
        uVar7 = uVar7 + 1;
        *pfVar9 = fVar12;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[1] = fVar12;
        }
        else {
          pfVar9[1] = pfVar9[1] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        psVar8 = psVar8 + 4;
        pfVar9 = pfVar9 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    for (; uVar11 < uVar3; uVar11 = uVar11 + 1) {
      fVar12 = (float)(int)*(short *)(iVar2 + uVar11 * 2) * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
      ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
      if (iVar4 == 0) {
        *(float *)(iVar1 + uVar11 * 4) = fVar12;
      }
      else {
        *(float *)(iVar1 + uVar11 * 4) = *(float *)(iVar1 + uVar11 * 4) + fVar12;
      }
      uVar7 = uVar7 + 1;
      if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
        uVar7 = 0;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00cfddb0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfddb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfddb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 auVar1 [16];
  short sVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  short * psVar13;
  float * pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  psVar13 = (short *)*param_1;
  pfVar14 = (float *)param_1[1];
  uVar12 = param_1[5];
  pfVar3 = (float *)param_1[2];
  fVar15 = *pfVar3 * REFG(float, 0x1131540);
  iVar4 = param_1[8];
  pfVar5 = (float *)param_1[3];
  fVar16 = pfVar3[1] * REFG(float, 0x1131540);
  if (pfVar5 == (float *)0x0) {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = fVar15;
    fStack_24 = fVar16;
  }
  else {
    fStack_28 = (*pfVar3 + *pfVar5) * REFG(float, 0x1131540);
    fStack_18 = *pfVar5 * REFG(float, 0x1131540);
    fStack_14 = pfVar5[1] * REFG(float, 0x1131540);
    fStack_24 = (pfVar3[1] + pfVar5[1]) * REFG(float, 0x1131540);
  }
  fVar29 = fStack_28;
  fVar30 = fStack_24;
  if (((uint)pfVar14 & 0x38) != 0) {
    if ((int)uVar12 < 8) goto LAB_00cfdf29;
    do {
      sVar2 = *psVar13;
      psVar13 = psVar13 + 1;
      uVar12 = uVar12 - 1;
      fVar31 = (float)(int)sVar2 * fVar15;
      fVar32 = (float)(int)sVar2 * fVar16;
      fVar15 = fVar15 + fStack_18;
      fVar16 = fVar16 + fStack_14;
      fVar29 = fVar29 + fStack_18;
      fVar30 = fVar30 + fStack_14;
      if (iVar4 != 0) {
        fVar31 = fVar31 + *pfVar14;
        fVar32 = fVar32 + pfVar14[1];
      }
      *pfVar14 = fVar31;
      pfVar14[1] = fVar32;
      pfVar14 = pfVar14 + 2;
    } while (((uint)pfVar14 & 0x38) != 0);
  }
  if (7 < (int)uVar12) {
    uVar10 = uVar12 & 0xfffffff8;
    uVar12 = uVar12 & 7;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    fVar33 = fStack_18 + fStack_18;
    fVar34 = fStack_14 + fStack_14;
    psVar13 = psVar13 + uVar10;
    pfVar14 = pfVar14 + uVar10 * 2;
    iVar11 = -uVar10;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar13 + iVar11)), sizeof(*(gen_v16 *)(psVar13 + iVar11)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar13 + iVar11)) : sizeof(auVar1));
      fVar17 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar15;
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar16;
      fVar19 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar29;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar15 + fVar31);
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar16 + fVar32);
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar29 + fVar33);
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar30 + fVar34);
      fVar15 = (fVar15 + fVar31) + fVar31;
      fVar16 = (fVar16 + fVar32) + fVar32;
      fVar29 = (fVar29 + fVar33) + fVar33;
      fVar30 = (fVar30 + fVar34) + fVar34;
      fVar6 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar15;
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar16;
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar29;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar15;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar16;
      fVar27 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar29;
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      if (iVar4 != 0) {
        pfVar3 = pfVar14 + iVar11 * 2;
        fVar17 = fVar17 + *pfVar3;
        fVar18 = fVar18 + pfVar3[1];
        fVar19 = fVar19 + pfVar3[2];
        fVar20 = fVar20 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 4;
        fVar21 = fVar21 + *pfVar3;
        fVar22 = fVar22 + pfVar3[1];
        fVar23 = fVar23 + pfVar3[2];
        fVar24 = fVar24 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 8;
        fVar6 = fVar6 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
        fVar8 = fVar8 + pfVar3[2];
        fVar9 = fVar9 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
        fVar25 = fVar25 + *pfVar3;
        fVar26 = fVar26 + pfVar3[1];
        fVar27 = fVar27 + pfVar3[2];
        fVar28 = fVar28 + pfVar3[3];
      }
      pfVar3 = pfVar14 + iVar11 * 2;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar18;
      pfVar3[2] = fVar19;
      pfVar3[3] = fVar20;
      pfVar3 = pfVar14 + iVar11 * 2 + 4;
      *pfVar3 = fVar21;
      pfVar3[1] = fVar22;
      pfVar3[2] = fVar23;
      pfVar3[3] = fVar24;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar6);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar9) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)));
      pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
      *pfVar3 = fVar25;
      pfVar3[1] = fVar26;
      pfVar3[2] = fVar27;
      pfVar3[3] = fVar28;
      iVar11 = iVar11 + 8;
    } while (iVar11 != 0);
  }
LAB_00cfdf29: ;
  while ((uVar12 & 7) != 0) {
    sVar2 = *psVar13;
    psVar13 = psVar13 + 1;
    uVar12 = uVar12 - 1;
    fVar29 = (float)(int)sVar2 * fVar15;
    fVar30 = (float)(int)sVar2 * fVar16;
    fVar15 = fVar15 + fStack_18;
    fVar16 = fVar16 + fStack_14;
    if (iVar4 != 0) {
      fVar29 = fVar29 + *pfVar14;
      fVar30 = fVar30 + pfVar14[1];
    }
    *pfVar14 = fVar29;
    pfVar14[1] = fVar30;
    pfVar14 = pfVar14 + 2;
  }
  return 0;
}

/* ref: FUN_00cfdfc0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00cfdfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfdfc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  float * pfVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short * psVar7;
  float * pfVar8;
  undefined2 uVar10;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  (*(short * PTR32 *)(gen_frame + 0x74)) = (short *)*param_1;
  (*(uint *)(gen_frame + 0x70)) = param_1[5];
  pfVar8 = (float *)param_1[2];
  fVar14 = *pfVar8 * REFG(float, 0x1131540);
  fVar15 = pfVar8[1] * REFG(float, 0x1131540);
  fVar16 = pfVar8[2] * REFG(float, 0x1131540);
  fVar17 = pfVar8[3] * REFG(float, 0x1131540);
  fVar18 = pfVar8[4] * REFG(float, 0x1131540);
  (*(float * PTR32 *)(gen_frame + 0x78)) = (float *)param_1[1];
  iVar1 = param_1[8];
  pfVar2 = (float *)param_1[3];
  fVar19 = pfVar8[5] * REFG(float, 0x1131540);
  if (pfVar2 == (float *)0x0) {
    F_00c48350(&(*(float *)(gen_frame + 0x20)),0,0x30);
    (*(float *)(gen_frame + 0x8)) = fVar14;
    (*(float *)(gen_frame + 0xc)) = fVar15;
    (*(float *)(gen_frame + 0x10)) = fVar16;
    (*(float *)(gen_frame + 0x14)) = fVar17;
    (*(float *)(gen_frame + 0x18)) = fVar18;
    (*(float *)(gen_frame + 0x1c)) = fVar19;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = (*pfVar8 + *pfVar2) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0xc)) = (pfVar2[1] + pfVar8[1]) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x10)) = (pfVar2[2] + pfVar8[2]) * REFG(float, 0x1131540);
    fVar20 = pfVar2[3];
    (*(float *)(gen_frame + 0x14)) = (fVar20 + pfVar8[3]) * REFG(float, 0x1131540);
    fVar21 = pfVar2[4];
    (*(float *)(gen_frame + 0x18)) = (fVar21 + pfVar8[4]) * REFG(float, 0x1131540);
    fVar22 = pfVar2[5];
    fVar23 = pfVar8[5];
    fVar24 = *pfVar2 * REFG(float, 0x1131540);
    fVar25 = pfVar2[1] * REFG(float, 0x1131540);
    fVar9 = pfVar2[2] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x20)) = fVar24;
    (*(float *)(gen_frame + 0x24)) = fVar25;
    (*(float *)(gen_frame + 0x28)) = fVar9;
    fVar20 = fVar20 * REFG(float, 0x1131540);
    fVar21 = fVar21 * REFG(float, 0x1131540);
    fVar11 = fVar22 * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x2c)) = fVar20;
    (*(float *)(gen_frame + 0x30)) = fVar21;
    (*(float *)(gen_frame + 0x34)) = fVar11;
    (*(float *)(gen_frame + 0x38)) = fVar24;
    (*(float *)(gen_frame + 0x3c)) = fVar25;
    (*(float *)(gen_frame + 0x40)) = fVar9;
    (*(float *)(gen_frame + 0x1c)) = (fVar22 + fVar23) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x44)) = fVar20;
    (*(float *)(gen_frame + 0x48)) = fVar21;
    (*(float *)(gen_frame + 0x4c)) = fVar11;
  }
  uVar6 = (*(uint *)(gen_frame + 0x70));
  psVar7 = (*(short * PTR32 *)(gen_frame + 0x74));
  pfVar8 = (*(float * PTR32 *)(gen_frame + 0x78));
  fVar20 = (*(float *)(gen_frame + 0x8));
  fVar21 = (*(float *)(gen_frame + 0xc));
  fVar22 = (*(float *)(gen_frame + 0x10));
  fVar23 = (*(float *)(gen_frame + 0x14));
  fVar24 = (*(float *)(gen_frame + 0x18));
  fVar25 = (*(float *)(gen_frame + 0x1c));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x78)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x70)) < 2) goto LAB_00cfe251;
    do {
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x40));
      fVar23 = fVar23 + (*(float *)(gen_frame + 0x44));
      fVar24 = fVar24 + (*(float *)(gen_frame + 0x48));
      fVar25 = fVar25 + (*(float *)(gen_frame + 0x4c));
      fVar9 = (float)(int)*psVar7;
      fVar11 = fVar9 * fVar14;
      fVar12 = fVar9 * fVar15;
      fVar13 = fVar9 * fVar16;
      fVar9 = fVar9 * fVar17;
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x20));
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x24));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x28));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x2c));
      if (iVar1 != 0) {
        fVar11 = fVar11 + *pfVar8;
        fVar12 = fVar12 + pfVar8[1];
        fVar13 = fVar13 + pfVar8[2];
        fVar9 = fVar9 + pfVar8[3];
      }
      *pfVar8 = fVar11;
      pfVar8[1] = fVar12;
      pfVar8[2] = fVar13;
      pfVar8[3] = fVar9;
      fVar9 = (float)(int)*psVar7 * fVar18;
      fVar11 = (float)(int)*psVar7 * fVar19;
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x30));
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x34));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x38));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x3c));
      psVar7 = psVar7 + 1;
      if (iVar1 != 0) {
        fVar9 = fVar9 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
        fVar11 = fVar11 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
      uVar6 = uVar6 - 1;
      pfVar8 = pfVar8 + 6;
    } while (((uint)pfVar8 & 0xc) != 0);
  }
  if (1 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffffe;
    uVar6 = uVar6 & 1;
    psVar7 = psVar7 + uVar4;
    iVar5 = -uVar4;
    do {
      uVar3 = *(undefined4 *)(psVar7 + iVar5);
      uVar10 = (undefined2)((uint)uVar3 >> 0x10);
      fVar9 = (float)(int)(short)uVar3;
      fVar11 = (float)(int)((longlong)CONCAT26(uVar10,CONCAT24(uVar10,uVar3)) >> 0x30);
      if (iVar1 == 0) {
        *pfVar8 = fVar9 * fVar14;
        pfVar8[1] = fVar9 * fVar15;
        pfVar8[2] = fVar9 * fVar16;
        pfVar8[3] = fVar9 * fVar17;
        pfVar8[4] = fVar9 * fVar18;
        pfVar8[5] = fVar9 * fVar19;
        pfVar8[6] = fVar11 * fVar20;
        pfVar8[7] = fVar11 * fVar21;
        pfVar8[8] = fVar11 * fVar22;
        pfVar8[9] = fVar11 * fVar23;
        pfVar8[10] = fVar11 * fVar24;
        pfVar8[0xb] = fVar11 * fVar25;
      }
      else {
        *pfVar8 = fVar9 * fVar14 + *pfVar8;
        pfVar8[1] = fVar9 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar9 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar9 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar9 * fVar18 + pfVar8[4];
        pfVar8[5] = fVar9 * fVar19 + pfVar8[5];
        pfVar8[6] = fVar11 * fVar20 + pfVar8[6];
        pfVar8[7] = fVar11 * fVar21 + pfVar8[7];
        pfVar8[8] = fVar11 * fVar22 + pfVar8[8];
        pfVar8[9] = fVar11 * fVar23 + pfVar8[9];
        pfVar8[10] = fVar11 * fVar24 + pfVar8[10];
        pfVar8[0xb] = fVar11 * fVar25 + pfVar8[0xb];
      }
      fVar25 = fVar25 + ((*(float *)(gen_frame + 0x4c)) + (*(float *)(gen_frame + 0x4c)));
      fVar24 = fVar24 + ((*(float *)(gen_frame + 0x48)) + (*(float *)(gen_frame + 0x48)));
      fVar23 = fVar23 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      pfVar8 = pfVar8 + 0xc;
      iVar5 = iVar5 + 2;
    } while (iVar5 != 0);
  }
LAB_00cfe251: ;
  if ((uVar6 & 1) != 0) {
    fVar20 = (float)(int)*psVar7;
    fVar14 = fVar20 * fVar14;
    fVar15 = fVar20 * fVar15;
    fVar16 = fVar20 * fVar16;
    fVar17 = fVar20 * fVar17;
    fVar18 = fVar20 * fVar18;
    fVar20 = fVar20 * fVar19;
    if (iVar1 != 0) {
      fVar14 = fVar14 + *pfVar8;
      fVar15 = fVar15 + pfVar8[1];
      fVar16 = fVar16 + pfVar8[2];
      fVar17 = fVar17 + pfVar8[3];
      fVar18 = fVar18 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
      fVar20 = fVar20 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
    }
    *pfVar8 = fVar14;
    pfVar8[1] = fVar15;
    pfVar8[2] = fVar16;
    pfVar8[3] = fVar17;
    *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar20),(uint)gen_fl2bits(fVar18));
  }
  return 0;
}

/* ref: FUN_00cfe300 */
GEN_NOFRAME unsigned int F_00cfe300(float gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcfe300u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short sVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short * psVar16;
  float * pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  psVar16 = (short *)*param_3;
  pfVar17 = (float *)param_3[1];
  uVar15 = param_3[5];
  iVar4 = param_3[8];
  iVar13 = param_3[6];
  if (param_3[9] != 0) {
    iVar13 = 1;
  }
  if (iVar13 == 1) {
    local_30 = *(float *)param_3[2] * REFG(float, 0x1131540);
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if ((float *)param_3[3] == (float *)0x0) {
LAB_00cfe49c: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar27 = *(float *)param_3[3];
      fVar30 = *(float *)param_3[2];
      fStack_2c = (fVar30 + fVar27) * REFG(float, 0x1131540);
      fVar31 = fVar27 * REFG(float, 0x10928e4) + fVar30;
      local_20 = (fVar27 * REFG(float, 0x1094870)) * REFG(float, 0x1131540);
      fVar30 = fVar27 * REFG(float, 0x1087ef8) + fVar30;
      fStack_14 = local_20;
LAB_00cfe505: ;
      fStack_28 = fVar31 * REFG(float, 0x1131540);
      fStack_24 = fVar30 * REFG(float, 0x1131540);
      fStack_1c = fStack_14;
      fStack_18 = local_20;
    }
  }
  else if (iVar13 == 2) {
    pfVar5 = (float *)param_3[2];
    pfVar6 = (float *)param_3[3];
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[3] * REFG(float, 0x1131540);
    if (pfVar6 != (float *)0x0) {
      fVar31 = *pfVar5 + *pfVar6;
      fVar30 = pfVar6[3] + pfVar5[3];
      fStack_14 = (pfVar6[3] * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      local_20 = (*pfVar6 * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      goto LAB_00cfe505;
    }
    local_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = local_30;
    fStack_24 = fStack_2c;
  }
  else if (iVar13 == 4) {
    pfVar5 = (float *)param_3[2];
    pfVar6 = (float *)param_3[3];
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[5] * REFG(float, 0x1131540);
    fStack_28 = pfVar5[10] * REFG(float, 0x1131540);
    fStack_24 = pfVar5[0xf] * REFG(float, 0x1131540);
    if (pfVar6 == (float *)0x0) goto LAB_00cfe49c;
    local_20 = *pfVar6 * REFG(float, 0x1131540);
    fStack_1c = pfVar6[5] * REFG(float, 0x1131540);
    fStack_18 = pfVar6[10] * REFG(float, 0x1131540);
    fStack_14 = pfVar6[0xf] * REFG(float, 0x1131540);
  }
  fVar27 = local_30;
  fVar30 = fStack_2c;
  fVar31 = fStack_28;
  fVar32 = fStack_24;
  fVar19 = local_20;
  fVar33 = fStack_1c;
  fVar34 = fStack_18;
  fVar35 = fStack_14;
  if (((uint)pfVar17 & 0x3c) != 0) {
    fVar29 = local_30;
    fVar28 = fStack_2c;
    fVar7 = fStack_28;
    fVar8 = local_20;
    fVar19 = local_20;
    fVar9 = fStack_1c;
    fVar10 = fStack_18;
    if ((int)uVar15 < 0x10) goto LAB_00cfe5ed;
    do {
      fVar34 = fVar35;
      fVar33 = fVar10;
      fVar19 = fVar9;
      fVar35 = fVar8;
      fVar31 = fVar32;
      fVar30 = fVar7;
      fVar27 = fVar28;
      sVar3 = *psVar16;
      psVar16 = psVar16 + 1;
      uVar15 = uVar15 - 1;
      fVar28 = (float)(int)sVar3 * fVar29;
      fVar32 = fVar29 + fVar35;
      if (iVar4 != 0) {
        fVar28 = fVar28 + *pfVar17;
      }
      *pfVar17 = fVar28;
      pfVar17 = pfVar17 + 1;
      fVar29 = fVar27;
      fVar28 = fVar30;
      fVar7 = fVar31;
      fVar8 = fVar19;
      fVar9 = fVar33;
      fVar10 = fVar34;
    } while (((uint)pfVar17 & 0x3c) != 0);
  }
  if (0xf < (int)uVar15) {
    uVar14 = uVar15 & 0xfffffff0;
    uVar15 = uVar15 & 0xf;
    psVar16 = psVar16 + uVar14;
    pfVar17 = pfVar17 + uVar14;
    iVar13 = -uVar14;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar16 + iVar13)), sizeof(*(gen_v16 *)(psVar16 + iVar13)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar16 + iVar13)) : sizeof(auVar1));
      memcpy(&(auVar2), &(*(gen_v16 *)(psVar16 + iVar13 + 8)), sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) : sizeof(auVar2));
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar27;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * fVar31;
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * fVar32;
      fVar29 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * (fVar27 + fVar19);
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * (fVar30 + fVar33);
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * (fVar31 + fVar34);
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * (fVar32 + fVar35);
      fVar27 = (fVar27 + fVar19) + fVar19;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar32 = (fVar32 + fVar35) + fVar35;
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 0)) * fVar27;
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 2)) * fVar30;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 4)) * fVar31;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 6)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 8)) * fVar27;
      fVar10 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 10)) * fVar30;
      fVar11 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 12)) * fVar31;
      fVar12 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 14)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      if (iVar4 != 0) {
        pfVar5 = pfVar17 + iVar13;
        fVar18 = fVar18 + *pfVar5;
        fVar20 = fVar20 + pfVar5[1];
        fVar21 = fVar21 + pfVar5[2];
        fVar22 = fVar22 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 4;
        fVar29 = fVar29 + *pfVar5;
        fVar28 = fVar28 + pfVar5[1];
        fVar7 = fVar7 + pfVar5[2];
        fVar8 = fVar8 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 8;
        fVar23 = fVar23 + *pfVar5;
        fVar24 = fVar24 + pfVar5[1];
        fVar25 = fVar25 + pfVar5[2];
        fVar26 = fVar26 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 0xc;
        fVar9 = fVar9 + *pfVar5;
        fVar10 = fVar10 + pfVar5[1];
        fVar11 = fVar11 + pfVar5[2];
        fVar12 = fVar12 + pfVar5[3];
      }
      pfVar5 = pfVar17 + iVar13;
      *pfVar5 = fVar18;
      pfVar5[1] = fVar20;
      pfVar5[2] = fVar21;
      pfVar5[3] = fVar22;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar28);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar29);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar28) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 4)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)));
      pfVar5 = pfVar17 + iVar13 + 8;
      *pfVar5 = fVar23;
      pfVar5[1] = fVar24;
      pfVar5[2] = fVar25;
      pfVar5[3] = fVar26;
      (*(undefined2 *)((char *)&auVar2 + 4)) = (short)(uint)gen_fl2bits(fVar10);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar2 + 6)) = (short)((uint)gen_fl2bits(fVar10) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 8)) = (short)(uint)gen_fl2bits(fVar11);
      (*(undefined2 *)((char *)&auVar2 + 10)) = (short)((uint)gen_fl2bits(fVar11) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 12)) = (short)(uint)gen_fl2bits(fVar12);
      (*(undefined2 *)((char *)&auVar2 + 14)) = (short)((uint)gen_fl2bits(fVar12) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)), &(auVar2), sizeof(auVar2) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)) ? sizeof(auVar2) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)));
      iVar13 = iVar13 + 0x10;
    } while (iVar13 != 0);
  }
LAB_00cfe5ed: ;
  while (fVar29 = fVar19, (uVar15 & 0xf) != 0) {
    sVar3 = *psVar16;
    psVar16 = psVar16 + 1;
    uVar15 = uVar15 - 1;
    fVar19 = (float)(int)sVar3 * fVar27;
    fVar28 = fVar27 + fVar29;
    if (iVar4 != 0) {
      fVar19 = fVar19 + *pfVar17;
    }
    *pfVar17 = fVar19;
    pfVar17 = pfVar17 + 1;
    fVar27 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar32;
    fVar32 = fVar28;
    fVar19 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar35;
    fVar35 = fVar29;
  }
  return 0;
}

/* ref: FUN_00cfe670 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe670(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe6a0 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe6c0 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe6c0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return (uint)*param_1;
}

/* ref: FUN_00cfe700 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe700(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe700u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return (uint)*param_1;
}

/* ref: FUN_00cfe740 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe740(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe760 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe760(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe780 */
GEN_NOFRAME uint GEN_STDCALL F_00cfe780(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe7a0 */
GEN_NOFRAME unsigned int F_00cfe7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe7a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
                    
                    
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0xcfeaf8))[(int)(*(int *)(param_1 + 0x10))])))();
  return 0;
}

/* ref: FUN_00cfeb30 */
GEN_NOFRAME uint GEN_STDCALL F_00cfeb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcfeb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_4 = (uint)gen_a3;
  BOOL BVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      if ((*(uint *)&gen_a1) == 1) {
        if ((*(int *)&gen_a2) == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfddb0;
          }
          return 0xcfc120;
        }
        if ((*(int *)&gen_a2) == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfdfc0;
          }
          return 0xcfc220;
        }
      }
      else if ((*(uint *)&gen_a1) == 2) {
        if ((*(int *)&gen_a2) == 6) {
          return 0xcfc490;
        }
      }
      else if ((*(uint *)&gen_a1) == 6) {
        if ((*(int *)&gen_a2) == 2) {
          return 0xcfc980;
        }
      }
      else if (((*(uint *)&gen_a1) == 4) && ((*(int *)&gen_a2) == 6)) {
        return 0xcfce10;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(10);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || ((((*(uint *)&gen_a1) < 5 && ((*(uint *)&gen_a1) != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfe300;
        }
        if ((*(uint *)&gen_a1) < 7) {
          return 0xcfd750;
        }
      }
      return 0xcfbf33;
    }
    if (param_1 < 2) {
      return 0;
    }
    if (6 < param_1) {
      if (param_1 != 7) {
        return 0;
      }
      if ((*(uint *)&gen_a1) == 1) {
        if ((*(int *)&gen_a2) == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb810;
          }
          return 0xcf9f10;
        }
        if ((*(int *)&gen_a2) == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb9d0;
          }
          return 0xcf9fe0;
        }
      }
      else if ((*(uint *)&gen_a1) == 2) {
        if ((*(int *)&gen_a2) == 6) {
          return 0xcfa210;
        }
      }
      else if ((*(uint *)&gen_a1) == 6) {
        if ((*(int *)&gen_a2) == 2) {
          return 0xcfa670;
        }
      }
      else if (((*(uint *)&gen_a1) == 4) && ((*(int *)&gen_a2) == 6)) {
        return 0xcfaa50;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(6);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || ((((*(uint *)&gen_a1) < 5 && ((*(uint *)&gen_a1) != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfbc70;
        }
        if ((*(uint *)&gen_a1) < 7) {
          return 0xcfb2a0;
        }
      }
      return 0xcf9d75;
    }
  }
  return 0xcfe7a0;
}

/* ref: FUN_00cfed50 */
GEN_FRAME uint GEN_THISCALL F_00cfed50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcfed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00cff8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,1,param_7,0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4660((undefined *)((int)this + 0x48) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_6 + 4);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_6 + 8);
  if (*param_6 != '\0') {
    iVar2 = *(int *)(param_6 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x18)) = param_2 + iVar2;
    bVar1 = param_6[1];
    iVar3 = *(int *)(param_6 + 0x10);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = param_6 + (uint)bVar1 + iVar3;
    (*(int *)(gen_frame + 0xc)) = iVar2;
    uVar4 = F_00ce4700((undefined *)((int)this + 0x48) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar4 == 0xffffffff) {
      F_00cff770(this GEN_EDX_ARG,1);
    }
  }
  return (uint)this;
}

/* ref: FUN_00cfee00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cfee00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfee00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50((undefined *)((int)this + 0x48) GEN_EDX_FWD);
  F_00cffb40(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf8 */
GEN_FRAME uint GEN_THISCALL F_00cfee20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,uVar3);
    return *(int *)(this + 8) + 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00cff810(this + 0x1c GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x10);
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34)));
  uVar3 = (*pcVar1)(this);
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  F_00ce4700(this + 0x48 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),0);
  F_00cff820(this + 0x1c GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  this[*(int *)(this + 8) + 0x44] = (undefined1)0x0;
  bVar2 = F_00cff870(this + 0x1c GEN_EDX_ARG);
  if (bVar2 == 0) {
    bVar2 = F_00cff8a0(this + 0x1c GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_00ce45d0(this + 0x48 GEN_EDX_ARG,*(undefined4 *)(this + 100));
      F_00cff8b0(this + 0x1c GEN_EDX_ARG);
      uVar3 = F_00cff810(this + 0x1c GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
      F_00ce4700(this + 0x48 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),1);
      F_00cff820(this + 0x1c GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
      this[*(int *)(this + 8) + 0x44] = (undefined1)0x1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + (*(uint *)(gen_frame + 0x10))))),0,uVar3 - (*(uint *)(gen_frame + 0x10)));
    if ((*(uint *)(gen_frame + 0x10)) == 0) {
      return *(int *)(this + 8) + 1;
    }
  }
  if ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0x8))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x0))),0,(*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x10)));
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
  *(uint *)(this + 8) = (*(int *)(this + 8) + 1U) % uVar3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00cfefa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00cfefb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00cfefc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00cfefd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcfefd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cfefe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcfefe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cfeff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcfeff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf18 */
GEN_NOFRAME uint F_00cff000(void)
{
  GEN_ENTER(0xcff000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf20 */
GEN_NOFRAME byte GEN_THISCALL F_00cff020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1a);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf21 */
GEN_NOFRAME unsigned int F_00cff030(void)
{
  GEN_ENTER(0xcff030u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf22 */
GEN_NOFRAME byte F_00cff040(void)
{
  GEN_ENTER(0xcff040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf23 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00cff070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_00cff080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf15 */
GEN_NOFRAME byte GEN_THISCALL F_00cff090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cff0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50(this + 0x48 GEN_EDX_FWD);
  F_00cffb40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDataTransfer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cff0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf26 */
GEN_NOFRAME unsigned int F_00cff160(void)
{
  GEN_ENTER(0xcff160u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf25 */
GEN_FRAME uint GEN_THISCALL F_00cff170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,0);
  uVar3 = F_00ce93e0(uVar2);
  *param_1 = *(int *)(this + 0xc) * *(int *)(this + 0x14) + *(int *)(this + 0x10);
  local_8 = 0;
  uVar4 = F_00ce1c20(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  param_1[1] = uVar4;
  if (*(int *)(this + 0xc) < (int)uVar4) {
    param_1[1] = *(int *)(this + 0xc);
  }
  iVar5 = param_1[1] % (int)(uint)*(ushort *)(uVar2 + uVar3 + 0xc);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - iVar5;
  }
  iVar5 = param_1[1];
  uVar2 = F_00ce1c00(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  F_00c46aa0(*param_1,uVar2,iVar5);
  F_00ce1f10(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,param_1[1]);
  bVar1 = F_00ce1dc0(*(undefined4 *)(this + 4) GEN_EDX_ARG);
  if (bVar1 == 0) {
    bVar1 = F_00ce1df0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
    if (bVar1 != 0) {
      local_8 = 1;
    }
  }
  else {
    F_00ce1f50(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  }
  *(int *)(this + 0x14) = (*(int *)(this + 0x14) + 1) % 3;
  return local_8;
}

/* ref: FUN_00cff240 */
GEN_FRAME uint GEN_THISCALL F_00cff240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1131724));
  iVar1 = *(int *)(param_1 + 0xd0);
  *(int *)((int)this + 0xc) = iVar1;
  uVar2 = F_00cf9ab0((undefined *)(param_1 + 0xa4) GEN_EDX_FWD,iVar1 * 3,4);
  *(uint *)((int)this + 0x10) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cff290 */
GEN_FRAME uint GEN_THISCALL F_00cff290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11316b4));
  in_ecx[1] = param_2;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf7 */
GEN_NOFRAME uint F_00cff2b0(void)
{
  GEN_ENTER(0xcff2b0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf20 */
GEN_NOFRAME byte F_00cff2c0(void)
{
  GEN_ENTER(0xcff2c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_00cff2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00cff2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf1 */
GEN_NOFRAME unsigned int F_00cff300(void)
{
  GEN_ENTER(0xcff300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00cff310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf4 */
GEN_NOFRAME uint F_00cff320(void)
{
  GEN_ENTER(0xcff320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf5 */
GEN_NOFRAME uint F_00cff330(void)
{
  GEN_ENTER(0xcff330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf6 */
GEN_NOFRAME uint F_00cff340(void)
{
  GEN_ENTER(0xcff340u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf8 */
GEN_NOFRAME uint F_00cff350(void)
{
  GEN_ENTER(0xcff350u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf11 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf12 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf13 */
GEN_NOFRAME uint F_00cff380(void)
{
  GEN_ENTER(0xcff380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf14 */
GEN_NOFRAME uint F_00cff390(void)
{
  GEN_ENTER(0xcff390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf15 */
GEN_NOFRAME byte F_00cff3a0(void)
{
  GEN_ENTER(0xcff3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf18 */
GEN_NOFRAME uint F_00cff3d0(void)
{
  GEN_ENTER(0xcff3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf21 */
GEN_NOFRAME unsigned int F_00cff3f0(void)
{
  GEN_ENTER(0xcff3f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf22 */
GEN_NOFRAME byte F_00cff400(void)
{
  GEN_ENTER(0xcff400u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf23 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cff420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf24 */
GEN_NOFRAME uint F_00cff450(void)
{
  GEN_ENTER(0xcff450u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cff460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cff490 */
GEN_NOFRAME uint GEN_THISCALL F_00cff490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  uVar1 = F_00ce4c50((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_00cff4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce46b0(this + 0x14 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf25 */
GEN_FRAME uint GEN_THISCALL F_00cff4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  if ((char)uVar5 != '\0') {
    return 1;
  }
  iVar1 = *(int *)(this + 0xc);
  iVar8 = *(int *)(this + 0x34) * iVar1 + *(int *)(this + 0x10);
  iVar6 = 0;
  bVar3 = false;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  ((byte *)(gen_frame + 0x8))[0xc] = 0;
  ((byte *)(gen_frame + 0x8))[0xd] = 0;
  ((byte *)(gen_frame + 0x8))[0xe] = 0;
  ((byte *)(gen_frame + 0x8))[0xf] = 0;
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  ((byte *)(gen_frame + 0x8))[0x12] = 0;
  ((byte *)(gen_frame + 0x8))[0x13] = 0;
  ((byte *)(gen_frame + 0x8))[0x14] = 0;
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  ((byte *)(gen_frame + 0x8))[0x16] = 0;
  ((byte *)(gen_frame + 0x8))[0x17] = 0;
  ((byte *)(gen_frame + 0x8))[0x18] = 0;
  ((byte *)(gen_frame + 0x8))[0x19] = 0;
  ((byte *)(gen_frame + 0x8))[0x1a] = 0;
  ((byte *)(gen_frame + 0x8))[0x1b] = 0;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  if (0 < iVar1) {
    do {
      if (!bVar3) {
        uVar2 = *(undefined4 *)(this + 0xc);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = iVar8;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = uVar2;
      }
      ((byte *)(gen_frame + 0x8))[0x1c] = ((byte *)(gen_frame + 0x8))[0x10];
      ((byte *)(gen_frame + 0x8))[0x1d] = ((byte *)(gen_frame + 0x8))[0x11];
      ((byte *)(gen_frame + 0x8))[0x1e] = ((byte *)(gen_frame + 0x8))[0x12];
      ((byte *)(gen_frame + 0x8))[0x1f] = ((byte *)(gen_frame + 0x8))[0x13];
      uVar5 = F_00ce1c00(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
      ((byte *)(gen_frame + 0x8))[4] = (char)uVar5;
      ((byte *)(gen_frame + 0x8))[5] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x8))[6] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x8))[7] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce1c20(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
      ((byte *)(gen_frame + 0x8))[0xc] = (char)uVar5;
      ((byte *)(gen_frame + 0x8))[0xd] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x8))[0xe] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x8))[0xf] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce4700(this + 0x14 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      if (uVar5 == 0xffffffff) {
        return 0xffffffff;
      }
      F_00ce1f10(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      bVar4 = F_00ce1dc0(*(undefined4 *)(this + 4) GEN_EDX_ARG);
      if (bVar4 == 0) {
        bVar4 = F_00ce1df0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
        if ((bVar4 != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) == 0)) {
          this[8] = (undefined1)0x1;
          uVar7 = 1;
        }
      }
      else {
        F_00ce1f50(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
        F_00ce45d0(this + 0x14 GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
        uVar7 = 3;
      }
      iVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16))) break;
      bVar3 = true;
      ((byte *)(gen_frame + 0x8))[0x20] = 1;
      ((byte *)(gen_frame + 0x8))[0x20] = 1;
    } while ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) < *(int *)(this + 0xc));
  }
  param_1[1] = iVar6;
  *param_1 = iVar8;
  *(int *)(this + 0x34) = (*(int *)(this + 0x34) + 1) % 3;
  return uVar7;
}

/* ref: FUN_00cff5e0 */
GEN_FRAME uint GEN_THISCALL F_00cff5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00ce4660((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,0)));
  iVar2 = param_1[0x34];
  *(int *)((int)this + 0xc) = iVar2;
  uVar6 = F_00cf9ab0(param_1 + 0x29 GEN_EDX_ARG,iVar2 * 3,4);
  *(uint *)((int)this + 0x10) = uVar6;
  uVar6 = F_00ce93e0(piVar5);
  pcVar1 = (char *)((int)piVar5 + uVar6);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(pcVar1 + 4);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(pcVar1 + 8);
  if (*pcVar1 != '\0') {
    iVar2 = *piVar5;
    iVar3 = *(int *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = iVar2 + iVar3;
    uVar6 = F_00ce93e0(piVar5);
    uVar4 = *(undefined4 *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x4)) = uVar6 + (byte)pcVar1[1] + *(int *)(pcVar1 + 0x10) + (int)piVar5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
    uVar6 = F_00ce4700((undefined *)((int)this + 0x14) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar6 == 0xffffffff) {
      *(undefined1 *)((int)this + 8) = 1;
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf24 */
GEN_NOFRAME uint F_00cff6d0(void)
{
  GEN_ENTER(0xcff6d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cff6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  F_00ce4c50(this + 0x14 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cff710 */
GEN_FRAME uint GEN_THISCALL F_00cff710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf2 */
GEN_FRAME uint GEN_THISCALL F_00cff720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x34 + param_2 * 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf3 */
GEN_FRAME byte GEN_THISCALL F_00cff740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(byte *)(param_2 + 0x44 + in_ecx);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_00cff760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x18);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf10 */
GEN_FRAME byte GEN_THISCALL F_00cff770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00cff780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x24) = param_1;
  if (((char)param_2 != '\0') && (uVar1 = 0, *(int *)(this + 0x10) != 0)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cff7c0 */
GEN_FRAME uint GEN_THISCALL F_00cff7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcff7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00cff7f0 */
GEN_FRAME uint GEN_THISCALL F_00cff7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00cff810 */
GEN_NOFRAME uint GEN_THISCALL F_00cff810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff810u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return in_ecx[2] + *in_ecx;
}

/* ref: FUN_00cff820 */
GEN_FRAME uint GEN_THISCALL F_00cff820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcff820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  uVar3 = param_1;
  if (iVar1 <= iVar2) {
    if (*(char *)((int)this + 0x14) == '\x01') {
      *(undefined1 *)((int)this + 0x15) = 1;
      *(int *)((int)this + 8) = iVar1;
      return param_1 + (iVar1 - iVar2);
    }
    uVar3 = param_1 + (iVar1 - iVar2);
    *(undefined1 *)((int)this + 0xc) = 1;
    *(int *)((int)this + 8) = iVar1;
  }
  return uVar3;
}

/* ref: FUN_00cff870 */
GEN_NOFRAME byte GEN_THISCALL F_00cff870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: FUN_00cff880 */
GEN_FRAME uint GEN_THISCALL F_00cff880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)param_1 < param_2) {
    *(uint *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 4) = param_2;
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  return param_1;
}

/* ref: FUN_00cff8a0 */
GEN_NOFRAME byte GEN_THISCALL F_00cff8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x15);
}

/* ref: FUN_00cff8b0 */
GEN_NOFRAME uint GEN_THISCALL F_00cff8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff8b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x15) = 0;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 0x10);
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00cff8c0 */
GEN_FRAME uint GEN_THISCALL F_00cff8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcff8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_3;
  uVar2 = param_4;
  if (4 < param_4) {
    uVar2 = 4;
  }
  *(uint *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(char *)((int)this + 0x19) = (char)param_6;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(bool *)((int)this + 0x1a) = param_7 != 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  puVar4 = (uint *)((int)this + 0x34);
  do {
    if ((uVar3 < *(uint *)((int)this + 0x10)) && ((char)param_6 != '\0')) {
      uVar1 = *(undefined4 *)((int)this + 0xc);
      if (param_7 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,"CDev.Engine.Sd",0,0,0x10);
        *puVar4 = uVar2;
      }
      else {
        uVar2 = F_00cf9ab0((undefined *)(param_7 + 0x78) GEN_EDX_ARG,uVar1,param_8);
        *puVar4 = uVar2;
      }
    }
    else {
      *puVar4 = 0;
    }
    *(undefined1 *)((int)this + uVar3 + 0x44) = 0;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 4);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cff9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcff9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x10) != 0) {
    pAVar2 = this + 0x34;
    do {
      if (((*(int *)pAVar2 != 0) && (this[0x19] != (undefined1)0x0)) &&
         (this[0x1a] == (undefined1)0x0)) {
        F_00406810(*(int *)pAVar2);
      }
      *(int *)pAVar2 = 0;
      uVar1 = uVar1 + 1;
      pAVar2 = pAVar2 + 4;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00cffa00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (this[0x28] == (undefined1)0x1) {
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,*(gen_size32 *)(this + 0xc));
    return *(int *)(this + 8) + 1;
  }
  iVar1 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(this + 0xc);
  *(uint *)(this + 0x24) = *(int *)(this + 0x24) + uVar3;
  if (iVar1 <= *(int *)(this + 0x24)) {
    if (this[0x30] == (undefined1)0x1) {
      this[0x31] = (undefined1)0x1;
    }
    else {
      this[0x28] = (undefined1)0x1;
    }
    uVar3 = uVar3 + (iVar1 - *(int *)(this + 0x24));
    *(int *)(this + 0x24) = iVar1;
  }
  if (this[0x19] == (undefined1)0x0) {
    *((uint *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) =
         (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  }
  else {
    F_00c46aa0(*((undefined4 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),
               (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c),uVar3);
    if ((this[0x28] != (undefined1)0x0) && (uVar3 < *(uint *)(this + 0xc))) {
      F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3))),0,
              *(uint *)(this + 0xc) - uVar3);
    }
  }
  if (this[0x31] != (undefined1)0x0) {
    this[0x31] = (undefined1)0x0;
    this[0x28] = (undefined1)0x0;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x2c);
    if (this[0x19] == (undefined1)0x0) {
      *(uint *)(this + 0x14) = uVar3;
    }
    else {
      uVar2 = F_00cff820(this + 0x1c GEN_EDX_ARG,*(int *)(this + 0xc) - uVar3);
      F_00c46aa0(*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3,
                 (*(int *)(this + 0x24) - uVar2) + *(int *)(this + 0x1c),uVar2);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
    }
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  if (*(uint *)(this + 0x10) <= *(uint *)(this + 8)) {
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf11 */
GEN_FRAME uint GEN_THISCALL F_00cffb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)param_1 < param_2) {
    *(uint *)(this + 0x2c) = param_1;
    *(int *)(this + 0x20) = param_2;
    this[0x30] = (undefined1)0x1;
  }
  return param_1;
}

/* ref: FUN_00cffb40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cffb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return;
}

/* ref: FUN_00cffb60 */
GEN_FRAME uint GEN_THISCALL F_00cffb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cf9ab0((undefined *)((int)this + 0x78) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cffb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cffbb0 */
GEN_FRAME uint GEN_THISCALL F_00cffbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00cffbf0 */
GEN_FRAME uint GEN_THISCALL F_00cffbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cffc10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cffc10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcffc10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  return;
}

/* ref: FUN_00cffc20 */
GEN_FRAME uint GEN_THISCALL F_00cffc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
  }
  return (uint)this;
}

/* ref: FUN_00cffcb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cffcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4))));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,param_1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cffd70 */
GEN_FRAME byte GEN_THISCALL F_00cffd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffde0 */
GEN_FRAME byte GEN_THISCALL F_00cffde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffe50 */
GEN_FRAME unsigned int GEN_THISCALL F_00cffe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cffe80 */
GEN_FRAME byte GEN_THISCALL F_00cffe80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcffe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,param_1);
    bVar3 = (byte)uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cfff50 */
GEN_FRAME unsigned int GEN_THISCALL F_00cfff50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcfff50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0xdc))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x14))))
                            (*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 4))));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0xe0))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d00000 */
GEN_FRAME byte F_00d00000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *(int *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 == iVar2;
}

/* ref: FUN_00d00050 */
GEN_FRAME byte F_00d00050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *(int *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 != iVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d000a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd000a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d000d0 */
GEN_FRAME unsigned int F_00d000d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd000d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00d00140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == -1) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) ^ (param_1 & 0xff ^ *(uint *)(this + 0x40)) & 1;
    return;
  }
  if (param_2 < 0x40) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    if ((char)param_1 != '\0') {
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | uVar1;
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | (int)uVar1 >> 0x1f;
      return;
    }
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) & ~uVar1;
    *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & ~((int)uVar1 >> 0x1f);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf2 */
GEN_FRAME byte GEN_THISCALL F_00d00190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == -1) {
    return (byte)this[0x40] & 1;
  }
  if (param_1 < 0x40) {
    return ((ulonglong)(byte)param_1 < 0x40) *
           (char)(*(ulonglong *)(this + 0x48) >> (ulonglong)(byte)param_1) & 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf3 */
GEN_FRAME uint GEN_THISCALL F_00d001d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd001d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 2 ^ *(uint *)(in_ecx + 0x40)) & 2;
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00d001f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd001f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf5 */
GEN_FRAME byte GEN_THISCALL F_00d00200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (3 < param_2) {
    return 0;
  }
  *(char *)(in_ecx + 0x30) = (char)param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_00d00220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: FUN_00d00230 */
GEN_NOFRAME uint GEN_THISCALL F_00d00230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf35 */
GEN_FRAME unsigned int GEN_THISCALL F_00d00240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  int iVar3;
  int iVar4;
  undefined * pLVar5;
  undefined * pLVar6;
  
  *(int * PTR32 *)(this + 8) = param_1;
  if ((param_1 != (int *)0x0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x110))(param_1 GEN_EDX_FWD), -1 < (int)uVar1)
     ) {
    pLVar5 = this + 0x10;
    pLVar6 = this + 0x134;
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x100))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,pLVar5 + (-0x10 - (int)this));
      *pLVar5 = SUB41(uVar2,0);
      if (SUB41(uVar2,0) != (undefined1)0x0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,(uVar2 & 0xff) * 0x28,"CDev.Engine.Sd.SoundLayout",0,
                                  0,0x10)));
        *(undefined * PTR32 *)(pLVar6 - 0x80) = _Dst;
        *(undefined * PTR32 *)pLVar6 = (undefined *)((int)_Dst + (uint)(byte)*pLVar5 * 0x14);
        F_00c48350(_Dst,0,(uint)(byte)*pLVar5 * 0x28);
        iVar4 = 0;
        if (*pLVar5 != (undefined1)0x0) {
          iVar3 = 0;
          do {
            *((undefined4 *)GEN_TOP((*(int *)(pLVar6 - 0x80) + 0xc + iVar3))) = 0xffffffff;
            *(undefined4 *)(*(int *)pLVar6 + 0xc + iVar3) = 0xffffffff;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x14;
          } while (iVar4 < (int)(uint)(byte)*pLVar5);
        }
      }
      pLVar5 = pLVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)(pLVar5 + (-0x10 - (int)this)) <= (int)uVar1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00d00350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf37 */
GEN_FRAME uint GEN_THISCALL F_00d00360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_00d00370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00d00380 */
GEN_FRAME float F_00d00380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00380u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 2))) {
  case 1: ;
    fVar1 = F_00d1aa00(param_1,param_2,param_3);
    return fVar1;
  case 2: ;
    fVar1 = F_00d196d0(param_1,param_2,param_3);
    return fVar1;
  case 3: ;
    fVar1 = F_00d18bc0(param_1,param_2,param_3);
    return fVar1;
  case 4: ;
    fVar1 = F_00d16880(param_1,param_2,param_3);
    return fVar1;
  case 5: ;
    fVar1 = F_00d12f80(param_1,gen_bits2f((unsigned int)(param_2)),param_3);
    return fVar1;
  case 6: ;
    fVar1 = F_00d10980(param_1,param_2,param_3);
    return fVar1;
  case 7: ;
    fVar1 = F_00d0ee30(param_1,param_2,param_3);
    return fVar1;
  case 8: ;
    fVar1 = F_00d0db20(param_1,param_2,param_3);
    return fVar1;
  default: ;
    return (float)(float10)0;
  case 0xe: ;
    fVar1 = F_00d0ab20(param_1,param_2,param_3);
    return fVar1;
  }
}

/* ref: FUN_00d00490 */
GEN_FRAME uint GEN_THISCALL F_00d00490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x2d0);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x40) {
    uVar2 = (uint)bVar1;
    *(undefined4 *)((int)this + uVar2 * 4 + 0x1d0) = param_1;
  }
  *(char *)((int)this + 0x2d0) = *(char *)((int)this + 0x2d0) + '\x01';
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf41 */
GEN_FRAME uint GEN_THISCALL F_00d004c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd004c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d04680(param_1 GEN_EDX_FWD,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf44 */
GEN_FRAME uint GEN_THISCALL F_00d004e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd004e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xb4))(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf46 */
GEN_FRAME uint GEN_THISCALL F_00d00530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00530u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xbc))(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf49 */
GEN_FRAME uint GEN_THISCALL F_00d00580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd00580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(param_1 + 0x74) = param_4;
  *(uint *)(param_1 + 0x6c) = param_2;
  *(float *)(param_1 + 0x78) = param_5;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf50 */
GEN_FRAME uint GEN_THISCALL F_00d005a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd005a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *param_1 = *(undefined4 *)(this + 0x6c);
  *param_2 = *(undefined4 *)(this + 0x70);
  *param_3 = *(undefined4 *)(this + 0x74);
  *param_4 = *(undefined4 *)(this + 0x78);
  return (uint)param_3;
}

/* ref: FUN_00d005d0 */
GEN_FRAME float GEN_THISCALL F_00d005d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd005d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0x6c) == 0) || (*(int *)((int)this + 0x70) == 0)) {
    return (float)(float10)1;
  }
  if (*(int *)((int)this + 0x6c) == param_1) {
    return *(float *)((int)this + 0x74);
  }
  if (*(int *)((int)this + 0x70) == param_1) {
    return *(float *)((int)this + 0x78);
  }
  return (float)(float10)1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf51 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d00610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf52 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d00630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf33 */
GEN_FRAME byte GEN_THISCALL F_00d00650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint in_ecx;
  int iVar2;
  undefined * pLVar3;
  undefined * pLVar4;
  int local_8;
  
  if (((byte)this[0x40] & 1) == 0) {
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    pLVar4 = this + 0x10;
    pLVar3 = this + 0xb4;
    local_8 = 0x20;
    do {
      if (*pLVar4 != (undefined1)0x0) {
        F_00c46aa0(*(int *)(pLVar3 + 0x80),*(int *)pLVar3,(uint)(byte)*pLVar4 * 0x14);
        F_00c48350(*(undefined * PTR32 *)pLVar3,0,(uint)(byte)*pLVar4 * 0x14);
        iVar1 = 0;
        if (*pLVar4 != (undefined1)0x0) {
          iVar2 = 0;
          do {
            *(undefined4 *)(iVar2 + 0xc + *(int *)pLVar3) = 0xffffffff;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x14;
          } while (iVar1 < (int)(uint)(byte)*pLVar4);
        }
      }
      pLVar3 = pLVar3 + 4;
      pLVar4 = pLVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
    in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_ARG);
    F_00d1b830(in_ecx GEN_EDX_ARG);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))) GEN_EDX_ARG,param_1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))) GEN_EDX_ARG,param_1,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
  }
  return 1;
}

/* ref: FUN_00d007a0 */
GEN_FRAME uint F_00d007a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd007a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc));
}

/* ref: FUN_00d007c0 */
GEN_FRAME byte GEN_THISCALL F_00d007c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd007c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_2;
  (*(int *)(gen_frame + 0x20)) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_FWD)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
  *(undefined1 *)((int)this + 0x2d0) = 0;
  if (*(char *)((int)this + 0x2ec) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x2d4);
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x98);
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      F_00d07600(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x58));
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)(float10)1;
  if (*(char *)((int)this + 0x2d0) != '\0') {
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)((int)this + 0x1d0);
    do {
      piVar1 = (int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar1;
      uVar2 = F_00d1eee0(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
      if (uVar2 != 0) {
        iVar3 = *piVar1;
        uVar6 = 0;
        fVar5 = F_00d1f050((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
        ((code *)*(gen_code32 *)(iVar3 + 0x60))
                  ((*(int * PTR32 *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(fVar5),uVar6);
        (*(int *)(gen_frame + 0x20)) = 1;
        *(*(float * PTR32 *)(gen_frame + 0x10)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x8)));
        *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0xc)));
        if ((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) <= (float10)0) break;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
      iVar3 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar3;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x2d0));
  }
  if (*(char *)((int)this + 0x2ec) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  }
  bVar4 = (*(int *)(gen_frame + 0x20)) != 0;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_00d00940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd00940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 2 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00d00950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) | 4;
    return;
  }
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) & 0xfffffffb;
  return;
}

/* ref: FUN_00d00970 */
GEN_NOFRAME byte GEN_STDCALL F_00d00970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00d00980 */
GEN_FRAME unsigned int GEN_THISCALL F_00d00980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) | 8;
    return;
  }
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) & 0xfffffff7;
  return;
}

/* ref: FUN_00d009a0 */
GEN_NOFRAME byte GEN_THISCALL F_00d009a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd009a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf27 */
GEN_FRAME uint GEN_THISCALL F_00d009b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd009b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x98))(param_1 GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf28 */
GEN_FRAME byte GEN_THISCALL F_00d009f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd009f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_FWD)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x88))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf29 */
GEN_FRAME uint GEN_THISCALL F_00d00a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd00a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf30 */
GEN_FRAME unsigned int GEN_THISCALL F_00d00a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd00a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]));
  }
  return;
}

