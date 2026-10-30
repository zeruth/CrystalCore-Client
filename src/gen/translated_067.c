#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0076a4e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076a4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  ushort uVar2;
  
  if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
  if ((*(int *)&gen_args[0]) == 0) {
    return;
  }
  if (*((char *)GEN_TOP(((*(int *)&gen_args[0]) + 0xa5))) == '\0') {
    return;
  }
  if ((REFG(undefined1, 0x14b4ec1) & 8) == 0) {
    return;
  }
  bVar1 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  if (bVar1 < 5) {
    uVar2 = F_0071d2c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0);
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = 0;
    if (uVar2 != 1) goto LAB_0076a529;
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = 1;
LAB_0076a529: ;
  F_0076a3e0(this GEN_EDX_ARG,0x12,0x1154,(*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))));
  return;
}

/* ref: FUN_0076a550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76a550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && ((REFG(undefined1, 0x14b4ec1) & 0x40) != 0)) {
    if (*((char *)GEN_TOP((param_1 + 0xba))) != '\0') {
      uVar1 = F_0076a3e0(this GEN_EDX_FWD,0x13,0x1257,0);
      return uVar1;
    }
    if (*((char *)GEN_TOP((param_1 + 0xa0))) == '\x0f') {
      uVar1 = F_0076a3e0(this GEN_EDX_ARG,0x14,0x1257,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076a5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(undefined4 *)(this + 0x244))));
    uVar1 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x248));
      if (((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 6))) == '\0')) && (*((int *)GEN_TOP((uVar1 + 8))) == 0)) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_0076a5f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076a5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x254))),(uint)*((ushort *)GEN_TOP(((int)this + 600)))
                );
  }
  return;
}

/* ref: FUN_0076a650 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076a650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76a650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = ((char *)GEN_TOP(((int)this + 0x1bc)));
  while ((*(int *)(pcVar1 - 8) == 0 || (*pcVar1 == '\0'))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x10;
    if (8 < iVar2) {
      return 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pcVar1 - 8) + 4))))
            (*(int * PTR32 *)(pcVar1 - 8) GEN_EDX_ARG,param_2,param_1,param_3,*(undefined4 *)(pcVar1 - 4));
  return 1;
}

/* ref: Client::UI2::Agent::AgentCloseMessage::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076a6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x76a6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((param_2 != ((byte *)GEN_TOP(0x0))) && (param_3 == 1)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    uVar2 = 0;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_004246b0(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD,0);
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      uVar2 = 1;
    default: ;
      *(undefined4 *)(this + 8) = 0;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076a760 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076a760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76a760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      uVar1 = F_00ac3430(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar2);
      if (param_1 == uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
  }
  return 0xffffffff;
}

/* ref: FUN_0076a7a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076a7a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76a7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 1;
  default: ;
    return 0;
  case 2: ;
    return 9;
  case 3: ;
    return 5;
  case 4: ;
    return 6;
  case 5: ;
    return 7;
  case 6: ;
    return 8;
  case 7: ;
    return 0xb;
  case 8: ;
    return 0xd;
  }
}

/* ref: FUN_0076a830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76a830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (uVar1 == param_1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0076a850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076a850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76a850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((param_2 * 0xa28 + 0x7c + (int)this)));
  iVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x1a;
  } while (iVar1 < 0x19);
  return 0;
}

/* ref: FUN_0076a880 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0076a880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
  if ((char)uVar2 != '\0') {
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x8e54))) = 1;
  return 0;
}

/* ref: FUN_0076a8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076a8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0x26);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,0x23);
  uVar7 = uVar6;
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (**((int * PTR32 *)GEN_TOP((uVar5 + 0x20))) != *((int *)GEN_TOP(((int)this + 0x10)))) {
      **((int * PTR32 *)GEN_TOP((uVar5 + 0x20))) = *((int *)GEN_TOP(((int)this + 0x10)));
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar7 = F_00434e60(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    pvVar8 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar7)));
    local_c = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) * 0xa28 + 0x89 + (int)this)));
    if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
      iVar2 = *((int *)GEN_TOP(((int)pvVar8 + 0xc)));
      local_10 = 0;
      if (0 < iVar2) {
        local_1c = 0x40;
        do {
          if (0x18 < local_10) break;
          iVar1 = (*((int *)GEN_TOP(((int)this + 0x10))) * 0x19 + local_10) * 8;
          uVar7 = 0;
          local_18 = 0;
          bVar10 = false;
          local_14 = 0;
          this_00 = ((undefined *)GEN_TOP(F_00a37da0(pvVar8 GEN_EDX_ARG,local_10)));
          if ((this_00 != ((undefined *)GEN_TOP(0x0))) &&
             ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
            uVar7 = F_00a37c50(this_00 GEN_EDX_ARG);
            uVar7 = (uint)(uVar7 != 0);
            F_0046e5e0(this_00 GEN_EDX_ARG);
            local_18 = F_00760640(local_c[-1],this_00,*(undefined4 *)(local_c - 5));
            bVar10 = *local_c != '\0';
            if (bVar10) {
              bVar3 = F_00760e50(local_c - 0x65 GEN_EDX_ARG,this_00);
              local_14 = F_00760700(bVar3);
            }
          }
          uVar9 = (uint)bVar10 | local_14 * 2;
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8 + local_1c))) != uVar9) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8 + local_1c))) = uVar9;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 8 + local_1c))) != *(int *)(local_c - 9)) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 8 + local_1c))) = *(int *)(local_c - 9);
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_1c))) != (uint)(byte)local_c[-1]) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_1c))) = (uint)(byte)local_c[-1];
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          uVar7 = local_18 & 0xff |
                  ((uint)CONCAT11(*((char *)GEN_TOP(((int)this + iVar1 + 0x8431))) != '\0',
                                  *((undefined1 *)GEN_TOP(((int)this + iVar1 + 0x8430)))) << 8 | uVar7) << 8;
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4 + local_1c))) != uVar7) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4 + local_1c))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          uVar7 = F_0042a990(local_c - 0x61 GEN_EDX_ARG);
          if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_10 * 4)))) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_10 * 4))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
          }
          local_c = local_c + 0x68;
          local_1c = local_1c + 0x14;
          local_10 = local_10 + 1;
        } while (local_10 < iVar2);
      }
    }
    uVar11 = *(undefined4 *)(&REFG(undefined, 0x10bfc6c) + *((int *)GEN_TOP(((int)this + 0x10))) * 4);
    uVar13 = 0;
    uVar12 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_0043bd00(pvVar8 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 100)))) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 100))) = uVar7;
  }
  return uVar7;
}

/* ref: FUN_0076ab00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076ab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ab00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x26);
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_00434e60(local_8);
      this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        iVar1 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
        iVar5 = 0;
        iVar6 = 0;
        if (0 < iVar1) {
          do {
            uVar4 = F_00a37da0(this_00 GEN_EDX_ARG,iVar6);
            if ((uVar4 != 0) && ((*((char *)GEN_TOP((uVar4 + 6))) != '\0' || (*((int *)GEN_TOP((uVar4 + 8))) != 0)))) {
              iVar5 = iVar5 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + local_8 * 4))) != iVar5) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + local_8 * 4))) = iVar5;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 0xd);
  }
  return 0;
}

/* ref: FUN_0076abb0 */
GEN_OWN GEN_FRAME uint F_0076abb0(void)
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
    this = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar2)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = F_00a37da0(this GEN_EDX_ARG,iVar3);
          if ((uVar2 != 0) && ((*((char *)GEN_TOP((uVar2 + 6))) != '\0' || (*((int *)GEN_TOP((uVar2 + 8))) != 0)))) {
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076ac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76ac20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xf) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    F_0076a8b0(this GEN_EDX_FWD);
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  F_0076a8b0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0076ac50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076ac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76ac50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  }
  uVar1 = F_00434e60(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  puVar2 = ((undefined4 *)GEN_TOP(F_00a37180(&REFG(undefined, 0x14a4230) GEN_EDX_ARG)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1,uVar3,*puVar2,(uint)*(ushort *)(puVar2 + 1),1);
    F_0076a8b0(this GEN_EDX_ARG);
    return 0;
  }
  uVar3 = 0x2eb;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  F_0046a630(this_00 GEN_EDX_ARG,uVar3);
  F_0076a8b0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0076ace0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076ace0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x76ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
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
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x14))))) {
  case 3: ;
    bVar1 = F_00a3c930(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *((bool *)GEN_TOP(((int)param_1 + 5))) = bVar1 == 0;
    return CONCAT31(extraout_var,bVar1 == 0);
  case 4: ;
  case 5: ;
    bVar1 = F_00a3c8c0(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *((bool *)GEN_TOP(((int)param_1 + 5))) = bVar1 == 0;
    return CONCAT31(extraout_var_00,bVar1 == 0);
  default: ;
    goto switchD_0076ad41_caseD_6;
  case 7: ;
    uVar2 = F_00a3e8f0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,param_4);
    break;
  case 9: ;
    uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,param_4);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0);
switchD_0076ad41_caseD_6: ;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *((char *)GEN_TOP(((int)param_1 + 5))) = (char)uVar2;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076adf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76adf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (0 < *(int *)(this + 0x70)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x70),0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return;
}

/* ref: FUN_0076ae50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076ae50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ae50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  undefined * this_01;
  undefined4 * puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar3 = F_0043d880(uVar3 GEN_EDX_ARG);
  if ((int)uVar3 < 6) {
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      uVar3 = F_0043d8f0(uVar3 GEN_EDX_ARG);
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar3);
      uVar4 = (uint)(**((char * PTR32 *)GEN_TOP(((int)this + 0x1c))) != '\0');
      uVar3 = F_0042a990((int)this + 0x1c GEN_EDX_ARG);
      uVar3 = F_00461270(this_00 GEN_EDX_ARG,0x29a,uVar3,uVar4);
      return uVar3;
    case 1: ;
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x28d,0,0);
      return uVar3;
    case 2: ;
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x28e,0,0);
      return uVar3;
    case 3: ;
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x287,0,0);
      return uVar3;
    case 4: ;
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x285,0,0);
      return uVar3;
    case 5: ;
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x286,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_004351d0();
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    if (bVar2 == 0) {
      uVar7 = 2;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
      this_01 = ((undefined *)GEN_TOP(F_00435440(uVar4 GEN_EDX_ARG,uVar7)));
      if ((this_01 != ((undefined *)GEN_TOP(0x0))) &&
         (puVar5 = ((undefined4 *)GEN_TOP(F_00439130(this_01 GEN_EDX_ARG,uVar3 - 6))), puVar5 != ((undefined4 *)GEN_TOP(0x0)))) {
        uVar4 = F_00439390(this_01 GEN_EDX_ARG,*puVar5,puVar5[1]);
        uVar3 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar3 - 5,uVar4);
        return uVar3;
      }
    }
    else {
      uVar7 = 0xf;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
      uVar4 = F_00435440(uVar4 GEN_EDX_ARG,uVar7);
      if (uVar4 != 0) {
        uVar6 = (undefined1)(uVar3 - 6);
        bVar2 = F_0043a050(uVar4 GEN_EDX_ARG,uVar6);
        if (bVar2 != 0) {
          uVar4 = F_0043a0b0(uVar4 GEN_EDX_ARG,uVar6);
          uVar3 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar3 - 5,uVar4);
          return uVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0076afe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076afe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76afe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x338))) = uVar2;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_1));
}

/* ref: FUN_0076b020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76b020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (0 < *((int *)GEN_TOP(((int)this + 0x70)))) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x70))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 - 2;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  return uVar1;
}

/* ref: FUN_0076b150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 - 2;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  return uVar1;
}

/* ref: FUN_0076b230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xac)) = 2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_0076b310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined * this_01;
  uint * puVar7;
  undefined4 uVar8;
  undefined * local_8;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  bVar1 = F_004351d0();
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (bVar1 == 0) {
    uVar8 = 2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x44))))(piVar5 GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00435440(uVar2 GEN_EDX_ARG,uVar8)));
    uVar2 = 0;
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      uVar4 = 0;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x18))))(piVar5 GEN_EDX_ARG);
      uVar2 = 0;
      if (uVar3 != 0) {
        local_8 = ((undefined *)GEN_TOP(((int)this + 0x78)));
        puVar7 = ((uint *)GEN_TOP(((int)this + 0x318)));
        do {
          piVar6 = ((int *)GEN_TOP(F_00439130(piVar5 GEN_EDX_ARG,uVar4)));
          if (((piVar6 != ((int *)GEN_TOP(0x0))) && (*piVar6 != 0 || piVar6[1] != 0)) &&
             ((piVar6[4] & 0x700U) != 0x400)) {
            *puVar7 = uVar4;
            uVar2 = F_00439390(piVar5 GEN_EDX_ARG,*piVar6,piVar6[1]);
            uVar2 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar4 + 1,uVar2);
            F_0042e430(local_8 GEN_EDX_ARG,uVar2);
            puVar7 = puVar7 + 1;
            local_8 = ((undefined *)GEN_TOP(((int)local_8 + 0x54)));
          }
          uVar4 = uVar4 + 1;
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x18))))(piVar5 GEN_EDX_ARG);
        } while (uVar4 < uVar2);
      }
    }
  }
  else {
    uVar8 = 0xf;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x44))))(piVar5 GEN_EDX_ARG);
    uVar3 = F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      this_01 = ((undefined *)GEN_TOP(((int)this + 0x78)));
      puVar7 = ((uint *)GEN_TOP(((int)this + 0x318)));
      do {
        bVar1 = F_0043a050(uVar3 GEN_EDX_ARG,(char)uVar2);
        uVar4 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          *puVar7 = uVar2;
          uVar4 = F_0043a0b0(uVar3 GEN_EDX_ARG,(char)uVar2);
          uVar4 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar2 + 1,uVar4);
          uVar4 = F_0042e430(this_01 GEN_EDX_ARG,uVar4);
          puVar7 = puVar7 + 1;
          this_01 = ((undefined *)GEN_TOP(((int)this_01 + 0x54)));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      return uVar4;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b450 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76b450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined * PTR32 * ppuVar6;
  
  if (7 < param_1) {
    return;
  }
  bVar2 = F_004351d0();
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (bVar2 == 0) {
    uVar5 = 2;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
    uVar3 = F_00435440(uVar3 GEN_EDX_ARG,uVar5);
    if (uVar3 == 0) {
      return;
    }
    uVar4 = F_00439130(uVar3 GEN_EDX_ARG,param_1);
    if (uVar4 == 0) {
      return;
    }
    F_00444aa0(uVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 8))),*((undefined4 *)GEN_TOP((uVar4 + 0xc))),1);
  }
  else {
    uVar5 = 0xf;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
    uVar3 = F_00435440(uVar3 GEN_EDX_ARG,uVar5);
    if (uVar3 == 0) {
      return;
    }
    bVar2 = F_0043a050(uVar3 GEN_EDX_ARG,(char)param_1);
    if (bVar2 == 0) {
      return;
    }
    F_0043a140(uVar3 GEN_EDX_ARG,(char)param_1);
  }
  ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
  uVar5 = 6;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  F_004485a0(this_00 GEN_EDX_ARG,uVar5,param_1,ppuVar6);
  return;
}

/* ref: FUN_0076b4f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076b4f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76b4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x33c)));
  if (bVar1 != param_2) {
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      puVar2 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 7;
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0xac)) = (uint)(param_2 != 0);
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
      this = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this = this - 2;
        F_005a2670(this GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
    *((byte *)GEN_TOP((param_1 + 0x33c))) = param_2;
    bVar1 = param_2;
  }
  return bVar1;
}

/* ref: FUN_0076b5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76b5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 6;
    F_005a2710(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xb4)) = param_1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_0076b670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x76b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  
  if ((param_3 & 0x1d83040) == 0) {
    if ((param_3 & 0x18010) != 0) {
      uVar2 = param_4;
      if ((param_3 & 0x10000) == 0) {
        uVar3 = F_00760440(param_5);
        pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar3)));
        if ((pvVar4 != ((undefined *)GEN_TOP(0x0))) &&
           (pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,param_4))), pvVar4 != ((undefined *)GEN_TOP(0x0)))) {
          uVar2 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
        }
      }
      uVar3 = F_00ab24a0(uVar2);
      if (uVar3 != 0) {
        uVar2 = F_00ab6240(uVar2,0,uVar3);
        F_0042e430(param_1 GEN_EDX_ARG,uVar2);
        pvVar4 = param_1;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
        this_00 = ((undefined *)GEN_TOP(F_0043bef0(uVar2 GEN_EDX_ARG)));
        F_00a21e20(this_00 GEN_EDX_ARG,pvVar4);
      }
    }
  }
  else {
    if ((param_3 & 0x40) == 0) {
      if ((param_3 & 0x2000) == 0) {
        if ((param_3 & 0x80000) == 0) {
          if ((param_3 & 0x100000) == 0) {
            if ((param_3 & 0x400000) == 0) {
              if ((param_3 & 0x1000) == 0) {
                if ((param_3 & 0x800000) == 0) {
                  if ((param_3 & 0x1000000) == 0) goto LAB_0076b7c8;
                  puVar1 = ((uint *)GEN_TOP(F_00ab2840(param_4)));
                }
                else {
                  puVar1 = ((uint *)GEN_TOP(F_00ab2d50(param_4)));
                }
              }
              else {
                puVar1 = ((uint *)GEN_TOP(F_00ab1f00(param_4)));
              }
            }
            else {
              puVar1 = ((uint *)GEN_TOP(F_00ab2870(param_4)));
            }
          }
          else {
            puVar1 = ((uint *)GEN_TOP(F_00ab2cf0(param_4)));
          }
        }
        else {
          puVar1 = ((uint *)GEN_TOP(F_00ab2c30(param_4)));
        }
      }
      else {
        puVar1 = ((uint *)GEN_TOP(F_00ab1f30(param_4)));
      }
    }
    else {
      puVar1 = ((uint *)GEN_TOP(F_00ab1ed0(param_4)));
    }
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      F_0042e430(param_1 GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
      uVar2 = F_0042ccf0(param_2 GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
LAB_0076b7c8: ;
  uVar2 = F_0042ccf0(param_2 GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0076b7e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x90))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x90))));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x90)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
    }
  }
  iVar3 = 3;
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x624)));
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 100)));
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x494)));
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 100)));
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x2a0)));
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 100)));
    uVar5 = F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return (uint)uVar5;
}

/* ref: FUN_0076b890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076b890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_FWD);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x298)));
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_ARG);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x48c)));
  local_8 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_ARG);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x64c))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x614))),0,0x38);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x90)));
  if (uVar2 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,uVar2);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x90)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b990 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076b990(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x76b990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[2] = 0;
  uVar1 = F_0042e430(param_1 + 4 GEN_EDX_ARG,param_5);
  return uVar1;
}

/* ref: FUN_0076b9c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076b9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x76b9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_5 = (uint)param_1;
  return (uint)param_1;
}

/* ref: FUN_0076b9e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0076b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  F_0042b630(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
  uVar2 = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x614)));
    do {
      (*(int *)(gen_frame + 0x4)) = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar2 * 4))) + 4)));
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + 0xc))) + (*(int *)(gen_frame + 0x8))))),
                   ((undefined1 *)(gen_frame + 0xc)));
      F_0042ccf0(((undefined *)GEN_TOP((*piVar3 + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
      iVar1 = *piVar3;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x10;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      *((uint *)GEN_TOP((iVar1 + 0xc))) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x7c)));
    } while (uVar2 < param_2);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 4))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,0,*((undefined4 *)GEN_TOP(((int)this + 0x98))));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_0076bac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076bac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76bac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int local_8;
  
  if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
    uVar3 = 0;
    puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    local_8 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((param_2 + 0x7c)));
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 - 0xb GEN_EDX_FWD,4);
      puVar4[-10] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 - 1 GEN_EDX_ARG,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 9 GEN_EDX_ARG,4);
      puVar4[10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x1d GEN_EDX_ARG,4);
      puVar4[0x1e] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2 GEN_EDX_ARG);
      F_005a2710(puVar4 + 0x27 GEN_EDX_ARG,6);
      local_8 = local_8 + 1;
      puVar4[0x28] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710(((undefined *)GEN_TOP((param_2 + 0x48))) GEN_EDX_ARG,4);
    uVar3 = 0;
    *((int *)GEN_TOP((param_2 + 0x4c))) = local_8;
    puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x298)));
    local_8 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((param_2 + 0x174)));
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = *puVar5;
      F_005a2710(puVar4 - 0xb GEN_EDX_ARG,4);
      puVar4[-10] = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 - 1 GEN_EDX_ARG,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[-0x7e];
      F_005a2710(puVar4 + 9 GEN_EDX_ARG,4);
      puVar4[10] = uVar1;
      uVar2 = F_0042a990(puVar5 - 0x7b GEN_EDX_ARG);
      F_005a2710(puVar4 + 0x13 GEN_EDX_ARG,6);
      local_8 = local_8 + 1;
      puVar4[0x14] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710(((undefined *)GEN_TOP((param_2 + 0x140))) GEN_EDX_ARG,4);
    uVar3 = 0;
    *((int *)GEN_TOP((param_2 + 0x144))) = local_8;
    puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x48c)));
    local_8 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((param_2 + 0x21c)));
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 - 9 GEN_EDX_ARG,4);
      puVar4[-8] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 - 1 GEN_EDX_ARG,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 0xf GEN_EDX_ARG,4);
      puVar4[0x10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x17 GEN_EDX_ARG,4);
      puVar4[0x18] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2 GEN_EDX_ARG);
      F_005a2710(puVar4 + 7 GEN_EDX_ARG,6);
      local_8 = local_8 + 1;
      puVar4[8] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 4);
    F_005a2710(((undefined *)GEN_TOP((param_2 + 0x1e8))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP((param_2 + 0x1ec))) = local_8;
  }
  return;
}

/* ref: FUN_0076bd10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76bd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xb97c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb96e))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb954))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xb954))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xb954))) = 0;
  }
  return;
}

/* ref: FUN_0076bd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076bd60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76bd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_2 != '\0') {
    uVar4 = 0x381;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_FWD)));
    uVar3 = F_0046a630(pvVar2 GEN_EDX_ARG,uVar4);
    return uVar3;
  }
  uVar4 = 0x380;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
  uVar3 = F_0046a630(pvVar2 GEN_EDX_ARG,uVar4);
  return uVar3;
}

/* ref: FUN_0076bda0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076bda0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x76bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *((undefined4 *)GEN_TOP((param_1 + 0x9680))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x9684))) = param_3;
  *((byte *)GEN_TOP((param_1 + 0x9698))) = param_4;
  return param_4;
}

/* ref: FUN_0076bdd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76bdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((REFG(int, 0x1379694) == 0) || (*((char *)GEN_TOP(((int)this + 0xb971))) == '\x01')) {
    return 0x40;
  }
  if (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\x02') {
    return 0x80;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0x100;
  }
  if (1 < REFG(undefined1, 0x1338ad4)) {
    bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
    if (bVar1 == 0) {
      return 0x200;
    }
  }
  return -(uint)(REFG(char, 0x14ab0d0) != '\0') & 0x400;
}

/* ref: FUN_0076be40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076be40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76be40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((REFG(int, 0x1379694) == 0) || (REFG(char, 0x14ab070) == '\0')) {
    return 5;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x9680))) != (uint)REFG(undefined1, 0x14ab0d4)) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x9684))) != 0) {
    return 2;
  }
  if (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\x02') {
    return 3;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 4;
  }
  return 0;
}

/* ref: FUN_0076beb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076beb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76beb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = ((short *)GEN_TOP(((int)this + 0x96a2)));
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
      psVar2 = ((short *)GEN_TOP(((int)this + uVar1 * 10 + 0x96a2)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076bf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76bf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  psVar2 = ((short *)GEN_TOP(((int)this + 0x96a2)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076bf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76bf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xb974))) == '\x02') {
    psVar2 = ((short *)GEN_TOP(((int)this + 0x760)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076bfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xb974))) == '\x02') {
    puVar2 = ((ushort *)GEN_TOP(((int)this + 0x764)));
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076c020(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = param_1;
  do {
    piVar1 = &REFG(undefined4, 0x10bfcdc) + uVar3;
    iVar2 = (&REFG(undefined4, 0x10bfcc8))[(int)(uVar3)];
    if (uVar4 < (uint)(*piVar1 - iVar2)) {
      return iVar2 + uVar4;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + (iVar2 - *piVar1);
  } while (uVar3 < 5);
  return 0;
}

/* ref: FUN_0076c060 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76c060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xb950))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xb950))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xb950))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_0076c0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  if (*((ushort * PTR32 *)GEN_TOP(((int)this + 0x968c))) != ((ushort *)GEN_TOP(0x0))) {
    uVar2 = F_0076bf70(this GEN_EDX_FWD,(uint)**((ushort * PTR32 *)GEN_TOP(((int)this + 0x968c))));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = F_0042a990(uVar2 + 0x54 GEN_EDX_ARG);
      F_005a2710(param_1 GEN_EDX_ARG,8);
      *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar3;
      uVar3 = 0;
      puVar4 = ((uint *)GEN_TOP(((int)param_1 + 0x24)));
      do {
        bVar1 = *((byte *)GEN_TOP(((int)this + uVar3 + 0x969c)));
        F_005a2710(puVar4 - 7 GEN_EDX_ARG,4);
        puVar4[-6] = (uint)bVar1;
        bVar1 = *((byte *)GEN_TOP((uVar2 + 0x112 + uVar3)));
        F_005a2710(puVar4 - 1 GEN_EDX_ARG,4);
        *puVar4 = (uint)bVar1;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar3 < 3);
      bVar1 = *((byte *)GEN_TOP(((int)this + 0x96a0)));
      uVar3 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x38))) GEN_EDX_ARG,4);
      *((uint *)GEN_TOP(((int)param_1 + 0x3c))) = (uint)bVar1;
    }
  }
  return uVar3;
}

/* ref: FUN_0076c1a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0076c1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76c1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0xb96c))) != '\0';
}

/* ref: FUN_0076c230 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076c230(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x36);
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
  if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != iVar5) {
    **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = iVar5;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  if (((char)param_1 == '\0') &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG), (char)uVar2 == '\0')) {
    return uVar2;
  }
  uVar2 = F_00ab21a0(uVar6);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar3 = F_00a68280(&REFG(char, 0x14ab070) GEN_EDX_ARG,0xffffffff,0);
  uVar3 = uVar3 & 0xffff;
  uVar7 = 0x9c6;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
  uVar3 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar7,uVar3);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9cbc))) GEN_EDX_ARG,uVar3);
  iVar5 = 3;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((uVar2 + 0x3f))))) {
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
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
    goto LAB_0076c358;
  }
  uVar7 = (&REFG(undefined4, 0x10c4414))[(int)(iVar5)];
  uVar9 = 0;
  uVar8 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar7,uVar8,uVar9);
LAB_0076c358: ;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9d10))) GEN_EDX_ARG,uVar2);
  if (uVar6 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = uVar6 + 0xf294;
  }
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x9f70))) GEN_EDX_ARG,4);
  *((int *)GEN_TOP(((int)this + 0x9f74))) = param_1;
  uVar2 = F_0042a990((int)this + 0x9cbc GEN_EDX_ARG);
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x9f68))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x9f6c))) = uVar2;
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x9f80))) GEN_EDX_ARG,4);
  *((int *)GEN_TOP(((int)this + 0x9f84))) = iVar5;
  uVar2 = F_0042a990((int)this + 0x9d10 GEN_EDX_ARG);
  uVar6 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x9f88))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x9f8c))) = uVar2;
  return uVar6;
}

/* ref: FUN_0076c420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0076bf70(this GEN_EDX_FWD,param_1);
  if (*((char *)GEN_TOP((uVar2 + 0x115))) == '\x03') {
    bVar1 = F_00a71170(&REFG(undefined, 0x14b4e6c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar2 + 0x108))));
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_0076b890(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0076c480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if ((param_1 & 1 << GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1)) != 0) {
      uVar2 = uVar1;
      if (10 < uVar1) {
        return param_1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xb);
  iVar3 = (&REFG(undefined4, 0x10c4420))[(int)(uVar2)];
  uVar2 = 0;
  if (iVar3 != 0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = F_0046a630(this_00 GEN_EDX_ARG,iVar3);
  }
  return uVar2;
}

/* ref: FUN_0076c4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x9680))) == 0) {
    *((undefined2 *)GEN_TOP((param_1 + 2))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 4))) = 0;
    return 0;
  }
  uVar1 = F_00ab21a0(*((int *)GEN_TOP(((int)this + 0x9680))));
  iVar2 = 3;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((uVar1 + 0x3f))))) {
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
  *((bool *)GEN_TOP((param_1 + 2))) = iVar2 == 0;
  *((bool *)GEN_TOP((param_1 + 3))) = iVar2 == 1;
  *((bool *)GEN_TOP((param_1 + 4))) = iVar2 == 2;
  return param_1;
}

/* ref: FUN_0076c550 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076c550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 != 5;
}

/* ref: FUN_0076c560 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076c560(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 == 5;
}

/* ref: FUN_0076c570 */
GEN_OWN GEN_FRAME uint F_0076c570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((ushort *)GEN_TOP((param_1 + 0x10c))) < *((ushort *)GEN_TOP((param_2 + 0x10c))));
}

