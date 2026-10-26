#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ab4e30 */
uint F_00ab4e30(unsigned int gen_a0)
{
  GEN_ENTER(0xab4e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1 & 0xffff);
  if ((uVar2 != 0) && (puVar1 = *(uint * PTR32 *)(uVar2 + 4), puVar1 != (uint *)0x0)) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_00ab4e70 */
uint F_00ab4e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab4e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 8);
  *(undefined1 *)this = 0;
  local_8 = 1;
  puVar2 = (undefined4 *)((int)this + 0x30);
  do {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,3);
    if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined4 * PTR32 *)(uVar1 + 4);
    }
    *puVar3 = uVar4;
    puVar2[-9] = 0;
    puVar2[-7] = 0;
    *(undefined1 *)(puVar2 + -6) = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    *(undefined2 *)(puVar2 + -3) = 0;
    *(undefined2 *)(puVar2 + -8) = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    uVar4 = REFG(float, 0x1087f04);
    puVar2[5] = GEN_FLT_TO(puVar2[5], REFG(float, 0x1087f04));
    puVar3 = puVar3 + 0x10;
    puVar2 = puVar2 + 0x10;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x88) = uVar4;
  return (uint)this;
}

/* ref: FUN_00ab4f20 */
unsigned int F_00ab4f20(unsigned int gen_a0)
{
  GEN_ENTER(0xab4f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = REFG(float, 0x1087f04);
  *(undefined1 *)this = 0;
  *(int *)((int)this + 0x88) = iVar4;
  piVar3 = (int *)((int)this + 0x1c);
  iVar4 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x78))((int *)*piVar3,500);
      *piVar3 = 0;
    }
    piVar3[9] = 0;
    iVar2 = REFG(float, 0x1087f04);
    piVar3[-4] = 0;
    piVar3[1] = 0;
    *(undefined2 *)(piVar3 + 2) = 0;
    piVar3[10] = iVar2;
    *(undefined2 *)(piVar3 + -3) = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[-2] = 0;
    *(undefined1 *)(piVar3 + -1) = 0;
    piVar3 = piVar3 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00ab4fc0 */
uint F_00ab4fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab4fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  iVar5 = 0;
  local_8 = 0;
  if ((char)param_3 == '\x03') {
    local_8 = 1;
  }
  else if ((char)param_1 == '\x03') {
    local_8 = 2;
  }
  else if ((*(int *)((uint)*(byte *)((int)(uintptr_t)this) * 0x40 + 0x1c + (int)this) == 0) ||
          (piVar1 = *(int * PTR32 *)((int)this + (uint)*(byte *)((int)(uintptr_t)this) * 0x40 + 0x1c),
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1), (char)uVar4 == '\0')) {
    local_8 = 3;
  }
  else {
    uVar4 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96);
    if (0 < (int)uVar4) {
      do {
        uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96,iVar5);
        if ((((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) &&
            (*puVar2 == (param_2 & 0xff))) && (puVar2[1] == (param_4 & 0xff))) {
          local_8 = puVar2[2];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x97,local_8);
  if (uVar4 != 0) {
    return *(uint *)(uVar4 + 4);
  }
  return 0;
}

/* ref: FUN_00ab50b0 */
byte F_00ab50b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab50b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1 & 0xffff);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 8)));
  }
  return 0;
}

/* ref: FUN_00ab50f0 */
unsigned int F_00ab50f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab50f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0xb4) != '\0') {
    *(undefined4 *)((int)this + 0xb0) = 3;
    return 0;
  }
  uVar1 = F_00ab0c40();
  *(uint *)((int)this + 0xb0) = uVar1;
  return 0;
}

/* ref: FUN_00ab5120 */
uint F_00ab5120(unsigned int gen_a0)
{
  GEN_ENTER(0xab5120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 199) != '\0') {
    if (*(char *)((int)this + 0xc6) == '\0') {
      *(undefined1 *)((int)this + 199) = 0;
    }
    if (*(char *)((int)this + 199) != '\0') goto LAB_00ab5154;
  }
  if (*(char *)((int)this + 0xc6) != '\0') {
    F_00ab0a20(this,0,6);
  }
LAB_00ab5154: ;
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x1b0);
  if (((*(int *)(uVar1 + 0x14) != 1) && (4 < *(uint *)((int)this + 8))) &&
     (uVar1 = *(uint *)((int)this + 0xa0), *(int *)(uVar1 + 0x188) != 1)) {
    *(undefined4 *)(uVar1 + 0x14c) = 0;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined4 *)(uVar1 + 0x188) = 0;
    *(undefined4 *)(uVar1 + 0x150) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab51d0 */
uint F_00ab51d0(void)
{
  GEN_ENTER(0xab51d0u, 0u, 0u, 0u, 0u);
  uint * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 * puVar7;
  int * piVar8;
  char cVar9;
  char * pcVar10;
  int iVar11;
  uint local_10;
  uint local_8;
  
  REFG(int * PTR32, 0x14bcc6c) = (int *)F_00406b90(0x1c,0,0);
  if (REFG(int * PTR32, 0x14bcc6c) == (int *)0x0) {
    REFG(int * PTR32, 0x14bcc6c) = (int *)0x0;
  }
  else {
    *REFG(int * PTR32, 0x14bcc6c) = 0;
    REFG(int * PTR32, 0x14bcc6c)[1] = 0;
    REFG(int * PTR32, 0x14bcc6c)[2] = 0;
    REFG(int * PTR32, 0x14bcc6c)[3] = 0;
  }
  uVar4 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75);
  F_00aba8d0(REFG(int * PTR32, 0x14bcc6c),uVar4);
  local_8 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75,local_8);
      if ((uVar5 == 0) || (puVar1 = *(uint * PTR32 *)(uVar5 + 4), puVar1 == (uint *)0x0)) {
LAB_00ab52a3: ;
        REFG(int * PTR32, 0x14bcc6c)[1] = REFG(int * PTR32, 0x14bcc6c)[1] + -1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00ab52a3;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + local_8 * 8))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + 4 + local_8 * 8))) = puVar1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar4);
  }
  F_00aba940(REFG(int * PTR32, 0x14bcc6c));
  uVar5 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60);
  piVar8 = REFG(int * PTR32, 0x14bcc6c);
  REFG(int * PTR32, 0x14bcc6c)[3] = uVar5;
  puVar7 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 8),0,0);
  puVar2 = puVar7;
  uVar4 = uVar5;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    while (-1 < (int)(uVar4 - 1)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      uVar4 = uVar4 - 1;
    }
  }
  piVar8[2] = (int)puVar7;
  local_10 = 0;
  if (uVar5 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60,local_10);
      if ((uVar4 == 0) || (puVar1 = *(uint * PTR32 *)(uVar4 + 4), puVar1 == (uint *)0x0)) {
LAB_00ab53b0: ;
        REFG(int * PTR32, 0x14bcc6c)[3] = REFG(int * PTR32, 0x14bcc6c)[3] + -1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00ab53b0;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((local_8 + REFG(int * PTR32, 0x14bcc6c)[2]))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((REFG(int * PTR32, 0x14bcc6c)[2] + 4 + local_8))) = puVar1;
        local_8 = local_8 + 8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < uVar5);
  }
  F_00abaaa0(REFG(int * PTR32, 0x14bcc6c) + 2);
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2c,0);
  piVar3 = REFG(int * PTR32, 0x14bcc6c);
  piVar8 = (int *)0x0;
  if (uVar4 != 0) {
    piVar8 = *(int * PTR32 *)(uVar4 + 4);
  }
  REFG(int * PTR32, 0x14bcc6c)[4] = *piVar8;
  piVar3[5] = piVar8[1];
  uVar4 = piVar8[2];
  piVar3[6] = uVar4;
  return uVar4;
}

/* ref: FUN_00ab5410 */
unsigned int F_00ab5410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ab0f60(this,param_1);
  F_00ab0fb0(this,param_2);
  return 0;
}

/* ref: FUN_00ab5430 */
byte F_00ab5430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_1);
  if ((uVar3 != 0) && (iVar2 = *(int *)(uVar3 + 4), iVar2 != 0)) {
    uVar1 = *(ushort *)(iVar2 + 0x1c);
    if (*(char *)(iVar2 + 0x22) == '\0') {
      if ((-1 < (short)uVar1) && (uVar1 < 0x14)) {
        return *((byte *)GEN_TOP(((int)this + (param_2 & 0xff) + ((short)uVar1 + 0x50) * 0x20)));
      }
    }
    else if ((-1 < (short)uVar1) && (uVar1 < 0xa0)) {
      return *((byte *)GEN_TOP(((int)this + (param_2 & 0xff) + (short)uVar1 * 0x10)));
    }
  }
  return 1;
}

/* ref: FUN_00ab54c0 */
uint F_00ab54c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab54c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  
  if (*(char *)((int)this + 0xc80) == '\0') {
    uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_3);
    in_EAX = 0;
    if ((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), in_EAX = 0, iVar1 != 0)) {
      bVar2 = F_00ab10a0(this,(uint)*(ushort *)(iVar1 + 0x1c),param_2,
                           (uint)*(byte *)(iVar1 + 0x22));
      in_EAX = CONCAT31(extraout_var,bVar2);
      if ((bVar2 == 0) && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
        puVar4 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
        in_EAX = F_00ab0ff0(this,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5570 */
uint F_00ab5570(unsigned int gen_a0)
{
  GEN_ENTER(0xab5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  puVar2 = (uint *)((int)this + 0x80);
  local_8 = 3;
  do {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x750,0x10)));
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_006ae690(this_00);
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  return uVar1;
}

/* ref: FUN_00ab5620 */
uint F_00ab5620(unsigned int gen_a0)
{
  GEN_ENTER(0xab5620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,(float)(float10)0);
  uVar2 = F_004e7cc0(uVar1,(float)(float10)0);
  return uVar2;
}

/* ref: Global::ReadInitZone */
uint F_00ab56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int in_ecx;
  undefined4 uVar2;
  int * piVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (*(int * PTR32 *)(gen_frame + 0x3c)) = REFG(int * PTR32, 0x1379694);
  if ((*(byte *)(param_1 + 0xd) & 6) != 0) {
    REFG(undefined1, 0x1338ad4) = 0;
  }
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3,0,0,1);
  (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)this + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x3;
  do {
    ((code *)*(gen_code32 *)(*(int *)*(*(int * PTR32 *)(gen_frame + 0x38)) + 4))((int *)*(*(int * PTR32 *)(gen_frame + 0x38)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
    piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + -1);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  } while (piVar3 != (int *)0x0);
  if ((*(int * PTR32 *)(gen_frame + 0x3c)) != (int *)0x0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x7c);
      if (puVar4 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
        *(undefined4 *)((int)this + 0x7c) = 0;
      }
    }
    *(int *)((int)this + 0x7c) = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    iVar1 = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 200) != 0)) {
      F_006b2f70((undefined *)(iVar1 + 0x90));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x3c)),0);
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)this + 0x80);
    (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x3c)) + 0x5ac;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(int *)(gen_frame + 0x30)) = 3;
    do {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x34));
      (*(int *)(gen_frame + 0x28)) = iVar1;
      if (iVar1 != 0 || (*(int * PTR32 *)(gen_frame + 0x34))[1] != 0) {
        (*(int *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x34))[1];
        in_ecx = *(*(int * PTR32 *)(gen_frame + 0x38));
        (*(int *)(gen_frame + 0x0)) = iVar1;
        F_006ac620(in_ecx,(gen_frame + 0x4c),&(*(int *)(gen_frame + 0x0)));
        F_0068bd00(REFG(void * PTR32, 0x1371294),*(*(int * PTR32 *)(gen_frame + 0x38)));
        F_00690620((undefined *)*(*(int * PTR32 *)(gen_frame + 0x38)));
        puVar4 = (undefined4 *)F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x3c)));
        iVar1 = *(*(int * PTR32 *)(gen_frame + 0x38));
        *(undefined4 *)(iVar1 + 0x30) = *puVar4;
        *(undefined4 *)(iVar1 + 0x34) = puVar4[1];
        *(undefined4 *)(iVar1 + 0x38) = puVar4[2];
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
      }
      (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 0x1e8;
      iVar1 = (*(int *)(gen_frame + 0x30)) + -1;
      (*(int *)(gen_frame + 0x30)) = iVar1;
    } while (iVar1 != 0);
  }
  F_00a35550();
  F_00a4a760(&REFG(undefined, 0x14a7360),0x23,1);
  F_005d4d80((uint)*(ushort *)(param_1 + 2));
  F_005d4fa0(&REFG(undefined, 0x1379c6c),(uint)*(ushort *)(param_1 + 0xe),(uint)*(ushort *)(param_1 + 0x10),
               (uint)*(ushort *)(param_1 + 0x12),(uint)*(ushort *)(param_1 + 0x14));
  F_005d4fe0(&REFG(undefined, 0x1379c6c),(uint)*(ushort *)(param_1 + 2),*(undefined4 *)(param_1 + 4),0,1,1);
  F_00b7c250(&REFG(undefined, 0x133e5c0),(uint)*(byte *)(param_1 + 0xc),(uint)*(ushort *)(param_1 + 2));
  F_00a375a0(&REFG(undefined, 0x14a4230));
  F_00a3a050();
  F_00a37ab0(&REFG(undefined, 0x14a4230));
  (*(int *)(gen_frame + 0x0)) = *(int *)(param_1 + 0x18);
  (*(int *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_1 + 0x20);
  F_005f4a00(&(*(int *)(gen_frame + 0x0)));
  uVar2 = *(undefined4 *)(param_1 + 8);
  (*(float *)(gen_frame + 0x10)) = *(float *)(param_1 + 0x18);
  (*(float *)(gen_frame + 0x14)) = *(float *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar7;
  F_00b70d10(&REFG(undefined4, 0x1375b90),0);
  if (REFG(int, 0x1375bbc) == -1) {
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
  }
  F_00b6ae80((*(int * PTR32 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)1);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)1 + (float10)(*(float *)(gen_frame + 0x14)));
  F_00b6ae50((*(int * PTR32 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)));
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  pvVar5 = (undefined *)F_006b8c00();
  F_006ebf80(pvVar5,uVar6);
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  uVar7 = 0x1c;
  uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  pvVar5 = (undefined *)F_00763050(uVar6,uVar7);
  if (pvVar5 != (undefined *)0x0) {
    F_008b8590(pvVar5);
  }
  F_00a6d810(&REFG(undefined, 0x14ab380),4);
  *(byte *)((int)this + 0x30) = *(byte *)(param_1 + 0xd) & 1;
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(int, 0x14bcc68) + 0xc0) = 0;
    *(undefined2 *)(iVar1 + 0xc4) = 0;
  }
  (*(int *)(gen_frame + 0x30)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  F_004e7cc0((*(int *)(gen_frame + 0x30)),(float)(float10)0);
  *(undefined1 *)((int)this + 0x28) = 1;
  F_005f3240();
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)this = 6;
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
  *(undefined4 *)((int)this + 4) = 0;
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x7c))((*(int * PTR32 *)(gen_frame + 0x34)),5,0,param_1);
  uVar6 = F_00a6b4f0(&REFG(undefined, 0x14ab584),0xe0000000);
  return uVar6;
}

/* ref: FUN_00ab5a60 */
uint F_00ab5a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar2 = F_00a7d290(0x2d7,REFG(int * PTR32, 0x1379694),0,0,0,REFG(float, 0x10916ec));
  if ((((param_1 == 4) || (param_1 == 7)) && (uVar2 = *(uint *)((int)this + 0x68), (int)uVar2 < 3))
     && (uVar2 != 0)) {
    F_005f3240();
    uVar2 = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if ((char)param_2 == '\x01') {
    if ((param_1 == 3) && (piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,0);
      return uVar2;
    }
  }
  else {
    uVar2 = *(uint *)this;
    if (((uVar2 != 5) && (uVar2 != 6)) && (uVar2 != 1)) {
      *(int *)((int)this + 0x24) = param_1;
      *(undefined1 *)((int)this + 0x20) = 1;
      return uVar2;
    }
    uVar2 = F_00ab1390(this,param_1);
  }
  return uVar2;
}

/* ref: FUN_00ab5b10 */
uint F_00ab5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * this_00;
  char cVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  cVar1 = REFG(char, 0x14a737d);
  this_00 = REFG(int * PTR32, 0x1379694);
  if (*(int *)this == 1) {
    if (param_1 == 0) {
      if ((((*(int *)((int)this + 0xc) != 0) && (REFG(int * PTR32, 0x1379694) != (int *)0x0)) &&
          ((char)REFG(int * PTR32, 0x1379694)[0xb82] != '\0')) &&
         ((uVar2 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x86)))), uVar2 != 0 &&
          (*(char *)(uVar2 + 0x2e) == '\0')))) {
        F_00aab790(this_00,0,0,0,0,1);
        F_00a51200(4,0,0,0,0);
        *(undefined4 *)this = 2;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
        return uVar2;
      }
      *(undefined4 *)this = 3;
      in_EAX = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    }
    else {
      if (param_1 != 1) {
        *(undefined4 *)this = 0;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
        return uVar2;
      }
      in_EAX = F_00a7d290(0x2d7,REFG(int * PTR32, 0x1379694),0,0,0,REFG(float, 0x10916ec));
      if (cVar1 != '\x01') {
        uVar2 = *(uint *)this;
        if (((uVar2 != 5) && (uVar2 != 6)) && (uVar2 != 1)) {
          *(undefined1 *)((int)this + 0x20) = 1;
          *(undefined4 *)((int)this + 0x24) = 3;
          return uVar2;
        }
        uVar2 = F_00ab1390(this,3);
        return uVar2;
      }
      if (this_00 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,0);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5c50 */
uint F_00ab5c50(unsigned int gen_a0)
{
  GEN_ENTER(0xab5c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x28,(uint)REFG(undefined1, 0x14ab29e));
  this_00 = REFG(void * PTR32, 0x1379694);
  F_00ab4370(0x70,REFG(void * PTR32, 0x1379694),REFG(void * PTR32, 0x1379694),0,0);
  ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0x1e,1);
  puVar2 = (undefined4 *)F_00a5feb0(this_00);
  *(undefined4 *)((int)this + 0x10) = *puVar2;
  *(undefined4 *)((int)this + 0x14) = puVar2[1];
  *(undefined4 *)((int)this + 0x18) = puVar2[2];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1);
  *(undefined4 *)this = 4;
  uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  return uVar3;
}

