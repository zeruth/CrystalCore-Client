#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI::Info::InfoProxyCommonlist::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00435ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x435ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x10)));
  bVar2 = (byte)(uVar1 >> 8) & 7;
  return (-(uint)((uVar1 & 0xf0000000) != 0x20000000) & 0xffffffc0) + 0x40 |
         (uint)(((byte)uVar1 & 0xf0) == 0x10) | ~(uVar1 >> 0x11) & 0x80 |
         -(uint)(*((char *)GEN_TOP((param_1 + 0x17))) != '\0') & 0x20 | (bVar2 != 4) - 1 & 0x10 |
         (bVar2 != 3) - 1 & 8 | (bVar2 != 2) - 1 & 4 | (bVar2 != 1) - 1 & 2;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00435b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x435b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,(uint)(byte)this[0x11]);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    local_8 = 0;
    if (param_2 != 0) {
      puVar6 = ((undefined4 *)GEN_TOP((param_1 + 0x10)));
      do {
        if (puVar6[-4] == 0 && puVar6[-3] == 0) break;
        iVar5 = *(int *)(this + 8);
        iVar1 = *(int *)(this + 0x18);
        *((undefined4 *)GEN_TOP((iVar1 + iVar5 * 0x48))) = puVar6[-4];
        *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar5 * 0x48))) = puVar6[-3];
        iVar5 = *(int *)(this + 8);
        iVar1 = *(int *)(this + 0x18);
        *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar5 * 0x48))) = puVar6[2];
        *((undefined4 *)GEN_TOP((iVar1 + 0xc + iVar5 * 0x48))) = puVar6[3];
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x10 + *(int *)(this + 8) * 0x48))) = *puVar6;
        *((undefined2 *)GEN_TOP((*(int *)(this + 0x18) + 0x14 + *(int *)(this + 8) * 0x48))) =
             *(undefined2 *)(this + 8);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x16 + *(int *)(this + 8) * 0x48))) =
             *(undefined1 *)(puVar6 + 1);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x17 + *(int *)(this + 8) * 0x48))) =
             *((undefined1 *)GEN_TOP(((int)puVar6 + 5)));
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x18 + *(int *)(this + 8) * 0x48))) =
             *((undefined1 *)GEN_TOP(((int)puVar6 + 6)));
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x1a + *(int *)(this + 8) * 0x48))) =
             *((undefined1 *)GEN_TOP(((int)puVar6 + 0x16)));
        puVar7 = ((undefined4 *)GEN_TOP(((int)puVar6 + 0x17)));
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c + *(int *)(this + 8) * 0x48)));
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x3c + *(int *)(this + 8) * 0x48)));
        *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar6 + 0x37)));
        *(undefined2 *)(puVar7 + 1) = *((undefined2 *)GEN_TOP(((int)puVar6 + 0x3b)));
        *((undefined1 *)GEN_TOP(((int)puVar7 + 6))) = *((undefined1 *)GEN_TOP(((int)puVar6 + 0x3d)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))
                  (this GEN_EDX_ARG,uVar3,uVar4,*(int *)(this + 8),
                   *(int *)(this + 0x18) + *(int *)(this + 8) * 0x48,puVar6 - 4);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        puVar6 = puVar6 + 0x14;
        local_8 = local_8 + 1;
      } while (local_8 < param_2);
    }
    uVar4 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar4) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
  }
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00435d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x435d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x11]);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar6 = 0;
    if (*(int *)(this + 8) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x18);
LAB_00435d90: ;
      if ((*piVar1 != *param_1) || (piVar1[1] != param_1[1])) goto LAB_00435d9f;
      uVar6 = uVar6 + 1;
      if (uVar6 < *(uint *)(this + 8)) {
        iVar4 = uVar6 * 0x48;
        do {
          puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar4)));
          puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar4))) - 0x12;
          for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,uVar2,uVar3,uVar6 - 1,uVar6);
          iVar4 = iVar4 + 0x48;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(this + 8));
      }
      *(int *)(this + 8) = *(int *)(this + 8) - 1;
    }
LAB_00435dff: ;
    uVar3 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar3;
LAB_00435d9f: ;
  uVar6 = uVar6 + 1;
  piVar1 = piVar1 + 0x12;
  if (*(uint *)(this + 8) <= uVar6) goto LAB_00435dff;
  goto LAB_00435d90;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00435e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x435e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x11]);
  if (((uVar2 != 0) && (uVar3 != 0)) && (piVar1 = *(int * PTR32 *)(this + 0x18), piVar1 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = 0;
    if (*(int *)(this + 8) != 0) {
LAB_00435e94: ;
      if ((*piVar1 != param_1) || (piVar1[1] != param_2)) goto LAB_00435ea3;
      uVar4 = uVar4 + 1;
      if (uVar4 < *(uint *)(this + 8)) {
        iVar5 = uVar4 * 0x48;
        do {
          puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar5)));
          puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar5))) - 0x12;
          for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,uVar2,uVar3,uVar4 - 1,uVar4);
          iVar5 = iVar5 + 0x48;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(this + 8));
      }
      *(int *)(this + 8) = *(int *)(this + 8) - 1;
    }
LAB_00435f0d: ;
    uVar3 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar3;
LAB_00435ea3: ;
  uVar4 = uVar4 + 1;
  piVar1 = piVar1 + 0x12;
  if (*(uint *)(this + 8) <= uVar4) goto LAB_00435f0d;
  goto LAB_00435e94;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00435f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x435f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 8) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) != *(int *)(this + 8))
    {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4))) = *(int *)(this + 8);
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00435f70 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00435f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x435f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  bool bVar9;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if (uVar4 != 0) {
    uVar4 = 0;
    if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
      iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
      pbVar7 = ((byte *)GEN_TOP((iVar2 + 0x1c)));
      pbVar6 = param_1;
      pbVar8 = pbVar7;
LAB_00435fb0: ;
      do {
        bVar1 = *pbVar7;
        bVar9 = bVar1 < *pbVar6;
        if (bVar1 == *pbVar6) {
          if (bVar1 != 0) {
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00435fd0;
            pbVar7 = pbVar7 + 2;
            pbVar6 = pbVar6 + 2;
            if (bVar1 != 0) goto LAB_00435fb0;
          }
          iVar5 = 0;
        }
        else {
LAB_00435fd0: ;
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (iVar5 == 0) {
          return CONCAT44(*((undefined4 *)GEN_TOP((iVar2 + 4 + uVar4 * 0x48))),
                          *((undefined4 *)GEN_TOP((iVar2 + uVar4 * 0x48))));
        }
        uVar4 = uVar4 + 1;
        pbVar7 = pbVar8 + 0x48;
        pbVar6 = param_1;
        pbVar8 = pbVar7;
      } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
    }
  }
  return 0;
}

/* ref: FUN_00436010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if (uVar3 != 0) {
    uVar3 = 0;
    if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
      pbVar6 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c)));
      pbVar5 = param_1;
      pbVar7 = pbVar6;
LAB_00436050: ;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 == *pbVar5) {
          if (bVar1 != 0) {
            bVar1 = pbVar6[1];
            bVar8 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00436070;
            pbVar6 = pbVar6 + 2;
            pbVar5 = pbVar5 + 2;
            if (bVar1 != 0) goto LAB_00436050;
          }
          iVar4 = 0;
        }
        else {
LAB_00436070: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (iVar4 == 0) {
          return *((int *)GEN_TOP(((int)this + 0x18))) + uVar3 * 0x48;
        }
        uVar3 = uVar3 + 1;
        pbVar6 = pbVar7 + 0x48;
        pbVar5 = param_1;
        pbVar7 = pbVar6;
      } while (uVar3 < *((uint *)GEN_TOP(((int)this + 8))));
    }
  }
  return 0;
}

/* ref: FUN_004360a0 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_004360a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4360a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    return CONCAT44(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4 + param_1 * 0x48))),
                    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 0x48))));
  }
  return 0;
}

/* ref: FUN_004360d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004360d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4360d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return *((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 0x48;
  }
  return 0;
}

/* ref: FUN_004360f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004360f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4360f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + (*(int *)(gen_frame + 0x8)))));
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        if (param_3 == 0) {
          return *((int *)GEN_TOP(((int)this + 0x18))) + uVar5 * 0x48;
        }
        piVar3 = piVar2 + 7;
        do {
          iVar1 = *piVar3;
          piVar3 = ((int *)GEN_TOP(((int)piVar3 + 1)));
        } while ((char)iVar1 != '\0');
        F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,piVar2 + 7,(int)piVar3 - ((int)piVar2 + 0x1d));
        uVar4 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        if (uVar4 == param_3) {
          iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
          F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          return iVar1 + uVar5 * 0x48;
        }
        F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x48;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_004361a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004361a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4361a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    do {
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0xffffffff;
}

/* ref: FUN_004361f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004361f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4361f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyDetail::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00436230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,9);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,8);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    F_00431250(uVar3 GEN_EDX_ARG,0x40,&REFG(undefined, 0x108d065),0,1,0);
    F_00431250(uVar3 GEN_EDX_ARG,0x3f,&REFG(undefined, 0x108d066),0,1,0);
    F_00431250(uVar3 GEN_EDX_ARG,0x41,&REFG(undefined, 0x108d067),0,1,0);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa0))) != -1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa0))) = 0xffffffff;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa4))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa8))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    iVar4 = 0xb8;
    do {
      if (*((int *)GEN_TOP((iVar4 - 0xc + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar4 - 0xc + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar4 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar4 - 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar4 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar4 - 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar4))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar4))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar4 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar4 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 < 0x130);
  }
  return 0;
}

/* ref: FUN_00436380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((byte *)GEN_TOP((in_ecx + 0x28))) != param_2) {
    *((byte *)GEN_TOP((in_ecx + 0x28))) = param_2;
    *((undefined1 *)GEN_TOP((in_ecx + 0x1ec))) = 1;
  }
  return param_2;
}

/* ref: FUN_004363a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004363a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4363a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((*((uint *)GEN_TOP(((int)this + 0x20))) != param_1) || (*((int *)GEN_TOP(((int)this + 0x24))) != param_2)) {
    *((uint *)GEN_TOP(((int)this + 0x20))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x24))) = param_2;
    *((undefined1 *)GEN_TOP(((int)this + 0x1ec))) = 1;
  }
  return param_1;
}

/* ref: FUN_004363d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004363d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4363d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((*((uint *)GEN_TOP(((int)this + 0x18))) != param_1) || (*((int *)GEN_TOP(((int)this + 0x1c))) != param_2)) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x1c))) = param_2;
    *((undefined1 *)GEN_TOP(((int)this + 0x1ec))) = 1;
  }
  return param_1;
}

/* ref: FUN_00436400 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 != 0) && (*((byte *)GEN_TOP((in_ecx + 0x29))) != param_2)) {
    *((byte *)GEN_TOP((in_ecx + 0x29))) = param_2;
    *((undefined1 *)GEN_TOP((in_ecx + 0x1ec))) = 1;
  }
  return param_2;
}

/* ref: FUN_00436420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x18;
}

/* ref: FUN_00436430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x436430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x27;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00771530(this_00 GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyFreeCompany::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_00436460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x436460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0x110000;
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x7b))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x7d))) = 3;
  *((undefined4 *)GEN_TOP((param_1 + 0x488))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x48c))) = 100;
  *((undefined2 *)GEN_TOP((param_1 + 0x40))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x7e))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x5a))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x5e))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x62))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x66))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x6a))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x6e))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x72))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x76))) = 0;
  return (uint)(F_00c48350(((undefined *)GEN_TOP((param_1 + 0x88))),0,0x400));
}

/* ref: FUN_004364f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004364f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4364f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return param_1;
}

/* ref: FUN_00436510 */
GEN_OWN GEN_NOFRAME unsigned int F_00436510(void)
{
  GEN_ENTER(0x436510u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00436520 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00436520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00436540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_008a0070(uVar2 GEN_EDX_ARG,param_1 == 0,1);
  }
  return uVar1;
}

/* ref: FUN_00436580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_008a0070(uVar2 GEN_EDX_ARG,1,0);
  }
  return uVar1;
}

/* ref: FUN_004365b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004365b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4365b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_008a00b0(uVar2 GEN_EDX_ARG,param_1 == 0,1);
  }
  return uVar1;
}

/* ref: FUN_004365f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004365f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4365f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_008a00b0(uVar2 GEN_EDX_ARG,1,0);
  }
  return uVar1;
}

/* ref: FUN_00436620 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00436620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x3f;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    uVar1 = F_00763050(uVar1 GEN_EDX_ARG,uVar2);
    if (uVar1 != 0) {
      F_008a0250(uVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00436650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_008a0250(uVar2 GEN_EDX_ARG,0);
  }
  return uVar1;
}

/* ref: FUN_00436680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  uVar3 = 0x27;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    F_00771600(pvVar2 GEN_EDX_ARG,param_1);
  }
  uVar3 = 0x41;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  uVar1 = 0;
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0077e890(pvVar2 GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004366d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004366d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4366d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_007e1c50(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00436700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_007e1c90(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00436730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = ((undefined1 *)GEN_TOP((param_1 + 10)));
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x90)));
  iVar4 = 0x10;
  do {
    *(undefined4 *)(puVar3 - 4) = *(undefined4 *)(puVar1 - 10);
    *(undefined4 *)(puVar3 - 2) = *(undefined4 *)(puVar1 - 6);
    *puVar3 = *(undefined2 *)(puVar1 - 2);
    *(undefined1 *)(puVar3 + 1) = *puVar1;
    puVar1 = puVar1 + 0x10;
    puVar3 = puVar3 + 0x20;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  uVar5 = 0x3f;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar5)));
  uVar2 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_007e1340(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_004367a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004367a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4367a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_007e1cd0(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_004367d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004367d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4367d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_007e1d00(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00436800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00436800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0x3f;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_0077cb00(this_00 GEN_EDX_ARG,param_1);
    }
  }
  return;
}

/* ref: FUN_00436830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_008d7450(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00436870 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x31)));
}

/* ref: FUN_00436880 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: FUN_00436890 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x32))) == '\0';
}

/* ref: FUN_004368a0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004368a0(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4368a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  return (byte)(param_1 - 3U) < 0xc;
}

/* ref: FUN_004368c0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_004368c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4368c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((byte *)GEN_TOP(((int)this + 0x30))) < 3) {
    return 0;
  }
  return *((ulonglong *)GEN_TOP(((int)this + 0x20)));
}

/* ref: FUN_004368e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004368e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4368e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  F_0042e430(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 < 0x16) {
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c46aa0(((undefined4 *)GEN_TOP(((int)this + 0x44))),uVar2,uVar1);
  }
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00436970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x44;
}

/* ref: FUN_00436990 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x32)));
}

/* ref: FUN_004369a0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_004369a0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4369a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if ((param_1 != ((char *)GEN_TOP(0x0))) && (*param_1 == ' ')) {
    uVar2 = 10;
    uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 1,REFG(undefined4, 0x108cc50));
    uVar1 = F_00a4cf70(uVar1,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (byte)uVar1;
  }
  return 0x11;
}

/* ref: FUN_00436a10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x33)));
}

/* ref: FUN_00436a40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436a40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte * pbVar1;
  byte bVar2;
  
  bVar2 = param_2;
  if (param_2 == 0) {
    bVar2 = *((byte *)GEN_TOP((param_1 + 0x33)));
  }
  pbVar1 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
  if (pbVar1 != ((byte *)GEN_TOP(0x0))) {
    return 1 - (bVar2 < *pbVar1);
  }
  return 1 - (bVar2 == 0);
}

/* ref: FUN_00436a80 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00436a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *((ulonglong *)GEN_TOP(((int)this + 0x38)));
}

/* ref: FUN_00436a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 0x10) {
    return (uint)param_2 * 0x40 + 0x88 + in_ecx;
  }
  return 0;
}

/* ref: FUN_00436ad0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00436ad0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x436ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint * puVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (param_1 == ((char *)GEN_TOP(0x0))) {
    return 0x108d082;
  }
  if (*param_1 == ' ') {
    uVar3 = 10;
    uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 1,REFG(undefined4, 0x108cc50));
    uVar1 = F_00a4cf70(uVar1,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if ((char)uVar1 != '\x11') {
      puVar2 = ((uint *)GEN_TOP(F_00ab4160(uVar1 & 0xff)));
      if (puVar2 == ((uint *)GEN_TOP(0x0))) {
        return 0x108d083;
      }
      return (*puVar2 & 0xffffff) + (int)puVar2;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00436b90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00436b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x7a))) == '\x01';
}

/* ref: FUN_00436ba0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = (byte)param_1;
  if ((byte)param_1 == 0) {
    bVar5 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  bVar1 = bVar5;
  if (bVar5 == 0) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
  if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
    bVar2 = 1;
  }
  else {
    bVar2 = *pbVar3;
  }
  if (bVar2 <= bVar1) {
    pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
    if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
      bVar5 = 1;
    }
    else {
      bVar5 = *pbVar3;
    }
  }
  uVar4 = F_00ab4190((uint)bVar5);
  if (uVar4 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((uVar4 + 0xe)));
}

/* ref: FUN_00436c10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = (byte)param_1;
  if ((byte)param_1 == 0) {
    bVar5 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  bVar1 = bVar5;
  if (bVar5 == 0) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
  if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
    bVar2 = 1;
  }
  else {
    bVar2 = *pbVar3;
  }
  if (bVar2 <= bVar1) {
    pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
    if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
      bVar5 = 1;
    }
    else {
      bVar5 = *pbVar3;
    }
  }
  uVar4 = F_00ab4190((uint)bVar5);
  if (uVar4 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((uVar4 + 0xf)));
}

/* ref: FUN_00436c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = (byte)param_1;
  if ((byte)param_1 == 0) {
    bVar5 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  bVar1 = bVar5;
  if (bVar5 == 0) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x33)));
  }
  pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
  if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
    bVar2 = 1;
  }
  else {
    bVar2 = *pbVar3;
  }
  if (bVar2 <= bVar1) {
    pbVar3 = ((byte *)GEN_TOP(F_00ab4340(0xb)));
    if (pbVar3 == ((byte *)GEN_TOP(0x0))) {
      bVar5 = 1;
    }
    else {
      bVar5 = *pbVar3;
    }
  }
  uVar4 = F_00ab4190((uint)bVar5);
  if (uVar4 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((uVar4 + 0x10)));
}

/* ref: FUN_00436cf0 */
GEN_OWN GEN_FRAME uint F_00436cf0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  ulonglong uStackY_14;
  
  uVar1 = F_00ab41c0((uint)param_2);
  if (uVar1 == 0) {
    return param_1;
  }
  uStackY_14 = (ulonglong)*((byte *)GEN_TOP((uVar1 + 0x10)));
  return (uint)((uStackY_14 * param_1) / 100);
}

/* ref: FUN_00436d30 */
GEN_OWN GEN_FRAME byte F_00436d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x436d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  if (((uint)(((ulonglong)(((ulonglong)param_3 < 0x40) ? ((CONCAT44(param_2,param_1) >> (ulonglong)param_3)) : 0))) & 1) != 1) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00436d60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436d60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar1 = 0;
  do {
    uVar2 = F_00ab4190(iVar5);
    if (uVar2 != 0) {
      puVar3 = ((ushort *)GEN_TOP((uVar2 + 8)));
      iVar4 = 0;
      do {
        if (*puVar3 == (ushort)param_2) {
          bVar1 = 1;
          break;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 3);
    }
    iVar5 = iVar5 + 1;
    if ((int)(uint)*((byte *)GEN_TOP((param_1 + 0x33))) < iVar5) {
      return bVar1;
    }
  } while( true );
}