/* ref: FUN_0076c590 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076c590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76c590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = -(param_2 != '\0') & 3;
  *((byte *)GEN_TOP((in_ecx + 0x969f))) = bVar1;
  return bVar1;
}

/* ref: FUN_0076c5b0 */
GEN_OWN GEN_FRAME uint F_0076c5b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x76c5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  int * piVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00a39b80()));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_00460bd0(this GEN_EDX_ARG,0x9d1,param_2);
  F_0042e430(param_1 GEN_EDX_ARG,uVar2);
  if ((param_7 & 0x10) != 0) {
    if (*((char *)GEN_TOP(*param_8)) != '\0') {
      F_0042d540(param_8 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8 GEN_EDX_ARG,uVar2);
  }
  uVar2 = F_00460bd0(this GEN_EDX_ARG,0x9d2,param_3);
  F_0042d540(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
  F_0042d540(param_1 GEN_EDX_ARG,uVar2);
  if ((param_7 & 4) != 0) {
    if (*((char *)GEN_TOP(*param_8)) != '\0') {
      F_0042d540(param_8 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8 GEN_EDX_ARG,uVar2);
  }
  uVar2 = param_4;
  if (0x13 < param_4) {
    uVar2 = 0x14;
  }
  if (uVar2 == param_5) {
    if (uVar2 < 0x14) {
      uVar2 = F_00460bd0(this GEN_EDX_ARG,0xa09,param_5);
    }
    else {
      uVar2 = F_00460bd0(this GEN_EDX_ARG,0xa08,param_5);
    }
  }
  else if (uVar2 < 0x14) {
    uVar2 = F_00460c80(this GEN_EDX_ARG,0x9d3,param_5,uVar2);
  }
  else {
    uVar2 = F_00460bd0(this GEN_EDX_ARG,0x9f2,param_5);
  }
  if (uVar2 != 0) {
    F_0042d540(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
    F_0042d540(param_1 GEN_EDX_ARG,uVar2);
    if ((param_7 & 2) != 0) {
      if (*((char *)GEN_TOP(*param_8)) != '\0') {
        F_0042d540(param_8 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
      }
      F_0042d540(param_8 GEN_EDX_ARG,uVar2);
    }
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar3 = F_00460bd0(this GEN_EDX_ARG,0x9d4,param_6);
    uVar2 = 0;
    if (uVar3 != 0) {
      F_0042d540(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
      uVar2 = F_0042d540(param_1 GEN_EDX_ARG,uVar3);
      if ((param_7 & 8) != 0) {
        if (*((char *)GEN_TOP(*param_8)) != '\0') {
          F_0042d540(param_8 GEN_EDX_ARG,&REFG(undefined, 0x10bfd10));
        }
        uVar2 = F_0042d540(param_8 GEN_EDX_ARG,uVar3);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x76c740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076c760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76c760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0xc] = (undefined1)0x0;
  return;
}

/* ref: FUN_0076c790 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076c790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  if (param_1 != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,param_1,0);
    *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return;
}

/* ref: FUN_0076c7c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076c7c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76c840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,((char *)REFP(0x10bfd30)));
    *(uint *)(this + 0xc) = uVar2;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentAchievement::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076c870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76c870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 3) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
    *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  }
  return;
}

/* ref: FUN_0076c890 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0076c890(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  for (uVar2 = 0; (uVar1 < 0x32c && (F_00ab2050(uVar1), uVar2 <= param_2)); uVar2 = uVar2 + 1) {
    uVar1 = uVar1 + 1;
  }
  return;
}

/* ref: FUN_0076c8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76c8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((int)this + *param_1 * 8 + 0x898)));
  F_005a2710(pvVar1 GEN_EDX_FWD,8);
  *((undefined4 *)GEN_TOP(((int)pvVar1 + 4))) = param_2;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + *param_1 * 8 + 0x8a0)));
  F_005a2710(pvVar1 GEN_EDX_ARG,4);
  *((uint *)GEN_TOP(((int)pvVar1 + 4))) = param_3;
  *param_1 = *param_1 + 2;
  return param_3;
}

/* ref: FUN_0076c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x76c920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP((param_1 + 0x898 + *param_2 * 8)));
  F_005a2710(pvVar1 GEN_EDX_FWD,4);
  *((uint *)GEN_TOP(((int)pvVar1 + 4))) = (uint)(param_3 != '\0');
  pvVar1 = ((undefined *)GEN_TOP((param_1 + 0x8a0 + *param_2 * 8)));
  F_005a2710(pvVar1 GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)pvVar1 + 4))) = param_4;
  *param_2 = *param_2 + 2;
  return param_4;
}

/* ref: FUN_0076c970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076c970(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76c970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  if (param_2 != '\0') {
    *((undefined1 *)GEN_TOP((param_1 + 0x30))) = 0;
  }
  uVar1 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_00a6b0b0(&REFG(undefined, 0x14ab464) GEN_EDX_ARG);
    if (uVar1 != 2) {
      F_00a6b020(&REFG(undefined, 0x14ab464) GEN_EDX_ARG);
      return 1;
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0076c9d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076c9d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76c9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_00a6b040(&REFG(undefined, 0x14ab464) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0076ca00 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076ca00(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76ca00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_00a6b160(&REFG(undefined, 0x14ab464) GEN_EDX_ARG);
    if (uVar1 == 2) {
      uVar1 = F_00a6b180(&REFG(undefined, 0x14ab464) GEN_EDX_ARG);
      *param_1 = uVar1;
      uVar1 = F_00a6b190(&REFG(undefined, 0x14ab464) GEN_EDX_ARG);
      *param_2 = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0076ca50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076ca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ca50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  if (*((char *)GEN_TOP(((int)this + 0x464))) == '\0') {
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x7d9,0,0);
  }
  else {
    uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,0x12,*((undefined4 *)GEN_TOP(((int)this + 0x468))));
  }
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x410))) GEN_EDX_ARG,uVar1);
  uVar1 = F_0042a990(((undefined *)GEN_TOP(((int)this + 0x410))) GEN_EDX_ARG);
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x898))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x89c))) = uVar1;
  uVar1 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1070))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x1074))) = 5;
  return uVar1;
}

/* ref: FUN_0076cad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76cad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*((char *)GEN_TOP(((int)this + 0x3b4))) == '\0') {
    uVar2 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cb0))) GEN_EDX_FWD,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x2cb4))) = 0;
    return uVar2;
  }
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cb0))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2cb4))) = 1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x3b0)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x3ac)));
  F_0042aca0((int)this + 0x2db0 GEN_EDX_ARG);
  uVar5 = 0x12;
  uVar4 = uVar2;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar5,uVar4);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x2db0))) GEN_EDX_ARG,uVar4);
  F_0042e370(((undefined *)GEN_TOP(((int)this + 0x2db0))) GEN_EDX_ARG,&REFG(undefined, 0x10bfd3c));
  uVar6 = 0x12;
  uVar5 = uVar1;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar6,uVar5);
  F_0042e370(((undefined *)GEN_TOP(((int)this + 0x2db0))) GEN_EDX_ARG,uVar4);
  uVar4 = F_0042a990((int)this + 0x2db0 GEN_EDX_ARG);
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cb8))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x2cbc))) = uVar4;
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cc0))) GEN_EDX_ARG,4);
  uVar2 = F_0046e6b0(uVar2,uVar1);
  *((uint *)GEN_TOP(((int)this + 0x2cc4))) = uVar2;
  return uVar2;
}

/* ref: FUN_0076cbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076cbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76cbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint * puVar5;
  int in_ecx;
  uint local_8;
  
  bVar4 = *((byte *)GEN_TOP(((int)this + 0x46)));
  if (9 < bVar4) {
    bVar4 = 10;
  }
  if ((*((char *)GEN_TOP(((int)this + 0x3b5))) == '\0') || (bVar4 == 0)) {
    local_8 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cc8))) GEN_EDX_FWD,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x2ccc))) = 0;
  }
  else {
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2cc8))) GEN_EDX_ARG,4);
    local_8 = (uint)bVar4;
    *((uint *)GEN_TOP(((int)this + 0x2ccc))) = local_8;
    if (bVar4 != 0) {
      puVar5 = ((uint *)GEN_TOP(((int)this + 0x2cdc)));
      in_ecx = (int)this + 0x54;
      do {
        cVar1 = *((char *)GEN_TOP((in_ecx - 4)));
        F_005a2710(puVar5 - 3 GEN_EDX_ARG,4);
        puVar5[-2] = (uint)(cVar1 != '\0');
        uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
        uVar3 = F_005a2710(puVar5 - 1 GEN_EDX_ARG,8);
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076cc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76cc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x3c))) == 0) {
    uVar2 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d70))) GEN_EDX_FWD,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x2d74))) = 0;
    return uVar2;
  }
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d70))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2d74))) = 1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d78))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2d7c))) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d80))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2d84))) = uVar1;
  uVar2 = F_0042a990((int)this + 0x3b8 GEN_EDX_ARG);
  uVar3 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d88))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x2d8c))) = uVar2;
  return uVar3;
}

/* ref: FUN_0076cd00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076cd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76cd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  undefined * puVar5;
  undefined4 uVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x38)));
  if (iVar1 == 0) {
    uVar2 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d90))) GEN_EDX_FWD,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x2d94))) = 0;
    return uVar2;
  }
  F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d90))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2d94))) = 1;
  puVar5 = &REFG(undefined, 0x10bdb89);
  puVar3 = ((uint *)GEN_TOP(F_00ab2020(iVar1)));
  if (puVar3 != ((uint *)GEN_TOP(0x0))) {
    if (REFG(char, 0x14ab0d1) != '\0') {
      puVar3 = puVar3 + 1;
    }
    puVar5 = ((undefined *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
  }
  F_0042aca0((int)this + 0x2e04 GEN_EDX_ARG);
  uVar6 = 0xd1d;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_00460540(this_00 GEN_EDX_ARG,uVar6,puVar5);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x2e04))) GEN_EDX_ARG,uVar2);
  uVar2 = F_0042a990((int)this + 0x2e04 GEN_EDX_ARG);
  uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2d98))) GEN_EDX_ARG,8);
  *((uint *)GEN_TOP(((int)this + 0x2d9c))) = uVar2;
  return uVar4;
}

/* ref: FUN_0076cdb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076cdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76cdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 0xa4))) = 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  return 0xffffffff;
}

/* ref: FUN_0076ce10 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076ce10(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76ce10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1;
}

/* ref: FUN_0076ce20 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076ce20(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76ce20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1;
}

/* ref: FUN_0076ce30 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_0076ce30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ce30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((ushort *)GEN_TOP((in_ecx + 0xa2))) < 8) {
    return *((ushort *)GEN_TOP((in_ecx + ((uint)*((ushort *)GEN_TOP((in_ecx + 0xa2))) * 3 + 0x30) * 2)));
  }
  return 0;
}

/* ref: FUN_0076ce50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076ce50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ce50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)*((ushort *)GEN_TOP((in_ecx + 0xa2)));
  if (uVar1 < 8) {
    return CONCAT22((short)(uVar1 * 3 >> 0x10),*((undefined2 *)GEN_TOP((in_ecx + 0x62 + uVar1 * 6))));
  }
  return 0;
}

/* ref: FUN_0076ce90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076ce90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined2 * puVar1;
  
  puVar1 = ((undefined2 *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)this + 0xa2)))));
  if (puVar1 < ((undefined2 *)GEN_TOP(0x8))) {
    puVar1 = ((undefined2 *)GEN_TOP(((int)this + ((int)((int)(uintptr_t)puVar1) * 3 + 0x30) * 2)));
    puVar1[1] = (undefined2)param_1;
    *puVar1 = (undefined2)param_2;
    puVar1[2] = (undefined2)param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_0076cf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76cf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = 0x10;
  piVar4 = ((int *)GEN_TOP(((int)this + 0x10)));
  local_c = 0x19;
  do {
    iVar1 = *piVar4;
    if (iVar1 < 1) {
      if ((char)piVar4[1] == '\0') {
        uVar2 = (iVar1 < 0) - 1 & 0xea62;
LAB_0076cf6e: ;
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + iVar3))) != uVar2) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + iVar3))) = uVar2;
          *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
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
    local_c = local_c - 1;
    if (local_c == 0) {
      return (local_8 != 0x19) - 1 & 4;
    }
  } while( true );
}

/* ref: FUN_0076cfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076cfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76cfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0xdc)))) {
    uVar1 = F_00ab24a0(*((int *)GEN_TOP(((int)this + 0xdc))));
    uVar2 = 0;
    if (uVar1 != 0) {
      if (*((char *)GEN_TOP(((int)this + 0xe9))) != '\0') {
        uVar2 = F_00ab65a0(*((undefined4 *)GEN_TOP(((int)this + 0xdc))),uVar1);
        uVar2 = uVar2 + 39000;
      }
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x140))) != uVar2) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x140))) = uVar2;
        *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
      }
      uVar1 = F_00ab6240(*((undefined4 *)GEN_TOP(((int)this + 0xdc))),0,uVar1);
      if (uVar1 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x10)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x10))) = uVar1;
        *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
      }
      uVar2 = 0x10;
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0076d050 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076d050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76d050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return param_2;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076d060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x76d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
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
    F_00a6fb50(&REFG(undefined, 0x14ac234) GEN_EDX_FWD);
    *(undefined4 *)(this + 8) = 0;
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076d0b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076d0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76d0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 8) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = REFG(undefined4, 0x14ac238);
    *((undefined1 *)GEN_TOP(((int)this + 10))) = REFG(undefined1, 0x14ac240);
    *((undefined2 *)GEN_TOP(((int)this + 8))) = REFG(undefined2, 0x14ac23c);
    *((undefined1 *)GEN_TOP(((int)this + 0xb))) = REFG(undefined1, 0x14ac23f);
    *((undefined1 *)GEN_TOP(((int)this + 0xc))) = REFG(undefined1, 0x14ac23e);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = REFG(undefined4, 0x14ac244);
    *((undefined1 *)GEN_TOP(((int)this + 0x16))) = REFG(undefined1, 0x14ac24c);
    *((undefined2 *)GEN_TOP(((int)this + 0x14))) = REFG(undefined2, 0x14ac248);
    *((undefined1 *)GEN_TOP(((int)this + 0x17))) = REFG(undefined1, 0x14ac24b);
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = REFG(undefined1, 0x14ac24a);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = REFG(undefined4, 0x14ac250);
    *((undefined1 *)GEN_TOP(((int)this + 0x22))) = REFG(undefined1, 0x14ac258);
    *((undefined2 *)GEN_TOP(((int)this + 0x20))) = REFG(undefined2, 0x14ac254);
    *((undefined1 *)GEN_TOP(((int)this + 0x23))) = REFG(undefined1, 0x14ac257);
    *((undefined1 *)GEN_TOP(((int)this + 0x24))) = REFG(undefined1, 0x14ac256);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = REFG(undefined4, 0x14ac25c);
    *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = REFG(undefined1, 0x14ac264);
    *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = REFG(undefined2, 0x14ac260);
    *((undefined1 *)GEN_TOP(((int)this + 0x2f))) = REFG(undefined1, 0x14ac263);
    *((undefined1 *)GEN_TOP(((int)this + 0x30))) = REFG(undefined1, 0x14ac262);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = REFG(undefined4, 0x14ac268);
    *((undefined1 *)GEN_TOP(((int)this + 0x3a))) = REFG(undefined1, 0x14ac270);
    *((undefined2 *)GEN_TOP(((int)this + 0x38))) = REFG(undefined2, 0x14ac26c);
    *((undefined1 *)GEN_TOP(((int)this + 0x3b))) = REFG(undefined1, 0x14ac26f);
    *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = REFG(undefined1, 0x14ac26e);
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = REFG(undefined4, 0x14ac274);
    *((undefined1 *)GEN_TOP(((int)this + 0x46))) = REFG(undefined1, 0x14ac27c);
    *((undefined2 *)GEN_TOP(((int)this + 0x44))) = REFG(undefined2, 0x14ac278);
    *((undefined1 *)GEN_TOP(((int)this + 0x47))) = REFG(undefined1, 0x14ac27b);
    *((undefined1 *)GEN_TOP(((int)this + 0x48))) = REFG(undefined1, 0x14ac27a);
    *((undefined1 *)GEN_TOP(((int)this + 0x4c))) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076d250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76d250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1b4, 12, 4);
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
  
  ((uint *)(gen_frame + 0x194))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1b0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (uVar2 = (byte)this[0x58] - 1, uVar2 == 0)) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      ((uint *)(gen_frame + 0x194))[0] = 0xefb;
      ((uint *)(gen_frame + 0x194))[1] = 0xefc;
      ((uint *)(gen_frame + 0x194))[2] = 0xefa;
      ((uint *)(gen_frame + 0x194))[3] = 0xef9;
      ((uint *)(gen_frame + 0x194))[4] = 0xefd;
      ((uint *)(gen_frame + 0x194))[5] = 0xefe;
      piVar3 = ((int *)(gen_frame + 0xc));
      iVar5 = 0x30;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
      F_004142d0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 0x14))));
      F_005a2710(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,4);
      ((int *)(gen_frame + 0xc))[1] = (*(int *)(gen_frame + 0x0)) + 2;
      (*(uint *)(gen_frame + 0x4)) = 0;
      puVar7 = ((uint *)(gen_frame + 0x30));
      pAVar8 = this + 0x10;
      do {
        (*(uint *)(gen_frame + 0x8)) = *(uint *)pAVar8;
        F_005a2710(puVar7 - 5 GEN_EDX_ARG,3);
        puVar7[-4] = (*(uint *)(gen_frame + 0x8));
        if (*(uint *)pAVar8 != 0) {
          uVar2 = F_00ab24a0(*(uint *)pAVar8);
          (*(uint *)(gen_frame + 0x8)) = uVar2;
          if (uVar2 == 0) {
            puVar7 = ((uint *)(gen_frame + 0x194));
            iVar5 = 0x30;
            do {
              puVar7 = puVar7 - 2;
              uVar2 = F_005a2670(puVar7 GEN_EDX_ARG);
              iVar5 = iVar5 - 1;
            } while (-1 < iVar5);
            return uVar2;
          }
          uVar2 = ((uint *)(gen_frame + 0x194))[(int)((*(uint *)(gen_frame + 0x4)))];
          uVar10 = 0;
          uVar9 = 0;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
          uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar2,uVar9,uVar10);
          F_005aa640(puVar7 - 7 GEN_EDX_ARG,uVar2);
          uVar2 = F_00ab6240(*(uint *)pAVar8,0,(*(uint *)(gen_frame + 0x8)));
          F_005aa640(puVar7 - 3 GEN_EDX_ARG,uVar2);
          uVar2 = F_00ab65a0(*(uint *)pAVar8,(*(uint *)(gen_frame + 0x8)));
          (*(uint *)(gen_frame + 0x8)) = uVar2;
          F_005a2710(puVar7 - 1 GEN_EDX_ARG,3);
          uVar2 = (uint)(byte)pAVar8[8];
          piVar3 = *(int * PTR32 *)(this + 4);
          *puVar7 = (*(uint *)(gen_frame + 0x8));
          uVar9 = 0x23;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
          uVar2 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar9,uVar2);
          F_005aa640(puVar7 + 1 GEN_EDX_ARG,uVar2);
          uVar2 = *(ushort *)(pAVar8 + 4) / 10;
          uVar6 = (uint)*(ushort *)(pAVar8 + 4) % 10;
          uVar9 = 0xee1;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
          uVar2 = F_00461c60(pvVar4 GEN_EDX_ARG,uVar9,uVar2,uVar6);
          F_005aa640(puVar7 + 3 GEN_EDX_ARG,uVar2);
          AVar1 = pAVar8[7];
          uVar2 = (*(uint *)(gen_frame + 0x4)) << 0x10;
          F_005a2710(puVar7 + 5 GEN_EDX_ARG,4);
          puVar7[6] = (byte)AVar1 | uVar2;
          AVar1 = pAVar8[6];
          F_005a2710(puVar7 + 7 GEN_EDX_ARG,3);
          puVar7[8] = (byte)AVar1 + 180000;
        }
        uVar2 = (*(uint *)(gen_frame + 0x4)) + 1;
        puVar7 = puVar7 + 0x10;
        pAVar8 = pAVar8 + 0xc;
        (*(uint *)(gen_frame + 0x4)) = uVar2;
      } while (uVar2 < 6);
      this[0x58] = (undefined1)0x0;
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8),0x31,((int *)(gen_frame + 0xc)));
      puVar7 = ((uint *)(gen_frame + 0x194));
      iVar5 = 0x30;
      do {
        puVar7 = puVar7 - 2;
        uVar2 = F_005a2670(puVar7 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076d510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  F_00a72450(&REFG(undefined, 0x14ab744) GEN_EDX_FWD);
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076d560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76d560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  uVar3 = 0;
  do {
    uVar1 = F_00a6ba60(iVar2);
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) | 1 << GEN_SHC((byte)uVar3, (unsigned int)(uintptr_t)uVar3);
    }
    if (10 < uVar1) {
      *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) | 2 << GEN_SHC((byte)uVar3, (unsigned int)(uintptr_t)uVar3);
    }
    uVar3 = uVar3 + 2;
    iVar2 = iVar2 + 1;
  } while (uVar3 < 4);
  **((undefined4 * PTR32 *)GEN_TOP((param_2 + 0x20))) = 0x20;
  *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4))) != *((int *)GEN_TOP(((int)this + 0x20)))) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4))) = *((int *)GEN_TOP(((int)this + 0x20)));
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return param_2;
}

/* ref: FUN_0076d5d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x16);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x19);
  if ((uVar3 != 0) && (uVar2 != 0)) {
    F_0076d560(this GEN_EDX_ARG,&REFG(undefined, 0x14ab744),uVar3);
    iVar4 = 0;
    do {
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar3 = F_00a6b940(iVar4);
      F_00431250(uVar2 GEN_EDX_ARG,iVar4 + 2,uVar3,uVar5,uVar6,uVar7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    return 8;
  }
  return 0;
}

/* ref: FUN_0076d650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076d650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x19);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x16);
  if (((uVar3 != 0) && (uVar4 != 0)) && (*((int *)GEN_TOP(((int)this + 0x20))) != 0)) {
    uVar5 = F_00a66ba0(&REFG(undefined, 0x14ab744) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) != uVar5) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) = uVar5;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    iVar7 = 0;
    if (0 < (int)uVar5) {
      local_8 = 0x10;
      do {
        uVar10 = 0;
        uVar9 = 1;
        uVar8 = 0;
        uVar6 = F_00a6b970(iVar7);
        F_00431250(uVar4 GEN_EDX_ARG,iVar7 + 6,uVar6,uVar8,uVar9,uVar10);
        bVar1 = F_00a66bc0(*((undefined4 *)GEN_TOP(((int)this + 0x24))),iVar7);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + local_8))) = (uint)bVar1;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        local_8 = local_8 + 4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
    return (uint)(0 < (int)uVar5);
  }
  return 0;
}

/* ref: FUN_0076d760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076d760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x19);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x16);
  piVar1 = REFG(int * PTR32, 0x14ab76c);
  if (((uVar2 != 0) && (uVar3 != 0)) && (*((int *)GEN_TOP(((int)this + 0x20))) != 0)) {
    local_10 = (uint)*((byte *)GEN_TOP((REFG(int * PTR32, 0x14ab76c) + 1)));
    if (0x1e < local_10) {
      local_10 = 0x1e;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb0))) != local_10) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb0))) = local_10;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    local_8 = 0;
    if (local_10 != 0) {
      local_c = 0;
      local_14 = 0xc0;
      do {
        iVar5 = *piVar1 + local_c;
        uVar9 = 0;
        uVar8 = 1;
        uVar6 = (uint)*((byte *)GEN_TOP((iVar5 + 0xc1))) << 0x10 | (uint)*((byte *)GEN_TOP((iVar5 + 0xc0)));
        uVar7 = 0;
        uVar4 = F_0042a990(iVar5 + 0x10 GEN_EDX_ARG);
        F_00431250(uVar3 GEN_EDX_ARG,local_8 + 0x2e,uVar4,uVar7,uVar8,uVar9);
        uVar4 = *((uint *)GEN_TOP((iVar5 + 0xb8))) & ((int)*((uint *)GEN_TOP((iVar5 + 0xb8))) < 0) - 1;
        if (*((uint *)GEN_TOP((local_14 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != uVar4) {
          *((uint *)GEN_TOP((local_14 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = uVar4;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + local_14))) != (uint)*((byte *)GEN_TOP((iVar5 + 0xc2)))) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + local_14))) = (uint)*((byte *)GEN_TOP((iVar5 + 0xc2)));
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((local_14 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != *((int *)GEN_TOP((iVar5 + 0xbc)))) {
          *((int *)GEN_TOP((local_14 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = *((int *)GEN_TOP((iVar5 + 0xbc)));
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        if (*((uint *)GEN_TOP((local_14 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != uVar6) {
          *((uint *)GEN_TOP((local_14 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = uVar6;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x24)));
  if ((int)uVar1 < 4) {
    *((undefined2 *)GEN_TOP(((int)this + uVar1 * 4 + 0x10))) = *((undefined2 *)GEN_TOP(((int)this + 0x28)));
    *((undefined2 *)GEN_TOP(((int)this + uVar1 * 4 + 0x12))) = *((undefined2 *)GEN_TOP(((int)this + 0x2c)));
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf11 */
GEN_OWN GEN_NOFRAME uint F_0076d930(void)
{
  GEN_ENTER(0x76d930u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  return (uint)(bVar1 != 0);
}

/* ref: FUN_0076d950 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0076d950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76d950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  F_0044bfc0(this_00 GEN_EDX_ARG,100);
  return 0;
}

/* ref: FUN_0076d970 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0076d970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76d970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = piVar1;
  uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10bfd40)),param_1 + 1);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG)));
  F_00abefa0(this_00 GEN_EDX_ARG,uVar2,piVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0076d9d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076d9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76d9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar1 = F_0043b3e0(uVar1 GEN_EDX_ARG,param_1);
  if ((*((byte *)GEN_TOP((uVar1 + 0x39))) & 1) != 0) {
    if (*((int *)GEN_TOP((uVar1 + 0x34))) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((uVar1 + 0x34))) + 0xf550;
    }
    F_00434720(this_00 GEN_EDX_ARG,iVar2,uVar1 + 4,0x200000,param_1);
  }
  return 0;
}

/* ref: FUN_0076da30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076da30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76da30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  F_004593f0(this_00 GEN_EDX_ARG,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar1 + 0x230bf))) = *((byte *)GEN_TOP((uVar1 + 0x230bf))) | 2;
  return uVar1;
}

/* ref: FUN_0076da70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076da70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76da70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  F_004594a0(this_00 GEN_EDX_ARG,param_1,param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar1 + 0x230bf))) = *((byte *)GEN_TOP((uVar1 + 0x230bf))) | 2;
  return uVar1;
}

/* ref: FUN_0076dab0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76dab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  F_0043b110(this_00 GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_0076dad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076dad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76dad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_0043b3e0(uVar2 GEN_EDX_ARG,param_1);
  uVar4 = (uint)((*((byte *)GEN_TOP((uVar2 + 0x39))) & 2) != 0);
  pbVar3 = ((byte *)GEN_TOP((uVar2 + 0x50)));
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
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  return uVar4;
}

/* ref: FUN_0076db50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076db50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76db50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  }
  return;
}

/* ref: FUN_0076db80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76db80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x70)));
  if ((uVar2 != 0xffffffff) && (uVar2 == param_1)) {
    if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))),0);
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_0076dbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076dbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x40);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x3b);
  uVar7 = uVar5;
  if ((uVar4 != 0) && (uVar5 != 0)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134e;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar12,uVar13,uVar14);
    if (uVar7 != **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20)))) {
      **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) = uVar7;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x1350;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) = uVar7;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134f;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8))) = uVar7;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    uVar7 = F_0043b3e0(uVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x70))));
    local_c = ((byte *)GEN_TOP((uVar7 + 0x40)));
    local_14 = 0xc;
    iVar10 = 8;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x74)));
    do {
      iVar2 = *(int *)(local_c + 8);
      local_18 = 0;
      if (piVar3[0x16] != iVar2) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar10))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar10))) = 0;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar8 = F_00ab24a0(iVar2);
        if (uVar8 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,iVar2,uVar8);
        }
      }
      bVar11 = *((char *)GEN_TOP(((int)piVar3 + 0x65))) != '\0';
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
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 8 + iVar10))) != iVar2) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 8 + iVar10))) = iVar2;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 4 + iVar10))) != piVar3[0x17]) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 4 + iVar10))) = piVar3[0x17];
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      uVar8 = (uint)bVar11 | local_18 * 2;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar10))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar10))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + iVar10))) != iVar9) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + iVar10))) = iVar9;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      uVar8 = F_0042a990(piVar3 + 1 GEN_EDX_ARG);
      if (uVar8 != *((uint *)GEN_TOP((local_14 + *((int *)GEN_TOP((uVar5 + 0x20))))))) {
        *((uint *)GEN_TOP((local_14 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      local_c = local_c + 0x10;
      local_14 = local_14 + 4;
      iVar10 = iVar10 + 0x10;
      piVar3 = piVar3 + 0x1a;
    } while (iVar10 < 0xe8);
    if (((*((byte *)GEN_TOP((uVar7 + 0x39))) & 2) != 0) &&
       (uVar7 = *((uint *)GEN_TOP((uVar4 + 0x20))), *((int *)GEN_TOP((uVar7 + 0xc))) != 1)) {
      *((undefined4 *)GEN_TOP((uVar7 + 0xc))) = 1;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
  }
  return uVar7;
}

/* ref: FUN_0076de10 */
GEN_OWN GEN_FRAME uint F_0076de10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76de10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x132818c))[(int)(param_1)];
}

/* ref: FUN_0076de20 */
GEN_OWN GEN_FRAME uint F_0076de20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76de20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x132818c))[(int)(uVar1)]) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76de60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  int local_8;
  
  pAVar5 = this + 0x10;
  iVar4 = 2;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar5 + 4))))(pAVar5 GEN_EDX_FWD);
    *(int *)(pAVar5 + 0x68) = 0;
    pAVar5 = pAVar5 + 0x6c;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  pAVar5 = this + 0xe8;
  iVar4 = 8;
  do {
    F_0042ccf0(pAVar5 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x388;
  iVar4 = 3;
  do {
    F_0042ccf0(pAVar5 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x484;
  local_8 = 3;
  do {
    iVar4 = 10;
    do {
      F_0042ccf0(pAVar5 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
      pAVar5 = pAVar5 + 0x54;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 0xeb4);
  *(undefined4 *)(this + 0xeb0) = 0xffffffff;
  *(undefined4 *)(this + 0xeb4) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,uVar1,0);
  uVar1 = *(undefined4 *)(this + 0xeb8);
  *(undefined4 *)(this + 0xeb8) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,uVar1,0);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,uVar1,0);
  return uVar3;
}

/* ref: FUN_0076df70 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0076df70(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x76df70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
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
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 8))))(param_4 GEN_EDX_ARG,param_5,uVar2);
      param_4[0x1a] = *((int *)GEN_TOP((uVar2 + 0x28)));
    }
    bVar1 = *(byte *)(param_4 + 0x19);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_5,0,1,1);
    uVar3 = F_0042a990(param_4 + 1 GEN_EDX_ARG);
    F_005a2710(param_3 GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_3 + 4))) = uVar3;
    iVar4 = param_4[0x17];
    F_005a2710(param_1 GEN_EDX_ARG,3);
    *((int *)GEN_TOP(((int)param_1 + 4))) = iVar4;
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,3);
    *((uint *)GEN_TOP(((int)param_1 + 0x14))) = uVar2 << 0x10 | (uint)bVar1;
    if ((int)uVar2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (1 < param_4[0x1a]) + 4;
    }
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,3);
    *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar4;
  }
  F_005a2710(param_2 GEN_EDX_ARG,4);
  *((int *)GEN_TOP(((int)param_2 + 4))) = param_5;
  return 1;
}

/* ref: FUN_0076e060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076e060(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2840(param_2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_005a2710(param_1 GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 4))) = param_2 | 0x8000000;
    uVar1 = *((ushort *)GEN_TOP((uVar2 + 0x9a)));
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 0x14))) = (uint)uVar1;
    uVar3 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 1;
  }
  return uVar3;
}

/* ref: FUN_0076e0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076e0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab2c30(param_2);
  uVar4 = 0;
  if (uVar3 != 0) {
    F_005a2710(param_1 GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 4))) = param_2 | 0x4000000;
    uVar4 = F_0042a990(param_2 * 0x54 + 0xe8 + (int)this GEN_EDX_ARG);
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 0xc))) = uVar4;
    uVar1 = *((undefined4 *)GEN_TOP((uVar3 + 8)));
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = uVar1;
    bVar2 = REFG(undefined1, 0x14b4ec2) >> 2;
    uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = bVar2 & 1;
  }
  return uVar4;
}

/* ref: FUN_0076e150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x76e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_FWD,4);
  *((uint *)GEN_TOP(((int)param_1 + 0xc))) = (uint)((int)param_4 < (int)(param_3 & 0xff));
  uVar2 = F_00ab2cc0(param_4 + 1);
  uVar3 = 0;
  if (uVar2 != 0) {
    bVar1 = *((byte *)GEN_TOP((uVar2 + 6)));
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 0x14))) = (uint)bVar1;
    if ((param_5 < (int)(uint)*((byte *)GEN_TOP((uVar2 + 6)))) || (param_4 != (param_3 & 0xff))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    F_005a2710(param_1 GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = uVar5;
    uVar3 = (uint)*((ushort *)GEN_TOP((uVar2 + param_2 * 2)));
    param_3 = 0;
    if (*((char *)GEN_TOP((uVar2 + 7))) == '\0') {
      uVar2 = uVar3 | 0x1000000;
      uVar3 = F_00ab1f90(uVar3);
      if (uVar3 != 0) {
        param_3 = *((uint *)GEN_TOP((uVar3 + 8)));
      }
    }
    else {
      uVar4 = F_00ab1ed0(uVar3);
      uVar2 = uVar3;
      if (uVar4 != 0) {
        param_3 = (uint)*((ushort *)GEN_TOP((uVar4 + 8)));
      }
    }
    uVar3 = F_0042a990((param_4 + param_2 * 10) * 0x54 + 0x484 + (int)this GEN_EDX_ARG);
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 0x24))) = uVar3;
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = uVar2;
    uVar3 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x28))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)param_1 + 0x2c))) = param_3;
  }
  return uVar3;
}

/* ref: FUN_0076e270 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076e270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76e270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
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
  puVar5 = ((uint *)GEN_TOP((param_2 + 0x82c)));
  do {
    bVar2 = F_00a6b340(param_1 GEN_EDX_FWD,(*(int *)(gen_frame + 0x0)));
    F_005a2710(puVar5 - 5 GEN_EDX_ARG,4);
    puVar5[-4] = (uint)bVar2;
    F_005a2710(puVar5 - 3 GEN_EDX_ARG,4);
    puVar5[-2] = 1;
    puVar3 = ((uint *)GEN_TOP(F_00ab2c60((uint)bVar2)));
    if ((puVar3 == ((uint *)GEN_TOP(0x0))) || (bVar2 == 0)) {
      uVar4 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)))];
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,uVar4,uVar6,uVar7);
      F_005a2710(puVar5 - 1 GEN_EDX_ARG,6);
      *puVar5 = uVar4;
    }
    else {
      uVar4 = *puVar3;
      F_005a2710(puVar5 - 1 GEN_EDX_ARG,6);
      *puVar5 = (uVar4 & 0xffffff) + (int)puVar3;
      uVar1 = *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + (int)puVar3)));
      F_005a2710(puVar5 + 1 GEN_EDX_ARG,4);
      puVar5[2] = (uint)uVar1;
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 2;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    puVar5 = puVar5 + 8;
  } while ((*(int *)(gen_frame + 0x4)) < 0x26);
  return 1;
}

/* ref: FUN_0076e390 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0076e390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  if (param_1 + 0x17 != **((int * PTR32 *)GEN_TOP((param_3 + 0x20)))) {
    **((int * PTR32 *)GEN_TOP((param_3 + 0x20))) = param_1 + 0x17;
    *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
  }
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x30)));
  uVar13 = 0;
  uVar11 = 1;
  uVar10 = 0;
  uVar9 = 0x1368;
  uVar3 = (uint)bVar1;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = F_00460bd0(pvVar2 GEN_EDX_ARG,uVar9,uVar3);
  F_00431250(param_3 GEN_EDX_ARG,1,uVar3,uVar10,uVar11,uVar13);
  if (**((int * PTR32 *)GEN_TOP((param_2 + 0x20))) != *((int *)GEN_TOP((param_1 + 0x2c)))) {
    **((int * PTR32 *)GEN_TOP((param_2 + 0x20))) = *((int *)GEN_TOP((param_1 + 0x2c)));
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  piVar4 = ((int *)GEN_TOP(F_00ab2c90((uint)bVar1)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4))) != iVar7) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4))) = iVar7;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  iVar7 = (int)*((float *)GEN_TOP((param_1 + 8)));
  iVar8 = (int)*((float *)GEN_TOP((param_1 + 4)));
  uVar3 = F_00a6f8f0();
  uVar5 = F_00a6f920();
  (*(int *)(gen_frame + 0x0)) = 0;
  if (((REFG(int, 0x1379694) == 0) || (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x2e08))) == '\0')) ||
     (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x2e08))) != '\x01')) {
    if (*((char *)GEN_TOP((param_1 + 1))) != '\0') {
      (*(int *)(gen_frame + 0x0)) = 2;
    }
  }
  else {
    (*(int *)(gen_frame + 0x0)) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10))) != iVar8) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10))) = iVar8;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x14))) != iVar7) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x14))) = iVar7;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  uVar9 = 0;
  if (iVar8 == 0) {
    uVar11 = 0x1373;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar6 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar11,iVar8,uVar9);
    if (uVar6 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x14)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x14))) = uVar6;
      *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
    }
  }
  else {
    uVar12 = 1;
    uVar10 = 0;
    uVar11 = 0x21;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar13 = (undefined1)uVar9;
    uVar6 = F_00462440(pvVar2 GEN_EDX_ARG,iVar8,uVar11);
    uVar6 = F_0042a990(uVar6 GEN_EDX_ARG);
    F_00431250(param_3 GEN_EDX_ARG,5,uVar6,uVar10,uVar12,uVar13);
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar9 = 0;
  if (iVar7 == 0) {
    uVar11 = 0x1373;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
    uVar6 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar11,iVar7,uVar9);
    if (uVar6 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x18)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x18))) = uVar6;
      *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
    }
  }
  else {
    uVar12 = 1;
    uVar10 = 0;
    uVar11 = 0x21;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
    uVar13 = (undefined1)uVar9;
    uVar6 = F_00462440(pvVar2 GEN_EDX_ARG,iVar7,uVar11);
    uVar6 = F_0042a990(uVar6 GEN_EDX_ARG);
    F_00431250(param_3 GEN_EDX_ARG,6,uVar6,uVar10,uVar12,uVar13);
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 8))) != uVar3) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 8))) = uVar3;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc))) != uVar5) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc))) = uVar5;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  uVar9 = 0;
  if (uVar3 == 0) {
    uVar12 = 0;
    uVar11 = 0x1372;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar11,uVar12,uVar9);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0xc)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0xc))) = uVar3;
      *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
    }
  }
  else {
    uVar11 = 1;
    uVar10 = 0;
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10bfd54),uVar3);
    uVar13 = (undefined1)uVar9;
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    F_00431250(param_3 GEN_EDX_ARG,3,uVar3,uVar10,uVar11,uVar13);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  uVar9 = 0;
  if (uVar5 == 0) {
    uVar11 = 0x1372;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar11,uVar5,uVar9);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x10)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x10))) = uVar3;
      *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
    }
  }
  else {
    uVar11 = 1;
    uVar10 = 0;
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10bfd58),uVar5);
    uVar13 = (undefined1)uVar9;
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    F_00431250(param_3 GEN_EDX_ARG,4,uVar3,uVar10,uVar11,uVar13);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  uVar3 = *((uint *)GEN_TOP((param_2 + 0x20)));
  if (*((int *)GEN_TOP((uVar3 + 0x18))) != (*(int *)(gen_frame + 0x0))) {
    *((int *)GEN_TOP((uVar3 + 0x18))) = (*(int *)(gen_frame + 0x0));
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return uVar3;
}

/* ref: FUN_0076e660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076e660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76e660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
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
  
  ((uint *)(gen_frame + 0xc))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  ((uint *)(gen_frame + 0xc))[0] = 0x1356;
  ((uint *)(gen_frame + 0xc))[1] = 0x1358;
  ((uint *)(gen_frame + 0xc))[2] = 0x135a;
  ((uint *)(gen_frame + 0xc))[3] = 0x1357;
  ((uint *)(gen_frame + 0xc))[4] = 0x1359;
  ((uint *)(gen_frame + 0xc))[5] = 0x135b;
  F_005a2710(param_1 GEN_EDX_FWD,3);
  uVar7 = ((uint *)(gen_frame + 0xc))[(int)(param_2)];
  *((int *)GEN_TOP(((int)param_1 + 4))) = param_2;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar7,uVar10,uVar11);
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,6);
  uVar7 = ((uint *)(gen_frame + 0xc))[(int)(param_2 + 3)];
  *((uint *)GEN_TOP(((int)param_1 + 0xc))) = uVar6;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar7 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar7,uVar10,uVar11);
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_1 + 0x14))) = uVar7;
  cVar2 = REFG(char, 0x14ab29a);
  (*(int *)(gen_frame + 0x0)) = 0;
  bVar3 = F_00a6b340(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,param_2);
  uVar7 = F_00ab00b0();
  (*(uint *)(gen_frame + 0x4)) = 1;
  if (1 < (int)uVar7) {
    piVar9 = ((int *)GEN_TOP(((int)param_1 + 0x3c)));
    do {
      bVar4 = F_00a6b2e0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
      if (((bVar4 != 0) && (puVar8 = ((uint *)GEN_TOP(F_00ab2c60((*(uint *)(gen_frame + 0x4))))), puVar8 != ((uint *)GEN_TOP(0x0)))) &&
         ((*((char *)GEN_TOP(((int)puVar8 + 0x26))) == '\0' || (*((char *)GEN_TOP(((int)puVar8 + 0x26))) == cVar2)))) {
        F_005a2710(piVar9 - 5 GEN_EDX_ARG,4);
        piVar9[-4] = (*(uint *)(gen_frame + 0x4));
        F_005a2710(piVar9 - 3 GEN_EDX_ARG,4);
        piVar9[-2] = (uint)(bVar3 == (*(uint *)(gen_frame + 0x4)));
        uVar6 = *puVar8;
        F_005a2710(piVar9 - 1 GEN_EDX_ARG,6);
        *piVar9 = (uVar6 & 0xffffff) + (int)puVar8;
        uVar1 = *((ushort *)GEN_TOP(((int)puVar8 + param_2 * 2 + 0x20)));
        F_005a2710(piVar9 + 1 GEN_EDX_ARG,4);
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
        piVar9[2] = (uint)uVar1;
        piVar9 = piVar9 + 8;
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x4)) < (int)uVar7);
  }
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,3);
  *((int *)GEN_TOP(((int)param_1 + 0x1c))) = (*(int *)(gen_frame + 0x0));
  uVar11 = 0x32;
  uVar10 = 0x7fc;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar7 = F_00461c60(pvVar5 GEN_EDX_ARG,uVar10,(*(int *)(gen_frame + 0x0)),uVar11);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xe5c))) GEN_EDX_ARG,uVar7);
  uVar7 = F_0042a990(((undefined *)GEN_TOP(((int)this + 0xe5c))) GEN_EDX_ARG);
  uVar6 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_1 + 0x24))) = uVar7;
  return uVar6;
}

/* ref: FUN_0076e850 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0076e850(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76e850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  
  if (param_1 < 3) {
    bVar1 = F_00a6b340(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,param_1);
    if (param_2 == bVar1) {
      F_00a6b410(param_1,0);
      return;
    }
    F_00a6b410(param_1,param_2);
  }
  return;
}

/* ref: FUN_0076e890 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76e890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_1 & 0x80000) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab2c30(param_2)));
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = puVar1[2];
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    F_00434720(pvVar2 GEN_EDX_ARG,uVar5,iVar4,param_1,param_2);
    return;
  }
  if ((param_1 & 0x1000000) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab2840(param_2)));
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = (uint)*((ushort *)GEN_TOP(((int)puVar1 + 0x9a)));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    F_00434720(pvVar2 GEN_EDX_ARG,uVar5,iVar4,param_1,param_2);
    return;
  }
  if ((param_1 & 0x10000) != 0) {
    iVar4 = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x68)));
    while (*piVar3 != param_2) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x1b;
      if (1 < iVar4) {
        return;
      }
    }
    iVar4 = iVar4 * 0x6c + 0x10 + (int)this;
    if (iVar4 != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      uVar5 = F_0042a990(iVar4 + 4 GEN_EDX_ARG);
      uVar6 = *((undefined4 *)GEN_TOP((iVar4 + 0x5c)));
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG)));
      F_00434720(pvVar2 GEN_EDX_ARG,uVar6,uVar5,param_1,param_2);
    }
  }
  return;
}

/* ref: FUN_0076e980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076e980(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x76e980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  uint uVar1;
  
  param_1[6] = param_2;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentHowTo::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076e9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76e9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

/* ref: FUN_0076e9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0076e9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x76e9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0076ea00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076ea00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76ea00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  short sVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    psVar3 = ((short *)GEN_TOP((param_1 + 4)));
    do {
      if ((param_2 == '\0') || (*((short *)GEN_TOP((param_1 + 0xe))) == 0)) {
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076ea40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x76ea40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((param_3 != '\0') && (*((short *)GEN_TOP((param_1 + 0xe))) != 0)) {
      uVar1 = F_00ab3b70((int)*((short *)GEN_TOP((param_1 + 0xe + param_2 * 2))));
      return uVar1;
    }
    uVar1 = F_00ab3b70((int)*((short *)GEN_TOP((param_1 + 4 + param_2 * 2))));
  }
  return uVar1;
}

/* ref: FUN_0076ea90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076ea90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x76ea90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char cVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    cVar1 = *((char *)GEN_TOP((param_1 + 0x11)));
    if ((cVar1 == '\0') ||
       (((cVar3 = param_2, cVar1 != '\x01' && (cVar3 = param_3, cVar1 != '\x02')) ||
        (cVar3 == '\x01')))) {
      uVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
    }
    else {
      if (cVar3 == '\x02') {
        return *((int *)GEN_TOP((param_1 + 0xc))) + 3000;
      }
      if (cVar3 == '\x03') {
        return *((int *)GEN_TOP((param_1 + 0xc))) + 6000;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0076eae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076eae0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x76eae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char cVar1;
  char cVar2;
  uint * puVar3;
  
  if (param_1 == ((uint *)GEN_TOP(0x0))) {
    return 0x10bdbaf;
  }
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x12)));
  puVar3 = param_1;
  if ((cVar1 != '\0') &&
     (((cVar2 = param_2, cVar1 == '\x01' || (cVar2 = param_3, cVar1 == '\x02')) && (cVar2 != '\x01')
      ))) {
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
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76eb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4))),0,*((int *)GEN_TOP(((int)this + 0xe0))) * 4);
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x10000000;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x8000000;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + 4)));
  *puVar1 = *puVar1 | 0x10;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + 4)));
  *puVar1 = *puVar1 | 8;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x80;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x200;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x20000000;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x100;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + 4)));
  *puVar1 = *puVar1 | 0x200;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) = **((uint * PTR32 *)GEN_TOP(((int)this + 0xe4))) | 0x80000000;
  *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
  return 0;
}

/* ref: FUN_0076ec40 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_0076ec40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x76ec40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 1;
}

/* ref: FUN_0076ec50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0076ec50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ec50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xd0))));
  return uVar2 == 4;
}

/* ref: FUN_0076ec80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0076ec80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x76ec80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00ab2cf0(param_1 & 0xffff)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_0076ecb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076ecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (uint)((*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + (param_1 >> 5) * 4))) &
                1 << ((byte)param_1 & 0x1f)) == 0);
}

/* ref: FUN_0076ece0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0076ece0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ece0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if (0 < iVar1) {
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_0076ed10 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0076ed10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76ed10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x6e8, 8, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6e0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6e4));
  (*(undefined4 *)(gen_frame + 0x6b8)) = 1;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ed30;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,1);
  if (**((uint * PTR32 *)GEN_TOP((param_1 + 0x20))) != uVar1) {
    **((uint * PTR32 *)GEN_TOP((param_1 + 0x20))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 2;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ed49;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,2);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 3;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ed64;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,3);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 4;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ed7f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,4);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 5;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ed9a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,5);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 6;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76edb5;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,6);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x25;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76edd0;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x25);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x2a;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76edeb;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x2a);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x29;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee06;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x29);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x20))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x20))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x27;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee21;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x27);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x24))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x24))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x28;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee3c;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x28);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x28))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x28))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x26;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee57;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x26);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x2c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x2c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x16;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee72;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x16);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x30))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x30))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ee8d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x1b);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x34))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x34))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x2c;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76eea8;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x2c);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x38))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x38))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x15;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76eec3;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x15);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x3c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x3c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76eede;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x13);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x40))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x40))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76eef9;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x18);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x44))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x44))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef14;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x14);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x48))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x48))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x2d;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef2f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x2d);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x4c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x4c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x1d;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef4a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x1d);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x50))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x50))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x1e;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef65;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x1e);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x54))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x54))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x1f;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef80;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x1f);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x58))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x58))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x21;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76ef9b;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x21);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x5c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x5c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x22;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76efb6;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x22);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x60))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x60))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x2e;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76efd1;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x2e);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 100))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 100))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76efec;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x30);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x68))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x68))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x48;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76f007;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x48);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6c))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6c))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x49;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76f022;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x49);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x70))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x70))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x46;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76f03d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x46);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x74))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x74))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6b8)) = 0x47;
  (*(undefined4 *)(gen_frame + 0x6b4)) = 0x76f058;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x47);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x78))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x78))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar3 = 0x6c8;
  iVar2 = 0;
  (*(byte *)(gen_frame + 0x6c7)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c8)) = 1;
  (*(undefined4 *)(gen_frame + 0x6cc)) = 2;
  (*(undefined4 *)(gen_frame + 0x6d0)) = 3;
  (*(undefined4 *)(gen_frame + 0x6d4)) = 4;
  (*(undefined4 *)(gen_frame + 0x6d8)) = 5;
  (*(undefined4 *)(gen_frame + 0x6dc)) = 6;
  (*(undefined1 * PTR32 *)(gen_frame + 0x6c0)) = ((undefined1 *)(gen_frame + 0x0));
  do {
    (*(undefined4 *)(gen_frame + 0x6b0)) = *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x6c0)) + iVar3);
    (*(undefined4 *)(gen_frame + 0x6ac)) = 0x76f0b9;
    uVar1 = F_00a684d0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,*(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x6c0)) + iVar3));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar3))) != uVar1) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar3))) = uVar1;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c + iVar3))) != (uint)(byte)(&REFG(undefined1, 0x14ab294))[(int)(iVar2)]) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c + iVar3))) = (uint)(byte)(&REFG(undefined1, 0x14ab294))[(int)(iVar2)];
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    (*(byte *)(gen_frame + 0x6c7)) = (*(byte *)(gen_frame + 0x6c7)) + (&REFG(undefined1, 0x14ab294))[(int)(iVar2)];
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 0x6e0);
  (*(undefined4 *)(gen_frame + 0x6b0)) = 0x76f101;
  uVar1 = F_00a685c0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6fc))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6fc))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  uVar4 = (uint)(*(byte *)(gen_frame + 0x6c7));
  (*(undefined4 *)(gen_frame + 0x6b0)) = 0x76f124;
  uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
  if ((int)(uVar1 - uVar4) < 0) {
    uVar1 = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x6b0)) = 0x76f136;
    uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
    uVar1 = uVar1 - uVar4;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x700))) != uVar1) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x700))) = uVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x6bc)) = 0x76f15a;
  return uVar1;
}

/* ref: FUN_0076f160 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0076f160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x76f160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x58c, 4, 4);
  float * pfVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x584)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x588));
  iVar8 = 0x538;
  (*(undefined4 *)(gen_frame + 0x538)) = 1;
  (*(undefined4 *)(gen_frame + 0x53c)) = 2;
  (*(undefined4 *)(gen_frame + 0x540)) = 3;
  (*(undefined4 *)(gen_frame + 0x544)) = 4;
  (*(undefined4 *)(gen_frame + 0x548)) = 5;
  (*(undefined4 *)(gen_frame + 0x54c)) = 6;
  (*(undefined4 *)(gen_frame + 0x550)) = 7;
  (*(undefined4 *)(gen_frame + 0x554)) = 0x1a;
  (*(undefined4 *)(gen_frame + 0x558)) = 8;
  (*(undefined4 *)(gen_frame + 0x55c)) = 9;
  (*(undefined4 *)(gen_frame + 0x560)) = 10;
  (*(undefined4 *)(gen_frame + 0x564)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x568)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x56c)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x570)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x574)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x578)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x57c)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x580)) = 0x12;
  (*(undefined1 * PTR32 *)(gen_frame + 0x52c)) = ((undefined1 *)(gen_frame + 0x0));
  do {
    iVar6 = *(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x52c)) + iVar8);
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar6 + 62000;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar8))) != iVar7) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar8))) = iVar7;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    (*(int *)(gen_frame + 0x51c)) = iVar6;
    (*(int *)(gen_frame + 0x518)) = 0x76f23e;
    uVar4 = F_00a683c0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar6);
    (*(int *)(gen_frame + 0x51c)) = iVar6;
    (*(uint *)(gen_frame + 0x530)) = uVar4;
    (*(int *)(gen_frame + 0x518)) = 0x76f24c;
    fVar5 = gen_bits2f(F_00a68460(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar6));
    (*(int *)(gen_frame + 0x51c)) = 0;
    (*(int *)(gen_frame + 0x518)) = iVar6;
    (*(float *)(gen_frame + 0x534)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x514)) = 0x76f25c;
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar6,0);
    fVar5 = (*(float *)(gen_frame + 0x534));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x4c + iVar8))) != (uVar4 & 0xffff)) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x4c + iVar8))) = uVar4 & 0xffff;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x98 + iVar8))) != (*(uint *)(gen_frame + 0x530))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x98 + iVar8))) = (*(uint *)(gen_frame + 0x530));
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if ((*(float *)(gen_frame + 0x534)) == 0.0) {
      iVar6 = 0;
    }
    else if ((int)(*(uint *)(gen_frame + 0x530)) < (int)gen_fl2bits((*(float *)(gen_frame + 0x534)))) {
      fVar2 = ((float)GEN_TOF((((float10)(int)(*(uint *)(gen_frame + 0x530)) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x534))))));
      (*(float *)(gen_frame + 0x534)) = fVar2;
      dVar3 = (double)fVar2;
      if (dVar3 < 0.0) {
        (*(int *)(gen_frame + 0x51c)) = 0x76f2c3;
        iVar6 = (int)(dVar3 - REFG(double, 0x1088108));
      }
      else {
        (*(int *)(gen_frame + 0x51c)) = 0x76f2d0;
        iVar6 = (int)(dVar3 + REFG(double, 0x1088108));
      }
    }
    else {
      iVar6 = 100;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xe4 + iVar8))) != iVar6) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xe4 + iVar8))) = iVar6;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    pfVar1 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x130 + iVar8)));
    if (*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x130 + iVar8))) != fVar5) {
      *pfVar1 = fVar5;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x584);
  (*(undefined4 *)(gen_frame + 0x528)) = 0x76f322;
  return (uint)pfVar1;
}

/* ref: FUN_0076f330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076f330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76f330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  
  uVar16 = 0;
  uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
  uVar14 = 1;
  uVar13 = 0;
  uVar12 = 0x12;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar12,uVar11);
  F_00431250(param_2 GEN_EDX_ARG,2,uVar5,uVar13,uVar14,uVar16);
  bVar3 = REFG(undefined1, 0x14b4eed) >> 1 & 1;
  uVar5 = (uint)(bVar3 != 0);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6b4))) != uVar5) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6b4))) = uVar5;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (bVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x17;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    iVar10 = 0x13a;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x10)) = 2;
    do {
      uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      uVar16 = 0;
      uVar15 = 1;
      uVar13 = 0;
      uVar14 = 2000;
      uVar5 = F_00a3c240(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar11);
      uVar12 = 0xdaf;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
      uVar5 = F_00461c60(pvVar4 GEN_EDX_ARG,uVar12,uVar5,uVar14);
      F_00431250(param_2 GEN_EDX_ARG,iVar10 - 2,uVar5,uVar13,uVar15,uVar16);
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 4)));
      uVar16 = 0;
      uVar14 = 1;
      uVar13 = 0;
      uVar12 = 300;
      uVar5 = F_00a3c2b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar11);
      uVar11 = 0xdaf;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
      uVar5 = F_00461c60(pvVar4 GEN_EDX_ARG,uVar11,uVar5,uVar12);
      F_00431250(param_2 GEN_EDX_ARG,iVar10,uVar5,uVar13,uVar14,uVar16);
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
      iVar10 = iVar10 + 1;
      iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
      (*(int *)(gen_frame + 0x10)) = iVar1;
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    } while (iVar1 != 0);
  }
  iVar10 = *((byte *)GEN_TOP(((int)this + 0xdd2))) - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6b8))) != iVar10) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x6b8))) = iVar10;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(0x6bc));
  do {
    bVar9 = (char)(*(int *)(gen_frame + 0x10)) + 1;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = bVar9;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar9);
    uVar11 = (*(undefined4 *)(gen_frame + 0x4));
    bVar3 = F_00a68920(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,bVar9);
    if (bVar3 == 0) {
      if (*((int *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + *((int *)GEN_TOP((param_1 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + *((int *)GEN_TOP((param_1 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      F_00431250(param_2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)) + 0x13e,&REFG(undefined, 0x10bdc12),0,1,0);
    }
    else {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8))))) != 1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8))))) = 1;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 4)));
      uVar16 = 0;
      uVar12 = 1;
      uVar8 = (uint)bVar3;
      uVar13 = 0;
      uVar5 = (uint)bVar9;
      uVar6 = F_00a365d0(uVar11);
      uVar7 = F_00a3ad50(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,bVar9);
      uVar11 = 0x341;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
      uVar5 = F_00461ea0(pvVar4 GEN_EDX_ARG,uVar11,uVar7,uVar6,uVar5,uVar8);
      F_00431250(param_2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)) + 0x13e,uVar5,uVar13,uVar12,uVar16);
    }
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
    uVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(uVar5));
  } while ((int)uVar5 < 0x6c8);
  return uVar5;
}

/* ref: FUN_0076f560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076f560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76f560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_007641b0((uint)*((byte *)GEN_TOP((param_1 + 1))),(uint)*((byte *)GEN_TOP((param_1 + 2))),
                         (uint)*((byte *)GEN_TOP((param_1 + 3))),(uint)*((byte *)GEN_TOP((param_1 + 4))),
                         (uint)*((byte *)GEN_TOP((param_1 + 5))),(uint)*((byte *)GEN_TOP((param_1 + 6))));
  }
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 0x1b40)))) {
    *((uint *)GEN_TOP(((int)this + 0x1b40))) = uVar1;
    *((undefined1 *)GEN_TOP(((int)this + 0x1b3c))) = 1;
  }
  return uVar1;
}

/* ref: FUN_0076f5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076f5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76f5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58);
  (*(uint *)(gen_frame + 0x54)) = uVar1;
  if (*((char *)GEN_TOP(((int)this + 0x1b3c))) != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&REFG(undefined, 0x10bdc13),REFG(undefined4, 0x108cc50));
    if (-1 < *((int *)GEN_TOP(((int)this + 0x1b40)))) {
      uVar2 = 0xb82;
      switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP(((int)this + 0x1b40))))) {
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
      uVar7 = 0;
      uVar5 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar2,uVar5,uVar7);
      F_0042e430(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1);
    }
    uVar6 = 0;
    uVar2 = 1;
    uVar4 = 0;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,0x41,uVar1,uVar4,uVar2,uVar6);
    *((undefined1 *)GEN_TOP(((int)this + 0x1b3c))) = 0;
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar3;
  }
  return uVar1;
}

/* ref: FUN_0076f6a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  
  if (REFG(int, 0x14ab050) < 1) {
    if (*((int *)GEN_TOP(((int)this + 0x18e4))) != REFG(int, 0x14ab050)) {
      uVar10 = 0;
      uVar11 = 1;
      uVar7 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0x462;
      pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
      uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar5,uVar8,uVar9);
      F_00431250(param_2 GEN_EDX_ARG,0x40,uVar2,uVar7,uVar11,uVar10);
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xd8))) == 0) {
        *((int *)GEN_TOP(((int)this + 0x18e4))) = REFG(int, 0x14ab050);
        return;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xd8))) = 0;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    *((int *)GEN_TOP(((int)this + 0x18e4))) = REFG(int, 0x14ab050);
    return;
  }
  iVar3 = (int)*(float *)&REFG(undefined, 0x14ab054);
  bVar4 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x14ab054) - (float10)iVar3) || GEN_ISNAN((float10)0);
  if (bVar4 == (bVar4 || (float10)*(float *)&REFG(undefined, 0x14ab054) - (float10)iVar3 == (float10)0)) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xd8)))) {
    uVar10 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar5 = 0x461;
    iVar6 = iVar3;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar1 GEN_EDX_ARG,uVar5,iVar6);
    F_00431250(param_2 GEN_EDX_ARG,0x40,uVar2,uVar7,uVar8,uVar10);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xd8))) == iVar3) {
      *((int *)GEN_TOP(((int)this + 0x18e4))) = REFG(int, 0x14ab050);
      return;
    }
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xd8))) = iVar3;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  *((int *)GEN_TOP(((int)this + 0x18e4))) = REFG(int, 0x14ab050);
  return;
}

/* ref: FUN_0076f7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076f7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x76f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  uVar1 = F_00ab21a0(param_3);
  F_00ab2b40((uint)*((byte *)GEN_TOP((uVar1 + 0x3f))));
  *((undefined4 *)GEN_TOP(((int)this + 0xdc4))) = *((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 + 62000;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x48))) != iVar2) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x48))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0xdc4))) == 0x20) {
    iVar2 = 2;
  }
  else if (*((int *)GEN_TOP(((int)this + 0xdc4))) == 0x21) {
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x50))) != iVar2) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x50))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 0;
  uVar7 = 0x7e7;
  if (*piVar4 == 0) {
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
    uVar6 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,param_3);
    F_00431250(param_2 GEN_EDX_ARG,0x3e,uVar6,uVar8,uVar9,uVar10);
    uVar1 = F_00431250(param_2 GEN_EDX_ARG,0x3d,(*((uint *)GEN_TOP((uVar1 + 0xc))) & 0xffffff) + uVar1 + 0xc,0,1,0);
    return uVar1;
  }
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
  uVar1 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,param_3);
  F_00431250(param_2 GEN_EDX_ARG,0x3d,uVar1,uVar8,uVar9,uVar10);
  uVar1 = F_00431250(param_2 GEN_EDX_ARG,0x3e,&REFG(undefined, 0x10bdc25),0,1,0);
  return uVar1;
}

/* ref: FUN_0076f8f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0076f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x76f8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x1379694);
  iVar2 = *((int *)GEN_TOP((REFG(int, 0x1379694) + 0x1694)));
  if (**((int * PTR32 *)GEN_TOP((param_1 + 0x20))) != *((int *)GEN_TOP((REFG(int, 0x1379694) + 0x1690)))) {
    **((int * PTR32 *)GEN_TOP((param_1 + 0x20))) = *((int *)GEN_TOP((REFG(int, 0x1379694) + 0x1690)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4))) != iVar2) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10))) != (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a0)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10))) = (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a0)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14))) != 1000) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x14))) = 1000;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xdc4))))) {
  case 0x1e: ;
  case 0x1f: ;
    iVar2 = *((int *)GEN_TOP((iVar3 + 0x169c)));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8))) != *((int *)GEN_TOP((iVar3 + 0x1698)))) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8))) = *((int *)GEN_TOP((iVar3 + 0x1698)));
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc))) != iVar2) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xc))) = iVar2;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      return 0;
    }
    break;
  case 0x20: ;
    uVar1 = *((ushort *)GEN_TOP((iVar3 + 0x16a4)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x20))) != (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a2)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x20))) = (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a2)));
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x24))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x24))) = (uint)uVar1;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      return 0;
    }
    break;
  case 0x21: ;
    uVar1 = *((ushort *)GEN_TOP((iVar3 + 0x16a8)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18))) != (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a6)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x18))) = (uint)*((ushort *)GEN_TOP((iVar3 + 0x16a6)));
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1c))) = (uint)uVar1;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
  }
  return 0;
}

/* ref: FUN_0076fa20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0076fa20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x76fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  byte bVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  
  uVar4 = REFG(undefined2, 0x14ab148);
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xdc0))),0);
  uVar10 = uVar5 & 0xffff;
  if ((uVar4 == 0) || ((ushort)uVar5 <= uVar4)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  uVar5 = (uint)bVar1;
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xdc))) != uVar5) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xdc))) = uVar5;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  uVar17 = 0;
  uVar16 = 1;
  uVar15 = 0;
  uVar13 = 0;
  uVar12 = 0x2fd;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  uVar5 = F_00461d60(pvVar6 GEN_EDX_ARG,uVar12,uVar10,uVar13,uVar5);
  F_00431250(param_4 GEN_EDX_ARG,0,uVar5,uVar15,uVar16,uVar17);
  uVar5 = F_00a683c0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xdc0))));
  uVar10 = F_00a68460(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xdc0))));
  dVar3 = REFG(double, 0x1088108);
  bVar11 = false;
  if (*((int *)GEN_TOP((param_1 + 0xdb8))) != uVar10 + uVar5) {
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x28))) != uVar5) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x28))) = uVar5;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    if (uVar10 == 0) {
      iVar7 = 0;
    }
    else if ((int)uVar5 < (int)uVar10) {
      dVar2 = GEN_X87((double)((float)GEN_TOF((((float10)(int)uVar5 * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                             (float10)(int)uVar10))));
      if (dVar2 < 0.0) {
        iVar7 = (int)(dVar2 - dVar3);
      }
      else {
        iVar7 = (int)(dVar2 + dVar3);
      }
    }
    else {
      iVar7 = 100;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x2c))) != iVar7) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x2c))) = iVar7;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x30))) != uVar10) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x30))) = uVar10;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    uVar17 = 0;
    uVar13 = 1;
    uVar15 = 0;
    uVar12 = 0x3f2;
    uVar8 = uVar5;
    uVar14 = uVar10;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    uVar8 = F_00461c60(pvVar6 GEN_EDX_ARG,uVar12,uVar8,uVar14);
    F_00431250(param_3 GEN_EDX_ARG,0x3f,uVar8,uVar15,uVar13,uVar17);
    *((uint *)GEN_TOP((param_1 + 0xdb8))) = uVar10 + uVar5;
    bVar11 = true;
  }
  uVar8 = F_00a687b0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
  iVar7 = (int)(uVar8 * 300) / 100;
  if ((*((int *)GEN_TOP((param_1 + 0xdbc))) != iVar7) || (bVar11)) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34))) != iVar7) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34))) = iVar7;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    if (uVar10 == 0) {
      iVar9 = 0;
    }
    else if ((int)(iVar7 + uVar5) < (int)uVar10) {
      dVar3 = GEN_X87((double)((float)GEN_TOF((((float10)(int)(iVar7 + uVar5) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                             (float10)(int)uVar10))));
      if (dVar3 < 0.0) {
        iVar9 = (int)(dVar3 - REFG(double, 0x1088108));
      }
      else {
        iVar9 = (int)(dVar3 + REFG(double, 0x1088108));
      }
    }
    else {
      iVar9 = 100;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x38))) != iVar9) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x38))) = iVar9;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    *((int *)GEN_TOP((param_1 + 0xdbc))) = iVar7;
  }
  bVar11 = REFG(char, 0x14a739c) != '\0';
  uVar5 = (uint)bVar11;
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x3c))) != uVar5) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x3c))) = uVar5;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return bVar11;
}

/* ref: FUN_0076fc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0076fc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x76fc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  double dVar8;
  double dVar9;
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
  undefined1 uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  uint local_24;
  
  iVar3 = param_1[1];
  iVar4 = *param_1;
  iVar5 = param_1[3];
  local_24 = param_1[0xe];
  iVar6 = param_1[2];
  if (param_1[4] < 1) goto LAB_0076fd94;
  iVar10 = param_1[4] - 1;
  if (7 < iVar10) {
    iVar10 = 7;
  }
  pvVar17 = ((undefined *)GEN_TOP((iVar10 * 0xb0 + 0x4a8 + (int)this)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x49))) == '\x10') {
    *((undefined2 *)GEN_TOP(((int)pvVar17 + 0xa8))) = 0;
    local_24 = 0xff;
    puVar11 = ((uint *)GEN_TOP(F_00ab3bd0((uint)*((byte *)GEN_TOP(((int)param_1 + 0x49))))));
    if (puVar11 != ((uint *)GEN_TOP(0x0))) {
      pbVar16 = ((byte *)GEN_TOP(((*puVar11 & 0xffffff) + (int)puVar11)));
      pbVar12 = ((byte *)GEN_TOP(F_0042a990(pvVar17 GEN_EDX_ARG)));
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
        F_0042e430(pvVar17 GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11);
      }
    }
  }
  else if (param_1[7] == 0) {
    if ((*((ushort *)GEN_TOP(((int)pvVar17 + 0xa8))) == 0) &&
       (*((char *)GEN_TOP(((int)pvVar17 + 0xac))) == *((char *)GEN_TOP(((int)param_1 + 0x4a))))) {
      pbVar16 = ((byte *)GEN_TOP(F_0042a990((int)pvVar17 + 0x54 GEN_EDX_ARG)));
      pbVar12 = ((byte *)GEN_TOP(param_1[5]));
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
      if ((iVar10 == 0) && (*((char *)GEN_TOP(((int)param_1 + 0x4b))) == *((char *)GEN_TOP(((int)pvVar17 + 0xad)))))
      goto LAB_0076fd71;
    }
    F_0042e430(((undefined *)GEN_TOP(((int)pvVar17 + 0x54))) GEN_EDX_ARG,param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*((char *)GEN_TOP(((int)param_1 + 0x4a))));
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar13 = F_0042a990((int)this + 0xcf8 GEN_EDX_ARG);
    uVar21 = 0x40d;
    pvVar15 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x18))))(piVar7 GEN_EDX_ARG)));
    uVar13 = F_00461190(pvVar15 GEN_EDX_ARG,uVar21,uVar13);
    F_0042e430(pvVar17 GEN_EDX_ARG,uVar13);
    *((short *)GEN_TOP(((int)pvVar17 + 0xa8))) = (short)param_1[7];
    *((undefined1 *)GEN_TOP(((int)pvVar17 + 0xac))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4a)));
    *((undefined1 *)GEN_TOP(((int)pvVar17 + 0xad))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4b)));
  }
  else {
    if ((((uint)*((ushort *)GEN_TOP(((int)pvVar17 + 0xa8))) == param_1[7]) &&
        ((int)*((short *)GEN_TOP(((int)pvVar17 + 0xaa))) == param_1[0x11])) &&
       (*((char *)GEN_TOP(((int)pvVar17 + 0xac))) == *((char *)GEN_TOP(((int)param_1 + 0x4a))))) {
      pbVar16 = ((byte *)GEN_TOP(F_0042a990((int)pvVar17 + 0x54 GEN_EDX_ARG)));
      pbVar12 = ((byte *)GEN_TOP(param_1[5]));
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
      if ((iVar10 == 0) && (*((char *)GEN_TOP(((int)param_1 + 0x4b))) == *((char *)GEN_TOP(((int)pvVar17 + 0xad)))))
      goto LAB_0076fd71;
    }
    F_0042e430(((undefined *)GEN_TOP(((int)pvVar17 + 0x54))) GEN_EDX_ARG,param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*((char *)GEN_TOP(((int)param_1 + 0x4a))));
    iVar10 = param_1[7];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    uVar13 = F_00435340(iVar10);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0xd4c))) GEN_EDX_ARG,uVar13);
    iVar10 = param_1[0x11];
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar13 = F_0042a990((int)this + 0xcf8 GEN_EDX_ARG);
    uVar14 = F_0042a990((int)this + 0xd4c GEN_EDX_ARG);
    uVar21 = 0x40f;
    pvVar15 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x18))))(piVar7 GEN_EDX_ARG)));
    uVar13 = F_00461820(pvVar15 GEN_EDX_ARG,uVar21,uVar14,uVar13,iVar10);
    F_0042e430(pvVar17 GEN_EDX_ARG,uVar13);
    *((short *)GEN_TOP(((int)pvVar17 + 0xa8))) = (short)param_1[7];
    *((short *)GEN_TOP(((int)pvVar17 + 0xaa))) = (short)param_1[0x11];
    *((undefined1 *)GEN_TOP(((int)pvVar17 + 0xac))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4a)));
    *((undefined1 *)GEN_TOP(((int)pvVar17 + 0xad))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x4b)));
  }
LAB_0076fd71: ;
  uVar22 = 0;
  uVar21 = 1;
  uVar20 = 0;
  uVar13 = F_0042a990(pvVar17 GEN_EDX_ARG);
  F_00431250(iVar3 GEN_EDX_ARG,iVar5 + 0x30,uVar13,uVar20,uVar21,uVar22);
LAB_0076fd94: ;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + iVar6 * 4))) != param_1[4]) {
    pvVar17 = ((undefined *)GEN_TOP(((int)this + 0xcf8)));
    F_0042aca0(pvVar17 GEN_EDX_ARG);
    uVar13 = F_004352e0((iVar6 - 9) / 0x13 + 1);
    F_0042e430(pvVar17 GEN_EDX_ARG,uVar13);
    uVar22 = 0;
    uVar21 = 1;
    uVar20 = 0;
    uVar13 = F_0042a990(pvVar17 GEN_EDX_ARG);
    F_00431250(iVar3 GEN_EDX_ARG,iVar5,uVar13,uVar20,uVar21,uVar22);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + iVar6 * 4))) != param_1[4]) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + iVar6 * 4))) = param_1[4];
      *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
    }
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x10 + iVar6 * 4))) != param_1[8]) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x10 + iVar6 * 4))) = param_1[8];
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  dVar9 = REFG(double, 0x1088108);
  iVar10 = param_1[9];
  fVar19 = (float10)*(double *)&REFG(undefined, 0x1088118);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[8] < iVar10) {
    dVar8 = GEN_X87((double)((float)GEN_TOF((((float10)param_1[8] * fVar19) / (float10)iVar10))));
    if (dVar8 < 0.0) {
      iVar10 = (int)(dVar8 - REFG(double, 0x1088108));
    }
    else {
      iVar10 = (int)(dVar8 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0xc + iVar6 * 4))) != iVar10) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0xc + iVar6 * 4))) = iVar10;
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x18 + iVar6 * 4))) != param_1[10]) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x18 + iVar6 * 4))) = param_1[10];
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  iVar10 = param_1[0xb];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[10] < iVar10) {
    dVar8 = GEN_X87((double)((float)GEN_TOF((((float10)param_1[10] * fVar19) / (float10)iVar10))));
    if (dVar8 < 0.0) {
      iVar10 = (int)(dVar8 - dVar9);
    }
    else {
      iVar10 = (int)(dVar8 + dVar9);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x14 + iVar6 * 4))) != iVar10) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x14 + iVar6 * 4))) = iVar10;
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x20 + iVar6 * 4))) != param_1[0xc]) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x20 + iVar6 * 4))) = param_1[0xc];
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  iVar10 = param_1[0xd];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[0xc] < iVar10) {
    dVar8 = GEN_X87((double)((float)GEN_TOF((((float10)param_1[0xc] * fVar19) / (float10)iVar10))));
    if (dVar8 < 0.0) {
      iVar10 = (int)(dVar8 - dVar9);
    }
    else {
      iVar10 = (int)(dVar8 + dVar9);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x1c + iVar6 * 4))) != iVar10) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x1c + iVar6 * 4))) = iVar10;
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  uVar13 = param_1[7] << 0x10 | local_24;
  puVar11 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 4 + iVar6 * 4)));
  if (*puVar11 != uVar13) {
    *puVar11 = uVar13;
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 8 + iVar6 * 4))) != param_1[0x10]) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 8 + iVar6 * 4))) = param_1[0x10];
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x48 + iVar6 * 4))) != param_1[6]) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x48 + iVar6 * 4))) = param_1[6];
    *((undefined1 *)GEN_TOP((iVar4 + 0x1d))) = 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) + 0x60 + iVar5 * 4)));
  if (*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) + 0x60 + iVar5 * 4))) != &REFG(undefined, 0x10bdc27)) {
    *puVar1 = &REFG(undefined, 0x10bdc27);
    *((undefined1 *)GEN_TOP((iVar3 + 0x1d))) = 1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00770210 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00770210(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x770210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = F_00ab2b40(param_1);
    if (uVar1 != 0) {
      return (*((uint *)GEN_TOP((uVar1 + 4))) & 0xffffff) + (int)(uVar1 + 4);
    }
  }
  return 0x10bdc4d;
}

/* ref: FUN_00770240 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00770240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x770240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  if ((param_4 == 0) || (*((char *)GEN_TOP((param_4 + 0x68))) != '\x03')) {
    return 0;
  }
  puVar2 = ((uint *)GEN_TOP(F_00ab2c30((uint)*((byte *)GEN_TOP((param_4 + 0x69))))));
  if ((puVar2 != ((uint *)GEN_TOP(0x0))) && (uVar1 = puVar2[3], uVar1 != 0)) {
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x54 + param_3 * 0x4c))) != uVar1) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x54 + param_3 * 0x4c))) = uVar1;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    F_00431250(param_2 GEN_EDX_ARG,param_3 * 5 + 0x48,&REFG(undefined, 0x10bdc4e),0,1,0);
    F_00431250(param_2 GEN_EDX_ARG,param_3 * 5 + 0x70,(*puVar2 & 0xffffff) + (int)puVar2,0,1,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_007702e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007702e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7702e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint * puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (((param_3 == 0) || (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3), uVar2 == 0)) ||
     (pcVar3 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3))), *pcVar3 == '\0')) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x68 + param_4 * 0x4c)));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x68 + param_4 * 0x4c))) != 0) {
      *puVar1 = 0;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    return (uint)puVar1;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
    uVar2 = F_00ac1a20((uint)*((byte *)GEN_TOP((uVar2 + 1))),*((undefined4 *)GEN_TOP((uVar2 + 4))));
  }
  puVar4 = ((uint *)GEN_TOP(F_00ab1ed0(uVar2)));
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    iVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    if (iVar5 != *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc0 + param_4 * 4)))) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc0 + param_4 * 4))) = iVar5;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
  if (uVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
    fVar6 = *((float *)GEN_TOP((uVar2 + 0x38)));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
  if (uVar2 == 0) {
    fVar7 = 0.0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0xd8))))(param_3);
    fVar7 = *((float *)GEN_TOP((uVar2 + 0x34)));
  }
  uVar2 = F_00906ed0(fVar7,fVar6);
  puVar4 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x68 + param_4 * 0x4c)));
  if (*puVar4 == uVar2) {
    return uVar2;
  }
  *puVar4 = uVar2;
  *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  return uVar2;
}

/* ref: FUN_00770440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (int)*((char *)GEN_TOP((param_2 + 0x415 + in_ecx)));
}

/* ref: FUN_007704b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007704b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7704b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *piVar3;
  if (0 < iVar2) {
    iVar4 = 0x6c;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x434)));
    iVar5 = iVar2;
    do {
      *piVar3 = *((int *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0x20))))));
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 0x4c;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x744))) == 0) {
    *((int *)GEN_TOP(((int)this + 0x458))) = iVar2;
    return (uint)piVar3;
  }
  uVar1 = iVar2 + 1;
  *((uint *)GEN_TOP(((int)this + 0x458))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0x430))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x790)))
  ;
  return uVar1;
}

/* ref: FUN_00770520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    return *((uint *)GEN_TOP((in_ecx + 0x434 + param_2 * 4)));
  }
  return 0xe0000000;
}

/* ref: FUN_00770730 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00770730(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x770730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00770800(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x770800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *in_ecx = 0;
  F_0042aca0(in_ecx + 4 GEN_EDX_FWD);
  uVar1 = F_0042aca0(in_ecx + 0x58 GEN_EDX_ARG);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return uVar1;
}

/* ref: FUN_00770830 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00770830(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x770830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  byte bVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  int * piVar4;
  undefined1 * this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_00 = (gen_frame + 0x10);
  if (*((int *)GEN_TOP((param_1 + 100))) != 0) {
    iVar5 = *((int *)GEN_TOP((param_1 + 0x68)));
    *((int *)GEN_TOP((param_1 + 0x6c))) = param_4;
    if ((iVar5 != param_4) || ((char)param_2 != *((char *)GEN_TOP((param_1 + 99))))) {
      *((char *)GEN_TOP((param_1 + 99))) = (char)param_2;
      if ((param_3 == '\0') &&
         (iVar2 = (int)((double)(param_4 - iVar5) * *(double *)&REFG(undefined, 0x10920a8)), iVar2 != 0)) {
        *((int *)GEN_TOP((param_1 + 0x68))) = iVar5 + iVar2;
      }
      else {
        *((int *)GEN_TOP((param_1 + 0x68))) = param_4;
      }
      uVar7 = *((undefined4 *)GEN_TOP((param_1 + 0x68)));
      piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      uVar6 = 0x12;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_FWD)));
      uVar3 = F_00461bb0(this GEN_EDX_ARG,uVar6,uVar7);
      F_0042e430(((undefined *)GEN_TOP((param_1 + 0x70))) GEN_EDX_ARG,uVar3);
      uVar3 = F_0042a990(param_1 + 0x70 GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      bVar1 = *((byte *)GEN_TOP((param_1 + 99)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 100))),2,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar5 = 1;
      do {
        this_00 = this_00 - 8;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
    }
  }
  return;
}

/* ref: FUN_00770920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1af4))) = param_2;
  if (*((char *)GEN_TOP((in_ecx + 0x1afc))) != '\x03') {
    *((undefined1 *)GEN_TOP((in_ecx + 0x1afc))) = 1;
  }
  return param_2;
}

/* ref: FUN_00770940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1af4))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1afc))) = 2;
  return param_2;
}

/* ref: FUN_00770960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1af4))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1afc))) = 3;
  return param_2;
}

/* ref: FUN_00770980 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00770980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x770980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *((byte *)GEN_TOP((in_ecx + 0x1afd))) = param_4;
  return param_4;
}

/* ref: FUN_00770990 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00770990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x770990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0x28);
  uVar3 = REFG(undefined2, 0x14b29b6);
  bVar2 = REFG(undefined1, 0x14b29b4);
  if ((uVar5 != 0) && (REFG(int, 0x137104c) != 0)) {
    fVar1 = *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1268)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc))) != (uint)*((byte *)GEN_TOP(((int)this + 0x1afc)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc))) = (uint)*((byte *)GEN_TOP(((int)this + 0x1afc)));
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x10))) != *((int *)GEN_TOP(((int)this + 0x1af4)))) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x10))) = *((int *)GEN_TOP(((int)this + 0x1af4)));
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (**((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) != (uint)bVar2) {
      **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) = (uint)bVar2;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) != (uint)uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) = (uint)uVar3;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8))) != (uint)*((byte *)GEN_TOP(((int)this + 0x1afd)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8))) = (uint)*((byte *)GEN_TOP(((int)this + 0x1afd)));
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x18))) != (int)fVar1) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x18))) = (int)fVar1;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    *((undefined2 *)GEN_TOP(((int)this + 0x1afc))) = 0;
  }
  return 0;
}

/* ref: FUN_00770a70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00770a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x770a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 4)) && (param_1[1] != 0)) {
    if (*((int *)GEN_TOP(((int)this + 0x18e0))) != 0) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18e0))),0);
      *((undefined4 *)GEN_TOP(((int)this + 0x18e0))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x18d8))) = 0;
  }
  return;
}

/* ref: FUN_00770ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x770ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = F_00533210(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if ((*param_1 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
  }
  if (iVar5 == 0) {
    REFG(undefined4, 0x1378bbc) = 0;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,10);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
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
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + uVar4 * 8)));
      uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
      F_0053f5a0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar2 = F_00547d00(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
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
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + uVar4 * 8)));
      uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
      uVar2 = F_0053f5a0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00770bc0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00770bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x770bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0xe8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x15);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14))) != 1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe8))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  }
  return;
}

/* ref: FUN_00770c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00770c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x770c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0xe8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00770c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00770c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x770c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: FUN_00770c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00770c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x770c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: FUN_00770c80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00770c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x770c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 < 0x12) && (param_2 < 0x10)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,5);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      uVar5 = F_0043aed0(uVar5 GEN_EDX_ARG,param_1,param_2);
      uVar5 = F_0042a990(uVar5 + 0x110 GEN_EDX_ARG);
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + ((param_1 * 0x10 + param_2) * 3 + 2) * 4)));
      if (uVar5 != *puVar1) {
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc)));
      *puVar1 = *puVar1 | 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
  }
  return;
}

/* ref: FUN_00770d30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00770d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x770d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 0x10) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,5);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      uVar5 = F_0042a990(uVar5 + param_1 * 0x164 + 0x191d8 GEN_EDX_ARG);
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (param_1 * 3 + 0x362) * 4)));
      if (uVar5 != *puVar1) {
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc)));
      *puVar1 = *puVar1 | 0x40000;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
  }
  return;
}

/* ref: FUN_00770dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x770dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (*((uint *)GEN_TOP(((int)this + 0xdcc))) != param_1) {
    *((uint *)GEN_TOP(((int)this + 0xdcc))) = param_1;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,6);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x2d2c))) = *((undefined4 *)GEN_TOP(((int)this + 0xdcc)));
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00770e20 */
GEN_OWN GEN_FRAME uint F_00770e20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x770e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)*((byte *)GEN_TOP((param_2 + 8))) - (uint)*((byte *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00770e40 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00770e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x770e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x190, 0, 4);
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  float10 fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c));
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (REFG(int, 0x1379694) != 0) {
    (*(uint *)(gen_frame + 0x10)) = *((uint *)GEN_TOP((REFG(int, 0x1379694) + 0x74)));
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x14)) = ((undefined2 *)GEN_TOP((param_3 + 6)));
  (*(gen_size32 *)(gen_frame + 0x1c)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x24));
  do {
    uVar2 = F_00b7ab60(param_3 GEN_EDX_ARG,iVar5);
    if (uVar2 != 0) {
      uVar3 = F_00ab1ff0(uVar2);
      if (uVar3 != 0) {
        puVar4[-1] = uVar2;
        fVar6 = F_00b7aaf0(param_3 GEN_EDX_ARG,iVar5);
        (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
        gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(longlong)TRUNC(fVar6 + (float10)REFG(double, 0x1088108));
        *puVar4 = (*(undefined4 *)(gen_frame + 0x0));
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        uVar1 = *(*(undefined2 * PTR32 *)(gen_frame + 0x14));
        *(undefined1 *)(puVar4 + 1) = *((undefined1 *)GEN_TOP((uVar3 + 0x11)));
        *((undefined2 *)GEN_TOP(((int)puVar4 + 6))) = uVar1;
        uVar2 = F_00b7ab80(param_3 GEN_EDX_ARG,iVar5);
        (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x1c)) + 1;
        *((bool *)GEN_TOP(((int)puVar4 + 5))) = uVar2 == (*(uint *)(gen_frame + 0x10));
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
  return uVar2;
}

/* ref: FUN_00770fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00770fb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x770fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x45c + param_2 * 8))) = 0;
  *((int *)GEN_TOP((param_1 + 0x460 + param_2 * 8))) = param_2;
  if ((param_4 != '\0') && (0 < REFG(int, 0x14aa744))) {
    piVar2 = &REFG(undefined4, 0x14a9e84);
    while (*piVar2 != param_3) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x12;
      if (REFG(int, 0x14aa744) <= (int)uVar1) {
        return uVar1;
      }
    }
    uVar1 = (&REFG(undefined4, 0x14a9e88))[(int)(uVar1 * 0x12)];
    *((uint *)GEN_TOP((param_1 + 0x45c + param_2 * 8))) = uVar1;
    if (*((int *)GEN_TOP((param_1 + 0x4a4))) < (int)uVar1) {
      *((uint *)GEN_TOP((param_1 + 0x4a4))) = uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00771030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x771030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((-1 < param_2) && (param_2 < *((int *)GEN_TOP((in_ecx + 0x1a68))))) {
    return *((uint *)GEN_TOP((in_ecx + 0x18ec + param_2 * 0xc)));
  }
  return 0;
}

/* ref: FUN_00771060 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00771060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18dc)));
  if (iVar1 < 0x10) {
    pcVar3 = ((char *)GEN_TOP((iVar1 * 0xb0 + 0xdd8 + (int)this)));
    iVar2 = iVar1;
    do {
      if (*pcVar3 == '\0') goto LAB_007710b4;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = ((char *)GEN_TOP(((int)this + 0xdd8)));
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007710d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7710d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18dc)));
  if (iVar1 < 0x10) {
    pcVar3 = ((char *)GEN_TOP((iVar1 * 0xb0 + 0xdd8 + (int)this)));
    iVar2 = iVar1;
    do {
      if (*pcVar3 != '\0') goto LAB_00771124;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = ((char *)GEN_TOP(((int)this + 0xdd8)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x771140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  __time64_t _Var4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,9);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,8);
    if (uVar3 != 0) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14c))) != param_2) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14c))) = param_2;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0xb68;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar6,uVar7,uVar8);
      if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 300)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 300))) = uVar2;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      F_00431250(uVar3 GEN_EDX_ARG,0x4c,param_1,0,1,0);
    }
  }
  *((int *)GEN_TOP(((int)this + 0x1b00))) = param_2 * 1000;
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x1b08))) = (int)_Var4;
  uVar5 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x1b10))) = uVar5;
  uVar5 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x1b18))) = uVar5;
  return (uint)uVar5;
}

/* ref: FUN_00771220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00771220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14c))) != 0)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14c))) = 0;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00771260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x771260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,9);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,8);
    if (uVar3 != 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      if (*((char *)GEN_TOP((uVar4 + 0x29254))) == '\0') {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1ac))) != param_2 + 1) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1ac))) = param_2 + 1;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0xb69;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar2 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar7,uVar8,uVar10);
        if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x170)))) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x170))) = uVar2;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (param_1 != 0) {
          F_00431250(uVar3 GEN_EDX_ARG,0x5d,param_1,0,1,0);
        }
        uVar9 = 0;
        uVar10 = 1;
        uVar6 = 0;
        uVar8 = 3;
        uVar7 = 0x7fc;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar2 = F_00460c80(pvVar5 GEN_EDX_ARG,uVar7,param_2,uVar8);
        uVar2 = F_00431250(uVar3 GEN_EDX_ARG,0x5e,uVar2,uVar6,uVar10,uVar9);
        return uVar2;
      }
    }
  }
  uVar2 = F_00c49908((int)this + 0x1b20,0x16,param_1);
  *((int *)GEN_TOP(((int)this + 0x1b38))) = param_2;
  return uVar2;
}

/* ref: FUN_00771380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00771380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1ac))) != 0)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1ac))) = 0;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar2;
}

/* ref: FUN_007713c0 */
GEN_OWN GEN_NOFRAME unsigned int F_007713c0(void)
{
  GEN_ENTER(0x7713c0u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69960(&REFG(int, 0x14b119c) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_007713e0 */
GEN_OWN GEN_FRAME uint F_007713e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7713e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00771410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP((uVar2 + 0x23534))) = 0;
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,iVar1,0);
  }
  return uVar2;
}

/* ref: FUN_00771480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x771480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  int * piVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar1;
}

/* ref: FUN_00771500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x771500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xe0000000;
  uVar2 = (*pcVar1)(this);
  return uVar2;
}

/* ref: FUN_00771530 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00771530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x771530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((((char)uVar1 != '\0') && (uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))), uVar1 != 0xe0000000)) &&
      (uVar1 == param_1)) && (*((int *)GEN_TOP(((int)this + 0x1b4))) == 1)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    iVar4 = *piVar3;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,(int)this + 0x1c);
    ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0xc))))(piVar3,((undefined1 *)(gen_frame + 0x0)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar4 = (int)this + 0x1c;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = F_0043be20(this_00 GEN_EDX_ARG,iVar4);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xe0000000;
    *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 2;
  }
  return uVar1;
}

/* ref: FUN_00771600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x771600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((((char)uVar1 != '\0') && (*((int *)GEN_TOP(((int)this + 0x14))) != -0x20000000)) &&
      (uVar1 = param_1, *((int *)GEN_TOP(((int)this + 0x14))) == *((int *)GEN_TOP((param_1 + 0x18))))) &&
     (*((int *)GEN_TOP(((int)this + 0x1b8))) == 1)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x148))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)this + 0x150))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    *((undefined4 *)GEN_TOP(((int)this + 0x154))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    *((undefined2 *)GEN_TOP(((int)this + 0x158))) = *((undefined2 *)GEN_TOP((param_1 + 0x24)));
    *((undefined1 *)GEN_TOP(((int)this + 0x15a))) = *((undefined1 *)GEN_TOP((param_1 + 0x28)));
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x15c))) GEN_EDX_ARG,param_1 + 0x2b);
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xe0000000;
    *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 2;
  }
  return uVar1;
}

/* ref: FUN_00771690 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00771690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x1b0))) = 3;
  return;
}

/* ref: FUN_007716a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007716a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7716a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x3b4, 12, 4);
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
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x3ac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3b0);
  puVar4 = ((undefined4 *)(gen_frame + 0x1a4));
  iVar9 = 0x40;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar9 = iVar9 - 1;
  } while (-1 < iVar9);
  F_005a2710(((undefined4 *)(gen_frame + 0x1a4)) GEN_EDX_FWD,4);
  ((undefined4 *)(gen_frame + 0x1a4))[1] = 1;
  puVar5 = ((uint *)GEN_TOP(F_00ab2020((uint)REFG(undefined2, 0x14ab40a))));
  if (puVar5 == ((uint *)GEN_TOP(0x0))) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1b8)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b0)) = &REFG(undefined, 0x10bdd6f);
  }
  else {
    uVar10 = puVar5[2];
    F_005a2710(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1b8)) = (uint)((char)uVar10 == '\0');
    if (REFG(char, 0x14ab40f) == '\0') {
      uVar10 = *puVar5;
      F_005a2710(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1b0)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)puVar5)));
    }
    else {
      uVar10 = puVar5[1];
      F_005a2710(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1b0)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)(puVar5 + 1))));
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1bc)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x1c0)) = &REFG(undefined, 0x14ab3b4);
  F_005a2710(((undefined1 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x2c0)) = &REFG(undefined, 0x14ab3f4);
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
  uVar15 = 0;
  uVar14 = 900;
  uVar16 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar10 = F_00461d60(pvVar6 GEN_EDX_ARG,uVar14,uVar10,uVar15,uVar11);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10,uVar16);
  uVar10 = (uint)REFG(undefined1, 0x14ab407);
  F_005a2710(((undefined1 *)(gen_frame + 0x1c4)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1c8)) = uVar10;
  uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0x1cc)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x1d0)) = uVar10;
  F_0042b630(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  uVar10 = F_00ab21a0((uint)REFG(undefined1, 0x14ab406));
  if (uVar10 == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1d4)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x1d8)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1e0)) = &REFG(undefined, 0x10bdd9a);
    F_005a2710(((undefined1 *)(gen_frame + 0x1e4)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1e8)) = &REFG(undefined, 0x10bdd9b);
  }
  else {
    if (REFG(undefined1, 0x14ab406) != 0) {
      iVar9 = REFG(undefined1, 0x14ab406) + 62000;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x1d4)) GEN_EDX_ARG,4);
    uVar11 = (uint)REFG(undefined1, 0x14ab406);
    (*(int *)(gen_frame + 0x1d8)) = iVar9;
    uVar16 = 0x7e7;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar11 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar16,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,uVar11);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG)));
    if (*piVar7 == 0) {
      uVar11 = *((uint *)GEN_TOP((uVar10 + 0xc)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1e0)) = ((undefined *)GEN_TOP(((uVar11 & 0xffffff) + (int)(uVar10 + 0xc))));
      puVar8 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1e4)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1e8)) = puVar8;
    }
    else {
      puVar8 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1e0)) = puVar8;
      F_005a2710(((undefined1 *)(gen_frame + 0x1e4)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1e8)) = &REFG(undefined, 0x10bdd99);
    }
  }
  iVar9 = 0;
  puVar13 = ((uint *)GEN_TOP(((int)this + 0xfc)));
  puVar5 = ((uint *)(gen_frame + 0x338));
  do {
    uVar10 = puVar13[-0xe];
    F_005a2710(puVar5 - 0x53 GEN_EDX_ARG,4);
    cVar1 = *((char *)GEN_TOP(((int)this + iVar9 + 0x134)));
    puVar5[-0x52] = uVar10;
    F_005a2710(puVar5 - 1 GEN_EDX_ARG,4);
    uVar10 = *puVar13;
    *puVar5 = (uint)(cVar1 != '\0');
    F_005a2710(puVar5 - 0x1d GEN_EDX_ARG,4);
    puVar5[-0x1c] = uVar10;
    iVar9 = iVar9 + 1;
    puVar13 = puVar13 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar9 < 0xe);
  F_0042b630(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  if (REFG(undefined1, 0x14ab40c) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x264)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x268)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x26c)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x270)) = &REFG(undefined, 0x10bddc5);
    F_005a2710(((undefined1 *)(gen_frame + 0x274)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x278)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x27c)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x280)) = &REFG(undefined, 0x10bddc6);
    F_005a2710(((undefined1 *)(gen_frame + 0x284)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x288)) = &REFG(undefined, 0x10bddc7);
  }
  else {
    uVar10 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38c;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar10 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar16,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar10);
    uVar10 = (uint)REFG(undefined1, 0x14ab405);
    uVar12 = (uint)REFG(undefined1, 0x14ab40d);
    uVar11 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38a;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar10 = F_00461d60(pvVar6 GEN_EDX_ARG,uVar16,uVar11,uVar12,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar10);
    uVar11 = (uint)REFG(undefined1, 0x14ab405);
    uVar10 = (uint)REFG(undefined1, 0x14ab40d);
    uVar12 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38b;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar10 = F_00461d60(pvVar6 GEN_EDX_ARG,uVar16,uVar12,uVar10,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,uVar10);
    uVar10 = F_00434d60((uint)REFG(undefined1, 0x14ab40c));
    F_005a2710(((undefined1 *)(gen_frame + 0x264)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x268)) = uVar10;
    puVar8 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x26c)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x270)) = puVar8;
    uVar10 = F_00434d10((uint)REFG(undefined1, 0x14ab40c),(uint)REFG(undefined1, 0x14ab40d),1);
    F_005a2710(((undefined1 *)(gen_frame + 0x274)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x278)) = uVar10;
    puVar8 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x27c)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x280)) = puVar8;
    puVar8 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x284)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x288)) = puVar8;
  }
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x41,((undefined4 *)(gen_frame + 0x1a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar5 = &(*(uint *)(gen_frame + 0x3ac));
  iVar9 = 0x40;
  do {
    puVar5 = puVar5 - 2;
    uVar10 = F_005a2670(puVar5 GEN_EDX_ARG);
    iVar9 = iVar9 - 1;
  } while (-1 < iVar9);
  return uVar10;
}

/* ref: FUN_00771ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
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
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 2;
  uVar2 = F_0042a990((int)this + 0x1c GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0xbc)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_00771d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x2b8, 8, 4);
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
  
  (*(uint *)(gen_frame + 0x2b0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2b4);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)(gen_frame + 0xa8));
  iVar6 = 0x40;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
  ((undefined4 *)(gen_frame + 0xa8))[1] = 3;
  if (*((int *)GEN_TOP(((int)this + 0x148))) == 0 && *((int *)GEN_TOP(((int)this + 0x14c))) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x190)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x194)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x198)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x19c)) = &REFG(undefined, 0x10bdde2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdde3);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bde03);
  }
  else {
    uVar7 = (uint)*((byte *)GEN_TOP(((int)this + 0x15a)));
    uVar9 = 0x38c;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar7);
    uVar7 = (uint)*((ushort *)GEN_TOP(((int)this + 0x158)));
    uVar9 = 0x38d;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar7 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar7);
    uVar7 = F_00434d60((uint)*((byte *)GEN_TOP(((int)this + 0x15a))));
    F_005a2710(((undefined1 *)(gen_frame + 0x190)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x194)) = uVar7;
    puVar4 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x198)) GEN_EDX_ARG,6);
    uVar1 = *((undefined8 *)GEN_TOP(((int)this + 0x150)));
    (*(undefined * PTR32 *)(gen_frame + 0x19c)) = puVar4;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1a4)) = (int)((ulonglong)uVar1 >> 0x20);
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x150)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = uVar9;
    puVar4 = ((undefined *)GEN_TOP(F_0042a990((int)this + 0x15c GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = puVar4;
    puVar4 = ((undefined *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = puVar4;
  }
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x41,((undefined4 *)(gen_frame + 0xa8)));
  this_00 = &(*(uint *)(gen_frame + 0x2b0));
  iVar6 = 0x40;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: FUN_00771fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00771fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x771fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
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
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar3;
}

/* ref: FUN_00772070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00772070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x772070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,0x2a);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1cc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  return uVar2;
}

/* ref: FUN_007720b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007720b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7720b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    return uVar2 == 4;
  }
  return 0;
}

/* ref: FUN_007720f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007720f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7720f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,param_2)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
     ((*((char *)GEN_TOP(((int)pvVar2 + 6))) != '\0' || (*((int *)GEN_TOP(((int)pvVar2 + 8))) != 0)))) {
    if (*((char *)GEN_TOP(((int)pvVar2 + 6))) == '\0') {
      uVar3 = *((uint *)GEN_TOP(((int)pvVar2 + 8)));
      if ((*((byte *)GEN_TOP(((int)pvVar2 + 0x14))) & 1) != 0) {
        uVar3 = uVar3 + 1000000;
      }
    }
    else {
      pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(pvVar2 GEN_EDX_ARG)));
      uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    bVar1 = F_00ac83b0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,3,uVar3,(int)uVar4,(int)(uVar4 >> 0x20),uVar5,uVar6);
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00772170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x772170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * this_00;
  undefined * pvVar7;
  undefined * pvVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int iVar12;
  bool bVar13;
  
  uVar4 = param_1 - 1;
  bVar2 = false;
  uVar5 = uVar4;
  if (8 < uVar4) {
switchD_0077218d_caseD_4: ;
    if ((char)param_2 == '\0') {
      return uVar5;
    }
    bVar2 = true;
    goto switchD_0077218d_caseD_1;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x77232c) + param_1 + 3)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
switchD_0077218d_caseD_1: ;
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG,7);
    iVar10 = 0;
    param_2 = 0;
    do {
      this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2)));
      pvVar8 = this_00;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        iVar1 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
        iVar12 = 0;
        if (0 < iVar1) {
          param_1 = iVar10 * 4 + 0xc;
          iVar10 = iVar1 * 5 + iVar10;
          do {
            pvVar7 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,iVar12)));
            bVar13 = false;
            if ((bVar2) || (pvVar7 == ((undefined *)GEN_TOP(0x0)))) goto switchD_0077226c_caseD_3;
            if (*((char *)GEN_TOP(((int)pvVar7 + 6))) == '\0') {
              if (*((int *)GEN_TOP(((int)pvVar7 + 8))) == 0) goto switchD_0077226c_caseD_3;
              uVar9 = *((uint *)GEN_TOP(((int)pvVar7 + 8)));
              if ((*((byte *)GEN_TOP(((int)pvVar7 + 0x14))) & 1) != 0) {
                uVar9 = uVar9 + 1000000;
              }
            }
            else {
              pvVar8 = ((undefined *)GEN_TOP(F_00a3a860(pvVar7 GEN_EDX_ARG)));
              uVar9 = F_0046e5e0(pvVar8 GEN_EDX_ARG);
            }
            uVar9 = F_00ab24a0(uVar9);
            pvVar8 = ((undefined *)GEN_TOP(0x0));
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
              uVar9 = F_00a3e8f0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,iVar12);
              goto LAB_007722bb;
            case 8: ;
              uVar9 = F_00a3eaa0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,iVar12);
LAB_007722bb: ;
              bVar13 = uVar9 != 0;
            }
switchD_0077226c_caseD_3: ;
            puVar11 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + param_1)));
            pvVar8 = ((undefined *)GEN_TOP(*puVar11));
            pvVar7 = ((undefined *)GEN_TOP(((((uint)bVar13 << 8 | (int)((int)(uintptr_t)pvVar8) >> 0x10 & 0xffU) << 8 |
                              (int)((int)(uintptr_t)pvVar8) >> 8 & 0xffU) << 8 | (uint)pvVar8 & 0xff)));
            if (pvVar8 != pvVar7) {
              *puVar11 = (uint)pvVar7;
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
LAB_007722fe: ;
            param_1 = param_1 + 0x14;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar1);
        }
      }
      param_2 = param_2 + 1;
      if (3 < param_2) {
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x772360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if ((((param_2 != ((byte *)GEN_TOP(0x0))) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (*(int *)(param_2 + 4) == -1)) {
    this[0x44] = (undefined1)0x0;
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007723a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007723a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7723a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2c)));
  if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
    return 0;
  }
  if ((*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') || (uVar3 = F_00a3a860(param_1 GEN_EDX_FWD), uVar3 == 0)) {
    uVar2 = *((ushort *)GEN_TOP(((int)param_1 + 0x10)));
  }
  else {
    pvVar4 = ((undefined *)GEN_TOP(F_00a3a860(param_1 GEN_EDX_ARG)));
    uVar2 = F_0071d210(pvVar4 GEN_EDX_ARG);
  }
  if (uVar2 / 100 == 0) {
    if ((*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') || (uVar3 = F_00a3a860(param_1 GEN_EDX_ARG), uVar3 == 0)) {
      uVar2 = *((ushort *)GEN_TOP(((int)param_1 + 0x10)));
    }
    else {
      pvVar4 = ((undefined *)GEN_TOP(F_00a3a860(param_1 GEN_EDX_ARG)));
      uVar2 = F_0071d210(pvVar4 GEN_EDX_ARG);
    }
    return (uint)(uVar2 != 0);
  }
  return uVar2 / 100;
}

/* ref: FUN_00772450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00772450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x772450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 1;
  if ((param_4 == 0x7d4) || (*((int *)GEN_TOP(((int)this + 0x2c))) == 10)) {
    uVar1 = F_00ab2510(param_5);
    *param_2 = uVar1;
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x40))) = (uint)*((byte *)GEN_TOP((uVar1 + 0x20)));
      return 1;
    }
  }
  else {
    uVar1 = F_00ab24a0(param_5);
    *param_1 = uVar1;
    if (uVar1 != 0) {
      uVar1 = F_00ab25d0((uint)*((byte *)GEN_TOP((uVar1 + 0xa1))));
      *param_3 = uVar1;
      if (uVar1 != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *((undefined4 *)GEN_TOP((*param_1 + 0x28)));
        if (param_5 < 0x17) {
          return 1;
        }
        if (0x1a < param_5) {
          return 1;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 2000;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007724f0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007724f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7724f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if ((*((char *)GEN_TOP(((int)param_3 + 6))) == '\0') || (uVar3 = F_00a3a860(param_3 GEN_EDX_ARG), uVar3 == 0)) {
      uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
    }
    else {
      uVar3 = uVar5;
      pvVar4 = ((undefined *)GEN_TOP(F_00a3a860(param_3 GEN_EDX_ARG)));
      uVar2 = F_0071d2c0(pvVar4 GEN_EDX_ARG,uVar3);
    }
    if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP((param_1 + uVar5 * 4))) = 0;
      *((undefined1 *)GEN_TOP((uVar5 + param_2))) = 0;
    }
    else {
      if ((*((char *)GEN_TOP(((int)param_3 + 6))) == '\0') || (uVar3 = F_00a3a860(param_3 GEN_EDX_ARG), uVar3 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_3)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = ((undefined *)GEN_TOP(F_00a3a860(param_3 GEN_EDX_ARG)));
        bVar1 = F_0071d300(pvVar4 GEN_EDX_ARG,uVar3);
      }
      if ((*((char *)GEN_TOP(((int)param_3 + 6))) == '\0') || (uVar3 = F_00a3a860(param_3 GEN_EDX_ARG), uVar3 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = ((undefined *)GEN_TOP(F_00a3a860(param_3 GEN_EDX_ARG)));
        uVar2 = F_0071d2c0(pvVar4 GEN_EDX_ARG,uVar3);
      }
      uVar3 = F_00ab20e0((uint)uVar2);
      *((uint *)GEN_TOP((param_1 + uVar5 * 4))) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar3 + (uint)bVar1 * 4))));
      if (uVar3 == 0) {
        return 0;
      }
      *((byte *)GEN_TOP((uVar5 + param_2))) = bVar1;
    }
    uVar5 = uVar5 + 1;
    if (4 < (int)uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_007725f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007725f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7725f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  if (param_2 == 0) {
    if (*((char *)GEN_TOP((param_3 + 0xa0))) == '\r') {
      return 2;
    }
    if (*((char *)GEN_TOP((param_3 + 0xa6))) != '\0') {
      return 1;
    }
  }
  else if ((param_4 == 0x7d4) || (*((int *)GEN_TOP((in_ecx + 0x2c))) == 10)) {
    return 3;
  }
  return 0;
}

/* ref: FUN_00772640 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00772640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x772640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  ushort uVar1;
  
  if (param_1 != 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x2c))) == 2) && (param_3 == 0x7d9)) {
      uVar1 = (ushort)REFG(undefined1, 0x14ab408);
    }
    else {
      if (param_3 == 9999) {
        return;
      }
      if (*param_2 < 1000) {
        return;
      }
      uVar1 = REFG(undefined2, 0x14ab148);
      if (1000 < *param_2) {
        return;
      }
    }
    if ((uVar1 != 0) && (uVar1 < *((byte *)GEN_TOP((param_1 + 0x9f))))) {
      *((undefined1 *)GEN_TOP(((int)this + 0x45))) = 1;
    }
  }
  return;
}

/* ref: FUN_007726a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007726a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x7726a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int * piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x44))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x92)));
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x48))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x94)));
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x4c))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x96)));
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x50))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x98)));
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x54))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x9a)));
  *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x58))) * 4))) = (int)*((short *)GEN_TOP((param_2 + 0x9c)));
  if ((param_5 - 0xf4241U < 999999) && (*((char *)GEN_TOP((param_2 + 0xa7))) == '\x01')) {
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x5c))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb1)));
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x60))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb2)));
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 100))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb3)));
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x68))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb4)));
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x6c))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb5)));
    piVar1 = ((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((param_2 + 0x70))) * 4)));
    *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((param_2 + 0xb6)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
  if ((((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) && (*((char *)GEN_TOP((param_2 + 0xa3))) == '\a')) {
    uVar7 = 0;
    do {
      if (*((int *)GEN_TOP((param_4 + uVar7 * 4))) != 0) {
        if ((*((char *)GEN_TOP(((int)param_3 + 6))) == '\0') || (uVar5 = F_00a3a860(param_3 GEN_EDX_FWD), uVar5 == 0)) {
          uVar4 = *((ushort *)GEN_TOP(((int)param_3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar5 = uVar7;
          pvVar6 = ((undefined *)GEN_TOP(F_00a3a860(param_3 GEN_EDX_ARG)));
          uVar4 = F_0071d2c0(pvVar6 GEN_EDX_ARG,uVar5);
        }
        if (uVar4 != 0) {
          if ((*((char *)GEN_TOP(((int)param_3 + 6))) == '\0') || (uVar5 = F_00a3a860(param_3 GEN_EDX_ARG), uVar5 == 0))
          {
            bVar3 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar5 = uVar7;
            pvVar6 = ((undefined *)GEN_TOP(F_00a3a860(param_3 GEN_EDX_ARG)));
            bVar3 = F_0071d300(pvVar6 GEN_EDX_ARG,uVar5);
          }
          iVar2 = *((int *)GEN_TOP((param_4 + uVar7 * 4)));
          piVar1 = ((int *)GEN_TOP((param_1 + (uint)*((byte *)GEN_TOP((iVar2 + 0x28))) * 4)));
          *piVar1 = *piVar1 + (int)*((char *)GEN_TOP((bVar3 + 0x29 + iVar2)));
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
  }
  return 0;
}

/* ref: FUN_00772840 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00772840(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x772840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,REFG(undefined4, 0x14a4258))));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,param_3)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
        uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_ARG)));
        uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      }
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 != 0) {
        if (*((char *)GEN_TOP((uVar2 + 0xa0))) == '\x02') {
          *param_1 = param_2;
          return 1;
        }
        *param_1 = param_2 == '\0';
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007728d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007728d0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7728d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != '\0') {
    uVar1 = 0x800;
  }
  if (param_2 != '\0') {
    uVar1 = uVar1 | 0x1000;
  }
  if (param_3 != '\0') {
    uVar1 = uVar1 | 0x2000;
  }
  return uVar1;
}

/* ref: FUN_00772900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772900(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x772900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  if ((param_4 != '\0') || (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + param_2 * 4))) != param_3)) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + param_2 * 4))) = param_3;
    *((bool *)GEN_TOP((uVar1 + 0x1d))) = param_5 == '\0';
  }
  return uVar1;
}

/* ref: FUN_00772930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x20))) + param_1 * 4)));
}

/* ref: FUN_00772950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x772950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00431250(*((undefined4 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD,param_1,param_2,(undefined1)param_3,param_4
                       ,(undefined1)param_5);
  return uVar1;
}

/* ref: FUN_00772960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0x20))) + param_1 * 4)));
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x772980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if ((((param_2 != ((byte *)GEN_TOP(0x0))) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007729c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7729c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((bool *)GEN_TOP(((int)this + 0x24))) = -1 < param_3;
  return -1 < param_3;
}

/* ref: FUN_007729e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007729e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7729e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  if ((param_4 != '\0') || (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + param_2 * 4))) != param_3)) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + param_2 * 4))) = param_3;
    *((bool *)GEN_TOP((uVar1 + 0x1d))) = param_5 == '\0';
  }
  return uVar1;
}

/* ref: FUN_00772a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20))) + param_1 * 4)));
}

/* ref: FUN_00772a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x772a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00431250(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,param_2,(undefined1)param_3,param_4
                       ,(undefined1)param_5);
  return uVar1;
}

/* ref: FUN_00772a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x20))) + param_1 * 4)));
}

/* ref: Client::UI2::Agent::AgentLoot::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x772a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  code * pcVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  if ((0 < param_3) && (((byte)*param_2 & 0xf) == 3)) {
    if (param_2[1] != 0) {
      pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
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
      F_00ae1e00(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_FWD,iVar2);
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentLoot::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00772ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x772ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return;
}

/* ref: FUN_00772b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00772b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00ae1d00(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00ae1b10(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
  if (uVar2 == 1) {
    return 1;
  }
  return *((int *)GEN_TOP(((int)this + 8))) != 0;
}

/* ref: FUN_00772b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  
  uVar2 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_FWD);
  if (param_1 < uVar2) {
    uVar2 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,param_1);
    if (uVar2 != 0) {
      this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
      F_00a35f30(this_00 GEN_EDX_ARG);
      F_00a35ee0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 8))),0);
      *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = (undefined2)param_1;
      *this_00 = 9999;
      F_00a35f80(this_00 GEN_EDX_ARG,1);
      puVar4 = ((ushort *)GEN_TOP((uVar2 + 0xc)));
      uVar2 = 0;
      do {
        uVar1 = *puVar4;
        uVar3 = uVar2 & 0xff;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
        *((ushort *)GEN_TOP(((int)this + uVar3 * 2 + 0x48))) = uVar1 >> 4;
        *((byte *)GEN_TOP((uVar3 + 0x2a + (int)this_00))) = (byte)uVar1 & 0xf;
      } while ((int)uVar2 < 5);
      return (uint)this_00;
    }
  }
  return 0;
}

/* ref: FUN_00772c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x772c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  double dVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0xc);
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar5 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
    uVar8 = 0;
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) = 0;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x104 + uVar8 * 4))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x104 + uVar8 * 4))) = 0;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar6 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,uVar8);
        uVar7 = 0;
        if (uVar6 != 0) {
          cVar1 = *((char *)GEN_TOP((uVar6 + 0x17)));
          if (cVar1 == '\0') {
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) != 0) {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) = 0;
              goto LAB_00772cd9;
            }
          }
          else if ((cVar1 == '\x04') || (cVar1 == '\x03')) {
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) != -1) {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) = 0xffffffff;
              goto LAB_00772cd9;
            }
          }
          else if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) !=
                   (uint)*((byte *)GEN_TOP((uVar6 + 0x18)))) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + uVar8 * 4))) = (uint)*((byte *)GEN_TOP((uVar6 + 0x18)));
LAB_00772cd9: ;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
          dVar2 = (double)*((float *)GEN_TOP((uVar6 + 0x1c)));
          if (*((float *)GEN_TOP((uVar6 + 0x1c))) < 0.0) {
            dVar2 = GEN_X87(dVar2 - REFG(double, 0x1088108));
          }
          else {
            dVar2 = GEN_X87(dVar2 + REFG(double, 0x1088108));
          }
          uVar7 = (uint)dVar2;
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x104 + uVar8 * 4))) != uVar7) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x104 + uVar8 * 4))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return uVar7;
}

/* ref: FUN_00772d30 */
GEN_OWN GEN_NOFRAME byte F_00772d30(void)
{
  GEN_ENTER(0x772d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 1;
  uVar1 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ae1de0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,uVar4);
      if ((uVar2 != 0) && (uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar2 + 8)))), uVar2 == 0)) {
        bVar3 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return bVar3;
}

