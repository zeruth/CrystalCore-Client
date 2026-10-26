#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00acfb50 */
byte F_00acfb50(unsigned int gen_a0)
{
  GEN_ENTER(0xacfb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 8);
  do {
    if (*piVar3 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0xc))((int *)*piVar3);
      if ((char)uVar2 != '\0') {
        piVar3 = *(int * PTR32 *)((int)this + uVar4 * 4 + 8);
        ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 2);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042aca0((int)this + 0x20);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_0042aca0((int)this + 0x74);
  piVar3 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 200) = 0;
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  return 1;
}

/* ref: FUN_00acfc20 */
byte F_00acfc20(unsigned int gen_a0)
{
  GEN_ENTER(0xacfc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  int * piVar9;
  bool bVar10;
  undefined * local_c;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4));
  uVar8 = 0;
  piVar9 = (int *)((int)this + 8);
  local_c = (undefined *)((int)this + 0x20);
  do {
    piVar2 = (int *)*piVar9;
    if ((piVar2 == (int *)0x0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), (char)uVar4 == '\0'))
    goto switchD_00acfc7f_default;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x10))((int *)*piVar9);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x18))((int *)*piVar9);
      if (uVar4 / 100 != 2) goto switchD_00acfc7f_caseD_1;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x14))((int *)*piVar9)));
      uVar4 = F_00bc86e0(this_00,"return_code");
      if (uVar4 == 0) {
        piVar9[4] = 4;
      }
      else {
        pbVar5 = *(byte * PTR32 *)(uVar4 + 4);
        pbVar7 = &REFG(undefined1, 0x10ea39c);
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00acfcf0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00acfcf5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00acfcf0;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00acfcf5: ;
        if (iVar6 == 0) {
          piVar9[4] = 2;
        }
        else {
          piVar9[4] = 3;
          uVar4 = F_00bc86e0(this_00,"return_status");
          F_0042e430(local_c,*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 1) {
        uVar4 = F_00bc86e0(this_00,"sessionKey");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0xcc),*(undefined4 *)(uVar4 + 4));
        }
        uVar4 = F_00bc86e0(this_00,"lastaccess");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0x120),*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 2) {
        F_00acf910(this_00,0);
        F_00acf810(this,uVar8,1);
      }
      goto switchD_00acfc7f_default;
    case 1: ;
    case 2: ;
switchD_00acfc7f_caseD_1: ;
      piVar9[4] = 4;
      break;
    case 3: ;
      piVar9[4] = 5;
      break;
    case 4: ;
      piVar9[4] = 6;
      break;
    default: ;
      goto switchD_00acfc7f_default;
    }
    if (((int)uVar8 < 2) && (puVar3 = (undefined4 *)*piVar9, puVar3 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *piVar9 = 0;
    }
switchD_00acfc7f_default: ;
    local_c = (undefined *)((int)local_c + 0x54);
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
    if (1 < uVar8) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfdf0 */
uint F_00acfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
    return uVar2;
  }
  cVar1 = *(char *)(REFG(int, 0x137104c) + 0x1d);
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    pcVar3 = "ja";
    break;
  case (undefined *)0x1: ;
    if (cVar1 != '\x03') {
      uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
      return uVar2;
    }
    uVar2 = F_00c49908((int)this + 0x174,8,"en-gb");
    return uVar2;
  case (undefined *)0x2: ;
    pcVar3 = "de";
    break;
  case (undefined *)0x3: ;
    pcVar3 = "fr";
    break;
  case (undefined *)0x4: ;
  case (undefined *)0x5: ;
    pcVar3 = "ch";
    break;
  default: ;
    pcVar3 = "en-us";
  }
  uVar2 = F_00c49908((int)this + 0x174,8,pcVar3);
  return uVar2;
}

/* ref: FUN_00acfed0 */
byte F_00acfed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacfed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * puVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 4) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c) ^ (uint)(uint)(gen_frame + 0x11c));
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea658);
    break;
  case 2: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea674);
    break;
  case 3: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea694));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               &REFG(undefined, 0x10ea6a4),"get_init",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 4: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea6b4));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               "information","get_headline_all",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 5: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6d8);
    break;
  case 6: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6f8);
    break;
  case 7: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea710);
    break;
  case 8: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea728);
    break;
  case 9: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea748);
    break;
  case 10: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea764);
    break;
  case 0xb: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea784);
    break;
  default: ;
    goto switchD_00acff24_default;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:");
LAB_00ad00b5: ;
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(uint *)((int)this + 200) =
         *(uint *)((int)this + 200) &
         ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                    (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x8)),ppuVar3,param_3,param_4);
  if (uVar2 != 0) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
    *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return 1;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
switchD_00acff24_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: FUN_00ad0190 */
uint F_00ad0190(unsigned int gen_a0)
{
  GEN_ENTER(0xad0190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  bVar1 = F_00acfb50(this);
  while (bVar1 == 0) {
    F_00acfc20(this);
    bVar1 = F_00acfb50(this);
  }
  F_0042c880((undefined *)((int)this + 0x120));
  F_0042c880((undefined *)((int)this + 0xcc));
  this_00 = (undefined *)((int)this + 200);
  iVar2 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    uVar3 = F_0042c880(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_00ad01f0 */
byte F_00ad01f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad01f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    return 1;
  }
  F_00acfdf0(this);
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  piVar1 = (int *)F_00bc89d0();
  *(int * PTR32 *)((int)this + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return (byte)uVar2;
}

/* ref: FUN_00ad0240 */
byte F_00ad0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0xc4)),0x100);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if ((REFG(int, 0x137104c) != 0) && (*(int *)(REFG(int, 0x137104c) + 0x25f4) != 0)) {
      bVar1 = F_0049bd60(&(*(undefined4 *)(gen_frame + 0x4)));
      if ((bVar1 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0)) {
        uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0xc)));
        if ((uVar2 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0)) {
          uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x10)));
          if (uVar2 != 0) {
            F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
            F_0042b630(((undefined1 *)(gen_frame + 0x70)));
            F_0042d000(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea3c8),(*(undefined4 *)(gen_frame + 0x14)));
            F_0042d000(((undefined1 *)(gen_frame + 0x70)),&REFG(undefined, 0x10ea3cc),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<params>");
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0xc)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"gamesession",uVar2);
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"world",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"characterid",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"sessionid",uVar2);
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"</params>");
            F_0042c880(((undefined1 *)(gen_frame + 0x70)));
            F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
            uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xc4)));
            uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
            bVar1 = F_00acfed0(this,param_1,1,uVar3,uVar2);
            F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
            return bVar1;
          }
        }
      }
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: FUN_00ad0470 */
byte F_00ad0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
    if (uVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    uVar2 = F_0042a990((int)this + 0xcc);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar2);
    uVar2 = F_0042a990((int)this + 0x120);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"lastaccess",uVar2);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    F_0042aca0((int)this + 0xcc);
    F_0042aca0((int)this + 0x120);
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    bVar1 = F_00acfed0(this,param_1,2,uVar3,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00ad05a0 */
uint F_00ad05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    bVar1 = F_00acfed0(this,param_1,3,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ad05e0 */
byte F_00ad05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,"</%s>",&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    bVar1 = F_00acfed0(this,param_1,4,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c));
  return 0;
}

/* ref: FUN_00ad0700 */
byte F_00ad0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c) ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  uVar2 = F_0042a990(param_2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),"queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),uVar2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>","queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea70c)),"get_list");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea6f8),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 6;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0916;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0916: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return bVar4;
}

/* ref: FUN_00ad0940 */
byte F_00ad0940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c) ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10ea4a8)),param_2);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea724)),"get_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea710),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 7;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0b03;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0b03: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return bVar4;
}

/* ref: FUN_00ad0b30 */
byte F_00ad0b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x100);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10ea4d0),(int)this + 0x174);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"mainCategoryId",param_2);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"subCategoryId",param_3);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","get_template");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea728),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 8;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0d0a;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0d0a: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar4;
}

/* ref: FUN_00ad0d30 */
byte F_00ad0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
LAB_00ad0d70: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) goto LAB_00ad0d70;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var5 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea51c),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"ticketId",*param_2);
  uVar2 = F_0042a990(param_2 + 1);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",param_2[0x16]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",param_2[0x17]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"status",param_2[0x18]);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar2 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea584),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","post_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea748),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 9;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0ff1;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0ff1: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return bVar4;
}

/* ref: FUN_00ad1020 */
byte F_00ad1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
LAB_00ad1060: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) goto LAB_00ad1060;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var5 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea5b8),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  uVar2 = F_0042a990(param_2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",*(undefined4 *)(param_2 + 0x54));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",*(undefined4 *)(param_2 + 0x58));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar2 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea60c),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "report","post_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea784),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0xb;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad12b3;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad12b3: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return bVar4;
}