/* ref: FUN_00436dc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x7c))) = param_2;
  return param_2;
}

/* ref: FUN_00436dd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x7d))) = param_2;
  return param_2;
}

/* ref: FUN_00436de0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00436de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x7e))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00436df0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00436df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x436df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_00436e00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00436e00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x436e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 1) {
    uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x74,0,0);
  }
  else {
    if (uVar1 == 2) {
      uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x75,0,0);
      return uVar1;
    }
    uVar1 = uVar1 - 4;
    if (uVar1 == 0) {
      uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x76,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00436e50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00436e50(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x436e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = F_00ab4190((uint)param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar3 = ((ushort *)GEN_TOP((uVar1 + 8)));
    iVar4 = 3;
    do {
      uVar2 = (uint)*puVar3;
      if (*puVar3 != 0) {
        if (uVar2 == 1) {
          uVar5 = 0x74;
        }
        else if (uVar2 == 2) {
          uVar5 = 0x75;
        }
        else {
          uVar2 = uVar2 - 4;
          if (uVar2 != 0) goto LAB_00436ea1;
          uVar5 = 0x76;
        }
        uVar2 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar5,0,0);
      }
LAB_00436ea1: ;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_00436eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0x38)));
  }
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00436ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar1 + 0x3c)));
  }
  return *((uint *)GEN_TOP(((int)this + 0x10)));
}

/* ref: FUN_00436ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00436ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x436ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((uVar1 + 0x40)));
  }
  return *((uint *)GEN_TOP(((int)this + 0x14)));
}

/* ref: FUN_00436f10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00436f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  F_0042e430(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 < 0x20) {
    *((undefined4 *)GEN_TOP(((int)this + 0x5a))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x5e))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x62))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x66))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x6a))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x6e))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x72))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x76))) = 0;
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c46aa0(((undefined4 *)GEN_TOP(((int)this + 0x5a))),uVar2,uVar1);
  }
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00436fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00436fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x436fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_0042b630((int)this + 0x1c GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10907cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x10907c4));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x78))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x80))),0,0x38);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0xb8))),0,0xa8);
  return (uint)this;
}

/* ref: FUN_00437020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x437020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10907cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x10907c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyCreate::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x437050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (undefined1)0x0;
  F_00c48350(this + 0x80,0,0x38);
  pvVar1 = F_00c48350(this + 0xb8,0,0xa8);
  return (uint)pvVar1;
}

/* ref: FUN_00437090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x437090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x80;
}

/* ref: FUN_004370a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004370a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4370a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 3) {
    return param_1 + 0xb8 + (uint)param_2 * 0x38;
  }
  return 0;
}

/* ref: FUN_004370e0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_004370e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4370e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *((ulonglong *)GEN_TOP(((int)this + 0x70)));
}

/* ref: FUN_004370f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004370f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4370f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,&REFG(undefined, 0x108d09b));
  uVar3 = 3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  F_00771220(pvVar2 GEN_EDX_ARG);
  uVar3 = 0x40;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  pvVar2 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0077e2e0(pvVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00437150 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00437150(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x437150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00437160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00437160(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x437160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 * puVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int * this;
  byte * pbVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP((param_1 + 0x94)));
  pbVar5 = param_2;
  do {
    bVar6 = *pbVar2;
    bVar7 = bVar6 < *pbVar5;
    if (bVar6 != *pbVar5) {
LAB_004371a0: ;
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004371a5;
    }
    if (bVar6 == 0) break;
    bVar6 = pbVar2[1];
    bVar7 = bVar6 < pbVar5[1];
    if (bVar6 != pbVar5[1]) goto LAB_004371a0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar6 != 0);
  iVar3 = 0;
LAB_004371a5: ;
  if (iVar3 == 0) {
    if (param_3 == '\0') {
      *((uint *)GEN_TOP((param_1 + 0x8c))) = *((uint *)GEN_TOP((param_1 + 0x8c))) & 0xfffffff7;
      *((undefined4 *)GEN_TOP((param_1 + 0x88))) = *((undefined4 *)GEN_TOP((param_1 + 0x88)));
    }
    else {
      *((uint *)GEN_TOP((param_1 + 0x8c))) = *((uint *)GEN_TOP((param_1 + 0x8c))) | 8;
      *((undefined4 *)GEN_TOP((param_1 + 0x88))) = *((undefined4 *)GEN_TOP((param_1 + 0x88)));
    }
  }
  else {
    uVar4 = 0;
    do {
      pbVar2 = ((byte *)GEN_TOP((param_1 + 0xcc + uVar4 * 0x38)));
      pbVar5 = param_2;
      do {
        bVar6 = *pbVar2;
        bVar7 = bVar6 < *pbVar5;
        if (bVar6 != *pbVar5) {
LAB_00437215: ;
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0043721a;
        }
        if (bVar6 == 0) break;
        bVar6 = pbVar2[1];
        bVar7 = bVar6 < pbVar5[1];
        if (bVar6 != pbVar5[1]) goto LAB_00437215;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar6 != 0);
      iVar3 = 0;
LAB_0043721a: ;
      if (iVar3 == 0) {
        puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0xc0 + uVar4 * 0x38)));
        *puVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xc0 + uVar4 * 0x38)));
        if (param_3 == '\0') {
          puVar1[1] = puVar1[1] & 0xfffffff7;
        }
        else {
          puVar1[1] = puVar1[1] | 8;
        }
        break;
      }
      bVar6 = (char)uVar4 + 1;
      uVar4 = (uint)bVar6;
    } while (bVar6 < 3);
  }
  uVar8 = 0x40;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
  this = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar8)));
  if ((this != ((int *)GEN_TOP(0x0))) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG), (char)uVar4 != '\0')) {
    F_0082b9b0(this GEN_EDX_ARG,param_1 + 0x80,param_1 + 0xb8);
  }
  return 1;
}

/* ref: FUN_00437300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00437300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x437300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  bVar1 = 0;
  while ((*((int *)GEN_TOP(((int)this + (char)bVar1 * 0x38 + 0xb8))) != param_1 ||
         (*((int *)GEN_TOP(((int)this + (char)bVar1 * 0x38 + 0xbc))) != param_2))) {
    bVar1 = bVar1 + 1;
    if ('\x02' < (char)bVar1) {
LAB_0043739f: ;
      if (*((char *)GEN_TOP(((int)this + 0x78))) != '\0') {
        *((char *)GEN_TOP(((int)this + 0x78))) = *((char *)GEN_TOP(((int)this + 0x78))) - 1;
      }
      return 1;
    }
  }
  if (-1 < (char)bVar1) {
    if (bVar1 < 2) {
      puVar3 = ((undefined4 *)GEN_TOP(((int)this + (uint)bVar1 * 0x38 + 0xf0)));
      puVar4 = ((undefined4 *)GEN_TOP(((int)this + (uint)bVar1 * 0x38 + 0xb8)));
      for (uVar2 = (uint)(byte)(2 - bVar1) * 0x38 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    if (*((byte *)GEN_TOP(((int)this + 0x78))) != 0) {
      F_00c48350(((undefined *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0x78))) * 0x38 + 0x80))),0,0x38);
    }
  }
  goto LAB_0043739f;
}

/* ref: FUN_004373c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004373c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4373c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  int * this_01;
  undefined * puVar2;
  undefined4 uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  if ((*((int *)GEN_TOP((uVar1 + 0x34))) == 0) ||
     (puVar2 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x34))) + 0x44))), puVar2 == ((undefined *)GEN_TOP(0x0)))) {
    puVar2 = &REFG(undefined, 0x108d0c5);
  }
  F_00437300(this GEN_EDX_ARG,param_1,param_2,param_3);
  uVar3 = 3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00771260(this_00 GEN_EDX_ARG,puVar2,(uint)*((byte *)GEN_TOP(((int)this + 0x78))));
  }
  uVar3 = 0x40;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_01 = ((int *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  uVar1 = 0;
  if (this_01 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_01 + 0x10))))(this_01 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar1 = F_0082b9b0(this_01 GEN_EDX_ARG,(int)this + 0x80,(int)this + 0xb8);
    }
  }
  return uVar1;
}

/* ref: FUN_00437460 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x437460u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  int * piVar2;
  undefined4 uVar3;
  
  uVar3 = 3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00771380(this_00 GEN_EDX_ARG);
  }
  uVar3 = 0x40;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  piVar2 = ((int *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyInvite::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004374b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4374b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  
  F_00431250(param_2 GEN_EDX_FWD,param_3,param_4 + 0x10,0,1,0);
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x5b,0,0);
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyInvite::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004374e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4374e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00431250(param_2 GEN_EDX_FWD,param_3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_3 * 4))),0
                       ,1,0);
  return uVar1;
}

/* ref: FUN_00437510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x437510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0x640;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xc82427;
  uVar1 = F_00406bb0(0x3840,0,0);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10907ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 1;
  return (uint)this;
}

/* ref: FUN_00437590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x437590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004375c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4375c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x27);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x190c))) != 2)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x190c))) = 2;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00437600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x437600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return param_1;
}

/* ref: FUN_00437620 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00437620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x437620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2e))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00437630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x437630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  if (param_1 != 0 || param_2 != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar6 = 0;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
      if (uVar3 != 0) {
        iVar5 = 0;
        do {
          if (((uVar6 < *((uint *)GEN_TOP(((int)this + 8)))) &&
              (iVar4 = *((int *)GEN_TOP(((int)this + 0x18))) + iVar5, iVar4 != 0)) &&
             ((*((uint *)GEN_TOP((iVar4 + 0x10))) & 0xff000) == 0)) {
            *((uint *)GEN_TOP((iVar4 + 0x10))) = *((uint *)GEN_TOP((iVar4 + 0x10))) & 0xfff02fff | 0x2000;
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1910 + uVar6 * 4))) != 2) {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1910 + uVar6 * 4))) = 2;
              *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 0x48;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
        } while (uVar6 < uVar3);
      }
      uVar7 = 0;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
      uVar3 = 0;
      if (uVar6 != 0) {
        iVar5 = 0;
        while (((*((uint *)GEN_TOP(((int)this + 8))) <= uVar7 ||
                (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar5))), piVar1 == ((int *)GEN_TOP(0x0)))) ||
               ((*piVar1 != param_1 || (piVar1[1] != param_2))))) {
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0x48;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
          if (uVar3 <= uVar7) {
            return uVar3;
          }
        }
        piVar1[4] = piVar1[4] & 0xfff00fff;
        uVar3 = (uint)piVar1[4] >> 0xc & 0xff;
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1910 + uVar7 * 4))) != uVar3) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1910 + uVar7 * 4))) = uVar3;
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00437760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437760(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x437760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int local_8;
  
  uVar8 = 0;
  if ((param_2 != ((byte *)GEN_TOP(0x0))) && (param_3 < 0x10)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,(uint)*(byte *)(param_1 + 4));
    in_EAX = 0;
    if (uVar3 != 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
      in_EAX = 0;
      if (uVar4 != 0) {
        local_8 = 0;
        do {
          if ((uVar8 < (uint)param_1[2]) && (iVar9 = param_1[6] + local_8, iVar9 != 0)) {
            pbVar5 = ((byte *)GEN_TOP((iVar9 + 0x1c)));
            pbVar7 = param_2;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_004377f0: ;
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_004377f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_004377f0;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_004377f5: ;
            if (iVar6 == 0) {
              uVar4 = (uint)param_3;
              *((uint *)GEN_TOP((iVar9 + 0x10))) = uVar4 << 0xc | *((uint *)GEN_TOP((iVar9 + 0x10))) & 0xfff00fff;
              if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1910 + uVar8 * 4))) == uVar4) {
                return uVar4;
              }
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1910 + uVar8 * 4))) = uVar4;
              *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
              return uVar4;
            }
          }
          local_8 = local_8 + 0x48;
          uVar8 = uVar8 + 1;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
          if (uVar4 <= uVar8) {
            return uVar4;
          }
        } while( true );
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00437860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437860(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x437860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int local_8;
  
  if (param_2 < 0x10) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)*(byte *)(param_1 + 4));
    in_EAX = 0;
    if (uVar2 != 0) {
      local_10 = 0;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
      in_EAX = 0;
      if (uVar3 != 0) {
        local_8 = 0;
        iVar4 = 0x1910;
        do {
          if (((local_10 < (uint)param_1[2]) && (iVar5 = param_1[6] + local_8, iVar5 != 0)) &&
             ((byte)(*((uint *)GEN_TOP((iVar5 + 0x10))) >> 0xc) == param_2)) {
            *((uint *)GEN_TOP((iVar5 + 0x10))) = *((uint *)GEN_TOP((iVar5 + 0x10))) & 0xfff02fff | 0x2000;
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar4))) != 2) {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar4))) = 2;
              *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
            }
          }
          local_8 = local_8 + 0x48;
          local_10 = local_10 + 1;
          iVar4 = iVar4 + 4;
          in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
        } while (local_10 < in_EAX);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00437920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00437920(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x437920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_8;
  
  uVar6 = 0;
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD);
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      if ((uVar6 < (uint)param_1[2]) && (iVar7 = param_1[6] + local_8, iVar7 != 0)) {
        pbVar3 = ((byte *)GEN_TOP((iVar7 + 0x1c)));
        pbVar5 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00437980: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00437985;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00437980;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00437985: ;
        if (iVar4 == 0) {
          if (param_3 != '\0') {
            *((uint *)GEN_TOP((iVar7 + 0xc))) = *((uint *)GEN_TOP((iVar7 + 0xc))) | 8;
            *((undefined4 *)GEN_TOP((iVar7 + 8))) = *((undefined4 *)GEN_TOP((iVar7 + 8)));
            return 1;
          }
          *((uint *)GEN_TOP((iVar7 + 0xc))) = *((uint *)GEN_TOP((iVar7 + 0xc))) & 0xfffffff7;
          *((undefined4 *)GEN_TOP((iVar7 + 8))) = *((undefined4 *)GEN_TOP((iVar7 + 8)));
          return 1;
        }
      }
      local_8 = local_8 + 0x48;
      uVar6 = uVar6 + 1;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
    } while (uVar6 < uVar2);
  }
  return 0;
}

/* ref: FUN_004379e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004379e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4379e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
    do {
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0xffffffff;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x437a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  int iVar2;
  
  F_00435940((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((uVar1 + 0x1910 + param_4 * 4)));
  if (*((int *)GEN_TOP((uVar1 + 0x1910 + param_3 * 4))) != iVar2) {
    *((int *)GEN_TOP((uVar1 + 0x1910 + param_3 * 4))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00437a70 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00437a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x437a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != ((char *)GEN_TOP(0x0))) && (*param_1 != '\0')) {
    uVar4 = 0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD);
    if (uVar1 != 0) {
      iVar3 = 0;
      do {
        iVar2 = F_00c4b813(((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c + iVar3))),param_1,0x20);
        if (iVar2 == 0) {
          return CONCAT44(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4 + uVar4 * 0x48))),
                          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + uVar4 * 0x48))));
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x48;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
      } while (uVar4 < uVar1);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00437af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x437af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0x640;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xc80f11;
  uVar1 = F_00406bb0(0x3840,0,0);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  F_0042b630((int)this + 0x30 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x88))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109082c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x1090824));
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x437b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 4 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 4 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 4 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 8 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 8 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 8 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0xc + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 0xc + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 0xc + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x10 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 0x10 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 0x10 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x14 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 0x14 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 0x14 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x18 + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 0x18 + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 0x18 + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x1c + param_4 * 0x20)));
  if (*((int *)GEN_TOP((iVar1 + 0x1c + param_3 * 0x20))) != iVar2) {
    *((int *)GEN_TOP((iVar1 + 0x1c + param_3 * 0x20))) = iVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
  }
  F_00431250(param_2 GEN_EDX_FWD,param_3 * 5 + 1,
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_4 * 0x14))),0,1,0);
  F_00431250(param_2 GEN_EDX_ARG,param_3 * 5 + 3,
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc + param_4 * 0x14))),0,1,0);
  uVar3 = F_00431250(param_2 GEN_EDX_ARG,param_3 * 5 + 4,
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10 + param_4 * 0x14))),0,1,0);
  return uVar3;
}

/* ref: FUN_00437cb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00437cb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x437cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00436010(param_1 GEN_EDX_FWD,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_3 == '\0') {
    if (((byte)*((undefined4 *)GEN_TOP((uVar1 + 0x10))) & 0xf0) != 0x10) {
      return 0;
    }
  }
  else if (((byte)*((undefined4 *)GEN_TOP((uVar1 + 0x10))) & 0xf0) == 0x40) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00437cf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00437cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x437cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    do {
      if ((((*piVar1 == param_1) && (piVar1[1] == param_2)) && ((piVar1[4] & 0x1000000U) == 0)) &&
         (((byte)piVar1[4] & 0xf0) == 0x10)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00437d50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00437d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x437d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x84)));
}

/* ref: FUN_00437d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x437d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (*((char *)GEN_TOP(((int)this + 0x89))) != '\0') {
LAB_00437dbd: ;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      return uVar6;
    }
    uVar9 = 0x2a;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar9)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
      if ((char)uVar7 != '\0') {
        uVar7 = F_0077a8a0(piVar4 GEN_EDX_ARG);
        if (uVar7 == 1) goto LAB_00437dbd;
      }
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined4 *)GEN_TOP((iVar3 + iVar2 * 0x48))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar2 * 0x48))) = 0;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0x20;
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar2 * 0x48))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc + iVar2 * 0x48))) = 8;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x16 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) =
         (short)*((int *)GEN_TOP(((int)this + 8)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x17 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x18 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1a + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c + *((int *)GEN_TOP(((int)this + 8))) * 0x48,param_1,
               pcVar8 + (1 - (int)(param_1 + 1)));
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (iVar2 * 8 + 7) * 4)));
    if (*piVar4 != 0x80) {
      *piVar4 = 0x80;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18))) + 0x1c + *((int *)GEN_TOP(((int)this + 8))) * 0x48;
    if (iVar3 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + iVar2 * 0x14)))) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
    }
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + iVar2 * 0x14))) = iVar3;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) != uVar6) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) = uVar6;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
  }
  return uVar6;
}

/* ref: FUN_00437f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00437f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x437f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (*((char *)GEN_TOP(((int)this + 0x89))) != '\0') {
LAB_00437f6d: ;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      return uVar6;
    }
    uVar9 = 0x2a;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar9)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
      if ((char)uVar7 != '\0') {
        uVar7 = F_0077a8a0(piVar4 GEN_EDX_ARG);
        if (uVar7 == 1) goto LAB_00437f6d;
      }
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined4 *)GEN_TOP((iVar3 + iVar2 * 0x48))) = param_2;
    *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar2 * 0x48))) = param_3;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0x30;
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar2 * 0x48))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc + iVar2 * 0x48))) = 8;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x16 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) =
         (short)*((int *)GEN_TOP(((int)this + 8)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x17 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x18 + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1a + *((int *)GEN_TOP(((int)this + 8))) * 0x48))) = 0;
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c + *((int *)GEN_TOP(((int)this + 8))) * 0x48,param_1,
               pcVar8 + (1 - (int)(param_1 + 1)));
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (iVar2 * 8 + 7) * 4)));
    if (*piVar4 != 0x80) {
      *piVar4 = 0x80;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x18))) + 0x1c + *((int *)GEN_TOP(((int)this + 8))) * 0x48;
    if (iVar3 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + iVar2 * 0x14)))) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
    }
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + iVar2 * 0x14))) = iVar3;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) != uVar6) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) = uVar6;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
  }
  return uVar6;
}

/* ref: FUN_004380d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004380d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4380d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  bool bVar10;
  undefined4 uVar11;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if ((uVar4 == 0) || (uVar5 == 0)) {
    return uVar5;
  }
  if (*((char *)GEN_TOP(((int)this + 0x89))) == '\0') {
    uVar11 = 0x2a;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar11)));
    if (((piVar3 == ((int *)GEN_TOP(0x0))) ||
        (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG), (char)uVar5 == '\0')) ||
       (uVar5 = F_0077a8a0(piVar3 GEN_EDX_ARG), uVar5 != 1)) {
      uVar5 = 0;
      if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
        pbVar8 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c)));
        pbVar7 = param_1;
        pbVar9 = pbVar8;
LAB_00438185: ;
        do {
          bVar2 = *pbVar8;
          bVar10 = bVar2 < *pbVar7;
          if (bVar2 == *pbVar7) {
            if (bVar2 != 0) {
              bVar2 = pbVar8[1];
              bVar10 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_004381a5;
              pbVar8 = pbVar8 + 2;
              pbVar7 = pbVar7 + 2;
              if (bVar2 != 0) goto LAB_00438185;
            }
            iVar6 = 0;
          }
          else {
LAB_004381a5: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar6 == 0) {
            if (param_2 != 0 || param_3 != 0) {
              iVar6 = *((int *)GEN_TOP(((int)this + 0x18)));
              *((int *)GEN_TOP((iVar6 + uVar5 * 0x48))) = param_2;
              *((int *)GEN_TOP((iVar6 + 4 + uVar5 * 0x48))) = param_3;
            }
            piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + uVar5 * 0x48)));
            if (*piVar3 != 0 || piVar3[1] != 0) {
              piVar3[4] = 0x10;
              *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
              iVar6 = uVar5 * 8 + 7;
              puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar6 * 4)));
              if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar6 * 4))) == 0x81) {
                return (uint)puVar1;
              }
              *puVar1 = 0x81;
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
              return (uint)puVar1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          pbVar8 = pbVar9 + 0x48;
          pbVar7 = param_1;
          pbVar9 = pbVar8;
        } while (uVar5 < *((uint *)GEN_TOP(((int)this + 8))));
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      return uVar4;
    }
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00438230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte * pbVar8;
  undefined4 * puVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined4 * puVar12;
  bool bVar13;
  undefined4 uVar14;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  if ((uVar3 == 0) || (uVar4 == 0)) {
    return uVar4;
  }
  if (*((char *)GEN_TOP(((int)this + 0x89))) == '\0') {
    uVar14 = 0x2a;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar14)));
    if (((piVar2 == ((int *)GEN_TOP(0x0))) ||
        (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) ||
       (uVar5 = F_0077a8a0(piVar2 GEN_EDX_ARG), uVar5 != 1)) {
      uVar5 = 0;
      if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
        pbVar10 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x1c)));
        pbVar8 = param_1;
        pbVar11 = pbVar10;
LAB_004382e5: ;
        do {
          bVar1 = *pbVar10;
          bVar13 = bVar1 < *pbVar8;
          if (bVar1 == *pbVar8) {
            if (bVar1 != 0) {
              bVar1 = pbVar10[1];
              bVar13 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_00438305;
              pbVar10 = pbVar10 + 2;
              pbVar8 = pbVar8 + 2;
              if (bVar1 != 0) goto LAB_004382e5;
            }
            iVar6 = 0;
          }
          else {
LAB_00438305: ;
            iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          }
          if (iVar6 == 0) {
            if (((byte)*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10 + uVar5 * 0x48))) & 0xf0) !=
                0x10) {
              uVar5 = uVar5 + 1;
              if (uVar5 < *((uint *)GEN_TOP(((int)this + 8)))) {
                iVar6 = uVar5 * 0x48;
                do {
                  puVar9 = ((undefined4 *)GEN_TOP((iVar6 + *((int *)GEN_TOP(((int)this + 0x18))))));
                  puVar12 = puVar9 - 0x12;
                  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 - 1) {
                    *puVar12 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar12 = puVar12 + 1;
                  }
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,uVar3,uVar4,uVar5 - 1,uVar5);
                  iVar6 = iVar6 + 0x48;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *((uint *)GEN_TOP(((int)this + 8))));
              }
              *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
              uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
              if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) ==
                  uVar4) {
                return uVar4;
              }
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4))) = uVar4;
              *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
              return uVar4;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          pbVar10 = pbVar11 + 0x48;
          pbVar8 = param_1;
          pbVar11 = pbVar10;
        } while (uVar5 < *((uint *)GEN_TOP(((int)this + 8))));
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004383d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004383d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4383d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  uint uVar1;
  
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xe))) = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xd))) = param_4;
  *((char *)GEN_TOP(((int)param_1 + 0xf))) = (char)param_6;
  param_1[2] = 0;
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_6 * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)param_6 * 8),0,0);
  param_1[4] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00438430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyInvitedlist::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(uint)(byte)this[0xc]);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,(uint)(byte)this[0xd]);
  if ((uVar5 != 0) && (uVar6 != 0)) {
    uVar7 = 0;
    puVar8 = param_1;
    if (param_2 != 0) {
      do {
        if ((uint)(byte)this[0xf] <= *(uint *)(this + 8)) break;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,uVar5,uVar6,*(uint *)(this + 8),puVar8);
        iVar2 = *(int *)(this + 8);
        iVar3 = *(int *)(this + 0x10);
        *((undefined4 *)GEN_TOP((iVar3 + iVar2 * 8))) = *puVar8;
        *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar2 * 8))) = puVar8[1];
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 0xc;
      } while (uVar7 < param_2);
    }
    uVar6 = *(uint *)(this + 8);
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + (uint)(byte)this[0xe] * 4)));
    if (*puVar1 != uVar6) {
      *puVar1 = uVar6;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
  }
  return uVar6;
}

/* ref: Client::UI::Info::InfoProxyInvitedlist::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00438510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  
  piVar6 = param_1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,(uint)(byte)this[0xc]);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)(byte)this[0xd]);
  if (((uVar4 != 0) && (uVar5 != 0)) && (param_2 != 0)) {
    param_1 = ((int *)GEN_TOP(param_2));
    do {
      uVar7 = 0;
      if (*(int *)(this + 8) != 0) {
        piVar3 = *(int * PTR32 *)(this + 0x10);
LAB_00438590: ;
        if ((*piVar3 != *piVar6) || (piVar3[1] != piVar6[1])) goto LAB_0043859f;
        iVar2 = *(int *)(this + 8);
        *(uint *)(this + 8) = iVar2 - 1U;
        if (uVar7 < iVar2 - 1U) {
          do {
            puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + uVar7 * 8)));
            *puVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + uVar7 * 8)));
            puVar1[1] = puVar1[3];
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,uVar4,uVar5,uVar7);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(this + 8));
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + (uint)(byte)this[0xe] * 4))) != *(int *)(this + 8)) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + (uint)(byte)this[0xe] * 4))) = *(int *)(this + 8);
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
      }
LAB_004385f4: ;
      piVar6 = piVar6 + 0xc;
      param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  return 0;
LAB_0043859f: ;
  uVar7 = uVar7 + 1;
  piVar3 = piVar3 + 2;
  if (*(uint *)(this + 8) <= uVar7) goto LAB_004385f4;
  goto LAB_00438590;
}

/* ref: Client::UI::Info::InfoProxyInvitedlist::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0xc]);
  if (uVar2 != 0) {
    *(undefined4 *)(this + 8) = 0;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)(byte)this[0xe] * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)(byte)this[0xe] * 4))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00438660 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00438660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0xd))));
  if ((uVar2 != 0) && (uVar4 = 0, *((int *)GEN_TOP(((int)this + 8))) != 0)) {
    do {
      iVar3 = F_00c4c468(*((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + uVar4 * 4))),param_1);
      if (iVar3 == 0) {
        return CONCAT44(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + uVar4 * 8))),
                        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar4 * 8))));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_004386d0 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_004386d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4386d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    return CONCAT44(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + param_1 * 8))),
                    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 8))));
  }
  return 0;
}

/* ref: FUN_00438700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0xd))));
    if (uVar2 != 0) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00438770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00438780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  return;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_00438790(void)
{
  GEN_ENTER(0x438790u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_004387a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_004387a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4387a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_004387b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004387b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4387b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3c;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar2)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0077ae70(this_00 GEN_EDX_ARG);
    if (param_2 - 0x23b7U < 0xb) {
      uVar1 = (uint)(byte)((undefined *)REFP(0x00436475))[param_2];
      switch((unsigned int)(uintptr_t)(param_2)) {
      default: ;
        goto switchD_004387eb_caseD_23b7;
      case 0x23b8: ;
      case 0x23b9: ;
      case 0x23ba: ;
      case 0x23bf: ;
      case 0x23c0: ;
        break;
      }
    }
    F_007df0e0(this_00 GEN_EDX_ARG);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    if (*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
      F_00435760(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x30))) GEN_EDX_ARG,param_1,1);
      uVar1 = F_007df0c0(this_00 GEN_EDX_ARG);
    }
  }
switchD_004387eb_caseD_23b7: ;
  return uVar1;
}

/* ref: FUN_00438840 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00438840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x1918)));
}

/* ref: FUN_00438850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return param_2 * 0x40 + 0x18 + in_ecx;
  }
  return 0;
}

/* ref: FUN_00438870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00438880 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00438880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00438890 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00438890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x15))) = param_2;
  return param_2;
}

/* ref: FUN_004388b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004388b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined1 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0x4388b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined1 param_12 = (undefined1)gen_a11;)
  *((undefined4 *)GEN_TOP((param_1 + 0x1920))) = param_9;
  *((undefined4 *)GEN_TOP((param_1 + 0x1928))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x1924))) = param_10;
  *((undefined4 *)GEN_TOP((param_1 + 0x1930))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x192c))) = param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x1938))) = param_6;
  *((undefined4 *)GEN_TOP((param_1 + 0x1934))) = param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x1940))) = (undefined2)param_11;
  *((undefined4 *)GEN_TOP((param_1 + 0x193c))) = param_7;
  *((undefined1 *)GEN_TOP((param_1 + 0x1943))) = param_12;
  *((undefined1 *)GEN_TOP((param_1 + 0x1942))) = param_8;
  return 1;
}

/* ref: FUN_00438920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00438920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_004388b0(this GEN_EDX_FWD,*param_1,param_1[1],param_1[9],param_1[8],param_1[6],param_1[7],
                       *(undefined1 *)(param_1 + 0xe),param_1[2],param_1[3],
                       (uint)*(ushort *)(param_1 + 10),*((undefined1 *)GEN_TOP(((int)param_1 + 0x3a))));
  return bVar1;
}

/* ref: FUN_00438970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00438970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  byte bVar2;
  
  if ((param_1 < *((uint *)GEN_TOP(((int)this + 8)))) &&
     (puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + 0x18 + (int)this))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    bVar2 = F_004388b0(this GEN_EDX_FWD,*puVar1,puVar1[1],puVar1[9],puVar1[8],puVar1[6],puVar1[7],
                         *(undefined1 *)(puVar1 + 0xe),puVar1[2],puVar1[3],
                         (uint)*(ushort *)(puVar1 + 10),*((undefined1 *)GEN_TOP(((int)puVar1 + 0x3a))));
    return bVar2;
  }
  return 0;
}

/* ref: FUN_004389d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004389d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4389d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint in_EAX = 0;
  uint in_ecx;
  undefined * this_00;
  undefined1 * puVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  
  if (param_2 < 9) {
    F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1948))),0,0x340);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c88))) = 0;
    if (param_2 != 0) {
      puVar3 = ((undefined1 *)GEN_TOP((param_1 + 0xd)));
      puVar2 = ((undefined1 *)GEN_TOP(((int)this + 0x1950)));
      do {
        iVar1 = *(int *)(puVar3 - 0xd);
        if (iVar1 != 0 || *(int *)(puVar3 - 9) != 0) {
          *(int *)(puVar2 - 4) = *(int *)(puVar3 - 9);
          *(int *)(puVar2 - 8) = iVar1;
          *puVar2 = puVar3[-1];
          puVar2[1] = *puVar3;
          puVar2[2] = puVar3[1];
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 - 5);
          F_0042e430(puVar2 + 8 GEN_EDX_ARG,puVar3 + 2);
          *((int *)GEN_TOP(((int)this + 0x1c88))) = *((int *)GEN_TOP(((int)this + 0x1c88))) + 1;
        }
        puVar3 = puVar3 + 0x30;
        puVar2 = puVar2 + 0x68;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    uVar4 = 0x37;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar4)));
    in_EAX = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      in_EAX = F_008ae1b0(this_00 GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_00438a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438a90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x438a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  uint uVar1;
  undefined * this;
  int * piVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP((param_1 + 0x1948)));
  while ((*piVar2 != param_2 || (piVar2[1] != param_3))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x1a;
    if (7 < uVar1) {
LAB_00438acf: ;
      uVar3 = 0x37;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
      this = ((undefined *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
      uVar1 = 0;
      if (this != ((undefined *)GEN_TOP(0x0))) {
        uVar1 = F_008ae280(this GEN_EDX_ARG);
      }
      return uVar1;
    }
  }
  *((undefined1 *)GEN_TOP((uVar1 * 0x68 + 0x1950 + param_1))) = param_4;
  *((undefined1 *)GEN_TOP((uVar1 * 0x68 + 0x1951 + param_1))) = param_5;
  goto LAB_00438acf;
}

/* ref: FUN_00438b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (7 < param_2) {
    return 0;
  }
  return param_2 * 0x68 + 0x1948 + in_ecx;
}

/* ref: FUN_00438b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x1948)));
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x1a;
    if (7 < uVar1) {
      return 0;
    }
  }
  return uVar1 * 0x68 + 0x1948 + (int)this;
}

/* ref: FUN_00438b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x1c90))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c94))) = param_2;
  return param_1;
}

/* ref: FUN_00438b80 */
GEN_OWN GEN_NOFRAME byte F_00438b80(void)
{
  GEN_ENTER(0x438b80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00438b90 */
GEN_OWN GEN_NOFRAME byte F_00438b90(void)
{
  GEN_ENTER(0x438b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00438ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *(undefined2 *)(in_ecx + 3) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10908b4));
  in_ecx[0x1458] = 0xffffffff;
  F_0042b630(in_ecx + 0x1459 GEN_EDX_FWD);
  *(undefined1 *)(in_ecx + 0x146e) = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00438bf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00438bf0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x438bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)(&REFG(undefined, 0x12fe5d4) + (uint)param_1 * 4);
  if ((param_1 == 0) && (param_4 != '\0')) {
    uVar1 = 0xeaa2;
  }
  else if (param_2 != '\0') {
    uVar1 = uVar1 | 0x1000000;
  }
  if (param_3 != '\0') {
    uVar1 = uVar1 | 0x2000000;
  }
  return uVar1;
}

