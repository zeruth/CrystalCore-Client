#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0076a880 */
byte F_0076a880(unsigned int gen_a0)
{
  GEN_ENTER(0x76a880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    return 1;
  }
  *(undefined1 *)((int)this + 0x8e54) = 1;
  return 0;
}

/* ref: FUN_0076a8b0 */
uint F_0076a8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * this_00;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char * local_c;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x26);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x23);
  uVar7 = uVar6;
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (**(int * PTR32 *)(uVar5 + 0x20) != *(int *)((int)this + 0x10)) {
      **(int * PTR32 *)(uVar5 + 0x20) = *(int *)((int)this + 0x10);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar7 = F_00434e60(*(undefined4 *)((int)this + 0x10));
    pvVar8 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar7);
    local_c = ((char *)GEN_TOP((*(int *)((int)this + 0x10) * 0xa28 + 0x89 + (int)this)));
    if (pvVar8 != (undefined *)0x0) {
      iVar2 = *(int *)((int)pvVar8 + 0xc);
      local_10 = 0;
      if (0 < iVar2) {
        local_1c = 0x40;
        do {
          if (0x18 < local_10) break;
          iVar1 = (*(int *)((int)this + 0x10) * 0x19 + local_10) * 8;
          uVar7 = 0;
          local_18 = 0;
          bVar10 = false;
          local_14 = 0;
          this_00 = (undefined *)F_00a37da0(pvVar8,local_10);
          if ((this_00 != (undefined *)0x0) &&
             ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
            uVar7 = F_00a37c50(this_00);
            uVar7 = (uint)(uVar7 != 0);
            F_0046e5e0(this_00);
            local_18 = F_00760640((uint)(byte)local_c[-1],this_00,*(undefined4 *)(local_c + -5));
            bVar10 = *local_c != '\0';
            if (bVar10) {
              bVar3 = F_00760e50(local_c + -0x65,this_00);
              local_14 = F_00760700((uint)bVar3);
            }
          }
          uVar9 = (uint)bVar10 | local_14 * 2;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) = uVar9;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_1c))) != *(int *)(local_c + -9)) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_1c))) = *(int *)(local_c + -9);
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) != (uint)(byte)local_c[-1]) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) = (uint)(byte)local_c[-1];
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = local_18 & 0xff |
                  ((uint)CONCAT11(*(char *)((int)this + iVar1 + 0x8431) != '\0',
                                  *(undefined1 *)((int)this + iVar1 + 0x8430)) << 8 | uVar7) << 8;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c + -0x61);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4))) = uVar7;
            *(undefined1 *)(uVar6 + 0x1d) = 1;
          }
          local_c = local_c + 0x68;
          local_1c = local_1c + 0x14;
          local_10 = local_10 + 1;
        } while (local_10 < iVar2);
      }
    }
    uVar11 = *(undefined4 *)(&REFG(undefined, 0x10bfc6c) + *(int *)((int)this + 0x10) * 4);
    uVar13 = 0;
    uVar12 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar8,uVar11,uVar12,uVar13);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100))) = uVar7;
  }
  return uVar7;
}

/* ref: FUN_0076ab00 */
unsigned int F_0076ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x76ab00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x26);
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_00434e60(local_8);
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar4);
      if (this_00 != (undefined *)0x0) {
        iVar1 = *(int *)((int)this_00 + 0xc);
        iVar5 = 0;
        iVar6 = 0;
        if (0 < iVar1) {
          do {
            uVar4 = F_00a37da0(this_00,iVar6);
            if ((uVar4 != 0) && ((*(char *)(uVar4 + 6) != '\0' || (*(int *)(uVar4 + 8) != 0)))) {
              iVar5 = iVar5 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) != iVar5) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) = iVar5;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 0xd);
  }
  return 0;
}

/* ref: FUN_0076abb0 */
uint F_0076abb0(void)
{
  GEN_ENTER(0x76abb0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  do {
    uVar2 = F_00434e60(local_8);
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar2);
    if (this != (undefined *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = F_00a37da0(this,iVar3);
          if ((uVar2 != 0) && ((*(char *)(uVar2 + 6) != '\0' || (*(int *)(uVar2 + 8) != 0)))) {
            return local_8;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    local_8 = local_8 + 1;
    if (0xc < (int)local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0076ac20 */
byte F_0076ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    F_0076a8b0(this);
    return 0;
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0xc);
  F_0076a8b0(this);
  return 0;
}

/* ref: FUN_0076ac50 */
byte F_0076ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar1 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  puVar2 = (undefined4 *)F_00a37180(&REFG(undefined, 0x14a4230));
  if (puVar2 != (undefined4 *)0x0) {
    F_00a47f70(&REFG(undefined, 0x14a4230),uVar1,uVar3,*puVar2,(uint)*(ushort *)(puVar2 + 1),1);
    F_0076a8b0(this);
    return 0;
  }
  uVar3 = 0x2eb;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  F_0046a630(this_00,uVar3);
  F_0076a8b0(this);
  return 0;
}

/* ref: FUN_0076ace0 */
uint F_0076ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 uVar3;
  
  if (*param_1 != param_2) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 7;
  }
  uVar2 = F_00ab24a0(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = F_00a35d00(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    uVar3 = 7;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 - 2;
    if (uVar2 == 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 8;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 3: ;
    bVar1 = F_00a3c930(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var,bVar1 == 0);
  case 4: ;
  case 5: ;
    bVar1 = F_00a3c8c0(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var_00,bVar1 == 0);
  default: ;
    goto switchD_0076ad41_caseD_6;
  case 7: ;
    uVar2 = F_00a3e8f0(&REFG(undefined, 0x14a4230),param_3,param_4);
    break;
  case 9: ;
    uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230),param_3,param_4);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0);
switchD_0076ad41_caseD_6: ;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(char *)((int)param_1 + 5) = (char)uVar2;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf3 */
unsigned int F_0076adf0(unsigned int gen_a0)
{
  GEN_ENTER(0x76adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (0 < *(int *)(this + 0x70)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x70),0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return 0;
}

/* ref: FUN_0076ae50 */
uint F_0076ae50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ae50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_0043d880(uVar4);
  if ((int)uVar4 < 6) {
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4));
      uVar4 = F_0043d8f0(uVar4);
      F_0042ccf0((undefined *)((int)this + 0x1c),uVar4);
      uVar5 = (uint)(**(char * PTR32 *)((int)this + 0x1c) != '\0');
      uVar4 = F_0042a990((int)this + 0x1c);
      uVar4 = F_00461270(this_00,0x29a,uVar4,uVar5);
      return uVar4;
    case 1: ;
      uVar4 = F_0043bd00(this_00,0x28d,0,0);
      return uVar4;
    case 2: ;
      uVar4 = F_0043bd00(this_00,0x28e,0,0);
      return uVar4;
    case 3: ;
      uVar4 = F_0043bd00(this_00,0x287,0,0);
      return uVar4;
    case 4: ;
      uVar4 = F_0043bd00(this_00,0x285,0,0);
      return uVar4;
    case 5: ;
      uVar4 = F_0043bd00(this_00,0x286,0,0);
      return uVar4;
    }
  }
  else {
    iVar1 = uVar4 - 6;
    bVar3 = F_004351d0();
    piVar2 = *(int * PTR32 *)((int)this + 4);
    if (bVar3 == 0) {
      uVar8 = 2;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
      if ((pvVar6 != (undefined *)0x0) &&
         (puVar7 = (undefined4 *)F_00439130(pvVar6,iVar1), puVar7 != (undefined4 *)0x0)) {
        uVar5 = F_00439390(pvVar6,*puVar7,puVar7[1]);
        uVar4 = F_00462030(this_00,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
    else {
      uVar8 = 0xf;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
      if ((pvVar6 != (undefined *)0x0) && (bVar3 = F_0043a050(pvVar6,iVar1), bVar3 != 0)) {
        uVar5 = F_0043a0b0(pvVar6,iVar1);
        uVar4 = F_00462030(this_00,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: FUN_0076afe0 */
unsigned int F_0076afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x76afe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  *(uint *)((int)this + 0x338) = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return 0;
}

/* ref: FUN_0076b020 */
uint F_0076b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (0 < *(int *)((int)this + 0x70)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x70),0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      uVar1 = F_0042a990(param_1);
      F_005a2710(((undefined1 *)(gen_frame + 0x10)),6);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      uVar1 = F_0042a990(param_2);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)),6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b150 */
uint F_0076b150(unsigned int gen_a0)
{
  GEN_ENTER(0x76b150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      F_005a2710(((undefined1 *)(gen_frame + 0x10)),1);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)),1);
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b230 */
uint F_0076b230(unsigned int gen_a0)
{
  GEN_ENTER(0x76b230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = 2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b310 */
uint F_0076b310(unsigned int gen_a0)
{
  GEN_ENTER(0x76b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_02;
  uint uVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined * local_8;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_004351d0();
  piVar4 = *(int * PTR32 *)((int)this + 4);
  if (bVar1 == 0) {
    uVar8 = 2;
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    piVar4 = (int *)F_00435440(uVar2,uVar8);
    uVar2 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = 0;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
      uVar2 = 0;
      if (uVar3 != 0) {
        local_8 = (undefined *)((int)this + 0x78);
        puVar7 = (uint *)((int)this + 0x318);
        do {
          piVar5 = (int *)F_00439130(piVar4,uVar6);
          if (((piVar5 != (int *)0x0) && (*piVar5 != 0 || piVar5[1] != 0)) &&
             ((piVar5[4] & 0x700U) != 0x400)) {
            *puVar7 = uVar6;
            uVar2 = F_00439390(piVar4,*piVar5,piVar5[1]);
            uVar2 = F_00462030(this_00,0x28f,uVar6 + 1,uVar2);
            F_0042e430(local_8,uVar2);
            puVar7 = puVar7 + 1;
            local_8 = (undefined *)((int)local_8 + 0x54);
          }
          uVar6 = uVar6 + 1;
          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
        } while (uVar6 < uVar2);
      }
    }
  }
  else {
    uVar8 = 0xf;
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    this_01 = (undefined *)F_00435440(uVar2,uVar8);
    uVar2 = 0;
    if (this_01 != (undefined *)0x0) {
      uVar2 = 0;
      this_02 = (undefined *)((int)this + 0x78);
      puVar7 = (uint *)((int)this + 0x318);
      do {
        bVar1 = F_0043a050(this_01,uVar2);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          *puVar7 = uVar2;
          uVar3 = F_0043a0b0(this_01,uVar2);
          uVar3 = F_00462030(this_00,0x28f,uVar2 + 1,uVar3);
          uVar3 = F_0042e430(this_02,uVar3);
          puVar7 = puVar7 + 1;
          this_02 = (undefined *)((int)this_02 + 0x54);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b450 */
unsigned int F_0076b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined * PTR32 * ppuVar6;
  
  if (param_1 < 8) {
    bVar2 = F_004351d0();
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (bVar2 == 0) {
      uVar5 = 2;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      pvVar4 = (undefined *)F_00435440(uVar3,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = F_00439130(pvVar4,param_1);
      if (uVar3 == 0) {
        return 0;
      }
      F_00444aa0(pvVar4,*(undefined4 *)(uVar3 + 8),*(undefined4 *)(uVar3 + 0xc),1);
    }
    else {
      uVar5 = 0xf;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      pvVar4 = (undefined *)F_00435440(uVar3,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
      bVar2 = F_0043a050(pvVar4,param_1);
      if (bVar2 == 0) {
        return 0;
      }
      F_0043a140(pvVar4,param_1);
    }
    ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    uVar5 = 6;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4))));
    F_004485a0(pvVar4,uVar5,param_1,ppuVar6);
  }
  return 0;
}

/* ref: FUN_0076b4f0 */
byte F_0076b4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  bVar1 = *(byte *)((int)this + 0x33c);
  if (bVar1 != (byte)param_1) {
    if (*(int *)((int)this + 8) != 0) {
      puVar2 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 7;
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
      (*(uint *)(gen_frame + 0xac)) = (uint)((byte)param_1 != 0);
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    *(byte *)((int)this + 0x33c) = (byte)param_1;
    bVar1 = (byte)param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return bVar1;
}

/* ref: FUN_0076b5c0 */
uint F_0076b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 6;
    F_005a2710(((undefined1 *)(gen_frame + 0xb0)),4);
    (*(undefined4 *)(gen_frame + 0xb4)) = param_1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b7e0 */
uint F_0076b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x76b7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  if (*(int *)((int)this + 0x90) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x90));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  iVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x624);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x494);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x2a0);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    uVar5 = F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return (uint)uVar5;
}

/* ref: FUN_0076b890 */
uint F_0076b890(unsigned int gen_a0)
{
  GEN_ENTER(0x76b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 0xa4);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x298);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x48c);
  local_8 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined1 *)((int)this + 0x94) = 1;
  *(undefined4 *)((int)this + 0x64c) = 0;
  F_00c48350((undefined *)((int)this + 0x614),0,0x38);
  uVar2 = *(uint *)((int)this + 0x90);
  if (uVar2 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar2);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b990 */
uint F_0076b990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76b990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[2] = 0;
  uVar1 = F_0042e430(param_1 + 4,param_5);
  return uVar1;
}

/* ref: FUN_0076b9c0 */
unsigned int F_0076b9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76b9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_5 = (int)param_1;
  return 0;
}

/* ref: FUN_0076b9e0 */
uint F_0076b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  uVar2 = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x10)) = 0;
    piVar3 = (int *)((int)this + 0x614);
    do {
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*(int *)(param_1 + uVar2 * 4) + 4)));
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x90) + 0xc))) + (*(int *)(gen_frame + 0x10))))),
                   ((undefined1 *)(gen_frame + 0x14)));
      F_0042ccf0((undefined *)(*piVar3 + 0x10),((undefined1 *)(gen_frame + 0x14)));
      iVar1 = *piVar3;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x10;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      *(uint *)(iVar1 + 0xc) = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x7c);
    } while (uVar2 < param_2);
  }
  *(undefined1 *)((int)this + 0x94) = 1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 4))))
            (*(int * PTR32 *)((int)this + 0x88),((undefined1 *)(gen_frame + 0x8)),0,0,*(undefined4 *)((int)this + 0x98));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar4;
}

/* ref: FUN_0076bac0 */
unsigned int F_0076bac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76bac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int local_8;
  
  if (*(char *)((int)this + 0x94) != '\0') {
    uVar3 = 0;
    puVar5 = (undefined4 *)((int)this + 0xa4);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x7c);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 + -0xb,4);
      puVar4[-10] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 9,4);
      puVar4[10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x1d,4);
      puVar4[0x1e] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2);
      F_005a2710(puVar4 + 0x27,6);
      local_8 = local_8 + 1;
      puVar4[0x28] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710((undefined *)(param_2 + 0x48),4);
    uVar3 = 0;
    *(int *)(param_2 + 0x4c) = local_8;
    puVar5 = (undefined4 *)((int)this + 0x298);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x174);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -0xb,4);
      puVar4[-10] = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[-0x7e];
      F_005a2710(puVar4 + 9,4);
      puVar4[10] = uVar1;
      uVar2 = F_0042a990(puVar5 + -0x7b);
      F_005a2710(puVar4 + 0x13,6);
      local_8 = local_8 + 1;
      puVar4[0x14] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710((undefined *)(param_2 + 0x140),4);
    uVar3 = 0;
    *(int *)(param_2 + 0x144) = local_8;
    puVar5 = (undefined4 *)((int)this + 0x48c);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x21c);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 + -9,4);
      puVar4[-8] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 0xf,4);
      puVar4[0x10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x17,4);
      puVar4[0x18] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2);
      F_005a2710(puVar4 + 7,6);
      local_8 = local_8 + 1;
      puVar4[8] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 4);
    F_005a2710((undefined *)(param_2 + 0x1e8),4);
    *(int *)(param_2 + 0x1ec) = local_8;
  }
  return 0;
}

/* ref: FUN_0076bd10 */
unsigned int F_0076bd10(unsigned int gen_a0)
{
  GEN_ENTER(0x76bd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined4 *)((int)this + 0xb97c) = 0;
  *(undefined1 *)((int)this + 0xb96e) = 0;
  if (*(int *)((int)this + 0xb954) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xb954),0);
    *(undefined4 *)((int)this + 0xb954) = 0;
  }
  return 0;
}

/* ref: FUN_0076bd60 */
uint F_0076bd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((char)param_1 != '\0') {
    uVar4 = 0x381;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar3 = F_0046a630(pvVar2,uVar4);
    return uVar3;
  }
  uVar4 = 0x380;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar3 = F_0046a630(pvVar2,uVar4);
  return uVar3;
}

/* ref: FUN_0076bda0 */
byte F_0076bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x9680) = param_1;
  *(undefined4 *)((int)this + 0x9684) = param_2;
  *(byte *)((int)this + 0x9698) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_0076bdd0 */
uint F_0076bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((REFG(int, 0x1379694) == 0) || (*(char *)((int)this + 0xb971) == '\x01')) {
    return 0x40;
  }
  if (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02') {
    return 0x80;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0x100;
  }
  if (1 < REFG(undefined1, 0x1338ad4)) {
    bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar1 == 0) {
      return 0x200;
    }
  }
  return -(uint)(REFG(char, 0x14ab0d0) != '\0') & 0x400;
}

/* ref: FUN_0076be40 */
uint F_0076be40(unsigned int gen_a0)
{
  GEN_ENTER(0x76be40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((REFG(int, 0x1379694) == 0) || (REFG(char, 0x14ab070) == '\0')) {
    return 5;
  }
  if (*(uint *)((int)this + 0x9680) != (uint)REFG(undefined1, 0x14ab0d4)) {
    return 1;
  }
  if (*(int *)((int)this + 0x9684) != 0) {
    return 2;
  }
  if (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02') {
    return 3;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 4;
  }
  return 0;
}

/* ref: FUN_0076beb0 */
uint F_0076beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = (short *)((int)this + 0x96a2);
  uVar1 = 0;
  psVar3 = psVar2;
  do {
    if (*psVar3 == (short)param_1) {
      return (int)this + uVar1 * 10 + 0x96a2;
    }
    uVar1 = uVar1 + 1;
    psVar3 = psVar3 + 5;
  } while (uVar1 < 5);
  uVar1 = 0;
  do {
    if (*psVar2 == 0) {
      psVar2 = (short *)((int)this + uVar1 * 10 + 0x96a2);
      psVar2[1] = 0;
      psVar2[2] = 0;
      psVar2[3] = 0;
      *(undefined1 *)(psVar2 + 4) = 0;
      *psVar2 = (short)param_1;
      return (uint)psVar2;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 5;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_0076bf30 */
uint F_0076bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)((int)this + 0x96a2);
  do {
    if (*psVar2 == (short)param_1) {
      return (int)this + uVar1 * 10 + 0x96a2;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 5;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_0076bf70 */
uint F_0076bf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0xb974) == '\x02') {
    psVar2 = (short *)((int)this + 0x760);
    do {
      if (*psVar2 == (short)param_1) {
        return uVar1 * 0x11c + 0x65c + (int)this;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x8e;
    } while (uVar1 < 0x80);
  }
  return 0;
}

/* ref: FUN_0076bfc0 */
uint F_0076bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0xb974) == '\x02') {
    puVar2 = (ushort *)((int)this + 0x764);
    do {
      if (*puVar2 == param_1) {
        return uVar1 * 0x11c + 0x65c + (int)this;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x8e;
    } while (uVar1 < 0x80);
  }
  return 0;
}

/* ref: FUN_0076c020 */
uint F_0076c020(unsigned int gen_a0)
{
  GEN_ENTER(0x76c020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = param_1;
  do {
    piVar1 = &REFG(undefined4, 0x10bfcdc) + uVar3;
    iVar2 = (&REFG(undefined4, 0x10bfcc8))[uVar3];
    if (uVar4 < (uint)(*piVar1 - iVar2)) {
      return iVar2 + uVar4;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + (iVar2 - *piVar1);
  } while (uVar3 < 5);
  return 0;
}

/* ref: FUN_0076c060 */
uint F_0076c060(unsigned int gen_a0)
{
  GEN_ENTER(0x76c060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xb950) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xb950),0);
    *(undefined4 *)((int)this + 0xb950) = 0;
  }
  return in_EAX;
}

/* ref: FUN_0076c0f0 */
uint F_0076c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  if (*(ushort * PTR32 *)((int)this + 0x968c) != (ushort *)0x0) {
    uVar2 = F_0076bf70(this,(uint)**(ushort * PTR32 *)((int)this + 0x968c));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = F_0042a990(uVar2 + 0x54);
      F_005a2710(param_1,8);
      *(uint *)((int)param_1 + 4) = uVar3;
      uVar3 = 0;
      puVar4 = (uint *)((int)param_1 + 0x24);
      do {
        bVar1 = *(byte *)((int)this + uVar3 + 0x969c);
        F_005a2710(puVar4 + -7,4);
        puVar4[-6] = (uint)bVar1;
        bVar1 = *(byte *)(uVar2 + 0x112 + uVar3);
        F_005a2710(puVar4 + -1,4);
        *puVar4 = (uint)bVar1;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar3 < 3);
      bVar1 = *(byte *)((int)this + 0x96a0);
      uVar3 = F_005a2710((undefined *)((int)param_1 + 0x38),4);
      *(uint *)((int)param_1 + 0x3c) = (uint)bVar1;
    }
  }
  return uVar3;
}

/* ref: FUN_0076c1a0 */
byte F_0076c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xb96c) != '\0';
}

/* ref: FUN_0076c230 */
uint F_0076c230(unsigned int gen_a0)
{
  GEN_ENTER(0x76c230u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return 0;
  case 2: ;
  case 3: ;
    uVar1 = 2;
    break;
  case 4: ;
    return 1;
  }
  return uVar1;
}

/* ref: FUN_0076c270 */
uint F_0076c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x36);
  if (REFG(char, 0x14ab070) == '\0') {
    return uVar2;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = (uint)REFG(undefined1, 0x14ab0d4);
  if (uVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = uVar6 + 0xf294;
  }
  if (**(int * PTR32 *)(uVar2 + 0x20) != iVar5) {
    **(int * PTR32 *)(uVar2 + 0x20) = iVar5;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  if (((char)param_1 == '\0') &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this), (char)uVar2 == '\0')) {
    return uVar2;
  }
  uVar2 = F_00ab21a0(uVar6);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar3 = F_00a68280(&REFG(char, 0x14ab070),0xffffffff,0);
  uVar3 = uVar3 & 0xffff;
  uVar7 = 0x9c6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  uVar3 = F_00461bb0(pvVar4,uVar7,uVar3);
  F_0042e430((undefined *)((int)this + 0x9cbc),uVar3);
  iVar5 = 3;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar2 + 0x3f))) {
  case 1: ;
    iVar5 = 0;
    break;
  case 2: ;
  case 3: ;
    iVar5 = 2;
    break;
  case 4: ;
    iVar5 = 1;
    break;
  default: ;
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
    goto LAB_0076c358;
  }
  uVar7 = (&REFG(undefined4, 0x10c4414))[iVar5];
  uVar9 = 0;
  uVar8 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar7,uVar8,uVar9);
LAB_0076c358: ;
  F_0042e430((undefined *)((int)this + 0x9d10),uVar2);
  if (uVar6 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = uVar6 + 0xf294;
  }
  F_005a2710((undefined *)((int)this + 0x9f70),4);
  *(int *)((int)this + 0x9f74) = param_1;
  uVar2 = F_0042a990((int)this + 0x9cbc);
  F_005a2710((undefined *)((int)this + 0x9f68),8);
  *(uint *)((int)this + 0x9f6c) = uVar2;
  F_005a2710((undefined *)((int)this + 0x9f80),4);
  *(int *)((int)this + 0x9f84) = iVar5;
  uVar2 = F_0042a990((int)this + 0x9d10);
  uVar6 = F_005a2710((undefined *)((int)this + 0x9f88),8);
  *(uint *)((int)this + 0x9f8c) = uVar2;
  return uVar6;
}

/* ref: FUN_0076c420 */
uint F_0076c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0076bf70(this,param_1);
  if (*(char *)(uVar2 + 0x115) == '\x03') {
    bVar1 = F_00a71170(&REFG(undefined, 0x14b4e6c),(uint)*(ushort *)(uVar2 + 0x108));
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_0076b890((undefined *)((int)this + 0xc));
  return uVar2;
}

/* ref: FUN_0076c480 */
uint F_0076c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if ((param_1 & 1 << ((byte)uVar1 & 0x1f)) != 0) {
      uVar2 = uVar1;
      if (10 < uVar1) {
        return param_1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xb);
  iVar3 = (&REFG(undefined4, 0x10c4420))[uVar2];
  uVar2 = 0;
  if (iVar3 != 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0046a630(this_00,iVar3);
  }
  return uVar2;
}

/* ref: FUN_0076c4d0 */
uint F_0076c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x9680) == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return 0;
  }
  uVar1 = F_00ab21a0(*(int *)((int)this + 0x9680));
  iVar2 = 3;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar1 + 0x3f))) {
  case 1: ;
    iVar2 = 0;
    break;
  case 2: ;
  case 3: ;
    iVar2 = 2;
    break;
  case 4: ;
    iVar2 = 1;
  }
  *(bool *)(param_1 + 2) = iVar2 == 0;
  *(bool *)(param_1 + 3) = iVar2 == 1;
  *(bool *)(param_1 + 4) = iVar2 == 2;
  return param_1;
}

/* ref: FUN_0076c550 */
byte F_0076c550(unsigned int gen_a0)
{
  GEN_ENTER(0x76c550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != 5;
}

/* ref: FUN_0076c560 */
byte F_0076c560(unsigned int gen_a0)
{
  GEN_ENTER(0x76c560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 5;
}

/* ref: FUN_0076c570 */
uint F_0076c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(ushort *)(param_1 + 0x10c) < *(ushort *)(param_2 + 0x10c));
}

/* ref: FUN_0076c590 */
byte F_0076c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = -((char)param_2 != '\0') & 3;
  *(byte *)(in_ecx + 0x969f) = bVar1;
  return bVar1;
}

/* ref: FUN_0076c5b0 */
uint F_0076c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x76c5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  int * piVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00a39b80();
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  uVar2 = F_00460bd0(this,0x9d1,param_2);
  F_0042e430(param_1,uVar2);
  if ((param_7 & 0x10) != 0) {
    if (*(char *)*param_8 != '\0') {
      F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8,uVar2);
  }
  uVar2 = F_00460bd0(this,0x9d2,param_3);
  F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
  F_0042d540(param_1,uVar2);
  if ((param_7 & 4) != 0) {
    if (*(char *)*param_8 != '\0') {
      F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8,uVar2);
  }
  uVar2 = param_4;
  if (0x13 < param_4) {
    uVar2 = 0x14;
  }
  if (uVar2 == param_5) {
    if (uVar2 < 0x14) {
      uVar2 = F_00460bd0(this,0xa09,param_5);
    }
    else {
      uVar2 = F_00460bd0(this,0xa08,param_5);
    }
  }
  else if (uVar2 < 0x14) {
    uVar2 = F_00460c80(this,0x9d3,param_5,uVar2);
  }
  else {
    uVar2 = F_00460bd0(this,0x9f2,param_5);
  }
  if (uVar2 != 0) {
    F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
    F_0042d540(param_1,uVar2);
    if ((param_7 & 2) != 0) {
      if (*(char *)*param_8 != '\0') {
        F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
      }
      F_0042d540(param_8,uVar2);
    }
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar3 = F_00460bd0(this,0x9d4,param_6);
    uVar2 = 0;
    if (uVar3 != 0) {
      F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
      uVar2 = F_0042d540(param_1,uVar3);
      if ((param_7 & 8) != 0) {
        if (*(char *)*param_8 != '\0') {
          F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
        }
        uVar2 = F_0042d540(param_8,uVar3);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf1 */
uint F_0076c740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76c740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf3 */
unsigned int F_0076c760(unsigned int gen_a0)
{
  GEN_ENTER(0x76c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0xc] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_0076c790 */
unsigned int F_0076c790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if (param_1 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,param_1,0);
    *(undefined1 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_0076c7c0 */
byte F_0076c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c7c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  bool bVar2;
  
  bVar1 = 1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x55: ;
    break;
  default: ;
    goto switchD_0076c7d7_caseD_36;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
    if (param_1 == 0x37) {
      bVar2 = REFG(char, 0x14ab29a) == '\x01';
    }
    else {
      if (param_1 != 0x38) {
        if ((param_1 == 0x39) && (REFG(char, 0x14ab29a) == '\x03')) {
          return 1;
        }
        break;
      }
      bVar2 = REFG(char, 0x14ab29a) == '\x02';
    }
    if (bVar2) {
      return 1;
    }
  }
  bVar1 = 0;
switchD_0076c7d7_caseD_36: ;
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentEmote::vf5 */
unsigned int F_0076c840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,"TextCommand");
    *(uint *)(this + 0xc) = uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentAchievement::vf13 */
unsigned int F_0076c870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    *(undefined4 *)(in_ecx + 0x14) = 0;
    *(undefined4 *)(in_ecx + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_0076c890 */
unsigned int F_0076c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c890u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  for (uVar2 = 0; (uVar1 < 0x32c && (F_00ab2050(uVar1), uVar2 <= param_2)); uVar2 = uVar2 + 1) {
    uVar1 = uVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0076c8d0 */
uint F_0076c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76c8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x898);
  F_005a2710(pvVar1,8);
  *(undefined4 *)((int)pvVar1 + 4) = param_2;
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x8a0);
  F_005a2710(pvVar1,4);
  *(uint *)((int)pvVar1 + 4) = param_3;
  *param_1 = *param_1 + 2;
  return param_3;
}

/* ref: FUN_0076c920 */
uint F_0076c920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76c920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x898);
  F_005a2710(pvVar1,4);
  *(uint *)((int)pvVar1 + 4) = (uint)((char)param_2 != '\0');
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x8a0);
  F_005a2710(pvVar1,8);
  *(uint *)((int)pvVar1 + 4) = param_3;
  *param_1 = *param_1 + 2;
  return param_3;
}

/* ref: FUN_0076c970 */
uint F_0076c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x30) = 0;
  }
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b0b0(&REFG(undefined, 0x14ab464));
    if (uVar1 != 2) {
      F_00a6b020(&REFG(undefined, 0x14ab464));
      return 1;
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0076c9d0 */
uint F_0076c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b040(&REFG(undefined, 0x14ab464),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0076ca00 */
byte F_0076ca00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ca00u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b160(&REFG(undefined, 0x14ab464));
    if (uVar1 == 2) {
      uVar1 = F_00a6b180(&REFG(undefined, 0x14ab464));
      *param_1 = uVar1;
      uVar1 = F_00a6b190(&REFG(undefined, 0x14ab464));
      *param_2 = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0076ca50 */
uint F_0076ca50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ca50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (*(char *)((int)this + 0x464) == '\0') {
    uVar1 = F_0043bd00(this_00,0x7d9,0,0);
  }
  else {
    uVar1 = F_00461bb0(this_00,0x12,*(undefined4 *)((int)this + 0x468));
  }
  F_0042e430((undefined *)((int)this + 0x410),uVar1);
  uVar1 = F_0042a990((undefined *)((int)this + 0x410));
  F_005a2710((undefined *)((int)this + 0x898),8);
  *(uint *)((int)this + 0x89c) = uVar1;
  uVar1 = F_005a2710((undefined *)((int)this + 0x1070),4);
  *(undefined4 *)((int)this + 0x1074) = 5;
  return uVar1;
}

/* ref: FUN_0076cad0 */
uint F_0076cad0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)((int)this + 0x3b4) == '\0') {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2cb0),4);
    *(undefined4 *)((int)this + 0x2cb4) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2cb0),4);
  *(undefined4 *)((int)this + 0x2cb4) = 1;
  uVar1 = *(undefined4 *)((int)this + 0x3b0);
  uVar2 = *(uint *)((int)this + 0x3ac);
  F_0042aca0((int)this + 0x2db0);
  uVar5 = 0x12;
  uVar4 = uVar2;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
  F_0042e430((undefined *)((int)this + 0x2db0),uVar4);
  F_0042e370((undefined *)((int)this + 0x2db0),&REFG(undefined, 0x10bfd3c));
  uVar6 = 0x12;
  uVar5 = uVar1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00461bb0(pvVar3,uVar6,uVar5);
  F_0042e370((undefined *)((int)this + 0x2db0),uVar4);
  uVar4 = F_0042a990((int)this + 0x2db0);
  F_005a2710((undefined *)((int)this + 0x2cb8),8);
  *(uint *)((int)this + 0x2cbc) = uVar4;
  F_005a2710((undefined *)((int)this + 0x2cc0),4);
  uVar2 = F_0046e6b0(uVar2,uVar1);
  *(uint *)((int)this + 0x2cc4) = uVar2;
  return uVar2;
}