/* ref: FUN_00ab5cf0 */
uint F_00ab5cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_00ab4370(0x70,param_1,param_1,0,0);
  bVar1 = F_00a9f620(param_1);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    puVar3 = (undefined4 *)F_00a5feb0(param_1);
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    *(undefined4 *)((int)this + 0x14) = puVar3[1];
    *(undefined4 *)((int)this + 0x18) = puVar3[2];
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 0x20) = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    *(undefined4 *)this = 4;
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar4;
}

/* ref: FUN_00ab5d80 */
uint F_00ab5d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    return in_EAX;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,10,0);
  ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,9,0);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 4: ;
  case 0xe: ;
    uVar4 = 0x6e;
    break;
  default: ;
    goto switchD_00ab5dbf_caseD_5;
  case 7: ;
  case 8: ;
    uVar4 = 0x6f;
  }
  F_00ab4370(uVar4,param_1,param_1,0,0);
switchD_00ab5dbf_caseD_5: ;
  if ((param_2 == 5) || (param_2 == 8)) {
    F_00aa2c50(param_1,0,0,0);
    F_00aa4270(param_1,0x4d,0,0);
    F_00a7d290(0x230,param_1,0,0,0,REFG(float, 0x10916ec));
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 3: ;
  case 9: ;
  case 10: ;
  case 0xc: ;
  case 0xd: ;
  case 0x10: ;
    bVar1 = F_00a9f620(param_1);
    if (bVar1 == 0) goto switchD_00ab5e32_caseD_4;
  default: ;
    F_00aa0980(param_1,(float)(float10)1,0);
    iVar3 = 0;
    break;
  case 4: ;
  case 5: ;
  case 7: ;
  case 8: ;
  case 0xe: ;
switchD_00ab5e32_caseD_4: ;
    F_00aa0980(param_1,(float)(float10)0,0);
    iVar3 = REFG(float, 0x1087f04);
  }
  param_1[0xbb2] = iVar3;
  bVar1 = F_00a9f620(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00a696f0(&REFG(undefined, 0x14ab380));
    *(undefined4 *)this = 0;
    uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar2;
}

/* ref: FUN_00ab5ef0 */
uint F_00ab5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab5ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  this = (undefined *)F_006b8c00();
  bVar2 = F_006d7160(this);
  uVar1 = (*(undefined4 *)&gen_args[1]);
  bVar7 = (*(int *)&gen_args[0]) != 0xb;
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,(*(undefined4 *)&gen_args[1]));
  if (uVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(uVar4 + 4);
  }
  uVar5 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = *(uint *)(uVar5 + 4);
  }
  if ((((iVar6 == 0) || (uVar4 == 0)) || (*(int *)(iVar6 + 0x10) != *(int *)(uVar4 + 0x10))) &&
     (bVar7 && bVar2 != 1)) {
    iVar6 = *piVar3;
    uVar4 = F_004142d0(&(*(int *)&gen_args[0]),0xffffffff);
    uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0xf4))(piVar3,uVar1,1,1,uVar4);
  }
  return uVar4;
}

/* ref: FUN_00ab5fa0 */
byte F_00ab5fa0(void)
{
  GEN_ENTER(0xab5fa0u, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x2a)));
    if (cVar1 == '\0') {
      return 1;
    }
    return cVar1 == '\x01';
  }
  return 0;
}

/* ref: FUN_00ab5fe0 */
unsigned int F_00ab5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xab5fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (REFG(char, 0x14a7373) != '\x01') {
    bVar2 = F_00ab1680(this,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(char *)(gen_frame + 0x1b)));
    if ((bVar2 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xc)), uVar5 = (*(undefined4 *)(gen_frame + 0x10)), (*(int *)(gen_frame + 0x14)) == 0)) {
      uVar3 = F_00ab1340();
      (*(char *)(gen_frame + 0x1b)) = '\x01';
      if (uVar3 == 0) {
        if (1 < *(int *)((int)this + 0x68)) {
          return 0;
        }
        if (*(int *)((int)this + 0x68) == 0) {
          return 0;
        }
        F_005f3240();
        *(undefined4 *)((int)this + 0x68) = 0;
        *(undefined4 *)((int)this + 0x6c) = 0;
        *(undefined1 *)((int)this + 0x70) = 0;
        *(undefined4 *)((int)this + 0x74) = 0;
        *(undefined4 *)((int)this + 0x78) = 0;
        return 0;
      }
      uVar4 = (uint)*(ushort *)(uVar3 + 0x86);
      uVar5 = *(undefined4 *)(uVar3 + 0x8c);
    }
    uVar3 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,uVar4 & 0xffff);
    if (((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), iVar1 != 0)) && ((*(char *)(gen_frame + 0x1b)) == '\x01')) {
      F_00aaf740(this,1,(*(uint *)(iVar1 + 4) & 0xffffff) + iVar1 + 4,0x28,uVar5,uVar4 & 0xffff);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab60c0 */
uint F_00ab60c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab60c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,1,0x5a,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x5a,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2);
  F_00a6e120(&REFG(undefined, 0x14a9e40),*(undefined4 *)&REFG(undefined2, 0x1379c78),*(undefined4 *)((int)this + 8));
  if ((*(char *)((int)this + 0x30) != '\0') && (REFG(char, 0x1379c7c) == '\x05')) {
    F_00a69c30(&REFG(undefined, 0x14a9e40));
  }
  if ((*(char *)((int)this + 0x28) != '\0') &&
     (iVar3 = (*(char *)((int)this + 0x30) != '\0') + 2, REFG(int, 0x14b4eb4) < iVar3)) {
    REFG(int, 0x14b4eb4) = iVar3;
  }
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,(float)(float10)1);
  uVar4 = F_004e7cc0(uVar1,(float)(float10)1);
  return uVar4;
}

/* ref: FUN_00ab6180 */
unsigned int F_00ab6180(unsigned int gen_a0)
{
  GEN_ENTER(0xab6180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
    uVar3 = F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 4);
    uVar3 = F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar3 + 8);
    bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),(int)this + 4,&(*(undefined4 *)(gen_frame + 0x0)),2);
    *(byte *)this = bVar1;
    F_00ab1960();
  }
  return 0;
}

/* ref: FUN_00ab6210 */
unsigned int F_00ab6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab6210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x4c) < 10) {
    uVar1 = F_00ab4aa0(param_1);
    *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x4c) * 4 + 0x24))) = uVar1;
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  }
  return 0;
}

/* ref: FUN_00ab6240 */
uint F_00ab6240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab6240u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 1;
    F_0042b630(&REFG(undefined, 0x14bcdc0));
    F_00c47de6(((code *)REFP(0x107c6b0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 2;
    F_0042b630(&REFG(char * PTR32, 0x14bcd68));
    F_00c47de6(((code *)REFP(0x107c6a0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 4;
    F_0042b630(&REFG(char * PTR32, 0x14bcd10));
    F_00c47de6(((code *)REFP(0x107c690)));
  }
  iVar2 = param_3;
  if (param_3 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *(int *)(uVar1 + 4);
      }
      if (iVar2 != 0) goto LAB_00ab631a;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
LAB_00ab631a: ;
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  if ((((char)param_2 == '\0') && (uVar1 != 1)) && (uVar1 != 5)) {
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar3 != (int *)0x0) {
      F_0042e430(&REFG(undefined, 0x14bcdc0),(*(uint *)(iVar2 + 0xc) & 0xffffff) + iVar2 + 0xc);
      if (999999 < param_1) {
        if (*REFG(char * PTR32, 0x14bcd68) == '\0') {
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 9;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
          uVar1 = F_0043bd00(pvVar4,uVar6,uVar7,uVar8);
          F_0042e430(&REFG(char * PTR32, 0x14bcd68),uVar1);
        }
        F_0042e360(&REFG(undefined, 0x14bcdc0),&REFG(char * PTR32, 0x14bcd68));
      }
      if (*REFG(char * PTR32, 0x14bcd10) == '\0') {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
        uVar1 = ((code *)*(gen_code32 *)(*piVar5 + 0x20))(piVar5,((undefined1 *)(gen_frame + 0xb4)),"<color(stackcolor)>");
        F_0042ccf0(&REFG(char * PTR32, 0x14bcd10),uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      }
      uVar1 = (uint)*(byte *)(iVar2 + 0xa3);
      uVar6 = 6;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
      uVar1 = F_00460bd0(pvVar4,uVar6,uVar1);
      if (uVar1 != 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),uVar1,REFG(undefined4, 0x108cc50));
        puVar9 = &REFG(char * PTR32, 0x14bcd10);
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x14bcdc0));
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0x60)),uVar1,puVar9);
        F_0042ccf0(&REFG(undefined, 0x14bcdc0),uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
        uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0));
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar1;
      }
    }
  }
  else {
    uVar1 = F_00463610(1,param_1,0);
    F_0042e430(&REFG(undefined, 0x14bcdc0),uVar1);
  }
  uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00ab64e0 */
uint F_00ab64e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab64e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14bce6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce6c) = *(uint *)&REFG(undefined, 0x14bce6c) | 1;
    F_0042b630(&REFG(undefined, 0x14bce18));
    F_00c47de6(((code *)REFP(0x107c6c0)));
  }
  iVar3 = param_3;
  if (param_3 == 0) {
    uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52,param_1 + -2000000);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(uVar2 + 4);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  if ((((char)param_2 == '\0') && (uVar2 != 1)) && (uVar2 != 5)) {
    uVar2 = (*(uint *)(iVar3 + 0xc) & 0xffffff) + iVar3 + 0xc;
  }
  else {
    uVar2 = F_00463610(1,param_1,0);
  }
  F_0042e430(&REFG(undefined, 0x14bce18),uVar2);
  uVar2 = F_0042a990(&REFG(undefined, 0x14bce18));
  return uVar2;
}