/* ref: FUN_00ad12e0 */
byte F_00ad12e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad12e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  uVar4 = F_00bc86e0(param_1,"information");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xa8) != iVar2) {
    uVar5 = F_00ad41d0(iVar2,iVar2,*(int *)(param_2 + 0xa8),(undefined *)(param_2 + 0xa8));
    F_00485c80(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    *(uint *)(param_2 + 0xac) = uVar5;
  }
  iVar2 = *(int *)(uVar4 + 8);
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    F_0042b630(((undefined1 *)(gen_frame + 0x70)));
    F_0042b630(((undefined1 *)(gen_frame + 0xd4)));
    F_0042b630(((undefined1 *)(gen_frame + 0x128)));
    F_0042b630(((undefined1 *)(gen_frame + 0x17c)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar8 = (byte *)*puVar3;
      pcVar9 = "title";
      pbVar6 = pbVar8;
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00ad13e0: ;
          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad13e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00ad13e0;
        pbVar6 = pbVar6 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad13e5: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar3[1]);
      }
      else {
        pcVar9 = "content";
        pbVar6 = pbVar8;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1424: ;
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1429;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1424;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00ad1429: ;
        if (iVar7 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x70)),puVar3[1]);
        }
        else {
          pcVar9 = "published";
          pbVar6 = pbVar8;
          do {
            bVar1 = *pbVar6;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1468: ;
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad146d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1468;
            pbVar6 = pbVar6 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00ad146d: ;
          if (iVar7 == 0) {
            uVar4 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(int *)(gen_frame + 0xc)) = (int)uVar4 >> 0x1f;
            F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x8)));
            (*(char *)(gen_frame + 0xc6)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
            (*(undefined1 *)(gen_frame + 0xc7)) = (*(undefined1 *)(gen_frame + 0x1e0));
            (*(short *)(gen_frame + 0xc4)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
            (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x1dc));
            (*(undefined1 *)(gen_frame + 0xc9)) = (*(undefined1 *)(gen_frame + 0x1d8));
            (*(undefined1 *)(gen_frame + 0xca)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
          }
          else {
            pcVar9 = "updated";
            pbVar6 = pbVar8;
            do {
              bVar1 = *pbVar6;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad1510: ;
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1515;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad1510;
              pbVar6 = pbVar6 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad1515: ;
            if (iVar7 == 0) {
              uVar4 = F_00c4c74c(puVar3[1]);
              (*(uint *)(gen_frame + 0x10)) = uVar4;
              (*(int *)(gen_frame + 0x14)) = (int)uVar4 >> 0x1f;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x10)));
              (*(char *)(gen_frame + 0xce)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xcf)) = (*(undefined1 *)(gen_frame + 0x1e0));
              (*(short *)(gen_frame + 0xcc)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd0)) = (*(undefined1 *)(gen_frame + 0x1dc));
              (*(undefined1 *)(gen_frame + 0xd1)) = (*(undefined1 *)(gen_frame + 0x1d8));
              (*(undefined1 *)(gen_frame + 0xd2)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
            }
            else {
              pbVar10 = &REFG(undefined1, 0x10eaa9c);
              pbVar6 = pbVar8;
              do {
                bVar1 = *pbVar6;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad15b1: ;
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad15b6;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad15b1;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00ad15b6: ;
              if (iVar7 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar3[1]);
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10eaaa4);
                pbVar6 = pbVar8;
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad15f5: ;
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad15fa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad15f5;
                  pbVar6 = pbVar6 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_00ad15fa: ;
                if (iVar7 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x17c)),puVar3[1]);
                }
                else {
                  pcVar9 = "lsb_parendid";
                  pbVar6 = pbVar8;
                  do {
                    bVar1 = *pbVar6;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad1636: ;
                      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad163b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad1636;
                    pbVar6 = pbVar6 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00ad163b: ;
                  if (iVar7 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x128)),puVar3[1]);
                  }
                  else {
                    pcVar9 = "catId";
                    do {
                      bVar1 = *pbVar8;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad1677: ;
                        iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad167c;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad1677;
                      pbVar8 = pbVar8 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_00ad167c: ;
                    if (iVar7 == 0) {
                      uVar4 = F_00c4c74c(puVar3[1]);
                      (*(uint *)(gen_frame + 0x1d0)) = uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    F_00ad6270((*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1c)));
    iVar2 = *(int *)(iVar2 + 0xc);
    F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  } while( true );
}

/* ref: FUN_00ad1700 */
byte F_00ad1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  undefined * PTR32 * ppuVar9;
  undefined * this;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = F_00bc86e0(param_1,"faq_itemList");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar2 = *(int *)(uVar4 + 8);
  this = (undefined *)(param_2 + 0xa8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  F_00ad5370(this,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x10)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar7 = (byte *)*puVar3;
      pcVar8 = "title";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad17b0: ;
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad17b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad17b0;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad17b5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x10)),puVar3[1]);
      }
      else {
        ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaadc));
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < *(byte *)ppuVar9;
          if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad17f0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00ad17f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < *(byte *)((int)ppuVar9 + 1);
          if (bVar1 != *(byte *)((int)ppuVar9 + 1)) goto LAB_00ad17f0;
          pbVar7 = pbVar7 + 2;
          ppuVar9 = (undefined * PTR32 *)((int)ppuVar9 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad17f5: ;
        if (iVar6 == 0) {
          uVar4 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x64)) = uVar4;
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    F_00ad6340(this,((undefined1 *)(gen_frame + 0x10)));
    iVar2 = *(int *)(iVar2 + 0xc);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  } while( true );
}

/* ref: FUN_00ad1850 */
byte F_00ad1850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1850u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  uVar3 = F_00bc86e0(param_1,"faq_item");
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)(uVar3 + 8);
  this = param_1;
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) == (undefined4 *)0x0) {
      uVar3 = F_00bc86e0(this,"faq_rel");
      if (uVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
        return 0;
      }
      iVar5 = *(int *)(uVar3 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(param_2 + 0x164);
      F_00ad5370((undefined *)(param_2 + 0x164),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),*(undefined4 *)(param_2 + 0x164),
                   *(undefined4 *)(param_2 + 0x168));
      do {
        if (iVar5 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return 1;
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
        for (puVar2 = *(undefined4 * PTR32 *)(iVar5 + 8); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[3]) {
          pbVar7 = (byte *)*puVar2;
          pcVar9 = "title";
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1bc0: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1bc5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1bc0;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1bc5: ;
          if (iVar6 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar2[1]);
          }
          else {
            ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eab44));
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *(byte *)ppuVar10;
              if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1c00: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1c05;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
              if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1c00;
              pbVar7 = pbVar7 + 2;
              ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1c05: ;
            if (iVar6 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              (*(uint *)(gen_frame + 0x70)) = uVar3;
            }
          }
        }
        F_00ad6340((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)));
        iVar5 = *(int *)(iVar5 + 0xc);
        F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      } while( true );
    }
    pbVar7 = (byte *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    pbVar8 = &REFG(undefined1, 0x10eaaec);
    pbVar4 = pbVar7;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00ad18d0: ;
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00ad18d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00ad18d0;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00ad18d5: ;
    if (iVar5 == 0) {
      for (puVar2 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[3]) {
        pbVar7 = (byte *)*puVar2;
        pcVar9 = "title";
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1920: ;
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1925;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1920;
          pbVar4 = pbVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad1925: ;
        if (iVar5 == 0) {
          F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
        }
        else {
          ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaafc));
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *(byte *)ppuVar10;
            if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1964: ;
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1969;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
            if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1964;
            pbVar4 = pbVar4 + 2;
            ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad1969: ;
          if (iVar5 == 0) {
            uVar3 = F_00c4c74c(puVar2[1]);
            *(uint *)(param_2 + 0xfc) = uVar3;
          }
          else {
            pcVar9 = "mainCategoryId";
            pbVar4 = pbVar7;
            do {
              bVar1 = *pbVar4;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad19b0: ;
                iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad19b5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad19b0;
              pbVar4 = pbVar4 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad19b5: ;
            if (iVar5 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              *(uint *)(param_2 + 0x100) = uVar3;
            }
            else {
              pcVar9 = "subCategoryId";
              pbVar4 = pbVar7;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00ad19f7: ;
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad19fc;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < (byte)pcVar9[1];
                if (bVar1 != pcVar9[1]) goto LAB_00ad19f7;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad19fc: ;
              if (iVar5 == 0) {
                uVar3 = F_00c4c74c(puVar2[1]);
                *(uint *)(param_2 + 0x104) = uVar3;
              }
              else {
                pcVar9 = "dateTime";
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1a40: ;
                    iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1a45;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1a40;
                  pbVar7 = pbVar7 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad1a45: ;
                if (iVar5 == 0) {
                  uVar3 = F_00c4c74c(puVar2[1]);
                  (*(uint *)(gen_frame + 0xc)) = uVar3;
                  (*(int *)(gen_frame + 0x10)) = (int)uVar3 >> 0x1f;
                  F_00c4f4ca(((undefined1 *)(gen_frame + 0x74)),&(*(uint *)(gen_frame + 0xc)));
                  *(char *)(param_2 + 0x10a) = (*(char *)(gen_frame + 0x84)) + '\x01';
                  *(undefined1 *)(param_2 + 0x10b) = (*(undefined1 *)(gen_frame + 0x80));
                  *(short *)(param_2 + 0x108) = (short)(*(undefined4 *)(gen_frame + 0x88)) + 0x76c;
                  *(undefined1 *)(param_2 + 0x10c) = (*(undefined1 *)(gen_frame + 0x7c));
                  *(undefined1 *)(param_2 + 0x10d) = (*(undefined1 *)(gen_frame + 0x78));
                  *(undefined1 *)(param_2 + 0x10e) = ((undefined1 *)(gen_frame + 0x74))[0];
                }
              }
            }
          }
        }
      }
    }
    else {
      pbVar4 = &REFG(undefined1, 0x10eab2c);
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00ad1af0: ;
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad1af5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00ad1af0;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00ad1af5: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0x110),(*(undefined4 * PTR32 *)(gen_frame + 0x18))[1]);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[3];
    this = (*(undefined * PTR32 *)(gen_frame + 0x14));
  } while( true );
}

/* ref: FUN_00ad1c60 */
byte F_00ad1c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  uint * this;
  int iVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = F_00bc86e0(param_1,"report_templateList");
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar9 = *(int *)(uVar5 + 8);
  this = (uint *)(param_2 + 0xa8);
  (*(int *)(gen_frame + 0x10)) = iVar9;
  F_00ad54e0(this,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
  iVar7 = iVar9;
  do {
    if (iVar7 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    for (puVar2 = *(undefined4 * PTR32 *)(iVar9 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar6 = (byte *)*puVar2;
      pbVar8 = &REFG(undefined1, 0x10eab78);
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00ad1d10: ;
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad1d15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00ad1d10;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad1d15: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x14)),puVar2[1]);
      }
    }
    puVar3 = *(undefined1 * PTR32 *)(param_2 + 0xac);
    if ((((undefined1 *)(gen_frame + 0x14)) < puVar3) && (puVar4 = (undefined1 *)*this, puVar4 <= ((undefined1 *)(gen_frame + 0x14)))) {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      iVar9 = (*(int *)(gen_frame + 0x10));
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),
                     (((int)((undefined1 *)(gen_frame + 0x14)) - (int)puVar4) / 0x54) * 0x54 + *this);
        iVar9 = (*(int *)(gen_frame + 0x10));
      }
    }
    else {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),((undefined1 *)(gen_frame + 0x14)));
      }
    }
    *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 0x54;
    iVar7 = *(int *)(iVar9 + 0xc);
    (*(int *)(gen_frame + 0x10)) = iVar7;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    iVar9 = (*(int *)(gen_frame + 0x10));
  } while( true );
}