/* ref: FUN_0076cbd0 */
uint F_0076cbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint * puVar5;
  int in_ecx;
  uint local_8;
  
  bVar4 = *(byte *)((int)this + 0x46);
  if (9 < bVar4) {
    bVar4 = 10;
  }
  if ((*(char *)((int)this + 0x3b5) == '\0') || (bVar4 == 0)) {
    local_8 = F_005a2710((undefined *)((int)this + 0x2cc8),4);
    *(undefined4 *)((int)this + 0x2ccc) = 0;
  }
  else {
    F_005a2710((undefined *)((int)this + 0x2cc8),4);
    local_8 = (uint)bVar4;
    *(uint *)((int)this + 0x2ccc) = local_8;
    if (bVar4 != 0) {
      puVar5 = (uint *)((int)this + 0x2cdc);
      in_ecx = (int)this + 0x54;
      do {
        cVar1 = *(char *)(in_ecx + -4);
        F_005a2710(puVar5 + -3,4);
        puVar5[-2] = (uint)(cVar1 != '\0');
        uVar2 = F_0042a990(in_ecx);
        uVar3 = F_005a2710(puVar5 + -1,8);
        *puVar5 = uVar2;
        puVar5 = puVar5 + 4;
        in_ecx = in_ecx + 0x60;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
      return uVar3;
    }
  }
  return local_8;
}

/* ref: FUN_0076cc70 */
uint F_0076cc70(unsigned int gen_a0)
{
  GEN_ENTER(0x76cc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2d70),4);
    *(undefined4 *)((int)this + 0x2d74) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2d70),4);
  *(undefined4 *)((int)this + 0x2d74) = 1;
  uVar1 = *(undefined4 *)((int)this + 0x40);
  F_005a2710((undefined *)((int)this + 0x2d78),4);
  *(undefined4 *)((int)this + 0x2d7c) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x3c);
  F_005a2710((undefined *)((int)this + 0x2d80),4);
  *(undefined4 *)((int)this + 0x2d84) = uVar1;
  uVar2 = F_0042a990((int)this + 0x3b8);
  uVar3 = F_005a2710((undefined *)((int)this + 0x2d88),8);
  *(uint *)((int)this + 0x2d8c) = uVar2;
  return uVar3;
}

/* ref: FUN_0076cd00 */
uint F_0076cd00(unsigned int gen_a0)
{
  GEN_ENTER(0x76cd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  undefined * puVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 == 0) {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2d90),4);
    *(undefined4 *)((int)this + 0x2d94) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2d90),4);
  *(undefined4 *)((int)this + 0x2d94) = 1;
  puVar5 = &REFG(undefined, 0x10bdb89);
  puVar3 = (uint *)F_00ab2020(iVar1);
  if (puVar3 != (uint *)0x0) {
    if (REFG(char, 0x14ab0d1) != '\0') {
      puVar3 = puVar3 + 1;
    }
    puVar5 = ((undefined *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
  }
  F_0042aca0((int)this + 0x2e04);
  uVar6 = 0xd1d;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00460540(this_00,uVar6,puVar5);
  F_0042e430((undefined *)((int)this + 0x2e04),uVar2);
  uVar2 = F_0042a990((int)this + 0x2e04);
  uVar4 = F_005a2710((undefined *)((int)this + 0x2d98),8);
  *(uint *)((int)this + 0x2d9c) = uVar2;
  return uVar4;
}

/* ref: FUN_0076cdb0 */
unsigned int F_0076cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0xa4) = 0xffff;
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
  return 0;
}

/* ref: FUN_0076ce10 */
byte F_0076ce10(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_0076ce20 */
byte F_0076ce20(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_0076ce30 */
ushort F_0076ce30(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(ushort *)(in_ecx + 0xa2) < 8) {
    return *((ushort *)GEN_TOP((in_ecx + ((uint)*(ushort *)(in_ecx + 0xa2) * 3 + 0x30) * 2)));
  }
  return 0;
}

/* ref: FUN_0076ce50 */
uint F_0076ce50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ecx + 0xa2);
  if (uVar1 < 8) {
    return CONCAT22((short)(uVar1 * 3 >> 0x10),*(undefined2 *)(in_ecx + 0x62 + uVar1 * 6));
  }
  return 0;
}

/* ref: FUN_0076ce90 */
uint F_0076ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined2 * puVar1;
  
  puVar1 = (undefined2 *)(uint)*(ushort *)((int)this + 0xa2);
  if (puVar1 < (undefined2 *)0x8) {
    puVar1 = ((undefined2 *)GEN_TOP(((int)this + ((int)((int)(uintptr_t)puVar1) * 3 + 0x30) * 2)));
    puVar1[1] = (undefined2)param_1;
    *puVar1 = (undefined2)param_2;
    puVar1[2] = (undefined2)param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_0076cf10 */
uint F_0076cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76cf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = 0x10;
  piVar4 = (int *)((int)this + 0x10);
  local_c = 0x19;
  do {
    iVar1 = *piVar4;
    if (iVar1 < 1) {
      if ((char)piVar4[1] == '\0') {
        uVar2 = (iVar1 < 0) - 1 & 0xea62;
LAB_0076cf6e: ;
        if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3))) != uVar2) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3))) = uVar2;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        *(undefined1 *)(piVar4 + 1) = 1;
      }
LAB_0076cf81: ;
      local_8 = local_8 + 1;
    }
    else {
      uVar2 = F_00ab24a0(iVar1);
      if (uVar2 != 0) {
        if ((char)piVar4[1] == '\0') {
          uVar2 = F_00ab65a0(*piVar4,uVar2);
          goto LAB_0076cf6e;
        }
        goto LAB_0076cf81;
      }
    }
    iVar3 = iVar3 + 0xc;
    piVar4 = piVar4 + 2;
    local_c = local_c + -1;
    if (local_c == 0) {
      return (local_8 != 0x19) - 1 & 4;
    }
  } while( true );
}

/* ref: FUN_0076cfb0 */
uint F_0076cfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76cfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xdc)) {
    uVar1 = F_00ab24a0(*(int *)((int)this + 0xdc));
    uVar2 = 0;
    if (uVar1 != 0) {
      if (*(char *)((int)this + 0xe9) != '\0') {
        uVar2 = F_00ab65a0(*(undefined4 *)((int)this + 0xdc),uVar1);
        uVar2 = uVar2 + 39000;
      }
      if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x140))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x140))) = uVar2;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      uVar1 = F_00ab6240(*(undefined4 *)((int)this + 0xdc),0,uVar1);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x10)))) {
        *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x10))) = uVar1;
        *(undefined1 *)(param_3 + 0x1d) = 1;
      }
      uVar2 = 0x10;
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0076d050 */
byte F_0076d050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (byte)param_2;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf1 */
uint F_0076d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined1 uVar2;
  
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  uVar2 = 0;
  if ((-3 < iVar1) && (iVar1 < 0)) {
    F_00a6fb50(&REFG(undefined, 0x14ac234));
    *(undefined4 *)(this + 8) = 0;
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076d0b0 */
byte F_0076d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 8) {
    *(undefined4 *)((int)this + 4) = REFG(undefined4, 0x14ac238);
    *(undefined1 *)((int)this + 10) = REFG(undefined1, 0x14ac240);
    *(undefined2 *)((int)this + 8) = REFG(undefined2, 0x14ac23c);
    *(undefined1 *)((int)this + 0xb) = REFG(undefined1, 0x14ac23f);
    *(undefined1 *)((int)this + 0xc) = REFG(undefined1, 0x14ac23e);
    *(undefined4 *)((int)this + 0x10) = REFG(undefined4, 0x14ac244);
    *(undefined1 *)((int)this + 0x16) = REFG(undefined1, 0x14ac24c);
    *(undefined2 *)((int)this + 0x14) = REFG(undefined2, 0x14ac248);
    *(undefined1 *)((int)this + 0x17) = REFG(undefined1, 0x14ac24b);
    *(undefined1 *)((int)this + 0x18) = REFG(undefined1, 0x14ac24a);
    *(undefined4 *)((int)this + 0x1c) = REFG(undefined4, 0x14ac250);
    *(undefined1 *)((int)this + 0x22) = REFG(undefined1, 0x14ac258);
    *(undefined2 *)((int)this + 0x20) = REFG(undefined2, 0x14ac254);
    *(undefined1 *)((int)this + 0x23) = REFG(undefined1, 0x14ac257);
    *(undefined1 *)((int)this + 0x24) = REFG(undefined1, 0x14ac256);
    *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x14ac25c);
    *(undefined1 *)((int)this + 0x2e) = REFG(undefined1, 0x14ac264);
    *(undefined2 *)((int)this + 0x2c) = REFG(undefined2, 0x14ac260);
    *(undefined1 *)((int)this + 0x2f) = REFG(undefined1, 0x14ac263);
    *(undefined1 *)((int)this + 0x30) = REFG(undefined1, 0x14ac262);
    *(undefined4 *)((int)this + 0x34) = REFG(undefined4, 0x14ac268);
    *(undefined1 *)((int)this + 0x3a) = REFG(undefined1, 0x14ac270);
    *(undefined2 *)((int)this + 0x38) = REFG(undefined2, 0x14ac26c);
    *(undefined1 *)((int)this + 0x3b) = REFG(undefined1, 0x14ac26f);
    *(undefined1 *)((int)this + 0x3c) = REFG(undefined1, 0x14ac26e);
    *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x14ac274);
    *(undefined1 *)((int)this + 0x46) = REFG(undefined1, 0x14ac27c);
    *(undefined2 *)((int)this + 0x44) = REFG(undefined2, 0x14ac278);
    *(undefined1 *)((int)this + 0x47) = REFG(undefined1, 0x14ac27b);
    *(undefined1 *)((int)this + 0x48) = REFG(undefined1, 0x14ac27a);
    *(undefined1 *)((int)this + 0x4c) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf5 */
uint F_0076d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  ((uint *)(gen_frame + 0x1a0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') && (uVar2 = (byte)this[0x58] - 1, uVar2 == 0)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      ((uint *)(gen_frame + 0x1a0))[0] = 0xefb;
      ((uint *)(gen_frame + 0x1a0))[1] = 0xefc;
      ((uint *)(gen_frame + 0x1a0))[2] = 0xefa;
      ((uint *)(gen_frame + 0x1a0))[3] = 0xef9;
      ((uint *)(gen_frame + 0x1a0))[4] = 0xefd;
      ((uint *)(gen_frame + 0x1a0))[5] = 0xefe;
      piVar3 = ((int *)(gen_frame + 0x18));
      iVar5 = 0x30;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(&(*(int *)(gen_frame + 0xc)),*(undefined4 *)(uVar2 + 0x14));
      F_005a2710(((int *)(gen_frame + 0x18)),4);
      ((int *)(gen_frame + 0x18))[1] = (*(int *)(gen_frame + 0xc)) + 2;
      (*(uint *)(gen_frame + 0x10)) = 0;
      puVar7 = ((uint *)(gen_frame + 0x3c));
      pAVar8 = this + 0x10;
      do {
        (*(uint *)(gen_frame + 0x14)) = *(uint *)pAVar8;
        F_005a2710(puVar7 + -5,3);
        puVar7[-4] = (*(uint *)(gen_frame + 0x14));
        if (*(uint *)pAVar8 != 0) {
          uVar2 = F_00ab24a0(*(uint *)pAVar8);
          (*(uint *)(gen_frame + 0x14)) = uVar2;
          if (uVar2 == 0) {
            puVar7 = ((uint *)(gen_frame + 0x1a0));
            iVar5 = 0x30;
            do {
              puVar7 = puVar7 + -2;
              uVar2 = F_005a2670(puVar7);
              iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
            F_00c47745(((uint *)(gen_frame + 0x1a0))[6] ^ (uint)(uint)(gen_frame + 0x1bc));
            return uVar2;
          }
          uVar2 = ((uint *)(gen_frame + 0x1a0))[(int)((*(uint *)(gen_frame + 0x10)))];
          uVar10 = 0;
          uVar9 = 0;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
          uVar2 = F_0043bd00(pvVar4,uVar2,uVar9,uVar10);
          F_005aa640(puVar7 + -7,uVar2);
          uVar2 = F_00ab6240(*(uint *)pAVar8,0,(*(uint *)(gen_frame + 0x14)));
          F_005aa640(puVar7 + -3,uVar2);
          uVar2 = F_00ab65a0(*(uint *)pAVar8,(*(uint *)(gen_frame + 0x14)));
          (*(uint *)(gen_frame + 0x14)) = uVar2;
          F_005a2710(puVar7 + -1,3);
          uVar2 = (uint)(byte)pAVar8[8];
          piVar3 = *(int * PTR32 *)(this + 4);
          *puVar7 = (*(uint *)(gen_frame + 0x14));
          uVar9 = 0x23;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
          uVar2 = F_00461bb0(pvVar4,uVar9,uVar2);
          F_005aa640(puVar7 + 1,uVar2);
          uVar2 = *(ushort *)(pAVar8 + 4) / 10;
          uVar6 = (uint)*(ushort *)(pAVar8 + 4) % 10;
          uVar9 = 0xee1;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
          uVar2 = F_00461c60(pvVar4,uVar9,uVar2,uVar6);
          F_005aa640(puVar7 + 3,uVar2);
          AVar1 = pAVar8[7];
          uVar2 = (*(uint *)(gen_frame + 0x10)) << 0x10;
          F_005a2710(puVar7 + 5,4);
          puVar7[6] = (byte)AVar1 | uVar2;
          AVar1 = pAVar8[6];
          F_005a2710(puVar7 + 7,3);
          puVar7[8] = (byte)AVar1 + 180000;
        }
        uVar2 = (*(uint *)(gen_frame + 0x10)) + 1;
        puVar7 = puVar7 + 0x10;
        pAVar8 = pAVar8 + 0xc;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
      } while (uVar2 < 6);
      this[0x58] = (undefined1)0x0;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0x31,((int *)(gen_frame + 0x18)));
      puVar7 = ((uint *)(gen_frame + 0x1a0));
      iVar5 = 0x30;
      do {
        puVar7 = puVar7 + -2;
        uVar2 = F_005a2670(puVar7);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x1a0))[6] ^ (uint)(uint)(gen_frame + 0x1bc));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf3 */
unsigned int F_0076d510(unsigned int gen_a0)
{
  GEN_ENTER(0x76d510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00a72450(&REFG(undefined, 0x14ab744));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return 0;
}

/* ref: FUN_0076d560 */
unsigned int F_0076d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76d560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar3 = 0;
  do {
    uVar1 = F_00a6ba60(iVar2);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 1 << ((byte)uVar3 & 0x1f);
    }
    if (10 < uVar1) {
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2 << ((byte)uVar3 & 0x1f);
    }
    uVar3 = uVar3 + 2;
    iVar2 = iVar2 + 1;
  } while (uVar3 < 4);
  **(undefined4 * PTR32 *)(param_2 + 0x20) = 0x20;
  *(undefined1 *)(param_2 + 0x1d) = 1;
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != *(int *)((int)this + 0x20)) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = *(int *)((int)this + 0x20);
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_0076d5d0 */
uint F_0076d5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x76d5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x16)));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x19);
  if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
    F_0076d560(this,&REFG(undefined, 0x14ab744),uVar2);
    iVar3 = 0;
    do {
      uVar6 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar2 = F_00a6b940(iVar3);
      F_00431250(this_00,iVar3 + 2,uVar2,uVar4,uVar5,uVar6);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    return 8;
  }
  return 0;
}

/* ref: FUN_0076d650 */
uint F_0076d650(unsigned int gen_a0)
{
  GEN_ENTER(0x76d650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x19);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x16)));
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x20) != 0)) {
    uVar4 = F_00a66ba0(&REFG(undefined, 0x14ab744),*(undefined4 *)((int)this + 0x24));
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) = uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar6 = 0;
    if (0 < (int)uVar4) {
      local_8 = 0x10;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar5 = F_00a6b970(iVar6);
        F_00431250(this_00,iVar6 + 6,uVar5,uVar7,uVar8,uVar9);
        bVar1 = F_00a66bc0(*(undefined4 *)((int)this + 0x24),iVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = (uint)bVar1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_8 = local_8 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar4);
    }
    return (uint)(0 < (int)uVar4);
  }
  return 0;
}

/* ref: FUN_0076d760 */
uint F_0076d760(unsigned int gen_a0)
{
  GEN_ENTER(0x76d760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x19);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x16)));
  piVar1 = REFG(undefined4, 0x14ab76c);
  if (((uVar2 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x20) != 0)) {
    local_10 = (uint)*(byte *)(REFG(undefined4, 0x14ab76c) + 1);
    if (0x1e < local_10) {
      local_10 = 0x1e;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0))) != local_10) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0))) = local_10;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    local_8 = 0;
    if (local_10 != 0) {
      local_c = 0;
      local_14 = 0xc0;
      do {
        iVar4 = *piVar1 + local_c;
        uVar8 = 0;
        uVar7 = 1;
        uVar5 = (uint)*(byte *)(iVar4 + 0xc1) << 0x10 | (uint)*(byte *)(iVar4 + 0xc0);
        uVar6 = 0;
        uVar3 = F_0042a990(iVar4 + 0x10);
        F_00431250(this_00,local_8 + 0x2e,uVar3,uVar6,uVar7,uVar8);
        uVar3 = *(uint *)(iVar4 + 0xb8) & ((int)*(uint *)(iVar4 + 0xb8) < 0) - 1;
        if (*((uint *)GEN_TOP((local_14 + -4 + *(int *)(uVar2 + 0x20)))) != uVar3) {
          *((uint *)GEN_TOP((local_14 + -4 + *(int *)(uVar2 + 0x20)))) = uVar3;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_14))) != (uint)*(byte *)(iVar4 + 0xc2)) {
          *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_14))) = (uint)*(byte *)(iVar4 + 0xc2);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((local_14 + -8 + *(int *)(uVar2 + 0x20)))) != *(int *)(iVar4 + 0xbc)) {
          *((int *)GEN_TOP((local_14 + -8 + *(int *)(uVar2 + 0x20)))) = *(int *)(iVar4 + 0xbc);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((local_14 + 4 + *(int *)(uVar2 + 0x20)))) != uVar5) {
          *((uint *)GEN_TOP((local_14 + 4 + *(int *)(uVar2 + 0x20)))) = uVar5;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        local_c = local_c + 0xc4;
        local_8 = local_8 + 1;
        local_14 = local_14 + 0x10;
      } while (local_8 < (int)local_10);
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0076d8e0 */
unsigned int F_0076d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x76d8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 < 4) {
    *(undefined2 *)((int)this + iVar1 * 4 + 0x10) = *(undefined2 *)((int)this + 0x28);
    *(undefined2 *)((int)this + iVar1 * 4 + 0x12) = *(undefined2 *)((int)this + 0x2c);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf11 */
uint F_0076d930(void)
{
  GEN_ENTER(0x76d930u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230));
  return (uint)(bVar1 != 0);
}

/* ref: FUN_0076d950 */
byte F_0076d950(unsigned int gen_a0)
{
  GEN_ENTER(0x76d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0044bfc0(this_00,100);
  return 0;
}

/* ref: FUN_0076d970 */
byte F_0076d970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar3 = piVar1;
  uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"/gearset view %d",param_1 + 1);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1)));
  F_00abefa0(this_00,uVar2,piVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0076d9d0 */
byte F_0076d9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_0043b3e0(uVar1,param_1);
  if ((*(byte *)(uVar1 + 0x39) & 1) != 0) {
    if (*(int *)(uVar1 + 0x34) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(uVar1 + 0x34) + 0xf550;
    }
    F_00434720(this_00,iVar2,uVar1 + 4,0x200000,param_1);
  }
  return 0;
}

/* ref: FUN_0076da30 */
uint F_0076da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(this_00,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 2;
  return uVar1;
}

/* ref: FUN_0076da70 */
uint F_0076da70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76da70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004594a0(this_00,param_1,param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 2;
  return uVar1;
}

/* ref: FUN_0076dab0 */
unsigned int F_0076dab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76dab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_0043b110(this_00,param_1);
  return 0;
}

/* ref: FUN_0076dad0 */
uint F_0076dad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76dad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = F_0043b3e0(uVar2,param_1);
  uVar4 = (uint)((*(byte *)(uVar2 + 0x39) & 2) != 0);
  pbVar3 = (byte *)(uVar2 + 0x50);
  iVar5 = 7;
  do {
    bVar1 = pbVar3[-0x10];
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((bVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    bVar1 = *pbVar3;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((bVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    pbVar3 = pbVar3 + 0x20;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return uVar4;
}

/* ref: FUN_0076db50 */
unsigned int F_0076db50(unsigned int gen_a0)
{
  GEN_ENTER(0x76db50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x6c),0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return 0;
}

/* ref: FUN_0076db80 */
uint F_0076db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x70);
  if ((uVar2 != 0xffffffff) && (uVar2 == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_0076dbd0 */
unsigned int F_0076dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76dbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_18;
  int local_14;
  byte * local_c;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x40);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x3b);
  if ((uVar4 != 0) && (uVar5 != 0)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134e;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != **(uint * PTR32 *)(uVar5 + 0x20)) {
      **(uint * PTR32 *)(uVar5 + 0x20) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x1350;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4)))) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134f;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8)))) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_0043b3e0(uVar7,*(undefined4 *)((int)this + 0x70));
    local_c = (byte *)(uVar7 + 0x40);
    local_14 = 0xc;
    iVar10 = 8;
    piVar3 = (int *)((int)this + 0x74);
    do {
      iVar2 = *(int *)(local_c + 8);
      local_18 = 0;
      if (piVar3[0x16] != iVar2) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_00ab24a0(iVar2);
        if (uVar8 != 0) {
          ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,iVar2,uVar8);
        }
      }
      bVar11 = *(char *)((int)piVar3 + 0x65) != '\0';
      if (bVar11) {
        local_18 = (uint)local_c[0xc];
      }
      bVar1 = *local_c;
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) == 0) {
          iVar9 = (bVar1 >> 2 & 1) * 8;
        }
        else {
          iVar9 = 4;
        }
      }
      else {
        iVar9 = 2;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar10))) != iVar2) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar10))) = iVar2;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar10))) != piVar3[0x17]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar10))) = piVar3[0x17];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar8 = (uint)bVar11 | local_18 * 2;
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) != uVar8) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) = uVar8;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar10))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar10))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar8 = F_0042a990(piVar3 + 1);
      if (uVar8 != *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20))))) {
        *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20)))) = uVar8;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      local_c = local_c + 0x10;
      local_14 = local_14 + 4;
      iVar10 = iVar10 + 0x10;
      piVar3 = piVar3 + 0x1a;
    } while (iVar10 < 0xe8);
    if (((*(byte *)(uVar7 + 0x39) & 2) != 0) && (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) != 1)) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = 1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_0076de10 */
uint F_0076de10(unsigned int gen_a0)
{
  GEN_ENTER(0x76de10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x132818c))[param_1];
}

/* ref: FUN_0076de20 */
uint F_0076de20(unsigned int gen_a0)
{
  GEN_ENTER(0x76de20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x132818c))[uVar1]) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf3 */
uint F_0076de60(unsigned int gen_a0)
{
  GEN_ENTER(0x76de60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  int local_8;
  
  pAVar5 = this + 0x10;
  iVar4 = 2;
  do {
    ((code *)*(gen_code32 *)(*(int *)pAVar5 + 4))(pAVar5);
    *(int *)(pAVar5 + 0x68) = 0;
    pAVar5 = pAVar5 + 0x6c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0xe8;
  iVar4 = 8;
  do {
    F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x388;
  iVar4 = 3;
  do {
    F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x484;
  local_8 = 3;
  do {
    iVar4 = 10;
    do {
      F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
      pAVar5 = pAVar5 + 0x54;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 0xeb4);
  *(undefined4 *)(this + 0xeb0) = 0xffffffff;
  *(undefined4 *)(this + 0xeb4) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  uVar1 = *(undefined4 *)(this + 0xeb8);
  *(undefined4 *)(this + 0xeb8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  return uVar3;
}

/* ref: FUN_0076df70 */
byte F_0076df70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76df70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_5 != 0) {
    if (param_4[0x16] != param_5) {
      uVar2 = F_00ab24a0(param_5);
      if (uVar2 == 0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*param_4 + 8))(param_4,param_5,uVar2);
      param_4[0x1a] = *(int *)(uVar2 + 0x28);
    }
    bVar1 = *(byte *)(param_4 + 0x19);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_5,0,1,1);
    uVar3 = F_0042a990(param_4 + 1);
    F_005a2710(param_3,6);
    *(uint *)((int)param_3 + 4) = uVar3;
    iVar4 = param_4[0x17];
    F_005a2710(param_1,3);
    *(int *)((int)param_1 + 4) = iVar4;
    F_005a2710((undefined *)((int)param_1 + 0x10),3);
    *(uint *)((int)param_1 + 0x14) = uVar2 << 0x10 | (uint)bVar1;
    if ((int)uVar2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (1 < param_4[0x1a]) + 4;
    }
    F_005a2710((undefined *)((int)param_1 + 0x18),3);
    *(int *)((int)param_1 + 0x1c) = iVar4;
  }
  F_005a2710(param_2,4);
  *(int *)((int)param_2 + 4) = param_5;
  return 1;
}

/* ref: FUN_0076e060 */
uint F_0076e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76e060u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2840(param_2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = param_2 | 0x8000000;
    uVar1 = *(ushort *)(uVar2 + 0x9a);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(uint *)((int)param_1 + 0x14) = (uint)uVar1;
    uVar3 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
  }
  return uVar3;
}

/* ref: FUN_0076e0c0 */
uint F_0076e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab2c30(param_2);
  uVar4 = 0;
  if (uVar3 != 0) {
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = param_2 | 0x4000000;
    uVar4 = F_0042a990(param_2 * 0x54 + 0xe8 + (int)this);
    F_005a2710((undefined *)((int)param_1 + 8),6);
    *(uint *)((int)param_1 + 0xc) = uVar4;
    uVar1 = *(undefined4 *)(uVar3 + 8);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(undefined4 *)((int)param_1 + 0x14) = uVar1;
    bVar2 = REFG(undefined1, 0x14b4ec2) >> 2;
    uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(uint *)((int)param_1 + 0x1c) = bVar2 & 1;
  }
  return uVar4;
}

/* ref: FUN_0076e150 */
uint F_0076e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_005a2710((undefined *)((int)param_1 + 8),4);
  *(uint *)((int)param_1 + 0xc) = (uint)((int)param_4 < (int)(param_3 & 0xff));
  uVar2 = F_00ab2cc0(param_4 + 1);
  uVar3 = 0;
  if (uVar2 != 0) {
    bVar1 = *(byte *)(uVar2 + 6);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(uint *)((int)param_1 + 0x14) = (uint)bVar1;
    if ((param_5 < (int)(uint)*(byte *)(uVar2 + 6)) || (param_4 != (param_3 & 0xff))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    F_005a2710(param_1,4);
    *(undefined4 *)((int)param_1 + 4) = uVar5;
    uVar3 = (uint)*(ushort *)(uVar2 + param_2 * 2);
    param_3 = 0;
    if (*(char *)(uVar2 + 7) == '\0') {
      uVar2 = uVar3 | 0x1000000;
      uVar3 = F_00ab1f90(uVar3);
      if (uVar3 != 0) {
        param_3 = *(uint *)(uVar3 + 8);
      }
    }
    else {
      uVar4 = F_00ab1ed0(uVar3);
      uVar2 = uVar3;
      if (uVar4 != 0) {
        param_3 = (uint)*(ushort *)(uVar4 + 8);
      }
    }
    uVar3 = F_0042a990((param_4 + param_2 * 10) * 0x54 + 0x484 + (int)this);
    F_005a2710((undefined *)((int)param_1 + 0x20),6);
    *(uint *)((int)param_1 + 0x24) = uVar3;
    F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(uint *)((int)param_1 + 0x1c) = uVar2;
    uVar3 = F_005a2710((undefined *)((int)param_1 + 0x28),4);
    *(uint *)((int)param_1 + 0x2c) = param_3;
  }
  return uVar3;
}

/* ref: FUN_0076e270 */
byte F_0076e270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte bVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  uint * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[0] = 0x137f;
  ((uint *)(gen_frame + 0xc))[1] = 0x1380;
  ((uint *)(gen_frame + 0xc))[2] = 0x1381;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0x20;
  puVar5 = (uint *)(param_2 + 0x82c);
  do {
    bVar2 = F_00a6b340(param_1,(*(int *)(gen_frame + 0x0)));
    F_005a2710(puVar5 + -5,4);
    puVar5[-4] = (uint)bVar2;
    F_005a2710(puVar5 + -3,4);
    puVar5[-2] = 1;
    puVar3 = (uint *)F_00ab2c60((uint)bVar2);
    if ((puVar3 == (uint *)0x0) || (bVar2 == 0)) {
      uVar4 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)))];
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(this_00,uVar4,uVar6,uVar7);
      F_005a2710(puVar5 + -1,6);
      *puVar5 = uVar4;
    }
    else {
      uVar4 = *puVar3;
      F_005a2710(puVar5 + -1,6);
      *puVar5 = (uVar4 & 0xffffff) + (int)puVar3;
      uVar1 = *(ushort *)((*(int *)(gen_frame + 0x4)) + (int)puVar3);
      F_005a2710(puVar5 + 1,4);
      puVar5[2] = (uint)uVar1;
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 2;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    puVar5 = puVar5 + 8;
  } while ((*(int *)(gen_frame + 0x4)) < 0x26);
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_0076e660 */
uint F_0076e660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  int * piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x1356;
  ((uint *)(gen_frame + 0x10))[1] = 0x1358;
  ((uint *)(gen_frame + 0x10))[2] = 0x135a;
  ((uint *)(gen_frame + 0x10))[3] = 0x1357;
  ((uint *)(gen_frame + 0x10))[4] = 0x1359;
  ((uint *)(gen_frame + 0x10))[5] = 0x135b;
  F_005a2710(param_1,3);
  uVar7 = ((uint *)(gen_frame + 0x10))[(int)(param_2)];
  *(int *)((int)param_1 + 4) = param_2;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043bd00(pvVar5,uVar7,uVar10,uVar11);
  F_005a2710((undefined *)((int)param_1 + 8),6);
  uVar7 = ((uint *)(gen_frame + 0x10))[(int)(param_2 + 3)];
  *(uint *)((int)param_1 + 0xc) = uVar6;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043bd00(pvVar5,uVar7,uVar10,uVar11);
  F_005a2710((undefined *)((int)param_1 + 0x10),6);
  *(uint *)((int)param_1 + 0x14) = uVar7;
  cVar2 = REFG(char, 0x14ab29a);
  (*(int *)(gen_frame + 0x4)) = 0;
  bVar3 = F_00a6b340(&REFG(undefined, 0x14ab584),param_2);
  uVar7 = F_00ab00b0();
  (*(uint *)(gen_frame + 0x8)) = 1;
  if (1 < (int)uVar7) {
    piVar9 = (int *)((int)param_1 + 0x3c);
    do {
      bVar4 = F_00a6b2e0(&REFG(undefined, 0x14ab584),(*(uint *)(gen_frame + 0x8)));
      if (((bVar4 != 0) && (puVar8 = (uint *)F_00ab2c60((*(uint *)(gen_frame + 0x8))), puVar8 != (uint *)0x0)) &&
         ((*(char *)((int)puVar8 + 0x26) == '\0' || (*(char *)((int)puVar8 + 0x26) == cVar2)))) {
        F_005a2710(piVar9 + -5,4);
        piVar9[-4] = (*(uint *)(gen_frame + 0x8));
        F_005a2710(piVar9 + -3,4);
        piVar9[-2] = (uint)(bVar3 == (*(uint *)(gen_frame + 0x8)));
        uVar6 = *puVar8;
        F_005a2710(piVar9 + -1,6);
        *piVar9 = (uVar6 & 0xffffff) + (int)puVar8;
        uVar1 = *(ushort *)((int)puVar8 + param_2 * 2 + 0x20);
        F_005a2710(piVar9 + 1,4);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        piVar9[2] = (uint)uVar1;
        piVar9 = piVar9 + 8;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar7);
  }
  F_005a2710((undefined *)((int)param_1 + 0x18),3);
  *(int *)((int)param_1 + 0x1c) = (*(int *)(gen_frame + 0x4));
  uVar11 = 0x32;
  uVar10 = 0x7fc;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_00461c60(pvVar5,uVar10,(*(int *)(gen_frame + 0x4)),uVar11);
  F_0042e430((undefined *)((int)this + 0xe5c),uVar7);
  uVar7 = F_0042a990((undefined *)((int)this + 0xe5c));
  uVar6 = F_005a2710((undefined *)((int)param_1 + 0x20),6);
  *(uint *)((int)param_1 + 0x24) = uVar7;
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
}