/* ref: Client::UI2::Agent::AgentMacro::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00772d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x550) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,((char *)REFP(0x10c0178)));
    *(uint *)(this + 0x550) = uVar2;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentMacro::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00772db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x772db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x9f4) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x9f4),0);
    *(undefined4 *)(this + 0x9f4) = 0;
  }
  if (*(int *)(this + 0x9f0) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x9f0),0);
    *(undefined4 *)(this + 0x9f0) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x2c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_00772e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x772e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  if ((*((byte *)GEN_TOP((param_2 + 8))) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP((param_2 + 0xc)));
  }
  uVar1 = (uVar2 & 0xffff) / 100;
  uVar2 = (uVar2 & 0xffff) % 100;
  *((uint *)GEN_TOP(((int)this + 0x554))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x558))) = uVar2;
  uVar2 = F_0043b860(param_1 GEN_EDX_FWD,uVar1,uVar2);
  return uVar2;
}

/* ref: FUN_00772ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x772ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  undefined * this_01;
  int * piVar1;
  uint uVar2;
  undefined * this_02;
  uint uVar3;
  int iVar4;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x55c)));
  F_0042aca0(this_00 GEN_EDX_FWD);
  this_01 = ((undefined *)GEN_TOP(((int)this + 0x5b0)));
  F_0042aca0(this_01 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  F_00559470(uVar2 GEN_EDX_ARG);
  iVar4 = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar2 = F_0043ba80(iVar4);
  iVar4 = 0;
  if (0 < (int)uVar2) {
    param_1 = param_1 + 0x58;
    while( true ) {
      F_0042e360(this_00 GEN_EDX_ARG,param_1);
      param_1 = param_1 + 0x54;
      iVar4 = iVar4 + 1;
      if ((int)uVar2 <= iVar4) break;
      F_0042e370(this_00 GEN_EDX_ARG,&REFG(undefined, 0x10c018c));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar2 = F_0042a990(this_00 GEN_EDX_ARG);
  this_02 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_004470e0(this_02 GEN_EDX_ARG,uVar2);
  F_0042e430(this_01 GEN_EDX_ARG,uVar2);
  uVar2 = F_0042a990(this_00 GEN_EDX_ARG);
  F_005a2710(((undefined *)GEN_TOP((param_2 + 0x18))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((param_2 + 0x1c))) = uVar2;
  uVar2 = F_0042a990(this_01 GEN_EDX_ARG);
  uVar3 = F_005a2710(((undefined *)GEN_TOP((param_2 + 0x20))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((param_2 + 0x24))) = uVar2;
  return uVar3;
}

/* ref: FUN_00772fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x550))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x550))) + 0x24))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x550))) GEN_EDX_ARG,param_1)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00772ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00772ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x772ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = F_00ab25a0(param_1);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if ('\0' < *((char *)GEN_TOP((uVar1 + 4 + iVar3)))) {
        if (iVar3 < 0) {
          return 0;
        }
        if (*((int *)GEN_TOP(((int)this + 0x550))) == 0) {
          return 0;
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x550))) + 0x24))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x550))) GEN_EDX_ARG,
                                   *(undefined4 *)(&REFG(undefined, 0x10c0144) + iVar3 * 4))));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        uVar4 = 0;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
        uVar1 = F_00cb0950(this_00 GEN_EDX_ARG,uVar4);
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xe);
  }
  return 0;
}

/* ref: FUN_00773060 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773060(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x773060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*((char *)GEN_TOP((param_3 + 0xa94))) != '\0') && (uVar2 = *((uint *)GEN_TOP((param_3 + 0xa88))), 1 < uVar2)) &&
     ((uVar2 < 4 || (uVar2 == 5)))) {
    *((undefined1 *)GEN_TOP((param_1 + 0xa1c))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(F_0043b860(param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_3 + 0xa8c))),
                                  *((undefined4 *)GEN_TOP((param_3 + 0xa90))))));
    F_00471680(pvVar1 GEN_EDX_ARG,(uint)(param_4 == '\0') * 0x544 + param_3);
    uVar2 = *((uint *)GEN_TOP((param_3 + 0xa8c)));
    *((uint *)GEN_TOP((param_1 + 0x554))) = uVar2;
    *((undefined4 *)GEN_TOP((param_1 + 0x558))) = *((undefined4 *)GEN_TOP((param_3 + 0xa90)));
    uVar3 = (uint)*((byte *)GEN_TOP((param_1 + 0x558)));
    uVar2 = uVar2 & 0xff;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    F_00459330(pvVar1 GEN_EDX_ARG,uVar2,uVar3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00773110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x773110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0xbe38))) < 2) {
    return in_ecx + 0xa20;
  }
  iVar1 = *((int *)GEN_TOP((in_ecx + 0xbe38))) - 1;
  *((int *)GEN_TOP((in_ecx + 0xbe38))) = iVar1;
  return iVar1 * 0xa98 + 0xa20 + in_ecx;
}

/* ref: FUN_00773140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x773140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xbe38)));
  if (0x10 < uVar1) {
    return (int)this + 0xa20;
  }
  *((uint *)GEN_TOP(((int)this + 0xbe38))) = uVar1 + 1;
  return uVar1 * 0xa98 + 0xa20 + (int)this;
}

/* ref: FUN_007731f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007731f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7731f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,uVar1,uVar2);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameWorld::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00773250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x773250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameRegion::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x773260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((*((int *)GEN_TOP((param_1 + 0xc))) == *((int *)GEN_TOP((param_2 + 0xc)))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameArea::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x773290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((((*((int *)GEN_TOP((param_1 + 0xc))) == *((int *)GEN_TOP((param_2 + 0xc)))) &&
       (*((int *)GEN_TOP((param_1 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10))))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) &&
     (*((int *)GEN_TOP((param_1 + 0x10))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameFloor::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007732c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7732c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((((*((int *)GEN_TOP((param_1 + 0xc))) == *((int *)GEN_TOP((param_2 + 0xc)))) &&
       (*((int *)GEN_TOP((param_1 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10))))) &&
      (*((int *)GEN_TOP((param_1 + 0x14))) == *((int *)GEN_TOP((param_2 + 0x14))))) &&
     (((*((int *)GEN_TOP((param_1 + 0xc))) != 0 && (*((int *)GEN_TOP((param_1 + 0x10))) != 0)) &&
      (*((int *)GEN_TOP((param_1 + 0x14))) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameAreaOrFloor::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x773300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((((*((int *)GEN_TOP((param_1 + 0xc))) == *((int *)GEN_TOP((param_2 + 0xc)))) &&
       (*((int *)GEN_TOP((param_1 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10))))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) &&
     ((*((int *)GEN_TOP((param_1 + 0x10))) != 0 &&
      (((*((int *)GEN_TOP((param_1 + 0x14))) == 0 && (*((int *)GEN_TOP((param_2 + 0x14))) == 0)) ||
       (*((int *)GEN_TOP((param_1 + 0x14))) == *((int *)GEN_TOP((param_2 + 0x14))))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00773350 */
