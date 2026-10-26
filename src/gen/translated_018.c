#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::System::Resource::Handle::ResourceHandle::vf39 */
uint F_004ff7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ff7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf40 */
unsigned int F_004ff7f0(void)
{
  GEN_ENTER(0x4ff7f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf16 */
uint F_004ff800(void)
{
  GEN_ENTER(0x4ff800u, 0u, 0u, 0u, 0u);
  return 0x1098168;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf22 */
uint F_004ff820(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf21 */
uint F_004ff830(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf23 */
uint F_004ff840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4ff840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x98) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))
                      (*(int * PTR32 *)(this + 0x98),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf24 */
unsigned int F_004ff860(void)
{
  GEN_ENTER(0x4ff860u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf25 */
unsigned int F_004ff870(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf26 */
byte F_004ff8a0(void)
{
  GEN_ENTER(0x4ff8a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf34 */
uint F_004ff8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ff8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x98);
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x80);
  *(undefined4 *)(this + 0x9c) = 0;
  uVar3 = (*pcVar1)(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf16 */
uint F_004ff910(void)
{
  GEN_ENTER(0x4ff910u, 0u, 0u, 0u, 0u);
  return 0x109819c;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf17 */
uint F_004ff920(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf18 */
uint F_004ff930(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa0);
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf24 */
unsigned int F_004ff940(void)
{
  GEN_ENTER(0x4ff940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf26 */
byte F_004ff950(void)
{
  GEN_ENTER(0x4ff950u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf30 */
byte F_004ff960(void)
{
  GEN_ENTER(0x4ff960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004ff970 */
uint F_004ff970(unsigned int gen_a0)
{
  GEN_ENTER(0x4ff970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x12: ;
    return 0x1098290;
  default: ;
    return 0x1098300;
  case 0x14: ;
    return 0x10982a8;
  case 0x21: ;
    return 0x10981d0;
  case 0x22: ;
    return 0x10981e8;
  case 0x23: ;
    return 0x1098200;
  case 0x24: ;
    return 0x1098218;
  case 0x32: ;
    return 0x10982c0;
  case 0x34: ;
    return 0x10982d4;
  case 0x44: ;
    return 0x1098278;
  case 0x52: ;
    return 0x1098248;
  case 0x54: ;
    return 0x1098260;
  case 0x61: ;
    return 0x10982e8;
  case 0x74: ;
    return 0x1098230;
  }
}

/* ref: FUN_004ffa90 */
uint F_004ffa90(unsigned int gen_a0)
{
  GEN_ENTER(0x4ffa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1098308;
  case 1: ;
    return 0x109831c;
  case 2: ;
    return 0x109834c;
  case 3: ;
    return 0x10983fc;
  case 4: ;
    return 0x109840c;
  default: ;
    return 0x109841c;
  case 7: ;
    return 0x1098334;
  case 8: ;
    return 0x109835c;
  case 9: ;
    return 0x1098370;
  case 10: ;
    return 0x1098384;
  case 0xb: ;
    return 0x1098398;
  case 0xc: ;
    return 0x10983ac;
  case 0xd: ;
    return 0x10983c0;
  case 0xe: ;
    return 0x10983d4;
  case 0xf: ;
    return 0x10983e8;
  }
}

/* ref: FUN_004ffb50 */
byte F_004ffb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ffb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e + *(int *)((int)this + 0xa8)))) <=
      (byte)param_1) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  return (byte)uVar1 <= (byte)param_1;
}

/* ref: FUN_004ffb80 */
byte F_004ffb80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ffb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = *(byte *)(param_1 + 0x5f) - 1;
  bVar3 = 0;
  bVar1 = *(byte *)(param_1 + 0x5f) - 1;
  bVar5 = bVar1;
  if (0 < iVar4) {
    uVar2 = 0;
    do {
      bVar5 = bVar3;
      if ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[uVar2 + 0x5a])))) && !GEN_ISNAN((float10)param_2)) &&
          !(((float10)GEN_TOD(gen_bits2f(param_1[uVar2 + 0x5a]))) <= (float10)param_2)) break;
      bVar3 = bVar3 + 1;
      uVar2 = (uint)bVar3;
      bVar5 = bVar1;
    } while ((int)uVar2 < iVar4);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1);
  bVar1 = (byte)uVar2;
  if ((byte)uVar2 <= bVar5) {
    bVar1 = bVar5;
  }
  return bVar1;
}

/* ref: FUN_004ffbd0 */
byte F_004ffbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ffbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = (byte)param_1;
  if (*(byte *)((int)this + 0x17c) <= (byte)param_1) {
    bVar3 = *(byte *)((int)this + 0x17c) - 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  bVar1 = (byte)uVar2;
  if ((byte)uVar2 <= bVar3) {
    bVar1 = bVar3;
  }
  return bVar1;
}

/* ref: FUN_004ffc00 */
byte F_004ffc00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ffc00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(byte *)(param_1 + 0x17c) - 1;
  bVar2 = 0;
  if (0 < iVar3) {
    uVar1 = 0;
    do {
      fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x168 + uVar1 * 4) *
                              (float10)*(float *)(param_3 + uVar1 * 4))));
      if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)param_2)) && !(fVar4 <= (float10)param_2)) {
        return bVar2;
      }
      bVar2 = bVar2 + 1;
      uVar1 = (uint)bVar2;
    } while ((int)uVar1 < iVar3);
  }
  return (byte)iVar3;
}

/* ref: FUN_004ffc50 */
byte F_004ffc50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ffc50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  float10 fVar3;
  
  bVar2 = 0;
  while( true ) {
    fVar1 = *(float *)(param_3 + (uint)bVar2 * 4);
    if (fVar1 == 0.0) {
      return 2;
    }
    fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x170 + (uint)bVar2 * 4) * (float10)fVar1
                            )));
    if ((!GEN_ISNAN(fVar3) && !GEN_ISNAN((float10)param_2)) && !(fVar3 <= (float10)param_2)) break;
    bVar2 = bVar2 + 1;
    if (1 < bVar2) {
      return 2;
    }
  }
  return bVar2;
}

/* ref: FUN_004ffca0 */
uint F_004ffca0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ffca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  byte bVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_20;
  int local_1c;
  undefined4 * local_18;
  undefined4 * local_c;
  int local_8;
  
  uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x18 + *(int *)((int)this + 0xa8))));
  puVar6 = (undefined4 *)(uint)uVar3;
  if (uVar3 != 0) {
    iVar7 = *(int *)((int)this + 0xa8);
    bVar2 = *((byte *)GEN_TOP((*(int *)(iVar7 + 4) + 0x1e + iVar7)));
    puVar6 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)iVar7 >> 8),bVar2)));
    if (bVar2 != 0) {
      local_20 = (uint)bVar2;
      local_c = (undefined4 *)((int)this + 0x118);
      local_1c = 4;
      do {
        this_00 = (undefined *)*local_c;
        puVar6 = local_c;
        if (this_00 != (undefined *)0x0) {
          uVar5 = F_004d6a30(this_00,0,0,2);
          puVar6 = (undefined4 *)0x0;
          if (uVar5 != 0) {
            if (uVar3 != 0) {
              local_8 = 0;
              local_18 = (undefined4 *)(uint)uVar3;
              do {
                iVar7 = *(int *)((int)this + 0xdc) + local_8;
                uVar10 = (uint)*(ushort *)(local_1c + 6 + iVar7);
                if (uVar10 != 0) {
                  uVar9 = (uint)*(ushort *)(local_1c + iVar7);
                  uVar10 = uVar10 + uVar9;
                  for (; uVar9 < uVar10; uVar9 = uVar9 + 1) {
                    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0xe0) + (uVar9 & 0xffff) * 0xc)));
                    iVar7 = *(int *)((int)this + 0xe0) + (uVar9 & 0xffff) * 0xc;
                    uVar8 = *(uint *)(iVar7 + 8);
                    uVar11 = *(int *)(iVar7 + 4) + uVar8;
                    for (; uVar8 < uVar11; uVar8 = uVar8 + 1) {
                      puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xe4) + (uVar8 & 0xffff) * 4)));
                      *((ushort *)GEN_TOP((uVar5 + ((uint)*puVar1 + iVar4) * 2))) = puVar1[1];
                    }
                  }
                }
                local_8 = local_8 + 0x10;
                local_18 = (undefined4 *)((int)local_18 + -1);
              } while (local_18 != (undefined4 *)0x0);
            }
            puVar6 = (undefined4 *)F_004d6ae0(this_00);
          }
        }
        local_c = local_c + 1;
        local_1c = local_1c + 2;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_004ffdd0 */
uint F_004ffdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ffdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)this + 0xb0);
  uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar2 = 0;
  local_c = 0;
  local_8 = 0;
  if (uVar4 != 0) {
    piVar3 = (int *)((int)this + 0x118);
    do {
      uVar1 = *(int *)((int)this + 0xb8) + (uVar2 & 0xff) * 0x3c;
      if (piVar3[-3] != 0) {
        local_c = local_c + *(int *)(uVar1 + 0x2c);
      }
      if (*piVar3 != 0) {
        uVar1 = *(uint *)(uVar1 + 0x30);
        local_8 = local_8 + uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar4);
    *(int *)((int)this + 0xa0) = local_8 + local_c;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  return 0;
}

/* ref: FUN_004ffe70 */
uint F_004ffe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ffe70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xd0) + param_1 * 4))) + 8 + *(int *)((int)this + 0xa8);
}

/* ref: FUN_004ffe90 */
uint F_004ffe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ffe90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  pcVar1 = ((char *)GEN_TOP((*((ushort *)GEN_TOP((*(int *)((int)this + 0xd0) + param_1 * 4))) + 8 +
                   *(int *)((int)this + 0xa8))));
  pcVar3 = pcVar1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)(pcVar1 + 1));
  while( true ) {
    if ((int)pcVar3 < 0) {
      return 0;
    }
    if (pcVar1[(int)pcVar3] == '/') break;
    pcVar3 = pcVar3 + -1;
  }
  return (uint)(pcVar1 + (int)(pcVar3 + 1));
}

/* ref: FUN_004ffee0 */
uint F_004ffee0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ffee0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xff;
  fVar1 = (float)((float10)param_3 * (float10)param_3 + (float10)*(double *)&REFG(undefined, 0x1090710));
  *((float *)GEN_TOP((*(int *)(param_1 + 0xb8) + uVar2 * 0x3c + 4))) = fVar1;
  if ((byte)param_2 < 2) {
    *(float *)(param_1 + 0x168 + uVar2 * 4) = fVar1;
  }
  return uVar2;
}

/* ref: FUN_004fff30 */
uint F_004fff30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4fff30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xff;
  fVar1 = (float)((float10)param_3 * (float10)param_3 + (float10)*(double *)&REFG(undefined, 0x1090710));
  *((float *)GEN_TOP((*(int *)(param_1 + 0xb8) + uVar2 * 0x3c + 8))) = fVar1;
  if ((byte)param_2 < 2) {
    *(float *)(param_1 + 0x170 + uVar2 * 4) = fVar1;
  }
  return uVar2;
}