/* ref: FUN_0076e850 */
unsigned int F_0076e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76e850u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  
  if (param_1 < 3) {
    bVar1 = F_00a6b340(&REFG(undefined, 0x14ab584),param_1);
    if (param_2 == bVar1) {
      F_00a6b410(param_1,0);
      return 0;
    }
    F_00a6b410(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0076e890 */
unsigned int F_0076e890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_1 & 0x80000) != 0) {
    puVar1 = (uint *)F_00ab2c30(param_2);
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = puVar1[2];
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
    F_00434720(pvVar2,uVar5,iVar4,param_1,param_2);
    return 0;
  }
  if ((param_1 & 0x1000000) != 0) {
    puVar1 = (uint *)F_00ab2840(param_2);
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = (uint)*(ushort *)((int)puVar1 + 0x9a);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
    F_00434720(pvVar2,uVar5,iVar4,param_1,param_2);
    return 0;
  }
  if ((param_1 & 0x10000) != 0) {
    iVar4 = 0;
    piVar3 = (int *)((int)this + 0x68);
    while (*piVar3 != param_2) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x1b;
      if (1 < iVar4) {
        return 0;
      }
    }
    iVar4 = iVar4 * 0x6c + 0x10 + (int)this;
    if (iVar4 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      uVar5 = F_0042a990(iVar4 + 4);
      uVar6 = *(undefined4 *)(iVar4 + 0x5c);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3)));
      F_00434720(pvVar2,uVar6,uVar5,param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_0076e980 */
uint F_0076e980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76e980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentHowTo::vf3 */
unsigned int F_0076e9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76e9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  return 0;
}

/* ref: FUN_0076e9e0 */
uint F_0076e9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x76e9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0076ea00 */
uint F_0076ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ea00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  short sVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    psVar3 = (short *)(param_1 + 4);
    do {
      if (((char)param_2 == '\0') || (*(short *)(param_1 + 0xe) == 0)) {
        sVar1 = *psVar3;
      }
      else {
        sVar1 = psVar3[5];
      }
      if (sVar1 == 0) {
        return uVar4;
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < 5);
  }
  return uVar4;
}

/* ref: FUN_0076ea40 */
uint F_0076ea40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ea40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (((char)param_3 != '\0') && (*(short *)(param_1 + 0xe) != 0)) {
      uVar1 = F_00ab3b70((int)*(short *)(param_1 + 0xe + param_2 * 2));
      return uVar1;
    }
    uVar1 = F_00ab3b70((int)*(short *)(param_1 + 4 + param_2 * 2));
  }
  return uVar1;
}

/* ref: FUN_0076ea90 */
uint F_0076ea90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ea90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    if ((cVar1 == '\0') ||
       (((cVar3 = (char)param_2, cVar1 != '\x01' && (cVar3 = (char)param_3, cVar1 != '\x02')) ||
        (cVar3 == '\x01')))) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    else {
      if (cVar3 == '\x02') {
        return *(int *)(param_1 + 0xc) + 3000;
      }
      if (cVar3 == '\x03') {
        return *(int *)(param_1 + 0xc) + 6000;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0076eae0 */
uint F_0076eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76eae0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  char cVar2;
  uint * puVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0x10bdbaf;
  }
  cVar1 = *(char *)((int)param_1 + 0x12);
  puVar3 = param_1;
  if ((cVar1 != '\0') &&
     (((cVar2 = (char)param_2, cVar1 == '\x01' || (cVar2 = (char)param_3, cVar1 == '\x02')) &&
      (cVar2 != '\x01')))) {
    if (cVar2 == '\x02') {
      puVar3 = param_1 + 1;
    }
    else if (cVar2 == '\x03') {
      return (int)param_1 + (param_1[2] & 0xffffff) + 8;
    }
  }
  return (*puVar3 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_0076eb40 */
unsigned int F_0076eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x76eb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0xe4),0,*(int *)((int)this + 0xe0) * 4);
  *(undefined4 *)((int)this + 0xdc) = 0;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x10000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x8000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 0x10;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 8;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x80;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x200;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x20000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x100;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 0x200;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x80000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  return 0;
}

/* ref: FUN_0076ec40 */
byte F_0076ec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0076ec50 */
byte F_0076ec50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)((int)this + 0xd0));
  return uVar2 == 4;
}

/* ref: FUN_0076ec80 */
uint F_0076ec80(unsigned int gen_a0)
{
  GEN_ENTER(0x76ec80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2cf0(param_1 & 0xffff);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_0076ecb0 */
uint F_0076ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (uint)((*((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + (param_1 >> 5) * 4))) &
                1 << ((byte)param_1 & 0x1f)) == 0);
}

/* ref: FUN_0076ece0 */
unsigned int F_0076ece0(unsigned int gen_a0)
{
  GEN_ENTER(0x76ece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if (0 < iVar1) {
    *(undefined4 *)((int)this + 0x5c) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0076ed10 */
uint F_0076ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ed10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStackY_6e8 [1708];
  undefined4 uStackY_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 * local_28;
  byte local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  uStack_30 = 1;
  uStack_34 = 0x76ed30;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),1);
  if (**(uint * PTR32 *)(param_1 + 0x20) != uVar1) {
    **(uint * PTR32 *)(param_1 + 0x20) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 2;
  uStack_34 = 0x76ed49;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),2);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 3;
  uStack_34 = 0x76ed64;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),3);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 4;
  uStack_34 = 0x76ed7f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),4);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 5;
  uStack_34 = 0x76ed9a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),5);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 6;
  uStack_34 = 0x76edb5;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),6);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x25;
  uStack_34 = 0x76edd0;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x25);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2a;
  uStack_34 = 0x76edeb;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2a);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x29;
  uStack_34 = 0x76ee06;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x29);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x27;
  uStack_34 = 0x76ee21;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x27);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x28;
  uStack_34 = 0x76ee3c;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x28);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x28))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x28))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x26;
  uStack_34 = 0x76ee57;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x26);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x16;
  uStack_34 = 0x76ee72;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x16);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1b;
  uStack_34 = 0x76ee8d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1b);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2c;
  uStack_34 = 0x76eea8;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2c);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x15;
  uStack_34 = 0x76eec3;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x15);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x13;
  uStack_34 = 0x76eede;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x13);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x18;
  uStack_34 = 0x76eef9;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x18);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x44))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x44))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x14;
  uStack_34 = 0x76ef14;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x14);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2d;
  uStack_34 = 0x76ef2f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2d);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1d;
  uStack_34 = 0x76ef4a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1d);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1e;
  uStack_34 = 0x76ef65;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1e);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1f;
  uStack_34 = 0x76ef80;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1f);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x21;
  uStack_34 = 0x76ef9b;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x21);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x22;
  uStack_34 = 0x76efb6;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x22);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2e;
  uStack_34 = 0x76efd1;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2e);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x30;
  uStack_34 = 0x76efec;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x30);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x48;
  uStack_34 = 0x76f007;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x48);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x49;
  uStack_34 = 0x76f022;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x49);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x70))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x70))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x46;
  uStack_34 = 0x76f03d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x46);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x74))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x74))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x47;
  uStack_34 = 0x76f058;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x47);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar3 = 0x6c8;
  iVar2 = 0;
  local_21 = 0;
  local_20 = 1;
  local_1c = 2;
  local_18 = 3;
  local_14 = 4;
  local_10 = 5;
  local_c = 6;
  local_28 = auStackY_6e8;
  do {
    uStack_38 = *(undefined4 *)(local_28 + iVar3);
    uStackY_3c = 0x76f0b9;
    uVar1 = F_00a684d0(&REFG(undefined1, 0x14ab070),*(undefined4 *)(local_28 + iVar3));
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar3))) != uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar3))) = uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + iVar3))) != (uint)(byte)(&REFG(undefined1, 0x14ab294))[iVar2]) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + iVar3))) = (uint)(byte)(&REFG(undefined1, 0x14ab294))[iVar2];
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    local_21 = local_21 + (&REFG(undefined1, 0x14ab294))[iVar2];
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 0x6e0);
  uStack_38 = 0x76f101;
  uVar1 = F_00a685c0(&REFG(undefined1, 0x14ab070));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6fc))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6fc))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar4 = (uint)local_21;
  uStack_38 = 0x76f124;
  uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070));
  if ((int)(uVar1 - uVar4) < 0) {
    uVar1 = 0;
  }
  else {
    uStack_38 = 0x76f136;
    uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070));
    uVar1 = uVar1 - uVar4;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x700))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x700))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return uVar1;
}

/* ref: FUN_0076f160 */
uint F_0076f160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76f160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  float * pfVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_58c [1300];
  undefined4 uStackY_78;
  int iStack_74;
  int iStack_70;
  undefined1 * local_60;
  uint local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  iVar8 = 0x538;
  local_54 = 1;
  local_50 = 2;
  local_4c = 3;
  local_48 = 4;
  local_44 = 5;
  local_40 = 6;
  local_3c = 7;
  local_38 = 0x1a;
  local_34 = 8;
  local_30 = 9;
  local_2c = 10;
  local_28 = 0xb;
  local_24 = 0xc;
  local_20 = 0xd;
  local_1c = 0xe;
  local_18 = 0xf;
  local_14 = 0x10;
  local_10 = 0x11;
  local_c = 0x12;
  local_60 = auStackY_58c;
  do {
    iVar6 = *(int *)(local_60 + iVar8);
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar6 + 62000;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) = iVar7;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    iStack_70 = iVar6;
    iStack_74 = 0x76f23e;
    uVar4 = F_00a683c0(&REFG(undefined1, 0x14ab070),iVar6);
    iStack_70 = iVar6;
    local_5c = uVar4;
    iStack_74 = 0x76f24c;
    fVar5 = gen_bits2f(F_00a68460(&REFG(undefined1, 0x14ab070),iVar6));
    iStack_70 = 0;
    iStack_74 = iVar6;
    local_58 = fVar5;
    uStackY_78 = 0x76f25c;
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),iVar6,0);
    fVar5 = local_58;
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c + iVar8))) != (uVar4 & 0xffff)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c + iVar8))) = uVar4 & 0xffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x98 + iVar8))) != local_5c) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x98 + iVar8))) = local_5c;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (local_58 == 0.0) {
      iVar6 = 0;
    }
    else if ((int)local_5c < (int)gen_fl2bits(local_58)) {
      fVar2 = ((float)GEN_TOF((((float10)(int)local_5c * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)(int)gen_fl2bits(local_58))));
      local_58 = fVar2;
      dVar3 = (double)fVar2;
      if (dVar3 < 0.0) {
        iStack_70 = 0x76f2c3;
        iVar6 = (int)(dVar3 - REFG(double, 0x1088108));
      }
      else {
        iStack_70 = 0x76f2d0;
        iVar6 = (int)(dVar3 + REFG(double, 0x1088108));
      }
    }
    else {
      iVar6 = 100;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe4 + iVar8))) != iVar6) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe4 + iVar8))) = iVar6;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x130 + iVar8)));
    if (*((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x130 + iVar8))) != fVar5) {
      *pfVar1 = fVar5;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x584);
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)pfVar1;
}

/* ref: FUN_0076f560 */
uint F_0076f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_007641b0((uint)*(byte *)(param_1 + 1),(uint)*(byte *)(param_1 + 2),
                         (uint)*(byte *)(param_1 + 3),(uint)*(byte *)(param_1 + 4),
                         (uint)*(byte *)(param_1 + 5),(uint)*(byte *)(param_1 + 6));
  }
  if (uVar1 != *(uint *)((int)this + 0x1b40)) {
    *(uint *)((int)this + 0x1b40) = uVar1;
    *(undefined1 *)((int)this + 0x1b3c) = 1;
  }
  return uVar1;
}

/* ref: FUN_0076f5b0 */
uint F_0076f5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (*(char *)((int)this + 0x1b3c) != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10bdc13),REFG(undefined4, 0x108cc50));
    if (-1 < *(int *)((int)this + 0x1b40)) {
      uVar2 = 0xb82;
      switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x1b40))) {
      case 0: ;
        uVar2 = 0xb7c;
        break;
      case 1: ;
        uVar2 = 0xb7d;
        break;
      case 2: ;
        uVar2 = 0xb7e;
        break;
      case 3: ;
        uVar2 = 0xb7f;
        break;
      case 4: ;
        uVar2 = 0xb80;
        break;
      case 5: ;
        uVar2 = 0xb81;
      }
      uVar5 = 0;
      uVar4 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0043bd00(this_00,uVar2,uVar4,uVar5);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar1);
    }
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = 0;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_00431250(param_2,0x41,uVar1,uVar2,uVar4,uVar5);
    *(undefined1 *)((int)this + 0x1b3c) = 0;
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0076f7d0 */
uint F_0076f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x76f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_esi = (undefined4)gen_a2;
  undefined4 in_edi = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = F_00ab21a0(param_7);
  F_00ab2b40((uint)*(byte *)(uVar1 + 0x3f));
  *(undefined4 *)(in_ecx + 0xdc4) = *(undefined4 *)(uVar1 + 0x10);
  if (param_7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_7 + 62000;
  }
  if (*((int *)GEN_TOP((*(int *)(param_5 + 0x20) + 0x48))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_5 + 0x20) + 0x48))) = iVar2;
    *(undefined1 *)(param_5 + 0x1d) = 1;
  }
  if (*(int *)(in_ecx + 0xdc4) == 0x20) {
    iVar2 = 2;
  }
  else if (*(int *)(in_ecx + 0xdc4) == 0x21) {
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_5 + 0x20) + 0x50))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_5 + 0x20) + 0x50))) = iVar2;
    *(undefined1 *)(param_5 + 0x1d) = 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x14))))(*(int * PTR32 *)(in_ecx + 4))));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
  piVar3 = *(int * PTR32 *)(in_ecx + 4);
  uVar8 = 0;
  uVar7 = 1;
  if (*piVar4 == 0) {
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x7e7,param_7,0)));
    uVar6 = F_00461bb0(pvVar5,uVar7,uVar8);
    F_00431250(param_6,0x3e,uVar6,in_edi,in_esi,in_ebx);
    uVar1 = F_00431250(param_6,0x3d,(*(uint *)(uVar1 + 0xc) & 0xffffff) + uVar1 + 0xc,0,1,0);
    return uVar1;
  }
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0x7e7,param_7,0)));
  uVar1 = F_00461bb0(pvVar5,uVar7,uVar8);
  F_00431250(param_6,0x3d,uVar1,in_edi,in_esi,in_ebx);
  uVar1 = F_00431250(param_6,0x3e,&REFG(undefined, 0x10bdc25),0,1,0);
  return uVar1;
}

/* ref: FUN_0076f8f0 */
unsigned int F_0076f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x1379694);
  iVar2 = *(int *)(REFG(int, 0x1379694) + 0x1694);
  if (**(int * PTR32 *)(param_1 + 0x20) != *(int *)(REFG(int, 0x1379694) + 0x1690)) {
    **(int * PTR32 *)(param_1 + 0x20) = *(int *)(REFG(int, 0x1379694) + 0x1690);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) != (uint)*(ushort *)(iVar3 + 0x16a0)) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) = (uint)*(ushort *)(iVar3 + 0x16a0);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) != 1000) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) = 1000;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xdc4))) {
  case 0x1e: ;
  case 0x1f: ;
    iVar2 = *(int *)(iVar3 + 0x169c);
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != *(int *)(iVar3 + 0x1698)) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = *(int *)(iVar3 + 0x1698);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) != iVar2) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) = iVar2;
      *(undefined1 *)(param_1 + 0x1d) = 1;
      return 0;
    }
    break;
  case 0x20: ;
    uVar1 = *(ushort *)(iVar3 + 0x16a4);
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != (uint)*(ushort *)(iVar3 + 0x16a2)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = (uint)*(ushort *)(iVar3 + 0x16a2);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) = (uint)uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
      return 0;
    }
    break;
  case 0x21: ;
    uVar1 = *(ushort *)(iVar3 + 0x16a8);
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) != (uint)*(ushort *)(iVar3 + 0x16a6)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) = (uint)*(ushort *)(iVar3 + 0x16a6);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = (uint)uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_0076fc90 */
uint F_0076fc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76fc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  byte * pbVar12;
  uint uVar13;
  uint uVar14;
  undefined * pvVar15;
  byte * pbVar16;
  undefined * pvVar17;
  bool bVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_24;
  
  uVar9 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this_00 = (undefined *)param_1[1];
  iVar3 = *param_1;
  iVar4 = param_1[3];
  local_24 = param_1[0xe];
  iVar5 = param_1[2];
  if (param_1[4] < 1) goto LAB_0076fd94;
  iVar10 = param_1[4] + -1;
  if (7 < iVar10) {
    iVar10 = 7;
  }
  pvVar17 = (undefined *)(iVar10 * 0xb0 + 0x4a8 + (int)this);
  if (*(char *)((int)param_1 + 0x49) == '\x10') {
    *(undefined2 *)((int)pvVar17 + 0xa8) = 0;
    local_24 = 0xff;
    puVar11 = (uint *)F_00ab3bd0((uint)*(byte *)((int)param_1 + 0x49));
    if (puVar11 != (uint *)0x0) {
      pbVar16 = ((byte *)GEN_TOP(((*puVar11 & 0xffffff) + (int)puVar11)));
      pbVar12 = (byte *)F_0042a990(pvVar17);
      do {
        bVar2 = *pbVar16;
        bVar18 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_0076fd50: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076fd55;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar16[1];
        bVar18 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_0076fd50;
        pbVar16 = pbVar16 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076fd55: ;
      if (iVar10 != 0) {
        F_0042e430(pvVar17,(*puVar11 & 0xffffff) + (int)puVar11);
      }
    }
  }
  else if (param_1[7] == 0) {
    if ((*(ushort *)((int)pvVar17 + 0xa8) == 0) &&
       (*(char *)((int)pvVar17 + 0xac) == *(char *)((int)param_1 + 0x4a))) {
      pbVar16 = (byte *)F_0042a990((int)pvVar17 + 0x54);
      pbVar12 = (byte *)param_1[5];
      do {
        bVar2 = *pbVar12;
        bVar18 = bVar2 < *pbVar16;
        if (bVar2 != *pbVar16) {
LAB_0076ffc6: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076ffcb;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar18 = bVar2 < pbVar16[1];
        if (bVar2 != pbVar16[1]) goto LAB_0076ffc6;
        pbVar12 = pbVar12 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076ffcb: ;
      if ((iVar10 == 0) && (*(char *)((int)param_1 + 0x4b) == *(char *)((int)pvVar17 + 0xad)))
      goto LAB_0076fd71;
    }
    F_0042e430((undefined *)((int)pvVar17 + 0x54),param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*(char *)((int)param_1 + 0x4a));
    piVar6 = *(int * PTR32 *)((int)this + 4);
    uVar13 = F_0042a990((int)this + 0xcf8);
    uVar20 = 0x40d;
    pvVar15 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6)));
    uVar13 = F_00461190(pvVar15,uVar20,uVar13);
    F_0042e430(pvVar17,uVar13);
    *(short *)((int)pvVar17 + 0xa8) = (short)param_1[7];
    *(undefined1 *)((int)pvVar17 + 0xac) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined1 *)((int)pvVar17 + 0xad) = *(undefined1 *)((int)param_1 + 0x4b);
  }
  else {
    if ((((uint)*(ushort *)((int)pvVar17 + 0xa8) == param_1[7]) &&
        ((int)*(short *)((int)pvVar17 + 0xaa) == param_1[0x11])) &&
       (*(char *)((int)pvVar17 + 0xac) == *(char *)((int)param_1 + 0x4a))) {
      pbVar16 = (byte *)F_0042a990((int)pvVar17 + 0x54);
      pbVar12 = (byte *)param_1[5];
      do {
        bVar2 = *pbVar12;
        bVar18 = bVar2 < *pbVar16;
        if (bVar2 != *pbVar16) {
LAB_0076feb0: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076feb5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar18 = bVar2 < pbVar16[1];
        if (bVar2 != pbVar16[1]) goto LAB_0076feb0;
        pbVar12 = pbVar12 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076feb5: ;
      if ((iVar10 == 0) && (*(char *)((int)param_1 + 0x4b) == *(char *)((int)pvVar17 + 0xad)))
      goto LAB_0076fd71;
    }
    F_0042e430((undefined *)((int)pvVar17 + 0x54),param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*(char *)((int)param_1 + 0x4a));
    iVar10 = param_1[7];
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    uVar13 = F_00435340(iVar10);
    F_0042e430((undefined *)((int)this + 0xd4c),uVar13);
    iVar10 = param_1[0x11];
    piVar6 = *(int * PTR32 *)((int)this + 4);
    uVar13 = F_0042a990((int)this + 0xcf8);
    uVar14 = F_0042a990((int)this + 0xd4c);
    uVar20 = 0x40f;
    pvVar15 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6)));
    uVar13 = F_00461820(pvVar15,uVar20,uVar14,uVar13,iVar10);
    F_0042e430(pvVar17,uVar13);
    *(short *)((int)pvVar17 + 0xa8) = (short)param_1[7];
    *(short *)((int)pvVar17 + 0xaa) = (short)param_1[0x11];
    *(undefined1 *)((int)pvVar17 + 0xac) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined1 *)((int)pvVar17 + 0xad) = *(undefined1 *)((int)param_1 + 0x4b);
  }
LAB_0076fd71: ;
  uVar22 = 0;
  uVar21 = 1;
  uVar20 = 0;
  uVar13 = F_0042a990(pvVar17);
  F_00431250(this_00,iVar4 + 0x30,uVar13,uVar20,uVar21,uVar22);
LAB_0076fd94: ;
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) != param_1[4]) {
    pvVar17 = (undefined *)((int)this + 0xcf8);
    F_0042aca0(pvVar17);
    uVar13 = F_004352e0((iVar5 + -9) / 0x13 + 1);
    F_0042e430(pvVar17,uVar13);
    uVar22 = 0;
    uVar21 = 1;
    uVar20 = 0;
    uVar13 = F_0042a990(pvVar17);
    F_00431250(this_00,iVar4,uVar13,uVar20,uVar21,uVar22);
    if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) != param_1[4]) {
      *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) = param_1[4];
      *(undefined1 *)(iVar3 + 0x1d) = 1;
    }
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + iVar5 * 4))) != param_1[8]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + iVar5 * 4))) = param_1[8];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  dVar8 = REFG(double, 0x1088108);
  iVar10 = param_1[9];
  fVar19 = (float10)*(double *)&REFG(undefined, 0x1088118);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[8] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[8] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - REFG(double, 0x1088108));
    }
    else {
      iVar10 = (int)(dVar7 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + iVar5 * 4))) != param_1[10]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + iVar5 * 4))) = param_1[10];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  iVar10 = param_1[0xb];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[10] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[10] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - dVar8);
    }
    else {
      iVar10 = (int)(dVar7 + dVar8);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + iVar5 * 4))) != param_1[0xc]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + iVar5 * 4))) = param_1[0xc];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  iVar10 = param_1[0xd];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[0xc] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[0xc] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - dVar8);
    }
    else {
      iVar10 = (int)(dVar7 + dVar8);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  uVar13 = param_1[7] << 0x10 | local_24;
  puVar11 = ((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4 + iVar5 * 4)));
  if (*puVar11 != uVar13) {
    *puVar11 = uVar13;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8 + iVar5 * 4))) != param_1[0x10]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8 + iVar5 * 4))) = param_1[0x10];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + iVar5 * 4))) != param_1[6]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + iVar5 * 4))) = param_1[6];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x60 + iVar4 * 4)));
  if (*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x60 + iVar4 * 4))) != &REFG(undefined, 0x10bdc27)) {
    *puVar1 = &REFG(undefined, 0x10bdc27);
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  F_00c47745(uVar9 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)puVar1;
}

/* ref: FUN_00770210 */
uint F_00770210(unsigned int gen_a0)
{
  GEN_ENTER(0x770210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = F_00ab2b40(param_1);
    if (uVar1 != 0) {
      return (*(uint *)(uVar1 + 4) & 0xffffff) + (int)(uVar1 + 4);
    }
  }
  return 0x10bdc4d;
}

/* ref: FUN_00770240 */
byte F_00770240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  if ((param_4 == 0) || (*(char *)(param_4 + 0x68) != '\x03')) {
    return 0;
  }
  puVar2 = (uint *)F_00ab2c30((uint)*(byte *)(param_4 + 0x69));
  if ((puVar2 != (uint *)0x0) && (uVar1 = puVar2[3], uVar1 != 0)) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54 + param_3 * 0x4c))) != uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54 + param_3 * 0x4c))) = uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00431250(param_2,param_3 * 5 + 0x48,&REFG(undefined, 0x10bdc4e),0,1,0);
    F_00431250(param_2,param_3 * 5 + 0x70,(*puVar2 & 0xffffff) + (int)puVar2,0,1,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_007702e0 */
uint F_007702e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7702e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint * puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (((param_3 == 0) || (uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3), uVar2 == 0)) ||
     (pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3))), *pcVar3 == '\0')) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c)));
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c))) != 0) {
      *puVar1 = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    return (uint)puVar1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    uVar2 = F_00ac1a20((uint)*(byte *)(uVar2 + 1),*(undefined4 *)(uVar2 + 4));
  }
  puVar4 = (uint *)F_00ab1ed0(uVar2);
  if (puVar4 != (uint *)0x0) {
    iVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    if (iVar5 != *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc0 + param_4 * 4)))) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc0 + param_4 * 4))) = iVar5;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    fVar6 = *(float *)(uVar2 + 0x38);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    fVar7 = 0.0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    fVar7 = *(float *)(uVar2 + 0x34);
  }
  uVar2 = F_00906ed0(fVar7,fVar6);
  puVar4 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c)));
  if (*puVar4 == uVar2) {
    return uVar2;
  }
  *puVar4 = uVar2;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return uVar2;
}

/* ref: FUN_00770440 */
uint F_00770440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(char *)(param_2 + 0x415 + in_ecx);
}

/* ref: FUN_007704b0 */
uint F_007704b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7704b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int * PTR32 *)(param_1 + 0x20);
  iVar2 = *piVar3;
  if (0 < iVar2) {
    iVar4 = 0x6c;
    piVar3 = (int *)((int)this + 0x434);
    iVar5 = iVar2;
    do {
      *piVar3 = *((int *)GEN_TOP((iVar4 + *(int *)(param_1 + 0x20))));
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 0x4c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x744))) == 0) {
    *(int *)((int)this + 0x458) = iVar2;
    return (uint)piVar3;
  }
  uVar1 = iVar2 + 1;
  *(uint *)((int)this + 0x458) = uVar1;
  *(undefined4 *)((int)this + uVar1 * 4 + 0x430) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x790)))
  ;
  return uVar1;
}

/* ref: FUN_00770520 */
uint F_00770520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    return *(uint *)(in_ecx + 0x434 + param_2 * 4);
  }
  return 0xe0000000;
}

/* ref: FUN_00770730 */
byte F_00770730(unsigned int gen_a0)
{
  GEN_ENTER(0x770730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xec55: ;
  case 0xec56: ;
  case 0xec57: ;
  case 0xec58: ;
  case 0xec59: ;
  case 0xec5f: ;
  case 0xec60: ;
  case 0xec61: ;
  case 0xec62: ;
  case 0xec63: ;
  case 0xecb9: ;
  case 0xecba: ;
  case 0xecc3: ;
  case 0xecc4: ;
  case 0xeccd: ;
  case 0xecce: ;
  case 0xecd7: ;
  case 0xecd8: ;
  case 0xece1: ;
  case 0xece2: ;
  case 0xeceb: ;
  case 0xecec: ;
    return 0;
  default: ;
    return 1;
  }
}

/* ref: FUN_00770800 */
uint F_00770800(unsigned int gen_a0)
{
  GEN_ENTER(0x770800u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *in_ecx = 0;
  F_0042aca0(in_ecx + 4);
  uVar1 = F_0042aca0(in_ecx + 0x58);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return uVar1;
}

/* ref: FUN_00770830 */
unsigned int F_00770830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  undefined1 * this_01;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_01 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 100) != 0) {
    iVar5 = *(int *)((int)this + 0x68);
    *(int *)((int)this + 0x6c) = param_3;
    if ((iVar5 != param_3) || ((char)param_1 != *(char *)((int)this + 99))) {
      *(char *)((int)this + 99) = (char)param_1;
      if (((char)param_2 == '\0') &&
         (iVar2 = (int)((double)(param_3 - iVar5) * *(double *)&REFG(undefined, 0x10920a8)), iVar2 != 0)) {
        *(int *)((int)this + 0x68) = iVar5 + iVar2;
      }
      else {
        *(int *)((int)this + 0x68) = param_3;
      }
      uVar7 = *(undefined4 *)((int)this + 0x68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      uVar6 = 0x12;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_00461bb0(this_00,uVar6,uVar7);
      F_0042e430((undefined *)((int)this + 0x70),uVar3);
      uVar3 = F_0042a990((int)this + 0x70);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
      (*(uint *)(gen_frame + 0x10)) = uVar3;
      bVar1 = *(byte *)((int)this + 99);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(uint *)(gen_frame + 0x18)) = (uint)bVar1;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 100),2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar5 = 1;
      do {
        this_01 = this_01 + -8;
        F_005a2670(this_01);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return 0;
}

/* ref: FUN_00770920 */
unsigned int F_00770920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x1af4) = param_2;
  if (*(char *)(in_ecx + 0x1afc) != '\x03') {
    *(undefined1 *)(in_ecx + 0x1afc) = 1;
  }
  return 0;
}

/* ref: FUN_00770940 */
uint F_00770940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1af4) = param_2;
  *(undefined1 *)(in_ecx + 0x1afc) = 2;
  return param_2;
}

/* ref: FUN_00770960 */
uint F_00770960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1af4) = param_2;
  *(undefined1 *)(in_ecx + 0x1afc) = 3;
  return param_2;
}

/* ref: FUN_00770980 */
byte F_00770980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770980u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(byte *)(in_ecx + 0x1afd) = (byte)param_4;
  return (byte)param_4;
}

/* ref: FUN_00770990 */
unsigned int F_00770990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x28);
  uVar3 = REFG(undefined2, 0x14b29b6);
  bVar2 = REFG(undefined1, 0x14b29b4);
  if ((uVar5 != 0) && (REFG(int, 0x137104c) != 0)) {
    fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1268);
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != (uint)*(byte *)((int)this + 0x1afc)) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = (uint)*(byte *)((int)this + 0x1afc);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10))) != *(int *)((int)this + 0x1af4)) {
      *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10))) = *(int *)((int)this + 0x1af4);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (**(uint * PTR32 *)(uVar5 + 0x20) != (uint)bVar2) {
      **(uint * PTR32 *)(uVar5 + 0x20) = (uint)bVar2;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != (uint)uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = (uint)uVar3;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) != (uint)*(byte *)((int)this + 0x1afd)) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = (uint)*(byte *)((int)this + 0x1afd);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) != (int)fVar1) {
      *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) = (int)fVar1;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    *(undefined2 *)((int)this + 0x1afc) = 0;
  }
  return 0;
}

/* ref: FUN_00770a70 */
unsigned int F_00770a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 4)) && (param_1[1] != 0)) {
    if (*(int *)((int)this + 0x18e0) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x18e0),0);
      *(undefined4 *)((int)this + 0x18e0) = 0;
    }
    *(undefined4 *)((int)this + 0x18d8) = 0;
  }
  return 0;
}

/* ref: FUN_00770ad0 */
uint F_00770ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  uVar2 = F_00533210(&REFG(undefined4, 0x1375bc0));
  if ((*param_1 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
  }
  if (iVar5 == 0) {
    REFG(undefined4, 0x1378bbc) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,10);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  else if (iVar5 == 1) {
    if ((param_1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (uVar4 < REFG(undefined4, 0x1378bb4)) {
      puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar4 * 8);
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
      F_0053f5a0(&REFG(undefined4, 0x1375bc0),uVar2,extraout_EDX_00);
      uVar2 = F_00547d00(&REFG(undefined4, 0x1375bc0));
      return uVar2;
    }
  }
  else if (iVar5 == 2) {
    if ((param_1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (uVar4 < REFG(undefined4, 0x1378bb4)) {
      puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar4 * 8);
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
      uVar2 = F_0053f5a0(&REFG(undefined4, 0x1375bc0),uVar2,extraout_EDX);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00770bc0 */
unsigned int F_00770bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x770bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xe8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x15);
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14))) != 1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14))) = 1;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 0xe8),0,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  return 0;
}