GEN_OWN GEN_FRAME uint F_00773350(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x773350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  if (0 < (int)param_1) {
    uVar1 = F_00ab1e70(param_1);
    if (uVar1 != 0) {
      return (int)((((float10)*((float *)GEN_TOP((uVar1 + 4))) * (float10)param_2 +
                    (float10)*(double *)&REFG(undefined, 0x10ac2d0)) * (float10)*(double *)&REFG(undefined, 0x10c4488)) /
                  (float10)*((float *)GEN_TOP((uVar1 + 4)))) + 1;
    }
  }
  return 1;
}

/* ref: FUN_007733a0 */
GEN_OWN GEN_FRAME float10 F_007733a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x7733a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = GEN_X87((float10)(float)((float10)param_1 - (float10)REFG(double, 0x1088130)));
  fVar3 = (float10)0;
  if (fVar2 < fVar3) {
    fVar2 = GEN_X87(fVar2 - (float10)REFG(double, 0x1088108));
  }
  else {
    fVar2 = GEN_X87(fVar2 + (float10)REFG(double, 0x1088108));
  }
  uVar1 = (uint)fVar2;
  if ((uVar1 < 7) &&
     (fVar3 = (float10)(int)(&REFG(undefined4, 0x13281b8))[(int)(uVar1 * 3)], (int)(&REFG(undefined4, 0x13281b8))[(int)(uVar1 * 3)] < 0)) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return fVar3;
}