/* ref: FUN_004fff80 */
uint F_004fff80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4fff80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x24 + (uint)(byte)param_1 * 0x3c)));
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf36 */
byte F_004fffa0(void)
{
  GEN_ENTER(0x4fffa0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf38 */
unsigned int F_004fffb0(void)
{
  GEN_ENTER(0x4fffb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf16 */
uint F_004fffc0(void)
{
  GEN_ENTER(0x4fffc0u, 0u, 0u, 0u, 0u);
  return 0x109849c;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf17 */
uint F_004fffd0(void)
{
  GEN_ENTER(0x4fffd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf18 */
uint F_004fffe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4fffe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe8) & 0x7ffffff;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf26 */
byte F_004ffff0(void)
{
  GEN_ENTER(0x4ffff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf25 */
unsigned int F_00500000(unsigned int gen_a0)
{
  GEN_ENTER(0x500000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xfc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xfc) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x100);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x100) = 0;
  }
  return 0;
}

/* ref: FUN_0050005f */
unsigned int F_0050005f(void)
{
  GEN_ENTER(0x50005fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00500080 */
uint F_00500080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x500080u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *param_2;
  if (param_3 == uVar1) {
    *param_2 = param_1;
    uVar1 = param_3;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00500090 */
unsigned int F_00500090(float gen_a0)
{
  GEN_ENTER(0x500090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_005000c0 */
uint F_005000c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5000c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00b4cf00(((undefined1 *)(gen_frame + 0x0)),(uint *)((int)this + 0x98));
  uVar1 = *(uint *)((int)this + 0x98) & 0x3c00000;
  if (uVar1 == 0x800000) {
    F_00b4fcb0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  else if (uVar1 == 0x1000000) {
    F_00b4fdc0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  else if (uVar1 == 0x2000000) {
    F_00b4fed0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  F_00b4cf40(((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: FUN_00500140 */
byte F_00500140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x500140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a5;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((ushort)param_5 != 0) {
    uVar3 = (uint)(ushort)param_5;
    param_5 = param_6;
    iVar4 = param_2;
    param_6 = (ushort *)uVar3;
    do {
      uVar1 = *param_5;
      iVar2 = *(int *)(iVar4 + 0xc);
      F_004f81e0(param_1,6,iVar4,(uint)uVar1,local_8 + param_3,iVar2 + 0xfU & 0xfffffff0);
      local_8 = local_8 + iVar2;
      param_5 = param_5 + 1;
      iVar4 = iVar4 + (uint)uVar1;
      param_6 = (ushort *)((int)param_6 - 1);
    } while (param_6 != (ushort *)0x0);
  }
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf30 */
byte F_005001b0(void)
{
  GEN_ENTER(0x5001b0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf4 */
byte F_005001c0(void)
{
  GEN_ENTER(0x5001c0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_005001d0 */
uint F_005001d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5001d0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if ((((*param_1 & 0x80000000) == 0) && ((*param_2 & *param_2 - 1) == 0)) &&
     ((param_2[1] & param_2[1] - 1) == 0)) {
    return 0x4000000;
  }
  return 0;
}

/* ref: FUN_00500220 */
uint F_00500220(unsigned int gen_a0)
{
  GEN_ENTER(0x500220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 0xf) +
         ((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xc) * 2 +
         (uint)*(byte *)(param_1 + 0xd)) * 4 + (uint)*(ushort *)(param_1 + 8);
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf16 */
uint F_00500250(void)
{
  GEN_ENTER(0x500250u, 0u, 0u, 0u, 0u);
  return 0x1098584;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf17 */
uint F_00500260(unsigned int gen_a0)
{
  GEN_ENTER(0x500260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc0);
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf18 */
uint F_00500270(void)
{
  GEN_ENTER(0x500270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf36 */
byte F_00500280(void)
{
  GEN_ENTER(0x500280u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf38 */
unsigned int F_00500290(void)
{
  GEN_ENTER(0x500290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf24 */
unsigned int F_005002a0(void)
{
  GEN_ENTER(0x5002a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf25 */
unsigned int F_005002b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5002b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf26 */
byte F_005002f0(void)
{
  GEN_ENTER(0x5002f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf30 */
byte F_00500300(void)
{
  GEN_ENTER(0x500300u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf31 */
byte F_00500310(void)
{
  GEN_ENTER(0x500310u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf34 */
uint F_00500320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x500320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf24 */
unsigned int F_00500330(void)
{
  GEN_ENTER(0x500330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf25 */
unsigned int F_00500340(unsigned int gen_a0)
{
  GEN_ENTER(0x500340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf26 */
byte F_00500360(void)
{
  GEN_ENTER(0x500360u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf30 */
byte F_00500370(void)
{
  GEN_ENTER(0x500370u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf31 */
byte F_00500380(void)
{
  GEN_ENTER(0x500380u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf34 */
uint F_00500390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x500390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandle::vf16 */
uint F_005003a0(void)
{
  GEN_ENTER(0x5003a0u, 0u, 0u, 0u, 0u);
  return 0x1098670;
}

/* ref: FUN_005003b0 */
uint F_005003b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5003b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return *puVar1;
}

/* ref: FUN_005003c0 */
uint F_005003c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5003c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_005003e0 */
uint F_005003e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5003e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (*puVar1 < 0x1000002) {
    return 0x80;
  }
  if (*puVar1 == 0x1000002) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    return *((uint *)GEN_TOP((uVar2 + 8 + *(int *)(uVar3 + 4) * 4)));
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return *(uint *)(uVar2 + 8);
}

/* ref: FUN_00500440 */
float F_00500440(unsigned int gen_a0)
{
  GEN_ENTER(0x500440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (*puVar1 < 0x1000003) {
    return (float)(float10)0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return *(float *)(uVar2 + 0xc);
}

/* ref: FUN_00500470 */
float F_00500470(unsigned int gen_a0)
{
  GEN_ENTER(0x500470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (*puVar1 < 0x1000003) {
    return (float)(float10)1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return *(float *)(uVar2 + 0x10);
}

/* ref: FUN_005004a0 */
byte F_005004a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5004a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (0x1000002 < *puVar1) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    if (param_1 == 0) {
      return (byte)*(undefined4 *)(uVar2 + 0x14) & 1;
    }
    if (param_1 == 1) {
      return (byte)(*(uint *)(uVar2 + 0x14) >> 1) & 1;
    }
    if (param_1 == 2) {
      return (byte)(*(uint *)(uVar2 + 0x14) >> 2) & 1;
    }
  }
  return 0;
}

/* ref: FUN_00500500 */
uint F_00500500(unsigned int gen_a0)
{
  GEN_ENTER(0x500500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (*puVar1 < 0x1000003) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    return uVar2 + 8;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar2 + 0x34;
}

/* ref: FUN_00500530 */
uint F_00500530(unsigned int gen_a0)
{
  GEN_ENTER(0x500530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0xaf);
}

/* ref: FUN_00500540 */
uint F_00500540(unsigned int gen_a0)
{
  GEN_ENTER(0x500540u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00500550 */
unsigned int F_00500550(unsigned int gen_a0)
{
  GEN_ENTER(0x500550u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return 0;
}

/* ref: FUN_00500560 */
uint F_00500560(unsigned int gen_a0)
{
  GEN_ENTER(0x500560u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00500570 */
uint F_00500570(unsigned int gen_a0)
{
  GEN_ENTER(0x500570u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return 0;
}

/* ref: FUN_00500590 */
unsigned int F_00500590(unsigned int gen_a0)
{
  GEN_ENTER(0x500590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_005005c0 */
uint F_005005c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5005c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)this = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 4));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00500600 */
uint F_00500600(unsigned int gen_a0)
{
  GEN_ENTER(0x500600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa8;
}

/* ref: FUN_00500610 */
uint F_00500610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  local_8 = 0;
  if (1 < *(int *)((int)this + 0xb0)) {
    iVar1 = (*(int *)((int)this + 0xb0) - 2U >> 1) + 1;
    puVar2 = (ushort *)((int)this + param_1 * 2 + 0x14c);
    uVar4 = iVar1 * 2;
    do {
      local_c = local_c + (uint)puVar2[-0x20];
      local_8 = local_8 + (uint)*puVar2;
      puVar2 = puVar2 + 0x40;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = 0;
  if (uVar4 < *(uint *)((int)this + 0xb0)) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar4 * 0x20 + param_1) * 2 + 0x10c)));
  }
  return local_8 + local_c + uVar3;
}

/* ref: FUN_00500680 */
uint F_00500680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  local_8 = 0;
  if (1 < *(int *)((int)this + 0xb0)) {
    iVar1 = (*(int *)((int)this + 0xb0) - 2U >> 1) + 1;
    puVar2 = (ushort *)((int)this + param_1 * 2 + 0x150);
    uVar4 = iVar1 * 2;
    do {
      local_c = local_c + (uint)puVar2[-0x20];
      local_8 = local_8 + (uint)*puVar2;
      puVar2 = puVar2 + 0x40;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = 0;
  if (uVar4 < *(uint *)((int)this + 0xb0)) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar4 * 0x20 + param_1) * 2 + 0x110)));
  }
  return local_8 + local_c + uVar3;
}

/* ref: FUN_005006f0 */
uint F_005006f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5006f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x2f0 + param_2 * 8;
}

/* ref: FUN_00500710 */
uint F_00500710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + (param_2 * 3 + 0xc0) * 4;
}

/* ref: FUN_00500730 */
uint F_00500730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xd0 + *(int *)(in_ecx + 0x3c0);
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf25 */
unsigned int F_00500750(unsigned int gen_a0)
{
  GEN_ENTER(0x500750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf25 */
unsigned int F_00500770(unsigned int gen_a0)
{
  GEN_ENTER(0x500770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf25 */
unsigned int F_00500790(unsigned int gen_a0)
{
  GEN_ENTER(0x500790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf16 */
uint F_005007b0(void)
{
  GEN_ENTER(0x5007b0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1303008);
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf17 */
uint F_005007c0(void)
{
  GEN_ENTER(0x5007c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf18 */
uint F_005007d0(void)
{
  GEN_ENTER(0x5007d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf25 */
unsigned int F_005007e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5007e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf25 */
unsigned int F_00500800(unsigned int gen_a0)
{
  GEN_ENTER(0x500800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf25 */
unsigned int F_00500840(unsigned int gen_a0)
{
  GEN_ENTER(0x500840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandle::vf16 */
uint F_00500880(void)
{
  GEN_ENTER(0x500880u, 0u, 0u, 0u, 0u);
  return 0x10987fc;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandle::vf16 */
uint F_00500890(void)
{
  GEN_ENTER(0x500890u, 0u, 0u, 0u, 0u);
  return 0x1098838;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandle::vf16 */
uint F_005008a0(void)
{
  GEN_ENTER(0x5008a0u, 0u, 0u, 0u, 0u);
  return 0x1098874;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandle::vf16 */
uint F_005008b0(void)
{
  GEN_ENTER(0x5008b0u, 0u, 0u, 0u, 0u);
  return 0x10988b4;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandle::vf16 */
uint F_005008c0(void)
{
  GEN_ENTER(0x5008c0u, 0u, 0u, 0u, 0u);
  return 0x10988f4;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandle::vf16 */
uint F_005008d0(void)
{
  GEN_ENTER(0x5008d0u, 0u, 0u, 0u, 0u);
  return 0x1098930;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf16 */
uint F_005008e0(void)
{
  GEN_ENTER(0x5008e0u, 0u, 0u, 0u, 0u);
  return 0x109896c;
}

/* ref: FUN_005008f0 */
uint F_005008f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5008f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return ((param_1 + -1 + param_2) / param_2) * param_2;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf28 */
unsigned int F_00500910(void)
{
  GEN_ENTER(0x500910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf15 */
uint F_00500920(void)
{
  GEN_ENTER(0x500920u, 0u, 0u, 0u, 0u);
  return 0xec;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf16 */
uint F_00500930(void)
{
  GEN_ENTER(0x500930u, 0u, 0u, 0u, 0u);
  return 0x10989a8;
}

/* ref: FUN_00500940 */
uint F_00500940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe8) + (uint)(ushort)param_2 * 4)));
}

/* ref: FUN_00500960 */
uint F_00500960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_00b4d420(in_ecx + 0xb8,param_2);
  return param_2;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandle::vf16 */
uint F_00500980(void)
{
  GEN_ENTER(0x500980u, 0u, 0u, 0u, 0u);
  return 0x10989ec;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandle::vf16 */
uint F_00500990(void)
{
  GEN_ENTER(0x500990u, 0u, 0u, 0u, 0u);
  return 0x1098aa4;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf15 */
uint F_005009a0(void)
{
  GEN_ENTER(0x5009a0u, 0u, 0u, 0u, 0u);
  return 0xa8;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf16 */
uint F_005009b0(void)
{
  GEN_ENTER(0x5009b0u, 0u, 0u, 0u, 0u);
  return 0x1098adc;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf17 */
uint F_005009c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5009c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf18 */
uint F_005009d0(void)
{
  GEN_ENTER(0x5009d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf28 */
unsigned int F_005009e0(void)
{
  GEN_ENTER(0x5009e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005009f0 */
uint F_005009f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5009f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa0);
}

/* ref: FUN_00500a00 */
uint F_00500a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *(int *)(in_ecx + 0xa4);
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf16 */
uint F_00500a20(void)
{
  GEN_ENTER(0x500a20u, 0u, 0u, 0u, 0u);
  return 0x1098b14;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf25 */
uint F_00500a30(unsigned int gen_a0)
{
  GEN_ENTER(0x500a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b4d440(this + 0xa0);
  return uVar1;
}

/* ref: FUN_00500a40 */
byte F_00500a40(void)
{
  GEN_ENTER(0x500a40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00500a50 */
byte F_00500a50(void)
{
  GEN_ENTER(0x500a50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf15 */
uint F_00500a60(void)
{
  GEN_ENTER(0x500a60u, 0u, 0u, 0u, 0u);
  return 0x108;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf16 */
uint F_00500a70(void)
{
  GEN_ENTER(0x500a70u, 0u, 0u, 0u, 0u);
  return 0x1098da4;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf17 */
uint F_00500a80(unsigned int gen_a0)
{
  GEN_ENTER(0x500a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf18 */
uint F_00500a90(void)
{
  GEN_ENTER(0x500a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf28 */
unsigned int F_00500aa0(void)
{
  GEN_ENTER(0x500aa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf16 */
uint F_00500ab0(void)
{
  GEN_ENTER(0x500ab0u, 0u, 0u, 0u, 0u);
  return 0x1098de0;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf25 */
unsigned int F_00500ac0(void)
{
  GEN_ENTER(0x500ac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandle::vf16 */
uint F_00500ad0(void)
{
  GEN_ENTER(0x500ad0u, 0u, 0u, 0u, 0u);
  return 0x1098e24;
}

/* ref: FUN_00500ae0 */
uint F_00500ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b4ded0(in_ecx + 0xa0,param_2);
  return uVar1;
}

/* ref: FUN_00500af0 */
uint F_00500af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b4def0((undefined *)((int)this + 0xa0),param_1);
  return uVar1;
}

/* ref: FUN_00500b00 */
byte F_00500b00(unsigned int gen_a0)
{
  GEN_ENTER(0x500b00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b4dec0(in_ecx + 0xa0);
  return bVar1;
}

/* ref: FUN_00500b10 */
byte F_00500b10(unsigned int gen_a0)
{
  GEN_ENTER(0x500b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b4deb0(in_ecx + 0xa0);
  return bVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf16 */
uint F_00500b20(void)
{
  GEN_ENTER(0x500b20u, 0u, 0u, 0u, 0u);
  return 0x1098e60;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf17 */
uint F_00500b30(unsigned int gen_a0)
{
  GEN_ENTER(0x500b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0xa0) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_009bc020(*(undefined * PTR32 *)(this + 0xa0));
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf24 */
unsigned int F_00500b50(void)
{
  GEN_ENTER(0x500b50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf26 */
byte F_00500b60(void)
{
  GEN_ENTER(0x500b60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf16 */
uint F_00500b70(void)
{
  GEN_ENTER(0x500b70u, 0u, 0u, 0u, 0u);
  return 0x1098e94;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf17 */
uint F_00500b80(unsigned int gen_a0)
{
  GEN_ENTER(0x500b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf18 */
uint F_00500b90(unsigned int gen_a0)
{
  GEN_ENTER(0x500b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa4);
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf24 */
unsigned int F_00500ba0(void)
{
  GEN_ENTER(0x500ba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf25 */
unsigned int F_00500bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x500bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  *(undefined4 *)(this + 0xa4) = 0;
  return 0;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf26 */
byte F_00500be0(void)
{
  GEN_ENTER(0x500be0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf16 */
uint F_00500bf0(void)
{
  GEN_ENTER(0x500bf0u, 0u, 0u, 0u, 0u);
  return 0x1098ed0;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf17 */
uint F_00500c00(unsigned int gen_a0)
{
  GEN_ENTER(0x500c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa0);
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf23 */
uint F_00500c10(unsigned int gen_a0)
{
  GEN_ENTER(0x500c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf24 */
unsigned int F_00500c20(void)
{
  GEN_ENTER(0x500c20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf26 */
byte F_00500c30(void)
{
  GEN_ENTER(0x500c30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00500c40 */
uint F_00500c40(unsigned int gen_a0)
{
  GEN_ENTER(0x500c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x98));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf34 */
uint F_00500c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x500c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    F_00406b30(*(int *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,param_1,param_2);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::CollisionMeshResourceHandle::vf16 */
uint F_00500cf0(void)
{
  GEN_ENTER(0x500cf0u, 0u, 0u, 0u, 0u);
  return 0x1098f70;
}

/* ref: Client::System::Resource::Handle::CutSceneResourceHandle::vf16 */
uint F_00500d00(void)
{
  GEN_ENTER(0x500d00u, 0u, 0u, 0u, 0u);
  return 0x1098fac;
}

/* ref: Client::System::Resource::Handle::TimeLineResourceHandle::vf16 */
uint F_00500d10(void)
{
  GEN_ENTER(0x500d10u, 0u, 0u, 0u, 0u);
  return 0x1098fe4;
}

/* ref: Client::System::Resource::Handle::LevelSceneResourceHandle::vf16 */
uint F_00500d20(void)
{
  GEN_ENTER(0x500d20u, 0u, 0u, 0u, 0u);
  return 0x109901c;
}

/* ref: Client::System::Resource::Handle::LayerGroupResourceHandle::vf16 */
uint F_00500d30(void)
{
  GEN_ENTER(0x500d30u, 0u, 0u, 0u, 0u);
  return 0x1099054;
}

/* ref: Client::System::Resource::Handle::SharedGroupResourceHandle::vf16 */
uint F_00500d40(void)
{
  GEN_ENTER(0x500d40u, 0u, 0u, 0u, 0u);
  return 0x109908c;
}

/* ref: Client::System::Resource::Handle::NaviMeshResourceHandle::vf16 */
uint F_00500d50(void)
{
  GEN_ENTER(0x500d50u, 0u, 0u, 0u, 0u);
  return 0x10990c4;
}

/* ref: Client::System::Resource::Handle::ExlResourceHandle::vf16 */
uint F_00500d60(void)
{
  GEN_ENTER(0x500d60u, 0u, 0u, 0u, 0u);
  return 0x10990fc;
}

/* ref: Client::System::Resource::Handle::ExhResourceHandle::vf16 */
uint F_00500d70(void)
{
  GEN_ENTER(0x500d70u, 0u, 0u, 0u, 0u);
  return 0x109912c;
}

/* ref: Client::System::Resource::Handle::ExdResourceHandle::vf16 */
uint F_00500d80(void)
{
  GEN_ENTER(0x500d80u, 0u, 0u, 0u, 0u);
  return 0x109915c;
}

/* ref: Client::System::Resource::Handle::HardwareCursorResourceHandle::vf16 */
uint F_00500d90(void)
{
  GEN_ENTER(0x500d90u, 0u, 0u, 0u, 0u);
  return 0x109918c;
}

/* ref: Client::System::Resource::Handle::CursorResourceHandle::vf16 */
uint F_00500da0(void)
{
  GEN_ENTER(0x500da0u, 0u, 0u, 0u, 0u);
  return 0x10991c8;
}

/* ref: FUN_00500db0 */
unsigned int F_00500db0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x500db0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: Client::System::Resource::Handle::UldResourceHandle::vf16 */
uint F_00500dd0(void)
{
  GEN_ENTER(0x500dd0u, 0u, 0u, 0u, 0u);
  return 0x10991fc;
}

/* ref: Client::System::Resource::Handle::UgdResourceHandle::vf16 */
uint F_00500de0(void)
{
  GEN_ENTER(0x500de0u, 0u, 0u, 0u, 0u);
  return 0x109922c;
}

/* ref: Client::System::Resource::Handle::PNGResourceHandle::vf16 */
uint F_00500e00(void)
{
  GEN_ENTER(0x500e00u, 0u, 0u, 0u, 0u);
  return 0x109925c;
}

/* ref: Client::System::Resource::Handle::LuaResourceHandle::vf16 */
uint F_00500e10(void)
{
  GEN_ENTER(0x500e10u, 0u, 0u, 0u, 0u);
  return 0x109928c;
}

/* ref: Client::System::Resource::Handle::LuabResourceHandle::vf16 */
uint F_00500e20(void)
{
  GEN_ENTER(0x500e20u, 0u, 0u, 0u, 0u);
  return 0x10992bc;
}

/* ref: FUN_00500e90 */
uint F_00500e90(unsigned int gen_a0)
{
  GEN_ENTER(0x500e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((((int)*(char *)(param_1 + 3) << 8 | (int)*(char *)(param_1 + 4)) << 8 |
           (int)*(char *)(param_1 + 5))));
  if (puVar1 != (undefined *)0x657831) {
    return -(uint)(puVar1 != &REFG(undefined, 0x666678));
  }
  return 1;
}

/* ref: FUN_00500ed0 */
uint F_00500ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x500ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((((int)*(char *)(param_1 + 4) << 8 | (int)*(char *)(param_1 + 5)) << 8 |
           (int)*(char *)(param_1 + 6))));
  if (puVar1 != (undefined *)0x657831) {
    return -(uint)(puVar1 != &REFG(undefined, 0x666678));
  }
  return 1;
}

/* ref: FUN_00500f10 */
uint F_00500f10(unsigned int gen_a0)
{
  GEN_ENTER(0x500f10u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return in_ecx[1] - *in_ecx >> 2;
}

/* ref: FUN_00500f20 */
uint F_00500f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500f20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(*in_ecx + param_2 * 4) + 4;
}

/* ref: FUN_00500f40 */
byte F_00500f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x500f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) {
    return *(int *)(*(int *)this + param_1 * 4) != 0;
  }
  return 0;
}

/* ref: FUN_00500f70 */
byte F_00500f70(unsigned int gen_a0)
{
  GEN_ENTER(0x500f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  DWORD DVar2;
  int * piVar3;
  
  DVar2 = gen_imp_GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x40) == DVar2) {
    piVar3 = (int *)((int)this + 0x38);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    return iVar1 != 0;
  }
  return 0;
}

/* ref: FUN_00501060 */
unsigned int F_00501060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  DWORD DVar1;
  undefined4 local_8;
  
  DVar1 = gen_imp_GetCurrentThreadId();
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),DVar1 == *(DWORD *)((int)this + 0x44));
  LOCK();
  *(undefined4 *)((int)this + 0x3c) = 1;
  UNLOCK();
  F_004fda90(REFG(void * PTR32, 0x1375ae8),param_1 + 0x30,param_1,local_8);
  LOCK();
  *(undefined4 *)((int)this + 0x3c) = 0;
  UNLOCK();
  return 0;
}

/* ref: FUN_005010b0 */
byte F_005010b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5010b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((char)param_1[0x18] == -1) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1);
  return (char)uVar1 != '\0';
}

/* ref: FUN_005010d0 */
byte F_005010d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5010d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0xde4);
  if ((iVar1 != *(int *)((int)this + 0xde8)) &&
     (iVar2 = (*(int *)((int)this + 0xde8) - iVar1 >> 2) + -1, -1 < iVar2)) {
    piVar3 = (int *)(iVar1 + iVar2 * 4);
    do {
      if (*piVar3 == param_1) {
        return 1;
      }
      piVar3 = piVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00501120 */
uint F_00501120(unsigned int gen_a0)
{
  GEN_ENTER(0x501120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1375aec) + 8) + (uint)(ushort)param_1 * 4)));
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00501140 */
byte F_00501140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x4e) == '\0') {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x16) & 1) != 0) && (*(char *)((int)this + 0x51) == '\0')) &&
     (*((char *)GEN_TOP(((param_1[1] & 0xffffU) + 0x52 + (int)this))) == '\0')) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1);
    if ((uVar3 == 0) && (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1), uVar3 == 0)) {
      return 0;
    }
    piVar1 = param_1 + 0x22;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 == 2) {
      return param_1[0xd] == 1;
    }
  }
  return 0;
}

/* ref: FUN_005011b0 */
uint F_005011b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5011b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  F_00c48350(this,0,0x50);
  iVar3 = *(int *)((int)this + 0x54);
  uVar1 = 0;
  do {
    iVar3 = iVar3 + *(int *)((int)&REFG(undefined4, 0x10993c0) + uVar1);
    uVar2 = uVar1 + 0x14;
    *(int *)((int)this + 0x54) = iVar3;
    iVar3 = iVar3 + *(int *)((int)&REFG(undefined4, 0x10993c4) + uVar1);
    *(int *)((int)this + 0x54) = iVar3;
    iVar3 = iVar3 + *(int *)((int)&REFG(undefined4, 0x10993c8) + uVar1);
    *(int *)((int)this + 0x54) = iVar3;
    iVar3 = iVar3 + *(int *)((int)&REFG(undefined4, 0x10993cc) + uVar1);
    *(int *)((int)this + 0x54) = iVar3;
    iVar3 = iVar3 + *(int *)((int)&REFG(undefined4, 0x10993d0) + uVar1);
    *(int *)((int)this + 0x54) = iVar3;
    uVar1 = uVar2;
  } while (uVar2 < 0x50);
  return (uint)this;
}

/* ref: FUN_00501240 */
uint F_00501240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501240u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = &REFG(undefined4, 0x1098040);
  uVar2 = 0;
  while ((*piVar1 != param_1 || (piVar1[1] != *param_2))) {
    uVar2 = uVar2 + 0xc;
    piVar1 = piVar1 + 3;
    if (0xb3 < uVar2) {
      return 0;
    }
  }
  uVar2 = piVar1[2];
  if (uVar2 == 0xffffffff) {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00501290 */
byte F_00501290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501290u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = &REFG(undefined4, 0x1098040);
  uVar2 = 0;
  while ((*piVar1 != param_1 || (piVar1[1] != *param_2))) {
    uVar2 = uVar2 + 0xc;
    piVar1 = piVar1 + 3;
    if (0xb3 < uVar2) {
      return 1;
    }
  }
  if (piVar1[2] == -1) {
    return 1;
  }
  return piVar1[2] != 0;
}

/* ref: FUN_00501300 */
uint F_00501300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x501300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_1;
  *(undefined1 *)((int)this + 2) = (undefined1)param_1;
  *(undefined1 *)((int)this + 3) = 0xff;
  *(uint *)((int)this + 8) =
       *(uint *)((int)this + 8) ^ (*(uint *)((int)this + 8) ^ param_2) & 0x7fffffff;
  uVar2 = F_00427d90();
  uVar1 = (uint)(uVar2 / 1000);
  *(uint *)((int)this + 4) = uVar1;
  *(byte *)((int)this + 0xc) =
       *(byte *)((int)this + 0xc) ^ (*(byte *)((int)this + 0xc) ^ (byte)param_3) & 1;
  return uVar1;
}

/* ref: FUN_00501350 */
byte F_00501350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),param_1,(int)pcVar3 - (int)(param_1 + 1));
  uVar4 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = *(uint *)((int)this + 0xc);
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return uVar4 == uVar1;
}

/* ref: FUN_005013b0 */
uint F_005013b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5013b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)((int)this + 0x1c) / *(uint *)((int)this + 0x94);
  }
  uVar3 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005013b0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x70) + uVar2 * 4))));
      local_8 = local_8 + uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return local_8;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf5 */
byte F_00501400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * pRVar2;
  
  if (((*(undefined * PTR32 *)&gen_args[0])[0x60] != (undefined1)0xff) && ((*(undefined * PTR32 *)&gen_args[0])[0x60] == (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)))) {
    pRVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x8c;
    LOCK();
    iVar1 = *(int *)pRVar2;
    *(int *)pRVar2 = *(int *)pRVar2;
    UNLOCK();
    if (iVar1 == 7) {
      pRVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x88;
      LOCK();
      iVar1 = *(int *)pRVar2;
      *(int *)pRVar2 = *(int *)pRVar2;
      UNLOCK();
      if (iVar1 != 3) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf9 */
uint F_00501440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x501440u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined1 RVar2;
  undefined1 RVar3;
  byte bVar4;
  uint uVar5;
  undefined * pRVar6;
  undefined * pRVar8;
  ulonglong uVar9;
  undefined3 uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))();
  bVar4 = (byte)uVar5;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = bVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(bVar4,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3))));
  pRVar6 = (undefined *)&(*(undefined4 *)&gen_args[1]);
  if (bVar4 <= (byte)(*(undefined4 *)&gen_args[1])) {
    pRVar6 = (undefined *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  }
  RVar2 = (*(undefined * PTR32 *)&gen_args[0])[0x60];
  RVar3 = *(undefined1 *)pRVar6;
  (*(undefined4 *)&gen_args[1]) = CONCAT13(RVar3,(undefined3)(*(undefined4 *)&gen_args[1]));
  if (RVar2 == (undefined1)0xff) {
    pRVar6 = (*(undefined * PTR32 *)&gen_args[0]) + 0x88;
    LOCK();
    iVar1 = *(int *)pRVar6;
    *(int *)pRVar6 = *(int *)pRVar6;
    UNLOCK();
    if (iVar1 != 3) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ (*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ uVar5) & 0x7fffffff;
      (*(undefined * PTR32 *)&gen_args[0])[0x60] = RVar3;
      (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar3;
      (*(undefined * PTR32 *)&gen_args[0])[0x62] = RVar3;
      (*(undefined * PTR32 *)&gen_args[0])[99] = (undefined1)0xff;
      uVar9 = F_00427d90();
      pRVar6 = (undefined *)(uVar9 / 1000);
      *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))) = pRVar6;
      (*(undefined * PTR32 *)&gen_args[0])[0x6c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] ^ ((*(int *)&gen_args[2]) == 1 ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c]) & 1);
    }
  }
  else {
    if (((*(int *)&gen_args[2]) == 0) && (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] & 1) == 0)) {
      pRVar8 = (undefined *)((int)&(*(undefined4 *)&gen_args[1]) + 3);
      if ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x61] <= (byte)RVar3) {
        pRVar8 = (*(undefined * PTR32 *)&gen_args[0]) + 0x61;
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x61] = *pRVar8;
      return (uint)pRVar6;
    }
    RVar2 = (*(undefined * PTR32 *)&gen_args[0])[0x6c];
    uVar7 = (undefined3)((uint)((int)(uintptr_t)pRVar6) >> 8);
    pRVar6 = ((undefined *)GEN_TOP(CONCAT31(uVar7,RVar2)));
    if ((((byte)RVar2 & 1) != 0) && ((*(int *)&gen_args[2]) == 2)) {
      uVar5 = CONCAT31(uVar7,RVar2) & 0xfffffffe;
      (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar3;
      (*(undefined * PTR32 *)&gen_args[0])[0x6c] = SUB41(uVar5,0);
      return uVar5;
    }
    if (((byte)RVar2 & 1) == 0) {
      if ((*(int *)&gen_args[2]) == 1) {
        (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar3;
        (*(undefined * PTR32 *)&gen_args[0])[0x6c] = (undefined1)((byte)RVar2 | 1);
        return CONCAT31(uVar7,RVar2) | 1;
      }
    }
    else if ((*(int *)&gen_args[2]) == 1) goto LAB_005014cf;
    if ((*(int *)&gen_args[2]) == 2) {
LAB_005014cf: ;
      (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar3;
      return (uint)pRVar6;
    }
  }
  return (uint)pRVar6;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf11 */
unsigned int F_00501540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(char *)(in_ecx + 0x60) != -1) {
    *(uint *)(in_ecx + 0x68) =
         *(uint *)(in_ecx + 0x68) ^ (*(uint *)(in_ecx + 0x68) ^ param_2) & 0x7fffffff;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf13 */
uint F_00501560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x501560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined1 RVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined * pRVar4;
  ulonglong uVar5;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)(*(undefined4 *)&gen_args[1]));
  if ((char)(*(undefined4 *)&gen_args[1]) == -2) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  RVar2 = SUB41(uVar3,0);
  (*(undefined4 *)&gen_args[1]) = CONCAT13(RVar2,(undefined3)(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)&gen_args[0])[0x60] != (undefined1)0xff) {
    pRVar4 = (undefined *)((int)&(*(undefined4 *)&gen_args[1]) + 3);
    if ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x61] <= (byte)RVar2) {
      pRVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0x61;
    }
    RVar2 = *(undefined1 *)pRVar4;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) =
         *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ (*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ (*(uint *)&gen_args[2])) & 0x7fffffff;
    (*(undefined * PTR32 *)&gen_args[0])[0x6c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] ^ ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] ^ (byte)(*(undefined4 *)&gen_args[3])) & 1);
    (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar2;
    return CONCAT31((int3)((uint)((int)(uintptr_t)pRVar4) >> 8),RVar2);
  }
  pRVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0x88;
  LOCK();
  iVar1 = *(int *)pRVar4;
  *(int *)pRVar4 = *(int *)pRVar4;
  UNLOCK();
  if (iVar1 != 3) {
    (*(undefined * PTR32 *)&gen_args[0])[0x60] = RVar2;
    (*(undefined * PTR32 *)&gen_args[0])[0x61] = RVar2;
    (*(undefined * PTR32 *)&gen_args[0])[0x62] = RVar2;
    (*(undefined * PTR32 *)&gen_args[0])[99] = (undefined1)0xff;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) =
         *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ (*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) ^ (*(uint *)&gen_args[2])) & 0x7fffffff;
    uVar5 = F_00427d90();
    uVar3 = (uint)(uVar5 / 1000);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))) = uVar3;
    (*(undefined * PTR32 *)&gen_args[0])[0x6c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] ^ ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x6c] ^ (byte)(*(undefined4 *)&gen_args[3])) & 1);
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf14 */
uint F_00501610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x501610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 RVar1;
  ulonglong uVar2;
  undefined1 RVar3;
  undefined1 RVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (((char)uVar6 != '\0') || (this[0x60] == (undefined1)0xff)) {
    return 0;
  }
  RVar3 = this[0x61];
  if (RVar3 == (undefined1)0xfe) {
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    RVar3 = SUB41(uVar6,0);
  }
  RVar4 = (undefined1)F_005ecfe0(this);
  if ((RVar4 != (undefined1)0xff) && ((byte)RVar4 < (byte)RVar3)) {
    RVar3 = RVar4;
  }
  RVar1 = this[0x60];
  if ((byte)RVar3 < (byte)RVar1) {
    this[0x62] = RVar1;
    this[99] = RVar1;
    this[0x60] = RVar3;
    *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
    uVar7 = 1;
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
    cVar5 = (char)uVar6;
  }
  else {
    if ((byte)RVar3 <= (byte)RVar1) {
      *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
      goto LAB_00501759;
    }
    if ((*(int *)(REFG(int, 0x1379cb0) + 0x28) != 0) && (*(char *)(REFG(int, 0x1375aec) + 0x4f) != '\0')) {
      return 0;
    }
    uVar2 = (ulonglong)*(uint *)(this + 100) * 1000 +
            (ulonglong)(*(uint *)(this + 0x68) & 0x7fffffff);
    if ((((byte)this[0x6c] & 1) != 0) || (RVar4 != (undefined1)0xff)) {
      uVar2 = 0;
    }
    if (CONCAT44(param_2,param_1) <= uVar2) {
      uVar7 = 0;
      goto LAB_00501759;
    }
    this[0x62] = RVar1;
    this[99] = RVar3;
    this[0x60] = RVar3;
    *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
    uVar7 = 2;
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
    cVar5 = (char)uVar6;
  }
  if (cVar5 == '\0') {
    this[99] = this[0x62];
    this[0x60] = this[0x62];
  }
LAB_00501759: ;
  if (((byte)this[0x6c] & 1) == 0) {
    this[0x61] = (undefined1)0xfe;
  }
  return uVar7;
}

/* ref: FUN_005017b0 */
byte F_005017b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5017b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar5;
  piVar1 = (int *)((int)this + 0x88);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if (iVar3 == 1) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x10) < *(int *)((int)this + 0x2c))) {
      *(int *)((int)this + 0x2c) = *(int *)(param_1 + 0x10);
    }
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  if (iVar3 != 2) {
    if (iVar3 == 3) {
      if ((param_1 != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
        ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
        LOCK();
        *piVar1 = 1;
        UNLOCK();
        LOCK();
        *(undefined4 *)((int)this + 0x8c) = 1;
        UNLOCK();
        LOCK();
        *(undefined4 *)((int)this + 0x90) = 0;
        UNLOCK();
        *(undefined4 *)((int)this + 0x34) = 0xffffffec;
        if (*(int *)((int)this + 0x2c) == 6) {
          *(undefined4 *)((int)this + 0x2c) = 5;
        }
        *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) | 0x10;
        *(undefined4 *)((int)this + 0x34) = 0xffffffec;
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 4);
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return 1;
      }
      puVar2 = (undefined4 *)((int)this + 0x8c);
      LOCK();
      uVar4 = *puVar2;
      *puVar2 = *puVar2;
      UNLOCK();
      switch((unsigned int)(uintptr_t)(uVar4)) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 8: ;
        ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
        LOCK();
        *piVar1 = 1;
        UNLOCK();
        LOCK();
        *puVar2 = 1;
        UNLOCK();
        LOCK();
        *(undefined4 *)((int)this + 0x90) = 0;
        UNLOCK();
        *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) | 0x10;
        *(undefined4 *)((int)this + 0x34) = 0xffffffec;
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return 1;
      case 7: ;
        goto switchD_005018a6_caseD_7;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
        LOCK();
        *piVar1 = 2;
        UNLOCK();
        F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10c));
        return 0;
      default: ;
        F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,&REFG(undefined, 0x10980f4),uVar4);
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return 0;
      }
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,&REFG(undefined, 0x1098014),iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
switchD_005018a6_caseD_7: ;
  if ((char)param_2 == '\0') {
    LOCK();
    *piVar1 = 2;
    UNLOCK();
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  LOCK();
  *piVar1 = 1;
  UNLOCK();
  LOCK();
  *puVar2 = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((int)this + 0x90) = 2;
  UNLOCK();
  *(undefined4 *)((int)this + 0x34) = 0xffffffec;
  if (*(int *)((int)this + 0x2c) == 6) {
    *(undefined4 *)((int)this + 0x2c) = 5;
  }
  *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) | 0x10;
  *(undefined4 *)((int)this + 0x34) = 0xffffffec;
  F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10c));
  return 1;
}

/* ref: FUN_00501a10 */
uint F_00501a10(unsigned int gen_a0)
{
  GEN_ENTER(0x501a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
  LOCK();
  uVar1 = *(uint *)((int)this + 0x88);
  *(uint *)((int)this + 0x88) = 4;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00501a30 */
uint F_00501a30(unsigned int gen_a0)
{
  GEN_ENTER(0x501a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return (uint)((*(uint *)((int)this + 0x30) & 0xc000000) == 0);
}

/* ref: FUN_00501aa0 */
uint F_00501aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x501aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  LOCK();
  *(undefined4 *)((int)this + 0x88) = 3;
  UNLOCK();
  piVar1 = (int *)((int)this + 0x80);
  do {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 1;
    UNLOCK();
  } while (iVar2 != 0);
  piVar3 = piVar1;
  if ((*(uint *)((int)this + 0x30) & 0xc000000) != 0) {
    piVar3 = (int *)F_004f9cb0((undefined *)((int)this + 0x30));
  }
  LOCK();
  *piVar1 = 0;
  UNLOCK();
  *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) & 0xef;
  return (uint)piVar3;
}

/* ref: FUN_00501af0 */
byte F_00501af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x501af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  byte bVar7;
  
  piVar3 = (int *)((int)this + 0x90);
  LOCK();
  iVar2 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar2 == 2) {
    piVar3 = *(int * PTR32 *)((int)this + 0x38);
    if (piVar3 != (int *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)((int)this + 0x38));
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,param_2);
    *(uint *)((int)this + 0x34) = uVar4;
  }
  else {
    if ((param_3 == 0) || (param_3 == 1)) {
      piVar5 = *(int * PTR32 *)((int)this + 0x38);
      if (piVar5 != (int *)0x0) {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5)));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,*(undefined4 *)((int)this + 0x38));
        *(undefined4 *)((int)this + 0x38) = 0;
      }
      if (param_3 == 1) {
        puVar1 = (undefined4 *)((int)this + 0x8c);
        LOCK();
        *puVar1 = *puVar1;
        UNLOCK();
        LOCK();
        *puVar1 = 6;
        UNLOCK();
      }
    }
    if (*(uint *)((int)this + 0x34) == 0xffffffec) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar2 == 1) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,param_1,param_2);
      }
      else {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,param_1,param_2);
      }
LAB_00501c50: ;
      *(uint *)((int)this + 0x34) = uVar4;
    }
    else {
      uVar4 = param_2;
      if (param_2 != *(uint *)((int)this + 0x34)) goto LAB_00501c50;
    }
    if (param_3 == 1) {
      return 0;
    }
  }
  gen_imp_EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)this + 0x84));
  piVar3 = (int *)((int)this + 0x80);
  do {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = 1;
    UNLOCK();
  } while (iVar2 != 0);
  if ((*(uint *)((int)this + 0x30) & 0xc000000) != 0) {
    F_004fad40((undefined *)((int)this + 0x30));
  }
  LOCK();
  *piVar3 = 0;
  UNLOCK();
  piVar3 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar3 != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 1: ;
    LOCK();
    *(undefined4 *)((int)this + 0x8c) = 7;
    UNLOCK();
    bVar7 = 1;
    goto LAB_00501caa;
  case 2: ;
    uVar6 = 8;
LAB_00501ca0: ;
    LOCK();
    *(undefined4 *)((int)this + 0x8c) = uVar6;
    UNLOCK();
    break;
  case 0xfffffff6: ;
    LOCK();
    *(undefined4 *)((int)this + 0x8c) = 10;
    UNLOCK();
    break;
  default: ;
    uVar6 = 0xc;
    goto LAB_00501ca0;
  case 0xffffffff: ;
    LOCK();
    *(undefined4 *)((int)this + 0x8c) = 9;
    UNLOCK();
  }
  bVar7 = 0;
LAB_00501caa: ;
  gen_imp_LeaveCriticalSection(*(LPCRITICAL_SECTION *)((int)this + 0x84));
  return bVar7;
}

/* ref: FUN_00501cf0 */
byte F_00501cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x501cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (((param_2 < 0x400001) && (*(int *)(in_ecx + 0x14) == 0)) && (*(int *)(in_ecx + 0x18) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00501d20 */
uint F_00501d20(unsigned int gen_a0)
{
  GEN_ENTER(0x501d20u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*param_1 == 0xb) {
    return param_1[0x32];
  }
  uVar1 = F_004f7900((undefined *)param_1[9]);
  return (uint)uVar1;
}

/* ref: FUN_00501d40 */
uint F_00501d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x501d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != 0xb) {
    uVar3 = F_004f78b0((undefined *)param_1[9],param_2,param_3,param_4,0);
    return uVar3;
  }
  if (((uint)param_1[0x13] < 2) ||
     (uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1[0xd] + 0xa4))((int *)param_1[0xd]), uVar3 != 1)) {
    if (param_4 == 0) {
      uVar3 = param_1[0x34];
      iVar4 = param_1[0x35] + param_3 + (uint)CARRY4(uVar3,param_2);
      uVar5 = param_2;
      iVar6 = param_3;
    }
    else {
      if (param_4 != 1) {
        return 0xfffffff6;
      }
      uVar2 = param_1[0x38];
      uVar3 = param_1[0x34] + uVar2;
      iVar4 = param_1[0x35] + param_1[0x39] + (uint)CARRY4(param_1[0x34],uVar2) + param_3 +
              (uint)CARRY4(uVar3,param_2);
      uVar5 = uVar2 + param_2;
      iVar6 = param_1[0x39] + param_3 + (uint)CARRY4(uVar2,param_2);
    }
    param_1[0x39] = iVar6;
    param_1[0x38] = uVar5;
    uVar3 = F_004f78b0(*(undefined * PTR32 *)(param_1[0x11] + 0xa70 + param_1[0x36] * 4),uVar3 + param_2,iVar4
                         ,0,0);
    return uVar3;
  }
  if (param_4 == 0) {
    param_1[0x38] = param_2;
    param_1[0x39] = param_3;
    return 1;
  }
  if (param_4 != 1) {
    return 0xfffffff6;
  }
  puVar1 = (uint *)(param_1 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  param_1[0x39] = param_1[0x39] + param_3 + (uint)CARRY4(uVar3,param_2);
  return 1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf27 */
uint F_00501e70(unsigned int gen_a0)
{
  GEN_ENTER(0x501e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pDVar2;
  *(uint *)pDVar2 = *(uint *)pDVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pDVar2;
    *(uint *)pDVar2 = *(uint *)pDVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf28 */
uint F_00501e90(unsigned int gen_a0)
{
  GEN_ENTER(0x501e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pDVar2;
  *(uint *)pDVar2 = *(uint *)pDVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pDVar2;
    *(uint *)pDVar2 = *(uint *)pDVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf29 */
uint F_00501eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x501eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pDVar2;
  *(uint *)pDVar2 = *(uint *)pDVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pDVar2;
    *(uint *)pDVar2 = *(uint *)pDVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf33 */
uint F_00501ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x501ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf35 */
uint F_00501ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x501ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf4 */
byte F_00501f10(unsigned int gen_a0)
{
  GEN_ENTER(0x501f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  byte * pbVar3;
  
  (*(int *)(gen_frame + 0x8)) = in_ecx;
  bVar2 = 0xfe;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) = 0xfe;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xa8) + 4))) + 0x1e + *(int *)(in_ecx + 0xa8)))) + -1;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = cVar1;
    pbVar3 = (byte *)((int)&(*(int *)(gen_frame + 0x8)) + 3);
    if (cVar1 != -1) {
      pbVar3 = (byte *)((int)&(*(int *)(gen_frame + 0x8)) + 2);
    }
    bVar2 = *pbVar3;
  }
  return bVar2;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf27 */
uint F_00501f50(unsigned int gen_a0)
{
  GEN_ENTER(0x501f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pMVar2;
  
  pMVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pMVar2;
  *(uint *)pMVar2 = *(uint *)pMVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pMVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pMVar2;
    *(uint *)pMVar2 = *(uint *)pMVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf31 */
byte F_00501f70(unsigned int gen_a0)
{
  GEN_ENTER(0x501f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined * pMVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar5;
  pMVar1 = this + 0x88;
  LOCK();
  iVar2 = *(int *)pMVar1;
  *(int *)pMVar1 = *(int *)pMVar1;
  UNLOCK();
  if ((iVar2 == 2) && (*(int *)(this + 0xa8) != 0)) {
    bVar7 = 0;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    bVar4 = (byte)uVar5;
    if (bVar4 < 3) {
      if (bVar4 != 0) {
        bVar6 = 0;
        if (bVar4 != 0) {
          do {
            ((byte *)(gen_frame + 0x8))[(int)(bVar7)] = bVar6;
            bVar6 = bVar6 + 1;
            bVar7 = bVar7 + 1;
          } while (bVar6 < bVar4);
        }
        if (bVar7 != 0) {
          (*(uint *)(gen_frame + 0x0)) = (uint)bVar7;
          (*(byte * PTR32 *)(gen_frame + 0x4)) = ((byte *)(gen_frame + 0x8));
          do {
            uVar5 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x4));
            piVar3 = *(int * PTR32 *)(this + uVar5 * 4 + 0x10c);
            if (piVar3 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
              *(undefined4 *)(this + uVar5 * 4 + 0x10c) = 0;
            }
            if ((this[0x12a] != (undefined1)0x0) &&
               (piVar3 = *(int * PTR32 *)(this + uVar5 * 4 + 0x118), piVar3 != (int *)0x0)) {
              ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
              *(undefined4 *)(this + uVar5 * 4 + 0x118) = 0;
            }
            (*(byte * PTR32 *)(gen_frame + 0x4)) = (*(byte * PTR32 *)(gen_frame + 0x4)) + 1;
            (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
          } while ((*(uint *)(gen_frame + 0x0)) != 0);
        }
      }
      F_004ffdd0(this);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_005020a0 */
byte F_005020a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5020a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a6;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_4 < 0x400001) && (*(int *)((int)this + 0x14) == 0)) &&
     (*(int *)((int)this + 0x18) == 0)) {
    uVar3 = F_004f9290(param_2,param_4,"Client.System.Resource.Handle.ModelResourceHandle.Model1")
    ;
    F_004f77b0(param_1,uVar3,param_4,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this);
    param_1 = (undefined *)0x0;
    if ((ushort)param_5 != 0) {
      uVar4 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = (ushort *)uVar4;
      do {
        uVar1 = *param_5;
        iVar2 = *(int *)(uVar3 + 0xc);
        F_004f81e0(param_2,6,uVar3,(uint)uVar1,(int)param_1 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_1 = (undefined *)((int)param_1 + iVar2);
        param_5 = param_5 + 1;
        uVar3 = uVar3 + uVar1;
        param_6 = (ushort *)((int)param_6 - 1);
      } while (param_6 != (ushort *)0x0);
      return 1;
    }
  }
  else {
    param_4 = 0;
    if ((ushort)param_5 != 0) {
      uVar3 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = (ushort *)uVar3;
      do {
        uVar4 = (uint)*param_5;
        uVar3 = F_004f9290(param_2,uVar4,
                             "Client.System.Resource.Handle.ModelResourceHandle.Model2");
        F_004f77b0(param_1,uVar3,uVar4,0);
        ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
        iVar2 = *(int *)(uVar3 + 0xc);
        F_004f81e0(param_2,6,uVar3,uVar4,param_4 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_4 = param_4 + iVar2;
        param_5 = param_5 + 1;
        param_6 = (ushort *)((int)param_6 - 1);
      } while (param_6 != (ushort *)0x0);
    }
  }
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf35 */
uint F_005021f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5021f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pMVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pMVar4 = this + 0x88;
    LOCK();
    iVar1 = *(int *)pMVar4;
    *(int *)pMVar4 = *(int *)pMVar4;
    UNLOCK();
    if (iVar1 != 3) {
      pMVar4 = this + 0x118;
      uVar2 = 3;
      do {
        uVar3 = uVar2;
        if (*(undefined * PTR32 *)(pMVar4 + -0xc) != (undefined *)0x0) {
          F_004d6970(*(undefined * PTR32 *)(pMVar4 + -0xc));
        }
        if (*(undefined * PTR32 *)pMVar4 != (undefined *)0x0) {
          F_004d6ae0(*(undefined * PTR32 *)pMVar4);
        }
        pMVar4 = pMVar4 + 4;
        uVar2 = uVar3 - 1;
      } while (uVar3 - 1 != 0);
      F_004ffdd0(this);
    }
  }
  return uVar3;
}

/* ref: FUN_00502250 */
unsigned int F_00502250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x502250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((char)uVar1 == '\0') && (-1 < (int)(*(byte *)((int)param_1 + 0x17d) - 1))) &&
     (!(((float10)GEN_TOD(gen_bits2f(param_1[*(byte *)((int)param_1 + 0x17d) + 0x59]))) <= (float10)param_2)))
  {
    F_0051b970(param_1 + 0x57,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005022a0 */
unsigned int F_005022a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5022a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((char)uVar3 == '\0') {
    uVar3 = 0;
    if (*(byte *)(param_1 + 0x5f) != 1) {
      pfVar4 = (float *)(param_1 + 0x5a);
      while (!((float10)param_2 < (float10)*pfVar4)) {
        uVar3 = uVar3 + 1;
        pfVar4 = pfVar4 + 1;
        if (*(byte *)(param_1 + 0x5f) - 1 <= uVar3) {
          return 0;
        }
      }
      puVar1 = (uint *)(param_1 + 0x57);
      uVar2 = param_1[0x57];
      while (uVar3 < uVar2) {
        LOCK();
        if (uVar2 == *puVar1) {
          *puVar1 = uVar3;
        }
        UNLOCK();
        uVar2 = *puVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00502310 */
uint F_00502310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x502310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((char)uVar2 == '\0') {
    puVar1 = (uint *)((int)this + 0x15c);
    uVar2 = *(uint *)((int)this + 0x15c);
    while ((param_1 & 0xff) < uVar2) {
      LOCK();
      if (uVar2 == *puVar1) {
        *puVar1 = param_1 & 0xff;
      }
      UNLOCK();
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00502350 */
byte F_00502350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x502350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  bVar3 = (byte)uVar4;
  if (bVar3 == 0) {
    if ((byte)param_1 == 0xff) {
      *(undefined2 *)((int)this + 0x164) = 0x100;
      return 0xff;
    }
    iVar2 = *(int *)((int)this + 0xa8);
    bVar3 = (byte)param_1;
    if (*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1e + iVar2))) <= (byte)param_1) {
      bVar3 = *((char *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1e + iVar2))) - 1;
    }
    puVar1 = (uint *)((int)this + 0x15c);
    uVar4 = *(uint *)((int)this + 0x15c);
    while (bVar3 < uVar4) {
      LOCK();
      if (uVar4 == *puVar1) {
        *puVar1 = (uint)bVar3;
      }
      UNLOCK();
      uVar4 = *puVar1;
    }
    bVar3 = (byte)uVar4;
    *(undefined2 *)((int)this + 0x164) = 1;
  }
  return bVar3;
}

/* ref: FUN_00502570 */
uint F_00502570(unsigned int gen_a0)
{
  GEN_ENTER(0x502570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  
  sVar1 = *(short *)(in_ecx + 4);
  if ((sVar1 != 1) && (sVar1 != 2)) {
    return (sVar1 != 4) - 1 & 7;
  }
  return 6;
}

/* ref: FUN_005025a0 */
unsigned int F_005025a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5025a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x100) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xfc);
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint *)((int)this + 0xe8);
      *(uint *)((int)this + 0xe8) = (uVar2 - (piVar1[2] & 0xfffffff0U) ^ uVar2) & 0x7ffffff ^ uVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *(undefined4 *)((int)this + 0xfc) = 0;
      }
    }
    *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)this + 0x100);
    *(undefined4 *)((int)this + 0x100) = 0;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf27 */
uint F_00502610(unsigned int gen_a0)
{
  GEN_ENTER(0x502610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pTVar2;
  
  pTVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pTVar2;
  *(uint *)pTVar2 = *(uint *)pTVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pTVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pTVar2;
    *(uint *)pTVar2 = *(uint *)pTVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_00502630 */
byte F_00502630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x502630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a6;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_4 < 0x400001) && (*(int *)((int)this + 0x14) == 0)) &&
     (*(int *)((int)this + 0x18) == 0)) {
    uVar3 = F_004f9290(param_2,param_4,"Client.System.Resource.Handle.TextureResourceHandle.Tex1")
    ;
    if (param_4 != 0) {
      F_004f77b0(param_1,uVar3,param_4,0);
      ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this);
      param_1 = (undefined *)0x0;
      if ((ushort)param_5 != 0) {
        uVar4 = (uint)(ushort)param_5;
        param_5 = param_6;
        param_6 = (ushort *)uVar4;
        do {
          uVar1 = *param_5;
          iVar2 = *(int *)(uVar3 + 0xc);
          F_004f81e0(param_2,6,uVar3,(uint)uVar1,(int)param_1 + param_3,iVar2 + 0xfU & 0xfffffff0)
          ;
          param_1 = (undefined *)((int)param_1 + iVar2);
          param_5 = param_5 + 1;
          uVar3 = uVar3 + uVar1;
          param_6 = (ushort *)((int)param_6 - 1);
        } while (param_6 != (ushort *)0x0);
        return 1;
      }
    }
  }
  else {
    param_4 = 0;
    if ((ushort)param_5 != 0) {
      uVar3 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = (ushort *)uVar3;
      do {
        uVar4 = (uint)*param_5;
        uVar3 = F_004f9290(param_2,uVar4,
                             "Client.System.Resource.Handle.TextureResourceHandle.Tex2");
        F_004f77b0(param_1,uVar3,uVar4,0);
        ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
        iVar2 = *(int *)(uVar3 + 0xc);
        F_004f81e0(param_2,6,uVar3,uVar4,param_4 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_4 = param_4 + iVar2;
        param_5 = param_5 + 1;
        param_6 = (ushort *)((int)param_6 - 1);
      } while (param_6 != (ushort *)0x0);
    }
  }
  return 1;
}

/* ref: FUN_00502780 */
uint F_00502780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  F_00b4cf00(((undefined1 *)(gen_frame + 0xc)),(uint *)((int)this + 0x98));
  if ((*(byte *)((int)this + 0xec) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    uVar2 = uVar2 & 0xff;
  }
  uVar1 = F_00b4d010(((undefined1 *)(gen_frame + 0xc)),uVar2);
  uVar6 = (uint)uVar1;
  uVar1 = F_00b4d000(((undefined1 *)(gen_frame + 0xc)));
  uVar4 = *(uint *)((int)this + 0x98) & 0x3c00000;
  uVar2 = (uint)uVar1;
  if (uVar4 == 0x800000) {
    iVar5 = 0;
    if (uVar6 < uVar2) {
      iVar3 = uVar2 - uVar6;
      do {
        uVar2 = F_004d6e60(*(undefined * PTR32 *)((int)this + 0x100),iVar5);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (uVar4 == 0x1000000) {
    iVar5 = 0;
    if (uVar6 < uVar2) {
      iVar3 = uVar2 - uVar6;
      do {
        uVar2 = F_004d9ed0(*(undefined * PTR32 *)((int)this + 0x100),iVar5);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      F_00b4cf40(((undefined1 *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  else if ((uVar4 == 0x2000000) && (iVar5 = 0, uVar6 < uVar2)) {
    (*(int *)(gen_frame + 0x18)) = uVar2 - uVar6;
    do {
      uVar2 = 0;
      do {
        uVar4 = F_004d5c30(*(undefined * PTR32 *)((int)this + 0x100),iVar5,uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 6);
      iVar5 = iVar5 + 1;
      iVar3 = (*(int *)(gen_frame + 0x18)) + -1;
      (*(int *)(gen_frame + 0x18)) = iVar3;
    } while (iVar3 != 0);
    F_00b4cf40(((undefined1 *)(gen_frame + 0xc)));
    return uVar4;
  }
  F_00b4cf40(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf33 */
uint F_005028a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5028a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pTVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pTVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pTVar1;
    *(int *)pTVar1 = *(int *)pTVar1;
    UNLOCK();
    if (iVar2 != 3) {
      if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
        if (uVar3 == 2) {
          F_00502780(this,param_1,*(undefined4 *)(this + 0x100));
        }
      }
      F_005025a0(this);
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf35 */
uint F_00502900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pTVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 1) {
    return param_2;
  }
  pTVar1 = this + 0x88;
  LOCK();
  iVar2 = *(int *)pTVar1;
  *(int *)pTVar1 = *(int *)pTVar1;
  UNLOCK();
  if (iVar2 != 3) {
    if (((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) &&
       (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this), uVar3 == 2)) {
      if (*(int *)(this + 0x100) == 0) {
        return 1;
      }
      F_00502780(this,param_1,*(int *)(this + 0x100));
    }
    F_005025a0(this);
    return 1;
  }
  return 1;
}

/* ref: FUN_00502970 */
unsigned int F_00502970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x502970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0xec) & 1) != 0) {
    uVar1 = *(uint *)((int)this + 0xf0);
    while ((byte)param_1 < uVar1) {
      LOCK();
      if (uVar1 == *(uint *)((int)this + 0xf0)) {
        *(uint *)((int)this + 0xf0) = (uint)(byte)param_1;
      }
      UNLOCK();
      uVar1 = *(uint *)((int)this + 0xf0);
    }
  }
  return 0;
}

/* ref: FUN_005029b0 */
unsigned int F_005029b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5029b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0xec) & 1) != 0) {
    if ((byte)param_1 == 0xff) {
      *(undefined2 *)((int)this + 0xf8) = 0x100;
      return 0;
    }
    uVar1 = *(uint *)((int)this + 0xf0);
    while ((byte)param_1 < uVar1) {
      LOCK();
      if (uVar1 == *(uint *)((int)this + 0xf0)) {
        *(uint *)((int)this + 0xf0) = (uint)(byte)param_1;
      }
      UNLOCK();
      uVar1 = *(uint *)((int)this + 0xf0);
    }
    *(undefined2 *)((int)this + 0xf8) = 1;
  }
  return 0;
}

/* ref: FUN_00502a10 */
uint F_00502a10(unsigned int gen_a0)
{
  GEN_ENTER(0x502a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  
  sVar1 = *(short *)(in_ecx + 4);
  if ((sVar1 == 1) || (sVar1 == 2)) {
    return 6;
  }
  if (sVar1 == 4) {
    return 7;
  }
  if (sVar1 == 0) {
    return 5;
  }
  return (sVar1 != 6) - 1 & 0xc;
}

/* ref: FUN_00502a50 */
byte F_00502a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  ushort * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  
  bVar3 = 0;
  bVar4 = 0;
  if (*(char *)((int)this + 0xbb) == '\0') {
    return 0;
  }
  do {
    puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xac) + (uint)bVar3 * 4)));
    pbVar5 = ((byte *)GEN_TOP(((uint)*puVar1 + *(int *)((int)this + 0xb0))));
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00502aa8: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00502aad;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00502aa8;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00502aad: ;
    if (iVar6 == 0) {
      uVar8 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *(char *)(uVar8 + param_1) = (char)puVar1[1];
    }
    bVar3 = bVar3 + 1;
    if (*(byte *)((int)this + 0xbb) <= bVar3) {
      return bVar4;
    }
  } while( true );
}

/* ref: FUN_00502af0 */
byte F_00502af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  ushort * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  
  bVar3 = 0;
  bVar4 = 0;
  if (*(char *)((int)this + 0xbc) == '\0') {
    return 0;
  }
  do {
    puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xac) + (uint)(byte)(*(char *)((int)this + 0xbb) + bVar3) * 4)));
    pbVar5 = ((byte *)GEN_TOP(((uint)*puVar1 + *(int *)((int)this + 0xb0))));
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00502b50: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00502b55;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00502b50;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00502b55: ;
    if (iVar6 == 0) {
      uVar8 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *(char *)(uVar8 + param_1) = (char)puVar1[1];
    }
    bVar3 = bVar3 + 1;
    if (*(byte *)((int)this + 0xbc) <= bVar3) {
      return bVar4;
    }
  } while( true );
}

/* ref: FUN_00502b90 */
uint F_00502b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x502b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  bVar2 = *(byte *)((int)this + 0xba);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (bVar2 != 0) {
    local_8 = (uint)bVar2;
    iVar4 = 0;
    do {
      uVar3 = *((uint *)GEN_TOP((iVar4 + *(int *)((int)this + 0xa8))));
      if ((*(byte *)(uVar3 + 0xec) & 1) != 0) {
        puVar1 = (uint *)(uVar3 + 0xf0);
        uVar3 = *puVar1;
        while ((byte)param_1 < uVar3) {
          LOCK();
          if (uVar3 == *puVar1) {
            *puVar1 = (uint)(byte)param_1;
          }
          UNLOCK();
          uVar3 = *puVar1;
        }
      }
      iVar4 = iVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar3;
}

/* ref: FUN_00502c10 */
unsigned int F_00502c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x502c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  if (*(byte *)((int)this + 0xba) != 0) {
    local_8 = (uint)*(byte *)((int)this + 0xba);
    iVar4 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0xa8))));
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xec) & 1) != 0)) {
        if ((byte)param_1 == 0xff) {
          *(undefined2 *)(iVar2 + 0xf8) = 0x100;
        }
        else {
          puVar1 = (uint *)(iVar2 + 0xf0);
          uVar3 = *puVar1;
          while ((byte)param_1 < uVar3) {
            LOCK();
            if (uVar3 == *puVar1) {
              *puVar1 = (uint)(byte)param_1;
            }
            UNLOCK();
            uVar3 = *puVar1;
          }
          *(undefined2 *)(iVar2 + 0xf8) = 1;
        }
      }
      iVar4 = iVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf27 */
uint F_00502cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x502cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf28 */
uint F_00502cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x502cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf29 */
uint F_00502cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x502cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf33 */
uint F_00502d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf35 */
uint F_00502d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf27 */
uint F_00502d50(unsigned int gen_a0)
{
  GEN_ENTER(0x502d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf28 */
uint F_00502d70(unsigned int gen_a0)
{
  GEN_ENTER(0x502d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf29 */
uint F_00502d90(unsigned int gen_a0)
{
  GEN_ENTER(0x502d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf33 */
uint F_00502db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf35 */
uint F_00502dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandle::vf33 */
uint F_00502df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pGVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pGVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pGVar1;
    *(int *)pGVar1 = *(int *)pGVar1;
    UNLOCK();
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
      if ((*piVar3 == 0x677a64) && (piVar3[1] == 0x2000400)) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
        F_00b4e590(this + 0xa0,uVar4,this + 0x100);
        F_00b4d8d0(this + 0xa0);
        piVar3 = *(int * PTR32 *)(this + 0x98);
        if (piVar3 != (int *)0x0) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
          ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
          *(undefined4 *)(this + 0x98) = 0;
        }
        return 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 2;
    }
  }
  return uVar4;
}

/* ref: FUN_00502ed0 */
unsigned int F_00502ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x502ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00502ef0 */
uint F_00502ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x502ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)this = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 4));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf28 */
uint F_00502f30(unsigned int gen_a0)
{
  GEN_ENTER(0x502f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pEVar2;
  
  pEVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pEVar2;
  *(uint *)pEVar2 = *(uint *)pEVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pEVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pEVar2;
    *(uint *)pEVar2 = *(uint *)pEVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf33 */
uint F_00502f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x502f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pEVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pEVar1 = this + 0x88;
  LOCK();
  iVar2 = *(int *)pEVar1;
  *(int *)pEVar1 = *(int *)pEVar1;
  UNLOCK();
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if ((*piVar3 == 0x42564e45) && (piVar3[3] == 0x53564e45)) {
    if (piVar3[5] != 6) {
      return 0xfffffff6;
    }
    this_00 = (undefined *)F_004bd0d0(piVar3 + 5);
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_004a47f0(this_00);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf28 */
uint F_00503030(unsigned int gen_a0)
{
  GEN_ENTER(0x503030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf33 */
uint F_00503050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pSVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pSVar1 = this + 0x88;
  LOCK();
  iVar2 = *(int *)pSVar1;
  *(int *)pSVar1 = *(int *)pSVar1;
  UNLOCK();
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if ((*piVar3 == 0x42535345) && (piVar3[3] == 0x53564e45)) {
    if (piVar3[5] != 4) {
      return 0xfffffff6;
    }
    this_00 = (undefined *)F_004bd010(piVar3 + 5);
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_004a4360(this_00);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf28 */
uint F_00503130(unsigned int gen_a0)
{
  GEN_ENTER(0x503130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf33 */
uint F_00503150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pAVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pAVar1 = this + 0x88;
  LOCK();
  iVar2 = *(int *)pAVar1;
  *(int *)pAVar1 = *(int *)pAVar1;
  UNLOCK();
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  if (*(int *)REFG(undefined * PTR32, 0x1301318) == *piVar3) {
    if ((short)piVar3[1] != 1) {
      return 0xfffffff6;
    }
    if (*(char *)((int)piVar3 + 6) != '\0') {
      return 0xfffffff6;
    }
    this_00 = (undefined *)F_004b0b00(piVar3);
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_004a4960(this_00);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf28 */
uint F_00503230(unsigned int gen_a0)
{
  GEN_ENTER(0x503230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pOVar2;
  
  pOVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pOVar2;
  *(uint *)pOVar2 = *(uint *)pOVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pOVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pOVar2;
    *(uint *)pOVar2 = *(uint *)pOVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf33 */
uint F_00503250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pOVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pOVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pOVar1;
    *(int *)pOVar1 = *(int *)pOVar1;
    UNLOCK();
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
      if (((*piVar3 == 0x4253424f) && (piVar3[3] == 0x53564e45)) && (piVar3[5] == 4)) {
        uVar4 = F_004bc240(piVar3 + 5);
        piVar3 = *(int * PTR32 *)(this + 0x98);
        *(uint *)(this + 0xa0) = uVar4;
        if (uVar4 != 0) {
          if (piVar3 != (int *)0x0) {
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
            ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
            *(undefined4 *)(this + 0x98) = 0;
          }
          return 1;
        }
      }
      else {
        piVar3 = *(int * PTR32 *)(this + 0x98);
      }
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf28 */
uint F_00503320(unsigned int gen_a0)
{
  GEN_ENTER(0x503320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf33 */
uint F_00503340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pSVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pSVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1;
    UNLOCK();
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
      if ((*piVar3 == 0x31425653) && (piVar3[3] == 0x31435653)) {
        *(int * PTR32 *)(this + 0xa0) = piVar3 + 5;
        return (-(uint)(piVar3[5] != 0) & 0xfffffff5) + 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf28 */
uint F_005033d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5033d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pCVar2;
  
  pCVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pCVar2;
  *(uint *)pCVar2 = *(uint *)pCVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pCVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pCVar2;
    *(uint *)pCVar2 = *(uint *)pCVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf33 */
uint F_005033f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5033f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pCVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pCVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1;
    UNLOCK();
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
      if ((*piVar3 == 0x3142434c) && (piVar3[3] == 0x3143434c)) {
        *(int * PTR32 *)(this + 0xa0) = piVar3 + 5;
        return (-(uint)(piVar3[5] != 0) & 0xfffffff5) + 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: FUN_00503480 */
uint F_00503480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  uVar1 = *puVar2;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]));
  uVar3 = F_00519dd0(uVar3 + 4,uVar1,&(*(undefined4 *)&gen_args[1]));
  return uVar3;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandle::vf28 */
uint F_005034b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5034b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_005034d0 */
uint F_005034d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5034d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  uVar1 = *puVar2;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*(short *)(uVar3 + 4 + uVar4 * 8) == (short)param_1) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0xffff;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandle::vf28 */
uint F_00503510(unsigned int gen_a0)
{
  GEN_ENTER(0x503510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pEVar2;
  
  pEVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pEVar2;
  *(uint *)pEVar2 = *(uint *)pEVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pEVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pEVar2;
    *(uint *)pEVar2 = *(uint *)pEVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandle::vf28 */
uint F_00503530(unsigned int gen_a0)
{
  GEN_ENTER(0x503530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pCVar2;
  
  pCVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pCVar2;
  *(uint *)pCVar2 = *(uint *)pCVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pCVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pCVar2;
    *(uint *)pCVar2 = *(uint *)pCVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandle::vf28 */
uint F_00503550(unsigned int gen_a0)
{
  GEN_ENTER(0x503550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pIVar2;
  
  pIVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pIVar2;
  *(uint *)pIVar2 = *(uint *)pIVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pIVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pIVar2;
    *(uint *)pIVar2 = *(uint *)pIVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_00503570 */
uint F_00503570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503570u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  (*(undefined4 *)&gen_args[1]) = CONCAT22((undefined2)(*(undefined4 *)&gen_args[1]),(undefined2)(*(undefined4 *)&gen_args[2]));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  uVar1 = *puVar2;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]));
  uVar3 = F_00519dd0(uVar3 + 4,uVar1,&(*(undefined4 *)&gen_args[1]));
  if (uVar3 == 0xffffffff) {
    return 0xffff;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  return CONCAT22((short)((uint)*piVar5 >> 0x10),
                  *((undefined2 *)GEN_TOP((uVar4 + 4 + (uVar3 + *piVar5 * 2) * 2))));
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf28 */
uint F_005035f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5035f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_00503610 */
uint F_00503610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xd4) + 0x24 + (uint)(ushort)param_2 * 0x28))) & 1;
}

/* ref: FUN_00503630 */
ushort F_00503630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar2 = 0;
  if (*(ushort *)((int)this + 0xc0) != 0) {
    pbVar3 = *(byte * PTR32 *)((int)this + 0xd4);
    pbVar5 = param_1;
    pbVar6 = pbVar3;
LAB_00503655: ;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00503675;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00503655;
        }
        iVar4 = 0;
      }
      else {
LAB_00503675: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar4 == 0) goto LAB_00503689;
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar6 + 0x28;
      pbVar5 = param_1;
      pbVar6 = pbVar3;
    } while (uVar2 < *(ushort *)((int)this + 0xc0));
  }
  uVar2 = 0xffffffff;
LAB_00503689: ;
  return (ushort)uVar2;
}

/* ref: FUN_00503690 */
uint F_00503690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xd4) + (short)param_2 * 0x28;
}

/* ref: FUN_005036b0 */
ushort F_005036b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5036b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00503630(this,param_1);
  if (-1 < (short)uVar1) {
    return *((ushort *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x22 + (short)uVar1 * 0x28)));
  }
  return 0xffff;
}

/* ref: FUN_005036f0 */
ushort F_005036f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5036f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  uVar5 = 0;
  if (*(ushort *)((int)this + 0xc0) != 0) {
    pbVar2 = *(byte * PTR32 *)((int)this + 0xd4);
    pbVar7 = pbVar2;
    pbVar4 = param_1;
    pbVar6 = pbVar2;
LAB_00503715: ;
    do {
      bVar1 = *pbVar7;
      bVar8 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00503735;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
          if (bVar1 != 0) goto LAB_00503715;
        }
        iVar3 = 0;
      }
      else {
LAB_00503735: ;
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar3 == 0) {
        if ((pbVar2[(uVar5 & 0xffff) * 0x28 + 0x24] & 1) == 0) {
          return 0xffff;
        }
        return *(ushort *)(pbVar2 + uVar5 * 0x28 + 0x22);
      }
      uVar5 = uVar5 + 1;
      pbVar7 = pbVar6 + 0x28;
      pbVar4 = param_1;
      pbVar6 = pbVar7;
    } while (uVar5 < *(ushort *)((int)this + 0xc0));
  }
  return 0xffff;
}