/* ref: FUN_00438c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x16))) != *((char *)GEN_TOP(((int)param_1 + 6)))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x51b8))) = 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  return uVar1;
}

/* ref: FUN_00438c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00438c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: FUN_00438c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x16)));
}

/* ref: FUN_00438ca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((uint)*((byte *)GEN_TOP(((int)this + 0x17))) * 100) / 100;
}

/* ref: FUN_00438cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: FUN_00438ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00438ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x438ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x1a)));
}

/* ref: FUN_00438cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x438cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + 0x28)));
    do {
      if (((piVar1[-2] == param_1) && (piVar1[-1] == param_2)) && (*piVar1 == param_3)) {
        if (param_4 != ((uint *)GEN_TOP(0x0))) {
          *param_4 = uVar2;
        }
        return uVar2 * 0xa0 + 0x20 + (int)this;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x28;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00438d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return param_2 * 0xa0 + 0x20 + in_ecx;
  }
  return 0;
}

/* ref: FUN_00438d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return param_2 * 0xa0 + 0x5f + in_ecx;
  }
  return 0;
}

/* ref: FUN_00438d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= param_1) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)this + param_1 * 0xa0 + 0x5e))) != '\0') {
    return (int)this + param_1 * 0xa0 + 0x7f;
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x5164)));
  F_0042e430(this_00 GEN_EDX_FWD,(int)this + param_1 * 0xa0 + 0x7f);
  F_0042e370(this_00 GEN_EDX_ARG,&REFG(undefined, 0x108ee7c));
  uVar1 = F_0042a990(this_00 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00438de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_1 < *((uint *)GEN_TOP(((int)this + 8)))) && (param_2 < 5)) {
    return *((uint *)GEN_TOP(((int)this + (param_2 + param_1 * 0x14) * 8 + 0x2c)));
  }
  return 0;
}

/* ref: FUN_00438e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x438e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return *((uint *)GEN_TOP((param_2 * 0xa0 + 0x58 + in_ecx)));
  }
  return 0;
}

/* ref: FUN_00438e30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00438e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x438e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)(*((int *)GEN_TOP((param_1 + 0x38))) != 0);
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x1c))) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x24))) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x2c))) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00438e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x438e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < *((uint *)GEN_TOP(((int)this + 8)))) && (param_2 < 5)) {
    if ((*((char *)GEN_TOP((param_1 * 0xa0 + 0x5d + (int)this))) == '\0') &&
       (*((int *)GEN_TOP(((int)this + (param_2 + param_1 * 0x14) * 8 + 0x2c))) != 0)) {
      *((short *)GEN_TOP(((int)this + 0x14))) = *((short *)GEN_TOP(((int)this + 0x14))) - 1;
    }
    *((undefined4 *)GEN_TOP(((int)this + (param_2 + param_1 * 0x14) * 8 + 0x2c))) = 0;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x12);
    if (uVar2 != 0) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x224 + param_2 * 4))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x224 + param_2 * 4))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x21c))) = 1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00438f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    *((undefined4 *)GEN_TOP((param_1 * 0xa0 + 0x58 + (int)this))) = 0;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x12);
    if (uVar2 != 0) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x220))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x220))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x21c))) = 1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00438f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00438f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x438f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_0042b630((int)this + 0x1c GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10908e0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x10908d8));
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14a))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x70))),0,0xc0);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00439000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(this + 0x70,0,0xc0);
  *(undefined4 *)(this + 8) = 8;
  this[0x149] = (undefined1)0x0;
  return (uint)pvVar1;
}

/* ref: Client::UI::Info::InfoProxyLinkshell::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00439030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x439030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (this[0x14a] == (undefined1)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00439050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x439050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),1);
  return uVar1;
}

/* ref: FUN_00439070 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00439070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0xd);
  if ((uVar3 != 0) && (uVar7 = 0, *((int *)GEN_TOP(((int)this + 8))) != 0)) {
    piVar2 = ((int *)GEN_TOP(((int)this + 0x70)));
    local_8 = 0xa00;
    do {
      if (*piVar2 != 0 || piVar2[1] != 0) {
        pbVar6 = *((byte * PTR32 *)GEN_TOP((local_8 + *((int *)GEN_TOP((uVar3 + 0x20))))));
        pbVar4 = ((byte *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_004390f0: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_004390f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_004390f0;
          pbVar6 = pbVar6 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_004390f5: ;
        if (iVar5 == 0) {
          return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + uVar7 * 0x18 + 0x74))),
                          *((undefined4 *)GEN_TOP(((int)this + uVar7 * 0x18 + 0x70))));
        }
      }
      local_8 = local_8 + 4;
      uVar7 = uVar7 + 1;
      piVar2 = piVar2 + 6;
    } while (uVar7 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00439130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x439130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < *((uint *)GEN_TOP((in_ecx + 8)))) {
    return in_ecx + 0x70 + param_2 * 0x18;
  }
  return 0;
}

/* ref: FUN_00439150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0xd);
  if (uVar3 != 0) {
    uVar8 = 0;
    if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
      iVar4 = 0xa00;
      piVar2 = ((int *)GEN_TOP(((int)this + 0x70)));
      do {
        if (*piVar2 != 0 || piVar2[1] != 0) {
          pbVar5 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar4)));
          pbVar7 = param_1;
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_004391c0: ;
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_004391c5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_004391c0;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_004391c5: ;
          if (iVar6 == 0) {
            if (param_2 != ((uint *)GEN_TOP(0x0))) {
              *param_2 = uVar8;
            }
            return (int)this + uVar8 * 0x18 + 0x70;
          }
        }
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 4;
        piVar2 = piVar2 + 6;
      } while (uVar8 < *((uint *)GEN_TOP(((int)this + 8))));
    }
  }
  return 0;
}

/* ref: FUN_00439210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x130)));
  if ((-1 < iVar1) && (iVar1 < *((int *)GEN_TOP(((int)this + 8))))) {
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      *param_1 = iVar1;
    }
    return (int)this + *((int *)GEN_TOP(((int)this + 0x130))) * 0x18 + 0x70;
  }
  return 0;
}

/* ref: FUN_00439250 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00439250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
  }
  return *((ulonglong *)GEN_TOP(((int)this + 0x140)));
}

/* ref: FUN_00439280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439280(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x439280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0xf);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (*((uint *)GEN_TOP((param_1 + 8))) != 0) {
      puVar5 = ((uint *)GEN_TOP((param_1 + 0x78)));
      while (((uVar3 = 0, puVar5[-2] == 0 && puVar5[-1] == 0 || (uVar3 = *puVar5, uVar3 != param_2))
             || (uVar3 = puVar5[1], uVar3 != param_3))) {
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 6;
        if (*((uint *)GEN_TOP((param_1 + 8))) <= uVar4) {
          return uVar3;
        }
      }
      puVar5 = ((uint *)GEN_TOP((param_1 + 0x80 + uVar4 * 0x18)));
      *puVar5 = *puVar5 ^ ((uint)(param_4 != '\0') << 0xb ^ *puVar5) & 0x800;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1008 + uVar4 * 4))) != *puVar5) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1008 + uVar4 * 4))) = *puVar5;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x102c))) = 1;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
        return uVar2;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x102c))) = 1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00439350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((int)this + 0x78)));
    do {
      if (((piVar2[-2] != 0 || piVar2[-1] != 0) && (*piVar2 == param_1)) && (piVar2[1] == param_2))
      {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return 0xffffffff;
}

/* ref: FUN_00439390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0xd);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
      piVar1 = ((int *)GEN_TOP(((int)this + 0x70)));
      do {
        if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
          return *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa00 + uVar3 * 4)));
        }
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 6;
      } while (uVar3 < *((uint *)GEN_TOP(((int)this + 8))));
    }
  }
  return 0;
}

/* ref: FUN_004393f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004393f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4393f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x149)));
}

/* ref: FUN_00439400 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00439400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint * puVar7;
  uint * puVar8;
  int iVar9;
  ulonglong uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  F_00c48350(param_1,0,0x180);
  iVar9 = (int)param_1 + 0x28;
  puVar8 = ((uint *)GEN_TOP(((int)this + 0x70)));
  (*(int *)(gen_frame + 0x0)) = 8;
  do {
    uVar3 = *puVar8;
    *((uint *)GEN_TOP((iVar9 - 0x28))) = uVar3;
    *((uint *)GEN_TOP((iVar9 - 0x24))) = puVar8[1];
    if (*puVar8 != 0 || puVar8[1] != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar3 = puVar8[1];
      uVar4 = *puVar8;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0xd);
      if (uVar2 != 0) {
        uVar5 = 0;
        if (*((uint *)GEN_TOP(((int)this + 8))) != 0) {
          puVar7 = ((uint *)GEN_TOP(((int)this + 0x70)));
          do {
            if ((*puVar7 == uVar4) && (puVar7[1] == uVar3)) {
              uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xa00 + uVar5 * 4)));
              goto LAB_004394b4;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 6;
          } while (uVar5 < *((uint *)GEN_TOP(((int)this + 8))));
        }
      }
      uVar6 = 0;
LAB_004394b4: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar6);
      uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      if ((uVar3 != 0) && (uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG), uVar3 < 0x20)) {
        uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        F_00c46aa0(iVar9 - 0x20,uVar4,uVar3);
      }
      *((bool *)GEN_TOP(iVar9)) = (puVar8[4] & 0x700) == 0x100;
      uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar3 = (uint)uVar10;
    }
    iVar9 = iVar9 + 0x30;
    puVar8 = puVar8 + 6;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    if ((*(int *)(gen_frame + 0x0)) == 0) {
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_00439550 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00439550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x439550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x11,0,0);
  return uVar1;
}

/* ref: FUN_00439570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0x400;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x800d0f;
  uVar1 = F_00406bb0(0x2400,0,0);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1090904));
  return (uint)this;
}

/* ref: FUN_004395e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004395e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4395e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_4;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00439610 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00439610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0 || *((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD));
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00439620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 8) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + (uint)*(ushort *)(this + 0x14) * 4)));
    if (*piVar1 != *(int *)(this + 8)) {
      *piVar1 = *(int *)(this + 8);
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,(uint)(byte)this[0x10]);
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1000))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1000))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1004))) = 1;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar2;
}

/* ref: FUN_004396b0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_004396b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4396b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *((ulonglong *)GEN_TOP(((int)this + 0x20)));
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf12 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004396d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4396d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  F_00435d20((undefined *)this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00439720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x439720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined * puVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))))));
  uVar3 = (*(uint *)(gen_frame + 0x10));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar4;
  if ((uVar5 != 0) && (piVar4 != ((int *)GEN_TOP(0x0)))) {
    if (((char)(*(undefined * PTR32 *)&gen_args[2]) == '\x01') && (piVar4 = ((int *)GEN_TOP(0x0)), *((int *)GEN_TOP(((int)this + 8))) != 0)) {
      puVar9 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10)));
      do {
        if ((*puVar9 & 0x700) == 0x100) {
          puVar9 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10 + (int)((int)(uintptr_t)piVar4) * 0x48)));
          *puVar9 = *puVar9 & 0xfffffbff | 0x300;
          puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + ((int)((int)(uintptr_t)piVar4) * 8 + 7) * 4)));
          piVar2 = ((int *)GEN_TOP(*puVar1));
          piVar4 = ((int *)GEN_TOP(((uint)piVar2 & 0xffffffe9 | 8)));
          if (piVar2 != piVar4) {
            *puVar1 = piVar4;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          break;
        }
        piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
        puVar9 = puVar9 + 0x12;
      } while (piVar4 < *((int * PTR32 *)GEN_TOP(((int)this + 8))));
    }
    uVar10 = 0;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
      do {
        if (((*(int *)&gen_args[0]) == *piVar4) && ((*(int *)&gen_args[1]) == piVar4[1])) {
          iVar6 = uVar10 * 0x48;
          puVar9 = ((uint *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x18))))));
          *puVar9 = *puVar9 ^ (((uint)(*(undefined * PTR32 *)&gen_args[2]) & 0xff) << 8 ^
                              *((uint *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x18))))))) & 0x700;
          (*(int *)(gen_frame + 0xc)) = iVar6;
          if (((char)(*(undefined * PTR32 *)&gen_args[2]) != '\x04') &&
             ((*((uint *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x18)))))) & 0x800) == 0)) {
            puVar9 = ((uint *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x18))))));
            *puVar9 = *puVar9 | 0x800;
          }
          (*(int *)(gen_frame + 0x4)) = uVar10 * 8;
          puVar9 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + 0x20))) + 0x1c + uVar10 * 0x20)));
          uVar5 = *puVar9;
          uVar8 = uVar5 & 0xffffffe1 |
                  ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\x04') - 1 & 0x10 | ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\x03') - 1 & 8 |
                  ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\x02') - 1 & 4 | ((char)(*(undefined * PTR32 *)&gen_args[2]) != '\x01') - 1 & 2;
          if (uVar5 != uVar8) {
            *puVar9 = uVar8;
            *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + 0x1d))) = 1;
          }
          iVar6 = *((int *)GEN_TOP(((int)this + 0x18))) + iVar6;
          (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(0x0));
          uVar5 = F_007c9a80(*((undefined4 *)GEN_TOP((iVar6 + 8))),*((undefined4 *)GEN_TOP((iVar6 + 0xc))),
                               *((undefined4 *)GEN_TOP((iVar6 + 0x10))),&(*(int *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)&gen_args[2]));
          puVar7 = (*(undefined * PTR32 *)&gen_args[2]);
          if ((*(undefined * PTR32 *)&gen_args[2]) == ((undefined *)GEN_TOP(0x0))) {
            puVar7 = &REFG(undefined, 0x108d0e6);
          }
          F_00431250((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar10 * 5 + 3,puVar7,0,1,0);
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (*(int *)(gen_frame + 0x4)) * 4))) != uVar5) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (*(int *)(gen_frame + 0x4)) * 4))) = uVar5;
            *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
          }
          piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x10 + (*(int *)(gen_frame + 0x4)) * 4)));
          uVar5 = uVar3;
          if (*piVar4 != (*(int *)(gen_frame + 0x0))) {
            *piVar4 = (*(int *)(gen_frame + 0x0));
            *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        piVar4 = piVar4 + 0x12;
      } while (uVar10 < *((uint *)GEN_TOP(((int)this + 8))));
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x1004))) = 1;
    *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
  }
  return (uint)piVar4;
}

/* ref: FUN_00439950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x439950u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((param_1 + 0x10))))));
  piVar4 = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    uVar6 = 0;
    if (*((uint *)GEN_TOP((param_1 + 8))) != 0) {
      piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x18)));
      do {
        if (((*(int *)&gen_args[0]) == *piVar4) && ((*(int *)&gen_args[1]) == piVar4[1])) {
          iVar2 = *((int *)GEN_TOP((param_1 + 0x18)));
          iVar3 = uVar6 * 0x48;
          puVar1 = ((uint *)GEN_TOP((iVar2 + 0xc + iVar3)));
          *puVar1 = *puVar1 | 8;
          *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar3))) = *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar3)));
          iVar2 = *((int *)GEN_TOP((param_1 + 0x18)));
          (*(int *)&gen_args[1]) = 0;
          F_007c9940(*((undefined4 *)GEN_TOP((iVar2 + 8 + iVar3))),*((undefined4 *)GEN_TOP((iVar2 + 0xc + iVar3))),
                       ((uint)((*(char *)&gen_args[2]) != '\0') << 0xb ^ *((uint *)GEN_TOP((iVar2 + 0x10 + iVar3)))) & 0x800 ^
                       *((uint *)GEN_TOP((iVar2 + 0x10 + iVar3))),&(*(int *)&gen_args[1]));
          piVar4 = ((int *)GEN_TOP((piVar5[8] + (uVar6 * 8 + 4) * 4)));
          if (*piVar4 != (*(int *)&gen_args[1])) {
            *piVar4 = (*(int *)&gen_args[1]);
            *((undefined1 *)GEN_TOP(((int)piVar5 + 0x1d))) = 1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 0x12;
      } while (uVar6 < *((uint *)GEN_TOP((param_1 + 8))));
    }
    *((undefined4 *)GEN_TOP((piVar5[8] + 0x1004))) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar5 + 0x1d))) = 1;
  }
  return (uint)piVar4;
}

/* ref: FUN_00439a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xb000b0d;
  uVar1 = F_00406bb0(0x58,0,0);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_0042b630((int)this + 0x24 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090944));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x109093c));
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyPartyInvite::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x439ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00431250(param_2 GEN_EDX_FWD,param_3,param_4 + 0x10,0,1,0);
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyPartyInvite::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x439ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00431250(param_2 GEN_EDX_FWD,param_3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_3 * 4))),0
                       ,1,0);
  return uVar1;
}

/* ref: FUN_00439b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439b10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x439b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((uint *)GEN_TOP((param_1 + 8))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x18)));
    do {
      if (((*piVar1 == param_2) && (piVar1[1] == param_3)) &&
         ((byte)((uint)piVar1[4] >> 0x1c) == param_4)) {
        return (uint)(*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + uVar2 * 0x12);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (uVar2 < *((uint *)GEN_TOP((param_1 + 8))));
  }
  return 0;
}

/* ref: FUN_00439b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar8 = 0x2e;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar8)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar8 = 0x31;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar8);
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar2 >> 0x18);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar4 == '\0') {
    if (uVar2 == 0) {
      return uVar4;
    }
    if (*((char *)GEN_TOP((uVar2 + 0x68))) == '\0') goto LAB_00439d2b;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x11))));
  ((byte *)(gen_frame + 0x0))[0xc] = (char)uVar4;
  ((byte *)(gen_frame + 0x0))[0xd] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x0))[0xe] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xf] = (char)(uVar4 >> 0x18);
  if (uVar2 == 0) {
    return uVar4;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return uVar4;
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 0x18)));
  ((byte *)(gen_frame + 0x0))[0x14] = (char)iVar6;
  ((byte *)(gen_frame + 0x0))[0x15] = (char)((uint)iVar6 >> 8);
  ((byte *)(gen_frame + 0x0))[0x16] = (char)((uint)iVar6 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x17] = (char)((uint)iVar6 >> 0x18);
  if (iVar6 == 0) {
    return 0;
  }
  *((uint *)GEN_TOP((iVar6 + 8))) = *param_1;
  *((uint *)GEN_TOP((iVar6 + 0xc))) = param_1[1];
  *((undefined1 *)GEN_TOP((iVar6 + 0x18))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x15)));
  uVar4 = *param_1 & 0x800000;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(0x0));
  ((byte *)(gen_frame + 0x0))[0] = (char)uVar4;
  ((byte *)(gen_frame + 0x0))[1] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x0))[2] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x0))[3] = (char)(uVar4 >> 0x18);
  bVar1 = REFG(undefined1, 0x14ab0d4);
  if (uVar4 != 0) {
    bVar1 = (byte)param_1[5];
  }
  uVar7 = (uint)bVar1;
  uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar7,1);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != (uVar4 & 0xffff)) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = uVar4 & 0xffff;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  if (uVar7 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = uVar7 + 62000;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) != iVar6) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 8))) = iVar6;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  uVar4 = F_007c9a80(*param_1,param_1[1],*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x10))),((byte *)(gen_frame + 0x0)) + 0x10,
                       &(*(undefined * PTR32 *)(gen_frame + 0x18)));
  if (**((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) != uVar4) {
    **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) = uVar4;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x10))) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x10))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  puVar5 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  if ((*(undefined * PTR32 *)(gen_frame + 0x18)) == ((undefined *)GEN_TOP(0x0))) {
    puVar5 = &REFG(undefined, 0x108d0f3);
  }
  F_00431250((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) GEN_EDX_ARG,3,puVar5,0,1,0);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14))) != (uint)*((byte *)GEN_TOP(((int)param_1 + 0x15)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x14))) = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x15)));
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  uVar4 = -(uint)(*((char *)GEN_TOP(((int)param_1 + 0x16))) != '\0') & 0x20;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1c))) = uVar4;
  *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
LAB_00439d2b: ;
  if (uVar2 != 0) {
    *((undefined1 *)GEN_TOP((uVar2 + 0x68))) = 0;
  }
  return uVar4;
}

/* ref: FUN_00439d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00439d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xd8)));
}

/* ref: FUN_00439d50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00439d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x439d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00439d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  return param_1;
}

/* ref: FUN_00439d90 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00439d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x30))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x32))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00439db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439db0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x439db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((uint *)GEN_TOP((param_1 + 0x40))) = (uint)param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
  return (uint)param_2;
}

/* ref: FUN_00439dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439dd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x439dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((uint *)GEN_TOP((param_1 + 0x38))) = (uint)param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  return (uint)param_2;
}

/* ref: FUN_00439e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x439e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x48))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_2;
  return param_1;
}

/* ref: FUN_00439e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x1090970));
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x18))),0,0x140);
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  return (uint)this;
}

/* ref: FUN_00439ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00439ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x18))),0,0x140);
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return 0;
}

/* ref: Client::UI::Info::InfoProxyChat::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00439f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x439f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  this[0xc] = (undefined1)0x0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  F_00c48350(this + 0x18,0,0x140);
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  return 0;
}

/* ref: FUN_00439fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00439fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x439fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  bVar2 = 0;
  do {
    iVar3 = (uint)bVar2 * 0x30;
    iVar4 = *((int *)GEN_TOP((param_1 + iVar3)));
    iVar1 = *((int *)GEN_TOP((param_1 + 4 + iVar3)));
    iVar3 = param_1 + iVar3;
    if (iVar4 == 0 && iVar1 == 0) {
      return (uint)this;
    }
    if (*((char *)GEN_TOP((iVar3 + 4))) == '\x02') {
      if (*((byte *)GEN_TOP((iVar3 + 8))) < 8) {
        uVar5 = (uint)*((byte *)GEN_TOP((iVar3 + 8)));
        *((int *)GEN_TOP(((int)this + uVar5 * 0x28 + 0x1c))) = iVar1;
        *((int *)GEN_TOP(((int)this + uVar5 * 0x28 + 0x18))) = iVar4;
        puVar6 = ((undefined4 *)GEN_TOP((iVar3 + 9)));
        puVar7 = ((undefined4 *)GEN_TOP(((int)this + uVar5 * 0x28 + 0x20)));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *((char *)GEN_TOP(((int)this + 0xc))) = *((char *)GEN_TOP(((int)this + 0xc))) + '\x01';
        if (*((int *)GEN_TOP(((int)this + 0x10))) < 0) {
          *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
        }
        if (*((uint *)GEN_TOP(((int)this + 0x14))) == uVar5) {
          *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
          *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
        }
      }
    }
    else if (*((char *)GEN_TOP((iVar3 + 4))) == '\x03') {
      *((int *)GEN_TOP(((int)this + 0x158))) = iVar4;
      *((int *)GEN_TOP(((int)this + 0x15c))) = iVar1;
      puVar6 = ((undefined4 *)GEN_TOP((iVar3 + 9)));
      puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x160)));
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x10);
  return (uint)this;
}

/* ref: FUN_0043a050 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043a050(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 < 8) &&
     (*((int *)GEN_TOP((param_1 + 0x18 + (uint)param_2 * 0x28))) != 0 ||
      *((int *)GEN_TOP((param_1 + 0x1c + (uint)param_2 * 0x28))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0043a080 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_0043a080(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 8) {
    return CONCAT44(*((undefined4 *)GEN_TOP((param_1 + 0x1c + (uint)param_2 * 0x28))),
                    *((undefined4 *)GEN_TOP((param_1 + 0x18 + (uint)param_2 * 0x28))));
  }
  return 0;
}

/* ref: FUN_0043a0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043a0b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 8) {
    return in_ecx + 0x20 + (uint)param_2 * 0x28;
  }
  return 0;
}

/* ref: FUN_0043a0d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043a0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43a0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  
  bVar1 = 0;
  while ((*((int *)GEN_TOP(((int)this + (uint)bVar1 * 0x28 + 0x18))) != param_1 ||
         (*((int *)GEN_TOP(((int)this + (uint)bVar1 * 0x28 + 0x1c))) != param_2))) {
    bVar1 = bVar1 + 1;
    if (7 < bVar1) {
      return 0xff;
    }
  }
  return bVar1;
}

/* ref: FUN_0043a110 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_0043a110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43a110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 < 0) {
    return 0;
  }
  return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + iVar1 * 0x28 + 0x1c))),
                  *((undefined4 *)GEN_TOP(((int)this + iVar1 * 0x28 + 0x18))));
}

/* ref: FUN_0043a140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043a140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 < '\b') {
    *((int *)GEN_TOP((in_ecx + 0x10))) = (int)param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_0043a160 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043a160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43a160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x158))) != 0 || *((int *)GEN_TOP((in_ecx + 0x15c))) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0043a1a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043a1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43a1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: FUN_0043a1b0 */
GEN_OWN GEN_FRAME uint F_0043a1b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = 5;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1f8: ;
    return 0;
  case 0x1f9: ;
    return 1;
  case 0x1fa: ;
    return 3;
  default: ;
    return 0x26;
  case 0x1fc: ;
    *param_2 = 2;
    return 0;
  case 0x1fd: ;
    *param_2 = 3;
    return 0;
  case 0x1fe: ;
    goto switchD_0043a1d5_caseD_1fe;
  case 0x1ff: ;
    return 0x12;
  case 0x200: ;
  case 0x201: ;
    *param_2 = 4;
switchD_0043a1d5_caseD_1fe: ;
    return 2;
  case 0x202: ;
    *param_2 = 4;
    return 0x1f;
  case 0x203: ;
    return 4;
  case 0x204: ;
    return 6;
  case 0x205: ;
    *param_2 = 2;
    return 2;
  case 0x206: ;
    *param_2 = 3;
    return 2;
  case 0x207: ;
  case 0x259: ;
    return 0xc;
  case 0x208: ;
    return 0x16;
  case 0x209: ;
  case 0x25a: ;
    return 0xd;
  case 0x20a: ;
    return 0xe;
  case 0x20b: ;
    return 0x21;
  case 0x20c: ;
    return 0x22;
  case 0x20d: ;
    return 0x23;
  case 0x20e: ;
  case 0x210: ;
  case 0x25b: ;
    return 7;
  case 0x20f: ;
  case 0x25c: ;
    return 8;
  case 0x211: ;
    return 10;
  case 0x212: ;
    return 0xb;
  case 0x213: ;
  case 0x226: ;
    return 0x1a;
  case 0x214: ;
  case 0x227: ;
    return 0x1b;
  case 0x218: ;
    return 0x1c;
  case 0x24c: ;
    *param_2 = 1;
    return 9;
  case 0x24e: ;
    return 0xf;
  case 0x252: ;
  case 0x253: ;
    return 0x10;
  case 0x254: ;
    return 0x1d;
  case 0x25d: ;
    return 0x1e;
  case 0x25f: ;
    return 0x24;
  case 0x263: ;
    return 0x20;
  case 0x264: ;
    return 0x19;
  case 0x276: ;
    return 0x25;
  }
}