/* ref: FUN_00ab65a0 */
uint F_00ab65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab65a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *(int *)(uVar1 + 4);
      }
      if (iVar2 != 0) goto LAB_00ab65e4;
    }
    uVar1 = 0;
  }
  else {
LAB_00ab65e4: ;
    uVar1 = (uint)*(ushort *)(iVar2 + 0x7c);
    if (999999 < param_1) {
      return uVar1 + 1000000;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6600 */
byte F_00ab6600(unsigned int gen_a0)
{
  GEN_ENTER(0xab6600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x139);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x138,uVar3);
      if (((uVar2 != 0) && (*(ushort * PTR32 *)(uVar2 + 4) != (ushort *)0x0)) &&
         (**(ushort * PTR32 *)(uVar2 + 4) == param_1)) {
        return (byte)uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00ab6670 */
uint F_00ab6670(unsigned int gen_a0)
{
  GEN_ENTER(0xab6670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (7 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0x25c) = 0;
    *(undefined2 *)(uVar1 + 0x240) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0x246) = 0;
    *(undefined4 *)(uVar1 + 0x248) = 0;
    *(undefined4 *)(uVar1 + 0x260) = 0;
    *(undefined4 *)(uVar1 + 0x264) = 0;
    *(undefined4 *)(uVar1 + 0x268) = 0;
    *(undefined4 *)(uVar1 + 0x270) = 0;
    *(undefined4 *)(uVar1 + 0x274) = 0;
    if (*(char *)(uVar1 + 0x25c) != '\0') {
      *(undefined4 *)(uVar1 + 0x260) = 0;
      *(undefined4 *)(uVar1 + 0x264) = 0;
      *(undefined4 *)(uVar1 + 0x268) = 0;
      *(undefined4 *)(uVar1 + 0x270) = 0;
      *(undefined4 *)(uVar1 + 0x274) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6700 */
uint F_00ab6700(void)
{
  GEN_ENTER(0xab6700u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (7 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x278) != 1)) {
    *(undefined4 *)(uVar1 + 0x23c) = 0;
    *(undefined1 *)(uVar1 + 0x246) = 0;
    *(undefined4 *)(uVar1 + 0x248) = 0;
    *(undefined1 *)(uVar1 + 0x25c) = 0;
    *(undefined4 *)(uVar1 + 0x278) = 0;
    *(undefined2 *)(uVar1 + 0x240) = 0;
    *(undefined2 *)(uVar1 + 0x242) = 0;
    *(undefined4 *)(uVar1 + 0x260) = 0;
    *(undefined4 *)(uVar1 + 0x264) = 0;
    *(undefined4 *)(uVar1 + 0x268) = 0;
    *(undefined4 *)(uVar1 + 0x270) = 0;
    *(undefined4 *)(uVar1 + 0x274) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6780 */
uint F_00ab6780(unsigned int gen_a0)
{
  GEN_ENTER(0xab6780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (6 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0x20c) = 0;
    *(undefined2 *)(uVar1 + 0x1f0) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0x1f6) = 0;
    *(undefined4 *)(uVar1 + 0x1f8) = 0;
    *(undefined4 *)(uVar1 + 0x210) = 0;
    *(undefined4 *)(uVar1 + 0x214) = 0;
    *(undefined4 *)(uVar1 + 0x218) = 0;
    *(undefined4 *)(uVar1 + 0x220) = 0;
    *(undefined4 *)(uVar1 + 0x224) = 0;
    if (*(char *)(uVar1 + 0x20c) != '\0') {
      *(undefined4 *)(uVar1 + 0x210) = 0;
      *(undefined4 *)(uVar1 + 0x214) = 0;
      *(undefined4 *)(uVar1 + 0x218) = 0;
      *(undefined4 *)(uVar1 + 0x220) = 0;
      *(undefined4 *)(uVar1 + 0x224) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6810 */
uint F_00ab6810(void)
{
  GEN_ENTER(0xab6810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (6 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x228) != 1)) {
    *(undefined4 *)(uVar1 + 0x1ec) = 0;
    *(undefined1 *)(uVar1 + 0x1f6) = 0;
    *(undefined4 *)(uVar1 + 0x1f8) = 0;
    *(undefined1 *)(uVar1 + 0x20c) = 0;
    *(undefined4 *)(uVar1 + 0x228) = 0;
    *(undefined2 *)(uVar1 + 0x1f0) = 0;
    *(undefined2 *)(uVar1 + 0x1f2) = 0;
    *(undefined4 *)(uVar1 + 0x210) = 0;
    *(undefined4 *)(uVar1 + 0x214) = 0;
    *(undefined4 *)(uVar1 + 0x218) = 0;
    *(undefined4 *)(uVar1 + 0x220) = 0;
    *(undefined4 *)(uVar1 + 0x224) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6890 */
uint F_00ab6890(unsigned int gen_a0)
{
  GEN_ENTER(0xab6890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (3 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0x11c) = 0;
    *(undefined2 *)(uVar1 + 0x100) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0x106) = 0;
    *(undefined4 *)(uVar1 + 0x108) = 0;
    *(undefined4 *)(uVar1 + 0x120) = 0;
    *(undefined4 *)(uVar1 + 0x124) = 0;
    *(undefined4 *)(uVar1 + 0x128) = 0;
    *(undefined4 *)(uVar1 + 0x130) = 0;
    *(undefined4 *)(uVar1 + 0x134) = 0;
    if (*(char *)(uVar1 + 0x11c) != '\0') {
      *(undefined4 *)(uVar1 + 0x120) = 0;
      *(undefined4 *)(uVar1 + 0x124) = 0;
      *(undefined4 *)(uVar1 + 0x128) = 0;
      *(undefined4 *)(uVar1 + 0x130) = 0;
      *(undefined4 *)(uVar1 + 0x134) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6920 */
uint F_00ab6920(void)
{
  GEN_ENTER(0xab6920u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x14bcc68);
  uVar1 = REFG(float, 0x10a509c);
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(undefined4, 0x14bcc68) + 0xb8) = 0;
    *(undefined4 *)(uVar2 + 0xbc) = uVar1;
    *(undefined1 *)(uVar2 + 0xb4) = 0;
    uVar2 = REFG(undefined4, 0x14bcc68);
    if (((REFG(undefined4, 0x14bcc68) != 0) && (3 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
       (uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar2 + 0x138) != 1)) {
      *(undefined4 *)(uVar2 + 0xfc) = 0;
      *(undefined1 *)(uVar2 + 0x106) = 0;
      *(undefined4 *)(uVar2 + 0x108) = 0;
      *(undefined1 *)(uVar2 + 0x11c) = 0;
      *(undefined4 *)(uVar2 + 0x138) = 0;
      *(undefined2 *)(uVar2 + 0x100) = 0;
      *(undefined2 *)(uVar2 + 0x102) = 0;
      *(undefined4 *)(uVar2 + 0x120) = 0;
      *(undefined4 *)(uVar2 + 0x124) = 0;
      *(undefined4 *)(uVar2 + 0x128) = 0;
      *(undefined4 *)(uVar2 + 0x130) = 0;
      *(undefined4 *)(uVar2 + 0x134) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab69c0 */
uint F_00ab69c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab69c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (4 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined2 *)(uVar1 + 0x150) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
    if (*(char *)(uVar1 + 0x16c) != '\0') {
      *(undefined4 *)(uVar1 + 0x170) = 0;
      *(undefined4 *)(uVar1 + 0x174) = 0;
      *(undefined4 *)(uVar1 + 0x178) = 0;
      *(undefined4 *)(uVar1 + 0x180) = 0;
      *(undefined4 *)(uVar1 + 0x184) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6a50 */
uint F_00ab6a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab6a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (4 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x188) != 1)) {
    *(undefined4 *)(uVar1 + 0x14c) = 0;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined4 *)(uVar1 + 0x188) = 0;
    *(undefined2 *)(uVar1 + 0x150) = 0;
    *(undefined2 *)(uVar1 + 0x152) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6ad0 */
uint F_00ab6ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xab6ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (2 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0xcc) = 0;
    *(undefined2 *)(uVar1 + 0xb0) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0xb6) = 0;
    *(undefined4 *)(uVar1 + 0xb8) = 0;
    *(undefined4 *)(uVar1 + 0xd0) = 0;
    *(undefined4 *)(uVar1 + 0xd4) = 0;
    *(undefined4 *)(uVar1 + 0xd8) = 0;
    *(undefined4 *)(uVar1 + 0xe0) = 0;
    *(undefined4 *)(uVar1 + 0xe4) = 0;
    if (*(char *)(uVar1 + 0xcc) != '\0') {
      *(undefined4 *)(uVar1 + 0xd0) = 0;
      *(undefined4 *)(uVar1 + 0xd4) = 0;
      *(undefined4 *)(uVar1 + 0xd8) = 0;
      *(undefined4 *)(uVar1 + 0xe0) = 0;
      *(undefined4 *)(uVar1 + 0xe4) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6b60 */
uint F_00ab6b60(void)
{
  GEN_ENTER(0xab6b60u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x14bcc68);
  uVar1 = REFG(float, 0x10a509c);
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(undefined4, 0x14bcc68) + 0xb8) = 0;
    *(undefined4 *)(uVar2 + 0xbc) = uVar1;
    *(undefined1 *)(uVar2 + 0xb4) = 0;
    uVar2 = REFG(undefined4, 0x14bcc68);
    if (((REFG(undefined4, 0x14bcc68) != 0) && (2 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
       (uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar2 + 0xe8) != 1)) {
      *(undefined4 *)(uVar2 + 0xac) = 0;
      *(undefined1 *)(uVar2 + 0xb6) = 0;
      *(undefined4 *)(uVar2 + 0xb8) = 0;
      *(undefined1 *)(uVar2 + 0xcc) = 0;
      *(undefined4 *)(uVar2 + 0xe8) = 0;
      *(undefined2 *)(uVar2 + 0xb0) = 0;
      *(undefined2 *)(uVar2 + 0xb2) = 0;
      *(undefined4 *)(uVar2 + 0xd0) = 0;
      *(undefined4 *)(uVar2 + 0xd4) = 0;
      *(undefined4 *)(uVar2 + 0xd8) = 0;
      *(undefined4 *)(uVar2 + 0xe0) = 0;
      *(undefined4 *)(uVar2 + 0xe4) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab6c00 */
uint F_00ab6c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab6c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar2 + 0x66) = (undefined1)param_6;
    *(undefined1 *)(uVar2 + 0x7c) = (undefined1)param_2;
    *(undefined4 *)(uVar2 + 0x68) = 0;
    *(undefined2 *)(uVar2 + 0x60) = (undefined2)param_1;
    *(undefined4 *)(uVar2 + 0x80) = 0;
    *(undefined4 *)(uVar2 + 0x84) = 0;
    *(undefined4 *)(uVar2 + 0x88) = 0;
    *(undefined4 *)(uVar2 + 0x90) = 0;
    *(undefined4 *)(uVar2 + 0x94) = 0;
    if (*(char *)(uVar2 + 0x7c) != '\0') {
      *(undefined4 *)(uVar2 + 0x80) = param_3;
      *(undefined4 *)(uVar2 + 0x84) = param_4;
      *(undefined4 *)(uVar2 + 0x88) = param_5;
      *(undefined4 *)(uVar2 + 0x90) = 0;
      *(undefined4 *)(uVar2 + 0x94) = 0;
    }
    *(undefined1 *)(uVar1 + 0xc5) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6ca0 */
uint F_00ab6ca0(void)
{
  GEN_ENTER(0xab6ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x98) != 1)) {
    *(undefined4 *)(uVar1 + 0x5c) = 0;
    *(undefined1 *)(uVar1 + 0x66) = 0;
    *(undefined4 *)(uVar1 + 0x68) = 0;
    *(undefined1 *)(uVar1 + 0x7c) = 0;
    *(undefined4 *)(uVar1 + 0x98) = 0;
    *(undefined2 *)(uVar1 + 0x60) = 0;
    *(undefined2 *)(uVar1 + 0x62) = 0;
    *(undefined4 *)(uVar1 + 0x80) = 0;
    *(undefined4 *)(uVar1 + 0x84) = 0;
    *(undefined4 *)(uVar1 + 0x88) = 0;
    *(undefined4 *)(uVar1 + 0x90) = 0;
    *(undefined4 *)(uVar1 + 0x94) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6d10 */
uint F_00ab6d10(void)
{
  GEN_ENTER(0xab6d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x98) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6d30 */
uint F_00ab6d30(void)
{
  GEN_ENTER(0xab6d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x98) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab6d50 */
uint F_00ab6d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab6d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined2 *)(uVar2 + 0x10) = (undefined2)param_1;
    *(undefined1 *)(uVar2 + 0x16) = (undefined1)param_6;
    *(undefined1 *)(uVar2 + 0x2c) = (undefined1)param_2;
    *(undefined4 *)(uVar2 + 0x18) = 0;
    *(undefined4 *)(uVar2 + 0x30) = 0;
    *(undefined4 *)(uVar2 + 0x34) = 0;
    *(undefined4 *)(uVar2 + 0x38) = 0;
    *(undefined4 *)(uVar2 + 0x40) = 0;
    *(undefined4 *)(uVar2 + 0x44) = 0;
    if (*(char *)(uVar2 + 0x2c) != '\0') {
      *(undefined4 *)(uVar2 + 0x30) = param_3;
      *(undefined4 *)(uVar2 + 0x34) = param_4;
      *(undefined4 *)(uVar2 + 0x38) = param_5;
      *(undefined4 *)(uVar2 + 0x40) = 0;
      *(undefined4 *)(uVar2 + 0x44) = 0;
    }
    *(undefined1 *)(uVar1 + 0xc5) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6dc0 */
uint F_00ab6dc0(void)
{
  GEN_ENTER(0xab6dc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x48) != 1)) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined1 *)(uVar1 + 0x16) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined1 *)(uVar1 + 0x2c) = 0;
    *(undefined4 *)(uVar1 + 0x48) = 0;
    *(undefined2 *)(uVar1 + 0x10) = 0;
    *(undefined2 *)(uVar1 + 0x12) = 0;
    *(undefined4 *)(uVar1 + 0x30) = 0;
    *(undefined4 *)(uVar1 + 0x34) = 0;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    *(undefined4 *)(uVar1 + 0x40) = 0;
    *(undefined4 *)(uVar1 + 0x44) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e10 */
uint F_00ab6e10(void)
{
  GEN_ENTER(0xab6e10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x48) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e30 */
uint F_00ab6e30(void)
{
  GEN_ENTER(0xab6e30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x48) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab70d0 */
byte F_00ab70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x1c);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)((int)this + 0x20)) {
      return 0;
    }
    if (*psVar1 == (short)param_1) break;
    psVar1 = psVar1 + 8;
  }
  return 1;
}

/* ref: FUN_00ab7100 */
unsigned int F_00ab7100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab7100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x1c);
  if (psVar1 != *(short * PTR32 *)((int)this + 0x20)) {
    do {
      if (*psVar1 == (short)param_1) {
        *(undefined1 *)(psVar1 + 6) = 1;
      }
      psVar1 = psVar1 + 8;
    } while (psVar1 != *(short * PTR32 *)((int)this + 0x20));
  }
  return 0;
}

/* ref: FUN_00ab7140 */
byte F_00ab7140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab7140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  short * psVar11;
  undefined4 * puVar12;
  byte bVar13;
  int * piVar14;
  
  if ((short)(*(uint *)&gen_args[1]) == 1) {
    puVar12 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    (*(int *)(gen_frame + 0x14)) = 2;
    do {
      if (puVar12[-9] - 1 < 4) {
        if ((*(undefined4 * PTR32 *)&gen_args[5]) == (undefined4 *)0x0) {
          (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),*(undefined1 *)(puVar12 + -6));
          pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),puVar12[-7],(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
          if (pfVar5 == (float *)0x0) {
            uVar6 = 0;
          }
          else {
            (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
            uVar6 = (*(uint *)(gen_frame + 0x8));
          }
        }
        else {
          uVar6 = *(*(undefined4 * PTR32 *)&gen_args[5]);
        }
        puVar12[-9] = 5;
        *(undefined1 *)(puVar12 + -3) = (undefined1)(*(uint *)&gen_args[4]);
        puVar12[-2] = uVar6;
        puVar12[-1] = 0;
        *puVar12 = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      }
      puVar12 = puVar12 + 0x10;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
    } while ((*(int *)(gen_frame + 0x14)) != 0);
    return 1;
  }
  iVar7 = 0;
  psVar11 = ((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  do {
    if ((*(int *)(psVar11 + -2) - 1U < 4) && (*psVar11 == (short)(*(uint *)&gen_args[1]))) {
      *((undefined1 *)GEN_TOP((iVar7 * 0x40 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (undefined1)(*(undefined4 *)&gen_args[3]);
      return 1;
    }
    iVar7 = iVar7 + 1;
    psVar11 = psVar11 + 0x20;
  } while (iVar7 < 2);
  bVar2 = false;
  iVar7 = 0;
  piVar14 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  do {
    if ((short)piVar14[-3] == (short)(*(uint *)&gen_args[1])) {
      switch((unsigned int)(uintptr_t)(piVar14[-4])) {
      case 1: ;
      case 7: ;
switchD_00ab722e_caseD_1: ;
        (*(byte *)(gen_frame + 0x1b)) = (byte)iVar7;
        bVar2 = true;
        goto LAB_00ab728c;
      case 5: ;
      case 6: ;
        if ((*piVar14 != 0) &&
           (uVar6 = ((code *)*(gen_code32 *)(*(int *)*piVar14 + 0x7c))((int *)*piVar14), (char)uVar6 != '\0'))
        goto switchD_00ab722e_caseD_1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar14 = piVar14 + 0x10;
  } while (iVar7 < 2);
  iVar7 = 0;
  puVar12 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  do {
    switch((unsigned int)(uintptr_t)(*puVar12)) {
    case 0: ;
    case 2: ;
    case 3: ;
    case 7: ;
      (*(byte *)(gen_frame + 0x1b)) = (byte)iVar7;
LAB_00ab728c: ;
      uVar6 = (uint)(*(byte *)(gen_frame + 0x1b));
      iVar7 = uVar6 * 0x40;
      if (bVar2) {
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 1;
      }
      else {
        piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        if (piVar14 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar14 + 0x50))(piVar14,0);
          piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
          ((code *)*(gen_code32 *)(*piVar14 + 0x78))(piVar14,500);
          *((undefined4 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        }
        *((undefined4 *)GEN_TOP((iVar7 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        uVar3 = REFG(float, 0x1087f04);
        *((undefined4 *)GEN_TOP((iVar7 + 0x20 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined2 *)GEN_TOP((iVar7 + 0x24 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x44 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = uVar3;
        *((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x2c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((short *)GEN_TOP((iVar7 + 0x10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (short)(*(uint *)&gen_args[1]);
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 2;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (*(undefined4 *)&gen_args[2]);
        *((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (undefined1)(*(undefined4 *)&gen_args[3]);
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x4c))) - 1U < 4) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x4c))) = 5;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 100))) = (undefined1)(*(uint *)&gen_args[4]);
      }
      if ((*(undefined4 * PTR32 *)&gen_args[5]) == (undefined4 *)0x0) {
        (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),*((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))));
        (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x58))));
        pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x54))),
                                       (*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))),(*(uint *)&gen_args[4]));
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
        uVar8 = (*(uint *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 1) {
          (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)pfVar5[3] * *(double *)&REFG(undefined, 0x10912a8));
          uVar9 = (*(uint *)(gen_frame + 0x8));
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)pfVar5[1] * *(double *)&REFG(undefined, 0x10912a8));
          uVar9 = (*(uint *)(gen_frame + 0x8));
        }
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * (double)pfVar5[2]);
        (*(uint *)&gen_args[4]) = (*(uint *)(gen_frame + 0x8));
      }
      else {
        uVar8 = *(*(undefined4 * PTR32 *)&gen_args[5]);
        uVar9 = (*(undefined4 * PTR32 *)&gen_args[5])[1];
        (*(uint *)&gen_args[4]) = (*(undefined4 * PTR32 *)&gen_args[5])[2];
      }
      puVar12 = ((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      puVar12[1] = uVar9;
      *puVar12 = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = (*(uint *)&gen_args[4]);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x68))) = uVar8;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x6c))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x70))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x78))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x7c))) = 0;
      *(byte *)(*(undefined * PTR32 *)&gen_args[0]) = (*(byte *)(gen_frame + 0x1b));
      return 1;
    }
    iVar7 = iVar7 + 1;
    puVar12 = puVar12 + 0x10;
  } while (iVar7 < 2);
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,(*(uint *)&gen_args[1]) & 0xffff);
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    (*(uint *)&gen_args[4]) = (*(uint *)&gen_args[4]) & 0xffffff;
  }
  else {
    (*(uint *)&gen_args[4]) = CONCAT13(*((undefined1 *)GEN_TOP((*(int *)(uVar6 + 4) + 8))),(undefined3)(*(uint *)&gen_args[4]));
  }
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,
                       (uint)*((ushort *)GEN_TOP(((uint)*(byte *)(*(undefined * PTR32 *)&gen_args[0]) * 0x40 + 0x10 + (int)(*(undefined * PTR32 *)&gen_args[0])))));
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = *((byte *)GEN_TOP((*(int *)(uVar6 + 4) + 8)));
  }
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,
                       (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*(byte *)(*(undefined * PTR32 *)&gen_args[0]) * -0x40 + 0x50))));
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = *((byte *)GEN_TOP((*(int *)(uVar6 + 4) + 8)));
    if (bVar13 < bVar10) {
      bVar4 = *(byte *)(*(undefined * PTR32 *)&gen_args[0]);
      bVar10 = bVar13;
      goto LAB_00ab7364;
    }
  }
  bVar4 = 1 - *(char *)(*(undefined * PTR32 *)&gen_args[0]);
LAB_00ab7364: ;
  iVar7 = (uint)bVar4 * 0x40;
  uVar6 = 1000;
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[4]) + 3)) < bVar10) {
    (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x18))));
    pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x14))),(*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[2]),
                                   (*(undefined4 *)&gen_args[3]));
    if (pfVar5 != (float *)0x0) {
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
      uVar6 = (*(uint *)(gen_frame + 0x8));
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0xc)));
  if ((iVar1 == 4) ||
     (((iVar1 == 5 || (iVar1 == 6)) &&
      (uVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x28))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x38))),
      uVar6 < (((int)uVar8 < 1) - 1 & uVar8))))) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0xc))) = 5;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x24))) = 0;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x28))) = uVar6;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x3c))) = 0;
  }
  return 0;
}

/* ref: FUN_00ab78d0 */
uint F_00ab78d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab78d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (param_1 == (int *)0x0) {
    return (uint)piVar2;
  }
  cVar5 = '\x02';
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 3: ;
    bVar1 = F_00a9f620(param_1);
    cVar5 = bVar1 == 0;
    break;
  case 4: ;
    if ((param_3 & 1) != 0) break;
  case 0xe: ;
    F_00ab4370(0x70,param_1,param_1,0,0);
    cVar5 = '\x01';
    break;
  case 5: ;
    F_00ab4370(0xb5,param_1,param_1,0,0);
    cVar5 = '\x01';
    break;
  case 8: ;
    F_00ab4370(0x71,param_1,param_1,0,0);
    cVar5 = '\x01';
  }
  if (((undefined *)param_1[0xb81] != (undefined *)0x0) && (*(int *)&REFG(undefined2, 0x1379c78) == param_4)) {
    F_00bc7e20((undefined *)param_1[0xb81]);
  }
  bVar1 = F_00a9f620(param_1);
  if (bVar1 != 0) {
    F_005d9a00();
    this_00 = (undefined *)F_006b8c00();
    F_006e33b0(this_00);
    if (param_2 != 3) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    if ((param_3 & 2) == 0) {
      F_00ab5ef0(param_2,param_4);
    }
    F_00a6efa0(&REFG(undefined, 0x14ab428));
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    if (*(int *)&REFG(undefined2, 0x1379c78) == param_4) {
      *(undefined1 *)((int)this + 0x28) = 0;
    }
    else {
      *(undefined1 *)((int)this + 0x28) = 1;
      F_00ae33e0(&REFG(undefined * PTR32, 0x1338d48));
    }
    *(int *)((int)this + 8) = param_2;
  }
  if (cVar5 == '\x01') {
    param_1[0xbb2] = GEN_FLT_TO(param_1[0xbb2], REFG(float, 0x109cb08));
  }
  else if (cVar5 == '\x02') {
    ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,9,0);
  }
  bVar1 = F_00a9f620(param_1);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 == 0) && (*(int *)&REFG(undefined2, 0x1379c78) != param_4)) &&
     (uVar3 = F_00a9fba0(param_1,param_2), (*(byte *)((int)param_1 + 0x2dd2) & 0x10) != 0)) {
    uVar4 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1[0x1d]);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = F_00b7aa60((undefined *)(uVar4 + 0x6c));
    }
  }
  return uVar3;
}