/* ref: FUN_00503790 */
uint F_00503790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00503630(this,param_1);
  if (-1 < (short)uVar1) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0xe8) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf33 */
uint F_005037c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5037c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pRVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pRVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pRVar1;
    *(int *)pRVar1 = *(int *)pRVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      uVar3 = F_00b50d30(this + 0xa0,uVar3);
      if ((uVar3 != 0) && (piVar4 = *(int * PTR32 *)(this + 0x98), piVar4 != (int *)0x0)) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf28 */
uint F_00503830(unsigned int gen_a0)
{
  GEN_ENTER(0x503830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pRVar2;
  
  pRVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pRVar2;
  *(uint *)pRVar2 = *(uint *)pRVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pRVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pRVar2;
    *(uint *)pRVar2 = *(uint *)pRVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_00503850 */
unsigned int F_00503850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109980c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_00503870 */
uint F_00503870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined2 *)((int)this + 6))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050388a_caseD_3;
    default: ;
      goto switchD_0050388a_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050388a_caseD_3: ;
      return 1;
    }
  }
switchD_0050388a_default: ;
  return 0;
}

/* ref: FUN_005038d0 */
unsigned int F_005038d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5038d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109981c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_005038f0 */
uint F_005038f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5038f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 7 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined2 *)((int)this + 6))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050390b_caseD_3;
    default: ;
      goto switchD_0050390b_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050390b_caseD_3: ;
      return 1;
    }
  }