/* ref: FUN_00ad1dd0 */
byte F_00ad1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  undefined * this;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  uVar5 = F_00bc86e0(param_1,"history");
  if (uVar5 != 0) {
    iVar2 = *(int *)(uVar5 + 8);
    iVar7 = *(int *)(param_2 + 0xac);
    this = (undefined *)(param_2 + 0xa8);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    if (*(int *)(param_2 + 0xa8) != iVar7) {
      uVar5 = F_00ad4990(iVar7,iVar7,*(int *)(param_2 + 0xa8),this);
      F_00485ce0(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *(uint *)(param_2 + 0xac) = uVar5;
    }
    while (iVar2 != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x12c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x184)));
      F_0042b630(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x240)));
      for (puVar3 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[3]) {
        pbVar8 = (byte *)*puVar3;
        pcVar9 = "status";
        pbVar6 = pbVar8;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1ed0: ;
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1ed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1ed0;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00ad1ed5: ;
        if (iVar7 == 0) {
          uVar5 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x124)) = uVar5;
        }
        else {
          pbVar10 = &REFG(undefined1, 0x10ea8b0);
          pbVar6 = pbVar8;
          do {
            bVar1 = *pbVar6;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00ad1f17: ;
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1f1c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00ad1f17;
            pbVar6 = pbVar6 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00ad1f1c: ;
          if (iVar7 == 0) {
            uVar5 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x128)) = uVar5;
          }
          else {
            pbVar10 = &REFG(undefined1, 0x10ea8b8);
            pbVar6 = pbVar8;
            do {
              bVar1 = *pbVar6;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00ad1f60: ;
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1f65;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00ad1f60;
              pbVar6 = pbVar6 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad1f65: ;
            if (iVar7 == 0) {
              F_0042b630(((undefined1 *)(gen_frame + 0x10)));
              F_0042b630(((undefined1 *)(gen_frame + 0x68)));
              F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
              for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != (undefined4 *)0x0;
                  puVar4 = (undefined4 *)puVar4[3]) {
                pbVar8 = (byte *)*puVar4;
                pcVar9 = "messageId";
                pbVar6 = pbVar8;
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1fd0: ;
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1fd5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1fd0;
                  pbVar6 = pbVar6 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_00ad1fd5: ;
                if (iVar7 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x12c)),puVar4[1]);
                }
                else {
                  pcVar9 = "ticketId";
                  pbVar6 = pbVar8;
                  do {
                    bVar1 = *pbVar6;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2014: ;
                      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad2019;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2014;
                    pbVar6 = pbVar6 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00ad2019: ;
                  if (iVar7 == 0) {
                    uVar5 = F_00c4c74c(puVar4[1]);
                    (*(uint *)(gen_frame + 0x180)) = uVar5;
                  }
                  else {
                    pcVar9 = "summary";
                    pbVar6 = pbVar8;
                    do {
                      bVar1 = *pbVar6;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2060: ;
                        iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad2065;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar6[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2060;
                      pbVar6 = pbVar6 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_00ad2065: ;
                    if (iVar7 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x184)),puVar4[1]);
                    }
                    else {
                      pcVar9 = "mainCategoryId";
                      pbVar6 = pbVar8;
                      do {
                        bVar1 = *pbVar6;
                        bVar11 = bVar1 < (byte)*pcVar9;
                        if (bVar1 != *pcVar9) {
LAB_00ad20a4: ;
                          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                          goto LAB_00ad20a9;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar6[1];
                        bVar11 = bVar1 < (byte)pcVar9[1];
                        if (bVar1 != pcVar9[1]) goto LAB_00ad20a4;
                        pbVar6 = pbVar6 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar1 != 0);
                      iVar7 = 0;
LAB_00ad20a9: ;
                      if (iVar7 == 0) {
                        uVar5 = F_00c4c74c(puVar4[1]);
                        (*(uint *)(gen_frame + 0x1d8)) = uVar5;
                      }
                      else {
                        pcVar9 = "subCategoryId";
                        pbVar6 = pbVar8;
                        do {
                          bVar1 = *pbVar6;
                          bVar11 = bVar1 < (byte)*pcVar9;
                          if (bVar1 != *pcVar9) {
LAB_00ad20f0: ;
                            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                            goto LAB_00ad20f5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar6[1];
                          bVar11 = bVar1 < (byte)pcVar9[1];
                          if (bVar1 != pcVar9[1]) goto LAB_00ad20f0;
                          pbVar6 = pbVar6 + 2;
                          pcVar9 = pcVar9 + 2;
                        } while (bVar1 != 0);
                        iVar7 = 0;
LAB_00ad20f5: ;
                        if (iVar7 == 0) {
                          uVar5 = F_00c4c74c(puVar4[1]);
                          (*(uint *)(gen_frame + 0x1dc)) = uVar5;
                        }
                        else {
                          pbVar10 = &REFG(undefined1, 0x10ea900);
                          pbVar6 = pbVar8;
                          do {
                            bVar1 = *pbVar6;
                            bVar11 = bVar1 < *pbVar10;
                            if (bVar1 != *pbVar10) {
LAB_00ad2137: ;
                              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                              goto LAB_00ad213c;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar6[1];
                            bVar11 = bVar1 < pbVar10[1];
                            if (bVar1 != pbVar10[1]) goto LAB_00ad2137;
                            pbVar6 = pbVar6 + 2;
                            pbVar10 = pbVar10 + 2;
                          } while (bVar1 != 0);
                          iVar7 = 0;
LAB_00ad213c: ;
                          if (iVar7 == 0) {
                            F_0042e430(((undefined1 *)(gen_frame + 0x1e0)),puVar4[1]);
                          }
                          else {
                            pcVar9 = "status";
                            pbVar6 = pbVar8;
                            do {
                              bVar1 = *pbVar6;
                              bVar11 = bVar1 < (byte)*pcVar9;
                              if (bVar1 != *pcVar9) {
LAB_00ad2180: ;
                                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                goto LAB_00ad2185;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar6[1];
                              bVar11 = bVar1 < (byte)pcVar9[1];
                              if (bVar1 != pcVar9[1]) goto LAB_00ad2180;
                              pbVar6 = pbVar6 + 2;
                              pcVar9 = pcVar9 + 2;
                            } while (bVar1 != 0);
                            iVar7 = 0;
LAB_00ad2185: ;
                            if (iVar7 == 0) {
                              uVar5 = F_00c4c74c(puVar4[1]);
                              (*(uint *)(gen_frame + 0x234)) = uVar5;
                            }
                            else {
                              pcVar9 = "dateTime";
                              do {
                                bVar1 = *pbVar8;
                                bVar11 = bVar1 < (byte)*pcVar9;
                                if (bVar1 != *pcVar9) {
LAB_00ad21c7: ;
                                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                  goto LAB_00ad21cc;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar8[1];
                                bVar11 = bVar1 < (byte)pcVar9[1];
                                if (bVar1 != pcVar9[1]) goto LAB_00ad21c7;
                                pbVar8 = pbVar8 + 2;
                                pcVar9 = pcVar9 + 2;
                              } while (bVar1 != 0);
                              iVar7 = 0;
LAB_00ad21cc: ;
                              if (iVar7 == 0) {
                                uVar5 = F_00c4c74c(puVar4[1]);
                                (*(int *)(gen_frame + 0x4)) = (int)uVar5 >> 0x1f;
                                (*(uint *)(gen_frame + 0x0)) = uVar5;
                                F_00c4f4ca(((undefined1 *)(gen_frame + 0x294)),&(*(uint *)(gen_frame + 0x0)));
                                (*(char *)(gen_frame + 0x23a)) = (*(char *)(gen_frame + 0x2a4)) + '\x01';
                                (*(undefined1 *)(gen_frame + 0x23b)) = (*(undefined1 *)(gen_frame + 0x2a0));
                                (*(short *)(gen_frame + 0x238)) = (short)(*(undefined4 *)(gen_frame + 0x2a8)) + 0x76c;
                                (*(undefined1 *)(gen_frame + 0x23c)) = (*(undefined1 *)(gen_frame + 0x29c));
                                (*(undefined1 *)(gen_frame + 0x23d)) = (*(undefined1 *)(gen_frame + 0x298));
                                (*(undefined1 *)(gen_frame + 0x23e)) = ((undefined1 *)(gen_frame + 0x294))[0];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
              F_0042c880(((undefined1 *)(gen_frame + 0x68)));
              F_0042c880(((undefined1 *)(gen_frame + 0x10)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            else {
              pbVar6 = &REFG(undefined1, 0x10ea91c);
              do {
                bVar1 = *pbVar8;
                bVar11 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00ad2290: ;
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad2295;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar11 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00ad2290;
                pbVar8 = pbVar8 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00ad2295: ;
              if (iVar7 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0x240)),puVar3[1]);
              }
            }
          }
        }
      }
      F_00ad6660(this,&(*(uint *)(gen_frame + 0x124)));
      iVar2 = *(int *)((*(int *)(gen_frame + 0xc)) + 0xc);
      (*(int *)(gen_frame + 0xc)) = iVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x240)));
      F_0042c880(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x184)));
      F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return 1;
}

/* ref: FUN_00ad2320 */
byte F_00ad2320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad2320u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  int iVar5;
  byte * pbVar6;
  char * pcVar7;
  uint * puVar8;
  undefined * PTR32 * ppuVar9;
  byte * pbVar10;
  undefined4 * puVar11;
  uint uVar12;
  uint * puVar13;
  undefined4 * puVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0x2c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_2;
  uVar2 = F_00bc86e0(param_1,"information");
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
  if (puVar11 != (undefined4 *)0x0) {
    pbVar3 = (byte *)*puVar11;
    pbVar6 = &REFG(undefined1, 0x10ea940);
    do {
      bVar1 = *pbVar3;
      bVar15 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00ad23a0: ;
        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ad23a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar15 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00ad23a0;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00ad23a5: ;
    if (iVar4 != 0) goto LAB_00ad2d30;
    F_00ad5b00((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8));
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x28)));
      F_0042b630(((undefined1 *)(gen_frame + 0x7c)));
      F_0042b630(((undefined1 *)(gen_frame + 0xe0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x134)));
      F_0042b630(((undefined1 *)(gen_frame + 0x188)));
      for (puVar14 = (undefined4 *)puVar11[2]; puVar14 != (undefined4 *)0x0;
          puVar14 = (undefined4 *)puVar14[3]) {
        pbVar3 = (byte *)*puVar14;
        pcVar7 = "title";
        pbVar6 = pbVar3;
        do {
          bVar1 = *pbVar6;
          bVar15 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00ad2430: ;
            iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar15 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_00ad2430;
          pbVar6 = pbVar6 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00ad2435: ;
        if (iVar4 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x28)),puVar14[1]);
        }
        else {
          pcVar7 = "content";
          pbVar6 = pbVar3;
          do {
            bVar1 = *pbVar6;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2474: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2479;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2474;
            pbVar6 = pbVar6 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad2479: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x7c)),puVar14[1]);
          }
          else {
            pcVar7 = "published";
            pbVar6 = pbVar3;
            do {
              bVar1 = *pbVar6;
              bVar15 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00ad24b8: ;
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad24bd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar15 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_00ad24b8;
              pbVar6 = pbVar6 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00ad24bd: ;
            if (iVar4 == 0) {
              uVar2 = F_00c4c74c(puVar14[1]);
              (*(int *)(gen_frame + 0xc)) = (int)uVar2 >> 0x1f;
              (*(uint *)(gen_frame + 0x8)) = uVar2;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x8)));
              (*(char *)(gen_frame + 0xd2)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xd3)) = (*(undefined1 *)(gen_frame + 0x2b0));
              (*(short *)(gen_frame + 0xd0)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd4)) = (*(undefined1 *)(gen_frame + 0x2ac));
              (*(undefined1 *)(gen_frame + 0xd5)) = (*(undefined1 *)(gen_frame + 0x2a8));
              (*(undefined1 *)(gen_frame + 0xd6)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
            }
            else {
              pcVar7 = "updated";
              pbVar6 = pbVar3;
              do {
                bVar1 = *pbVar6;
                bVar15 = bVar1 < (byte)*pcVar7;
                if (bVar1 != *pcVar7) {
LAB_00ad2558: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad255d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar15 = bVar1 < (byte)pcVar7[1];
                if (bVar1 != pcVar7[1]) goto LAB_00ad2558;
                pbVar6 = pbVar6 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad255d: ;
              if (iVar4 == 0) {
                uVar2 = F_00c4c74c(puVar14[1]);
                (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)uVar2 >> 0x1f);
                (*(uint *)(gen_frame + 0x18)) = uVar2;
                F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x18)));
                (*(char *)(gen_frame + 0xda)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
                (*(undefined1 *)(gen_frame + 0xdb)) = (*(undefined1 *)(gen_frame + 0x2b0));
                (*(short *)(gen_frame + 0xd8)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
                (*(undefined1 *)(gen_frame + 0xdc)) = (*(undefined1 *)(gen_frame + 0x2ac));
                (*(undefined1 *)(gen_frame + 0xdd)) = (*(undefined1 *)(gen_frame + 0x2a8));
                (*(undefined1 *)(gen_frame + 0xde)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10ea96c);
                pbVar6 = pbVar3;
                do {
                  bVar1 = *pbVar6;
                  bVar15 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad25f8: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad25fd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar15 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad25f8;
                  pbVar6 = pbVar6 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad25fd: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0xe0)),puVar14[1]);
                }
                else {
                  pbVar10 = &REFG(undefined1, 0x10ea974);
                  pbVar6 = pbVar3;
                  do {
                    bVar1 = *pbVar6;
                    bVar15 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_00ad2640: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2645;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar15 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_00ad2640;
                    pbVar6 = pbVar6 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2645: ;
                  if (iVar4 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x188)),puVar14[1]);
                  }
                  else {
                    pcVar7 = "lsb_parendid";
                    pbVar6 = pbVar3;
                    do {
                      bVar1 = *pbVar6;
                      bVar15 = bVar1 < (byte)*pcVar7;
                      if (bVar1 != *pcVar7) {
LAB_00ad2684: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2689;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar6[1];
                      bVar15 = bVar1 < (byte)pcVar7[1];
                      if (bVar1 != pcVar7[1]) goto LAB_00ad2684;
                      pbVar6 = pbVar6 + 2;
                      pcVar7 = pcVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2689: ;
                    if (iVar4 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x134)),puVar14[1]);
                    }
                    else {
                      pcVar7 = "catId";
                      do {
                        bVar1 = *pbVar3;
                        bVar15 = bVar1 < (byte)*pcVar7;
                        if (bVar1 != *pcVar7) {
LAB_00ad26c5: ;
                          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                          goto LAB_00ad26ca;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar3[1];
                        bVar15 = bVar1 < (byte)pcVar7[1];
                        if (bVar1 != pcVar7[1]) goto LAB_00ad26c5;
                        pbVar3 = pbVar3 + 2;
                        pcVar7 = pcVar7 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_00ad26ca: ;
                      if (iVar4 == 0) {
                        uVar2 = F_00c4c74c(puVar14[1]);
                        (*(uint *)(gen_frame + 0x1dc)) = uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      F_00ad6270((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8),((undefined1 *)(gen_frame + 0x28)));
      puVar11 = (undefined4 *)puVar11[3];
      F_0042c880(((undefined1 *)(gen_frame + 0x188)));
      F_0042c880(((undefined1 *)(gen_frame + 0x134)));
      F_0042c880(((undefined1 *)(gen_frame + 0xe0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    } while (puVar11 != (undefined4 *)0x0);
  }
  uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_categoryList");
  if (uVar2 != 0) {
    puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      pbVar3 = (byte *)*puVar11;
      pcVar7 = "mainCategory";
      do {
        bVar1 = *pbVar3;
        bVar15 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00ad2795: ;
          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00ad279a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar15 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_00ad2795;
        pbVar3 = pbVar3 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00ad279a: ;
      if (iVar4 != 0) goto LAB_00ad2d30;
      F_00ad6a20((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8));
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x23c)));
        (*(uint * PTR32 *)(gen_frame + 0x294)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x298)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x29c)) = (uint *)0x0;
        puVar14 = (undefined4 *)puVar11[2];
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14, puVar14 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "label";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2807: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad280c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2807;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad280c: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x23c)),puVar14[1]);
          }
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "mainCategoryId";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2846: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2846;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad284b: ;
          if (iVar4 == 0) {
            uVar2 = F_00c4c74c(puVar14[1]);
            (*(uint *)(gen_frame + 0x290)) = uVar2;
          }
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "subCategoryList";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2885: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad288a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2885;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad288a: ;
          if (iVar4 == 0) {
            F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
            iVar4 = puVar14[2];
            (*(int *)(gen_frame + 0x10)) = iVar4;
            F_00ad52a0(&(*(uint * PTR32 *)(gen_frame + 0x294)),&(*(int *)(gen_frame + 0xc)),(*(uint * PTR32 *)(gen_frame + 0x294)),(*(uint * PTR32 *)(gen_frame + 0x298)));
            puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
            while (iVar4 != 0) {
              for (puVar11 = *(undefined4 * PTR32 *)(iVar4 + 8); puVar11 != (undefined4 *)0x0;
                  puVar11 = (undefined4 *)puVar11[3]) {
                pbVar3 = (byte *)*puVar11;
                pcVar7 = "label";
                pbVar6 = pbVar3;
                do {
                  bVar1 = *pbVar6;
                  bVar15 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_00ad2910: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2915;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar15 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_00ad2910;
                  pbVar6 = pbVar6 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2915: ;
                if (iVar4 == 0) {
                  F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar11[1]);
                }
                else {
                  pcVar7 = "subCategoryId";
                  do {
                    bVar1 = *pbVar3;
                    bVar15 = bVar1 < (byte)*pcVar7;
                    if (bVar1 != *pcVar7) {
LAB_00ad2951: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2956;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar15 = bVar1 < (byte)pcVar7[1];
                    if (bVar1 != pcVar7[1]) goto LAB_00ad2951;
                    pbVar3 = pbVar3 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2956: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar11[1]);
                    (*(uint *)(gen_frame + 0x238)) = uVar2;
                  }
                }
                puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
              }
              if ((&(*(uint *)(gen_frame + 0x1e4)) < (*(uint * PTR32 *)(gen_frame + 0x298))) && (puVar13 <= &(*(uint *)(gen_frame + 0x1e4)))) {
                iVar4 = (int)&(*(uint *)(gen_frame + 0x1e4)) - (int)puVar13;
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar5 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar5 == -1) {
LAB_00ad2b86: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar12 = iVar5 + 1;
                  if (uVar2 < uVar12) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar12) {
                      uVar2 = uVar12;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),puVar13 + (iVar4 / 0x58) * 0x16);
                  puVar8[0x15] = (puVar13 + (iVar4 / 0x58) * 0x16)[0x15];
                  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              else {
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar4 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar4 == -1) goto LAB_00ad2b86;
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar12 = iVar4 + 1;
                  if (uVar2 < uVar12) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar12) {
                      uVar2 = uVar12;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),&(*(uint *)(gen_frame + 0x1e4)));
                  puVar8[0x15] = (*(uint *)(gen_frame + 0x238));
                  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x298)) = puVar8 + 0x16;
              iVar4 = *(int *)((*(int *)(gen_frame + 0x10)) + 0xc);
              (*(int *)(gen_frame + 0x10)) = iVar4;
              puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
              puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
            }
            F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
          }
          puVar14 = (undefined4 *)puVar14[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        }
        F_00ad6af0((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8),((undefined1 *)(gen_frame + 0x23c)));
        puVar11 = (undefined4 *)puVar11[3];
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
        F_0048a290(&(*(uint * PTR32 *)(gen_frame + 0x294)));
        F_0042c880(((undefined1 *)(gen_frame + 0x23c)));
      } while (puVar11 != (undefined4 *)0x0);
    }
    uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_itemList");
    iVar4 = (*(int *)(gen_frame + 0x20));
    if (uVar2 != 0) {
      puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        pbVar3 = (byte *)*puVar11;
        pbVar6 = &REFG(undefined1, 0x10eaa10);
        do {
          bVar1 = *pbVar3;
          bVar15 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00ad2b90: ;
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2b95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar15 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00ad2b90;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad2b95: ;
        if (iVar5 != 0) goto LAB_00ad2d30;
        F_00ad53f0((undefined *)((*(int *)(gen_frame + 0x20)) + 200),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 200),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xcc));
        do {
          F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
          for (puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]; puVar11 != (undefined4 *)0x0;
              puVar11 = (undefined4 *)puVar11[3]) {
            pbVar3 = (byte *)*puVar11;
            pcVar7 = "title";
            pbVar6 = pbVar3;
            do {
              bVar1 = *pbVar6;
              bVar15 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00ad2c10: ;
                iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad2c15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar15 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_00ad2c10;
              pbVar6 = pbVar6 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad2c15: ;
            if (iVar5 == 0) {
              F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar11[1]);
            }
            else {
              ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaa20));
              do {
                bVar1 = *pbVar3;
                bVar15 = bVar1 < *(byte *)ppuVar9;
                if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad2c51: ;
                  iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2c56;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar15 = bVar1 < *(byte *)((int)ppuVar9 + 1);
                if (bVar1 != *(byte *)((int)ppuVar9 + 1)) goto LAB_00ad2c51;
                pbVar3 = pbVar3 + 2;
                ppuVar9 = (undefined * PTR32 *)((int)ppuVar9 + 2);
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad2c56: ;
              if (iVar5 == 0) {
                uVar2 = F_00c4c74c(puVar11[1]);
                (*(uint *)(gen_frame + 0x238)) = uVar2;
              }
            }
          }
          F_00ad63d0((undefined *)(iVar4 + 200),&(*(uint *)(gen_frame + 0x1e4)));
          puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
          F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
        } while (puVar11 != (undefined4 *)0x0);
      }
      uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"report_itemList");
      if (uVar2 != 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8);
        F_00ad5470((undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xdc));
        puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
        if (puVar11 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar11;
          pbVar6 = &REFG(undefined1, 0x10eaa34);
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00ad2d27: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2d2c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00ad2d27;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad2d2c: ;
          if (iVar4 != 0) goto LAB_00ad2d30;
          do {
            puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            F_0042b630(((undefined1 *)(gen_frame + 0x1e8)));
            for (puVar11 = (undefined4 *)puVar11[2]; puVar11 != (undefined4 *)0x0;
                puVar11 = (undefined4 *)puVar11[3]) {
              pbVar3 = (byte *)*puVar11;
              pbVar10 = &REFG(undefined1, 0x10eaa3c);
              pbVar6 = pbVar3;
              do {
                bVar1 = *pbVar6;
                bVar15 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad2da0: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2da5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar15 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad2da0;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad2da5: ;
              if (iVar4 == 0) {
                for (puVar14 = (undefined4 *)puVar11[2]; puVar14 != (undefined4 *)0x0;
                    puVar14 = (undefined4 *)puVar14[3]) {
                  pbVar3 = (byte *)*puVar14;
                  pcVar7 = "mainCategoryId";
                  pbVar6 = pbVar3;
                  do {
                    bVar1 = *pbVar6;
                    bVar15 = bVar1 < (byte)*pcVar7;
                    if (bVar1 != *pcVar7) {
LAB_00ad2df0: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2df5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar15 = bVar1 < (byte)pcVar7[1];
                    if (bVar1 != pcVar7[1]) goto LAB_00ad2df0;
                    pbVar6 = pbVar6 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2df5: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar14[1]);
                    (*(uint *)(gen_frame + 0x1e0)) = uVar2;
                  }
                  else {
                    pcVar7 = "subCategoryId";
                    do {
                      bVar1 = *pbVar3;
                      bVar15 = bVar1 < (byte)*pcVar7;
                      if (bVar1 != *pcVar7) {
LAB_00ad2e31: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2e36;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar3[1];
                      bVar15 = bVar1 < (byte)pcVar7[1];
                      if (bVar1 != pcVar7[1]) goto LAB_00ad2e31;
                      pbVar3 = pbVar3 + 2;
                      pcVar7 = pcVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2e36: ;
                    if (iVar4 == 0) {
                      uVar2 = F_00c4c74c(puVar14[1]);
                      (*(uint *)(gen_frame + 0x1e4)) = uVar2;
                    }
                  }
                }
              }
              else {
                pbVar6 = &REFG(undefined1, 0x10eaa64);
                do {
                  bVar1 = *pbVar3;
                  bVar15 = bVar1 < *pbVar6;
                  if (bVar1 != *pbVar6) {
LAB_00ad2e80: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2e85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar15 = bVar1 < pbVar6[1];
                  if (bVar1 != pbVar6[1]) goto LAB_00ad2e80;
                  pbVar3 = pbVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2e85: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x1e8)),puVar11[1]);
                }
              }
            }
            F_00ad6460((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x1e0)));
            puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
            (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
            F_0042c880(((undefined1 *)(gen_frame + 0x1e8)));
          } while (puVar11 != (undefined4 *)0x0);
        }
        F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
        return 1;
      }
    }
  }