/* ref: FUN_00770c20 */
byte F_00770c20(unsigned int gen_a0)
{
  GEN_ENTER(0x770c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte in_AL = 0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xe8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xe8),0);
    in_AL = (byte)uVar2;
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  return in_AL;
}

/* ref: FUN_00770c60 */
uint F_00770c60(unsigned int gen_a0)
{
  GEN_ENTER(0x770c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: FUN_00770c70 */
uint F_00770c70(unsigned int gen_a0)
{
  GEN_ENTER(0x770c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: FUN_00770c80 */
unsigned int F_00770c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x770c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 < 0x12) && (param_2 < 0x10)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,5);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      uVar5 = F_0043aed0(uVar5,param_1,param_2);
      uVar5 = F_0042a990(uVar5 + 0x110);
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + ((param_1 * 0x10 + param_2) * 3 + 2) * 4)));
      if (uVar5 != *puVar1) {
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc)));
      *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00770d30 */
unsigned int F_00770d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 0x10) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,5);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      uVar5 = F_0042a990(uVar5 + param_1 * 0x164 + 0x191d8);
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + (param_1 * 3 + 0x362) * 4)));
      if (uVar5 != *puVar1) {
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc)));
      *puVar1 = *puVar1 | 0x40000;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00770dd0 */
unsigned int F_00770dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xdcc) != param_1) {
    *(int *)((int)this + 0xdcc) = param_1;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,6);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x2d2c))) = *(undefined4 *)((int)this + 0xdcc);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00770e20 */
uint F_00770e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_1 + 8);
}

/* ref: FUN_00770e40 */
uint F_00770e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x770e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (REFG(int, 0x1379694) != 0) {
    (*(uint *)(gen_frame + 0x10)) = *(uint *)(REFG(int, 0x1379694) + 0x74);
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x14)) = (undefined2 *)(param_3 + 6);
  (*(gen_size32 *)(gen_frame + 0x1c)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x24));
  do {
    uVar2 = F_00b7ab60(param_3,iVar5);
    if (uVar2 != 0) {
      uVar3 = F_00ab1ff0(uVar2);
      if (uVar3 != 0) {
        puVar4[-1] = uVar2;
        fVar6 = F_00b7aaf0(param_3,iVar5);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(longlong)TRUNC(fVar6 + (float10)REFG(double, 0x1088108));
        *puVar4 = (*(undefined4 *)(gen_frame + 0x0));
        uVar1 = *(*(undefined2 * PTR32 *)(gen_frame + 0x14));
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(uVar3 + 0x11);
        *(undefined2 *)((int)puVar4 + 6) = uVar1;
        uVar2 = F_00b7ab80(param_3,iVar5);
        (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x1c)) + 1;
        *(bool *)((int)puVar4 + 5) = uVar2 == (*(uint *)(gen_frame + 0x10));
        puVar4 = puVar4 + 3;
      }
    }
    (*(undefined2 * PTR32 *)(gen_frame + 0x14)) = (*(undefined2 * PTR32 *)(gen_frame + 0x14)) + 6;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  uVar2 = (*(gen_size32 *)(gen_frame + 0x1c));
  if (0 < (int)(*(gen_size32 *)(gen_frame + 0x1c))) {
    F_00c4f040(((undefined1 *)(gen_frame + 0x20)),(*(gen_size32 *)(gen_frame + 0x1c)),0xc,((code *)REFP(0x770e20)));
    if ((int)param_2 < (int)(*(gen_size32 *)(gen_frame + 0x1c))) {
      uVar2 = param_2;
    }
    F_00c46aa0(param_1,((undefined1 *)(gen_frame + 0x20)),uVar2 * 0xc);
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar2;
}

/* ref: FUN_00770fb0 */
unsigned int F_00770fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
  *(int *)((int)this + param_1 * 8 + 0x460) = param_1;
  if (((char)param_3 != '\0') && (0 < REFG(int, 0x14aa744))) {
    piVar2 = &REFG(undefined4, 0x14a9e84);
    while (*piVar2 != param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x12;
      if (REFG(int, 0x14aa744) <= iVar1) {
        return 0;
      }
    }
    iVar1 = (&REFG(undefined4, 0x14a9e88))[iVar1 * 0x12];
    *(int *)((int)this + param_1 * 8 + 0x45c) = iVar1;
    if (*(int *)((int)this + 0x4a4) < iVar1) {
      *(int *)((int)this + 0x4a4) = iVar1;
    }
  }
  return 0;
}

/* ref: FUN_00771030 */
uint F_00771030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((-1 < param_2) && (param_2 < *(int *)(in_ecx + 0x1a68))) {
    return *(uint *)(in_ecx + 0x18ec + param_2 * 0xc);
  }
  return 0;
}

/* ref: FUN_00771060 */
uint F_00771060(unsigned int gen_a0)
{
  GEN_ENTER(0x771060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *(int *)((int)this + 0x18dc);
  if (iVar1 < 0x10) {
    pcVar3 = (char *)(iVar1 * 0xb0 + 0xdd8 + (int)this);
    iVar2 = iVar1;
    do {
      if (*pcVar3 == '\0') goto LAB_007710b4;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)((int)this + 0xdd8);
    do {
      if (*pcVar3 == '\0') {
LAB_007710b4: ;
        return iVar2 * 0xb0 + 0xdd8 + (int)this;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_007710d0 */
uint F_007710d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7710d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *(int *)((int)this + 0x18dc);
  if (iVar1 < 0x10) {
    pcVar3 = (char *)(iVar1 * 0xb0 + 0xdd8 + (int)this);
    iVar2 = iVar1;
    do {
      if (*pcVar3 != '\0') goto LAB_00771124;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)((int)this + 0xdd8);
    do {
      if (*pcVar3 != '\0') {
LAB_00771124: ;
        return iVar2 * 0xb0 + 0xdd8 + (int)this;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00771140 */
uint F_00771140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  __time64_t _Var3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,8)));
    if (this_00 != (undefined *)0x0) {
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) != param_2) {
        *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) = param_2;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0xb68;
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_0043bd00(this_01,uVar5,uVar6,uVar7);
      if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 300)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 300))) = uVar2;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      F_00431250(this_00,0x4c,param_1,0,1,0);
    }
  }
  *(int *)((int)this + 0x1b00) = param_2 * 1000;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x1b08) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)((int)this + 0x1b10) = uVar4;
  uVar4 = F_00427e30();
  *(ulonglong *)((int)this + 0x1b18) = uVar4;
  return (uint)uVar4;
}

/* ref: FUN_00771220 */
unsigned int F_00771220(unsigned int gen_a0)
{
  GEN_ENTER(0x771220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) = 0;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_00771380 */
unsigned int F_00771380(unsigned int gen_a0)
{
  GEN_ENTER(0x771380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) = 0;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_007713c0 */
unsigned int F_007713c0(void)
{
  GEN_ENTER(0x7713c0u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69960(&REFG(int, 0x14b119c));
    return 0;
  }
  return 0;
}

/* ref: FUN_007713e0 */
uint F_007713e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7713e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar1[1] == param_1) {
      return (uint)*ppuVar1;
    }
    ppuVar1 = ppuVar1 + 3;
  } while ((int)ppuVar1 < 0x10c00c8);
  return 0;
}

/* ref: Client::UI2::Agent::AgentHUDLayout::vf3 */
uint F_00771410(unsigned int gen_a0)
{
  GEN_ENTER(0x771410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  *(undefined1 *)(uVar2 + 0x23534) = 0;
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar1,0);
  }
  return uVar2;
}

/* ref: FUN_00771480 */
uint F_00771480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar1;
}

/* ref: FUN_00771500 */
uint F_00771500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_1;
  pcVar1 = *(gen_code32 *)(*(int *)this + 8);
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  uVar2 = (*pcVar1)(this);
  return uVar2;
}

/* ref: FUN_00771530 */
uint F_00771530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((((char)uVar1 != '\0') && (uVar1 = *(uint *)((int)this + 0x10), uVar1 != 0xe0000000)) &&
      (uVar1 == param_1)) && (*(int *)((int)this + 0x1b4) == 1)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    iVar4 = *piVar3;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,(int)this + 0x1c);
    ((code *)*(gen_code32 *)(iVar4 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x4)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    iVar4 = (int)this + 0x1c;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043be20(this_00,iVar4);
    *(undefined4 *)((int)this + 0x10) = 0xe0000000;
    *(undefined4 *)((int)this + 0x1b4) = 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00771600 */
uint F_00771600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((((char)uVar1 != '\0') && (*(int *)((int)this + 0x14) != -0x20000000)) &&
      (uVar1 = param_1, *(int *)((int)this + 0x14) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1b8) == 1)) {
    *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(param_1 + 0x14);
    *(undefined2 *)((int)this + 0x158) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)((int)this + 0x15a) = *(undefined1 *)(param_1 + 0x28);
    F_0042e430((undefined *)((int)this + 0x15c),param_1 + 0x2b);
    uVar1 = *(uint *)((int)this + 0x14);
    *(uint *)((int)this + 0x18) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 0xe0000000;
    *(undefined4 *)((int)this + 0x1b8) = 2;
  }
  return uVar1;
}

/* ref: FUN_00771690 */
unsigned int F_00771690(unsigned int gen_a0)
{
  GEN_ENTER(0x771690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1b0) = 3;
  return 0;
}

/* ref: FUN_007716a0 */
uint F_007716a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7716a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x3c0];
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint * puVar5;
  undefined * pvVar6;
  int * piVar7;
  undefined * puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint * puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0x3b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3bc);
  puVar4 = ((undefined4 *)(gen_frame + 0x1b0));
  iVar9 = 0x40;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_005a2710(((undefined4 *)(gen_frame + 0x1b0)),4);
  ((undefined4 *)(gen_frame + 0x1b0))[1] = 1;
  puVar5 = (uint *)F_00ab2020((uint)REFG(undefined2, 0x14ab40a));
  if (puVar5 == (uint *)0x0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),4);
    (*(uint *)(gen_frame + 0x1c4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdd6f);
  }
  else {
    uVar10 = puVar5[2];
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),4);
    (*(uint *)(gen_frame + 0x1c4)) = (uint)((char)uVar10 == '\0');
    if (REFG(char, 0x14ab40f) == '\0') {
      uVar10 = *puVar5;
      F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)puVar5)));
    }
    else {
      uVar10 = puVar5[1];
      F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)(puVar5 + 1))));
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1c8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1cc)) = &REFG(undefined, 0x14ab3b4);
  F_005a2710(((undefined1 *)(gen_frame + 0x2c8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = &REFG(undefined, 0x14ab3f4);
  if ((REFG(undefined1, 0x14ab408) == 0) || (REFG(undefined1, 0x14ab407) <= REFG(undefined1, 0x14ab408))) {
    bVar2 = 0;
    bVar3 = REFG(undefined1, 0x14ab407);
  }
  else {
    bVar2 = 1;
    bVar3 = REFG(undefined1, 0x14ab408);
  }
  uVar11 = (uint)bVar2;
  uVar10 = (uint)bVar3;
  iVar9 = 0;
  uVar14 = 0;
  uVar15 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4),900)));
  uVar10 = F_00461d60(pvVar6,uVar10,uVar14,uVar11,uVar15);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)),uVar10,in_edi);
  uVar10 = (uint)REFG(undefined1, 0x14ab407);
  F_005a2710(((undefined1 *)(gen_frame + 0x1d0)),4);
  (*(uint *)(gen_frame + 0x1d4)) = uVar10;
  uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0xc)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1d8)),6);
  (*(uint *)(gen_frame + 0x1dc)) = uVar10;
  F_0042b630(((undefined1 *)(gen_frame + 0x15c)));
  uVar10 = F_00ab21a0((uint)REFG(undefined1, 0x14ab406));
  if (uVar10 == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1e0)),4);
    (*(int *)(gen_frame + 0x1e4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = &REFG(undefined, 0x10bdd9a);
    F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = &REFG(undefined, 0x10bdd9b);
  }
  else {
    if (REFG(undefined1, 0x14ab406) != 0) {
      iVar9 = REFG(undefined1, 0x14ab406) + 62000;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x1e0)),4);
    uVar11 = (uint)REFG(undefined1, 0x14ab406);
    (*(int *)(gen_frame + 0x1e4)) = iVar9;
    uVar15 = 0x7e7;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4))));
    uVar11 = F_00461bb0(pvVar6,uVar15,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0x15c)),uVar11);
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x14))))(*(int * PTR32 *)(in_ecx + 4))));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7)));
    if (*piVar7 == 0) {
      uVar11 = *(uint *)(uVar10 + 0xc);
      F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = ((undefined *)GEN_TOP(((uVar11 & 0xffffff) + (int)(uVar10 + 0xc))));
      puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x15c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = puVar8;
    }
    else {
      puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x15c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = puVar8;
      F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = &REFG(undefined, 0x10bdd99);
    }
  }
  iVar9 = 0;
  puVar13 = (uint *)(in_ecx + 0xfc);
  puVar5 = ((uint *)(gen_frame + 0x344));
  do {
    uVar10 = puVar13[-0xe];
    F_005a2710(puVar5 + -0x53,4);
    cVar1 = *(char *)(in_ecx + 0x134 + iVar9);
    puVar5[-0x52] = uVar10;
    F_005a2710(puVar5 + -1,4);
    uVar10 = *puVar13;
    *puVar5 = (uint)(cVar1 != '\0');
    F_005a2710(puVar5 + -0x1d,4);
    puVar5[-0x1c] = uVar10;
    iVar9 = iVar9 + 1;
    puVar13 = puVar13 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar9 < 0xe);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0x60)));
  F_0042b630(((undefined1 *)(gen_frame + 0x108)));
  if (REFG(undefined1, 0x14ab40c) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x270)),4);
    (*(uint *)(gen_frame + 0x274)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x278)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x27c)) = &REFG(undefined, 0x10bddc5);
    F_005a2710(((undefined1 *)(gen_frame + 0x280)),4);
    (*(uint *)(gen_frame + 0x284)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x288)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x28c)) = &REFG(undefined, 0x10bddc6);
    F_005a2710(((undefined1 *)(gen_frame + 0x290)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x294)) = &REFG(undefined, 0x10bddc7);
  }
  else {
    uVar10 = (uint)REFG(undefined1, 0x14ab40c);
    uVar15 = 0x38c;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4))));
    uVar10 = F_00461bb0(pvVar6,uVar15,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0xb4)),uVar10);
    uVar10 = (uint)REFG(undefined1, 0x14ab405);
    uVar12 = (uint)REFG(undefined1, 0x14ab40d);
    uVar11 = (uint)REFG(undefined1, 0x14ab40c);
    uVar15 = 0x38a;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4))));
    uVar10 = F_00461d60(pvVar6,uVar15,uVar11,uVar12,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0x60)),uVar10);
    uVar11 = (uint)REFG(undefined1, 0x14ab405);
    uVar10 = (uint)REFG(undefined1, 0x14ab40d);
    uVar12 = (uint)REFG(undefined1, 0x14ab40c);
    uVar15 = 0x38b;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x18))))(*(int * PTR32 *)(in_ecx + 4))));
    uVar10 = F_00461d60(pvVar6,uVar15,uVar12,uVar10,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0x108)),uVar10);
    uVar10 = F_00434d60((uint)REFG(undefined1, 0x14ab40c));
    F_005a2710(((undefined1 *)(gen_frame + 0x270)),4);
    (*(uint *)(gen_frame + 0x274)) = uVar10;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x278)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x27c)) = puVar8;
    uVar10 = F_00434d10((uint)REFG(undefined1, 0x14ab40c),(uint)REFG(undefined1, 0x14ab40d),1);
    F_005a2710(((undefined1 *)(gen_frame + 0x280)),4);
    (*(uint *)(gen_frame + 0x284)) = uVar10;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x60)));
    F_005a2710(((undefined1 *)(gen_frame + 0x288)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x28c)) = puVar8;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x108)));
    F_005a2710(((undefined1 *)(gen_frame + 0x290)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x294)) = puVar8;
  }
  piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x1c))))(*(int * PTR32 *)(in_ecx + 4))));
  ((code *)*(gen_code32 *)(*piVar7 + 0x5c))(piVar7,*(undefined4 *)(in_ecx + 8),0x41,((undefined4 *)(gen_frame + 0x1b0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  puVar5 = &(*(uint *)(gen_frame + 0x3b8));
  iVar9 = 0x40;
  do {
    puVar5 = puVar5 + -2;
    uVar10 = F_005a2670(puVar5);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0x3b8)) ^ (uint)(uint)(gen_frame + 0x3bc));
  return uVar10;
}

/* ref: FUN_00771ca0 */
uint F_00771ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x771ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x40;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 2;
  uVar2 = F_0042a990((int)this + 0x1c);
  F_005a2710(((undefined1 *)(gen_frame + 0xb8)),6);
  (*(uint *)(gen_frame + 0xbc)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar2;
}

/* ref: FUN_00771d50 */
uint F_00771d50(unsigned int gen_a0)
{
  GEN_ENTER(0x771d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  undefined8 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * puVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  uint * this_00;
  ulonglong uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  F_0042b630(((undefined1 *)(gen_frame + 0x5c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x8)));
  puVar2 = ((undefined4 *)(gen_frame + 0xb0));
  iVar6 = 0x40;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0xb0)),4);
  ((undefined4 *)(gen_frame + 0xb0))[1] = 3;
  if (*(int *)((int)this + 0x148) == 0 && *(int *)((int)this + 0x14c) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x198)),4);
    (*(uint *)(gen_frame + 0x19c)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1a4)) = &REFG(undefined, 0x10bdde2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),4);
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdde3);
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1c4)) = &REFG(undefined, 0x10bde03);
  }
  else {
    uVar7 = (uint)*(byte *)((int)this + 0x15a);
    uVar9 = 0x38c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x5c)),uVar7);
    uVar7 = (uint)*(ushort *)((int)this + 0x158);
    uVar9 = 0x38d;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x8)),uVar7);
    uVar7 = F_00434d60((uint)*(byte *)((int)this + 0x15a));
    F_005a2710(((undefined1 *)(gen_frame + 0x198)),4);
    (*(uint *)(gen_frame + 0x19c)) = uVar7;
    puVar4 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)),6);
    uVar1 = *(undefined8 *)((int)this + 0x150);
    (*(undefined * PTR32 *)(gen_frame + 0x1a4)) = puVar4;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = (int)((ulonglong)uVar1 >> 0x20);
    uVar9 = *(undefined4 *)((int)this + 0x150);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),4);
    (*(undefined4 *)(gen_frame + 0x1b4)) = uVar9;
    puVar4 = (undefined *)F_0042a990((int)this + 0x15c);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = puVar4;
    puVar4 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1c4)) = puVar4;
  }
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0xb0)));
  this_00 = &(*(uint *)(gen_frame + 0x2b8));
  iVar6 = 0x40;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return (uint)uVar8;
}

/* ref: FUN_00771fc0 */
uint F_00771fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x771fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x40;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar3;
}

/* ref: FUN_00772070 */
uint F_00772070(unsigned int gen_a0)
{
  GEN_ENTER(0x772070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920),0x2a);
  piVar1 = *(int * PTR32 *)((int)this + 0x1cc);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1cc) = 0;
  }
  *(undefined4 *)((int)this + 0x1bc) = 0;
  return uVar2;
}

/* ref: FUN_007720b0 */
byte F_007720b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7720b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x14) != 0) {
    return 1;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)((int)this + 8));
    return uVar2 == 4;
  }
  return 0;
}

/* ref: FUN_007720f0 */
uint F_007720f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7720f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  pvVar2 = (undefined *)F_00a37da0(pvVar2,param_2);
  if ((pvVar2 != (undefined *)0x0) &&
     ((*(char *)((int)pvVar2 + 6) != '\0' || (*(int *)((int)pvVar2 + 8) != 0)))) {
    if (*(char *)((int)pvVar2 + 6) == '\0') {
      uVar3 = *(uint *)((int)pvVar2 + 8);
      if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
        uVar3 = uVar3 + 1000000;
      }
    }
    else {
      pvVar2 = (undefined *)F_00a3a860(pvVar2);
      uVar3 = F_0046e5e0(pvVar2);
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = F_00533b60(&REFG(undefined4, 0x1375bc0));
    bVar1 = F_00ac83b0(&REFG(undefined, 0x14bcf40),3,uVar3,(int)uVar4,(int)(uVar4 >> 0x20),uVar5,uVar6);
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00772170 */
uint F_00772170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * this;
  undefined * pvVar7;
  undefined * pvVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int iVar12;
  bool bVar13;
  
  uVar4 = param_4 - 1;
  bVar2 = false;
  uVar5 = uVar4;
  if (8 < uVar4) {
switchD_0077218d_caseD_4: ;
    if ((char)param_5 == '\0') {
      return uVar5;
    }
    bVar2 = true;
    goto switchD_0077218d_caseD_1;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x77232c) + param_4 + 3)));
  switch((unsigned int)(uintptr_t)(param_4)) {
  default: ;
switchD_0077218d_caseD_1: ;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 0x1c))))(*(int * PTR32 *)(in_ecx + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,7);
    iVar10 = 0;
    param_5 = 0;
    do {
      this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_5);
      pvVar8 = this;
      if (this != (undefined *)0x0) {
        iVar1 = *(int *)((int)this + 0xc);
        iVar12 = 0;
        if (0 < iVar1) {
          param_4 = iVar10 * 4 + 0xc;
          iVar10 = iVar1 * 5 + iVar10;
          do {
            pvVar7 = (undefined *)F_00a37da0(this,iVar12);
            bVar13 = false;
            if ((bVar2) || (pvVar7 == (undefined *)0x0)) goto switchD_0077226c_caseD_3;
            if (*(char *)((int)pvVar7 + 6) == '\0') {
              if (*(int *)((int)pvVar7 + 8) == 0) goto switchD_0077226c_caseD_3;
              uVar9 = *(uint *)((int)pvVar7 + 8);
              if ((*(byte *)((int)pvVar7 + 0x14) & 1) != 0) {
                uVar9 = uVar9 + 1000000;
              }
            }
            else {
              pvVar8 = (undefined *)F_00a3a860(pvVar7);
              uVar9 = F_0046e5e0(pvVar8);
            }
            uVar9 = F_00ab24a0(uVar9);
            pvVar8 = (undefined *)0x0;
            if (uVar9 == 0) goto LAB_007722fe;
            switch((unsigned int)(uintptr_t)(uVar4)) {
            case 0: ;
              bVar3 = F_00a3c930(pvVar7,0);
              bVar13 = bVar3 == 0;
              break;
            case 1: ;
            case 2: ;
            case 7: ;
              bVar3 = F_00a3c8c0(pvVar7,0);
              bVar13 = bVar3 == 0;
              break;
            case 6: ;
              uVar9 = F_00a3e8f0(&REFG(undefined, 0x14a4230),param_5,iVar12);
              goto LAB_007722bb;
            case 8: ;
              uVar9 = F_00a3eaa0(&REFG(undefined, 0x14a4230),param_5,iVar12);
LAB_007722bb: ;
              bVar13 = uVar9 != 0;
            }
switchD_0077226c_caseD_3: ;
            puVar11 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + param_4)));
            pvVar8 = (undefined *)*puVar11;
            pvVar7 = ((undefined *)GEN_TOP(((((uint)bVar13 << 8 | (int)((int)(uintptr_t)pvVar8) >> 0x10 & 0xffU) << 8 |
                              (int)((int)(uintptr_t)pvVar8) >> 8 & 0xffU) << 8 | (uint)pvVar8 & 0xff)));
            if (pvVar8 != pvVar7) {
              *puVar11 = (uint)pvVar7;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
LAB_007722fe: ;
            param_4 = param_4 + 0x14;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar1);
        }
      }
      param_5 = param_5 + 1;
      if (3 < param_5) {
        return (uint)pvVar8;
      }
    } while( true );
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
    goto switchD_0077218d_caseD_4;
  }
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf1 */
uint F_00772360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((param_2 != (byte *)0x0) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (*(int *)(param_2 + 4) == -1)) {
    this[0x44] = (undefined1)0x0;
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007723a0 */
uint F_007723a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7723a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x2c);
  if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
    return 0;
  }
  if ((*(char *)((int)param_1 + 6) == '\0') || (uVar3 = F_00a3a860(param_1), uVar3 == 0)) {
    uVar2 = *(ushort *)((int)param_1 + 0x10);
  }
  else {
    pvVar4 = (undefined *)F_00a3a860(param_1);
    uVar2 = F_0071d210(pvVar4);
  }
  if (uVar2 / 100 == 0) {
    if ((*(char *)((int)param_1 + 6) == '\0') || (uVar3 = F_00a3a860(param_1), uVar3 == 0)) {
      uVar2 = *(ushort *)((int)param_1 + 0x10);
    }
    else {
      pvVar4 = (undefined *)F_00a3a860(param_1);
      uVar2 = F_0071d210(pvVar4);
    }
    return (uint)(uVar2 != 0);
  }
  return uVar2 / 100;
}

/* ref: FUN_00772450 */
byte F_00772450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x772450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x40) = 1;
  if ((param_4 == 0x7d4) || (*(int *)((int)this + 0x2c) == 10)) {
    uVar1 = F_00ab2510(param_5);
    *param_2 = uVar1;
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x40) = (uint)*(byte *)(uVar1 + 0x20);
      return 1;
    }
  }
  else {
    uVar1 = F_00ab24a0(param_5);
    *param_1 = uVar1;
    if (uVar1 != 0) {
      uVar1 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
      *param_3 = uVar1;
      if (uVar1 != 0) {
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(*param_1 + 0x28);
        if (param_5 < 0x17) {
          return 1;
        }
        if (0x1a < param_5) {
          return 1;
        }
        *(undefined4 *)((int)this + 0x40) = 2000;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007724f0 */
byte F_007724f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7724f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
      uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
    }
    else {
      uVar3 = uVar5;
      pvVar4 = (undefined *)F_00a3a860(param_3);
      uVar2 = F_0071d2c0(pvVar4,uVar3);
    }
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + uVar5 * 4) = 0;
      *(undefined1 *)(uVar5 + param_2) = 0;
    }
    else {
      if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_3)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = (undefined *)F_00a3a860(param_3);
        bVar1 = F_0071d300(pvVar4,uVar3);
      }
      if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = (undefined *)F_00a3a860(param_3);
        uVar2 = F_0071d2c0(pvVar4,uVar3);
      }
      uVar3 = F_00ab20e0((uint)uVar2);
      *(uint *)(param_1 + uVar5 * 4) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = F_00ab24a0(*(undefined4 *)(uVar3 + (uint)bVar1 * 4));
      if (uVar3 == 0) {
        return 0;
      }
      *(byte *)(uVar5 + param_2) = bVar1;
    }
    uVar5 = uVar5 + 1;
    if (4 < (int)uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_007725f0 */
uint F_007725f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7725f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if (param_2 == 0) {
    if (*(char *)(param_3 + 0xa0) == '\r') {
      return 2;
    }
    if (*(char *)(param_3 + 0xa6) != '\0') {
      return 1;
    }
  }
  else if ((param_4 == 0x7d4) || (*(int *)(in_ecx + 0x2c) == 10)) {
    return 3;
  }
  return 0;
}

/* ref: FUN_00772640 */
unsigned int F_00772640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x772640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (param_1 != 0) {
    if ((*(int *)((int)this + 0x2c) == 2) && (param_3 == 0x7d9)) {
      uVar1 = (ushort)REFG(undefined1, 0x14ab408);
    }
    else {
      if (param_3 == 9999) {
        return 0;
      }
      if (*param_2 < 1000) {
        return 0;
      }
      uVar1 = REFG(undefined2, 0x14ab148);
      if (1000 < *param_2) {
        return 0;
      }
    }
    if ((uVar1 != 0) && (uVar1 < *(byte *)(param_1 + 0x9f))) {
      *(undefined1 *)((int)this + 0x45) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007726a0 */
unsigned int F_007726a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7726a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int * piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x44) * 4))) = (int)*(short *)(param_2 + 0x92);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x48) * 4))) = (int)*(short *)(param_2 + 0x94);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x4c) * 4))) = (int)*(short *)(param_2 + 0x96);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x50) * 4))) = (int)*(short *)(param_2 + 0x98);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x54) * 4))) = (int)*(short *)(param_2 + 0x9a);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x58) * 4))) = (int)*(short *)(param_2 + 0x9c);
  if ((param_5 - 0xf4241U < 999999) && (*(char *)(param_2 + 0xa7) == '\x01')) {
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x5c) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb1);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x60) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb2);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 100) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb3);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x68) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb4);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x6c) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb5);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x70) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb6);
  }
  iVar2 = *(int *)((int)this + 0x2c);
  if ((((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) && (*(char *)(param_2 + 0xa3) == '\a')) {
    uVar7 = 0;
    do {
      if (*(int *)(param_4 + uVar7 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar5 = F_00a3a860(param_3), uVar5 == 0)) {
          uVar4 = *((ushort *)GEN_TOP(((int)param_3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar5 = uVar7;
          pvVar6 = (undefined *)F_00a3a860(param_3);
          uVar4 = F_0071d2c0(pvVar6,uVar5);
        }
        if (uVar4 != 0) {
          if ((*(char *)((int)param_3 + 6) == '\0') || (uVar5 = F_00a3a860(param_3), uVar5 == 0))
          {
            bVar3 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar5 = uVar7;
            pvVar6 = (undefined *)F_00a3a860(param_3);
            bVar3 = F_0071d300(pvVar6,uVar5);
          }
          iVar2 = *(int *)(param_4 + uVar7 * 4);
          piVar1 = ((int *)GEN_TOP((param_1 + (uint)*(byte *)(iVar2 + 0x28) * 4)));
          *piVar1 = *piVar1 + (int)*(char *)(bVar3 + 0x29 + iVar2);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
  }
  return 0;
}

/* ref: FUN_00772840 */
byte F_00772840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x772840u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),REFG(undefined4, 0x14a4258));
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,param_3);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1);
        uVar2 = F_0046e5e0(pvVar1);
      }
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 != 0) {
        if (*(char *)(uVar2 + 0xa0) == '\x02') {
          *param_1 = (char)param_2;
          return 1;
        }
        *param_1 = (char)param_2 == '\0';
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007728d0 */
uint F_007728d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7728d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if ((char)param_1 != '\0') {
    uVar1 = 0x800;
  }
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | 0x1000;
  }
  if ((char)param_3 != '\0') {
    uVar1 = uVar1 | 0x2000;
  }
  return uVar1;
}

/* ref: FUN_00772900 */
unsigned int F_00772900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x24);
  if (((char)param_3 != '\0') || (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 4))) != param_2)) {
    *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 4))) = param_2;
    *(bool *)(iVar1 + 0x1d) = (char)param_4 == '\0';
  }
  return 0;
}

/* ref: FUN_00772930 */
uint F_00772930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x24) + 0x20))) + param_1 * 4)));
}

/* ref: FUN_00772950 */
uint F_00772950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x772950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00772960 */
uint F_00772960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x20))) + param_1 * 4)));
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf1 */
uint F_00772980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((param_2 != (byte *)0x0) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (*(int *)(param_2 + 4) == -1)) {
    this[0x24] = (undefined1)0x0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007729c0 */
byte F_007729c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7729c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(bool *)((int)this + 0x24) = -1 < param_3;
  return -1 < param_3;
}

/* ref: FUN_007729e0 */
unsigned int F_007729e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7729e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (((char)param_3 != '\0') || (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 4))) != param_2)) {
    *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 4))) = param_2;
    *(bool *)(iVar1 + 0x1d) = (char)param_4 == '\0';
  }
  return 0;
}

/* ref: FUN_00772a10 */
uint F_00772a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x20))) + param_1 * 4)));
}

/* ref: FUN_00772a30 */
uint F_00772a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x772a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00772a40 */
uint F_00772a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20))) + param_1 * 4)));
}