/* ref: FUN_0043a410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043a410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43a410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: FUN_0043a420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043a420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x97 + 0x30 + in_ecx;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 local_10 = 0;
  undefined4 local_c = 0;
  undefined * local_8;
  
  local_8 = this + 0x30;
  uVar3 = 0;
  puVar2 = param_1;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
    *puVar2 = CONCAT22((short)uVar1,(short)uVar3);
    puVar2[1] = 0xa0;
    puVar2[2] = local_10;
    puVar2[3] = local_c;
    F_00c46aa0(puVar2 + 4,local_8,0xa0);
    local_8 = local_8 + 0x97;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x2c;
  } while (uVar3 < 4);
  return 0x2c0;
}

/* ref: FUN_0043a4c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043a4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43a4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  F_00a29b20(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  return (uint)uVar1;
}

/* ref: FUN_0043a500 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043a500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43a500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x10)));
  uVar1 = F_00a27410(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,this,1,0x3ff);
  F_0042ccf0(this_00 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00a27330(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG,this_00);
  return (uint)this_00;
}

/* ref: FUN_0043a560 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043a560(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43a560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP((param_1 + 0x1b4))) = param_3;
  uVar1 = F_00a27410(((undefined *)GEN_TOP((param_1 + 0x110))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2,param_1,0,0xffffffff);
  F_0042ccf0(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)((undefined *)GEN_TOP((param_1 + 0x10)));
}

/* ref: FUN_0043a5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043a5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43a5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10c))) = param_2;
  return param_2;
}

/* ref: FUN_0043a5d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043a5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43a5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  cVar1 = *((char *)GEN_TOP(*param_1));
  while ((cVar1 != '\0' && (*((char *)GEN_TOP(*param_1)) != '<'))) {
    pcVar4 = ((char *)GEN_TOP(*param_1)) + 1;
    *param_1 = pcVar4;
    cVar1 = *pcVar4;
  }
  pcVar4 = ((char *)GEN_TOP(*param_1));
  if (*pcVar4 == '\0') {
    return 0;
  }
  do {
    if (*((char *)GEN_TOP(*param_1)) == '>') break;
    pcVar5 = ((char *)GEN_TOP(*param_1)) + 1;
    *param_1 = pcVar5;
    if (*pcVar5 == '<') {
      return 0;
    }
  } while (*pcVar5 != '\0');
  if (*((char *)GEN_TOP(*param_1)) == '\0') {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(*param_1)) + 1;
  *param_1 = pcVar5;
  iVar6 = (int)pcVar5 - (int)pcVar4;
  if (0x1f < iVar6) {
    return 0;
  }
  F_00c46aa0(&(*(char *)(gen_frame + 0x4)),pcVar4,iVar6);
  ((char *)(gen_frame + 0x5))[(int)(iVar6 - 1)] = '\0';
  iVar6 = F_00c4c591(&(*(char *)(gen_frame + 0x4)),((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x108f630)))),3);
  if (iVar6 == 0) {
    if (((char *)(gen_frame + 0x5))[2] == '>') {
      return 1;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f634)));
    if (iVar6 == 0) {
      return 2;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f63c)));
    if (iVar6 == 0) {
      return 3;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f644)));
    if (iVar6 == 0) {
      return 4;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f64c)));
    if (iVar6 == 0) {
      return 5;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f654)));
    if (iVar6 == 0) {
      return 6;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f65c)));
    if (iVar6 == 0) {
      return 7;
    }
    iVar6 = F_00c4c468(((char *)(gen_frame + 0x5)) + 2,((char *)REFP(0x108f664)));
    if (iVar6 == 0) {
      return 8;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((char *)REFP(0x108f66c)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,0,&(*(char *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x0))), uVar3 != 0)) {
    return (*(uint *)(gen_frame + 0x0)) & 0xfffffffe;
  }
  iVar6 = F_00c4c591(&(*(char *)(gen_frame + 0x4)),((char *)REFP(0x108f680)),2);
  if ((iVar6 == 0) && (((char *)(gen_frame + 0x5))[2] == '>')) {
    if ((byte)(((char *)(gen_frame + 0x5))[1] + 0x9fU) < 0x1a) {
      return (int)((char *)(gen_frame + 0x5))[1] - 0x58;
    }
    if ((byte)(((char *)(gen_frame + 0x5))[1] + 0xbfU) < 0x1a) {
      return (int)((char *)(gen_frame + 0x5))[1] - 0x38;
    }
  }
  iVar6 = (int)((char *)(gen_frame + 0x5))[0];
  if (iVar6 == 0x32) {
    if (((char *)(gen_frame + 0x5))[1] == '>') {
      return 0x2c;
    }
    if (((byte)(((char *)(gen_frame + 0x5))[1] - 0x31U) < 8) && (((char *)(gen_frame + 0x5))[2] == '>')) {
      return (int)((char *)(gen_frame + 0x5))[1] + 2;
    }
  }
  else if (iVar6 == 0x33) {
    if (((char *)(gen_frame + 0x5))[1] == '>') {
      return 0x2d;
    }
    if (((byte)(((char *)(gen_frame + 0x5))[1] - 0x31U) < 8) && (((char *)(gen_frame + 0x5))[2] == '>')) {
      return (int)((char *)(gen_frame + 0x5))[1] + 10;
    }
  }
  else {
    if (((byte)(((char *)(gen_frame + 0x5))[0] - 0x31U) < 8) && (((char *)(gen_frame + 0x5))[1] == '>')) {
      return iVar6 - 6;
    }
    if (((char *)(gen_frame + 0x5))[0] == '1') {
      if (7 < (byte)(((char *)(gen_frame + 0x5))[1] - 0x31U)) {
        return 0;
      }
      if (((char *)(gen_frame + 0x5))[2] != '>') {
        return 0;
      }
      return (int)((char *)(gen_frame + 0x5))[1] - 6;
    }
  }
  if ((((char *)(gen_frame + 0x5))[0] == 's') && (((char *)(gen_frame + 0x5))[1] == 'e')) {
    if (((char *)(gen_frame + 0x5))[2] == '.') {
      if ('0' < ((char *)(gen_frame + 0x5))[3]) {
        if ((((char *)(gen_frame + 0x5))[3] < ':') && ((*(char *)(gen_frame + 0x9)) == '>')) {
          return (int)((char *)(gen_frame + 0x5))[3] + 0x12;
        }
        if (((byte)((*(char *)(gen_frame + 0x9)) - 0x30U) < 7) && ((*(char *)(gen_frame + 0xa)) == '>')) {
          return (int)(*(char *)(gen_frame + 0x9)) + 0x1c;
        }
      }
    }
    else if (((char *)(gen_frame + 0x5))[2] == '>') {
      uVar3 = F_00a4b780(0x10);
      return uVar3 + 0x43;
    }
  }
  return 0;
}

/* ref: FUN_0043aa20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043aa20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43aa20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)in_ecx + 10))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0xb))) = 0xff;
  *(undefined2 *)(in_ecx + 2) = 0;
  in_ecx[1] = 0;
  *in_ecx = 0;
  in_ecx[0x2d] = 0;
  in_ecx[0x2e] = 0xfffffffe;
  F_0042aca0(in_ecx + 3 GEN_EDX_FWD);
  uVar1 = F_0042aca0(in_ecx + 0x2f GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0043aa60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043aa60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43aa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((in_ecx + 8))))) {
  case 1: ;
    return 0x44;
  case 2: ;
    return 0x10004;
  case 3: ;
    return 0x14;
  case 4: ;
    return 0x20004;
  case 5: ;
    return 0x404;
  case 6: ;
    return 0x104;
  case 7: ;
    return 0x24;
  case 8: ;
    return 0x804;
  case 9: ;
    return 0x1004;
  case 10: ;
    return 0x2004;
  case 0xb: ;
    return 0x80004;
  case 0xc: ;
    return 0x100004;
  case 0xd: ;
    return 0x400004;
  case 0xe: ;
    return 0x8004;
  case 0xf: ;
    return 0x200004;
  case 0x10: ;
    return 0x800004;
  case 0x11: ;
    return 0x1000004;
  default: ;
    return 0;
  }
}

/* ref: FUN_0043ab20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043ab20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ab20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0;
  if ((param_2 & 0x20) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 7;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x40) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 1;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x100) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 6;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x10) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 3;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x10000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 2;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x400) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 5;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x20000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 4;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x8000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0xe;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x800) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 8;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x1000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 9;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x2000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 10;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x80000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0xb;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x100000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0xc;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x400000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0xd;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x200000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0xf;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x800000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0x10;
    *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
    return *((byte *)GEN_TOP((in_ecx + 8)));
  }
  if ((param_2 & 0x1000000) != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0x11;
  }
  *((byte *)GEN_TOP((in_ecx + 9))) = *((byte *)GEN_TOP((in_ecx + 8)));
  return *((byte *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_0043ac90 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0043ac90(GEN_P(char param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = F_00ab1ed0(param_2);
    if (uVar1 != 0) {
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((uVar1 + 0x22))))) {
      case 1: ;
        return 1;
      case 3: ;
      case 4: ;
        return 2;
      case 5: ;
      case 6: ;
        return 3;
      case 7: ;
        return 5;
      case 8: ;
        goto switchD_0043acce_caseD_8;
      }
    }
  }
  else if ((param_1 == '\t') && (uVar1 = F_00ab1f00(param_2), uVar1 != 0)) {
switchD_0043acce_caseD_8: ;
    return 4;
  }
  return 0;
}

/* ref: FUN_0043ad20 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0043ad20(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43ad20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
  case 9: ;
    return 1;
  case 2: ;
  case 4: ;
  case 0xe: ;
  case 0xf: ;
    return 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_0043ad70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043ad70(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43ad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  default: ;
    return 0xffffffff;
  case 4: ;
    return 3;
  case 9: ;
    return 9;
  case 10: ;
    return 5;
  case 0xb: ;
    return 6;
  case 0xc: ;
    return 7;
  case 0xd: ;
    return 8;
  case 0x10: ;
    return 0xb;
  case 0x11: ;
    return 0xd;
  }
}

/* ref: FUN_0043ae30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043ae30(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ae30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    if (REFG(int, 0x1379694) == 0) {
      return 0xfffffffe;
    }
    uVar1 = F_00ac4750(1,param_2,1,0);
    break;
  case 2: ;
  case 4: ;
  case 0xe: ;
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,0,1,1);
    return uVar1;
  default: ;
    goto switchD_0043ae44_caseD_3;
  case 9: ;
    uVar1 = F_00ac19f0(param_2);
    break;
  case 0xf: ;
    return param_2 + 1;
  }
  if ((int)uVar1 < 1) {
switchD_0043ae44_caseD_3: ;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_0043aed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043aed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43aed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return (param_2 * 0x10 + param_3) * 0x164 + 0x48 + in_ecx;
}

/* ref: FUN_0043aef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043aef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43aef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  char * pcVar2;
  
  uVar1 = 0;
  pcVar2 = ((char *)GEN_TOP((param_1 * 0x1640 + 0x50 + (int)this)));
  do {
    if (*pcVar2 != '\0') {
      return 0;
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x164;
  } while (uVar1 < 0x10);
  return 1;
}

/* ref: FUN_0043af20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043af20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43af20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x164 + 0x190c8 + in_ecx)));
  *((undefined1 *)GEN_TOP(((int)puVar1 + 10))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)puVar1 + 0xb))) = 0xff;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xfffffffe;
  F_0042aca0(puVar1 + 3 GEN_EDX_FWD);
  uVar2 = F_0042aca0(puVar1 + 0x2f GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0043af70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043af70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43af70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x164 + 0x1a708 + in_ecx)));
  *((undefined1 *)GEN_TOP(((int)puVar1 + 10))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)puVar1 + 0xb))) = 0xff;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xfffffffe;
  F_0042aca0(puVar1 + 3 GEN_EDX_FWD);
  uVar2 = F_0042aca0(puVar1 + 0x2f GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0043afc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043afc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x43afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  ushort uVar1;
  uint * puVar2;
  int iVar3;
  
  uVar1 = CONCAT11((undefined1)param_2,(undefined1)param_3);
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x1bd50)));
  param_3 = 0x1d;
  do {
    param_2 = 0x12;
    do {
      iVar3 = 0x10;
      do {
        if (((char)puVar2[-1] == '\a') && (*puVar2 == (uint)uVar1)) {
          *puVar2 = (uint)CONCAT11(param_4,param_5);
          *((undefined1 *)GEN_TOP((param_1 + 0x2c))) = 1;
        }
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return 0;
}

/* ref: FUN_0043b040 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043b040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43b040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  ushort uVar2;
  undefined4 * puVar3;
  char * pcVar4;
  int local_c;
  
  uVar2 = CONCAT11((undefined1)param_1,(undefined1)param_2);
  param_1 = 0;
  pcVar4 = ((char *)GEN_TOP(((int)this + 0x1bd4c)));
  do {
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
    local_c = 0x12;
    do {
      param_2 = 0x10;
      do {
        if ((*pcVar4 == '\a') && (*(uint *)(pcVar4 + 4) == (uint)uVar2)) {
          bVar1 = *((byte *)GEN_TOP(((int)this + 0x39)));
          *pcVar4 = '\0';
          pcVar4[4] = '\0';
          pcVar4[5] = '\0';
          pcVar4[6] = '\0';
          pcVar4[7] = '\0';
          if (param_1 == bVar1) {
            puVar3[-1] = 0;
            puVar3[-2] = 0;
            *puVar3 = 0xffff0000;
            puVar3[0x2b] = 0;
            puVar3[0x2c] = 0xfffffffe;
            F_0042aca0(puVar3 + 1 GEN_EDX_FWD);
            F_0042aca0(puVar3 + 0x2d GEN_EDX_ARG);
            *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
          }
          else {
            *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
          }
        }
        puVar3 = puVar3 + 0x59;
        pcVar4 = pcVar4 + 8;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      local_c = local_c - 1;
    } while (local_c != 0);
    param_1 = param_1 + 1;
  } while ((int)param_1 < 0x1d);
  return 0;
}

/* ref: FUN_0043b110 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43b110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  char * pcVar2;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  pcVar2 = ((char *)GEN_TOP(((int)this + 0x1bd4c)));
  do {
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
    local_10 = 0x12;
    do {
      local_c = 0x10;
      do {
        if ((*pcVar2 == '\x0f') && (*(int *)(pcVar2 + 4) == param_1)) {
          *pcVar2 = '\0';
          pcVar2[4] = '\0';
          pcVar2[5] = '\0';
          pcVar2[6] = '\0';
          pcVar2[7] = '\0';
          if (local_14 == *((byte *)GEN_TOP(((int)this + 0x39)))) {
            puVar1[-1] = 0;
            puVar1[-2] = 0;
            *puVar1 = 0xffff0000;
            puVar1[0x2b] = 0;
            puVar1[0x2c] = 0xfffffffe;
            F_0042aca0(puVar1 + 1 GEN_EDX_FWD);
            F_0042aca0(puVar1 + 0x2d GEN_EDX_ARG);
            *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
          }
        }
        pcVar2 = pcVar2 + 8;
        puVar1 = puVar1 + 0x59;
        local_c = local_c - 1;
      } while (local_c != 0);
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    local_14 = local_14 + 1;
  } while ((int)local_14 < 0x1d);
  return 0;
}

/* ref: FUN_0043b1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b1d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = ((undefined1 *)GEN_TOP((param_1 + 0x1bd4c)));
  iVar6 = 0x1d;
  puVar2 = puVar3;
  do {
    iVar5 = 0x12;
    do {
      iVar4 = 0x10;
      do {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  if (param_2 != '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x44)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      puVar2 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1)));
      if ((char)puVar2 == '\0') {
        iVar6 = 0x1d;
        do {
          iVar5 = 0x12;
          do {
            iVar4 = 0x10;
            do {
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 4) = 0;
              puVar3 = puVar3 + 8;
              iVar4 = iVar4 - 1;
            } while (iVar4 != 0);
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
        *((undefined1 *)GEN_TOP((param_1 + 0x2c))) = 1;
        return param_1;
      }
    }
    *((undefined1 *)GEN_TOP((param_1 + 0x2c))) = 1;
    return (uint)puVar2;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x2c))) = 1;
  return (uint)puVar2;
}

/* ref: FUN_0043b290 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043b290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  iVar3 = 0x36;
  do {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
    uVar2 = F_00a343f0(in_ecx GEN_EDX_ARG,iVar3);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 4))))((int)this + 0x30,iVar3,uVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x5a);
  return 0;
}

/* ref: FUN_0043b2e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043b2e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((uint *)GEN_TOP((param_1 + 0x40))) & 1 << GEN_SHC(param_2, param_2)) != 0;
}

/* ref: FUN_0043b300 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043b300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43b300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP((param_1 + 1)));
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x02') {
    return 2;
  }
  if (cVar1 == '\x04') {
    return 3;
  }
  if (cVar1 == '\x01') {
    return 4;
  }
  if (cVar1 == '\x06') {
    return 5;
  }
  if (cVar1 == '\x03') {
    return 6;
  }
  if (cVar1 == '\x05') {
    return 7;
  }
  return ((cVar1 != '\a') - 1 & 7) + 1;
}

/* ref: FUN_0043b380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043b380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43b380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *((int * PTR32 *)GEN_TOP(((int)this + 0x44))) = param_1;
  if (((*((char *)GEN_TOP(((int)this + 0x38))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x3a))) == '\0')) &&
     (param_1 != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,this);
    if ((char)uVar1 == '\0') {
      puVar2 = ((undefined1 *)GEN_TOP(((int)this + 0x1bd4c)));
      iVar5 = 0x1d;
      do {
        iVar4 = 0x12;
        do {
          iVar3 = 0x10;
          do {
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 4) = 0;
            puVar2 = puVar2 + 8;
            iVar3 = iVar3 - 1;
          } while (iVar3 != 0);
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  return;
}

/* ref: FUN_0043b3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b3e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((param_2 < 0) || (iVar1 = param_2, 100 < param_2)) {
    iVar1 = 0;
  }
  return iVar1 * 0x120 + 0x34 + in_ecx;
}

/* ref: FUN_0043b400 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043b400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  if ((-1 < param_2) && (param_2 < (int)(uint)bVar1)) {
    iVar2 = param_2;
    if (100 < param_2) {
      iVar2 = 0;
    }
    return *((byte *)GEN_TOP((iVar2 * 0x120 + 0x6d + in_ecx))) & 1;
  }
  return 0;
}

/* ref: FUN_0043b440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043b440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x71d8))) != '\0') {
    return 0xffffffff;
  }
  return *((uint *)GEN_TOP((in_ecx + 0x71d4)));
}

/* ref: FUN_0043b460 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043b460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x71d8))) != '\0') {
    return *((uint *)GEN_TOP((in_ecx + 0x71d4)));
  }
  return 0xffffffff;
}

/* ref: FUN_0043b480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43b480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint _MaxCount;
  char * _Str1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  char * _Str2;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  uVar3 = 0;
  if (bVar1 != 0) {
    pcVar4 = ((char *)GEN_TOP(((int)this + 0x38)));
    do {
      _MaxCount = F_0042a970(param_1 GEN_EDX_ARG);
      _Str2 = pcVar4;
      _Str1 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
      iVar2 = F_00c4b813(_Str1,_Str2,_MaxCount);
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x120;
    } while ((int)uVar3 < (int)(uint)bVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_0043b4e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043b4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  uVar2 = 0;
  if (bVar1 != 0) {
    pbVar3 = ((byte *)GEN_TOP(((int)this + 0x6d)));
    do {
      if ((*pbVar3 & 1) == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 0x120;
    } while ((int)uVar2 < (int)(uint)bVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_0043b520 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043b520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this;
  int iVar4;
  uint * local_8;
  
  local_8 = ((uint *)GEN_TOP((param_1 + 0x48)));
  iVar4 = 0;
  do {
    pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(param_2 GEN_EDX_ARG,iVar4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)pvVar2 + 6))) == '\0') {
LAB_0043b564: ;
        bVar1 = *((byte *)GEN_TOP(((int)pvVar2 + 0x2f)));
      }
      else {
        uVar3 = F_00a3a860(pvVar2 GEN_EDX_ARG);
        if (uVar3 == 0) goto LAB_0043b564;
        this = ((undefined *)GEN_TOP(F_00a3a860(pvVar2 GEN_EDX_ARG)));
        bVar1 = F_0046e590(this GEN_EDX_ARG);
      }
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
      *(byte *)(local_8 + 1) = bVar1;
      *local_8 = uVar3;
    }
    local_8 = local_8 + 4;
    iVar4 = iVar4 + 1;
    if (0xd < iVar4) {
      *((uint *)GEN_TOP((param_1 + 0x34))) = (uint)REFG(undefined1, 0x14ab0d4);
      uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
      if (uVar3 != 0) {
        *((undefined1 *)GEN_TOP((param_1 + 0x38))) = *((undefined1 *)GEN_TOP((uVar3 + 0x9e)));
        return uVar3;
      }
      *((undefined1 *)GEN_TOP((param_1 + 0x38))) = 1;
      return 0;
    }
  } while( true );
}

/* ref: FUN_0043b5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b5e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x71d8))) = 0;
  if (param_2 < 100) {
    *((uint *)GEN_TOP((in_ecx + 0x71d4))) = param_2;
    return param_2;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x71d4))) = 0xffffffff;
  return param_2;
}

/* ref: FUN_0043b610 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0043b610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43b610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte * pbVar1;
  int iVar2;
  
  *((byte *)GEN_TOP((param_1 + 0x39))) = *((byte *)GEN_TOP((param_1 + 0x39))) & 0xfd;
  pbVar1 = ((byte *)GEN_TOP((param_1 + 0x40)));
  iVar2 = 0xe;
  do {
    *pbVar1 = *pbVar1 & 0xf8;
    pbVar1 = pbVar1 + 0x10;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0043b630 */
GEN_OWN GEN_FRAME uint F_0043b630(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43b630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return ((param_1 & 7) * 8 | param_2 & 7) << 7 | param_3 & 0x7f;
}

/* ref: FUN_0043b660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 in_EAX = 0;
  
  if (*((char *)GEN_TOP((in_ecx + 0x27ad))) != param_2) {
    *((char *)GEN_TOP((in_ecx + 0x27ad))) = param_2;
    *((undefined1 *)GEN_TOP((in_ecx + 0x27ac))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),param_2);
}

/* ref: FUN_0043b680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 in_EAX = 0;
  
  if (*((char *)GEN_TOP((in_ecx + 0x27ae))) != param_2) {
    *((char *)GEN_TOP((in_ecx + 0x27ae))) = param_2;
    *((undefined1 *)GEN_TOP((in_ecx + 0x27ac))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),param_2);
}

/* ref: FUN_0043b6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b6a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 in_EAX = 0;
  
  if (*((char *)GEN_TOP((in_ecx + 0x27af))) != param_2) {
    *((char *)GEN_TOP((in_ecx + 0x27af))) = param_2;
    *((undefined1 *)GEN_TOP((in_ecx + 0x27ac))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),param_2);
}

/* ref: FUN_0043b6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b6c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 4) {
    *((char *)GEN_TOP((in_ecx + 0x27b0))) = (char)param_2;
  }
  return param_2;
}

/* ref: FUN_0043b6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43b6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  int * piVar2;
  int iVar3;
  
  bVar1 = 0;
  iVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x980)));
  while (((short)piVar2[2] == 0 ||
         (bVar1 = 1,
         (*((uint *)GEN_TOP((*piVar2 + (uint)((ushort)param_1 >> 5) * 4))) &
         1 << ((byte)(ushort)param_1 & 0x1f)) != 0))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x1d5;
    if (3 < iVar3) {
      return -(uint)bVar1 & 2;
    }
  }
  return 1;
}

/* ref: FUN_0043b740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43b740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = param_1 * 0x754 + 0x970 + (int)this;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x10))) + (uint)((ushort)param_2 >> 5) * 4)));
  *puVar1 = *puVar1 | 1 << ((byte)(ushort)param_2 & 0x1f);
  *((int *)GEN_TOP((uVar2 + 8))) = *((int *)GEN_TOP((uVar2 + 8))) + 1;
  return uVar2;
}

/* ref: FUN_0043b780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43b780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = param_1 * 0x754 + 0x970 + (int)this;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x10))) + (uint)((ushort)param_2 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)(ushort)param_2 & 0x1f));
  *((int *)GEN_TOP((uVar2 + 8))) = *((int *)GEN_TOP((uVar2 + 8))) - 1;
  return uVar2;
}

/* ref: FUN_0043b7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43b7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined * pvVar2;
  
  iVar1 = param_1 * 0x754;
  pvVar2 = F_00c48350(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x980 + (int)this))),0,*((int *)GEN_TOP(((int)this + iVar1 + 0x97c))) * 4);
  *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x978))) = 0;
  return (uint)pvVar2;
}

/* ref: FUN_0043b800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x754 + 0x268 + in_ecx;
}

/* ref: FUN_0043b820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43b820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0042ccf0(((undefined *)GEN_TOP((param_1 * 0x754 + 0x268 + (int)this))) GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_0043b840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x754 + 0x268 + in_ecx;
}

/* ref: FUN_0043b860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043b860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43b860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return (param_2 * 100 + param_3) * 0x544 + 0x3c + in_ecx;
}

/* ref: FUN_0043b880 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43b880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042aca0(param_1 GEN_EDX_FWD);
  bVar2 = F_0042a800(param_2,REFG(undefined4, 0x108cc50));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x28))))(*((undefined4 *)GEN_TOP(((int)this + 0x30))),param_1,uVar3,param_3);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_0043b900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043b900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * in_ecx_00;
  int iVar2;
  
  *in_ecx = 0;
  F_0042aca0(in_ecx + 1 GEN_EDX_FWD);
  in_ecx_00 = in_ecx + 0x16;
  iVar2 = 0xf;
  do {
    uVar1 = F_0042aca0(in_ecx_00 GEN_EDX_ARG);
    in_ecx_00 = in_ecx_00 + 0x15;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0043b930 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043b930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43b930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  
  if ((*(int *)this == 0) && (**((char * PTR32 *)GEN_TOP(((int)this + 4))) == '\0')) {
    uVar1 = 0;
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x58)));
    while (*((char *)GEN_TOP(*puVar2)) == '\0') {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x15;
      if (0xe < uVar1) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0043b960 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043b960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43b960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  int iVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  pcVar3 = ((char *)GEN_TOP(F_0042a990(param_3 GEN_EDX_FWD)));
  uVar5 = param_2;
  if (param_2 < 0xf) {
    (*(int *)(gen_frame + 0x8)) = param_2 * 0x54 + 0x58 + param_1;
    (*(int *)(gen_frame + 0x0)) = 0xf - param_2;
    do {
      uVar4 = F_00a26f40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,pcVar3);
      if (uVar4 == 0) {
        uVar5 = F_0042aca0((*(int *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
      else {
        uVar6 = uVar4;
        if (0xb3 < uVar4) {
          uVar6 = 0xb4;
        }
        F_0042aca0((*(int *)(gen_frame + 0x8)) GEN_EDX_ARG);
        bVar2 = F_0042a800(pcVar3,REFG(undefined4, 0x108cc50));
        uVar5 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) {
          iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
          uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar3,REFG(undefined4, 0x108cc50));
          ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x28))))(*((undefined4 *)GEN_TOP(((int)this + 0x30))),(*(int *)(gen_frame + 0x8)),uVar5,uVar6);
          uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          uVar5 = (uint)uVar7;
        }
        pcVar3 = pcVar3 + uVar4;
      }
      if (*pcVar3 == '\n') {
        pcVar3 = pcVar3 + 1;
      }
      if (*pcVar3 == '\r') {
        pcVar3 = pcVar3 + 1;
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x54;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  return uVar5;
}

/* ref: FUN_0043ba60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043ba60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43ba60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0043b960(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_0043ba80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043ba80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43ba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = 0;
  uVar2 = 2;
  puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0xac)));
  iVar4 = 3;
  do {
    if (*((char *)GEN_TOP(puVar3[-0x15])) != '\0') {
      uVar1 = uVar2 - 1;
    }
    if (*((char *)GEN_TOP(*puVar3)) != '\0') {
      uVar1 = uVar2;
    }
    if (*((char *)GEN_TOP(puVar3[0x15])) != '\0') {
      uVar1 = uVar2 + 1;
    }
    if (*((char *)GEN_TOP(puVar3[0x2a])) != '\0') {
      uVar1 = uVar2 + 2;
    }
    if (*((char *)GEN_TOP(puVar3[0x3f])) != '\0') {
      uVar1 = uVar2 + 3;
    }
    uVar2 = uVar2 + 5;
    puVar3 = puVar3 + 0x69;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar1;
}

/* ref: FUN_0043baf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043baf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43baf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 8))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,param_2)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,param_3);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0043bb40 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043bb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43bb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int in_ecx;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  in_ecx = (int)this + 0x388;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  iVar2 = (int)this + 0x304;
  iVar3 = in_ecx;
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00a23c00(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG,uVar1,iVar2,iVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042a990(in_ecx GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0043bbc0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043bbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x43bbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  (*(int *)(gen_frame + 0x0)) = param_3;
  if (*((int *)GEN_TOP(((int)this + 600))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,((char *)REFP(0x108f868)));
    *((uint *)GEN_TOP(((int)this + 600))) = uVar1;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 600))) + 0x24))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 600))) GEN_EDX_ARG,param_1)));
  if (param_2 == 0) {
    uVar6 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar6);
    return uVar1;
  }
  if (param_3 == 0) {
    (*(int *)(gen_frame + 0x0)) = (int)this + 0x304;
  }
  F_0042aca0(param_4 GEN_EDX_ARG);
  uVar4 = 0;
  uVar6 = REFG(undefined4, 0x108cc50);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar4);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,uVar6);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x0)),param_4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (uVar1 == 1) {
    uVar6 = param_4;
    if (1 < param_2) {
      F_0042aca0(param_5 GEN_EDX_ARG);
      iVar5 = (int)this + 0x304;
      uVar6 = param_5;
      uVar1 = F_0042a990(param_4 GEN_EDX_ARG);
      F_00a23c00(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG,uVar1,iVar5,uVar6);
      uVar6 = param_5;
    }
    uVar1 = F_0042a990(uVar6 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0043bd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043bd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43bd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_0043bbc0(this GEN_EDX_FWD,param_1,param_2,param_3,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_0043bd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043bd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43bd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0043bbc0(this GEN_EDX_FWD,param_1,2,(int)this + 0x304,(int)this + 0x334,(int)this + 0x388);
  return uVar1;
}

/* ref: FUN_0043bd60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043bd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43bd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int in_ecx;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = (int)this + 0x304;
  }
  in_ecx = (int)this + 0x388;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),iVar3,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  iVar3 = (int)this + 0x3dc;
  F_0042aca0(iVar3 GEN_EDX_ARG);
  iVar4 = (int)this + 0x304;
  iVar5 = iVar3;
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  F_00a23c00(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG,uVar2,iVar4,iVar5);
  uVar2 = F_0042a990(iVar3 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0043be10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043be10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43be10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0043be20 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43be20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x14b);
  if (*((int *)GEN_TOP((uVar1 + 0x14))) != 0) {
    if (this == ((undefined *)GEN_TOP(0x0))) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)this + 0x1ac;
    }
    uVar1 = F_00a27410(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1,iVar2,0,0xffffffff);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar3;
  }
  return uVar1;
}

/* ref: FUN_0043bea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043bea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43bea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x188)));
  F_0042ccf0(this_00 GEN_EDX_FWD,param_1);
  if (*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25dc))) != ((undefined *)GEN_TOP(0x0))) {
    F_009f0200(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25dc))) GEN_EDX_ARG,this_00);
  }
  return (uint)this_00;
}

/* ref: FUN_0043bee0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0043bee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43bee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  return;
}

/* ref: FUN_0043bef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043bef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43bef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1b8;
}

/* ref: FUN_0043bf00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043bf00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP(F_0042a7e0(param_1 GEN_EDX_ARG,0)));
  switch((unsigned int)(uintptr_t)(*puVar1)) {
  case 0x41: ;
  case 0x45: ;
  case 0x49: ;
  case 0x4f: ;
  case 0x55: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_0043bf60 */