switchD_0050390b_default: ;
  return 0;
}

/* ref: FUN_00503950 */
unsigned int F_00503950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109982c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_00503970 */
uint F_00503970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 6 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined2 *)((int)this + 6))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050398b_caseD_3;
    default: ;
      goto switchD_0050398b_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050398b_caseD_3: ;
      return 1;
    }
  }
switchD_0050398b_default: ;
  return 0;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf33 */
uint F_005039d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5039d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pSVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      F_00b4d4c0(this + 0xa0,uVar3);
      if ((*(uint *)(this + 0xa8) >> 1 & 1) != 0) {
        F_00b4fa10(this + 0xc0,*(int *)(this + 0xb0) + uVar3,*(undefined4 *)(this + 0xa4));
      }
      if ((*(uint *)(this + 0xa8) >> 4 & 1) != 0) {
        F_00b4e490(this + 0xd0,*(int *)(this + 0xbc) + uVar3);
      }
      if ((*(uint *)(this + 0xa8) >> 3 & 1) != 0) {
        F_00b4fb00(this + 0xf4,*(int *)(this + 0xb8) + uVar3);
      }
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != (int *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_00503ab0 */
byte F_00503ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x503ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0xa8) >> 1) & 1;
}

/* ref: FUN_00503ac0 */
byte F_00503ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x503ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0xa8) >> 4) & 1;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandle::vf33 */
uint F_00503ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pMVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pMVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pMVar1;
    *(int *)pMVar1 = *(int *)pMVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      F_00b4fbc0(this + 0xa0,uVar3);
      F_00b4e8b0(this + 0xa0);
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != (int *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf27 */
uint F_00503b50(unsigned int gen_a0)
{
  GEN_ENTER(0x503b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf28 */
uint F_00503b70(unsigned int gen_a0)
{
  GEN_ENTER(0x503b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  undefined * pAVar4;
  
  pAVar1 = this + 0x8c;
  LOCK();
  pAVar4 = *(undefined * PTR32 *)pAVar1;
  *(int *)pAVar1 = *(int *)pAVar1;
  UNLOCK();
  if (pAVar4 == (undefined *)0x7) {
    pAVar4 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pAVar4;
    *(int *)pAVar4 = *(int *)pAVar4;
    UNLOCK();
    if ((iVar2 != 3) && (*(undefined * PTR32 *)(this + 0xa0) != (undefined *)0x0)) {
      F_009bbeb0(*(undefined * PTR32 *)(this + 0xa0));
      F_009bbef0(*(undefined * PTR32 *)(this + 0xa0));
      uVar3 = F_00990bc0(*(undefined * PTR32 *)(this + 0xa0));
      return uVar3;
    }
  }
  return (uint)pAVar4;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf29 */
uint F_00503bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x503bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf33 */
uint F_00503be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  
  uVar2 = param_2;
  if (param_2 == 1) {
    pAVar5 = this + 0x88;
    LOCK();
    iVar1 = *(int *)pAVar5;
    *(int *)pAVar5 = *(int *)pAVar5;
    UNLOCK();
    if (iVar1 != 3) {
      if (*(int *)(this + 0xa0) != 0) {
        uVar4 = *(undefined4 *)(this + 0x1c);
        pAVar5 = this;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))(*(int * PTR32 *)(this + 0x98));
        F_009cb7f0(*(undefined * PTR32 *)(this + 0xa0),uVar2,uVar4,pAVar5);
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != (int *)0x0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      *(undefined4 *)(this + 0x9c) = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf35 */
uint F_00503c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf27 */
uint F_00503c90(unsigned int gen_a0)
{
  GEN_ENTER(0x503c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf28 */
uint F_00503cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x503cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf29 */
uint F_00503cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x503cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pAVar2;
  *(uint *)pAVar2 = *(uint *)pAVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pAVar2;
    *(uint *)pAVar2 = *(uint *)pAVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf33 */
uint F_00503cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pAVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pAVar1;
    *(int *)pAVar1 = *(int *)pAVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))(*(int * PTR32 *)(this + 0x98));
      uVar3 = F_00b4ec10(uVar3);
      *(uint *)(this + 0xa0) = uVar3;
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xa4) = 0;
      }
      else {
        *(uint *)(this + 0xa4) = *(uint *)(uVar3 + 8) & 0xfffffff0;
      }
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != (int *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      *(undefined4 *)(this + 0x9c) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf35 */
uint F_00503d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf25 */
uint F_00503db0(unsigned int gen_a0)
{
  GEN_ENTER(0x503db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)(this + 0x98) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x98));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf27 */
uint F_00503e10(unsigned int gen_a0)
{
  GEN_ENTER(0x503e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf28 */
uint F_00503e30(unsigned int gen_a0)
{
  GEN_ENTER(0x503e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf29 */
uint F_00503e50(unsigned int gen_a0)
{
  GEN_ENTER(0x503e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  LOCK();
  uVar1 = *(uint *)pSVar2;
  *(uint *)pSVar2 = *(uint *)pSVar2;
  UNLOCK();
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    LOCK();
    uVar1 = *(uint *)pSVar2;
    *(uint *)pSVar2 = *(uint *)pSVar2;
    UNLOCK();
  }
  return uVar1;
}

/* ref: FUN_00503e70 */
uint F_00503e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(short *)((int)this + 4) == 3) {
    uVar3 = 0;
    uVar1 = F_004042d0(0);
    uVar1 = F_00406c00(param_1,0,uVar1,uVar3);
    if (uVar1 == 0) {
      uVar2 = F_004042b0();
      uVar1 = F_00406c00(param_1,0,uVar2,uVar1);
    }
    return uVar1;
  }
  uVar3 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar3);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf35 */
uint F_00503ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: FUN_00503ef0 */
uint F_00503ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x503ef0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((int)*param_2 << 8 | (int)param_2[1]) << 8 | (int)param_2[2];
  if (uVar1 < 0x67616e) {
    if (uVar1 == 0x67616d) {
      *param_1 = 0xb;
      return (uint)param_1;
    }
    if (uVar1 < 0x636862) {
      if (uVar1 == 0x636861) {
        *param_1 = 4;
        return (uint)param_1;
      }
      if (uVar1 == 0x5f7371) {
        *param_1 = 0x12;
        return (uint)param_1;
      }
      if (uVar1 == 0x62672f) {
        uVar1 = F_00500e90(param_2);
        if (uVar1 != 0xffffffff) {
          *param_1 = uVar1 << 0x10 | 2;
          return (uint)param_1;
        }
      }
      else if (uVar1 == 0x626763) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    else {
      if (uVar1 == 0x636f6d) {
        *param_1 = 0;
        return (uint)param_1;
      }
      if (uVar1 == 0x637574) {
        uVar1 = F_00500ed0(param_2);
        if (uVar1 != 0xffffffff) {
          *param_1 = uVar1 << 0x10 | 3;
          return (uint)param_1;
        }
      }
      else if (uVar1 == 0x657864) {
        *param_1 = 10;
        return (uint)param_1;
      }
    }
  }
  else if (uVar1 < 0x756930) {
    if (uVar1 == 0x75692f) {
      *param_1 = 6;
      return (uint)param_1;
    }
    if (uVar1 == 0x6d7573) {
      *param_1 = 0xc;
      return (uint)param_1;
    }
    if (uVar1 == 0x736861) {
      *param_1 = 5;
      return (uint)param_1;
    }
    if (uVar1 == 0x736f75) {
      *param_1 = 7;
      return (uint)param_1;
    }
  }
  else {
    if (uVar1 == 0x75695f) {
      *param_1 = 9;
      return (uint)param_1;
    }
    if (uVar1 == 0x766678) {
      *param_1 = 8;
      return (uint)param_1;
    }
  }
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00504070 */
byte F_00504070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x504070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(param_1 + 0x2c) < 5) {
    return 0;
  }
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0xc84);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (uVar1 < 7);
  return 0x1f < (uint)(*(int *)((int)this + 0xdbc) + *(int *)((int)this + 0xda4) +
                       *(int *)((int)this + 0xd8c) + *(int *)((int)this + 0xd74) +
                       *(int *)((int)this + 0xd5c) + *(int *)((int)this + 0xd44) +
                      *(int *)((int)this + 0xd2c));
}

/* ref: Client::System::Resource::ResourceEventListener::vf3 */
uint F_005040e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5040e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(param_1 + 0x8c);
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2;
  UNLOCK();
  return uVar1;
}

/* ref: Client::System::Resource::ResourceEventListener::vf4 */
uint F_00504100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x504100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(param_1 + 0x8c);
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00504120 */
uint F_00504120(unsigned int gen_a0)
{
  GEN_ENTER(0x504120u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = param_1[3];
  uVar2 = param_1[2];
  lVar4 = *(longlong *)(param_1 + 2);
  lVar3 = *(longlong *)(param_1 + 4);
  if (*param_1 == 0xb) {
    uVar6 = (ulonglong)(uint)param_1[0x32];
  }
  else {
    uVar6 = F_004f7900((undefined *)param_1[9]);
  }
  lVar3 = uVar6 - lVar3;
  if (((int)((ulonglong)lVar3 >> 0x20) == 0 || lVar3 < 0) && (lVar3 < 0)) {
    return 0;
  }
  uVar5 = (uint)lVar3;
  if ((lVar4 <= lVar3) && (uVar2 != 0 || iVar1 != 0)) {
    uVar5 = uVar2;
  }
  return uVar5;
}

/* ref: FUN_00504190 */
uint F_00504190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x504190u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_1 != 0xb) {
    (*(int *)(gen_frame + 0x8)) = param_4;
    (*(uint *)(gen_frame + 0x4)) = param_3;
    uVar5 = F_004f7940((undefined *)param_1[9],param_2,&(*(uint *)(gen_frame + 0x4)),param_5,param_6,param_7);
    ((code *)*(gen_code32 *)(*(int *)param_1[0xd] + 0xac))((int *)param_1[0xd]);
    return uVar5;
  }
  piVar2 = (int *)param_1[0xd];
  if ((1 < (uint)param_1[0x13]) && (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2), uVar5 == 1)) {
    if ((param_5 != 0 || param_6 != 0) || ((char)param_7 != '\0')) {
      param_1[0x38] = param_5;
      param_1[0x39] = param_6;
    }
    iVar3 = param_1[0x38];
    uVar5 = param_3;
    uVar6 = ((code *)*(gen_code32 *)(*(int *)piVar2[0xe] + 4))((int *)piVar2[0xe]);
    F_00c46aa0(param_2,uVar6 + iVar3,uVar5);
    puVar1 = (uint *)(param_1 + 0x38);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + param_3;
    param_1[0x39] = param_1[0x39] + param_4 + (uint)CARRY4(uVar5,param_3);
    return 1;
  }
  iVar3 = param_1[0x36];
  iVar4 = param_1[0x11];
  if (((param_5 != 0 || param_6 != 0) || ((char)param_7 != '\0')) &&
     (uVar5 = F_00501d40(param_1,param_5,param_6,0), uVar5 != 1)) {
    return uVar5;
  }
  uVar5 = F_004f77b0(*(undefined * PTR32 *)(iVar4 + 0xa70 + iVar3 * 4),param_2,param_3,param_4);
  ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2);
  return uVar5;
}