LAB_00ad2d30: ;
  F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
  return 0;
}

/* ref: FUN_00ad2ef0 */
byte F_00ad2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad2ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if ((1 < param_1) ||
     ((piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 8), piVar1 != (int *)0x0 &&
      (*(int *)((int)this + param_1 * 4 + 0x18) == 1)))) {
    return 0;
  }
  if ((*(int *)((int)this + param_1 * 4 + 0x10) == 0) || (piVar1 == (int *)0x0)) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  if (*(char *)(uVar2 + 0x220) != '\0') {
    return 0;
  }
  uVar3 = F_00acf860(uVar2,param_2);
  if (0 < (int)uVar3) {
    F_00acf810(this,param_1,1);
    return 1;
  }
  if ((int)uVar3 < 0) {
    F_00acf810(this,param_1,1);
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + param_1 * 4 + 0x10))) {
  case 1: ;
    if (param_3 != 0x10c) {
      return 0;
    }
    local_5 = F_00ad1dd0(uVar2,param_2);
    break;
  default: ;
    goto switchD_00ad2fa2_caseD_2;
  case 3: ;
    if (param_3 != 0xe8) {
      return 0;
    }
    local_5 = F_00ad2320(uVar2,param_2);
    break;
  case 4: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad12e0(uVar2,param_2);
    break;
  case 5: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    return 0;
  case 6: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1700(uVar2,param_2);
    break;
  case 7: ;
    if (param_3 != 0x174) {
      return 0;
    }
    local_5 = F_00ad1850(uVar2,param_2);
    break;
  case 8: ;
    if (param_3 != 0xfc) {
      return 0;
    }
    local_5 = F_00acf980(uVar2,param_2);
    break;
  case 9: ;
  case 0xb: ;
    if (param_3 == 0xa8) {
      return 0;
    }
    return 0;
  case 10: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1c60(uVar2,param_2);
  }
  if (local_5 != 0) {
    F_00acf810(this,param_1,1);
  }