/* ref: FUN_00ab7ac0 */
uint F_00ab7ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xab7ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc80];
  int iVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  byte bVar5;
  int * piVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float * pfVar8;
  undefined4 * puVar9;
  uint uVar10;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int * piVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  piVar11 = REFG(int * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0xc6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc70);
  piVar6 = (int *)F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar6;
  pvVar7 = (undefined *)F_006b8c00();
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar7;
  if (REFG(int, 0x1379c74) == -1) goto switchD_00ab7b48_caseD_1;
  F_00ab5fe0(this);
  pvVar7 = *(undefined * PTR32 *)this;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 4))));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  *(float *)((int)this + 4) = fVar2;
  switch((unsigned int)(uintptr_t)(pvVar7)) {
  case (undefined *)0x0: ;
    if ((piVar11 == (int *)0x0) || ((char)piVar11[0x62] != '\x02')) {
      uVar10 = F_00ab1340();
      *(uint *)((int)this + 0xc) = uVar10;
      pvVar7 = (undefined *)0x0;
      if (uVar10 != 0) {
        uVar10 = F_006b8c00();
        uVar10 = F_006c5190(uVar10);
        if ((char)uVar10 != '\0') {
          uVar14 = 0;
          uVar13 = 0x32;
          pvVar7 = (undefined *)F_006b8c00();
          bVar5 = F_006e3100(pvVar7,uVar13,uVar14);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return CONCAT31(extraout_var,bVar5);
        }
        uVar10 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x86))));
        pvVar7 = (undefined *)0x0;
        if (uVar10 != 0) {
          piVar11 = (int *)F_005f3270(0x28,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x90))),0);
          if (piVar11 != (int *)0x0) {
            pfVar4 = (float *)piVar11[0x1f];
            iVar1 = *piVar11;
            (*(float *)(gen_frame + 0x20)) = *pfVar4;
            (*(float *)(gen_frame + 0x24)) = pfVar4[1];
            pfVar8 = &(*(float *)(gen_frame + 0x20));
            (*(float *)(gen_frame + 0x28)) = pfVar4[2];
            uVar10 = ((code *)*(gen_code32 *)(iVar1 + 0xe4))(piVar11);
            puVar9 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),uVar10,pfVar8);
            *(undefined4 *)((int)this + 0x10) = *puVar9;
            *(undefined4 *)((int)this + 0x14) = puVar9[1];
            *(undefined4 *)((int)this + 0x18) = puVar9[2];
          }
          uVar13 = *(undefined4 *)((int)this + 0xc);
          pvVar7 = (undefined *)F_006b8c00();
          F_006f7db0(pvVar7,uVar13);
          uVar10 = F_006b8c00();
          uVar10 = F_006c5190(uVar10);
          if ((char)uVar10 != '\0') {
            *(undefined4 *)this = 1;
            uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
            F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
            return uVar10;
          }
          *(undefined4 *)this = 3;
          uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return uVar10;
        }
      }
    }
    break;
  case (undefined *)0x2: ;
    if (piVar11 != (int *)0x0) {
      bVar5 = F_00a9fca0(piVar11);
      pvVar7 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar5)));
      if (bVar5 != 0) break;
    }
    *(undefined4 *)this = 3;
    uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar10;
  case (undefined *)0x3: ;
    F_00ae8f70();
    fVar2 = *((float *)GEN_TOP((*(int *)((int)this + 0xc) + 0x94)));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar12 = ((float10)GEN_TOD(fsin((float10)fVar2)));
    fVar3 = (float)fVar12;
    (*(float *)(gen_frame + 0x40)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar3;
    fVar12 = ((float10)GEN_TOD(fcos((float10)fVar2)));
    fVar2 = (float)fVar12;
    (*(float *)(gen_frame + 0x40)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    fVar12 = (float10)REFG(double, 0x10944b8);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar3 * fVar12);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)0 * fVar12);
    (*(float *)(gen_frame + 0x28)) = (float)(fVar12 * (float10)fVar2);
    pfVar8 = (float *)F_00a5feb0(piVar11);
    iVar1 = *piVar11;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[1] + (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x28)));
    ((code *)*(gen_code32 *)(iVar1 + 0x54))(piVar11,1);
    F_00a9f7c0(piVar11,(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x28)),(*(float *)(gen_frame + 0x44)),0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x23,1);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))));
    puVar9 = (undefined4 *)F_00a5feb0(piVar11);
    (*(float *)(gen_frame + 0x44)) = gen_bits2f(*puVar9);
    uVar10 = F_00a5feb0(piVar11);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(undefined4 *)(uVar10 + 4);
    uVar10 = F_00a5feb0(piVar11);
    uVar13 = *(undefined4 *)(uVar10 + 8);
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x44)));
    (*(undefined4 *)(gen_frame + 0x48)) = 400;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x40)));
    uVar15 = 0;
    uVar14 = 0;
    puVar9 = &(*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x6c)) = uVar13;
    pvVar7 = (undefined *)F_00424810(REFG(int, 0x137104c));
    F_00974e00(pvVar7,puVar9,uVar14,uVar15);
    F_005d9a00();
    piVar11 = (*(int * PTR32 *)(gen_frame + 0x3c));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xa8))((*(int * PTR32 *)(gen_frame + 0x3c)),0,0x1e,1);
    *(undefined1 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    ((code *)*(gen_code32 *)(*piVar11 + 0xb4))(piVar11);
    *(undefined4 *)this = 4;
    uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar10;
  case (undefined *)0x4: ;
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(fVar2 < REFG(float, 0x1087f04))) {
      if (*(char *)((int)this + 0x20) == '\0') {
        uVar10 = F_00424810(REFG(int, 0x137104c));
        uVar10 = F_00974710(uVar10);
        if ((char)uVar10 != '\0') {
          *(undefined4 *)this = 5;
          uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return uVar10;
        }
      }
      uVar10 = F_00ab1390(this,*(undefined4 *)((int)this + 0x24));
      F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
      return uVar10;
    }
    break;
  case (undefined *)0x6: ;
    bVar5 = F_005e1600();
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c));
    if ((((((((bVar5 == 0) || (bVar5 = F_005d99e0(), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar5 == 0)) ||
            (piVar11 == (int *)0x0)) ||
           (uVar10 = ((code *)*(gen_code32 *)(*piVar11 + 0x68))(piVar11), pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c)), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c))
           , (char)uVar10 != '\x01')) ||
          (((uVar10 = F_006c5190((*(undefined * PTR32 *)(gen_frame + 0x1c))), (char)uVar10 != '\0' &&
            (piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), *(char *)((int)this + 0x28) != '\0')) ||
           ((bVar5 = F_006da1b0(pvVar7), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar5 == 0 ||
            ((uVar10 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x80))((*(int * PTR32 *)(gen_frame + 0x3c)),1), (char)uVar10 == '\0' ||
             (REFG(char, 0x14b5184) == '\0')))))))) || (REFG(char, 0x14b51d4) == '\0')) ||
        (((!(REFG(float, 0x1087ef8) <= *(float *)((int)this + 4)) &&
          ((*(int *)((int)this + 8) != 5 || (bVar5 = F_00ab5fa0(), bVar5 != 0)))) ||
         (uVar10 = F_00b7a2c0(&REFG(undefined, 0x14c5798)), (int)uVar10 < 0x50)))) &&
       (!(REFG(float, 0x10946b8) <= *(float *)((int)this + 4)))) {
      bVar5 = F_005e1600();
      pvVar7 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar5)));
      if (bVar5 != 0) {
        bVar5 = F_005d99e0();
        pvVar7 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_02,bVar5)));
        if ((bVar5 != 0) && (REFG(char, 0x14a31e4) != '\0')) {
          pvVar7 = (undefined *)F_005d9a30();
        }
      }
      break;
    }
    if (*(int *)((int)this + 8) != 0x11) {
      if (REFG(int, 0x1375bbc) == -1) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
      }
      ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360),0x23,0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00a6e6a0(&REFG(undefined, 0x14a9e40));
    ((code *)*(gen_code32 *)(*piVar6 + 0xf8))(piVar6);
    F_00a51200(0xe,0,0,0,0);
    if (*(char *)((int)this + 0x28) != '\0') {
      pvVar7 = (undefined *)F_006b8c00();
      bVar5 = F_0070dfa0(pvVar7);
      if (bVar5 != 0) goto LAB_00ab8099;
    }
    F_00ab60c0(this);
LAB_00ab8099: ;
    F_00ab0590();
    uVar13 = *(undefined4 *)((int)this + 8);
    uVar10 = F_006b8c00();
    F_006c5150(uVar10,uVar13);
    piVar11 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar11 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar11 + 4))(piVar11);
      puVar9 = *(undefined4 * PTR32 *)((int)this + 0x7c);
      if (puVar9 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
        *(undefined4 *)((int)this + 0x7c) = 0;
      }
    }
    puVar9 = (undefined4 *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x44)) = 4.2039e-45;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar9 + 4))((int *)*puVar9);
      puVar9 = puVar9 + 1;
      iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + -1;
      (*(float *)(gen_frame + 0x44)) = gen_bits2f(iVar1);
    } while (iVar1 != 0);
    F_005f3240();
    *(undefined2 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined2 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    F_00a021b0((undefined *)(REFG(int, 0x137104c) + 0x2620),2,0);
    *(undefined4 *)((int)this + 8) = 0;
    F_005d9a70();
    *(undefined4 *)this = 0;
    uVar10 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar10;
  }
switchD_00ab7b48_caseD_1: ;
  F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
  return (uint)pvVar7;
}

/* ref: FUN_00ab81e0 */
unsigned int F_00ab81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab81e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)(in_ecx + 0x20) < 5) {
    uVar3 = F_00aa55c0(in_ebx,param_3);
    *((uint *)GEN_TOP((in_ecx + 0xc + *(int *)(in_ecx + 0x20) * 4))) = uVar3;
    piVar2 = ((int *)GEN_TOP((in_ecx + 0xc + *(int *)(in_ecx + 0x20) * 4)));
    if (*piVar2 != 0) {
      pbVar1 = (byte *)(*piVar2 + 100);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + 1;
  }
  return 0;
}

/* ref: FUN_00ab8220 */
uint F_00ab8220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,*in_ecx,iVar4,0,0);
    if (uVar2 == 0) {
      return 0;
    }
    piVar3 = *(int * PTR32 *)(uVar2 + 4);
    if (piVar3 == (int *)0x0) break;
    cVar1 = (char)piVar3[1];
    if (cVar1 == '\x01') {
      piVar3 = (int *)*piVar3;
      if ((int)in_ecx[8] < 5) {
        uVar2 = F_00aa55c0(in_ebx,piVar3);
        in_ecx[in_ecx[8] + 3] = uVar2;
        piVar3 = in_ecx + in_ecx[8] + 3;
        if (*piVar3 != 0) {
          piVar3 = (int *)*piVar3;
          *(byte *)(piVar3 + 0x19) = *(byte *)(piVar3 + 0x19) & 0xfe;
        }
        in_ecx[8] = in_ecx[8] + 1;
      }
    }
    else if (((cVar1 != '\x02') && (cVar1 == '\x04')) &&
            (piVar3 = (int *)*piVar3, (int)in_ecx[0x13] < 10)) {
      piVar3 = (int *)F_00ab4aa0(piVar3);
      in_ecx[in_ecx[0x13] + 9] = piVar3;
      in_ecx[0x13] = in_ecx[0x13] + 1;
    }
    iVar4 = iVar4 + 1;
    if (0x13 < iVar4) {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00ab82c0 */
uint F_00ab82c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab82c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  int iVar4;
  
  if (in_ecx[2] == 1) {
    iVar4 = 0;
    while ((uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,*in_ecx,iVar4,0,0),
           uVar2 != 0 && (piVar3 = *(int * PTR32 *)(uVar2 + 4), piVar3 != (int *)0x0))) {
      if (((char)piVar3[1] == '\x01') && (piVar3 = (int *)*piVar3, 999999 < (int)piVar3)) {
        piVar3 = (int *)F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,piVar3);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        if (piVar3[1] == 0) {
          return (uint)piVar3;
        }
      }
      iVar4 = iVar4 + 1;
      if (0x13 < iVar4) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00ab8220(in_ecx,in_ebx);
    in_ecx[2] = 2;
  }
  else {
    uVar2 = in_ecx[2] - 2;
    if (uVar2 == 0) {
      bVar1 = F_00ab1c10(in_ecx);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        *(undefined1 *)(in_ecx + 1) = 1;
        in_ecx[2] = 0;
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8360 */
uint F_00ab8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = param_1;
  *(int *)this = param_1;
  uVar2 = F_00aaf890(this);
  iVar4 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 4) = 1;
    return uVar2;
  }
  param_1 = 0;
  do {
    uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,iVar1,iVar4,0,0);
    piVar3 = (int *)0x0;
    if ((uVar2 == 0) || (piVar3 = *(int * PTR32 *)(uVar2 + 4), piVar3 == (int *)0x0)) break;
    if (((char)piVar3[1] == '\x01') && (piVar3 = (int *)*piVar3, 999999 < (int)piVar3)) {
      piVar3 = (int *)F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,piVar3);
      if ((piVar3 == (int *)0x0) || (piVar3[1] == 0)) {
        param_1 = param_1 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = 1;
    return (uint)piVar3;
  }
  uVar2 = F_00ab8220(this,this);
  *(undefined4 *)((int)this + 8) = 2;
  return uVar2;
}

/* ref: FUN_00ab8420 */
uint F_00ab8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  uint uVar1;
  
  F_00ab82c0(in_ecx,in_ebx);
  uVar1 = F_00ab82c0(in_ecx + 0x50,in_ebx);
  return uVar1;
}

/* ref: FUN_00ab8440 */
uint F_00ab8440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 4), iVar1 != 0)) {
    if (*(char *)((int)this + 4) == '\0') {
      F_00ab8360(this,1);
    }
    uVar2 = F_00ab8360((undefined *)((int)this + 0x50),(uint)*(byte *)(iVar1 + 0x2b));
  }
  return uVar2;
}

/* ref: FUN_00ab8490 */
uint F_00ab8490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab8490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x1c) >> 4) < 0x10) {
    uVar3 = F_004296a0(0x100,0,800);
    F_00abd2f0(*(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),uVar3,
                 (int)this + 0x28);
    iVar1 = *(int *)((int)this + 0x1c);
    iVar2 = *(int *)((int)this + 0x20);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 0x24) - iVar1 & 0xfffffff0,800);
    }
    *(uint *)((int)this + 0x20) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)((int)this + 0x1c) = uVar3;
    *(uint *)((int)this + 0x24) = uVar3 + 0x100;
  }
  return (uint)this;
}

/* ref: FUN_00ab8560 */
uint F_00ab8560(unsigned int gen_a0)
{
  GEN_ENTER(0xab8560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 0x24) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return uVar2;
}

/* ref: FUN_00ab85a0 */
byte F_00ab85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab85a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int * piVar4;
  short * psVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  short * psVar9;
  ushort * puVar10;
  short sVar11;
  int iVar12;
  short * psVar13;
  short * psVar14;
  ushort * puVar15;
  byte * pbVar16;
  float fVar17;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  }
  uVar2 = (ushort)param_1[4];
  if (uVar2 == 0) goto LAB_00ab869f;
  *(ushort *)((int)param_1 + 0x12) = uVar2;
  param_1[3] = 0;
  if (((uVar2 < 0x3e9) ||
      (uVar8 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,(uint)uVar2), uVar8 == 0)) ||
     (psVar9 = *(short * PTR32 *)(uVar8 + 4), psVar9 == (short *)0x0)) goto switchD_00ab861f_default;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    sVar11 = *psVar9;
    param_1[3] = 1;
    goto LAB_00ab8693;
  case 2: ;
    *(short *)((int)param_1 + 0x12) = psVar9[1];
    param_1[3] = 2;
    break;
  case 3: ;
    *(short *)((int)param_1 + 0x12) = psVar9[2];
    param_1[3] = 3;
    break;
  case 4: ;
    sVar11 = psVar9[3];
    if (sVar11 != 0) {
      param_1[3] = 4;
      goto LAB_00ab8693;
    }
    *(short *)((int)param_1 + 0x12) = *psVar9;
    param_1[3] = 1;
    break;
  case 5: ;
    sVar11 = psVar9[4];
    if (sVar11 == 0) {
      sVar11 = psVar9[1];
      param_1[3] = 2;
    }
    else {
      param_1[3] = 5;
    }
LAB_00ab8693: ;
    *(short *)((int)param_1 + 0x12) = sVar11;
  }