/* ref: Client::UI2::Agent::AgentLoot::vf1 */
uint F_00772a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  code * pcVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  if ((0 < param_3) && (((byte)*param_2 & 0xf) == 3)) {
    if (param_2[1] != 0) {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
      *(undefined4 *)(this + 8) = 0;
      (*pcVar1)(this);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    uVar3 = 0;
    if (((1 < param_3) && (((byte)param_2[2] & 0xf) == 4)) &&
       (iVar2 = param_2[3], *(int *)(this + 0xc) != iVar2)) {
      *(int *)(this + 0xc) = iVar2;
      F_00ae1e00(&REFG(undefined * PTR32, 0x1338d48),iVar2);
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentLoot::vf3 */
unsigned int F_00772ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x772ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return 0;
}

/* ref: FUN_00772b20 */
byte F_00772b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00ae1d00(&REFG(undefined * PTR32, 0x1338d48),param_1);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00ae1b10(&REFG(undefined * PTR32, 0x1338d48));
  if (uVar2 == 1) {
    return 1;
  }
  return *(int *)((int)this + 8) != 0;
}

/* ref: FUN_00772b60 */
uint F_00772b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  
  uVar2 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48));
  if (param_1 < uVar2) {
    uVar2 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48),param_1);
    if (uVar2 != 0) {
      this_00 = (undefined4 *)((int)this + 0x28);
      F_00a35f30(this_00);
      F_00a35ee0(this_00,*(undefined4 *)(uVar2 + 8),0);
      *(undefined2 *)((int)this + 0x2c) = (undefined2)param_1;
      *this_00 = 9999;
      F_00a35f80(this_00,1);
      puVar4 = (ushort *)(uVar2 + 0xc);
      uVar2 = 0;
      do {
        uVar1 = *puVar4;
        uVar3 = uVar2 & 0xff;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
        *(ushort *)((int)this + uVar3 * 2 + 0x48) = uVar1 >> 4;
        *(byte *)(uVar3 + 0x2a + (int)this_00) = (byte)uVar1 & 0xf;
      } while ((int)uVar2 < 5);
      return (uint)this_00;
    }
  }
  return 0;
}

/* ref: FUN_00772c00 */
uint F_00772c00(unsigned int gen_a0)
{
  GEN_ENTER(0x772c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  double dVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0xc);
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar5 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48));
    uVar8 = 0;
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x104 + uVar8 * 4))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x104 + uVar8 * 4))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar6 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48),uVar8);
        uVar7 = 0;
        if (uVar6 != 0) {
          cVar1 = *(char *)(uVar6 + 0x17);
          if (cVar1 == '\0') {
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) = 0;
              goto LAB_00772cd9;
            }
          }
          else if ((cVar1 == '\x04') || (cVar1 == '\x03')) {
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) != -1) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) = 0xffffffff;
              goto LAB_00772cd9;
            }
          }
          else if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) !=
                   (uint)*(byte *)(uVar6 + 0x18)) {
            *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + uVar8 * 4))) = (uint)*(byte *)(uVar6 + 0x18);
LAB_00772cd9: ;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
          dVar2 = (double)*(float *)(uVar6 + 0x1c);
          if (*(float *)(uVar6 + 0x1c) < 0.0) {
            dVar2 = dVar2 - REFG(double, 0x1088108);
          }
          else {
            dVar2 = dVar2 + REFG(double, 0x1088108);
          }
          uVar7 = (uint)dVar2;
          if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x104 + uVar8 * 4))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x104 + uVar8 * 4))) = uVar7;
            *(undefined1 *)(uVar4 + 0x1d) = 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return uVar7;
}

/* ref: FUN_00772d30 */
byte F_00772d30(void)
{
  GEN_ENTER(0x772d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 1;
  uVar1 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48));
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48),uVar4);
      if ((uVar2 != 0) && (uVar2 = F_00ab24a0(*(undefined4 *)(uVar2 + 8)), uVar2 == 0)) {
        bVar3 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return bVar3;
}

/* ref: Client::UI2::Agent::AgentMacro::vf5 */
unsigned int F_00772d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x550) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,"TextCommandParam");
    *(uint *)(this + 0x550) = uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMacro::vf3 */
uint F_00772db0(unsigned int gen_a0)
{
  GEN_ENTER(0x772db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x9f4) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x9f4),0);
    *(undefined4 *)(this + 0x9f4) = 0;
  }
  if (*(int *)(this + 0x9f0) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x9f0),0);
    *(undefined4 *)(this + 0x9f0) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x2c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,0);
  return uVar2;
}

/* ref: FUN_00772e50 */
uint F_00772e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x772e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
  }
  uVar1 = (uVar2 & 0xffff) / 100;
  uVar2 = (uVar2 & 0xffff) % 100;
  *(uint *)((int)this + 0x554) = uVar1;
  *(uint *)((int)this + 0x558) = uVar2;
  uVar2 = F_0043b860(param_1,uVar1,uVar2);
  return uVar2;
}

/* ref: FUN_00772ea0 */
uint F_00772ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x772ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  undefined * this_01;
  int * in_esi;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  this_00 = (undefined *)((int)this + 0x55c);
  F_0042aca0(this_00);
  this_01 = (undefined *)((int)this + 0x5b0);
  F_0042aca0(this_01);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  F_00559470(uVar1);
  iVar3 = param_1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_0043ba80(iVar3);
  iVar3 = 0;
  if (0 < (int)uVar1) {
    param_1 = param_1 + 0x58;
    while( true ) {
      F_0042e360(this_00,param_1);
      param_1 = param_1 + 0x54;
      iVar3 = iVar3 + 1;
      if ((int)uVar1 <= iVar3) break;
      F_0042e370(this_00,&REFG(undefined, 0x10c018c));
    }
  }
  in_esi = *(int * PTR32 *)((int)this + 4);
  uVar1 = F_0042a990(this_00);
  uVar2 = ((code *)*(gen_code32 *)(*in_esi + 0x18))(in_esi);
  uVar1 = F_004470e0(uVar2,iVar3,in_esi,this_00,uVar1);
  F_0042e430(this_01,uVar1);
  uVar1 = F_0042a990(this_00);
  F_005a2710((undefined *)(param_2 + 0x18),6);
  *(uint *)(param_2 + 0x1c) = uVar1;
  uVar1 = F_0042a990(this_01);
  uVar2 = F_005a2710((undefined *)(param_2 + 0x20),6);
  *(uint *)(param_2 + 0x24) = uVar1;
  return uVar2;
}

/* ref: FUN_00772fb0 */
uint F_00772fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x550) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x550) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x550),param_1)));
    if (piVar1 != (int *)0x0) {
      uVar3 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      uVar2 = F_00cb0950(this_00,uVar3);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00772ff0 */
uint F_00772ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = F_00ab25a0(param_1);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if ('\0' < *(char *)(uVar1 + 4 + iVar3)) {
        if (iVar3 < 0) {
          return 0;
        }
        if (*(int *)((int)this + 0x550) == 0) {
          return 0;
        }
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x550) + 0x24))))
                                  (*(int * PTR32 *)((int)this + 0x550),
                                   *(undefined4 *)(&REFG(undefined, 0x10c0144) + iVar3 * 4))));
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        uVar4 = 0;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
        uVar1 = F_00cb0950(this_00,uVar4);
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xe);
  }
  return 0;
}

/* ref: FUN_00773060 */
byte F_00773060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x773060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(char *)(param_2 + 0xa94) != '\0') && (uVar2 = *(uint *)(param_2 + 0xa88), 1 < uVar2)) &&
     ((uVar2 < 4 || (uVar2 == 5)))) {
    *(undefined1 *)((int)this + 0xa1c) = 0;
    pvVar1 = (undefined *)F_0043b860(param_1,*(undefined4 *)(param_2 + 0xa8c),
                                  *(undefined4 *)(param_2 + 0xa90));
    F_00471680(pvVar1,(uint)((char)param_3 == '\0') * 0x544 + param_2);
    uVar2 = *(uint *)(param_2 + 0xa8c);
    *(uint *)((int)this + 0x554) = uVar2;
    *(undefined4 *)((int)this + 0x558) = *(undefined4 *)(param_2 + 0xa90);
    uVar3 = (uint)*(byte *)((int)this + 0x558);
    uVar2 = uVar2 & 0xff;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
    F_00459330(pvVar1,uVar2,uVar3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00773110 */
uint F_00773110(unsigned int gen_a0)
{
  GEN_ENTER(0x773110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0xbe38) < 2) {
    return in_ecx + 0xa20;
  }
  iVar1 = *(int *)(in_ecx + 0xbe38) + -1;
  *(int *)(in_ecx + 0xbe38) = iVar1;
  return iVar1 * 0xa98 + 0xa20 + in_ecx;
}

/* ref: FUN_00773140 */
uint F_00773140(unsigned int gen_a0)
{
  GEN_ENTER(0x773140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xbe38);
  if (0x10 < uVar1) {
    return (int)this + 0xa20;
  }
  *(uint *)((int)this + 0xbe38) = uVar1 + 1;
  return uVar1 * 0xa98 + 0xa20 + (int)this;
}

/* ref: FUN_007731f0 */
byte F_007731f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7731f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  uVar1 = F_00ab1e70(param_1);
  uVar2 = F_00ab1e70(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,uVar1,uVar2);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameWorld::vf1 */
byte F_00773250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x773250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameRegion::vf1 */
byte F_00773260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x773260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) && (*(int *)(param_1 + 0xc) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameArea::vf1 */
byte F_00773290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x773290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameFloor::vf1 */
byte F_007732c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7732c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
     (((*(int *)(param_1 + 0xc) != 0 && (*(int *)(param_1 + 0x10) != 0)) &&
      (*(int *)(param_1 + 0x14) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameAreaOrFloor::vf1 */
byte F_00773300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x773300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
       (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) && (*(int *)(param_1 + 0xc) != 0)) &&
     ((*(int *)(param_1 + 0x10) != 0 &&
      (((*(int *)(param_1 + 0x14) == 0 && (*(int *)(param_2 + 0x14) == 0)) ||
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00773350 */
uint F_00773350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x773350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (0 < (int)param_1) {
    uVar1 = F_00ab1e70(param_1);
    if (uVar1 != 0) {
      return (int)((((float10)*(float *)(uVar1 + 4) * (float10)param_2 +
                    (float10)*(double *)&REFG(undefined, 0x10ac2d0)) * (float10)*(double *)&REFG(undefined, 0x10c4488)) /
                  (float10)*(float *)(uVar1 + 4)) + 1;
    }
  }
  return 1;
}

/* ref: FUN_007733a0 */
float10 F_007733a0(float gen_a0)
{
  GEN_ENTER(0x7733a0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(float)((float10)param_1 - (float10)REFG(double, 0x1088130));
  fVar3 = (float10)0;
  if (fVar2 < fVar3) {
    fVar2 = fVar2 - (float10)REFG(double, 0x1088108);
  }
  else {
    fVar2 = fVar2 + (float10)REFG(double, 0x1088108);
  }
  uVar1 = (uint)fVar2;
  if ((uVar1 < 7) &&
     (fVar3 = (float10)(int)(&REFG(undefined4, 0x13281b8))[uVar1 * 3], (int)(&REFG(undefined4, 0x13281b8))[uVar1 * 3] < 0)) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return fVar3;
}

/* ref: FUN_00773400 */
uint F_00773400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x773400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x338c)) {
    uVar1 = F_00ab1e70(*(int *)(param_1 + 0x338c));
    if (uVar1 != 0) {
      return (int)((((float10)*(float *)(uVar1 + 4) * (float10)param_2 +
                    (float10)*(double *)&REFG(undefined, 0x10ac2d0)) * (float10)*(double *)&REFG(undefined, 0x10c4488)) /
                  (float10)*(float *)(uVar1 + 4)) + 1;
    }
  }
  return 1;
}

/* ref: FUN_007735b0 */
byte F_007735b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7735b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  if (((param_1 == 3) && (*(int *)((int)this + 0x33a8) != 0)) &&
     (*(int *)((int)this + 0x33a8) == param_2)) {
    return 1;
  }
  if (*(int *)((int)this + 0x3384) != param_1) {
    return 0;
  }
  return *(int *)((int)this + 0x339c) == param_2;
}

/* ref: FUN_00773600 */
uint F_00773600(unsigned int gen_a0)
{
  GEN_ENTER(0x773600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x31);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = F_0042a990((int)this + 0x1ec);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x240);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x294);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x10)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x10))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x2e8);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_00773690 */
byte F_00773690(unsigned int gen_a0)
{
  GEN_ENTER(0x773690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xec55: ;
  case 0xec56: ;
  case 0xec57: ;
  case 0xec58: ;
  case 0xec59: ;
  case 0xec5f: ;
  case 0xec60: ;
  case 0xec61: ;
  case 0xec62: ;
  case 0xec63: ;
  case 0xecb9: ;
  case 0xecba: ;
  case 0xecbb: ;
  case 0xecbd: ;
  case 0xecc3: ;
  case 0xecc4: ;
  case 0xecc5: ;
  case 0xecc7: ;
  case 0xeccd: ;
  case 0xecce: ;
  case 0xeccf: ;
  case 0xecd1: ;
  case 0xecd7: ;
  case 0xecd8: ;
  case 0xecd9: ;
  case 0xecdb: ;
  case 0xece1: ;
  case 0xece2: ;
  case 0xece3: ;
  case 0xece5: ;
  case 0xeceb: ;
  case 0xecec: ;
  case 0xeced: ;
  case 0xecef: ;
  case 0xed09: ;
  case 0xed0a: ;
  case 0xed0b: ;
  case 0xed0d: ;
  case 0xed13: ;
  case 0xed14: ;
  case 0xed15: ;
  case 0xed17: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_007737a0 */
uint F_007737a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7737a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * puVar6;
  uint uVar7;
  uint * puVar8;
  undefined * puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x58))[4] = uVar2;
  uVar11 = 0;
  if ((*(int *)((int)this + 0x338c) != 0) && (*(int *)((int)this + 0x339c) != 0)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x31);
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x2a3;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    puVar6 = (undefined *)F_0043bd00(pvVar5,uVar12,uVar13,uVar14);
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x2a4;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar5,uVar12,uVar13,uVar14);
    iVar1 = *(int *)((int)this + 0x339c);
    ((uint *)(gen_frame + 0x58))[0] = 0;
    ((uint *)(gen_frame + 0x58))[1] = 0;
    ((uint *)(gen_frame + 0x58))[2] = 0;
    ((uint *)(gen_frame + 0x58))[3] = 0;
    if (iVar1 == *(int *)((int)this + 0x338c)) {
      uVar7 = F_00a4a910();
      ((uint *)(gen_frame + 0x58))[0] = uVar7;
      uVar7 = F_00a4a930();
      ((uint *)(gen_frame + 0x58))[1] = uVar7;
      ((uint *)(gen_frame + 0x58))[2] = REFG(undefined4, 0x14a73a8);
      ((uint *)(gen_frame + 0x58))[3] = REFG(undefined4, 0x14a73ac);
    }
    else if ((iVar1 != 0) && (uVar7 = F_00ab1e70(iVar1), uVar7 != 0)) {
      ((uint *)(gen_frame + 0x58))[0] = *(uint *)(uVar7 + 0xc);
      ((uint *)(gen_frame + 0x58))[1] = *(uint *)(uVar7 + 0x10);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)((int)this + 0x1ec);
    do {
      uVar7 = ((uint *)(gen_frame + 0x58))[(int)(uVar11)];
      puVar8 = (uint *)F_00ab2750(uVar7);
      uVar10 = uVar2;
      if ((puVar8 != (uint *)0x0) && (0 < (int)uVar7)) {
        uVar10 = (*puVar8 & 0xffffff) + (int)puVar8;
      }
      puVar9 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar9 = &REFG(undefined, 0x10c01b4);
      }
      uVar7 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c01b8),puVar9,uVar10);
      F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x0)),uVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar11 = uVar11 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x54);
    } while (uVar11 < 4);
    uVar2 = F_0042a990((int)this + 0x1ec);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8)))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = uVar2;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x240);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc)))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = uVar2;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x294);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10)))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = uVar2;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x2e8);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14)))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) = uVar2;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x58))[4] ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00773970 */
uint F_00773970(unsigned int gen_a0)
{
  GEN_ENTER(0x773970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042b790((undefined *)((int)this + 0x198));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00773990 */
uint F_00773990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x773990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  int * piVar1;
  
  *(undefined2 *)((int)this + 0x33d5) = 0;
  *(undefined1 *)((int)this + 0x33d7) = 0;
  *(undefined4 *)((int)this + 0x33a8) = 0;
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007739d0 */
unsigned int F_007739d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7739d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x33d5);
  if (bVar1 < 10) {
    this_00 = (undefined *)((uint)bVar1 * 0x74 + 0x2824 + (int)this);
    *(byte *)((int)this + 0x33d5) = bVar1 + 1;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar2 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar2;
    *(undefined4 *)((int)this_00 + 0x6c) = param_2;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = param_1;
    F_0042ccf0(this_00,param_7);
    *(undefined2 *)((int)this_00 + 0x5a) = (undefined2)param_4;
    *(undefined4 *)((int)this_00 + 0x54) = 9;
    *(undefined2 *)((int)this_00 + 0x58) = (undefined2)param_3;
    *(undefined4 *)((int)this_00 + 0x5c) = param_5;
    *(undefined4 *)((int)this_00 + 0x60) = param_6;
    uVar2 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar2;
    switch((unsigned int)(uintptr_t)(param_5)) {
    case 0xec55: ;
    case 0xec56: ;
    case 0xec57: ;
    case 0xec58: ;
    case 0xec59: ;
    case 0xec5f: ;
    case 0xec60: ;
    case 0xec61: ;
    case 0xec62: ;
    case 0xec63: ;
    case 0xecb9: ;
    case 0xecba: ;
    case 0xecbb: ;
    case 0xecbd: ;
    case 0xecc3: ;
    case 0xecc4: ;
    case 0xecc5: ;
    case 0xecc7: ;
    case 0xeccd: ;
    case 0xecce: ;
    case 0xeccf: ;
    case 0xecd1: ;
    case 0xecd7: ;
    case 0xecd8: ;
    case 0xecd9: ;
    case 0xecdb: ;
    case 0xece1: ;
    case 0xece2: ;
    case 0xece3: ;
    case 0xece5: ;
    case 0xeceb: ;
    case 0xecec: ;
    case 0xeced: ;
    case 0xecef: ;
    case 0xed09: ;
    case 0xed0a: ;
    case 0xed0b: ;
    case 0xed0d: ;
    case 0xed13: ;
    case 0xed14: ;
    case 0xed15: ;
    case 0xed17: ;
      *(uint *)((int)this_00 + 0x54) = *(uint *)((int)this_00 + 0x54) | 0x20000;
    }
  }
  return 0;
}

/* ref: FUN_00773b60 */
byte F_00773b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x773b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  if (((param_1 < *(byte *)((int)this + 0x33d5)) &&
      (*(int *)((int)this + param_1 * 0x74 + 0x2894) == param_2)) &&
     (*(int *)((int)this + param_1 * 0x74 + 0x2890) == param_3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00773ba0 */
unsigned int F_00773ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x773ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  double dVar1;
  double dVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x33d7) == '\0') {
    *(undefined1 *)(param_1 + 0x33d7) = 1;
    F_0042e430((undefined *)(param_1 + 0x2cac),&REFG(undefined1, 0x107fc63));
    *(undefined4 *)(param_1 + 0x2d00) = 0;
    *(undefined4 *)(param_1 + 0x2d04) = 0;
    *(undefined4 *)(param_1 + 0x2d08) = 0;
    *(undefined4 *)(param_1 + 0x2d0c) = 0;
    *(undefined4 *)(param_1 + 0x2d10) = 0;
    uVar3 = F_0042a990((undefined *)(param_1 + 0x2cac));
    dVar2 = REFG(double, 0x1088108);
    *(uint *)(param_1 + 0x2d10) = uVar3;
    *(undefined1 *)(param_1 + 0x2d14) = 0;
    if (param_4 < 0.0) {
      dVar1 = (double)param_4 - dVar2;
    }
    else {
      dVar1 = (double)param_4 + dVar2;
    }
    *(short *)(param_1 + 0x2d04) = (short)(int)dVar1;
    if (param_5 < 0.0) {
      dVar2 = (double)param_5 - dVar2;
    }
    else {
      dVar2 = dVar2 + (double)param_5;
    }
    *(short *)(param_1 + 0x2d06) = (short)(int)dVar2;
    *(undefined4 *)(param_1 + 0x2d08) = param_6;
    *(float *)(param_1 + 0x2d20) = param_4;
    *(undefined4 *)(param_1 + 0x2d0c) = param_7;
    *(undefined4 *)(param_1 + 0x2d18) = param_2;
    *(undefined4 *)(param_1 + 0x2d1c) = param_3;
    *(float *)(param_1 + 0x2d24) = param_5;
  }
  return 0;
}

/* ref: FUN_00773c60 */
byte F_00773c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x773c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  
  if (param_1 < (int)(uint)*(byte *)((int)this + 0x33d7)) {
    iVar1 = param_1 * 0x7c;
    *param_2 = *(undefined4 *)((int)this + iVar1 + 0x2d18);
    *param_3 = *(undefined4 *)((int)this + iVar1 + 0x2d1c);
    *param_4 = *(undefined4 *)((int)this + iVar1 + 0x2d20);
    *param_5 = *(undefined4 *)((int)this + iVar1 + 0x2d24);
    return 1;
  }
  return 0;
}

/* ref: FUN_00773cb0 */
unsigned int F_00773cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x773cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x33d8);
  if (bVar1 < 0xc) {
    this_00 = (undefined *)((uint)bVar1 * 0x6c + 0x2d28 + (int)this);
    *(byte *)((int)this + 0x33d8) = bVar1 + 1;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar2 = F_0042a990(this_00);
    *(undefined2 *)((int)this_00 + 0x58) = (undefined2)param_1;
    *(uint *)((int)this_00 + 100) = uVar2;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x54) = 3;
    *(undefined2 *)((int)this_00 + 0x5a) = (undefined2)param_2;
    *(undefined4 *)((int)this_00 + 0x5c) = param_3;
    *(int *)((int)this_00 + 0x60) = 0xb4 - param_4;
    *(byte *)((int)this + 0x33d9) = *(byte *)((int)this + 0x33d9) | 2;
  }
  return 0;
}

/* ref: FUN_00773d70 */
uint F_00773d70(unsigned int gen_a0)
{
  GEN_ENTER(0x773d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  puVar3 = (uint *)((int)this + 0x329c);
  iVar2 = 3;
  do {
    F_0042e430(puVar3 + -0x19,&REFG(undefined1, 0x107fc63));
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    uVar1 = F_0042a990(puVar3 + -0x19);
    *puVar3 = uVar1;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3 = puVar3 + 0x1b;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00773dc0 */
unsigned int F_00773dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x773dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 < 3) {
    this_00 = (undefined *)(param_1 * 0x6c + 0x3238 + (int)this);
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar1 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar1;
    *(undefined2 *)((int)this_00 + 0x58) = (undefined2)param_2;
    *(undefined4 *)((int)this_00 + 0x60) = param_5;
    *(undefined4 *)((int)this_00 + 0x54) = 0x60;
    *(undefined2 *)((int)this_00 + 0x5a) = (undefined2)param_3;
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    *(undefined1 *)((int)this_00 + 0x68) = 1;
    *(byte *)((int)this + 0x33d9) = *(byte *)((int)this + 0x33d9) | 1;
  }
  return 0;
}

/* ref: FUN_00773e40 */
uint F_00773e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x773e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < 3) {
    this_00 = (undefined *)(param_1 * 0x6c + 0x3238 + (int)this);
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar1 = F_0042a990(this_00);
    *(uint *)((int)this_00 + 100) = uVar1;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(byte *)((int)this + 0x33d9) = *(byte *)((int)this + 0x33d9) | 1;
  }
  return uVar1;
}

/* ref: FUN_00773ea0 */
byte F_00773ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x773ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * pfVar1;
  uint uVar2;
  short * psVar3;
  uint uVar4;
  
  uVar4 = 0;
  psVar3 = (short *)((int)this + 0x3290);
  do {
    if ((char)psVar3[8] != '\0') {
      pfVar1 = (float *)F_00a5feb0((undefined *)*param_1);
      if ((int)*psVar3 == (int)*pfVar1) {
        uVar2 = F_00a5feb0((undefined *)*param_1);
        if (((int)psVar3[1] == (int)*(float *)(uVar2 + 8)) && (*(int *)(psVar3 + 2) == param_1[0xf])
           ) {
          return 1;
        }
      }
    }
    uVar4 = uVar4 + 1;
    psVar3 = psVar3 + 0x36;
    if (2 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00773f00 */
byte F_00773f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x773f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 1;
  }
  *(undefined1 *)((int)this + 0x4070) = 1;
  uVar3 = 100;
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0x3400);
  do {
    if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
      piVar2[-4] = *param_4;
      piVar2[-3] = param_4[1];
      iVar1 = param_4[2];
      *(undefined1 *)(piVar2 + 3) = 1;
      piVar2[-2] = iVar1;
      return piVar2[2] == param_1;
    }
    if ((uVar3 == 100) && (*piVar2 == 0 && piVar2[1] == 0)) {
      uVar3 = uVar4;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 8;
  } while (uVar4 < 100);
  if (uVar3 != 100) {
    piVar2 = (int *)(uVar3 * 0x20 + 0x33f0 + (int)this);
    piVar2[5] = param_3;
    piVar2[4] = param_2;
    piVar2[6] = 0;
    *(undefined1 *)(piVar2 + 7) = 1;
    *piVar2 = *param_4;
    piVar2[1] = param_4[1];
    piVar2[2] = param_4[2];
  }
  return 0;
}

/* ref: FUN_00773fc0 */
uint F_00773fc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x773fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  if (0xfe < (int)uVar1) {
    *(undefined1 *)(in_ecx + 0x33dc) = 0xff;
    return 0xff;
  }
  if (0 < (int)uVar1) {
    *(char *)(in_ecx + 0x33dc) = (char)uVar1;
    return uVar1;
  }
  *(undefined1 *)(in_ecx + 0x33dc) = 0;
  return 0;
}

/* ref: FUN_00774030 */
uint F_00774030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x774030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  F_0042cc20(((undefined1 *)(gen_frame + 0x154)),param_2,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x100)),&REFG(undefined, 0x10c01c0),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8a0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0x100)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x100)));
  F_0042d2c0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0x58)),0,uVar1);
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x154)));
  F_0042d2c0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0xac)),uVar1 + 1,uVar2 + (-1 - uVar1));
  F_0042cd30(((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xac)));
  if ((byte)param_3 < 3) {
    F_0042e370(((undefined1 *)(gen_frame + 0x4)),(&REFG(undefined * PTR32, 0x1328204))[(byte)param_3]);
  }
  F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xac)));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x58)));
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x100)),"ui/map/%s/%s/%s",uVar2,uVar1);
  F_0042ccf0(param_1,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x100)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0xac)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x154)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return (uint)uVar3;
}

/* ref: FUN_00774180 */
uint F_00774180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x774180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  if ((char)param_3 == '\0') {
    uVar1 = F_0042e430(param_1,&REFG(undefined, 0x10be017));
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return uVar1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x154)),param_2,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x100)),&REFG(undefined, 0x10c01d4),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8a0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0x100)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x100)));
  F_0042d2c0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0xac)),0,uVar1);
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x154)));
  F_0042d2c0(((undefined1 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0x58)),uVar1 + 1,uVar2 + (-1 - uVar1));
  F_0042cd30(((undefined1 *)(gen_frame + 0xac)),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
  F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x58)));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xac)));
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x100)),"ui/map/%s/%s/%sm%s",uVar2,uVar1);
  F_0042ccf0(param_1,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x100)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0xac)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x154)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return (uint)uVar3;
}

/* ref: FUN_007742f0 */
uint F_007742f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7742f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = *(uint *)((int)this + 0x33b0) >> 5;
  if ((uVar1 & 1) != 0) {
    if ((((*(int *)((int)this + 0x339c) == 0) && (*(int *)((int)this + 0x3398) != 0)) &&
        (uVar1 = F_00ab1c90(*(int *)((int)this + 0x3398)), uVar1 != 0)) &&
       (*(int *)((int)this + 0x339c) == 0)) {
      *(uint *)((int)this + 0x339c) = (uint)*(ushort *)(uVar1 + 0x22);
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0x339c) != 0) {
      puVar2 = (uint *)F_00ab1e70(*(int *)((int)this + 0x339c));
      uVar1 = 0;
      if (puVar2 != (uint *)0x0) {
        F_00774030((int)this + 0xf0,(*puVar2 & 0xffffff) + (int)puVar2,
                     (uint)*(byte *)((int)this + 0x33da));
        F_00774180((int)this + 0x144,(*puVar2 & 0xffffff) + (int)puVar2,
                     (uint)(-1 < (short)puVar2[7]),(uint)*(byte *)((int)this + 0x33da));
        *(uint *)((int)this + 0x33a4) = puVar2[2];
        *(uint *)((int)this + 0x337c) = puVar2[1];
        uVar1 = (uint)(ushort)puVar2[6];
        *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) | 6;
        *(uint *)((int)this + 0x33a0) = uVar1;
        *(undefined1 *)((int)this + 0x33dd) = 0;
      }
    }
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xffffffdf;
  }
  return uVar1;
}

/* ref: FUN_007743e0 */
byte F_007743e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7743e0u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_c;
  
  fVar4 = (float10)param_3;
  uVar2 = 0;
  uVar1 = 0;
  while( true ) {
    fVar5 = (float10)*(int *)((int)&REFG(undefined4, 0x13281b8) + uVar1);
    if (*(int *)((int)&REFG(undefined4, 0x13281b8) + uVar1) < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4)) break;
    uVar1 = uVar1 + 0xc;
    uVar2 = uVar2 + 1;
    uVar3 = 6;
    if (0x53 < uVar1) {
LAB_00774416: ;
      if ((char)param_4 == '\0') {
        *param_1 = *(undefined4 *)(uVar3 * 0xc + 0x13281b0);
      }
      else {
        *param_1 = *(undefined4 *)(uVar3 * 0xc + 0x13281b4);
      }
      local_c = (undefined4)
                (longlong)
                TRUNC(((fVar4 + fVar4) * (float10)*(double *)&REFG(double, 0x10969f8)) *
                      (float10)*(double *)&REFG(undefined, 0x1088118));
      *param_2 = local_c;
      return 1;
    }
  }
  uVar3 = uVar2;
  if (6 < uVar2) {
    return 0;
  }
  goto LAB_00774416;
}