/* ref: FUN_005042c0 */
uint F_005042c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5042c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((((char)uVar3 == '\0') &&
      (uVar3 = *(uint *)((int)this + 0xa8), 1 < *((byte *)GEN_TOP((*(int *)(uVar3 + 4) + 0x1e + uVar3))))) &&
     (*(char *)((int)this + 0x60) != -1)) {
    cVar1 = *(char *)(REFG(int, 0x1371278) + 0x10);
    uVar3 = CONCAT31((int3)((uint)REFG(int, 0x1371278) >> 8),cVar1);
    if (cVar1 == -1) {
      if ((*(byte *)((int)this + 0x6c) & 1) != 0) {
        iVar2 = *(int *)this;
        uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x10))(this,2);
        uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x24))(this,uVar3 & 0xff);
        return uVar3;
      }
    }
    else if ((cVar1 == '\0') && ((*(byte *)((int)this + 0x6c) & 1) == 0)) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00504330 */
byte F_00504330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x504330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      (*(byte *)(gen_frame + 0x13)) = 0;
      F_00c48350(((char *)(gen_frame + 0x14)),0,0x44);
      (*(byte *)(gen_frame + 0x12)) = 0;
      do {
        uVar4 = (uint)(*(byte *)(gen_frame + 0x12));
        iVar1 = iVar6 + uVar4;
        cVar5 = *(char *)(param_1 + iVar1 * 8);
        cVar2 = *(char *)(param_1 + 1 + iVar1 * 8);
        iVar1 = param_1 + iVar1 * 8;
        ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4)] = cVar5;
        ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 1)] = cVar2;
        if (cVar5 == -1) break;
        uVar3 = *(undefined1 *)(iVar1 + 3);
        cVar5 = *(char *)(iVar1 + 4);
        switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar1 + 2))) {
        case 0: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '!';
          break;
        case 1: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '\"';
          break;
        case 2: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '#';
          break;
        case 3: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '$';
          break;
        case 5: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = 't';
          break;
        case 6: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = 'R';
          break;
        case 7: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = 'T';
          break;
        case 8: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = 'D';
          break;
        case 9: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '\x12';
          break;
        case 10: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '\x14';
          break;
        case 0xd: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '2';
          break;
        case 0xe: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = '4';
          break;
        case 0xf: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 2)] = 'a';
        }
        switch((unsigned int)(uintptr_t)(uVar3)) {
        case 0: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\0';
          break;
        case 1: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\x01';
          break;
        case 2: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\a';
          break;
        case 3: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\x02';
          break;
        case 4: ;
          cVar5 = cVar5 + '\b';
          goto LAB_00504451;
        case 5: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\x0e';
          break;
        case 6: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = '\x0f';
          break;
        case 7: ;
          cVar5 = cVar5 + '\x03';
LAB_00504451: ;
          ((char *)(gen_frame + 0x14))[(int)(uVar4 * 4 + 3)] = cVar5;
        }
        (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
        (*(byte *)(gen_frame + 0x12)) = (*(byte *)(gen_frame + 0x12)) + 1;
      } while ((*(byte *)(gen_frame + 0x12)) < 0x11);
      uVar4 = F_004deb40(REFG(void * PTR32, 0x1370b90),((char *)(gen_frame + 0x14)),(uint)(*(byte *)(gen_frame + 0x13)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0x108) + (*(uint *)(gen_frame + 0xc)) * 4))) = uVar4;
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x108) + (*(uint *)(gen_frame + 0xc)) * 4))) == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 0;
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      iVar6 = iVar6 + 0x11;
    } while ((*(uint *)(gen_frame + 0xc)) < param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00504540 */
uint F_00504540(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x504540u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  ushort uVar1;
  undefined * this;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined1 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  puVar3 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((*(int *)&gen_args[0]) + 0x17e))));
  if (*(char *)((*(int *)&gen_args[0]) + 0x17e) == '\0') {
    bVar2 = F_004ffc50((*(int *)&gen_args[0]),(*(float *)&gen_args[1]),REFG(int, 0x13712a4) + 0xd4);
    puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),bVar2));
    if ((bVar2 < 2) &&
       (puVar3 = (undefined1 *)(bVar2 + 0x17e + (*(int *)&gen_args[0])), *(char *)(bVar2 + 0x17e + (*(int *)&gen_args[0])) == '\0'
       )) {
      *puVar3 = 1;
      uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xa8) + 4))) + 0x12 + *(int *)((*(int *)&gen_args[0]) + 0xa8))));
      puVar3 = (undefined1 *)(uint)uVar1;
      if (uVar1 != 0) {
        iVar5 = 0;
        puVar4 = puVar3;
        do {
          this = *((undefined * PTR32 *)GEN_TOP((iVar5 + *(int *)((*(int *)&gen_args[0]) + 0x124))));
          if (this != (undefined *)0x0) {
            puVar3 = (undefined1 *)F_00502b90(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
          }
          iVar5 = iVar5 + 4;
          puVar4 = puVar4 + -1;
        } while (puVar4 != (undefined1 *)0x0);
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_005045d0 */
uint F_005045d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5045d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  ushort uVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined1 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  puVar3 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((*(int *)&gen_args[0]) + 0x17e))));
  if (*(char *)((*(int *)&gen_args[0]) + 0x17e) == '\0') {
    bVar2 = F_004ffc50((*(int *)&gen_args[0]),(*(float *)&gen_args[1]),(*(uint *)&gen_args[2]));
    puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar2);
    if ((bVar2 < 2) &&
       (puVar3 = (undefined1 *)(bVar2 + 0x17e + (*(int *)&gen_args[0])), *(char *)(bVar2 + 0x17e + (*(int *)&gen_args[0])) == '\0'
       )) {
      *puVar3 = 1;
      uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xa8) + 4))) + 0x12 + *(int *)((*(int *)&gen_args[0]) + 0xa8))));
      puVar3 = (undefined1 *)(uint)uVar1;
      if (uVar1 != 0) {
        iVar5 = 0;
        puVar4 = puVar3;
        do {
          puVar3 = (undefined1 *)F_00502b90(*((undefined * PTR32 *)GEN_TOP((iVar5 + *(int *)((*(int *)&gen_args[0]) + 0x124)))),(*(uint *)&gen_args[2]))
          ;
          iVar5 = iVar5 + 4;
          puVar4 = puVar4 + -1;
        } while (puVar4 != (undefined1 *)0x0);
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00504650 */
uint F_00504650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x504650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined1 * in_EAX = 0;
  undefined1 * puVar2;
  int iVar3;
  
  if (((byte)param_1 < 2) &&
     (in_EAX = ((undefined1 *)GEN_TOP(((param_1 & 0xff) + 0x17e + (int)this))),
     *((char *)GEN_TOP(((param_1 & 0xff) + 0x17e + (int)this))) == '\0')) {
    *in_EAX = 1;
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x12 + *(int *)((int)this + 0xa8))));
    in_EAX = (undefined1 *)(uint)uVar1;
    if (uVar1 != 0) {
      iVar3 = 0;
      puVar2 = in_EAX;
      do {
        in_EAX = *(undefined1 * PTR32 *)((int)this + 0x124);
        if (*(undefined * PTR32 *)(in_EAX + iVar3) != (undefined *)0x0) {
          in_EAX = (undefined1 *)F_00502b90(*(undefined * PTR32 *)(in_EAX + iVar3),param_1);
        }
        iVar3 = iVar3 + 4;
        puVar2 = puVar2 + -1;
      } while (puVar2 != (undefined1 *)0x0);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005046c0 */
unsigned int F_005046c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5046c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x12 + *(int *)((int)this + 0xa8))));
  local_10 = (uint)uVar3;
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((local_8 + *(int *)((int)this + 0x124))));
      bVar2 = *(byte *)(iVar4 + 0xba);
      if (bVar2 != 0) {
        local_c = (uint)bVar2;
        iVar7 = 0;
        do {
          iVar5 = *((int *)GEN_TOP((iVar7 + *(int *)(iVar4 + 0xa8))));
          if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xec) & 1) != 0)) {
            if ((byte)param_1 == 0xff) {
              *(undefined2 *)(iVar5 + 0xf8) = 0x100;
            }
            else {
              puVar1 = (uint *)(iVar5 + 0xf0);
              uVar6 = *puVar1;
              while ((byte)param_1 < uVar6) {
                LOCK();
                if (uVar6 == *puVar1) {
                  *puVar1 = (uint)(byte)param_1;
                }
                UNLOCK();
                uVar6 = *puVar1;
              }
              *(undefined2 *)(iVar5 + 0xf8) = 1;
            }
          }
          iVar7 = iVar7 + 8;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      local_8 = local_8 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return 0;
}

/* ref: FUN_00504790 */
uint F_00504790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x504790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x88);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if (iVar2 == 2) {
    piVar1 = (int *)((int)this + 0x8c);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 < 8) {
      if ((byte)param_1 <
          *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e + *(int *)((int)this + 0xa8))))) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x24 + (uint)(byte)param_1 * 0x3c)));
      }
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf14 */
uint F_005047f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5047f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 MVar1;
  code * pcVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  
  pcVar2 = *(gen_code32 *)(*(int *)this + 4);
  this[0x17e] = (undefined1)0x0;
  this[0x17f] = (undefined1)0x0;
  uVar5 = (*pcVar2)();
  if ((char)uVar5 != '\0') {
    return 0;
  }
  iVar3 = *(int *)(this + 0x160);
  MVar1 = this[0x165];
  uVar5 = *(uint *)(this + 0x15c);
  if (iVar3 != -1) {
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    bVar4 = F_004ffc00(this,(float)(fVar6 / (float10)*(double *)&REFG(undefined, 0x1088118)),REFG(int, 0x13712a4) + 0xcc
                        );
    if (bVar4 < uVar5) {
      uVar5 = (uint)bVar4;
    }
  }
  if (MVar1 == (undefined1)0x0 && this[0x164] == (undefined1)0x0) {
    if (uVar5 != 0xffffffff) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,uVar5,0);
    }
  }
  else if (this[0x164] == (undefined1)0x0) {
    if (uVar5 == 0xffffffff) {
      iVar3 = *(int *)this;
      uVar5 = ((code *)*(gen_code32 *)(iVar3 + 0x10))(this,2);
      ((code *)*(gen_code32 *)(iVar3 + 0x24))(this,uVar5 & 0xff);
    }
    else {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,uVar5,2);
    }
  }
  else {
    ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,uVar5,1);
  }
  *(undefined4 *)(this + 0x15c) = 0xffffffff;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  *(undefined2 *)(this + 0x164) = 0;
  uVar5 = F_00501610((undefined *)this,param_1,param_2);
  return uVar5;
}

/* ref: FUN_00504900 */
unsigned int F_00504900(unsigned int gen_a0)
{
  GEN_ENTER(0x504900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((*(byte *)((int)this + 0xec) & 1) != 0) && (*(char *)((int)this + 0x60) != -1)) {
    cVar1 = *(char *)(REFG(int, 0x1371278) + 0x11);
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),cVar1);
    if (cVar1 == -1) {
      if ((*(byte *)((int)this + 0x6c) & 1) != 0) {
        iVar2 = *(int *)this;
        uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x10))(2);
        ((code *)*(gen_code32 *)(iVar2 + 0x24))(this,uVar3 & 0xff);
        return 0;
      }
    }
    else {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))();
      if ((char)uVar3 != cVar1) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,local_8,1);
      }
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf28 */
unsigned int F_00504970(unsigned int gen_a0)
{
  GEN_ENTER(0x504970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pTVar1;
  int iVar2;
  
  pTVar1 = this + 0x8c;
  LOCK();
  iVar2 = *(int *)pTVar1;
  *(int *)pTVar1 = *(int *)pTVar1;
  UNLOCK();
  if (iVar2 == 7) {
    pTVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pTVar1;
    *(int *)pTVar1 = *(int *)pTVar1;
    UNLOCK();
    if (iVar2 != 3) {
      F_00504900(this);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf29 */
unsigned int F_005049a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5049a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pTVar1;
  int iVar2;
  
  pTVar1 = this + 0x8c;
  LOCK();
  iVar2 = *(int *)pTVar1;
  *(int *)pTVar1 = *(int *)pTVar1;
  UNLOCK();
  if (iVar2 == 7) {
    pTVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pTVar1;
    *(int *)pTVar1 = *(int *)pTVar1;
    UNLOCK();
    if (iVar2 != 3) {
      F_00504900(this);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf14 */
uint F_005049d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5049d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 TVar1;
  int iVar2;
  uint uVar3;
  
  TVar1 = this[0xec];
  if (((byte)TVar1 & 1) == 0) goto LAB_00504a96;
  iVar2 = *(int *)(this + 0xf0);
  if (this[0xf9] == (undefined1)0x0 && this[0xf8] == (undefined1)0x0) {
    if (iVar2 != -1) {
      if (((*(char *)(REFG(int, 0x13712a4) + 0xdc) == '\0') || (((byte)TVar1 & 2) == 0)) ||
         (((byte)TVar1 & 4) != 0)) {
LAB_00504a39: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,iVar2,0);
      }
      else if (((byte)TVar1 & 8) == 0) {
        if (((byte)TVar1 & 0x10) == 0) goto LAB_00504a39;
      }
      else if (iVar2 == 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0,0);
      }
    }
  }
  else if (this[0xf8] == (undefined1)0x0) {
    if (iVar2 == -1) {
      iVar2 = *(int *)this;
      uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x10))(this,2);
      ((code *)*(gen_code32 *)(iVar2 + 0x24))(this,uVar3 & 0xff);
    }
    else {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,iVar2,2);
    }
  }
  else {
    ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,iVar2,1);
  }
  *(undefined2 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
LAB_00504a96: ;
  uVar3 = F_00501610((undefined *)this,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00504ab0 */
byte F_00504ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x504ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    ((int *)(gen_frame + 0x4))[0] = 0xc;
    ((int *)(gen_frame + 0x4))[1] = 0xc;
    iVar1 = ((int *)(gen_frame + 0x4))[(int)(param_2)] * param_1 * 0x10;
    *param_4 = *param_4 + iVar1;
    uVar2 = F_004dcc90(iVar1,4,6);
    *(uint *)((int)this + 4) = uVar2;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00504b10 */
byte F_00504b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x504b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *(uint *)this = param_1;
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x40 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 0x40),0,0);
  *(uint *)((int)this + 4) = uVar1;
  *param_2 = *param_2 + param_1 * 0x40;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_004dcd60(param_1 * 0x10,4,6);
    *(uint *)((int)this + 8) = uVar1;
    *param_3 = *param_3 + param_1 * 0x10;
    if (*(int *)((int)this + 8) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00504b90 */
byte F_00504b90(unsigned int gen_a0)
{
  GEN_ENTER(0x504b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort * puVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint * puVar7;
  
  piVar6 = (int *)((int)this + 0x2f0);
  (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)piVar6;
  (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)((int)this + 0x14c);
  do {
    puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
    uVar5 = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    ((int *)(gen_frame + 0xc))[2] = 0;
    if (1 < *(int *)((int)this + 0xb0)) {
      iVar4 = (*(int *)((int)this + 0xb0) - 2U >> 1) + 1;
      uVar5 = iVar4 * 2;
      puVar1 = (*(ushort * PTR32 *)(gen_frame + 0x20));
      do {
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + puVar1[-0x20];
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + (uint)*puVar1;
        puVar1 = puVar1 + 0x40;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = 0;
    if (uVar5 < *(uint *)((int)this + 0xb0)) {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar5 * 0x20 + (int)(*(ushort * PTR32 *)(gen_frame + 0x1c))) * 2 + 0x10c)));
    }
    iVar4 = (*(int *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x28)) + uVar2;
    *piVar6 = iVar4;
    if (iVar4 != 0) {
      ((int *)(gen_frame + 0xc))[0] = 0xc;
      ((int *)(gen_frame + 0xc))[1] = 0xc;
      iVar4 = ((int *)(gen_frame + 0xc))[(int)((int)(*(ushort * PTR32 *)(gen_frame + 0x1c)))] * iVar4 * 0x10;
      *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar4;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)piVar6;
      uVar5 = F_004dcc90(iVar4,4,6);
      piVar6[1] = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (*(ushort * PTR32 *)(gen_frame + 0x20)) + 1;
    piVar6 = piVar6 + 2;
    (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)puVar3 + 1U);
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)piVar6;
  } while ((int)puVar3 + 1U < 2);
  puVar7 = (uint *)((int)this + 0x308);
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)this + 0x150);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
  do {
    uVar5 = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)0x0;
    ((int *)(gen_frame + 0xc))[2] = 0;
    if (1 < *(int *)((int)this + 0xb0)) {
      iVar4 = (*(int *)((int)this + 0xb0) - 2U >> 1) + 1;
      uVar5 = iVar4 * 2;
      puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
      do {
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + (uint)puVar3[-0x20];
        (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x20)) + (uint)*puVar3);
        puVar3 = puVar3 + 0x40;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = 0;
    if (uVar5 < *(uint *)((int)this + 0xb0)) {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar5 * 0x20 + (*(uint *)(gen_frame + 0x28))) * 2 + 0x110)));
    }
    uVar2 = (int)(*(ushort * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24)) + uVar2;
    puVar7[-2] = uVar2;
    if (uVar2 != 0) {
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 0x40 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 0x40),0,0);
      puVar7[-1] = uVar5;
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + uVar2 * 0x40;
      if (puVar7[-1] == 0) {
        return 0;
      }
      uVar5 = F_004dcd60(uVar2 * 0x10,4,6);
      *puVar7 = uVar5;
      *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + uVar2 * 0x10;
      if (*puVar7 == 0) {
        return 0;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (*(ushort * PTR32 *)(gen_frame + 0x1c)) + 1;
    uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
    puVar7 = puVar7 + 3;
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
    if (0xf < uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00504d60 */
byte F_00504d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x504d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  ushort * puVar6;
  uint uVar7;
  
  puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))()));
  uVar4 = *puVar2;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar7 = 0;
  if (uVar4 != 0) {
    while (*(short *)(uVar3 + 4 + uVar7 * 8) != (short)param_2) {
      uVar7 = uVar7 + 1;
      if (uVar4 <= uVar7) {
        return 0;
      }
    }
    if (((ushort)uVar7 != 0xffff) && (uVar4 = F_00520150(this,param_1), uVar4 != 0)) {
      uVar1 = *(ushort *)(uVar4 + 2);
      if (uVar1 != 0xffff) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
        puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar5) * 8)));
        if (puVar6 != (ushort *)0x0) {
          uVar1 = *puVar6;
          while (uVar1 != 0xffff) {
            if (uVar1 == 0xffff) {
              puVar6 = (ushort *)0x0;
            }
            else {
              uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
              piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
              puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar5) * 8)));
            }
            if (puVar6[3] == (ushort)uVar7) {
              return 1;
            }
            uVar1 = *puVar6;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00504e70 */
byte F_00504e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x504e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int * piVar5;
  ushort * puVar6;
  
  uVar4 = F_00520150(this,param_1);
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = *(ushort *)(uVar4 + 2);
  if (uVar2 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
    puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar2 + *piVar5) * 8)));
  }
  uVar2 = *puVar6;
  if (uVar2 != 0xffff) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
    iVar1 = uVar4 + 4 + ((uint)uVar2 + *piVar5) * 8;
    if (iVar1 != 0) {
      uVar2 = *(ushort *)(iVar1 + 6);
      if (uVar2 == 0xffff) {
        return (short)param_2 == *(short *)&REFG(undefined, 0x0);
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      sVar3 = *(short *)(uVar4 + 4 + (uint)uVar2 * 8);
      return (short)param_2 == sVar3;
    }
  }
  return 0;
}