switchD_00ab861f_default: ;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)param_1 + 0x12);
LAB_00ab869f: ;
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    if (gen_bits2f(param_1[6]) < *(float *)&REFG(undefined, 0x10e9058)) {
      param_1[6] = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[6]))) + (float10)fVar17));
    }
    else if ((REFG(int, 0x14bcc68) == 0) || (*(char *)(REFG(int, 0x14bcc68) + 0xb4) == '\0')) {
      F_00ab07d0(param_1);
    }
  }
  puVar15 = (ushort *)param_1[7];
  psVar9 = (short *)((uint)*param_3 * 0x40);
  bVar1 = *((byte *)GEN_TOP(((int)(psVar9 + 0xc) + (int)param_3)));
  sVar11 = *((short *)GEN_TOP(((int)(psVar9 + 8) + (int)param_3)));
  if (puVar15 != (ushort *)param_1[8]) {
    do {
      if (((char)puVar15[1] != '\0') && ((char)puVar15[6] == '\0')) {
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          puVar10 = (ushort *)(param_3 + 0x10);
          do {
            if ((*(int *)(puVar10 + -2) - 1U < 4) && (*puVar10 == *puVar15)) {
              bVar7 = F_00aaf3c0(param_3,(uint)*puVar15);
              psVar9 = (short *)(uint)bVar7;
              if (bVar7 == 0) goto LAB_00ab8751;
              goto LAB_00ab874d;
            }
            iVar12 = iVar12 + 1;
            puVar10 = puVar10 + 0x20;
          } while (iVar12 < 2);
        }
        bVar7 = F_00aaf410(param_3,(uint)*puVar15);
        psVar9 = (short *)(uint)bVar7;
        if (bVar7 == 0) {
LAB_00ab874d: ;
          *(undefined1 *)(puVar15 + 6) = 1;
        }
      }
LAB_00ab8751: ;
      puVar15 = puVar15 + 8;
    } while (puVar15 != (ushort *)param_1[8]);
  }
  bVar7 = (byte)psVar9;
  psVar13 = (short *)param_1[7];
  param_2 = (uint)psVar13;
  if (psVar13 != (short *)param_1[8]) {
    do {
      if (((char)psVar13[6] == '\0') ||
         (*(float *)(psVar13 + 4) = ((float)GEN_TOF(((float10)fVar17 + (float10)*(float *)(psVar13 + 4)))),
         !((float10)*(float *)(psVar13 + 2) < (float10)*(float *)(psVar13 + 4)))) {
        psVar13 = psVar13 + 8;
        param_2 = (uint)psVar13;
      }
      else {
        sVar3 = *psVar13;
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          pbVar16 = param_3 + 0x1c;
          do {
            if ((((*(int *)(pbVar16 + -0x10) == 4) && (*(int *)pbVar16 != 0)) &&
                (uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pbVar16 + 0x7c))))(*(int * PTR32 *)pbVar16),
                psVar13 = (short *)param_2, (char)uVar8 == '\0')) &&
               (*(short *)(pbVar16 + -0xc) == sVar3)) {
              if (*(short *)((int)param_1 + 0x12) == sVar11) {
                iVar12 = (uint)*param_3 * 0x40;
                piVar4 = *(int * PTR32 *)(param_3 + iVar12 + 0x1c);
                if (piVar4 != (int *)0x0) {
                  ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,0);
                  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_3 + iVar12 + 0x1c) + 0x78))))
                            (*(int * PTR32 *)(param_3 + iVar12 + 0x1c),500);
                  pbVar16 = param_3 + iVar12 + 0x1c;
                  pbVar16[0] = 0;
                  pbVar16[1] = 0;
                  pbVar16[2] = 0;
                  pbVar16[3] = 0;
                }
                pbVar16 = param_3 + iVar12 + 0x40;
                pbVar16[0] = 0;
                uVar6 = REFG(float, 0x1087f04);
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0xc;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x10)[0] = 0;
                (param_3 + iVar12 + 0x10)[1] = 0;
                pbVar16 = param_3 + iVar12 + 0x20;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x24)[0] = 0;
                (param_3 + iVar12 + 0x24)[1] = 0;
                *(undefined4 *)(param_3 + iVar12 + 0x44) = uVar6;
                pbVar16 = param_3 + iVar12 + 0x28;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x2c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x30;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x38;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x3c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x14;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                param_3[iVar12 + 0x18] = 0;
              }
              break;
            }
            iVar12 = iVar12 + 1;
            pbVar16 = pbVar16 + 0x40;
          } while (iVar12 < 2);
        }
        psVar5 = (short *)param_1[8];
        psVar14 = psVar13;
        psVar9 = psVar13;
        while (psVar9 = psVar9 + 8, psVar9 != psVar5) {
          *(undefined4 *)psVar14 = *(undefined4 *)psVar9;
          *(undefined4 *)(psVar14 + 2) = *(undefined4 *)(psVar9 + 2);
          *(undefined4 *)(psVar14 + 4) = *(undefined4 *)(psVar9 + 4);
          *(undefined4 *)(psVar14 + 6) = *(undefined4 *)(psVar9 + 6);
          psVar14 = psVar14 + 8;
          psVar13 = (short *)param_2;
        }
        param_1[8] = param_1[8] - 0x10;
      }
      bVar7 = (byte)psVar9;
    } while (psVar13 != (short *)param_1[8]);
  }
  return bVar7;
}

/* ref: FUN_00ab88e0 */
unsigned int F_00ab88e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab88e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x16) == '\0') {
LAB_00ab891f: ;
    if (*(int *)((int)this + 0x48) != 1) goto LAB_00ab894e;
  }
  else if (*(int *)((int)this + 0x48) != 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x16) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined2 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    goto LAB_00ab891f;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
LAB_00ab894e: ;
  if (*(int *)((int)this + 0x1c) != *(int *)((int)this + 0x20)) {
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x1c);
  }
  return 0;
}

/* ref: FUN_00ab8990 */
uint F_00ab8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c) >> 4;
  if (uVar2 < 0x10) {
    for (puVar3 = *(ushort * PTR32 *)((int)this + 0x1c); puVar3 != *(ushort * PTR32 *)((int)this + 0x20);
        puVar3 = puVar3 + 8) {
      if (*puVar3 == (ushort)param_1) {
        return (uint)puVar3;
      }
    }
    uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,(uint)(ushort)param_1);
    uVar2 = 0;
    if (uVar4 != 0) {
      iVar1 = *(int *)(uVar4 + 4);
      uVar2 = 0;
      if (iVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0xe)) = *(undefined1 *)(iVar1 + 0xb);
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 4);
        (*(ushort *)(gen_frame + 0xc)) = (ushort)param_1;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined1 *)(gen_frame + 0x18)) = 0;
        uVar2 = F_00abd660((undefined4 *)((int)this + 0x1c),&(*(ushort *)(gen_frame + 0xc)));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8a60 */
byte F_00ab8a60(unsigned int gen_a0)
{
  GEN_ENTER(0xab8a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ushort * puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined * this_00;
  undefined4 local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  bVar5 = false;
  local_10 = 0;
  if (*(int *)((int)this + 8) != 0) {
    local_c = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xa0) + local_c)));
      cVar1 = *(char *)((int)this + 0xb4);
      uVar2 = *(ushort *)((int)this_00 + 0x12);
      uVar11 = (uint)uVar2;
      uVar3 = *(undefined4 *)((int)this_00 + 0xc);
      if (((uVar2 != 0) &&
          (uVar7 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,uVar11), uVar7 != 0)) &&
         (iVar9 = *(int *)(uVar7 + 4), iVar9 != 0)) {
        if (((*(char *)((int)this_00 + 4) == '\0') ||
            (iVar10 = (uint)*(byte *)((int)this + 0x10) * 0x40,
            3 < *(int *)((int)this + iVar10 + 0x1c) - 1U)) ||
           ((*(int *)((int)this + iVar10 + 0x24) != 3 || (cVar1 == '\0')))) {
          bVar4 = false;
          if ((*(char *)((int)this_00 + 8) != '\0') && (*(char *)(iVar9 + 10) != '\0')) {
            for (puVar8 = *(ushort * PTR32 *)((int)this_00 + 0x1c);
                puVar8 != *(ushort * PTR32 *)((int)this_00 + 0x20); puVar8 = puVar8 + 8) {
              if (*puVar8 == uVar2) {
                bVar6 = F_00aaf380((undefined *)((int)this + 0x10),uVar11);
                if ((bVar6 == 0) &&
                   (bVar6 = F_00aaf410((undefined *)((int)this + 0x10),uVar11), bVar6 == 0))
                goto LAB_00ab8b58;
                break;
              }
            }
            bVar4 = true;
          }
          local_5 = 0;
          if (*(char *)((int)this_00 + 6) != '\0') {
            if (*(char *)((int)this + 200) != '\0') goto LAB_00ab8b54;
            if (*(char *)(iVar9 + 9) != '\0') {
              local_5 = 1;
            }
          }
          local_14 = CONCAT31((int3)((uint)iVar9 >> 8),*(undefined1 *)((int)this_00 + 7));
          if (*(char *)((int)this_00 + 0x2c) == '\0') {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)this_00 + 0x30;
          }
          bVar6 = F_00ab7140((undefined *)((int)this + 0x10),uVar11,uVar3,local_10,local_14,iVar9);
          local_10 = (uint)bVar6;
          if (bVar6 != 0) {
            if (bVar4) {
              F_00ab8990(this_00,uVar11);
            }
            local_10 = (uint)local_5;
            *(byte *)((int)this + 200) = local_5;
            if (local_5 != 0) {
              *(ushort *)((int)this + 0xca) = uVar2;
              return local_5;
            }
          }
          goto LAB_00ab8b95;
        }
LAB_00ab8b54: ;
        bVar5 = true;
      }
LAB_00ab8b58: ;
      local_c = local_c + 0x50;
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)((int)this + 8));
    if (bVar5) goto LAB_00ab8b95;
  }
  bVar6 = F_00ab7140((undefined *)((int)this + 0x10),1,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x23c))),7,
                       (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x237))),0);
  local_10 = (uint)bVar6;
LAB_00ab8b95: ;
  return (byte)local_10;
}

/* ref: FUN_00ab8c00 */
uint F_00ab8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * this_00;
  byte bVar1;
  undefined * pvVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  F_00ab0ad0(this);
  if (*(char *)((int)this + 0xb4) == '\0') {
    uVar4 = F_00ab0c40();
    *(uint *)((int)this + 0xb0) = uVar4;
  }
  else {
    *(undefined4 *)((int)this + 0xb0) = 3;
  }
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar5 = 0;
    do {
      F_00ab85a0(*(int *)((int)this + 0xa0) + iVar5,*(uint *)((int)this + 0xb0),(int)this + 0x10);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  F_00ab0b90(this);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc0))) {
  case 0: ;
    bVar1 = F_005e1600();
    if ((bVar1 != 0) && (REFG(int, 0x1379694) != 0)) {
      pvVar2 = (undefined *)F_006b8c00();
      bVar1 = F_006da1b0(pvVar2);
      if (bVar1 != 0) {
        pvVar2 = (undefined *)F_006b8c00();
        bVar1 = F_006da210(pvVar2);
        *(uint *)((int)this + 0xc0) = (uint)(bVar1 == 0) * 2 + 1;
      }
    }
    break;
  case 1: ;
    if (*(char *)((int)this + 0xc4) != '\0') {
      pvVar2 = (undefined *)F_006b8c00();
      bVar1 = F_006d9e20(pvVar2);
      *(uint *)((int)this + 0xc0) = (bVar1 != 0xf) + 2;
    }
    break;
  case 2: ;
    pvVar2 = (undefined *)F_006b8c00();
    bVar1 = F_006d9e20(pvVar2);
    if ((bVar1 == 0) || (*(char *)((int)this + 0xc5) != '\0')) {
      *(undefined4 *)((int)this + 0xc0) = 3;
    }
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0xc0) = 4;
    *(undefined2 *)((int)this + 199) = 1;
    *(undefined2 *)((int)this + 0xca) = 0;
    F_00ab0890((undefined *)((int)this + 0x10));
    uVar4 = 0;
    if (*(int *)((int)this + 8) != 0) {
      iVar5 = 0;
      do {
        F_00ab88e0(((undefined *)GEN_TOP((*(int *)((int)this + 0xa0) + iVar5))));
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x50;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
    iVar5 = *(int *)((int)this + 0xa0);
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined1 *)((int)this + 0xb4) = 0;
    if (*(int *)(iVar5 + 0x228) != 1) {
      *(undefined4 *)(iVar5 + 0x1ec) = 0;
      *(undefined1 *)(iVar5 + 0x1f6) = 0;
      *(undefined4 *)(iVar5 + 0x1f8) = 0;
      *(undefined1 *)(iVar5 + 0x20c) = 0;
      *(undefined4 *)(iVar5 + 0x228) = 0;
      *(undefined2 *)(iVar5 + 0x1f0) = 0;
      *(undefined2 *)(iVar5 + 0x1f2) = 0;
      *(undefined4 *)(iVar5 + 0x210) = 0;
      *(undefined4 *)(iVar5 + 0x214) = 0;
      *(undefined4 *)(iVar5 + 0x218) = 0;
      *(undefined4 *)(iVar5 + 0x220) = 0;
      *(undefined4 *)(iVar5 + 0x224) = 0;
    }
    break;
  case 4: ;
    F_00ab5120(this);
    F_00ab8a60(this);
  }
  this_00 = (byte *)((int)this + 0x10);
  pbVar3 = (byte *)F_00ab75e0(this_00);
  if ((*(char *)((int)this + 200) != '\0') &&
     ((pbVar3 = this_00 + (uint)*this_00 * 0x40,
      *(short *)(this_00 + (uint)*this_00 * 0x40 + 0x10) != *(short *)((int)this + 0xca) ||
      (((*(int *)(pbVar3 + 0xc) == 4 && (*(int *)(pbVar3 + 0x1c) != 0)) &&
       (pbVar3 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pbVar3 + 0x1c) + 0x7c))))(*(int * PTR32 *)(pbVar3 + 0x1c)))),
       (char)pbVar3 == '\0')))))) {
    *(undefined1 *)((int)this + 200) = 0;
    *(undefined2 *)((int)this + 0xca) = 0;
  }
  return (uint)pbVar3;
}

/* ref: FUN_00ab8e60 */
unsigned int F_00ab8e60(void)
{
  GEN_ENTER(0xab8e60u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x14bcc68) != (undefined *)0x0) {
    F_00ab8c00(REFG(void * PTR32, 0x14bcc68));
    return 0;
  }
  return 0;
}

/* ref: FUN_00ab8e70 */
unsigned int F_00ab8e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab8e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00abd9c0((undefined *)((int)this + 0xa0));
  F_00ab4f20((undefined *)((int)this + 0x10));
  return 0;
}

/* ref: FUN_00ab8e90 */
uint F_00ab8e90(unsigned int gen_a0)
{
  GEN_ENTER(0xab8e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,1);
  if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 * PTR32 *)(uVar1 + 4);
  }
  *(undefined4 *)this = uVar3;
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,2);
  if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 * PTR32 *)(uVar1 + 4);
  }
  *(undefined4 *)((int)this + 4) = uVar3;
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84);
  *(uint *)((int)this + 8) = uVar1;
  F_00ab4e70((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 4;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined2 *)((int)this + 0xca) = 0;
  F_00abda80((undefined *)((int)this + 0xa0),*(undefined4 *)((int)this + 8));
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = 0;
    do {
      uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84,uVar1);
      if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
        uVar2 = F_00ab8490(((byte *)(gen_frame + 0x8)),uVar1,*(int *)(uVar2 + 4));
        F_00abdbf0((undefined *)((int)this + 0xa0),uVar2);
        if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) != 0) {
          F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) & 0xfffffff0,800);
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00ab9000 */
uint F_00ab9000(unsigned int gen_a0)
{
  GEN_ENTER(0xab9000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  ulonglong uVar4;
  int * PTR32 * ppiVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    *piVar2 = (int)ppiVar5;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(this,param_1,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_00ab9090 */
uint F_00ab9090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    if (param_2 == 5) {
      uVar4 = 0x4d2;
    }
    else {
      if (param_2 - 7U != 0) {
        return param_2 - 7U;
      }
      uVar4 = 0x4d3;
    }
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  return uVar3;
}

/* ref: FUN_00ab9130 */
unsigned int F_00ab9130(void)
{
  GEN_ENTER(0xab9130u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14bcc68) == 0) {
    this = (undefined *)F_00406b90(0xd0,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_00ab8e90(this);
      REFG(undefined4, 0x14bcc68) = uVar1;
      return 0;
    }
    REFG(undefined4, 0x14bcc68) = 0;
  }
  return 0;
}

/* ref: FUN_00ab9170 */
unsigned int F_00ab9170(void)
{
  GEN_ENTER(0xab9170u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    F_00abd9c0((undefined *)(REFG(int, 0x14bcc68) + 0xa0));
    F_00ab4f20((undefined *)(iVar1 + 0x10));
    F_00406ad0(iVar1);
    REFG(int, 0x14bcc68) = 0;
  }
  return 0;
}

/* ref: FUN_00ab91b0 */
uint F_00ab91b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab91b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)((int)this + 0xc80) = 0;
  bVar2 = 0;
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_2);
  if ((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), iVar1 != 0)) {
    bVar2 = F_00aaf5f0(this,(uint)*(ushort *)(iVar1 + 0x1c),param_1,(uint)*(byte *)(iVar1 + 0x22),
                         1);
  }
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,(uint)REFG(undefined1, 0x1379c7c));
  uVar3 = 0;
  if ((((uVar4 != 0) && (uVar3 = *(uint *)(uVar4 + 4), uVar3 != 0)) &&
      (*(char *)(uVar3 + 0xb) != '\0')) && (bVar2 != 0)) {
    uVar3 = F_00ab9000(0x58);
  }
  return uVar3;
}

/* ref: FUN_00ab9240 */
uint F_00ab9240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint * puVar1;
  undefined * this;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  if ((uVar4 != 0) && (puVar1 = *(uint * PTR32 *)(uVar4 + 4), puVar1 != (uint *)0x0)) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    piVar5 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = &(*(undefined4 *)(gen_frame + 0x7c));
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = param_2;
    (*(char *)(gen_frame + 0x84)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x7c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
      this = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x80));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    uVar2 = (*(undefined4 *)(gen_frame + 0x24));
    F_0042aca0((*(undefined4 *)(gen_frame + 0x24)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x28)),&(*(int * PTR32 *)(gen_frame + 0xc)),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
    uVar4 = (uint)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar4;
}

/* ref: FUN_00ab93a0 */
uint F_00ab93a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab93a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  uVar6 = 0;
  if (uVar4 != 0) {
    puVar1 = *(uint * PTR32 *)(uVar4 + 4);
    uVar6 = 0;
    if (puVar1 != (uint *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
      piVar5 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_2;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x70));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x70));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      F_0042aca0(param_4);
      F_0042cc20(((undefined1 *)(gen_frame + 0x18)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x0)),param_4);
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
      uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
      uVar6 = (uint)uVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar6;
}