/* ref: FUN_00774480 */
unsigned int F_00774480(unsigned int gen_a0)
{
  GEN_ENTER(0x774480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0x4070) != '\0') {
    *(undefined1 *)((int)this + 0x4070) = 0;
    bVar1 = true;
    uVar4 = 0;
    pcVar3 = (char *)((int)this + 0x340c);
    do {
      if (*pcVar3 == '\0') {
        pcVar3[-0xffffffff0000000c] = '\0';
        pcVar3[-0xffffffff0000000b] = '\0';
        pcVar3[-0xffffffff0000000a] = '\0';
        pcVar3[-0xffffffff00000009] = '\0';
        pcVar3[-0xffffffff00000008] = '\0';
        pcVar3[-0xffffffff00000007] = '\0';
        pcVar3[-0xffffffff00000006] = '\0';
        pcVar3[-0xffffffff00000005] = '\0';
        pcVar3[-0xffffffff00000004] = '\0';
        pcVar3[-0xffffffff00000003] = '\0';
        pcVar3[-0xffffffff00000002] = '\0';
        pcVar3[-0xffffffff00000001] = '\0';
      }
      else {
        if ((bVar1) && (*(uint *)((int)this + 0x4074) <= uVar4)) {
          uVar2 = F_00a4ab70(pcVar3 + -0x1c);
          bVar1 = false;
          *(uint *)(pcVar3 + -4) = uVar2;
        }
        *pcVar3 = '\0';
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x20;
    } while (uVar4 < 100);
    *(int *)((int)this + 0x4074) = *(int *)((int)this + 0x4074) + 1;
    if (99 < *(uint *)((int)this + 0x4074)) {
      *(undefined4 *)((int)this + 0x4074) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00774510 */
byte F_00774510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x774510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x339c);
  if ((char)param_2 != '\0') {
    uVar2 = *(uint *)((int)this + 0x338c);
  }
  if (*(uint *)(param_1 + 0x24) != uVar2) {
    if (((*(uint *)(param_1 + 0x24) == 0) &&
        (uVar1 = F_00ab1c90((uint)*(ushort *)(param_1 + 0x20)), uVar1 != 0)) &&
       (*(ushort *)(uVar1 + 0x22) == uVar2)) {
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00774560 */
int F_00774560(unsigned int gen_a0)
{
  GEN_ENTER(0x774560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 1;
  iVar3 = 0x20;
  do {
    if ((param_1 & uVar2) != 0) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

/* ref: FUN_00774580 */
uint F_00774580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 0x33ac);
  uVar3 = 0;
  local_8 = 0;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      local_8 = 4;
      uVar3 = 1;
    }
    else if (iVar1 == 3) {
      local_8 = 6;
      uVar3 = 2;
    }
  }
  F_005a2710((undefined *)(param_1 + 0x20),4);
  *(undefined4 *)(param_1 + 0x24) = local_8;
  F_005a2710((undefined *)(param_1 + 0x28),4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar2 = F_005a2710((undefined *)(param_1 + 0x670),4);
  *(undefined4 *)(param_1 + 0x674) = uVar3;
  return uVar2;
}

/* ref: FUN_00774600 */
uint F_00774600(unsigned int gen_a0)
{
  GEN_ENTER(0x774600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab1e70(param_1);
  if (uVar1 != 0) {
    return (uint)*(ushort *)(uVar1 + 0x1a);
  }
  return 0;
}

/* ref: FUN_00774630 */
uint F_00774630(unsigned int gen_a0)
{
  GEN_ENTER(0x774630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = F_00ab1e70(param_1);
  if (uVar1 != 0) {
    uVar2 = F_00aafa90();
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = F_00ab1e70(uVar4);
        if (((uVar3 != 0) && (*(char *)(uVar3 + 0x20) == '\x02')) &&
           (*(int *)(uVar3 + 0xc) == *(int *)(uVar1 + 0xc))) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return 0;
}

/* ref: FUN_007746c0 */
uint F_007746c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7746c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x339c) = param_1;
  uVar1 = F_00ab1e70(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*(byte *)(uVar1 + 0x20);
    *(uint *)((int)this + 0x33ac) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_007746f0 */
unsigned int F_007746f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7746f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar2 = F_00a9fbf0(REFG(int, 0x1379694));
    *(char *)(in_ecx + 0x33e0) = (char)uVar2;
    bVar1 = *(byte *)(in_ecx + 0x33dc);
    if (0xfe < bVar1) {
      *(undefined1 *)(in_ecx + 0x33db) = 0xff;
      return 0;
    }
    if (bVar1 != 0) {
      *(byte *)(in_ecx + 0x33db) = bVar1;
      return 0;
    }
    *(undefined1 *)(in_ecx + 0x33db) = 0;
  }
  return 0;
}

/* ref: FUN_007747a0 */
uint F_007747a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7747a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00ab1e70(param_1);
  if ((uVar2 != 0) && (param_3 != (undefined *)0x0)) {
    uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
    piVar3 = (int *)F_00ab1ea0(uVar2);
    while ((piVar3 != (int *)0x0 && ((*piVar3 != 0 || (piVar3[1] != 0))))) {
      if (((byte)(*(char *)((int)piVar3 + 0x17) - 1U) < 2) &&
         (bVar1 = F_007731f0(param_3,(uint)*(ushort *)(piVar3 + 4),param_2), bVar1 != 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = (int *)F_00ab1ea0(uVar2);
    }
  }
  return 0;
}

/* ref: FUN_00774820 */
uint F_00774820(unsigned int gen_a0)
{
  GEN_ENTER(0x774820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x338c) != 0) {
    puVar1 = (uint *)F_00ab1e70(*(int *)((int)this + 0x338c));
    if (puVar1 != (uint *)0x0) {
      F_00774030((int)this + 0x9c,(*puVar1 & 0xffffff) + (int)puVar1,
                   (uint)*(byte *)((int)this + 0x33da));
      F_00774180((int)this + 0x198,(*puVar1 & 0xffffff) + (int)puVar1,
                   (uint)(-1 < (short)puVar1[7]),(uint)*(byte *)((int)this + 0x33da));
    }
    puVar1 = (uint *)F_00ab1e70(*(undefined4 *)((int)this + 0x339c));
    uVar2 = 0;
    if (puVar1 != (uint *)0x0) {
      F_00774030((int)this + 0xf0,(*puVar1 & 0xffffff) + (int)puVar1,
                   (uint)*(byte *)((int)this + 0x33da));
      uVar2 = F_00774180((int)this + 0x144,(*puVar1 & 0xffffff) + (int)puVar1,
                           (uint)(-1 < (short)puVar1[7]),(uint)*(byte *)((int)this + 0x33da));
    }
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) | 0x1002;
  }
  return uVar2;
}

/* ref: FUN_00774900 */
unsigned int F_00774900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 0x33bc) = param_2;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 0x33b0) = *(uint *)(in_ecx + 0x33b0) | 0x400;
  }
  return 0;
}

/* ref: FUN_00774920 */
byte F_00774920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774920u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  return (int)uVar1 < (int)uVar2;
}

/* ref: FUN_00774950 */
uint F_00774950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x774950u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  *param_1 = param_3 + -0x400;
  *param_2 = param_4 + -0x400;
  return (uint)param_2;
}

/* ref: FUN_00774970 */
uint F_00774970(unsigned int gen_a0)
{
  GEN_ENTER(0x774970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 1) {
    if (param_1 == 2) {
      return 2;
    }
    if (param_1 != 3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_007749a0 */
byte F_007749a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7749a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xecbd: ;
  case 0xecd1: ;
  case 0xece5: ;
  case 0xecf9: ;
  case 0xed0d: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00774a30 */
uint F_00774a30(unsigned int gen_a0)
{
  GEN_ENTER(0x774a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xecbd: ;
  case 0xecd1: ;
  case 0xece5: ;
  case 0xecf9: ;
  case 0xed0d: ;
    return 0xecd1;
  default: ;
    return 0xeccf;
  }
}

/* ref: FUN_00774ac0 */
unsigned int F_00774ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x774ac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (uVar2 = F_00533b60(&REFG(undefined4, 0x1375bc0)), uVar2 != 0xe0000000)) {
    uVar3 = (undefined4)(uVar2 >> 0x20);
    uVar1 = F_00a67f50((int)uVar2,uVar3);
    if (param_1 == uVar1) {
      F_00a6ce30(&REFG(undefined, 0x14b2788),param_1,0xe0000000,0);
      return 0;
    }
    F_00a6ce30(&REFG(undefined, 0x14b2788),param_1,(int)uVar2,uVar3);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf5 */
unsigned int F_00774b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf3 */
unsigned int F_00774b30(unsigned int gen_a0)
{
  GEN_ENTER(0x774b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00774b60 */
uint F_00774b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*(byte *)((int)this + 0x22));
    bVar1 = (byte)iVar4;
    if (((*(uint *)(uVar2 + 0x34) & 1 << (bVar1 & 0x1f)) == 0) ||
       (*(char *)((int)this + 0x26) < iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 | iVar3 << (bVar1 & 0x1f);
  } while (iVar4 < 5);
  uVar2 = F_005a2710((undefined *)(param_1 + 0x160),4);
  *(uint *)(param_1 + 0x164) = uVar5;
  return uVar2;
}

/* ref: FUN_00774bd0 */
uint F_00774bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*(byte *)((int)this + 0x22));
    if ((*(char *)(uVar1 + 0x30) < iVar4) || (*(char *)((int)this + 0x26) < iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 | iVar2 << (bVar3 & 0x1f);
  } while (iVar4 < 5);
  uVar1 = F_005a2710((undefined *)(param_1 + 0x158),4);
  *(uint *)(param_1 + 0x15c) = uVar5;
  return uVar1;
}

/* ref: FUN_00774c40 */
uint F_00774c40(unsigned int gen_a0)
{
  GEN_ENTER(0x774c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((REFG(undefined1, 0x14b4ec2) & 0x20) != 0) {
    iVar3 = 0;
    do {
      uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),(&REFG(undefined4, 0x10c0218))[iVar3],0);
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 | (uint)((short)uVar1 != 0) << (bVar2 & 0x1f);
    } while (iVar3 < 8);
  }
  uVar1 = F_005a2710((undefined *)(param_1 + 0xf0),4);
  *(uint *)(param_1 + 0xf4) = uVar4;
  return uVar1;
}

/* ref: FUN_00774ca0 */
uint F_00774ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x774ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *(uint *)((int)this + 0x30) >> ((byte)uVar2 & 0x1f);
    if ((uVar1 & 1) != 0) {
      uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*(byte *)((int)this + 0x22));
      if (REFG(int, 0x1379c70) != 3) {
        *(uint *)(uVar1 + 0x34) = *(uint *)(uVar1 + 0x34) & ~(1 << ((byte)uVar2 & 0x1f));
        uVar1 = F_00a51200(0x24,(uint)*(byte *)(uVar1 + 0x38),uVar2 & 0xff,0,0);
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  *(undefined4 *)((int)this + 0x30) = 0;
  return uVar1;
}

/* ref: FUN_00774d00 */
byte F_00774d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*(byte *)(in_ecx + 0x22));
  return (char)param_2 < *(char *)(uVar1 + 0x30);
}

/* ref: FUN_00774d60 */
uint F_00774d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774d60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x10c0218))[uVar1] == param_1) {
      if (-1 < (char)uVar1) {
        return uVar1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  uVar1 = uVar1 & 0xffffff00;
  if ((char)param_2 != '\0') {
    uVar1 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
  }
  return uVar1;
}

/* ref: FUN_00774da0 */
byte F_00774da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0x15) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 8))))((int)this + -0xc);
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf16 */
uint F_00774dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x774dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(this + 0x18) = param_1;
  F_0042ccf0(this + 0x1c,param_2);
  F_0042ccf0(this + 0x70,param_3);
  *(undefined4 *)(this + 0xcc) = param_4;
  uVar1 = F_00ba0880(&REFG(undefined, 0x14b0f2c),this + 0xc);
  return uVar1;
}

/* ref: FUN_00774e00 */
uint F_00774e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x774e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_00a47f70(&REFG(undefined, 0x14a4230),param_2,param_1,0x7d5,5,1);
  uVar1 = F_0043f8b0(10);
  return uVar1;
}

/* ref: FUN_00774e30 */
unsigned int F_00774e30(unsigned int gen_a0)
{
  GEN_ENTER(0x774e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf13 */
unsigned int F_00774e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    *(undefined4 *)(in_ecx + 0x40) = 0;
    *(undefined4 *)(in_ecx + 0x44) = 0;
    *(undefined1 *)(in_ecx + 0x38) = 0;
  }
  return 0;
}

/* ref: FUN_00774e80 */
uint F_00774e80(unsigned int gen_a0)
{
  GEN_ENTER(0x774e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x1a);
  if ((*(int *)((int)this + 0x10) != 0) && (uVar2 != 0)) {
    piVar1 = (int *)F_00a67900(*(int *)((int)this + 0x10));
    uVar3 = *piVar1 << 0x10 | 0x1e;
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = piVar1[1] << 0x10 | 0x10;
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar3 = piVar1[0x17] << 0x10 | 100;
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xc))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00774f00 */
uint F_00774f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this = (undefined *)F_00a79280(*(undefined * PTR32 *)((int)this + 0x10),(uint)*(ushort *)((int)this + 0x40),
                                param_1);
  }
  return (uint)this;
}

/* ref: FUN_00774f20 */
uint F_00774f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x774f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  uint * this_01;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar4 = 0x249;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_00461bb0(this_00,uVar4,param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
    (*(uint *)(gen_frame + 0x2c)) = uVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 0x24),6,((undefined4 *)(gen_frame + 0x8)));
    this_01 = &(*(uint *)(gen_frame + 0x38));
    iVar3 = 5;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00774fc0 */
byte F_00774fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x774fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  return 1;
}

/* ref: FUN_00774fd0 */
uint F_00774fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x774fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  piVar2 = (int *)((int)this + 0x40);
  if ((((undefined *)*puVar1 != (undefined *)0x0) && (0 < *piVar2)) &&
     (piVar3 = (int *)((int)this + 0x3c), this = (undefined *)0x0, *piVar3 != 0)) {
    this = (undefined *)F_00a6ca50((undefined *)*puVar1,*piVar3,*piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00774ff0 */
uint F_00774ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x774ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(int *)((int)this + 0x10) != 0) && (0 < *(int *)((int)this + 0x40))) &&
     (*(int *)((int)this + 0x3c) == 2)) {
    this = (undefined *)F_00a790e0(*(int *)((int)this + 0x40));
  }
  return (uint)this;
}

/* ref: FUN_00775010 */
uint F_00775010(unsigned int gen_a0)
{
  GEN_ENTER(0x775010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(int *)((int)this + 0x10) != 0) && (0 < *(int *)((int)this + 0x40))) &&
     (*(int *)((int)this + 0x3c) == 2)) {
    this = (undefined *)F_00a67a50(*(int *)((int)this + 0x40));
  }
  return (uint)this;
}

/* ref: FUN_00775040 */
uint F_00775040(unsigned int gen_a0)
{
  GEN_ENTER(0x775040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar4 = 5;
  if ((*(int *)((int)this + 0x10) != 0) && (*(int *)((int)this + 0x30) == 0)) {
    puVar3 = (uint *)F_00a67930(*(int *)((int)this + 0x10));
    uVar1 = puVar3[0x4d];
    uVar4 = 1;
    if ((0x26 < uVar1) && (((uVar1 < 0x28 || (0x2f < uVar1)) && (uVar1 != 0x32)))) {
      bVar2 = F_00a67ab0((uint)(ushort)*puVar3);
      if (bVar2 == 1) {
        this_00 = (undefined *)F_006b8c00();
        uVar4 = F_006d6fd0(this_00);
        if ((uVar4 != 0) && ((uint)*(ushort *)(uVar4 + 0x310) == *puVar3)) {
          return 7;
        }
        return 6;
      }
      if (bVar2 == 0xff) {
        return 9;
      }
      if (bVar2 == 3) {
        uVar4 = 8;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00775190 */
byte F_00775190(unsigned int gen_a0)
{
  GEN_ENTER(0x775190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(char *)(in_ecx + 0xf6) != '\0') && (bVar1 = *(byte *)(in_ecx + 0xf5), bVar1 != 0)) &&
      (((bVar1 & 1) == 0 || (*(int *)(in_ecx + 0x78) != 0)))) &&
     (((bVar1 & 2) == 0 || (*(int *)(in_ecx + 0xe0) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007751d0 */
uint F_007751d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7751d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((*(char *)((int)this + 0xf6) != '\0') && (0 < param_1)) {
    iVar1 = *(int *)((int)this + 0x18);
    if (iVar1 - 1000000U < 1000000) {
      iVar1 = iVar1 + -1000000;
    }
    if (iVar1 == param_1) {
      return (int)this + 0x10;
    }
  }
  return 0;
}

/* ref: FUN_00775210 */
unsigned int F_00775210(unsigned int gen_a0)
{
  GEN_ENTER(0x775210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 0xf6) != '\0') && (*(int *)((int)this + 0x18) != 0)) {
    F_00a3d750(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),(uint)*(ushort *)((int)this + 0x14)
                );
  }
  return 0;
}

/* ref: FUN_00775240 */
unsigned int F_00775240(unsigned int gen_a0)
{
  GEN_ENTER(0x775240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 0xf6) != '\0') && (*(int *)((int)this + 0x18) != 0)) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),(uint)*(ushort *)((int)this + 0x14)
                );
  }
  return 0;
}

/* ref: FUN_00775290 */
uint F_00775290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((param_1 != 0) &&
     (iVar1 = (uint)(*(int *)(param_1 + 8) - 1000000U < 1000000) * 0x68,
     *(int *)(iVar1 + 0x78 + (int)this) == *(int *)(param_1 + 8))) {
    return *(uint *)((int)this + iVar1 + 0x7c);
  }
  return 0;
}

/* ref: FUN_007752e0 */
uint F_007752e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7752e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  *(undefined1 *)((int)this + 0x23c) = 1;
  if (*(int *)((int)this + 0x228) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x228),0);
    *(undefined4 *)((int)this + 0x228) = 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x224),0);
    *(undefined4 *)((int)this + 0x224) = 0;
  }
  *(undefined1 *)((int)this + 0x23c) = 0;
  return in_EAX;
}

/* ref: FUN_00775350 */
uint F_00775350(unsigned int gen_a0)
{
  GEN_ENTER(0x775350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x1c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x19)));
  piVar2 = REFG(undefined4, 0x14ab7d0);
  if ((uVar3 != 0) && (this_00 != (undefined *)0x0)) {
    if (*(int *)((int)this + 0x22c) == 0) {
      return 2;
    }
    local_10 = (uint)*(byte *)(REFG(undefined4, 0x14ab7d0) + 1);
    if (100 < local_10) {
      local_10 = 100;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xb0))) != local_10) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0xb0))) = local_10;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    uVar4 = F_00a69100(*(undefined4 *)((int)this + 0x230));
    local_8 = 0;
    if (local_10 != 0) {
      local_c = 0;
      iVar6 = 0xc0;
      do {
        iVar7 = *piVar2 + local_c;
        uVar10 = 0;
        uVar9 = 1;
        uVar8 = 0;
        uVar5 = F_0042a990(iVar7 + 900);
        F_00431250(this_00,local_8 + 0x28,uVar5,uVar8,uVar9,uVar10);
        uVar5 = (uint)*(byte *)(iVar7 + 0x3f0) << 0x10 | (uint)*(byte *)(iVar7 + 0x3ee);
        if (*((uint *)GEN_TOP((iVar6 + 4 + *(int *)(uVar3 + 0x20)))) != uVar5) {
          *((uint *)GEN_TOP((iVar6 + 4 + *(int *)(uVar3 + 0x20)))) = uVar5;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar6 + -8 + *(int *)(uVar3 + 0x20)))) != *(int *)(iVar7 + 0x3dc)) {
          *((int *)GEN_TOP((iVar6 + -8 + *(int *)(uVar3 + 0x20)))) = *(int *)(iVar7 + 0x3dc);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        bVar1 = F_00a690c0((uint)*(ushort *)(iVar7 + 0x3e0));
        uVar5 = -(uint)(bVar1 != 0) & 2 |
                ((uint)*(byte *)(iVar7 + 0x3ee) <= (uVar4 & 0xffff) + 5) - 1 & 4;
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar6))) != uVar5) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar6))) = uVar5;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar6 + -4 + *(int *)(uVar3 + 0x20)))) != *(int *)(iVar7 + 0x3d8)) {
          *((int *)GEN_TOP((iVar6 + -4 + *(int *)(uVar3 + 0x20)))) = *(int *)(iVar7 + 0x3d8);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_c = local_c + 0x444;
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x10;
      } while (local_8 < (int)local_10);
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_00775500 */
byte F_00775500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  bool bVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)F_00a69640(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(char *)((int)this + 0x106) == '\0') {
      return 1;
    }
    return *(int *)((int)this + 0x28) == 0;
  }
  *puVar2 = 9999;
  *(undefined2 *)(puVar2 + 2) = 0;
  if ((*(char *)((int)this + 0x106) != '\0') && (0 < (int)puVar2[0x19])) {
    iVar3 = *(int *)((int)this + 0x28);
    if (iVar3 - 1000000U < 1000000) {
      iVar3 = iVar3 + -1000000;
    }
    if ((iVar3 == puVar2[0x19]) && ((undefined2 *)((int)this + 0x20) != (undefined2 *)0x0)) {
      *(undefined2 *)puVar2 = *(undefined2 *)((int)this + 0x20);
      *(undefined2 *)((int)puVar2 + 2) = *(undefined2 *)((int)this + 0x24);
      bVar1 = *(int *)((int)this + 0x28) - 1000000U < 1000000;
      *(bool *)((int)puVar2 + 9) = bVar1;
      *(bool *)(puVar2 + 2) = !bVar1;
      iVar3 = *(int *)((int)this + 0x28);
      if (iVar3 - 1000000U < 1000000) {
        iVar3 = iVar3 + -1000000;
      }
      puVar2[0x19] = iVar3;
      return 1;
    }
  }
  if ((char)param_2 != '\0') {
    uVar4 = 0x47b;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,uVar4);
  }
  return 0;
}

/* ref: FUN_00775600 */
unsigned int F_00775600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  uVar3 = 1;
  do {
    uVar1 = F_00a69100(uVar2);
    if ((short)uVar1 != 0) {
      *(uint *)((int)this + 0x22c) = *(uint *)((int)this + 0x22c) | uVar3;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar2 < 8);
  if (param_2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x7e8))) != *(int *)((int)this + 0x22c)) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x7e8))) = *(int *)((int)this + 0x22c);
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    **(undefined4 * PTR32 *)(param_2 + 0x20) = 0x20;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: FUN_00775670 */
uint F_00775670(unsigned int gen_a0)
{
  GEN_ENTER(0x775670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x230);
  if ((int)uVar1 < 8) {
    *(int *)((int)this + 0x234) = (int)*(short *)((int)this + uVar1 * 4 + 0x108);
    uVar1 = (uint)*(short *)((int)this + uVar1 * 4 + 0x10a);
    *(uint *)((int)this + 0x238) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007756a0 */
unsigned int F_007756a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7756a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x230);
  if (iVar1 < 8) {
    *(undefined2 *)((int)this + iVar1 * 4 + 0x108) = *(undefined2 *)((int)this + 0x234);
    *(undefined2 *)((int)this + iVar1 * 4 + 0x10a) = *(undefined2 *)((int)this + 0x238);
  }
  return 0;
}

/* ref: FUN_007756d0 */
uint F_007756d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7756d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined4 *)((int)this + 0x10) = param_2;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRepair::vf15 */
uint F_007756f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7756f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(this + 8));
    if (((char)uVar1 == '\x01') && (this[0xc] == (undefined1)0x1)) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
  }
  return uVar1;
}

/* ref: FUN_00775730 */
byte F_00775730(unsigned int gen_a0)
{
  GEN_ENTER(0x775730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') && (*(char *)((int)this + 0xc) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00775750 */
uint F_00775750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)param_2 == '\0') {
    bVar1 = F_00a3e6a0(param_1,param_3);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00a42cb0(param_1,param_3);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00775790 */
byte F_00775790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  if (99 < *(uint *)((int)this + 0x784)) {
    return 0;
  }
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  if (this_00 != (undefined *)0x0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this_00 + 0xc)) {
      do {
        pvVar2 = (undefined *)F_00a37da0(this_00,iVar4);
        if (pvVar2 != (undefined *)0x0) {
          if (*(char *)((int)pvVar2 + 6) == '\0') {
            uVar3 = *(uint *)((int)pvVar2 + 8);
            if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = (undefined *)F_00a3a860(pvVar2);
            uVar3 = F_0046e5e0(pvVar2);
          }
          if (uVar3 != 0) {
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x784) * 8 + 0x78c)));
            *puVar1 = param_1;
            puVar1[1] = iVar4;
            *(int *)((int)this + 0x784) = *(int *)((int)this + 0x784) + 1;
            if (99 < *(uint *)((int)this + 0x784)) {
              return 0;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this_00 + 0xc));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00775870 */
byte F_00775870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x775870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xa9c);
  if ((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0xaa0))) {
    uVar2 = *(undefined4 *)(iVar1 * 0xc0 + 0xb00 + (int)this);
    uVar3 = (uint)*(ushort *)(iVar1 * 0xc0 + 0xb58 + (int)this);
    if (param_3 == 4) {
      F_00a41810(&REFG(undefined, 0x14a4230),0x2ee2,uVar3,uVar2);
      *(undefined4 *)((int)this + 0xa9c) = 0xffffffff;
      return 1;
    }
    F_00a418c0(&REFG(undefined, 0x14a4230),0x2ee2,uVar3,uVar2);
  }
  *(undefined4 *)((int)this + 0xa9c) = 0xffffffff;
  return 1;
}

/* ref: FUN_007758e0 */
byte F_007758e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7758e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  code * pcVar1;
  
  if ((((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (-3 < (int)param_1[1])) &&
     ((int)param_1[1] < 0)) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    (*pcVar1)(this);
  }
  return 1;
}

/* ref: FUN_00775920 */
uint F_00775920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  *(undefined4 *)((int)this + 0x14) = param_2;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x19ac) < 1)) &&
      (piVar2 = *(int * PTR32 *)((int)this + 0x14), piVar2 != (int *)0x3)) &&
     (((piVar2 != (int *)&REFG(undefined, 0x4) && (piVar2 != (int *)0x2)) &&
      (piVar2 != (int *)&REFG(undefined, 0x5))))) {
    if (param_1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
      uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      return uVar1;
    }
  }
  else {
    *(int * PTR32 *)((int)this + 0x10) = param_1;
    piVar2 = param_1;
  }
  return (uint)piVar2;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf4 */
uint F_00775990(unsigned int gen_a0)
{
  GEN_ENTER(0x775990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 8) == 0) && (*(int *)(in_ecx + 0x19ac) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007759b0 */
uint F_007759b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7759b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0x24) != 9999) && (-1 < *(int *)((int)this + 0x28))) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x24),(uint)*(ushort *)((int)this + 0x28));
  }
  uVar1 = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 9999;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  if (0 < *(int *)((int)this + 0x19a8)) {
    *(undefined4 *)((int)this + 0x30) = 0xffffffff;
    *(undefined4 *)((int)this + 0x2c) = 9999;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x19a8),0);
    *(undefined4 *)((int)this + 0x19a8) = 0;
  }
  return uVar1;
}

/* ref: FUN_00775a20 */
unsigned int F_00775a20(unsigned int gen_a0)
{
  GEN_ENTER(0x775a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xa8c) = 0;
  *(undefined1 *)((int)this + 0x19b4) = 1;
  return 0;
}

/* ref: FUN_00775a60 */
uint F_00775a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x775a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = param_2 & 0xff;
  uVar3 = 0x3af;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00461c60(pvVar1,uVar3,uVar2,param_3);
  F_0042e430(param_1,uVar2);
  uVar2 = *(uint *)((int)this + 0x20);
  if (((uVar2 != 0) && (*(char *)(uVar2 + 8) != '\0')) &&
     ('\0' < (char)('\x05' - *(char *)(uVar2 + 10)))) {
    F_0042d540(param_1,&REFG(undefined, 0x10c02e0));
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x3ce;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    uVar2 = F_0042d540(param_1,uVar2);
  }
  return uVar2;
}

/* ref: FUN_00775af0 */
unsigned int F_00775af0(unsigned int gen_a0)
{
  GEN_ENTER(0x775af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 8) != 0) {
    *(undefined1 *)(in_ecx + 0x19a4) = 1;
  }
  return 0;
}

/* ref: FUN_00775b00 */
uint F_00775b00(unsigned int gen_a0)
{
  GEN_ENTER(0x775b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint * this_00;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (*(char *)((int)this + 0x19a4) != '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x24);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x21)));
    if ((uVar3 == 0) || (pvVar4 == (undefined *)0x0)) {
      *(undefined1 *)((int)this + 0x19a4) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return (uint)pvVar4;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 8));
    *(bool *)((int)this + 0x19a4) = (char)uVar1 == '\0';
    uVar1 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x968)));
    if (0 < (int)uVar1) {
      iVar8 = 0x97c;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      do {
        uVar5 = F_00ab24a0(*((undefined4 *)GEN_TOP((iVar8 + *(int *)(uVar3 + 0x20)))));
        if (uVar5 == 0) {
          *(undefined1 *)((int)this + 0x19a4) = 1;
        }
        iVar8 = iVar8 + 0x18;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      } while ((*(uint *)(gen_frame + 0xc)) != 0);
    }
    if (*(char *)((int)this + 0x19a4) == '\0') {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      if (0 < (int)uVar1) {
        (*(int *)(gen_frame + 0x8)) = 0x2c3;
        (*(uint *)(gen_frame + 0xc)) = 0xb00;
        iVar8 = 0x980;
        (*(uint *)(gen_frame + 0x0)) = uVar1;
        do {
          iVar6 = *((int *)GEN_TOP((iVar8 + -4 + *(int *)(uVar3 + 0x20))));
          uVar5 = F_00ab24a0(iVar6);
          if (uVar5 != 0) {
            iVar6 = ((*((int *)GEN_TOP((iVar8 + -0xc + *(int *)(uVar3 + 0x20)))) < 1) - 1 & 1000000) + iVar6;
            uVar7 = F_00ab65a0(iVar6,uVar5);
            if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar8))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar8))) = uVar7;
              *(undefined1 *)(uVar3 + 0x1d) = 1;
            }
            uVar11 = 0;
            uVar10 = 1;
            uVar9 = 0;
            uVar7 = F_00ab6240(iVar6,0,uVar5);
            F_00431250(pvVar4,(*(int *)(gen_frame + 0x8)),uVar7,uVar9,uVar10,uVar11);
            if ((*(uint *)(uVar5 + 0x28) < 2) &&
               (*((char * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + *(int *)((int)pvVar4 + 0x20)))) != "")) {
              *((char * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + *(int *)((int)pvVar4 + 0x20)))) = "";
              *(undefined1 *)((int)pvVar4 + 0x1d) = 1;
            }
          }
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 5;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 0x14;
          iVar8 = iVar8 + 0x18;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
        } while ((*(uint *)(gen_frame + 0x0)) != 0);
      }
      uVar10 = 0;
      uVar9 = 0;
      if ((*(byte *)((int)this + 0x1c) & 2) == 0) {
        uVar11 = 0x12d0;
      }
      else {
        uVar11 = 0x12d1;
      }
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_0043bd00(pvVar4,uVar11,uVar9,uVar10);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
      (*(uint *)(gen_frame + 0x24)) = uVar3;
      if ((*(int *)((int)this + 0x20) != 0) &&
         (uVar3 = F_0042a990(*(int *)((int)this + 0x20) + 0x10), uVar3 != 0)) {
        uVar3 = F_0042a990(*(int *)((int)this + 0x20) + 0x10);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
        (*(uint *)(gen_frame + 0x1c)) = uVar3;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),3,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar8 = 2;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00775d80 */
uint F_00775d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,param_2);
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_00a3a8a0(pvVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00775dc0 */
uint F_00775dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  undefined * pvVar2;
  
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  if ((pvVar2 != (undefined *)0x0) &&
     (pvVar2 = (undefined *)F_00a37da0(pvVar2,param_2), pvVar2 != (undefined *)0x0)) {
    if (*(char *)((int)pvVar2 + 6) != '\0') {
      pvVar2 = (undefined *)F_00a3a860(pvVar2);
      cVar1 = *(char *)((int)pvVar2 + 6);
      while (cVar1 == '\0') {
        pvVar2 = (undefined *)F_00a3a860(pvVar2);
        cVar1 = *(char *)((int)pvVar2 + 6);
      }
    }
    return *(uint *)((int)pvVar2 + 8);
  }
  return 0;
}

/* ref: FUN_00775e20 */
uint F_00775e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *param_1 = 5;
  param_1[1] = (((uint)(param_2 * param_3) / 10) * 5) / 10;
  param_1[2] = param_2 * param_3;
  return (uint)param_1;
}

/* ref: FUN_00775e60 */
byte F_00775e60(unsigned int gen_a0)
{
  GEN_ENTER(0x775e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentReturn::vf13 */
unsigned int F_00775e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 2) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf1 */
uint F_00775eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x775eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((0 < param_3) && ((((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)) && (1 < param_3))))
  {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      if (0x13 < uVar1) goto LAB_00775ef0;
    }
    this[(uVar1 + 2) * 0x20] = (undefined1)0x0;
    *(int *)(this + 0x310) = *(int *)(this + 0x310) + -1;
  }
LAB_00775ef0: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf2 */
unsigned int F_00775f10(void)
{
  GEN_ENTER(0x775f10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00775f20 */
byte F_00775f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x775f20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_00775f30 */
uint F_00775f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x775f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  char * pcVar1;
  uint uVar2;
  
  *param_3 = 0xffffffff;
  if (param_1 == 1) {
    pcVar1 = (char *)F_00463610(2,param_2,1);
    uVar2 = F_00ab1ed0(param_2);
    if (uVar2 != 0) {
      *param_3 = (uint)*(ushort *)(uVar2 + 8);
    }
LAB_00775faf: ;
    if (pcVar1 != (char *)0x0) goto LAB_00775fb8;
  }
  else {
    if (param_1 == 2) {
      pcVar1 = (char *)F_00463610(1,param_2,2);
      uVar2 = F_00ab65a0(param_2,0);
      *param_3 = uVar2;
      goto LAB_00775faf;
    }
    if (param_1 == 3) {
      pcVar1 = (char *)F_00463610(2,param_2,3);
      uVar2 = F_00ab2510(param_2);
      if (uVar2 != 0) {
        *param_3 = (uint)*(ushort *)(uVar2 + 0x1c);
      }
      goto LAB_00775faf;
    }
  }
  pcVar1 = "";
LAB_00775fb8: ;
  uVar2 = F_0042e430(param_4,pcVar1);
  return uVar2;
}

/* ref: FUN_00775fd0 */
byte F_00775fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x775fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 != 0) {
LAB_00775fda: ;
    return *(char *)(uVar1 + 0x1c) == '\x01';
  }
  if (param_1 == 1) {
    uVar1 = F_00ab1ed0(param_2);
    if (uVar1 != 0) goto LAB_00775fda;
  }
  return 0;
}