GEN_OWN GEN_FRAME uint F_0043bf60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43bf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
    uVar1 = param_2;
    if (999999 < param_2) {
      return param_2 - 900000;
    }
    break;
  case 3: ;
    return param_2;
  case 4: ;
  case 5: ;
  case 6: ;
  case 9: ;
    return (param_1 - 2) * 1000000 + param_2;
  case 7: ;
    return (param_1 - 4) * 1000000 + param_2;
  default: ;
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0043bfd0 */
GEN_OWN GEN_FRAME uint F_0043bfd0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43bfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x8a)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa8))))(param_1 GEN_EDX_ARG);
      uVar2 = F_0043bf60(uVar2,uVar1);
      return uVar2;
    case 3: ;
    case 4: ;
    case 5: ;
    case 7: ;
    case 9: ;
      uVar2 = F_0043bf60(uVar2,param_1[0x20]);
      return uVar2;
    case 6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa8))))(param_1 GEN_EDX_ARG);
      uVar2 = F_0043bf60(uVar2,uVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0043c060 */
GEN_OWN GEN_FRAME uint F_0043c060(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43c060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 < 0xe) {
    return param_1 * 1000000 + param_2;
  }
  return 0;
}

/* ref: FUN_0043c080 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043c080(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43c080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  bVar1 = F_0042b6a0(param_1 GEN_EDX_ARG,&REFG(undefined, 0x108f880));
  if ((bVar1 == 0) && (bVar1 = F_0042b6a0(param_1 GEN_EDX_ARG,"ItemHQ"), bVar1 == 0)) {
    bVar1 = F_0042b6a0(param_1 GEN_EDX_ARG,((char *)REFP(0x108f8ac)));
    if (bVar1 != 0) {
      uVar2 = *param_2;
      F_0042e430(param_1 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x12fe784))[(int)(uVar2 / 1000000)]);
      *param_3 = *(int *)(&REFG(undefined, 0x12fe74c) + (uVar2 / 1000000) * 4);
      *param_2 = *param_2 % 1000000;
      return 0;
    }
    bVar1 = F_0042b6a0(param_1 GEN_EDX_ARG,((char *)REFP(0x108f950)));
    if (bVar1 == 0) {
      return 0;
    }
    uVar3 = *param_2 / 1000000;
    F_0042e430(param_1 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x12fe72c))[(int)(uVar3)]);
    *param_3 = *(int *)(&REFG(undefined, 0x13723cc) + uVar3 * 4);
    uVar2 = *param_2 % 1000000;
    *param_2 = uVar2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      goto switchD_0043c15c_caseD_0;
    case 1: ;
      *param_2 = uVar2 + 1000000;
      return 0;
    case 2: ;
    case 3: ;
      *param_2 = 0;
      return 0;
    default: ;
      return 0;
    case 5: ;
      *param_2 = uVar2 + 2000000;
      return 0;
    }
  }
  uVar2 = *param_2;
  if ((int)uVar2 < 2000000) {
    if (uVar2 < 1000000) {
      bVar1 = F_0042b6a0(param_1 GEN_EDX_ARG,"ItemHQ");
      if (bVar1 == 0) goto LAB_0043c20d;
      F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x108f8a4));
    }
    else {
      *param_2 = uVar2 - 1000000;
    }
    local_8 = 4;
  }
  else {
    F_0042e430(param_1 GEN_EDX_ARG,((char *)REFP(0x108f890)));
    local_8 = 2;
  }
LAB_0043c20d: ;
  local_8 = local_8 | 1;
  if (*param_3 - 4U < 4) {
    local_8 = 0;
  }
  return local_8;
switchD_0043c15c_caseD_0: ;
  if (uVar2 < 100000) {
    return 0;
  }
  *param_2 = uVar2 + 900000;
  return 0;
}

/* ref: FUN_0043c250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43c250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_0042a9a0(param_1 GEN_EDX_FWD,0,0,0,0);
  return uVar1;
}

/* ref: FUN_0043c270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43c270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 4))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 4))) = 0;
    uVar1 = F_0042a9a0(param_1 GEN_EDX_FWD,1,0,0,0);
    return uVar1;
  }
  return param_1;
}

/* ref: FUN_0043c2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_0042a9a0(param_1 GEN_EDX_FWD,1,1,0,*(undefined4 *)(&REFG(undefined, 0x12fec54) + *((int *)GEN_TOP(((int)this + 4))) * 4));
  return uVar1;
}

/* ref: FUN_0043c2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43c2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_0042b820(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0043c2d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 4))),0,0);
  }
  uVar1 = F_005095f0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0043c300 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0043c300(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x43c300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_GS(0x36c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x364)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x368));
  (*(int *)(gen_frame + 0x4)) = param_3;
  (*(int *)(gen_frame + 0x0)) = param_2;
  uVar1 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  F_0042e170(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG,uVar1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x210)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
  if ((*(int *)(gen_frame + 0x0)) != 0 || (*(int *)(gen_frame + 0x4)) != 0) {
    if (param_5 == '\0') {
      F_00aca080(&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x264)),0x100);
      F_0042a2a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x264)));
    }
    else {
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x210)),&REFG(undefined, 0x108fa30),(*(int *)(gen_frame + 0x0)),0);
      F_0042a1b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
    }
  }
  F_0042a440(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,param_4);
  F_00429fa0();
  return param_1;
}

/* ref: FUN_0043c410 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043c410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x43c410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x450, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x448)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44c));
  uVar1 = param_2;
  if (param_1 != 0 || param_2 != 0) {
    uVar1 = F_00406bb0(param_5,0,0);
    F_00c46aa0(uVar1,param_4,param_5);
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x208)) GEN_EDX_ARG);
    uVar2 = F_0043c300(((undefined1 *)(gen_frame + 0x0)),param_1,param_2,param_3,0);
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x208)) GEN_EDX_ARG,uVar2);
    F_00429fa0();
    (*(uint *)(gen_frame + 0x220)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x208)) = param_5;
    (*(undefined4 *)(gen_frame + 0x20c)) = 0;
    (*(undefined1 *)(gen_frame + 0x224)) = 1;
    uVar1 = F_004fc510(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x208)));
  }
  return uVar1;
}

/* ref: Client::UI::Misc::UserFileManager::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43c500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))
            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(uint)(uVar1 != 0),uVar1,param_1[7],*(undefined4 *)(this + 0xc));
  uVar1 = F_0050c620(*(undefined4 *)(this + 4),0,0);
  *(undefined4 *)(this + 4) = 0;
  return uVar1;
}

/* ref: FUN_0043c550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43c550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  F_00c49908((int)this + 0x20,0xc,param_2);
  return (uint)this;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43c590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(uint *)(this + 8) || (param_2 != *(int *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(uint *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_0043c5e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  undefined * _Dst;
  
  if ((*((int *)GEN_TOP(((int)this + 0x14))) == 0) && (*((int *)GEN_TOP(((int)this + 0x1c))) == 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
    piVar2 = ((int *)GEN_TOP(F_00406500()));
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,uVar1 + 0x20,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
    if (_Dst == ((undefined *)GEN_TOP(0x0))) {
      return 0xfffffffe;
    }
    F_00c48350(_Dst,0,uVar1 + 0x20);
    return 0;
  }
  return 0;
}

/* ref: FUN_0043c630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: FUN_0043c660 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043c660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0x1003;
  *((undefined1 *)GEN_TOP(((int)this + 0x924))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x988))) = 0;
  bVar1 = F_00ad01f0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_0043c680 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043c680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00acf5c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (char)uVar1 == '\0';
}

/* ref: FUN_0043c690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x914;
}

/* ref: FUN_0043c6a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c6a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x978;
}

/* ref: FUN_0043c6b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043c6b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x394;
}

/* ref: FUN_0043c6f0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0043c6f0(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  __time64_t _Var1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 20))) = *param_1 - 0x76c;
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 16))) = (byte)param_1[1] - 1;
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = (uint)*((byte *)GEN_TOP(((int)param_1 + 3)));
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = (uint)(byte)param_1[2];
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = (uint)*((byte *)GEN_TOP(((int)param_1 + 5)));
  (*(int *)((char *)((undefined *)(gen_frame + 0x0)))) = (uint)(byte)param_1[3];
  _Var1 = F_00c4c109(((undefined *)(gen_frame + 0x0)));
  return (uint)_Var1;
}

/* ref: FUN_0043c750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43c750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  bool bVar4;
  int local_8;
  
  uVar1 = 0xffffff6b;
  puVar3 = ((uint *)GEN_TOP(((int)this + 0x2bac)));
  local_8 = 0x14f;
  do {
    if (0xb9 < uVar1) goto switchD_0043c783_caseD_2;
    in_EAX = (uint)(&REFG(byte, 0x43c864))[(int)(uVar1)];
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar2 = (uint)(((byte)REFG(undefined2, 0x14b4eb8) & 1) != 1);
      break;
    case 1: ;
      uVar2 = (uint)(((byte)REFG(undefined2, 0x14b4eb8) & 2) != 2);
      break;
    default: ;
      goto switchD_0043c783_caseD_2;
    case 4: ;
      bVar4 = ((byte)REFG(undefined2, 0x14b4eb8) & 8) == 8;
      goto LAB_0043c7fa;
    case 5: ;
      bVar4 = ((byte)REFG(undefined2, 0x14b4eb8) & 0x10) == 0x10;
      goto LAB_0043c7fa;
    case 6: ;
      bVar4 = ((byte)REFG(undefined2, 0x14b4eb8) & 0x20) == 0x20;
LAB_0043c7fa: ;
      uVar2 = (uint)bVar4;
      break;
    case 0xb9: ;
      uVar2 = (uint)(((byte)REFG(undefined2, 0x14b4eb8) & 4) != 4);
    }
    F_005a2710(puVar3 - 0x29f GEN_EDX_FWD,3);
    puVar3[-0x29e] = uVar2;
    F_005a2710(puVar3 - 1 GEN_EDX_ARG,3);
    *puVar3 = uVar2;
    in_EAX = F_005a2710(puVar3 + 0x29d GEN_EDX_ARG,3);
    puVar3[0x29e] = uVar2;
switchD_0043c783_caseD_2: ;
    puVar3 = puVar3 + 2;
    uVar1 = uVar1 + 1;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_0043c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43c920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar2 = param_1 * 3 + 0x39;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + iVar2 * 8)));
  if (*((int *)GEN_TOP(((int)this + iVar2 * 8 + 0x10))) != 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(((int)pvVar1 + 0x10))))
                      ((int)this + *((int *)GEN_TOP(((int)pvVar1 + 0x14))),param_1,pvVar1,1,0,param_2);
    return uVar4;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + (param_2 * 0x14f + param_1) * 8 + 0x2130)));
  if (((byte)*puVar3 & 0xf) == 3) {
    return puVar3[1];
  }
  return 0;
}

/* ref: FUN_0043c980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043c980(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x43c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP((param_1 + (param_2 * 3 + 0x39) * 8))) = (undefined2)param_4;
  uVar1 = param_1 + param_2 * 0x18;
  *((undefined4 *)GEN_TOP((uVar1 + 0x1cc))) = param_3;
  *((undefined4 *)GEN_TOP((uVar1 + 0x1d0))) = param_5;
  *((undefined1 *)GEN_TOP((uVar1 + 0x1d4))) = param_6;
  *((undefined1 *)GEN_TOP((uVar1 + 0x1d5))) = param_7;
  *((undefined4 *)GEN_TOP((uVar1 + 0x1d8))) = param_8;
  *((undefined4 *)GEN_TOP((uVar1 + 0x1dc))) = param_9;
  return uVar1;
}

/* ref: FUN_0043c9e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = param_2 * 0x14f + param_1;
  if ((*((byte *)GEN_TOP(((int)this + iVar1 * 8 + 0x2130))) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + iVar1 * 8 + 0x2134)));
  }
  if ((*((byte *)GEN_TOP(((int)this + iVar1 * 8 + 0x16b8))) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP(((int)this + iVar1 * 8 + 0x16bc)));
  }
  return iVar2 != iVar1;
}

/* ref: FUN_0043ca30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043ca30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ca30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  uint in_EAX = 0;
  uint uVar6;
  uint uVar7;
  
  if (((REFG(int, 0x137104c) != 0) && (param_2 != 0)) && (param_1 != 0)) {
    uVar4 = *((ushort *)GEN_TOP(param_1));
    in_EAX = (uint)uVar4;
    if (uVar4 != 0xffff) {
      in_EAX = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,(int)(short)uVar4);
      iVar5 = *((int *)GEN_TOP((in_EAX + 0x10)));
      if (iVar5 == 2) {
        uVar6 = *((uint *)GEN_TOP((in_EAX + 0x14)));
        if (*((char *)GEN_TOP((param_1 + 0xd))) != '\0') {
          uVar6 = (*((int *)GEN_TOP((in_EAX + 8))) + *((int *)GEN_TOP((in_EAX + 4)))) - uVar6;
        }
        if (*((byte *)GEN_TOP((param_1 + 0xc))) != 0xff) {
          uVar6 = (uint)((1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 0xc))), *((byte *)GEN_TOP((param_1 + 0xc)))) & uVar6) != 0);
        }
        in_EAX = F_005a2710(((undefined *)GEN_TOP(param_2)) GEN_EDX_ARG,3);
        *((uint *)GEN_TOP((param_2 + 4))) = uVar6;
      }
      else {
        if (iVar5 == 3) {
          fVar2 = *((float *)GEN_TOP((in_EAX + 8)));
          fVar1 = *((float *)GEN_TOP((in_EAX + 4)));
          fVar3 = *((float *)GEN_TOP((in_EAX + 0x14)));
          F_005a2710(((undefined *)GEN_TOP(param_2)) GEN_EDX_ARG,3);
          uVar6 = (uint)((double)((float)GEN_TOF((((float10)fVar3 - (float10)fVar1) *
                                        (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1088118) /
                                                        ((float10)fVar2 - (float10)fVar1))))))) +
                        REFG(double, 0x1088108));
          *((uint *)GEN_TOP((param_2 + 4))) = uVar6;
          return uVar6;
        }
        if (iVar5 == 4) {
          uVar6 = F_0042a990(*((undefined4 *)GEN_TOP((in_EAX + 0x14))) GEN_EDX_ARG);
          uVar7 = F_005a2710(((undefined *)GEN_TOP(param_2)) GEN_EDX_ARG,6);
          *((uint *)GEN_TOP((param_2 + 4))) = uVar6;
          return uVar7;
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0043cb50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043cb50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43cb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined1 gen_out[0x8];
  float fVar1;
  int iVar2;
  byte bVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 extraout_ECX = 0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_60 = 0;
  undefined4 uStack_5c = 0;
  undefined4 uStack_58 = 0;
  undefined4 uStack_54 = 0;
  undefined4 uStack_50 = 0;
  undefined4 uStack_4c = 0;
  undefined4 uStack_48 = 0;
  undefined4 uStack_44 = 0;
  undefined4 uStack_40 = 0;
  undefined4 uStack_3c = 0;
  undefined4 uStack_38 = 0;
  undefined4 uStack_34 = 0;
  undefined4 uStack_30 = 0;
  undefined4 uStack_2c = 0;
  undefined4 uStack_28 = 0;
  undefined4 uStack_24 = 0;
  undefined4 uStack_20;
  uint uStack_1c;
  float local_18;
  int local_8;
  
  uVar4 = REFG(undefined4, 0x137104c);
  local_8 = param_1;
  if (REFG(undefined4, 0x137104c) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return REFG(undefined4, 0x137104c);
  }
  if (param_2 == 0) {
    return REFG(undefined4, 0x137104c);
  }
  if (*((short *)GEN_TOP(param_2)) == -1) {
    return REFG(undefined4, 0x137104c);
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x1c4))) = 1;
  local_18 = gen_bits2f((int)*((short *)GEN_TOP(param_2)));
  uStack_1c = 0x43cb9a;
  this = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((uVar4 + 0x10))) GEN_EDX_FWD,(int)*((short *)GEN_TOP(param_2)))));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar2 == 2) {
    if ((*((byte *)GEN_TOP(param_3)) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((uint *)GEN_TOP((param_3 + 4)));
    }
    uVar8 = uVar4;
    if (*((char *)GEN_TOP((param_2 + 0xd))) != '\0') {
      uVar8 = (*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 4)))) - uVar4;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x14)));
    if (*((byte *)GEN_TOP((param_2 + 0xc))) == 0xff) {
      if (uVar8 == uVar7) goto LAB_0043cca1;
      local_18 = 1.4013e-45;
      uStack_1c = uVar8;
    }
    else {
      uVar6 = 1 << GEN_SHC(*((byte *)GEN_TOP((param_2 + 0xc))), *((byte *)GEN_TOP((param_2 + 0xc))));
      uVar4 = (uint)((uVar6 & uVar7) != 0);
      if (uVar8 == 0) {
        uVar7 = uVar7 & ~uVar6;
      }
      else {
        uVar7 = uVar7 | uVar6;
      }
      if (uVar8 == uVar4) goto LAB_0043cca1;
      local_18 = 1.4013e-45;
      uStack_1c = uVar7;
    }
    local_18 = 1.4013e-45;
    uStack_20 = 0x43cca1;
    bVar3 = F_00414a40(this GEN_EDX_ARG,uStack_1c,1);
    uVar4 = CONCAT31(extraout_var_01,bVar3);
  }
  else {
    if (iVar2 == 3) {
      if ((*((byte *)GEN_TOP(param_3)) & 0xf) == 0) {
        param_2 = 0;
      }
      else {
        param_2 = *((uint *)GEN_TOP((param_3 + 4)));
      }
      local_18 = gen_bits2f(extraout_ECX);
      fVar1 = ((float)GEN_TOF(((float10)(int)param_2 / (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1088118) / ((float10)*((float *)GEN_TOP(((int)this + 8))) - (float10)*((float *)GEN_TOP(((int)this + 4))))))) + (float10)*((float *)GEN_TOP(((int)this + 4))))));
      local_18 = fVar1;
      uStack_1c = 0x43cc30;
      bVar3 = F_00414ad0(this GEN_EDX_ARG,fVar1);
      *((undefined1 *)GEN_TOP((local_8 + 0x1c4))) = 0;
      return CONCAT31(extraout_var_00,bVar3);
    }
    uVar4 = iVar2 - 4;
    if (uVar4 == 0) {
      uVar5 = 0;
      if ((*((byte *)GEN_TOP(param_3)) & 0xf) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((param_3 + 4)));
      }
      F_0042cc20((gen_out + 0x0) GEN_EDX_ARG,uVar5,REFG(undefined4, 0x108cc50));
      bVar3 = F_00414b60(this GEN_EDX_ARG,(*(undefined4 *)(gen_out + 0x0)),(*(undefined4 *)(gen_out + 0x4)),uStack_60,uStack_5c,uStack_58,uStack_54, uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38, uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c, (undefined4)gen_fl2bits(local_18));
      *((undefined1 *)GEN_TOP((local_8 + 0x1c4))) = 0;
      return CONCAT31(extraout_var,bVar3);
    }
  }
LAB_0043cca1: ;
  *((undefined1 *)GEN_TOP((local_8 + 0x1c4))) = 0;
  return uVar4;
}

/* ref: FUN_0043ccc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043ccc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43ccc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  uint * this_00;
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c4))) = 1;
  if ((((REFG(int, 0x137104c) != 0) && (param_2 != ((undefined *)GEN_TOP(0x0)))) && (param_1 != ((short *)GEN_TOP(0x0)))) &&
     (*param_1 != -1)) {
    this_00 = ((uint *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,(int)*param_1)));
    if (this_00[4] == 2) {
      uVar1 = *this_00;
      if (*((char *)GEN_TOP(((int)param_1 + 0xd))) != '\0') {
        uVar1 = (this_00[2] + this_00[1]) - uVar1;
      }
      if (*(byte *)(param_1 + 6) != 0xff) {
        uVar1 = (uint)((1 << GEN_SHC(*(byte *)(param_1 + 6), *(byte *)(param_1 + 6)) & uVar1) != 0);
      }
      F_005a2710(param_2 GEN_EDX_ARG,3);
      *((uint *)GEN_TOP(((int)param_2 + 4))) = uVar1;
      *((undefined1 *)GEN_TOP(((int)this + 0x1c4))) = 0;
      return;
    }
    F_00414c60(this_00 GEN_EDX_ARG);
    F_0043ca30((uint)param_1,(uint)param_2);
    *((undefined1 *)GEN_TOP(((int)this + 0x1c4))) = 0;
  }
  return;
}

/* ref: FUN_0043cd70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043cd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43cd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0043ccc0(this GEN_EDX_FWD,((undefined *)GEN_TOP(((int)this + (param_1 * 3 + 0x39) * 8))),(int)this + param_1 * 8 + 0x2130)
  ;
  return;
}

/* ref: FUN_0043cd90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c0))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[1]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_0043cdc0 */
GEN_OWN GEN_NOFRAME byte F_0043cdc0(void)
{
  GEN_ENTER(0x43cdc0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  if ((REFG(void * PTR32, 0x137104c) != ((undefined *)GEN_TOP(0x0))) &&
     (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) + 0xac))) != '\0')) {
    bVar1 = F_00976910(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_0043cde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43cde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_c;
  
  uVar2 = REFG(undefined4, 0x137104c);
  if ((REFG(undefined4, 0x137104c) != 0) && (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0')) {
    in_ecx = *((int *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x10)));
    this_00 = ((undefined *)GEN_TOP(F_00414010(in_ecx GEN_EDX_FWD,1)));
    this_01 = ((undefined *)GEN_TOP(F_00414010(in_ecx GEN_EDX_ARG,0)));
    F_00415190(((undefined *)GEN_TOP((in_ecx + 0xb0))) GEN_EDX_ARG,0,0x1c0);
    F_00415190(this_00 GEN_EDX_ARG,0,0x1c0);
    F_00415190(this_01 GEN_EDX_ARG,0,0x1c0);
    F_00414040(in_ecx GEN_EDX_ARG,0);
    puVar3 = ((uint *)GEN_TOP(((int)this + 0x2130)));
    puVar4 = ((uint *)GEN_TOP(((int)this + 0x1cc)));
    local_c = 0x14f;
    do {
      uVar2 = F_0043ca30((uint)(puVar4 - 1),(uint)puVar3);
      if (((*puVar4 & 0x1fffc0) != 0) && (uVar2 = *puVar3 & 0xf, uVar2 == 3)) {
        uVar1 = puVar3[1];
        F_005a2710(puVar3 + 0x29e GEN_EDX_ARG,3);
        puVar3[0x29f] = uVar1;
        uVar2 = F_005a2710(puVar3 + 0x53c GEN_EDX_ARG,3);
        puVar3[0x53d] = uVar1;
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 6;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar2;
}

/* ref: FUN_0043cee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043cee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    F_00414040(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,(uint)(param_1 != 0));
    puVar4 = ((uint *)GEN_TOP(((int)this + 0x2130)));
    puVar3 = ((uint *)GEN_TOP(((int)this + 0x1cc)));
    param_1 = 0x14f;
    do {
      F_0043ca30((uint)(puVar3 - 1),(uint)puVar4);
      if (((*puVar3 & 0x1fffc0) != 0) && ((*puVar4 & 0xf) == 3)) {
        uVar2 = puVar4[1];
        F_005a2710(puVar4 + 0x29e GEN_EDX_ARG,3);
        puVar4[0x29f] = uVar2;
        F_005a2710(puVar4 + 0x53c GEN_EDX_ARG,3);
        puVar4[0x53d] = uVar2;
      }
      puVar4 = puVar4 + 2;
      puVar3 = puVar3 + 6;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
    uVar2 = F_0081fc50(this_00 GEN_EDX_ARG);
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c0))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[1]))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,0);
    }
  }
  return uVar2;
}

/* ref: FUN_0043cfd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043cfd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43cfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00415250(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0043cff0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043cff0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43cff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414620(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0043d010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043d010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1c0)));
  if (uVar2 == param_1) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    *((uint *)GEN_TOP(((int)this + 0x1c0))) = uVar2;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    return uVar2;
  }
  if (uVar2 != 0) {
    while (uVar1 = *((uint *)GEN_TOP((uVar2 + 4))), uVar1 != param_1) {
      uVar2 = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((uVar2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  return uVar2;
}

/* ref: FUN_0043d060 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0043d060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return;
}

/* ref: FUN_0043d090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043d090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43d090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  do {
    uVar4 = 0;
    while( true ) {
      uVar2 = (uint)(byte)(&REFG(undefined1, 0x12fdd90))[(int)(uVar4)];
      iVar3 = uVar2 * 3 + 0x39;
      pvVar1 = ((undefined *)GEN_TOP(((int)this + iVar3 * 8)));
      if (*((int *)GEN_TOP(((int)this + iVar3 * 8 + 0x10))) == 0) {
        iVar3 = param_1 * 0x14f + uVar2;
        if (((byte)*((undefined4 *)GEN_TOP(((int)this + iVar3 * 8 + 0x2130))) & 0xf) == 3) {
          uVar2 = *((uint *)GEN_TOP(((int)this + iVar3 * 8 + 0x2134)));
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)pvVar1 + 0x10))))
                          (*((int *)GEN_TOP(((int)pvVar1 + 0x14))) + (int)this,uVar2,pvVar1,1,0,param_1);
      }
      if (uVar2 != (byte)(&REFG(undefined, 0x12fdd91))[(int)(local_8 + uVar4)]) break;
      uVar4 = uVar4 + 6;
      if (0xa7 < uVar4) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
    if (4 < (int)local_8) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_0043d160 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0043d160(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43d160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00424cd0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x38))))(((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG);
  if ((char)uVar2 == '\0') {
    if (param_1 == 6) {
      return 9;
    }
    if (param_1 == 5) {
      return 10;
    }
  }
  return (&REFG(undefined4, 0x1090214))[(int)(param_1)];
}

/* ref: FUN_0043d1b0 */
GEN_OWN GEN_NOFRAME uint F_0043d1b0(void)
{
  GEN_ENTER(0x43d1b0u, 0u, 0u, 0u, 0u);
  GEN_SUSPECT(0x43d1b0u, "uStack_58, uStack_54, uStack_50, uStack_4c, uStack_48, uStack_44, uStack_40, uStack_3c, uStack_38, uStack_34, uStack_30, uStack_2c, uStack_28, uStack_24, uStack_20, uStack_1c, uStack_18");
  undefined1 gen_out[0x8];
  undefined4 in_ecx;
  byte bVar1;
  undefined * this;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  this = ((undefined *)GEN_TOP(0x0));
  if (REFG(int, 0x137104c) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
    iVar5 = 0;
    do {
      uStack_10 = (&REFG(undefined4, 0x10901dc))[(int)(iVar5)];
      uStack_14 = 0x43d1d0;
      this = ((undefined *)GEN_TOP(F_00414500(in_ecx GEN_EDX_ARG,(&REFG(undefined4, 0x10901dc))[(int)(iVar5)])));
      if (*((int *)GEN_TOP(((int)this + 0x10))) == 4) {
        uStack_10 = 0x43d1e3;
        puVar2 = ((undefined4 *)GEN_TOP(F_00424cd0()));
        uStack_10 = 0x43d1ec;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar2)) + 0x38))))(((int *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
        if ((char)uVar3 == '\0') {
          if (iVar5 == 6) {
            iVar4 = 9;
          }
          else {
            iVar4 = 10;
            if (iVar5 != 5) goto LAB_0043d204;
          }
        }
        else {
LAB_0043d204: ;
          iVar4 = (&REFG(undefined4, 0x1090214))[(int)(iVar5)];
        }
        F_0042cc20((gen_out + 0x0) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x12fde38))[(int)(iVar4)],REFG(undefined4, 0x108cc50));
        bVar1 = F_00414b60(this GEN_EDX_ARG,(*(undefined4 *)(gen_out + 0x0)),(*(undefined4 *)(gen_out + 0x4)),uStack_58,uStack_54,uStack_50,uStack_4c,
                             uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                             uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,
                             uStack_10);
        this = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xe);
  }
  return (uint)this;
}