/* ref: FUN_00504f40 */
uint F_00504f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x504f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  byte * pbVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  bVar1 = F_00504e70(this,param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00520150(this,param_1);
  iVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))();
  puVar4 = ((uint *)GEN_TOP((iVar3 + *(int *)(uVar2 + 4))));
  uVar7 = 0;
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    do {
      pbVar5 = ((byte *)GEN_TOP(((uint)*(ushort *)((int)puVar4 + uVar7 * 2 + 4) + (int)puVar4)));
      pbVar6 = param_3;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00504fc0: ;
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00504fc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00504fc0;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00504fc5: ;
      if (iVar3 == 0) {
        return (int)puVar4 + uVar7 * 0x30 + (uVar2 + 1 & 0xfffffffe) * 2 + 4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return 0;
}

/* ref: FUN_00504f54 */
uint F_00504f54(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x504f54u, gen_a0, gen_a1, gen_a2, gen_a3);
  char in_al = (char)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  int in_ebp = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  bool bVar8;
  
  if (in_al == '\0') {
    return 0;
  }
  uVar2 = F_00520150(in_esi,in_edi);
  uVar3 = ((code *)*(gen_code32 *)(*in_esi + 0x5c))(in_esi);
  puVar4 = ((uint *)GEN_TOP((uVar3 + *(int *)(uVar2 + 4))));
  uVar3 = 0;
  uVar2 = *puVar4;
  *(uint *)(in_ebp + 0xc) = (int)puVar4 + (uVar2 + 1 & 0xfffffffe) * 2 + 4;
  if (uVar2 != 0) {
    do {
      pbVar7 = *(byte * PTR32 *)(in_ebp + 0x10);
      pbVar5 = ((byte *)GEN_TOP(((uint)*(ushort *)((int)puVar4 + uVar3 * 2 + 4) + (int)puVar4)));
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00504fc0: ;
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00504fc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00504fc0;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00504fc5: ;
      if (iVar6 == 0) {
        return uVar3 * 0x30 + *(int *)(in_ebp + 0xc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00504ff0 */
uint F_00504ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x504ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  ushort uVar1;
  byte bVar2;
  short * psVar3;
  uint uVar4;
  uint * puVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  byte * pbVar9;
  bool bVar10;
  
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  bVar2 = F_00504d60(this,param_1,param_2);
  if (bVar2 == 0) {
    return 0;
  }
  psVar3 = (short *)F_00520150(this,param_1);
  uVar1 = psVar3[1];
  if (uVar1 == 0xffff) {
    param_1 = (ushort *)0x0;
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
    param_1 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar6) * 8)));
  }
  *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x1302d00));
  param_4[1] = GEN_FLT_TO(param_4[1], REFG(float, 0x1302d10));
  param_4[2] = GEN_FLT_TO(param_4[2], REFG(float, 0x1302d20));
  param_4[3] = GEN_FLT_TO(param_4[3], REFG(float, 0x1302d30));
  param_4[4] = GEN_FLT_TO(param_4[4], REFG(float, 0x1302d04));
  param_4[5] = GEN_FLT_TO(param_4[5], REFG(float, 0x1302d14));
  param_4[6] = GEN_FLT_TO(param_4[6], REFG(float, 0x1302d24));
  param_4[7] = GEN_FLT_TO(param_4[7], REFG(float, 0x1302d34));
  param_4[8] = GEN_FLT_TO(param_4[8], REFG(float, 0x1302d08));
  param_4[9] = GEN_FLT_TO(param_4[9], REFG(float, 0x1302d18));
  param_4[10] = GEN_FLT_TO(param_4[10], REFG(float, 0x1302d28));
  param_4[0xb] = GEN_FLT_TO(param_4[0xb], REFG(float, 0x1302d38));
LAB_00505102: ;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  puVar5 = ((uint *)GEN_TOP((uVar4 + *(int *)(psVar3 + 2))));
  uVar4 = 0;
  if (*puVar5 == 0) {
    return 0;
  }
  do {
    pbVar7 = ((byte *)GEN_TOP(((uint)*(ushort *)((int)puVar5 + uVar4 * 2 + 4) + (int)puVar5)));
    pbVar9 = param_3;
    do {
      bVar2 = *pbVar7;
      bVar10 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_00505150: ;
        iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00505155;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar10 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_00505150;
      pbVar7 = pbVar7 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00505155: ;
    if (iVar8 == 0) break;
    uVar4 = uVar4 + 1;
    if (*puVar5 <= uVar4) {
      return 0;
    }
  } while( true );
  F_004f3790(param_4,(int)puVar5 + uVar4 * 0x30 + (*puVar5 + 1 & 0xfffffffe) * 2 + 4);
  uVar1 = *param_1;
  if (uVar1 == 0xffff) {
    param_1 = (ushort *)0x0;
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
    param_1 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar6) * 8)));
  }
  uVar1 = param_1[3];
  if (uVar1 == 0xffff) {
    psVar3 = (short *)0x0;
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    psVar3 = (short *)(uVar4 + 4 + (uint)uVar1 * 8);
  }
  if (*psVar3 == (short)param_2) {
    return (uint)param_4;
  }
  goto LAB_00505102;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf25 */
uint F_005051f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5051f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (*(short *)(this + 0x10c) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x108))));
      if (iVar2 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2);
        *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x108)))) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 < *(ushort *)(this + 0x10c));
  }
  uVar3 = *(uint *)(this + 0x108);
  if (uVar3 != 0) {
    iVar2 = *(int *)(uVar3 - 4);
    iVar4 = uVar3 - 4;
    puVar5 = (undefined4 *)(uVar3 + 8 + iVar2 * 0xc);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      piVar1 = puVar5 + -3;
      puVar5 = puVar5 + -3;
      uVar3 = 0;
      if (*piVar1 != 0) {
        uVar6 = F_00406b30(*piVar1);
        uVar3 = (uint)uVar6;
        *puVar5 = 0;
      }
    }
    if (iVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar4);
    }
    *(undefined4 *)(this + 0x108) = 0;
  }
  puVar5 = *(undefined4 * PTR32 *)(this + 0xd0);
  if (puVar5 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)(this + 0xd0) = 0;
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf25 */
uint F_005052d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5052d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xe4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(this + 0xe4));
    *(undefined4 *)(this + 0xe4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0xe8) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(this + 0xe8));
    *(undefined4 *)(this + 0xe8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  return uVar2;
}

/* ref: FUN_00505340 */
uint F_00505340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x505340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x14))) + (uint)(ushort)param_1 * 4)));
}

/* ref: FUN_00505360 */
uint F_00505360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x505360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00503630(this,param_1);
  if ((-1 < (short)uVar1) &&
     (uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x22 + (short)uVar1 * 0x28))),
     -1 < (short)uVar1)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x14))) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_005053b0 */
uint F_005053b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5053b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x20))) + (uint)(ushort)param_1 * 4)));
}

/* ref: FUN_005053d0 */
uint F_005053d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5053d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  double dVar2;
  float10 fVar3;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xb0) + 0x14))) + (param_2 & 0xffff) * 4)));
  if (iVar1 != 0) {
    dVar2 = (double)((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) * (float10)*(double *)&REFG(undefined, 0x1088070))));
    fVar3 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    return (int)TRUNC(fVar3) & 0xffff;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf25 */
uint F_00505440(unsigned int gen_a0)
{
  GEN_ENTER(0x505440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0xa4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(this + 0xa4));
    *(undefined4 *)(this + 0xa4) = 0;
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf33 */
uint F_00505470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x505470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pEVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2;
  if (param_2 == 1) {
    pEVar1 = this + 0x88;
    LOCK();
    iVar7 = *(int *)pEVar1;
    *(int *)pEVar1 = *(int *)pEVar1;
    UNLOCK();
    if (iVar7 != 3) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      uVar2 = *(undefined4 *)(uVar3 + 4);
      uVar8 = *(uint *)(uVar3 + 8);
      param_2 = 0x10;
      if (uVar8 != 0) {
        *(uint *)(this + 0xa0) = uVar8;
        iVar7 = (int)((ulonglong)uVar8 * 0x40 >> 0x20);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar7,
                           -(uint)(iVar7 != 0) | (uint)((ulonglong)uVar8 * 0x40),0x10);
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          iVar7 = uVar8 - 1;
          if (-1 < iVar7) {
            puVar6 = (undefined4 *)(uVar4 + 0x24);
            do {
              puVar6[-1] = 0xffffffff;
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
              puVar6[4] = 0;
              puVar6[5] = 0;
              puVar6[-9] = 0;
              puVar6[-8] = 0;
              puVar6[-7] = 0;
              puVar6[-6] = 0;
              puVar6[-5] = 0;
              puVar6[-4] = 0;
              puVar6[-3] = 0;
              puVar6[-2] = 0;
              puVar6[6] = 0;
              puVar6 = puVar6 + 0x10;
              iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
          }
        }
        uVar8 = 0;
        *(uint *)(this + 0xa4) = uVar4;
        if (*(int *)(this + 0xa0) != 0) {
          iVar7 = 0;
          do {
            uVar4 = F_00520220(((undefined *)GEN_TOP((*(int *)(this + 0xa4) + iVar7))),param_2 + uVar3,uVar2);
            param_2 = param_2 + uVar4;
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 0x40;
          } while (uVar8 < *(uint *)(this + 0xa0));
        }
      }
      piVar5 = *(int * PTR32 *)(this + 0x98);
      if (piVar5 != (int *)0x0) {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5)));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar8 = 1;
    }
  }
  return uVar8;
}

/* ref: FUN_005055d0 */
uint F_005055d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5055d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  undefined4 * puVar2;
  char * _Format;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  switch((unsigned int)(uintptr_t)(param_3 >> 0x10)) {
  case 0: ;
    _Format = "chara/human/c%04d";
    break;
  case 1: ;
    _Format = "chara/monster/m%04d";
    break;
  case 2: ;
    _Format = "chara/demihuman/d%04d";
    break;
  case 3: ;
    _Format = "chara/weapon/w%04d";
    break;
  default: ;
    goto switchD_005055f9_default;
  }
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,_Format,param_3 & 0xffff);
switchD_005055f9_default: ;
  puVar2 = param_6;
  if (0xf < (uint)param_6[5]) {
    puVar2 = (undefined4 *)*param_6;
  }
  puVar1 = param_5;
  if (0xf < (uint)param_5[5]) {
    puVar1 = (undefined4 *)*param_5;
  }
  F_00c472af(param_1,param_2,"%s/animation/a%04d/%s/%s.pap",((char *)(gen_frame + 0x8)),param_4,puVar1,puVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return param_1;
}

/* ref: FUN_005056a0 */
uint F_005056a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5056a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint * puVar2;
  
  piVar1 = (int *)(*(int *)this + param_1 * 4);
  puVar2 = (uint *)*piVar1;
  *puVar2 = *puVar2 - 1;
  if ((int)*puVar2 < 1) {
    if (*piVar1 != 0) {
      F_00406ad0(*piVar1);
      *piVar1 = 0;
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    return 1;
  }
  return *puVar2 & 0xffffff00;
}

/* ref: FUN_005056f0 */
uint F_005056f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5056f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  int * piVar6;
  bool bVar7;
  
  piVar6 = *(int * PTR32 *)this;
  uVar2 = 0;
  do {
    if (piVar6 == *(int * PTR32 *)((int)this + 4)) {
      return 0xffffffff;
    }
    pbVar3 = (byte *)(*piVar6 + 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00505730: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00505735;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00505730;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00505735: ;
    if (iVar4 == 0) {
      return uVar2;
    }
    piVar6 = piVar6 + 1;
    uVar2 = uVar2 + 1;
  } while( true );
}

/* ref: FUN_00505750 */
byte F_00505750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x505750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xdd4);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0xdd8)) {
      return 0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}

/* ref: FUN_00505780 */
byte F_00505780(unsigned int gen_a0)
{
  GEN_ENTER(0x505780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  int local_8;
  
  local_8 = 0;
  do {
    iVar6 = 0;
    piVar7 = this;
    do {
      if (*piVar7 != 0) {
        puVar2 = *(undefined4 * PTR32 *)(*piVar7 + 4);
        puVar3 = (undefined4 *)*puVar2;
        while (puVar3 != puVar2) {
          if (*(int *)(puVar3[4] + 8) != 0) {
            return 1;
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
              puVar5 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
              while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
                cVar1 = *(char *)((int)puVar3[1] + 0x15);
                puVar5 = (undefined4 *)puVar3[1];
                puVar4 = puVar3;
              }
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 0x14);
    local_8 = local_8 + 1;
    this = (undefined *)((int)this + 0x50);
  } while (local_8 < 0x14);
  return 0;
}

/* ref: FUN_00505820 */
uint F_00505820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x505820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  
  uVar6 = 0;
  piVar8 = (int *)((uint)(ushort)param_1 * 0x50 + (int)this);
  iVar7 = 0x14;
  do {
    if (*piVar8 != 0) {
      puVar2 = *(undefined4 * PTR32 *)(*piVar8 + 4);
      puVar3 = (undefined4 *)*puVar2;
      while (puVar3 != puVar2) {
        uVar6 = uVar6 + *(int *)(puVar3[4] + 8);
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
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
            while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
              cVar1 = *(char *)((int)puVar3[1] + 0x15);
              puVar5 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
            }
          }
        }
      }
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return uVar6;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf29 */
uint F_005058b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5058b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pMVar1;
  uint uVar2;
  
  pMVar1 = this + 0x8c;
  LOCK();
  uVar2 = *(uint *)pMVar1;
  *(uint *)pMVar1 = *(uint *)pMVar1;
  UNLOCK();
  if (uVar2 == 7) {
    pMVar1 = this + 0x88;
    LOCK();
    uVar2 = *(uint *)pMVar1;
    *(uint *)pMVar1 = *(uint *)pMVar1;
    UNLOCK();
    if (uVar2 != 3) {
      uVar2 = F_005042c0(this);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00505920 */
byte F_00505920(unsigned int gen_a0)
{
  GEN_ENTER(0x505920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  char * pcVar3;
  char * pcVar4;
  char * pcVar5;
  
  if ((*(int *)((int)this + 4) == 2) || (*(int *)((int)this + 4) == 1)) {
    *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) | 2;
  }
  if (*(uint *)((int)this + 0x50) < 0x10) {
    pcVar5 = (char *)((int)this + 0x3c);
  }
  else {
    pcVar5 = *(char * PTR32 *)((int)this + 0x3c);
  }
  pcVar3 = pcVar5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0xffffffff;
  pcVar3 = pcVar3 + (-1 - (int)(pcVar5 + 1));
  do {
    if ((int)pcVar3 < 0) {
LAB_0050596e: ;
      bVar2 = pcVar5[(int)pcVar4];
      if (bVar2 == 100) {
        *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) | 4;
        return 100;
      }
      if (bVar2 == 0x6e) {
        *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) | 8;
        return 0x6e;
      }
      if (bVar2 == 0x73) {
        *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) | 0x10;
      }
      return bVar2;
    }
    if (pcVar5[(int)pcVar3] == '.') {
      pcVar4 = pcVar3 + -1;
      goto LAB_0050596e;
    }
    pcVar3 = pcVar3 + -1;
  } while( true );
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf32 */
uint F_005059a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5059a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  undefined * pSVar7;
  uint uVar8;
  
  iVar4 = (*(int *)&gen_args[1]);
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x10);
  uVar2 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x14);
  uVar3 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  piVar5 = (int *)F_00406520();
  uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,uVar3,0);
  F_00504190(iVar4,uVar6,uVar3,0,uVar1,uVar2,(*(undefined4 *)&gen_args[2]));
  pSVar7 = (*(undefined * PTR32 *)&gen_args[0]) + 0x3c;
  if (0xf < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
    pSVar7 = *(undefined * PTR32 *)pSVar7;
  }
  uVar8 = F_00b52cf0(uVar6,uVar3,(int)&(*(int *)&gen_args[1]) + 3,pSVar7);
  if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) == '\0') {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = 0;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = uVar8;
  }
  else {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = uVar8;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = 0;
  }
  if (uVar6 != 0) {
    F_00406810(uVar6);
  }
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = (uint)((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0') * 4 + 0x2c;
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf32 */
uint F_00505a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x505a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined * pSVar6;
  uint uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(this + 0x1c);
  piVar4 = (int *)F_00406520();
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,uVar3,0);
  F_00504190(param_1,uVar5,uVar3,0,uVar1,uVar2,param_2);
  pSVar6 = this + 0x3c;
  if (0xf < *(uint *)(this + 0x50)) {
    pSVar6 = *(undefined * PTR32 *)pSVar6;
  }
  uVar7 = F_00b53350(uVar5,uVar3,pSVar6);
  *(uint *)(this + 0x98) = uVar7;
  if (uVar5 != 0) {
    F_00406810(uVar5);
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return (-(uint)(*(int *)(this + 0x98) != 0) & 0xb) - 10;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandle::vf25 */
unsigned int F_00505b00(unsigned int gen_a0)
{
  GEN_ENTER(0x505b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x3c0) != (undefined *)0x0) {
    F_00520630(*(undefined * PTR32 *)(this + 0x3c0),3);
    *(undefined4 *)(this + 0x3c0) = 0;
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  return 0;
}

/* ref: FUN_00505b30 */
uint F_00505b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x505b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x350];
  ushort * puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort * puVar5;
  ushort * puVar6;
  uint uVar7;
  float * pfVar8;
  uint * puVar9;
  ushort * PTR32 * ppuVar10;
  float fVar11;
  undefined4 * puVar12;
  int iVar13;
  int * piVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  undefined * pvVar21;
  undefined4 * puVar22;
  float10 fVar23;
  float fVar24;
  
  (*(uint *)(gen_frame + 0x33c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x340);
  (*(int *)(gen_frame + 0x5c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x1b4)) = REFG(float, 0x1088138);
  (*(undefined4 *)(gen_frame + 0x1d4)) = REFG(float, 0x1088138);
  (*(undefined4 *)(gen_frame + 0x1f4)) = REFG(float, 0x1088138);
  (*(undefined4 *)(gen_frame + 0x214)) = REFG(float, 0x1088138);
  (*(undefined4 *)(gen_frame + 0x234)) = REFG(float, 0x1088138);
  (*(undefined4 *)(gen_frame + 0x254)) = REFG(float, 0x1088138);
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = this;
  ((float *)(gen_frame + 0x78))[0] = 1.68156e-44;
  ((float *)(gen_frame + 0x78))[1] = 1.68156e-44;
  (*(undefined4 *)(gen_frame + 0x1b0)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c0)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x200)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined4 *)(gen_frame + 0x210)) = 0;
  (*(undefined4 *)(gen_frame + 0x218)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x220)) = 0;
  (*(undefined4 *)(gen_frame + 0x224)) = 0;
  (*(undefined4 *)(gen_frame + 0x228)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x230)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = 0;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(undefined4 *)(gen_frame + 0x258)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(undefined4 *)(gen_frame + 0x264)) = 0;
  (*(undefined4 *)(gen_frame + 0x268)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x270)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x274)) = 0;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(undefined4 *)(gen_frame + 0x280)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(undefined4 *)(gen_frame + 0x288)) = 0;
  (*(undefined4 *)(gen_frame + 0x290)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x294)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x298)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a0)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x2a4)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2b0)) = REFG(float, 0x1099848);
  (*(uint *)(gen_frame + 0x2b4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x2b8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c0)) = REFG(float, 0x1094808);
  (*(uint *)(gen_frame + 0x2c4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x2c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d8)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x2e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e8)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x2f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2f4)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x2f8)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x300)) = 0;
  (*(undefined4 *)(gen_frame + 0x304)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x308)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x310)) = 0;
  (*(undefined4 *)(gen_frame + 0x320)) = 0;
  (*(float *)(gen_frame + 0xc0)) = 0.0;
  ((undefined4 * PTR32 *)(gen_frame + 0x18))[1] = &(*(undefined4 *)(gen_frame + 0x270));
  (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0xe4);
  fVar15 = *(float *)((int)this + 0xe8);
  ((undefined4 * PTR32 *)(gen_frame + 0x18))[0] = &(*(undefined4 *)(gen_frame + 0x1b0));
  fVar11 = *(float *)((int)this + 0xb0);
  puVar12 = &REFG(float, 0x1302d00);
  ppuVar10 = ((ushort * PTR32 *)(gen_frame + 0x170));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *ppuVar10 = (ushort *)*puVar12;
    puVar12 = puVar12 + 1;
    ppuVar10 = ppuVar10 + 1;
  }
  (*(float *)(gen_frame + 0x24)) = fVar15;
  (*(uint *)(gen_frame + 0x314)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x318)) = REFG(float, 0x1099848);
  (*(uint *)(gen_frame + 0x324)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x328)) = REFG(float, 0x1094808);
  (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xec);
  (*(float *)(gen_frame + 0xa4)) = fVar11;
  F_00b4e820(((undefined4 *)(gen_frame + 0xf0)));
  (*(float *)(gen_frame + 0xc8)) = 0.0;
  do {
    pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
    fVar15 = (*(float *)(gen_frame + 0xc8));
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) * 8 + 0x2f0) != 0) {
      puVar5 = (ushort *)
               F_004d68c0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) * 8 + 0x2f4),0,0
                            ,2);
      (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar5;
      (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)0x0;
      uVar7 = REFG(float, 0x1087f04);
      if ((*(float *)(gen_frame + 0xa4)) != 0.0) {
        do {
          fVar11 = (*(float *)(gen_frame + 0xc8));
          puVar5 = (ushort *)
                   (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) +
                          ((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x20 + (int)gen_fl2bits(fVar15)) * 2 + 0x10c)));
          (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar5;
          if (puVar5 != (ushort *)0x0) {
            iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0);
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)0x0;
            (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x0;
            iVar17 = ((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x1a + (int)gen_fl2bits(fVar15)) * 8;
            *(ushort * PTR32 *)(iVar17 + iVar13) = puVar5;
            fVar18 = 0.0;
            (*(ushort * PTR32 *)(gen_frame + 0xe0)) = (ushort *)0x0;
            if (1 < (int)(*(int * PTR32 *)(gen_frame + 0xc4))) {
              puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar15))])));
              (*(ushort * PTR32 *)(gen_frame + 0xe4)) = puVar6;
              piVar14 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + (int)gen_fl2bits(fVar15) * 8)));
              iVar13 = ((int)(*(int * PTR32 *)(gen_frame + 0xc4)) - 2U >> 1) + 1;
              fVar18 = gen_bits2f(iVar13 * 2);
              (*(ushort * PTR32 *)(gen_frame + 0xd4)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar18)));
              do {
                (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) + *piVar14 * (int)((int)(uintptr_t)puVar6) * 0x10);
                (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (*(ushort * PTR32 *)(gen_frame + 0xe8)) + piVar14[0x34] * (int)((int)(uintptr_t)puVar6) * 8;
                piVar14 = piVar14 + 0x68;
                iVar13 = iVar13 + -1;
                fVar15 = (*(float *)(gen_frame + 0xc8));
              } while (iVar13 != 0);
            }
            iVar13 = 0;
            if ((uint)gen_fl2bits(fVar18) < (*(int * PTR32 *)(gen_frame + 0xc4))) {
              iVar13 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) +
                               ((int)gen_fl2bits(fVar18) * 0x1a + (int)gen_fl2bits(fVar15)) * 8))) *
                       (int)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar15))]) * 0x10;
            }
            iVar19 = 0;
            *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 4 + iVar17))) =
                 (int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + iVar13 + (int)(*(ushort * PTR32 *)(gen_frame + 0xd8));
            iVar17 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x40 + 0xf0 + (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
            iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 4 + 0xb4) + 0x40 + (*(int *)(gen_frame + 0x5c));
            (*(int *)(gen_frame + 0xcc)) = iVar13;
            fVar15 = 0.0;
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)iVar17;
            if ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) < 2) {
              iVar20 = 0;
            }
            else {
              puVar6 = (ushort *)(iVar17 + 0x1e);
              iVar16 = ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) - 2U >> 1) + 1;
              fVar15 = gen_bits2f(iVar16 * 2);
              (*(ushort * PTR32 *)(gen_frame + 0xd4)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar15)));
              iVar20 = 0;
              do {
                iVar19 = iVar19 + (uint)puVar6[-1] * 0x16;
                iVar20 = iVar20 + (uint)*puVar6 * 0x16;
                puVar6 = puVar6 + 2;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            if ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
              (*(int *)(gen_frame + 0xcc)) = iVar13 + (uint)*(ushort *)(iVar17 + 0x1c + (int)gen_fl2bits(fVar15) * 2) *
                                   0x16;
            }
            fVar18 = ((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))))];
            (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + iVar19 + iVar20;
            (*(uint *)(gen_frame + 0x40)) = uVar7;
            (*(ushort * PTR32 *)(gen_frame + 0xd4)) = (ushort *)((int)gen_fl2bits(fVar18) * (int)puVar5);
            uVar4 = 0;
            uVar3 = (ushort)(uVar7 >> 0x10);
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar4 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar4 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 0)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)),uVar4);
            uVar2 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar2 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar2 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x58)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)) = uVar2;
            (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22(uVar2,uVar4);
            uVar4 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar4 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar4 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x38)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 0)) = uVar4;
            (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)),uVar4);
            uVar2 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar2 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar2 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)) = uVar2;
            (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22(uVar2,uVar4);
            (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0xffffffff;
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)0x0;
            fVar15 = fVar11;
            if ((ushort *)((int)gen_fl2bits(fVar18) * (int)puVar5) != (ushort *)0x0) {
              (*(uint *)(gen_frame + 0x54)) = (uint)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))))]) >> 1;
              (*(uint *)(gen_frame + 0x74)) = uVar7;
              do {
                puVar5 = (ushort *)
                         ((uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0xd8))) / (uint)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar11))]));
                if ((*(ushort * PTR32 *)(gen_frame + 0xe4)) != puVar5) {
                  (*(ushort * PTR32 *)(gen_frame + 0xe4)) = puVar5;
                  uVar7 = F_00b50490(((undefined4 *)(gen_frame + 0xf0)),(*(int *)(gen_frame + 0xcc)));
                  (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + uVar7;
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xd8);
                  if (uVar4 == 0) {
                    (*(int * PTR32 *)(gen_frame + 0xb4)) = (int *)0x0;
                  }
                  else {
                    (*(int * PTR32 *)(gen_frame + 0xb4)) = ((int *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                       ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xd4);
                  if (uVar4 == 0) {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = (undefined4 *)0x0;
                  }
                  else {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = ((undefined4 *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xb8))))) +
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) *
                                  ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xb4))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xb8))))))))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0xc0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)(*(float *)(gen_frame + 0x168)));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xe0);
                  if (uVar4 == 0) {
                    (*(float *)(gen_frame + 0xac)) = 0.0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xac)) = gen_bits2f(((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                           ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000);
                  }
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xdc);
                  if (uVar4 == 0) {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x0;
                  }
                  else {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = ((undefined4 *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xa8))))) +
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) *
                                  ((float10)(*(float *)(gen_frame + 0xac)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xa8))))))))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xe8)) = puVar6;
                  fVar23 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  puVar1 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar1;
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar1;
                  fVar23 = ((float10)GEN_TOD(fcos((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  ((ushort * PTR32 *)(gen_frame + 0x170))[1] = (ushort *)0x0;
                  ((ushort * PTR32 *)(gen_frame + 0x170))[0] = puVar6;
                  (*(undefined4 *)(gen_frame + 0x180)) = 0;
                  (*(uint *)(gen_frame + 0x184)) = REFG(float, 0x1087f04);
                  (*(undefined4 *)(gen_frame + 0x188)) = 0;
                  (*(undefined4 *)(gen_frame + 0x194)) = 0;
                  (*(float *)(gen_frame + 0x178)) = ((float)GEN_TOF(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)))));
                  (*(undefined4 *)(gen_frame + 0x1a0)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
                  (*(ushort * PTR32 *)(gen_frame + 0x190)) = puVar1;
                  (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
                  (*(ushort * PTR32 *)(gen_frame + 0x198)) = puVar6;
                  fVar18 = F_00a4b7d0();
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar18 * (float10)*(double *)&REFG(undefined, 0x1099840) +
                                  (float10)*(double *)&REFG(undefined, 0x1099838)))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  fVar23 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  fVar18 = (float)((float10)(float)fVar23 * (float10)REFG(double, 0x1088108));
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar18)));
                  (*(ushort * PTR32 *)(gen_frame + 0xe8)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)((float10)REFG(double, 0x1088108) * (float10)fVar18))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  fVar24 = F_00a4b7d0();
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar24)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = (ushort *)(uint)(*(byte *)(gen_frame + 0x160));
                  fVar18 = (float)((float10)(int)(uint)(*(byte *)(gen_frame + 0x160)) * (float10)*(double *)&REFG(double, 0x10948e0)
                                  );
                  (*(float *)(gen_frame + 0x44)) = fVar18;
                  uVar4 = 0;
                  if (fVar18 != 0.0) {
                    puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar4 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar4 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                              (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                              (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 0)) = uVar4;
                  (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)),uVar4);
                  fVar18 = (float)((float10)fVar24 * (float10)*(double *)&REFG(undefined, 0x1080228));
                  (*(float *)(gen_frame + 0x50)) = fVar18;
                  uVar3 = 0;
                  if (fVar18 != 0.0) {
                    puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar3 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar3 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                              (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                              (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x164));
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)) = uVar3;
                  (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22(uVar3,uVar4);
                  uVar4 = 0;
                  if ((*(uint *)(gen_frame + 0x164)) != 0) {
                    puVar6 = ((ushort *)GEN_TOP((((*(uint *)(gen_frame + 0x164)) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar4 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar4 = (ushort)((*(uint *)(gen_frame + 0x164)) >> 0x10) & 0x8000 |
                              (ushort)((*(uint *)(gen_frame + 0x164)) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(uint *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 0)) = uVar4;
                  (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)),uVar4);
                  uVar3 = 0;
                  if (REFG(float, 0x1087f04) != 0) {
                    puVar6 = ((ushort *)GEN_TOP(((REFG(uint, 0x1087f04) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar3 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar3 = (ushort)(REFG(uint, 0x1087f04) >> 0x10) & 0x8000 |
                              (ushort)(REFG(uint, 0x1087f04) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10)
                      ;
                    }
                  }
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)) = uVar3;
                  (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22(uVar3,uVar4);
                }
                uVar7 = (int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) -
                        (int)((int)(uintptr_t)puVar5) * (int)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar11))]);
                pfVar8 = (float *)(((undefined4 * PTR32 *)(gen_frame + 0x18))[(int)((int)gen_fl2bits(fVar11))] + uVar7 * 4);
                fVar18 = *pfVar8;
                ((float *)(gen_frame + 0x78))[2] = fVar18;
                ((float *)(gen_frame + 0x78))[3] = pfVar8[1];
                fVar24 = pfVar8[2];
                (*(float *)(gen_frame + 0x88)) = fVar24;
                if (fVar11 == 0.0) {
                  switch((unsigned int)(uintptr_t)(uVar7)) {
                  case 2: ;
                  case 3: ;
                    ((float *)(gen_frame + 0x78))[2] = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x60)));
                    fVar23 = (float10)fVar24 + (float10)(*(float *)(gen_frame + 0x64));
                    break;
                  default: ;
                    goto switchD_005067ef_caseD_4;
                  case 8: ;
                  case 9: ;
                    ((float *)(gen_frame + 0x78))[2] = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x68)));
                    fVar23 = (float10)fVar24 + (float10)(*(float *)(gen_frame + 0x6c));
                  }
                  (*(float *)(gen_frame + 0x88)) = (float)fVar23;
                }