/* ref: FUN_00776010 */
unsigned int F_00776010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x776010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x1e);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb08))) != (param_1 & 0xff)) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb08))) = param_1 & 0xff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0c))) != (param_2 & 0xff)) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0c))) = param_2 & 0xff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb10))) != (param_3 & 0xffff)) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb10))) = param_3 & 0xffff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x2c))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x2c))) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = 0xffffffff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x30))) != 1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x30))) = 1;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = 0xffffffff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    iVar3 = 0x34;
    do {
      if (*((int *)GEN_TOP((iVar3 + -0x28 + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x28 + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 4 + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + -0x20 + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x20 + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 8 + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + -0x1c + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x1c + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 0xc + *(int *)(uVar2 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *(int *)(uVar2 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 < 0x54);
  }
  return 0;
}

/* ref: FUN_007761b0 */
uint F_007761b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7761b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(in_ecx + 0x40);
  do {
    if (*pcVar2 == '\0') {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x20;
  } while ((int)uVar1 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_007761d0 */
unsigned int F_007761d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7761d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = *(int *)((int)this + 800) + 1;
  param_1[1] = param_2[1];
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_1 = ((float)GEN_TOF(((float10)*param_2 +
                    ((float10)*(float *)(&REFG(undefined, 0x13285d8) + iVar3 * 8) - fVar4) * fVar5)));
  fVar1 = *(float *)(&REFG(undefined, 0x13285dc) + iVar3 * 8);
  fVar2 = param_2[2];
  *(int *)((int)this + 800) = iVar3;
  param_1[2] = ((float)GEN_TOF((((float10)fVar1 - fVar4) * fVar5 + (float10)fVar2)));
  if (0x13 < iVar3) {
    *(undefined4 *)((int)this + 800) = 0;
  }
  return 0;
}

/* ref: FUN_00776230 */
unsigned int F_00776230(unsigned int gen_a0)
{
  GEN_ENTER(0x776230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x1e);
  if (uVar2 != 0) {
    iVar4 = 0x13;
    iVar3 = 0x9c;
    do {
      if (*((int *)GEN_TOP((iVar3 + -0x48 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x48 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 0x24 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + 0x24 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar3 = iVar3 + 0x90;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (**(int * PTR32 *)(uVar2 + 0x20) != 0) {
      **(int * PTR32 *)(uVar2 + 0x20) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007762e0 */
byte F_007762e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7762e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3b0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_007762f0 */
unsigned int F_007762f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7762f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00776320 */
unsigned int F_00776320(unsigned int gen_a0)
{
  GEN_ENTER(0x776320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  undefined * this_01;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_c;
  
  piVar1 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x3d);
    if (uVar4 != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x38)));
      if (this_00 != (undefined *)0x0) {
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        uVar11 = 0;
        uVar10 = 0;
        iVar8 = 1;
        uVar9 = 7;
        local_c = 1;
        this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(this_01,uVar9,uVar10,uVar11);
        if (uVar6 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc)))) {
          *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc))) = uVar6;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        do {
          bVar2 = F_00a6a9e0(&REFG(undefined, 0x14b29c0),iVar8);
          if ((bVar2 != 0) && (puVar7 = (uint *)F_00ab2020(iVar8), puVar7 != (uint *)0x0)) {
            if ((char)uVar5 != '\0') {
              puVar7 = puVar7 + 1;
            }
            uVar6 = local_c & 0xffff;
            F_00431250(this_00,uVar6 + 3,(*puVar7 & 0xffffff) + (int)puVar7,0,1,0);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80 + uVar6 * 4))) != iVar8) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80 + uVar6 * 4))) = iVar8;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            local_c = local_c + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x100);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x7c))) != (local_c & 0xffff)) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x7c))) = local_c & 0xffff;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00776460 */
uint F_00776460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined * this_01;
  uint uVar11;
  undefined4 * puVar12;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  uVar6 = param_1 - 1000U;
  if (param_1 - 1000U == 0) {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    uVar11 = *(uint *)(uVar6 + 0x28aac + param_1 * 4);
    uVar6 = uVar11;
    if ((this_00 != (undefined *)0x0) && (uVar11 != 0)) {
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x24))(piVar7,8);
      uVar6 = 0;
      if (uVar8 != 0) {
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7,7);
        uVar6 = 0;
        if (uVar9 != 0) {
          local_18 = *(int *)((int)this_00 + 0xc);
          if (0xd < local_18) {
            local_18 = 0xe;
          }
          uVar10 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
          uVar3 = REFG(undefined2, 0x14ab148);
          uVar6 = (uint)REFG(undefined2, 0x14ab148);
          if ((REFG(undefined2, 0x14ab148) == 0) || (bVar1 = true, (ushort)uVar10 <= REFG(undefined2, 0x14ab148))) {
            bVar1 = false;
          }
          local_14 = 0;
          if (0 < local_18) {
            local_c = 8;
            puVar12 = (undefined4 *)(uVar11 + 0x60);
            do {
              local_20 = 0;
              local_1c = 0;
              this_01 = (undefined *)F_00a37da0(this_00,local_14);
              bVar2 = 0;
              if ((this_01 == (undefined *)0x0) ||
                 ((*(char *)((int)this_01 + 6) == '\0' && (*(int *)((int)this_01 + 8) == 0)))) {
                ((code *)*(gen_code32 *)(puVar12[-0x18] + 4))(puVar12 + -0x18);
                if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) = 0;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
                if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + local_c))) = 0;
                  goto LAB_007766c0;
                }
              }
              else {
                uVar6 = F_00a37c50(this_01);
                local_1c = (uint)(uVar6 != 0);
                uVar6 = F_0046e5e0(this_01);
                if (puVar12[-2] != uVar6) {
                  ((code *)*(gen_code32 *)(puVar12[-0x18] + 4))(puVar12 + -0x18);
                  uVar11 = F_00ab24a0(uVar6);
                  if (uVar11 != 0) {
                    ((code *)*(gen_code32 *)(puVar12[-0x18] + 8))(puVar12 + -0x18,uVar6,uVar11);
                  }
                }
                local_20 = F_00760640((uint)*(byte *)(puVar12 + 1),this_01,*puVar12);
                bVar4 = F_00a36000(this_01);
                local_10 = (uint)bVar4;
                if (local_10 == 0) {
                  uVar5 = F_00906d60(this_01);
                  if (uVar5 != 0) {
                    local_10 = 1;
                  }
                }
                else if ((local_10 == 100) && (uVar5 = F_00906d60(this_01), uVar5 != 30000)) {
                  local_10 = 99;
                }
                if ((bVar1) && (uVar3 < *(byte *)((int)puVar12 + 6))) {
                  bVar2 = 1;
                }
                if (*((uint *)GEN_TOP((local_c + *(int *)(uVar8 + 0x20)))) != local_10) {
                  *((uint *)GEN_TOP((local_c + *(int *)(uVar8 + 0x20)))) = local_10;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
                uVar6 = 0;
                if (*(char *)((int)puVar12 + 5) != '\0') {
                  bVar4 = F_00760e50(puVar12 + -0x18,this_01);
                  uVar6 = F_00760700((uint)bVar4);
                }
                uVar6 = uVar6 * 2 | (uint)(*(char *)((int)puVar12 + 5) != '\0');
                if (*((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) != uVar6) {
                  *((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) = uVar6;
LAB_007766c0: ;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
              }
              if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + -8 + local_c))) != puVar12[-1]) {
                *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + -8 + local_c))) = puVar12[-1];
                *(undefined1 *)(uVar8 + 0x1d) = 1;
              }
              uVar6 = ((uint)bVar2 << 0x10 | local_1c) << 8 | local_20 & 0xff;
              if (*((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + -4 + local_c))) != uVar6) {
                *((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + -4 + local_c))) = uVar6;
                *(undefined1 *)(uVar8 + 0x1d) = 1;
              }
              uVar6 = F_0042a990(puVar12 + -0x17);
              if (uVar6 != *((uint *)GEN_TOP((*(int *)(uVar9 + 0x20) + local_14 * 4)))) {
                *((uint *)GEN_TOP((*(int *)(uVar9 + 0x20) + local_14 * 4))) = uVar6;
                *(undefined1 *)(uVar9 + 0x1d) = 1;
              }
              local_c = local_c + 0x10;
              local_14 = local_14 + 1;
              puVar12 = puVar12 + 0x1a;
            } while (local_14 < local_18);
          }
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00776750 */
byte F_00776750(unsigned int gen_a0)
{
  GEN_ENTER(0x776750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar5 = false;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3d);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = 0x95;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043c920(pvVar3,uVar6,uVar7);
    bVar5 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x714))) != uVar4;
    if (bVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x714))) = uVar4;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar7 = 0;
    uVar6 = 0x96;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043c920(pvVar3,uVar6,uVar7);
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x718))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x718))) = uVar4;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
      return 1;
    }
  }
  return bVar5;
}

/* ref: FUN_007767e0 */
uint F_007767e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7767e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  ((uint *)(gen_frame + 0x0))[0x3e] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  ((uint *)(gen_frame + 0x0))[0x1f] = 0xc9a;
  ((uint *)(gen_frame + 0x0))[0x20] = 0xc9c;
  ((uint *)(gen_frame + 0x0))[0x21] = 0xc9b;
  ((uint *)(gen_frame + 0x0))[0x22] = 0xc9d;
  ((uint *)(gen_frame + 0x0))[0x23] = 0xc9e;
  ((uint *)(gen_frame + 0x0))[0x24] = 0xc9f;
  ((uint *)(gen_frame + 0x0))[0x25] = 0xca1;
  ((uint *)(gen_frame + 0x0))[0x26] = 0xca2;
  ((uint *)(gen_frame + 0x0))[0x27] = 0xca3;
  ((uint *)(gen_frame + 0x0))[0x28] = 0xca4;
  ((uint *)(gen_frame + 0x0))[0x29] = 0xca5;
  ((uint *)(gen_frame + 0x0))[0x2a] = 0xca6;
  ((uint *)(gen_frame + 0x0))[0x2b] = 0xca8;
  ((uint *)(gen_frame + 0x0))[0x2c] = 0xca9;
  ((uint *)(gen_frame + 0x0))[0x2d] = 0xcaa;
  ((uint *)(gen_frame + 0x0))[0x2e] = 0xcac;
  ((uint *)(gen_frame + 0x0))[0x2f] = 0xcad;
  ((uint *)(gen_frame + 0x0))[0x30] = 0xcae;
  ((uint *)(gen_frame + 0x0))[0x31] = 0xcb0;
  ((uint *)(gen_frame + 0x0))[0x32] = 0xcb1;
  ((uint *)(gen_frame + 0x0))[0x33] = 0xcb3;
  ((uint *)(gen_frame + 0x0))[0x34] = 0xcb4;
  ((uint *)(gen_frame + 0x0))[0x35] = 0xcb5;
  ((uint *)(gen_frame + 0x0))[0x36] = 0xcb7;
  ((uint *)(gen_frame + 0x0))[0x37] = 0xcb8;
  ((uint *)(gen_frame + 0x0))[0x38] = 0xcb9;
  ((uint *)(gen_frame + 0x0))[0x39] = 0xcbb;
  ((uint *)(gen_frame + 0x0))[0x3a] = 0xcc0;
  ((uint *)(gen_frame + 0x0))[0x3b] = 0xcc1;
  ((uint *)(gen_frame + 0x0))[0x3c] = 0xcbd;
  ((uint *)(gen_frame + 0x0))[0x3d] = 0xcbe;
  ((uint *)(gen_frame + 0x0))[0] = 1;
  ((uint *)(gen_frame + 0x0))[1] = 2;
  ((uint *)(gen_frame + 0x0))[2] = 3;
  ((uint *)(gen_frame + 0x0))[3] = 4;
  ((uint *)(gen_frame + 0x0))[4] = 5;
  ((uint *)(gen_frame + 0x0))[5] = 6;
  ((uint *)(gen_frame + 0x0))[6] = 0x25;
  ((uint *)(gen_frame + 0x0))[7] = 0x2a;
  ((uint *)(gen_frame + 0x0))[8] = 0x29;
  ((uint *)(gen_frame + 0x0))[9] = 0x27;
  ((uint *)(gen_frame + 0x0))[10] = 0x28;
  ((uint *)(gen_frame + 0x0))[0xb] = 0x26;
  ((uint *)(gen_frame + 0x0))[0xc] = 0x16;
  ((uint *)(gen_frame + 0x0))[0xd] = 0x1b;
  ((uint *)(gen_frame + 0x0))[0xe] = 0x2c;
  ((uint *)(gen_frame + 0x0))[0xf] = 0x15;
  ((uint *)(gen_frame + 0x0))[0x10] = 0x13;
  ((uint *)(gen_frame + 0x0))[0x11] = 0x18;
  ((uint *)(gen_frame + 0x0))[0x12] = 0x14;
  ((uint *)(gen_frame + 0x0))[0x13] = 0x2d;
  ((uint *)(gen_frame + 0x0))[0x14] = 0x1d;
  ((uint *)(gen_frame + 0x0))[0x15] = 0x1e;
  ((uint *)(gen_frame + 0x0))[0x16] = 0x1f;
  ((uint *)(gen_frame + 0x0))[0x17] = 0x21;
  ((uint *)(gen_frame + 0x0))[0x18] = 0x22;
  ((uint *)(gen_frame + 0x0))[0x19] = 0x2e;
  ((uint *)(gen_frame + 0x0))[0x1a] = 0x30;
  ((uint *)(gen_frame + 0x0))[0x1b] = 0x48;
  ((uint *)(gen_frame + 0x0))[0x1c] = 0x49;
  ((uint *)(gen_frame + 0x0))[0x1d] = 0x46;
  ((uint *)(gen_frame + 0x0))[0x1e] = 0x47;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))()));
  piVar6 = (int *)(param_1 + 0x1b4);
  iVar5 = 0;
  do {
    uVar3 = F_0043bd00(this_00,*(undefined4 *)((int)((uint *)(gen_frame + 0x0)) + iVar5 + 0x7c),0,0);
    F_005a2710(piVar6 + -0x3f,6);
    uVar1 = *(undefined4 *)((int)((uint *)(gen_frame + 0x0)) + iVar5);
    piVar6[-0x3e] = uVar3;
    uVar4 = F_00ab2290(uVar1);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar2 = *(uint *)(uVar4 + 4);
      uVar3 = F_005a2710(piVar6 + -1,6);
      *piVar6 = (uVar2 & 0xffffff) + uVar4 + 4;
    }
    iVar5 = iVar5 + 4;
    piVar6 = piVar6 + 2;
  } while (iVar5 < 0x7c);
  F_00c47745(((uint *)(gen_frame + 0x0))[0x3e] ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar3;
}

/* ref: FUN_00776aa0 */
uint F_00776aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x776aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x38)));
  pvVar3 = this_00;
  if (this_00 != (undefined *)0x0) {
    if (*((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x4dc))) == 0) {
      uVar2 = F_00463610(1,1,0);
      pvVar3 = (undefined *)0x0;
      if (uVar2 != 0) {
        pvVar3 = (undefined *)F_00431250(this_00,0x137,uVar2,0,1,0);
      }
    }
    iVar5 = 0x13c;
    iVar4 = 0x4f0;
    local_8 = 2;
    do {
      if ((*((int *)GEN_TOP((iVar4 + *(int *)((int)this_00 + 0x20)))) == 0) &&
         (pvVar3 = (undefined *)F_00463610(1,iVar5 + -0x125,0), pvVar3 != (undefined *)0x0)) {
        pvVar3 = (undefined *)F_00431250(this_00,iVar5,pvVar3,0,1,0);
      }
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar5 = 0x141;
    iVar4 = 0x504;
    local_8 = 3;
    do {
      if ((*((int *)GEN_TOP((iVar4 + *(int *)((int)this_00 + 0x20)))) == 0) &&
         (pvVar3 = (undefined *)F_00463610(1,iVar5 + -0x12d,0), pvVar3 != (undefined *)0x0)) {
        pvVar3 = (undefined *)F_00431250(this_00,iVar5,pvVar3,0,1,0);
      }
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)pvVar3;
}

/* ref: Client::UI2::Agent::AgentStatus::vf15 */
uint F_00776ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00435250(param_1,0);
  uVar2 = F_00ab21a0(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    if (*(int *)(uVar2 + 0x10) == 0x20) {
      iVar3 = 2;
    }
    else if (*(int *)(uVar2 + 0x10) == 0x21) {
      iVar3 = 4;
    }
    else {
      iVar3 = 1;
    }
    uVar1 = (uint)(iVar3 != 1);
    if (iVar3 == 1) {
      return uVar1;
    }
  }
  if (*(int *)(this + 0xc) != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00776c20 */
uint F_00776c20(unsigned int gen_a0)
{
  GEN_ENTER(0x776c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),0x28);
  if (uVar1 != 0) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  }
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)((int)this + 0x14) = 1;
  return uVar1;
}

/* ref: FUN_00776c60 */
byte F_00776c60(unsigned int gen_a0)
{
  GEN_ENTER(0x776c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1[0x3b] == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00776c80 */
uint F_00776c80(unsigned int gen_a0)
{
  GEN_ENTER(0x776c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar2;
}

/* ref: FUN_00776cc0 */
unsigned int F_00776cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *(char *)((int)this + 0x3c) = (char)param_1;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3d);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x710))) != (uint)((char)param_1 != '\0')) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x710))) = (uint)((char)param_1 != '\0');
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00776d10 */
uint F_00776d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = param_2 + param_1 * 2;
  if (0x15 < uVar1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0) ^ (uint)(uint)(gen_out + 0x0));
    return uVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0) ^ (uint)(uint)(gen_out + 0x0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf1 */
uint F_00776e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x776e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf2 */
unsigned int F_00776e20(void)
{
  GEN_ENTER(0x776e20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf1 */
uint F_00776e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x776e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00776e40 */
unsigned int F_00776e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776e40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = F_00ac3640(&REFG(undefined, 0x14bcf40));
  iVar1 = (*(int *)&gen_args[0]);
  iVar3 = 0;
  if (bVar2 != 0) {
    (*(int *)&gen_args[0]) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    F_00ac8670(&(*(int *)&gen_args[0]),&(*(int *)(gen_frame + 0x8)));
    iVar3 = (*(int *)&gen_args[0]) * 0x10000 + (*(int *)(gen_frame + 0x8));
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x98))) != iVar3) {
      *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x98))) = iVar3;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x9c))) != -0x10018) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x9c))) = 0xfffeffe8;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    iVar3 = 1;
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xa0))) != -0x67aff8) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xa0))) = 0xff985008;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
  }
  if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x94))) != iVar3) {
    *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x94))) = iVar3;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf2 */
unsigned int F_00776ef0(void)
{
  GEN_ENTER(0x776ef0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00776f00 */
unsigned int F_00776f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x776f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 < 6) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if ((char)param_2 != '\0') {
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | uVar1;
      return 0;
    }
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & ~uVar1;
  }
  return 0;
}

/* ref: FUN_00776f30 */
unsigned int F_00776f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00538780(&REFG(undefined4, 0x1375bc0));
    *(ulonglong *)((int)this + 0xa8) = uVar1;
  }
  *(char *)((int)this + 0xa0) = (char)param_1;
  return 0;
}

/* ref: FUN_00776f62 */
unsigned int F_00776f62(unsigned int gen_a0)
{
  GEN_ENTER(0x776f62u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))()));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2d) = 0;
  return 0;
}

/* ref: FUN_00776f70 */
uint F_00776f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x776f70u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int in_esi = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(in_eax + 0x1c))()));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(in_esi + 8));
  *(undefined4 *)(in_esi + 8) = in_ebx;
  *(undefined4 *)(in_esi + 0x28) = in_ebx;
  *(undefined4 *)(in_esi + 0x24) = in_ebx;
  *(short *)(in_esi + 0x2d) = (short)in_ebx;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentTrade::vf5 */
unsigned int F_00776fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined1 AVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  uint uVar10;
  uint uVar11;
  uint * puVar12;
  bool bVar13;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined * local_c;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,10);
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar6 == 0) {
    return 0;
  }
  bVar2 = F_00a36640(&REFG(undefined, 0x14a4230));
  if (bVar2 == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) = 0;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) == 0) {
      return 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) = 0;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
    return 0;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) == 0) {
    uVar7 = F_00a366a0();
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x28)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x28))) = uVar7;
  }
  local_c = this + 0x70;
  local_14 = 0;
  local_1c = 4;
  do {
    pvVar8 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),local_14);
    if (pvVar8 == (undefined *)0x0) {
LAB_007771ed: ;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 4))))(local_c + -0x60);
      if (*((int *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x5c);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)))) {
LAB_0077728a: ;
        *puVar12 = uVar7;
        *(undefined1 *)(uVar6 + 0x1d) = 1;
      }
    }
    else {
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (uVar7 == 0) goto LAB_007771ed;
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (*(uint *)(local_c + -8) != uVar7) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 4))))(local_c + -0x60);
        *(undefined4 *)(local_c + -4) = 0xffffffff;
        uVar10 = F_0046e5e0(pvVar8);
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 8))))(local_c + -0x60,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640((uint)(byte)local_c[4],pvVar8,*(undefined4 *)local_c);
      uVar10 = F_00a3a8a0(pvVar8);
      AVar3 = local_c[5];
      if (AVar3 != (undefined1)0x0) {
        bVar2 = F_00760e50(local_c + -0x60,pvVar8);
        piVar4 = (int *)F_00ab3c60((uint)bVar2);
        if (piVar4 == (int *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) = uVar7 & 0xff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) != *(int *)(local_c + -4)) {
        *((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) = *(int *)(local_c + -4);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) != uVar10) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) = uVar10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) != (uint)(byte)local_c[4]) {
        *((uint *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) = (uint)(byte)local_c[4];
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = (uint)(AVar3 != (undefined1)0x0) | local_20 * 2;
      if (*((uint *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) != uVar7) {
        *((uint *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x5c);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)))) goto LAB_0077728a;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_1c = local_1c + 0x14;
  } while (local_14 < 5);
  uVar7 = F_00a3ade0(&REFG(undefined, 0x14a4230));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 200))) != uVar7) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 200))) = uVar7;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) == 0) {
    uVar7 = F_00a366c0(&REFG(undefined, 0x14a4230));
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2c)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2c))) = uVar7;
  }
  local_c = this + 0x27d;
  local_14 = 0;
  local_18 = 0x68;
  do {
    pvVar8 = (undefined *)F_00a36610(&REFG(undefined, 0x14a4230),local_14);
    if (pvVar8 == (undefined *)0x0) {
LAB_007774f9: ;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 4))))(local_c + -0x65);
      if (*((int *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x61);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)))) {
LAB_00777598: ;
        *puVar12 = uVar7;
        *(undefined1 *)(uVar6 + 0x1d) = 1;
      }
    }
    else {
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (uVar7 == 0) goto LAB_007774f9;
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (*(uint *)(local_c + -0xd) != uVar7) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 4))))(local_c + -0x65);
        *(undefined4 *)(local_c + -9) = 0xffffffff;
        if (*(char *)((int)pvVar8 + 6) == '\0') {
          uVar10 = *(uint *)((int)pvVar8 + 8);
          if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
            uVar10 = uVar10 + 1000000;
          }
        }
        else {
          pvVar9 = (undefined *)F_00a3a860(pvVar8);
          uVar10 = F_0046e5e0(pvVar9);
        }
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 8))))(local_c + -0x65,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640((uint)(byte)local_c[-1],pvVar8,*(undefined4 *)(local_c + -5));
      uVar10 = F_00a3a8a0(pvVar8);
      AVar3 = *(undefined1 *)local_c;
      bVar13 = AVar3 != (undefined1)0x0;
      if (bVar13) {
        if (AVar3 == (undefined1)0xff) {
          if ((*(char *)((int)pvVar8 + 6) == '\0') || (uVar11 = F_00a3a860(pvVar8), uVar11 == 0))
          {
            AVar3 = *(undefined *)((int)pvVar8 + 0x2f);
          }
          else {
            pvVar8 = (undefined *)F_00a3a860(pvVar8);
            AVar3 = (undefined1)F_0046e590(pvVar8);
          }
        }
        piVar4 = (int *)F_00ab3c60((uint)(byte)AVar3);
        if (piVar4 == (int *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) = uVar7 & 0xff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) != *(int *)(local_c + -9)) {
        *((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) = *(int *)(local_c + -9);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_18))) != uVar10) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_18))) = uVar10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) != (uint)(byte)local_c[-1]) {
        *((uint *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) = (uint)(byte)local_c[-1];
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = (uint)bVar13 | local_20 * 2;
      if (*((uint *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) != uVar7) {
        *((uint *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x61);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)))) goto LAB_00777598;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x14;
  } while (local_14 < 5);
  uVar6 = F_00a3aec0(&REFG(undefined, 0x14a4230));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xcc))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xcc))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00a36680(&REFG(undefined, 0x14a4230));
  if ((int)uVar6 < 4) {
    iVar1 = *(int *)(uVar5 + 0x20);
    if (uVar6 == 3) {
      if (*(int *)(iVar1 + 0xd0) != 2) {
        *(undefined4 *)(iVar1 + 0xd0) = 2;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
    }
    else if (*(int *)(iVar1 + 0xd0) != 1) {
      *(undefined4 *)(iVar1 + 0xd0) = 1;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
  }
  else if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) != 3) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) = 3;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00a36690(&REFG(undefined, 0x14a4230));
  if ((int)uVar6 < 4) {
    iVar1 = *(int *)(uVar5 + 0x20);
    if (uVar6 == 3) {
      if (*(int *)(iVar1 + 0xd4) == 2) goto LAB_00777686;
      *(undefined4 *)(iVar1 + 0xd4) = 2;
    }
    else {
      if (*(int *)(iVar1 + 0xd4) == 1) goto LAB_00777686;
      *(undefined4 *)(iVar1 + 0xd4) = 1;
    }
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) == 3) goto LAB_00777686;
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) = 3;
  }
  *(undefined1 *)(uVar5 + 0x1d) = 1;
LAB_00777686: ;
  bVar2 = F_00a36660(&REFG(undefined, 0x14a4230));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd8))) == (uint)(bVar2 != 0)) {
    return 0;
  }
  *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd8))) = (uint)(bVar2 != 0);
  *(undefined1 *)(uVar5 + 0x1d) = 1;
  return 0;
}

/* ref: FUN_007776f0 */
unsigned int F_007776f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7776f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    *(undefined1 *)((int)this + 0x428) = 1;
    (*pcVar1)(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00777710 */
unsigned int F_00777710(unsigned int gen_a0)
{
  GEN_ENTER(0x777710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x420) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x420),0);
    *(undefined4 *)((int)this + 0x420) = 0;
    *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 8);
    return 0;
  }
  *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 8);
  return 0;
}

/* ref: FUN_00777770 */
uint F_00777770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x424) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentHowtoList::vf3 */
unsigned int F_00777780(unsigned int gen_a0)
{
  GEN_ENTER(0x777780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007777b0 */
unsigned int F_007777b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7777b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  int local_8;
  
  iVar1 = param_1;
  while (iVar1 < param_2) {
    iVar5 = iVar1 + param_2 >> 1;
    iVar2 = *(int *)((int)this + iVar5 * 8 + 0x18);
    uVar3 = *(undefined4 *)((int)this + iVar5 * 8 + 0x1c);
    piVar7 = (int *)((int)this + iVar1 * 8 + 0x18);
    *(undefined4 *)((int)this + iVar5 * 8 + 0x18) = *(undefined4 *)((int)this + iVar1 * 8 + 0x18);
    *(int *)((int)this + iVar5 * 8 + 0x1c) = piVar7[1];
    iVar5 = iVar1 + 1;
    iVar9 = iVar1;
    if (iVar5 <= param_2) {
      local_8 = (param_2 - iVar5) + 1;
      piVar6 = (int *)((int)this + iVar5 * 8 + 0x18);
      do {
        piVar8 = piVar7;
        if (*(byte *)(*piVar6 + 0x18) < *(byte *)(iVar2 + 0x18)) {
          iVar5 = piVar7[3];
          iVar4 = piVar7[2];
          iVar9 = iVar9 + 1;
          piVar8 = piVar7 + 2;
          *piVar8 = *piVar6;
          piVar7[3] = piVar6[1];
          *piVar6 = iVar4;
          piVar6[1] = iVar5;
        }
        piVar6 = piVar6 + 2;
        local_8 = local_8 + -1;
        piVar7 = piVar8;
      } while (local_8 != 0);
    }
    *(undefined4 *)((int)this + iVar1 * 8 + 0x18) = *(undefined4 *)((int)this + iVar9 * 8 + 0x18);
    *(undefined4 *)((int)this + iVar1 * 8 + 0x1c) = *(undefined4 *)((int)this + iVar9 * 8 + 0x1c);
    *(int *)((int)this + iVar9 * 8 + 0x18) = iVar2;
    *(undefined4 *)((int)this + iVar9 * 8 + 0x1c) = uVar3;
    F_007777b0(this,iVar1,iVar9 + -1);
    iVar1 = iVar9 + 1;
  }
  return 0;
}

/* ref: FUN_00777890 */
uint F_00777890(unsigned int gen_a0)
{
  GEN_ENTER(0x777890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  uint local_18;
  int local_14;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x2d);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x29);
  uVar7 = F_00ab0070();
  local_18 = 0;
  local_c = 0;
  if (uVar7 != 0) {
    local_14 = 0x18;
    piVar4 = (int *)((int)this + 0x80);
    do {
      piVar8 = (int *)F_00ab2ba0(local_c);
      if ((piVar8 != (int *)0x0) &&
         ((int)*(char *)((int)this + 0x21) == (uint)*(byte *)((int)piVar8 + 6))) {
        iVar2 = *piVar8;
        bVar3 = F_00a6af60(&REFG(undefined, 0x14ab440),local_c);
        if (bVar3 != 0) {
          uVar9 = F_00ab24a0(iVar2);
          if (uVar9 == 0) {
            local_5 = 1;
          }
          else {
            if (piVar4[-1] != iVar2) {
              ((code *)*(gen_code32 *)(piVar4[-0x17] + 8))(piVar4 + -0x17,iVar2,uVar9);
            }
            if (*((int *)GEN_TOP((local_14 + -0x10 + *(int *)(uVar5 + 0x20)))) != *piVar4) {
              *((int *)GEN_TOP((local_14 + -0x10 + *(int *)(uVar5 + 0x20)))) = *piVar4;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((local_14 + -4 + *(int *)(uVar5 + 0x20)))) != iVar2) {
              *((int *)GEN_TOP((local_14 + -4 + *(int *)(uVar5 + 0x20)))) = iVar2;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            puVar1 = ((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20))));
            if (*puVar1 != local_c) {
              *puVar1 = local_c;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            uVar9 = F_0042a990(piVar4 + -0x16);
            if (uVar9 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_18 * 4)))) {
              *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_18 * 4))) = uVar9;
              *(undefined1 *)(uVar6 + 0x1d) = 1;
            }
            local_14 = local_14 + 0x14;
            local_18 = local_18 + 1;
            piVar4 = piVar4 + 0x1a;
            if (0x31 < local_18) break;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar7);
  }
  if (**(uint * PTR32 *)(uVar5 + 0x20) != local_18) {
    **(uint * PTR32 *)(uVar5 + 0x20) = local_18;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = (int)*(char *)((int)this + 0x21) - 1;
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) == uVar6) {
    *(undefined1 *)((int)this + 0x22) = local_5;
    return CONCAT31((int3)(uVar6 >> 8),local_5);
  }
  *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = uVar6;
  *(undefined1 *)(uVar5 + 0x1d) = 1;
  *(undefined1 *)((int)this + 0x22) = local_5;
  return uVar6;
}

/* ref: FUN_00777a20 */
uint F_00777a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar2 = 0x26c;
    break;
  case 1: ;
    uVar2 = 0x26d;
    break;
  case 2: ;
    uVar2 = 0x275;
    break;
  case 3: ;
    uVar2 = 0x26f;
    break;
  case 4: ;
    uVar2 = 0x26e;
    break;
  default: ;
    goto switchD_00777a2f_default;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0046a630(this_00,uVar2);