/* ref: FUN_00ab9550 */
uint F_00ab9550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9550u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  int * PTR32 * ppiVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_1;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    uVar4 = param_2 & 0xffff;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar4;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    if (uVar4 == 0) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    }
    else {
      uVar2 = 0x4d5;
      if (uVar4 == 1) {
        uVar2 = 0x4d4;
      }
      ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x4));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046aa70(pvVar3,uVar2,ppiVar6);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    }
  }
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: FUN_00ab96d0 */
uint F_00ab96d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab96d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if ((piVar1 == (int *)0x0) || (param_1 == 0)) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x1c)) = param_1;
    (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x1c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar2 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    uVar4 = 0x4d6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00ab97e0 */
uint F_00ab97e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab97e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    uVar4 = 0x4e0;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00ab98f0 */
uint F_00ab98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (uVar2 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x18)));
    if ((char)param_2 == '\x01') {
      uVar6 = 0x186;
    }
    else {
      if ((char)param_2 != '\x02') {
        uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return (uint)uVar5;
      }
      uVar6 = 0x187;
    }
    F_00ab0230(uVar6,((undefined1 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_4;
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x74)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x18)));
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_3 & 0xff;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    F_00aaece0(uVar2,0x4cf,param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_00ab9ad0 */
uint F_00ab9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      this = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    uVar3 = param_3 & 0xffff;
    uVar4 = (*(undefined4 *)(gen_frame + 0x0));
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar4 = 0x4d0;
      }
      else {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = uVar3;
        uVar4 = 0x4d1;
        (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
        (*(char *)(gen_frame + 0x24)) = '\0';
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
      }
    }
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00ab9c00 */
uint F_00ab9c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      this = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    F_00aaece0(uVar1,0x4eb,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00ab9cf0 */
uint F_00ab9cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x10e88fa),REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 0: ;
    F_00ab98f0(*(undefined4 *)(param_2 + 2),(uint)*(byte *)(param_2 + 4),
                 (uint)*(byte *)(param_2 + 6),*(undefined4 *)(param_2 + 8));
    break;
  case 1: ;
    if (REFG(int, 0x1379694) == 0) {
LAB_00ab9dd9: ;
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0x20)));
      goto LAB_00ab9f00;
    }
    F_00ab9090(*(undefined4 *)(REFG(int, 0x1379694) + 0x74),*(undefined4 *)(param_2 + 0xc));
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 8),(uint)(ushort)param_2[10]
                );
    break;
  case 2: ;
    F_00ab9550(*(undefined4 *)(param_2 + 2),(uint)(ushort)param_2[4]);
    break;
  case 3: ;
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),(uint)(ushort)param_2[6])
    ;
    break;
  case 4: ;
    uVar6 = 0x4e5;
    goto LAB_00ab9eda;
  case 5: ;
    if (piVar1 != (int *)0x0) {
      F_004816e0(((undefined1 *)(gen_frame + 0x8)));
      F_00aaece0(piVar1,0x4e7,*(undefined4 *)(param_2 + 2),((undefined1 *)(gen_frame + 0x8)));
      F_00493180(((undefined1 *)(gen_frame + 0x8)));
    }
    break;
  case 6: ;
    if (piVar1 == (int *)0x0) goto LAB_00ab9dd9;
    if (*(int *)(param_2 + 2) == 0) {
      uVar6 = 0x4e9;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046a630(pvVar3,uVar6);
    }
    else {
      F_004816e0(((undefined1 *)(gen_frame + 0x8)));
      uVar6 = *(undefined4 *)(param_2 + 2);
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = uVar6;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
      (*(undefined1 *)(gen_frame + 0x94)) = 0;
      F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x8c)));
      puVar5 = ((undefined1 *)(gen_frame + 0x8));
      uVar6 = 0x4ea;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046aa70(pvVar3,uVar6,puVar5);
      F_00493180(((undefined1 *)(gen_frame + 0x8)));
    }
    break;
  case 8: ;
    uVar6 = 0x4dd;
LAB_00ab9eda: ;
    F_00ab9000(uVar6);
    break;
  case 9: ;
    F_00ab9c00(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
LAB_00ab9f00: ;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)uVar4;
}

/* ref: FUN_00ab9f70 */
uint F_00ab9f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x2f08) = param_1;
  *(undefined4 *)((int)this + 0x2f0c) = param_2;
  return param_1;
}

/* ref: FUN_00ab9fb0 */
uint F_00ab9fb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xab9fb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00ab9fe0 */
uint F_00ab9fe0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xab9fe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00aba030 */
byte F_00aba030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aba090 */
uint F_00aba090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x48) = param_2;
  return param_2;
}

/* ref: FUN_00aba0f0 */
uint F_00aba0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaba0f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(param_1 + 2) = param_4;
  *param_1 = (undefined2)param_2;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return (uint)param_1;
}

/* ref: FUN_00aba120 */
int F_00aba120(unsigned int gen_a0)
{
  GEN_ENTER(0xaba120u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  char * pcVar3;
  int iVar4;
  
  cVar2 = *param_1;
  iVar1 = 0;
  if (cVar2 != '\0') {
    iVar4 = 1;
    pcVar3 = param_1;
    do {
      pcVar3 = pcVar3 + 1;
      iVar1 = iVar1 + cVar2 * iVar4;
      cVar2 = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (cVar2 != '\0');
  }
  return iVar1;
}

/* ref: FUN_00aba150 */
uint F_00aba150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00aba170 */
uint F_00aba170(unsigned int gen_a0)
{
  GEN_ENTER(0xaba170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 7);
}

/* ref: FUN_00aba190 */
uint F_00aba190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaba190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  return param_1 * param_3 + (param_2 >> 3);
}

/* ref: FUN_00aba220 */
uint F_00aba220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba220u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba240 */
uint F_00aba240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba240u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba280 */
uint F_00aba280(unsigned int gen_a0)
{
  GEN_ENTER(0xaba280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba2a0 */
byte F_00aba2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *(uint *)(*(int *)this + uVar2 * 8);
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*(uint *)(*(int *)this + -8 + *param_2 * 8) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *(int *)((int)this + 4) - 1U) {
          do {
            if (*(uint *)(*(int *)this + 8 + *param_3 * 8) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *(int *)((int)this + 4) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba340 */
uint F_00aba340(unsigned int gen_a0)
{
  GEN_ENTER(0xaba340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba360 */
byte F_00aba360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *(uint *)(*(int *)this + uVar2 * 8);
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*(uint *)(*(int *)this + -8 + *param_2 * 8) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *(int *)((int)this + 4) - 1U) {
          do {
            if (*(uint *)(*(int *)this + 8 + *param_3 * 8) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *(int *)((int)this + 4) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba400 */
uint F_00aba400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba400u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00aba430 */
uint F_00aba430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba430u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba490 */
uint F_00aba490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba4b0 */
uint F_00aba4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba510 */
uint F_00aba510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba510u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba570 */
uint F_00aba570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x50,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba5a0 */
uint F_00aba5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x50,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba5d0 */
uint F_00aba5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaba5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00aba600 */
unsigned int F_00aba600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return 0;
}

/* ref: FUN_00aba680 */
uint F_00aba680(unsigned int gen_a0)
{
  GEN_ENTER(0xaba680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba690 */
uint F_00aba690(unsigned int gen_a0)
{
  GEN_ENTER(0xaba690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6a0 */
uint F_00aba6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6b0 */
uint F_00aba6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6c0 */
uint F_00aba6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return (uint)param_1;
}

/* ref: FUN_00aba6f0 */
uint F_00aba6f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xaba6f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 400;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return (uint)in_ecx;
}

/* ref: FUN_00aba730 */
uint F_00aba730(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xaba730u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 0x194;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return (uint)in_ecx;
}

/* ref: FUN_00aba7a0 */
uint F_00aba7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba7e0 */
uint F_00aba7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba7f0 */
uint F_00aba7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1);
  return uVar1;
}

/* ref: FUN_00aba840 */
byte F_00aba840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  return (*((byte *)GEN_TOP(((param_3 >> 3) + param_2 * param_4 + param_1))) & '\x01' << ((byte)param_3 & 7))
         != 0;
}

/* ref: FUN_00aba870 */
uint F_00aba870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x7c) + param_2 * 0xc;
}

/* ref: FUN_00aba890 */
uint F_00aba890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00aba8a0 */
uint F_00aba8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00aba8d0 */
uint F_00aba8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(uint *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00aba940 */
uint F_00aba940(unsigned int gen_a0)
{
  GEN_ENTER(0xaba940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *(uint *)((int)this + 4);
  local_8 = (undefined4 *)
            F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0);
  puVar3 = local_8;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *(undefined4 *)(*(int *)this + 4 + uVar4 * 8);
      local_8[local_10 * 2] = *(undefined4 *)(*(int *)this + uVar4 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar4 * 8) = 0;
      uVar2 = *(uint *)((int)this + 4);
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*(int *)((int)this + 4) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != (undefined4 *)0x0) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00abaa30 */
uint F_00abaa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(uint *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00abaaa0 */
uint F_00abaaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xabaaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *(uint *)((int)this + 4);
  local_8 = (undefined4 *)
            F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0);
  puVar3 = local_8;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *(undefined4 *)(*(int *)this + 4 + uVar4 * 8);
      local_8[local_10 * 2] = *(undefined4 *)(*(int *)this + uVar4 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar4 * 8) = 0;
      uVar2 = *(uint *)((int)this + 4);
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*(int *)((int)this + 4) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != (undefined4 *)0x0) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00ababf0 */
uint F_00ababf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xababf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00abac00 */
byte F_00abac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00abac20 */
uint F_00abac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
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

/* ref: FUN_00abac50 */
uint F_00abac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x50;
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

/* ref: FUN_00abac90 */
uint F_00abac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abacc0 */
uint F_00abacc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabacc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abacf0 */
uint F_00abacf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabacf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad20 */
uint F_00abad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad50 */
uint F_00abad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad80 */
uint F_00abad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abadb0 */
uint F_00abadb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabadb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abade0 */
uint F_00abade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabade0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae10 */
uint F_00abae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae40 */
uint F_00abae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae70 */
uint F_00abae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaea0 */
uint F_00abaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaed0 */
uint F_00abaed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf00 */
uint F_00abaf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf30 */
uint F_00abaf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf60 */
uint F_00abaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf90 */
uint F_00abaf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abafc0 */
uint F_00abafc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabafc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaff0 */
uint F_00abaff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb020 */
uint F_00abb020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb050 */
uint F_00abb050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb080 */
uint F_00abb080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb0b0 */
uint F_00abb0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb0e0 */
uint F_00abb0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb110 */
uint F_00abb110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb140 */
uint F_00abb140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb170 */
uint F_00abb170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb1a0 */
uint F_00abb1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb1d0 */
uint F_00abb1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb200 */
uint F_00abb200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb230 */
uint F_00abb230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb260 */
uint F_00abb260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb290 */
uint F_00abb290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb2c0 */
uint F_00abb2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb2f0 */
uint F_00abb2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb320 */
uint F_00abb320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb350 */
uint F_00abb350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb380 */
uint F_00abb380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb3b0 */
uint F_00abb3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb3e0 */
uint F_00abb3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb410 */
uint F_00abb410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb440 */
uint F_00abb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb470 */
uint F_00abb470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb4a0 */
uint F_00abb4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb4d0 */
uint F_00abb4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb500 */
uint F_00abb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb530 */
uint F_00abb530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb560 */
uint F_00abb560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb590 */
uint F_00abb590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb5c0 */
uint F_00abb5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb5f0 */
uint F_00abb5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb620 */
uint F_00abb620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb650 */
uint F_00abb650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabb650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2,param_3,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb680 */
uint F_00abb680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb6b0 */
uint F_00abb6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb6e0 */
uint F_00abb6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb710 */
uint F_00abb710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb740 */
uint F_00abb740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb770 */
uint F_00abb770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb7a0 */
uint F_00abb7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb7d0 */
uint F_00abb7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb800 */
uint F_00abb800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabb800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2,param_3,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb830 */
uint F_00abb830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb860 */
uint F_00abb860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb890 */
uint F_00abb890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb8c0 */
uint F_00abb8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb8f0 */
uint F_00abb8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb920 */
uint F_00abb920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb950 */
uint F_00abb950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb980 */
uint F_00abb980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb9b0 */
uint F_00abb9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb9e0 */
uint F_00abb9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abba10 */
uint F_00abba10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabba10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abba40 */
uint F_00abba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabba40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abba70 */
uint F_00abba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabba70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbaa0 */
uint F_00abbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbad0 */
uint F_00abbad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbb00 */
uint F_00abbb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbb30 */
uint F_00abbb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbb60 */
uint F_00abbb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbb90 */
uint F_00abbb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbbc0 */
uint F_00abbbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbbf0 */
uint F_00abbbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbc20 */
uint F_00abbc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbc20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbc50 */
uint F_00abbc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbc80 */
uint F_00abbc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbc80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbcb0 */
uint F_00abbcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbce0 */
uint F_00abbce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbd10 */
uint F_00abbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbd10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbd40 */
uint F_00abbd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbd40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbd70 */
uint F_00abbd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbd70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbda0 */
uint F_00abbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbdd0 */
uint F_00abbdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbe00 */
uint F_00abbe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbe00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbe30 */
uint F_00abbe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbe60 */
uint F_00abbe60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabbe60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2,param_3,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbe90 */
uint F_00abbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbe90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbec0 */
uint F_00abbec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbef0 */
uint F_00abbef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbf20 */
uint F_00abbf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbf20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbf50 */
uint F_00abbf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbf50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbf80 */
uint F_00abbf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbf80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbfb0 */
uint F_00abbfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abbfe0 */
uint F_00abbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc010 */
uint F_00abc010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc040 */
uint F_00abc040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc070 */
uint F_00abc070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc0a0 */
uint F_00abc0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc0d0 */
uint F_00abc0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc100 */
uint F_00abc100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc130 */
uint F_00abc130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc160 */
uint F_00abc160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc190 */
uint F_00abc190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc1c0 */
uint F_00abc1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc1f0 */
uint F_00abc1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc220 */
uint F_00abc220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc250 */
uint F_00abc250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc280 */
uint F_00abc280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc2b0 */
uint F_00abc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc2e0 */
uint F_00abc2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc310 */
uint F_00abc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc340 */
uint F_00abc340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc370 */
uint F_00abc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc3a0 */
uint F_00abc3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc3d0 */
uint F_00abc3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc400 */
uint F_00abc400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc430 */
uint F_00abc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc460 */
uint F_00abc460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc490 */
uint F_00abc490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc4c0 */
uint F_00abc4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc4f0 */
uint F_00abc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc520 */
uint F_00abc520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc550 */
uint F_00abc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc580 */
uint F_00abc580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc5b0 */
uint F_00abc5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc5e0 */
uint F_00abc5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc610 */
uint F_00abc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc640 */
uint F_00abc640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc670 */
uint F_00abc670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc6a0 */
uint F_00abc6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc6d0 */
uint F_00abc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc700 */
uint F_00abc700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc730 */
uint F_00abc730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc760 */
uint F_00abc760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc790 */
uint F_00abc790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc7c0 */
uint F_00abc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc7f0 */
uint F_00abc7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc820 */
uint F_00abc820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc850 */
uint F_00abc850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc880 */
uint F_00abc880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc8b0 */
uint F_00abc8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc8e0 */
uint F_00abc8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc910 */
uint F_00abc910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc940 */
uint F_00abc940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc970 */
uint F_00abc970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc9a0 */
uint F_00abc9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abc9d0 */
uint F_00abc9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabc9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abca00 */
uint F_00abca00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabca00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abca30 */
uint F_00abca30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabca30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abca60 */
uint F_00abca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabca60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abca90 */
uint F_00abca90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabca90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcac0 */
uint F_00abcac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcaf0 */
uint F_00abcaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcb20 */
uint F_00abcb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcb50 */
uint F_00abcb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcb80 */
uint F_00abcb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcbb0 */
uint F_00abcbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcbe0 */
uint F_00abcbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcc10 */
uint F_00abcc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcc10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcc40 */
uint F_00abcc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcc40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcc70 */
uint F_00abcc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcca0 */
uint F_00abcca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abccd0 */
uint F_00abccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcd00 */
uint F_00abcd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcd00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcd30 */
uint F_00abcd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcd30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcd60 */
uint F_00abcd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcd60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcd90 */
uint F_00abcd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcdc0 */
uint F_00abcdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcdf0 */
uint F_00abcdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abce20 */
uint F_00abce20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabce20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abce50 */
uint F_00abce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabce50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abce80 */
uint F_00abce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabce80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abceb0 */
uint F_00abceb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabceb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcee0 */
uint F_00abcee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcf10 */
uint F_00abcf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcf10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcf40 */
uint F_00abcf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcf40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcf70 */
uint F_00abcf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcf70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcfa0 */
uint F_00abcfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abcfd0 */
uint F_00abcfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabcfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abd000 */
uint F_00abd000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abd030 */
uint F_00abd030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abd060 */
uint F_00abd060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abd090 */
uint F_00abd090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: FUN_00abd0c0 */
byte F_00abd0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x10,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00abd120 */
unsigned int F_00abd120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00abd170 */
uint F_00abd170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: FUN_00abd1b0 */
uint F_00abd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00abd1c0 */
uint F_00abd1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00abd1e0 */
byte F_00abd1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00abd200 */
uint F_00abd200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00abd210 */
unsigned int F_00abd210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00abd260 */
unsigned int F_00abd260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00abd2a0 */
uint F_00abd2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xabd2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return (uint)puVar1;
}

/* ref: FUN_00abd2f0 */
unsigned int F_00abd2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      }
      puVar1 = puVar1 + 4;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00abd330 */
uint F_00abd330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00abd2a0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00abd370 */
uint F_00abd370(unsigned int gen_a0)
{
  GEN_ENTER(0xabd370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00abd3b0 */
unsigned int F_00abd3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00abd2f0(param_1,param_2,param_3,(int)this + 0xc);
  return 0;
}

/* ref: FUN_00abd3d0 */
uint F_00abd3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00abd2a0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00abd400 */
uint F_00abd400(unsigned int gen_a0)
{
  GEN_ENTER(0xabd400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00abd440 */
uint F_00abd440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x10,0,800);
    F_00abd2f0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,800);
    }
    uVar4 = param_1 * 0x10 + uVar3;
    *(uint *)((int)this + 4) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00abd4d0 */
uint F_00abd4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 4, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3 = puVar3 + 4;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x10;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00abd520 */
uint F_00abd520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3 = puVar3 + 4;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00abd570 */
uint F_00abd570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00abd440(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00abd440(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00abd5e0 */
uint F_00abd5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar2 = iVar2 - iVar1 >> 4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x10;
    uVar3 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar3;
    *(uint *)((int)this + 4) = uVar3;
    *(uint *)((int)this + 8) = iVar2 + uVar3;
    uVar3 = F_00abd2a0(*param_1,param_1[1],uVar3,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_00abd660 */
uint F_00abd660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00abd570(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00abd570(this,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return (uint)puVar1;
}

/* ref: FUN_00abd710 */
uint F_00abd710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)this + 0x12) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(param_1 + 5);
  *(undefined1 *)((int)this + 0x16) = *(undefined1 *)((int)param_1 + 0x16);
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  F_00abd5e0((undefined *)((int)this + 0x1c),param_1 + 7);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return (uint)this;
}

/* ref: FUN_00abd7a0 */
uint F_00abd7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x24) - iVar1 & 0xfffffff0,800);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00abd7f0 */
unsigned int F_00abd7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00abd710(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00abd810 */
uint F_00abd810(unsigned int gen_a0)
{
  GEN_ENTER(0xabd810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)(param_1 + 0x24) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return uVar2;
}

/* ref: FUN_00abd850 */
unsigned int F_00abd850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00abd710(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00abd870 */
uint F_00abd870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabd870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)(param_2 + 0x24) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return uVar2;
}

/* ref: FUN_00abd8b0 */
uint F_00abd8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabd8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    piVar4 = param_1 + 7;
    do {
      iVar2 = *piVar4;
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        uVar5 = F_00429760(iVar2,piVar4[2] - iVar2 & 0xfffffff0,800);
        piVar3 = (int *)uVar5;
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar1 = piVar4 + 0xd;
      piVar4 = piVar4 + 0x14;
    } while (piVar1 != param_2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00abd900 */
uint F_00abd900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd900u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_00abd710(this,iVar1);
    }
    iVar1 = iVar1 + 0x50;
    this = (undefined *)((int)this + 0x50);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00abd940 */
uint F_00abd940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00abd8b0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00abd960 */
uint F_00abd960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd960u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00abd710(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x50);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00abd9a0 */
uint F_00abd9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabd9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00abd8b0(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00abd9c0 */
uint F_00abd9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xabd9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00abd8b0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x50) * 0x50,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00abda30 */
uint F_00abda30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabda30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00abd710(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x50);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00abda80 */
uint F_00abda80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabda80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x50;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x50,0,800);
    F_00abda30(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00abd8b0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x50) * 0x50,800);
    }
    *(uint *)((int)this + 8) = param_1 * 0x50 + uVar3;
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x50) * 0x50 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00abdb60 */
uint F_00abdb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabdb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x50;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x50;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00abda80(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00abda80(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00abdbf0 */
unsigned int F_00abdbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabdbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00abdb60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00abd710(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x50) * 0x50 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x50;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00abdb60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00abd710(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x50;
  return 0;
}

/* ref: FUN_00abdc70 */
uint F_00abdc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabdc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00abd9c0((undefined *)((int)this + 0xa0));
  F_00ab4f20((undefined *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00abdca0 */
uint F_00abdca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabdca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 * 0x1000000 + param_2;
}

/* ref: FUN_00abdcb0 */
uint F_00abdcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabdcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00abdce0 */
uint F_00abdce0(unsigned int gen_a0)
{
  GEN_ENTER(0xabdce0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x58) = 0;
  return in_ecx;
}

/* ref: FUN_00abdd00 */
uint F_00abdd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabdd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00abdd30 */
byte F_00abdd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xabdd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_0042ccf0((undefined *)((int)this + 0x128),param_1);
  *(undefined1 *)((int)this + 0x17c) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x17d) = (undefined1)param_3;
  *(byte *)((int)this + 0x17e) = (byte)param_4;
  *(undefined1 *)((int)this + 0x17f) = (undefined1)param_5;
  *(undefined1 *)((int)this + 0x180) = (undefined1)param_6;
  return (byte)param_4;
}

/* ref: FUN_00abdd80 */
uint F_00abdd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabdd80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x128);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 8))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar3)));
  uVar3 = (*(uint *)&gen_args[1]);
  if (piVar4 == (int *)0x0) {
    return 0xfffffffe;
  }
  iVar1 = *piVar4;
  puVar7 = &(*(uint *)&gen_args[1]);
  uVar5 = F_0042a990((*(uint *)&gen_args[1]));
  piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))
                            (piVar4,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))),uVar5,puVar7)));
  if (piVar6 == (int *)0x0) {
    iVar1 = *piVar4;
    puVar7 = &(*(uint *)&gen_args[1]);
    uVar5 = F_0042a990(uVar3);
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))
                              (piVar4,*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))) + 1,uVar5,puVar7)));
    if (piVar6 == (int *)0x0) {
      iVar1 = *piVar4;
      puVar7 = &(*(uint *)&gen_args[1]);
      uVar5 = F_0042a990(uVar3);
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))
                                (piVar4,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17d))),uVar5,puVar7)));
      if (piVar6 == (int *)0x0) {
        iVar1 = *piVar4;
        puVar7 = &(*(uint *)&gen_args[1]);
        uVar3 = F_0042a990(uVar3);
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))
                                  (piVar4,*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17d))) + 1,uVar3,puVar7)));
        if (piVar6 == (int *)0x0) {
          return 0xfffffffe;
        }
      }
    }
  }
  puVar2 = (*(uint * PTR32 *)&gen_args[2]);
  if ((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
    *puVar2 = uVar3;
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00abde80 */
uint F_00abde80(unsigned int gen_a0)
{
  GEN_ENTER(0xabde80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd0;
}

/* ref: FUN_00abde90 */
uint F_00abde90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabde90u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  
  uVar2 = F_0042aca0(param_2);
  pbVar3 = param_1;
  if (*param_1 == 0) {
LAB_00abdf30: ;
    return (int)pbVar3 - (int)param_1;
  }
  do {
    bVar1 = *pbVar3;
    if (bVar1 == 2) {
      bVar1 = pbVar3[2];
      uVar2 = F_0042d590(param_2,pbVar3,bVar1 + 2);
      pbVar3 = pbVar3 + bVar1 + 2;
    }
    else {
      if (bVar1 == 0x22) {
        pbVar3 = pbVar3 + 1;
        uVar2 = F_0042a970(param_2);
        if (uVar2 == 0) {
          bVar1 = *pbVar3;
          for (uVar2 = (uint)bVar1; (bVar1 != 0 && ((char)uVar2 != '\"'));
              uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1)) {
            if ((char)uVar2 == '\x02') {
              bVar1 = pbVar3[2];
              uVar2 = F_0042d590(param_2,pbVar3,bVar1 + 2);
              pbVar3 = pbVar3 + bVar1 + 2;
            }
            else {
              uVar2 = F_0042d160(param_2,uVar2);
              pbVar3 = pbVar3 + 1;
            }
            bVar1 = *pbVar3;
          }
LAB_00abdf2e: ;
          pbVar3 = pbVar3 + 1;
        }
        goto LAB_00abdf30;
      }
      if (bVar1 == 0x20) {
        uVar2 = F_0042a970(param_2);
        if (uVar2 != 0) goto LAB_00abdf2e;
        uVar2 = 0;
      }
      else {
        uVar2 = F_0042d160(param_2,CONCAT31((int3)(uVar2 >> 8),bVar1));
      }
    }
    pbVar3 = pbVar3 + 1;
    if (*pbVar3 == 0) {
      return (int)pbVar3 - (int)param_1;
    }
  } while( true );
}

/* ref: FUN_00abdf40 */
uint F_00abdf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabdf40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  iVar2 = param_2 * 0x5c + *(int *)((int)this + 0x194);
  if (*(undefined * PTR32 *)(iVar2 + 0x58) != (undefined *)0x0) {
    this_00 = (undefined *)F_00cb4e70(*(undefined * PTR32 *)(iVar2 + 0x58),&(*(uint *)(gen_frame + 0xc)));
    while (this_00 != (undefined *)0x0) {
      uVar3 = REFG(undefined4, 0x108cc50);
      uVar1 = F_0042a990(param_1);
      F_0042cc20(((undefined1 *)(gen_frame + 0x10)),uVar1,uVar3);
      uVar3 = REFG(undefined4, 0x108cc50);
      uVar1 = F_00cb0950(this_00,*(undefined4 *)(iVar2 + 0x54));
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),uVar1,uVar3);
      uVar1 = F_00ad9c10(((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      if (uVar1 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(uint *)(gen_frame + 0xc));
      }
      this_00 = (undefined *)F_00cb4f10(*(undefined * PTR32 *)(iVar2 + 0x58),&(*(uint *)(gen_frame + 0xc)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0xfffffffe;
}

/* ref: FUN_00abe040 */
uint F_00abe040(unsigned int gen_a0)
{
  GEN_ENTER(0xabe040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = *(int *)((int)this + 0x188) - *(int *)((int)this + 0x184) >> 4;
  if (local_14 != 0) {
    local_10 = 0;
    do {
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x184) + local_10)));
      iVar3 = *piVar5;
      iVar1 = piVar5[1] - iVar3 >> 0x1f;
      if ((piVar5[1] - iVar3) / 0x5c + iVar1 != iVar1) {
        local_c = 0;
        uVar4 = 0;
        do {
          iVar3 = local_c + iVar3;
          if (*(int *)(iVar3 + 0x58) == 0) {
            iVar1 = **(int * PTR32 *)((int)this + 4);
            uVar2 = F_0042a990(iVar3);
            uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)((int)this + 4),uVar2);
            *(uint *)(iVar3 + 0x58) = uVar2;
          }
          iVar3 = *piVar5;
          local_c = local_c + 0x5c;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)((piVar5[1] - iVar3) / 0x5c));
      }
      local_10 = local_10 + 0x10;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_14 = (*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c;
  uVar4 = 0;
  if (local_14 != 0) {
    local_10 = 0;
    do {
      iVar3 = *(int *)((int)this + 0x194) + local_10;
      if (*(undefined * PTR32 *)(iVar3 + 0x58) == (undefined *)0x0) {
        iVar1 = **(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(iVar3);
        uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)((int)this + 4),uVar4);
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = F_00406b90(0x1c,0,0);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00cb4d90(uVar4,uVar2);
          }
          *(uint *)(iVar3 + 0x58) = uVar4;
        }
      }
      else {
        uVar4 = F_00cb4cc0(*(undefined * PTR32 *)(iVar3 + 0x58));
      }
      local_10 = local_10 + 0x5c;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return uVar4;
}