switchD_005067ef_caseD_4: ;
                if (uVar7 < (*(uint *)(gen_frame + 0x54))) {
                  ((float *)(gen_frame + 0x78))[2] = (float)((float10)((float *)(gen_frame + 0x78))[2] + (float10)(*(float *)(gen_frame + 0xc0)));
                }
                else {
                  F_004eea10(((float *)(gen_frame + 0x78)) + 2,(uint)((ushort * PTR32 *)(gen_frame + 0x170)));
                  (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x88)) + (float10)(*(float *)(gen_frame + 0xc0)));
                }
                puVar9 = (uint *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x78)) + 2,((undefined4 *)(gen_frame + 0xf0)));
                puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xd0));
                uVar7 = *puVar9;
                fVar18 = gen_bits2f(puVar9[1]);
                piVar14 = (int *)puVar9[2];
                (*(uint *)(gen_frame + 0x70)) = uVar7;
                uVar4 = 0;
                if (uVar7 != 0) {
                  puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                    }
                    uVar4 = (ushort)(uVar7 >> 0x10) & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                            (ushort)((int)*ppuVar10 << 10);
                  }
                }
                (*(float *)(gen_frame + 0xb0)) = fVar18;
                *(*(ushort * PTR32 *)(gen_frame + 0xd0)) = uVar4;
                uVar4 = 0;
                if (fVar18 != 0.0) {
                  puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                            (ushort)((int)*ppuVar10 << 10);
                  }
                }
                (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                puVar5[1] = uVar4;
                uVar4 = 0;
                if (piVar14 != (int *)0x0) {
                  puVar6 = ((ushort *)GEN_TOP((((uint)((int)(uintptr_t)piVar14) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((uint)((int)(uintptr_t)piVar14) >> 0x10) & 0x8000 |
                            (ushort)((uint)((int)(uintptr_t)piVar14) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10);
                  }
                }
                puVar5[2] = uVar4;
                if ((*(uint *)(gen_frame + 0x74)) == 0) {
                  uVar4 = 0;
                }
                else {
                  puVar6 = ((ushort *)GEN_TOP((((*(uint *)(gen_frame + 0x74)) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((int)*ppuVar10 << 10) |
                            (ushort)((*(uint *)(gen_frame + 0x74)) >> 0xd) & 0x3ff |
                            (ushort)((*(uint *)(gen_frame + 0x74)) >> 0x10) & 0x8000;
                  }
                }
                puVar5[3] = uVar4;
                *(undefined4 *)(puVar5 + 4) = (*(undefined4 *)(gen_frame + 0x9c));
                puVar6 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) + 1);
                *(undefined4 *)(puVar5 + 6) = (*(undefined4 *)(gen_frame + 0xa0));
                (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar5 + 8;
                (*(ushort * PTR32 *)(gen_frame + 0xd8)) = puVar6;
                uVar7 = REFG(float, 0x1087f04);
              } while (puVar6 < (*(ushort * PTR32 *)(gen_frame + 0xd4)));
            }
          }
          fVar11 = gen_bits2f((int)(*(int * PTR32 *)(gen_frame + 0xc4)) + 1);
          (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar11)));
          pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
        } while ((uint)gen_fl2bits(fVar11) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
      }
      F_004d6970(*(undefined * PTR32 *)((int)pvVar21 + (int)gen_fl2bits(fVar15) * 8 + 0x2f4));
    }
    (*(float *)(gen_frame + 0xc8)) = gen_bits2f((int)gen_fl2bits(fVar15) + 1U);
    if (1 < (int)gen_fl2bits(fVar15) + 1U) {
      (*(uint *)(gen_frame + 0x70)) = -0x2f0 - (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
      puVar5 = (ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x308);
      (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)0x0;
      (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
      (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x4;
      (*(uint *)(gen_frame + 0x74)) = -0x308 - (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
      (*(float *)(gen_frame + 0xac)) = 2.24208e-44;
      do {
        if (*(int *)((int)puVar5 + -8) != 0) {
          (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
          puVar12 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)puVar5,0,*(int *)((int)puVar5 + -8) << 4,2)
          ;
          (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar12;
          (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = *(undefined4 * PTR32 *)((int)puVar5 + -4);
          (*(float *)(gen_frame + 0xc8)) = 0.0;
          if ((*(float *)(gen_frame + 0xa4)) != 0.0) {
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x10c);
            (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x0;
            (*(int * PTR32 *)(gen_frame + 0xb4)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0xb4);
            do {
              puVar6 = (ushort *)(uint)*(ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xe4)) + (int)(*(ushort * PTR32 *)(gen_frame + 0xd8)));
              (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar6;
              if (puVar6 != (ushort *)0x0) {
                puVar5 = (ushort *)((int)puVar5 + (*(uint *)(gen_frame + 0x74)));
                *((ushort * PTR32 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x10 + (int)puVar5)))
                     = puVar6;
                iVar17 = 0;
                iVar19 = 0;
                iVar13 = 0;
                fVar15 = 0.0;
                (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar5;
                if (1 < (int)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
                  piVar14 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0xe0 + (int)puVar5)));
                  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                  iVar20 = ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) - 2U >> 1) + 1;
                  fVar15 = gen_bits2f(iVar20 * 2);
                  (*(float *)(gen_frame + 0xb0)) = fVar15;
                  do {
                    iVar17 = iVar17 + piVar14[-0x34];
                    iVar19 = iVar19 + *piVar14;
                    piVar14 = piVar14 + 0x68;
                    iVar20 = iVar20 + -1;
                  } while (iVar20 != 0);
                }
                if ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
                  iVar13 = *((int *)GEN_TOP(((int)gen_fl2bits(fVar15) * 0xd0 +
                                    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x10 + (int)puVar5)));
                }
                iVar13 = iVar13 + iVar17 + iVar19;
                *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x14 + (int)puVar5))) =
                     iVar13;
                *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + (*(uint *)(gen_frame + 0x70)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) +
                        (int)(*(ushort * PTR32 *)(gen_frame + 0xe0))))) = iVar13 * 0x10;
                iVar13 = (*(int *)(gen_frame + 0x5c)) + 0x40 + *(*(int * PTR32 *)(gen_frame + 0xb4)) +
                         ((uint)(*(ushort * PTR32 *)(gen_frame + 0xd8))[1] + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xd8))) * 0x16;
                piVar14 = (int *)0x0;
                (*(float *)(gen_frame + 0xc0)) = 0.0;
                (*(int *)(gen_frame + 0xcc)) = 0;
                if (1 < (int)(*(int * PTR32 *)(gen_frame + 0xc4))) {
                  puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xd8)) + 3;
                  iVar17 = ((int)(*(int * PTR32 *)(gen_frame + 0xc4)) - 2U >> 1) + 1;
                  piVar14 = (int *)(iVar17 * 2);
                  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                  do {
                    (*(float *)(gen_frame + 0xc0)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc0))) + (uint)puVar5[-1] * 0x16);
                    (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + (uint)*puVar5 * 0x16;
                    puVar5 = puVar5 + 2;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                if (piVar14 < (*(int * PTR32 *)(gen_frame + 0xc4))) {
                  iVar13 = iVar13 + (uint)(*(ushort * PTR32 *)(gen_frame + 0xd8))[(int)piVar14 + 2] * 0x16;
                }
                piVar14 = (int *)(iVar13 + (int)gen_fl2bits((*(float *)(gen_frame + 0xc0))) + (*(int *)(gen_frame + 0xcc)));
                puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xe0));
                if (puVar6 != (ushort *)0x0) {
                  (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar6;
                  do {
                    uVar7 = F_00b50490(((undefined4 *)(gen_frame + 0xf0)),piVar14);
                    (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)((int)piVar14 + uVar7);
                    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x24)));
                    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x28)));
                    (*(float *)(gen_frame + 0x120)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x124)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x24)));
                    (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x28)));
                    puVar12 = ((undefined4 *)(gen_frame + 0xf0));
                    puVar22 = (*(undefined4 * PTR32 *)(gen_frame + 0xb8));
                    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                      *puVar22 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar22 = puVar22 + 1;
                    }
                    fVar15 = F_00a4b7d0();
                    (*(float *)(gen_frame + 0xb0)) = fVar15;
                    fVar23 = (float10)*(double *)&REFG(undefined, 0x1080228);
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) + 0x10;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[2] = (*(uint *)(gen_frame + 0x164));
                    uVar7 = REFG(float, 0x1087f04);
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[1] = (undefined4)gen_fl2bits((float)((float10)fVar15 * fVar23));
                    *(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = 0;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[3] = uVar7;
                    puVar6 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd4)) + -1);
                    (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar6;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4;
                    piVar14 = (*(int * PTR32 *)(gen_frame + 0xbc));
                    puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xe0));
                  } while (puVar6 != (ushort *)0x0);
                }
              }
              (*(int * PTR32 *)(gen_frame + 0xb4)) = (*(int * PTR32 *)(gen_frame + 0xb4)) + 1;
              (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (*(ushort * PTR32 *)(gen_frame + 0xe8)) + 0x68;
              fVar15 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) + 1);
              (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (*(ushort * PTR32 *)(gen_frame + 0xd8)) + 0x20;
              (*(float *)(gen_frame + 0xc8)) = fVar15;
            } while ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
          }
          *(undefined4 *)(*(int *)puVar5 + 0x24) = 0;
        }
        (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (*(ushort * PTR32 *)(gen_frame + 0xe4)) + 1;
        (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xc4)) + 1);
        puVar5 = (ushort *)((int)puVar5 + 0xc);
        iVar13 = (int)gen_fl2bits((*(float *)(gen_frame + 0xac))) + -1;
        (*(float *)(gen_frame + 0xac)) = gen_bits2f(iVar13);
        (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
      } while (iVar13 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x33c)) ^ (uint)(uint)(gen_frame + 0x340));
      return 1;
    }
  } while( true );
}

/* ref: FUN_00506ea0 */
uint F_00506ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x506ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00503630(this,param_1);
  if ((-1 < (short)uVar1) &&
     (uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x22 + (short)uVar1 * 0x28))),
     -1 < (short)uVar1)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x20))) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_00506ef0 */
float10 F_00506ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x506ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  char * _String;
  double dVar2;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int * PTR32 *)(param_1 + 0xbc);
  }
  _String = (char *)F_0042a990(iVar1 + 0x68);
  dVar2 = F_00c4acaa(_String);
  return (float10)(float)dVar2;
}

/* ref: FUN_00506f30 */
uint F_00506f30(unsigned int gen_a0)
{
  GEN_ENTER(0x506f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) != 0) {
    return **(int * PTR32 *)(param_1 + 0xbc) + 0x68;
  }
  return 0x68;
}

/* ref: FUN_00506f60 */
uint F_00506f60(unsigned int gen_a0)
{
  GEN_ENTER(0x506f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) != 0) {
    bVar1 = F_0042b6a0(((undefined *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xbc) + 0x68))),&REFG(undefined, 0x1098a24));
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0042b6a0((undefined *)0x68,&REFG(undefined, 0x1098a24));
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00507050 */
float10 F_00507050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507050u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST1;
  double dVar8;
  
  if ((*(int *)(param_2 + 0xc0) - (int)*(int * PTR32 *)(param_2 + 0xbc) & 0xfffffffcU) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int * PTR32 *)(param_2 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar6 + 0x68);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(param_2 + 0xc);
  *param_1 = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                    (float10)*(double *)&REFG(undefined, 0x1080220))));
  if ((*(int *)(iVar6 + 0xc0) - (int)*(int * PTR32 *)(iVar6 + 0xbc) & 0xfffffffcU) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int * PTR32 *)(iVar6 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar5 + 0x68);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(iVar6 + 0xc);
  param_1[1] = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                      (float10)*(double *)&REFG(undefined, 0x1080220))));
  if ((*(int *)(iVar6 + 0xc0) - (int)*(int * PTR32 *)(iVar6 + 0xbc) & 0xfffffffcU) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int * PTR32 *)(iVar6 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar5 + 0x68);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(iVar6 + 0xc);
  param_1[2] = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                      (float10)*(double *)&REFG(undefined, 0x1080220))));
  piVar1 = *(int * PTR32 *)(iVar6 + 0xbc);
  if ((*(int *)(iVar6 + 0xc0) - (int)piVar1 & 0xfffffffcU) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  pcVar4 = (char *)F_0042a990(iVar6 + 0x68);
  dVar8 = F_00c4acaa(pcVar4);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080220);
  fVar7 = (float10)REFG(double, 0x1094890);
  param_1[1] = (float)((float10)param_1[1] * fVar7);
  param_1[3] = ((float)GEN_TOF((fVar7 * (float10)((float)GEN_TOF((((float10)(float)dVar8 * fVar3) / fVar2))))));
  return extraout_ST1;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf25 */
uint F_00507190(unsigned int gen_a0)
{
  GEN_ENTER(0x507190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 200) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(this + 200));
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(undefined * PTR32 *)(this + 0xcc) != (undefined *)0x0) {
    uVar1 = F_00520030(*(undefined * PTR32 *)(this + 0xcc),3);
    *(undefined4 *)(this + 0xcc) = 0;
  }
  return uVar1;
}

/* ref: FUN_005071e0 */
uint F_005071e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5071e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
      puVar3[4] = 0;
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
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00524550(this);
  return uVar6;
}

/* ref: FUN_00507260 */
uint F_00507260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507260u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_005245b0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(int *)((*(int *)&gen_args[1]) + 0x10) + 4;
  }
  return 0x1097dd7;
}

/* ref: FUN_005072a0 */
byte F_005072a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5072a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x10)),param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_004087f0(((undefined1 *)(gen_frame + 0x10)));
  F_005245b0(this,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x14)) == *(int *)((int)this + 4)) {
    puVar4 = &REFG(undefined, 0x1097dd7);
  }
  else {
    puVar4 = ((undefined *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x14)) + 0x10) + 4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return puVar4 != (undefined *)0x0;
}

/* ref: FUN_00507330 */
byte F_00507330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_005245b0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(int *)((*(int *)&gen_args[1]) + 0x10) != -4;
  }
  return 1;
}

/* ref: FUN_00507370 */
byte F_00507370(unsigned int gen_a0)
{
  GEN_ENTER(0x507370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined1 *)((int)this + 0x4e) = 0;
    *(undefined1 *)((int)this + 0x51) = 1;
    if (*(int *)((int)this + 0x18) == 0 && *(int *)((int)this + 0x1c) == 0) {
      uVar3 = F_00427d90();
      *(ulonglong *)((int)this + 0x18) = uVar3 + 10000;
    }
    else {
      uVar3 = F_00427d90();
      uVar2 = (uint)(uVar3 >> 0x20);
      if ((*(uint *)((int)this + 0x1c) <= uVar2) &&
         ((*(uint *)((int)this + 0x1c) < uVar2 || (*(uint *)((int)this + 0x18) < (uint)uVar3)))) {
        *(undefined4 *)((int)this + 0x10) = 2;
        return 1;
      }
    }
    bVar1 = F_00505780(*(undefined * PTR32 *)((int)this + 4));
    if ((bVar1 != 0) || (*(int *)((int)this + 0xdd4) != *(int *)((int)this + 0xdd8))) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x10) = 1;
  }
  return 1;
}

/* ref: FUN_005073f0 */
uint F_005073f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5073f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = 0;
  piVar4 = (int *)((int)this + 0xd2c);
  do {
    if (*piVar4 != 0) {
      if ((int *)piVar4[-4] == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)piVar4[-4];
      }
      uVar1 = (uint)piVar4[-1] >> 2;
      if (*(uint *)(iVar3 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(iVar3 + 8);
      }
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar1 * 4))) + (piVar4[-1] & 3U) * 4)));
      if (iVar3 != 0) {
        if (*(uint *)(iVar3 + 0x50) < 0x10) {
          return (uint)(uint *)(iVar3 + 0x3c);
        }
        return *(uint *)(iVar3 + 0x3c);
      }
    }
    uVar2 = uVar2 + 1;
    piVar4 = piVar4 + 6;
    if (6 < uVar2) {
      return 0x1097de6;
    }
  } while( true );
}

/* ref: FUN_00507460 */
uint F_00507460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0xde4);
  if (piVar3 != *(int * PTR32 *)((int)this + 0xde8)) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xde8) + -4)));
    iVar1 = *piVar2;
    while (iVar1 != param_1) {
      if (piVar2 == piVar3) {
        return (uint)piVar2;
      }
      piVar2 = piVar2 + -1;
      iVar1 = *piVar2;
    }
    piVar3 = (int *)F_00c46e20(piVar2,piVar2 + 1,
                               (*(int *)((int)this + 0xde8) - (int)(piVar2 + 1) >> 2) * 4);
    *(int *)((int)this + 0xde8) = *(int *)((int)this + 0xde8) + -4;
  }
  return (uint)piVar3;
}

/* ref: FUN_005074c0 */
uint F_005074c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5074c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      puVar3[4] = 0;
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
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00524690(this);
  return uVar6;
}