/* ref: FUN_00773400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00773400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x773400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  if (0 < *((int *)GEN_TOP((param_1 + 0x338c)))) {
    uVar1 = F_00ab1e70(*((int *)GEN_TOP((param_1 + 0x338c))));
    if (uVar1 != 0) {
      return (int)((((float10)*((float *)GEN_TOP((uVar1 + 4))) * (float10)param_2 +
                    (float10)*(double *)&REFG(undefined, 0x10ac2d0)) * (float10)*(double *)&REFG(undefined, 0x10c4488)) /
                  (float10)*((float *)GEN_TOP((uVar1 + 4)))) + 1;
    }
  }
  return 1;
}

/* ref: FUN_00773450 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00773450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x773450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  char * pcVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  pcVar1 = *((char * PTR32 *)GEN_TOP(((int)this + 0x33c)));
  (*(int *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x6)) = 0xe04ffff;
  (*(undefined2 *)(gen_frame + 0xe)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
  (*(undefined2 *)(gen_frame + 0xb)) = 1;
  if ((*pcVar1 == '\0') || (**((char * PTR32 *)GEN_TOP(((int)this + 0x390))) == '\0')) {
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0x2a0;
    uVar11 = REFG(undefined4, 0x108cc50);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar3,uVar11);
    uVar11 = 0;
    puVar10 = &(*(undefined4 *)(gen_frame + 0x0));
    puVar8 = ((undefined1 *)(gen_frame + 0x14));
    iVar6 = (int)this + 0x33c;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(F_00559470(uVar3 GEN_EDX_ARG)));
    F_00580530(pvVar2 GEN_EDX_ARG,iVar6,puVar8,puVar10,uVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0x2a1;
    uVar11 = REFG(undefined4, 0x108cc50);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar3,uVar11);
    uVar11 = 0;
    puVar10 = &(*(undefined4 *)(gen_frame + 0x0));
    iVar6 = (int)this + 0x390;
    puVar8 = ((undefined1 *)(gen_frame + 0x14));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(F_00559470(uVar3 GEN_EDX_ARG)));
    F_00580530(pvVar2 GEN_EDX_ARG,iVar6,puVar8,puVar10,uVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  uVar3 = F_0042a990((int)this + 0x33c GEN_EDX_ARG);
  iVar6 = (*(int *)(gen_frame + 0x10));
  F_005a2710(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 8))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((iVar6 + 0xc))) = uVar3;
  uVar3 = F_0042a990((int)this + 0x390 GEN_EDX_ARG);
  uVar4 = F_005a2710(((undefined *)GEN_TOP((iVar6 + 0x10))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((iVar6 + 0x14))) = uVar3;
  return uVar4;
}

/* ref: FUN_007735b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007735b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7735b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return 0;
  }
  if (((param_1 == 3) && (*((int *)GEN_TOP(((int)this + 0x33a8))) != 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x33a8))) == param_2)) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x3384))) != param_1) {
    return 0;
  }
  return *((int *)GEN_TOP(((int)this + 0x339c))) == param_2;
}

/* ref: FUN_00773600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x773600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x31);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = F_0042a990((int)this + 0x1ec GEN_EDX_ARG);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x240 GEN_EDX_ARG);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xc)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xc))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x294 GEN_EDX_ARG);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x10)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x10))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = F_0042a990((int)this + 0x2e8 GEN_EDX_ARG);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_00773690 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00773690(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x773690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007737a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7737a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
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
  if ((*((int *)GEN_TOP(((int)this + 0x338c))) != 0) && (*((int *)GEN_TOP(((int)this + 0x339c))) != 0)) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x31);
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x2a3;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    puVar6 = ((undefined *)GEN_TOP(F_0043bd00(pvVar5 GEN_EDX_ARG,uVar12,uVar13,uVar14)));
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x2a4;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar12,uVar13,uVar14);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x339c)));
    ((uint *)(gen_frame + 0x58))[0] = 0;
    ((uint *)(gen_frame + 0x58))[1] = 0;
    ((uint *)(gen_frame + 0x58))[2] = 0;
    ((uint *)(gen_frame + 0x58))[3] = 0;
    if (iVar1 == *((int *)GEN_TOP(((int)this + 0x338c)))) {
      uVar7 = F_00a4a910();
      ((uint *)(gen_frame + 0x58))[0] = uVar7;
      uVar7 = F_00a4a930();
      ((uint *)(gen_frame + 0x58))[1] = uVar7;
      ((uint *)(gen_frame + 0x58))[2] = REFG(undefined4, 0x14a73a8);
      ((uint *)(gen_frame + 0x58))[3] = REFG(undefined4, 0x14a73ac);
    }
    else if ((iVar1 != 0) && (uVar7 = F_00ab1e70(iVar1), uVar7 != 0)) {
      uVar10 = *((uint *)GEN_TOP((uVar7 + 0x10)));
      ((uint *)(gen_frame + 0x58))[0] = *((uint *)GEN_TOP((uVar7 + 0xc)));
      ((uint *)(gen_frame + 0x58))[1] = uVar10;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)this + 0x1ec)));
    do {
      uVar7 = ((uint *)(gen_frame + 0x58))[(int)(uVar11)];
      puVar8 = ((uint *)GEN_TOP(F_00ab2750(uVar7)));
      uVar10 = uVar2;
      if ((puVar8 != ((uint *)GEN_TOP(0x0))) && (0 < (int)uVar7)) {
        uVar10 = (*puVar8 & 0xffffff) + (int)puVar8;
      }
      puVar9 = puVar6;
      if (puVar6 == ((undefined *)GEN_TOP(0x0))) {
        puVar9 = &REFG(undefined, 0x10c01b4);
      }
      uVar7 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c01b8),puVar9,uVar10);
      F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar11 = uVar11 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x54)));
    } while (uVar11 < 4);
    uVar2 = F_0042a990((int)this + 0x1ec GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8))) = uVar2;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x240 GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc))) = uVar2;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x294 GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x10)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x10))) = uVar2;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
    uVar2 = F_0042a990((int)this + 0x2e8 GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14))) = uVar2;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00773970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x773970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_FWD);
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00773990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x773990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  int * piVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x33d5))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x33d7))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x33a8))) = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007739d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007739d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x7739d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x33d5)));
  if (bVar1 < 10) {
    this_00 = ((undefined *)GEN_TOP(((uint)bVar1 * 0x74 + 0x2824 + (int)this)));
    *((byte *)GEN_TOP(((int)this + 0x33d5))) = bVar1 + 1;
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    uVar2 = F_0042a990(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 100))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = param_2;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x68))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x70))) = param_1;
    F_0042ccf0(this_00 GEN_EDX_ARG,param_7);
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x5a))) = (undefined2)param_4;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 9;
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x58))) = (undefined2)param_3;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = param_5;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = param_6;
    uVar2 = F_0042a990(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 100))) = uVar2;
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
      *((uint *)GEN_TOP(((int)this_00 + 0x54))) = *((uint *)GEN_TOP(((int)this_00 + 0x54))) | 0x20000;
    }
  }
  return 0;
}

/* ref: FUN_00773b60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x773b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (((param_1 < *((byte *)GEN_TOP(((int)this + 0x33d5)))) &&
      (*((int *)GEN_TOP(((int)this + param_1 * 0x74 + 0x2894))) == param_2)) &&
     (*((int *)GEN_TOP(((int)this + param_1 * 0x74 + 0x2890))) == param_3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00773ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00773ba0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x773ba0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  double dVar1;
  double dVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),*((char *)GEN_TOP((param_1 + 0x33d7))));
  if (*((char *)GEN_TOP((param_1 + 0x33d7))) == '\0') {
    *((undefined1 *)GEN_TOP((param_1 + 0x33d7))) = 1;
    F_0042e430(((undefined *)GEN_TOP((param_1 + 0x2cac))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP((param_1 + 0x2d00))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d04))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d08))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d0c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d10))) = 0;
    uVar3 = F_0042a990(((undefined *)GEN_TOP((param_1 + 0x2cac))) GEN_EDX_ARG);
    dVar2 = REFG(double, 0x1088108);
    *((uint *)GEN_TOP((param_1 + 0x2d10))) = uVar3;
    *((undefined1 *)GEN_TOP((param_1 + 0x2d14))) = 0;
    if (param_4 < 0.0) {
      dVar1 = GEN_X87((double)param_4 - dVar2);
    }
    else {
      dVar1 = GEN_X87((double)param_4 + dVar2);
    }
    *((short *)GEN_TOP((param_1 + 0x2d04))) = (short)(int)dVar1;
    if (param_5 < 0.0) {
      dVar2 = GEN_X87((double)param_5 - dVar2);
    }
    else {
      dVar2 = GEN_X87(dVar2 + (double)param_5);
    }
    *((short *)GEN_TOP((param_1 + 0x2d06))) = (short)(int)dVar2;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d08))) = param_6;
    *((float *)GEN_TOP((param_1 + 0x2d20))) = param_4;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d0c))) = param_7;
    *((undefined4 *)GEN_TOP((param_1 + 0x2d18))) = param_2;
    *((uint *)GEN_TOP((param_1 + 0x2d1c))) = param_3;
    *((float *)GEN_TOP((param_1 + 0x2d24))) = param_5;
    uVar3 = param_3;
  }
  return uVar3;
}

/* ref: FUN_00773c60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x773c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  
  if (param_1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x33d7)))) {
    iVar1 = param_1 * 0x7c;
    *param_2 = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x2d18)));
    *param_3 = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x2d1c)));
    *param_4 = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x2d20)));
    *param_5 = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x2d24)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00773cb0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00773cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x773cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x33d8)));
  uVar2 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0xc) {
    this_00 = ((undefined *)GEN_TOP(((uint)bVar1 * 0x6c + 0x2d28 + (int)this)));
    *((byte *)GEN_TOP(((int)this + 0x33d8))) = bVar1 + 1;
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    uVar3 = F_0042a990(this_00 GEN_EDX_ARG);
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x58))) = (undefined2)param_1;
    *((uint *)GEN_TOP(((int)this_00 + 100))) = uVar3;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x68))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 3;
    *((ushort *)GEN_TOP(((int)this_00 + 0x5a))) = (ushort)param_2;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = param_3;
    *((int *)GEN_TOP(((int)this_00 + 0x60))) = 0xb4 - param_4;
    *((byte *)GEN_TOP(((int)this + 0x33d9))) = *((byte *)GEN_TOP(((int)this + 0x33d9))) | 2;
    uVar2 = (ushort)param_2;
  }
  return uVar2;
}

/* ref: FUN_00773d70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00773d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x773d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  puVar3 = ((uint *)GEN_TOP(((int)this + 0x329c)));
  iVar2 = 3;
  do {
    F_0042e430(puVar3 - 0x19 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    uVar1 = F_0042a990(puVar3 - 0x19 GEN_EDX_ARG);
    *puVar3 = uVar1;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3 = puVar3 + 0x1b;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00773dc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x773dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < 3) {
    this_00 = ((undefined *)GEN_TOP((param_1 * 0x6c + 0x3238 + (int)this)));
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    uVar1 = F_0042a990(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 100))) = uVar1;
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x58))) = (undefined2)param_2;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = param_5;
    uVar1 = 1;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0x60;
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x5a))) = (undefined2)param_3;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = param_4;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x68))) = 1;
    *((byte *)GEN_TOP(((int)this + 0x33d9))) = *((byte *)GEN_TOP(((int)this + 0x33d9))) | 1;
  }
  return (byte)uVar1;
}

/* ref: FUN_00773e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00773e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x773e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < 3) {
    this_00 = ((undefined *)GEN_TOP((param_1 * 0x6c + 0x3238 + (int)this)));
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    uVar1 = F_0042a990(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 100))) = uVar1;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x68))) = 0;
    *((byte *)GEN_TOP(((int)this + 0x33d9))) = *((byte *)GEN_TOP(((int)this + 0x33d9))) | 1;
  }
  return uVar1;
}

/* ref: FUN_00773ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x773ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  float * pfVar1;
  uint uVar2;
  short * psVar3;
  uint uVar4;
  
  uVar4 = 0;
  psVar3 = ((short *)GEN_TOP(((int)this + 0x3290)));
  do {
    if ((char)psVar3[8] != '\0') {
      pfVar1 = ((float *)GEN_TOP(F_00a5feb0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD)));
      if ((int)*psVar3 == (int)*pfVar1) {
        uVar2 = F_00a5feb0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
        if (((int)psVar3[1] == (int)*((float *)GEN_TOP((uVar2 + 8)))) && (*(int *)(psVar3 + 2) == param_1[0xf])
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00773f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x773f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x4070))) = 1;
  uVar3 = 100;
  uVar4 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x3400)));
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
    piVar2 = ((int *)GEN_TOP((uVar3 * 0x20 + 0x33f0 + (int)this)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00773fc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x773fc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  if (0xfe < (int)uVar1) {
    *((undefined1 *)GEN_TOP((in_ecx + 0x33dc))) = 0xff;
    return 0xff;
  }
  if (0 < (int)uVar1) {
    *((char *)GEN_TOP((in_ecx + 0x33dc))) = (char)uVar1;
    return uVar1;
  }
  *((undefined1 *)GEN_TOP((in_ecx + 0x33dc))) = 0;
  return 0;
}

/* ref: FUN_00774030 */
GEN_OWN_GS GEN_FRAME uint F_00774030(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x774030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_FRAME_DECL_GS(0x1ac, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1a4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a8));
  F_0042cc20(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,&REFG(undefined, 0x10c01c0),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8a0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042d2c0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),0,uVar1);
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042d2c0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),uVar1 + 1,uVar2 + (-1 - uVar1));
  F_0042cd30(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xa8)));
  if (param_3 < 3) {
    F_0042e370(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x1328204))[(int)(param_3)]);
  }
  F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0xfc)),((char *)REFP(0x10c01c4)),uVar2,uVar1);
  F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00774180 */