switchD_00ad2fa2_caseD_2: ;
  return local_5;
}

/* ref: FUN_00ad30e0 */
uint F_00ad30e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad30e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xb8);
  F_0042b630(in_ecx + 0x10c);
  F_0042b630(in_ecx + 0x160);
  return in_ecx;
}

/* ref: FUN_00ad3120 */
uint F_00ad3120(unsigned int gen_a0)
{
  GEN_ENTER(0xad3120u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3130 */
uint F_00ad3130(unsigned int gen_a0)
{
  GEN_ENTER(0xad3130u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3140 */
uint F_00ad3140(unsigned int gen_a0)
{
  GEN_ENTER(0xad3140u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3150 */
uint F_00ad3150(unsigned int gen_a0)
{
  GEN_ENTER(0xad3150u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3160 */
uint F_00ad3160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3160u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31a0 */
uint F_00ad31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31d0 */
uint F_00ad31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3200 */
uint F_00ad3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3200u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3230 */
uint F_00ad3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3260 */
uint F_00ad3260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3260u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3290 */
uint F_00ad3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad32c0 */
uint F_00ad32c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad32c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad34a0 */
uint F_00ad34a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1b8,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad34d0 */
uint F_00ad34d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3500 */
uint F_00ad3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x170,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3530 */
uint F_00ad3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3560 */
uint F_00ad3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3590 */
uint F_00ad3590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad35c0 */
uint F_00ad35c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad35c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3660 */
uint F_00ad3660(unsigned int gen_a0)
{
  GEN_ENTER(0xad3660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3670 */
uint F_00ad3670(unsigned int gen_a0)
{
  GEN_ENTER(0xad3670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3680 */
uint F_00ad3680(unsigned int gen_a0)
{
  GEN_ENTER(0xad3680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3690 */
uint F_00ad3690(unsigned int gen_a0)
{
  GEN_ENTER(0xad3690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36a0 */
uint F_00ad36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36b0 */
uint F_00ad36b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36c0 */
uint F_00ad36c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36d0 */
uint F_00ad36d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36e0 */
uint F_00ad36e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad36e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042cbc0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042cbc0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042cbc0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3780 */
uint F_00ad3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37a0 */
uint F_00ad37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37c0 */
uint F_00ad37c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad37e0 */
uint F_00ad37e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x58);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_0042cbc0((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return (uint)this;
}

/* ref: FUN_00ad3860 */
uint F_00ad3860(unsigned int gen_a0)
{
  GEN_ENTER(0xad3860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3870 */
uint F_00ad3870(unsigned int gen_a0)
{
  GEN_ENTER(0xad3870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3880 */
uint F_00ad3880(unsigned int gen_a0)
{
  GEN_ENTER(0xad3880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3890 */
uint F_00ad3890(unsigned int gen_a0)
{
  GEN_ENTER(0xad3890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38a0 */
uint F_00ad38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38b0 */
uint F_00ad38b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38c0 */
uint F_00ad38c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38d0 */
uint F_00ad38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38e0 */
uint F_00ad38e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38f0 */
uint F_00ad38f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3900 */
uint F_00ad3900(unsigned int gen_a0)
{
  GEN_ENTER(0xad3900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3910 */
uint F_00ad3910(unsigned int gen_a0)
{
  GEN_ENTER(0xad3910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3920 */
uint F_00ad3920(unsigned int gen_a0)
{
  GEN_ENTER(0xad3920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3930 */
uint F_00ad3930(unsigned int gen_a0)
{
  GEN_ENTER(0xad3930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3940 */
uint F_00ad3940(unsigned int gen_a0)
{
  GEN_ENTER(0xad3940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3950 */
uint F_00ad3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3970 */
uint F_00ad3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042ccf0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042ccf0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042ccf0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3a10 */
uint F_00ad3a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a30 */
uint F_00ad3a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a50 */
uint F_00ad3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00ad3a80 */
uint F_00ad3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042ccf0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad3aa0 */
uint F_00ad3aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ab0 */
uint F_00ad3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ac0 */
uint F_00ad3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ad0 */
uint F_00ad3ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ae0 */
uint F_00ad3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3af0 */
uint F_00ad3af0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b00 */
uint F_00ad3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b10 */
uint F_00ad3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ba0 */
uint F_00ad3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ba0u, gen_a0, gen_a1, gen_a2, 0u);
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
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad3be0 */
uint F_00ad3be0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3bf0 */
uint F_00ad3bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c00 */
uint F_00ad3c00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c10 */
uint F_00ad3c10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c20 */
uint F_00ad3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c30 */
uint F_00ad3c30(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c40 */
uint F_00ad3c40(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c50 */
uint F_00ad3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3cc0 */
uint F_00ad3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3cc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad3d10 */
uint F_00ad3d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b8;
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

/* ref: FUN_00ad3d60 */
uint F_00ad3d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
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

/* ref: FUN_00ad3db0 */
uint F_00ad3db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x170;
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

/* ref: FUN_00ad3e00 */
uint F_00ad3e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad3e50 */
uint F_00ad3e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad3ea0 */
uint F_00ad3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x5c;
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

/* ref: FUN_00ad3ef0 */
uint F_00ad3ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
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

/* ref: FUN_00ad3f30 */
uint F_00ad3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f40 */
byte F_00ad3f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f60 */
uint F_00ad3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f70 */
byte F_00ad3f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f90 */
uint F_00ad3f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fa0 */
byte F_00ad3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3fc0 */
uint F_00ad3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fd0 */
byte F_00ad3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3ff0 */
uint F_00ad3ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4000 */
byte F_00ad4000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4020 */
uint F_00ad4020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4030 */
byte F_00ad4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4050 */
uint F_00ad4050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4060 */
byte F_00ad4060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4080 */
unsigned int F_00ad4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00ad36e0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad40a0 */
unsigned int F_00ad40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad40d0 */
unsigned int F_00ad40d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4100 */
uint F_00ad4100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad4130 */
unsigned int F_00ad4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad4150 */
uint F_00ad4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_00ad37e0((undefined *)((int)this + 8),param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x11c),param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00ad4190 */
uint F_00ad4190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4190u, gen_a0, gen_a1, gen_a2, 0u);
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
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad41d0 */
uint F_00ad41d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad41d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)((int)param_3 + 0xa8);
    this = param_3;
    puVar2 = param_1 + 0x2a;
    do {
      F_0042ccf0(this,puVar2 + -0x2a);
      F_0042ccf0(puVar3 + -0x15,puVar2 + -0x15);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      F_0042ccf0(puVar3 + 4,puVar2 + 4);
      F_0042ccf0(puVar3 + 0x19,puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x2e,puVar2 + 0x2e);
      puVar3[0x43] = puVar2[0x43];
      puVar1 = puVar2 + 0x44;
      this = (undefined *)((int)this + 0x1b8);
      puVar3 = puVar3 + 0x6e;
      puVar2 = puVar2 + 0x6e;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4290 */
uint F_00ad4290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4290u, gen_a0, gen_a1, gen_a2, 0u);
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
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad42d0 */
uint F_00ad42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad42d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4310 */
uint F_00ad4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    F_0042ccf0(puVar2 + 2,puVar1 + 2);
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4360 */
uint F_00ad4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4360u, gen_a0, gen_a1, gen_a2, 0u);
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
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad43a0 */
uint F_00ad43a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43a0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad43e0 */
unsigned int F_00ad43e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4410 */
unsigned int F_00ad4410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4430 */
unsigned int F_00ad4430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4460 */
unsigned int F_00ad4460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4490 */
uint F_00ad4490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad44c0 */
unsigned int F_00ad44c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad44f0 */
uint F_00ad44f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4500 */
uint F_00ad4500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4510 */
byte F_00ad4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4530 */
uint F_00ad4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4540 */
byte F_00ad4540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4560 */
uint F_00ad4560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4570 */
byte F_00ad4570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4590 */
uint F_00ad4590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45a0 */
byte F_00ad45a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45c0 */
uint F_00ad45c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45d0 */
byte F_00ad45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45f0 */
uint F_00ad45f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4600 */
byte F_00ad4600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4620 */
uint F_00ad4620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4630 */
byte F_00ad4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4650 */
unsigned int F_00ad4650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4680 */
unsigned int F_00ad4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46a0 */
unsigned int F_00ad46a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46c0 */
unsigned int F_00ad46c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad46f0 */
unsigned int F_00ad46f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4720 */
unsigned int F_00ad4720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4750 */
unsigned int F_00ad4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4780 */
uint F_00ad4780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47b0 */
uint F_00ad47b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47e0 */
unsigned int F_00ad47e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4800 */
unsigned int F_00ad4800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4820 */
uint F_00ad4820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4820u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4860 */
uint F_00ad4860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad41d0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4880 */
uint F_00ad4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4880u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad48c0 */
uint F_00ad48c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad48c0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4900 */
uint F_00ad4900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4310(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4920 */
uint F_00ad4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    F_0042ccf0(this,iVar1);
    this = (undefined *)((int)this + 0x54);
  }
  return (uint)this;
}

/* ref: FUN_00ad4950 */
unsigned int F_00ad4950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_00ad37e0(param_1 + 2,param_2 + 2);
    F_0042cbc0(param_1 + 0x47,param_2 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4990 */
uint F_00ad4990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  
  if (param_1 != param_2) {
    this = param_3 + 0x18;
    puVar2 = param_3;
    iVar3 = param_1 + 0x60;
    do {
      *puVar2 = *(undefined4 *)(iVar3 + -0x60);
      this[-0x17] = *(undefined4 *)(iVar3 + -0x5c);
      F_0042ccf0(this + -0x16,iVar3 + -0x58);
      this[-1] = *(undefined4 *)(iVar3 + -4);
      F_0042ccf0(this,iVar3);
      this[0x15] = *(undefined4 *)(iVar3 + 0x54);
      this[0x16] = *(undefined4 *)(iVar3 + 0x58);
      F_0042ccf0(this + 0x17,iVar3 + 0x5c);
      this[0x2c] = *(undefined4 *)(iVar3 + 0xb0);
      this[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
      this[0x2e] = *(undefined4 *)(iVar3 + 0xb8);
      F_0042ccf0(this + 0x2f,iVar3 + 0xbc);
      iVar1 = iVar3 + 0x110;
      puVar2 = puVar2 + 0x5c;
      this = this + 0x5c;
      iVar3 = iVar3 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4a50 */
unsigned int F_00ad4a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4a90 */
uint F_00ad4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4a90u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4ad0 */
uint F_00ad4ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ad0190(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ad4b00 */
uint F_00ad4b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b10 */
uint F_00ad4b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b20 */
uint F_00ad4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b30 */
uint F_00ad4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b40 */
uint F_00ad4b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b50 */
uint F_00ad4b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b60 */
uint F_00ad4b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b70 */
uint F_00ad4b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b80 */
uint F_00ad4b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b90 */
uint F_00ad4b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4ba0 */
uint F_00ad4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bb0 */
uint F_00ad4bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4bc0 */
uint F_00ad4bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bd0 */
uint F_00ad4bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4be0 */
uint F_00ad4be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bf0 */
uint F_00ad4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4c00 */
uint F_00ad4c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c10 */
uint F_00ad4c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c20 */
uint F_00ad4c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c30 */
uint F_00ad4c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c40 */
uint F_00ad4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c50 */
uint F_00ad4c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c60 */
uint F_00ad4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c70 */
uint F_00ad4c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c80 */
unsigned int F_00ad4c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4cc0 */
unsigned int F_00ad4cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4d00 */
uint F_00ad4d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4990(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4d20 */
uint F_00ad4d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d20u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4d60 */
uint F_00ad4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d60u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_00ad36e0(this,iVar1);
    }
    iVar1 = iVar1 + 0x1b8;
    this = (undefined *)((int)this + 0x1b8);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4da0 */
uint F_00ad4da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4da0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4de0 */
uint F_00ad4de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4de0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4e20 */
uint F_00ad4e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xad4e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      F_0042cbc0(puVar2 + 2,puVar1 + 2);
    }
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4e70 */
uint F_00ad4e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4e70u, gen_a0, gen_a1, gen_a2, 0u);
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
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4eb0 */
uint F_00ad4eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4eb0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ef0 */
uint F_00ad4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4ef0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f30 */
uint F_00ad4f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00ad36e0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x1b8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f70 */
uint F_00ad4f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f70u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4fb0 */
uint F_00ad4fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4fb0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ff0 */
uint F_00ad4ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad5020 */
uint F_00ad5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5060 */
uint F_00ad5060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xad5060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    puVar3 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar2 + -8);
        puVar3[1] = *(undefined4 *)(iVar2 + -4);
        F_00ad37e0(puVar3 + 2,iVar2);
        F_0042cbc0(puVar3 + 0x47,iVar2 + 0x114);
      }
      iVar1 = iVar2 + 0x168;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad50c0 */
uint F_00ad50c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad50c0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5100 */
uint F_00ad5100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5100u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5140 */
uint F_00ad5140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5140u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00ad36e0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x1b8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5180 */
uint F_00ad5180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5180u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad51c0 */
uint F_00ad51c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad51c0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5200 */
uint F_00ad5200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad5230 */
uint F_00ad5230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5230u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5270 */
uint F_00ad5270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad5060(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad52a0 */
uint F_00ad52a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad52a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)pvVar2 + 0x54);
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

/* ref: FUN_00ad5320 */
uint F_00ad5320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad41d0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00485c80(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5370 */
uint F_00ad5370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5370u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)pvVar2 + 0x54);
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

/* ref: FUN_00ad53f0 */
uint F_00ad53f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad53f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)pvVar2 + 0x54);
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

/* ref: FUN_00ad5470 */
uint F_00ad5470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00ad4310(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar1 = *(uint *)((int)this + 4);
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x5c) {
      F_0042c880((undefined *)(uVar3 + 8));
    }
    *(uint *)((int)this + 4) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad54e0 */
uint F_00ad54e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad54e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x54)) {
      F_0042ccf0(this_00,pvVar2);
      this_00 = (undefined *)((int)this_00 + 0x54);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x54)) {
      F_0042c880(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5560 */
uint F_00ad5560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad5100(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5640 */
uint F_00ad5640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1b8,0,0);
    F_00ad5140(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00485c80(iVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1b8) * 0x1b8,0);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x1b8) * 0x1b8 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x1b8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5720 */
uint F_00ad5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad5180(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5800 */
uint F_00ad5800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad51c0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad58e0 */
uint F_00ad58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x5c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x5c,0,0);
    F_00ad4e20(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x5c) {
        F_0042c880((undefined *)(iVar4 + 8));
      }
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x5c) * 0x5c,0);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x5c) * 0x5c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x5c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad59d0 */
uint F_00ad59d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad59d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0);
    F_00ad5230(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5ab0 */
uint F_00ad5ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ad5060(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad5ae0 */
uint F_00ad5ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xad5ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad52a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad5b00 */
unsigned int F_00ad5b00(unsigned int gen_a0)
{
  GEN_ENTER(0xad5b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00ad41d0(iVar1,iVar1,*(int *)this,this);
    F_00485c80(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00ad5b40 */
uint F_00ad5b40(unsigned int gen_a0)
{
  GEN_ENTER(0xad5b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad5370(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad5b60 */
uint F_00ad5b60(unsigned int gen_a0)
{
  GEN_ENTER(0xad5b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad53f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad5b80 */
uint F_00ad5b80(unsigned int gen_a0)
{
  GEN_ENTER(0xad5b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad5470(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad5ba0 */
uint F_00ad5ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xad5ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad54e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad5bc0 */
uint F_00ad5bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5bc0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00ad5560(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5560(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5c50 */
uint F_00ad5c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1b8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5640(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5640(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5ce0 */
uint F_00ad5ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad4990(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00485ce0(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5d30 */
uint F_00ad5d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5d30u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00ad5720(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5720(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5dc0 */
uint F_00ad5dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5dc0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00ad5800(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5800(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5e50 */
uint F_00ad5e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x5c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x5c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad58e0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad58e0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5ee0 */
uint F_00ad5ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad59d0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad59d0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5f70 */
uint F_00ad5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x170;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x170,0,0);
    F_00ad5060(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00485ce0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x170) * 0x170,0)
      ;
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x170) * 0x170 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x170 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad6050 */
uint F_00ad6050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6050u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  undefined * this_00;
  int iVar6;
  uint uVar7;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    iVar1 = (*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1]) >> 0x1f;
    iVar6 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x58 + iVar1;
    uVar7 = iVar6 - iVar1;
    if (iVar6 == iVar1) {
      F_00ad52a0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar1 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar3 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar1) / 0x58;
    if (uVar7 <= uVar3) {
      this_00 = (undefined *)F_00ad43a0(*(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1])[1],iVar1);
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      for (; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x58) * 0x58 + *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar7 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar1) / 0x58)) {
      iVar6 = *(*(int * PTR32 *)&gen_args[1]) + uVar3 * 0x58;
      F_00ad43a0(*(*(int * PTR32 *)&gen_args[1]),iVar6,iVar1);
      uVar7 = F_00ad50c0(iVar6,(*(int * PTR32 *)&gen_args[1])[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (iVar1 != 0) {
      F_00489090(iVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00429760(*(int *)(*(undefined * PTR32 *)&gen_args[0]),((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x58) * 0x58,0);
    }
    piVar4 = (*(int * PTR32 *)&gen_args[1]);
    bVar5 = F_0047f480((*(undefined * PTR32 *)&gen_args[0]),((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x58);
    if (bVar5 != 0) {
      uVar7 = F_00ad50c0(*piVar4,piVar4[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ad61e0 */
unsigned int F_00ad61e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad61e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5bc0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5bc0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_00ad6270 */
unsigned int F_00ad6270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5c50(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00ad36e0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x1b8) * 0x1b8 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1b8;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5c50(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00ad36e0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1b8;
  return 0;
}

/* ref: FUN_00ad6300 */
unsigned int F_00ad6300(unsigned int gen_a0)
{
  GEN_ENTER(0xad6300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00ad4990(iVar1,iVar1,*(int *)this,this);
    F_00485ce0(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00ad6340 */
unsigned int F_00ad6340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5d30(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5d30(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_00ad63d0 */
unsigned int F_00ad63d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5dc0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5dc0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_00ad6460 */
uint F_00ad6460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ad5e50(this,1);
    }
    puVar3 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar3) / 0x5c) * 0x5c + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ad5e50(this,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    uVar2 = F_0042cbc0(puVar1 + 2,puVar3 + 2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x5c;
  return uVar2;
}

/* ref: FUN_00ad64e0 */
unsigned int F_00ad64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5ee0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad5ee0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00ad6560 */
uint F_00ad6560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x170;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x170;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5f70(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5f70(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad65f0 */
uint F_00ad65f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad65f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  F_00490be0((undefined *)((int)this + 0x58),param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ad6620 */
uint F_00ad6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ad6050(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad6640 */
uint F_00ad6640(unsigned int gen_a0)
{
  GEN_ENTER(0xad6640u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  return in_ecx;
}

/* ref: FUN_00ad6660 */
unsigned int F_00ad6660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ad6560(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x170) * 0x170 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ad6560(this,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    F_00ad37e0(puVar1 + 2,puVar2 + 2);
    F_0042cbc0(puVar1 + 0x47,puVar2 + 0x47);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x170;
  return 0;
}

/* ref: FUN_00ad66f0 */
unsigned int F_00ad66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    F_00490be0((undefined *)((int)param_1 + 0x58),param_2 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ad6720 */
uint F_00ad6720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  F_00ad6050((undefined *)((int)this + 0x58),param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ad6750 */
unsigned int F_00ad6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad6750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
    F_00490be0((undefined *)((int)param_2 + 0x58),param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ad6780 */
unsigned int F_00ad6780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad6780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
    F_00490be0((undefined *)((int)param_2 + 0x58),param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ad67b0 */
unsigned int F_00ad67b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad67b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
    F_00490be0((undefined *)((int)param_2 + 0x58),param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ad67e0 */
uint F_00ad67e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad67e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    F_00ad6050((undefined *)((int)this + 0x58),iVar1 + 0x58);
    iVar1 = iVar1 + 0x68;
    this = (undefined *)((int)this + 0x68);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad6830 */
uint F_00ad6830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad6830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad67e0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad6850 */
uint F_00ad6850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xad6850u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
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
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
      F_00490be0((undefined *)((int)this + 0x58),iVar1 + 0x58);
    }
    iVar1 = iVar1 + 0x68;
    this = (undefined *)((int)this + 0x68);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad68a0 */
uint F_00ad68a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad68a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad6850(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad68d0 */
uint F_00ad68d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad68d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ad6850(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad6900 */
uint F_00ad6900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad6900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad67e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00492fb0(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad6950 */
uint F_00ad6950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x68,0,0);
    F_00ad6850(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00492fb0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x68) * 0x68,0);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x68) * 0x68 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x68 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad6a20 */
uint F_00ad6a20(unsigned int gen_a0)
{
  GEN_ENTER(0xad6a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar2) {
    uVar1 = F_00ad67e0(uVar2,uVar2,*(uint *)this,this);
    uVar2 = F_00492fb0(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00ad6a60 */
uint F_00ad6a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x68;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad6950(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad6950(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad6af0 */
unsigned int F_00ad6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00ad6a60(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0x68) * 0x68 + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00ad6b74;
    F_0042cbc0(this_00,uVar2);
    *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(uVar2 + 0x54);
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00ad6a60(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00ad6b74;
    F_0042cbc0(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    uVar2 = param_1;
  }
  F_00490be0((undefined *)((int)this_00 + 0x58),uVar2 + 0x58);
LAB_00ad6b74: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x68;
  return 0;
}

/* ref: FUN_00ad6bd0 */
byte F_00ad6bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad6c00 */
byte F_00ad6c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad6c30 */
uint F_00ad6c30(unsigned int gen_a0)
{
  GEN_ENTER(0xad6c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00ad6c40 */
uint F_00ad6c40(unsigned int gen_a0)
{
  GEN_ENTER(0xad6c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6c50 */
uint F_00ad6c50(unsigned int gen_a0)
{
  GEN_ENTER(0xad6c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00ad6c60 */
uint F_00ad6c60(unsigned int gen_a0)
{
  GEN_ENTER(0xad6c60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00ad6c70 */
uint F_00ad6c70(unsigned int gen_a0)
{
  GEN_ENTER(0xad6c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00ad6ca0 */
uint F_00ad6ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad6cd0 */
uint F_00ad6cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x65;
}

/* ref: FUN_00ad6ce0 */
uint F_00ad6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6ce0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6cf0 */
uint F_00ad6cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00ad6d00 */
uint F_00ad6d00(unsigned int gen_a0)
{
  GEN_ENTER(0xad6d00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00ad6d10 */
uint F_00ad6d10(unsigned int gen_a0)
{
  GEN_ENTER(0xad6d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00ad6d40 */
uint F_00ad6d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad6d80 */
uint F_00ad6d80(unsigned int gen_a0)
{
  GEN_ENTER(0xad6d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00ad6d90 */
uint F_00ad6d90(unsigned int gen_a0)
{
  GEN_ENTER(0xad6d90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad6db0 */
uint F_00ad6db0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6db0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00ad6dd0 */
uint F_00ad6dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6dd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_00ad6e00 */
uint F_00ad6e00(unsigned int gen_a0)
{
  GEN_ENTER(0xad6e00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 100;
}

/* ref: FUN_00ad6e10 */
uint F_00ad6e10(unsigned int gen_a0)
{
  GEN_ENTER(0xad6e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x65)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x65);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00ad6e30 */
uint F_00ad6e30(unsigned int gen_a0)
{
  GEN_ENTER(0xad6e30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x65);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x65);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00ad6e50 */
uint F_00ad6e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,400);
  return uVar1;
}

/* ref: FUN_00ad6e90 */
uint F_00ad6e90(unsigned int gen_a0)
{
  GEN_ENTER(0xad6e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6ea0 */
uint F_00ad6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6ea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6eb0 */
uint F_00ad6eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6eb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6ec0 */
uint F_00ad6ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6f20 */
uint F_00ad6f20(unsigned int gen_a0)
{
  GEN_ENTER(0xad6f20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad6f80 */
uint F_00ad6f80(unsigned int gen_a0)
{
  GEN_ENTER(0xad6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x65) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x65) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x65) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x65) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x65);
    }
    if (*(char *)(*(int *)this + 0x65) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00ad6fe0 */
uint F_00ad6fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad6ff0 */
uint F_00ad6ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad6ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7010 */
uint F_00ad7010(unsigned int gen_a0)
{
  GEN_ENTER(0xad7010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7020 */
uint F_00ad7020(unsigned int gen_a0)
{
  GEN_ENTER(0xad7020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7030 */
uint F_00ad7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7050 */
uint F_00ad7050(unsigned int gen_a0)
{
  GEN_ENTER(0xad7050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7060 */
uint F_00ad7060(unsigned int gen_a0)
{
  GEN_ENTER(0xad7060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7070 */
uint F_00ad7070(unsigned int gen_a0)
{
  GEN_ENTER(0xad7070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7080 */
uint F_00ad7080(unsigned int gen_a0)
{
  GEN_ENTER(0xad7080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7090 */
uint F_00ad7090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad70b0 */
uint F_00ad70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad70b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad70c0 */
uint F_00ad70c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad70c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad70e0 */
uint F_00ad70e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad70e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad70f0 */
uint F_00ad70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad70f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad7160 */
uint F_00ad7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7180 */
uint F_00ad7180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad71a0 */
uint F_00ad71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ad71c0 */
uint F_00ad71c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad71c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad71f0 */
byte F_00ad71f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad71f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad7210 */
byte F_00ad7210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad7260 */
uint F_00ad7260(unsigned int gen_a0)
{
  GEN_ENTER(0xad7260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00ad72a0 */
uint F_00ad72a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad72a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00ad7310 */
undefined4 * F_00ad7310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad7340 */
uint F_00ad7340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  return (uint)puVar2;
}

/* ref: FUN_00ad7380 */
unsigned int F_00ad7380(unsigned int gen_a0)
{
  GEN_ENTER(0xad7380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00ad73d0 */
unsigned int F_00ad73d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad73d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x65);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x65);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x65);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00ad7420 */
uint F_00ad7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad7480 */
uint F_00ad7480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad74f0 */
uint F_00ad74f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad74f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
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

/* ref: FUN_00ad7550 */
uint F_00ad7550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
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

/* ref: FUN_00ad75c0 */
uint F_00ad75c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad75c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad75d0 */
uint F_00ad75d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad75d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad75e0 */
uint F_00ad75e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad75e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7600 */
uint F_00ad7600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7630 */
uint F_00ad7630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7650 */
uint F_00ad7650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7670 */
uint F_00ad7670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ad76c0 */
uint F_00ad76c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad76c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad6f20(this);
  return (uint)this;
}

/* ref: FUN_00ad76d0 */
uint F_00ad76d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad76d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad6f80(this);
  return (uint)this;
}

/* ref: FUN_00ad76e0 */
uint F_00ad76e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad76e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7700 */
uint F_00ad7700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7720 */
uint F_00ad7720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7740 */
uint F_00ad7740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7760 */
uint F_00ad7760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ad7780 */
uint F_00ad7780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad7800 */
unsigned int F_00ad7800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ad7800(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00ad7880 */
uint F_00ad7880(unsigned int gen_a0)
{
  GEN_ENTER(0xad7880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad7380(this);
  return (uint)this;
}

/* ref: FUN_00ad7890 */
uint F_00ad7890(unsigned int gen_a0)
{
  GEN_ENTER(0xad7890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad73d0(this);
  return (uint)this;
}

/* ref: FUN_00ad7920 */
uint F_00ad7920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7930 */
uint F_00ad7930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00ad7380(this);
  return (uint)param_1;
}

/* ref: FUN_00ad7950 */
uint F_00ad7950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7960 */
uint F_00ad7960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00ad73d0(this);
  return (uint)param_1;
}

/* ref: FUN_00ad7980 */
uint F_00ad7980(unsigned int gen_a0)
{
  GEN_ENTER(0xad7980u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ad7990 */
uint F_00ad7990(unsigned int gen_a0)
{
  GEN_ENTER(0xad7990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad6f20(this);
  return (uint)this;
}

/* ref: FUN_00ad79a0 */
uint F_00ad79a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad79a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad6f80(this);
  return (uint)this;
}

/* ref: FUN_00ad79b0 */
uint F_00ad79b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad79b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad79d0 */
uint F_00ad79d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad79d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00ad79f0 */
unsigned int F_00ad79f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad79f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00ad7a10 */
unsigned int F_00ad7a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad7a40 */
uint F_00ad7a40(unsigned int gen_a0)
{
  GEN_ENTER(0xad7a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00ad7800(this,piVar2[2]);
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

/* ref: FUN_00ad7aa0 */
uint F_00ad7aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xad7aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad7380(this);
  return (uint)this;
}

/* ref: FUN_00ad7ab0 */
uint F_00ad7ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xad7ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ad73d0(this);
  return (uint)this;
}

/* ref: FUN_00ad7b40 */
uint F_00ad7b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7b50 */
uint F_00ad7b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7b60 */
uint F_00ad7b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7b60u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00ad7380(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_00ad7c7a;
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
      piVar4 = (int *)F_00ad6db0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00ad6d90(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00ad7c7a: ;
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
            F_00ad7420((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00ad7480((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00ad7420((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00ad7d38: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00ad7480((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00ad7d38;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00ad7420((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00ad7480((*(undefined * PTR32 *)&gen_args[0]),piVar4);
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

/* ref: FUN_00ad7dc0 */
uint F_00ad7dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad7e50 */
uint F_00ad7e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  cVar1 = *(char *)((int)puVar4[1] + 0x65);
  puVar2 = puVar4;
  local_8 = (undefined4 *)puVar4[1];
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(local_8 + 3,param_2);
    if (bVar3 == 0) {
      if ((*(char *)((int)puVar4 + 0x65) != '\0') &&
         (bVar3 = F_0042c7c0(param_2,local_8 + 3), bVar3 != 0)) {
        puVar4 = local_8;
      }
      puVar5 = (undefined4 *)*local_8;
    }
    else {
      puVar5 = (undefined4 *)local_8[2];
      local_8 = puVar2;
    }
    puVar2 = local_8;
    local_8 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x65);
  }
  if (*(char *)((int)puVar4 + 0x65) == '\0') {
    puVar5 = (undefined4 *)*puVar4;
  }
  else {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  cVar1 = *(char *)((int)puVar5 + 0x65);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(param_2,puVar5 + 3);
    if (bVar3 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
      puVar4 = puVar5;
    }
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x65);
  }
  param_1[1] = (int)puVar4;
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ad7f00 */
uint F_00ad7f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00ad7f10 */
uint F_00ad7f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xad7f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_4,0x18,400);
                    
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
LAB_00ad810d: ;
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
        goto LAB_00ad810d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00ad8140 */
uint F_00ad8140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xad8140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0x68,400);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00ad81b6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00ad81b6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00ad81b6: ;
  cVar1 = *(char *)(param_4[1] + 100);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 100) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 100) == '\0') {
        *(undefined1 *)(piVar5 + 0x19) = 1;
        *(undefined1 *)(iVar4 + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x65) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x65) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00ad8341: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 100) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x65))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x65) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00ad8341;
      }
      *(undefined1 *)(piVar5 + 0x19) = 1;
      *(undefined1 *)(iVar4 + 100) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 100);
  } while( true );
}

/* ref: FUN_00ad8370 */
unsigned int F_00ad8370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8370u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00ad83e0 */
unsigned int F_00ad83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad83e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*(char *)((int)piVar4 + 0x65) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x65);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x65);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x65);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ad8450 */
unsigned int F_00ad8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ad8470 */
unsigned int F_00ad8470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad84a0 */
uint F_00ad84a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad84a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad84c0 */
uint F_00ad84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad84c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad84d0 */
uint F_00ad84d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad84d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad84f0 */
uint F_00ad84f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad84f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad8500 */
uint F_00ad8500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8500u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00ad7a40(this);
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
    F_00ad7b60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad85a0 */
uint F_00ad85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad85a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad85e0 */
uint F_00ad85e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad85e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ad7dc0(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ad8600 */
uint F_00ad8600(unsigned int gen_a0)
{
  GEN_ENTER(0xad8600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ad8500(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ad8620 */
uint F_00ad8620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ad8660 */
uint F_00ad8660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ad7e50(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ad8680 */
unsigned int F_00ad8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x65);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ad8680(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 3);
    F_00429760(piVar3,0x68,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x65);
  }
  return 0;
}

/* ref: FUN_00ad86d0 */
uint F_00ad86d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad86d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x65))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00ad73d0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x65) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x65) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x65) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x19];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x19))) = (char)piVar3[0x19];
      *(char *)(piVar3 + 0x19) = (char)iVar1;
      goto LAB_00ad87ea;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x65) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      piVar4 = (int *)F_00ad6e30(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      uVar5 = F_00ad6e10(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00ad87ea: ;
  if ((char)piVar3[0x19] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x19] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00ad74f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(*piVar6 + 100) != '\x01') || (*(char *)(piVar6[2] + 100) != '\x01')) {
              if (*(char *)(piVar6[2] + 100) == '\x01') {
                *(undefined1 *)(*piVar6 + 100) = 1;
                *(undefined1 *)(piVar6 + 0x19) = 0;
                F_00ad7550((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
              *(undefined1 *)(piVar4 + 0x19) = 1;
              *(undefined1 *)(piVar6[2] + 100) = 1;
              F_00ad74f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00ad88a8: ;
            *(undefined1 *)(piVar6 + 0x19) = 0;
          }
        }
        else {
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00ad7550((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(piVar6[2] + 100) == '\x01') && (*(char *)(*piVar6 + 100) == '\x01'))
            goto LAB_00ad88a8;
            if (*(char *)(*piVar6 + 100) == '\x01') {
              *(undefined1 *)(piVar6[2] + 100) = 1;
              *(undefined1 *)(piVar6 + 0x19) = 0;
              F_00ad74f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
            *(undefined1 *)(piVar4 + 0x19) = 1;
            *(undefined1 *)(*piVar6 + 100) = 1;
            F_00ad7550((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x19) = 1;
  }
  F_0042c880(piVar3 + 3);
  F_00429760(piVar3,0x68,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ad8930 */
unsigned int F_00ad8930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00ad8370(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00ad8950 */
unsigned int F_00ad8950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00ad83e0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00ad8970 */
uint F_00ad8970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8970u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = (undefined4 *)F_00ad7f10((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00ad6f20(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00ad7f10((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ad8a50 */
uint F_00ad8a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0x65);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x65);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00ad8140((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00ad6f80(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00ad8140((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0x68,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ad8b50 */
uint F_00ad8b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad8b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad8ba0 */
uint F_00ad8ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad8ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    puVar1[0x18] = *(undefined4 *)(param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00ad8c00 */
uint F_00ad8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xad8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ad8500(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad8c40 */
uint F_00ad8c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad8c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00ad7dc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00ad8370((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00ad8500((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00ad8ca0 */
uint F_00ad8ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8ca0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad8d10 */
uint F_00ad8d10(unsigned int gen_a0)
{
  GEN_ENTER(0xad8d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ad8680(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ad8d40 */
uint F_00ad8d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad8d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