/* ref: FUN_00507540 */
uint F_00507540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x507540u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00524dd0(pvVar1,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) &&
       (pvVar1 = ((undefined *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[4])), pvVar1 != (undefined *)0x0)) {
      F_00525140(pvVar1,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      if (*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) {
        return (*(uint * PTR32 *)&gen_args[1])[4];
      }
    }
  }
  return 0;
}

/* ref: FUN_005075b0 */
byte F_005075b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5075b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x70);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x74)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  F_00c46e20(piVar1,piVar1 + 1,(*(int *)((int)this + 0x74) - (int)(piVar1 + 1) >> 2) * 4);
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + -4;
  return 1;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandle::vf33 */
uint F_00507600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x507600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pGVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  
  uVar5 = param_2;
  if (param_2 == 1) {
    pGVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pGVar1;
    *(int *)pGVar1 = *(int *)pGVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      F_00b4dc80(this + 0xa8,uVar5);
      bVar4 = F_00b4dd30(this + 0xa8);
      if (bVar4 != 0) {
        return 0xfffffff6;
      }
      uVar3 = *(uint *)(this + 0xb0);
      if (uVar3 != 0) {
        uVar8 = -(uint)((int)((ulonglong)uVar3 * 0xd0 >> 0x20) != 0) |
                (uint)((ulonglong)uVar3 * 0xd0);
        puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar8) | uVar8 + 4,0,0);
        if (puVar6 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
          puVar9 = puVar6;
          while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
            F_00401500(puVar9,8,2,((code *)REFP(0x500540)));
            F_00401500(puVar9 + 4,0xc,0x10,((code *)REFP(0x500560)));
            puVar9 = puVar9 + 0x34;
          }
        }
        *(uint * PTR32 *)(this + 0x3c0) = puVar6;
        F_00504b90(this);
        F_00505b30(this,uVar5);
      }
      piVar7 = *(int * PTR32 *)(this + 0x98);
      if (piVar7 != (int *)0x0) {
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7)));
        ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_00507740 */
byte F_00507740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  
  F_00526ab0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 1) {
      if (*(int *)((*(int *)&gen_args[1]) + 0x10) != 0) {
        F_00406ad0(*(int *)((*(int *)&gen_args[1]) + 0x10));
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      F_005242f0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),iVar2);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_005077a0 */
uint F_005077a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5077a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005077b0 */
unsigned int F_005077b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5077b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  for (piVar3 = *(int * PTR32 *)this; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      F_00406ad0(*piVar3);
      *piVar3 = 0;
    }
  }
  iVar2 = *(int *)this;
  if (iVar2 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar2,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar2;
  }
  return 0;
}

/* ref: FUN_00507810 */
uint F_00507810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00526b50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]));
  if (*piVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00507840 */
uint F_00507840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x507840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x12e);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  piVar2 = &REFG(undefined4, 0x1098040);
  uVar3 = 0;
  while ((*piVar2 != param_1 || (piVar2[1] != *param_2))) {
    uVar3 = uVar3 + 0xc;
    piVar2 = piVar2 + 3;
    if (0xb3 < uVar3) {
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
      return (uint)this;
    }
  }
  *(int *)((int)this + 0x1c) = piVar2[2];
  return (uint)this;
}

/* ref: FUN_005078d0 */
uint F_005078d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5078d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4)));
  if (this_00 != (undefined *)0x0) {
    F_00526bc0(this_00,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if (*(int *)((int)this_00 + 4) != (*(int *)&gen_args[1])) {
      return *(uint *)((int)this_00 + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00507910 */
byte F_00507910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[1]);
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) +
                     ((uint)*(ushort *)((*(int *)&gen_args[1]) + 6) + (uint)*(ushort *)((*(int *)&gen_args[1]) + 4) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00526d10(pvVar1,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]) + 8);
    if ((*(int *)((int)pvVar1 + 4) != (*(int *)&gen_args[1])) &&
       (pvVar1 = *(undefined * PTR32 *)((*(int *)&gen_args[1]) + 0x10), pvVar1 != (undefined *)0x0)) {
      F_00526d80(pvVar1,&(*(int *)&gen_args[1]),iVar2 + 0xc);
      if (*(int *)((int)pvVar1 + 4) != (*(int *)&gen_args[1])) {
        F_00524e80(pvVar1,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00507980 */
uint F_00507980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x507980u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00526d10(pvVar1,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) &&
       (pvVar1 = ((undefined *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[4])), pvVar1 != (undefined *)0x0)) {
      F_00526d80(pvVar1,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      if (*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) {
        return (*(uint * PTR32 *)&gen_args[1])[4];
      }
    }
  }
  return 0;
}

/* ref: FUN_005079f0 */
unsigned int F_005079f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5079f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  code * pcVar11;
  int iVar12;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
  (*(int *)(gen_frame + 0x10)) = 0x14;
  do {
    (*(int * PTR32 *)(gen_frame + 0x18)) = this;
    (*(int *)(gen_frame + 0x14)) = 0x14;
    do {
      iVar12 = *(int *)this;
      (*(int * PTR32 *)(gen_frame + 0x18)) = this;
      if (iVar12 != 0) {
        puVar9 = *(undefined4 * PTR32 *)(iVar12 + 4);
        if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
          puVar6 = (undefined4 *)puVar9[1];
          do {
            if ((uint)puVar6[3] < *param_1) {
              puVar7 = (undefined4 *)puVar6[2];
            }
            else {
              puVar7 = (undefined4 *)*puVar6;
              puVar9 = puVar6;
            }
            puVar6 = puVar7;
          } while (*(char *)((int)puVar7 + 0x15) == '\0');
        }
        puVar6 = *(undefined4 * PTR32 *)(iVar12 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
        if ((puVar9 == puVar6) || (*param_1 < (uint)puVar9[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        else {
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        if ((puVar6 != *ppuVar10) && (iVar12 = (*ppuVar10)[4], iVar12 != 0)) {
          puVar9 = *(undefined4 * PTR32 *)(iVar12 + 4);
          puVar6 = (undefined4 *)*puVar9;
          while (puVar6 != puVar9) {
            piVar4 = (int *)puVar6[4];
            uVar8 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
            if ((char)uVar8 == '\0') {
              if (param_3 == 0) {
                pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                iVar12 = 0;
LAB_00507b17: ;
                (*pcVar11)(piVar4,param_2,iVar12);
              }
              else {
                piVar1 = piVar4 + 0x20;
                do {
                  LOCK();
                  iVar12 = *piVar1;
                  *piVar1 = 1;
                  UNLOCK();
                } while (iVar12 != 0);
                LOCK();
                *piVar1 = 0;
                UNLOCK();
                if ((piVar4[0xc] & 0xc000000U) == 0) {
                  piVar1 = piVar4 + 0x22;
                  LOCK();
                  iVar12 = *piVar1;
                  *piVar1 = *piVar1;
                  UNLOCK();
                  if (iVar12 == 2) {
                    piVar2 = piVar4 + 0x23;
                    LOCK();
                    iVar12 = *piVar2;
                    *piVar2 = *piVar2;
                    UNLOCK();
                    if (iVar12 == 7) {
                      LOCK();
                      iVar12 = *piVar1;
                      *piVar1 = *piVar1;
                      UNLOCK();
                      if (iVar12 != 3) {
                        pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                        iVar12 = param_3;
                        goto LAB_00507b17;
                      }
                    }
                  }
                }
              }
            }
            if (*(char *)((int)puVar6 + 0x15) == '\0') {
              puVar7 = (undefined4 *)puVar6[2];
              if (*(char *)((int)puVar7 + 0x15) == '\0') {
                cVar3 = *(char *)((int)*puVar7 + 0x15);
                puVar6 = puVar7;
                puVar7 = (undefined4 *)*puVar7;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)((int)*puVar7 + 0x15);
                  puVar6 = puVar7;
                  puVar7 = (undefined4 *)*puVar7;
                }
              }
              else {
                cVar3 = *(char *)((int)puVar6[1] + 0x15);
                puVar5 = (undefined4 *)puVar6[1];
                puVar7 = puVar6;
                while ((puVar6 = puVar5, cVar3 == '\0' && (puVar7 == (undefined4 *)puVar6[2]))) {
                  cVar3 = *(char *)((int)puVar6[1] + 0x15);
                  puVar5 = (undefined4 *)puVar6[1];
                  puVar7 = puVar6;
                }
              }
            }
          }
        }
      }
      this = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
      iVar12 = (*(int *)(gen_frame + 0x14)) + -1;
      (*(int *)(gen_frame + 0x14)) = iVar12;
      (*(int * PTR32 *)(gen_frame + 0x18)) = this;
    } while (iVar12 != 0);
    iVar12 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar12;
    if (iVar12 == 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
      return 0;
    }
  } while( true );
}

/* ref: FUN_00507ba0 */
unsigned int F_00507ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x507ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  code * pcVar11;
  int * piVar12;
  int iVar13;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
  piVar12 = (int *)(param_1 * 0x50 + (int)this);
  (*(int *)(gen_frame + 0x8)) = 0x14;
  do {
    iVar13 = *piVar12;
    if (iVar13 != 0) {
      puVar9 = *(undefined4 * PTR32 *)(iVar13 + 4);
      if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar9[1];
        do {
          if ((uint)puVar6[3] < *param_2) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar9 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      puVar6 = *(undefined4 * PTR32 *)(iVar13 + 4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar9;
      if ((puVar9 == puVar6) || (*param_2 < (uint)puVar9[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar6;
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
      }
      else {
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if ((puVar6 != *ppuVar10) && (iVar13 = (*ppuVar10)[4], iVar13 != 0)) {
        puVar9 = *(undefined4 * PTR32 *)(iVar13 + 4);
        puVar6 = (undefined4 *)*puVar9;
        while (puVar6 != puVar9) {
          piVar4 = (int *)puVar6[4];
          uVar8 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
          if ((char)uVar8 == '\0') {
            if (param_4 == 0) {
              pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
              iVar13 = 0;
LAB_00507cc7: ;
              (*pcVar11)(piVar4,param_3,iVar13);
            }
            else {
              piVar1 = piVar4 + 0x20;
              do {
                LOCK();
                iVar13 = *piVar1;
                *piVar1 = 1;
                UNLOCK();
              } while (iVar13 != 0);
              LOCK();
              *piVar1 = 0;
              UNLOCK();
              if ((piVar4[0xc] & 0xc000000U) == 0) {
                piVar1 = piVar4 + 0x22;
                LOCK();
                iVar13 = *piVar1;
                *piVar1 = *piVar1;
                UNLOCK();
                if (iVar13 == 2) {
                  piVar2 = piVar4 + 0x23;
                  LOCK();
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2;
                  UNLOCK();
                  if (iVar13 == 7) {
                    LOCK();
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1;
                    UNLOCK();
                    if (iVar13 != 3) {
                      pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                      iVar13 = param_4;
                      goto LAB_00507cc7;
                    }
                  }
                }
              }
            }
          }
          if (*(char *)((int)puVar6 + 0x15) == '\0') {
            puVar7 = (undefined4 *)puVar6[2];
            if (*(char *)((int)puVar7 + 0x15) == '\0') {
              cVar3 = *(char *)((int)*puVar7 + 0x15);
              puVar6 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
              while (cVar3 == '\0') {
                cVar3 = *(char *)((int)*puVar7 + 0x15);
                puVar6 = puVar7;
                puVar7 = (undefined4 *)*puVar7;
              }
            }
            else {
              cVar3 = *(char *)((int)puVar6[1] + 0x15);
              puVar5 = (undefined4 *)puVar6[1];
              puVar7 = puVar6;
              while ((puVar6 = puVar5, cVar3 == '\0' && (puVar7 == (undefined4 *)puVar6[2]))) {
                cVar3 = *(char *)((int)puVar6[1] + 0x15);
                puVar5 = (undefined4 *)puVar6[1];
                puVar7 = puVar6;
              }
            }
          }
        }
      }
    }
    piVar12 = piVar12 + 1;
    iVar13 = (*(int *)(gen_frame + 0x8)) + -1;
    (*(int *)(gen_frame + 0x8)) = iVar13;
    if (iVar13 == 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
      return 0;
    }
  } while( true );
}

/* ref: FUN_00507d50 */
uint F_00507d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x12e);
  *puVar1 = *(undefined4 *)((int)this + 0x14);
  puVar1[1] = *(undefined4 *)((int)this + 0x14);
  puVar1[2] = *(undefined4 *)((int)this + 0x14);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00526110((undefined *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00507db0 */
uint F_00507db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507db0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int * PTR32 * ppiVar8;
  
  F_00524ca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
  if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != (*(int * PTR32 *)(gen_frame + 0x8))) {
    piVar6 = (int *)F_00524a40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int * PTR32 *)(gen_frame + 0x8)),(*(int * PTR32 *)(gen_frame + 0x8)));
  }
  uVar5 = (uint)(*(int * PTR32 *)&gen_args[1]);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    piVar6 = ((int *)GEN_TOP(((int *)piVar3[5])[1]));
    cVar1 = *(char *)((int)piVar6 + 0x15);
    piVar4 = (int *)piVar3[5];
    while (cVar1 == '\0') {
      if ((uint)piVar6[3] < uVar5) {
        piVar7 = (int *)piVar6[2];
        piVar6 = piVar4;
      }
      else {
        piVar7 = (int *)*piVar6;
      }
      piVar4 = piVar6;
      piVar6 = piVar7;
      cVar1 = *(char *)((int)piVar7 + 0x15);
    }
    piVar6 = (int *)piVar3[5];
    (*(int * PTR32 *)&gen_args[1]) = piVar4;
    if ((piVar4 == piVar6) || (uVar5 < (uint)piVar4[3])) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
    }
    else {
      ppiVar8 = &(*(int * PTR32 *)&gen_args[1]);
    }
    if (piVar6 != *ppiVar8) {
      piVar6 = (int *)F_005247b0(piVar3 + 4,((undefined1 *)(gen_frame + 0x4)),*ppiVar8);
    }
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar6 = (int *)piVar3[2];
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = piVar6;
        piVar6 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x21);
          piVar3 = piVar6;
          piVar6 = (int *)*piVar6;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar6 = (int *)piVar3[1];
        piVar4 = piVar3;
        while ((piVar3 = piVar6, piVar6 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x21);
          piVar6 = (int *)piVar3[1];
          piVar4 = piVar3;
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00507ea0 */
unsigned int F_00507ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507ea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  piVar5 = (int *)F_00526ca0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != *piVar5) {
    puVar2 = *(undefined4 * PTR32 *)(*piVar5 + 0x14);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar5 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar5) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar4;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar4 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if ((puVar4 == puVar8) || (piVar5 < (int *)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar4 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar4, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar4 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00507f80 */
unsigned int F_00507f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507f80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  piVar5 = (int *)F_00526ca0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != *piVar5) {
    puVar2 = *(undefined4 * PTR32 *)(*piVar5 + 0x14);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar5 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar5) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar4;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar4 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if ((puVar4 == puVar8) || (piVar5 < (int *)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar4 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar4, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar4 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00508060 */
uint F_00508060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x508060u, gen_a0, gen_a1, 0u, 0u);
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
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (*(int * PTR32 *)(gen_frame + 0x4))) {
    piVar2 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[5];
    piVar3 = (int *)*piVar2;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
    while (piVar3 != piVar2) {
      iVar4 = piVar3[4];
      piVar5 = (int *)piVar3[3];
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
      if (iVar4 != 0) {
        piVar6 = (int *)F_00524ca0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10),&(*(int *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x4)));
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14) != (*(int *)(gen_frame + 0x0))) {
          while (0 < iVar4) {
            piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,(*(undefined4 *)&gen_args[1]))));
            piVar3[4] = piVar3[4] + -1;
            iVar4 = piVar3[4];
          }
        }
        piVar3[4] = 0;
      }
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        piVar6 = (int *)piVar3[2];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x15);
          piVar3 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x15);
            piVar3 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar6 = (int *)piVar3[1];
          piVar5 = piVar3;
          while ((piVar3 = piVar6, piVar6 = piVar3, cVar1 == '\0' && (piVar5 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x15);
            piVar6 = (int *)piVar3[1];
            piVar5 = piVar3;
          }
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00508150 */
unsigned int F_00508150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x508150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
    puVar2 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x8))[5];
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar4 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar4) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar5;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar5 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      if ((puVar5 == puVar8) || (piVar4 < (int *)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar5 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00508230 */
uint F_00508230(unsigned int gen_a0)
{
  GEN_ENTER(0x508230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099854));
  piVar2 = (int *)((int)this + 0x80);
  do {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
  } while (iVar1 != 0);
  if ((*(uint *)((int)this + 0x30) & 0xc000000) != 0) {
    F_004fad40((undefined *)((int)this + 0x30));
  }
  LOCK();
  *piVar2 = 0;
  UNLOCK();
  piVar2 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x78) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar3 = *(uint *)((int)this + 0x50);
  if (0xf < uVar3) {
    uVar4 = F_00429760(*(undefined4 *)((int)this + 0x3c),uVar3 + 1,0x32);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined1 *)((int)this + 0x3c) = 0;
  return uVar3;
}

/* ref: FUN_005082e0 */
uint F_005082e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5082e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508330 */
uint F_00508330(unsigned int gen_a0)
{
  GEN_ENTER(0x508330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508390 */
uint F_00508390(unsigned int gen_a0)
{
  GEN_ENTER(0x508390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_005083d0 */
uint F_005083d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5083d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099bec));
  F_00b4d860((undefined *)((int)this + 0xa0));
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508420 */
uint F_00508420(unsigned int gen_a0)
{
  GEN_ENTER(0x508420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099cdc));
  if (*(undefined * PTR32 *)((int)this + 0x3c0) != (undefined *)0x0) {
    F_00520630(*(undefined * PTR32 *)((int)this + 0x3c0),3);
    *(undefined4 *)((int)this + 0x3c0) = 0;
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  local_8 = 0xf;
  piVar1 = (int *)((int)this + 0x3c8);
  do {
    piVar3 = piVar1 + -3;
    piVar1[-5] = 0;
    if (piVar1[-4] != 0) {
      F_00406b30(piVar1[-4]);
      piVar1[-4] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    local_8 = local_8 + -1;
    piVar1 = piVar3;
  } while (-1 < local_8);
  local_8 = 1;
  puVar4 = (undefined4 *)((int)this + 0x300);
  do {
    piVar1 = (int *)puVar4[-1];
    puVar4[-2] = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      puVar4[-1] = 0;
    }
    local_8 = local_8 + -1;
    puVar4 = puVar4 + -2;
  } while (-1 < local_8);
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508500 */
uint F_00508500(unsigned int gen_a0)
{
  GEN_ENTER(0x508500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508540 */
uint F_00508540(unsigned int gen_a0)
{
  GEN_ENTER(0x508540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508580 */
uint F_00508580(unsigned int gen_a0)
{
  GEN_ENTER(0x508580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_005085c0 */
uint F_005085c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5085c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508600 */
uint F_00508600(unsigned int gen_a0)
{
  GEN_ENTER(0x508600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508640 */
uint F_00508640(unsigned int gen_a0)
{
  GEN_ENTER(0x508640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508680 */
uint F_00508680(unsigned int gen_a0)
{
  GEN_ENTER(0x508680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_005086c0 */
uint F_005086c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5086c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508700 */
uint F_00508700(unsigned int gen_a0)
{
  GEN_ENTER(0x508700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508740 */
uint F_00508740(unsigned int gen_a0)
{
  GEN_ENTER(0x508740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508780 */
uint F_00508780(unsigned int gen_a0)
{
  GEN_ENTER(0x508780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_005087c0 */
uint F_005087c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5087c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508a60 */
byte F_00508a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x508a60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_005269c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))),&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)))) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x18);
    (*(undefined4 * PTR32 *)&gen_args[1])[2] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x1c);
    (*(undefined4 * PTR32 *)&gen_args[1])[3] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x20);
    (*(undefined4 * PTR32 *)&gen_args[1])[4] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x24);
    (*(undefined4 * PTR32 *)&gen_args[1])[5] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x28);
    return 1;
  }
  return 0;
}

/* ref: FUN_00508ac0 */
uint F_00508ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x508ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099dfc));
  if (0xf < *(uint *)((int)this + 0xd8)) {
    F_00429760(*(undefined4 *)((int)this + 0xc4),*(uint *)((int)this + 0xd8) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  if (0xf < *(uint *)((int)this + 0xbc)) {
    F_00429760(*(undefined4 *)((int)this + 0xa8),*(uint *)((int)this + 0xbc) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508b70 */
uint F_00508b70(unsigned int gen_a0)
{
  GEN_ENTER(0x508b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099eb4));
  if (0xf < *(uint *)((int)this + 0x1cc)) {
    F_00429760(*(undefined4 *)((int)this + 0x1b8),*(uint *)((int)this + 0x1cc) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1cc) = 0xf;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  if (0xf < *(uint *)((int)this + 0x1b0)) {
    F_00429760(*(undefined4 *)((int)this + 0x19c),*(uint *)((int)this + 0x1b0) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1b0) = 0xf;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  if (0xf < *(uint *)((int)this + 0x194)) {
    F_00429760(*(undefined4 *)((int)this + 0x180),*(uint *)((int)this + 0x194) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x194) = 0xf;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined1 *)((int)this + 0x180) = 0;
  if (0xf < *(uint *)((int)this + 0x178)) {
    F_00429760(*(undefined4 *)((int)this + 0x164),*(uint *)((int)this + 0x178) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x178) = 0xf;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x164) = 0;
  if (0xf < *(uint *)((int)this + 0x15c)) {
    F_00429760(*(undefined4 *)((int)this + 0x148),*(uint *)((int)this + 0x15c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x15c) = 0xf;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined1 *)((int)this + 0x148) = 0;
  if (0xf < *(uint *)((int)this + 0x140)) {
    F_00429760(*(undefined4 *)((int)this + 300),*(uint *)((int)this + 0x140) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x140) = 0xf;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  if (0xf < *(uint *)((int)this + 0x124)) {
    F_00429760(*(undefined4 *)((int)this + 0x110),*(uint *)((int)this + 0x124) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x124) = 0xf;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 0x110) = 0;
  if (0xf < *(uint *)((int)this + 0x108)) {
    F_00429760(*(undefined4 *)((int)this + 0xf4),*(uint *)((int)this + 0x108) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x108) = 0xf;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0xf4) = 0;
  if (0xf < *(uint *)((int)this + 0xec)) {
    F_00429760(*(undefined4 *)((int)this + 0xd8),*(uint *)((int)this + 0xec) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xec) = 0xf;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined1 *)((int)this + 0xd8) = 0;
  if (0xf < *(uint *)((int)this + 0xd0)) {
    F_00429760(*(undefined4 *)((int)this + 0xbc),*(uint *)((int)this + 0xd0) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xd0) = 0xf;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  if (0xf < *(uint *)((int)this + 0xb4)) {
    F_00429760(*(undefined4 *)((int)this + 0xa0),*(uint *)((int)this + 0xb4) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xb4) = 0xf;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508dd0 */
uint F_00508dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x508dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508e10 */
uint F_00508e10(unsigned int gen_a0)
{
  GEN_ENTER(0x508e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099f6c));
  F_00b50640((undefined *)((int)this + 0xa0));
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508e60 */
uint F_00508e60(unsigned int gen_a0)
{
  GEN_ENTER(0x508e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508ea0 */
uint F_00508ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x508ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508ef0 */
uint F_00508ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x508ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508f30 */
uint F_00508f30(unsigned int gen_a0)
{
  GEN_ENTER(0x508f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508f70 */
uint F_00508f70(unsigned int gen_a0)
{
  GEN_ENTER(0x508f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508fb0 */
uint F_00508fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x508fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: FUN_00508ff0 */
uint F_00508ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x508ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