GEN_OWN_GS GEN_FRAME uint F_00774180(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x774180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL_GS(0x1ac, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1a4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a8));
  if (param_3 == '\0') {
    uVar1 = F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10be017));
    return uVar1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,&REFG(undefined, 0x10c01d4),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8a0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042d2c0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),0,uVar1);
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042d2c0(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),uVar1 + 1,uVar2 + (-1 - uVar1));
  F_0042cd30(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x54)));
  F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0xfc)),((char *)REFP(0x10c01d8)),uVar2,uVar1);
  F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_007742f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007742f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7742f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x33b0))) >> 5;
  if ((uVar1 & 1) != 0) {
    if ((((*((int *)GEN_TOP(((int)this + 0x339c))) == 0) && (*((int *)GEN_TOP(((int)this + 0x3398))) != 0)) &&
        (uVar1 = F_00ab1c90(*((int *)GEN_TOP(((int)this + 0x3398)))), uVar1 != 0)) &&
       (*((int *)GEN_TOP(((int)this + 0x339c))) == 0)) {
      *((uint *)GEN_TOP(((int)this + 0x339c))) = (uint)*((ushort *)GEN_TOP((uVar1 + 0x22)));
    }
    uVar1 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x339c))) != 0) {
      puVar2 = ((uint *)GEN_TOP(F_00ab1e70(*((int *)GEN_TOP(((int)this + 0x339c))))));
      uVar1 = 0;
      if (puVar2 != ((uint *)GEN_TOP(0x0))) {
        F_00774030((int)this + 0xf0,(*puVar2 & 0xffffff) + (int)puVar2,
                     *((undefined1 *)GEN_TOP(((int)this + 0x33da))));
        F_00774180((int)this + 0x144,(*puVar2 & 0xffffff) + (int)puVar2,-1 < (short)puVar2[7],
                     *((undefined1 *)GEN_TOP(((int)this + 0x33da))));
        *((uint *)GEN_TOP(((int)this + 0x33a4))) = puVar2[2];
        *((uint *)GEN_TOP(((int)this + 0x337c))) = puVar2[1];
        uVar1 = (uint)(ushort)puVar2[6];
        *((uint *)GEN_TOP(((int)this + 0x33b0))) = *((uint *)GEN_TOP(((int)this + 0x33b0))) | 6;
        *((uint *)GEN_TOP(((int)this + 0x33a0))) = uVar1;
        *((undefined1 *)GEN_TOP(((int)this + 0x33dd))) = 0;
      }
    }
    *((uint *)GEN_TOP(((int)this + 0x33b0))) = *((uint *)GEN_TOP(((int)this + 0x33b0))) & 0xffffffdf;
  }
  return uVar1;
}

/* ref: FUN_007743e0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007743e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7743e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
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
    fVar5 = (float10)*((int *)GEN_TOP(((int)&REFG(undefined4, 0x13281b8) + uVar1)));
    if (*((int *)GEN_TOP(((int)&REFG(undefined4, 0x13281b8) + uVar1))) < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4)) break;
    uVar1 = uVar1 + 0xc;
    uVar2 = uVar2 + 1;
    uVar3 = 6;
    if (0x53 < uVar1) {
LAB_00774416: ;
      if ((char)param_4 == '\0') {
        *param_1 = *((undefined4 *)GEN_TOP((uVar3 * 0xc + 0x13281b0)));
      }
      else {
        *param_1 = *((undefined4 *)GEN_TOP((uVar3 * 0xc + 0x13281b4)));
      }
      gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
      local_c = (undefined4)
                (longlong)
                TRUNC(((fVar4 + fVar4) * (float10)*(double *)&REFG(double, 0x10969f8)) *
                      (float10)*(double *)&REFG(undefined, 0x1088118));
      *param_2 = local_c;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
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
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00774480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  if (*((char *)GEN_TOP(((int)this + 0x4070))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x4070))) = 0;
    bVar1 = true;
    uVar4 = 0;
    pcVar3 = ((char *)GEN_TOP(((int)this + 0x340c)));
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
        if ((bVar1) && (*((uint *)GEN_TOP(((int)this + 0x4074))) <= uVar4)) {
          uVar2 = F_00a4ab70(pcVar3 - 0x1c);
          bVar1 = false;
          *(uint *)(pcVar3 - 4) = uVar2;
        }
        *pcVar3 = '\0';
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x20;
    } while (uVar4 < 100);
    *((int *)GEN_TOP(((int)this + 0x4074))) = *((int *)GEN_TOP(((int)this + 0x4074))) + 1;
    if (99 < *((uint *)GEN_TOP(((int)this + 0x4074)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x4074))) = 0;
    }
  }
  return;
}

/* ref: FUN_00774510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00774510(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x774510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x339c)));
  if (param_3 != '\0') {
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x338c)));
  }
  if (*((uint *)GEN_TOP((param_2 + 0x24))) != uVar2) {
    if (((*((uint *)GEN_TOP((param_2 + 0x24))) == 0) &&
        (uVar1 = F_00ab1c90((uint)*((ushort *)GEN_TOP((param_2 + 0x20)))), uVar1 != 0)) &&
       (*((ushort *)GEN_TOP((uVar1 + 0x22))) == uVar2)) {
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00774560 */
GEN_OWN GEN_FRAME int F_00774560(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return iVar1;
}

/* ref: FUN_00774580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x33ac)));
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
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x20))) GEN_EDX_FWD,4);
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = local_8;
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
  uVar2 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x670))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_1 + 0x674))) = uVar3;
  return uVar2;
}

/* ref: FUN_00774600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00774600(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ab1e70(param_1);
  if (uVar1 != 0) {
    return (uint)*((ushort *)GEN_TOP((uVar1 + 0x1a)));
  }
  return 0;
}

/* ref: FUN_00774630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00774630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
        if (((uVar3 != 0) && (*((char *)GEN_TOP((uVar3 + 0x20))) == '\x02')) &&
           (*((int *)GEN_TOP((uVar3 + 0xc))) == *((int *)GEN_TOP((uVar1 + 0xc))))) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return 0;
}

/* ref: FUN_007746c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007746c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7746c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x339c))) = param_1;
  uVar1 = F_00ab1e70(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*((byte *)GEN_TOP((uVar1 + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0x33ac))) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_007746f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007746f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7746f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar2 = F_00a9fbf0(REFG(int, 0x1379694) GEN_EDX_FWD);
    *((char *)GEN_TOP((in_ecx + 0x33e0))) = (char)uVar2;
    bVar1 = *((byte *)GEN_TOP((in_ecx + 0x33dc)));
    if (0xfe < bVar1) {
      *((undefined1 *)GEN_TOP((in_ecx + 0x33db))) = 0xff;
      return;
    }
    if (bVar1 != 0) {
      *((byte *)GEN_TOP((in_ecx + 0x33db))) = bVar1;
      return;
    }
    *((undefined1 *)GEN_TOP((in_ecx + 0x33db))) = 0;
  }
  return;
}

/* ref: FUN_007747a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007747a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7747a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00ab1e70(param_1);
  if ((uVar2 != 0) && (param_3 != ((undefined *)GEN_TOP(0x0)))) {
    uVar2 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x18)));
    piVar3 = ((int *)GEN_TOP(F_00ab1ea0(uVar2)));
    while ((piVar3 != ((int *)GEN_TOP(0x0)) && ((*piVar3 != 0 || (piVar3[1] != 0))))) {
      if (((byte)(*((char *)GEN_TOP(((int)piVar3 + 0x17))) - 1U) < 2) &&
         (bVar1 = F_007731f0(param_3 GEN_EDX_ARG,(uint)*(ushort *)(piVar3 + 4),param_2), bVar1 != 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = ((int *)GEN_TOP(F_00ab1ea0(uVar2)));
    }
  }
  return 0;
}

/* ref: FUN_00774820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00774820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x338c))) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab1e70(*((int *)GEN_TOP(((int)this + 0x338c))))));
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      F_00774030((int)this + 0x9c,(*puVar1 & 0xffffff) + (int)puVar1,
                   *((undefined1 *)GEN_TOP(((int)this + 0x33da))));
      F_00774180((int)this + 0x198,(*puVar1 & 0xffffff) + (int)puVar1,-1 < (short)puVar1[7],
                   *((undefined1 *)GEN_TOP(((int)this + 0x33da))));
    }
    puVar1 = ((uint *)GEN_TOP(F_00ab1e70(*((undefined4 *)GEN_TOP(((int)this + 0x339c))))));
    uVar2 = 0;
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      F_00774030((int)this + 0xf0,(*puVar1 & 0xffffff) + (int)puVar1,
                   *((undefined1 *)GEN_TOP(((int)this + 0x33da))));
      uVar2 = F_00774180((int)this + 0x144,(*puVar1 & 0xffffff) + (int)puVar1,
                           -1 < (short)puVar1[7],*((undefined1 *)GEN_TOP(((int)this + 0x33da))));
    }
    *((uint *)GEN_TOP(((int)this + 0x33b0))) = *((uint *)GEN_TOP(((int)this + 0x33b0))) | 0x1002;
  }
  return uVar2;
}

/* ref: FUN_00774900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x774900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33bc))) = param_2;
  if (param_2 != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x33b0))) = *((uint *)GEN_TOP((in_ecx + 0x33b0))) | 0x400;
  }
  return param_2;
}

/* ref: FUN_00774920 */
GEN_OWN GEN_FRAME byte F_00774920(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x774920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  return (int)uVar1 < (int)uVar2;
}

/* ref: FUN_00774950 */
GEN_OWN GEN_FRAME uint F_00774950(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x774950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  *param_1 = param_3 - 0x400;
  *param_2 = param_4 - 0x400;
  return (uint)param_2;
}

/* ref: FUN_00774970 */
GEN_OWN GEN_FRAME uint F_00774970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
GEN_OWN GEN_FRAME byte F_007749a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7749a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
GEN_OWN GEN_FRAME uint F_00774a30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
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
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00774ac0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (uVar2 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG), uVar2 != 0xe0000000)) {
    uVar3 = (undefined4)(uVar2 >> 0x20);
    uVar1 = F_00a67f50((int)uVar2,uVar3);
    if (param_1 == uVar1) {
      F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,param_1,0xe0000000,0);
      return;
    }
    F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,param_1,(int)uVar2,uVar3);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00774b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00774b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00774b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_FWD,*((undefined1 *)GEN_TOP(((int)this + 0x22))));
    bVar1 = (byte)iVar4;
    if (((*((uint *)GEN_TOP((uVar2 + 0x34))) & 1 << GEN_SHC(bVar1, bVar1)) == 0) ||
       (*((char *)GEN_TOP(((int)this + 0x26))) < iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 | iVar3 << GEN_SHC(bVar1, bVar1);
  } while (iVar4 < 5);
  uVar2 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x160))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x164))) = uVar5;
  return uVar2;
}