/* ref: FUN_0043d240 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43d240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  byte * pbVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x4)) = param_1;
  uVar8 = *(undefined4 *)(&REFG(undefined, 0x1090290) + param_1 * 4);
  uVar9 = *(undefined4 *)(&REFG(undefined, 0x1090250) + param_2 * 4);
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_0075e7c0(pvVar4 GEN_EDX_ARG,uVar9,uVar8);
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = &REFG(undefined4, 0x108fc30);
  do {
    uVar6 = param_2;
    if ((*(int * PTR32 *)(gen_frame + 0x0))[-2] == param_2) {
      if (*(*(int * PTR32 *)(gen_frame + 0x0)) == 7) {
        if ((*(int *)(gen_frame + 0x4)) == 10) {
          if (param_2 != 0xf) goto LAB_0043d2c2;
LAB_0043d32b: ;
          *((undefined1 *)GEN_TOP(((int)pvVar4 + 0x837))) = 1;
          uVar9 = 0x18;
          uVar8 = 0x15;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar9 = 0x19;
          uVar8 = 0x16;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar9 = 0x15;
          uVar8 = 0x18;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar8 = 0x16;
        }
        else {
          if (((*(int *)(gen_frame + 0x4)) == 0xb) && (param_2 == 0xe)) goto LAB_0043d32b;
LAB_0043d2c2: ;
          *((undefined1 *)GEN_TOP(((int)pvVar4 + 0x837))) = 0;
          uVar9 = 0x15;
          uVar8 = 0x15;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar9 = 0x16;
          uVar8 = 0x16;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar9 = 0x18;
          uVar8 = 0x18;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
          F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar8,uVar9);
          uVar8 = 0x19;
        }
        uVar9 = 0x19;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x1c))))
                                   (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
        uVar6 = F_0075e7c0(pvVar5 GEN_EDX_ARG,uVar9,uVar8);
      }
      else {
        (*(undefined1 *)(gen_frame + 0x8)) = 0;
        (*(undefined1 *)(gen_frame + 0x9)) = 0;
        (*(undefined1 *)(gen_frame + 0xa)) = 0;
        (*(undefined1 *)(gen_frame + 0xb)) = 0;
        (*(undefined1 *)(gen_frame + 0xc)) = 0;
        (*(undefined1 *)(gen_frame + 0xd)) = 0;
        (*(undefined1 *)(gen_frame + 0xe)) = 0;
        (*(undefined1 *)(gen_frame + 0xf)) = 0;
        (*(undefined1 *)(gen_frame + 0x10)) = 0;
        (*(undefined1 *)(gen_frame + 0x11)) = 0;
        (*(undefined1 *)(gen_frame + 0x12)) = 0;
        if ((char)(*(int * PTR32 *)(gen_frame + 0x0))[2] == '\0') {
          puVar7 = ((undefined1 *)GEN_TOP(F_00a343f0(pvVar4 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0))[-1])));
          (*(undefined1 *)(gen_frame + 0x8)) = *puVar7;
          (*(undefined1 *)(gen_frame + 0x9)) = puVar7[1];
          (*(undefined1 *)(gen_frame + 0xa)) = puVar7[2];
          (*(undefined1 *)(gen_frame + 0xb)) = puVar7[3];
          (*(undefined1 *)(gen_frame + 0xc)) = puVar7[4];
          (*(undefined1 *)(gen_frame + 0xd)) = puVar7[5];
          (*(undefined1 *)(gen_frame + 0xe)) = puVar7[6];
          (*(undefined1 *)(gen_frame + 0xf)) = puVar7[7];
          (*(undefined1 *)(gen_frame + 0x10)) = puVar7[8];
          (*(undefined1 *)(gen_frame + 0x11)) = puVar7[9];
        }
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x0));
        iVar3 = (*(int * PTR32 *)(gen_frame + 0x0))[1] * 2;
        if (iVar2 == 4) {
LAB_0043d43d: ;
          if ((uint)*((byte *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x4)) + iVar3 + 2))) == *(uint *)(&REFG(undefined, 0x108fbb8) + (*(int *)(gen_frame + 0x4)) * 8)
             ) {
            *((undefined1 *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x4)) + iVar3 + 2))) = 0;
          }
LAB_0043d458: ;
          if (((iVar2 == 5) || (iVar2 == 6)) &&
             (pbVar1 = ((byte *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x4)) + iVar3 + 3))),
             (uint)*pbVar1 == *(uint *)(&REFG(undefined, 0x108fbbc) + (*(int *)(gen_frame + 0x4)) * 8))) {
            *pbVar1 = 0;
          }
        }
        else {
          if (iVar2 == 5) goto LAB_0043d458;
          if (iVar2 == 6) goto LAB_0043d43d;
          if ((iVar2 == 1) || (iVar2 == 3)) {
            *((undefined *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x4)) + iVar3 + 2))) = (&REFG(undefined, 0x108fbb8))[(int)((*(int *)(gen_frame + 0x4)) * 8)];
          }
          if ((iVar2 == 2) || (iVar2 == 3)) {
            *((undefined *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x4)) + iVar3 + 3))) = (&REFG(undefined, 0x108fbbc))[(int)((*(int *)(gen_frame + 0x4)) * 8)];
          }
        }
        uVar6 = F_00a34390(pvVar4 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0))[-1],&(*(undefined1 *)(gen_frame + 0x8)));
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x0)) + 5;
    if (0x10901e3 < (int)(*(int * PTR32 *)(gen_frame + 0x0))) {
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_0043d4c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043d4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43d4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x16, 10, 4);
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xe)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  piVar4 = &REFG(undefined4, 0x108fc30);
  do {
    uVar3 = param_1;
    if (piVar4[-2] == param_1) {
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      (*(undefined1 *)(gen_frame + 0x2)) = 0;
      (*(undefined1 *)(gen_frame + 0x3)) = 0;
      (*(undefined1 *)(gen_frame + 0x4)) = 0;
      (*(undefined1 *)(gen_frame + 0x5)) = 0;
      (*(undefined1 *)(gen_frame + 0x6)) = 0;
      (*(undefined1 *)(gen_frame + 0x7)) = 0;
      (*(undefined1 *)(gen_frame + 0x8)) = 0;
      (*(undefined1 *)(gen_frame + 0x9)) = 0;
      (*(undefined1 *)(gen_frame + 0xa)) = 0;
      (*(undefined1 *)(gen_frame + 0xb)) = 0;
      (*(undefined1 *)(gen_frame + 0xc)) = 0;
      if ((iVar1 == 1) || (iVar1 == 3)) {
        ((gen_frame + 0x0))[iVar2 * 2] = 0;
      }
      if ((iVar1 == 2) || (iVar1 == 3)) {
        ((gen_frame + 0x1))[iVar2 * 2] = 0;
      }
      uVar3 = F_00a34390(this_00 GEN_EDX_ARG,piVar4[-1],&(*(undefined1 *)(gen_frame + 0x2)));
    }
    piVar4 = piVar4 + 5;
  } while ((int)piVar4 < 0x10901e4);
  return uVar3;
}

/* ref: FUN_0043d570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43d570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 10: ;
    F_0077c1a0(param_1 GEN_EDX_FWD,1,1,0);
    return 0;
  case 0xb0: ;
  case 0xc2: ;
    return 1;
  case 0xc4: ;
    return 2;
  case 0xc6: ;
  case 200: ;
  case 0xca: ;
  case 0xcc: ;
  case 0xce: ;
  case 0xd0: ;
  case 0xd2: ;
    F_0077c1a0(param_1 GEN_EDX_ARG,param_2 - 0xc6 >> 1,1,0);
    return 0;
  case 0xd4: ;
  case 0xd6: ;
  case 0xd8: ;
  case 0xda: ;
  case 0xdc: ;
  case 0xde: ;
  case 0xe0: ;
  case 0xe2: ;
  case 0xe4: ;
    F_0077c290(param_1 GEN_EDX_ARG,param_2 - 0xd4 >> 1,1);
    return 0;
  case 0xe6: ;
  case 0xe8: ;
  case 0xea: ;
  case 0xec: ;
    F_0077c2f0(param_1 GEN_EDX_ARG,param_2 - 0xe6 >> 1,1,*((char *)GEN_TOP(((int)this + 4))) == '\0');
    *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
    return 0;
  case 0xee: ;
  case 0xf0: ;
  case 0xf2: ;
    F_0077c340(param_1 GEN_EDX_ARG,param_2 - 0xee >> 1,1,0);
  }
  return 0;
}

/* ref: FUN_0043d750 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0043d750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43d750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  F_0077c200(param_1 GEN_EDX_ARG,param_2 - 1,1,0);
  return;
}

/* ref: FUN_0043d770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1090a98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = (*(undefined * PTR32 (*)[2])REFP(0x1090a8c));
  iVar3 = 0x191;
  do {
    F_00ad9300(((undefined *)GEN_TOP(((int)this + 0xac))) GEN_EDX_FWD,iVar3,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e5);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1ac)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  F_00ad9300(((undefined *)GEN_TOP(((int)this + 0xac))) GEN_EDX_ARG,0xca,0);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7c8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x774))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x71c))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x718)));
  iVar3 = 0xe;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
    F_0042c880(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1d8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  uVar2 = F_00abf1a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0043d830 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043d830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1ce))) = param_2;
  return param_2;
}

/* ref: FUN_0043d840 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0043d840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x1d0))) = 0xffffffff;
  return;
}

/* ref: FUN_0043d850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043d850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(short * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43d850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00abe8a0(this GEN_EDX_FWD,param_1 + 0x58,param_2);
  if ((uVar1 == 0) && (*param_2 == 0xcf)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0043d880 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043d880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x718)));
}

/* ref: FUN_0043d8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043d8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x770))) != -2) {
    bVar1 = F_00abe720(this GEN_EDX_FWD,(int)this + 0x774);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x718))) = *((undefined4 *)GEN_TOP(((int)this + 0x770)));
      in_EAX = F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x71c))) GEN_EDX_ARG,(int)this + 0x7c8);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x770))) = 0xfffffffe;
  }
  return in_EAX;
}

/* ref: FUN_0043d8f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043d8f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x71c;
}

/* ref: FUN_0043d900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043d900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43d900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = F_00abe040(this GEN_EDX_FWD);
  if ((*((char *)GEN_TOP(((int)this + 0x1ce))) == '\0') && (-1 < *((int *)GEN_TOP(((int)this + 0x1d0))))) {
    uVar3 = F_00427d90();
    uVar2 = (uint)uVar3 - *((uint *)GEN_TOP(((int)this + 0x1b8)));
    if ((((int)(uVar3 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x1bc))) !=
          (uint)((uint)uVar3 < *((uint *)GEN_TOP(((int)this + 0x1b8))))) ||
        (*((uint *)GEN_TOP(((int)this + 0x1c8))) < uVar2)) && (*((char *)GEN_TOP(((int)this + 0x1cc))) == '\0')) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x1d0)));
      if ((iVar1 < 0xf) &&
         (uVar2 = iVar1 * 0x54 + 0x22c + (int)this,
         **((char * PTR32 *)GEN_TOP((iVar1 * 0x54 + 0x22c + (int)this))) != '\0')) {
        *((int *)GEN_TOP(((int)this + 0x1d0))) = iVar1 + 1;
        *((undefined1 *)GEN_TOP(((int)this + 0x1cd))) = 1;
        uVar2 = F_00abefa0(this GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x1a8))));
        return uVar2;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0xffffffff;
    }
  }
  return uVar2;
}

/* ref: FUN_0043d9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043d9a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43d9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x81c))) = param_2;
  return param_2;
}

/* ref: FUN_0043d9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043d9d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43d9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  uVar1 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  if (param_3 != '\0') {
    *((uint *)GEN_TOP((param_1 + 0x820))) = *((uint *)GEN_TOP((param_1 + 0x820))) | uVar1;
    return param_1;
  }
  *((uint *)GEN_TOP((param_1 + 0x820))) = *((uint *)GEN_TOP((param_1 + 0x820))) & ~uVar1;
  return param_1;
}

/* ref: FUN_0043da00 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_0043da00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43da00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  uint * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  if (REFG(undefined4, 0x1372340) == 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG)));
    REFG(undefined4, 0x1372340) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,((char *)REFP(0x10903f8)));
    if (REFG(undefined4, 0x1372340) == 0) {
      return 0;
    }
  }
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar3 = F_0042a990(param_2 GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,uVar4);
  puVar6 = &(*(uint *)(gen_frame + 0x0));
  puVar5 = ((undefined1 *)(gen_frame + 0x4));
  uVar4 = 0;
  uVar3 = REFG(undefined4, 0x1372340);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
  bVar1 = F_00abe460(uVar3,uVar4,puVar5,puVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (bVar1 == 0) {
    return 0;
  }
  *param_3 = (*(uint *)(gen_frame + 0x0)) & 0xfffffffe;
  return 1;
}

/* ref: FUN_0043dac0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_0043dac0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43dac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  if (REFG(undefined4, 0x1372344) == 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG)));
    REFG(undefined4, 0x1372344) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,((char *)REFP(0x109040c)));
    if (REFG(undefined4, 0x1372344) == 0) {
      return 0;
    }
  }
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar3 = F_0042a990(param_2 GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,uVar4);
  puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
  puVar5 = ((undefined1 *)(gen_frame + 0x4));
  uVar4 = 1;
  uVar3 = REFG(undefined4, 0x1372344);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
  bVar1 = F_00abe460(uVar3,uVar4,puVar5,puVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (bVar1 == 0) {
    uVar4 = REFG(undefined4, 0x108cc50);
    uVar3 = F_0042a990(param_2 GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,uVar4);
    puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    uVar4 = 0;
    uVar3 = REFG(undefined4, 0x1372344);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
    bVar1 = F_00abe460(uVar3,uVar4,puVar5,puVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar4 = REFG(undefined4, 0x108cc50);
      uVar3 = F_0042a990(param_2 GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,uVar4);
      puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
      puVar5 = ((undefined1 *)(gen_frame + 0x4));
      uVar4 = 2;
      uVar3 = REFG(undefined4, 0x1372344);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
      bVar1 = F_00abe460(uVar3,uVar4,puVar5,puVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  *param_3 = (*(undefined4 *)(gen_frame + 0x0));
  return 1;
}

/* ref: FUN_0043dc10 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_0043dc10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43dc10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xc0, 0, 4);
  undefined * pvVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc));
  (*(int *)(gen_frame + 0x4)) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)))));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x0)) = 0;
      this = ((undefined *)GEN_TOP(F_00a363c0(pvVar1 GEN_EDX_ARG,0)));
      iVar4 = (*(int *)(gen_frame + 0x0));
      while (this != ((undefined *)GEN_TOP(0x0))) {
        if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
          uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
          if ((*((byte *)GEN_TOP(((int)this + 0x14))) & 1) != 0) {
            uVar2 = uVar2 + 1000000;
          }
        }
        else {
          this_00 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
          uVar2 = F_0046e5e0(this_00 GEN_EDX_ARG);
        }
        puVar3 = ((uint *)GEN_TOP(F_00ab24a0(uVar2)));
        if (puVar3 != ((uint *)GEN_TOP(0x0))) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,(int)puVar3 + (puVar3[3] & 0xffffff) + 0xc,REFG(undefined4, 0x108cc50));
          uVar5 = REFG(undefined4, 0x108cc50);
          uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
          F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar2,uVar5);
          uVar2 = F_00ad9c10(((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x64)),1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
          if (uVar2 == 0) {
            if (*((char *)GEN_TOP(((int)this + 6))) != '\0') {
              pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
              uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
              *param_3 = uVar2;
              return 1;
            }
            uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
            if ((*((byte *)GEN_TOP(((int)this + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
            *param_3 = uVar2;
            return 1;
          }
          F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
          uVar5 = REFG(undefined4, 0x108cc50);
          uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
          F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar2,uVar5);
          uVar2 = F_00ad9c10(((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),1);
          F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          if (uVar2 == 0) {
            if (*((char *)GEN_TOP(((int)this + 6))) != '\0') {
              pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(this GEN_EDX_ARG)));
              uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
              *param_3 = uVar2;
              return 1;
            }
            uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
            if ((*((byte *)GEN_TOP(((int)this + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
            *param_3 = uVar2;
            return 1;
          }
        }
        iVar4 = iVar4 + 1;
        this = ((undefined *)GEN_TOP(F_00a363c0(pvVar1 GEN_EDX_ARG,iVar4)));
      }
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    if (3 < (*(int *)(gen_frame + 0x4))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0043dea0 */
GEN_OWN GEN_NOFRAME byte F_0043dea0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43dea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x20, 0);
  float fVar1;
  
  if (param_2 != 0) {
    F_0046fe00(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_3);
    fVar1 = REFG(float, 0x1090708);
    *param_1 = (*(float *)(gen_frame + 0x0));
    param_1[1] = (*(float *)(gen_frame + 0x4));
    param_1[2] = (*(float *)(gen_frame + 0x8));
    if ((((!((*(float *)(gen_frame + 0x0)) < fVar1)) && (!(REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x0))))) && (!((*(float *)(gen_frame + 0x4)) < fVar1))) &&
       (((!(REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x4))) && (!(REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x8))))) && (!((*(float *)(gen_frame + 0x8)) < 0.0))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0043df40 */
GEN_OWN GEN_FRAME uint F_0043df40(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43df40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  F_00a60a40(param_2 GEN_EDX_ARG,param_1,0x19);
  return param_1;
}

/* ref: FUN_0043df60 */
GEN_OWN GEN_NOFRAME uint F_0043df60(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43df60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  
  F_00a61290(param_2 GEN_EDX_ARG,param_1);
  if (param_3 != 0) {
    (*(float *)(gen_frame + 0x3c)) = *((float *)GEN_TOP((param_3 + 0x40)));
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 0x70))) - (float10)*((float *)GEN_TOP((param_3 + 0x40))))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((param_3 + 0x44)));
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 0x74))) - (float10)*((float *)GEN_TOP((param_3 + 0x44))))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP((param_3 + 0x48)));
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 0x78))) - (float10)*((float *)GEN_TOP((param_3 + 0x48))))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x30)) = *param_1;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)*param_1);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x3c)) = param_1[1];
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)param_1[1]);
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x38)) = param_1[2];
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)param_1[2]);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x20));
      (*(float *)(gen_frame + 0x4)) = 0.0;
      (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x28));
      pfVar4 = ((float *)GEN_TOP(F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG)));
      fVar1 = ((float)GEN_TOF(((float10)pfVar4[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                     ((float10)*pfVar4 * (float10)(*(float *)(gen_frame + 0x20)) + (float10)pfVar4[1] * (float10)(*(float *)(gen_frame + 0x24)))
                     )));
      (*(float *)(gen_frame + 0x34)) = fVar1;
      fVar1 = ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP(((int)param_2 + 0xc0))))));
      (*(float *)(gen_frame + 0x34)) = fVar1;
      F_0046f0e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,fVar1);
      *param_1 = (float)((float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x20)));
      param_1[1] = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x24)));
      param_1[2] = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x28)));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_0043e0d0 */
GEN_OWN GEN_FRAME uint F_0043e0d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43e0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  F_00a60a40(param_2 GEN_EDX_ARG,param_1,0x1d);
  return param_1;
}

/* ref: FUN_0043e0f0 */
GEN_OWN GEN_FRAME uint F_0043e0f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43e0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  F_00a60a40(param_2 GEN_EDX_ARG,param_1,0x1e);
  return param_1;
}

/* ref: FUN_0043e110 */
GEN_OWN GEN_NOFRAME uint F_0043e110(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43e110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x40))) - (float10)*param_2))));
  fVar3 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x48))) - (float10)param_2[2]))));
  uVar1 = F_00431680((float)(fVar3 * fVar3 + fVar2 * fVar2));
  return uVar1;
}

/* ref: FUN_0043e170 */
GEN_OWN GEN_NOFRAME uint F_0043e170(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43e170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  fVar7 = gen_bits2f(param_2[1]);
  uVar1 = *param_2;
  uVar2 = param_2[2];
  (*(float *)(gen_frame + 0x0)) = fVar7;
  if ((float10)*(double *)&REFG(undefined, 0x1090b18) <= (float10)fVar7) {
    fVar7 = gen_bits2f(param_2[1]);
    pfVar4 = (float *)&REFG(undefined4, 0x108d6bc);
    (*(float *)(gen_frame + 0x0)) = fVar7;
    fVar5 = (float10)fVar7;
    fVar7 = (float)(fVar5 - (float10)*(double *)&REFG(undefined, 0x1090b18));
    (*(float *)(gen_frame + 0x0)) = fVar7;
    if (!(*(double *)&REFG(undefined, 0x1090b10) < (double)fVar7)) {
      pfVar4 = &(*(float *)(gen_frame + 0x0));
    }
    fVar3 = *((float *)GEN_TOP((param_3 + 4)));
    fVar7 = *pfVar4;
    pfVar4 = ((float *)GEN_TOP((param_3 + 4)));
    (*(float *)(gen_frame + 0x0)) = fVar7;
    if ((double)fVar3 < *(double *)&REFG(undefined, 0x1090b08)) {
      pfVar4 = (float *)&REFG(undefined4, 0x108d6c4);
    }
    fVar6 = (float10)fVar7;
    fVar7 = ((float)GEN_TOF((fVar6 * (float10)*pfVar4 + ((float10)1 - fVar6) * fVar5)));
  }
  *param_1 = uVar1;
  param_1[1] = (undefined4)gen_fl2bits(fVar7);
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0043e230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043e230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43e230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109072c));
  *((undefined4 *)GEN_TOP(((int)this + 0x70f0))) = 0;
  F_00a4afe0(((undefined *)GEN_TOP(((int)this + 0x71c0))) GEN_EDX_FWD,0x32,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x72a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7b18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x72ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x72a8))) = 0xe0000000;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x72a8)));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x72b0)));
  for (iVar2 = 0x62; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x7a08)));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x75c8)));
  iVar2 = 0x44;
  do {
    *puVar1 = 0xe0000000;
    puVar1[1] = 0;
    *puVar3 = 0;
    puVar1 = puVar1 + 2;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x6b90))),0,0x560);
  return (uint)this;
}