switchD_00777a2f_default: ;
  *(undefined1 *)((int)this + 0x22) = 1;
  return uVar1;
}

/* ref: FUN_00777a90 */
uint F_00777a90(unsigned int gen_a0)
{
  GEN_ENTER(0x777a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar4 = *(undefined4 *)((int)this + 0x1c);
    uVar3 = 0x270;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0046a6b0(pvVar2,uVar3,uVar4);
  }
  else {
    uVar1 = *(int *)((int)this + 0x18) - 1;
    if (uVar1 == 0) {
      uVar4 = *(undefined4 *)((int)this + 0x1c);
      uVar3 = 0x271;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0046a6b0(pvVar2,uVar3,uVar4);
      *(undefined1 *)((int)this + 0x22) = 1;
      return uVar1;
    }
  }
  *(undefined1 *)((int)this + 0x22) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf3 */
unsigned int F_00777ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x777ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00777b10 */
unsigned int F_00777b10(unsigned int gen_a0)
{
  GEN_ENTER(0x777b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x10),0);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00777b50 */
uint F_00777b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x777b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int iVar1;
  undefined * this;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  do {
    if (param_3 < iVar3) {
      return 0;
    }
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),iVar3);
    if (this != (undefined *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          this_00 = (undefined *)F_00a37da0(this,iVar4);
          if (this_00 != (undefined *)0x0) {
            if (*(char *)((int)this_00 + 6) == '\0') {
              if (*(int *)((int)this_00 + 8) == 0) goto LAB_00777bc3;
              uVar2 = *(uint *)((int)this_00 + 8);
              if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
                uVar2 = uVar2 + 1000000;
              }
            }
            else {
              this_01 = (undefined *)F_00a3a860(this_00);
              uVar2 = F_0046e5e0(this_01);
            }
            if (uVar2 == param_1) {
              *param_4 = iVar3;
              *param_5 = iVar4;
              return (uint)this_00;
            }
          }
LAB_00777bc3: ;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

/* ref: FUN_00777c00 */
uint F_00777c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(uint *)((int)this + 0x14) = param_1;
  return param_1;
}

/* ref: FUN_00777c20 */
unsigned int F_00777c20(unsigned int gen_a0)
{
  GEN_ENTER(0x777c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00777cb0 */
unsigned int F_00777cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x777cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38) + -4);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34));
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar2 = F_00404270();
  uVar3 = F_00406c00(400,0,uVar2,0);
  *(uint *)((int)this + 0x34) = uVar3;
  puVar4 = (undefined4 *)F_00406c00(0x4b4,0,uVar2,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar4 + 1;
    *puVar4 = 100;
    iVar7 = 99;
    puVar4 = puVar5;
    do {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      *(undefined2 *)((int)puVar4 + 6) = 0;
      puVar4[2] = 0xffffffff;
      puVar4 = puVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *(undefined4 * PTR32 *)((int)this + 0x38) = puVar5;
  iVar6 = 0;
  iVar8 = 0xc;
  iVar7 = 2;
  do {
    *((int *)GEN_TOP((iVar8 + -0xc + *(int *)((int)this + 0x34)))) = *(int *)((int)this + 0x38) + iVar6;
    *((int *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0x38)))) = iVar7 + -2;
    *((int *)GEN_TOP((iVar8 + -8 + *(int *)((int)this + 0x34)))) = iVar6 + 0xc + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x14 + *(int *)((int)this + 0x38)))) = iVar7 + -1;
    *((int *)GEN_TOP((iVar8 + -4 + *(int *)((int)this + 0x34)))) = iVar6 + 0x18 + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x20 + *(int *)((int)this + 0x38)))) = iVar7;
    *((int *)GEN_TOP((iVar8 + *(int *)((int)this + 0x34)))) = *(int *)((int)this + 0x38) + iVar6 + 0x24;
    *((int *)GEN_TOP((iVar6 + 0x2c + *(int *)((int)this + 0x38)))) = iVar7 + 1;
    *((int *)GEN_TOP((iVar8 + 4 + *(int *)((int)this + 0x34)))) = iVar6 + 0x30 + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x38 + *(int *)((int)this + 0x38)))) = iVar7 + 2;
    iVar1 = iVar7 + 3;
    iVar8 = iVar8 + 0x14;
    iVar6 = iVar6 + 0x3c;
    iVar7 = iVar7 + 5;
  } while (iVar1 < 100);
  return 0;
}

/* ref: FUN_00777e10 */
unsigned int F_00777e10(unsigned int gen_a0)
{
  GEN_ENTER(0x777e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_00777e40 */
uint F_00777e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x777e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  undefined * this;
  uint * puVar3;
  uint * puVar4;
  
  if (param_5 != -1) {
    F_005a2710((undefined *)(param_1 + 0x100),3);
    *(uint *)(param_1 + 0x104) = (uint)((char)param_6 != '\0');
    F_005a2710((undefined *)(param_1 + 0x108),3);
    *(undefined4 *)(param_1 + 0x10c) = 0x18;
    puVar3 = (uint *)(param_1 + 0x1d4);
    param_1 = 0x18;
    this = param_2;
    puVar4 = param_3;
    do {
      uVar1 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_005a2710(puVar3 + -0x31,3);
      puVar3[-0x30] = uVar1;
      uVar1 = F_00ab6240(*puVar4,1,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_0042e430(this,uVar1);
      uVar1 = F_0042a990(this);
      F_005a2710(puVar3 + -1,6);
      *puVar3 = uVar1;
      uVar1 = *puVar4;
      uVar2 = F_005a2710(puVar3 + 0x2f,3);
      puVar3[0x30] = uVar1;
      puVar3 = puVar3 + 2;
      this = (undefined *)((int)this + 0x54);
      puVar4 = puVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return uVar2;
  }
  uVar1 = F_005a2710((undefined *)(param_1 + 0x108),3);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00777f50 */
uint F_00777f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x777f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be21e));
  while( true ) {
    uVar3 = *(undefined4 *)((int)&REFG(undefined4, 0x10c44ac) + uVar2);
    uVar5 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar3,uVar4,uVar5);
    F_0042e370(param_2,uVar1);
    uVar2 = uVar2 + 4;
    if (0x1b < uVar2) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c0390));
  }
  uVar2 = param_3;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    uVar2 = F_0042a990(param_2);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar2;
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    uVar2 = F_005a2710((undefined *)((int)param_1 + 8),4);
    *(undefined4 *)((int)param_1 + 0xc) = uVar3;
    return uVar2;
  case 2: ;
  case 4: ;
  case 7: ;
    uVar2 = F_0042a990(param_2);
    F_005a2710((undefined *)((int)param_1 + 0x18),6);
    *(uint *)((int)param_1 + 0x1c) = uVar2;
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    uVar2 = F_005a2710((undefined *)((int)param_1 + 0x20),4);
    *(undefined4 *)((int)param_1 + 0x24) = uVar3;
  }
  return uVar2;
}

/* ref: FUN_00778040 */
uint F_00778040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  
  bVar1 = *(ushort *)(param_2 + 6) < *(ushort *)(param_1 + 6);
  if (*(ushort *)(param_2 + 6) == *(ushort *)(param_1 + 6)) {
    bVar1 = *(byte *)(param_1 + 4) < *(byte *)(param_2 + 4);
  }
  return (uint)bVar1;
}

/* ref: FUN_00778070 */
uint F_00778070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  pvVar1 = (undefined *)*param_1;
  if (*(char *)((int)pvVar1 + 6) == '\0') {
    uVar2 = *(uint *)((int)pvVar1 + 8);
    if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar2 = F_0046e5e0(pvVar1);
  }
  pvVar1 = (undefined *)*param_2;
  if (*(char *)((int)pvVar1 + 6) != '\0') {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar3 = F_0046e5e0(pvVar1);
    return (uint)(uVar2 < uVar3);
  }
  uVar3 = *(uint *)((int)pvVar1 + 8);
  if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
    uVar3 = uVar3 + 1000000;
  }
  return (uint)(uVar2 < uVar3);
}

/* ref: FUN_007780e0 */
uint F_007780e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7780e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (param_4 == 2) {
    uVar1 = F_0043bd00(this_00,0x1185,0,0);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,0x1186,0,0);
    F_005a2710(param_2,6);
    uVar3 = 0x118c;
  }
  else {
    if (param_4 == 4) {
      uVar1 = F_0043bd00(this_00,0x1126,0,0);
      F_005a2710(param_1,6);
      uVar3 = 0x1127;
    }
    else {
      if (param_4 - 7U != 0) {
        return param_4 - 7U;
      }
      uVar1 = F_0043bd00(this_00,0x111c,0,0);
      F_005a2710(param_1,6);
      uVar3 = 0x111d;
    }
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,uVar3,0,0);
    F_005a2710(param_2,6);
    uVar3 = 0x118d;
  }
  *(uint *)((int)param_2 + 4) = uVar1;
  uVar1 = F_0043bd00(this_00,uVar3,0,0);
  uVar2 = F_005a2710(param_3,6);
  *(uint *)((int)param_3 + 4) = uVar1;
  return uVar2;
}

/* ref: FUN_007781f0 */
uint F_007781f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7781f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (param_4 == 2) {
    F_005a2710(param_2,3);
    *(undefined4 *)((int)param_2 + 4) = 0;
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    uVar1 = F_00460bd0(this_00,0x11,uVar1);
  }
  else {
    if (param_4 == 4) {
      F_005a2710(param_2,3);
      *(undefined4 *)((int)param_2 + 4) = 1;
      uVar1 = F_005a2710(param_3,6);
      *(undefined * PTR32 *)((int)param_3 + 4) = &REFG(undefined, 0x10be21f);
      return uVar1;
    }
    if (param_4 - 7U != 0) {
      return param_4 - 7U;
    }
    F_005a2710(param_2,3);
    *(undefined4 *)((int)param_2 + 4) = 2;
    uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230),0x17);
    uVar1 = F_00560910(uVar1);
  }
  F_0042e430(param_1,uVar1);
  uVar1 = F_0042a990(param_1);
  uVar2 = F_005a2710(param_3,6);
  *(uint *)((int)param_3 + 4) = uVar1;
  return uVar2;
}

/* ref: FUN_007782c0 */
uint F_007782c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7782c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  this = param_1;
  uVar4 = 0;
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  param_1 = (undefined *)0x0;
  bVar1 = F_00a3bef0(this);
  if (bVar1 != 0) {
    do {
      if (*(char *)((int)this + 6) == '\0') {
LAB_0077830d: ;
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(this);
        if (uVar3 == 0) goto LAB_0077830d;
        uVar3 = uVar4;
        this_00 = (undefined *)F_00a3a860(this);
        uVar2 = F_0071d2c0(this_00,uVar3);
      }
      if (uVar2 == 1) {
        param_1 = (undefined *)((int)param_1 + 1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return (uint)param_1;
}

/* ref: FUN_00778330 */
uint F_00778330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778330u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1);
  uVar4 = 0;
  if (bVar1 != 0) {
    do {
      if (*(char *)((int)param_1 + 6) == '\0') {
LAB_00778379: ;
        uVar2 = *((ushort *)GEN_TOP(((int)param_1 + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(param_1);
        if (uVar3 == 0) goto LAB_00778379;
        uVar3 = uVar4;
        this = (undefined *)F_00a3a860(param_1);
        uVar2 = F_0071d2c0(this,uVar3);
      }
      if (uVar2 == 1) {
        if (param_2 == 0) {
          return uVar4;
        }
        param_2 = param_2 + -1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return 0;
}

/* ref: FUN_007783b0 */
uint F_007783b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7783b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007783e0 */
uint F_007783e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7783e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  uint * puVar6;
  uint uVar7;
  
  this = param_1;
  uVar7 = 0;
  if (param_1 != (undefined *)0x0) {
    param_1 = (undefined *)0x0;
    bVar1 = F_00a3bef0(this);
    if (bVar1 != 0) {
      do {
        if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
          uVar3 = *((ushort *)GEN_TOP(((int)this + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar4 = uVar7;
          pvVar5 = (undefined *)F_00a3a860(this);
          uVar3 = F_0071d2c0(pvVar5,uVar4);
        }
        if (uVar3 == 1) {
          if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
            bVar2 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)this)));
          }
          else {
            uVar4 = uVar7;
            pvVar5 = (undefined *)F_00a3a860(this);
            bVar2 = F_0071d300(pvVar5,uVar4);
          }
          param_1 = (undefined *)((int)param_1 + 1 + (uint)bVar2);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)(uint)bVar1);
    }
    puVar6 = (uint *)F_00ab2140(param_1);
    if (puVar6 != (uint *)0x0) {
      return *puVar6;
    }
  }
  return 0;
}

/* ref: FUN_007784a0 */
uint F_007784a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7784a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  *(undefined4 *)((int)this + 0xc) = 7;
  *(undefined4 *)((int)this + 0x10) = 6;
  *(uint *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return param_1;
}

/* ref: FUN_007784e0 */
unsigned int F_007784e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7784e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    F_00406b30(*(int *)((int)this + 0x5c) + -4);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    F_00406b30(*(int *)((int)this + 0x58) + -4);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    F_00406b30(*(int *)((int)this + 0x54));
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_00406b30(*(int *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  uVar1 = F_00404270();
  uVar2 = F_00406c00(400,0,uVar1,0);
  *(uint *)((int)this + 0x50) = uVar2;
  uVar2 = F_00406c00(400,0,uVar1,0);
  *(uint *)((int)this + 0x54) = uVar2;
  puVar3 = (undefined4 *)F_00406c00(0x324,0,uVar1,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 100;
    puVar3 = puVar3 + 1;
    iVar5 = 99;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      *(undefined2 *)(puVar4 + 1) = 0xffff;
      *(undefined1 *)((int)puVar4 + 6) = 0;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)((int)this + 0x58) = puVar3;
  puVar3 = (undefined4 *)F_00406c00(0x324,0,uVar1,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 100;
    iVar5 = 99;
    puVar3 = puVar4;
    do {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *(undefined1 *)((int)puVar3 + 6) = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)((int)this + 0x5c) = puVar4;
  iVar5 = 0;
  do {
    *((int *)GEN_TOP((*(int *)((int)this + 0x50) + iVar5 * 4))) = *(int *)((int)this + 0x58) + iVar5 * 8;
    *((int *)GEN_TOP((*(int *)((int)this + 0x54) + iVar5 * 4))) = *(int *)((int)this + 0x5c) + iVar5 * 8;
    *((short *)GEN_TOP((*(int *)((int)this + 0x58) + 4 + iVar5 * 8))) = (short)iVar5;
    *((short *)GEN_TOP((*(int *)((int)this + 0x5c) + 4 + iVar5 * 8))) = (short)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 100);
  return 0;
}

/* ref: FUN_00778630 */
uint F_00778630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be31e));
  while( true ) {
    uVar7 = *(undefined4 *)((int)&REFG(undefined4, 0x10c44c8) + uVar4);
    uVar9 = 0;
    uVar8 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar7,uVar8,uVar9);
    F_0042e370(param_2,uVar1);
    uVar4 = uVar4 + 4;
    if (0x1b < uVar4) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c03f8));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    else if (param_3 != 9999) {
      iVar6 = 0;
      piVar5 = &REFG(undefined4, 0x10bd928);
      do {
        iVar3 = 0;
        piVar2 = piVar5;
        do {
          if (*piVar2 == 9999) break;
          if (*piVar2 == param_3) {
            iVar3 = iVar6 + 1;
            if (iVar3 != -1) goto LAB_007786f6;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < 4);
        piVar5 = piVar5 + 4;
        iVar6 = iVar6 + 1;
      } while ((int)piVar5 < 0x10bd998);
    }
  }
  else {
LAB_007786f6: ;
    *(int *)((int)this + 0x20) = iVar3;
  }
  uVar4 = F_0042a990(param_2);
  F_005a2710((undefined *)(param_1 + 0x10),6);
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar7 = *(undefined4 *)((int)this + 0x20);
  uVar4 = F_005a2710((undefined *)(param_1 + 0x18),4);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  return uVar4;
}

/* ref: FUN_00778730 */
unsigned int F_00778730(unsigned int gen_a0)
{
  GEN_ENTER(0x778730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00778760 */
unsigned int F_00778760(unsigned int gen_a0)
{
  GEN_ENTER(0x778760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_00778790 */
uint F_00778790(unsigned int gen_a0)
{
  GEN_ENTER(0x778790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1000];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xff8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xffc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar4 = 0x1fd;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0xff0)),3);
  (*(undefined4 *)(gen_frame + 0xff4)) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x1fe,((undefined4 *)(gen_frame + 0x8)));
  *(undefined1 *)((int)this + 0x90) = 0;
  this_00 = &(*(uint *)(gen_frame + 0xff8));
  iVar4 = 0x1fd;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xff8)) ^ (uint)(uint)(gen_frame + 0xffc));
  return uVar3;
}

/* ref: FUN_00778860 */
uint F_00778860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x778860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,0x116c,0,0);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,0x116d,0,0);
    uVar2 = F_005a2710(param_2,6);
    *(uint *)((int)param_2 + 4) = uVar1;
    return uVar2;
  }
  F_005a2710(param_1,6);
  *(undefined * PTR32 *)((int)param_1 + 4) = &REFG(undefined, 0x10be31f);
  uVar1 = F_005a2710(param_2,6);
  *(undefined * PTR32 *)((int)param_2 + 4) = &REFG(undefined, 0x10be322);
  return uVar1;
}

/* ref: FUN_007788f0 */
uint F_007788f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7788f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * pbVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  pbVar1 = param_1;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 4);
    if (3 < uVar3) {
      return (uint)this_00;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  default: ;
    uVar4 = 0x1169;
    param_1 = (byte *)0x116a;
    break;
  case 1: ;
    uVar4 = 0x1170;
    param_1 = (byte *)0x116a;
    break;
  case 2: ;
    uVar4 = 0x1170;
    param_1 = (byte *)0x1172;
    break;
  case 3: ;
    uVar4 = 0x1174;
    param_1 = (byte *)0x1175;
  }
  uVar3 = F_0043bd00(this_00,uVar4,0,0);
  F_005a2710(pbVar1 + 0x180,6);
  *(uint *)(pbVar1 + 0x184) = uVar3;
  uVar3 = F_0043bd00(this_00,param_1,0,0);
  uVar2 = F_005a2710(pbVar1 + 0x188,6);
  *(uint *)(pbVar1 + 0x18c) = uVar3;
  return uVar2;
}

/* ref: FUN_007789c0 */
uint F_007789c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7789c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) == param_2) {
        return (int)*(char *)(iVar1 + 0x29 + param_1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007789f0 */
uint F_007789f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7789f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)(&REFG(undefined4, 0x10c44e4))[uVar1] <= param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 3;
}

/* ref: FUN_00778a20 */
byte F_00778a20(unsigned int gen_a0)
{
  GEN_ENTER(0x778a20u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 6) == '\0') {
    uVar2 = *(uint *)((int)param_1 + 8);
    if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    this = (undefined *)F_00a3a860(param_1);
    uVar2 = F_0046e5e0(this);
  }
  uVar2 = F_00ab24a0(uVar2);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1);
  return *(byte *)(uVar2 + 0xa5) <= bVar1;
}

/* ref: FUN_00778a90 */
uint F_00778a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(byte *)((int)param_1 + 6) < *(byte *)((int)param_2 + 6);
  if (*(byte *)((int)param_1 + 6) == *(byte *)((int)param_2 + 6)) {
    pvVar1 = (undefined *)*param_1;
    if (*(char *)((int)pvVar1 + 6) == '\0') {
      uVar2 = *(uint *)((int)pvVar1 + 8);
      if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      pvVar1 = (undefined *)F_00a3a860(pvVar1);
      uVar2 = F_0046e5e0(pvVar1);
    }
    pvVar1 = (undefined *)*param_2;
    if (*(char *)((int)pvVar1 + 6) != '\0') {
      pvVar1 = (undefined *)F_00a3a860(pvVar1);
      uVar3 = F_0046e5e0(pvVar1);
      return (uint)(uVar2 < uVar3);
    }
    uVar3 = *(uint *)((int)pvVar1 + 8);
    if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    bVar4 = uVar2 < uVar3;
  }
  return (uint)bVar4;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf3 */
unsigned int F_00778b10(unsigned int gen_a0)
{
  GEN_ENTER(0x778b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined2 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x30))))(*(int * PTR32 *)(this + 4));
    *(byte *)(uVar2 + 0x2c24c) = *(byte *)(uVar2 + 0x2c24c) & 0xbf;
  }
  return 0;
}

/* ref: FUN_00778b60 */
uint F_00778b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x778b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined2 *)((int)this + 0xc) = 1;
  F_0042e430((undefined *)((int)this + 0x14),param_2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: FUN_00778b90 */
unsigned int F_00778b90(unsigned int gen_a0)
{
  GEN_ENTER(0x778b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0xc) = 2;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return 0;
}

/* ref: FUN_00778c80 */
byte F_00778c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
  if ((-1 < param_1) && (param_1 != 0)) {
    if (param_1 == 1) {
      if (*(short *)((int)this + 0xc) == 1) goto LAB_00778cc6;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
      F_0044d7e0(this_00);
    }
    return 0;
  }
LAB_00778cc6: ;
  if (*(int *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(byte *)(uVar1 + 0x2c24c) = *(byte *)(uVar1 + 0x2c24c) & 0xbf;
  return 1;
}

/* ref: FUN_00778d10 */
byte F_00778d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 < 0) || (param_1 == 1)) {
    *(undefined4 *)((int)this + 0x6c) = 2;
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x68) = 0;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x6c) = 1;
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentColorant::vf15 */
uint F_00778d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0xc) != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_00778d80 */
unsigned int F_00778d80(unsigned int gen_a0)
{
  GEN_ENTER(0x778d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00778db0 */
unsigned int F_00778db0(unsigned int gen_a0)
{
  GEN_ENTER(0x778db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x28) = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar2 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x30))));
      if (puVar1 != (undefined4 *)0x0) {
        F_00a3d7c0(&REFG(undefined, 0x14a4230),*puVar1,(uint)*(ushort *)(puVar1 + 1));
        *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x30)))) = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x1e4);
  }
  return 0;
}

/* ref: FUN_00778e00 */
uint F_00778e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be32a));
  while( true ) {
    uVar5 = *(undefined4 *)((int)&REFG(undefined4, 0x10c4500) + uVar4);
    uVar7 = 0;
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
    F_0042e370(param_2,uVar1);
    uVar4 = uVar4 + 4;
    if (0xf < uVar4) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c0450));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    else if (param_3 != 9999) {
      uVar4 = 0;
      do {
        iVar3 = 0;
        piVar2 = &REFG(undefined4, 0x10bd928) + (char)(&REFG(undefined1, 0x10c44fc))[uVar4] * 4;
        do {
          if (*piVar2 == 9999) break;
          if (*piVar2 == param_3) {
            iVar3 = (int)(char)(&REFG(undefined, 0x10c44f4))[(char)(&REFG(undefined1, 0x10c44fc))[uVar4]];
            if (iVar3 != -1) goto LAB_00778ec7;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
  }
  else {
LAB_00778ec7: ;
    *(int *)((int)this + 0x18) = iVar3;
  }
  uVar4 = F_0042a990(param_2);
  F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar4;
  uVar5 = *(undefined4 *)((int)this + 0x18);
  uVar4 = F_005a2710((undefined *)((int)param_1 + 8),4);
  *(undefined4 *)((int)param_1 + 0xc) = uVar5;
  return uVar4;
}

/* ref: FUN_00778f00 */
uint F_00778f00(unsigned int gen_a0)
{
  GEN_ENTER(0x778f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((-1 < (int)param_1) && (param_1 < 8)) {
    return *(uint *)(&REFG(undefined, 0x10c4510) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00778f20 */
uint F_00778f20(unsigned int gen_a0)
{
  GEN_ENTER(0x778f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((-1 < (int)param_1) && (param_1 < 0xb)) {
    return *(uint *)(&REFG(undefined, 0x10c4530) + param_1 * 4);
  }
  return 0xffffffff;
}

/* ref: FUN_00778f50 */
uint F_00778f50(unsigned int gen_a0)
{
  GEN_ENTER(0x778f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x20);
  if ((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0x1c))) {
    return **((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + iVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_00778f70 */
uint F_00778f70(unsigned int gen_a0)
{
  GEN_ENTER(0x778f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x2c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ecx + 0x28))) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x30) + iVar1 * 4)));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf1 */
uint F_00778f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) < 0)) {
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf3 */
unsigned int F_00778fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x778fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (this[0x454] != (undefined1)0x0) {
    this[0x454] = (undefined1)0x0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyRank::vf1 */
uint F_00779010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x779010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  int iVar3;
  undefined1 * this_00;
  
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if ((param_4 == 0) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),2,((undefined4 *)(gen_frame + 0x8)));
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined4 *)(gen_frame + 0x10)),param_2,param_3,0);
    if (((byte)(*(undefined4 *)(gen_frame + 0x10)) & 0xf) == 2) {
      (*(char *)(gen_frame + 0x1b)) = (char)(*(uint *)(gen_frame + 0x14));
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)));
    if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_007790e9;
  }
  if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
LAB_007790e9: ;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00779150 */
uint F_00779150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x779150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int in_ecx;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  F_005a2710(param_1,4);
  *(undefined4 *)((int)param_1 + 4) = 1;
  sVar2 = *(short *)((int)this + 0x24);
  F_005a2710((undefined *)((int)param_1 + 0x10),4);
  *(int *)((int)param_1 + 0x14) = (int)sVar2;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_8 = 0;
  uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  if ((*(short *)((int)this + 0x24) == 2) && (*(char *)((int)this + 0x26) == '\0')) {
    return uVar4;
  }
  local_c = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    local_10 = 0;
    do {
      if (0x121f < local_10) break;
      in_ecx = *(int *)((int)this + 0x10) + local_10;
      if ((((ushort)*((byte *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6e + local_10))) ==
            *(ushort *)((int)this + 0x24)) &&
          (local_8 = local_8 + 1, *(char *)(in_ecx + 0x6f) == '\0')) &&
         ((*(ushort *)((int)this + 0x24) != 2 || (*(int *)(in_ecx + 0x60) != 0)))) {
        uVar1 = *(undefined1 *)(in_ecx + 0x70);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x38)));
        F_005a2710(pvVar5,2);
        *(undefined1 *)((int)pvVar5 + 4) = uVar1;
        uVar6 = *(undefined4 *)(in_ecx + 0x54);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x178)));
        F_005a2710(pvVar5,3);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar4 = F_0042a990(in_ecx);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x2b8)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar4;
        uVar6 = *(undefined4 *)(in_ecx + 0x58);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x3f8)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar6 = *(undefined4 *)(in_ecx + 0x5c);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x538)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar6 = *(undefined4 *)(in_ecx + 0x60);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x678)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar3 = *(ushort *)(in_ecx + 0x6c);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x7b8)));
        F_005a2710(pvVar5,4);
        *(uint *)((int)pvVar5 + 4) = (uint)uVar3;
        uVar6 = *(undefined4 *)(in_ecx + 100);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x8f8)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x74;
    } while (local_c < *(uint *)((int)this + 0x14));
    if (local_8 != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x11ec;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
      F_005a2710((undefined *)((int)param_1 + 0x28),6);
      *(uint *)((int)param_1 + 0x2c) = uVar4;
      goto LAB_007793a7;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0x11fc;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
  F_005a2710((undefined *)((int)param_1 + 0x28),6);
  *(uint *)((int)param_1 + 0x2c) = uVar4;
LAB_007793a7: ;
  uVar6 = *(undefined4 *)((int)this + 0x18);
  uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
  *(undefined4 *)((int)param_1 + 0x1c) = uVar6;
  return uVar4;
}

/* ref: FUN_007793c0 */
byte F_007793c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x7793c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int param_9 = (int)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  int param_11 = (int)gen_a11;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 < *(uint *)((int)this + 0x14)) {
    this_00 = ((undefined *)GEN_TOP((param_1 * 0x74 + *(int *)((int)this + 0x10))));
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    *(undefined2 *)((int)this_00 + 0x6c) = (undefined2)param_8;
    *(undefined4 *)((int)this_00 + 0x58) = param_3;
    *(undefined1 *)((int)this_00 + 0x70) = (undefined1)param_5;
    *(undefined4 *)((int)this_00 + 100) = param_2;
    *(undefined1 *)((int)this_00 + 0x6f) = (undefined1)param_7;
    *(char *)((int)this_00 + 0x6e) = (char)param_6;
    F_0042e430(this_00,param_10);
    iVar1 = param_11;
    if ((char)param_6 != '\x02') {
      if (param_9 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_9 + 62000;
      }
    }
    *(uint *)((int)this_00 + 0x68) = param_1;
    *(int *)((int)this_00 + 0x54) = iVar1;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,1,1,1);
    *(uint *)((int)this_00 + 0x60) = uVar2;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,0,1,1);
    *(int *)((int)this_00 + 0x60) = *(int *)((int)this_00 + 0x60) + uVar2;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf1 */
uint F_007794b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7794b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined1 AVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(char *)(gen_frame + 0x17)) = '\0';
  if ((*param_2 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
  }
  if (iVar5 == 1) {
    if ((param_2[8] & 0xf) == 0) {
      AVar4 = (undefined1)0x0;
    }
    else {
      AVar4 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[0x11] = AVar4;
  }
  else if (iVar5 == 2) {
    if ((param_2[8] & 0xf) == 0) {
      this[0x12] = (undefined1)0xff;
    }
    else {
      this[0x12] = (undefined1)((char)*(undefined4 *)(param_2 + 0xc) + -1);
    }
  }
  else if (iVar5 == 4) {
    ((undefined4 *)(gen_frame + 0x18))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    uVar1 = F_00a3ad50(&REFG(undefined, 0x14a4230),(uint)(byte)this[0x10]);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
    (*(uint *)(gen_frame + 0x64)) = uVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),10,((undefined4 *)(gen_frame + 0x18)));
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 2;
    this_00 = &(*(uint *)(gen_frame + 0x68));
    iVar5 = 9;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)puVar3;
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 == (int *)0x0) {
LAB_007795e7: ;
    if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
      *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 0;
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      goto LAB_00779600;
    }
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((byte *)(gen_frame + 0x8)),param_2,param_3,0);
    if ((((byte *)(gen_frame + 0x8))[0] & 0xf) == 2) {
      (*(char *)(gen_frame + 0x17)) = (*(char *)(gen_frame + 0xc));
    }
    F_005a2670(((byte *)(gen_frame + 0x8)));
    if ((*(char *)(gen_frame + 0x17)) == '\0') goto LAB_007795e7;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 1;
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
LAB_00779600: ;
  *puVar3 = 2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)puVar3;
}

/* ref: FUN_00779620 */
uint F_00779620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x779620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  
  if ((param_1 != 0) && ((char)param_2 != '\0')) {
    *(char *)((int)this + 0x10) = (char)param_2;
    pcVar1 = *(gen_code32 *)(*(int *)this + 8);
    *(int *)((int)this + 0xc) = param_1;
    (*pcVar1)(this);
    return *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf3 */
unsigned int F_00779660(unsigned int gen_a0)
{
  GEN_ENTER(0x779660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00779690 */
uint F_00779690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x779690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),param_2,param_1);
  return uVar2;
}

/* ref: FUN_007796c0 */
byte F_007796c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7796c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00434dd0(param_1);
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf1 */
uint F_007796e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7796e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if (1 < param_4) {
    if ((*(byte *)(param_3 + 8) & 0xf) == 0) {
      *(undefined1 *)(in_ecx + 0x1d) = 0;
      *param_2 = 2;
      *(undefined1 *)(param_2 + 1) = 0;
      return (uint)param_2;
    }
    *(undefined1 *)(in_ecx + 0x1d) = *(undefined1 *)(param_3 + 0xc);
  }
  *param_2 = 2;
  *(undefined1 *)(param_2 + 1) = 0;
  return (uint)param_2;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf2 */
unsigned int F_00779720(void)
{
  GEN_ENTER(0x779720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf3 */
uint F_00779730(unsigned int gen_a0)
{
  GEN_ENTER(0x779730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
  *(undefined4 *)(this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00779760 */
byte F_00779760(unsigned int gen_a0)
{
  GEN_ENTER(0x779760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1d) == '\0';
}

/* ref: FUN_00779770 */
unsigned int F_00779770(unsigned int gen_a0)
{
  GEN_ENTER(0x779770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = 2;
  return 0;
}