/* ref: FUN_00abe1a0 */
byte F_00abe1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c;
  uVar4 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      bVar2 = F_0042b660(((undefined *)GEN_TOP((*(int *)((int)this + 0x194) + iVar3))),param_1);
      if ((bVar2 != 0) && (*((int *)GEN_TOP((iVar3 + 0x58 + *(int *)((int)this + 0x194)))) != 0)) {
        bVar2 = F_00cb50e0(*((undefined * PTR32 *)GEN_TOP((uVar4 * 0x5c + 0x58 + *(int *)((int)this + 0x194)))),param_2);
        return bVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00abe230 */
byte F_00abe230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  
  if ((param_1 < (uint)((*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c)) &&
     (iVar2 = param_1 * 0x5c + *(int *)((int)this + 0x194), *(int *)(iVar2 + 0x58) != 0)) {
    bVar1 = F_00cb50e0(*(undefined * PTR32 *)(iVar2 + 0x58),param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00abe290 */
byte F_00abe290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c;
  uVar4 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      bVar2 = F_0042b660(((undefined *)GEN_TOP((*(int *)((int)this + 0x194) + iVar3))),param_1);
      if ((bVar2 != 0) && (*((int *)GEN_TOP((iVar3 + 0x58 + *(int *)((int)this + 0x194)))) != 0)) {
        F_00cb5220(*((undefined * PTR32 *)GEN_TOP((uVar4 * 0x5c + 0x58 + *(int *)((int)this + 0x194)))),param_2);
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00abe320 */
byte F_00abe320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  if ((param_1 < (uint)((*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c)) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((param_1 * 0x5c + 0x58 + *(int *)((int)this + 0x194)))),
     this_00 != (undefined *)0x0)) {
    F_00cb5220(this_00,param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_00abe380 */
unsigned int F_00abe380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabe380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  iVar3 = *(int *)((int)this + 0x198) - *(int *)((int)this + 0x194);
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x5c + iVar1;
  iVar4 = 0;
  local_8 = 0;
  if (iVar3 != iVar1) {
    while( true ) {
      bVar2 = F_0042b660(((undefined *)GEN_TOP((*(int *)((int)this + 0x194) + iVar4))),param_1);
      if ((bVar2 != 0) && (*((int *)GEN_TOP((iVar4 + 0x58 + *(int *)((int)this + 0x194)))) != 0)) break;
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x5c;
      if ((uint)(iVar3 - iVar1) <= local_8) {
        return 0;
      }
    }
    F_00cb4d30(*((undefined * PTR32 *)GEN_TOP((local_8 * 0x5c + 0x58 + *(int *)((int)this + 0x194)))));
  }
  return 0;
}

/* ref: FUN_00abe410 */
unsigned int F_00abe410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabe410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  if ((param_1 < (uint)((*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c)) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((param_1 * 0x5c + 0x58 + *(int *)((int)this + 0x194)))),
     this_00 != (undefined *)0x0)) {
    F_00cb4d30(this_00);
  }
  return 0;
}

/* ref: FUN_00abe460 */
byte F_00abe460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabe460u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if ((*(uint *)&REFG(undefined, 0x14bce7c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce7c) = *(uint *)&REFG(undefined, 0x14bce7c) | 1;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x14bce70) =
         (*(undefined * PTR32 (*)[2])REFP(0x10e90c8));
    F_00c47de6(((code *)REFP(0x107c6f0)));
  }
  REFG(undefined4, 0x14bce78) = F_0042a990(param_3);
  *(undefined4 *)&REFG(undefined, 0x14bce74) = param_2;
  ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1,&REFG(undefined, 0x14bce70),param_4);
  return REFG(undefined4, 0x14bce78) == 0;
}

/* ref: FUN_00abe4d0 */
uint F_00abe4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP((param_2 * 0x10 + *(int *)((int)this + 0x184))));
  iVar5 = *piVar6;
  iVar3 = piVar6[1] - iVar5 >> 0x1f;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((piVar6[1] - iVar5) / 0x5c + iVar3 != iVar3) {
    param_2 = 0;
    do {
      piVar1 = *(int * PTR32 *)(param_2 + 0x58 + iVar5);
      if (piVar1 != (int *)0x0) {
        uVar2 = *(undefined4 *)(param_2 + 0x54 + iVar5);
        if ((*(uint *)&REFG(undefined, 0x14bce7c) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x14bce7c) = *(uint *)&REFG(undefined, 0x14bce7c) | 1;
          *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x14bce70) =
               (*(undefined * PTR32 (*)[2])REFP(0x10e90c8));
          F_00c47de6(((code *)REFP(0x107c6f0)));
        }
        REFG(undefined4, 0x14bce78) = F_0042a990(param_1);
        *(undefined4 *)&REFG(undefined, 0x14bce74) = uVar2;
        ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,&REFG(undefined, 0x14bce70),&(*(int *)(gen_frame + 0x4)));
        if (REFG(undefined4, 0x14bce78) == 0) {
          return (*(uint *)(gen_frame + 0x8)) * 0x1000000 + (*(int *)(gen_frame + 0x4));
        }
      }
      iVar5 = *piVar6;
      param_2 = param_2 + 0x5c;
      uVar4 = (*(uint *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x8)) = uVar4;
    } while (uVar4 < (uint)((piVar6[1] - iVar5) / 0x5c));
  }
  return 0xfffffffe;
}