/* ref: FUN_0043e2d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0043e2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43e2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_10;
  int local_c;
  int * local_8;
  
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x71d0))),0,*((int *)GEN_TOP(((int)this + 0x71cc))) * 4);
  *((undefined4 *)GEN_TOP(((int)this + 0x71c8))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x72a8)));
  iVar4 = 0x32;
  do {
    puVar2[100] = *puVar2;
    puVar2[0x65] = puVar2[1];
    *puVar2 = 0xe0000000;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  local_8 = ((int *)GEN_TOP(0x0));
  if (0 < *((int *)GEN_TOP(((int)this + 0x71bc)))) {
    piVar5 = ((int *)GEN_TOP(((int)this + 0x70f4)));
    do {
      uVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(*piVar5)))))(*((undefined4 * PTR32 *)GEN_TOP(*piVar5)));
      piVar6 = ((int *)GEN_TOP(((int)this + 0x72a8)));
      iVar4 = 0;
      do {
        local_10 = (int)uVar8;
        if ((((piVar6[100] == local_10) &&
             (local_c = (int)((ulonglong)uVar8 >> 0x20), piVar6[0x65] == local_c)) &&
            (*piVar6 == -0x20000000)) && (piVar6[1] == 0)) {
          if (-1 < iVar4) {
            *((int *)GEN_TOP(((int)this + iVar4 * 8 + 0x72a8))) = local_10;
            *((int *)GEN_TOP(((int)this + iVar4 * 8 + 0x72ac))) = local_c;
            *((char *)GEN_TOP((*piVar5 + 0x3a))) = (char)iVar4;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x3b))) = 0;
            goto LAB_0043e3b6;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 2;
      } while (iVar4 < 0x32);
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x71d0))) + ((uint)((int)(uintptr_t)local_8) >> 5) * 4)));
      *puVar1 = *puVar1 | 1 << ((byte)local_8 & 0x1f);
      *((int *)GEN_TOP(((int)this + 0x71c8))) = *((int *)GEN_TOP(((int)this + 0x71c8))) + 1;
LAB_0043e3b6: ;
      local_8 = ((int *)GEN_TOP(((int)local_8 + 1)));
      piVar5 = piVar5 + 1;
    } while ((int)local_8 < *((int *)GEN_TOP(((int)this + 0x71bc))));
  }
  uVar7 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x71bc)))) {
    local_8 = ((int *)GEN_TOP(((int)this + 0x70f4)));
    do {
      if ((*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x71d0))) + (uVar7 >> 5) * 4))) & 1 << ((byte)uVar7 & 0x1f))
          != 0) {
        uVar3 = F_00431780(this GEN_EDX_ARG);
        uVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(*local_8)))))(*((undefined4 * PTR32 *)GEN_TOP(*local_8)));
        *((int *)GEN_TOP(((int)this + uVar3 * 8 + 0x72a8))) = (int)uVar8;
        *((int *)GEN_TOP(((int)this + uVar3 * 8 + 0x72ac))) = (int)((ulonglong)uVar8 >> 0x20);
        *((char *)GEN_TOP((*local_8 + 0x3a))) = (char)uVar3;
        *((undefined1 *)GEN_TOP((*local_8 + 0x3b))) = 1;
      }
      local_8 = local_8 + 1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *((int *)GEN_TOP(((int)this + 0x71bc))));
  }
  return 0;
}

/* ref: FUN_0043e470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043e470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43e470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  undefined8 uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  F_00a4afe0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x44,((undefined1 *)(gen_frame + 0x14)));
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x75c8)));
  iVar4 = 0x44;
  do {
    puVar2[0x88] = *puVar2;
    puVar2[0x89] = puVar2[1];
    *puVar2 = 0xe0000000;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  (*(uint *)(gen_frame + 0x28)) = *((uint *)GEN_TOP(((int)this + 0x70f0)));
  if (0x44 < *((uint *)GEN_TOP(((int)this + 0x70f0)))) {
    (*(uint *)(gen_frame + 0x28)) = 0x44;
  }
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x2c)) = 1;
  if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(((int)this + 0x6b90)));
    do {
      puVar2 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      uVar8 = (*((gen_lcode *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(*puVar2)))))(((undefined4 *)GEN_TOP(*puVar2)));
      (*(int *)(gen_frame + 0x20)) = (int)((ulonglong)uVar8 >> 0x20);
      F_00431860(puVar2);
      uVar3 = 0;
      piVar5 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x75c8)));
      do {
        if ((((piVar5[0x88] == (int)uVar8) && (piVar5[0x89] == (*(int *)(gen_frame + 0x20)))) &&
            (*piVar5 == -0x20000000)) && (piVar5[1] == 0)) {
          if (-1 < (int)uVar3) {
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 8 + 0x75c8))) = (int)uVar8;
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 8 + 0x75cc))) = (*(int *)(gen_frame + 0x20));
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 4 + 0x7a08))) = puVar2[0xf];
            *(char *)(puVar2 + 0x10) = (char)uVar3;
            goto LAB_0043e55f;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 < 0x44);
      puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + (uVar7 >> 5) * 4)));
      *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x2c));
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
LAB_0043e55f: ;
      (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
      uVar7 = uVar7 + 1;
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x2c)) < 0);
      this = (*(undefined * PTR32 *)(gen_frame + 0x30));
    } while ((int)uVar7 < (int)(*(uint *)(gen_frame + 0x28)));
  }
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x2c)) = 1;
  if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(((int)this + 0x6b90)));
    uVar3 = (*(uint *)(gen_frame + 0x28));
    do {
      if ((*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + (uVar7 >> 5) * 4))) & (*(uint *)(gen_frame + 0x2c))) != 0) {
        puVar2 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
        uVar3 = 0;
        piVar5 = ((int *)GEN_TOP(((int)this + 0x7a08)));
        piVar6 = ((int *)GEN_TOP(((int)this + 0x75c8)));
        do {
          if (((*piVar6 == -0x20000000) && (piVar6[1] == 0)) && (*piVar5 == puVar2[0xf]))
          goto LAB_0043e601;
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 2;
          piVar5 = piVar5 + 1;
        } while (uVar3 < 0x44);
        uVar3 = 0;
        piVar5 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x75c8)));
        do {
          if ((*piVar5 == -0x20000000) && (piVar5[1] == 0)) goto LAB_0043e601;
          uVar3 = uVar3 + 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 < 0x44);
        uVar3 = 0xffffffff;
LAB_0043e601: ;
        uVar8 = (*((gen_lcode *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(*puVar2)))))(((undefined4 *)GEN_TOP(*puVar2)));
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 8 + 0x75c8))) = (int)uVar8;
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 8 + 0x75cc))) = (int)((ulonglong)uVar8 >> 0x20);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + uVar3 * 4 + 0x7a08))) = puVar2[0xf];
        *(char *)(puVar2 + 0x10) = (char)uVar3;
        uVar3 = (*(uint *)(gen_frame + 0x28));
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
      }
      (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
      uVar7 = uVar7 + 1;
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x2c)) < 0);
    } while ((int)uVar7 < (int)uVar3);
  }
  uVar7 = F_00a4b160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_0043e690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043e690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43e690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a34690(this GEN_EDX_FWD,0x18b);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090ae8));
  F_0046db90(this GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x850))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  *((undefined4 *)GEN_TOP(((int)this + 0x858))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x85c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x860))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x864))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x868))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x86c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x87c))) = 0;
  F_00c49908((int)this + 0x870,0xc,((char *)REFP(0x108ebcc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090b4c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x850))) = (*(undefined * PTR32 (*)[9])REFP(0x1090b24));
  *((undefined4 *)GEN_TOP(((int)this + 0x880))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x884))) = 0;
  F_00431d10(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::UI::UIInputData::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043e730(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x43e730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  char cVar1;
  byte bVar2;
  short sVar3;
  int * piVar4;
  uint uVar5;
  uint extraout_EAX = 0;
  int iVar6;
  undefined2 uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  bVar2 = F_00976f60(param_2 GEN_EDX_FWD,(int)param_1 + 0x198);
  *((byte *)GEN_TOP(((int)param_1 + 0x832))) = bVar2;
  bVar2 = F_00a1b200(param_3 GEN_EDX_ARG,(int)param_1 + 0x358);
  *((byte *)GEN_TOP(((int)param_1 + 0x833))) = bVar2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x834))) = *(undefined1 *)param_4;
  bVar2 = F_00a1b230(param_3 GEN_EDX_ARG,(int)param_1 + 0x32c);
  *((byte *)GEN_TOP(((int)param_1 + 0x835))) = bVar2;
  bVar2 = F_00976fa0(param_2 GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)param_1 + 4))));
  *((byte *)GEN_TOP(((int)param_1 + 0x836))) = bVar2;
  puVar8 = param_2;
  puVar9 = ((undefined4 *)GEN_TOP(((int)param_1 + 4)));
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = param_2;
  puVar9 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x198)));
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = param_3;
  puVar9 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x32c)));
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = param_3;
  puVar9 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x358)));
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = param_4;
  puVar9 = ((undefined4 *)GEN_TOP(((int)param_1 + 900)));
  for (iVar6 = 0x125; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x70))))(piVar4 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x24);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x14))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x338))) = *((uint *)GEN_TOP(((int)param_1 + 0x338))) | 1;
    }
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x25);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x14))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x338))) = *((uint *)GEN_TOP(((int)param_1 + 0x338))) | 4;
    }
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x24);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x18))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x33c))) = *((uint *)GEN_TOP(((int)param_1 + 0x33c))) | 1;
    }
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x25);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x18))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x33c))) = *((uint *)GEN_TOP(((int)param_1 + 0x33c))) | 4;
    }
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x24);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x1c))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x344))) = *((uint *)GEN_TOP(((int)param_1 + 0x344))) | 1;
    }
    uVar5 = F_00433940(param_1 GEN_EDX_ARG,0x25);
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x1c))) & uVar5) != 0) {
      *((uint *)GEN_TOP(((int)param_1 + 0x344))) = *((uint *)GEN_TOP(((int)param_1 + 0x344))) | 4;
    }
  }
  bVar2 = F_00a347e0(param_1 GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)param_1 + 0x818))) = bVar2;
  bVar2 = F_00a34840(param_1 GEN_EDX_ARG);
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x830)));
  *((byte *)GEN_TOP(((int)param_1 + 0x819))) = bVar2;
  F_00a34760(param_1 GEN_EDX_ARG,1,1);
  F_00a34760(param_1 GEN_EDX_ARG,2,2);
  F_00a34760(param_1 GEN_EDX_ARG,4,4);
  uVar5 = extraout_EAX;
  if (cVar1 == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0x830))) == '\0') goto LAB_0043e956;
    if (param_7 == '\0') {
      uVar5 = F_00a34e80(param_1 GEN_EDX_ARG,0);
      uVar7 = (undefined2)uVar5;
      uVar5 = F_00a34e80(param_1 GEN_EDX_ARG,1);
    }
    else {
      uVar7 = (undefined2)param_5;
      uVar5 = param_6;
    }
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x824))) = uVar7;
    *((short *)GEN_TOP(((int)param_1 + 0x826))) = (short)uVar5;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x828))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x82c))) = 0;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x830))) != '\0') {
    sVar3 = *((short *)GEN_TOP(((int)param_1 + 0x824))) - *((short *)GEN_TOP(((int)param_1 + 0x32c)));
    *((uint *)GEN_TOP(((int)param_1 + 0x820))) = param_6;
    *((short *)GEN_TOP(((int)param_1 + 0x828))) = sVar3;
    *((short *)GEN_TOP(((int)param_1 + 0x82a))) =
         *((short *)GEN_TOP(((int)param_1 + 0x826))) - *((short *)GEN_TOP(((int)param_1 + 0x330)));
    *((uint *)GEN_TOP(((int)param_1 + 0x81c))) = param_5;
    return CONCAT22((short)(uVar5 >> 0x10),sVar3);
  }
LAB_0043e956: ;
  *((uint *)GEN_TOP(((int)param_1 + 0x820))) = param_6;
  *((uint *)GEN_TOP(((int)param_1 + 0x81c))) = param_5;
  return param_5;
}

/* ref: FUN_0043e970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043e970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43e970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 0xb + *((int *)GEN_TOP(((int)this + 0x83c)));
  for (iVar5 = 0; (iVar5 < 4 || (*((char *)GEN_TOP((iVar5 + iVar4))) != '\0')); iVar5 = iVar5 + 2) {
    bVar1 = *((byte *)GEN_TOP((iVar5 + iVar4)));
    bVar2 = *((byte *)GEN_TOP((iVar5 + 1 + iVar4)));
    if (((bVar1 < 0xa0) && ((*((byte *)GEN_TOP(((int)this + (uint)bVar1 * 4 + 0x388))) & 1) != 0)) &&
       ((*((byte *)GEN_TOP(((int)this + 0x819))) & bVar2) == bVar2)) {
      uVar3 = F_00a34530(this GEN_EDX_FWD,bVar1,bVar2);
      if (uVar3 == 0xffffffff) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0043e9f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043e9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43e9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 0xb + *((int *)GEN_TOP(((int)this + 0x83c)));
  for (iVar5 = 0; (iVar5 < 4 || (*((char *)GEN_TOP((iVar5 + iVar4))) != '\0')); iVar5 = iVar5 + 2) {
    bVar1 = *((byte *)GEN_TOP((iVar5 + iVar4)));
    bVar2 = *((byte *)GEN_TOP((iVar5 + 1 + iVar4)));
    if (((bVar1 < 0xa0) && ((*((byte *)GEN_TOP(((int)this + (uint)bVar1 * 4 + 0x388))) & 2) != 0)) &&
       ((*((byte *)GEN_TOP(((int)this + 0x819))) & bVar2) == bVar2)) {
      uVar3 = F_00a34530(this GEN_EDX_FWD,bVar1,bVar2);
      if (uVar3 == 0xffffffff) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0043ea70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043ea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43ea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 0xb + *((int *)GEN_TOP(((int)this + 0x83c)));
  for (iVar5 = 0; (iVar5 < 4 || (*((char *)GEN_TOP((iVar5 + iVar4))) != '\0')); iVar5 = iVar5 + 2) {
    bVar1 = *((byte *)GEN_TOP((iVar5 + iVar4)));
    bVar2 = *((byte *)GEN_TOP((iVar5 + 1 + iVar4)));
    if (((bVar1 < 0xa0) && ((*((byte *)GEN_TOP(((int)this + (uint)bVar1 * 4 + 0x388))) & 8) != 0)) &&
       ((*((byte *)GEN_TOP(((int)this + 0x819))) & bVar2) == bVar2)) {
      uVar3 = F_00a34530(this GEN_EDX_FWD,bVar1,bVar2);
      if (uVar3 == 0xffffffff) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0043eaf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043eaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43eaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 * 0xb + *((int *)GEN_TOP(((int)this + 0x83c)));
  iVar3 = 0;
  while( true ) {
    if ((3 < iVar3) && (*((char *)GEN_TOP((iVar3 + iVar2))) == '\0')) {
      return 0;
    }
    bVar1 = *((byte *)GEN_TOP((iVar3 + iVar2)));
    if ((bVar1 < 0xa0) && ((*((byte *)GEN_TOP(((int)this + (uint)bVar1 * 4 + 0x388))) & 4) != 0)) break;
    iVar3 = iVar3 + 2;
  }
  return 1;
}

/* ref: FUN_0043eb40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0043eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43eb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 0xc;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD);
  if (REFG(int, 0x137104c) != 0) {
    F_00414620(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,iVar1);
  }
  F_00adb000(((undefined *)GEN_TOP(((int)this + 0x70c))) GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x23f90))) + 0x20))))((int)this + 0x23f90,0);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x501e8))) + 0x20))))((int)this + 0x501e8,0);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x575b8))) + 0x20))))((int)this + 0x575b8,0);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x924f8))) + 0x20))))((int)this + 0x924f8,0);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG)));
  F_007c88b0(this_00 GEN_EDX_ARG);
  F_007c8420(((undefined *)GEN_TOP(((int)this + 0x63df0))) GEN_EDX_ARG);
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG));
}

/* ref: Client::UI::UIModule::vf72 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043ebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43ebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_8;
  
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  iVar2 = *((int *)GEN_TOP((uVar5 + 0x10)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
  iVar3 = *((int *)GEN_TOP((uVar5 + 0x44)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
  if ((*((uint *)GEN_TOP((uVar5 + 0xa8))) & 0x800) == 0) {
    cVar4 = *((char *)GEN_TOP((iVar2 + 0x149)));
  }
  else {
    cVar4 = *((char *)GEN_TOP((iVar3 + 0xc)));
  }
  if ((iVar2 == 0) || (cVar4 == '\0')) {
    *(undefined4 *)(this + 0x210) = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(this + 0x210);
    if (param_1 != 0) {
      local_8 = 0;
      do {
        uVar5 = uVar5 + param_1;
        if ((int)uVar5 < 0) {
          uVar5 = 7;
        }
        else if (7 < (int)uVar5) {
          uVar5 = 0;
        }
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
        if ((*((uint *)GEN_TOP((uVar6 + 0xa8))) & 0x800) == 0) {
          if (((uVar5 < *((uint *)GEN_TOP((iVar2 + 8)))) &&
              (piVar1 = ((int *)GEN_TOP((iVar2 + 0x70 + uVar5 * 0x18))), piVar1 != ((int *)GEN_TOP(0x0)))) &&
             (*piVar1 != 0 || piVar1[1] != 0)) {
            bVar7 = (piVar1[4] & 0x700U) == 0x400;
            goto LAB_0043ecdc;
          }
        }
        else if ((byte)uVar5 < 8) {
          bVar7 = *((int *)GEN_TOP((iVar3 + 0x18 + (uVar5 & 0xff) * 0x28))) == 0 &&
                  *((int *)GEN_TOP((iVar3 + 0x1c + (uVar5 & 0xff) * 0x28))) == 0;
LAB_0043ecdc: ;
          if (!bVar7) {
            *(uint *)(this + 0x210) = uVar5;
            return uVar5;
          }
        }
        local_8 = local_8 + 1;
        if (7 < local_8) {
          return *(uint *)(this + 0x210);
        }
      } while( true );
    }
    if ((int)uVar5 < 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x120))))(this GEN_EDX_ARG,1);
      return uVar5;
    }
  }
  return *(uint *)(this + 0x210);
}

/* ref: Client::UI::UIModule::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043ed50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ed50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)((*((ushort *)GEN_TOP((in_ecx + 0x9253c))) & (ushort)param_2) != 0);
}

/* ref: Client::UI::UIModule::vf24 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0043ed70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43ed70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x92544))) = 0;
  return;
}

/* ref: Client::UI::UIModule::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043ed80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x43ed80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  iVar2 = *((int *)GEN_TOP((uVar4 + 0x34)));
  uVar4 = 0;
  if (iVar2 != 0) {
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x30)));
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
      piVar3 = *((int * PTR32 *)GEN_TOP((uVar4 + 0x40)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))
                          (piVar3 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: Client::UI::UIModule::vf27 */
GEN_OWN GEN_NOFRAME byte F_0043edc0(void)
{
  GEN_ENTER(0x43edc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x4b);
  return *((int *)GEN_TOP((uVar1 + 0x14))) == 1;
}

/* ref: Client::UI::UIModule::vf29 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043ede0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43ede0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = (uint)(param_2 != '\0');
  this = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x4b)));
  bVar1 = F_00414a40(this GEN_EDX_ARG,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0043ee10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043ee10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x43ee10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  undefined1 uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 extraout_EDX = 0;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 local_8;
  
  uVar5 = 0;
  uVar2 = 0;
  local_8 = 0;
  if ((param_3 < 1) || (((byte)*param_2 & 0xf) != 3)) goto LAB_0043ef6f;
  iVar1 = param_2[1];
  local_8 = uVar2;
  if (iVar1 < 0) {
    if (7 < iVar1) goto LAB_0043ee97;
LAB_0043eedd: ;
    if (iVar1 == 0x10) {
      if ((REFG(undefined4 * PTR32, 0x1375c40) == ((undefined4 *)GEN_TOP(0x0))) || (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c40))))(REFG(undefined4 * PTR32, 0x1375c40) GEN_EDX_FWD), uVar5 == 0xe0000000)) {
        uVar5 = 0;
      }
      else {
        uVar5 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,uVar5,extraout_EDX);
      }
    }
    else if (iVar1 == 0x11) {
      pvVar3 = ((undefined *)GEN_TOP(F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        uVar6 = F_00aa1840(pvVar3 GEN_EDX_ARG);
        uVar5 = F_00475fa0((int)uVar6,(int)(uVar6 >> 0x20));
      }
    }
    else if (iVar1 == 0x12) {
      uVar5 = F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    }
    else if ((iVar1 == 0x13) && (REFG(int, 0x14ab5c4) != 0)) {
      uVar5 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,REFG(undefined4, 0x14ab5bc));
    }
  }
  else if (iVar1 < 8) {
    if (REFG(undefined1, 0x1338ad4) < 2) {
      if (iVar1 == 0) {
        uVar5 = REFG(undefined4, 0x1379694);
      }
    }
    else {
      uVar7 = 3;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
      uVar5 = F_00763050(uVar5 GEN_EDX_ARG,uVar7);
      uVar5 = F_00770440(uVar5 GEN_EDX_ARG,iVar1);
      pvVar3 = ((undefined *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,uVar5)));
      uVar5 = F_00ae09f0(pvVar3 GEN_EDX_ARG);
    }
  }
  else {
LAB_0043ee97: ;
    if (0xf < iVar1) goto LAB_0043eedd;
    uVar7 = 3;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    uVar4 = F_00763050(uVar4 GEN_EDX_ARG,uVar7);
    if ((uVar4 != 0) && (uVar4 = F_00771030(uVar4 GEN_EDX_ARG,iVar1 - 8), uVar4 != 0)) {
      uVar5 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 0x40))));
    }
    local_8 = 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  *((uint *)GEN_TOP((uVar4 + 0x10c))) = uVar5;
LAB_0043ef6f: ;
  if ((1 < param_3) && (uVar5 != 0)) {
    F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar5,local_8,0);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0043efa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043efa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43efa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  in_ecx[3] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  F_0042b630(in_ecx + 0xc GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_0043eff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043eff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43eff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (param_3 == '\0') {
    *((ushort *)GEN_TOP((param_1 + 0xc))) = *((ushort *)GEN_TOP((param_1 + 0xc))) & ~(ushort)param_2;
  }
  else {
    *((ushort *)GEN_TOP((param_1 + 0xc))) = *((ushort *)GEN_TOP((param_1 + 0xc))) | (ushort)param_2;
  }
  uVar2 = param_2;
  if ((param_2 & 0xa4) != 0) {
    bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
    if ((bVar1 & 0xa4) != 0xa4) {
      *((uint *)GEN_TOP((uVar2 + 0x820))) = *((uint *)GEN_TOP((uVar2 + 0x820))) | 1;
      return uVar2;
    }
    *((uint *)GEN_TOP((uVar2 + 0x820))) = *((uint *)GEN_TOP((uVar2 + 0x820))) & 0xfffffffe;
  }
  return uVar2;
}

/* ref: FUN_0043f040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043f040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint in_ecx;
  undefined * this_00;
  int * piVar3;
  byte local_5;
  
  local_5 = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  bVar1 = F_00559490(in_ecx GEN_EDX_ARG);
  if (bVar1 == 0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    if ((*((int *)GEN_TOP(((int)this + 0x18))) != 0) || ((*((byte *)GEN_TOP((uVar2 + 0x2c24c))) & 0x3c) != 0)) {
      return 0;
    }
    bVar1 = F_00434c70(this GEN_EDX_ARG);
    if ((((bVar1 != 0) && (bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x161), bVar1 != 0)) &&
        (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xb0))))(piVar3 GEN_EDX_ARG), uVar2 != 0)) &&
       (F_00a34270(this_00 GEN_EDX_ARG), uVar2 == 2)) {
      local_5 = 2;
    }
    bVar1 = F_00434cc0(this GEN_EDX_ARG);
    if (((bVar1 != 0) && (bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x162), bVar1 != 0)) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xb4))))(piVar3 GEN_EDX_ARG), uVar2 != 0)) {
      F_00a34270(this_00 GEN_EDX_ARG);
    }
  }
  return local_5;
}

/* ref: FUN_0043f130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  bVar1 = F_00559490(uVar3 GEN_EDX_ARG);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    bVar1 = F_00ac2f20();
    uVar3 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x15e);
      uVar3 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 == 0) {
        bVar1 = F_00a34970(this_00 GEN_EDX_ARG,3);
        uVar3 = CONCAT31(extraout_var_02,bVar1);
        if (bVar1 == 0) {
          return uVar3;
        }
      }
      if ((*((byte *)GEN_TOP((uVar2 + 0x2c24c))) & 0x3c) == 0) {
        F_00a69aa0();
        uVar2 = F_00a34f60(this_00 GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0043f1b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043f1b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x43f1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
  bVar1 = F_0075e990(uVar2 GEN_EDX_ARG);
  if (bVar1 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
    bVar1 = F_0075e9d0(uVar2 GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x14c);
      if ((*((int *)GEN_TOP((uVar2 + 0x14))) != 0) &&
         (((0x2f < param_2 && (param_2 < 0x5b)) || ((byte)(param_2 + 0x7e) < 0xd)))) {
        *((undefined1 *)GEN_TOP((param_1 + 0xe))) = 1;
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0043f220 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0043f220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint in_ecx;
  int * piVar4;
  undefined4 uVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  bVar1 = F_0075e990(uVar2 GEN_EDX_ARG);
  if (bVar1 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    bVar1 = F_0075e9d0(uVar2 GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x14c);
      if (*((int *)GEN_TOP((uVar2 + 0x14))) != 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
        bVar1 = F_00559490(uVar2 GEN_EDX_ARG);
        if (bVar1 == 0) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
          uVar2 = F_00a34210(uVar2 GEN_EDX_ARG);
          F_00a1b070(uVar2 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),0);
          if (((*((byte *)GEN_TOP((uVar2 + 0x4c))) & 1) == 0) && ((*((byte *)GEN_TOP((uVar2 + 0x48))) & 1) == 0)) {
            if (*((char *)GEN_TOP(((int)this + 0xe))) != '\0') {
              uVar5 = 4;
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
              pvVar3 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar5)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                if ((*(byte *)(gen_frame + 0x1)) == 0x86) {
                  F_0076afe0(pvVar3 GEN_EDX_ARG,0);
                }
                F_0076b150(pvVar3 GEN_EDX_ARG);
                F_0049e660();
              }
              *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 0;
              return 1;
            }
            if (((*(char *)(gen_frame + 0x0)) == '\x01') &&
               (((0x2f < (*(byte *)(gen_frame + 0x1)) && ((*(byte *)(gen_frame + 0x1)) < 0x5b)) || ((byte)((*(byte *)(gen_frame + 0x1)) + 0x7e) < 0xd)))) {
              uVar5 = 4;
              in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
              pvVar3 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar5)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                if ((*(byte *)(gen_frame + 0x1)) == 0x86) {
                  F_0076afe0(pvVar3 GEN_EDX_ARG,0);
                }
                F_0076b150(pvVar3 GEN_EDX_ARG);
              }
              piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))
                                        (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,uVar2);
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0043f390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043f390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43f390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  if ((param_2 & 2) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
    bVar1 = F_00559490(uVar2 GEN_EDX_ARG);
    if ((bVar1 == 0) && (param_3 == '\0')) {
      F_0046dfe0(this GEN_EDX_ARG);
    }
    else {
      F_00a34300(this GEN_EDX_ARG);
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  bVar1 = F_00559490(uVar2 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 == 0) && (param_3 == '\0')) {
    uVar2 = F_0043d8a0(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_0043f410 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0043f410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  iVar4 = 1;
  (*(int *)(gen_frame + 0x0)) = 8;
  do {
    bVar1 = F_00a34970(this_00 GEN_EDX_ARG,iVar4 + 0x142);
    if (bVar1 != 0) {
      uVar6 = *((undefined4 *)GEN_TOP(((int)this + 4)));
      uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x108ece4)),iVar4);
      F_00abefa0(this_01 GEN_EDX_ARG,uVar3,uVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    iVar4 = iVar4 + 1;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x153);
  if ((bVar1 != 0) && (uVar2 = F_00763050(uVar2 GEN_EDX_ARG,3), uVar2 != 0)) {
    if ((*((int *)GEN_TOP((uVar2 + 0x2e8))) != -0x20000000) &&
       (uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*((int *)GEN_TOP((uVar2 + 0x2e8))),*((undefined4 *)GEN_TOP((uVar2 + 0x2ec)))),
       uVar2 != 0)) {
      F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar2,0,0);
    }
  }
  bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x154);
  if ((bVar1 != 0) && (REFG(undefined4 * PTR32, 0x1375c4c) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c4c))))(REFG(undefined4 * PTR32, 0x1375c4c));
    if (((int)uVar5 != -0x20000000) &&
       (uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20)), uVar2 != 0))
    {
      F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar2,0,0);
    }
  }
  bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x155);
  if ((bVar1 != 0) && (REFG(undefined4 * PTR32, 0x1375c3c) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c3c))))(REFG(undefined4 * PTR32, 0x1375c3c));
    if (((int)uVar5 != -0x20000000) &&
       (uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20)), uVar2 != 0))
    {
      F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar2,0,0);
    }
  }
  bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x156);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (REFG(undefined4 * PTR32, 0x1375c48) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c48))))(REFG(undefined4 * PTR32, 0x1375c48));
    if ((int)uVar5 == -0x20000000) {
      uVar2 = 0xe0000000;
    }
    else {
      uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar3,0,0);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0043f600 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043f600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if (uVar3 == 0xe0000000) {
    return 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  uVar2 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  bVar1 = F_004349a0(this GEN_EDX_ARG,uVar2);
  if (bVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
    uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    bVar1 = F_004349a0(this GEN_EDX_ARG,uVar2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0043f660 */