/* ref: FUN_00774bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_FWD,*((undefined1 *)GEN_TOP(((int)this + 0x22))));
    if ((*((char *)GEN_TOP((uVar1 + 0x30))) < iVar4) || (*((char *)GEN_TOP(((int)this + 0x26))) < iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 | iVar2 << GEN_SHC(bVar3, bVar3);
  } while (iVar4 < 5);
  uVar1 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x158))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x15c))) = uVar5;
  return uVar1;
}

/* ref: FUN_00774c40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00774c40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x774c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((REFG(undefined1, 0x14b4ec2) & 0x20) != 0) {
    iVar3 = 0;
    do {
      uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(&REFG(undefined4, 0x10c0218))[(int)(iVar3)],0);
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 | (uint)((short)uVar1 != 0) << GEN_SHC(bVar2, bVar2);
    } while (iVar3 < 8);
  }
  uVar1 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0xf4))) = uVar4;
  return uVar1;
}

/* ref: FUN_00774ca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00774ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x30))) >> GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_FWD,*((undefined1 *)GEN_TOP(((int)this + 0x22))));
      if (REFG(int, 0x1379c70) != 3) {
        *((uint *)GEN_TOP((uVar1 + 0x34))) = *((uint *)GEN_TOP((uVar1 + 0x34))) & ~(1 << GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2));
        uVar1 = F_00a51200(0x24,(uint)*((byte *)GEN_TOP((uVar1 + 0x38))),uVar2 & 0xff,0,0);
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return uVar1;
}

/* ref: FUN_00774d00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00774d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x774d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_FWD,*((undefined1 *)GEN_TOP((in_ecx + 0x22))));
  return param_2 < *((char *)GEN_TOP((uVar1 + 0x30)));
}

/* ref: FUN_00774d60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00774d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x774d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x10c0218))[(int)(uVar1)] == param_1) {
      if (-1 < (char)uVar1) {
        return uVar1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  uVar1 = uVar1 & 0xffffff00;
  if (param_2 != '\0') {
    uVar1 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
  }
  return uVar1;
}

/* ref: FUN_00774da0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00774da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 0x15) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0xc))) + 8))))((int)this - 0xc);
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x774dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x18) = param_1;
  F_0042ccf0(this + 0x1c GEN_EDX_FWD,param_2);
  F_0042ccf0(this + 0x70 GEN_EDX_ARG,param_3);
  *(undefined4 *)(this + 0xcc) = param_4;
  uVar1 = F_00ba0880(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG,this + 0xc);
  return uVar1;
}

/* ref: FUN_00774e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x774e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,param_2,param_1,0x7d5,5,1);
  uVar1 = F_0043f8b0(10);
  return uVar1;
}

/* ref: FUN_00774e30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00774e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00774e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x774e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 3) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
    *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x38))) = 0;
  }
  return;
}

/* ref: FUN_00774e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00774e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x1a);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (uVar2 != 0)) {
    piVar1 = ((int *)GEN_TOP(F_00a67900(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
    uVar3 = *piVar1 << 0x10 | 0x1e;
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = piVar1[1] << 0x10 | 0x10;
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar3 = piVar1[0x17] << 0x10 | 100;
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xc))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xc))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00774f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a79280(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 0x40))),
                                param_1)));
  }
  return (uint)this;
}

/* ref: FUN_00774f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00774f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x774f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  uint * this_01;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    ((undefined4 *)(gen_frame + 0x0))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    uVar4 = 0x249;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_FWD)));
    uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,uVar4,param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))),6,((undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x30));
    iVar3 = 5;
    do {
      this_01 = this_01 - 2;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar1;
}

/* ref: FUN_00774fc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00774fc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0;
  return 1;
}

/* ref: FUN_00774fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00774fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  piVar2 = ((int *)GEN_TOP(((int)this + 0x40)));
  if (((((undefined *)GEN_TOP(*puVar1)) != ((undefined *)GEN_TOP(0x0))) && (0 < *piVar2)) &&
     (piVar3 = ((int *)GEN_TOP(((int)this + 0x3c))), this = ((undefined *)GEN_TOP(0x0)), *piVar3 != 0)) {
    this = ((undefined *)GEN_TOP(F_00a6ca50(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD,*piVar3,*piVar2)));
  }
  return (uint)this;
}

/* ref: FUN_00774ff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00774ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x774ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (0 < *((int *)GEN_TOP(((int)this + 0x40))))) &&
     (*((int *)GEN_TOP(((int)this + 0x3c))) == 2)) {
    this = ((undefined *)GEN_TOP(F_00a790e0(*((int *)GEN_TOP(((int)this + 0x40))))));
  }
  return (uint)this;
}

/* ref: FUN_00775010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00775010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (0 < *((int *)GEN_TOP(((int)this + 0x40))))) &&
     (*((int *)GEN_TOP(((int)this + 0x3c))) == 2)) {
    this = ((undefined *)GEN_TOP(F_00a67a50(*((int *)GEN_TOP(((int)this + 0x40))))));
  }
  return (uint)this;
}

/* ref: FUN_00775040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00775040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar4 = 5;
  if ((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (*((int *)GEN_TOP(((int)this + 0x30))) == 0)) {
    puVar3 = ((uint *)GEN_TOP(F_00a67930(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    uVar1 = puVar3[0x4d];
    uVar4 = 1;
    if ((0x26 < uVar1) && (((uVar1 < 0x28 || (0x2f < uVar1)) && (uVar1 != 0x32)))) {
      bVar2 = F_00a67ab0((uint)(ushort)*puVar3);
      if (bVar2 == 1) {
        this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
        uVar4 = F_006d6fd0(this_00 GEN_EDX_ARG);
        if ((uVar4 != 0) && ((uint)*((ushort *)GEN_TOP((uVar4 + 0x310))) == *puVar3)) {
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
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00775190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if ((((*((char *)GEN_TOP((in_ecx + 0xf6))) != '\0') && (bVar1 = *((byte *)GEN_TOP((in_ecx + 0xf5))), bVar1 != 0)) &&
      (((bVar1 & 1) == 0 || (*((int *)GEN_TOP((in_ecx + 0x78))) != 0)))) &&
     (((bVar1 & 2) == 0 || (*((int *)GEN_TOP((in_ecx + 0xe0))) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007751d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007751d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7751d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if ((*((char *)GEN_TOP(((int)this + 0xf6))) != '\0') && (0 < param_1)) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
    if (iVar1 - 1000000U < 1000000) {
      iVar1 = iVar1 - 1000000;
    }
    if (iVar1 == param_1) {
      return (int)this + 0x10;
    }
  }
  return 0;
}

/* ref: FUN_00775210 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00775210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((char *)GEN_TOP(((int)this + 0xf6))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x18))) != 0)) {
    F_00a3d750(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),(uint)*((ushort *)GEN_TOP(((int)this + 0x14)))
                );
  }
  return;
}

/* ref: FUN_00775240 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00775240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((char *)GEN_TOP(((int)this + 0xf6))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x18))) != 0)) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),(uint)*((ushort *)GEN_TOP(((int)this + 0x14)))
                );
  }
  return;
}

/* ref: FUN_00775290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x775290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if ((param_1 != 0) &&
     (iVar1 = (uint)(*((int *)GEN_TOP((param_1 + 8))) - 1000000U < 1000000) * 0x68,
     *((int *)GEN_TOP((iVar1 + 0x78 + (int)this))) == *((int *)GEN_TOP((param_1 + 8))))) {
    return *((uint *)GEN_TOP(((int)this + iVar1 + 0x7c)));
  }
  return 0;
}

/* ref: FUN_007752e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007752e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7752e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x23c))) = 1;
  if (*((int *)GEN_TOP(((int)this + 0x228))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x228))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x224))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x224))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x23c))) = 0;
  return in_EAX;
}

/* ref: FUN_00775350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x1c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x19);
  piVar2 = REFG(int * PTR32, 0x14ab7d0);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    if (*((int *)GEN_TOP(((int)this + 0x22c))) == 0) {
      return 2;
    }
    local_10 = (uint)*((byte *)GEN_TOP((REFG(int * PTR32, 0x14ab7d0) + 1)));
    if (100 < local_10) {
      local_10 = 100;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0xb0))) != local_10) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0xb0))) = local_10;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    uVar5 = F_00a69100(*((undefined4 *)GEN_TOP(((int)this + 0x230))));
    local_8 = 0;
    if (local_10 != 0) {
      local_c = 0;
      iVar7 = 0xc0;
      do {
        iVar8 = *piVar2 + local_c;
        uVar11 = 0;
        uVar10 = 1;
        uVar9 = 0;
        uVar6 = F_0042a990(iVar8 + 900 GEN_EDX_ARG);
        F_00431250(uVar4 GEN_EDX_ARG,local_8 + 0x28,uVar6,uVar9,uVar10,uVar11);
        uVar6 = (uint)*((byte *)GEN_TOP((iVar8 + 0x3f0))) << 0x10 | (uint)*((byte *)GEN_TOP((iVar8 + 0x3ee)));
        if (*((uint *)GEN_TOP((iVar7 + 4 + *((int *)GEN_TOP((uVar3 + 0x20)))))) != uVar6) {
          *((uint *)GEN_TOP((iVar7 + 4 + *((int *)GEN_TOP((uVar3 + 0x20)))))) = uVar6;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((iVar7 - 8 + *((int *)GEN_TOP((uVar3 + 0x20)))))) != *((int *)GEN_TOP((iVar8 + 0x3dc)))) {
          *((int *)GEN_TOP((iVar7 - 8 + *((int *)GEN_TOP((uVar3 + 0x20)))))) = *((int *)GEN_TOP((iVar8 + 0x3dc)));
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        bVar1 = F_00a690c0((uint)*((ushort *)GEN_TOP((iVar8 + 0x3e0))));
        uVar6 = -(uint)(bVar1 != 0) & 2 |
                ((uint)*((byte *)GEN_TOP((iVar8 + 0x3ee))) <= (uVar5 & 0xffff) + 5) - 1 & 4;
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar7))) != uVar6) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar7))) = uVar6;
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((iVar7 - 4 + *((int *)GEN_TOP((uVar3 + 0x20)))))) != *((int *)GEN_TOP((iVar8 + 0x3d8)))) {
          *((int *)GEN_TOP((iVar7 - 4 + *((int *)GEN_TOP((uVar3 + 0x20)))))) = *((int *)GEN_TOP((iVar8 + 0x3d8)));
          *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
        }
        local_c = local_c + 0x444;
        local_8 = local_8 + 1;
        iVar7 = iVar7 + 0x10;
      } while (local_8 < (int)local_10);
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_00775500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00775500(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x775500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  bool bVar1;
  undefined4 * puVar2;
  undefined * this;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00a69640(param_2 GEN_EDX_FWD)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((param_1 + 0x106))) == '\0') {
      return 1;
    }
    return *((int *)GEN_TOP((param_1 + 0x28))) == 0;
  }
  *puVar2 = 9999;
  *(undefined2 *)(puVar2 + 2) = 0;
  if ((*((char *)GEN_TOP((param_1 + 0x106))) != '\0') && (0 < (int)puVar2[0x19])) {
    iVar3 = *((int *)GEN_TOP((param_1 + 0x28)));
    if (iVar3 - 1000000U < 1000000) {
      iVar3 = iVar3 - 1000000;
    }
    if ((iVar3 == puVar2[0x19]) && (((undefined2 *)GEN_TOP((param_1 + 0x20))) != ((undefined2 *)GEN_TOP(0x0)))) {
      *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0x20)));
      *((undefined2 *)GEN_TOP(((int)puVar2 + 2))) = *((undefined2 *)GEN_TOP((param_1 + 0x24)));
      bVar1 = *((int *)GEN_TOP((param_1 + 0x28))) - 1000000U < 1000000;
      *((bool *)GEN_TOP(((int)puVar2 + 9))) = bVar1;
      *(bool *)(puVar2 + 2) = !bVar1;
      iVar3 = *((int *)GEN_TOP((param_1 + 0x28)));
      if (iVar3 - 1000000U < 1000000) {
        iVar3 = iVar3 - 1000000;
      }
      puVar2[0x19] = iVar3;
      return 1;
    }
  }
  if (param_3 != '\0') {
    uVar4 = 0x47b;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    F_0046a630(this GEN_EDX_ARG,uVar4);
  }
  return 0;
}

/* ref: FUN_00775600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x775600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  uVar3 = 1;
  do {
    uVar1 = F_00a69100(uVar2);
    if ((short)uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x22c))) = *((uint *)GEN_TOP(((int)this + 0x22c))) | uVar3;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar2 < 8);
  if (param_2 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x7e8))) != *((int *)GEN_TOP(((int)this + 0x22c)))) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x7e8))) = *((int *)GEN_TOP(((int)this + 0x22c)));
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    **((undefined4 * PTR32 *)GEN_TOP((param_2 + 0x20))) = 0x20;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return param_2;
}

/* ref: FUN_00775670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00775670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x230)));
  if ((int)uVar1 < 8) {
    *((int *)GEN_TOP(((int)this + 0x234))) = (int)*((short *)GEN_TOP(((int)this + uVar1 * 4 + 0x108)));
    uVar1 = (uint)*((short *)GEN_TOP(((int)this + uVar1 * 4 + 0x10a)));
    *((uint *)GEN_TOP(((int)this + 0x238))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007756a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007756a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7756a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x230)));
  if ((int)uVar1 < 8) {
    *((undefined2 *)GEN_TOP(((int)this + uVar1 * 4 + 0x108))) = *((undefined2 *)GEN_TOP(((int)this + 0x234)));
    *((undefined2 *)GEN_TOP(((int)this + uVar1 * 4 + 0x10a))) = *((undefined2 *)GEN_TOP(((int)this + 0x238)));
  }
  return uVar1;
}

/* ref: FUN_007756d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007756d0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7756d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  *(undefined1 *)(param_1 + 3) = param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  param_1[4] = param_3;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRepair::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007756f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7756f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8));
    if (((char)uVar1 == '\x01') && (this[0xc] == (undefined1)0x1)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: FUN_00775730 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00775730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\0') && (*((char *)GEN_TOP(((int)this + 0xc))) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00775750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00775750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x775750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == '\0') {
    bVar1 = F_00a3e6a0(param_1,param_3);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00a42cb0(param_1,(char)param_3);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00775790 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00775790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x775790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  if (99 < *((uint *)GEN_TOP(((int)this + 0x784)))) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,param_1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP(((int)this_00 + 0xc)))) {
      do {
        pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,iVar4)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar2 + 6))) == '\0') {
            uVar3 = *((uint *)GEN_TOP(((int)pvVar2 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar2 + 0x14))) & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(pvVar2 GEN_EDX_ARG)));
            uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
          }
          if (uVar3 != 0) {
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x784))) * 8 + 0x78c)));
            *puVar1 = param_1;
            puVar1[1] = iVar4;
            *((int *)GEN_TOP(((int)this + 0x784))) = *((int *)GEN_TOP(((int)this + 0x784))) + 1;
            if (99 < *((uint *)GEN_TOP(((int)this + 0x784)))) {
              return 0;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *((int *)GEN_TOP(((int)this_00 + 0xc))));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00775870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00775870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x775870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa9c)));
  if ((-1 < iVar1) && (iVar1 < *((int *)GEN_TOP(((int)this + 0xaa0))))) {
    uVar2 = *((undefined4 *)GEN_TOP((iVar1 * 0xc0 + 0xb00 + (int)this)));
    uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 * 0xc0 + 0xb58 + (int)this)));
    if (param_3 == 4) {
      F_00a41810(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x2ee2,uVar3,uVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0xa9c))) = 0xffffffff;
      return 1;
    }
    F_00a418c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x2ee2,uVar3,uVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa9c))) = 0xffffffff;
  return 1;
}

/* ref: FUN_007758e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007758e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7758e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  code * pcVar1;
  
  if ((((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (-3 < (int)param_1[1])) &&
     ((int)param_1[1] < 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    (*pcVar1)(this);
  }
  return 1;
}

/* ref: FUN_00775920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x775920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  int * piVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  if ((((*((int *)GEN_TOP(((int)this + 8))) == 0) && (*((int *)GEN_TOP(((int)this + 0x19ac))) < 1)) &&
      (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14))), piVar2 != ((int *)GEN_TOP(0x3)))) &&
     (((piVar2 != (int *)&REFG(undefined, 0x4) && (piVar2 != ((int *)GEN_TOP(0x2)))) &&
      (piVar2 != (int *)&REFG(undefined, 0x5))))) {
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,0,0);
      uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar1;
    }
  }
  else {
    *((int * PTR32 *)GEN_TOP(((int)this + 0x10))) = param_1;
    piVar2 = param_1;
  }
  return (uint)piVar2;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00775990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 8))) == 0) && (*((int *)GEN_TOP((in_ecx + 0x19ac))) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007759b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007759b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7759b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  if ((*((int *)GEN_TOP(((int)this + 0x24))) != 9999) && (-1 < *((int *)GEN_TOP(((int)this + 0x28))))) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x24))),(uint)*((ushort *)GEN_TOP(((int)this + 0x28))));
  }
  uVar1 = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 9999;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  if (0 < *((int *)GEN_TOP(((int)this + 0x19a8)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 9999;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x19a8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x19a8))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00775a20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00775a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa8c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x19b4))) = 1;
  return;
}

/* ref: FUN_00775a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775a60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x775a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = (uint)param_3;
  uVar3 = 0x3af;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = F_00461c60(pvVar1 GEN_EDX_ARG,uVar3,uVar2,param_4);
  F_0042e430(param_2 GEN_EDX_ARG,uVar2);
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x20)));
  if (((uVar2 != 0) && (*((char *)GEN_TOP((uVar2 + 8))) != '\0')) &&
     ('\0' < (char)('\x05' - *((char *)GEN_TOP((uVar2 + 10)))))) {
    F_0042d540(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10c02e0));
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x3ce;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    uVar2 = F_0042d540(param_2 GEN_EDX_ARG,uVar2);
  }
  return uVar2;
}

/* ref: FUN_00775af0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00775af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 0x19a4))) = 1;
  }
  return;
}

/* ref: FUN_00775b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  uint * this_01;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (*((char *)GEN_TOP(((int)this + 0x19a4))) != '\0') {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x24);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x21);
    if ((uVar3 == 0) || (uVar4 == 0)) {
      *((undefined1 *)GEN_TOP(((int)this + 0x19a4))) = 0;
      return uVar4;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    *((bool *)GEN_TOP(((int)this + 0x19a4))) = (char)uVar1 == '\0';
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x968)));
    if (0 < (int)uVar1) {
      iVar8 = 0x97c;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      do {
        uVar5 = F_00ab24a0(*((undefined4 *)GEN_TOP((iVar8 + *((int *)GEN_TOP((uVar3 + 0x20)))))));
        if (uVar5 == 0) {
          *((undefined1 *)GEN_TOP(((int)this + 0x19a4))) = 1;
        }
        iVar8 = iVar8 + 0x18;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      } while ((*(uint *)(gen_frame + 0xc)) != 0);
    }
    if (*((char *)GEN_TOP(((int)this + 0x19a4))) == '\0') {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      if (0 < (int)uVar1) {
        (*(int *)(gen_frame + 0x8)) = 0x2c3;
        (*(uint *)(gen_frame + 0xc)) = 0xb00;
        iVar8 = 0x980;
        (*(uint *)(gen_frame + 0x0)) = uVar1;
        do {
          iVar6 = *((int *)GEN_TOP((iVar8 - 4 + *((int *)GEN_TOP((uVar3 + 0x20))))));
          uVar5 = F_00ab24a0(iVar6);
          if (uVar5 != 0) {
            iVar6 = ((*((int *)GEN_TOP((iVar8 - 0xc + *((int *)GEN_TOP((uVar3 + 0x20)))))) < 1) - 1 & 1000000) + iVar6;
            uVar7 = F_00ab65a0(iVar6,uVar5);
            if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar8))) != uVar7) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar8))) = uVar7;
              *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
            }
            uVar12 = 0;
            uVar11 = 1;
            uVar9 = 0;
            uVar7 = F_00ab6240(iVar6,0,uVar5);
            F_00431250(uVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),uVar7,uVar9,uVar11,uVar12);
            if ((*((uint *)GEN_TOP((uVar5 + 0x28))) < 2) &&
               (*((char * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + *((int *)GEN_TOP((uVar4 + 0x20)))))) != "")) {
              *((char * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + *((int *)GEN_TOP((uVar4 + 0x20)))))) = "";
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
            }
          }
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 5;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 0x14;
          iVar8 = iVar8 + 0x18;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
        } while ((*(uint *)(gen_frame + 0x0)) != 0);
      }
      uVar13 = 0;
      uVar11 = 0;
      if ((*((byte *)GEN_TOP(((int)this + 0x1c))) & 2) == 0) {
        uVar10 = 0x12d0;
      }
      else {
        uVar10 = 0x12d1;
      }
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,uVar10,uVar11,uVar13);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x24)) = uVar3;
      if ((*((int *)GEN_TOP(((int)this + 0x20))) != 0) &&
         (uVar3 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x20))) + 0x10 GEN_EDX_ARG), uVar3 != 0)) {
        uVar3 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x20))) + 0x10 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0x1c)) = uVar3;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),3,&(*(undefined4 *)(gen_frame + 0x10)));
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar8 = 2;
      do {
        this_01 = this_01 - 2;
        uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
        iVar8 = iVar8 - 1;
      } while (-1 < iVar8);
    }
  }
  return uVar1;
}

/* ref: FUN_00775d80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00775d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x775d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,param_2)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00775dc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00775dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x775dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  char cVar1;
  undefined * pvVar2;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
     (pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,param_2))), pvVar2 != ((undefined *)GEN_TOP(0x0)))) {
    if (*((char *)GEN_TOP(((int)pvVar2 + 6))) != '\0') {
      pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(pvVar2 GEN_EDX_ARG)));
      cVar1 = *((char *)GEN_TOP(((int)pvVar2 + 6)));
      while (cVar1 == '\0') {
        pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(pvVar2 GEN_EDX_ARG)));
        cVar1 = *((char *)GEN_TOP(((int)pvVar2 + 6)));
      }
    }
    return *((uint *)GEN_TOP(((int)pvVar2 + 8)));
  }
  return 0;
}

/* ref: FUN_00775e20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00775e20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x775e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_1 = 5;
  param_1[1] = (((uint)(param_2 * param_3) / 10) * 5) / 10;
  param_1[2] = param_2 * param_3;
  return (uint)param_1;
}

/* ref: FUN_00775e60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00775e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x775e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentReturn::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00775e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x775e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00775eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x775eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
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
    *(int *)(this + 0x310) = *(int *)(this + 0x310) - 1;
  }
LAB_00775ef0: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00775f10(void)
{
  GEN_ENTER(0x775f10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00775f20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00775f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x775f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 0xc))) & param_2) != 0;
}

/* ref: FUN_00775f30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00775f30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x775f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  char * pcVar1;
  uint uVar2;
  
  *param_3 = 0xffffffff;
  if (param_1 == 1) {
    pcVar1 = ((char *)GEN_TOP(F_00463610(2,param_2,1)));
    uVar2 = F_00ab1ed0(param_2);
    if (uVar2 != 0) {
      *param_3 = (uint)*((ushort *)GEN_TOP((uVar2 + 8)));
    }
LAB_00775faf: ;
    if (pcVar1 != ((char *)GEN_TOP(0x0))) goto LAB_00775fb8;
  }
  else {
    if (param_1 == 2) {
      pcVar1 = ((char *)GEN_TOP(F_00463610(1,param_2,2)));
      uVar2 = F_00ab65a0(param_2,0);
      *param_3 = uVar2;
      goto LAB_00775faf;
    }
    if (param_1 == 3) {
      pcVar1 = ((char *)GEN_TOP(F_00463610(2,param_2,3)));
      uVar2 = F_00ab2510(param_2);
      if (uVar2 != 0) {
        *param_3 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x1c)));
      }
      goto LAB_00775faf;
    }
  }
  pcVar1 = "";
LAB_00775fb8: ;
  uVar2 = F_0042e430(param_4 GEN_EDX_ARG,pcVar1);
  return uVar2;
}

/* ref: FUN_00775fd0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00775fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x775fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 != 0) {
LAB_00775fda: ;
    return *((char *)GEN_TOP((uVar1 + 0x1c))) == '\x01';
  }
  if (param_1 == 1) {
    uVar1 = F_00ab1ed0(param_2);
    if (uVar1 != 0) goto LAB_00775fda;
  }
  return 0;
}

/* ref: FUN_00776010 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00776010(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x776010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x1e);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb08))) != (uint)param_2) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb08))) = (uint)param_2;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb0c))) != (uint)param_3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb0c))) = (uint)param_3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb10))) != (param_4 & 0xffff)) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xb10))) = param_4 & 0xffff;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x2c))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x2c))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != -1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = 0xffffffff;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x30))) != 1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x30))) = 1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) != -1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) = 0xffffffff;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    iVar3 = 0x34;
    do {
      if (*((int *)GEN_TOP((iVar3 - 0x28 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x28 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) != -1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 - 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 - 0x20 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x20 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 - 0x1c + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x1c + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP((uVar2 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 < 0x54);
  }
  return 0;
}

/* ref: FUN_007761b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007761b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7761b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  char * pcVar2;
  
  uVar1 = 0;
  pcVar2 = ((char *)GEN_TOP((in_ecx + 0x40)));
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
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007761d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7761d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 800))) + 1;
  param_1[1] = param_2[1];
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_1 = ((float)GEN_TOF(((float10)*param_2 +
                    ((float10)*(float *)(&REFG(undefined, 0x13285d8) + iVar3 * 8) - fVar4) * fVar5)));
  fVar1 = *(float *)(&REFG(undefined, 0x13285dc) + iVar3 * 8);
  fVar2 = param_2[2];
  *((int *)GEN_TOP(((int)this + 800))) = iVar3;
  param_1[2] = ((float)GEN_TOF((((float10)fVar1 - fVar4) * fVar5 + (float10)fVar2)));
  if (0x13 < iVar3) {
    *((undefined4 *)GEN_TOP(((int)this + 800))) = 0;
  }
  return 0;
}

/* ref: FUN_00776230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00776230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x1e);
  if (uVar2 != 0) {
    iVar4 = 0x13;
    iVar3 = 0x9c;
    do {
      if (*((int *)GEN_TOP((iVar3 - 0x48 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x48 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 - 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 - 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + 0x24 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      iVar3 = iVar3 + 0x90;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != 0) {
      **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_007762e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007762e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7762e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x3b0))) = param_2;
  return param_2;
}

/* ref: FUN_007762f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007762f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7762f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return;
}

/* ref: FUN_00776320 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00776320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  uint * puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_c;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x3d);
    if (uVar4 != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x38);
      if (uVar5 != 0) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
        uVar12 = 0;
        uVar11 = 0;
        iVar9 = 1;
        uVar10 = 7;
        local_c = 1;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar7 = F_0043bd00(this_00 GEN_EDX_ARG,uVar10,uVar11,uVar12);
        if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc)))) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x80))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x80))) = 0;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        do {
          bVar2 = F_00a6a9e0(&REFG(undefined, 0x14b29c0) GEN_EDX_ARG,iVar9);
          if ((bVar2 != 0) && (puVar8 = ((uint *)GEN_TOP(F_00ab2020(iVar9))), puVar8 != ((uint *)GEN_TOP(0x0)))) {
            if ((char)uVar6 != '\0') {
              puVar8 = puVar8 + 1;
            }
            uVar7 = local_c & 0xffff;
            F_00431250(uVar5 GEN_EDX_ARG,uVar7 + 3,(*puVar8 & 0xffffff) + (int)puVar8,0,1,0);
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x80 + uVar7 * 4))) != iVar9) {
              *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x80 + uVar7 * 4))) = iVar9;
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
            }
            local_c = local_c + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x100);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x7c))) != (local_c & 0xffff)) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x7c))) = local_c & 0xffff;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00776460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x776460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,param_1)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    uVar11 = *((uint *)GEN_TOP((uVar6 + 0x28aac + param_1 * 4)));
    uVar6 = uVar11;
    if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (uVar11 != 0)) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x24))))(piVar7 GEN_EDX_ARG,8);
      uVar6 = 0;
      if (uVar8 != 0) {
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG,7);
        uVar6 = 0;
        if (uVar9 != 0) {
          local_18 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
          if (0xd < local_18) {
            local_18 = 0xe;
          }
          uVar10 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xffffffff,0);
          uVar3 = REFG(undefined2, 0x14ab148);
          uVar6 = (uint)REFG(undefined2, 0x14ab148);
          if ((REFG(undefined2, 0x14ab148) == 0) || (bVar1 = true, (ushort)uVar10 <= REFG(undefined2, 0x14ab148))) {
            bVar1 = false;
          }
          local_14 = 0;
          if (0 < local_18) {
            local_c = 8;
            puVar12 = ((undefined4 *)GEN_TOP((uVar11 + 0x60)));
            do {
              local_20 = 0;
              local_1c = 0;
              this_01 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,local_14)));
              bVar2 = 0;
              if ((this_01 == ((undefined *)GEN_TOP(0x0))) ||
                 ((*((char *)GEN_TOP(((int)this_01 + 6))) == '\0' && (*((int *)GEN_TOP(((int)this_01 + 8))) == 0)))) {
                ((code *)*((gen_code32 *)GEN_TOP((puVar12[-0x18] + 4))))(puVar12 - 0x18);
                if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 4 + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 4 + local_c))) = 0;
                  *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
                }
                if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + local_c))) = 0;
                  goto LAB_007766c0;
                }
              }
              else {
                uVar6 = F_00a37c50(this_01 GEN_EDX_ARG);
                local_1c = (uint)(uVar6 != 0);
                uVar6 = F_0046e5e0(this_01 GEN_EDX_ARG);
                if (puVar12[-2] != uVar6) {
                  ((code *)*((gen_code32 *)GEN_TOP((puVar12[-0x18] + 4))))(puVar12 - 0x18);
                  uVar11 = F_00ab24a0(uVar6);
                  if (uVar11 != 0) {
                    ((code *)*((gen_code32 *)GEN_TOP((puVar12[-0x18] + 8))))(puVar12 - 0x18,uVar6,uVar11);
                  }
                }
                local_20 = F_00760640(*(undefined1 *)(puVar12 + 1),this_01,*puVar12);
                bVar4 = F_00a36000(this_01 GEN_EDX_ARG);
                local_10 = (uint)bVar4;
                if (local_10 == 0) {
                  uVar5 = F_00906d60(this_01 GEN_EDX_ARG);
                  if (uVar5 != 0) {
                    local_10 = 1;
                  }
                }
                else if ((local_10 == 100) && (uVar5 = F_00906d60(this_01 GEN_EDX_ARG), uVar5 != 30000)) {
                  local_10 = 99;
                }
                if ((bVar1) && (uVar3 < *((byte *)GEN_TOP(((int)puVar12 + 6))))) {
                  bVar2 = 1;
                }
                if (*((uint *)GEN_TOP((local_c + *((int *)GEN_TOP((uVar8 + 0x20)))))) != local_10) {
                  *((uint *)GEN_TOP((local_c + *((int *)GEN_TOP((uVar8 + 0x20)))))) = local_10;
                  *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
                }
                uVar6 = 0;
                if (*((char *)GEN_TOP(((int)puVar12 + 5))) != '\0') {
                  bVar4 = F_00760e50(puVar12 - 0x18 GEN_EDX_ARG,this_01);
                  uVar6 = F_00760700(bVar4);
                }
                uVar6 = uVar6 * 2 | (uint)(*((char *)GEN_TOP(((int)puVar12 + 5))) != '\0');
                if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 4 + local_c))) != uVar6) {
                  *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 4 + local_c))) = uVar6;
LAB_007766c0: ;
                  *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
                }
              }
              if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) - 8 + local_c))) != puVar12[-1]) {
                *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) - 8 + local_c))) = puVar12[-1];
                *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
              }
              uVar6 = ((uint)bVar2 << 0x10 | local_1c) << 8 | local_20 & 0xff;
              if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) - 4 + local_c))) != uVar6) {
                *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) - 4 + local_c))) = uVar6;
                *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
              }
              uVar6 = F_0042a990(puVar12 - 0x17 GEN_EDX_ARG);
              if (uVar6 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x20))) + local_14 * 4)))) {
                *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x20))) + local_14 * 4))) = uVar6;
                *((undefined1 *)GEN_TOP((uVar9 + 0x1d))) = 1;
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
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00776750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar5 = false;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x3d);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = 0x95;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = F_0043c920(pvVar3 GEN_EDX_ARG,uVar6,uVar7);
    bVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x714))) != uVar4;
    if (bVar5) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x714))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    uVar7 = 0;
    uVar6 = 0x96;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar4 = F_0043c920(pvVar3 GEN_EDX_ARG,uVar6,uVar7);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x718))) != uVar4) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x718))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      return 1;
    }
  }
  return bVar5;
}

/* ref: FUN_007767e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007767e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7767e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x100, 0, 4);
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int * piVar7;
  
  ((uint *)(gen_frame + 0x0))[0x3e] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  pcVar1 = *((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18)));
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
  this_00 = ((undefined *)GEN_TOP((*pcVar1)()));
  piVar7 = ((int *)GEN_TOP((param_1 + 0x1b4)));
  iVar6 = 0;
  do {
    uVar4 = F_0043bd00(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar6 + 0x7c))),0,0);
    F_005a2710(piVar7 - 0x3f GEN_EDX_ARG,6);
    uVar2 = *((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar6)));
    piVar7[-0x3e] = uVar4;
    uVar5 = F_00ab2290(uVar2);
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar3 = *((uint *)GEN_TOP((uVar5 + 4)));
      uVar4 = F_005a2710(piVar7 - 1 GEN_EDX_ARG,6);
      *piVar7 = (uVar3 & 0xffffff) + uVar5 + 4;
    }
    iVar6 = iVar6 + 4;
    piVar7 = piVar7 + 2;
  } while (iVar6 < 0x7c);
  return uVar4;
}

/* ref: FUN_00776aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x38);
  uVar4 = uVar2;
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x4dc))) == 0) {
      uVar3 = F_00463610(1,1,0);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = F_00431250(uVar2 GEN_EDX_ARG,0x137,uVar3,0,1,0);
      }
    }
    iVar6 = 0x13c;
    iVar5 = 0x4f0;
    local_8 = 2;
    do {
      if ((*((int *)GEN_TOP((iVar5 + *((int *)GEN_TOP((uVar2 + 0x20)))))) == 0) &&
         (uVar4 = F_00463610(1,iVar6 - 0x125,0), uVar4 != 0)) {
        uVar4 = F_00431250(uVar2 GEN_EDX_ARG,iVar6,uVar4,0,1,0);
      }
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    iVar6 = 0x141;
    iVar5 = 0x504;
    local_8 = 3;
    do {
      if ((*((int *)GEN_TOP((iVar5 + *((int *)GEN_TOP((uVar2 + 0x20)))))) == 0) &&
         (uVar4 = F_00463610(1,iVar6 - 0x12d,0), uVar4 != 0)) {
        uVar4 = F_00431250(uVar2 GEN_EDX_ARG,iVar6,uVar4,0,1,0);
      }
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar4;
}

/* ref: Client::UI2::Agent::AgentStatus::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x776ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00435250(param_1,0);
  uVar2 = F_00ab21a0(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((uVar2 + 0x10))) == 0x20) {
      iVar3 = 2;
    }
    else if (*((int *)GEN_TOP((uVar2 + 0x10))) == 0x21) {
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
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00776c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00776c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,0x28);
  if (uVar1 != 0) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0x28);
  }
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0x28);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  return uVar1;
}

/* ref: FUN_00776c60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00776c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar1[0x3b] == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    return 0;
  }
  return 1;
}

/* ref: FUN_00776c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00776c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,0x28);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return uVar2;
}

/* ref: FUN_00776cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776cc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x776cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  *((char *)GEN_TOP((param_1 + 0x3c))) = param_2;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x3d);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x710))) != (uint)(param_2 != '\0')) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x710))) = (uint)(param_2 != '\0');
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00776d10 */
GEN_OWN_GS GEN_FRAME float F_00776d10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x776d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[1], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x0))[2] = gen_bits2f(REFG(float, 0x10c44a0));
  ((float *)(gen_frame + 0x0))[4] = gen_bits2f(REFG(float, 0x10c449c));
  ((float *)(gen_frame + 0x0))[7] = gen_bits2f(REFG(float, 0x10c449c));
  ((float *)(gen_frame + 0x0))[9] = gen_bits2f(REFG(float, 0x10c449c));
  ((float *)(gen_frame + 0x0))[10] = gen_bits2f(REFG(float, 0x10adbc4));
  ((float *)(gen_frame + 0x0))[0xb] = gen_bits2f(REFG(float, 0x10adbc4));
  ((float *)(gen_frame + 0x0))[0xc] = gen_bits2f(REFG(float, 0x10adbc4));
  ((float *)(gen_frame + 0x0))[0xd] = gen_bits2f(REFG(float, 0x10adbc4));
  uVar1 = param_2 + param_1 * 2;
  ((float *)(gen_frame + 0x0))[3] = gen_bits2f(REFG(float, 0x10c44a8));
  ((float *)(gen_frame + 0x0))[5] = gen_bits2f(REFG(float, 0x10c44a4));
  ((float *)(gen_frame + 0x0))[0xe] = gen_bits2f(REFG(float, 0x10c44a8));
  ((float *)(gen_frame + 0x0))[0xf] = gen_bits2f(REFG(float, 0x10c4498));
  ((float *)(gen_frame + 0x0))[0x10] = gen_bits2f(REFG(float, 0x10c44a8));
  ((float *)(gen_frame + 0x0))[0x11] = gen_bits2f(REFG(float, 0x10c4498));
  ((float *)(gen_frame + 0x0))[6] = gen_bits2f(REFG(float, 0x10c4494));
  ((float *)(gen_frame + 0x0))[8] = gen_bits2f(REFG(float, 0x10c4494));
  ((float *)(gen_frame + 0x0))[0x12] = gen_bits2f(REFG(float, 0x10ac108));
  ((float *)(gen_frame + 0x0))[0x13] = gen_bits2f(REFG(float, 0x10c4490));
  ((float *)(gen_frame + 0x0))[0x14] = gen_bits2f(REFG(float, 0x10ac108));
  ((float *)(gen_frame + 0x0))[0x15] = gen_bits2f(REFG(float, 0x10c4490));
  if (0x15 < uVar1) {
    return (float)(float10)1;
  }
  return ((float *)(gen_frame + 0x0))[(int)(uVar1)];
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x776e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00776e20(void)
{
  GEN_ENTER(0x776e20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x776e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00776e40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00776e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776e40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = F_00ac3640(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
  iVar2 = (*(int *)&gen_args[0]);
  iVar4 = 0;
  if (bVar3 != 0) {
    (*(int *)&gen_args[0]) = 0;
    (*(int *)(gen_frame + 0x0)) = 0;
    F_00ac8670(&(*(int *)&gen_args[0]),&(*(int *)(gen_frame + 0x0)));
    iVar4 = (*(int *)&gen_args[0]) * 0x10000 + (*(int *)(gen_frame + 0x0));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x98))) != iVar4) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x98))) = iVar4;
      *((undefined1 *)GEN_TOP((iVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x9c))) != -0x10018) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x9c))) = 0xfffeffe8;
      *((undefined1 *)GEN_TOP((iVar2 + 0x1d))) = 1;
    }
    iVar4 = 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0xa0))) != -0x67aff8) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0xa0))) = 0xff985008;
      *((undefined1 *)GEN_TOP((iVar2 + 0x1d))) = 1;
    }
  }
  uVar1 = *((uint *)GEN_TOP((iVar2 + 0x20)));
  if (*((int *)GEN_TOP((uVar1 + 0x94))) != iVar4) {
    *((int *)GEN_TOP((uVar1 + 0x94))) = iVar4;
    *((undefined1 *)GEN_TOP((iVar2 + 0x1d))) = 1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00776ef0(void)
{
  GEN_ENTER(0x776ef0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00776f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776f00(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x776f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  if (param_2 < 6) {
    uVar1 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    if (param_3 != '\0') {
      *((uint *)GEN_TOP((param_1 + 0x58))) = *((uint *)GEN_TOP((param_1 + 0x58))) | uVar1;
      return param_1;
    }
    *((uint *)GEN_TOP((param_1 + 0x58))) = *((uint *)GEN_TOP((param_1 + 0x58))) & ~uVar1;
  }
  return param_1;
}

/* ref: FUN_00776f30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00776f30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x776f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  ulonglong uVar1;
  
  if (param_2 != '\0') {
    uVar1 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    *((ulonglong *)GEN_TOP((param_1 + 0xa8))) = uVar1;
  }
  *((char *)GEN_TOP((param_1 + 0xa0))) = param_2;
  return;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00776f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x776f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x2d) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentTrade::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00776fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x776fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
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
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,10);
  if (uVar5 == 0) {
    return uVar6;
  }
  if (uVar6 == 0) {
    return 0;
  }
  bVar2 = F_00a36640(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if (bVar2 == 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd0))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd0))) = 0;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar6 = *((uint *)GEN_TOP((uVar5 + 0x20)));
    if (*((int *)GEN_TOP((uVar6 + 0xd4))) == 0) {
      return uVar6;
    }
    *((undefined4 *)GEN_TOP((uVar6 + 0xd4))) = 0;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    return uVar6;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd0))) == 0) {
    uVar7 = F_00a366a0();
    if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x28)))) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x28))) = uVar7;
  }
  local_c = this + 0x70;
  local_14 = 0;
  local_1c = 4;
  do {
    pvVar8 = ((undefined *)GEN_TOP(F_00a3af20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,local_14)));
    if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
LAB_007771ed: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x60) + 4))))(local_c - 0x60 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((local_1c + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = F_0042a990(local_c - 0x5c GEN_EDX_ARG);
      puVar12 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_14 * 4)))) {
LAB_0077728a: ;
        *puVar12 = uVar7;
        *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
      }
    }
    else {
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
        uVar7 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
        uVar7 = F_0046e5e0(pvVar9 GEN_EDX_ARG);
      }
      if (uVar7 == 0) goto LAB_007771ed;
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
        uVar7 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
        uVar7 = F_0046e5e0(pvVar9 GEN_EDX_ARG);
      }
      if (*(uint *)(local_c - 8) != uVar7) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x60) + 4))))(local_c - 0x60 GEN_EDX_ARG);
        *(undefined4 *)(local_c - 4) = 0xffffffff;
        uVar10 = F_0046e5e0(pvVar8 GEN_EDX_ARG);
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x60) + 8))))(local_c - 0x60 GEN_EDX_ARG,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640(local_c[4],pvVar8,*(undefined4 *)local_c);
      uVar10 = F_00a3a8a0(pvVar8 GEN_EDX_ARG);
      AVar3 = local_c[5];
      if (AVar3 != (undefined1)0x0) {
        bVar2 = F_00760e50(local_c - 0x60 GEN_EDX_ARG,pvVar8);
        piVar4 = ((int *)GEN_TOP(F_00ab3c60((uint)bVar2)));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_1c + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_1c + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = uVar7 & 0xff;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != *(int *)(local_c - 4)) {
        *((int *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = *(int *)(local_c - 4);
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_1c))) != uVar10) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_1c))) = uVar10;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((uint *)GEN_TOP((local_1c + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != (uint)(byte)local_c[4]) {
        *((uint *)GEN_TOP((local_1c + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = (uint)(byte)local_c[4];
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = (uint)(AVar3 != (undefined1)0x0) | local_20 * 2;
      if (*((uint *)GEN_TOP((local_1c + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) != uVar7) {
        *((uint *)GEN_TOP((local_1c + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) = uVar7;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = F_0042a990(local_c - 0x5c GEN_EDX_ARG);
      puVar12 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_14 * 4)))) goto LAB_0077728a;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_1c = local_1c + 0x14;
  } while (local_14 < 5);
  uVar7 = F_00a3ade0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 200))) != uVar7) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 200))) = uVar7;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd4))) == 0) {
    uVar7 = F_00a366c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x2c)))) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x2c))) = uVar7;
  }
  local_c = this + 0x27d;
  local_14 = 0;
  local_18 = 0x68;
  do {
    pvVar8 = ((undefined *)GEN_TOP(F_00a36610(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,local_14)));
    if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
LAB_007774f9: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x65) + 4))))(local_c - 0x65 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((local_18 + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_18 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != -1) {
        *((undefined4 *)GEN_TOP((local_18 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = F_0042a990(local_c - 0x61 GEN_EDX_ARG);
      puVar12 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x14 + local_14 * 4)))) {
LAB_00777598: ;
        *puVar12 = uVar7;
        *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
      }
    }
    else {
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
        uVar7 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
        uVar7 = F_0046e5e0(pvVar9 GEN_EDX_ARG);
      }
      if (uVar7 == 0) goto LAB_007774f9;
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
        uVar7 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
        uVar7 = F_0046e5e0(pvVar9 GEN_EDX_ARG);
      }
      if (*(uint *)(local_c - 0xd) != uVar7) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x65) + 4))))(local_c - 0x65 GEN_EDX_ARG);
        *(undefined4 *)(local_c - 9) = 0xffffffff;
        if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
          uVar10 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
          if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
            uVar10 = uVar10 + 1000000;
          }
        }
        else {
          pvVar9 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
          uVar10 = F_0046e5e0(pvVar9 GEN_EDX_ARG);
        }
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(local_c - 0x65) + 8))))(local_c - 0x65 GEN_EDX_ARG,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640(local_c[-1],pvVar8,*(undefined4 *)(local_c - 5));
      uVar10 = F_00a3a8a0(pvVar8 GEN_EDX_ARG);
      AVar3 = *(undefined1 *)local_c;
      bVar13 = AVar3 != (undefined1)0x0;
      if (bVar13) {
        if (AVar3 == (undefined1)0xff) {
          if ((*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') || (uVar11 = F_00a3a860(pvVar8 GEN_EDX_ARG), uVar11 == 0))
          {
            AVar3 = *((undefined *)GEN_TOP(((int)pvVar8 + 0x2f)));
          }
          else {
            pvVar8 = ((undefined *)GEN_TOP(F_00a3a860(pvVar8 GEN_EDX_ARG)));
            AVar3 = (undefined1)F_0046e590(pvVar8 GEN_EDX_ARG);
          }
        }
        piVar4 = ((int *)GEN_TOP(F_00ab3c60((uint)(byte)AVar3)));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_18 + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_18 + 8 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = uVar7 & 0xff;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((local_18 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != *(int *)(local_c - 9)) {
        *((int *)GEN_TOP((local_18 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = *(int *)(local_c - 9);
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_18))) != uVar10) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_18))) = uVar10;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      if (*((uint *)GEN_TOP((local_18 + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != (uint)(byte)local_c[-1]) {
        *((uint *)GEN_TOP((local_18 + 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = (uint)(byte)local_c[-1];
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = (uint)bVar13 | local_20 * 2;
      if (*((uint *)GEN_TOP((local_18 + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) != uVar7) {
        *((uint *)GEN_TOP((local_18 + 0xc + *((int *)GEN_TOP((uVar5 + 0x20)))))) = uVar7;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar7 = F_0042a990(local_c - 0x61 GEN_EDX_ARG);
      puVar12 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x14 + local_14 * 4)))) goto LAB_00777598;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x14;
  } while (local_14 < 5);
  uVar6 = F_00a3aec0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xcc))) != uVar6) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xcc))) = uVar6;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  }
  uVar6 = F_00a36680(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if ((int)uVar6 < 4) {
    iVar1 = *((int *)GEN_TOP((uVar5 + 0x20)));
    if (uVar6 == 3) {
      if (*((int *)GEN_TOP((iVar1 + 0xd0))) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0xd0))) = 2;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
    }
    else if (*((int *)GEN_TOP((iVar1 + 0xd0))) != 1) {
      *((undefined4 *)GEN_TOP((iVar1 + 0xd0))) = 1;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
  }
  else if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd0))) != 3) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd0))) = 3;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  }
  uVar6 = F_00a36690(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if ((int)uVar6 < 4) {
    iVar1 = *((int *)GEN_TOP((uVar5 + 0x20)));
    if (uVar6 == 3) {
      if (*((int *)GEN_TOP((iVar1 + 0xd4))) == 2) goto LAB_00777686;
      *((undefined4 *)GEN_TOP((iVar1 + 0xd4))) = 2;
    }
    else {
      if (*((int *)GEN_TOP((iVar1 + 0xd4))) == 1) goto LAB_00777686;
      *((undefined4 *)GEN_TOP((iVar1 + 0xd4))) = 1;
    }
  }
  else {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd4))) == 3) goto LAB_00777686;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd4))) = 3;
  }
  *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
LAB_00777686: ;
  bVar2 = F_00a36660(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  uVar6 = (uint)(bVar2 != 0);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd8))) == uVar6) {
    return uVar6;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xd8))) = uVar6;
  *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  return uVar6;
}

/* ref: FUN_007776f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007776f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7776f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
    *((undefined1 *)GEN_TOP(((int)this + 0x428))) = 1;
    (*pcVar1)(this);
    return;
  }
  return;
}

/* ref: FUN_00777710 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x420))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x420))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x420))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x424))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
    return;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x424))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  return;
}

/* ref: FUN_00777770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00777770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x777770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x424))) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentHowtoList::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_007777b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007777b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7777b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
    iVar2 = *((int *)GEN_TOP(((int)this + iVar5 * 8 + 0x18)));
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + iVar5 * 8 + 0x1c)));
    piVar7 = ((int *)GEN_TOP(((int)this + iVar1 * 8 + 0x18)));
    *((undefined4 *)GEN_TOP(((int)this + iVar5 * 8 + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + iVar1 * 8 + 0x18)));
    *((int *)GEN_TOP(((int)this + iVar5 * 8 + 0x1c))) = piVar7[1];
    iVar5 = iVar1 + 1;
    iVar9 = iVar1;
    if (iVar5 <= param_2) {
      local_8 = (param_2 - iVar5) + 1;
      piVar6 = ((int *)GEN_TOP(((int)this + iVar5 * 8 + 0x18)));
      do {
        piVar8 = piVar7;
        if (*((byte *)GEN_TOP((*piVar6 + 0x18))) < *((byte *)GEN_TOP((iVar2 + 0x18)))) {
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
        local_8 = local_8 - 1;
        piVar7 = piVar8;
      } while (local_8 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 8 + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + iVar9 * 8 + 0x18)));
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 8 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + iVar9 * 8 + 0x1c)));
    *((int *)GEN_TOP(((int)this + iVar9 * 8 + 0x18))) = iVar2;
    *((undefined4 *)GEN_TOP(((int)this + iVar9 * 8 + 0x1c))) = uVar3;
    F_007777b0(this GEN_EDX_FWD,iVar1,iVar9 - 1);
    iVar1 = iVar9 + 1;
  }
  return;
}

/* ref: FUN_00777890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00777890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0x2d);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,0x29);
  uVar7 = F_00ab0070();
  local_18 = 0;
  local_c = 0;
  if (uVar7 != 0) {
    local_14 = 0x18;
    piVar4 = ((int *)GEN_TOP(((int)this + 0x80)));
    do {
      piVar8 = ((int *)GEN_TOP(F_00ab2ba0(local_c)));
      if ((piVar8 != ((int *)GEN_TOP(0x0))) &&
         ((int)*((char *)GEN_TOP(((int)this + 0x21))) == (uint)*((byte *)GEN_TOP(((int)piVar8 + 6))))) {
        iVar2 = *piVar8;
        bVar3 = F_00a6af60(&REFG(undefined, 0x14ab440) GEN_EDX_ARG,local_c);
        if (bVar3 != 0) {
          uVar9 = F_00ab24a0(iVar2);
          if (uVar9 == 0) {
            local_5 = 1;
          }
          else {
            if (piVar4[-1] != iVar2) {
              ((code *)*((gen_code32 *)GEN_TOP((piVar4[-0x17] + 8))))(piVar4 - 0x17,iVar2,uVar9);
            }
            if (*((int *)GEN_TOP((local_14 - 0x10 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != *piVar4) {
              *((int *)GEN_TOP((local_14 - 0x10 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = *piVar4;
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            if (*((int *)GEN_TOP((local_14 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) != iVar2) {
              *((int *)GEN_TOP((local_14 - 4 + *((int *)GEN_TOP((uVar5 + 0x20)))))) = iVar2;
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            puVar1 = ((uint *)GEN_TOP((local_14 + *((int *)GEN_TOP((uVar5 + 0x20))))));
            if (*puVar1 != local_c) {
              *puVar1 = local_c;
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            uVar9 = F_0042a990(piVar4 - 0x16 GEN_EDX_ARG);
            if (uVar9 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_18 * 4)))) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + local_18 * 4))) = uVar9;
              *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
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
  if (**((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) != local_18) {
    **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) = local_18;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  }
  uVar6 = (int)*((char *)GEN_TOP(((int)this + 0x21))) - 1;
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) == uVar6) {
    *((undefined1 *)GEN_TOP(((int)this + 0x22))) = local_5;
    return CONCAT31((int3)(uVar6 >> 8),local_5);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) = uVar6;
  *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = local_5;
  return uVar6;
}

/* ref: FUN_00777a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00777a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x777a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar1 = F_0046a630(this_00 GEN_EDX_ARG,uVar2);
switchD_00777a2f_default: ;
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = 1;
  return uVar1;
}

/* ref: FUN_00777a90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00777a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    uVar3 = 0x270;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar1 = F_0046a6b0(pvVar2 GEN_EDX_ARG,uVar3,uVar4);
  }
  else {
    uVar1 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
    if (uVar1 == 0) {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
      uVar3 = 0x271;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar1 = F_0046a6b0(pvVar2 GEN_EDX_ARG,uVar3,uVar4);
      *((undefined1 *)GEN_TOP(((int)this + 0x22))) = 1;
      return uVar1;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00777b10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return;
}

/* ref: FUN_00777b50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00777b50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x777b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
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
    this = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar3)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          this_00 = ((undefined *)GEN_TOP(F_00a37da0(this GEN_EDX_ARG,iVar4)));
          if (this_00 != ((undefined *)GEN_TOP(0x0))) {
            if (*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') {
              if (*((int *)GEN_TOP(((int)this_00 + 8))) == 0) goto LAB_00777bc3;
              uVar2 = *((uint *)GEN_TOP(((int)this_00 + 8)));
              if ((*((byte *)GEN_TOP(((int)this_00 + 0x14))) & 1) != 0) {
                uVar2 = uVar2 + 1000000;
              }
            }
            else {
              this_01 = ((undefined *)GEN_TOP(F_00a3a860(this_00 GEN_EDX_ARG)));
              uVar2 = F_0046e5e0(this_01 GEN_EDX_ARG);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00777c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x777c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_1;
  return param_1;
}

/* ref: FUN_00777c20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return;
}

/* ref: FUN_00777cb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*((int *)GEN_TOP(((int)this + 0x38))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x38))) - 4);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x34))));
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  uVar2 = F_00404270();
  uVar3 = F_00406c00(400,0,uVar2,0);
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar3;
  puVar4 = ((undefined4 *)GEN_TOP(F_00406c00(0x4b4,0,uVar2,0)));
  if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar5 = puVar4 + 1;
    *puVar4 = 100;
    iVar7 = 99;
    puVar4 = puVar5;
    do {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      *((undefined2 *)GEN_TOP(((int)puVar4 + 6))) = 0;
      puVar4[2] = 0xffffffff;
      puVar4 = puVar4 + 3;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38))) = puVar5;
  iVar6 = 0;
  iVar8 = 0xc;
  iVar7 = 2;
  do {
    *((int *)GEN_TOP((iVar8 - 0xc + *((int *)GEN_TOP(((int)this + 0x34)))))) = *((int *)GEN_TOP(((int)this + 0x38))) + iVar6;
    *((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP(((int)this + 0x38)))))) = iVar7 - 2;
    *((int *)GEN_TOP((iVar8 - 8 + *((int *)GEN_TOP(((int)this + 0x34)))))) = iVar6 + 0xc + *((int *)GEN_TOP(((int)this + 0x38)));
    *((int *)GEN_TOP((iVar6 + 0x14 + *((int *)GEN_TOP(((int)this + 0x38)))))) = iVar7 - 1;
    *((int *)GEN_TOP((iVar8 - 4 + *((int *)GEN_TOP(((int)this + 0x34)))))) = iVar6 + 0x18 + *((int *)GEN_TOP(((int)this + 0x38)));
    *((int *)GEN_TOP((iVar6 + 0x20 + *((int *)GEN_TOP(((int)this + 0x38)))))) = iVar7;
    *((int *)GEN_TOP((iVar8 + *((int *)GEN_TOP(((int)this + 0x34)))))) = *((int *)GEN_TOP(((int)this + 0x38))) + iVar6 + 0x24;
    *((int *)GEN_TOP((iVar6 + 0x2c + *((int *)GEN_TOP(((int)this + 0x38)))))) = iVar7 + 1;
    *((int *)GEN_TOP((iVar8 + 4 + *((int *)GEN_TOP(((int)this + 0x34)))))) = iVar6 + 0x30 + *((int *)GEN_TOP(((int)this + 0x38)));
    *((int *)GEN_TOP((iVar6 + 0x38 + *((int *)GEN_TOP(((int)this + 0x38)))))) = iVar7 + 2;
    iVar1 = iVar7 + 3;
    iVar8 = iVar8 + 0x14;
    iVar6 = iVar6 + 0x3c;
    iVar7 = iVar7 + 5;
  } while (iVar1 < 100);
  return 0;
}

/* ref: FUN_00777e10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00777e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x777e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_00777e40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00777e40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x777e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  uint uVar2;
  undefined * this;
  uint * puVar3;
  uint * puVar4;
  
  if (param_5 != -1) {
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x100))) GEN_EDX_ARG,3);
    *((uint *)GEN_TOP((param_1 + 0x104))) = (uint)((char)param_6 != '\0');
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x108))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP((param_1 + 0x10c))) = 0x18;
    puVar3 = ((uint *)GEN_TOP((param_1 + 0x1d4)));
    param_1 = 0x18;
    this = param_2;
    puVar4 = param_3;
    do {
      uVar1 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_005a2710(puVar3 - 0x31 GEN_EDX_ARG,3);
      puVar3[-0x30] = uVar1;
      uVar1 = F_00ab6240(*puVar4,1,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_0042e430(this GEN_EDX_ARG,uVar1);
      uVar1 = F_0042a990(this GEN_EDX_ARG);
      F_005a2710(puVar3 - 1 GEN_EDX_ARG,6);
      *puVar3 = uVar1;
      uVar1 = *puVar4;
      uVar2 = F_005a2710(puVar3 + 0x2f GEN_EDX_ARG,3);
      puVar3[0x30] = uVar1;
      puVar3 = puVar3 + 2;
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
      puVar4 = puVar4 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    return uVar2;
  }
  uVar1 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x108))) GEN_EDX_ARG,3);
  *((undefined4 *)GEN_TOP((param_1 + 0x10c))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00777f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00777f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x777f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  F_0042e430(param_2 GEN_EDX_FWD,&REFG(undefined, 0x10be21e));
  while( true ) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x10c44ac) + uVar2)));
    uVar5 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    F_0042e370(param_2 GEN_EDX_ARG,uVar1);
    uVar2 = uVar2 + 4;
    if (0x1b < uVar2) break;
    F_0042e370(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10c0390));
  }
  uVar2 = param_3;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
    F_005a2710(param_1 GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar2;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
    uVar2 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0xc))) = uVar3;
    return uVar2;
  case 2: ;
  case 4: ;
  case 7: ;
    uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
    F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = uVar2;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
    uVar2 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x24))) = uVar3;
  }
  return uVar2;
}

/* ref: FUN_00778040 */
GEN_OWN GEN_FRAME uint F_00778040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x778040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  bool bVar1;
  
  bVar1 = *((ushort *)GEN_TOP((param_2 + 6))) < *((ushort *)GEN_TOP((param_1 + 6)));
  if (*((ushort *)GEN_TOP((param_2 + 6))) == *((ushort *)GEN_TOP((param_1 + 6)))) {
    bVar1 = *((byte *)GEN_TOP((param_1 + 4))) < *((byte *)GEN_TOP((param_2 + 4)));
  }
  return (uint)bVar1;
}

/* ref: FUN_00778070 */
GEN_OWN GEN_FRAME uint F_00778070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x778070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(*param_1));
  if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
    uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
    if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_ARG)));
    uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
  }
  pvVar1 = ((undefined *)GEN_TOP(*param_2));
  if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
    pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_ARG)));
    uVar3 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
    return (uint)(uVar2 < uVar3);
  }
  uVar3 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
  if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
    uVar3 = uVar3 + 1000000;
  }
  return (uint)(uVar2 < uVar3);
}