/* ref: FUN_00abe5d0 */
uint F_00abe5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabe5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (param_2 == 0) {
    bVar1 = F_00a4cda0(param_1,0);
    if (bVar1 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return 0xfffffffe;
    }
    uVar2 = F_00a4cf70(param_1,10);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar2;
  }
  if (param_2 != 1) {
    if (param_2 < 0) {
      uVar2 = F_00abdf40(this,param_1,-1 - param_2);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar2;
    }
    uVar2 = F_00abe4d0(this,param_1,param_2 + -2);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar2;
  }
  bVar1 = F_0042a980(param_1,0);
  if (bVar1 != 0x2f) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10e9098),REFG(undefined4, 0x108cc50));
    this_00 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)));
    uVar2 = F_0042e360(this_00,param_1);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    uVar2 = F_00abdd80(this,((undefined1 *)(gen_frame + 0xb4)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar2;
  }
  uVar2 = F_00abdd80(this,param_1,0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00abe720 */
byte F_00abe720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabe720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  char * pcVar2;
  uint uVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14bced4) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bced4) = *(uint *)&REFG(undefined, 0x14bced4) | 1;
    F_0042cc20(&REFG(undefined, 0x14bce80),&REFG(undefined, 0x10e909c),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c6d0)));
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00ada2c0(param_1,&REFG(undefined, 0x14bce80),&(*(int *)(gen_frame + 0xc)));
  iVar1 = (*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc)) >> 0x1f;
  if (((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54 + iVar1 != iVar1) {
    pcVar2 = (char *)F_0042a7f0((*(int *)(gen_frame + 0xc)),0);
    if (*pcVar2 == '/') {
      uVar3 = F_00abdd80(this,(*(int *)(gen_frame + 0xc)),0);
      if (uVar3 != 0xfffffffe) {
        F_0042ccf0((undefined *)((int)this + 0xd0),param_1);
        F_004876d0(&(*(int *)(gen_frame + 0xc)));
        return 1;
      }
    }
  }
  F_004876d0(&(*(int *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00abe7f0 */
uint F_00abe7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabe7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * this_00;
  undefined4 * puVar1;
  undefined * this_01;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  this_00 = (int *)((int)this + 0x194);
  if ((uint)((*(int *)((int)this + 0x198) - *this_00) / 0x5c) <= param_1) {
    F_00ac0aa0(this_00,param_1 + 1);
  }
  puVar1 = *(undefined4 * PTR32 *)(param_1 * 0x5c + 0x58 + *this_00);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_2);
  this_01 = (undefined *)(*this_00 + param_1 * 0x5c);
  (*(undefined4 *)(gen_frame + 0x60)) = param_3;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  F_0042ccf0(this_01,((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this_01 + 0x54) = (*(undefined4 *)(gen_frame + 0x60));
  *(undefined4 *)((int)this_01 + 0x58) = (*(undefined4 *)(gen_frame + 0x64));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: FUN_00abe8a0 */
uint F_00abe8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabe8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x7c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x124)));
  piVar1 = *(int * PTR32 *)((int)this + 8);
  iVar2 = *piVar1;
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x7c)));
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xc))(*(undefined4 *)((int)this + 8),(*(undefined4 *)(gen_frame + 0x1c)),uVar4);
  if (uVar4 == 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x124)));
    F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
    F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
    return 0xfffffffe;
  }
  F_00a21e20((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x7c)));
  F_0042ccf0(((undefined1 *)(gen_frame + 0x124)),((undefined1 *)(gen_frame + 0x7c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xd0)),&REFG(undefined, 0x10e90a0),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*(undefined * PTR32 (*)[1])REFP(0x10e90a4)),REFG(undefined4, 0x108cc50));
  F_0042d750(((undefined1 *)(gen_frame + 0x124)),((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0xd0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x28)));
  F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xd0)),&REFG(undefined, 0x10e90a8),REFG(undefined4, 0x108cc50));
  uVar4 = F_0042c910(((undefined1 *)(gen_frame + 0x124)),((undefined1 *)(gen_frame + 0xd0)),REFG(undefined4, 0x108cc50));
  if (uVar4 == REFG(undefined4, 0x108cc50)) {
    F_0042aca0(((undefined1 *)(gen_frame + 0x124)));
  }
  else {
    F_0042b9e0(((undefined1 *)(gen_frame + 0x124)),uVar4 + 1,REFG(undefined4, 0x108cc50));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
  bVar3 = F_0042a980(((undefined1 *)(gen_frame + 0x124)),0);
  if (bVar3 != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xd0)),&REFG(undefined, 0x10e90ac),REFG(undefined4, 0x108cc50));
    (*(uint *)(gen_frame + 0x20)) = 1;
    bVar3 = F_0042ac50(((undefined1 *)(gen_frame + 0x124)),((undefined1 *)(gen_frame + 0xd0)));
    (*(char *)(gen_frame + 0x27)) = '\0';
    if (bVar3 == 0) goto LAB_00abea50;
  }
  (*(char *)(gen_frame + 0x27)) = '\x01';
LAB_00abea50: ;
  if (((*(uint *)(gen_frame + 0x20)) & 1) != 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
  }
  if ((*(char *)(gen_frame + 0x27)) != '\0') {
    *param_2 = -1;
    param_2[1] = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0xd0)),&REFG(undefined, 0x10e909a),REFG(undefined4, 0x108cc50));
    F_0048a040(param_2 + 8,((undefined1 *)(gen_frame + 0xd0)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x124)));
    F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
    F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
    return 0;
  }
  bVar3 = F_0042a980(((undefined1 *)(gen_frame + 0x124)),0);
  if (bVar3 != 0x20) {
    if ((*(uint *)&REFG(undefined, 0x14bcf2c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14bcf2c) = *(uint *)&REFG(undefined, 0x14bcf2c) | 1;
      F_0042cc20(&REFG(undefined, 0x14bced8),&REFG(undefined, 0x10e90b0),REFG(undefined4, 0x108cc50));
      F_00c47de6(((code *)REFP(0x107c6e0)));
    }
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00ada2c0(((undefined1 *)(gen_frame + 0x7c)),&REFG(undefined, 0x14bced8),&(*(int *)(gen_frame + 0xc)));
    iVar2 = (*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc)) >> 0x1f;
    if (((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54 + iVar2 != iVar2) {
      pcVar5 = (char *)F_0042a7f0((*(int *)(gen_frame + 0xc)),0);
      if (*pcVar5 == '/') {
        uVar4 = F_00abdd80(this,(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x20)));
        *param_2 = (short)uVar4;
        if (-1 < (short)uVar4) {
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,(*(undefined4 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)),param_2);
          F_004876d0(&(*(int *)(gen_frame + 0xc)));
          F_0042c880(((undefined1 *)(gen_frame + 0x124)));
          F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
          F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
          return uVar4;
        }
        param_2[1] = 0;
        *param_2 = -1;
        F_0048a040(param_2 + 8,(*(undefined4 *)(gen_frame + 0x1c)));
      }
    }
    F_004876d0(&(*(int *)(gen_frame + 0xc)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x124)));
  F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return 0xffffffff;
}

/* ref: Component::Shell::ShellCommandModule::vf2 */
uint F_00abec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xabec40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  byte * pbVar2;
  char * pcVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x28)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_3;
  (*(int *)(gen_frame + 0x20)) = param_4;
  pbVar2 = (byte *)F_00cb0910(param_3,(uint)(byte)this[0x17e]);
  *(ushort *)(param_4 + 2) = (ushort)*pbVar2;
  uVar7 = 0;
  uVar10 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)((*(int *)(gen_frame + 0x20)) + 4);
  piVar6 = param_2;
  do {
    if ((uVar7 < *(ushort *)((*(int *)(gen_frame + 0x20)) + 2)) &&
       (iVar8 = *piVar6, piVar6 = (*(int * PTR32 *)(gen_frame + 0x28)), uVar7 + 1 < (uint)(((*(int * PTR32 *)(gen_frame + 0x28))[1] - iVar8) / 0x54))) {
      pcVar3 = (char *)F_00cb0910((*(undefined * PTR32 *)(gen_frame + 0x24)),(byte)(*(undefined * PTR32 *)(gen_frame + 0x1c))[0x17f] + uVar7);
      uVar4 = F_00abe5d0((*(undefined * PTR32 *)(gen_frame + 0x1c)),uVar10 + 0x54 + iVar8,(int)*pcVar3,&(*(int *)(gen_frame + 0xc)));
      *(*(uint * PTR32 *)(gen_frame + 0x2c)) = uVar4;
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x28));
    }
    else {
      *(*(uint * PTR32 *)(gen_frame + 0x2c)) = 0xffffffff;
    }
    (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x2c)) + 1;
    uVar10 = uVar10 + 0x54;
    uVar7 = uVar7 + 1;
  } while (uVar10 < 0xfc);
  pbVar2 = (byte *)F_00cb0910((*(undefined * PTR32 *)(gen_frame + 0x24)),(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x1c))[0x180]);
  (*(uint *)(gen_frame + 0x10)) = (uint)*pbVar2;
  F_0042b630(((undefined1 *)(gen_frame + 0x84)));
  uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x14)));
  uVar10 = F_00abde90(uVar7,((undefined1 *)(gen_frame + 0x84)));
  iVar8 = uVar7 + uVar10;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)uVar10;
  (*(uint *)(gen_frame + 0x18)) = 1;
  (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)0x1;
  if (1 < (*(uint *)(gen_frame + 0x10))) {
    (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x54;
    do {
      if ((uint)((piVar6[1] - *piVar6) / 0x54) <= (*(uint * PTR32 *)(gen_frame + 0x2c))) break;
      uVar10 = F_00abde90(iVar8,((undefined1 *)(gen_frame + 0x84)));
      iVar1 = (*(int *)(gen_frame + 0x20));
      uVar7 = *(uint *)((*(int *)(gen_frame + 0x20)) + 0x14);
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + uVar10);
      (*(int *)(gen_frame + 0xc)) = iVar8 + uVar10;
      uVar10 = *piVar6 + (int)(*(int * PTR32 *)(gen_frame + 0x28));
      if ((uVar10 < uVar7) && (uVar4 = *(uint *)((*(int *)(gen_frame + 0x20)) + 0x10), uVar4 <= uVar10)) {
        if (uVar7 == *(uint *)((*(int *)(gen_frame + 0x20)) + 0x18)) {
          F_00488ca0((undefined *)((*(int *)(gen_frame + 0x20)) + 0x10),1);
        }
        pvVar5 = *(undefined * PTR32 *)(iVar1 + 0x14);
        if (pvVar5 != (undefined *)0x0) {
          uVar10 = ((int)(uVar10 - uVar4) / 0x54) * 0x54 + *(int *)(iVar1 + 0x10);
LAB_00abee7b: ;
          F_0042cbc0(pvVar5,uVar10);
        }
      }
      else {
        if (uVar7 == *(uint *)((*(int *)(gen_frame + 0x20)) + 0x18)) {
          F_00488ca0((undefined *)((*(int *)(gen_frame + 0x20)) + 0x10),1);
        }
        pvVar5 = *(undefined * PTR32 *)(iVar1 + 0x14);
        if (pvVar5 != (undefined *)0x0) goto LAB_00abee7b;
      }
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x28));
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 0x54;
      pcVar3 = (char *)F_0042a7e0(*piVar6 + (int)(*(int * PTR32 *)(gen_frame + 0x28)),0);
      if (*pcVar3 == '<') {
        (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x2c)) + 1);
        piVar9 = piVar9 + 0x15;
      }
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      uVar7 = (int)(*(uint * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)uVar7;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar9 + 0x15;
      iVar8 = (*(int *)(gen_frame + 0xc));
    } while (uVar7 < (*(uint *)(gen_frame + 0x10)));
  }
  if ((uint)((piVar6[1] - *piVar6) / 0x54) <= (*(uint *)(gen_frame + 0x18))) goto LAB_00abef80;
  uVar10 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x30)),(*(undefined * PTR32 *)(gen_frame + 0x24)),REFG(undefined4, 0x108cc50));
  iVar8 = (*(int *)(gen_frame + 0x20));
  uVar7 = *(uint *)((*(int *)(gen_frame + 0x20)) + 0x14);
  if ((uVar10 < uVar7) && (uVar4 = *(uint *)((*(int *)(gen_frame + 0x20)) + 0x10), uVar4 <= uVar10)) {
    if (uVar7 == *(uint *)((*(int *)(gen_frame + 0x20)) + 0x18)) {
      F_00488ca0((undefined *)((*(int *)(gen_frame + 0x20)) + 0x10),1);
    }
    pvVar5 = *(undefined * PTR32 *)(iVar8 + 0x14);
    if (pvVar5 != (undefined *)0x0) {
      uVar10 = ((int)(uVar10 - uVar4) / 0x54) * 0x54 + *(int *)(iVar8 + 0x10);
LAB_00abef6b: ;
      F_0042cbc0(pvVar5,uVar10);
    }
  }
  else {
    if (uVar7 == *(uint *)((*(int *)(gen_frame + 0x20)) + 0x18)) {
      F_00488ca0((undefined *)((*(int *)(gen_frame + 0x20)) + 0x10),1);
    }
    pvVar5 = *(undefined * PTR32 *)(iVar8 + 0x14);
    if (pvVar5 != (undefined *)0x0) goto LAB_00abef6b;
  }
  *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 0x54;
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
LAB_00abef80: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: FUN_00abefa0 */
uint F_00abefa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabefa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  undefined * this_00;
  char * pcVar2;
  code * pcVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\0') goto LAB_00abf109;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  uVar1 = F_00abe8a0(this,param_1,((undefined1 *)(gen_frame + 0xb8)));
  if (uVar1 == 0) {
    puVar5 = ((undefined1 *)(gen_frame + 0xb8));
    (*(int *)(gen_frame + 0x8)) = *(int *)this;
    uVar1 = F_00ad9050((undefined *)((int)this + 0xac),puVar5,param_2);
    ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x8)) + 4))(this,uVar1,puVar5,param_1,param_2);
  }
  else if (uVar1 == 0xffffffff) {
    uVar1 = F_00ad9460((undefined *)((int)this + 0xac),param_1,param_2);
    if (uVar1 == 0xfffffffe) {
      uVar1 = F_0042b790((undefined *)((int)this + 0xd0));
      if (uVar1 != 0) {
        F_00487650(&(*(undefined4 *)(gen_frame + 0xc8)),&(*(int *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc8)),(*(undefined4 *)(gen_frame + 0xcc)));
        puVar5 = ((undefined1 *)(gen_frame + 0xb8));
        puVar4 = ((undefined1 *)(gen_frame + 0x10));
        puVar6 = param_1;
        this_00 = (undefined *)F_0042cdb0((undefined *)((int)this + 0xd0),((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10e90b4));
        uVar1 = F_0042cd30(this_00,puVar4,puVar6);
        uVar1 = F_00abe8a0(this,uVar1,puVar5);
        (*(bool *)(gen_frame + 0xf)) = uVar1 == 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x10)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        if ((*(bool *)(gen_frame + 0xf)) != false) {
          puVar5 = ((undefined1 *)(gen_frame + 0xb8));
          (*(int *)(gen_frame + 0x8)) = *(int *)this;
          uVar1 = F_00ad9050((undefined *)((int)this + 0xac),puVar5,param_2);
          pcVar3 = *(gen_code32 *)((*(int *)(gen_frame + 0x8)) + 4);
          puVar6 = param_1;
          uVar7 = param_2;
          goto LAB_00abf0fd;
        }
      }
    }
    else if (uVar1 == 0xffffffff) {
      uVar1 = 0xffffffff;
      goto LAB_00abf0f8;
    }
  }
  else if (uVar1 != 0xfffffffe) {
LAB_00abf0f8: ;
    puVar5 = ((undefined1 *)(gen_frame + 0xb8));
    pcVar3 = *(gen_code32 *)(*(int *)this + 4);
    puVar6 = param_1;
    uVar7 = param_2;
LAB_00abf0fd: ;
    (*pcVar3)(this,uVar1,puVar5,puVar6,uVar7);
  }
  pcVar2 = (char *)F_004876d0(&(*(undefined4 *)(gen_frame + 0xc8)));
LAB_00abf109: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)pcVar2;
}

/* ref: FUN_00abf120 */
uint F_00abf120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xabf120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e90d4));
  *(undefined4 *)((int)this + 4) = param_1;
  F_00a29aa0((undefined *)((int)this + 0xc));
  F_00ad93e0((undefined *)((int)this + 0xac));
  F_0042b630((int)this + 0xd0);
  *(undefined1 *)((int)this + 0x124) = 0;
  F_0042b630((int)this + 0x128);
  *(undefined1 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  return (uint)this;
}

/* ref: FUN_00abf1a0 */
uint F_00abf1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xabf1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e90d4));
  iVar4 = (*(int *)((int)this + 0x198) - *(int *)((int)this + 0x194)) / 0x5c;
  if (iVar4 != 0) {
    iVar5 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + 0x58 + *(int *)((int)this + 0x194))));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      iVar5 = iVar5 + 0x5c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x194);
  if (this_00 != (undefined *)0x0) {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x198);
    for (; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x5c)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)((int)this + 0x194),
                 ((*(int *)((int)this + 0x19c) - *(int *)((int)this + 0x194)) / 0x5c) * 0x5c,0x2c5);
  }
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  if (*(int *)((int)this + 0x184) != 0) {
    F_00ac0d10(*(int *)((int)this + 0x184),*(undefined4 *)((int)this + 0x188),(int)this + 400,this
                );
    F_00429760(*(int *)((int)this + 0x184),
                 *(int *)((int)this + 0x18c) - *(int *)((int)this + 0x184) & 0xfffffff0,0x2c5);
  }
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  F_0042c880((undefined *)((int)this + 0x128));
  F_0042c880((undefined *)((int)this + 0xd0));
  F_00ad9170((undefined *)((int)this + 0xac));
  uVar3 = F_00a29b20((undefined *)((int)this + 0xc));
  return uVar3;
}

/* ref: FUN_00abf2e0 */
uint F_00abf2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xabf2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((uint)(*(int *)((int)this + 0x188) - *(int *)((int)this + 0x184) >> 4) <= param_1) {
    F_00ac1120((int *)((int)this + 0x184),param_1 + 1);
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_2);
  (*(undefined4 *)(gen_frame + 0x60)) = param_3;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  F_00ac0b50(((undefined *)GEN_TOP((param_1 * 0x10 + *(int *)((int)this + 0x184)))),((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar1;
}

/* ref: FUN_00abf380 */
uint F_00abf380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00abf3d0 */
uint F_00abf3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf3d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00abf400 */
uint F_00abf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf400u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x5c + *in_ecx;
}

/* ref: FUN_00abf430 */
uint F_00abf430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x5c + *in_ecx;
}

/* ref: FUN_00abf490 */
uint F_00abf490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf490u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00abf4f0 */
uint F_00abf4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x2c5);
  return (uint)uVar1;
}

/* ref: FUN_00abf550 */
uint F_00abf550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x5c,0x2c5);
  return (uint)uVar1;
}

/* ref: FUN_00abf5a0 */
uint F_00abf5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf5a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x2c5);
  return uVar1;
}

/* ref: FUN_00abf5d0 */
uint F_00abf5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf5d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0x2c5);
  return uVar1;
}

/* ref: FUN_00abf600 */
uint F_00abf600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0x2c5);
  return uVar1;
}

/* ref: FUN_00abf620 */
uint F_00abf620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x5c,0x2c5);
  return (uint)uVar1;
}

/* ref: FUN_00abf650 */
uint F_00abf650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabf650u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x10;
  return (uint)in_ecx;
}