GEN_OWN GEN_FRAME byte F_0043f660(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43f660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  int local_c;
  
  iVar7 = 0;
  local_c = 0;
  bVar3 = false;
  bVar2 = true;
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
    if ((*piVar4 == 4) || (*piVar4 == 5)) {
      cVar1 = *param_1;
      pcVar6 = param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return 1;
        }
        iVar7 = iVar7 + 1;
        if (0x1f < iVar7) {
          return 0;
        }
        cVar1 = *pcVar6;
        if (cVar1 == ' ') {
          return 0;
        }
        if (cVar1 == '<') break;
        if (cVar1 == '>') {
          return 0;
        }
        uVar5 = F_0042acc0(cVar1);
        pcVar6 = pcVar6 + uVar5;
        cVar1 = *pcVar6;
      }
      return 0;
    }
  }
  pcVar6 = param_1;
  if (*param_1 != '\0') {
    do {
      iVar7 = iVar7 + 1;
      if (0x1f < iVar7) {
        return 0;
      }
      if (bVar3) {
        local_c = local_c + 1;
      }
      cVar1 = *pcVar6;
      if (bVar2) {
        if (cVar1 < 'A') {
          return 0;
        }
        if ('Z' < cVar1) {
          return 0;
        }
        bVar2 = false;
      }
      else if (cVar1 == ' ') {
        if (bVar3) {
          return 0;
        }
        if (iVar7 < 3) {
          return 0;
        }
        bVar3 = true;
        bVar2 = true;
      }
      else if (((cVar1 < 'a') || ('z' < cVar1)) && (cVar1 != '\'')) {
        return 0;
      }
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if ((bVar3) && (1 < local_c)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0043f750 */
GEN_OWN_GS GEN_FRAME uint F_0043f750(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x43f750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined1 * puVar6;
  char * pcVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if (param_3 != 0) {
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG)));
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG)));
      if ((*piVar5 == 4) || (*piVar5 == 5)) goto LAB_0043f771;
    }
    bVar3 = F_0043f660(param_2);
    if (bVar3 != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      bVar2 = false;
      cVar1 = *param_2;
      pcVar7 = param_2;
      while (cVar1 != '\0') {
        if (*pcVar7 == ' ') {
          if (bVar2) break;
          bVar2 = true;
        }
        else {
          puVar6 = ((undefined1 *)(gen_frame + 0x54));
          if (!bVar2) {
            puVar6 = ((undefined1 *)(gen_frame + 0x0));
          }
          F_0042d160(puVar6 GEN_EDX_ARG,*pcVar7);
        }
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      F_0042aca0(param_1 GEN_EDX_ARG);
      if ((param_3 == 2) || (param_3 == 3)) {
        puVar6 = ((undefined1 *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        F_0042d160(param_1 GEN_EDX_ARG,*puVar6);
        F_0042d160(param_1 GEN_EDX_ARG,0x2e);
      }
      else {
        F_0042ccf0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      }
      F_0042d160(param_1 GEN_EDX_ARG,0x20);
      if ((param_3 == 1) || (param_3 == 3)) {
        puVar6 = ((undefined1 *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG)));
        F_0042d160(param_1 GEN_EDX_ARG,*puVar6);
        F_0042d160(param_1 GEN_EDX_ARG,0x2e);
      }
      else {
        F_0042e360(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return (uint)uVar8;
    }
  }
LAB_0043f771: ;
  uVar4 = F_0042e430(param_1 GEN_EDX_ARG,param_2);
  return uVar4;
}

/* ref: FUN_0043f8b0 */
GEN_OWN_GS GEN_FRAME uint F_0043f8b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x43f8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  undefined * this;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  this = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25f8)));
  uVar3 = REFG(undefined4, 0x137104c);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if (param_1 < 0x48) {
      uVar3 = F_004ea820(this GEN_EDX_ARG,param_1);
      return uVar3;
    }
    uVar5 = param_1 - 1000000;
    if (uVar5 < 0x33) {
      fVar1 = (float10)1;
      if ((int)uVar5 < 2) {
        fVar2 = (float10)0;
        F_009cfd00(((char *)REFP(0x108ed00)),4,0,(float)fVar2,(float)fVar2,(float)fVar2,
                     (float)fVar1,(float)fVar1,(float)fVar1,(float)fVar2);
      }
      puVar4 = ((uint *)GEN_TOP(F_00ab3b10(uVar5)));
      uVar3 = 0;
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,((char *)REFP(0x108ed20)),(*puVar4 & 0xffffff) + (int)puVar4);
        uVar3 = F_004e9a80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(float)(float10)1,0,0,1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0043f9a0 */
GEN_OWN GEN_NOFRAME uint F_0043f9a0(void)
{
  GEN_ENTER(0x43f9a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if (*((int *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25f8))) != 0) {
    uVar1 = F_004e80e0(9,100);
  }
  return uVar1;
}

/* ref: FUN_0043f9c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (((**((char * PTR32 *)GEN_TOP(((int)this + 0x50))) == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) != 0)) &&
     (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))), iVar1 != 0)) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD,iVar1 + 0x1c);
  }
  uVar2 = F_0042a990(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0043f9f0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_0043f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43f9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0 || *((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    return *((ulonglong *)GEN_TOP(((int)this + 0x48)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18)));
    uVar2 = *puVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = puVar1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar2;
    return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + 0x4c))),uVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  return (ulonglong)*((uint *)GEN_TOP(((int)this + 0x4c))) << 0x20;
}

/* ref: FUN_0043fa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43fa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_004355d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43fa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined1 uVar1;
  byte bVar2;
  int * piVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar4;
  code * pcVar5;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (this[0xd] == *((undefined *)GEN_TOP((param_1 + 0x322)))) {
    if (*((char *)GEN_TOP((param_1 + 0x321))) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x10);
      if ((uVar4 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8))) != 0)) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8))) = 0;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_1,0x14);
    if (*((char *)GEN_TOP((param_1 + 800))) != '\0') {
      this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x322)));
      (*(undefined1 *)(gen_frame + 0x18)) = *((undefined1 *)GEN_TOP((param_1 + 800)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0xe3;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      (*(undefined1 *)(gen_frame + 0x19)) = uVar1;
      bVar2 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      return CONCAT31(extraout_var,bVar2);
    }
    pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x14)));
  }
  else {
    pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  }
  uVar4 = (*pcVar5)(this);
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043fb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x43fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    this[0xd] = this[0xc];
    this[0xc] = (undefined1)((char)this[0xc] + '\x01');
    (*(undefined1 *)(gen_frame + 0x19)) = this[0xd];
    (*(undefined4 *)(gen_frame + 0x0)) = 0xe3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x10);
      if ((uVar3 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) != 0)) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) = 0;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0043fc40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043fc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43fc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    bVar1 = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = 0xe1;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
    puVar5 = param_1;
    puVar6 = ((undefined4 *)(gen_frame + 0x18));
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x10);
    if ((uVar3 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) = 0;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_0043fd10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43fd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar7 = F_00435540(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if ((this_00 == ((undefined *)GEN_TOP(0x0))) || (uVar7 == 0)) {
    bVar1 = 0;
  }
  else {
    (*(ulonglong *)(gen_frame + 0x18)) = uVar7;
    (*(undefined4 *)(gen_frame + 0x0)) = 0xe2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
    puVar5 = param_1;
    puVar6 = ((undefined4 *)(gen_frame + 0x20));
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x10);
    if ((uVar3 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8))) = 0;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_0043fdf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0043fdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43fdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090768));
  F_0042b630((int)this + 0x18 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x38c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x390))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x394))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x108d02f));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x6c))),0,800);
  return (uint)this;
}

/* ref: FUN_0043fe60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0043fe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x43fe60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined1 uVar1;
  byte bVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    *((char *)GEN_TOP(((int)this + 0xd))) = *((char *)GEN_TOP(((int)this + 0xc)));
    *((char *)GEN_TOP(((int)this + 0xc))) = *((char *)GEN_TOP(((int)this + 0xc))) + '\x01';
    uVar1 = *((undefined1 *)GEN_TOP(((int)this + 0xd)));
    puVar3 = ((undefined4 *)GEN_TOP(F_0042a990((int)this + 0x18 GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined1 *)(gen_frame + 0x1d)) = *((undefined1 *)GEN_TOP(((int)this + 0x10)));
    (*(undefined1 *)(gen_frame + 0x1c)) = uVar1;
    (*(undefined1 *)(gen_frame + 0x1f)) = *((undefined1 *)GEN_TOP(((int)this + 0x12)));
    (*(undefined1 *)(gen_frame + 0x1e)) = *((undefined1 *)GEN_TOP(((int)this + 0x11)));
    (*(undefined1 *)(gen_frame + 0x21)) = *((undefined1 *)GEN_TOP(((int)this + 0x14)));
    (*(undefined1 *)(gen_frame + 0x20)) = *((undefined1 *)GEN_TOP(((int)this + 0x13)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0x109;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x98;
    puVar5 = ((undefined4 *)(gen_frame + 0x22));
    for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    bVar2 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar2 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38c))) = param_1;
      *((undefined4 *)GEN_TOP(((int)this + 0x390))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x394))) = param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0043ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x43ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xc3c, 4);
  undefined1 IVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xc28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc2c);
  uVar4 = CONCAT31((int3)((uint)param_1 >> 8),*((undefined *)GEN_TOP((param_1 + 0xac))));
  if (*((undefined *)GEN_TOP((param_1 + 0xac))) == this[0xd]) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x24);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x21);
    if (*((int *)GEN_TOP((param_1 + 0xa4))) == 0) {
      if ((uVar4 != 0) && (uVar5 != 0)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
        if (*((int *)GEN_TOP((uVar4 + 600))) == 0) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
          *((uint *)GEN_TOP((uVar4 + 600))) = uVar6;
        }
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar4 + 600))) GEN_EDX_ARG,0x79a)));
        uVar8 = 0;
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
        uVar4 = F_00cb0950(pvVar7 GEN_EDX_ARG,uVar8);
        if (uVar4 != **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20)))) {
          **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) = uVar4;
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
      }
    }
    else if (((*((int *)GEN_TOP((param_1 + 0xa4))) == 0x235a) && (uVar4 != 0)) && (uVar5 != 0)) {
      **((undefined4 * PTR32 *)GEN_TOP((uVar4 + 0x20))) = 0;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar4 + 600))) == 0) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
        *((uint *)GEN_TOP((uVar4 + 600))) = uVar6;
      }
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar4 + 600))) GEN_EDX_ARG,0x7cd)));
      uVar8 = 0;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
      uVar4 = F_00cb0950(pvVar7 GEN_EDX_ARG,uVar8);
      if (uVar4 != **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20)))) {
        **((uint * PTR32 *)GEN_TOP((uVar5 + 0x20))) = uVar4;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar8 = 0x3c;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
      pvVar7 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar8)));
      if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
        F_007df0b0(pvVar7 GEN_EDX_ARG);
      }
    }
    if (*(int *)(this + 0x38c) == *((int *)GEN_TOP((param_1 + 0xa8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_1,0x14);
    *(undefined4 *)(this + 0x390) = *((undefined4 *)GEN_TOP((param_1 + 0xa0)));
    if ((*((int *)GEN_TOP((param_1 + 0xa0))) != 0) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG), uVar4 < *(uint *)(this + 0x394))) {
      pvVar7 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      IVar1 = this[0x10];
      if (IVar1 == (undefined1)0xa) {
        (*(undefined1 *)(gen_frame + 0x0)) = (undefined1)0xb;
        IVar1 = (*(undefined1 *)(gen_frame + 0x0));
      }
      uVar9 = 0;
      uVar8 = 0;
      uVar4 = F_0042a990(this + 0x18 GEN_EDX_ARG);
      uVar4 = F_00470ad0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xa0))),*((undefined1 *)GEN_TOP((param_1 + 0xac)))
                           ,IVar1,this[0x11],this[0x12],this[0x13],this[0x14],uVar4);
      bVar2 = F_00974da0(pvVar7 GEN_EDX_ARG,uVar4,uVar8,uVar9);
      return CONCAT31(extraout_var,bVar2);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00440240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x440240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined1 uVar1;
  byte bVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  code * pcVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (this[0xd] == *((undefined *)GEN_TOP(((int)param_1 + 0xd)))) {
    if (*((short *)GEN_TOP(((int)param_1 + 10))) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_1 + 4,10);
    if (*(short *)(param_1 + 2) != 0) {
      this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      (*(undefined4 *)(gen_frame + 0x18)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x1c)) = param_1[1];
      (*(undefined2 *)(gen_frame + 0x20)) = *(undefined2 *)(param_1 + 2);
      (*(undefined1 *)(gen_frame + 0x23)) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xd)));
      (*(undefined1 *)(gen_frame + 0x22)) = *(undefined1 *)(param_1 + 3);
      uVar1 = *((undefined1 *)GEN_TOP(((int)param_1 + 0xe)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0xcb;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x24)) = uVar1;
      bVar2 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      return CONCAT31(extraout_var,bVar2);
    }
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x14)));
  }
  else {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  }
  uVar3 = (*pcVar4)(this);
  return uVar3;
}

/* ref: FUN_00440340 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00440340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x440340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  undefined * pvVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  if (param_3 != param_4) {
    iVar5 = param_3 * 5;
    iVar6 = param_4 * 5;
    F_0042b630(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
    iVar12 = param_4 << 5;
    iVar7 = param_3 << 5;
    (*(int *)(gen_frame + 0x0)) = 2;
    do {
      iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
      iVar3 = *((int *)GEN_TOP((iVar7 + iVar2)));
      if (iVar3 != *((int *)GEN_TOP((iVar12 + iVar2)))) {
        *((int *)GEN_TOP((iVar7 + iVar2))) = *((int *)GEN_TOP((iVar12 + iVar2)));
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar12))) != iVar3) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar12))) = iVar3;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
      iVar3 = *((int *)GEN_TOP((iVar7 + 4 + iVar2)));
      iVar4 = *((int *)GEN_TOP((iVar12 + 4 + iVar2)));
      if (*((int *)GEN_TOP((iVar7 + 4 + iVar2))) != iVar4) {
        *((int *)GEN_TOP((iVar7 + 4 + iVar2))) = iVar4;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar12 + 4 + *((int *)GEN_TOP((param_1 + 0x20)))))) != iVar3) {
        *((int *)GEN_TOP((iVar12 + 4 + *((int *)GEN_TOP((param_1 + 0x20)))))) = iVar3;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
      iVar3 = *((int *)GEN_TOP((iVar7 + 8 + iVar2)));
      iVar4 = *((int *)GEN_TOP((iVar12 + 8 + iVar2)));
      if (iVar3 != iVar4) {
        *((int *)GEN_TOP((iVar7 + 8 + iVar2))) = iVar4;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar12 + 8 + *((int *)GEN_TOP((param_1 + 0x20)))))) != iVar3) {
        *((int *)GEN_TOP((iVar12 + 8 + *((int *)GEN_TOP((param_1 + 0x20)))))) = iVar3;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      iVar2 = *((int *)GEN_TOP((param_1 + 0x20)));
      iVar3 = *((int *)GEN_TOP((iVar7 + 0xc + iVar2)));
      iVar4 = *((int *)GEN_TOP((iVar12 + 0xc + iVar2)));
      if (iVar3 != iVar4) {
        *((int *)GEN_TOP((iVar7 + 0xc + iVar2))) = iVar4;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((iVar12 + 0xc + *((int *)GEN_TOP((param_1 + 0x20)))))) != iVar3) {
        *((int *)GEN_TOP((iVar12 + 0xc + *((int *)GEN_TOP((param_1 + 0x20)))))) = iVar3;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      iVar7 = iVar7 + 0x10;
      iVar12 = iVar12 + 0x10;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    iVar7 = *((int *)GEN_TOP(((int)this + 0x18))) + param_3 * 0x48;
    bVar1 = *((byte *)GEN_TOP((iVar7 + 0x13)));
    if (((bVar1 & 1) != 0) ||
       ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13 + param_4 * 0x48))) & 1) != 0)) {
      if ((bVar1 & 1) == 0) {
        uVar8 = iVar7 + 0x1c;
      }
      else {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
        if (*((int *)GEN_TOP((uVar8 + 600))) == 0) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar8 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar8 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
          *((uint *)GEN_TOP((uVar8 + 600))) = uVar9;
        }
        piVar10 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar8 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar8 + 600))) GEN_EDX_ARG,0x3c4)))
        ;
        uVar15 = 0;
        pvVar11 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 8))))(piVar10 GEN_EDX_ARG)));
        uVar8 = F_00cb0950(pvVar11 GEN_EDX_ARG,uVar15);
      }
      if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_3 * 0x14)))) {
        *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
      }
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_3 * 0x14))) = uVar8;
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x13 + param_4 * 0x48))) & 1) == 0) {
        iVar7 = *((int *)GEN_TOP(((int)this + 0x18))) + param_4 * 0x48 + 0x1c;
        if (iVar7 != *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_4 * 0x14)))) {
          *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
        }
        *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_4 * 0x14))) = iVar7;
      }
      else {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
        if (*((int *)GEN_TOP((uVar8 + 600))) == 0) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar8 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar8 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
          *((uint *)GEN_TOP((uVar8 + 600))) = uVar9;
        }
        piVar10 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar8 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar8 + 600))) GEN_EDX_ARG,0x3c4)))
        ;
        uVar15 = 0;
        pvVar11 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 8))))(piVar10 GEN_EDX_ARG)));
        uVar8 = F_00cb0950(pvVar11 GEN_EDX_ARG,uVar15);
        if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_4 * 0x14)))) {
          *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
        }
        *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + param_4 * 0x14))) = uVar8;
      }
    }
    F_0042e430(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10 + param_3 * 0x14))));
    F_00431250(param_2 GEN_EDX_ARG,iVar5 + 4,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10 + param_4 * 0x14)))
                 ,0,1,0);
    uVar14 = 0;
    uVar15 = 1;
    uVar13 = 0;
    uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,iVar6 + 4,uVar8,uVar13,uVar15,uVar14);
    F_0042e430(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc + param_3 * 0x14))));
    F_00431250(param_2 GEN_EDX_ARG,iVar5 + 3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc + param_4 * 0x14))),
                 0,1,0);
    uVar14 = 0;
    uVar15 = 1;
    uVar13 = 0;
    uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,iVar6 + 3,uVar8,uVar13,uVar15,uVar14);
    F_0042e430(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_3 * 0x14))));
    F_00431250(param_2 GEN_EDX_ARG,iVar5 + 1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_4 * 0x14))),0,
                 1,0);
    uVar14 = 0;
    uVar15 = 1;
    uVar13 = 0;
    uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,iVar6 + 1,uVar8,uVar13,uVar15,uVar14);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_004406c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004406c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4406c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int in_ecx;
  
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x1090b80));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_0042b630((int)this + 0xf0 GEN_EDX_FWD);
  in_ecx = (int)this + 0x144;
  iVar3 = 1;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  *((undefined1 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x18))),0,0xd8);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG)));
  *((char *)GEN_TOP(((int)this + 0x29))) = '\x01' << GEN_SHC((byte)*puVar2, (byte)*puVar2);
  return (uint)this;
}

/* ref: FUN_00440750 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00440750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x440750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0xcc;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    bVar1 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440810 */
GEN_OWN GEN_NOFRAME byte F_00440810(void)
{
  GEN_ENTER(0x440810u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0xce;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004408a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004408a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4408a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined1 uVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  puVar4 = param_1;
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x18)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x20)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[1];
    (*(undefined1 *)(gen_frame + 0x28)) = *(undefined1 *)(puVar4 + 4);
    (*(undefined4 *)(gen_frame + 0x24)) = puVar4[3];
    uVar1 = *((undefined1 *)GEN_TOP(((int)puVar4 + 0x11)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0xcd;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xe8;
    (*(undefined1 *)(gen_frame + 0x29)) = uVar1;
    puVar4 = ((undefined4 *)GEN_TOP(((int)puVar4 + 0x12)));
    puVar5 = ((undefined4 *)(gen_frame + 0x2a));
    for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    bVar2 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440970 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00440970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x440970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int in_ecx;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  bool bVar8;
  ulonglong uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  in_ecx = (int)this + 0xf0;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,in_ecx,((undefined1 *)(gen_frame + 0x0)),0xc0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  F_00a27330(((undefined *)GEN_TOP((uVar3 + 0x1b8))) GEN_EDX_ARG,in_ecx);
  pbVar4 = ((byte *)GEN_TOP(F_0042a990(in_ecx GEN_EDX_ARG)));
  pbVar7 = ((byte *)GEN_TOP(((int)this + 0x2a)));
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00440a10: ;
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00440a15;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00440a10;
    pbVar7 = pbVar7 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00440a15: ;
  uVar3 = 0;
  if (iVar5 != 0) {
    F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2a))),0,0xc1);
    uVar3 = F_0042a970(in_ecx GEN_EDX_ARG);
    uVar6 = F_0042a990(in_ecx GEN_EDX_ARG);
    uVar9 = F_00c46aa0(((undefined *)GEN_TOP(((int)this + 0x2a))),uVar6,uVar3);
    uVar3 = (uint)uVar9;
    *((undefined1 *)GEN_TOP(((int)this + 0x1ec))) = 1;
  }
  return uVar3;
}

/* ref: FUN_00440a60 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440a60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x440a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0xcf;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00440af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00440af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x440af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined2 * puVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined2 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  
  F_00436f10(this GEN_EDX_FWD,param_1);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x88))),0,0x400);
  puVar4 = ((undefined2 *)GEN_TOP(((int)this + 0x90)));
  puVar1 = ((undefined2 *)GEN_TOP((param_1 + 0x28)));
  param_1 = 0x10;
  do {
    *(undefined4 *)(puVar4 - 4) = *(undefined4 *)(puVar1 - 4);
    *(undefined4 *)(puVar4 - 2) = *(undefined4 *)(puVar1 - 2);
    *puVar4 = *puVar1;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar5 = ((undefined4 *)GEN_TOP(((int)puVar1 + 3)));
    puVar6 = ((undefined4 *)GEN_TOP(((int)puVar4 + 3)));
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar1 = puVar1 + 0x20;
    puVar4 = puVar4 + 0x20;
    param_1 = param_1 - 1;
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  } while (param_1 != 0);
  uVar7 = 0x3f;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar7)));
  uVar2 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_007e1340(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00440b80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00440b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x440b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc3c, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc2c);
  uVar2 = (uint)*((byte *)GEN_TOP(((int)param_1 + 3)));
  if (*((uint *)GEN_TOP(((int)this + 0x488))) == uVar2) {
    if ((*param_1 == 0) || ((*(char *)(gen_frame + 0x0)) = '\0', (ushort)*((byte *)GEN_TOP(((int)this + 0x48c))) <= *param_1)) {
      (*(char *)(gen_frame + 0x0)) = '\x01';
    }
    uVar4 = 0x3f;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    uVar3 = F_00763050(uVar2 GEN_EDX_ARG,uVar4);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_007e1930(uVar3 GEN_EDX_ARG,(*(char *)(gen_frame + 0x0)),param_1);
    }
    if (((*(char *)(gen_frame + 0x0)) == '\0') && (*((char *)GEN_TOP(((int)this + 0x48d))) != '\0')) {
      this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        (*(ushort *)(gen_frame + 0x1c)) = *param_1;
        (*(undefined1 *)(gen_frame + 0x1e)) = *((undefined1 *)GEN_TOP(((int)param_1 + 3)));
        (*(undefined4 *)(gen_frame + 0x4)) = 0x120;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x18;
        bVar1 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00440c80 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440c80(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x440c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x121;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xd8;
    puVar3 = param_1;
    puVar4 = ((undefined4 *)(gen_frame + 0x18));
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440d10 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440d10(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x440d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined1 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x122;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440db0 */
GEN_OWN GEN_NOFRAME byte F_00440db0(void)
{
  GEN_ENTER(0x440db0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x123;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440e40 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x440e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x124;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440ee0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x440ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x125;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00440f80 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00440f80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x440f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x126;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined1 *)(gen_frame + 0x1d)) = 1;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00441030 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00441030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x441030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x126;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined1 *)(gen_frame + 0x1d)) = 2;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004410e0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_004410e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4410e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x126;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined1 *)(gen_frame + 0x1d)) = 3;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00441190 */
GEN_OWN GEN_NOFRAME byte F_00441190(void)
{
  GEN_ENTER(0x441190u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x127;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00441230 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00441230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x441230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = (undefined2)param_1;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar1 + 0x3c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e))) = (undefined2)param_1;
  }
  return;
}

/* ref: FUN_00441270 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00441270(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x441270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x108d081;
  }
  uVar1 = F_00436ad0(param_1 + 0xb);
  return uVar1;
}

/* ref: FUN_00441290 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00441290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x441290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((char *)GEN_TOP((param_1 + 0x32))) == '\0') {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0xf: ;
    case 0x10: ;
    case 0x12: ;
    case 0x13: ;
    case 0x15: ;
    case 0x16: ;
    case 0x18: ;
    case 0x19: ;
    case 0x1b: ;
    case 0x1c: ;
    case 0x1e: ;
    case 0x1f: ;
    case 0x21: ;
    case 0x22: ;
      goto switchD_004412ae_caseD_f;
    default: ;
      return 1;
    }
  }
  if (((uint)(((ulonglong)(((ulonglong)param_2 < 0x40) ? ((*((ulonglong *)GEN_TOP((param_1 + 0x28))) >> (ulonglong)param_2)) : 0))) & 1) != 1) {
switchD_004412ae_caseD_f: ;
    return 0;
  }
  return 1;
}

/* ref: FUN_00441300 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00441300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x441300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (param_2 == 3) {
    *((undefined1 *)GEN_TOP((param_1 + 0x30))) = 3;
  }
  else if ((param_2 == 1) && (*((char *)GEN_TOP((param_1 + 0x48e))) != '\0')) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(ushort *)(gen_frame + 0x18)) = (ushort)param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x117;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      *((undefined1 *)GEN_TOP((param_1 + 0x48e))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004413c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004413c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4413c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    in_EAX = *((uint *)GEN_TOP((uVar2 + 0x38)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = in_EAX;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1,1);
    return uVar2;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00441400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00441400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x441400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    in_EAX = *((uint *)GEN_TOP((uVar2 + 0x38)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = in_EAX;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1,0);
    return uVar2;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00441440 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00441440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x441440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0 || *((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0x10e;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      bVar2 = F_00974da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      if (bVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004414f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004414f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4414f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (((*((int *)GEN_TOP((param_1 + 0x18))) != 0 || *((int *)GEN_TOP((param_1 + 0x1c))) != 0) &&
      (param_3 != ((undefined4 *)GEN_TOP(0x0)))) &&
     (this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD))), this != ((undefined *)GEN_TOP(0x0)))) {
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    (*(undefined1 *)(gen_frame + 0x20)) = param_2;
    (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0x111;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x48;
    puVar3 = param_3;
    puVar4 = ((undefined4 *)(gen_frame + 0x21));
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004415b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004415b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4415b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (*((int *)GEN_TOP((param_1 + 0x18))) != 0 || *((int *)GEN_TOP((param_1 + 0x1c))) != 0) {
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
      (*(undefined4 *)(gen_frame + 0x20)) = param_3;
      (*(undefined4 *)(gen_frame + 0x24)) = param_4;
      (*(undefined1 *)(gen_frame + 0x28)) = param_2;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x112;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
      bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00441680 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00441680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x441680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if ((((*((int *)GEN_TOP((param_1 + 0x18))) != 0 || *((int *)GEN_TOP((param_1 + 0x1c))) != 0) && (param_3 != ((char *)GEN_TOP(0x0)))
       ) && (*param_3 != '\0')) &&
     (((byte)(param_2 - 3U) < 0xc &&
      (this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD))), this != ((undefined *)GEN_TOP(0x0)))))) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = F_00470c60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x18))),*((undefined4 *)GEN_TOP((param_1 + 0x1c))),
                         param_4,param_5,param_2,param_3);
    bVar1 = F_00974da0(this GEN_EDX_ARG,uVar2,uVar3,uVar4);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00441750 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00441750(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x441750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if ((*((int *)GEN_TOP((param_1 + 0x18))) != 0 || *((int *)GEN_TOP((param_1 + 0x1c))) != 0) &&
     ((byte)(param_2 - 3U) < 0xc)) {
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0x115;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
      (*(char *)(gen_frame + 0x20)) = param_2;
      bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