/* ref: FUN_007780e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007780e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7780e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  if (param_4 == 2) {
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x1185,0,0);
    F_005a2710(param_1 GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x1186,0,0);
    F_005a2710(param_2 GEN_EDX_ARG,6);
    uVar3 = 0x118c;
  }
  else {
    if (param_4 == 4) {
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x1126,0,0);
      F_005a2710(param_1 GEN_EDX_ARG,6);
      uVar3 = 0x1127;
    }
    else {
      if (param_4 - 7U != 0) {
        return param_4 - 7U;
      }
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x111c,0,0);
      F_005a2710(param_1 GEN_EDX_ARG,6);
      uVar3 = 0x111d;
    }
    *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar3,0,0);
    F_005a2710(param_2 GEN_EDX_ARG,6);
    uVar3 = 0x118d;
  }
  *((uint *)GEN_TOP(((int)param_2 + 4))) = uVar1;
  uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar3,0,0);
  uVar2 = F_005a2710(param_3 GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_3 + 4))) = uVar1;
  return uVar2;
}

/* ref: FUN_007781f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007781f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7781f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  if (param_4 == 2) {
    F_005a2710(param_2 GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = 0;
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    uVar1 = F_00460bd0(this_00 GEN_EDX_ARG,0x11,uVar1);
  }
  else {
    if (param_4 == 4) {
      F_005a2710(param_2 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = 1;
      uVar1 = F_005a2710(param_3 GEN_EDX_ARG,6);
      *((undefined * PTR32 *)GEN_TOP(((int)param_3 + 4))) = &REFG(undefined, 0x10be21f);
      return uVar1;
    }
    if (param_4 - 7U != 0) {
      return param_4 - 7U;
    }
    F_005a2710(param_2 GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = 2;
    uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x17);
    uVar1 = F_00560910(uVar1);
  }
  F_0042e430(param_1 GEN_EDX_ARG,uVar1);
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar2 = F_005a2710(param_3 GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_3 + 4))) = uVar1;
  return uVar2;
}

/* ref: FUN_007782c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007782c0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7782c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  undefined * this;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  this = param_1;
  uVar4 = 0;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  param_1 = ((undefined *)GEN_TOP(0x0));
  bVar1 = F_00a3bef0(this GEN_EDX_ARG);
  if (bVar1 != 0) {
    do {
      if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
LAB_0077830d: ;
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(this GEN_EDX_ARG);
        if (uVar3 == 0) goto LAB_0077830d;
        uVar3 = uVar4;
        this_00 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
        uVar2 = F_0071d2c0(this_00 GEN_EDX_ARG,uVar3);
      }
      if (uVar2 == 1) {
        param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return (uint)param_1;
}

/* ref: FUN_00778330 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00778330(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x778330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1 GEN_EDX_ARG);
  uVar4 = 0;
  if (bVar1 != 0) {
    do {
      if (*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') {
LAB_00778379: ;
        uVar2 = *((ushort *)GEN_TOP(((int)param_1 + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(param_1 GEN_EDX_ARG);
        if (uVar3 == 0) goto LAB_00778379;
        uVar3 = uVar4;
        this = ((undefined *)GEN_TOP(F_00a3a860(param_1 GEN_EDX_ARG)));
        uVar2 = F_0071d2c0(this GEN_EDX_ARG,uVar3);
      }
      if (uVar2 == 1) {
        if (param_2 == 0) {
          return uVar4;
        }
        param_2 = param_2 - 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return 0;
}

/* ref: FUN_007783b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007783b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7783b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*((int *)GEN_TOP((param_1 + uVar1 * 4))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007783e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007783e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7783e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
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
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    param_1 = ((undefined *)GEN_TOP(0x0));
    bVar1 = F_00a3bef0(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      do {
        if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') || (uVar4 = F_00a3a860(this GEN_EDX_ARG), uVar4 == 0)) {
          uVar3 = *((ushort *)GEN_TOP(((int)this + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar4 = uVar7;
          pvVar5 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
          uVar3 = F_0071d2c0(pvVar5 GEN_EDX_ARG,uVar4);
        }
        if (uVar3 == 1) {
          if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') || (uVar4 = F_00a3a860(this GEN_EDX_ARG), uVar4 == 0)) {
            bVar2 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)this)));
          }
          else {
            uVar4 = uVar7;
            pvVar5 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
            bVar2 = F_0071d300(pvVar5 GEN_EDX_ARG,uVar4);
          }
          param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1 + (uint)bVar2)));
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)(uint)bVar1);
    }
    puVar6 = ((uint *)GEN_TOP(F_00ab2140(param_1)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      return *puVar6;
    }
  }
  return 0;
}

/* ref: FUN_007784a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007784a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7784a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 6;
  *((uint *)GEN_TOP(((int)this + 0x38))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_3;
  return param_1;
}

/* ref: FUN_007784e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007784e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7784e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x5c))) - 4);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x58))) - 4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x54))));
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x50))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  uVar1 = F_00404270();
  uVar2 = F_00406c00(400,0,uVar1,0);
  *((uint *)GEN_TOP(((int)this + 0x50))) = uVar2;
  uVar2 = F_00406c00(400,0,uVar1,0);
  *((uint *)GEN_TOP(((int)this + 0x54))) = uVar2;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406c00(0x324,0,uVar1,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar3 = 100;
    puVar3 = puVar3 + 1;
    iVar5 = 99;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      *(undefined2 *)(puVar4 + 1) = 0xffff;
      *((undefined1 *)GEN_TOP(((int)puVar4 + 6))) = 0;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))) = puVar3;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406c00(0x324,0,uVar1,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 100;
    iVar5 = 99;
    puVar3 = puVar4;
    do {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *((undefined1 *)GEN_TOP(((int)puVar3 + 6))) = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = puVar4;
  iVar5 = 0;
  do {
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + iVar5 * 4))) = *((int *)GEN_TOP(((int)this + 0x58))) + iVar5 * 8;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x54))) + iVar5 * 4))) = *((int *)GEN_TOP(((int)this + 0x5c))) + iVar5 * 8;
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 4 + iVar5 * 8))) = (short)iVar5;
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 4 + iVar5 * 8))) = (short)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 100);
  return 0;
}

/* ref: FUN_00778630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00778630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x778630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
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
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_0042e430(param_2 GEN_EDX_FWD,&REFG(undefined, 0x10be31e));
  while( true ) {
    uVar7 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x10c44c8) + uVar4)));
    uVar9 = 0;
    uVar8 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar7,uVar8,uVar9);
    F_0042e370(param_2 GEN_EDX_ARG,uVar1);
    uVar4 = uVar4 + 4;
    if (0x1b < uVar4) break;
    F_0042e370(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10c03f8));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
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
    *((int *)GEN_TOP(((int)this + 0x20))) = iVar3;
  }
  uVar4 = F_0042a990(param_2 GEN_EDX_ARG);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((param_1 + 0x14))) = uVar4;
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  uVar4 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = uVar7;
  return uVar4;
}

/* ref: FUN_00778730 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return;
}

/* ref: FUN_00778760 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  return;
}

/* ref: FUN_00778790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00778790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xff8, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xff0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xff4);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x1fd;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0xfe8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xfec)) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x1fe,((undefined4 *)(gen_frame + 0x0)));
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  this_00 = &(*(uint *)(gen_frame + 0xff0));
  iVar4 = 0x1fd;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar3;
}

/* ref: FUN_00778860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00778860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x778860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x116c,0,0);
    F_005a2710(param_1 GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x116d,0,0);
    uVar2 = F_005a2710(param_2 GEN_EDX_ARG,6);
    *((uint *)GEN_TOP(((int)param_2 + 4))) = uVar1;
    return uVar2;
  }
  F_005a2710(param_1 GEN_EDX_ARG,6);
  *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 4))) = &REFG(undefined, 0x10be31f);
  uVar1 = F_005a2710(param_2 GEN_EDX_ARG,6);
  *((undefined * PTR32 *)GEN_TOP(((int)param_2 + 4))) = &REFG(undefined, 0x10be322);
  return uVar1;
}

/* ref: FUN_007788f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007788f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7788f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte * pbVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  pbVar1 = param_1;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
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
    param_1 = ((byte *)GEN_TOP(0x116a));
    break;
  case 1: ;
    uVar4 = 0x1170;
    param_1 = ((byte *)GEN_TOP(0x116a));
    break;
  case 2: ;
    uVar4 = 0x1170;
    param_1 = ((byte *)GEN_TOP(0x1172));
    break;
  case 3: ;
    uVar4 = 0x1174;
    param_1 = ((byte *)GEN_TOP(0x1175));
  }
  uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,uVar4,0,0);
  F_005a2710(pbVar1 + 0x180 GEN_EDX_ARG,6);
  *(uint *)(pbVar1 + 0x184) = uVar3;
  uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,param_1,0,0);
  uVar2 = F_005a2710(pbVar1 + 0x188 GEN_EDX_ARG,6);
  *(uint *)(pbVar1 + 0x18c) = uVar3;
  return uVar2;
}

/* ref: FUN_007789c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007789c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7789c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*((int *)GEN_TOP((param_1 + iVar1 * 4))) == param_2) {
        return (int)*((char *)GEN_TOP((iVar1 + 0x29 + param_1)));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007789f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007789f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7789f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)(&REFG(undefined4, 0x10c44e4))[(int)(uVar1)] <= param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 3;
}

/* ref: FUN_00778a20 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00778a20(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x778a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') {
    uVar2 = *((uint *)GEN_TOP(((int)param_1 + 8)));
    if ((*((byte *)GEN_TOP(((int)param_1 + 0x14))) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    this = ((undefined *)GEN_TOP(F_00a3a860(param_1 GEN_EDX_ARG)));
    uVar2 = F_0046e5e0(this GEN_EDX_ARG);
  }
  uVar2 = F_00ab24a0(uVar2);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1 GEN_EDX_ARG);
  return *((byte *)GEN_TOP((uVar2 + 0xa5))) <= bVar1;
}

/* ref: FUN_00778a90 */
GEN_OWN GEN_FRAME uint F_00778a90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x778a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *((byte *)GEN_TOP(((int)param_1 + 6))) < *((byte *)GEN_TOP(((int)param_2 + 6)));
  if (*((byte *)GEN_TOP(((int)param_1 + 6))) == *((byte *)GEN_TOP(((int)param_2 + 6)))) {
    pvVar1 = ((undefined *)GEN_TOP(*param_1));
    if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
      uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
      if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_ARG)));
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
    }
    pvVar1 = ((undefined *)GEN_TOP(*param_2));
    if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
      pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_ARG)));
      uVar3 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      return (uint)(uVar2 < uVar3);
    }
    uVar3 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
    if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    bVar4 = uVar2 < uVar3;
  }
  return (uint)bVar4;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined2 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x30))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar2 + 0x2c24c))) = *((byte *)GEN_TOP((uVar2 + 0x2c24c))) & 0xbf;
  }
  return;
}

/* ref: FUN_00778b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00778b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x778b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 1;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00778b90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 2;
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD));
}

/* ref: FUN_00778ba0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00778ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x778ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  if (*((short *)GEN_TOP(((int)this + 0xc))) == 2) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x33);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x2f);
    if (param_1 == 0) {
      if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != 0) {
        **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      F_00431250(uVar3 GEN_EDX_ARG,0,&REFG(undefined, 0x10be327),0,1,0);
      uVar4 = 0xcf9;
    }
    else {
      if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != param_1) {
        **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = param_1;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      F_00431250(uVar3 GEN_EDX_ARG,0,param_2,0,1,0);
      uVar4 = 0xcfa;
    }
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    F_00431250(uVar3 GEN_EDX_ARG,1,uVar2,uVar7,uVar8,uVar9);
  }
  return;
}

/* ref: FUN_00778c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00778c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x778c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  if ((-1 < param_1) && (param_1 != 0)) {
    if (param_1 == 1) {
      if (*((short *)GEN_TOP(((int)this + 0xc))) == 1) goto LAB_00778cc6;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      F_0044d7e0(this_00 GEN_EDX_ARG);
    }
    return 0;
  }
LAB_00778cc6: ;
  if (*((int *)GEN_TOP(((int)this + 0x68))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x68))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((byte *)GEN_TOP((uVar1 + 0x2c24c))) = *((byte *)GEN_TOP((uVar1 + 0x2c24c))) & 0xbf;
  return 1;
}

/* ref: FUN_00778d10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00778d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x778d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((param_1 < 0) || (param_1 == 1)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 2;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
    if (param_1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 1;
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentColorant::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00778d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x778d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0xc) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00778d80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return;
}

/* ref: FUN_00778db0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x30))) != 0) {
    iVar2 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x30))))));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*puVar1,(uint)*(ushort *)(puVar1 + 1));
        *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x30)))))) = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x1e4);
  }
  return;
}

/* ref: FUN_00778e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00778e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x778e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_0042e430(param_2 GEN_EDX_FWD,&REFG(undefined, 0x10be32a));
  while( true ) {
    uVar5 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x10c4500) + uVar4)));
    uVar7 = 0;
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_0042e370(param_2 GEN_EDX_ARG,uVar1);
    uVar4 = uVar4 + 4;
    if (0xf < uVar4) break;
    F_0042e370(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10c0450));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    }
    else if (param_3 != 9999) {
      uVar4 = 0;
      do {
        iVar3 = 0;
        piVar2 = &REFG(undefined4, 0x10bd928) + (char)(&REFG(undefined1, 0x10c44fc))[(int)(uVar4)] * 4;
        do {
          if (*piVar2 == 9999) break;
          if (*piVar2 == param_3) {
            iVar3 = (int)(char)(&REFG(undefined, 0x10c44f4))[(int)((char)(&REFG(undefined1, 0x10c44fc))[(int)(uVar4)])];
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
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar3;
  }
  uVar4 = F_0042a990(param_2 GEN_EDX_ARG);
  F_005a2710(param_1 GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_1 + 4))) = uVar4;
  uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0xc))) = uVar5;
  return uVar4;
}

/* ref: FUN_00778f00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00778f00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x778f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((-1 < (int)param_1) && (param_1 < 8)) {
    return *(uint *)(&REFG(undefined, 0x10c4510) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00778f20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00778f20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x778f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((-1 < (int)param_1) && (param_1 < 0xb)) {
    return *(uint *)(&REFG(undefined, 0x10c4530) + param_1 * 4);
  }
  return 0xffffffff;
}

