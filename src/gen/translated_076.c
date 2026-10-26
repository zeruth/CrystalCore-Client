#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonActionBarBase::vf67 */
uint F_007f0aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (param_3[1] != 0) {
    param_2 = F_00559c20(param_3[1]);
    if (param_2 != 0) {
      uVar2 = F_005613a0(param_2);
      if (uVar2 == 0x11) goto LAB_007f0af6;
    }
  }
  param_2 = 0;
LAB_007f0af6: ;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_2 + 0x84) + 0xc))))(param_2 + 0x84);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  puVar6 = ((uint *)GEN_TOP((param_1 * 0xd4 + *(int *)(this + 0x18c))));
  if ((*(int *)(this + 0x180) == 0x12) ||
     ((this[0x1a1] != (undefined1)0x0 && (this[0x1a2] != (undefined1)0x0)))) {
    uVar5 = F_0078f890(this,0x1c8);
  }
  else {
    if ((*(byte *)(piVar1 + 5) & 4) == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = puVar4[1];
      if ((*(byte *)(piVar1 + 5) & 0x10) != 0) {
        uVar2 = F_00760440(*puVar4);
        uVar2 = uVar2 << 0x10 | puVar4[1];
      }
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],uVar2);
      return uVar2;
    }
    if ((*(int *)(this + 0x180) != *piVar3) ||
       (uVar5 = *puVar6, (short)piVar1[6] != *(short *)(uVar5 + 0x9c))) {
      uVar2 = F_0055a2d0(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = 0;
        uVar7 = 0;
      }
      else {
        uVar2 = puVar6[7];
        uVar7 = *(undefined4 *)(param_2 + 0x98);
      }
      F_0078f910(this,*piVar3,(uint)*(ushort *)(piVar1 + 6),uVar7,uVar2);
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],piVar3[1]);
      return uVar2;
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonActionBarBase::vf68 */
uint F_007f0c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  iVar4 = (uint)*(ushort *)(piVar1 + 6) * 0xd4 + *(int *)(this + 0x18c);
  fVar5 = gen_bits2f(REFG(uint, 0x10a007c) ^ REFG(uint, 0x10920d0));
  fVar6 = (float)(float10)0;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  uVar3 = F_00559da0(uVar3,fVar6,fVar5);
  *puVar2 = *(undefined4 *)(iVar4 + 0x18);
  puVar2[1] = *(undefined4 *)(iVar4 + 0x1c);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBar::vf37 */
uint F_007f0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf2 */
uint F_007f0cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f0cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_0078f270((undefined *)this,param_1,param_2,param_3,param_4);
  if ((short)param_1 == 0x17) {
    if (param_2 == 2) {
      this[0x19c] = (undefined1)(this[0x19c] == (undefined1)0x0);
      uVar1 = F_0078f710(this);
    }
    else {
      if (param_2 == 4) {
        *(uint *)(this + 0x180) =
             -(uint)(*(int *)(this + 0x180) + 1U < 10) & *(int *)(this + 0x180) + 1U;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
      uVar1 = param_2 - 6;
      if (uVar1 == 0) {
        if (*(int *)(this + 0x180) == 0) {
          iVar2 = 9;
        }
        else {
          iVar2 = *(int *)(this + 0x180) + -1;
        }
        *(int *)(this + 0x180) = iVar2;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf47 */
uint F_007f0e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x14);
  F_0059dde0(*(undefined * PTR32 *)(this + 0x1b0),
               (uint)(*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x20))) + 4))) == 1));
  F_00560760(((undefined4 *)(gen_frame + 0x0)));
  AVar1 = this[0x13a];
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xf00)));
  uVar3 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar1,*(undefined4 *)(this + 0x1ac),((undefined4 *)(gen_frame + 0x0)));
  uVar3 = F_007f0080((undefined *)this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBar::vf65 */
uint F_007f0e90(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(*(int *)(this + 0x180) + 1);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(*(int *)(this + 0x180) + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonPartyList::vf44 */
uint F_007f0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char * pcVar10;
  undefined4 uVar11;
  float fVar12;
  undefined * local_c;
  undefined * local_8;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar1 = (undefined *)F_0055e2f0(this,0x15);
  *(undefined * PTR32 *)(this + 0x1a4) = pvVar1;
  F_0055a300(pvVar1,0);
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1a8) = uVar2;
  local_c = this + 0x180;
  do {
    uVar2 = F_0055e2f0(this,iVar4 + 0xc);
    pvVar1 = (undefined *)F_00559c20(uVar2);
    *(undefined * PTR32 *)local_c = pvVar1;
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_0055a300(pvVar3,0);
    pcVar10 = "";
    pvVar3 = (undefined *)F_00561530(pvVar1,10);
    F_00584110(pvVar3,pcVar10);
    uVar2 = F_00561490(pvVar1,0x11);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar2 = F_00561490(pvVar1,0x12);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561490(pvVar1,0xb);
    F_0055a300(pvVar3,uVar6);
    fVar12 = (float)(float10)0;
    uVar2 = F_00561490(pvVar1,0xc);
    F_00568230(uVar2,fVar12);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,6,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,7,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,iVar4,this,0,0);
    F_00568380(*(undefined * PTR32 *)((int)pvVar1 + 0x68),3,iVar4,this,0,0);
    uVar6 = 0;
    pvVar1 = (undefined *)F_00561550(pvVar1,0x10);
    F_0055a300(pvVar1,uVar6);
    local_c = local_c + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  uVar2 = F_0055e2f0(this,10);
  if (((uVar2 == 0) || (pvVar1 = (undefined *)F_00559c20(uVar2), pvVar1 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar1), uVar2 != 5)) {
    pvVar1 = (undefined *)0x0;
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
  }
  F_0055a300(pvVar3,0);
  uVar11 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar3 = (undefined *)F_00561530(pvVar1,2);
  F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
  F_005a04e0(pvVar1,0,1);
  uVar2 = F_0055e2f0(this,0x14);
  uVar2 = F_00559c20(uVar2);
  *(uint *)(this + 0x1a0) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_0055a300(pvVar1,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,6,8,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x1a0) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,7,8,this,0,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,0x17,8,this,0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x68))),3,8,this,0,0);
  pvVar1 = (undefined *)F_0055e2f0(this,3);
  F_0055a300(pvVar1,0);
  uVar2 = F_0055dcb0();
  pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x30);
  iVar4 = 0;
  pAVar5 = this + 0x1ac;
  do {
    uVar2 = F_0055e2f0(this,9 - iVar4);
    uVar2 = F_00559c20(uVar2);
    *(uint *)pAVar5 = uVar2;
    F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c),7);
    uVar2 = F_0043bd00(pvVar1,(&REFG(undefined4, 0x10d57d4))[(int)(iVar4)],0,0);
    pvVar3 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar5,2);
    F_00584110(pvVar3,uVar2);
    iVar4 = iVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar4 < 6);
  F_005a91d0(this,1,4);
  uVar2 = F_005a91d0(this,0,3);
  return uVar2;
}

/* ref: FUN_007f1240 */
byte F_007f1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  ushort local_8;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x20);
  bVar8 = piVar1[0x1d1] != 0;
  iVar2 = piVar1[7];
  iVar3 = *piVar1;
  if (((*(int *)((int)this + 0x1fc) != iVar3) || (*(int *)((int)this + 0x204) != iVar2)) ||
     ((bool)*(char *)((int)this + 0x211) != bVar8)) {
    if (iVar3 < 1) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),0);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),0);
      uVar7 = 0;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else if (((iVar3 != 1) || (iVar2 == 0)) || (bVar8)) {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xef;
      F_0055e2a0(this,0x2000000,0);
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
      piVar1 = *(int * PTR32 *)(param_1 + 0x20);
      iVar4 = piVar1[0x1d1];
      local_8 = (ushort)(iVar4 != 0);
      if (((*piVar1 != 1) || (iVar4 == 0)) || (piVar1[7] == 0)) {
        local_8 = (short)*piVar1 + (ushort)(iVar4 != 0);
      }
      if (*(int *)((int)this + 0x184) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
      }
      fVar9 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      fVar10 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      uVar5 = F_0055a030(uVar7);
      F_0055a080(*(undefined4 *)((int)this + 0x1a4),
                   (uint)(ushort)(uVar5 + ((short)(int)fVar9 - (short)(int)fVar10) * (local_8 - 1) +
                                 8));
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),1);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),1);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x264))));
      uVar7 = 1;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
      F_0055e2a0(this,0x2000000,1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
    }
    *(int *)((int)this + 0x1fc) = iVar3;
    *(int *)((int)this + 0x204) = iVar2;
    *(bool *)((int)this + 0x211) = bVar8;
  }
  return bVar8;
}

/* ref: FUN_007f1420 */
uint F_007f1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = (undefined *)F_0055e2f0(this,3);
  if (*(int *)((int)this + 0x1fc) < 2) {
    bVar1 = F_0055a300(this_00,0);
    return CONCAT31(extraout_var,bVar1);
  }
  F_0055a300(this_00,1);
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20)));
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x6c))),(-(uint)((uVar2 & 2) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x6c))),(-(uint)((uVar2 & 4) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x6c))),(-(uint)((uVar2 & 8) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x6c))),
               (-(uint)((uVar2 & 0x10) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1bc) + 0x6c))),
               (-(uint)((uVar2 & 0x20) != 0) & 10) + 7);
  uVar2 = F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c0) + 0x6c))),
                       (-(uint)((uVar2 & 0x40) != 0) & 10) + 7);
  return uVar2;
}

/* ref: FUN_007f1530 */
uint F_007f1530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  undefined2 uVar8;
  short * psVar9;
  int local_14;
  undefined4 * local_10;
  int local_8;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar5 = *(int *)(uVar2 + 0x10);
  iVar1 = **(int * PTR32 *)(iVar5 + 0x20);
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  local_8 = 0;
  if (0 < iVar1) {
    local_10 = (undefined4 *)((int)this + 0x180);
    local_14 = 0x6c;
    psVar9 = (short *)((int)this + 0x1c4);
    do {
      pvVar4 = (undefined *)*local_10;
      this_00 = (undefined *)F_00561490(pvVar4,0x18);
      if (pvVar4 == (undefined *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((int)pvVar4 + 0x70);
      }
      uVar2 = F_0055a2d0(uVar6);
      if ((char)uVar2 != '\0') {
        iVar3 = *((int *)GEN_TOP((local_14 + *(int *)(iVar5 + 0x20))));
        if ((iVar3 == param_1) && (iVar3 != -0x20000000)) {
          if ((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) {
            if (*psVar9 != 0x69) {
              sVar7 = 0x69;
              iVar3 = (*psVar9 == 0x67) + 0x69;
              goto LAB_007f1607;
            }
          }
          else if (*psVar9 != 0x67) {
            sVar7 = 0x67;
            iVar3 = (*psVar9 == 0x69) + 0x67;
LAB_007f1607: ;
            *psVar9 = sVar7;
            F_0059d640(this_00,iVar3);
          }
          *(int *)((int)this + 0x20c) = local_8;
        }
        else if (((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) &&
                (iVar3 != -0x20000000)) {
          if (*psVar9 != 0x65) {
            *psVar9 = 0x65;
            F_0059d640(this_00,0x65);
          }
        }
        else {
          *psVar9 = 0x11;
          F_0059d670(this_00,0x11);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x4c;
      local_8 = local_8 + 1;
      psVar9 = psVar9 + 1;
    } while (local_8 < iVar1);
  }
  uVar6 = 0;
  if (*(int *)((int)this + 0x1a0) != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  uVar2 = F_0055a2d0(uVar6);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  pvVar4 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),0x14);
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x790)));
  if ((iVar5 != param_1) || (iVar5 == -0x20000000)) {
    if (((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) && (iVar5 != -0x20000000)) {
      if (*(short *)((int)this + 0x1d4) == 0x65) {
        return (uint)pvVar4;
      }
      *(undefined2 *)((int)this + 0x1d4) = 0x65;
      uVar2 = F_0059d640(pvVar4,0x65);
      return uVar2;
    }
    *(undefined2 *)((int)this + 0x1d4) = 0x11;
    uVar2 = F_0059d670(pvVar4,0x11);
    return uVar2;
  }
  if ((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) {
    if (*(short *)((int)this + 0x1d4) == 0x69) goto LAB_007f1715;
    uVar8 = 0x69;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x67) + 0x69;
  }
  else {
    if (*(short *)((int)this + 0x1d4) == 0x67) goto LAB_007f1715;
    uVar8 = 0x67;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x69) + 0x67;
  }
  *(undefined2 *)((int)this + 0x1d4) = uVar8;
  pvVar4 = (undefined *)F_0059d640(pvVar4,iVar5);
LAB_007f1715: ;
  *(undefined4 *)((int)this + 0x20c) = 8;
  return (uint)pvVar4;
}

/* ref: FUN_007f1780 */
uint F_007f1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  uVar1 = param_1;
  if (7 < param_1) {
    uVar1 = 0x13;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(uint *)((int)this + 0x208) = param_1;
  pvVar2 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xfffffffb) + 0x6a);
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_007f1830 */
uint F_007f1830(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x208) * 4 + 0x180)));
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xffffffa9) + 0x68);
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonToDoList::vf44 */
uint F_007f18e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f18e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = 0;
  do {
    uVar3 = 0;
    this_00 = (undefined *)F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c7174) + uVar2));
    F_0055a300(this_00,uVar3);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  F_005a91d0(this,1,0x1b);
  F_005a91d0(this,0,0x18);
  uVar2 = F_0055dcb0();
  piVar1 = (int *)F_0055b990(uVar2);
  uVar2 = *((int *)GEN_TOP((*(int *)(*piVar1 + 0x20) + 0x44))) - 1;
  if (uVar2 < 3) {
    *(undefined2 *)(this + 0x3b4) = 0x2d;
    return uVar2;
  }
  *(undefined2 *)(this + 0x3b4) = 0x18;
  return 0x18;
}

/* ref: FUN_007f1970 */
unsigned int F_007f1970(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  int local_8;
  
  F_007905e0(this);
  uVar1 = F_0055dcb0();
  F_00567340(*(undefined * PTR32 *)(uVar1 + 0x18),this,1);
  pvVar5 = this;
  pvVar2 = (undefined *)F_0055dcb0();
  F_0055ba60(pvVar2,pvVar5);
  pvVar5 = (undefined *)((int)this + 0x24);
  F_00590210(pvVar5,4,0);
  F_00590210(pvVar5,5,0);
  F_00590210(pvVar5,4,2000);
  F_00590210(pvVar5,7,2000);
  F_00590210(pvVar5,4,1000);
  F_00590210(pvVar5,5,1000);
  F_00590210(pvVar5,9,1000);
  F_00590210(pvVar5,2,1000);
  F_00590210(pvVar5,3,1000);
  local_8 = 0;
  do {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8);
    F_00590210(pvVar5,8,local_8);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8 + 1000);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8 + 1000);
    F_00590210(pvVar5,8,local_8 + 1000);
    local_8 = local_8 + 100;
  } while (local_8 < 500);
  return 0;
}

/* ref: Client::UI2::AddonToDoList::vf38 */
uint F_007f1b30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f1b30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x3a8), iVar1 != 0)) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x90),
                 (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffff0U) != 0));
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonToDoList::vf2 */
uint F_007f1b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_1 & 0xffff;
  puVar3 = (undefined4 *)(uVar2 - 6);
  if (puVar3 < (undefined4 *)0x12) {
    puVar3 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7f1c9c) + uVar2 + 2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 6: ;
      uVar2 = F_0055dcb0();
      F_005aa060((undefined *)(uVar2 + 0x20c),0xb,0);
      *(undefined1 *)(uVar2 + 0x21b) = 1;
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 7: ;
      uVar2 = F_0055dcb0();
      *(undefined1 *)(uVar2 + 0x21b) = 0;
      uVar2 = F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
      return uVar2;
    case 8: ;
    case 0x17: ;
      F_00790540(this,0,param_3,param_4);
      uVar2 = F_0055dcb0();
      puVar3 = (undefined4 *)F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
      break;
    case 9: ;
      puVar1 = (undefined4 *)*param_3;
      puVar3 = param_3;
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 3: ;
        uVar2 = F_00790300(this,*puVar1,param_3,param_4);
        return uVar2;
      case 4: ;
        uVar2 = F_00790370(this,*puVar1,param_3,param_4);
        return uVar2;
      case 5: ;
        uVar2 = F_00790420(this,*puVar1,param_3,param_4);
        return uVar2;
      case 6: ;
        uVar2 = F_007904d0(this,*puVar1,param_3,param_4);
        return uVar2;
      case 7: ;
        uVar2 = F_007905b0(this);
        return uVar2;
      }
    }
  }
  return (uint)puVar3;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf37 */
uint F_007f1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf65 */
uint F_007f1d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_0055dcb0();
  if (*(int *)(this + 0x180) == 0x12) {
    uVar1 = F_0043bd00(*(undefined * PTR32 *)(uVar1 + 0x30),0x3f4,0,0);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  iVar2 = *(int *)(this + 0x180) + 1;
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(iVar2);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(iVar2);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf37 */
uint F_007f1d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf65 */
uint F_007f1da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(*(int *)(this + 0x180) + 1);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(*(int *)(this + 0x180) + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf36 */
byte F_007f1de0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_0055dc60((undefined *)this);
  F_0055b850(this + 0x400,0x120000);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e4) = 0;
  *(undefined4 *)(this + 0x4f4) = uVar1;
  *(undefined4 *)(this + 0x4f8) = uVar1;
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  *(undefined4 *)(this + 0x408) = 0;
  *(undefined4 *)(this + 0x518) = 0x80000000;
  this[0x521] = (undefined1)0x0;
  return 0;
}

/* ref: Client::UI2::AddonActionCross::vf37 */
uint F_007f1e60(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf38 */
uint F_007f1e90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f1e90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  F_007eff30(param_1,param_2);
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x234);
  if (*(int *)(uVar1 + 0x234) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(param_1 + 0x510) = (float)fVar2;
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x238);
  if (*(int *)(uVar1 + 0x238) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(param_1 + 0x514) = (float)fVar2;
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf39 */
unsigned int F_007f1ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00790780(this);
  F_00579170((undefined *)this);
  return 0;
}

/* ref: Client::UI2::AddonActionCross::vf63 */
uint F_007f1f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  this[0x19c] = (undefined1)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2d3c))) != 0);
  if (*(int *)(this + 0x188) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar3)));
      if (iVar1 != 0) {
        if ((this[0x19c] == (undefined1)0x0) && ((char)param_2 == '\0')) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        *(byte *)(iVar1 + 0xaa) =
             *(byte *)(iVar1 + 0xaa) ^ (cVar2 * '\x02' ^ *(byte *)(iVar1 + 0xaa)) & 2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (uVar4 < *(uint *)(this + 0x188));
  }
  uVar4 = F_0059dde0(*(undefined * PTR32 *)(this + 0x27c),(uint)(byte)this[0x19c]);
  return uVar4;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf37 */
uint F_007f1fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,9,0);
  F_005a92d0(this,0,8,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),3,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),6,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),7,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),9,0,this,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf47 */
uint F_007f2010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2010u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar9 = *(int *)((*(uint *)&gen_args[1]) + 0x24);
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x168)));
  piVar8 = (int *)((*(int *)&gen_args[2]) + 0x20);
  (*(int *)(gen_frame + 0x18)) = iVar9;
  (*(int *)(gen_frame + 0x10)) = *piVar8;
  (*(int *)&gen_args[2]) = iVar10;
  if (iVar10 == 0) {
    uVar5 = (uint)(*(int * PTR32 *)&gen_args[0])[0x3d] >> 0x14 & 0xf;
    if ((uVar5 == 3) || (uVar5 == 2)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]),0,0);
    }
    (*(int * PTR32 *)&gen_args[0])[0x67] = 0;
    return uVar5;
  }
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = (*(int * PTR32 *)&gen_args[0])[0x67] != iVar10;
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),(*(int * PTR32 *)&gen_args[0])[0x67] != iVar10);
  F_00584110(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x60])),*((undefined4 *)GEN_TOP((*(int *)(*piVar8 + 0x20) + 0x144))));
  uVar12 = 0;
  uVar11 = 0;
  uVar6 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0055aaf0((*(int * PTR32 *)&gen_args[0])[0x60]);
  F_00577d20(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x60])),&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)&gen_args[1]),uVar5,uVar11,uVar6,uVar12);
  F_0055a060((*(int * PTR32 *)&gen_args[0])[0x61],(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_0055e320((*(int * PTR32 *)&gen_args[0]));
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = *(undefined4 *)(uVar5 + 0x70);
  }
  uVar3 = F_0055a030(uVar6);
  uVar4 = F_00559d70((*(int * PTR32 *)&gen_args[0])[0x61]);
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)(uVar4 + (short)(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_0055e320((*(int * PTR32 *)&gen_args[0]));
  pvVar7 = (undefined *)0x0;
  if (uVar5 != 0) {
    pvVar7 = *(undefined * PTR32 *)(uVar5 + 0x70);
  }
  F_0055a040(pvVar7,(*(uint *)(gen_frame + 0xc)),(uint)uVar3);
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x174)));
  pvVar7 = (undefined *)0x0;
  if ((*(int * PTR32 *)&gen_args[0])[0x65] != 0) {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x65] + 0x70)));
  }
  F_0055a300(pvVar7,(uint)(0 < iVar10));
  uVar6 = 0;
  if ((*(int * PTR32 *)&gen_args[0])[0x65] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x65] + 0x70)));
  }
  uVar5 = F_0055a2d0(uVar6);
  if ((char)uVar5 != '\0') {
    F_005a04e0(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x65])),iVar10,(*(int *)(gen_frame + 0x8)));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x184)));
  if (uVar5 != 0) {
    piVar8 = (*(int * PTR32 *)&gen_args[0]) + 0x6a;
    (*(int *)(gen_frame + 0x8)) = -0x20 - (int)(*(int * PTR32 *)&gen_args[0]);
    (*(int *)(gen_frame + 0x4)) = -0x5c - (int)(*(int * PTR32 *)&gen_args[0]);
    (*(uint *)&gen_args[1]) = uVar5;
    do {
      uVar1 = *((uint *)GEN_TOP(((int)piVar8 + *(int *)(iVar9 + 0x20) + (*(int *)(gen_frame + 0x8)))));
      F_004352a0(uVar1 >> 0x1d & 2,&(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)));
      F_00562e60(*piVar8,(*(uint *)(gen_frame + 0xc)));
      F_00562e80(*piVar8,(*(undefined4 *)(gen_frame + 0x14)));
      F_00595530((undefined *)*piVar8,uVar1 & 0x3fffffff,0,0);
      F_0058a4b0((undefined *)*piVar8,
                   *((undefined4 *)GEN_TOP(((int)piVar8 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + (*(int *)(gen_frame + 0x4))))));
      pvVar7 = (undefined *)0x0;
      if (*piVar8 != 0) {
        pvVar7 = *(undefined * PTR32 *)(*piVar8 + 0x70);
      }
      F_0055a300(pvVar7,1);
      piVar8 = piVar8 + 1;
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) - 1;
      iVar9 = (*(int *)(gen_frame + 0x18));
    } while ((*(uint *)&gen_args[1]) != 0);
    (*(uint *)&gen_args[1]) = 0;
  }
  if (uVar5 < 5) {
    piVar8 = (*(int * PTR32 *)&gen_args[0]) + uVar5 + 0x6a;
    iVar10 = 5 - uVar5;
    do {
      if (*piVar8 == 0) {
        pvVar7 = (undefined *)0x0;
      }
      else {
        pvVar7 = *(undefined * PTR32 *)(*piVar8 + 0x70);
      }
      F_0055a300(pvVar7,0);
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
      iVar9 = (*(int *)(gen_frame + 0x18));
    } while (iVar10 != 0);
  }
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x180)));
  F_0055a300(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x62])),(uint)(0 < iVar10));
  uVar5 = F_0055a2d0((*(int * PTR32 *)&gen_args[0])[0x62]);
  if ((char)uVar5 != '\0') {
    F_00559fe0((*(int * PTR32 *)&gen_args[0])[100],&(*(int *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    F_00568210((*(int * PTR32 *)&gen_args[0])[100],(float)((float10)iVar10 * (float10)*(double *)&REFG(undefined, 0x10928e8)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    F_00584110(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[99])),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 0x148))));
  }
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x178)));
  iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x17c)));
  if (((*(int * PTR32 *)&gen_args[0])[0x68] != iVar10) || ((*(int * PTR32 *)&gen_args[0])[0x69] != iVar9)) {
    (*(int * PTR32 *)&gen_args[0])[0x68] = iVar10;
    (*(int * PTR32 *)&gen_args[0])[0x69] = iVar9;
    F_0055aa30((*(int * PTR32 *)&gen_args[0])[0x60],iVar10);
    F_0055ab90((*(int * PTR32 *)&gen_args[0])[0x60],iVar9);
    iVar2 = (*(int * PTR32 *)&gen_args[0])[0x66];
    (*(uint *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[0])[0x65];
    F_00561aa0((undefined *)(*(uint *)&gen_args[1]),iVar10);
    F_00561b40((undefined *)(*(uint *)&gen_args[1]),iVar10);
    F_00561b90(iVar9,iVar2);
  }
  uVar5 = (uint)(*(int * PTR32 *)&gen_args[0])[0x3d] >> 0x14 & 0xf;
  if ((uVar5 != 5) && (uVar5 != 4)) {
    (*(int * PTR32 *)&gen_args[0])[0x67] = (*(int *)&gen_args[2]);
    return uVar5;
  }
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10e))) < '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]),0);
    uVar5 = F_0055e2a0((*(int * PTR32 *)&gen_args[0]),0x2000000,1);
  }
  (*(int * PTR32 *)&gen_args[0])[0x67] = (*(int *)&gen_args[2]);
  return uVar5;
}

/* ref: FUN_007f23a0 */
uint F_007f23a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f23a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c729c));
  in_ecx = (int)this + 0x184;
  iVar1 = 0x1d;
  do {
    F_0042b630(in_ecx);
    F_0042b630(in_ecx + 0x54);
    in_ecx = in_ecx + 0xa8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 2;
  F_0055e2a0(this,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf37 */
uint F_007f2410(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)0x0;
  if (*(int *)(this + 0x180) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_005840a0(this_00,0x23,0,this,0);
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,1,3,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf44 */
uint F_007f2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_00559c20(uVar1);
    if ((pvVar2 == (undefined *)0x0) || (uVar1 = F_005613a0(pvVar2), uVar1 != 9)) {
      pvVar2 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)(this + 0x180) = pvVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined4 *)(gen_frame + 0x28)) = 3;
  (*(undefined4 *)(gen_frame + 0x34)) = 4;
  (*(undefined4 *)(gen_frame + 0x40)) = 5;
  (*(undefined4 *)(gen_frame + 0x4c)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x791160));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00574320(pvVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x1c)),5,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar2,0x23,0,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_0055a300(pvVar2,1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(undefined4 *)(gen_frame + 0x18)));
  F_005a91d0(this,0,2);
  uVar1 = F_005a91d0(this,1,3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::UI2::AddonLimitBreak::vf37 */
uint F_007f2580(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * pAVar1;
  uint uVar2;
  
  F_005a92d0(this,1,0x28,0);
  uVar2 = 0;
  pAVar1 = this + 0x1c4;
  do {
    if (*(int *)pAVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_005840a0(this_00,0x41,uVar2,this,0);
    uVar2 = uVar2 + 1;
    pAVar1 = pAVar1 + 0x38;
  } while (uVar2 < 3);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f25d0 */
unsigned int F_007f25d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f25d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((char)param_3 != '\0') ||
     ((*(int *)(param_1 + 0x10) != param_2 && (*(char *)((int)this + 0x186) == '\0')))) {
    if ((*(char *)((int)this + 0x184) == '\0') && (param_2 == 0x66)) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x43);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
    F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x6c))),param_2);
    *(int *)(param_1 + 0x10) = param_2;
    if ((char)param_3 != '\0') {
      *(undefined1 *)((int)this + 0x186) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007f2650 */
unsigned int F_007f2650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f2650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 * this;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  float10 fVar8;
  
  uVar5 = (ushort)(int)(((float10)*(int *)(param_1 + 0x240) * (float10)param_2) *
                       (float10)*(double *)&REFG(undefined, 0x10d57f0));
  if (uVar5 < 0x191) {
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 400;
  }
  sVar2 = *(short *)(param_1 + 0x244);
  sVar3 = *(short *)(param_1 + 0x246);
  if (sVar3 < sVar2) {
    *(ushort *)(param_1 + 0x246) = uVar5 + sVar3;
    if ((short)(uVar5 + sVar3) <= sVar2) goto LAB_007f26c3;
  }
  else if ((sVar3 <= sVar2) ||
          (*(ushort *)(param_1 + 0x246) = sVar3 - uVar5, sVar2 <= (short)(sVar3 - uVar5)))
  goto LAB_007f26c3;
  *(short *)(param_1 + 0x246) = sVar2;
LAB_007f26c3: ;
  (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)(param_1 + 0x246);
  piVar7 = (int *)(param_1 + 0x1a4);
  (*(int *)(gen_frame + 0x24)) = 3;
  do {
    uVar6 = (uint)(short)(*(uint *)(gen_frame + 0x28));
    if ((uVar6 < 0x2711) && (uVar6 < 10000)) {
      iVar1 = piVar7[-3];
      if (iVar1 == 0) {
        if ((uint)piVar7[-2] < uVar6) {
          *(undefined1 *)(piVar7 + -4) = 0;
          if (((*(char *)((int)piVar7 + -0xf) == '\0') && (*piVar7 != 0x11)) &&
             (*(char *)(param_1 + 0x186) == '\0')) {
            this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
            goto LAB_007f2859;
          }
        }
        else {
          *(undefined2 *)(piVar7 + -4) = 0;
          piVar7[-3] = 0;
          if (uVar6 < (uint)piVar7[-2]) {
            if ((*piVar7 != 0x11) && (*(char *)(param_1 + 0x186) == '\0')) {
              this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
LAB_007f2859: ;
              F_0059d640(this_00,0x11);
              *piVar7 = 0x11;
            }
          }
          else if ((*piVar7 != 0x11) && (*(char *)(param_1 + 0x186) == '\0')) {
            this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
            goto LAB_007f2859;
          }
        }
      }
      else {
        if (uVar6 != 0) {
          if (iVar1 == 1) {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x44);
            this = ((undefined1 *)(gen_frame + 0x10));
          }
          else {
            if (iVar1 < 2) goto LAB_007f27f7;
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x45);
            this = ((undefined1 *)(gen_frame + 0x8));
          }
          F_005a2670(this);
          if ((*piVar7 != 0x65) && (*(char *)(param_1 + 0x186) == '\0')) {
            F_0059d640(*(undefined * PTR32 *)(piVar7[8] + 0x6c),0x65);
            *piVar7 = 0x65;
          }
        }
LAB_007f27f7: ;
        *(undefined1 *)((int)piVar7 + -0xf) = 1;
        piVar7[-3] = 0;
      }
    }
    else {
      uVar6 = 10000;
      if ((char)piVar7[-4] == '\0') {
        *(undefined1 *)(piVar7 + -4) = 1;
        if ((*piVar7 != 0x66) && (*(char *)(param_1 + 0x186) == '\0')) {
          if (*(char *)(param_1 + 0x184) == '\0') {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x18)),0x43);
            F_005a2670(((undefined1 *)(gen_frame + 0x18)));
          }
          F_0059d640(*(undefined * PTR32 *)(piVar7[8] + 0x6c),0x66);
          *piVar7 = 0x66;
          piVar7[-3] = 0;
          *(undefined1 *)((int)piVar7 + -0xf) = 0;
          goto LAB_007f2866;
        }
      }
      else {
        uVar4 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x6c))));
        F_00559c60(*(undefined * PTR32 *)(piVar7[8] + 0x6c),uVar4 & 0xffff);
      }
      piVar7[-3] = 0;
      *(undefined1 *)((int)piVar7 + -0xf) = 0;
    }
LAB_007f2866: ;
    fVar8 = (float10)(int)uVar6;
    piVar7[-2] = uVar6;
    if ((int)uVar6 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(uint *)(gen_frame + 0x20)) = ((undefined2)0x27f) | 0xc00;
    uVar6 = (uint)TRUNC((float10)*(ushort *)((int)piVar7 + -2) *
                        (float10)(float)(fVar8 / (float10)*(double *)&REFG(undefined, 0x10a2b98)));
    (*(uint *)(gen_frame + 0x20)) = uVar6;
    F_0055a060(piVar7[7],uVar6 & 0xffff);
    uVar6 = (*(uint *)(gen_frame + 0x28)) - 10000;
    (*(uint *)(gen_frame + 0x28)) = uVar6;
    if ((short)uVar6 < 0) {
      (*(uint *)(gen_frame + 0x28)) = 0;
    }
    piVar7 = piVar7 + 0xe;
    iVar1 = (*(int *)(gen_frame + 0x24)) + -1;
    (*(int *)(gen_frame + 0x24)) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: Client::UI2::AddonMainCross::vf5 */
uint F_007f28f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f28f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    uVar1 = F_005803e0(*(undefined * PTR32 *)(uVar1 + 0x14),0x10000000,0x20000,4,1);
  }
  this[0x4a0] = (undefined1)0x1;
  return uVar1;
}

/* ref: Client::UI2::AddonMainCross::vf6 */
uint F_007f2940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0x4a0] = (undefined1)0x0;
  uVar1 = F_0055dcb0();
  F_005602f0((undefined *)(uVar1 + 0x20c),0,0,0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    uVar1 = F_005803e0(*(undefined * PTR32 *)(uVar1 + 0x14),0x10000000,0x20000,4,0);
  }
  return uVar1;
}

/* ref: FUN_007f29a0 */
uint F_007f29a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f29a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*((char *)GEN_TOP((*(int *)((int)this + param_1 * 0x14 + 0x1ec) + 0x10 + param_2 * 0x14))) != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,1);
    uVar3 = *((undefined4 *)GEN_TOP((param_2 * 0x14 + *(int *)((int)this + param_1 * 0x14 + 0x1ec))));
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x37,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    return uVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1c5;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  uVar1 = F_0046a630(this_00,uVar3);
  return uVar1;
}

/* ref: FUN_007f2a50 */
uint F_007f2a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f2a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (((char)param_4 == '\x01') && (param_3 == *(int *)((int)this + 0x490))) {
    uVar1 = F_0059d640(*(undefined * PTR32 *)(param_1 + 0x6c),
                         (-(uint)(*((char *)GEN_TOP((*(int *)((int)this + param_2 * 0x14 + 0x1ec) + 0x10 +
                                           param_3 * 0x14))) != '\0') & 0xffffff9d) + 0x65);
    return uVar1;
  }
  uVar1 = F_0059d670(*(undefined * PTR32 *)(param_1 + 0x6c),
                       (-(uint)(*((char *)GEN_TOP((*(int *)((int)this + param_2 * 0x14 + 0x1ec) + 0x10 +
                                         param_3 * 0x14))) != '\0') & 0xfffffffa) + 7);
  return uVar1;
}

/* ref: FUN_007f2ad0 */
unsigned int F_007f2ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_2 + 0xc);
  }
  local_8 = 0;
  piVar5 = (int *)((int)this + 0x1ec);
  do {
    uVar2 = (piVar5[1] - *piVar5) / 0x14;
    uVar4 = 0;
    if (uVar2 != 0) {
      iVar6 = 0;
      do {
        if (local_c == *(int *)(iVar6 + *piVar5)) {
          if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x14);
          }
          *(bool *)(iVar6 + *piVar5 + 0x10) = iVar3 != 0;
          if (local_8 == *(uint *)((int)this + 0x48c)) {
            this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 +
                                         *(uint *)((int)this + 0x490) * 0xc))) + 0x6c)));
            cVar1 = *(char *)(iVar6 + 0x10 + *piVar5);
            if (uVar4 == *(uint *)((int)this + 0x490)) {
              F_0059d640(this_00,(-(uint)(cVar1 != '\0') & 0xffffff9d) + 0x65);
            }
            else {
              F_0059d670(this_00,(-(uint)(cVar1 != '\0') & 0xfffffffa) + 7);
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x14;
      } while (uVar4 < uVar2);
    }
    local_8 = local_8 + 1;
    piVar5 = piVar5 + 5;
  } while (local_8 < 6);
  return 0;
}

/* ref: FUN_007f2bd0 */
uint F_007f2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  pvVar4 = (undefined *)((int)this + 0x29c);
  iVar2 = 6;
  do {
    F_0056c5f0(pvVar4);
    F_00588f80(pvVar4,0x3d,0,this,0);
    pvVar4 = (undefined *)((int)pvVar4 + 0x30);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1f0))) -
          *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1ec)))) / 0x14;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      F_0056c5f0(((undefined *)GEN_TOP((iVar5 + *(int *)((int)this + 0x3bc)))));
      F_00588f80(((undefined *)GEN_TOP((iVar5 + *(int *)((int)this + 0x3bc)))),0x3d,2,this,0);
      iVar5 = iVar5 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3bc);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x3bc) = 0;
  }
  uVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x3f0);
  do {
    F_0056c5f0(pvVar4);
    F_00588f80(pvVar4,0x3d,uVar3,this,0);
    uVar3 = uVar3 + 0x100;
    pvVar4 = (undefined *)((int)pvVar4 + 0x30);
  } while (uVar3 < 0x303);
  F_0056c5f0((undefined *)((int)this + 0x3c0));
  uVar3 = F_00588f80((undefined *)((int)this + 0x3c0),0x3d,4,this,0);
  return uVar3;
}

/* ref: FUN_007f2ce0 */
uint F_007f2ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  undefined2 extraout_var_01 = 0;
  float10 fVar3;
  float10 fVar4;
  short local_8;
  
  if (param_2 == 0) {
    uVar2 = F_0055dcb0();
    uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),0,0,0);
    return CONCAT22(extraout_var,uVar1);
  }
  fVar3 = F_00559d80(*(undefined4 *)(param_2 + 0x70));
  uVar1 = F_0055a030(*(undefined4 *)(param_2 + 0x70));
  fVar4 = F_00559d60(*(undefined4 *)(param_2 + 0x70));
  uVar2 = F_0055dcb0();
  if ((char)param_1 != '\0') {
    local_8 = (short)(int)fVar4;
    uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),3,(int)local_8,
                         (int)(short)(int)((float10)(int)(short)(int)fVar3 +
                                          (float10)uVar1 * (float10)REFG(double, 0x1088108)));
    return CONCAT22(extraout_var_00,uVar1);
  }
  uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),0,0,0);
  return CONCAT22(extraout_var_01,uVar1);
}

/* ref: FUN_007f2db0 */
uint F_007f2db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x8))[4] = uVar2;
  if (param_1 != 0) {
    this_00 = (undefined *)F_00559c20(param_1);
    uVar2 = F_00561530(this_00,4);
    if (uVar2 != 0) {
      cVar1 = *(char *)((int)this + 0x17);
      ((uint *)(gen_frame + 0x8))[0] = 0xff888888;
      ((uint *)(gen_frame + 0x8))[1] = 0xffeeeeee;
      ((uint *)(gen_frame + 0x8))[2] = 0xff996666;
      ((uint *)(gen_frame + 0x8))[3] = 0xffeeaaaa;
      F_0055aa30(uVar2,((uint *)(gen_frame + 0x8))[(int)((-(uint)(cVar1 != '\0') & 2) + (uint)((char)param_2 != '\0'))]);
    }
    uVar2 = F_0059d670(*(undefined * PTR32 *)((int)this_00 + 0x6c),
                         (-(uint)((char)param_2 != '\0') & 0x52) + 0x13);
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf52 */
byte F_007f2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (((char)param_1[1] == '\0') && (*param_1 == 6)) {
    bVar1 = F_00792580(this);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f2e80 */
uint F_007f2e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = F_007927b0(this);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf54 */
uint F_007f2ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int * this;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1,param_2,param_3);
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar4;
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x20)) = (float)fVar4;
  param_3 = 0;
  do {
    puVar1 = *(undefined4 * PTR32 *)(param_3 + param_1[0x65]);
    if (puVar1 == (undefined4 *)0x0) break;
    this = (int *)*puVar1;
    (*(uint *)(gen_frame + 0x24)) = *((uint *)GEN_TOP((param_1[0x66] + *(char *)(puVar1 + 5) * 4)));
    F_0056b5f0(this,&(*(int *)(gen_frame + 0xc)));
    iVar3 = (*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x28)) = (float)((*(int *)(gen_frame + 0x14)) - (*(int *)(gen_frame + 0xc)));
    F_00791b20(puVar1,(*(uint *)(gen_frame + 0x24)),(uint)this,(float)((*(int *)(gen_frame + 0x14)) - (*(int *)(gen_frame + 0xc))),(*(float *)(gen_frame + 0x1c)),(float)iVar3,
                 (*(float *)(gen_frame + 0x20)));
    F_0057f4c0((*(uint *)(gen_frame + 0x24)),(int)(*(float *)(gen_frame + 0x28)) & 0xffff,(int)(float)iVar3 & 0xffff);
    ((code *)*(gen_code32 *)(*this + 0x6c))(this);
    param_3 = param_3 + 4;
  } while (param_3 < 0x80);
  uVar2 = F_00792980(param_1);
  return uVar2;
}

/* ref: FUN_007f2fd0 */
uint F_007f2fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  undefined4 uVar13;
  
  ((uint *)(gen_frame + 0x88))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x18)) = param_1;
  uVar5 = 0;
  if (param_1 != 0) {
    uVar11 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + param_1 * 4)));
    pvVar3 = (undefined *)F_00559c20(uVar11);
    F_00559d10(uVar11,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x8)));
    puVar12 = &(*(undefined4 *)(gen_frame + 0x2c));
    puVar10 = &(*(undefined4 *)(gen_frame + 0x30));
    pvVar4 = (undefined *)F_00561490(pvVar3,8);
    F_0055a000(pvVar4,puVar10,puVar12);
    uVar5 = F_00561530(pvVar3,4);
    uVar11 = REFG(undefined4, 0x108cc50);
    uVar5 = F_0055aaf0(uVar5);
    F_0042cc20(((undefined1 *)(gen_frame + 0x34)),uVar5,uVar11);
    for (iVar8 = (*(int *)(gen_frame + 0x18)); 0 < iVar8; iVar8 = iVar8 + -1) {
      uVar11 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + -4 + iVar8 * 4)));
      (*(undefined4 *)(gen_frame + 0x14)) = uVar11;
      pvVar4 = (undefined *)F_00559c20(uVar11);
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + iVar8 * 4)));
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar3;
      pvVar3 = (undefined *)F_00559c20(pvVar3);
      F_00559d10((*(undefined4 *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x4)));
      F_00559da0((*(undefined * PTR32 *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x4)));
      puVar12 = &(*(undefined4 *)(gen_frame + 0x28));
      puVar10 = &(*(undefined4 *)(gen_frame + 0x24));
      pvVar6 = (undefined *)F_00561490(pvVar4,8);
      F_0055a000(pvVar6,puVar10,puVar12);
      if (pvVar3 == (undefined *)0x0) {
        pvVar6 = (undefined *)0x0;
      }
      else {
        pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
      }
      F_0055a040(pvVar6,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
      uVar11 = (*(undefined4 *)(gen_frame + 0x24));
      uVar13 = (*(undefined4 *)(gen_frame + 0x28));
      pvVar6 = (undefined *)F_00561490(pvVar3,8);
      F_0055a040(pvVar6,uVar11,uVar13);
      uVar11 = (*(undefined4 *)(gen_frame + 0x24));
      uVar13 = (*(undefined4 *)(gen_frame + 0x28));
      pvVar6 = (undefined *)F_00561490(pvVar3,9);
      F_0055a040(pvVar6,uVar11,uVar13);
      pvVar4 = (undefined *)F_00561530(pvVar4,4);
      pvVar3 = (undefined *)F_00561530(pvVar3,4);
      uVar5 = F_0055aaf0(pvVar4);
      F_00584110(pvVar3,uVar5);
      uVar5 = F_00577bc0(pvVar4,0,0,REFG(undefined4, 0x108cc50),0);
      F_0055a060(pvVar3,uVar5 + 5);
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    }
    uVar11 = **(undefined4 * PTR32 *)((int)this + 0x198);
    pvVar3 = (undefined *)F_00559c20(uVar11);
    F_00559da0(uVar11,(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x8)));
    if (pvVar3 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)((int)pvVar3 + 0x70);
    }
    F_0055a040(pvVar4,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x2c)));
    uVar11 = (*(undefined4 *)(gen_frame + 0x30));
    uVar13 = (*(undefined4 *)(gen_frame + 0x2c));
    pvVar4 = (undefined *)F_00561490(pvVar3,8);
    F_0055a040(pvVar4,uVar11,uVar13);
    pvVar4 = (undefined *)F_00561490(pvVar3,9);
    F_0055a040(pvVar4,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x2c)));
    pvVar3 = (undefined *)F_00561530(pvVar3,4);
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    F_00584110(pvVar3,uVar5);
    uVar5 = F_00577bc0(pvVar3,0,0,REFG(undefined4, 0x108cc50),0);
    F_0055a060(pvVar3,uVar5 + 5);
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x1b8)) {
      do {
        iVar7 = (int)*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar8 * 4))) + 0x14)));
        if (iVar7 == (*(int *)(gen_frame + 0x18))) {
          iVar7 = 0;
        }
        else if (iVar7 < (*(int *)(gen_frame + 0x18))) {
          iVar7 = iVar7 + 1;
        }
        *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar8 * 4))) + 0x14))) = (char)iVar7;
        iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x198) + iVar7 * 4)));
        iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar8 * 4)));
        if (iVar7 != 0) {
          pvVar3 = (undefined *)F_00559c20(iVar7);
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar3;
          uVar5 = F_00561530(pvVar3,4);
          if (uVar5 != 0) {
            cVar1 = *(char *)(iVar2 + 0x17);
            ((uint *)(gen_frame + 0x88))[0] = 0xff888888;
            ((uint *)(gen_frame + 0x88))[1] = 0xffeeeeee;
            ((uint *)(gen_frame + 0x88))[2] = 0xff996666;
            ((uint *)(gen_frame + 0x88))[3] = 0xffeeaaaa;
            F_0055aa30(uVar5,((uint *)(gen_frame + 0x88))[(int)(-(uint)(cVar1 != '\0') & 2)]);
          }
          F_0059d670(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x6c),0x13);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)this + 0x1b8));
    }
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    uVar5 = (uint)uVar9;
  }
  F_00c47745(((uint *)(gen_frame + 0x88))[4] ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5;
}

/* ref: FUN_007f3300 */
unsigned int F_007f3300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    pvVar1 = (undefined *)F_00579400(param_1,0);
    F_00567e90(pvVar1,0);
    uVar2 = F_0055e320(param_1);
    if ((uVar2 != 0) && (pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70), pvVar1 != (undefined *)0x0)) {
      F_007928c0(*(undefined4 *)((int)pvVar1 + 8));
      F_00567e90(pvVar1,*(undefined4 *)((int)pvVar1 + 8));
    }
    pvVar1 = (undefined *)param_1[0x25];
    if (pvVar1 != (undefined *)0x0) {
      F_007928c0(*(undefined4 *)((int)pvVar1 + 8));
      F_00567e90(pvVar1,*(undefined4 *)((int)pvVar1 + 8));
    }
    F_0056ae10(param_1);
    ((code *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
  }
  return 0;
}

/* ref: FUN_007f3380 */
uint F_007f3380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f3380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = 0;
  if (0 < param_3) {
    iVar7 = 0x22;
    pbVar6 = (byte *)(param_2 + 0x110);
    do {
      if ((((-1 < iVar7) && (iVar7 < param_1)) && ((*pbVar6 & 0xf) != 0)) &&
         (pbVar3 = *(byte * PTR32 *)(pbVar6 + 4), pbVar5 = param_4, pbVar3 != (byte *)0x0)) {
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_007f33d8: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007f33dd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_007f33d8;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_007f33dd: ;
        if (iVar4 == 0) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 1;
      pbVar6 = pbVar6 + 8;
    } while ((int)uVar2 < param_3);
  }
  return 0xffffffff;
}

/* ref: FUN_007f3400 */
uint F_007f3400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f3400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x180) != 0) {
    bVar1 = F_0056c800();
    if (bVar1 == 0) {
      F_00792d50(this,(int)*param_2,(int)param_2[1]);
      F_00792220(*(undefined4 *)((int)this + 0x180),(uint)(ushort)param_2[2],
                   (uint)(ushort)param_2[3],*(uint *)(param_2 + 4));
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
      *(undefined1 *)(param_1 + 0x15) = 6;
    }
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 4),5);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = *(uint *)((int)this + 0x180);
      this_00 = *(undefined * PTR32 *)(in_EAX + 0x19c);
      if ((this_00 != (undefined *)0x0) && ((*(uint *)((int)this_00 + 0x10) & 0x1000000) == 0)) {
        F_00791a70(this_00,*((undefined4 *)GEN_TOP((*(int *)(in_EAX + 0x198) + *(char *)((int)this_00 + 0x14) * 4))),
                     (uint)*(byte *)((int)this_00 + 0x17));
        in_EAX = F_00557670(param_1,0);
      }
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonSocial::vf60 */
byte F_007f34b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f34b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 0;
  if ((char)param_2 == '\0') {
LAB_007f34e5: ;
    if (param_1 != 0xf) goto LAB_007f3500;
    bVar2 = (char)this[0x184] + 1U & 3;
  }
  else {
    if ((this[0x184] == (undefined1)0x0) && (param_1 == 0x10)) {
      return 0;
    }
    if (this[0x184] != (undefined1)0x3) goto LAB_007f34e5;
    if (param_1 == 0xf) {
      return 0;
    }
LAB_007f3500: ;
    if (param_1 != 0x10) goto LAB_007f351b;
    if (this[0x184] == (undefined1)0x0) {
      bVar2 = 3;
      goto LAB_007f351b;
    }
    bVar2 = (char)this[0x184] - 1;
  }
  if (3 < bVar2) {
    bVar2 = 0;
  }
LAB_007f351b: ;
  piVar1 = *(int * PTR32 *)(this + (uint)bVar2 * 4 + 0x1c0);
  if ((piVar1 != (int *)0x0) && (uVar3 = F_0055a350(piVar1[0x1c]), (char)uVar3 != '\0')) {
    uVar3 = F_0055a260((undefined *)piVar1[0x1c],0x17);
    F_007930a0(this,uVar3);
    uVar3 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSocialList::vf38 */
uint F_007f35a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f35a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x204) == '\0') goto LAB_007f3605;
  if (*(int *)((int)param_1 + 0x1cc) == 0) {
LAB_007f35eb: ;
    uVar2 = 0;
  }
  else {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x1cc) + 0x70))));
    if ((char)uVar1 == '\0') goto LAB_007f35eb;
    F_005879b0(param_1,0,7,0,9,0,0);
    uVar2 = *(undefined4 *)((int)param_1 + 0x200);
  }
  F_005879b0(param_1,uVar2,7,0,9,0,0);
  *(undefined1 *)((int)param_1 + 0x204) = 0;
LAB_007f3605: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialList::vf47 */
uint F_007f3620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f3620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = 0;
  if (*(int *)(this + 0x180) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + *(int *)(this + 0x1e8) * 4)));
    iVar2 = *((int *)GEN_TOP((param_2 + *(int *)(this + 0x1ec) * 4)));
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + *(int *)(this + 0x1f0) * 4)));
    puVar5 = *(undefined4 * PTR32 *)(this + 0x180);
    iVar8 = 0;
    if (iVar3 != 0) {
      iVar7 = 0xc;
      iVar8 = iVar3 * 5;
      iVar9 = 0xc;
      param_1 = iVar3;
      do {
        *(undefined1 *)((int)puVar5 + 0x2b) = 0;
        *puVar5 = *((undefined4 *)GEN_TOP((iVar9 + -0xc + *(int *)(iVar2 + 0x20))));
        puVar5[1] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + -8 + iVar9)));
        puVar5[2] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + -4 + iVar9)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar9 + *(int *)(iVar2 + 0x20))));
        puVar5[4] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar9)));
        puVar5[5] = *((undefined4 *)GEN_TOP((iVar7 + -0xc + *(int *)(iVar1 + 0x20))));
        puVar5[6] = *((undefined4 *)GEN_TOP((iVar7 + -8 + *(int *)(iVar1 + 0x20))));
        puVar5[7] = *((undefined4 *)GEN_TOP((iVar7 + -4 + *(int *)(iVar1 + 0x20))));
        puVar5[8] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)(iVar1 + 0x20))));
        puVar5[9] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(iVar1 + 0x20))));
        *(undefined1 *)(puVar5 + 10) = *((undefined1 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
        *(undefined1 *)((int)puVar5 + 0x29) = *((undefined1 *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
        *(byte *)((int)puVar5 + 0x2a) =
             (byte)(*((uint *)GEN_TOP((iVar7 + 0x10 + *(int *)(iVar1 + 0x20)))) >> 5) & 1;
        iVar9 = iVar9 + 0x14;
        iVar7 = iVar7 + 0x20;
        puVar5 = puVar5 + 0xb;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar8 * 4)));
    *(int *)(this + 0x1fc) = iVar3;
    *(undefined4 *)(this + 0x184) = uVar4;
    uVar6 = *(uint *)(iVar1 + 0x20);
    this[0x205] = (undefined1)(*((int *)GEN_TOP((uVar6 + *(int *)(this + 0x1f8) * 4))) != 0);
    if (((byte)this[0xf9] & 1) != 0) {
      uVar6 = F_00793970(this);
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonSocialList::vf52 */
byte F_007f3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0x1cc) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 3;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f37f0 */
uint F_007f37f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f37f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00793750(this,param_1 * 0x2c + *(int *)((int)this + 0x180),param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonBlackList::vf52 */
byte F_007f3820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 3;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f38a0 */
unsigned int F_007f38a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f38a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  undefined * pvVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar9 = (*(uint *)(gen_frame + 0x8));
  iVar5 = (*(int *)&gen_args[2]);
  iVar4 = (*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar9 & 0xffffff00;
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    iVar7 = **(int * PTR32 *)((*(int *)&gen_args[1]) + 0x20);
    uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)));
    (*(int *)&gen_args[2]) = 200;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(int *)&gen_args[1]) = iVar7;
    if (iVar7 < 200) {
      puVar6 = (uint *)&(*(int *)&gen_args[1]);
      if (iVar7 < 1) {
        puVar6 = &(*(uint *)(gen_frame + 0x4));
      }
    }
    else {
      puVar6 = (uint *)&(*(int *)&gen_args[2]);
    }
    uVar1 = *puVar6;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))) = uVar1;
    if ((uVar9 != uVar1) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0)) {
      F_0058d980(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))),uVar1 & 0xffff);
    }
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)))) {
      do {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 * 4 + 0x188))) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + iVar7 * 4)));
        iVar7 = iVar7 + 1;
      } while (iVar7 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))));
    }
    bVar3 = 0 < *((int *)GEN_TOP((*(int *)(iVar4 + 0x20) + 8)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = bVar3;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(*(uint *)(gen_frame + 0x8)));
    uVar9 = (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))) == 0);
    pvVar8 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),5);
    F_0055a300(pvVar8,uVar9);
    uVar9 = F_0055e340((*(undefined * PTR32 *)&gen_args[0]),7);
    if (uVar9 != 0) {
      uVar10 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)));
      uVar11 = 200;
      pvVar8 = (undefined *)F_0055dcb0();
      uVar9 = F_005b03e0(pvVar8,uVar10,uVar11);
      pvVar8 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),7);
      F_00584110(pvVar8,uVar9);
    }
    F_005879b0((*(undefined * PTR32 *)&gen_args[0]),0x3c6,7,0,9,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonPartyMemberList::vf2 */
uint F_007f39e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f39e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  undefined4 * this_00;
  undefined * pAVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 6: ;
  case 0x1f: ;
    if (param_2 == 4) {
      iVar8 = *(int *)(this + 0x208);
    }
    else {
      iVar8 = *param_4;
    }
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x1e4) != 0)) {
      F_00560760(((int *)(gen_frame + 0xc)));
      if (param_2 == 4) {
        pAVar7 = this + 0x22c;
      }
      else {
        pAVar7 = ((undefined *)GEN_TOP((param_4[2] * 0x2c + *(int *)(this + 0x180))));
      }
      uVar5 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4));
      if ((uVar5 == 6) && (((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar7 + 0xc), *(int *)(pAVar7 + 0xc) != 0)) {
        AVar1 = this[0x13a];
        uVar9 = *(undefined4 *)(iVar8 + 0x1e4);
        uVar5 = F_0055dcb0();
        F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar1,uVar9,((int *)(gen_frame + 0xc)),0,0);
      }
      uVar5 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4));
      if (uVar5 == 0x10) {
        if (*(int *)(pAVar7 + 0x10) != 0) {
          ((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar7 + 0x10);
LAB_007f3eeb: ;
          uVar9 = *(undefined4 *)(iVar8 + 0x1e4);
          AVar1 = this[0x13a];
          uVar5 = F_0055dcb0();
          F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar1,uVar9,((int *)(gen_frame + 0xc)),0,0);
        }
      }
      else if ((((*(int *)(pAVar7 + 4) != 0) && (*(int *)(this + 0x224) != 0)) &&
               (uVar5 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4)), uVar5 == 0x13)) &&
              (bVar4 = F_00584440(*(undefined * PTR32 *)(this + 0x224),*(undefined4 *)(pAVar7 + 4)),
              bVar4 != 0)) {
        ((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar7 + 4);
        goto LAB_007f3eeb;
      }
    }
    break;
  case 7: ;
  case 0x20: ;
    if (param_2 == 4) {
      iVar8 = *(int *)(this + 0x208);
    }
    else {
      iVar8 = *param_4;
    }
    if (((iVar8 != 0) && (*(undefined * PTR32 *)(iVar8 + 0x1e4) != (undefined *)0x0)) &&
       ((uVar5 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4)), uVar5 == 6 ||
        ((uVar5 == 0x10 || (uVar5 == 0x13)))))) {
      uVar5 = F_0055dcb0();
      F_00594d90((undefined *)(uVar5 + 0xe0),0);
    }
    break;
  default: ;
    break;
  case 0x11: ;
    if (param_2 == 5) {
      bVar4 = F_005615c0(*(undefined4 *)(this + 0x20c),*param_4);
      if (bVar4 == 0) {
        F_00793f00(this);
      }
      F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
    }
    else if (param_2 == 4) {
      F_005879b0(this,0x3d1,7,0,9,0,0);
    }
    goto LAB_007f403b;
  case 0x12: ;
    if (param_2 != 5) {
      if (param_2 != 4) goto LAB_007f403b;
      goto LAB_007f3fd5;
    }
    bVar4 = F_005615c0(*(undefined4 *)(this + 0x20c),param_4[1]);
    if (bVar4 != 0) goto LAB_007f403b;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x208) + 0x3c))))(*(int * PTR32 *)(this + 0x208));
    if (param_4[1] == uVar5) {
      uVar9 = 0x3d1;
    }
    else {
      uVar9 = 0;
    }
    F_005879b0(this,uVar9,7,0,9,0,0);
    F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
    break;
  case 0x17: ;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = 2;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
      break;
    case 1: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = 3;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
      break;
    case 2: ;
    case 3: ;
      iVar8 = (uint)(param_2 != 2) * 2 + -1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = (uint)(param_2 != 2);
      uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
      (*(int *)(gen_frame + 0x34)) = iVar2 + iVar8;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
      iVar8 = *((int *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x20c) + 0xc0))) + iVar8;
      if (-1 < iVar8) {
        F_005623b0(*(undefined * PTR32 *)(this + 0x20c),iVar8);
      }
      if (*(int *)(this + 0x218) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x218) + 0x28))))(*(int * PTR32 *)(this + 0x218),(uint)(iVar8 != 0));
      }
      if (*(int *)(this + 0x21c) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x28))))
                  (*(int * PTR32 *)(this + 0x21c),(uint)(iVar8 < *(int *)(this + 600) + -1));
      }
      break;
    case 4: ;
      if (*(char *)((int)param_4 + 6) != '\x02') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(uint *)(gen_frame + 0x24)) = 0;
        uVar5 = F_0055aaf0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x208) + 0x104))));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
        (*(uint *)(gen_frame + 0x2c)) = uVar5;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x18)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x218) + 0x28))))(*(int * PTR32 *)(this + 0x218),0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x28))))(*(int * PTR32 *)(this + 0x21c),0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20c) + 0x78))))(*(int * PTR32 *)(this + 0x20c));
      }
    }
    break;
  case 0x21: ;
    bVar4 = *(byte *)(param_4 + 4);
    if ((bVar4 == 0) && ((*(byte *)((int)param_4 + 0x11) & 8) != 0)) {
      F_00557670(param_3,0);
      puVar6 = &(*(uint *)(gen_frame + 0x38));
      iVar8 = 3;
      do {
        puVar6 = puVar6 + -2;
        uVar5 = F_005a2670(puVar6);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((int *)(gen_frame + 0xc))[1] = 0;
    if (bVar4 == 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)bVar4;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    iVar8 = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    iVar2 = param_4[2];
    iVar3 = *(int *)(this + 0x180);
    ((int *)(gen_frame + 0xc))[0] = iVar8 + 1;
    uVar9 = *(undefined4 *)(iVar2 * 0x2c + iVar3);
    F_005a2710(((int *)(gen_frame + 0xc)) + 1,6);
    ((int *)(gen_frame + 0xc))[2] = uVar9;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3,0);
    this_00 = &(*(undefined4 *)(gen_frame + 0x18));
    iVar8 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    goto LAB_007f403b;
  case 0x24: ;
    if ((*(byte *)((int)param_4 + 0x11) & 8) == 0) {
      F_00793e60(this,param_4[2]);
      F_00793f00(this);
    }
    else {
      F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
      F_00793f00(this);
    }
    break;
  case 0x26: ;
    if (1 < *(int *)(this + 600)) {
      F_005879b0(this,0x18ab6,7,0,9,0,0);
    }
    goto LAB_007f403b;
  case 0x27: ;
    if (-1 < *((int *)GEN_TOP((*(int *)(this + 0x20c) + 0xcc)))) {
      if (*(int *)(this + 600) < 2) {
        if (*(int *)(this + 600) == 1) {
          F_005879b0(this,0x3d2,7,0,9,0,0);
        }
        F_00793e60(this,0xffffffff);
      }
      else {
        F_005879b0(this,0x142,7,0,9,0,0);
        F_00793e60(this,0xffffffff);
      }
      goto LAB_007f403b;
    }
LAB_007f3fd5: ;
    F_005879b0(this,0,7,0,9,0,0);
    goto LAB_007f403b;
  case 0x28: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = 4;
    uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x20c) + 0xd0)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    iVar8 = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    (*(int *)(gen_frame + 0x34)) = iVar8;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_00793e60(this,param_4[2]);
  }
  F_00557670(param_3,0);
LAB_007f403b: ;
  puVar6 = &(*(uint *)(gen_frame + 0x38));
  iVar8 = 3;
  do {
    puVar6 = puVar6 + -2;
    uVar5 = F_005a2670(puVar6);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar5;
}

/* ref: FUN_007f40d0 */
uint F_007f40d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f40d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x1fc);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x20c));
  if (uVar2 != *(uint *)((int)this + 0x1fc)) {
    F_0058d980(*(undefined4 *)((int)this + 0x20c),(uint)*(ushort *)((int)this + 0x1fc));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20c) + 0x70))))(*(int * PTR32 *)((int)this + 0x20c));
  if (*(int *)((int)this + 0x220) != 0) {
    uVar5 = *(undefined4 *)((int)this + 500);
    iVar4 = *(int *)((int)this + 0x1fc) + 1;
    this_00 = (undefined *)F_0055dcb0();
    uVar2 = F_005b03e0(this_00,iVar4,uVar5);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x220),uVar2);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x208);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  if (uVar2 == uVar3) {
    uVar2 = F_005879b0(this,0x3d1,7,0,9,0,0);
    return uVar2;
  }
  if ((*(int *)((int)this + 600) != 0) &&
     ((*(int *)((int)this + 0x20c) == 0 || (-1 < *((int *)GEN_TOP((*(int *)((int)this + 0x20c) + 0xcc))))))) {
    uVar2 = F_00793f00(this);
    return uVar2;
  }
  F_005879b0(this,0x142,7,0,9,0,0);
  uVar2 = F_005879b0(this,0,7,0,9,0,0);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterList::vf37 */
uint F_007f41e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f41e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  iVar2 = *(int *)(this + 0x180);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar6 = iVar3 + -1;
    if (-1 < iVar6) {
      pvVar5 = (undefined *)(iVar3 * 0x104 + 0x58 + iVar2);
      do {
        F_0042c880((undefined *)((int)pvVar5 + -0xb0));
        F_0042c880((undefined *)((int)pvVar5 + -0x104));
        F_0042c880((undefined *)((int)pvVar5 + -0x158));
        iVar6 = iVar6 + -1;
        pvVar5 = (undefined *)((int)pvVar5 + -0x104);
      } while (-1 < iVar6);
    }
    F_00406b30((int *)(iVar2 + -4));
    *(undefined4 *)(this + 0x180) = 0;
  }
  F_005a92d0(this,1,0x12,0);
  F_005a92d0(this,0,0x10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x184) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,0,this,0);
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x1ac) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar5,0x21,3,this,0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,1,this,0);
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,2,this,0);
  }
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonLetterList::vf47 */
uint F_007f4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f4310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  uint * puVar10;
  uint uVar11;
  uint * puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_2 + 0x40);
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x208)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar8 = F_0055dcb0();
  bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x188) + 0x88)));
  if (bVar1 == 0) {
    uVar16 = 0x1ad;
  }
  else {
    uVar16 = 0x1ac;
  }
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x30) + 0x2c))))(*(int * PTR32 *)(uVar8 + 0x30),uVar16);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),uVar8);
  if (*(int *)(this + 0x1b8) < iVar4) {
    *(int *)(this + 0x1b8) = iVar4;
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_009239e0(*(undefined * PTR32 *)(this + 0x180),3);
      *(undefined4 *)(this + 0x180) = 0;
    }
    piVar9 = (int *)F_00404270();
    uVar8 = *(uint *)(this + 0x1b8);
    uVar11 = -(uint)((int)((ulonglong)uVar8 * 0x104 >> 0x20) != 0) |
             (uint)((ulonglong)uVar8 * 0x104);
    puVar10 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar11) | uVar11 + 4,0,piVar9,0);
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      *puVar10 = uVar8;
      puVar10 = puVar10 + 1;
      puVar12 = puVar10;
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        *puVar12 = 0;
        F_0042b630(puVar12 + 1);
        F_0042b630(puVar12 + 0x16);
        F_0042b630(puVar12 + 0x2b);
        puVar12[0x40] = 0;
        puVar12 = puVar12 + 0x41;
      }
    }
    *(uint * PTR32 *)(this + 0x180) = puVar10;
    uVar8 = ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9,*(int *)(this + 0x1b8) * 0x104,0x10);
    *(uint *)(this + 0x180) = uVar8;
  }
  iVar13 = 0;
  if (0 < iVar4) {
    iVar14 = 0;
    do {
      uVar8 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar13 * 4)));
      if ((uint)bVar1 == (~(uVar8 >> 0x18) & 1)) {
        iVar5 = *(int *)(iVar3 + 0x20);
        uVar16 = *(undefined4 *)(iVar5 + 0x410 + iVar13 * 4);
        uVar6 = *(undefined4 *)(iVar5 + iVar13 * 4);
        iVar5 = *(int *)(this + 0x180);
        F_0042e430((undefined *)(iVar14 + 4 + iVar5),uVar6);
        F_0042e430((undefined *)(iVar14 + 0x58 + iVar5),uVar16);
        *(int *)(iVar14 + iVar5) = iVar13;
        bVar7 = F_0042b6a0((undefined *)(iVar14 + 4 + iVar5),&REFG(undefined, 0x10be796));
        if (bVar7 != 0) {
          F_0042e430((undefined *)(iVar14 + 4 + iVar5),uVar6);
        }
        bVar7 = F_0042b6a0((undefined *)(iVar14 + 0x58 + iVar5),&REFG(undefined, 0x10be797));
        if (bVar7 != 0) {
          F_0042e430((undefined *)(iVar14 + 0x58 + iVar5),uVar16);
        }
        F_0042e430((undefined *)(iVar14 + 0xac + iVar5),
                     *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x208 + iVar13 * 4))));
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        *(uint *)(iVar14 + 0x100 + iVar5) = uVar8 & 0xffffff;
        iVar14 = iVar14 + 0x104;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar4);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  uVar8 = F_00560910((*(int *)(gen_frame + 0x4)));
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c172c));
  uVar8 = F_00560910(iVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c1730));
  uVar8 = F_00560910(*((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x210))) + 0x82 +
                       *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20c))));
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  F_00584110(*(undefined * PTR32 *)(this + 400),uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1ac),(*(int *)(gen_frame + 0x4)),0,1);
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    uVar16 = 0x65;
  }
  else {
    uVar16 = 0x11;
  }
  F_0059d6a0(this,uVar16,1,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20c))),0,0,0,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x198),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x210))),0,0,0,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x214))),0,0,0,0);
  uVar15 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar15;
}

/* ref: Client::UI2::AddonLetterViewer::vf37 */
uint F_007f4ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  F_005a92d0(this,1,0x12,0);
  F_005a92d0(this,0,0x10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x194) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,2,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x19c),0x17,3,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterViewer::vf47 */
uint F_007f4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f4b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined * pAVar6;
  undefined * this_00;
  undefined * pAVar7;
  
  iVar5 = *(int *)(param_1 + 0x48);
  (*(int *)(gen_frame + 0x8)) = iVar5;
  F_00584110(*(undefined * PTR32 *)(this + 0x188),
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x40) + 0x20))) + 0x61c))));
  F_00574c80(*(undefined4 *)(this + 0x180),0,1,1);
  F_0058e3c0(*(undefined * PTR32 *)(this + 0x180),*(undefined4 *)(this + 0x188),0,0);
  uVar3 = *(uint *)(iVar5 + 0x20);
  if (*(int *)(uVar3 + 0x21c) != 0) {
    iVar5 = *(int *)(uVar3 + 0x220);
    if (0 < iVar5) {
      uVar3 = F_00560910(iVar5);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b4),uVar3);
    }
    param_1 = (uint)(0 < iVar5);
    iVar5 = 0x224;
    do {
      iVar1 = *((int *)GEN_TOP((iVar5 + *(int *)((*(int *)(gen_frame + 0x8)) + 0x20))));
      pvVar4 = *(undefined * PTR32 *)(this + iVar5 + -0x84);
      if (iVar1 < 1) {
        F_0058d590(pvVar4);
        this_00 = (undefined *)0x0;
        if (pvVar4 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)pvVar4 + 0x70);
        }
        F_0055a300(this_00,0);
      }
      else {
        F_00595190(pvVar4,iVar1,0,0);
        if (pvVar4 == (undefined *)0x0) {
          F_0055a300((undefined *)0x0,1);
          param_1 = param_1 + 1;
        }
        else {
          F_0055a300(*(undefined * PTR32 *)((int)pvVar4 + 0x70),1);
          param_1 = param_1 + 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x238);
    piVar2 = *(int * PTR32 *)(this + 0x194);
    if (param_1 == 0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),0);
      pAVar7 = this + 0x1a0;
      pAVar6 = this + 0x1bc;
      param_1 = 5;
      do {
        F_0055a300(*(undefined * PTR32 *)pAVar6,0);
        pAVar6 = pAVar6 + 4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1d0),0);
      iVar5 = 5;
      do {
        if (*(int *)pAVar7 == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(*(int *)pAVar7 + 0x70);
        }
        F_0055a300(pvVar4,0);
        pAVar7 = pAVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),1);
      pAVar6 = this + 0x1bc;
      iVar5 = 5;
      do {
        F_0055a300(*(undefined * PTR32 *)pAVar6,1);
        pAVar6 = pAVar6 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),1);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),1);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1d0),1);
    }
    *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0x20) + 0x21c))) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_007f4d90 */
uint F_007f4d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7cac));
  puVar1 = (undefined4 *)((int)this + 0x180);
  local_8 = 0x7f;
  do {
    *puVar1 = 0;
    F_0042b630(puVar1 + 1);
    F_0042b630(puVar1 + 0x16);
    F_0042b630(puVar1 + 0x2b);
    F_0042b630(puVar1 + 0x40);
    F_0042b630(puVar1 + 0x55);
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0;
    puVar1 = puVar1 + 0x72;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_00909ac0((int)this + 0xe580);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0xe630) = 0;
  *(undefined2 *)((int)this + 0xe63c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLinkShell::vf37 */
uint F_007f4e60(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_005a92d0(this,1,0xf,0);
  F_005a92d0(this,0,0xd,0);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = 0;
    pAVar3 = this + 0xe580;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x17,uVar1,this,0);
      uVar1 = uVar1 + 1;
      pAVar3 = pAVar3 + 4;
    } while (uVar1 < 8);
    if (*(int *)(this + 0xe624) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,8,this,0);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xe624) + 0x94))) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f57f0 */
uint F_007f57f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f57f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int in_ecx;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7dac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x1ac);
  local_8 = 0x642;
  do {
    *puVar2 = 0;
    F_0042b630(puVar2 + 1);
    puVar2 = puVar2 + 0x16;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_0042b630((int)this + 0x228b4);
  in_ecx = (int)this + 0x2290c;
  iVar1 = 4;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterEditor::vf37 */
uint F_007f5bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f5bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  undefined * local_8;
  
  AVar1 = this[0x13a];
  uVar3 = F_0055dcb0();
  F_00596b90((undefined *)(uVar3 + 0xe0),(uint)(byte)AVar1,1);
  iVar4 = *(int *)(this + 0x18c);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x144) = 0;
    *(undefined4 *)(iVar4 + 0x148) = 0;
    *(undefined4 *)(iVar4 + 0x14c) = 0;
  }
  local_8 = this + 0x194;
  iVar4 = 9;
  local_c = 5;
  do {
    iVar2 = *(int *)local_8;
    if (iVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar4 + -5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar4 + 5,this,0);
    }
    local_8 = local_8 + 4;
    iVar4 = iVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x21,2,this,0);
  }
  if (*(int *)(this + 0x1a8) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,0,this,0);
  }
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: FUN_007f5cf0 */
uint F_007f5cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f5cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0042e430((undefined *)((int)this + 0x228b4),param_3);
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      F_00795230(this);
    }
    return 0;
  }
  return 2;
}

/* ref: FUN_007f5d30 */
uint F_007f5d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f5d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar1 = *(byte *)((int)param_3 + 9);
  (*(int *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(uint *)(gen_frame + 0x34)) = bVar1 >> 3 & 1;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x2c))((int *)*param_3);
  if ((char)uVar3 == '\0') {
    if (*(char *)(param_3 + 2) == '\x04') {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + (*(int *)(gen_frame + 0x4)) * 4 + 0x194) + 0xa4)));
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + 0x70);
      }
      uVar3 = F_0055a2d0(uVar4);
      if ((char)uVar3 == '\0') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
        (*(int *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      }
      goto LAB_007f5f73;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    iVar5 = (*(int *)(gen_frame + 0x4));
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x4));
    F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
    if ((*(byte *)((int)param_3 + 9) & 8) != 0) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + iVar5 * 4 + 0x194) + 0xa4)));
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      uVar3 = F_0055a2d0(uVar4);
      if ((char)uVar3 != '\0') {
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x11);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(int *)(gen_frame + 0x14)) = iVar5;
      F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
      F_0056b630(this,0x1c0,7,0,9,0,0);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
      *(undefined1 *)(param_2 + 0x15) = 1;
      goto LAB_007f5f73;
    }
    if (*(char *)(param_3 + 2) != '\x01') goto LAB_007f5f73;
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + iVar5 * 4 + 0x194) + 0xa4)));
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    uVar3 = F_0055a2d0(uVar4);
    if ((char)uVar3 == '\0') goto LAB_007f5f73;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = iVar5;
  }
  else {
    if (*(char *)(param_3 + 2) == '\x04') goto LAB_007f5f73;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x4));
  }
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
LAB_007f5f73: ;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 5;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_007f5fb0 */
uint F_007f5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f5fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (-1 < *(int *)(param_2 + 8)) {
    uVar1 = F_0042a990(*(int *)(param_2 + 8) * 0x58 + 0x1b0 + (int)this);
    F_005b2fe0(*(undefined * PTR32 *)((int)this + 0x188),uVar1);
  }
  F_00557670(param_1,0);
  uVar1 = F_00795230(this);
  return uVar1;
}

/* ref: Client::UI2::AddonLetterEditor::vf25 */
uint F_007f6000(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 in_ecx;
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  if (*(int *)(this + 400) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),2);
  (*(undefined1 *)(gen_frame + 0x14)) = (char)uVar1;
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 5;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonLetterEditor::vf2 */
uint F_007f60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f60a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 0x11) {
    uVar1 = param_2;
    if (0xd < param_2) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x15c) + 0x84))) + 0xc))))
                        (*(int *)(this + param_2 * 4 + 0x15c) + 0x84);
      uVar1 = F_0055a2d0(uVar1);
      if ((char)uVar1 != '\0') {
        F_0056b630(this,0x18ad7,7,0,9,0,0);
        uVar1 = F_00557670(param_3,0);
        return uVar1;
      }
      F_0056b630(this,0x1c0,7,0,9,0,0);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
  }
  else {
    if ((short)param_1 == 0x12) {
      F_0056b780(this,0);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
    if ((short)param_1 == 0x17) {
      if (param_2 == 0) {
        uVar1 = F_007950e0(this,param_3,param_4);
        return uVar1;
      }
      uVar1 = param_2 - 1;
      if (uVar1 == 0) {
        uVar1 = F_007951b0(this,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x21) {
      uVar1 = param_2 - 2;
      if (uVar1 == 0) {
        uVar1 = F_007f5fb0(this,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x30) {
      uVar1 = param_2;
      if (param_2 - 9 < 5) {
        uVar1 = F_00794ef0(this,param_2 - 9,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x34) {
      uVar1 = param_2;
      if (param_2 - 0xe < 5) {
        uVar1 = F_007f5d30(this,param_2 - 0xe,param_3,param_4);
        return uVar1;
      }
    }
    else if (((short)param_1 == 0x2d) && (uVar1 = param_2, param_2 - 4 < 5)) {
      uVar1 = F_00795450(this,param_2 - 4,param_3,param_4);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonRequest::vf37 */
uint F_007f6220(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pAVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int local_c;
  
  F_005a92d0(this,1,0xb,0);
  F_005a92d0(this,0,10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1ac) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,0,this,0);
    if (*(int *)(this + 0x1b0) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,1,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x180),0x31,0x11,this,0);
    pAVar3 = this + 0x1b4;
    iVar6 = 7;
    local_c = 5;
    do {
      iVar2 = *(int *)(pAVar3 + -0x1c);
      *(undefined4 *)pAVar3 = *(undefined4 *)(pAVar3 + -0x30);
      *(int *)(pAVar3 + 0x14) = iVar2;
      if (iVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar6 + -5,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar6,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar6 + 5,this,0);
      }
      pAVar3 = pAVar3 + 4;
      iVar6 = iVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: FUN_007f6330 */
uint F_007f6330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f6330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int * piVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint * this_00;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar7 = *(int *)((int)this + param_1 * 4 + 0x1c8);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0xc))))(iVar7 + 0x84);
  uVar5 = F_0055a2d0(uVar5);
  if ((char)uVar5 == '\0') {
    F_00559d10(*(undefined4 *)(param_3 + 4),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x10)));
    F_0055a000(*(undefined * PTR32 *)(param_3 + 4),((ushort *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(ushort *)(gen_frame + 0x26)) = ((undefined2)0x27f);
    (*(int *)(gen_frame + 0x34)) = param_1;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = ((undefined2)0x27f) | 0xc00;
    (*(longlong *)(gen_frame + 0x1c)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0x14)));
    lVar4 = (*(longlong *)(gen_frame + 0x1c));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = (int)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x14)));
    iVar7 = (uint)((ushort *)(gen_frame + 0x18))[0] + (int)(*(longlong *)(gen_frame + 0x1c));
    (*(longlong *)(gen_frame + 0x1c)) = lVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
    (*(int *)(gen_frame + 0x3c)) = iVar7;
    (*(ushort *)(gen_frame + 0x26)) = ((undefined2)0x27f);
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = ((undefined2)0x27f) | 0xc00;
    (*(longlong *)(gen_frame + 0x1c)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0x10)));
    lVar4 = (*(longlong *)(gen_frame + 0x1c));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = (int)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x10)));
    uVar3 = (int)(*(longlong *)(gen_frame + 0x1c));
    (*(longlong *)(gen_frame + 0x1c)) = lVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
    (*(undefined4 *)(gen_frame + 0x44)) = uVar3;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x28)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 3;
    do {
      this_00 = this_00 + -2;
      uVar5 = F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  else {
    F_00795980(this,param_1);
    F_0056b630(this,0x18ad8,7,0,9,0,0);
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 8))))(*(int * PTR32 *)(uVar5 + 0x38),&(*(longlong *)(gen_frame + 0x1c)),0x11);
    F_005a2670(&(*(longlong *)(gen_frame + 0x1c)));
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar5 = F_0055dcb0();
    F_00590c40((undefined *)(uVar5 + 0xe0),(uint)bVar1);
    piVar2 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c8);
    uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
    uVar5 = F_0055dcb0();
    if (*(uint *)(uVar5 + 0xf8) != uVar6) {
      uVar5 = F_0055dcb0();
      uVar5 = F_0058d370((undefined *)(uVar5 + 0xe0),uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: Client::UI2::AddonRequest::vf2 */
uint F_007f64f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f64f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  undefined4 uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  uVar2 = param_2;
  uVar4 = param_3;
  if ((short)param_1 == 0x11) {
    if (param_2 < 2) goto LAB_007f66fb;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x1c0) + 0x84))) + 0xc))))
                      (*(int *)(this + param_2 * 4 + 0x1c0) + 0x84);
    uVar2 = F_0055a2d0(uVar2);
    if ((char)uVar2 == '\0') {
      F_0056b630(this,0x18ad8,7,0,9,0,0);
    }
    else {
      F_0056b630(this,0xd1,7,0,9,0,0);
    }
  }
  else if ((short)param_1 == 0x12) {
    F_0056b780(this,0);
  }
  else if ((short)param_1 == 0xc) {
    if (*param_4 != 1) goto LAB_007f66fb;
    if ((char)param_4[1] != '\x01') {
      if ((char)param_4[1] == '\0') {
        *(uint *)(this + 0x1e0) = param_2;
        F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x3c));
        return param_2;
      }
      goto LAB_007f66fb;
    }
    if (param_2 == *(uint *)(this + 0x1e0)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x1c8) + 0x84))) + 0xc))))
                        (*(int *)(this + param_2 * 4 + 0x1c8) + 0x84);
      uVar2 = F_0055a2d0(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 4;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        this_00 = &(*(uint *)(gen_frame + 0x38));
        iVar3 = 3;
        do {
          this_00 = this_00 + -2;
          F_005a2670(this_00);
          iVar3 = iVar3 + -1;
          uVar4 = (*(undefined4 *)(gen_frame + 0x14));
        } while (-1 < iVar3);
      }
    }
    *(undefined4 *)(this + 0x1e0) = 0xffffffff;
  }
  else if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_007956e0(this,param_3,param_4);
    }
    else if (param_2 == 1) {
      F_00795750(this,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x30) {
    if (param_2 - 7 < 5) {
      F_007957c0(this,param_2 - 7,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x31) {
    if (param_2 == 0x11) {
      F_007957c0(this,5,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x34) {
    if (param_2 - 0xc < 5) {
      F_007f6330(this,param_2 - 0xc,param_3,param_4);
    }
  }
  else {
    if ((short)param_1 != 0x2d) goto LAB_007f66fb;
    if (param_2 - 2 < 5) {
      F_00795900(this,param_2 - 2,param_3,param_4);
    }
  }
  uVar2 = F_00557670(uVar4,0);
LAB_007f66fb: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_007f6710 */
unsigned int F_007f6710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint in_ecx;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xf9) & 1) != 0) && ((char)param_1 < '\x05')) {
    piVar1 = (int *)((int)this + (char)param_1 * 4 + 0x1c8);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(*piVar1 + 0xa4) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 0xa4) + 0x70)));
    }
    F_0055a300(pvVar3,param_2);
    iVar2 = *(int *)(*piVar1 + 0xc);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(*piVar1 + 0x1a) + *(int *)(iVar2 + 4);
    }
    uVar5 = 1;
    if (1 < uVar4) {
      do {
        in_ecx = F_00578ee0((undefined *)(*piVar1 + 4),uVar5);
        pvVar3 = (undefined *)F_00559b90(in_ecx);
        if (pvVar3 != (undefined *)0x0) {
          F_0055a300(pvVar3,param_2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return 0;
}

/* ref: FUN_007f67a0 */
uint F_007f67a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f67a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7fac));
  F_00909c00((int)this + 0x180);
  F_0042b630((int)this + 0x23c);
  F_0042b630((int)this + 0x290);
  in_ecx = (int)this + 900;
  iVar1 = 0x2d;
  do {
    F_0042b630(in_ecx);
    F_0042b630(in_ecx + 0x54);
    in_ecx = in_ecx + 0xa8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630((int)this + 0x21b4);
  F_0042b630((int)this + 0x2208);
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  F_00c48350((undefined *)((int)this + 0x2f0),0,0x70);
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailA::vf37 */
uint F_007f6880(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * pAVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
    pAVar4 = this + 0x1ac;
    iVar3 = 4;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x17,0,this,0);
      pAVar4 = pAVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pAVar4 = this + 0x1bc;
    iVar3 = 0x1c;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x17,1,this,0);
      pAVar4 = pAVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,5,this,0);
    iVar3 = *(int *)(this + 0x184);
    *(undefined4 *)(iVar3 + 0x144) = 0;
    *(undefined4 *)(iVar3 + 0x148) = 0;
    *(undefined4 *)(iVar3 + 0x14c) = 0;
    F_005840a0(*(undefined * PTR32 *)(this + 0x194),6,6,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x194),7,6,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x238),6,7,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x238),7,7,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f69c0 */
uint F_007f69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 in_ecx;
  int * piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_c = 0;
  piVar3 = (int *)((int)this + 0x2f0);
  do {
    iVar1 = piVar3[-0x4d];
    if (iVar1 == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a350(in_ecx);
    if ((((char)uVar2 != '\0') && (*(char *)(iVar1 + 0x88) != '\0')) && (local_8 < *piVar3)) {
      local_c = iVar4 + 1;
      local_8 = *piVar3;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  *(int *)((int)this + 0x2e4) = local_c;
  if (local_c != 0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)((int)this + local_c * 4 + 0x1b8),1);
    return uVar2;
  }
  uVar2 = F_0059dde0(param_1,0);
  return uVar2;
}

/* ref: FUN_007f6a60 */
uint F_007f6a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    this_00 = (undefined *)F_00559c20(*(int *)(param_1 + 4));
    uVar1 = 0;
    if ((this_00 != (undefined *)0x0) && (uVar1 = F_005613a0(this_00), uVar1 == 3)) {
      uVar1 = 0;
      piVar2 = (int *)((int)this + 0x1bc);
      do {
        uVar3 = uVar1;
        if ((undefined *)*piVar2 == this_00) break;
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
        uVar3 = 0;
      } while ((int)uVar1 < 0x1c);
      if (*(int *)((int)this + 0x2e4) - 1U == uVar3) {
        uVar1 = F_0059dde0(this_00,1);
        *(undefined1 *)(uVar3 + 0x360 + (int)this) = 1;
        return uVar1;
      }
      *(undefined1 *)(uVar3 + 0x360 + (int)this) = *(undefined1 *)((int)this_00 + 0x88);
    }
  }
  return uVar1;
}

/* ref: FUN_007f6ae0 */
uint F_007f6ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar3 = 1;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((int)this + 0x1bc);
  (*(int *)(gen_frame + 0x14)) = 0x1c;
  do {
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    (*(int *)(gen_frame + 0x8)) = iVar4;
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x70);
    }
    uVar2 = F_0055a350(uVar1);
    if (((char)uVar2 != '\0') && (*(char *)((*(int *)(gen_frame + 0x8)) + 0x88) != '\0')) {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | uVar3;
    }
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    iVar4 = (*(int *)(gen_frame + 0x14)) + -1;
    (*(int *)(gen_frame + 0x14)) = iVar4;
  } while (iVar4 != 0);
  if ((0 < *(int *)((int)this + 0x2e4)) &&
     (*(int *)((int)this + 0x37c) == *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x88))) + 0xc0)))))
  {
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | 1 << ((char)*(int *)((int)this + 0x2e4) - 1U & 0x1f);
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  bVar5 = *((char *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x88))) != '\0';
  if (bVar5) {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x1;
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uint)bVar5;
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 2);
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 4);
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 8);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  uVar1 = *(undefined4 *)((int)this + 0x2e4);
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x18));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x88))) + 0xc0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
  (*(uint *)(gen_frame + 0x3c)) = (uint)(*(int * PTR32 *)(gen_frame + 0x1c));
  uVar3 = F_0042a990((int)this + 0x290);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
  (*(uint *)(gen_frame + 0x44)) = uVar3;
  uVar3 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x25,5,&(*(undefined4 *)(gen_frame + 0x20)));
  F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0xc)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 4;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::UI2::AddonSocialDetailA::vf2 */
uint F_007f6cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f6cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if ((short)param_1 == 0x17) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      F_00795b50(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 1: ;
      F_007f6a60(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 2: ;
      F_007f6ae0(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 3: ;
      F_00795c50(this,param_3,param_4);
    }
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  }
  if ((short)param_1 == 0x23) {
    if (param_2 == 5) {
      F_00795c90(this,param_3,param_4);
    }
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  }
  if ((short)param_1 == 6) {
    F_00560760(((uint *)(gen_frame + 0x0)));
    if (param_2 == 6) {
      if (**(char * PTR32 *)(this + 0x21b4) != '\0') {
        uVar2 = F_0042a990(this + 0x21b4);
        AVar1 = this[0x13a];
        ((uint *)(gen_frame + 0x0))[0] = uVar2;
        uVar2 = F_0055dcb0();
        uVar3 = *(undefined4 *)(this + 0x194);
        goto LAB_007f6e04;
      }
    }
    else if ((param_2 == 7) && (**(char * PTR32 *)(this + 0x2208) != '\0')) {
      uVar2 = F_0042a990(this + 0x2208);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar3 = *(undefined4 *)(this + 0x238);
LAB_007f6e04: ;
      F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar3,((uint *)(gen_frame + 0x0)),0,0);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  else {
    if ((short)param_1 != 7) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
    }
    if ((5 < param_2) && (param_2 < 8)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    }
  }
  uVar2 = F_00557670(param_3,0);
  return uVar2;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf46 */
byte F_007f6e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  pbVar1 = param_2;
  if ((param_2 != (byte *)0x0) && (*(int *)(this + 0xf4c) != 0)) {
    if ((*param_2 & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 4);
    }
    if (((uint)param_2 & 1) != 0) {
      if ((pbVar1[0x300] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pbVar1 + 0x304);
      }
      local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),iVar2 == 0);
      if (*(undefined * PTR32 *)(this + 0xf58) != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)(this + 0xf58),local_8);
      }
      if (*(undefined * PTR32 *)(this + 0xf5c) != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)(this + 0xf5c),(uint)(iVar2 != 0));
      }
      if (*(undefined * PTR32 *)(this + 0xf48) != (undefined *)0x0) {
        if ((pbVar1[0x2f8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x2fc);
        }
        F_005b2fe0(*(undefined * PTR32 *)(this + 0xf48),uVar3);
      }
    }
    if (((uint)param_2 & 2) != 0) {
      if ((pbVar1[0x308] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x30c);
      }
      F_007964e0(this,uVar3);
    }
    if (((uint)param_2 & 4) != 0) {
      if ((pbVar1[0x310] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x314);
      }
      F_00796520(this,uVar3);
    }
    if (((uint)param_2 & 8) != 0) {
      if (*(undefined * PTR32 *)(this + 0x1048) != (undefined *)0x0) {
        if ((pbVar1[0x318] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x31c);
        }
        F_0059cf90(*(undefined * PTR32 *)(this + 0x1048),uVar3,1,1);
      }
      if (*(undefined * PTR32 *)(this + 0x104c) != (undefined *)0x0) {
        if ((pbVar1[800] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x324);
        }
        F_0059cf90(*(undefined * PTR32 *)(this + 0x104c),uVar3,1,1);
      }
    }
    if (((uint)param_2 & 0x10) != 0) {
      if ((pbVar1[0x328] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x32c);
      }
      F_00796560(this,uVar3);
    }
    if (((uint)param_2 & 0x20) != 0) {
      if ((pbVar1[0x330] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x334);
      }
      F_007965c0(this,uVar3);
    }
    if (((uint)param_2 & 0x40) != 0) {
      if ((pbVar1[0x338] & 0xf) == 0) {
        F_00796600(this,0);
        return 1;
      }
      F_00796600(this,*(undefined4 *)(pbVar1 + 0x33c));
    }
    return 1;
  }
  if ((param_2[0x308] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x30c);
  }
  *(undefined4 *)(this + 0x1050) = uVar3;
  if ((param_2[0x310] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x314);
  }
  *(undefined4 *)(this + 0x1054) = uVar3;
  if ((param_2[0x328] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x32c);
  }
  *(undefined4 *)(this + 0x1058) = uVar3;
  if ((param_2[0x330] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x334);
  }
  *(undefined4 *)(this + 0x105c) = uVar3;
  if ((param_2[0x338] & 0xf) == 0) {
    *(undefined4 *)(this + 0x1060) = 0;
    return 0;
  }
  *(undefined4 *)(this + 0x1060) = *(undefined4 *)(param_2 + 0x33c);
  return 0;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf52 */
byte F_007f70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0xf4c) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0xf4c) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f7160 */
uint F_007f7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f7160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if (999 < param_1) {
    uVar2 = param_1 % 100;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    if (param_1 < 0x44c) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0xf60);
      uVar4 = 3;
    }
    else if (param_1 < 0x4b0) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0xf88);
      uVar4 = 4;
    }
    else if (param_1 < 0x514) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x1008);
      uVar4 = 6;
    }
    else if (param_1 < 0x578) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x102c);
      uVar4 = 7;
    }
    else {
      if (0x5db < param_1) {
        puVar3 = &(*(uint *)(gen_frame + 0x38));
        iVar5 = 4;
        do {
          puVar3 = puVar3 + -2;
          uVar2 = F_005a2670(puVar3);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x103c);
      uVar4 = 8;
    }
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x88) != '\0')) {
      (*(undefined4 *)(gen_frame + 0xc)) = 1;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    bVar1 = *(byte *)(param_3 + 6);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    (*(uint *)(gen_frame + 0x34)) = 0;
    F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_00557670(param_2,0);
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar5 = 4;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    uVar4 = 1;
    break;
  case 4: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    uVar4 = 1;
    break;
  case 5: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    uVar4 = 1;
    break;
  case 6: ;
  case 7: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(param_1 != 6);
    if (*(int *)((int)this + 0xf48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*(int *)((int)this + 0xf48) + 0xf0);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    (*(uint *)(gen_frame + 0x34)) = uVar2;
    uVar4 = 5;
    break;
  default: ;
    goto switchD_007f72fc_default;
  }
  F_005a9110(this,uVar4,&(*(undefined4 *)(gen_frame + 0x10)));
switchD_007f72fc_default: ;
  F_00557670(param_2,0);
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 4;
  do {
    puVar3 = puVar3 + -2;
    uVar2 = F_005a2670(puVar3);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_007f7400 */
uint F_007f7400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f7400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x144,7,0,9,0,0);
    return CONCAT31(extraout_var_01,bVar2);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,7,0,9,0,0);
    F_005614a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d70(uVar4);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + uVar3;
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d90(uVar4);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) + 0x70)));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (short)(*(undefined4 *)&gen_args[1]) + uVar3;
    uVar3 = F_0055a030(uVar5);
    (*(undefined4 *)&gen_args[1]) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)),(short)(*(undefined4 *)&gen_args[1]) + uVar3);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) + 0x70)));
    }
    uVar3 = F_0055a020(uVar5);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + (uVar3 >> 1);
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)),sVar1)));
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,0,0,9,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780((*(undefined * PTR32 *)&gen_args[0]),0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonItemSearch::vf46 */
byte F_007f74f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f74f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  bool bVar2;
  undefined1 AVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  undefined * pAVar7;
  uint uVar8;
  uint uVar9;
  byte * pbVar10;
  int iVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x2a3c) == 0) {
    return 1;
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (((byte)*param_2 & 0xf) == 3) {
    (*(uint *)(gen_frame + 0x8)) = param_2[1];
  }
  if (((*(uint *)(gen_frame + 0x8)) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x18e) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[399];
    }
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),-1 < iVar4);
    F_0055a300(*(undefined * PTR32 *)(this + 0x2a58),(*(uint *)(gen_frame + 0x4)));
    if (-1 < iVar4) {
      if ((*(byte *)(param_2 + 0x18e) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_2[399];
      }
      F_00591c00(*(undefined * PTR32 *)(this + 0x2a58),uVar5,0);
    }
    if ((*(byte *)(param_2 + 400) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x191];
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x2a54),uVar5);
  }
  if (((*(uint *)(gen_frame + 0x8)) & 2) != 0) {
    if ((*(byte *)(param_2 + 0x196) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x197];
    }
    F_0059cf90(*(undefined * PTR32 *)(this + 0x2a30),uVar5,1,1);
  }
  if (((*(uint *)(gen_frame + 0x8)) & 4) != 0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x2a5c),1);
    if ((*(byte *)(param_2 + 0x1da) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x1db];
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x2a5c),uVar5);
    if ((*(byte *)(param_2 + 0x188) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x189];
    }
    bVar1 = 0 < iVar4;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar1);
    if ((*(byte *)(param_2 + 0x18a) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x18b];
    }
    bVar2 = 0 < iVar4;
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a4c) + 0x28))))(*(int * PTR32 *)(this + 0x2a4c),(*(undefined4 *)(gen_frame + 0x0)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a50) + 0x28))))(*(int * PTR32 *)(this + 0x2a50),(*(uint *)(gen_frame + 0x4)));
    if ((bVar1) || (bVar2)) {
      F_0056b630(this,0x18ab7,7,0,9,0,0);
      if ((!bVar1) && (!bVar2)) goto LAB_007f768f;
      AVar3 = (undefined1)0x1;
    }
    else if (this[0x2a6c] == (undefined1)0x0) {
LAB_007f768f: ;
      AVar3 = (undefined1)0x0;
    }
    else {
      F_0056b780(this,0);
      AVar3 = (undefined1)0x0;
    }
    this[0x2a6c] = AVar3;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),AVar3);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x2a4c) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
    }
    F_0055a300(pvVar6,(*(undefined4 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),this[0x2a6c]);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x2a50) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
    }
    F_0055a300(pvVar6,(*(undefined4 *)(gen_frame + 0x0)));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 8) != 0) {
    F_0042e430(this + 0xf58,"");
    F_0042e430(this + 0xfac,"");
    if ((*(byte *)(param_2 + 0x1dc) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x1dd];
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),(uint)(0 < iVar4));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 0x10) == 0) goto LAB_007f780e;
  if (this[0x2a6d] != (undefined1)0x0) {
    *(undefined2 *)(this + 0x2a6d) = 0x100;
  }
  if ((*(byte *)(param_2 + 0x30c) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_2[0x30d];
  }
  if (iVar4 != 0) {
    pbVar10 = (byte *)(param_2 + 0x2a8);
    pAVar7 = this + 0x28f0;
    iVar11 = iVar4;
    do {
      if ((*pbVar10 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar10 + 4);
      }
      *(undefined4 *)pAVar7 = uVar5;
      pbVar10 = pbVar10 + 8;
      pAVar7 = pAVar7 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))),iVar4,this + 0x28f0,0);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))) + 0x70))))
            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))));
  F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))));
  F_0059caa0(*(undefined * PTR32 *)(this + 0x2a44),0);
  if ((*(byte *)(param_2 + 0x2a6) & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_2[0x2a7];
  }
  if (iVar4 == 0) {
LAB_007f77f6: ;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),1);
    if (uVar8 < 2) goto LAB_007f77f6;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),(*(uint *)(gen_frame + 0x4)));
LAB_007f780e: ;
  if (((*(uint *)(gen_frame + 0x8)) & 0x20) != 0) {
    if ((*(byte *)(param_2 + 0x2a6) & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_2[0x2a7];
    }
    uVar9 = 0;
    if (uVar8 != 0) {
      pbVar10 = (byte *)(param_2 + 0x1de);
      do {
        if ((*pbVar10 & 0xf) == 0) {
          AVar3 = (undefined1)0x0;
        }
        else {
          AVar3 = SUB41(*(undefined4 *)(pbVar10 + 4),0);
        }
        this[uVar9 + 0x29b8] = AVar3;
        uVar9 = uVar9 + 1;
        pbVar10 = pbVar10 + 8;
      } while (uVar9 < uVar8);
    }
    if (*(int *)(this + 0x2a3c) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x11d))) = 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonItemSearch::vf47 */
uint F_007f7870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f7870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  ushort uVar2;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  uint3 uVar6;
  undefined3 extraout_var_01 = 0;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar7;
  uint uVar8;
  undefined4 * puVar9;
  uint * this_00;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (*(int *)(this + 0xf50) == 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),*(int *)(this + 0x2a28) + 0xf0);
    bVar1 = F_0042b740(((undefined1 *)(gen_frame + 0x14)),"");
    uVar6 = extraout_var;
    if ((bVar1 == 0) ||
       (bVar1 = F_0042b6f0(((undefined1 *)(gen_frame + 0x14)),this + 0xf58), uVar6 = extraout_var_00, bVar1 == 0)) {
      iVar7 = (uint)uVar6 << 8;
    }
    else {
      iVar7 = CONCAT31(extraout_var_00,1);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),iVar7);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  uVar4 = *(uint *)(param_1 + 0x90);
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(int *)(gen_frame + 0x10)) = *(int *)(param_2 + 0x84);
  if ((uVar4 != 0) && (*(int *)(param_2 + 0x84) != 0)) {
    uVar8 = **(uint * PTR32 *)(uVar4 + 0x20);
    (*(uint *)(gen_frame + 0xc)) = uVar8;
    bVar1 = F_0055a300(*(undefined * PTR32 *)(this + 0x2a48),(uint)((int)uVar8 < 1));
    uVar4 = CONCAT31(extraout_var_01,bVar1);
    if ((int)uVar8 < 1) {
      if (uVar8 == 0) {
        F_0055a300(*(undefined * PTR32 *)(this + 0x2a5c),0);
        puVar9 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x10)) + 0x20);
        (*(undefined4 *)(gen_frame + 0x68)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 *)(gen_frame + 0x80)) = 0;
        uVar10 = *puVar9;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),6);
        (*(undefined4 *)(gen_frame + 0x6c)) = uVar10;
        uVar2 = F_0055a020(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),4);
        (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
        uVar4 = F_0055ab00(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),4);
        (*(uint *)(gen_frame + 0x7c)) = uVar4;
        bVar1 = F_0055ab50(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)),4);
        (*(uint *)(gen_frame + 0x84)) = (uint)bVar1;
        uVar4 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar4 + 0x38),((byte *)(gen_frame + 0x4)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x68)));
        F_0042e430(this + 0x1000,-(uint)((((byte *)(gen_frame + 0x4))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0x8)));
        uVar4 = F_0042a990(this + 0x1000);
        F_00584110(*(undefined * PTR32 *)(this + 0x2a48),uVar4);
        F_0058d980(*(undefined4 *)(this + 0x2a3c),0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a3c) + 0x78))))(*(int * PTR32 *)(this + 0x2a3c));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),0);
        pvVar5 = (undefined *)0x0;
        if (*(int *)(this + 0x2a4c) != 0) {
          pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
        }
        F_0055a300(pvVar5,0);
        pvVar5 = (undefined *)0x0;
        if (*(int *)(this + 0x2a50) != 0) {
          pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
        }
        F_0055a300(pvVar5,0);
        F_005a2670(((byte *)(gen_frame + 0x4)));
        this_00 = &(*(uint *)(gen_frame + 0x88));
        iVar7 = 3;
        do {
          this_00 = this_00 + -2;
          uVar4 = F_005a2670(this_00);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    else {
      F_00592700(*(undefined * PTR32 *)(this + 0x2a3c),0);
      if (*(int *)(this + 0x2a68) < (int)uVar8) {
        *(uint *)(this + 0x2a68) = uVar8;
        if (*(int *)(this + 0x2a64) != 0) {
          F_00406810(*(int *)(this + 0x2a64));
          *(undefined4 *)(this + 0x2a64) = 0;
        }
        piVar3 = (int *)F_00404270();
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(int *)(this + 0x2a68) << 4,0x10);
        *(uint *)(this + 0x2a64) = uVar4;
      }
      puVar9 = *(undefined4 * PTR32 *)(this + 0x2a64);
      if (0 < (int)uVar8) {
        iVar7 = 4;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0xc));
        do {
          *puVar9 = *((undefined4 *)GEN_TOP((iVar7 + *(int *)((*(uint *)(gen_frame + 0x8)) + 0x20))));
          puVar9[1] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)((*(uint *)(gen_frame + 0x8)) + 0x20))));
          puVar9[2] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
          puVar9[3] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
          F_00596d70(*(undefined * PTR32 *)(this + 0x2a3c),puVar9[1],0,0,0);
          iVar7 = iVar7 + 8;
          puVar9 = puVar9 + 4;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
          uVar8 = (*(uint *)(gen_frame + 0xc));
        } while ((*(uint *)(gen_frame + 0x0)) != 0);
      }
      uVar4 = F_0058d980(*(undefined4 *)(this + 0x2a3c),uVar8);
      if (this[0x2a6d] != (undefined1)0x0) {
        *(undefined2 *)(this + 0x2a6d) = 0x100;
      }
    }
    if (this[0x2a6e] != (undefined1)0x0) {
      this[0x2a6e] = (undefined1)0x0;
      uVar4 = F_0055dcb0();
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar4 + 0x14) + 0xcc))) == this) {
        uVar11 = 0;
        uVar10 = 1;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a3c) + 0x3c))))(*(int * PTR32 *)(this + 0x2a3c));
        uVar4 = F_0059b340(this,uVar4,uVar10,uVar11);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar4;
}

/* ref: Client::UI2::AddonItemSearch::vf60 */
byte F_007f7bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f7bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (this[0x2a6c] == (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)(this + 0x2a4c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
  }
  uVar2 = F_0055a350(uVar1);
  if (((char)uVar2 == '\0') || (param_1 != 0xf)) {
    if (*(int *)(this + 0x2a50) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if (((char)uVar2 == '\0') || (param_1 != 0x10)) goto LAB_007f7cd4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
  }
  (*(byte *)(gen_frame + 0x7)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x8)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a4c) + 0x28))))(*(int * PTR32 *)(this + 0x2a4c),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a50) + 0x28))))(*(int * PTR32 *)(this + 0x2a50),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),0);
  this[0x2a6c] = (undefined1)0x0;
  F_0059ead0(*(undefined * PTR32 *)(this + 0x2a3c),0,0,1);
LAB_007f7cd4: ;
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: FUN_007f7f20 */
uint F_007f7f20(unsigned int gen_a0)
{
  GEN_ENTER(0x7f7f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a2c) + 0x28))))(*(int * PTR32 *)((int)this + 0x2a2c),0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x2a48),0);
  F_0042ccf0((undefined *)((int)this + 0xf58),*(int *)((int)this + 0x2a28) + 0xf0);
  F_0042ccf0((undefined *)((int)this + 0xfac),*(int *)((int)this + 0x2a28) + 0x9c);
  if (*(int *)((int)this + 0x2a4c) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2a4c) + 0x70)));
  }
  F_0055a300(pvVar1,0);
  if (*(int *)((int)this + 0x2a50) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2a50) + 0x70)));
  }
  F_0055a300(pvVar1,0);
  *(undefined1 *)((int)this + 0x2a6c) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  uVar4 = *(undefined4 *)((int)this + 0xf54);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
  uVar4 = *(undefined4 *)((int)this + 0xf50);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar4;
  uVar2 = F_0042a990((int)this + 0xf58);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  uVar2 = F_0042a990((int)this + 0xfac);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  if (*(int *)((int)this + 0x2a30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2a30) + 0x178)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
  if (*(int *)((int)this + 0x2a34) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2a34) + 0x178)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar4;
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x2a38));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
  (*(uint *)(gen_frame + 0x44)) = uVar2;
  F_005a9110(this,8,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  *(uint *)((int)this + 0xf4c) = uVar2;
  if (*(char *)((int)this + 0x2a6d) == '\0') {
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a3c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x2a3c));
    F_0059b340(this,uVar2,uVar4,uVar5);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a3c) + 0x74))))(*(int * PTR32 *)((int)this + 0x2a3c),0xfffffffe,0);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_007f8110 */
uint F_007f8110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x792,7,0,9,0,0);
    return CONCAT31(extraout_var_01,bVar2);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,7,0,9,0,0);
    F_005614a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d70(uVar4);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + uVar3;
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d90(uVar4);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) + 0x70)));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (short)(*(undefined4 *)&gen_args[1]) + uVar3;
    uVar3 = F_0055a030(uVar5);
    (*(undefined4 *)&gen_args[1]) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)),(short)(*(undefined4 *)&gen_args[1]) + uVar3);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) + 0x70)));
    }
    uVar3 = F_0055a020(uVar5);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + (uVar3 >> 1);
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)),sVar1)));
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,0,0,9,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780((*(undefined * PTR32 *)&gen_args[0]),0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonItemSearchHistory::vf44 */
uint F_007f8200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f8200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  undefined4 in_ecx;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0055e2f0(this,10);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e340(this,0xb);
  *(uint *)(this + 0x188) = uVar1;
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
    if (*(int *)(this + 0x180) == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_0055a3c0(in_ecx,0);
    pvVar3 = *(undefined * PTR32 *)(this + 0x180);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 6;
    (*(undefined4 *)(gen_frame + 0x28)) = 4;
    (*(undefined4 *)(gen_frame + 0x34)) = 5;
    (*(undefined4 *)(gen_frame + 0x40)) = 7;
    (*(undefined4 *)(gen_frame + 0x4c)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x797530));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),5,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x21,0,this,0,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x20,0,this,0,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x1f,0,this,0,0);
  }
  F_005a91d0(this,0,0x21);
  uVar1 = F_005a91d0(this,1,0x24);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007f8380 */
uint F_007f8380(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c86bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) =
       (*(undefined * PTR32 (*)[4])REFP(0x10c86a8));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf37 */
uint F_007f83e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f83e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 2);
    F_005a92d0(this,1,0x2c,0);
    F_005a92d0(this,0,0x28,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf2 */
unsigned int F_007f8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((short)param_1 == 0x17) && (param_2 - 1U < 2)) {
    F_007977a0(this,param_2 + -1);
  }
  return 0;
}

/* ref: FUN_007f8460 */
uint F_007f8460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 1) != 0) {
    return *(uint *)((int)this + 0x19c);
  }
  return *(uint *)((int)this + 0x1a0);
}

/* ref: FUN_007f8490 */
uint F_007f8490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: FUN_007f84c0 */
uint F_007f84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f84c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf47 */
uint F_007f84f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f84f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  uint3 extraout_var = 0;
  uint3 uVar5;
  int iVar4;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined * pAVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0xa8);
  iVar6 = *(int *)(param_2 + 0x98);
  if (0 < **(int * PTR32 *)(iVar10 + 0x20)) {
    F_00591c00(*(undefined * PTR32 *)(this + 0x184),**(int * PTR32 *)(iVar10 + 0x20),0);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0xc))));
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),**(undefined4 * PTR32 *)(iVar6 + 0x20));
  F_00584110(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4))));
  F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8))));
  *(undefined4 *)(this + 0x1d0) = *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x14)));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x18)));
  iVar8 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 4)));
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x198) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),iVar8 != 0);
  F_0055a300(pvVar2,uVar7);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),uVar7);
  pvVar2 = *(undefined * PTR32 *)(this + 0x198);
  uVar7 = *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x10)));
  if (pvVar2 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00561550(pvVar2,2);
    if (pvVar1 != (undefined *)0x0) {
      F_00591c00(pvVar1,iVar8,0);
    }
    pvVar2 = (undefined *)F_00561530(pvVar2,3);
    if (pvVar2 != (undefined *)0x0) {
      F_00584110(pvVar2,uVar7);
    }
  }
  pAVar9 = this + 0x19c;
  iVar8 = 3;
  do {
    if (*(int *)pAVar9 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
    }
    F_0055a300(pvVar2,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar9 + 0x28))))(*(int * PTR32 *)pAVar9,0);
    pAVar9 = pAVar9 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (0 < *(int *)(this + 0x1d0)) {
    pAVar9 = this + 0x19c;
    param_1 = 0;
    do {
      iVar8 = *((int *)GEN_TOP((pAVar9 + *(int *)(iVar10 + 0x20) + (-0x194 - (int)this))));
      if (iVar8 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar9 + 0x28))))(*(int * PTR32 *)pAVar9,1);
        if (*(int *)pAVar9 == 0) {
          pvVar2 = (undefined *)0x0;
        }
        else {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
        }
        F_0055a300(pvVar2,1);
        uVar7 = *((undefined4 *)GEN_TOP((pAVar9 + *(int *)(iVar6 + 0x20) + (-0x188 - (int)this))));
        pvVar2 = *(undefined * PTR32 *)pAVar9;
        if (pvVar2 != (undefined *)0x0) {
          pvVar1 = (undefined *)F_00561550(pvVar2,2);
          if (pvVar1 != (undefined *)0x0) {
            F_00591c00(pvVar1,iVar8,0);
          }
          pvVar2 = (undefined *)F_00561530(pvVar2,3);
          if (pvVar2 != (undefined *)0x0) {
            F_00584110(pvVar2,uVar7);
          }
        }
      }
      param_1 = param_1 + 1;
      pAVar9 = pAVar9 + 4;
    } while (param_1 < *(int *)(this + 0x1d0));
  }
  uVar3 = F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x20))));
  pvVar2 = *(undefined * PTR32 *)(this + 0x1a8);
  if (pvVar2 != (undefined *)0x0) {
    if (iVar4 < 1) {
      F_0055a300(pvVar2,0);
      uVar3 = (uint)extraout_var << 8;
    }
    else {
      F_0055a300(pvVar2,1);
      uVar3 = F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x66 - (uint)(*(int *)(this + 0x1d0) != 0));
    }
  }
  uVar5 = (uint3)(uVar3 >> 8);
  if ((iVar4 < 1) || (*(int *)(this + 0x1d0) != iVar4)) {
    iVar4 = (uint)uVar5 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar5,1);
  }
  F_0055a300(*(undefined * PTR32 *)(this + 0x1ac),iVar4);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b4),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x24))));
  F_00584110(*(undefined * PTR32 *)(this + 0x1b8),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x28))));
  iVar6 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x1c)));
  iVar10 = 0;
  if (iVar6 == 1) {
    iVar6 = *(int *)(this + 0x1cc);
    iVar10 = 0x65;
    uVar3 = 0;
  }
  else {
    uVar3 = iVar6 - 2;
    if (uVar3 != 0) goto LAB_007f87b1;
    iVar10 = iVar6 + 100;
    F_0055b080(*(int *)(this + 0x1c4) + 0x78);
    iVar6 = *(int *)(this + 0x1c8);
  }
  F_0055b080(iVar6 + 0x78);
LAB_007f87b1: ;
  if ((*(undefined * PTR32 *)(this + 0x1bc) != (undefined *)0x0) && (iVar10 != 0)) {
    uVar3 = F_0059d670(*(undefined * PTR32 *)(this + 0x1bc),iVar10);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf37 */
uint F_007f87d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f87d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0xf,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0x10,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x68))),6,0xf,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x68))),7,0xf,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x21,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x24,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x25,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x1f,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x20,0xc,this,0);
  }
  F_005a92d0(this,1,0x2c,0);
  F_005a92d0(this,0,0x28,0);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf47 */
uint F_007f8910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f8910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar6 = *(int *)(param_1 + 0xb0);
  uVar7 = 0;
  iVar2 = 0;
  iVar5 = 0;
  do {
    uVar3 = *((uint *)GEN_TOP((iVar5 + 4 + *(int *)(iVar6 + 0x20))));
    if (uVar3 < 0x10) {
      this[uVar3 + 400] = SUB41(iVar2,0);
      uVar7 = uVar7 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0xc;
  } while (iVar2 < 0x10);
  uVar7 = F_0058d980(*(undefined4 *)(this + 0x18c),uVar7);
  if ((((byte)this[0xf9] & 1) != 0) && (this[0x1a8] == (undefined1)0x0)) {
    uVar7 = *((uint *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    if (uVar7 < 0x10) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 2;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(int *)(gen_frame + 0x14)) = (int)(short)uVar4 + (uVar3 & 0xffff);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = (int)(short)uVar3;
      AVar1 = this[uVar7 + 400];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = (uint)(byte)AVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar6 = 3;
      do {
        this_00 = this_00 + -2;
        uVar7 = F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    this[0x1a8] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar7;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf52 */
byte F_007f8a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  if (*param_1 == 0xf) {
    F_007980a0(this);
    bVar1 = 1;
  }
  else if (*param_1 == 0x10) {
    F_00798100(this);
    return 1;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf2 */
uint F_007f8a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f8a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * in_ecx;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = param_1 & 0xffff;
  uVar4 = uVar3 - 6;
  (*(uint *)(gen_frame + 0x14)) = param_3;
  if (0x1f < uVar4) goto switchD_007f8ab5_caseD_8;
  uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7f8dc4) + uVar3 + 2)));
  uVar5 = param_3;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 6: ;
    if (param_2 != 0xf) goto switchD_007f8ab5_caseD_8;
    iVar7 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    uVar4 = F_005c0730(*(undefined4 *)(this + 0x180));
    if (((char)uVar4 == '\0') && (-1 < iVar7)) {
      if ((this[0x1a0] == (undefined1)0x0) && (iVar7 == 0)) {
        F_00560760(((uint *)(gen_frame + 0x8)));
        in_ecx = this + 0x1ac;
      }
      else {
        if (*(uint *)(this + 0x1a4) != (uint)(byte)this[iVar7 + 400]) break;
        F_00560760(((uint *)(gen_frame + 0x8)));
        in_ecx = this + 0x200;
      }
      uVar4 = F_0042a990(in_ecx);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x8))[0] = uVar4;
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x68)));
      (*(uint *)(gen_frame + 0x14)) = (uint)(byte)AVar1;
      uVar4 = F_0055dcb0();
      F_00588780((undefined *)(uVar4 + 0xe0),2,(*(uint *)(gen_frame + 0x14)),uVar2,((uint *)(gen_frame + 0x8)),0,0);
    }
    break;
  case 7: ;
    bVar8 = param_2 == 0xf;
    goto LAB_007f8d6e;
  default: ;
    goto switchD_007f8ab5_caseD_8;
  case 0x17: ;
    if (param_2 != 0xf) {
      uVar4 = param_2;
      if (param_2 == 0x10) {
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 1;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        F_00557670(param_3,0);
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 + -2;
          uVar4 = F_005a2670(puVar6);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar4;
      }
      goto switchD_007f8ab5_caseD_8;
    }
    uVar4 = *((uint *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    uVar5 = (*(uint *)(gen_frame + 0x14));
    if (uVar4 < 0x10) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      AVar1 = this[uVar4 + 400];
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)(byte)AVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
      puVar6 = &(*(uint *)(gen_frame + 0x38));
      iVar7 = 3;
      do {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
        iVar7 = iVar7 + -1;
        uVar5 = (*(uint *)(gen_frame + 0x14));
      } while (-1 < iVar7);
    }
    break;
  case 0x1f: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    if ((this[0x1a0] == (undefined1)0x0) && (param_4[2] == 0)) {
      F_00560760(((uint *)(gen_frame + 0x8)));
      uVar4 = F_0042a990(this + 0x1ac);
      iVar7 = *param_4;
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x8))[0] = uVar4;
      uVar2 = *(undefined4 *)(iVar7 + 0x1e4);
      uVar4 = F_0055dcb0();
      F_00588780((undefined *)(uVar4 + 0xe0),2,(uint)(byte)AVar1,uVar2,((uint *)(gen_frame + 0x8)),0,0);
      uVar5 = (*(uint *)(gen_frame + 0x14));
    }
    break;
  case 0x20: ;
    bVar8 = param_2 == 0xc;
LAB_007f8d6e: ;
    if (!bVar8) goto switchD_007f8ab5_caseD_8;
    AVar1 = this[0x13a];
    uVar4 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,0);
    break;
  case 0x21: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    uVar4 = F_005c0730(*(undefined4 *)(this + 0x180));
    if ((char)uVar4 != '\0') {
      F_0059b390(this,*(undefined4 *)(this + 0x180),1,0);
    }
    break;
  case 0x24: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    iVar7 = param_4[2];
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180),1);
    if (((this[0x1a0] == (undefined1)0x0) && (iVar7 == 0)) ||
       (*(uint *)(this + 0x1a4) == (uint)(byte)this[iVar7 + 400])) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180),0);
    }
    F_005623b0(*(undefined * PTR32 *)(this + 0x18c),iVar7);
    F_00797fd0(this,iVar7);
    break;
  case 0x25: ;
    F_0059b390(this,*(undefined4 *)(this + 0x184),1,0);
  }
  uVar4 = F_00557670(uVar5,0);
switchD_007f8ab5_caseD_8: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007f8df0 */
uint F_007f8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar1 = *(int *)(uVar3 + 0xb0);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xa0);
  if ((iVar1 != 0) && (uVar3 != 0)) {
    uVar6 = (uint)*(byte *)(param_1 + 400 + (int)this);
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + uVar6 * 0xc)));
      if (uVar2 < 0xf) {
        iVar4 = uVar2 + 0x65;
      }
      else {
        iVar4 = 0;
      }
      F_0059d640((undefined *)*param_2,iVar4);
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar5 != (undefined *)0x0) {
      F_0057eb30(pvVar5,*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + uVar6 * 0xc))) + 1,0,0,0,0);
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[2]);
    if (pvVar5 != (undefined *)0x0) {
      F_00584110(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + uVar6 * 4))));
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[3]);
    uVar3 = 0;
    if (pvVar5 != (undefined *)0x0) {
      uVar3 = F_0057eb30(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + uVar6 * 0xc))),0,0,0,0)
      ;
    }
  }
  return uVar3;
}

/* ref: FUN_007f8ee0 */
uint F_007f8ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8abc));
  F_00798170((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  in_ecx = (int)this + 0x22c;
  iVar1 = 2;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf37 */
uint F_007f8f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * pAVar4;
  
  if (*(int *)(this + 0x21c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x21c) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x220) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x220) + 0x70))),0x17,2,this,0);
  }
  pAVar4 = this + 0x198;
  iVar3 = 0xc;
  do {
    if (*(int *)pAVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar4 + 0x70),0x17,3,this,0);
    }
    pAVar4 = pAVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pAVar4 = this + 0x1d0;
  iVar3 = 5;
  do {
    if (*(int *)(pAVar4 + -8) != 0) {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x23,6,this,0);
    }
    pAVar4 = pAVar4 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(this + 0x204) != 0) {
    if (*(int *)(this + 0x20c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,6,this,0);
  }
  if (*(int *)(this + 0x210) != 0) {
    if (*(int *)(this + 0x218) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x218) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,6,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x17,4,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,5,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f9070 */
uint F_007f9070(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x18c);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 400);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4002);
  uVar3 = F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_007f9140 */
uint F_007f9140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    F_007985b0(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 1: ;
    ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 2: ;
    iVar1 = **(int * PTR32 *)((int)this + 0x21c);
    bVar2 = F_00798250(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x28))(*(undefined4 *)((int)this + 0x21c),(uint)(bVar2 != 0));
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 3: ;
    F_00798360(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 4: ;
    F_007983e0(this);
    uVar3 = F_00557670(param_2,0);
  }
  return uVar3;
}

/* ref: FUN_007f9200 */
uint F_007f9200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00584110(*(undefined * PTR32 *)(param_1 + 4),param_2);
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x88))),3,0,1);
  F_005b2b20(*(undefined * PTR32 *)(param_1 + 8),3,0);
  F_0059caa0(*(undefined * PTR32 *)(param_1 + 8),param_3);
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = F_00568380((undefined *)0x0,0x23,6,this,0,0);
    return uVar1;
  }
  uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x70))),0x23,6,this,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf37 */
uint F_007f9280(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x21,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x25,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x23,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x24,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x28,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x26,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x27,8,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,10,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0xb,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x17,0xd,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,0xe,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f93b0 */
uint F_007f93b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f93b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_00798960(this,*(undefined4 *)(param_3 + 8),(uint)(*(byte *)(param_3 + 0x11) >> 3 & 1))
  ;
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf37 */
uint F_007f93e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0xc,0,this,0);
    iVar1 = *(int *)(this + 0x18c);
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f9460 */
uint F_007f9460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f9460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      F_00798c10(this);
    }
    return 0;
  }
  uVar1 = F_00582650(*(undefined * PTR32 *)((int)this + 0x18c),param_2);
  return -(uint)(uVar1 < 2) & 2;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf37 */
uint F_007f94a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f94a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  int local_8;
  
  if (((byte)this[0xf9] & 1) != 0) {
    pAVar3 = this + 0x18c;
    iVar4 = 0;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      iVar4 = iVar4 + 1;
      F_005840a0(pvVar2,0x17,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 5);
    if (*(int *)(this + 0x1a0) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,6,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,7,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x2c0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,8,this,0);
    iVar4 = 9;
    pAVar3 = this + 0x1a8;
    local_8 = 0x32;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar3);
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2d,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2e,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x30,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x34,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar4 = 0x3b;
    pAVar3 = this + 0x270;
    local_8 = 0x12;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar3);
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2d,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x30,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x34,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    F_005a92d0(this,1,0x37,0);
    F_005a92d0(this,0,0x33,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f9640 */
uint F_007f9640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if (param_1 - 9 < 0x32) {
    bVar1 = F_00799060(this,param_1 - 9,param_3);
  }
  else {
    if (0x11 < param_1 - 0x3b) {
      return param_1;
    }
    bVar1 = F_00799160(this,param_1 - 0x3b,param_3);
  }
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(byte *)(param_2 + 0x15) = bVar1;
  uVar2 = F_00557670(param_2,0);
  return uVar2;
}

/* ref: FUN_007f9690 */
uint F_007f9690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (param_1 - 9 < 0x32) {
    iVar1 = param_1 - 9;
  }
  else {
    if (0x11 < param_1 - 0x3b) {
      return param_1;
    }
    iVar1 = param_1 - 0x3b;
    if (*(char *)(param_3 + 8) == '\x05') {
      F_007992c0(this,iVar1);
      uVar2 = F_00557670(param_2,0);
      return uVar2;
    }
  }
  F_00799240(this,iVar1);
  uVar2 = F_00557670(param_2,0);
  return uVar2;
}

/* ref: FUN_007f96e0 */
uint F_007f96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f96e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 9 < 0x32) {
    F_00799330(this,param_1 - 9);
    uVar1 = F_00557670(param_2,0);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 - 0x3b < 0x12) {
    F_007993a0(this,param_1 - 0x3b);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: FUN_007f9730 */
uint F_007f9730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f9730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this_00;
  undefined4 uVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  bool bVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(bool *)(gen_frame + 0x2b)) = ((byte)(*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU))
            & 3) != 2;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0x10;
  do {
    iVar5 = (*(int *)(gen_frame + 0x24));
    this_00 = *(int * PTR32 *)((int)this + (*(int *)(gen_frame + 0x20)) * 4 + 0x1a8);
    if (this_00 != (int *)0x0) {
      uVar1 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + -4 + *(int *)(param_1 + 0x20))));
      ((byte *)(gen_frame + 0x8))[0xc] = (byte)uVar1;
      ((byte *)(gen_frame + 0x8))[0xd] = SUB41(uVar1,1);
      ((byte *)(gen_frame + 0x8))[0xe] = SUB41(uVar1,2);
      ((byte *)(gen_frame + 0x8))[0xf] = SUB41(uVar1,3);
      bVar6 = SUB41(uVar1,1) != 0;
      ((byte *)(gen_frame + 0x8))[0x10] = bVar6;
      F_0056e4d0(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
      ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,(uint)(((byte *)(gen_frame + 0x8))[0x10] == 0));
      iVar5 = *((int *)GEN_TOP((iVar5 + -0x10 + *(int *)(param_1 + 0x20))));
      if (iVar5 < 0) {
        if (this_00[0x29] == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
        }
        F_0055a300(pvVar4,0);
        *(byte *)((int)this_00 + 0xaa) = *(byte *)((int)this_00 + 0xaa) | 2;
        F_00597570(this_00);
        ((code *)*(gen_code32 *)(this_00[0x21] + 0x30))(this_00 + 0x21);
        this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        iVar5 = (*(int *)(gen_frame + 0x24));
      }
      else {
        ((code *)*(gen_code32 *)(this_00[0x21] + 0xc))(this_00 + 0x21);
        F_00595560(this_00,iVar5);
        if (this_00[0x29] == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
        }
        F_0055a300(pvVar4,1);
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((*(bool *)(gen_frame + 0x2b)) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + -8 + *(int *)(param_1 + 0x20))));
        F_00560760(((byte *)(gen_frame + 0x8)));
        pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + (*(int *)(gen_frame + 0x20)) * 4)));
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "";
        }
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = pcVar2;
        ((byte *)(gen_frame + 0x8))[0xb] = (byte)(*(int *)(gen_frame + 0x20));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x2c5) + 0x3e;
        ((byte *)(gen_frame + 0x8))[10] = 2;
        F_005916c0(this_00,6,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x13a),((byte *)(gen_frame + 0x8)));
        uVar3 = iVar5 >> 0x10 & 0xffff;
        if ((uVar3 < 2) && (((byte *)(gen_frame + 0x8))[0xc] != 5)) {
          F_0058ea60(this_00,"");
        }
        else {
          F_0058ea90(this_00,uVar3);
        }
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + *(int *)(param_1 + 0x20))));
        F_00561860((undefined *)this_00[0x29],(uint)((byte)iVar5 & 1));
        F_005a03c0((undefined *)this_00[0x29],iVar5 >> 1);
        this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        iVar5 = (*(int *)(gen_frame + 0x24));
      }
    }
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    (*(int *)(gen_frame + 0x24)) = iVar5 + 0x14;
  } while (iVar5 + 0x14 < 0x3f8);
  uVar3 = F_0055a2d0(*(undefined4 *)((int)this + 0x2b8));
  if ((char)uVar3 != '\0') {
    uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x2b8),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 200))));
  }
  return uVar3;
}

/* ref: FUN_007f9940 */
uint F_007f9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(undefined4 * PTR32 *)((int)this + 0x2c8) = param_1;
  param_1 = (undefined4 *)((int)this + 0x18c);
  *(undefined4 *)((int)this + 0x2cc) = param_2;
  *(undefined4 *)((int)this + 0x2d0) = param_3;
  iVar2 = 0;
  do {
    uVar3 = *(uint *)((int)this + 0x2c8) >> ((byte)iVar2 & 0x1f) & 3;
    pvVar1 = (undefined *)F_00561490((undefined *)*param_1,2);
    if (uVar3 == 0) {
      uVar4 = 0x66;
LAB_007f99a0: ;
      F_0059d670(pvVar1,uVar4);
    }
    else {
      if (uVar3 == 1) {
        uVar4 = 0x67;
        goto LAB_007f99a0;
      }
      if (uVar3 == 2) {
        uVar4 = 0x65;
        goto LAB_007f99a0;
      }
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar2 < 10);
  iVar2 = *(int *)((int)this + 0x2cc);
  pvVar1 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),2);
  if (iVar2 == 0) {
    uVar4 = 0x66;
LAB_007f99dd: ;
    F_0059d670(pvVar1,uVar4);
  }
  else {
    if (iVar2 == 1) {
      uVar4 = 0x67;
      goto LAB_007f99dd;
    }
    if (iVar2 == 2) {
      uVar4 = 0x65;
      goto LAB_007f99dd;
    }
  }
  iVar2 = *(int *)((int)this + 0x2d0);
  pvVar1 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a4),2);
  if (iVar2 == 0) {
    uVar4 = 0x66;
  }
  else if (iVar2 == 1) {
    uVar4 = 0x67;
  }
  else {
    if (iVar2 != 2) goto LAB_007f9a13;
    uVar4 = 0x65;
  }
  F_0059d670(pvVar1,uVar4);
LAB_007f9a13: ;
  if (*(int *)((int)this + 0x2d0) == 0) {
    uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 700),0x65);
    return uVar3;
  }
  uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 700),0x11);
  return uVar3;
}

/* ref: FUN_007f9a40 */
uint F_007f9a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  
  *(int *)((int)this + 0x2d4) = param_1;
  if ((char)param_2 != '\0') {
    if (param_1 == 0) {
      if (*(char *)((int)this + 0x2c4) == '\x01') {
        uVar2 = *(undefined4 *)((int)this + 0x1a0);
      }
      else {
        uVar2 = *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x2c5) * 4 + 0x18c)));
      }
      F_0059b390(this,uVar2,1,0);
      uVar1 = F_0055dcb0();
      if (*(char *)(uVar1 + 0xbc) != '\0') {
        F_005aa300((undefined *)(uVar1 + 0x3c),1,1,9);
      }
    }
    else if (param_1 == 1) {
      if ((*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) & 3) != 0
         ) {
        F_0059b390(this,*(undefined4 *)((int)this + 0x1a8),1,0);
        uVar1 = F_007994c0(this,param_3);
        return uVar1;
      }
    }
    else if ((param_1 == 2) && (*(int *)((int)this + 0x2cc) != 0)) {
      F_0059b390(this,*(undefined4 *)((int)this + 0x270),1,0);
      uVar1 = F_007994c0(this,param_3);
      return uVar1;
    }
  }
  uVar1 = F_007994c0(this,param_3);
  return uVar1;
}

/* ref: FUN_007f9b30 */
uint F_007f9b30(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0079b040(this);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[72])REFP(0x10d57fc));
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) & 0xbf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf38 */
uint F_007f9be0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f9be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0079b0c0(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf37 */
uint F_007f9c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1dc) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1dc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1dc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x25,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x25,2,this,0);
    F_005a92d0(this,1,0x30,0);
    F_005a92d0(this,0,0x2c,0);
    F_005a92d0(this,1,0x39,0);
    F_005a92d0(this,0,0x35,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf44 */
uint F_007f9da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f9da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1b4) = uVar2;
  uVar2 = F_0055e360(this,3);
  *(uint *)(this + 0x1b8) = uVar2;
  uVar2 = F_0055e360(this,4);
  *(uint *)(this + 0x1bc) = uVar2;
  uVar2 = F_0055e340(this,5);
  *(uint *)(this + 0x1c0) = uVar2;
  uVar2 = F_0055e340(this,0xc);
  *(uint *)(this + 0x1c4) = uVar2;
  uVar2 = F_0055e340(this,0xd);
  *(uint *)(this + 0x1c8) = uVar2;
  uVar2 = F_0055e340(this,10);
  *(uint *)(this + 0x1cc) = uVar2;
  uVar2 = F_0055e340(this,8);
  *(uint *)(this + 0x1d0) = uVar2;
  uVar2 = F_0055e2f0(this,0x15);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1dc) = uVar2;
  uVar2 = F_0055e2f0(this,0x1b);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e2f0(this,0x22);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x18c) = uVar2;
  uVar2 = F_0055e2f0(this,0x18);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,0x1f);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e340(this,0x1c);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_0055e340(this,0x23);
  *(uint *)(this + 0x194) = uVar2;
  *(undefined4 *)(this + 0x1a0) = 0x65;
  *(undefined4 *)(this + 0x1ac) = 0x65;
  *(undefined4 *)(this + 0x19c) = 0x66;
  *(undefined4 *)(this + 0x1a8) = 0x66;
  pvVar4 = *(undefined * PTR32 *)(this + 0x1dc);
  *(undefined4 *)(this + 0x198) = 0x11;
  *(undefined4 *)(this + 0x1a4) = 0x11;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 4;
  (*(undefined4 *)(gen_frame + 0x38)) = 5;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x799900));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(pvVar4,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),4,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x11e))) = 1;
  pvVar4 = *(undefined * PTR32 *)(this + 0x188);
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 2;
  (*(undefined4 *)(gen_frame + 0x50)) = 3;
  (*(undefined4 *)(gen_frame + 0x5c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x920a00));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(pvVar4,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x44)),3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b560));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x44)),3,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,3,this,0,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x20,3,this,0,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x21,3,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x20,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x21,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x25,1,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x20,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x21,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x25,2,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x1dc),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x188),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x18c),1,1,0);
  F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),0);
  uVar2 = F_0055e2f0(this,0x16);
  if (*(int *)(this + 0x1dc) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  uVar1 = F_0055a030(uVar5);
  *(ushort *)(this + 0x1e8) = uVar1;
  uVar1 = F_0055a030(uVar2);
  *(ushort *)(this + 0x1ea) = uVar1;
  if (1 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    *(undefined4 *)(this + 0x1e0) = uVar5;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x1e4) = uVar5;
  }
  F_005a91d0(this,1,0x30);
  F_005a91d0(this,0,0x2c);
  F_005a91d0(this,1,0x39);
  F_005a91d0(this,0,0x35);
  F_005a91d0(this,1,0x3a);
  uVar2 = F_005a91d0(this,0,0x36);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf47 */
unsigned int F_007fa260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fa260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_ecx;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  F_0079b160((undefined *)this,param_1,param_2);
  iVar5 = *(int *)(param_1 + 0xc0);
  iVar1 = *(int *)(param_1 + 0xe4);
  iVar2 = *(int *)(param_2 + 0xb0);
  if (*((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0xc))) == 0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),1);
    F_005600b0(((undefined1 *)(gen_frame + 0x0)),**(undefined4 * PTR32 *)(iVar5 + 0x20));
    F_00560080(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 4))));
    F_005959f0(*(undefined * PTR32 *)(this + 0x1b8),((undefined1 *)(gen_frame + 0x0)));
    F_00591c00(*(undefined * PTR32 *)(this + 0x1bc),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 8))),0);
    F_00584110(*(undefined * PTR32 *)(this + 0x1c0),**(undefined4 * PTR32 *)(iVar2 + 0x20));
    F_00584110(*(undefined * PTR32 *)(this + 0x1c4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
    F_00584110(*(undefined * PTR32 *)(this + 0x1c8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8))));
    F_00584110(*(undefined * PTR32 *)(this + 0x1cc),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
    F_0057eb30(*(undefined * PTR32 *)(this + 0x1d0),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x10))),0,0,0,0);
  }
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1dc),(uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))),0,1);
  bVar7 = **(int * PTR32 *)(iVar1 + 0x20) == 0;
  if (bVar7) {
    F_0059d6a0(this,0x65,1,0);
    in_ecx = 0;
    if (*(int *)(this + 0x1dc) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    uVar3 = F_0055a020(in_ecx);
    uVar4 = (uint)*(ushort *)(this + 0x1ea);
  }
  else {
    F_0059d6a0(this,0x11,1,0);
    if (*(int *)(this + 0x1dc) == 0) {
      uVar3 = F_0055a020(0);
      uVar4 = (uint)*(ushort *)(this + 0x1e8);
    }
    else {
      uVar3 = F_0055a020(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70))));
      uVar4 = (uint)*(ushort *)(this + 0x1e8);
    }
  }
  F_005b1cd0(*(undefined * PTR32 *)(this + 0x1dc),(uint)uVar3,uVar4);
  (*(uint *)(gen_frame + 0x4)) = *((uint *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x24)));
  (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x10)));
  uVar6 = 0;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x7c))))(*(int * PTR32 *)(this + 0x1dc));
  if (uVar4 != 0) {
    iVar5 = 0x14;
    do {
      uVar4 = *(uint *)(iVar1 + 0x20);
      if ((((*(uint *)(gen_frame + 0x8)) < *(uint *)(iVar5 + -4 + uVar4)) || ((*(uint *)(gen_frame + 0x4)) < *(uint *)(iVar5 + uVar4))) ||
         (bVar7)) {
        uVar4 = 1;
      }
      else {
        uVar4 = uVar4 & 0xffffff00;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x54))))(*(int * PTR32 *)(this + 0x1dc),uVar6,uVar4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x10;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x7c))))(*(int * PTR32 *)(this + 0x1dc));
    } while (uVar6 < uVar4);
  }
  return 0;
}

/* ref: FUN_007fa470 */
uint F_007fa470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fa470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 1) {
    F_00799ac0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf37 */
uint F_007fa4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,2,this,0);
    iVar1 = *(int *)(this + 0x188);
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007fa520 */
uint F_007fa520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7fa520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 0x1d4)));
      uVar2 = F_0042a970(*(int *)((int)this + 0x188) + 0x9c);
      uVar2 = F_00560910(iVar1 - uVar2);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar2);
    }
    return 0;
  }
  uVar2 = F_00582650(*(undefined * PTR32 *)((int)this + 0x188),param_2);
  return -(uint)(uVar2 < 2) & 2;
}

/* ref: FUN_007fa590 */
uint F_007fa590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fa590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x208)));
  uVar1 = param_1 + *(int *)((int)this + 0x25c) * 0x18;
  uVar3 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x20c))) - iVar2 >> 3;
  if ((uVar1 < uVar3) && (param_1 < 0x18)) {
    uVar4 = *(undefined4 *)(iVar2 + 4 + uVar1 * 8);
    uVar5 = 0;
    this_00 = (undefined *)F_00559b90(*param_2);
    uVar3 = F_00591c00(this_00,uVar4,uVar5);
  }
  return uVar3;
}

/* ref: FUN_007fa630 */
uint F_007fa630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    bVar1 = F_0056bb30((int)this + 0x1f8);
  }
  else {
    if (2 < param_1) {
      return param_1;
    }
    uVar3 = 1;
    bVar1 = F_0056bb70((int)this + 0x1f8);
  }
  uVar2 = (uint)bVar1;
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00799cd0(this,uVar3,uVar2);
  }
  return uVar2;
}

/* ref: FUN_007fa680 */
uint F_007fa680(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x200),(int)this + 0x1f8);
  uVar1 = F_00799d60(this,3,(undefined *)((int)this + 0x200));
  return uVar1;
}

/* ref: FUN_007fa6b0 */
uint F_007fa6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x228);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x22c) - uVar1) >> 3)) {
    uVar1 = F_0056bb40((undefined *)((int)this + 0x200),(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fa6f0 */
uint F_007fa6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x218);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x21c) - uVar1) >> 3)) {
    uVar1 = F_0056bb80((undefined *)((int)this + 0x200),(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fa730 */
uint F_007fa730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x208);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x20c) - uVar1) >> 3)) {
    uVar1 = F_0056bb00((undefined *)((int)this + 0x200),(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fa770 */
uint F_007fa770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x248);
  uVar3 = *(int *)((int)this + 0x24c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bc40((int)this + 0x200,(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1ac),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa7f0 */
uint F_007fa7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x248);
  uVar3 = *(int *)((int)this + 0x24c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bc80((int)this + 0x200,(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1b0),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa870 */
uint F_007fa870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x238);
  uVar3 = *(int *)((int)this + 0x23c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bbc0((undefined *)((int)this + 0x200),(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1a8),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa8f0 */
uint F_007fa8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)((int)this + 0x26c);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3);
  if ((uVar3 != 0) && (*(int *)((int)this + 0x1c8) != 0)) {
    bVar2 = F_005615c0(*(int *)((int)this + 0x1c8),uVar3);
    if (bVar2 != 0) {
      iVar1 = *(int *)((int)this + 600);
      if (iVar1 == 0) {
        uVar3 = F_00799e50(this);
        if ((uint)(*(int *)((int)this + 0x20c) - *(int *)((int)this + 0x208) >> 3) <= uVar3)
        goto LAB_007fa973;
        if (1 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x208) + 2 + uVar3 * 8)))) {
          uVar5 = *(undefined4 *)((int)this + 0x270);
          goto LAB_007fa973;
        }
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          uVar5 = *(undefined4 *)((int)this + 0x270);
        }
        goto LAB_007fa973;
      }
      uVar5 = *(undefined4 *)((int)this + 0x274);
    }
  }
LAB_007fa973: ;
  F_0056b630(this,uVar5,7,0,9,0,0);
  if (1 < *(uint *)((int)this + 0x260)) {
    F_00559fb0(*(undefined * PTR32 *)((int)this + 0x90),((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x18)));
    iVar1 = *(int *)((int)this + 0x1cc);
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00559fb0(pvVar4,((ushort *)(gen_frame + 0x4)),((ushort *)(gen_frame + 0xc)));
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_0055a000(pvVar4,((ushort *)(gen_frame + 0x8)),((ushort *)(gen_frame + 0x10)));
    F_0056b7f0(this,0,9,(uint)(ushort)(((((ushort *)(gen_frame + 0x8))[0] >> 1) - ((short *)(gen_frame + 0x14))[0]) + ((ushort *)(gen_frame + 0x4))[0]),
                 (uint)(ushort)((((ushort *)(gen_frame + 0xc))[0] - (((ushort *)(gen_frame + 0x10))[0] >> 1)) - ((short *)(gen_frame + 0x18))[0]));
    iVar1 = *(int *)((int)this + 0x1d0);
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00559fb0(pvVar4,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)));
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_0055a000(pvVar4,((ushort *)(gen_frame + 0xc)),((ushort *)(gen_frame + 0x4)));
    uVar3 = F_0056b820(this,0,9,(uint)(ushort)(((((ushort *)(gen_frame + 0xc))[0] >> 1) - ((short *)(gen_frame + 0x14))[0]) + ((ushort *)(gen_frame + 0x10))[0]),
                         (uint)(ushort)((((ushort *)(gen_frame + 0x8))[0] - (((ushort *)(gen_frame + 0x4))[0] >> 1)) - ((short *)(gen_frame + 0x18))[0]));
    return uVar3;
  }
  F_0056b850(this);
  uVar3 = F_0056b860(this);
  return uVar3;
}

/* ref: FUN_007faae0 */
uint F_007faae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7faae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  puVar3 = (ushort *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)puVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*puVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007fab20 */
uint F_007fab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fab20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007fab60 */
uint F_007fab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar2) >> 3)) {
    uVar1 = F_0055a170((undefined *)*param_2,(uint)*(byte *)(uVar2 + 6 + param_1 * 8),
                         (uint)*(byte *)(uVar2 + 5 + param_1 * 8),
                         (uint)*(byte *)(uVar2 + 4 + param_1 * 8));
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}

/* ref: FUN_007fabb0 */
uint F_007fabb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fabb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00799f70(this,3,(int)this + 400);
  uVar1 = F_00799f70(this,1,(int)this + 400);
  return uVar1;
}

/* ref: FUN_007fabd0 */
uint F_007fabd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fabd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x1a0),(int)this + 0x198);
  uVar1 = F_00799f70(this,2,(undefined *)((int)this + 0x1a0));
  return uVar1;
}

/* ref: FUN_007fac00 */
uint F_007fac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bc40((int)this + 0x1a0,(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fac40 */
uint F_007fac40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bc80((int)this + 0x1a0,(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fac80 */
uint F_007fac80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007facc0 */
uint F_007facc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7facc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar2 = *(undefined4 *)(uVar1 + 4 + param_1 * 8);
    uVar3 = 0;
    this_00 = (undefined *)F_00559b90(*param_2);
    uVar1 = F_00591c00(this_00,uVar2,uVar3);
  }
  return uVar1;
}

/* ref: FUN_007fad10 */
uint F_007fad10(unsigned int gen_a0)
{
  GEN_ENTER(0x7fad10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0079a1a0(this,3,(int)this + 400);
  uVar1 = F_0079a1a0(this,1,(int)this + 400);
  return uVar1;
}

/* ref: FUN_007fad30 */
uint F_007fad30(unsigned int gen_a0)
{
  GEN_ENTER(0x7fad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x1a0),(int)this + 0x198);
  uVar1 = F_0079a1a0(this,2,(undefined *)((int)this + 0x1a0));
  return uVar1;
}

/* ref: FUN_007fad60 */
uint F_007fad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bbc0((undefined *)((int)this + 0x1a0),(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fada0 */
uint F_007fada0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fada0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf37 */
uint F_007fade0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x184) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,4,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,5,this,0);
    F_005a92d0(this,0,0x20,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf46 */
byte F_007faed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7faed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte * pbVar6;
  undefined * pAVar7;
  uint uVar8;
  int iVar9;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 4);
  }
  if ((uVar8 & 1) != 0) {
    if ((param_2[0x10] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0079a6c0(this,uVar3,uVar5);
  }
  if ((uVar8 & 2) != 0) {
    F_0079a6c0(this,(uint)(byte)this[0x97c],0);
    if ((param_2[0x18] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),uVar5);
  }
  if ((uVar8 & 4) == 0) {
    return 1;
  }
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x7c))))(*(int * PTR32 *)(this + 0x198));
  if ((param_2[0x38] & 0xf) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_2 + 0x3c);
  }
  if (param_1 != 0) {
    pbVar6 = param_2 + 0x54;
    pAVar7 = this + uVar8 * 0x14 + 0x1b0;
    iVar9 = param_1;
    do {
      if ((pbVar6[-0x14] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + -0x10);
      }
      *(undefined4 *)(pAVar7 + -4) = uVar5;
      if ((pbVar6[-0xc] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + -8);
      }
      *(undefined4 *)pAVar7 = uVar5;
      if ((pbVar6[-4] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)pbVar6;
      }
      *(undefined4 *)(pAVar7 + 4) = uVar5;
      if ((pbVar6[4] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + 8);
      }
      *(undefined4 *)(pAVar7 + 8) = uVar5;
      if ((pbVar6[0xc] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + 0x10);
      }
      *(undefined4 *)(pAVar7 + 0xc) = uVar5;
      pbVar6 = pbVar6 + 0x28;
      pAVar7 = pAVar7 + 0x14;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  F_0058d980(*(undefined4 *)(this + 0x198),uVar8 + param_1);
  if ((param_2[0x1d8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x1dc);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar5);
  uVar8 = F_0055dcb0();
  if (*(char *)(uVar8 + 0x21d) == '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x198);
    uVar8 = F_0055dcb0();
    uVar8 = F_0055b9e0(uVar8);
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar4 != uVar8) {
      if (*(int *)(this + 0x198) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
      }
      uVar8 = F_0055dcb0();
      uVar8 = F_0055b9e0(uVar8);
      bVar2 = F_005612e0(uVar5,uVar8);
      if (bVar2 == 0) goto LAB_007fb0aa;
    }
    piVar1 = *(int * PTR32 *)(this + 0x198);
    iVar9 = piVar1[0x33];
    uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,iVar9);
    F_0079a630(this,iVar9,uVar8);
  }
LAB_007fb0aa: ;
  if (((param_2[0x1d0] & 0xf) != 0) && (*(int *)(param_2 + 0x1d4) != 0)) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x7c))))(*(int * PTR32 *)(this + 0x198));
    if (uVar8 == 0) {
      if (this[0x97c] != (undefined1)0x1) {
        F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x67);
        return 1;
      }
      F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x68);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf52 */
byte F_007fb120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*param_1 == 0xf) {
    if ((char)param_1[1] != '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)(this + 0x188) + 0x88))) == '\0') {
      F_0079a460(this);
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    if ((char)param_1[1] != '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) == '\0') {
      F_0079a3f0(this);
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007fb1c0 */
uint F_007fb1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 1) {
    F_0079a3f0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    if (param_1 == 2) {
      F_0079a460(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079a4d0(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007fb210 */
unsigned int F_007fb210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_1 == 4) {
    F_0079a540(this,*(undefined4 *)(param_3 + 8));
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb240 */
unsigned int F_007fb240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_1 == 5) {
    F_0079a5c0(this,*(undefined4 *)(param_3 + 8));
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb270 */
unsigned int F_007fb270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if (param_1 == 5) {
    F_0079a630(this,param_3[2],*param_3);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb2a0 */
uint F_007fb2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (param_1 == 5) {
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)bVar1,0);
    in_EAX = F_00557670(param_2,0);
  }
  return in_EAX;
}

/* ref: FUN_007fb2e0 */
uint F_007fb2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x184);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x188);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4002);
  uVar3 = F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompany::vf37 */
uint F_007fb3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 6);
    F_005a92d0(this,1,0x30,0);
    F_005a92d0(this,0,0x2c,0);
  }
  F_00588e00(this + 0x1c4,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf46 */
byte F_007fb420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  pbVar2 = param_2;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_1 < 3) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    param_2 = (byte *)0x0;
  }
  else {
    param_2 = *(byte * PTR32 *)(param_2 + 4);
  }
  if ((((uint)param_2 & 1) != 0) || (((uint)param_2 & 2) != 0)) {
    if ((pbVar2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(pbVar2 + 0xc);
    }
    uVar4 = F_00594fc0(this + 0x1c4,uVar3,0,0,0,0,"",1,1,0);
    *(uint *)(this + 0x1fc) = uVar4;
    fVar5 = F_00559d80(*(undefined4 *)(this + 0x200));
    fVar6 = F_00559d60(*(undefined4 *)(this + 0x200));
    iVar1 = *(int *)(this + 0x1fc);
    *(short *)(iVar1 + 0x2a) = (short)(int)fVar5;
    *(short *)(iVar1 + 0x28) = (short)(int)fVar6;
  }
  if (((uint)param_2 & 1) != 0) {
    this[0x1fa] = (undefined1)0x1;
    if ((pbVar2[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(pbVar2 + 0x14);
      if (5 < (byte)uVar4) goto LAB_007fb526;
    }
    this[0x1c0] = SUB41(uVar4,0);
    if (*((int *)GEN_TOP((this + (uVar4 & 0xff) * 4 + 0x180))) != 0) {
      F_0059dde0(*((undefined * PTR32 *)GEN_TOP((this + (uVar4 & 0xff) * 4 + 0x180))),1);
      F_0059bd30(this + 0x1c4,0,1,0);
      F_0079a940(this,0);
    }
  }
LAB_007fb526: ;
  if (((uint)param_2 & 2) != 0) {
    this[0x1fa] = (undefined1)0x0;
    if ((pbVar2[0x10] & 0xf) == 0) {
      F_0079aa30(this,0,1);
      return 1;
    }
    F_0079aa30(this,*(undefined4 *)(pbVar2 + 0x14),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompany::vf47 */
uint F_007fb570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  iVar2 = *(int *)(param_3 + 0xb0);
  if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc))) == 1) {
    uVar3 = F_0059d6a0(param_1,0x65,1,0);
    return uVar3;
  }
  F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x198),1);
  F_005600b0(((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)(iVar1 + 0x20));
  F_00560080(((undefined1 *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))));
  F_005959f0(*(undefined * PTR32 *)((int)param_1 + 0x19c),((undefined1 *)(gen_frame + 0x4)));
  F_00591c00(*(undefined * PTR32 *)((int)param_1 + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))),0);
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1a4),**(undefined4 * PTR32 *)(iVar2 + 0x20));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1ac),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8))));
  F_0079aaf0(param_1);
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10))));
  uVar3 = F_00568230(*(undefined4 *)((int)param_1 + 0x1bc),
                       ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20))) *
                              (float10)*(double *)&REFG(undefined, 0x10928e8)))));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompany::vf17 */
double F_007fb6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  F_0058cad0((undefined *)this,param_1);
  dVar1 = F_0079aaf0(this);
  return dVar1;
}

/* ref: FUN_007fb6c0 */
uint F_007fb6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb6c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = (gen_frame + 0x1c);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) != (char)(*(uint *)&gen_args[1])) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) != 0) {
      F_00588cd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))),1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) = 0;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(uint *)(gen_frame + 0x18)) = uVar1 & 0xff;
    F_005a9110((*(undefined * PTR32 *)&gen_args[0]),2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return uVar1;
  }
  uVar1 = F_0079aa30((*(undefined * PTR32 *)&gen_args[0]),CONCAT31((int3)((uint)in_EAX >> 8),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0)))),1);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf37 */
uint F_007fb760(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,2,this,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf44 */
uint F_007fb840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e2f0(this,2);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,10);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,0xe);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this,0xf);
  *(uint *)(this + 0x194) = uVar1;
  *(undefined4 *)(this + 0x1a0) = 0x65;
  *(undefined4 *)(this + 0x1ac) = 0x65;
  *(undefined4 *)(this + 0x19c) = 0x66;
  *(undefined4 *)(this + 0x1a8) = 0x66;
  pvVar3 = *(undefined * PTR32 *)(this + 0x188);
  *(undefined4 *)(this + 0x198) = 0x11;
  *(undefined4 *)(this + 0x1a4) = 0x11;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x920a00));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  pvVar3 = *(undefined * PTR32 *)(this + 0x18c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b560));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x1f,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x20,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x21,1,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x1f,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x20,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x21,2,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x188),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x18c),1,1,0);
  F_005a91d0(this,1,0x3a);
  uVar1 = F_005a91d0(this,0,0x36);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf63 */
uint F_007fbad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (param_1 < 3)) {
    F_0079b340(this,param_1,*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf65 */
unsigned int F_007fbb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if ((param_1 != 0) && (param_1 < 3)) {
    F_0079b400(this,param_1,param_3[2],*param_3);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf66 */
uint F_007fbb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (param_1 < 3)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf37 */
uint F_007fbb70(unsigned int gen_a0)
{
  GEN_ENTER(0x7fbb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    F_005a92d0(this,1,0x2f,0);
    F_005a92d0(this,0,0x2b,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf44 */
uint F_007fbbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fbbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e2f0(this,6);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar1;
  if (uVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  F_00568380(pvVar3,0x1f,1,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar3,0x20,1,this,0,0);
  pvVar3 = *(undefined * PTR32 *)(this + 0x180);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x2c)) = 5;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b770));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  F_005a91d0(this,1,0x2f);
  uVar1 = F_005a91d0(this,0,0x2b);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf65 */
uint F_007fbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079b6c0(this,param_3[2],*param_3);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf66 */
uint F_007fbd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 == 0) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf37 */
uint F_007fbd90(unsigned int gen_a0)
{
  GEN_ENTER(0x7fbd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar4 = 0;
    pAVar3 = this + 400;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x17,iVar4 + 2,this,0);
      iVar4 = iVar4 + 1;
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 3);
    if (*(int *)(this + 0x19c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,6,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,7,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1b0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,6,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),6,6,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),7,6,this,0);
    F_005a92d0(this,1,0x27,0);
    F_005a92d0(this,0,0x24,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf63 */
uint F_007fbef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bc10(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf65 */
uint F_007fbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bc90(this,*param_3,param_3[2]);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf66 */
uint F_007fbf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bd90(this,*param_3,param_3[2]);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf69 */
uint F_007fbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 5) || (uVar2 = param_1 - 6, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fbfc0 */
uint F_007fbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (param_1 < 3) {
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x19c),0,0,1);
    uVar1 = 0;
    puVar2 = (undefined4 *)((int)this + 400);
    do {
      F_0059dde0((undefined *)*puVar2,(uint)(uVar1 == param_1));
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while ((int)uVar1 < 3);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007fc080 */
uint F_007fc080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar3;
  
  piVar7 = (int *)((int)this + 400);
  iVar5 = 3;
  do {
    if (*piVar7 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(*piVar7 + 0x70);
    }
    F_0055a300(pvVar4,0);
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = param_1;
  if (200 < (int)param_1) {
    iVar5 = (int)(param_1 - 1) / 200;
    cVar1 = (char)iVar5 + '\x01';
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),cVar1);
    *(char *)((int)this + 0x1b6) = cVar1;
    uVar6 = 0;
    if (cVar1 != '\0') {
      do {
        iVar5 = *(int *)((int)this + uVar6 * 4 + 400);
        pvVar4 = (undefined *)0x0;
        if (iVar5 != 0) {
          pvVar4 = *(undefined * PTR32 *)(iVar5 + 0x70);
        }
        bVar2 = F_0055a300(pvVar4,1);
        uVar3 = CONCAT31(extraout_var,bVar2);
        bVar2 = (char)uVar6 + 1;
        uVar6 = (uint)bVar2;
      } while (bVar2 < *(byte *)((int)this + 0x1b6));
    }
  }
  return uVar3;
}

/* ref: FUN_007fc110 */
uint F_007fc110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_007fbfc0(this,param_1 & 0xff);
  return uVar1;
}

/* ref: FUN_007fc130 */
uint F_007fc130(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_0079bf10(this);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  iVar3 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x88)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)(cVar1 != '\0');
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007fc1c0 */
uint F_007fc1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x1b0) != 0) {
    uVar3 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x70))));
    if ((char)uVar3 == '\0') {
      F_00560760(((uint *)(gen_frame + 0x0)));
      uVar3 = F_0042a990((int)this + 0x214);
      bVar1 = *(byte *)((int)this + 0x13a);
      ((uint *)(gen_frame + 0x0))[0] = uVar3;
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x68)));
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar2,((uint *)(gen_frame + 0x0)),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf37 */
uint F_007fc230(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x24,1,this,0);
    if (*(int *)(this + 0x198) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x68))),6,2,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x68))),7,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x68))),6,3,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x68))),7,3,this,0);
    F_005a92d0(this,1,0x2c,0);
    F_005a92d0(this,0,0x28,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf47 */
uint F_007fc330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fc330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 AVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_2 + 0xa0);
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50))));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xc0)));
  F_0055a300(*(undefined * PTR32 *)(this + 0x184),1);
  F_0059d670(*(undefined * PTR32 *)(this + 0x184),iVar4 + 0x65);
  F_00584110(*(undefined * PTR32 *)(this + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x44))));
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x48))));
  iVar6 = 0;
  param_1 = 0;
  iVar4 = 0;
  do {
    uVar5 = *((uint *)GEN_TOP((*(int *)(iVar7 + 0x20) + 4 + iVar6)));
    if (uVar5 < 0x10) {
      param_1 = param_1 + 1;
      this[uVar5 + 0x1a0] = SUB41(iVar4,0);
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0xc;
  } while (iVar4 < 0x10);
  F_0058d980(*(undefined4 *)(this + 400),param_1);
  piVar3 = *(int * PTR32 *)(this + 0x19c);
  if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x160))) == 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
    *(undefined4 *)(this + 0x1b0) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe4)));
    *(undefined4 *)(this + 0x1b4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe4)));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    piVar3 = *(int * PTR32 *)(this + 0x198);
    if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x164))) == 0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
      *(undefined4 *)(this + 0x1b4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe8)));
    }
  }
  uVar5 = F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x4c))));
  if (((byte)this[0xfb] & 4) != 0) {
    AVar1 = *((undefined *)GEN_TOP((*(int *)(iVar7 + 0x20) + 200)));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x7c))))(*(int * PTR32 *)(this + 400));
    iVar7 = 0;
    if (0 < (int)uVar5) {
      do {
        if (this[iVar7 + 0x1a0] == AVar1) break;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
      if (iVar7 < 0) {
        return uVar5;
      }
    }
    if (iVar7 != *((int *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 400) + 0xc0)))) {
      F_005623b0(*(undefined * PTR32 *)(this + 400),iVar7);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x74))))(*(int * PTR32 *)(this + 400),iVar7,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x4c))))(*(int * PTR32 *)(this + 400),iVar7);
      uVar5 = F_0079c270(this,iVar7);
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf52 */
byte F_007fc500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (bVar2 == 0) {
    if (*param_1 == 0xf) {
      F_0079c350(this);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      bVar2 = 1;
    }
    else if (*param_1 == 0x10) {
      F_0079c3c0(this);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf62 */
uint F_007fc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 2) {
    F_0079c0d0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079c040(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf63 */
uint F_007fc600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079c160(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),
                 (uint)(*(byte *)(param_3 + 0x11) >> 3 & 1));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf64 */
uint F_007fc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079c270(this,*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf69 */
uint F_007fc670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 2) || (uVar2 = param_1 - 3, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fc6b0 */
uint F_007fc6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x19c) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1b0);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x38))))(*(int * PTR32 *)((int)this + 0x19c));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fc720 */
uint F_007fc720(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x198) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1b4);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x38))))(*(int * PTR32 *)((int)this + 0x198));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf37 */
uint F_007fc790(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 3);
    if (*(int *)(this + 0x1dc) == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(this_00,0x17,4,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x68))),6,4,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x68))),7,4,this,0);
    F_005a92d0(this,1,0x31,0);
    F_005a92d0(this,0,0x2d,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf52 */
byte F_007fc840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (bVar2 == 0) {
    if (*param_1 == 0xf) {
      if (this[0x1e8] == (undefined1)0x0) {
        F_0079c900(this,1);
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      }
    }
    else {
      if (*param_1 != 0x10) {
        return 0;
      }
      if (this[0x1e8] != (undefined1)0x0) {
        F_0079c900(this,(uint)(byte)((char)this[0x1e8] - 1));
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
        return 1;
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf62 */
uint F_007fc920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 1 < 3) {
    uVar1 = F_0079c900(this,(uint)(byte)((char)param_1 - 1));
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 == 4) {
    F_0079c960(this);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf69 */
unsigned int F_007fc960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if (param_1 == 4) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fc9a0 */
uint F_007fc9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)((int)this + 0x1dc);
  if ((uVar2 != 0) && (*(int *)((int)this + 0x1e4) != 0)) {
    uVar2 = F_0055a350(*(undefined4 *)(uVar2 + 0x70));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1e4);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x38))))(*(int * PTR32 *)((int)this + 0x1dc));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fca20 */
uint F_007fca20(unsigned int gen_a0)
{
  GEN_ENTER(0x7fca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x180);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x184);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4002);
  uVar3 = F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf37 */
uint F_007fcaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x68))),6,1,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x68))),7,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,4,this,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
    F_005a92d0(this,1,0x2f,0);
    F_005a92d0(this,0,0x2b,0);
    F_005a92d0(this,1,0x27,0);
    F_005a92d0(this,0,0x24,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf47 */
uint F_007fcc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fcc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  F_0079cbd0(this,param_1,param_2);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xbc) + 0x20)));
    if (*piVar1 == 0) {
      F_0059ead0(*(undefined * PTR32 *)(this + 0x198),0,0,1);
    }
    else {
      uVar3 = piVar1[1];
      if (3 < uVar3) {
        uVar3 = 3;
      }
      F_0058d980(*(undefined4 *)(this + 0x198),uVar3);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x9c);
  if ((uVar3 != 0) && (*(int *)(param_2 + 0x90) != 0)) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1900)));
    if ((*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x190c))) != 0) && (0 < (int)uVar2)) {
      F_0058d980(*(undefined4 *)(this + 0x19c),uVar2);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x70))))(*(int * PTR32 *)(this + 0x19c));
      return uVar3;
    }
    uVar3 = F_0059ead0(*(undefined * PTR32 *)(this + 0x19c),0,0,1);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf52 */
byte F_007fcd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fcd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (((bVar2 == 0) && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
    if (*(int *)(this + 0x188) != 0) {
      uVar3 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))));
      if ((char)uVar3 != '\0') {
        F_0079cdf0(this);
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf62 */
uint F_007fcda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079cdf0(this);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf63 */
uint F_007fcdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_1 == 3) {
    F_0079cf80(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 4;
    if (uVar1 == 0) {
      F_0079cf10(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf65 */
uint F_007fce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fce10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_1 == 2) {
    F_0079ce60(this,param_3[2],*param_3);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079cff0(this,param_3[2],*param_3);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf66 */
uint F_007fce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fce60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 2) || (uVar2 = param_1 - 3, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf69 */
uint F_007fcea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 == 0) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fcee0 */
uint F_007fcee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x188) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((uint *)(gen_frame + 0x0)));
      uVar2 = F_0042a990((int)this + 0x1a0);
      bVar1 = *(byte *)((int)this + 0x13a);
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((uint *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x38))))(*(int * PTR32 *)((int)this + 0x188));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fcf60 */
uint F_007fcf60(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_ecx;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_0056b780(this,0);
  in_ecx = 0;
  if (*(int *)((int)this + 0x188) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70)));
  }
  uVar2 = F_0055a350(in_ecx);
  if ((char)uVar2 != '\0') {
    bVar1 = F_0056b630(this,0x18ab9,7,0,9,0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007fcfa0 */
uint F_007fcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c98bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1ac);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b4) = (*(undefined * PTR32 (*)[4])REFP(0x10c98a4));
  F_00580ea0((undefined *)((int)this + 0x6c0));
  *(undefined1 *)((int)this + 0xcf8) = 0;
  F_00c48350((undefined *)((int)this + 0x6f8),0,0x600);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  F_00560e80((undefined *)((int)this + 0x6c0),this);
  return (uint)this;
}

/* ref: FUN_007fd070 */
unsigned int F_007fd070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (1 < param_1) {
    param_1 = 0;
  }
  uVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x198);
  do {
    F_0059dde0((undefined *)*puVar4,(uint)(uVar3 == param_1));
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while ((int)uVar3 < 2);
  *(uint *)((int)this + 0x180) = param_1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x18c);
  if (param_1 == 1) {
    if (this_00 == (undefined *)0x0) {
      uVar5 = 1;
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
      uVar5 = 1;
    }
  }
  else {
    if (this_00 != (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
    }
    uVar5 = 0;
  }
  F_0055a300(this_00,uVar5);
  uVar5 = 0x1c1;
  if (*(int *)((int)this + 0x180) == 1) {
    uVar5 = 0x18ad3;
  }
  uVar6 = 0;
  uVar3 = F_0055e2f0(this,0x1e);
  uVar1 = F_0055a020(uVar3);
  F_0056b630(this,uVar5,6,0,7,(uint)(uVar1 >> 1),uVar6);
  if (*(int *)((int)this + 0x180) == 0) {
    uVar5 = 0x1c;
  }
  else {
    uVar5 = 0x1d;
  }
  uVar3 = F_0055e2f0(this,uVar5);
  uVar1 = F_00559d90(uVar3);
  uVar5 = 0;
  if (*(int *)((int)this + 400) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
  }
  F_00559f00(uVar5,(float)(int)(short)uVar1);
  uVar1 = F_0055a030(uVar3);
  uVar2 = (uint)uVar1;
  uVar1 = F_0055a020(uVar3);
  F_005b1cd0(*(undefined * PTR32 *)((int)this + 400),(uint)uVar1,uVar2);
  return 0;
}

/* ref: FUN_007fd190 */
uint F_007fd190(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x188);
  if ((*(byte *)(uVar3 + 0x2c) & 1) != 0) {
    if (((byte)*(undefined4 *)((int)this + 0x4d4) & 0xf) == 4) {
      F_00560f40(uVar3,0xa1,(int)this + 0x1ac);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x188) + 4))) + 0x120)));
    *puVar1 = *puVar1 | 0x400;
    in_ecx = 0;
    if (*(int *)((int)this + 400) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar3 = F_0055a2d0(in_ecx);
    if (((char)uVar3 == '\0') ||
       (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400)),
       uVar3 == 0)) {
      uVar3 = F_0055dcb0();
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 4)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
    puVar1 = (uint *)(uVar3 + 0x120);
    *puVar1 = *puVar1 & 0xfffffbff;
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_007fd270 */
uint F_007fd270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 400);
  uVar1 = *((uint *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4 & 0xffffff;
  if (uVar1 == 0xfffffd) {
    uVar1 = F_0056d250(this_00,3,0);
    return uVar1;
  }
  if (uVar1 - 0xfffffe < 2) {
    uVar1 = F_0056d250(this_00,2,0);
    return uVar1;
  }
  uVar1 = F_0056d250(this_00,4,0);
  return uVar1;
}

/* ref: FUN_007fd2c0 */
uint F_007fd2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  undefined * this_00;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(param_2[1]);
  this_00 = (undefined *)F_00559ba0(*param_2);
  F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar1;
}

/* ref: FUN_007fd310 */
uint F_007fd310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_007fd340 */
uint F_007fd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  this = (undefined *)*param_2;
  F_0055a300(this,(uint)(iVar1 != 0));
  if (iVar1 != 0) {
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),iVar1,0,this);
  }
  F_00584110(this_00,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar2 = F_00584110(this_01,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar2;
}

/* ref: FUN_007fd3c0 */
unsigned int F_007fd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x184) != param_1) {
    puVar1 = (undefined4 *)((int)this + 0x198);
    iVar2 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x28))((int *)*puVar1,0);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(int *)((int)this + 0x184) = param_1;
  }
  return 0;
}

/* ref: FUN_007fd410 */
byte F_007fd410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fd410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400));
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 400),uVar5);
      uVar1 = *(uint *)*puVar3;
      uVar4 = uVar1 >> 4 & 0xffffff;
      if (((uVar1 & 2) != 0) && ((*(byte *)((int)puVar3 + 0x2a) & 0xf) == 0)) {
        *param_2 = uVar5;
      }
      if ((uVar4 < 0xfffffd) && (uVar4 == param_3)) {
        *param_1 = uVar5;
        return 1;
      }
      if ((uVar1 & 1) != 0) {
        *param_2 = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: FUN_007fd4a0 */
uint F_007fd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = param_1;
  if (*(uint *)((int)this + 0x180) != param_1) {
    puVar4 = (undefined4 *)((int)this + 0x198);
    iVar3 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x28))((int *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_007fd070(this,param_1);
    if (*(int *)((int)this + 0x184) < 0) {
      *(undefined4 *)((int)this + 0x184) = 0;
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0x18c) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
    }
    uVar2 = F_0055a2d0(uVar1);
    if ((char)uVar2 == '\0') {
      uVar1 = *(undefined4 *)((int)this + 400);
    }
    else {
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x18c),*(undefined4 *)((int)this + 0x184));
      uVar1 = *(undefined4 *)((int)this + 0x18c);
    }
    F_0059b390(this,uVar1,1,0);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x184);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(uint *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007fd5a0 */
uint F_007fd5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined1 * this_00;
  int iVar3;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)((int)this + 0x184) != iVar4) {
    puVar2 = (undefined4 *)((int)this + 0x198);
    iVar3 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x28))((int *)*puVar2,0);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)((int)this + 0x184) = iVar4;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 9;
  (*(int *)(gen_frame + 0x18)) = iVar4;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar4 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar1;
}

/* ref: FUN_007fd630 */
uint F_007fd630(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pvVar1 = *(undefined * PTR32 *)((int)this + 400);
  *(undefined * PTR32 *)((int)this + 0x6b8) = this;
  *(gen_code32 *)((int)this + 0x6bc) = ((code *)REFP(0x7fd270));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd2c0));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00574320(pvVar1,&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0xc)),2,2);
  pvVar1 = *(undefined * PTR32 *)((int)this + 400);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd310));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00574320(pvVar1,&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x24)),1,3);
  pvVar1 = *(undefined * PTR32 *)((int)this + 400);
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 2;
  (*(undefined4 *)(gen_frame + 0x4c)) = 3;
  (*(undefined4 *)(gen_frame + 0x58)) = 4;
  (*(undefined4 *)(gen_frame + 0x64)) = 5;
  (*(undefined4 *)(gen_frame + 0x70)) = 6;
  (*(undefined4 *)(gen_frame + 0x7c)) = 7;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd340));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  uVar2 = F_00574320(pvVar1,&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),6,4);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_007fd770 */
byte F_007fd770(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd770u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && ((*(uint *)*param_1 & 0xffffff0) < 0xfffffd0)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_007fd7a0 */
uint F_007fd7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = ((uint *)*param_1)[2];
    (*(uint *)(gen_frame + 0xc)) = *(uint *)*param_1 >> 4 & 0xffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf5 */
uint F_007fd820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((*(int *)(this + 0x188) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x188) + 4))) != 0)) &&
     (*(int *)(this + 400) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))) + 0x14))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))),param_1);
    }
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf6 */
uint F_007fd880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fd880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*(int *)(this + 0x188) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x188) + 4))) != 0)) &&
     (*(int *)(this + 400) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))) + 0x18))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))),param_1,0);
    }
  }
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonJournalAccept::vf37 */
uint F_007fd8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x194) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007fd930 */
uint F_007fd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd930u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  undefined * this;
  
  if (param_2 == 1) {
    if (param_1 == (int *)0x0) {
      this = (undefined *)0x0;
    }
    else {
      this = (undefined *)param_1[0x1c];
    }
    F_0055a300(this,1);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,1);
  }
  else {
    if (param_2 == 2) {
      if (param_1 == (int *)0x0) {
        F_0055a300((undefined *)0x0,1);
        uVar1 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x28))(0,0);
        return uVar1;
      }
      F_0055a300((undefined *)param_1[0x1c],1);
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,0);
      return uVar1;
    }
    uVar1 = param_2 - 3;
    if (uVar1 == 0) {
      if (param_1 == (int *)0x0) {
        F_0055a300((undefined *)0x0,0);
        uVar1 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x28))(0,0);
        return uVar1;
      }
      F_0055a300((undefined *)param_1[0x1c],0);
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007fd9e0 */
uint F_007fd9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fd9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  undefined4 in_ecx;
  uint uVar1;
  
  if ((*(short *)(param_2 + 4) != 0) || (*(short *)(param_2 + 6) != 0)) {
    in_ecx = 0;
    if (*(int *)((int)this + 0x1a4) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x70)));
    }
    uVar1 = F_0055a350(in_ecx);
    if ((char)uVar1 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x1a4),
                   ((uint)(*(short *)(param_2 + 6) < 1) * 2 + -1) *
                   (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x1a4) + 0xc2))),1);
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
    *(undefined1 *)(param_1 + 0x15) = 2;
    in_EAX = param_1;
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonJournalDetail::vf46 */
byte F_007fda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fda50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char * pcVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  
  pbVar4 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (((*(byte * PTR32 *)&gen_args[2])[0x328] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x32c)));
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar5;
    iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
    if (iVar5 != 0) {
      uVar7 = 0;
      if (iVar3 != 0) {
        uVar7 = *(undefined4 *)(iVar3 + 0x70);
      }
      uVar6 = F_0055a2d0(uVar7);
      if ((char)uVar6 != '\0') {
        F_00574dc0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
      }
      if ((*pbVar4 & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar4 + 4);
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x188] = SUB41(uVar6 >> 0x1f,0);
      pvVar9 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194)));
      (*(uint *)(gen_frame + 0x8)) = uVar6 & 0x7fffffff;
      F_0055a300(pvVar9,1);
      if ((pbVar4[0x18] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x1c);
      }
      F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),uVar7);
      if ((pbVar4[0x10] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x14);
      }
      uVar6 = *(uint *)(pbVar4 + 8);
      (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT13(iVar5 != 0,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 0, 3))));
      if ((uVar6 & 0xf) == 0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = *(char * PTR32 *)(pbVar4 + 0xc);
      }
      pcVar1 = pcVar8 + 1;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if (pcVar8 == pcVar1) {
        uVar7 = 0;
      }
      else if ((uVar6 & 0xf) == 0) {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),0);
        uVar7 = 1;
      }
      else {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),*(undefined4 *)(pbVar4 + 0xc));
        uVar7 = 1;
      }
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),7);
      F_0055a300(pvVar9,uVar7);
      uVar7 = 0x65;
      if (((pbVar4[0x318] & 0xf) == 0) || (*(int *)(pbVar4 + 0x31c) == 0)) {
        if ((*(uint *)(gen_frame + 0x8)) == 10) {
          uVar7 = 0x67;
        }
      }
      else {
        uVar7 = 0x66;
      }
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      F_0059d670(pvVar9,uVar7);
      if ((pbVar4[0x460] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x464);
      }
      if ((pbVar4[0x330] & 0xf) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(pbVar4 + 0x334);
      }
      if ((pbVar4[0x318] & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(pbVar4 + 0x31c);
      }
      F_00592b60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),uVar10,uVar11,uVar7);
      if ((pbVar4[800] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x324);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),iVar5,0);
      }
      if ((pbVar4[0x20] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x24);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),iVar5,0);
      }
      if ((*(undefined * PTR32 *)&gen_args[0])[0x188] != (undefined1)0x0) {
        F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x66,1,0);
        uVar7 = 0x65;
        pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x24);
        F_0059d670(pvVar9,uVar7);
        if ((pbVar4[0x28] & 0xf) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(pbVar4 + 0x2c);
        }
        F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))),(uint)(iVar5 != 0));
        if (iVar5 != 0) {
          F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))),iVar5,0);
        }
        if ((pbVar4[0x350] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x354);
        }
        F_0079df00((*(undefined * PTR32 *)&gen_args[0]),uVar7,(*(int *)&gen_args[1]),pbVar4,0x6b);
        F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
        uVar12 = 0;
        uVar6 = F_0055a2d0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))));
        if ((char)uVar6 != '\0') {
          uVar12 = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8)));
        }
        F_00559f40(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))),uVar12);
        F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))),&(*(uint *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
        F_0055a080(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),(uint)(ushort)((short)(*(byte * PTR32 *)&gen_args[2]) + (short)uVar12));
        F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
        uVar7 = 0;
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x29);
        F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),uVar6,uVar7);
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
        return 1;
      }
      uVar7 = 0x11;
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x24);
      F_0059d670(pvVar9,uVar7);
      if ((pbVar4[0x28] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x2c);
      }
      F_00592c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7);
      if ((pbVar4[0x418] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar4 + 0x41c);
      }
      if ((*(uint *)(gen_frame + 0x8)) == 10) {
        if ((pbVar4[0x4c8] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4cc);
        }
        if ((pbVar4[0x30] & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(pbVar4 + 0x34);
        }
        if ((pbVar4[0x40] & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(pbVar4 + 0x44);
        }
        F_005ae8f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6 & 0xffff,(*(int *)&gen_args[1]),pbVar4,0x84,uVar10,uVar11,uVar7
                    );
      }
      else {
        if ((pbVar4[0x30] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x34);
        }
        if ((pbVar4[0x40] & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(pbVar4 + 0x44);
        }
        F_005adb40(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6 & 0xffff,(*(int *)&gen_args[1]),pbVar4,0x84,uVar11,uVar7);
      }
      if ((pbVar4[0x298] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x29c);
      }
      F_005a3cf0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x54,0x59,0x5e);
      uVar6 = F_0055dcb0();
      F_0055b9b0(uVar6);
      F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
      if ((pbVar4[0x48] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x4c);
      }
      F_00597d10(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,10,0xf,0x14,0x1e,0x23);
      if ((pbVar4[0x140] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x144);
      }
      F_00597f60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x29,0x2e,0x33,0x38);
      if (((byte)*(undefined4 *)(pbVar4 + 0x1e8) & 0xf) == 4) {
        F_00598240(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*(undefined4 *)(pbVar4 + 0x1ec),(*(int *)&gen_args[1]),pbVar4,0x3f,
                     0x43,0x4b,0x4f,0x47);
      }
      if (((byte)*(undefined4 *)(pbVar4 + 0x1f0) & 0xf) == 6) {
        F_0058bbd0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*(undefined4 *)(pbVar4 + 500));
      }
      if ((pbVar4[0x38] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x3c);
      }
      uVar6 = F_0055dcb0();
      uVar6 = F_00785470(*(undefined4 *)(uVar6 + 0x38),uVar7);
      F_0058bbf0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6);
      uVar7 = 0;
      if (((byte)*(undefined4 *)(pbVar4 + 0x350) & 0xf) == 4) {
        uVar7 = *(undefined4 *)(pbVar4 + 0x354);
      }
      F_005a49e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x6b);
      F_00574ec0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
      F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) + 0x70)));
      }
      uVar11 = 0;
      uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x29);
      F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),uVar7,uVar6,uVar11);
      if ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)))) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = (*(uint *)(gen_frame + 0x8));
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 3;
        if (((((*(uint *)(gen_frame + 0x8)) == 4) || ((*(uint *)(gen_frame + 0x8)) == 1)) || ((*(uint *)(gen_frame + 0x8)) == 6)) ||
           ((((*(uint *)(gen_frame + 0x8)) == 7 || ((*(uint *)(gen_frame + 0x8)) == 8)) || ((*(uint *)(gen_frame + 0x8)) == 9)))) {
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 1;
        }
        else if ((*(uint *)(gen_frame + 0x8)) == 10) {
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 0xffffffff;
        }
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 0xffffffff;
        switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x8)))) {
        case 4: ;
        case 8: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 4;
          break;
        case 6: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 3;
          break;
        case 7: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 0xd;
        }
        if ((pbVar4[0x338] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x33c);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),uVar7);
        if ((pbVar4[0x340] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x344);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),uVar7);
        if ((pbVar4[0x348] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x34c);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),uVar7);
      }
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 0xffffffff;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 7) {
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 5;
      }
      else if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != '\0') {
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 6;
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))));
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))));
      pvVar9 = (undefined *)0x0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))));
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),2,0x32);
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),2,0x32);
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),2,0x32);
      if (((byte)*(undefined4 *)(pbVar4 + 0x4d0) & 0xf) == 8) {
        F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x65,0,0);
        if ((pbVar4[0x4d0] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4d4);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1d);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        if ((pbVar4[0x4d8] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4dc);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1e);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        if ((pbVar4[0x4e0] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4e4);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1f);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
        return 1;
      }
      F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x11,1,0);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
      return 1;
    }
    if (iVar3 == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *(undefined * PTR32 *)(iVar3 + 0x70);
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),0);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = 0xffffffff;
  }
  return 1;
}

/* ref: FUN_007fe2e0 */
uint F_007fe2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x1a4) != 0) {
    uVar1 = F_0055a2d0(*(int *)(in_ecx + 0x1a4));
    if ((char)uVar1 != '\0') {
      if (*(int *)(in_ecx + 0x1a8) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1a8) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1a8);
        }
      }
      if (*(int *)(in_ecx + 0x1ac) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1ac) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1ac);
        }
      }
      if (*(int *)(in_ecx + 0x1b0) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1b0) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1b0);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007fe360 */
uint F_007fe360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fe360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = 0;
  if (*(int *)((int)this + 0x18c) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  if ((char)uVar1 != '\0') {
    uVar1 = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x18c),
                         (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x18c) + 0xc2))) *
                         ((uint)((short)param_1 < 1) * 2 + -1),1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonJournalResult::vf37 */
uint F_007fe460(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x18c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonJournalResult::vf46 */
byte F_007fe4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fe4b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0)) {
    if ((((*(byte * PTR32 *)&gen_args[2])[0x108] & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x10c))) == 0)) {
      (*(undefined * PTR32 *)&gen_args[0])[0x1a4] = (undefined1)0x0;
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),1);
      pvVar6 = (undefined *)0x0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) != 0) {
        pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x70)));
      }
      F_00568380(pvVar6,0x17,1,(*(undefined * PTR32 *)&gen_args[0]),0,0);
    }
    else {
      (*(undefined * PTR32 *)&gen_args[0])[0x1a4] = (undefined1)0x1;
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0);
    }
    if ((*pbVar1 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 4);
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),uVar4);
    if ((pbVar1[0x290] & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar1 + 0x294);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),(uint)(iVar8 != 0));
    if (iVar8 != 0) {
      F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),iVar8,0);
    }
    if ((pbVar1[0x298] & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar1 + 0x29c);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),(uint)(iVar8 != 0));
    if (iVar8 != 0) {
      F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),iVar8,0);
    }
    if (((pbVar1[600] & 0xf) != 0) && (*(int *)(pbVar1 + 0x25c) != 0)) {
      if ((pbVar1[0x2a0] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar1 + 0x2a4);
      }
      if ((pbVar1[0x260] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar1 + 0x264);
      }
      F_00592b60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),*(int *)(pbVar1 + 0x25c),uVar5,uVar4);
      uVar4 = 0x66;
      pvVar6 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      F_0059d670(pvVar6,uVar4);
    }
    if ((pbVar1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),uVar4);
    F_00563ea0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    if ((pbVar1[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x14);
    }
    F_00597d10(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,3,8,0xd,0x17,0x1c);
    if ((pbVar1[0x108] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x10c);
    }
    F_00597f60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,0x22,0x27,0x2c,0x31);
    if ((pbVar1[0x268] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x26c);
    }
    F_00598240(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,0x37,0x3b,0x43,0x47,0x3f);
    F_00574ec0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),0);
    uVar4 = 0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x70)));
    }
    uVar2 = F_0055a030(uVar4);
    if ((uint)uVar2 <= *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)))) {
      uVar7 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),1);
      uVar3 = F_0055a030(uVar7);
      uVar7 = (uint)uVar3 + ((uint)uVar2 - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))));
      if (uVar7 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8)))) {
        uVar7 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8)));
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar7);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonJournalResult::vf2 */
uint F_007fe740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7fe740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 in_ecx;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_01 = (gen_frame + 0x1c);
  if ((param_1 & 0xffff) == 0x17) {
    if (param_2 == 1) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (this[0x1a4] == (undefined1)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00564250(*(undefined4 *)(this + 0x1a0));
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar2 = 1;
      do {
        this_01 = this_01 + -8;
        uVar1 = F_005a2670(this_01);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else {
      uVar1 = param_2 - 2;
      if (uVar1 == 0) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(uint *)(gen_frame + 0x18)) = 1;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
        return uVar1;
      }
    }
  }
  else {
    uVar1 = (param_1 & 0xffff) - 0x19;
    if (uVar1 == 0) {
      in_ecx = 0;
      if (*(int *)(this + 0x18c) != 0) {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      uVar1 = F_0055a350(in_ecx);
      if ((char)uVar1 == '\0') {
        if (*(int *)(this + 0x18c) == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
        }
        F_00568380(this_00,0x17,1,this,0,0);
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c),1);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007fe880 */
uint F_007fe880(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ccc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1d8);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f6) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x708) = (*(undefined * PTR32 (*)[4])REFP(0x10c9cb8));
  F_00580ea0((undefined *)((int)this + 0x714));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  return (uint)this;
}

/* ref: FUN_007fe970 */
uint F_007fe970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fe970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = 0;
  *(uint *)((int)this + 0x6f0) = param_1;
  if ((param_1 != 0) && (param_1 < 5)) {
    if (param_1 <= param_3) {
      param_3 = 0;
    }
    local_8 = (uint)*(ushort *)((int)this + 0x6ea);
    uVar1 = *(ushort *)((int)this + 0x6ec) / param_1;
    *(char *)((int)this + 0x6e8) = (char)param_2;
    uVar2 = param_3;
    if (((char)param_2 != '\0') && ((param_2 & 0xff & 1 << ((byte)param_3 & 0x1f)) != 0)) {
      param_3 = 0;
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        if ((param_2 & 0xff & 1 << ((byte)uVar3 & 0x1f)) == 0) break;
        uVar3 = uVar3 + 1;
        uVar2 = param_3;
      } while (uVar3 < 4);
    }
    param_3 = uVar2;
    puVar4 = (undefined4 *)((int)this + 0x188);
    do {
      this_00 = (int *)*puVar4;
      if (this_00 != (int *)0x0) {
        F_0055a300((undefined *)this_00[0x1c],(uint)(uVar5 < param_1));
        ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,0);
        uVar2 = F_0055a2d0(this_00[0x1c]);
        if ((char)uVar2 != '\0') {
          if (param_3 == uVar5) {
            F_0059dde0(this_00,1);
          }
          F_00559e70(this_00[0x1c],(float)(int)(short)local_8);
          F_0055a060(this_00[0x1c],uVar1);
          local_8 = local_8 + uVar1;
        }
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < 4);
  }
  return param_3;
}

/* ref: FUN_007fea80 */
uint F_007fea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int in_ecx;
  uint uVar4;
  int * piVar5;
  int local_8;
  
  uVar4 = 1;
  piVar5 = (int *)((int)this + 0x188);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 == (int *)0x0) {
      in_ecx = 0;
    }
    else {
      in_ecx = piVar1[0x1c];
    }
    pvVar2 = (undefined *)F_0055a2d0(in_ecx);
    if ((char)pvVar2 != '\0') {
      if (((char)param_1 == '\0') &&
         (pvVar2 = this, (*(byte *)((int)this + 0x6e8) & (byte)uVar4) == 0)) {
        uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
      }
      else {
        uVar3 = (uint)pvVar2 & 0xffffff00;
      }
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar3)));
    }
    piVar5 = piVar5 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return (uint)pvVar2;
}

/* ref: FUN_007feb40 */
uint F_007feb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7feb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * pvVar3;
  undefined4 uVar4;
  byte * pbVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (param_1 != 0) {
    piVar6 = (int *)((int)this + 0x198);
    pbVar5 = (byte *)(param_4 + param_5 * 8);
    do {
      if (*piVar6 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(*piVar6 + 0x70);
      }
      F_0055a300(pvVar3,1);
      uVar2 = F_00561570((undefined *)*piVar6,4);
      if (uVar2 != 0) {
        if ((*pbVar5 & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 4);
        }
        F_0058f730((undefined *)(uVar2 + 4),uVar4,0,6);
      }
      F_0059dde0((undefined *)*piVar6,(uint)(param_2 == uVar8));
      if (*piVar6 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(*piVar6 + 0x70);
      }
      F_0055a300(pvVar3,1);
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 8;
      piVar6 = piVar6 + 1;
    } while (uVar8 < param_1);
  }
  uVar8 = param_1;
  if (param_1 < 8) {
    piVar6 = (int *)((int)this + param_1 * 4 + 0x198);
    iVar7 = 8 - param_1;
    do {
      if (*piVar6 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(*piVar6 + 0x70);
      }
      bVar1 = F_0055a300(pvVar3,0);
      uVar8 = CONCAT31(extraout_var,bVar1);
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return uVar8;
}

/* ref: FUN_007fec20 */
uint F_007fec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (param_1 != *(int *)((int)this + 0x6fc)) {
    F_007fea80(this,1);
    *(int *)((int)this + 0x6fc) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(int *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007feca0 */
uint F_007feca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7feca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 2) != 0) {
    uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x184),4,0);
    return uVar1;
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x184),2,0);
  return uVar1;
}

/* ref: FUN_007fecd0 */
uint F_007fecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fecd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_007fed00 */
uint F_007fed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fed00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  
  this = (undefined *)*param_2;
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  iVar1 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  F_0055a300(this,(uint)(iVar1 != 0));
  if (iVar1 != 0) {
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),iVar1,0,this);
  }
  F_00584110(this_00,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar2 = F_00584110(this_01,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar2;
}

/* ref: FUN_007fed80 */
uint F_007fed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = param_1[2];
  uVar3 = *param_1;
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x1e4) != 0)) {
    puVar2 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 0x184),uVar1);
    uVar3 = 0;
    if ((puVar2 != (undefined4 *)0x0) && (uVar3 = *(uint *)*puVar2, (uVar3 & 2) == 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      (*(uint *)(gen_frame + 0x14)) = uVar3 >> 4;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_007fee20 */
uint F_007fee20(unsigned int gen_a0)
{
  GEN_ENTER(0x7fee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  F_00560f40(*(undefined4 *)((int)this + 0x180),0xa1,(int)this + 0x1d8);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4))) + 0x120)));
  *puVar1 = *puVar1 | 0x400;
  in_ecx = 0;
  if (*(int *)((int)this + 0x184) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
  }
  uVar3 = F_0055a2d0(in_ecx);
  if ((char)uVar3 == '\0') {
    uVar3 = F_0055dcb0();
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
  }
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
  puVar1 = (uint *)(uVar3 + 0x120);
  *puVar1 = *puVar1 & 0xfffffbff;
  return uVar3;
}

/* ref: Client::UI2::AddonGuildLeve::vf60 */
byte F_007feed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7feed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (param_1 == 0xf) {
    if (((char)param_2 == '\0') || (*(uint *)(this + 0x6fc) < *(int *)(this + 0x6f0) - 1U)) {
      uVar3 = (*(int *)(this + 0x6fc) + 1U) % *(uint *)(this + 0x6f0);
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (((char)param_2 == '\0') || (*(int *)(this + 0x6fc) != 0)) {
      uVar3 = (*(int *)(this + 0x6fc) + -1 + *(uint *)(this + 0x6f0)) % *(uint *)(this + 0x6f0);
    }
  }
  if (-1 < (int)uVar3) {
    in_ecx = 0;
    if (*(int *)(this + uVar3 * 4 + 0x188) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + uVar3 * 4 + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(in_ecx);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int * PTR32 *)(this + uVar3 * 4 + 0x188);
      uVar2 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
      F_007fec20(this,uVar3);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 1;
}

/* ref: FUN_007fefb0 */
uint F_007fefb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fefb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * this_00;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 * puVar10;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9b0(uVar3);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 4) + 0x20))) + param_2 * 4)));
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uVar3 = (uint)*(ushort *)(iVar2 + 0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar2 + 4);
  this_00 = (int *)F_00559c20(param_1);
  uVar8 = 0;
  pvVar4 = (undefined *)F_00561550(this_00,3);
  F_00591c00(pvVar4,uVar6,uVar8);
  uVar9 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  pvVar4 = (undefined *)F_00561530(this_00,2);
  F_0057eb30(pvVar4,uVar3,uVar6,uVar8,uVar7,uVar9);
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
  if (uVar3 == 0) {
    uVar3 = F_00561490(this_00,5);
    this_00[0x1a] = uVar3;
  }
  F_00560760(((undefined4 *)(gen_frame + 0xc)));
  bVar1 = *(byte *)((int)this + 0x13a);
  ((undefined4 *)(gen_frame + 0xc))[0] = (*(undefined4 *)(gen_frame + 0x18));
  uVar3 = F_0055dcb0();
  puVar10 = ((undefined4 *)(gen_frame + 0xc));
  uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
  uVar3 = F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar5,puVar10);
  return uVar3;
}

/* ref: Client::UI2::AddonRetainerSell::vf37 */
uint F_007ff080(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b10((undefined *)(uVar1 + 0xe0),*(undefined4 *)(this + 400));
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  if (*(int *)(this + 0x194) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))),0x19,0,this,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x19,0,this,0);
  }
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0x14,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0x15,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSell::vf2 */
uint F_007ff130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ff130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_1 & 0xffff) == 0x17) {
    if (param_2 == 2) {
      uVar1 = F_0079edf0(this);
    }
    else {
      if (param_2 == 0x14) {
        uVar1 = F_0079ed70(this);
        return uVar1;
      }
      uVar1 = param_2 - 0x15;
      if (uVar1 == 0) {
        uVar1 = F_0079edb0(this);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = (param_1 & 0xffff) - 0x19;
    if (uVar1 == 0) {
      uVar1 = F_0079ec90(this,param_3,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007ff180 */
uint F_007ff180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(param_1,7);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)this = uVar1;
  uVar1 = F_0055e340(param_1,0xf);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_0055e340(param_1,8);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_0055e360(param_1,0x10);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_0055e340(param_1,0x11);
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_0055e340(param_1,0xe);
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_0055e340(param_1,0xd);
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_0055e340(param_1,0xb);
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_007ff220 */
uint F_007ff220(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca1cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  local_8 = 0x92;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    F_0042b630(puVar1 + 5);
    F_0042b630(puVar1 + 0x1a);
    puVar1 = puVar1 + 0x2f;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSellList::vf37 */
uint F_007ff2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,0,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonRetainerSellList::vf2 */
uint F_007ff320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ff320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = param_1 & 0xffff;
  piVar3 = (int *)(uVar2 - 0xc);
  if (piVar3 < (int *)0x25) {
    piVar3 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7ff430) + uVar2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0xc: ;
      F_00557670(param_3,0);
      piVar3 = param_4;
      if ((*param_4 == 5) && ((char)param_4[1] == '\0')) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        AVar1 = this[0x13a];
        uVar2 = F_0055dcb0();
        F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
        uVar2 = F_0055dcb0();
        F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        return uVar2;
      }
      break;
    case 0x1f: ;
    case 0x20: ;
      piVar3 = (int *)F_0079f150(this,param_1,param_3,param_4);
      break;
    case 0x21: ;
      uVar2 = F_0079f200(this,param_3,param_4);
      return uVar2;
    case 0x2d: ;
      uVar2 = F_0079f3a0(this,param_3,param_4);
      return uVar2;
    case 0x30: ;
      uVar2 = F_0079f2d0(this,param_3,param_4);
      return uVar2;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_007ff470 */
uint F_007ff470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ff470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  pvVar2 = (undefined *)*param_2;
  puVar1 = (undefined4 *)((int)((int)(uintptr_t)param_1) * 0xbc + 0x1a0 + (int)this);
  uVar4 = F_0042a990(puVar1 + 5);
  F_00584110(pvVar2,uVar4);
  pvVar2 = (undefined *)param_2[1];
  uVar4 = F_00560910(puVar1[1]);
  F_00584110(pvVar2,uVar4);
  pvVar2 = (undefined *)param_2[2];
  uVar4 = F_0042a990(puVar1 + 0x1a);
  F_00584110(pvVar2,uVar4);
  if (param_2[3] == 0) goto LAB_007ff51c;
  param_1 = (undefined *)F_00559c20(param_2[3]);
  if (param_1 == (undefined *)0x0) {
LAB_007ff4e6: ;
    param_1 = (undefined *)0x0;
  }
  else {
    uVar4 = F_005613a0(param_1);
    if (uVar4 != 0xf) goto LAB_007ff4e6;
  }
  F_00595190(param_1,*puVar1,0,0);
  uVar4 = puVar1[4];
  F_00561860(param_1,(uint)(*(byte *)(puVar1 + 4) & 1));
  F_005a03c0(param_1,uVar4 >> 1);
LAB_007ff51c: ;
  bVar3 = F_0055a300((undefined *)param_2[4],0);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: Client::UI2::AddonRetainerHistory::vf44 */
uint F_007ff530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = F_0055e2f0(this,10);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e340(this,0xb);
  *(uint *)(this + 0x188) = uVar1;
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
    this_00 = *(undefined * PTR32 *)(this + 0x180);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 2;
    (*(undefined4 *)(gen_frame + 0x2c)) = 4;
    (*(undefined4 *)(gen_frame + 0x38)) = 5;
    (*(undefined4 *)(gen_frame + 0x44)) = 7;
    (*(undefined4 *)(gen_frame + 0x50)) = 6;
    (*(undefined4 *)(gen_frame + 0x5c)) = 8;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79f610));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),7,0);
  }
  F_005a91d0(this,0,0x21);
  uVar1 = F_005a91d0(this,1,0x24);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf46 */
byte F_007ff650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  ushort uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    this_00 = (undefined *)F_0055e340(this,2);
    F_00584110(this_00,uVar2);
    if ((*param_2 & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 4);
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x180),iVar4,0,1);
    if (iVar4 == 0) {
      F_0059d6a0(this,0x65,1,0);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar2);
    }
    else {
      F_0059d6a0(this,0x11,1,0);
    }
    iVar4 = 0;
    uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x180),0);
    if (uVar1 != 0) {
      do {
        uVar3 = F_0056d250(*(undefined * PTR32 *)(this + 0x180),0,iVar4);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = *(undefined4 *)(uVar3 + 0x70);
        }
        F_0055a3c0(uVar2,0);
        iVar4 = iVar4 + 1;
        uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x180),0);
      } while ((ushort)iVar4 < uVar1);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf37 */
uint F_007ff730(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e4) + 4))) + 0x90))),0xc,0,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e8) + 4))) + 0x90))),0xc,0,this,0);
  }
  pAVar2 = this + 0x18c;
  iVar3 = 0;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 3,this,0);
    }
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar3 < 8);
  F_00588e00(this + 0x1ac,0);
  F_005a92d0(this,1,0x21,0);
  F_005a92d0(this,0,0x1e,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf47 */
unsigned int F_007ff7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x78);
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xac))));
  F_00584110(*(undefined * PTR32 *)(this + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb4))));
  F_0079faa0(this,*(undefined4 *)(this + 0x1f0));
  return 0;
}

/* ref: FUN_007ff840 */
uint F_007ff840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar3 = F_0055dcb0();
  cVar1 = *(char *)(uVar3 + 0xbc);
  F_0056c270(&(*(undefined4 *)(gen_frame + 0x0)));
  if (cVar1 != '\0') {
    uVar3 = F_0055dcb0();
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar3 + 0x40);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 0x44);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar3 + 0x48);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar3 + 0x4c);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x10)),uVar3 + 0x50);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(uVar3 + 0xa4);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),(uint)(param_1 != 7));
  F_0059bd30((undefined *)((int)this + 0x1ac),
               *((undefined4 *)GEN_TOP((*(int *)((int)this + (uint)(param_1 == 7) * 4 + 0x1e4) + 0x18))),1,1);
  *(int *)((int)this + 0x1f0) = param_1;
  F_0079faa0(this,param_1);
  if (cVar1 != '\0') {
    uVar3 = F_0055dcb0();
    *(undefined4 *)(uVar3 + 0x40) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)(uVar3 + 0x44) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(uVar3 + 0x48) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)(uVar3 + 0x4c) = (*(undefined4 *)(gen_frame + 0xc));
    F_0042ccf0((undefined *)(uVar3 + 0x50),((undefined1 *)(gen_frame + 0x10)));
    *(undefined4 *)(uVar3 + 0xa4) = (*(undefined4 *)(gen_frame + 0x64));
  }
  puVar5 = (undefined4 *)((int)this + 0x18c);
  iVar4 = 8;
  do {
    iVar6 = iVar4;
    F_0059dde0((undefined *)*puVar5,0);
    puVar5 = puVar5 + 1;
    iVar4 = iVar6 + -1;
  } while (iVar4 != 0);
  F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 4 + 0x18c))),1);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),3);
  uVar2 = *(undefined4 *)((int)this + 0x1f0);
  (*(undefined4 *)(gen_frame + 0x6c)) = 5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),4);
  (*(undefined4 *)(gen_frame + 0x7c)) = uVar2;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x68)));
  this_00 = &(*(uint *)(gen_frame + 0x88));
  iVar6 = iVar6 + 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  uVar3 = F_00560340(&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_007ff9f0 */
uint F_007ff9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x18c);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x1a8);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = 0x548;
  if (param_1 == 1) {
    uVar4 = 0x549;
  }
  bVar2 = F_0056b630(this,uVar4,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_007ffae0 */
uint F_007ffae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ffae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_0056b630(this,0x18ab8,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_007ff9f0(this,(uint)*(byte *)((int)this + 500));
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf37 */
uint F_007ffb20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ffb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
    F_005a92d0(this,1,0x21,0);
    F_005a92d0(this,0,0x1e,0);
    iVar4 = 0;
    pAVar3 = this + 0x180;
    do {
      if (*(int *)pAVar3 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar3 + 0x70),0x30,iVar4,this,0);
        pvVar2 = (undefined *)0x0;
        if (*(int *)pAVar3 != 0) {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
        }
        F_005840a0(pvVar2,0x34,iVar4,this,0);
        pvVar2 = (undefined *)0x0;
        if (*(int *)pAVar3 != 0) {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
        }
        F_005840a0(pvVar2,0x2d,iVar4,this,0);
      }
      iVar4 = iVar4 + 1;
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 0x19);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf44 */
uint F_007ffbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ffbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 AVar1;
  uint uVar2;
  uint in_ecx;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined * local_10;
  
  AVar1 = this[0x13c];
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
  bVar5 = true;
  if (uVar2 != 0) {
    bVar5 = *(char *)(uVar2 + 500) == '\0';
  }
  local_10 = this + 0x180;
  iVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,iVar4 + 3);
    if (uVar2 != 0) {
      in_ecx = F_00559c20(uVar2);
      if (in_ecx != 0) {
        uVar3 = F_005613a0(in_ecx);
        if (uVar3 == 0x11) {
          *(short *)(in_ecx + 0x9c) = (short)iVar4;
          *(byte *)(in_ecx + 0xa9) = bVar5 - 1U & 3;
          *(undefined4 *)(in_ecx + 0xa0) = 0x40018;
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x30,iVar4,this,uVar2,0);
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x34,iVar4,this,uVar2,0);
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x2d,iVar4,this,uVar2,0);
          *(uint *)local_10 = in_ecx;
        }
      }
    }
    local_10 = local_10 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  uVar2 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar2;
  F_005a91d0(this,1,0x21);
  F_005a91d0(this,0,0x1e);
  uVar2 = F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf47 */
uint F_007ffd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ffd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  undefined1 AVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  char * pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  AVar2 = this[0x13c];
  (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 0x84);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x18)) = *(int *)(param_2 + 0x78);
  iVar9 = 0;
  bVar10 = false;
  uVar5 = F_0055dcb0();
  uVar5 = F_0057f810(*(undefined * PTR32 *)(uVar5 + 0x14),(uint)(byte)AVar2);
  if (uVar5 != 0) {
    bVar10 = *(char *)(uVar5 + 500) == '\x01';
    iVar9 = *(int *)(uVar5 + 0x1f0);
    if (iVar9 < 0) {
      return uVar5;
    }
    if (6 < iVar9) {
      return uVar5;
    }
  }
  (*(int *)(gen_frame + 0x28)) = -1;
  uVar5 = F_0055dcb0();
  iVar3 = *(int *)(uVar5 + 0xb4);
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x98) & 0x10) != 0)) {
    piVar1 = (int *)(iVar3 + 0x84);
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0x84) + 0x28))))(piVar1)));
    if (*piVar6 == iVar9 + 0x27) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
      (*(int *)(gen_frame + 0x28)) = iVar9 * 0x19 + *(int *)(uVar5 + 4);
    }
  }
  F_00560760(&(*(char * PTR32 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 2;
  (*(int *)(gen_frame + 0x10)) = iVar9 + 0x27;
  (*(int *)(gen_frame + 0x34)) = iVar9 * 0x19;
  param_2 = 0;
  (*(int *)(gen_frame + 0x20)) = 0x10;
  do {
    iVar9 = (*(int *)(gen_frame + 0x20));
    piVar1 = *(int * PTR32 *)(this + param_2 * 4 + 0x180);
    if (piVar1 != (int *)0x0) {
      uVar4 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + -4 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
      (*(undefined4 *)(gen_frame + 0x30)) = uVar4;
      bVar11 = (char)((uint)uVar4 >> 8) != '\0';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar11;
      (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar11);
      F_0056e4d0(piVar1,(*(undefined4 *)(gen_frame + 0x2c)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)((char)(*(undefined4 *)(gen_frame + 0x2c)) == '\0'));
      if ((bVar10) && ((char)((uint)(*(undefined4 *)(gen_frame + 0x30)) >> 0x18) != '\0')) {
        F_0056e4d0(piVar1,1);
      }
      *(undefined2 *)(piVar1 + 0x27) = (undefined2)(*(int *)(gen_frame + 0x34));
      if ((char)(*(undefined4 *)(gen_frame + 0x30)) == '\0') {
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0x30))(piVar1 + 0x21);
        F_00595560(piVar1,0);
        F_00597570(piVar1);
        pvVar7 = (undefined *)0x0;
        if (piVar1[0x29] != 0) {
          pvVar7 = *(undefined * PTR32 *)(piVar1[0x29] + 0x70);
        }
        F_0055a300(pvVar7,0);
        *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) | 2;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((iVar9 + -0x10 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0x28))(piVar1 + 0x21);
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0xc))(piVar1 + 0x21);
        piVar1[0x26] = 0x10;
        F_00595560(piVar1,(*(undefined4 *)(gen_frame + 0x1c)));
        pvVar7 = (undefined *)0x0;
        if (piVar1[0x29] != 0) {
          pvVar7 = *(undefined * PTR32 *)(piVar1[0x29] + 0x70);
        }
        F_0055a300(pvVar7,(uint)((*(int *)(gen_frame + 0x34)) != (*(int *)(gen_frame + 0x28))));
        *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) & 0xfd;
        iVar3 = *((int *)GEN_TOP((iVar9 + -8 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        pcVar8 = *((char * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + param_2 * 4)));
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
        }
        (*(undefined1 *)(gen_frame + 0x17)) = (char)param_2;
        AVar2 = (*(undefined * PTR32 *)(gen_frame + 0x24))[0x13a];
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar8;
        F_005916c0(piVar1,6,(uint)(byte)AVar2,&(*(char * PTR32 *)(gen_frame + 0xc)));
        uVar5 = iVar3 >> 0x10 & 0xffff;
        if ((uVar5 < 2) && ((char)(*(undefined4 *)(gen_frame + 0x30)) != '\x05')) {
          F_0058ea60(piVar1,"");
        }
        else {
          F_0058ea90(piVar1,uVar5);
        }
        iVar9 = *((int *)GEN_TOP((iVar9 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        F_00561860((undefined *)piVar1[0x29],(uint)((byte)iVar9 & 1));
        F_005a03c0((undefined *)piVar1[0x29],iVar9 >> 1);
        iVar9 = (*(int *)(gen_frame + 0x20));
        this = (*(undefined * PTR32 *)(gen_frame + 0x24));
      }
    }
    param_2 = param_2 + 1;
    (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
    (*(int *)(gen_frame + 0x20)) = iVar9 + 0x14;
  } while (iVar9 + 0x14 < 0x204);
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf52 */
byte F_007fffc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fffc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (this_00 != (undefined *)0x0) {
      F_0079fb00(this_00);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00800000 */
byte F_00800000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x800000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = (int *)*param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  uVar3 = *puVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
  uVar3 = *(undefined4 *)(uVar5 + 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar5 = F_0055dcb0();
  uVar5 = F_0057f810(*(undefined * PTR32 *)(uVar5 + 0x14),(uint)bVar1);
  if (uVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(uVar5 + 0x1f0);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(int *)(gen_frame + 0x1c)) = iVar6 + 0x27;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar5 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00800100 */
uint F_00800100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x800100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  undefined4 * this_01;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar4 = 0;
  if (*param_2 == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = *param_2 - 0x84;
  }
  uVar3 = (*(uint *)(gen_frame + 0xc));
  if ((*(byte *)((*(uint *)(gen_frame + 0xc)) + 0xaa) & 2) == 0) {
    (*(uint *)(gen_frame + 0x8)) = *(byte *)((int)param_2 + 9) & 1;
    if ((char)param_2[2] == '\x05') {
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x3c)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar1;
      bVar1 = *(byte *)((int)this + 0x13c);
      uVar3 = F_0055dcb0();
      uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)bVar1);
      if (uVar3 != 0) {
        iVar4 = *(int *)(uVar3 + 0x1f0);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
      uVar2 = *(ushort *)((*(uint *)(gen_frame + 0xc)) + 0x9c);
      (*(int *)(gen_frame + 0x4c)) = iVar4 + 0x27;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
      (*(uint *)(gen_frame + 0x54)) = (uint)uVar2 % 0x19;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x38)));
      this_00 = &(*(uint *)(gen_frame + 0x58));
      iVar4 = 3;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar3;
    }
    bVar1 = *(byte *)((int)this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar3 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)bVar1);
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(uVar3 + 0x1f0);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = iVar4 + 0x27;
    uVar2 = *(ushort *)((*(uint *)(gen_frame + 0xc)) + 0x9c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2 % 0x19;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    bVar1 = *(byte *)((int)this + 0x13c);
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x8));
    if (bVar1 == 0) {
      bVar1 = *(byte *)((int)this + 0x13a);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    this_01 = &(*(undefined4 *)(gen_frame + 0x38));
    iVar4 = 4;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00800300 */
uint F_00800300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x800300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    if ((char)param_1 != '\0') {
      bVar1 = F_0056b630(this_00,0x18ab8,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = F_007ff9f0(this_00,(uint)*(byte *)((int)this_00 + 500));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf37 */
uint F_00800350(unsigned int gen_a0)
{
  GEN_ENTER(0x800350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pAVar4;
  int iVar5;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
    F_005a92d0(this,1,0x21,0);
    F_005a92d0(this,0,0x1e,0);
    iVar5 = 0;
    pAVar4 = this + 0x180;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x30,iVar5,this,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x34,iVar5,this,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x2d,iVar5,this,0);
      iVar5 = iVar5 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar5 < 0x12);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf44 */
uint F_00800410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x800410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  undefined * local_c;
  
  local_c = this + 0x180;
  iVar3 = 0;
  do {
    *(uint *)local_c = 0;
    uVar1 = F_0055e2f0(this,iVar3 + 7);
    if (((uVar1 != 0) && (in_ecx = F_00559c20(uVar1), in_ecx != 0)) &&
       (uVar2 = F_005613a0(in_ecx), uVar2 == 0x11)) {
      *(short *)(in_ecx + 0x9c) = (short)iVar3;
      *(undefined1 *)(in_ecx + 0xa9) = 3;
      *(undefined4 *)(in_ecx + 0xa0) = 0x8000;
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x30,iVar3,this,uVar1,0);
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x34,iVar3,this,uVar1,0);
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x2d,iVar3,this,uVar1,0);
      *(uint *)local_c = in_ecx;
    }
    local_c = local_c + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  uVar1 = F_0055e2f0(this,0x20);
  *(uint *)(this + 0x94) = uVar1;
  F_005a91d0(this,1,0x21);
  F_005a91d0(this,0,0x1e);
  uVar1 = F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  return uVar1;
}

/* ref: FUN_00800510 */
uint F_00800510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x800510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  undefined4 * this_01;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*param_2 != 0) {
    uVar3 = F_00559c20(*param_2);
    if (uVar3 != 0) {
      uVar4 = F_005613a0(uVar3);
      if (uVar4 == 0x11) goto LAB_00800549;
    }
  }
  uVar3 = 0;
LAB_00800549: ;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x84) + 0x2c))))(uVar3 + 0x84);
  if ((char)uVar3 != '\0') {
    bVar1 = *(byte *)(param_3 + 9);
    if (*(char *)(param_3 + 8) == '\x05') {
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x3c)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
      (*(undefined4 *)(gen_frame + 0x4c)) = 0x2e;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
      (*(undefined4 *)(gen_frame + 0x54)) = param_1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x38)));
      this_00 = &(*(uint *)(gen_frame + 0x58));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar3;
    }
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 0x2e;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    bVar2 = *(byte *)((int)this + 0x13c);
    (*(uint *)(gen_frame + 0x24)) = bVar1 & 1;
    if (bVar2 == 0) {
      bVar2 = *(byte *)((int)this + 0x13a);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar2;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_01 = &(*(undefined4 *)(gen_frame + 0x38));
    iVar5 = 4;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: Client::UI2::AddonMonsterNote::vf46 */
byte F_008006b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8006b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  short sVar1;
  int * piVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  float fVar7;
  int iVar8;
  undefined1 AVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte * pbVar14;
  undefined * pAVar15;
  undefined * pAVar16;
  byte * pbVar17;
  bool bVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x48)) = param_2;
  if (((param_1 != 0) && (param_2 != (byte *)0x0)) &&
     ((this[0x20b] != (undefined1)0x0 || (((byte)this[0xf9] & 1) != 0)))) {
    if ((param_2[8] & 0xf) == 0) {
      AVar9 = (undefined1)0x0;
    }
    else {
      AVar9 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[0x20a] = AVar9;
    if ((param_2[0x1d0] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x1d4);
    }
    AVar9 = this[0x13a];
    *(undefined4 *)(this + 0x820) = uVar4;
    uVar5 = F_0055dcb0();
    F_00590ad0((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar9,*(undefined4 *)(this + 0x244),
                 this + 0x820);
    uVar3 = F_0056d300(*(undefined * PTR32 *)(this + 0x248),2);
    iVar13 = 0;
    if (uVar3 != 0) {
      do {
        pvVar6 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x248),2,iVar13);
        iVar11 = (byte)this[0x20a] + 0x65;
        pvVar6 = (undefined *)F_00561490(pvVar6,3);
        F_0059d670(pvVar6,iVar11);
        iVar13 = iVar13 + 1;
      } while ((ushort)iVar13 < uVar3);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    if ((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x30)) = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 4);
    }
    if (((*(uint *)(gen_frame + 0x30)) & 1) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x100] & 0xf) == 0) {
        AVar9 = (undefined1)0x0;
      }
      else {
        AVar9 = SUB41(*(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x104),0);
      }
      this[0x20c] = AVar9;
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xe8] & 0xf) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xec);
      }
      *(int *)(this + 0x204) = iVar13;
      piVar2 = *(int * PTR32 *)(this + iVar13 * 0xc + 0x184);
      uVar5 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar5 + 0xc0);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x218),uVar4);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x220),uVar4);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x224),uVar4);
      if ((pbVar17[0x188] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x18c);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x21c),uVar4);
      sVar1 = *(short *)(this + 0x208);
      uVar4 = *(undefined4 *)(this + 0x21c);
      pvVar6 = *(undefined * PTR32 *)(this + 0x218);
      fVar7 = gen_bits2f(F_00577bc0(pvVar6,0,0,REFG(undefined4, 0x108cc50),0));
      (*(float *)(gen_frame + 0x44)) = fVar7;
      uVar3 = F_00559d70(pvVar6);
      F_00559eb0(uVar4,(uint)(ushort)((short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x44))) + uVar3 + sVar1));
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x1b8] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1bc);
      }
      F_00591c00(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x214),uVar4,0);
      if ((((*(byte * PTR32 *)(gen_frame + 0x48))[0x18] & 0xf) == 0) || (*(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1c) == 0)) {
        iVar13 = 0x65;
      }
      else {
        iVar13 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1c) + 0x65;
      }
      pvVar6 = (undefined *)F_0055e2f0(pAVar16,0x14);
      F_0059d670(pvVar6,iVar13);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
    uVar5 = (*(uint *)(gen_frame + 0x30));
    if (((*(uint *)(gen_frame + 0x30)) & 0x10) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x170] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x174);
      }
      F_00584110(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x228),uVar4);
      if (((pbVar17[0x180] & 0xf) == 0) || (*(int *)(pbVar17 + 0x184) != 100)) {
        uVar4 = 0x11;
      }
      else {
        uVar4 = 0x65;
      }
      F_0059d640(*(undefined * PTR32 *)(pAVar16 + 0x210),uVar4);
      F_00559fe0(*(undefined4 *)(pAVar16 + 0x230),&(*(int *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0x8)));
      if ((pbVar17[0x180] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x34)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x34)) = *(int *)(pbVar17 + 0x184);
      }
      (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(int *)(gen_frame + 0x34)) * (float10)*(double *)&REFG(undefined, 0x10928e8));
      F_00568230(*(undefined4 *)(pAVar16 + 0x230),
                   (float)((float10)(*(int *)(gen_frame + 0x34)) * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    }
    if ((uVar5 & 0x100) != 0) {
      uVar5 = 0;
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x184;
      do {
        if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xf0] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xf4);
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar16 + 0x28))))
                  (*(int * PTR32 *)pAVar16,(uint)((byte)(uVar12 >> ((byte)uVar5 & 0x1f)) & 1));
        uVar5 = uVar5 + 1;
        pAVar16 = pAVar16 + 0xc;
      } while (uVar5 < 8);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
    uVar5 = (*(uint *)(gen_frame + 0x30));
    (*(byte *)(gen_frame + 0x3b)) = (byte)((*(uint *)(gen_frame + 0x30)) >> 1) & 1;
    (*(int *)(gen_frame + 0x34)) = -1;
    if (((*(uint *)(gen_frame + 0x30)) >> 1 & 1) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xf8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x34)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x34)) = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xfc);
      }
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x198] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x19c);
      }
      F_00584110(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x22c),uVar4);
      if ((pbVar17[0x178] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x17c);
      }
      F_00584110(*(undefined * PTR32 *)(pAVar16 + 0x234),uVar4);
      F_0059d670(*(undefined * PTR32 *)(pAVar16 + 0x238),(byte)pAVar16[0x20a] + 0x65);
    }
    (*(byte *)(gen_frame + 0x39)) = (byte)(uVar5 >> 5) & 1;
    if ((uVar5 >> 5 & 1) != 0) {
      if ((pbVar17[0x160] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x164);
      }
      pAVar16[0x25d] = (undefined1)(bVar10 & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x269] = (undefined1)((byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x275] = (undefined1)((byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x281] = (undefined1)((byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x28d] = (undefined1)((byte)(uVar12 >> 4) & 1);
    }
    (*(byte *)(gen_frame + 0x3a)) = (byte)(uVar5 >> 6) & 1;
    if ((uVar5 >> 6 & 1) != 0) {
      if ((pbVar17[0x130] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x134);
      }
      *(undefined4 *)(pAVar16 + 600) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x16c);
      }
      pAVar16[0x25c] = (undefined1)(bVar10 & 1);
      if ((pbVar17[0x138] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x13c);
      }
      *(undefined4 *)(pAVar16 + 0x264) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x268] = (undefined1)((byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x140] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x144);
      }
      *(undefined4 *)(pAVar16 + 0x270) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x274] = (undefined1)((byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x148] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x14c);
      }
      *(undefined4 *)(pAVar16 + 0x27c) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x280] = (undefined1)((byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x150] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x154);
      }
      *(undefined4 *)(pAVar16 + 0x288) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x28c] = (undefined1)((byte)(uVar12 >> 4) & 1);
    }
    (*(byte *)(gen_frame + 0x38)) = (byte)(uVar5 >> 7) & 1;
    if ((uVar5 >> 7 & 1) != 0) {
      if ((pbVar17[0x158] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x15c);
      }
      pAVar16[0x25e] = (undefined1)(~bVar10 & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x26a] = (undefined1)(~(byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x276] = (undefined1)(~(byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x282] = (undefined1)(~(byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x28e] = (undefined1)(~(byte)(uVar12 >> 4) & 1);
    }
    if ((pbVar17[0x1c0] & 0xf) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(pbVar17 + 0x1c4);
    }
    (*(int *)(gen_frame + 0x1c)) = iVar13;
    if ((uVar5 >> 2 & 1) != 0) {
      F_0059caa0(*(undefined * PTR32 *)(pAVar16 + 0x24c),iVar13);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar4 = 0;
      (*(uint *)(gen_frame + 0x78)) = 0x78;
      (*(undefined2 *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = (undefined *)0x0;
      (*(undefined4 *)(gen_frame + 0x50)) = 1;
      (*(undefined2 *)(gen_frame + 0x68)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      (*(undefined4 *)(gen_frame + 0x60)) = 0;
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      uVar5 = F_00404270();
      pvVar6 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)(*(uint *)(gen_frame + 0x78)) * 4 >> 0x20) != 0) |
                                    (uint)((ulonglong)(*(uint *)(gen_frame + 0x78)) * 4),0,uVar5,uVar4);
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = pvVar6;
      F_00c48350(pvVar6,0,(*(uint *)(gen_frame + 0x78)) * 4);
      F_00556c70(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)));
      fVar19 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      (*(int *)(gen_frame + 0x3c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      pAVar15 = pAVar16 + 0x2ac;
      pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1dc;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 2;
      (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x48)) + 0x81c;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = pAVar15;
      (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar17;
      do {
        if ((pbVar17[-4] & 0xf) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)pbVar17;
        }
        bVar10 = pbVar17[0x4c];
        (*(int *)(gen_frame + 0x20)) = iVar13;
        if (((bVar10 & 0xf) == 0) || (iVar13 < 1)) {
          AVar9 = (undefined1)0x0;
        }
        else {
          AVar9 = (undefined1)0x1;
        }
        pAVar15[-4] = AVar9;
        if (AVar9 != (undefined1)0x0) {
          if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xa98] & 0xf) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xa9c);
          }
          uVar5 = uVar5 >> ((byte)(*(int *)(gen_frame + 0xc)) & 0x1f);
          pAVar15[-3] = (undefined1)((byte)uVar5 & 1);
          if ((pbVar17[0x4c] & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(pbVar17 + 0x50);
          }
          (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
          *(undefined4 *)pAVar15 = uVar4;
          if ((uVar5 & 1) != 0) {
            (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
          }
          if ((*(int *)(gen_frame + 0x1c)) == 1) {
            if ((uVar5 & 1) != 0) goto LAB_00800e97;
          }
          else if (((*(int *)(gen_frame + 0x1c)) != 2) || ((uVar5 & 1) == 0)) {
LAB_00800e97: ;
            iVar11 = (*(int *)(gen_frame + 0xc)) << 4;
            (*(int *)(gen_frame + 0x8)) = iVar11;
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar11) {
              *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar11;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != 1) {
              *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = 1;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
            (*(float *)(gen_frame + 0x44)) = 0.0;
            pAVar16 = pAVar15 + 5;
            pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x14));
            do {
              fVar7 = (*(float *)(gen_frame + 0x44));
              pAVar16[-1] = (undefined1)0x1;
              if ((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) < iVar13) {
                iVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + (*(int *)(gen_frame + 0xc)) * 4;
                bVar10 = (byte)iVar8;
                if (iVar8 < 0x14) {
                  if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xaa8] & 0xf) == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xaac);
                  }
                }
                else if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xaa0] & 0xf) == 0) {
                  uVar5 = 0;
                  bVar10 = bVar10 - 0x14;
                }
                else {
                  uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xaa4);
                  bVar10 = bVar10 - 0x14;
                }
                *pAVar16 = (undefined1)((byte)(uVar5 >> (bVar10 & 0x1f)) & 1);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[1] = (undefined1)(iVar8 != 100);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[2] = (undefined1)(iVar8 == 100);
                if ((pbVar14[-0x5a4] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -0x5a0);
                }
                *(undefined4 *)(pAVar16 + 3) = uVar4;
                if ((pbVar14[-0x324] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -800);
                }
                *(undefined4 *)(pAVar16 + 7) = uVar4;
                if ((pbVar14[-0x464] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -0x460);
                }
                *(undefined4 *)(pAVar16 + 0xb) = uVar4;
                if ((pbVar14[-0x194] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -400);
                }
                *(undefined4 *)(pAVar16 + 0x13) = uVar4;
                if ((pbVar14[-4] & 0xf) == 0) {
                  (*(float *)(gen_frame + 0x44)) = 0.0;
                }
                else {
                  (*(float *)(gen_frame + 0x44)) = gen_bits2f(*(int *)pbVar14);
                }
                pAVar16[0x1b] = (undefined1)0x1;
                *(float *)(pAVar16 + 0x17) = (float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x44))) * fVar19);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[0xf] = (undefined1)((-(iVar8 != 0) & 0xb3U) + 0x4c);
                iVar8 = (int)gen_fl2bits(fVar7) << 4;
                if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar8) {
                  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar8;
                  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
                  (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
                }
                if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != (*(uint *)(gen_frame + 0x18))) {
                  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = (*(uint *)(gen_frame + 0x18));
                  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
                  (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
                }
                (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
              }
              else {
                pAVar16[0x1b] = (undefined1)0x0;
              }
              if ((pbVar17[0x45c] & 0xf) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(pbVar17 + 0x460);
              }
              fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
              pbVar14 = pbVar14 + 8;
              pAVar16 = pAVar16 + 0x20;
              *(undefined4 *)(pAVar15 + 0x84) = uVar4;
              (*(float *)(gen_frame + 0x44)) = fVar7;
            } while ((uint)gen_fl2bits(fVar7) < 4);
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar11) {
              *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar11;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != 4) {
              *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = 4;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
            pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x14)) + 0x20;
        uVar5 = (*(uint *)(gen_frame + 0x18)) + 0x10;
        pbVar17 = pbVar17 + 8;
        pAVar15 = pAVar15 + 0x8c;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar17;
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = pAVar15;
        (*(uint *)(gen_frame + 0x18)) = uVar5;
      } while (uVar5 < 0xa2);
      bVar18 = false;
      if ((*(int *)(gen_frame + 0x1c)) == 0) {
        bVar18 = (*(int *)(gen_frame + 0x2c)) == 0;
      }
      else if ((*(int *)(gen_frame + 0x1c)) == 1) {
        bVar18 = (*(int *)(gen_frame + 0x24)) == 0;
      }
      else if ((*(int *)(gen_frame + 0x1c)) == 2) {
        bVar18 = (*(int *)(gen_frame + 0x2c)) == (*(int *)(gen_frame + 0x24));
      }
      F_0059d640(*(undefined * PTR32 *)(pAVar16 + 0x90),bVar18 + 0x65);
      F_00596e00(*(undefined * PTR32 *)(pAVar16 + 0x248),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)),0,0,2,0,(*(int *)(gen_frame + 0x3c)) / 2,
                   pAVar16 + 0x82c);
      F_00556bf0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
      if ((*(undefined * PTR32 *)(gen_frame + 0x94)) != (undefined *)0x0) {
        F_00406b30((*(undefined * PTR32 *)(gen_frame + 0x94)));
      }
    }
    if (((((*(byte *)(gen_frame + 0x3b)) != 0) || ((*(byte *)(gen_frame + 0x39)) != 0)) || ((*(byte *)(gen_frame + 0x3a)) != 0)) || ((*(byte *)(gen_frame + 0x38)) != 0)) {
      F_0059ead0(*(undefined * PTR32 *)(pAVar16 + 0x240),(uint)(byte)pAVar16[0x20c],0,0);
      iVar13 = (*(int *)(gen_frame + 0x34));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        F_005623b0(*(undefined * PTR32 *)(pAVar16 + 0x240),(*(int *)(gen_frame + 0x34)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x240) + 0x74))))(*(int * PTR32 *)(pAVar16 + 0x240),iVar13,0);
      }
      uVar5 = 0;
      if (pAVar16[0x20c] != (undefined1)0x0) {
        pAVar15 = pAVar16 + 0x25e;
        do {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x240) + 0x54))))
                    (*(int * PTR32 *)(pAVar16 + 0x240),uVar5,(uint)(byte)*pAVar15);
          uVar5 = uVar5 + 1;
          pAVar15 = pAVar15 + 0xc;
        } while (uVar5 < (byte)pAVar16[0x20c]);
      }
    }
    if (((*(uint *)(gen_frame + 0x30)) & 0x200) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xab0] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xab4);
      }
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xab8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xabc);
      }
      if ((uVar5 < 10) && (uVar12 < 4)) {
        iVar13 = uVar5 * 2 + 1;
        if (uVar5 != 0) {
          pAVar15 = pAVar16 + 0x2ec;
          do {
            if (pAVar15[-0x20] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (*pAVar15 != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (pAVar15[0x20] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (pAVar15[0x40] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            pAVar15 = pAVar15 + 0x8c;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        iVar13 = iVar13 + uVar12;
        F_005623b0(*(undefined * PTR32 *)(pAVar16 + 0x248),iVar13);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x248) + 0x74))))(*(int * PTR32 *)(pAVar16 + 0x248),iVar13,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x248) + 0x4c))))(*(int * PTR32 *)(pAVar16 + 0x248),iVar13);
        F_0059b390(pAVar16,*(undefined4 *)(pAVar16 + 0x248),1,0);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_008012c0 */
uint F_008012c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8012c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0xc + 0x254);
  F_0059d640(*(undefined * PTR32 *)(param_2 + 0x18),(-(uint)(*(char *)(puVar1 + 2) != '\0') & 0x54) + 0x11);
  uVar4 = *puVar1;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  F_00584110(pvVar2,uVar4);
  uVar4 = puVar1[1];
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8));
  F_00584110(pvVar2,uVar4);
  uVar3 = F_0059d640(*(undefined * PTR32 *)(param_2 + 0x10),
                       (-(uint)(*(char *)((int)puVar1 + 9) != '\0') & 0x54) + 0x11);
  return uVar3;
}

/* ref: FUN_00801330 */
uint F_00801330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)this + param_1 * 8 + 0x294);
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar2);
  return uVar1;
}

/* ref: FUN_00801360 */
uint F_00801360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4) * 0x8c;
  F_0055a300((undefined *)*param_2,(uint)*(byte *)(iVar2 + 0x2a8 + (int)this));
  uVar3 = *(undefined4 *)((int)this + iVar2 + 0x2ac);
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(this_00,uVar3);
  bVar1 = F_0055a300((undefined *)param_2[2],(uint)*(byte *)((int)this + iVar2 + 0x2a9));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_008013c0 */
uint F_008013c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8013c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = (((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4))))[1] >> 4;
  iVar3 = (*((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4))) >> 4) * 0x20;
  iVar1 = iVar3 + 0x2b0 + iVar6 * 0x8c;
  bVar2 = F_0055a300((undefined *)*param_2,(uint)*(byte *)((int)this + iVar3 + 0x2cc + iVar6 * 0x8c));
  uVar5 = CONCAT31(extraout_var,bVar2);
  if (*(char *)((int)this + iVar1 + 0x1c) != '\0') {
    if (*(char *)((int)this + iVar1 + 1) == '\0') {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))) + 0x6c)));
      uVar7 = 0x11;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))) + 0x6c)));
      uVar7 = 0x65;
    }
    F_0059d670(pvVar4,uVar7);
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),*(undefined4 *)((int)this + iVar1 + 0xc),0
                 ,param_2[2]);
    F_0055a200(param_2[2],(uint)*(byte *)((int)this + iVar1 + 0x10));
    uVar7 = *(undefined4 *)((int)this + iVar1 + 4);
    pvVar4 = (undefined *)F_00559ba0(param_2[3]);
    F_00584110(pvVar4,uVar7);
    uVar7 = *(undefined4 *)((int)this + iVar1 + 8);
    pvVar4 = (undefined *)F_00559ba0(param_2[4]);
    F_00584110(pvVar4,uVar7);
    uVar5 = F_00568230(param_2[5],*(float *)((int)this + iVar1 + 0x18));
  }
  return uVar5;
}

/* ref: FUN_00801490 */
uint F_00801490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * pcVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4) * 0x8c;
  pcVar1 = (char *)(iVar4 + 0x2a8 + (int)this);
  bVar2 = F_0055a300((undefined *)*param_2,(uint)*(byte *)(iVar4 + 0x2a8 + (int)this));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (*pcVar1 != '\0') {
    uVar5 = *(undefined4 *)(pcVar1 + 0x88);
    this_00 = (undefined *)F_00559ba0(param_2[3]);
    uVar3 = F_00584110(this_00,uVar5);
  }
  return uVar3;
}

/* ref: FUN_008014f0 */
uint F_008014f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8014f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  if ((uVar1 & 2) != 0) {
    return *(uint *)((int)this + 0x83c);
  }
  if ((uVar1 & 1) != 0) {
    return *(uint *)((int)this + 0x838);
  }
  return *(uint *)((int)this + 0x840);
}

/* ref: FUN_00801530 */
uint F_00801530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801530u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar6 = param_2;
  do {
    if ((char)param_3 == '\0') {
      uVar6 = uVar6 + 1;
      if (10 < (int)uVar6) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = 10;
      }
    }
    piVar1 = (int *)(in_ecx + 0x184 + uVar6 * 0xc);
    iVar2 = *piVar1;
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    uVar3 = F_0055a2d0(uVar4);
    if ((char)uVar3 != '\0') {
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      uVar3 = F_0055a350(uVar4);
      if ((char)uVar3 != '\0') {
        return uVar6;
      }
    }
    iVar5 = iVar5 + 1;
    if (10 < iVar5) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_008015b0 */
byte F_008015b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8015b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0xb) && (*(uint *)((int)this + 0x204) != param_1)) {
    *(uint *)((int)this + 0x204) = param_1;
    piVar2 = *(int * PTR32 *)((int)this + param_1 * 0xc + 0x184);
    uVar3 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar3 + 0xc0);
    if ((int)param_1 < 8) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = param_1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        puVar5 = puVar5 + -2;
        F_005a2670(puVar5);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = param_1;
      bVar1 = *(byte *)((int)this + param_1 * 0xc + 0x188);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        puVar5 = puVar5 + -2;
        F_005a2670(puVar5);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    F_0058e350(*(undefined * PTR32 *)((int)this + 0x248),0,1);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00801700 */
uint F_00801700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  do {
    if (*(int *)((int)this + iVar3 * 4) != 0) {
      if (param_2 != 0) {
        *((int *)GEN_TOP((*(int *)((int)this + iVar3 * 4) + 0x110))) = iVar3;
        iVar1 = *(int *)((int)this + iVar3 * 4);
        this_00 = (undefined *)0x0;
        if (iVar1 != 0) {
          this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
        }
        F_00568380(this_00,0x17,iVar3,param_2,0,0);
      }
      if (param_1 == iVar3) {
        F_0059dde0(*(undefined * PTR32 *)((int)this + iVar3 * 4),1);
        piVar2 = *(int * PTR32 *)((int)this + iVar3 * 4);
        local_8 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return local_8;
}

/* ref: FUN_00801770 */
uint F_00801770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(uint *)((int)this + iVar2 * 4);
    if ((uVar1 != 0) && (param_1 != 0)) {
      uVar1 = F_005840a0(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,iVar2,param_1,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: FUN_008017b0 */
uint F_008017b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8017b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca6f4));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined1 *)((int)this + 0x1bc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1c4);
  iVar2 = 0x27;
  do {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0x1d;
  puVar1 = (undefined4 *)((int)this + 0x304);
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x73c) =
       (*(undefined * PTR32 (*)[4])REFP(0x10ca6dc));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: FUN_00801880 */
uint F_00801880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 0x14 & 0xff;
  if (uVar1 != 0) {
    return *(uint *)((int)this + uVar1 * 4 + 0x744);
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x198),0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf37 */
uint F_008018c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8018c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x19,0);
  F_005a92d0(this,0,0x16,1);
  if (((byte)this[0xf9] & 1) != 0) {
    F_00801770(this + 0x180,this);
    F_007a0140(this + 0x180);
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf52 */
byte F_00801920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 == 0xf) {
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x19c);
    do {
      iVar4 = iVar4 + 1;
      if (3 < iVar4) {
        iVar4 = 0;
      }
      if ((*(uint *)(this + 0x1a0) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_008019e1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = 0;
LAB_008019e1: ;
    if (((*(int *)(this + 0x19c) < iVar4) || ((char)param_1[1] != '\x02')) &&
       (bVar1 = F_007a0840(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x19c);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        iVar4 = 3;
      }
      if ((*(uint *)(this + 0x1a0) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_0080196b;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = 0;
LAB_0080196b: ;
    if (((iVar4 < *(int *)(this + 0x19c)) || ((char)param_1[1] != '\x02')) &&
       (bVar1 = F_007a0840(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00801a30 */
uint F_00801a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_2,0);
  bVar1 = F_007a0840(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00801a50 */
uint F_00801a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x24 + 0x304);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1[3]);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1 + 4);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,(uint)(*(char *)((int)puVar1 + 10) != '\0'));
    if (*(byte *)((int)puVar1 + 10) != 0) {
      uVar3 = (uint)*(byte *)((int)puVar1 + 10);
      uVar4 = 5;
      this_00 = (undefined *)F_0055dcb0();
      uVar3 = F_0055ba90(this_00,uVar3,uVar4);
      F_00584110(pvVar2,uVar3);
    }
  }
  uVar3 = F_00559c00(param_2[3]);
  if (uVar3 != 0) {
    pvVar2 = (undefined *)F_00559c20(uVar3);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 0xf) {
        F_00595190(pvVar2,*puVar1,0,0);
      }
    }
  }
  uVar3 = F_0059d640((undefined *)param_2[4],
                       (-(uint)(*(char *)((int)puVar1 + 0xb) != '\0') & 0x54) + 0x11);
  return uVar3;
}

/* ref: FUN_00801b30 */
uint F_00801b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  return uVar1;
}

/* ref: FUN_00801b60 */
uint F_00801b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  return uVar1;
}

/* ref: FUN_00801b90 */
uint F_00801b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  uint uVar5;
  
  pvVar3 = (undefined *)F_00559ba0(*param_2);
  if (pvVar3 != (undefined *)0x0) {
    F_00584110(pvVar3,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  pcVar2 = *(char * PTR32 *)(uVar5 + 4);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0;
    if (pcVar4 != pcVar2 + 1) {
      pvVar3 = (undefined *)F_00559ba0(param_2[1]);
      uVar5 = 0;
      if (pvVar3 != (undefined *)0x0) {
        uVar5 = F_00584110(pvVar3,pcVar2);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00801bf0 */
uint F_00801bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined2 * puVar4;
  
  uVar3 = 0;
  puVar4 = (undefined2 *)((int)this + 0x60);
  do {
    uVar2 = 0;
    if (puVar4 != (undefined2 *)0x28) {
      *puVar4 = (short)uVar3;
      *(undefined1 *)(puVar4 + 1) = 0;
      *((undefined2 * PTR32 *)GEN_TOP((*(int *)(puVar4 + -4) + 0x110))) = puVar4;
      puVar4[2] = (short)uVar3;
      *(undefined1 *)(puVar4 + 3) = 1;
      *((undefined2 * PTR32 *)GEN_TOP((*(int *)(puVar4 + -2) + 0x110))) = puVar4 + 2;
      pvVar1 = (undefined *)0x0;
      if (*(int *)(puVar4 + -4) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(puVar4 + -4) + 0x70)));
      }
      F_00568380(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(puVar4 + -2) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(puVar4 + -2) + 0x70)));
      }
      uVar2 = F_00568380(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0,0);
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x1c;
  } while (uVar3 < 6);
  return uVar2;
}

/* ref: FUN_00801c90 */
uint F_00801c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x5c);
  local_8 = 6;
  do {
    uVar2 = 0;
    if (piVar3 != (int *)0x24) {
      pvVar1 = (undefined *)0x0;
      if (piVar3[-1] != 0) {
        pvVar1 = *(undefined * PTR32 *)(piVar3[-1] + 0x70);
      }
      F_005840a0(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_005840a0(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0);
    }
    piVar3 = piVar3 + 0xe;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: FUN_00801d00 */
uint F_00801d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 4),param_1);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70))),param_1);
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    bVar1 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x70))),param_1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  if (*(int *)((int)this + 0x24) != 0) {
    bVar1 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x70))),param_1);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00801d50 */
uint F_00801d50(unsigned int gen_a0)
{
  GEN_ENTER(0x801d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  F_007a08e0((undefined *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
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
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return (uint)this;
}

/* ref: FUN_00801df0 */
uint F_00801df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  uint * puVar1;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  puVar1 = (uint *)((int)this + 0x38);
  do {
    this_00 = (int *)puVar1[-8];
    if (this_00 != (int *)0x0) {
      *puVar1 = uVar2;
      this_00[0x44] = (int)puVar1;
      F_00568380((undefined *)this_00[0x1c],param_2,param_3,*(undefined4 *)((int)this + 0x260),0,0);
      if (param_1 == uVar2) {
        F_0059dde0(this_00,1);
        local_8 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
      }
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 8);
  return local_8;
}

/* ref: FUN_00801e70 */
uint F_00801e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x18);
  local_8 = 8;
  do {
    iVar1 = *piVar3;
    uVar2 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x110) = 0;
      uVar2 = F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),param_1,0,*(undefined4 *)((int)this + 0x260),0);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: FUN_00801ec0 */
uint F_00801ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x801ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint in_ecx;
  uint uVar1;
  
  if (param_1 != 0) {
    in_ecx = F_00559c20(param_1);
    if (in_ecx != 0) {
      uVar1 = F_005613a0(in_ecx);
      if (uVar1 == 4) {
        return **(uint * PTR32 *)(in_ecx + 0x110);
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00801f00 */
uint F_00801f00(unsigned int gen_a0)
{
  GEN_ENTER(0x801f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_00801d50((undefined *)((int)this + 0x180));
  puVar1 = (undefined2 *)((int)this + 0x3e4);
  iVar3 = 0x27;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  puVar2 = (undefined4 *)((int)this + 0x544);
  iVar3 = 99;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2 = puVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined4 *)((int)this + 0x1508) = 0;
  *(undefined4 *)((int)this + 0x150c) = 0;
  *(undefined4 *)((int)this + 0x1510) = 0;
  *(undefined4 *)((int)this + 0x1514) = 0;
  *(undefined2 *)((int)this + 0x1518) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(undefined4 *)((int)this + 0x14e8) = 0;
  *(undefined4 *)((int)this + 0x14ec) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  *(undefined4 *)((int)this + 0x14f4) = 0;
  *(undefined4 *)((int)this + 0x14f8) = 0;
  *(undefined4 *)((int)this + 0x14fc) = 0;
  *(undefined4 *)((int)this + 0x1500) = 0;
  *(undefined4 *)((int)this + 0x1504) = 0;
  return (uint)this;
}

/* ref: FUN_00802020 */
uint F_00802020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 0;
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802060 */
uint F_00802060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x802060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * piVar2;
  
  F_00557670(param_2,0);
  if (param_1 == 9) {
    piVar2 = *(int * PTR32 *)((int)this + 0x20c);
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x208);
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2);
  *(undefined4 *)((int)this + 0x14e4) = 1;
  F_0059b390(this,*(undefined4 *)((int)this + 0x210),1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_008020f0 */
uint F_008020f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8020f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 2;
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802130 */
uint F_00802130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 3;
  F_0059b390(this,*(undefined4 *)((int)this + 0x1fc),1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_008021b0 */
uint F_008021b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8021b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar2;
  
  F_00557670(param_1,0);
  if (*(int *)((int)this + 0x1510) < 1000) {
    uVar2 = *(undefined4 *)((int)this + 0x208);
    *(undefined4 *)((int)this + 0x14e4) = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x20c);
    *(undefined4 *)((int)this + 0x14e4) = 2;
  }
  F_0059b390(this,uVar2,1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00802240 */
uint F_00802240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  short sVar2;
  short * psVar3;
  uint uVar4;
  int * in_ecx;
  uint * this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar4 = F_00557670(param_1,0);
  if (*(int *)(param_1 + 4) != 0) {
    in_ecx = (int *)F_00559c20(*(int *)(param_1 + 4));
    uVar4 = 0;
    if ((in_ecx != (int *)0x0) && (uVar4 = F_005613a0(in_ecx), uVar4 == 1)) {
      psVar3 = (short *)in_ecx[0x44];
      uVar4 = 0;
      if (psVar3 != (short *)0x0) {
        bVar1 = *(byte *)(psVar3 + 1);
        sVar2 = *psVar3;
        uVar7 = 0;
        uVar6 = 1;
        uVar4 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx);
        F_0059b340(this,uVar4,uVar6,uVar7);
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(uint *)(gen_frame + 0xc)) = (uint)bVar1 << 0x10 | (int)sVar2;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
        this_00 = &(*(uint *)(gen_frame + 0x18));
        iVar5 = 2;
        do {
          this_00 = this_00 + -2;
          uVar4 = F_005a2670(this_00);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00802320 */
uint F_00802320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x1fc) != 0) {
    F_0059b390(this,*(int *)((int)this + 0x1fc),1,0);
  }
  F_00557670(param_1,0);
  bVar1 = F_005a9130(this,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802360 */
uint F_00802360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x802360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x28 + 0x544);
  if ((undefined *)*param_2 != (undefined *)0x0) {
    F_0059d670((undefined *)*param_2,(-(uint)(*(char *)((int)puVar1 + 0xf) != '\0') & 3) + 0x11);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1[4]);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1 + 5);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,(uint)(*(char *)((int)puVar1 + 0xe) != '\0'));
    if (*(byte *)((int)puVar1 + 0xe) != 0) {
      uVar3 = (uint)*(byte *)((int)puVar1 + 0xe);
      uVar4 = 5;
      this_00 = (undefined *)F_0055dcb0();
      uVar3 = F_0055ba90(this_00,uVar3,uVar4);
      F_00584110(pvVar2,uVar3);
    }
  }
  uVar3 = F_00559c00(param_2[6]);
  if (uVar3 != 0) {
    pvVar2 = (undefined *)F_00559c20(uVar3);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 0xf) {
        F_00595190(pvVar2,*puVar1,0,0);
      }
    }
  }
  F_0059d640((undefined *)param_2[4],(uint)*(ushort *)((int)puVar1 + 10));
  uVar3 = F_0059d640((undefined *)param_2[5],(uint)*(ushort *)(puVar1 + 2));
  return uVar3;
}

/* ref: FUN_00802460 */
uint F_00802460(unsigned int gen_a0)
{
  GEN_ENTER(0x802460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x25c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)((int)this + 0x24c) != 0) {
    F_00406b30(*(int *)((int)this + 0x24c));
    *(undefined4 *)((int)this + 0x24c) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: FUN_008024b0 */
uint F_008024b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8024b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055e2f0(this,8);
  if (uVar2 == 0) {
    pvVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    pvVar3 = (undefined *)F_00559c20(uVar2);
    uVar2 = 0;
    if ((pvVar3 == (undefined *)0x0) || (uVar2 = F_005613a0(pvVar3), uVar2 != 9)) {
      pvVar3 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)((int)this + 0x180) = pvVar3;
  if (pvVar3 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7a1810));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
    if (*(int *)((int)this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x21,0,this,0,0);
    if (*(int *)((int)this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x24,0,this,0,0);
    bVar1 = F_005624c0(*(undefined * PTR32 *)((int)this + 0x180),1,0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00802580 */
byte F_00802580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    F_0056b630(this,0x18af0,7,0,9,0,0);
    if (*(char *)((int)this + 0xee3) != '\0') {
      *(undefined1 *)((int)this + 0xee3) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
    uVar2 = *(uint *)(param_2 + 8);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((int)this + 0xed8))) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar1 = *(ushort *)((int)this + uVar2 * 8 + 0x26c);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = (uint)uVar1 << 0x10 | uVar2;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 2;
      do {
        puVar4 = puVar4 + -2;
        F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
  }
  else if (param_1 == 1) {
    F_0056b630(this,0x18af0,7,0,9,0,0);
    iVar5 = *(int *)(param_2 + 8);
    if (((-1 < iVar5) && (iVar5 < *(int *)((int)this + 0xedc))) &&
       ((~*(byte *)((int)this + iVar5 * 0xc + 0x2b0) & 1) != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + (iVar5 * 3 + 0xab) * 4)));
      (*(undefined4 *)(gen_frame + 0x4)) = 5;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 2;
      do {
        puVar4 = puVar4 + -2;
        F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00802730 */
byte F_00802730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  short sVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)((int)this + 0xee2) == '\0') {
    *(undefined1 *)((int)this + 0xee2) = 1;
    uVar2 = F_0055dcb0();
    F_005aa060((undefined *)(uVar2 + 0x20c),0xe,0);
    uVar2 = F_0055dcb0();
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 3;
    uVar4 = 5;
    *(undefined1 *)(uVar2 + 0x21b) = 1;
    pvVar6 = this;
    pvVar3 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar3,uVar4,uVar5,pvVar6,uVar7,uVar8);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 3;
    uVar4 = 4;
    pvVar6 = this;
    pvVar3 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar3,uVar4,uVar5,pvVar6,uVar7,uVar8);
    sVar1 = param_2[1];
    *(float *)((int)this + 0x228) = (float)(int)*param_2;
    *(float *)((int)this + 0x22c) = (float)(int)sVar1;
  }
  return 1;
}

/* ref: FUN_008027d0 */
byte F_008027d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8027d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  
  if (*(char *)(param_1 + 0xee2) != '\0') {
    sVar3 = *(short *)(param_3 + 2);
    sVar4 = *(short *)param_3;
    fVar1 = *(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x228) = (float)(int)sVar4;
    fVar2 = *(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x22c) = (float)(int)sVar3;
    *(float *)(param_1 + 0x218) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x218) -
                (float10)(float)((float10)(int)sVar4 - (float10)fVar1))));
    *(float *)(param_1 + 0x21c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x21c) -
                (float10)(float)((float10)(int)sVar3 - (float10)fVar2))));
    F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    F_007ace70((undefined *)(param_1 + 0x1d8));
  }
  return 1;
}

/* ref: FUN_00802860 */
byte F_00802860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802860u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  short sVar1;
  double dVar2;
  byte bVar3;
  
  if (param_2 != 2) {
    return 1;
  }
  if (((*(short *)(param_3 + 4) != 0) || (*(short *)(param_3 + 6) != 0)) &&
     (bVar3 = F_0056c800(), bVar3 == 0)) {
    sVar1 = *(short *)(param_3 + 6);
    dVar2 = *(double *)&REFG(undefined, 0x1094878);
    if ((float10)((float)GEN_TOF(ABS((float10)(int)sVar1))) +
        (float10)((float)GEN_TOF(ABS((float10)(int)*(short *)(param_3 + 4)))) <
        (float10)*(double *)&REFG(undefined, 0x1088118)) {
      dVar2 = *(double *)&REFG(double, 0x10948e0);
    }
    *(float *)(param_1 + 0x218) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x218) +
                (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_3 + 4) * (float10)dVar2))))));
    *(float *)(param_1 + 0x21c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x21c) -
                (float10)(float)((float10)(int)sVar1 * (float10)dVar2))));
    F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    F_007ace70((undefined *)(param_1 + 0x1d8));
  }
  return 1;
}

/* ref: FUN_00802960 */
uint F_00802960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x802960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 0x10) != 0) {
    return *(uint *)((int)this + 0x188);
  }
  return *(uint *)((int)this + 0x18c);
}

/* ref: FUN_00802990 */
uint F_00802990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4)));
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00584110(this_00,*((undefined4 *)GEN_TOP(((int)this + (iVar1 >> 8 & 0xffffU) * 0xc + 0x2a8))));
  }
  return uVar2;
}

/* ref: FUN_008029d0 */
uint F_008029d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8029d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 8 & 0xffffU) * 0xc + 0x2a8)));
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00584110(this_00,*puVar1);
  }
  if ((undefined *)param_2[1] != (undefined *)0x0) {
    bVar2 = *(byte *)(puVar1 + 2);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
    if ((bVar2 & 8) == 0) {
      uVar3 = F_0059d670((undefined *)param_2[1],(-(uint)((bVar2 & 4) != 0) & 0x54) + 0x11);
      *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) | 8;
    }
  }
  return uVar3;
}

/* ref: FUN_00802a40 */
uint F_00802a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  int * this_00;
  uint uVar3;
  undefined * this_01;
  uint uVar4;
  int iVar5;
  int * piVar6;
  undefined1 * puVar7;
  
  iVar5 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x20) + 0xc3c)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x18)) = iVar5;
  uVar3 = F_00560760(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  if (0 < iVar5) {
    (*(int *)(gen_frame + 0x28)) = 0xc44;
    piVar6 = (int *)((int)this + 0xea8);
    (*(uint *)(gen_frame + 0x20)) = iVar5;
    do {
      this_00 = (int *)piVar6[-0x33f];
      if (this_00 != (int *)0x0) {
        *piVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + *(int *)((int)param_1 + 0x20))));
        this_01 = (undefined *)F_00561550(this_00,5);
        if (this_01 != (undefined *)0x0) {
          F_00591c00(this_01,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 4 + *(int *)((int)param_1 + 0x20)))),0);
        }
        F_0055a300((undefined *)this_00[0x1c],1);
        if (*piVar6 < 1) {
          uVar3 = F_0055dcb0();
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
          uVar3 = F_00596b10((undefined *)((*(uint *)(gen_frame + 0x1c)) + 0xe0),uVar3);
        }
        else {
          bVar2 = *(byte *)((int)this + 0x13a);
          (*(int *)(gen_frame + 0x10)) = *piVar6;
          uVar3 = F_0055dcb0();
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          puVar7 = ((undefined1 *)(gen_frame + 0xc));
          uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
          uVar3 = F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x1c)) + 0xe0),4,(uint)bVar2,uVar3,puVar7);
          this = (*(undefined * PTR32 *)(gen_frame + 0x24));
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 8;
      piVar6 = piVar6 + 1;
      iVar1 = (*(uint *)(gen_frame + 0x20)) + -1;
      (*(uint *)(gen_frame + 0x20)) = iVar1;
      iVar5 = (*(int *)(gen_frame + 0x18));
    } while (iVar1 != 0);
  }
  if (iVar5 < 10) {
    param_1 = (int *)((int)this + iVar5 * 4 + 0x1ac);
    uVar3 = 10 - iVar5;
    (*(uint *)(gen_frame + 0x20)) = uVar3;
    do {
      piVar6 = (int *)*param_1;
      if (piVar6 != (int *)0x0) {
        F_0055a300((undefined *)piVar6[0x1c],0);
        uVar3 = F_0055dcb0();
        uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6);
        uVar3 = F_00596b10((undefined *)(uVar3 + 0xe0),uVar4);
      }
      param_1 = param_1 + 1;
      uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
    } while (uVar4 != 0);
  }
  return uVar3;
}

/* ref: FUN_00802ba0 */
uint F_00802ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_00592ee0(*(undefined * PTR32 *)((int)this + 0x248),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x438))));
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_00592fc0(*(undefined * PTR32 *)((int)this + 0x248),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x43c))),
                 *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc98))),
                 (uint)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc9c))) != 0));
  }
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xca0))) / (float10)REFG(double, 0x10944b8))));
  fVar13 = (float10)(*(float *)(gen_frame + 0x2c));
  if (fVar13 < (float10)1) {
    (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    fVar13 = (float10)REFG(float, 0x1087f04);
  }
  bVar12 = GEN_ISNAN((float10)*(float *)((int)this + 0x214)) || GEN_ISNAN(fVar13);
  if (bVar12 == (bVar12 || (float10)*(float *)((int)this + 0x214) == fVar13)) {
    *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x2c));
    *(float *)((int)this + 500) = (*(float *)(gen_frame + 0x2c));
    if (*(int *)((int)this + 0x248) != 0) {
      F_0056f070(*(int *)((int)this + 0x248),(float)fVar13);
    }
  }
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xcb0)));
  iVar8 = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  uVar6 = uVar1;
  uVar7 = (*(uint *)(gen_frame + 0x34));
  if (0 < (int)uVar1) {
    (*(int *)(gen_frame + 0x24)) = 0x440;
    (*(int *)(gen_frame + 0x14)) = 0xcb4;
    do {
      uVar6 = *(uint *)((int)this + 0x24c);
      if ((uVar6 == 0) || (*(ushort *)((int)this + 0x250) <= (*(uint *)(gen_frame + 0x34)))) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(iVar8 + uVar6);
      }
      uVar7 = (*(uint *)(gen_frame + 0x34)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar8 + 0x1c;
      if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
        uVar6 = *(uint *)(param_1 + 0x20);
        uVar2 = *(uint *)((*(int *)(gen_frame + 0x14)) + uVar6);
        uVar15 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 8 + uVar6);
        uVar17 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0xc + uVar6);
        uVar9 = (int)uVar2 >> 0x10 & 0xffff;
        iVar3 = *(int *)((*(int *)(gen_frame + 0x14)) + 0x10 + uVar6);
        uVar19 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 4 + uVar6);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        if (0 < iVar3) {
          (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + *(int *)(param_2 + 0x20))));
          *(short *)(piVar11 + 5) = (short)uVar19;
          (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)uVar15;
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 4;
          piVar11[3] = 0;
          *(undefined2 *)((int)piVar11 + 0x16) = (*(undefined2 *)(gen_frame + 0x20));
          pvVar5 = (undefined *)F_00564700(*piVar11);
          F_0055a300(pvVar5,1);
          F_00568350(pvVar5,(float)(float10)0);
          F_005957c0((undefined *)*piVar11,iVar3);
          uVar18 = 0;
          uVar16 = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)(longlong)TRUNC((float10)uVar9 / (float10)(*(float *)(gen_frame + 0x2c)));
          uVar14 = 0;
          uVar6 = F_0055dcb0();
          F_007aca30(piVar11,uVar6,uVar14,(*(undefined4 *)(gen_frame + 0x4)),uVar16,uVar18);
          uVar10 = (uint)(piVar11[1] != 0);
          uVar6 = F_00564700(*piVar11);
          F_0055a3c0(uVar6,uVar10);
          uVar6 = uVar1;
          if ((int)uVar1 <= (int)uVar7) break;
          uVar6 = *(uint *)((int)this + 0x24c);
          if ((uVar6 == 0) || (*(ushort *)((int)this + 0x250) <= uVar7)) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)((*(int *)(gen_frame + 0x28)) + uVar6);
          }
          (*(int *)(gen_frame + 0x28)) = iVar8 + 0x38;
          uVar7 = (*(uint *)(gen_frame + 0x34)) + 2;
        }
        (*(uint *)(gen_frame + 0x34)) = uVar7;
        uVar7 = (*(uint *)(gen_frame + 0x34));
        if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
          F_007ac9a0(piVar11,uVar2 & 0xffff,uVar17,uVar19,uVar15,(float)(float10)1);
          uVar19 = 1;
          uVar17 = 0x800;
          uVar15 = 0;
          uVar7 = F_0055dcb0();
          uVar6 = F_007aca30(piVar11,uVar7,(*(undefined4 *)(gen_frame + 0x1c)),uVar15,uVar17,uVar19);
          uVar7 = (*(uint *)(gen_frame + 0x34));
          if (uVar9 == 0x1000) {
            uVar6 = F_00564700(*piVar11);
            *(uint *)((int)this + 0x1dc) = uVar6;
            (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
          }
        }
      }
      (*(uint *)(gen_frame + 0x34)) = uVar7;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x14;
      iVar8 = (*(int *)(gen_frame + 0x28));
      uVar7 = (*(uint *)(gen_frame + 0x34));
    } while ((int)(*(uint *)(gen_frame + 0x34)) < (int)uVar1);
  }
  (*(uint *)(gen_frame + 0x34)) = uVar7;
  if (*(undefined * PTR32 *)((int)this + 0x1dc) != (undefined *)0x0) {
    bVar4 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc),(*(uint *)(gen_frame + 0xc)));
    uVar6 = CONCAT31(extraout_var,bVar4);
  }
  if (*(undefined * PTR32 *)((int)this + 0x1e0) != (undefined *)0x0) {
    bVar4 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1e0),(*(uint *)(gen_frame + 0xc)));
    uVar6 = CONCAT31(extraout_var_00,bVar4);
  }
  if ((int)(*(uint *)(gen_frame + 0x34)) < 0x51) {
    iVar8 = (*(uint *)(gen_frame + 0x34)) * 0x1c;
    uVar7 = (*(uint *)(gen_frame + 0x34));
    do {
      uVar6 = *(uint *)((int)this + 0x24c);
      if ((uVar6 != 0) && (uVar7 < *(ushort *)((int)this + 0x250))) {
        piVar11 = (int *)(uVar6 + iVar8);
        uVar6 = 0;
        if (piVar11 != (int *)0x0) {
          iVar3 = *piVar11;
          uVar6 = 0;
          if (iVar3 != 0) {
            uVar15 = 0;
            pvVar5 = (undefined *)F_00564700(iVar3);
            bVar4 = F_0055a300(pvVar5,uVar15);
            uVar6 = CONCAT31(extraout_var_01,bVar4);
          }
        }
      }
      iVar8 = iVar8 + 0x1c;
      uVar7 = uVar7 + 1;
    } while (iVar8 < 0x8dc);
  }
  return uVar6;
}

/* ref: FUN_00802f10 */
byte F_00802f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802f10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(iVar1 + 0xca8);
  iVar3 = *(int *)(iVar1 + 0xcac);
  if (*(int *)(iVar1 + 0xca4) == 2) {
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
    *(float *)(param_1 + 0x230) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x214) * (float10)(float)((float10)iVar2 / fVar5))));
    *(float *)(param_1 + 0x234) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x214) * (float10)(float)((float10)iVar3 / fVar5))));
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x234);
    bVar4 = F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    return bVar4;
  }
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x230);
  *(float *)(param_1 + 0x218) = (float)iVar2;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x234);
  *(float *)(param_1 + 0x21c) = (float)iVar3;
  bVar4 = F_007ad100((undefined *)(param_1 + 0x1d8));
  return bVar4;
}

/* ref: FUN_00803000 */
unsigned int F_00803000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803000u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  if (*(int *)(in_ecx + 0x1dc) != 0) {
    uVar3 = F_0055a2d0(*(int *)(in_ecx + 0x1dc));
    if ((char)uVar3 != '\0') {
      iVar2 = *(int *)(param_2 + 0x20);
      iVar1 = *(int *)(iVar2 + 0x1314);
      fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
      *(float *)(in_ecx + 0x230) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x214) *
                  (float10)((float)GEN_TOF(((float10)*(int *)(iVar2 + 0x1310) / fVar4))))));
      *(float *)(in_ecx + 0x234) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x214) * (float10)(float)((float10)iVar1 / fVar4))));
      iVar1 = *(int *)(iVar2 + 0x130c);
      *(float *)(in_ecx + 0x1fc) = (float)*(int *)(iVar2 + 0x1308);
      *(float *)(in_ecx + 0x200) = (float)iVar1;
      *(undefined4 *)(in_ecx + 0x1e4) = *(undefined4 *)(in_ecx + 0x230);
      *(undefined4 *)(in_ecx + 0x1e8) = *(undefined4 *)(in_ecx + 0x234);
    }
  }
  return 0;
}

/* ref: FUN_008030c0 */
unsigned int F_008030c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8030c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x20))[0] = 0;
  ((undefined4 *)(gen_frame + 0x20))[1] = 0;
  ((undefined4 *)(gen_frame + 0x20))[2] = 0;
  ((undefined4 *)(gen_frame + 0x20))[3] = 0;
  ((undefined4 *)(gen_frame + 0x20))[4] = 0;
  ((undefined4 *)(gen_frame + 0x20))[5] = 0;
  ((undefined4 *)(gen_frame + 0x20))[6] = 0;
  ((undefined4 *)(gen_frame + 0x20))[0] = 2;
  ((undefined4 *)(gen_frame + 0x20))[1] = 3;
  ((undefined4 *)(gen_frame + 0x20))[2] = 4;
  ((undefined4 *)(gen_frame + 0x20))[3] = 5;
  ((undefined4 *)(gen_frame + 0x20))[4] = 6;
  puVar2 = ((undefined4 *)(gen_frame + 0x20));
  puVar3 = ((undefined4 *)(gen_frame + 0x4));
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_005aefb0(*(undefined * PTR32 *)((int)this + 0x248),0,((undefined4 *)(gen_frame + 0x4)),0x51);
  }
  *(undefined2 *)((int)this + 0x210) = 0x51;
  F_007acd20((int)this + 0x1d8,0,0x51,0);
  return 0;
}

/* ref: Client::UI2::AddonFishGuide::vf2 */
uint F_00803150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x803150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x11) {
    if (param_2 < 1000) {
      return param_2;
    }
    bVar1 = F_007a1e40(this,param_2 - 1000);
    uVar2 = CONCAT31(extraout_var_01,bVar1);
  }
  else {
    if (uVar2 != 0x17) {
      return uVar2;
    }
    if (param_2 < 2000) {
      if (param_2 < 1000) {
        F_005a9130(this,param_2);
        uVar2 = F_00557670(param_3,0);
        return uVar2;
      }
      bVar1 = F_007a1ed0(this,param_2 - 1000);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
    else {
      bVar1 = F_007a1d50(this,param_2 - 2000);
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
  }
  if ((char)uVar2 != '\0') {
    uVar2 = F_00557670(param_3,0);
  }
  return uVar2;
}

/* ref: FUN_008031d0 */
uint F_008031d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8031d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * local_8;
  
  puVar1 = (undefined4 *)((int)this + 0x188);
  iVar2 = 0;
  local_8 = puVar1;
  do {
    this_00 = (int *)*local_8;
    if (this_00 != (int *)0x0) {
      puVar1 = (undefined4 *)F_0055a350(this_00[0x1c]);
      if ((char)puVar1 == '\0') {
        ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,1);
        puVar1 = (undefined4 *)F_00568380((undefined *)this_00[0x1c],0x17,iVar2 + 2000,this,0,0);
        if (iVar2 == *(int *)((int)this + 0x304)) {
          puVar1 = (undefined4 *)F_0059dde0(this_00,1);
        }
      }
    }
    local_8 = local_8 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return (uint)puVar1;
}

/* ref: FUN_00803240 */
uint F_00803240(unsigned int gen_a0)
{
  GEN_ENTER(0x803240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_c;
  int * local_8;
  
  piVar2 = (int *)((int)this + 0x1a8);
  iVar3 = 1000;
  local_c = 0x19;
  local_8 = piVar2;
  do {
    piVar1 = (int *)*local_8;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)F_0055a350(piVar1[0x1c]);
      if ((char)piVar2 == '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        uVar8 = 0;
        uVar7 = 0;
        uVar4 = 0x11;
        iVar5 = iVar3;
        pvVar6 = this;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
        F_00568380(this_00,uVar4,iVar5,pvVar6,uVar7,uVar8);
        piVar2 = (int *)F_00568380((undefined *)piVar1[0x1c],0x17,iVar3,this,0,0);
      }
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return (uint)piVar2;
}

/* ref: FUN_008032c0 */
unsigned int F_008032c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8032c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  *(undefined4 *)((int)this + 0x304) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4)));
  if (*(char *)((int)this + 0x308) == '\0') {
    *(undefined1 *)((int)this + 0x308) = 1;
    F_008031d0(this);
  }
  if (*(char *)((int)this + 0x309) == '\0') {
    *(undefined1 *)((int)this + 0x309) = 1;
    F_00803240(this);
  }
  (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)));
  F_00560760(((undefined1 *)(gen_frame + 0x8)));
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0xc;
  piVar4 = (int *)((int)this + 0x230);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)this + 0x1a8);
  do {
    piVar1 = (int *)*(*(int * PTR32 *)(gen_frame + 0x24));
    *piVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *(int *)(param_1 + 0x20))));
    piVar4[1] = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8 + *(int *)(param_1 + 0x20))));
    if (piVar1 != (int *)0x0) {
      if ((*(int *)(gen_frame + 0x1c)) == (*(int *)(gen_frame + 0x28))) {
        uVar6 = 0;
        uVar5 = 1;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
        F_0059b340(this,uVar2,uVar5,uVar6);
      }
      if (*piVar4 < 1) {
        uVar2 = F_0055dcb0();
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
        F_00596b10((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),uVar2);
      }
      else {
        (*(int *)(gen_frame + 0xc)) = *piVar4;
        (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)((int)this + 0x13a);
        uVar2 = F_0055dcb0();
        puVar7 = ((undefined1 *)(gen_frame + 0x8));
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
        F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),4,(*(uint *)(gen_frame + 0x18)),uVar2,puVar7);
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
    iVar3 = (*(int *)(gen_frame + 0x28)) + 1;
    piVar4 = piVar4 + 2;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0xc;
    (*(int *)(gen_frame + 0x28)) = iVar3;
  } while (iVar3 < 0x19);
  return 0;
}

/* ref: FUN_00803400 */
uint F_00803400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x803400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pvVar3 = (undefined *)(param_1 * 9);
  puVar1 = (undefined4 *)((int)this + param_1 * 0x24 + 0x184);
  if (*(int *)((int)this + param_1 * 0x24 + 0x194) != 0) {
    pvVar3 = (undefined *)F_00559ba0(*param_2);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,*puVar1);
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,puVar1[1]);
    }
    if (*(char *)((int)puVar1 + 0x1f) == '\0') {
      pvVar3 = (undefined *)F_00559c00(param_2[2]);
      if ((pvVar3 != (undefined *)0x0) && (0 < (int)puVar1[5])) {
        pvVar3 = (undefined *)F_005bd980(pvVar3,0xf);
        if (pvVar3 != (undefined *)0x0) {
          F_00595190(pvVar3,puVar1[5],0,0);
        }
      }
      *(undefined1 *)((int)puVar1 + 0x1f) = 1;
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[4]);
    if (pvVar3 != (undefined *)0x0) {
      F_0055a300(pvVar3,(uint)(*(char *)(puVar1 + 7) != '\0'));
      if (*(byte *)(puVar1 + 7) != 0) {
        uVar5 = (uint)*(byte *)(puVar1 + 7);
        uVar6 = 5;
        pvVar4 = (undefined *)F_0055dcb0();
        uVar5 = F_0055ba90(pvVar4,uVar5,uVar6);
        F_00584110(pvVar3,uVar5);
      }
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[3]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,puVar1[2]);
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[5]);
    pvVar3 = (undefined *)0x0;
    if (pvVar4 != (undefined *)0x0) {
      pvVar3 = (undefined *)F_00584110(pvVar4,puVar1[3]);
    }
    if (*(char *)(puVar1 + 8) == '\0') {
      pvVar3 = (undefined *)F_00559b90(param_2[6]);
      if ((pvVar3 != (undefined *)0x0) && (0 < (int)puVar1[6])) {
        pvVar3 = (undefined *)F_00591c00(pvVar3,puVar1[6],(uint)*(byte *)((int)this + 0x25c));
      }
      *(undefined1 *)(puVar1 + 8) = 1;
    }
    if (*(char *)((int)puVar1 + 0x21) == '\0') {
      if ((puVar1[4] != 0) && (pvVar4 = (undefined *)param_2[7], pvVar4 != (undefined *)0x0)) {
        bVar2 = *(byte *)((int)puVar1 + 0x1d);
        pvVar3 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar3) >> 8),bVar2)));
        if (bVar2 < 6) {
          (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = REFP(0x00680067);
          (*(undefined4 *)(gen_frame + 0x10)) = 0x650066;
          (*(undefined4 *)(gen_frame + 0x14)) = 0x6a0069;
          pvVar3 = (undefined *)F_0059d670(pvVar4,(uint)*(ushort *)((int)&(*(undefined1 * PTR32 *)(gen_frame + 0xc)) + (uint)bVar2 * 2));
        }
      }
      *(undefined1 *)((int)puVar1 + 0x21) = 1;
    }
  }
  if (*(char *)((int)puVar1 + 0x1e) == '\0') {
    pvVar3 = (undefined *)0x0;
    if (param_3 != 0) {
      pvVar3 = (undefined *)F_0059d670(*(undefined * PTR32 *)(param_3 + 0x6c),
                                    (-(uint)(puVar1[4] != 0) & 0xffffffac) + 0x65);
    }
    *(undefined1 *)((int)puVar1 + 0x1e) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)pvVar3;
}

/* ref: FUN_008035c0 */
uint F_008035c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8035c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cab04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[4])REFP(0x10caaf0));
  F_00580ea0((undefined *)((int)this + 0x18c));
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x218);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined2 *)((int)this + 0x736) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00560e80((undefined *)((int)this + 0x18c),this);
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinder::vf47 */
unsigned int F_00803670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_007a2690(this,*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

/* ref: FUN_00803690 */
uint F_00803690(unsigned int gen_a0)
{
  GEN_ENTER(0x803690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x1c4);
  if ((*(byte *)(uVar3 + 0x2c) & 1) != 0) {
    if (*(int *)((int)this + 0x724) != 0) {
      F_00560f40(uVar3,0xa1,(int)this + 0x218);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) + 0x120)));
    *puVar1 = *puVar1 | 0x400;
    in_ecx = 0;
    if (*(int *)((int)this + 0x1c8) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x70)));
    }
    uVar3 = F_0055a2d0(in_ecx);
    if ((char)uVar3 == '\0') {
      uVar3 = F_0055dcb0();
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
    *(uint *)(uVar3 + 0x120) = *(uint *)(uVar3 + 0x120) & 0xfffffbff;
  }
  return uVar3;
}

/* ref: FUN_00803760 */
uint F_00803760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x803760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_00803790 */
uint F_00803790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x803790u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  int iVar4;
  
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8)));
    (*(undefined2 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x97ff;
    F_0055e430((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),((undefined2 *)(gen_frame + 0x18)),uVar3);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (short)(*(undefined4 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((short)(*(undefined4 *)&gen_args[1]),0x4001);
    (*(undefined2 *)(gen_frame + 0x10)) = ((undefined2 *)(gen_frame + 0x18))[0];
    F_0056b6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8)));
    F_0055e430((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),((undefined2 *)(gen_frame + 0x18)),iVar4);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar4 + 0x70);
    }
    uVar2 = F_0055a020(uVar3);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (short)(*(undefined4 *)&gen_args[1]) + uVar2;
    (*(undefined2 *)(gen_frame + 0x10)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x14)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((short)(*(undefined4 *)&gen_args[1]) + uVar2,0x4002);
    F_0056b6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)));
  }
  iVar4 = 0x18ad3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) == 5) {
    iVar4 = (-(uint)(*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x736))) != '\0') & 0x25) + 0x18ab1;
  }
  uVar3 = 0;
  in_ecx = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x2a);
  uVar2 = F_0055a020(in_ecx);
  bVar1 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),iVar4,6,0,7,(uint)(uVar2 >> 1),uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_008038b0 */
uint F_008038b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8038b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return (int)*(char *)(*param_1 + 3);
}

/* ref: FUN_008038c0 */
uint F_008038c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8038c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*param_1 + 8) & 1;
}

/* ref: FUN_008038e0 */
uint F_008038e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8038e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*(char *)(in_ecx + 0x736) != '\0') && ((*(byte *)(*param_2 + 8) & 4) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI2::AddonContentsFinder::vf60 */
byte F_00803910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 in_ecx;
  uint uVar4;
  int iVar5;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (this[0x736] == (undefined1)0x0) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x720);
  iVar5 = iVar1;
  if (param_1 == 0xf) {
    if ((char)param_2 == '\0') {
      if (iVar1 < 4) goto LAB_00803946;
      iVar5 = 0;
    }
    else if (iVar1 < 4) {
LAB_00803946: ;
      iVar5 = iVar1 + 1;
    }
  }
  else {
    if (param_1 != 0x10) goto LAB_00803966;
    if ((char)param_2 == '\0') {
      if (0 < iVar1) goto LAB_00803961;
      iVar5 = 4;
    }
    else if (0 < iVar1) {
LAB_00803961: ;
      iVar5 = iVar1 + -1;
    }
  }
  (*(byte *)(gen_frame + 0xb)) = 1;
LAB_00803966: ;
  bVar3 = (*(byte *)(gen_frame + 0xb));
  if (iVar5 != iVar1) {
    if (*(int *)(this + iVar5 * 4 + 0x1e8) == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + iVar5 * 4 + 0x1e8) + 0x70)));
    }
    uVar4 = F_0055a350(in_ecx);
    bVar3 = (*(byte *)(gen_frame + 0xb));
    if ((char)uVar4 != '\0') {
      uVar4 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x0)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      piVar2 = *(int * PTR32 *)(this + iVar5 * 4 + 0x1e8);
      uVar4 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar4 + 0xc0);
      F_007a25c0(this,iVar5);
      bVar3 = (*(byte *)(gen_frame + 0xb));
    }
  }
  return bVar3;
}

/* ref: FUN_008039f0 */
uint F_008039f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8039f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(int *)*param_1 >> 8 & 0xffff;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf46 */
byte F_00803a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  int iVar5;
  byte * pbVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  undefined4 * puVar11;
  int iVar12;
  undefined4 * puVar13;
  
  ((uint *)(gen_frame + 0x20))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar1 = param_2[0x40];
  ((uint *)(gen_frame + 0x20))[3] = 0x66;
  ((uint *)(gen_frame + 0x20))[4] = 0x66;
  ((uint *)(gen_frame + 0x20))[5] = 0x66;
  (*(byte * PTR32 *)(gen_frame + 0x18)) = param_2;
  ((uint *)(gen_frame + 0x20))[0] = 0x67;
  ((uint *)(gen_frame + 0x20))[1] = 0x67;
  ((uint *)(gen_frame + 0x20))[2] = 0x67;
  if ((bVar1 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x1c)) = *(uint *)(param_2 + 0x44);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
  }
  if ((uVar2 & 1) != 0) {
    if ((*(uint *)(gen_frame + 0x1c)) == 0) {
      if ((param_2[0x78] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x7c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),(uint)((byte)(uVar2 >> 1) & 1));
    }
    pbVar6 = param_2;
    if (((*(uint *)(gen_frame + 0x1c)) & 1) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x14)) = param_2 + 100;
      pAVar7 = this + 0x18c;
      (*(uint *)(gen_frame + 0x10)) = 0;
      do {
        if (((*(byte * PTR32 *)(gen_frame + 0x14))[-0x1c] & 0xf) == 0) {
          (*(int *)(gen_frame + 0xc)) = 0;
        }
        else {
          (*(int *)(gen_frame + 0xc)) = *(int *)((*(byte * PTR32 *)(gen_frame + 0x14)) + -0x18);
        }
        if (((*(byte * PTR32 *)(gen_frame + 0x14))[-4] & 0xf) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(byte * PTR32 *)(gen_frame + 0x14));
        }
        iVar10 = (*(int *)(gen_frame + 0xc));
        iVar12 = iVar5;
        pvVar3 = (undefined *)F_0055dcb0();
        uVar2 = F_005b03e0(pvVar3,iVar10,iVar12);
        F_00584110(*(undefined * PTR32 *)(pAVar7 + -0xc),uVar2);
        if ((*(int *)(gen_frame + 0xc)) == iVar5) {
          uVar4 = *(undefined4 *)((int)((uint *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x10)) + 0xc);
        }
        else {
          uVar4 = *(undefined4 *)((int)((uint *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x10)));
        }
        F_0059d670(*(undefined * PTR32 *)(*(int *)pAVar7 + 0x6c),uVar4);
        pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x18));
        (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x14)) + 8;
        uVar2 = (*(uint *)(gen_frame + 0x10)) + 4;
        pAVar7 = pAVar7 + 4;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
      } while (uVar2 < 0xc);
      if (((*(byte * PTR32 *)(gen_frame + 0x18))[0x78] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 0x7c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x198),(uint)((byte)uVar2 & 1));
      F_0055a300(*(undefined * PTR32 *)(this + 0x19c),(uint)((byte)(uVar2 >> 1) & 1));
      bVar9 = (*(uint *)(pbVar6 + 0x80) & 0xf) == 8;
      (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar9;
      (*(byte * PTR32 *)(gen_frame + 0x14)) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar9)));
      if (bVar9) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1a0),*(undefined4 *)(pbVar6 + 0x84));
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a0),(*(byte * PTR32 *)(gen_frame + 0x14)));
      pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x18));
    }
    if (((*(uint *)(gen_frame + 0x1c)) & 2) != 0) {
      if ((pbVar6[0x88] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(pbVar6 + 0x8c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a4),(uint)((byte)uVar2 & 1));
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a8),(uint)((byte)(uVar2 >> 1) & 1));
      pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x18));
      bVar9 = (*(uint *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 0x90) & 0xf) == 8;
      (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0x18)) + 0)) = bVar9;
      (*(byte * PTR32 *)(gen_frame + 0x18)) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)(gen_frame + 0x18)), 1, 3),bVar9)));
      if (bVar9) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1ac),*(undefined4 *)(pbVar6 + 0x94));
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1ac),(*(byte * PTR32 *)(gen_frame + 0x18)));
      if (((byte)*(undefined4 *)(pbVar6 + 0x98) & 0xf) == 8) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*(undefined4 *)(pbVar6 + 0x9c));
      }
    }
  }
  uVar4 = 0x68;
  uVar8 = 0x26;
  if (((byte)(*(uint *)(gen_frame + 0x1c)) & 3) == 3) {
    uVar4 = 0x67;
    uVar8 = 0x25;
  }
  else if (((*(uint *)(gen_frame + 0x1c)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x1c)) & 2) != 0) {
      uVar4 = 0x66;
      uVar8 = 0x24;
    }
  }
  else {
    uVar4 = 0x65;
    uVar8 = 0x23;
  }
  F_0059d6a0(this,uVar4,1,0);
  puVar13 = &(*(undefined4 *)(gen_frame + 0x4));
  puVar11 = &(*(undefined4 *)(gen_frame + 0x8));
  pvVar3 = (undefined *)F_0055e2f0(this,uVar8);
  F_0055a000(pvVar3,puVar11,puVar13);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
  F_00c47745(((uint *)(gen_frame + 0x20))[6] ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf47 */
uint F_00803cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if (((uVar2 != 5) && (uVar2 != 4)) || (((byte)this[0xf8] & 0x40) != 0)) {
    iVar1 = *(int *)(param_1 + 0xd8);
    uVar2 = *(uint *)(param_2 + 200);
    if (((iVar1 != 0) && (uVar2 != 0)) &&
       ((*(undefined * PTR32 *)(this + 0x1b8) != (undefined *)0x0 && (*(int *)(this + 0x1bc) != 0)))) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1b8),**(undefined4 * PTR32 *)(uVar2 + 0x20));
      uVar2 = F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x1bc) + 4))),**(undefined4 * PTR32 *)(iVar1 + 0x20),0,6)
      ;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf47 */
unsigned int F_00803d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((((byte)this[0xf9] & 1) != 0) &&
     (((uVar4 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar4 != 5 && (uVar4 != 4)) ||
      (((byte)this[0xf8] & 0x40) != 0)))) {
    iVar1 = *(int *)(param_2 + 200);
    if (((*(int *)(param_2 + 8) != 0) && (*(int *)(param_1 + 0xd8) != 0)) && (iVar1 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 8) + 0x20))) + 0xf4)));
      uVar3 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xd8) + 0x20)));
      F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x188) + 4))),uVar3,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x18c) + 4))),uVar3,0,6);
      F_00584110(*(undefined * PTR32 *)(this + 0x184),uVar2);
      F_00584110(*(undefined * PTR32 *)(this + 0x180),**(undefined4 * PTR32 *)(iVar1 + 0x20));
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf46 */
byte F_00803e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(this + 0x198) != 0) {
    piVar1 = (int *)(param_2 + 100);
    pAVar4 = this + 0x18c;
    do {
      if ((*(byte *)(piVar1 + -7) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = piVar1[-6];
      }
      if ((*(byte *)(piVar1 + -1) & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      iVar7 = iVar6;
      iVar8 = iVar5;
      pvVar2 = (undefined *)F_0055dcb0();
      uVar3 = F_005b03e0(pvVar2,iVar7,iVar8);
      F_00584110(*(undefined * PTR32 *)(pAVar4 + -0xc),uVar3);
      if (iVar6 == iVar5) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c);
        uVar9 = 0x65;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c);
        uVar9 = 0x66;
      }
      F_0059d670(pvVar2,uVar9);
      piVar1 = piVar1 + 2;
      local_8 = local_8 + 1;
      pAVar4 = pAVar4 + 4;
    } while (local_8 < *(uint *)(this + 0x198));
  }
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf46 */
byte F_00803ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  undefined * pAVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  ((uint *)(gen_frame + 0x10))[3] = 0x67;
  ((uint *)(gen_frame + 0x10))[4] = 0x66;
  ((uint *)(gen_frame + 0x10))[5] = 0x65;
  if (param_1 == 8) {
    uVar6 = 0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    pAVar4 = this + 0x188;
    puVar3 = (uint *)(param_2 + 0x24);
    do {
      if ((puVar3[-7] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar3[-6];
      }
      if (((puVar3[-1] & 0xf) != 0) && (uVar7 = *puVar3, uVar2 < uVar7)) {
        pvVar1 = (undefined *)F_0055dcb0();
        uVar2 = F_005b03e0(pvVar1,uVar2,uVar7);
        pvVar1 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar4,2);
        F_00584110(pvVar1,uVar2);
        F_0059d670(*(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c),((uint *)(gen_frame + 0x10))[(int)(uVar6)]);
        pvVar1 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_0055a300(pvVar1,1);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        pAVar4 = pAVar4 + 4;
      }
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar6 < 3);
    if ((*(uint *)(gen_frame + 0xc)) < 3) {
      pAVar4 = this + (*(uint *)(gen_frame + 0xc)) * 4 + 0x188;
      iVar5 = 3 - (*(uint *)(gen_frame + 0xc));
      do {
        if (*(int *)pAVar4 == 0) {
          pvVar1 = (undefined *)0x0;
        }
        else {
          pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_0055a300(pvVar1,0);
        pAVar4 = pAVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((*(uint *)(gen_frame + 0xc)) != 0) {
      uVar6 = ((uint *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)) + 2)];
      pvVar1 = (undefined *)F_0055e2f0(this,4);
      F_0059d670(pvVar1,uVar6);
    }
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x3c);
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x180),(uint)(iVar5 != 0));
    F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::AddonMaterialize::vf37 */
uint F_00804030(unsigned int gen_a0)
{
  GEN_ENTER(0x804030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,0,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
  }
  uVar1 = F_0055dcb0();
  F_00594d90((undefined *)(uVar1 + 0xe0),0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_008040d0 */
uint F_008040d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8040d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x6a38));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf37 */
uint F_00804110(unsigned int gen_a0)
{
  GEN_ENTER(0x804110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x18c) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0xffffffff,this,0);
  }
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf46 */
byte F_00804180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar2);
    if (((param_2[8] & 0xf) != 0) && (iVar5 = *(int *)(param_2 + 0xc), iVar5 != 0)) {
      if ((param_2[0x28] & 0xf) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x2c);
      }
      F_00561860(*(undefined * PTR32 *)(this + 0x184),(uint)(iVar3 != 0));
      if ((param_2[0x30] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x34);
      }
      F_005a03c0(*(undefined * PTR32 *)(this + 0x184),uVar2);
      F_00595190(*(undefined * PTR32 *)(this + 0x184),iVar5,0,0);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0x24);
    }
    uVar6 = (uint)param_2 & 0xf;
    iVar5 = uVar6 + 0x65;
    this_00 = (undefined *)F_0055e2f0(this,3);
    F_0059d670(this_00,iVar5);
    iVar5 = 0;
    if (uVar6 != 0) {
      bVar1 = 8;
      do {
        uVar4 = F_0055e2f0(this,iVar5 + 7);
        uVar4 = F_00559c20(uVar4);
        iVar3 = 0x6a;
        if ((int)((uint)((int)(uintptr_t)param_2) >> 4 & 0xf) <= iVar5) {
          iVar3 = 0x70;
        }
        F_0059d670(*(undefined * PTR32 *)(uVar4 + 0x6c),iVar3 - ((uint)((int)(uintptr_t)param_2) >> (bVar1 & 0x1f) & 0xf));
        bVar1 = bVar1 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar6);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonMateriaAttach::vf44 */
uint F_008042b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8042b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int * in_ecx;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined * pAVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar11 = 2;
  uVar10 = 0x21;
  pAVar12 = this;
  pvVar2 = (undefined *)F_0055e2f0(this,4);
  F_00568380(pvVar2,uVar10,uVar11,pAVar12,uVar13,uVar14);
  pvVar2 = (undefined *)F_0055e2f0(this,10);
  F_00568380(pvVar2,0x21,0,this,0,0);
  F_00568380(pvVar2,0x1f,0,this,0,0);
  F_00568380(pvVar2,0x20,0,this,0,0);
  pvVar2 = (undefined *)F_0055e2f0(this,0x13);
  F_00568380(pvVar2,0x21,1,this,0,0);
  F_00568380(pvVar2,0x25,1,this,0,0);
  F_00568380(pvVar2,0x1f,1,this,0,0);
  F_00568380(pvVar2,0x20,1,this,0,0);
  if ((*param_2 & 0xf) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)param_2[1];
  }
  pbVar7 = &REFG(undefined1, 0x10be8fb);
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00804390: ;
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00804395;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00804390;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00804395: ;
  if (iVar4 != 0) {
    if ((param_2[2] & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_2[3];
    }
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[1];
    }
    uVar6 = F_0055e320(this);
    F_0058a320(uVar6,uVar5,uVar8);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  uVar8 = F_0055e2f0(this,10);
  if (((uVar8 == 0) || (in_ecx = (int *)F_00559c20(uVar8), in_ecx == (int *)0x0)) ||
     (uVar8 = F_005613a0(in_ecx), uVar8 != 9)) {
    in_ecx = (int *)0x0;
  }
  uVar8 = ((code *)*(gen_code32 *)(*in_ecx + 0x4c))(in_ecx,(uint)*(ushort *)(in_ecx + 0x30));
  return uVar8;
}

/* ref: FUN_00804670 */
uint F_00804670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_008046b0 */
uint F_008046b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8046b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  in_ecx = param_1 * 0x68 + 400 + (int)this;
  uVar8 = *(undefined4 *)(in_ecx + 0x54);
  uVar10 = 0;
  pvVar2 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar2,uVar8,uVar10);
  uVar3 = F_0042a990(in_ecx);
  pvVar2 = (undefined *)F_00559ba0(param_2[6]);
  F_00584110(pvVar2,uVar3);
  iVar6 = (int)*(char *)(in_ecx + 100);
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar8 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_0057eb30(pvVar2,iVar6,uVar8,uVar10,uVar9,uVar11);
  uVar3 = *(uint *)(in_ecx + 0x58);
  uVar7 = uVar3 & 0xf;
  uVar4 = F_0059d670((undefined *)param_2[2],uVar7 + 0x65);
  iVar6 = 0;
  if (uVar7 != 0) {
    bVar1 = 8;
    do {
      uVar4 = F_00561490(param_3,iVar6 + 6);
      uVar4 = F_00559c20(uVar4);
      iVar5 = 0x6a;
      if ((int)(uVar3 >> 4 & 0xf) <= iVar6) {
        iVar5 = 0x70;
      }
      uVar4 = F_0059d670(*(undefined * PTR32 *)(uVar4 + 0x6c),
                           iVar5 - (*(uint *)(in_ecx + 0x58) >> (bVar1 & 0x1f) & 0xf));
      bVar1 = bVar1 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar7);
  }
  return uVar4;
}

/* ref: Client::UI2::AddonMateriaBroker::vf2 */
uint F_00804780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x804780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x1f) {
    uVar1 = F_0055dcb0();
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_4[2] * 0xbc + 0x240);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[param_4[2] * 0xbc + 0x244];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[param_4[2] * 0xbc + 0x244],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    uVar3 = 0;
    if (*param_4 != 0) {
      uVar3 = *(undefined4 *)(*param_4 + 0x70);
    }
    uVar1 = F_00588780((undefined *)(uVar1 + 0xe0),4,(uint)(byte)this[0x13a],uVar3,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
  }
  else {
    if (uVar1 == 0x20) {
      uVar1 = F_0055dcb0();
      uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
      return uVar1;
    }
    uVar1 = uVar1 - 0x21;
    if (uVar1 == 0) {
      if (param_2 == 0) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(int *)(gen_frame + 0x18)) = param_4[2];
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar4 = 1;
        do {
          this_00 = this_00 + -8;
          uVar1 = F_005a2670(this_00);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return uVar1;
      }
      piVar2 = (int *)F_00915b80(this,10,9);
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,param_4[2]);
      if ((char)uVar1 == '\0') {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        iVar4 = param_4[2];
        (*(undefined4 *)(gen_frame + 0x10)) = 4;
        (*(int *)(gen_frame + 0x18)) = iVar4;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar4 = 1;
        do {
          this_01 = this_01 + -8;
          uVar1 = F_005a2670(this_01);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_008048f0 */
uint F_008048f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8048f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_00804930 */
uint F_00804930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_1 * 0xbc;
  uVar9 = *(undefined4 *)(iVar2 + 400 + (int)this);
  uVar10 = 0;
  pvVar3 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar3,uVar9,uVar10);
  uVar4 = F_0042a990((int)this + iVar2 + 0x194);
  pvVar3 = (undefined *)F_00559ba0(param_2[6]);
  F_00584110(pvVar3,uVar4);
  uVar4 = F_0042a990((int)this + iVar2 + 0x1ec);
  pvVar3 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar3,uVar4);
  F_0059d670((undefined *)param_2[7],*(int *)((int)this + 0x4b00) + 0x65);
  uVar4 = *(uint *)((int)this + iVar2 + 0x1e8);
  uVar7 = uVar4 & 0xf;
  uVar5 = F_0059d670((undefined *)param_2[1],uVar7 + 0x65);
  iVar8 = 0;
  if (uVar7 != 0) {
    bVar1 = 8;
    do {
      uVar5 = F_00561490(param_3,iVar8 + 5);
      uVar5 = F_00559c20(uVar5);
      iVar6 = 0x6a;
      if ((int)(uVar4 >> 4 & 0xf) <= iVar8) {
        iVar6 = 0x70;
      }
      uVar5 = F_0059d670(*(undefined * PTR32 *)(uVar5 + 0x6c),
                           iVar6 - (*(uint *)((int)this + iVar2 + 0x1e8) >> (bVar1 & 0x1f) & 0xf));
      bVar1 = bVar1 + 4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar7);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf44 */
uint F_00804a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined1 uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar3 = F_0055e2f0(this,0xe);
  piVar4 = (int *)F_00559c20(uVar3);
  if (piVar4 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar6 = 0x17;
  *(uint *)(this + 0xa8) = uVar3;
  pAVar8 = this;
  pvVar5 = (undefined *)F_0055e2f0(this,0xd);
  F_00568380(pvVar5,uVar6,uVar7,pAVar8,uVar9,uVar10);
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x17;
  pAVar8 = this;
  pvVar5 = (undefined *)F_0055e2f0(this,0xe);
  F_00568380(pvVar5,uVar6,uVar7,pAVar8,uVar9,uVar10);
  uVar3 = F_0055e2f0(this,4);
  if (uVar3 != 0) {
    pvVar5 = (undefined *)F_00559c20(uVar3);
    if (pvVar5 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar5);
      if (uVar3 == 0xf) goto LAB_00804aae;
    }
  }
  pvVar5 = (undefined *)0x0;
LAB_00804aae: ;
  uVar3 = F_0055e2f0(this,0xb);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  F_00561990(pvVar5,uVar3);
  F_00560760(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 2;
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = uVar6;
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)*(undefined4 *)(param_2 + 0x24);
  }
  AVar1 = this[0x13a];
  (*(undefined1 *)(gen_frame + 0x17)) = uVar2;
  uVar3 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,(*(uint *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00804b30 */
uint F_00804b30(unsigned int gen_a0)
{
  GEN_ENTER(0x804b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb304));
  in_ecx = (int)this + 0x194;
  iVar1 = 0x17;
  do {
    F_0042b630(in_ecx);
    *(undefined4 *)(in_ecx + 0x54) = 0;
    *(undefined4 *)(in_ecx + 0x58) = 0;
    in_ecx = in_ecx + 0x5c;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0xa34) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_00804b90 */
uint F_00804b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  
  in_ecx = param_1 * 0x5c + 0x194 + (int)this;
  if (((*param_2 == 0) || (pvVar1 = (undefined *)F_00559c20(*param_2), pvVar1 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar1), uVar2 != 0xf)) {
    pvVar1 = (undefined *)0x0;
  }
  F_00595190(pvVar1,*(undefined4 *)(in_ecx + 0x54),0,0);
  uVar2 = F_0042a990(in_ecx);
  pvVar1 = (undefined *)F_00559ba0(param_2[1]);
  uVar2 = F_00584110(pvVar1,uVar2);
  return uVar2;
}

/* ref: FUN_00804c00 */
uint F_00804c00(unsigned int gen_a0)
{
  GEN_ENTER(0x804c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined2 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x614) = 0;
  *(undefined4 *)((int)this + 0x618) = 0;
  F_00c48350((undefined *)((int)this + 0x1b4),0,0x460);
  F_00c48350((undefined *)((int)this + 0x180),0,0x30);
  *(undefined4 *)((int)this + 0x61c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5a24));
  return (uint)this;
}

/* ref: FUN_00804c70 */
uint F_00804c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = param_1 * 0x1c;
  F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x1c + 0x1b8),0,0);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1bc);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar2,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c4);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  uVar3 = F_0057eb30(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  if (param_2[4] != 0) {
    pvVar2 = (undefined *)F_00559c20(param_2[4]);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 8) {
        F_0059cf90(pvVar2,(int)*(short *)((int)this + iVar1 + 0x1cc),0,0);
        uVar3 = F_0059d070(pvVar2,(uint)*(ushort *)((int)this + iVar1 + 0x1ce),0,0);
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf44 */
uint F_00804d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = 4;
  uVar3 = 0x21;
  pAVar5 = this;
  pvVar1 = (undefined *)F_0055e2f0(this,4);
  F_00568380(pvVar1,uVar3,uVar4,pAVar5,uVar6,uVar7);
  pvVar1 = (undefined *)F_0055e2f0(this,8);
  F_00568380(pvVar1,0x21,0,this,0,0);
  F_00568380(pvVar1,0x1f,0,this,0,0);
  F_00568380(pvVar1,0x20,0,this,0,0);
  uVar2 = F_0055e2f0(this,8);
  if (uVar2 != 0) {
    pvVar1 = (undefined *)F_00559c20(uVar2);
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_005613a0(pvVar1);
      if (uVar2 == 9) {
        F_005624c0(pvVar1,1,1,0);
      }
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00804dd0 */
uint F_00804dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x804dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int * in_ecx;
  undefined4 uVar3;
  
  F_00560760(((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 * 0x60 + 0x1e8 + (int)this);
  (*(undefined1 *)(gen_frame + 0xa)) = 2;
  (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)(param_1 * 0x60 + 0x1ec + (int)this);
  uVar2 = F_0055e2f0(this,8);
  if (((uVar2 == 0) || (in_ecx = (int *)F_00559c20(uVar2), in_ecx == (int *)0x0)) ||
     (uVar2 = F_005613a0(in_ecx), uVar2 != 9)) {
    in_ecx = (int *)0x0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x50))(in_ecx,param_1);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 0x70);
  }
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar2 = F_0055dcb0();
  uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  return uVar2;
}

/* ref: FUN_00804e80 */
uint F_00804e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_00804ec0 */
uint F_00804ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x804ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_005814a0((undefined *)((int)this + 400));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined1 *)((int)this + 0x330) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00c48350((undefined *)((int)this + 0x180),0,0x148);
  F_00c48350((undefined *)((int)this + 0x2c8),0,0x50);
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf46 */
byte F_00804f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  bVar1 = 0;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar3 = F_0055e2f0(this,uVar5 + 8);
      uVar3 = F_00559c20(uVar3);
      if (uVar5 == uVar4 - iVar2) {
        uVar6 = 0x65;
      }
      else {
        uVar6 = 0x17;
      }
      F_0059d670(*(undefined * PTR32 *)(uVar3 + 0x6c),uVar6);
      bVar1 = bVar1 + 1;
      uVar5 = (uint)bVar1;
    } while (uVar5 < uVar4);
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf60 */
byte F_00804fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined1 * puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  cVar3 = '\0';
  uVar4 = 0;
  puVar7 = &REFG(undefined1, 0x10d5b1c);
  do {
    if ((int)cVar3 == *(int *)(this + 0x1ac)) break;
    cVar3 = puVar7[1];
    puVar7 = puVar7 + 1;
    uVar4 = (uint)(byte)((char)uVar4 + 1);
  } while (-1 < cVar3);
  uVar8 = 0;
  if (param_1 == 0xf) {
    uVar2 = (ulonglong)(uVar4 + 1) % 3;
    uVar8 = (uint)uVar2;
    if (((char)param_2 != '\0') && ((char)uVar2 == '\0')) {
      return 0;
    }
  }
  else if (param_1 == 0x10) {
    if ((char)uVar4 == '\0') {
      if ((char)param_2 != '\0') {
        return 0;
      }
      uVar8 = 2;
    }
    else {
      uVar8 = uVar4 - 1;
    }
  }
  piVar6 = *((int * PTR32 *)GEN_TOP((this + (uVar8 & 0xff) * 4 + 400)));
  if ((piVar6 != (int *)0x0) && (uVar4 = F_0055a350(piVar6[0x1c]), (char)uVar4 != '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    cVar3 = (&REFG(undefined1, 0x10d5b1c))[(int)(uVar8 & 0xff)];
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (int)cVar3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar6 + 0x60))(piVar6,uVar4 + 0xc0);
    uVar4 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),&(*(undefined4 *)(gen_frame + 0x14)),0xd);
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    iVar9 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 0xcc)));
    if (iVar9 < 0) {
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,0);
    }
    else {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + iVar9 * 0x20)));
      (*(undefined1 *)(gen_frame + 0x1b)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[6];
      piVar6 = *(int * PTR32 *)(this + 0x1a8);
      (*(undefined1 *)(gen_frame + 0x1a)) = 7;
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar5;
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x50))(piVar6,iVar9)));
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      uVar11 = 0;
      uVar10 = 0;
      puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
      uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6);
      F_00588780((undefined *)(uVar4 + 0xe0),4,(uint)(byte)AVar1,uVar8,puVar5,uVar10,uVar11);
    }
    puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
    iVar9 = 1;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonInventory::vf37 */
uint F_008051b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8051b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  if (*(int *)(this + 0x1b0) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
  }
  F_005840a0(this_00,0x17,0x16,this,0);
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0,this,0);
  }
  F_00588e00(this + 0x1c0,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_00805220 */
uint F_00805220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x204) != param_1) {
    *(uint *)((int)this + 0x204) = param_1;
    puVar4 = (undefined4 *)((int)this + 0x198);
    iVar3 = 5;
    do {
      F_0059dde0((undefined *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x198),1);
    if (param_1 == 4) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),0);
      uVar1 = F_0059bd30((undefined *)((int)this + 0x1c0),
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x18))),1,1);
      if (*(char *)((int)this + 0x201) != '\0') {
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b990(uVar2);
        uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1fc),uVar2,uVar1);
        return uVar1;
      }
    }
    else {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),1);
      uVar1 = F_0059bd30((undefined *)((int)this + 0x1c0),
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0x18))),1,1);
      if (*(char *)((int)this + 0x200) != '\0') {
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b990(uVar2);
        uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1f8),uVar2,uVar1);
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf2 */
uint F_00805340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x805340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 != 0x17) {
    if (uVar2 == 0x3e) {
      if ((*(int *)(this + 0x1f8) != 0) && (param_2 == *((int *)GEN_TOP((*(int *)(this + 0x1f8) + 0x18))))) {
        iVar1 = *(int *)this;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
        this[0x200] = (undefined1)0x1;
        F_0055a300(*(undefined * PTR32 *)(this + 0x180),1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        F_00560f70(*(undefined4 *)(this + 0x1f8),uVar3,uVar2);
      }
      uVar2 = *(uint *)(this + 0x1fc);
      if ((uVar2 != 0) && (param_2 == *(int *)(uVar2 + 0x18))) {
        iVar1 = *(int *)this;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
        this[0x201] = (undefined1)0x1;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        uVar2 = F_00560f70(*(undefined4 *)(this + 0x1fc),uVar3,uVar2);
      }
    }
    return uVar2;
  }
  F_00557670(param_3,0);
  if (4 < param_2 - 0xfU) {
    if (param_2 != 0x16) {
      uVar2 = F_007a5160(this);
      return uVar2;
    }
    uVar2 = F_007a51f0(this);
    return uVar2;
  }
  uVar2 = F_00805220(this,param_2 + -0xf);
  return uVar2;
}

/* ref: Client::UI2::AddonInventory::vf60 */
byte F_008054a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8054a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined4 in_ecx;
  undefined * pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  iVar7 = 0;
  pAVar3 = this + 0x198;
  iVar5 = 0;
  do {
    iVar1 = *(int *)pAVar3;
    iVar6 = iVar5;
    if (iVar7 != 0) goto LAB_008054e1;
    iVar6 = iVar1;
    if (*(char *)(iVar1 + 0x88) != '\0') {
      iVar6 = iVar5;
      iVar7 = iVar1;
    }
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 4;
    iVar5 = iVar6;
  } while (iVar4 < 5);
  iVar1 = 0;
LAB_008054e1: ;
  if (param_1 != 0xf) {
    if (param_1 != 0x10) {
      return 0;
    }
    if ((iVar6 != 0) && (iVar7 != iVar6)) {
      uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar6 + 0x70),0x17);
      F_00805220(this,uVar2 - 0xf);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
    return 1;
  }
  if ((iVar1 != 0) && (iVar7 != iVar1)) {
    uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar1 + 0x70),0x17);
    F_00805220(this,uVar2 - 0xf);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  if (iVar7 != 0) {
    in_ecx = 0;
    if (*(int *)(this + 0x188) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(in_ecx);
    if (((char)uVar2 != '\0') &&
       (uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar7 + 0x70),0x17), uVar2 == 0x13)) {
      F_007a5160(this);
    }
  }
  return 1;
}

/* ref: FUN_008055d0 */
uint F_008055d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8055d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)((int)this + 0x198);
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),uVar5);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((undefined2)(*(undefined4 *)(gen_frame + 0x18)),0x4001);
  (*(undefined2 *)(gen_frame + 0xc)) = (short)(*(undefined4 *)(gen_frame + 0x14));
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar2 = *(int *)((int)this + 0x188);
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar2);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x70);
  }
  uVar4 = F_0055a020(uVar5);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4;
  (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  if (*(char *)((int)this + 0x202) == '\0') {
    F_0056b780(this,3);
  }
  else {
    F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1b0));
    if (*(int *)((int)this + 0x1b0) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x70)));
    }
    uVar4 = F_0055a030(uVar5);
    sVar1 = (short)(*(undefined4 *)(gen_frame + 0x14)) + (uVar4 >> 1);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = sVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),sVar1);
    F_0056b630(this,0x18a89,0,3,4,(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)));
  }
  uVar5 = 0x73a;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar5 = 0x73c;
    break;
  case 2: ;
    uVar5 = 0x73b;
    break;
  case 3: ;
    uVar5 = 0x18ac2;
    break;
  case 4: ;
    uVar5 = 0x18ac3;
    break;
  case 6: ;
    uVar5 = 0x18ac5;
    break;
  case 7: ;
    uVar5 = 0x18ac4;
    break;
  case 8: ;
    uVar5 = 0x223;
    break;
  case 9: ;
    uVar5 = 0x18ae0;
  }
  bVar3 = F_0056b630(this,uVar5,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00805780 */
uint F_00805780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_0056b630(this,0x18ab8,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_008055d0(this,*(undefined4 *)((int)this + 0x1bc));
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryGrid::vf37 */
uint F_008057c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8057c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pAVar2;
  uint uVar3;
  int iVar4;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar2 = this + 0x1e4;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(pAVar2 + -100);
    if (iVar1 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),3,iVar4,this,0);
    }
    *(undefined4 *)pAVar2 = 0;
    iVar4 = iVar4 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar4 < 0x19);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonInventoryGrid::vf44 */
uint F_00805860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 3);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x19);
  F_0055dcb0();
  local_8 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -100);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(short *)(iVar1 + 0x9c) = (short)iVar5;
      *(undefined4 *)(iVar1 + 0xa0) = 0x4218;
      *(undefined1 *)(iVar1 + 0xa9) = 0;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),3,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar4 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryGrid::vf47 */
unsigned int F_00805980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 * puVar10;
  
  AVar1 = this[0x13c];
  (*(int *)(gen_frame + 0x34)) = *(int *)(param_1 + 0x1c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)(param_2 + 0x18);
  iVar8 = 0;
  bVar2 = false;
  uVar3 = F_0055dcb0();
  uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
  if (uVar3 != 0) {
    iVar8 = *(int *)(uVar3 + 0x204);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar3 + 0x1bc))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 7: ;
    case 9: ;
      bVar2 = true;
    }
    if (iVar8 < 0) {
      return 0;
    }
    if (3 < iVar8) {
      return 0;
    }
  }
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = iVar8 * 0x19;
  ((byte *)(gen_frame + 0x8))[0x20] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x21] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x22] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x23] = 0xff;
  uVar3 = F_0055dcb0();
  iVar7 = *(int *)(uVar3 + 0xb4);
  if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x98) & 0x10) != 0)) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0x28))))()));
    if (*piVar4 == iVar8) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0x28))))((int *)(iVar7 + 0x84));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(uVar3 + 4);
    }
  }
  F_00560760(((byte *)(gen_frame + 0x8)));
  iVar7 = iVar8 * 500 + 0x10;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) = this + 0x1e4;
  ((byte *)(gen_frame + 0x8))[10] = 2;
  ((byte *)(gen_frame + 0x8))[4] = (char)iVar8;
  ((byte *)(gen_frame + 0x8))[5] = (char)((uint)iVar8 >> 8);
  ((byte *)(gen_frame + 0x8))[6] = (char)((uint)iVar8 >> 0x10);
  ((byte *)(gen_frame + 0x8))[7] = (char)((uint)iVar8 >> 0x18);
  param_2 = 0;
  (*(int *)(gen_frame + 0x30)) = iVar8 * 100;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
  do {
    iVar8 = (*(int *)(gen_frame + 0x34));
    piVar4 = *(int * PTR32 *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28));
    if (piVar4 != (int *)0x0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((iVar7 + -4 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar6;
      uVar3 = (int)((int)(uintptr_t)pvVar6) >> 0x10 & 0xff;
      uVar5 = 0x13;
      if (uVar3 == 8) {
        uVar5 = 0x16;
      }
      else if (uVar3 == 9) {
        uVar5 = 0x15;
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
      F_0059db40((undefined *)piVar4[0x29],uVar5);
      bVar9 = (char)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) >> 8) != '\0';
      ((byte *)(gen_frame + 0x8))[0x24] = bVar9;
      F_0056e4d0(piVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)));
      ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)(((byte *)(gen_frame + 0x8))[0x24] == 0));
      if ((bVar2) && ((char)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) >> 0x18) != '\0')) {
        F_0056e4d0(piVar4,1);
      }
      *(short *)(piVar4 + 0x27) = (short)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) + (short)param_2;
      iVar8 = *((int *)GEN_TOP((iVar7 + -0x10 + *(int *)(iVar8 + 0x20))));
      if (iVar8 < 1) {
        ((code *)*(gen_code32 *)(piVar4[0x21] + 0x30))(piVar4 + 0x21);
        F_00595560(piVar4,0);
        F_00597570(piVar4);
        if (piVar4[0x29] == 0) {
          F_0055a300((undefined *)0x0,0);
        }
        else {
          F_0055a300(*(undefined * PTR32 *)(piVar4[0x29] + 0x70),0);
        }
      }
      else {
        ((code *)*(gen_code32 *)(piVar4[0x21] + 0x28))(piVar4 + 0x21);
        piVar4[0x26] = 0x10;
        F_00595560(piVar4,iVar8);
        if (piVar4[0x29] == 0) {
          pvVar6 = (undefined *)0x0;
        }
        else {
          pvVar6 = *(undefined * PTR32 *)(piVar4[0x29] + 0x70);
        }
        F_0055a300(pvVar6,(uint)(param_2 != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))));
        iVar8 = *((int *)GEN_TOP((iVar7 + -8 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) + 0x20))))));
        ((byte *)(gen_frame + 0x8))[0xb] = (byte)param_2;
        F_005916c0(piVar4,6,(uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) + 0x13a))),((byte *)(gen_frame + 0x8)));
        uVar3 = iVar8 >> 0x10 & 0xffff;
        if ((uVar3 < 2) && ((char)(*(undefined * PTR32 *)(gen_frame + 0x38)) != '\x05')) {
          pvVar6 = *(undefined * PTR32 *)(piVar4[0x29] + 0xbc);
          puVar10 = &REFG(undefined1, 0x10be90e);
        }
        else {
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(piVar4[0x29] + 0xbc);
          puVar10 = (undefined1 *)F_00560910(uVar3);
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
        }
        F_00584110(pvVar6,puVar10);
        iVar8 = *((int *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
        F_00561860((undefined *)piVar4[0x29],(uint)((byte)iVar8 & 1));
        F_005a03c0((undefined *)piVar4[0x29],iVar8 >> 1);
        iVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24));
      }
    }
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 4;
    param_2 = param_2 + 1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) + 4;
    iVar7 = iVar7 + 0x14;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
  } while (param_2 < 0x19);
  return 0;
}

/* ref: FUN_00805c90 */
uint F_00805c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_007a5260(this_00,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00805cc0 */
uint F_00805cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    if ((char)param_1 != '\0') {
      bVar1 = F_0056b630(this_00,0x18ab8,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = F_008055d0(this_00,*(undefined4 *)((int)this_00 + 0x1bc));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryGrid::vf53 */
unsigned int F_00805d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 == '\0') {
    uVar1 = F_0055dcb0();
    if (*(char *)(uVar1 + 0xbc) != '\0') {
      F_005aa300((undefined *)(uVar1 + 0x3c),1,1,9);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf37 */
uint F_00805d40(unsigned int gen_a0)
{
  GEN_ENTER(0x805d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pAVar2;
  uint uVar3;
  int iVar4;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar2 = this + 0x1c8;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(pAVar2 + -0x48);
    if (iVar1 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar4,this,0);
    }
    *(undefined4 *)pAVar2 = 0;
    iVar4 = iVar4 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar4 < 0x12);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf44 */
uint F_00805dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 0xe);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x12);
  F_0055dcb0();
  local_8 = this + 0x1c8;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -0x48);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(undefined4 *)(iVar1 + 0x98) = 0x8000;
      *(undefined4 *)(iVar1 + 0xa0) = 0xc200;
      *(undefined1 *)(iVar1 + 0xa9) = 0;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x12);
  uVar4 = F_0055e2f0(this,0x20);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf2 */
uint F_00805ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x805ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 AVar1;
  int iVar2;
  int * piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 * puVar7;
  uint * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar5 = param_1 & 0xffff;
  uVar6 = uVar5 - 0x17;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  if (uVar6 < 0x1e) {
    uVar6 = (uint)*(byte *)(uVar5 + 0x8061f5);
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0x17: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(int *)(gen_frame + 0x18)) = param_2;
      F_005a9110((*(undefined * PTR32 *)(gen_frame + 0x1c)),1,&(*(undefined4 *)(gen_frame + 0x14)));
      uVar6 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      break;
    case 0x2d: ;
      (*(int *)(gen_frame + 0x10)) = *(int *)(this + param_2 * 4 + 0x1c8);
      uVar5 = F_0055dcb0();
      uVar5 = F_0055b990(uVar5);
      iVar2 = *((int *)GEN_TOP((*(int *)(uVar5 + 0x1c) + 0x20)));
      iVar9 = param_2 * 3 + 0x3b8;
      uVar5 = *(uint *)(iVar2 + 4 + iVar9 * 4);
      uVar6 = (uint)*(ushort *)(iVar2 + 8 + iVar9 * 4);
      (*(int *)(gen_frame + 0x18)) = *(undefined4 *)(iVar2 + iVar9 * 4);
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)uVar6;
      if (uVar6 == 0xffff) {
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0xffffffff;
      }
      puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
      *puVar7 = 0x26;
      uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(undefined * PTR32 *)(uVar6 + 4) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(uint *)(uVar6 + 100) = uVar5 & 0xffff;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x84) + 0x34))))((*(int *)(gen_frame + 0x10)) + 0x84)));
      F_00595560(this_00,(*(int *)(gen_frame + 0x18)));
      F_0058ea90(this_00,(int)uVar5 >> 0x10 & 0xffff);
      F_0058e9a0(this_00,&REFG(undefined, 0x10be921));
      *(undefined4 *)((int)this_00 + 0x94) = 0x100010;
      uVar5 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    case 0x30: ;
      F_00557670(param_3,0);
      piVar3 = (int *)*param_4;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      (*(int *)(gen_frame + 0x18)) = *puVar7;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x18));
      uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      uVar4 = *(undefined4 *)(uVar5 + 4);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = 0x26;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(int *)(gen_frame + 0x44)) = param_2;
      uVar5 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x28)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      puVar8 = &(*(uint *)(gen_frame + 0x48));
      iVar9 = 3;
      do {
        puVar8 = puVar8 + -2;
        uVar5 = F_005a2670(puVar8);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    case 0x34: ;
      F_00557670(param_3,0);
      uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
      if ((char)uVar6 != '\0') {
        uVar6 = *(byte *)(param_4 + 2) - 1;
        switch((unsigned int)(uintptr_t)(uVar6)) {
        case 0: ;
        case 2: ;
        case 5: ;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
          (*(undefined4 *)(gen_frame + 0x24)) = 0x26;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
          (*(int *)(gen_frame + 0x2c)) = param_2;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
          (*(undefined4 *)(gen_frame + 0x34)) = 0;
          AVar1 = (*(undefined * PTR32 *)(gen_frame + 0x1c))[0x13c];
          if (AVar1 == (undefined1)0x0) {
            AVar1 = (*(undefined * PTR32 *)(gen_frame + 0x1c))[0x13a];
          }
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
          (*(uint *)(gen_frame + 0x3c)) = (uint)(byte)AVar1;
          uVar5 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))
                    (*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x24,5,&(*(undefined4 *)(gen_frame + 0x20)));
          F_005a2670(((undefined1 *)(gen_frame + 0x8)));
          puVar8 = &(*(uint *)(gen_frame + 0x48));
          iVar9 = 4;
          do {
            puVar8 = puVar8 + -2;
            uVar5 = F_005a2670(puVar8);
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
          return uVar5;
        case 4: ;
          uVar5 = F_007a5a90((*(undefined * PTR32 *)(gen_frame + 0x1c)),param_2);
          F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
          return uVar5;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: Client::UI2::AddonInventoryEvent::vf37 */
uint F_00806250(unsigned int gen_a0)
{
  GEN_ENTER(0x806250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0,this,0);
  }
  F_00588e00(this + 0x1b4,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf47 */
uint F_008062a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8062a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x20))) + 0xed8)));
    uVar4 = uVar3 & 0xffff;
    uVar3 = (int)uVar3 >> 0x10 & 0xffff;
    if ((*(uint *)(this + 0x1f8) != uVar4) || (*(uint *)(this + 0x1fc) != uVar3)) {
      F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x434))));
      *(uint *)(this + 0x1f8) = uVar4;
      *(uint *)(this + 0x1fc) = uVar3;
    }
    fVar7 = F_00c4ed10((uint)(ulonglong)gen_d2bits((double)uVar4 / *(double *)&REFG(undefined, 0x1090710)),
                         (int)((ulonglong)gen_d2bits((double)uVar4 / *(double *)&REFG(undefined, 0x1090710)) >>
                              0x20));
    param_1 = (int)fVar7;
    if (param_1 == 0) {
      param_1 = 1;
    }
    iVar6 = 0;
    pAVar5 = this + 0x194;
    do {
      this_00 = *(undefined * PTR32 *)pAVar5;
      if (iVar6 < param_1) {
        if (this_00 == (undefined *)0x0) {
          uVar8 = 1;
        }
        else {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
          uVar8 = 1;
        }
      }
      else {
        if (this_00 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        uVar8 = 0;
      }
      bVar2 = F_0055a300(this_00,uVar8);
      uVar3 = CONCAT31(extraout_var,bVar2);
      iVar6 = iVar6 + 1;
      pAVar5 = pAVar5 + 4;
    } while (iVar6 < 5);
  }
  if (iVar1 != 0) {
    iVar6 = 0x44c;
    do {
      uVar3 = F_00589280(*(undefined * PTR32 *)(this + iVar6 + -0x2b8),
                           *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar1 + 0x20)))));
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x460);
  }
  return uVar3;
}

/* ref: FUN_008063b0 */
uint F_008063b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8063b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x200) != param_1) {
    *(uint *)((int)this + 0x200) = param_1;
    puVar4 = (undefined4 *)((int)this + 0x194);
    iVar3 = 5;
    do {
      F_0059dde0((undefined *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x194),1);
    uVar1 = F_0059bd30((undefined *)((int)this + 0x1b4),
                         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1ec) + 0x18))),1,1);
    if (*(char *)((int)this + 0x1f0) != '\0') {
      uVar1 = F_0055dcb0();
      uVar1 = F_0055b9a0(uVar1);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b990(uVar2);
      uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1ec),uVar2,uVar1);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf2 */
uint F_00806460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x806460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x17) {
    F_00557670(param_3,0);
    if (param_2 - 9U < 5) {
      uVar2 = F_008063b0(this,param_2 + -9);
      return uVar2;
    }
    uVar2 = F_007a5ed0(this);
  }
  else if (((uVar2 == 0x3e) && (uVar2 = *(uint *)(this + 0x1ec), uVar2 != 0)) &&
          (param_2 == *(int *)(uVar2 + 0x18))) {
    iVar1 = *(int *)this;
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9a0(uVar2);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
    this[0x1f0] = (undefined1)0x1;
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9a0(uVar2);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    uVar2 = F_00560f70(*(undefined4 *)(this + 0x1ec),uVar3,uVar2);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryEvent::vf60 */
byte F_00806530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  pAVar4 = this + 0x194;
  do {
    iVar1 = *(int *)pAVar4;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a2d0(uVar3);
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
    iVar5 = (*(int *)(gen_frame + 0x10));
    if (((char)uVar2 == '\0') || (iVar5 = iVar1, (*(int *)(gen_frame + 0x18)) != 0)) break;
    if (*(char *)(iVar1 + 0x88) == '\0') {
      (*(int *)(gen_frame + 0xc)) = iVar1;
    }
    else {
      (*(int *)(gen_frame + 0x18)) = iVar1;
    }
    iVar6 = iVar6 + 1;
    pAVar4 = pAVar4 + 4;
    iVar5 = (*(int *)(gen_frame + 0x10));
  } while (iVar6 < 5);
  if (param_1 == 0xf) {
    if ((iVar5 != 0) && ((*(int *)(gen_frame + 0x18)) != iVar5)) {
      uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar5 + 0x70),0x17);
      F_008063b0((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar2 - 9);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    }
    return 1;
  }
  if (param_1 != 0x10) {
    return 0;
  }
  if (((*(int *)(gen_frame + 0xc)) != 0) && ((*(int *)(gen_frame + 0x18)) != (*(int *)(gen_frame + 0xc)))) {
    uVar2 = F_0055a260(*(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x70),0x17);
    F_008063b0((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar2 - 9);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    return 1;
  }
  if ((*(int *)(gen_frame + 0x18)) != 0) {
    uVar3 = 0;
    if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x188) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(uVar3);
    if (((char)uVar2 != '\0') && (uVar2 = F_0055a260(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x70),0x17), uVar2 == 9)
       ) {
      F_007a5ed0(this_00);
    }
  }
  return 1;
}

/* ref: FUN_00806690 */
uint F_00806690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x806690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x194);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x188);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = 0x18ad4;
  if (param_1 == 8) {
    uVar4 = 0x223;
  }
  bVar2 = F_0056b630(this,uVar4,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf37 */
uint F_00806780(unsigned int gen_a0)
{
  GEN_ENTER(0x806780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pAVar3;
  uint uVar4;
  int iVar5;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar3 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar2 = *(int *)(pAVar3 + -100);
    if (iVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar5,this,0);
    }
    *(undefined4 *)pAVar3 = 0;
    iVar5 = iVar5 + 1;
    pAVar3 = pAVar3 + 4;
  } while (iVar5 < 0x19);
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf44 */
uint F_00806820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 3);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x19);
  F_0055dcb0();
  local_8 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -100);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(short *)(iVar1 + 0x9c) = (short)iVar5;
      *(undefined4 *)(iVar1 + 0xa0) = 0x400;
      *(undefined1 *)(iVar1 + 0xa9) = 3;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar4 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf47 */
uint F_00806930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar6;
  undefined * this_00;
  undefined * pvVar7;
  int iVar8;
  int iVar9;
  undefined * puVar10;
  
  iVar8 = *(int *)(param_1 + 0x1c);
  uVar4 = *(uint *)(param_2 + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0x28)) = iVar8;
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  if ((iVar8 != 0) && (uVar4 != 0)) {
    AVar1 = this[0x13c];
    uVar4 = F_0055dcb0();
    uVar4 = F_0057f810(*(undefined * PTR32 *)(uVar4 + 0x14),(uint)(byte)AVar1);
    if (uVar4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(uVar4 + 0x200);
      if (iVar9 < 0) {
        return uVar4;
      }
    }
    F_00560760(&(*(undefined4 *)(gen_frame + 0x8)));
    uVar4 = iVar9 * 0x4b;
    param_2 = iVar9 * 100 + 400;
    param_1 = iVar9 * 300 + 2000;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x1e4;
    (*(undefined1 *)(gen_frame + 0x12)) = 2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x24;
    (*(int *)(gen_frame + 0x20)) = 0x19;
    do {
      pvVar7 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
      if (pvVar7 != (undefined *)0x0) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 + 8 + *(int *)(iVar8 + 0x20))));
        (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
        F_0056e4d0(pvVar7,(uint)((char)((uint)uVar2 >> 8) != '\0'));
        piVar5 = ((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + param_1)));
        iVar9 = *piVar5;
        if (iVar9 < 1) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar7 + 0x84) + 0x30))))((int)pvVar7 + 0x84);
          F_00595560(pvVar7,0);
          F_00597570(pvVar7);
          if (*(int *)((int)pvVar7 + 0xa4) == 0) {
            bVar3 = F_0055a300((undefined *)0x0,0);
            uVar4 = CONCAT31(extraout_var,bVar3);
          }
          else {
            bVar3 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar7 + 0xa4) + 0x70))),0);
            uVar4 = CONCAT31(extraout_var_00,bVar3);
          }
        }
        else {
          uVar4 = piVar5[1];
          uVar6 = uVar4 & 0xffff;
          *(undefined4 *)((int)pvVar7 + 0x98) = 0x400;
          *(short *)((int)pvVar7 + 0x9c) = (short)(uVar4 >> 0x10);
          F_00595560(pvVar7,iVar9);
          this_00 = (undefined *)0x0;
          if (*(int *)((int)pvVar7 + 0xa4) != 0) {
            this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar7 + 0xa4) + 0x70)));
          }
          F_0055a300(this_00,1);
          (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 + *(int *)((*(uint *)(gen_frame + 0x1c)) + 0x20))));
          (*(undefined1 *)(gen_frame + 0x13)) = (char)(uVar4 >> 0x10);
          F_005916c0(pvVar7,6,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x18))[0x13a],&(*(undefined4 *)(gen_frame + 0x8)));
          if ((uVar6 < 2) && ((uVar6 != 1 || ((char)(*(undefined4 *)(gen_frame + 0x14)) != '\x05')))) {
            pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar7 + 0xa4) + 0xbc)));
            puVar10 = &REFG(undefined, 0x10be922);
          }
          else {
            pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar7 + 0xa4) + 0xbc)));
            puVar10 = (undefined *)F_00560910(uVar6);
          }
          uVar4 = F_00584110(pvVar7,puVar10);
          iVar8 = (*(int *)(gen_frame + 0x28));
        }
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 0xc;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
      iVar9 = (*(int *)(gen_frame + 0x20)) + -1;
      (*(int *)(gen_frame + 0x20)) = iVar9;
    } while (iVar9 != 0);
  }
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf2 */
uint F_00806b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x806b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined1 AVar2;
  ushort uVar3;
  undefined * this_00;
  int * piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined * this_01;
  undefined4 * puVar7;
  uint * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x1c)) = param_2;
  uVar6 = (param_1 & 0xffff) - 0x17;
  switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
  case 0x17: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x1c));
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar6 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    break;
  case 0x2d: ;
    F_00557670(param_3,0);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
    if ((char)uVar6 != '\0') {
      iVar9 = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
      puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
      *puVar7 = 0x24;
      uVar3 = *(ushort *)(iVar9 + 0x9c);
      uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(uint *)(uVar6 + 4) = (uint)uVar3;
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar9 + 0x84) + 0x34))))(iVar9 + 0x84)));
      uVar6 = F_00562ff0(iVar9);
      F_00595560(this_01,uVar6);
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_01 + 0xa4) + 0xbc)));
      uVar6 = F_0055aaf0(*((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0xa4) + 0xbc))));
      F_00584110(this_00,uVar6);
      uVar6 = F_0058e9a0(this_01,&REFG(undefined, 0x10be923));
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar6;
    }
    break;
  case 0x30: ;
    F_00557670(param_3,0);
    (*(int *)(gen_frame + 0x18)) = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
    piVar4 = (int *)*param_4;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    (*(int *)(gen_frame + 0x1c)) = *puVar7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x1c));
    uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
    uVar5 = *(undefined4 *)(uVar6 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
    (*(uint *)(gen_frame + 0x3c)) = 0x24;
    uVar3 = *(ushort *)((*(int *)(gen_frame + 0x18)) + 0x9c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
    (*(uint *)(gen_frame + 0x44)) = (uint)uVar3;
    uVar6 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))(*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x28)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = 1;
    puVar8 = &(*(uint *)(gen_frame + 0x48));
    iVar9 = 3;
    do {
      puVar8 = puVar8 + -2;
      uVar6 = F_005a2670(puVar8);
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar6;
  case 0x34: ;
    F_00557670(param_3,0);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
    if ((char)uVar6 != '\0') {
      uVar6 = *(byte *)(param_4 + 2) - 1;
      switch((unsigned int)(uintptr_t)(uVar6)) {
      case 0: ;
      case 2: ;
      case 5: ;
        bVar1 = *(byte *)(param_3 + 7);
        iVar9 = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(undefined4 *)(gen_frame + 0x24)) = 0x24;
        uVar3 = *(ushort *)(iVar9 + 0x9c);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
        (*(uint *)(gen_frame + 0x2c)) = (uint)uVar3;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
        AVar2 = this[0x13c];
        (*(uint *)(gen_frame + 0x34)) = bVar1 & 1;
        if (AVar2 == (undefined1)0x0) {
          AVar2 = this[0x13a];
        }
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
        (*(uint *)(gen_frame + 0x3c)) = (uint)(byte)AVar2;
        uVar6 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x20)));
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        puVar8 = &(*(uint *)(gen_frame + 0x48));
        iVar9 = 4;
        do {
          puVar8 = puVar8 + -2;
          uVar6 = F_005a2670(puVar8);
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar6;
      case 4: ;
        F_007a6230(this,(*(int *)(gen_frame + 0x1c)));
        uVar6 = F_0055dcb0();
        *((undefined1 *)GEN_TOP((*(int *)(uVar6 + 0x1c) + 0x19))) = 1;
        uVar6 = F_0055dcb0();
        *((undefined1 *)GEN_TOP((*(int *)(uVar6 + 0x1c) + 0x1a))) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar6;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: Client::UI2::AddonShop::vf46 */
byte F_00806eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806eb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 * puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  
  pbVar9 = (*(byte * PTR32 *)&gen_args[2]);
  if (((*(byte * PTR32 *)&gen_args[2])[0x10] & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14)));
  }
  if (((*(byte * PTR32 *)&gen_args[2])[0x18] & 0xf) == 0) {
    uVar8 = 0;
LAB_00806edf: ;
    F_00577ad0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + 0x6c))));
  }
  else {
    uVar8 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x1c)));
    if (uVar8 == 0) goto LAB_00806edf;
  }
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) = uVar1;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) < (int)(*(uint *)(gen_frame + 0x8))) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) = (*(uint *)(gen_frame + 0x8));
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) != 0) {
      F_00406810(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) = 0;
    }
    piVar2 = (int *)F_00404270();
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) * 0x24,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) = pvVar3;
    F_00c48350(pvVar3,0,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) * 0x24);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) < (int)uVar8) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = uVar8;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) != 0) {
      F_00406810(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = 0;
    }
    piVar2 = (int *)F_00404270();
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) * 0x24,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = pvVar3;
    F_00c48350(pvVar3,0,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) * 0x24);
  }
  bVar10 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) == 0;
  (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3),bVar10)));
  if (bVar10) {
    iVar4 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290)));
  }
  else {
    iVar4 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294)));
    (*(uint *)(gen_frame + 0x8)) = uVar8;
  }
  if (0 < (int)(*(uint *)(gen_frame + 0x8))) {
    puVar5 = (undefined4 *)(iVar4 + 0x1c);
    pbVar9 = pbVar9 + 0x3c;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x8));
    do {
      if ((*(byte *)((int)puVar5 + 6) & 1) == 0) {
        *(byte *)((int)puVar5 + 6) = *(byte *)((int)puVar5 + 6) | 1;
        *(undefined2 *)(puVar5 + 1) = 1;
      }
      if ((pbVar9[0x8bc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x8c0);
      }
      *puVar5 = uVar1;
      if ((pbVar9[-4] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)pbVar9;
      }
      puVar5[-7] = uVar1;
      if ((pbVar9[0x13c] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x140);
      }
      puVar5[-5] = uVar1;
      if ((pbVar9[0x27c] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x280);
      }
      puVar5[-4] = uVar1;
      if ((pbVar9[0x3bc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x3c0);
      }
      puVar5[-1] = uVar1;
      if ((pbVar9[0x4fc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x500);
      }
      puVar5[-2] = uVar1;
      if ((pbVar9[0x77c] & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(pbVar9 + 0x780);
      }
      puVar5[-3] = uVar8;
      puVar5[-6] = 0;
      if ((bVar10) && ((int)uVar8 < 0)) {
        cVar6 = '\x01';
      }
      else {
        cVar6 = '\0';
      }
      bVar7 = (cVar6 << 2 ^ *(byte *)((int)puVar5 + 6)) & 4 ^ *(byte *)((int)puVar5 + 6);
      *(byte *)((int)puVar5 + 6) = bVar7;
      if (bVar10) {
        puVar5[-3] = uVar8 & 0x7fffffff;
      }
      *(byte *)((int)puVar5 + 6) = ((char)(*(undefined * PTR32 *)&gen_args[0])[0x2a4] * '\x02' ^ bVar7) & 2 ^ bVar7;
      pbVar9 = pbVar9 + 8;
      puVar5 = puVar5 + 9;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while ((*(uint *)(gen_frame + 0x4)) != 0);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) == 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180)));
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  }
  uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2);
  if (uVar8 != (*(uint *)(gen_frame + 0x8))) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2);
    F_0058d980(piVar2,(*(uint *)(gen_frame + 0x8)));
  }
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0xf9] & 1) != 0) {
    uVar8 = F_0055dcb0();
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar8 + 0x14) + 0xcc))) != (*(undefined * PTR32 *)&gen_args[0])) {
      cVar6 = '\0';
      goto LAB_00807166;
    }
  }
  cVar6 = '\x01';
LAB_00807166: ;
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),cVar6);
  if (bVar10) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
    if (piVar2 != (int *)0x0) {
      uVar8 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar8 + 0xc0);
    }
    F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x65,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x4)));
    if (cVar6 == '\0') {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = uVar8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400)));
    if (piVar2 != (int *)0x0) {
      uVar8 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar8 + 0xc0);
    }
    F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x66,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x4)));
    if (cVar6 == '\0') {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = uVar8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      F_0059c780(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),(*(byte * PTR32 *)&gen_args[2]));
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),(uint)!bVar10);
  return 1;
}

/* ref: Client::UI2::AddonShop::vf2 */
uint F_00807260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x807260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined1 AVar2;
  byte bVar3;
  short sVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 * this_00;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    if (param_2 == 0) {
      F_007a6520(this);
    }
    else {
      F_007a65b0(this);
    }
    break;
  default: ;
    goto switchD_0080729d_caseD_18;
  case 0x19: ;
    if (((undefined2 *)param_4[1] != (undefined2 *)0x0) && (-1 < param_4[2])) {
      *((undefined2 *)GEN_TOP((*(int *)(this + 0x290) + 0x20 + param_4[2] * 0x24))) = *(undefined2 *)param_4[1]
      ;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x6c))))(*(int * PTR32 *)(this + 0x180),param_4[2],0,0);
    }
    break;
  case 0x1f: ;
    F_00560760(&(*(int *)(gen_frame + 0x14)));
    iVar9 = param_4[2];
    (*(undefined1 *)(gen_frame + 0x1f)) = (char)param_4[2];
    if (param_2 == 2) {
      iVar1 = *(int *)(this + 0x290) + iVar9 * 0x24;
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x290) + 0x1c + iVar9 * 0x24)));
      iVar7 = *(int *)(iVar1 + 4);
      (*(undefined2 *)(gen_frame + 0x1c)) = *(undefined2 *)(iVar1 + 0x20);
      (*(undefined1 *)(gen_frame + 0x1e)) = 7;
    }
    else {
      iVar1 = *(int *)(this + 0x294);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x1c + iVar9 * 0x24);
      iVar7 = *(int *)(iVar1 + iVar9 * 0x24 + 4);
      (*(undefined1 *)(gen_frame + 0x1e)) = 6;
      (*(undefined2 *)(gen_frame + 0x1c)) = *(undefined2 *)(iVar1 + 0xc + iVar9 * 0x24);
    }
    iVar9 = *param_4;
    (*(int *)(gen_frame + 0x14)) = iVar7;
    (*(uint *)(gen_frame + 0x24)) = (uint)(iVar7 != 0) * 2 + 4;
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(iVar9 + 0x70);
    }
    AVar2 = this[0x13a];
    uVar6 = F_0055dcb0();
    F_00588780((undefined *)(uVar6 + 0xe0),(*(uint *)(gen_frame + 0x24)),(uint)(byte)AVar2,uVar8,&(*(int *)(gen_frame + 0x14)),0,0);
    goto switchD_0080729d_caseD_18;
  case 0x20: ;
    uVar6 = F_0055dcb0();
    F_00594d90((undefined *)(uVar6 + 0xe0),0);
    goto switchD_0080729d_caseD_18;
  case 0x21: ;
    (*(uint *)(gen_frame + 0x24)) = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),3);
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x24));
    if (param_2 == 2) {
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x290) + 0x20 + param_4[2] * 0x24)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
      (*(uint *)(gen_frame + 0x5c)) = (int)sVar4;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      (*(uint *)(gen_frame + 0x24)) = (int)*((short *)GEN_TOP((*(int *)(this + 0x294) + 0x20 + param_4[2] * 0x24)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x24));
      if (0 < param_4[2]) {
        iVar9 = param_4[2];
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x7c))))(*(int * PTR32 *)(this + 0x184));
        if ((int)(uVar6 - 1) <= iVar9) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x74))))(*(int * PTR32 *)(this + 0x184),iVar9 + -1,0);
        }
      }
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    break;
  case 0x30: ;
    puVar5 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
    (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar5;
    uVar6 = *puVar5;
    (*(uint *)(gen_frame + 0x24)) = uVar6;
    if (((uVar6 < 4) || (uVar6 == 0x26)) || (0x30 < uVar6)) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x24));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)(*(uint * PTR32 *)(gen_frame + 0x20))[1];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      bVar3 = *(byte *)((int)param_4 + 9);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (*(uint * PTR32 *)(gen_frame + 0x20));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = (uint)bVar3;
      uVar6 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))(*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x20,5,&(*(undefined4 *)(gen_frame + 0x28)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      this_00 = &(*(undefined4 *)(gen_frame + 0x50));
      iVar9 = 4;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  F_00557670(param_3,0);
switchD_0080729d_caseD_18: ;
  puVar5 = &(*(uint *)(gen_frame + 0x68));
  iVar9 = 2;
  do {
    puVar5 = puVar5 + -2;
    uVar6 = F_005a2670(puVar5);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: FUN_008075a0 */
uint F_008075a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8075a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x290) + param_1 * 0x24)));
  iVar1 = *(int *)((int)this + 0x290) + param_1 * 0x24;
  pvVar3 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  F_00584110(pvVar3,uVar6);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x18),0,0);
  iVar5 = (int)*(short *)(iVar1 + 0x20) * *(int *)(iVar1 + 8);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar3 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0xc));
  F_0057eb30(pvVar3,iVar5,uVar6,uVar7,uVar8,uVar9);
  F_0055a300(*(undefined * PTR32 *)(param_2 + 0x10),(uint)(*(byte *)(iVar1 + 0x22) >> 1 & 1));
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0x14));
  F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
  bVar2 = F_0055a300(*(undefined * PTR32 *)(param_2 + 8),(uint)(*(byte *)(iVar1 + 0x22) >> 2 & 1));
  if ((*(byte *)(iVar1 + 0x22) & 4) != 0) {
    if (((*(int *)(param_2 + 8) == 0) ||
        (pvVar3 = (undefined *)F_00559c20(*(int *)(param_2 + 8)), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 8)) {
      pvVar3 = (undefined *)0x0;
    }
    F_0059cf90(pvVar3,(int)*(short *)(iVar1 + 0x20),0,0);
    uVar4 = F_0059d070(pvVar3,*(undefined4 *)(iVar1 + 0x10),0,0);
    return uVar4;
  }
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00807690 */
uint F_00807690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x807690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined4 uVar7;
  
  uVar2 = F_0055dcb0();
  pvVar3 = (undefined *)(uVar2 + 0xe0);
  F_00596b90(pvVar3,(uint)*(byte *)((int)this + 0x13a),1);
  uVar2 = param_1;
  if (-1 < (int)param_1) {
    iVar5 = param_1 * 0x30;
    F_00595190(*(undefined * PTR32 *)((int)this + 400),*(undefined4 *)(iVar5 + 0x564 + (int)this),0,0);
    F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 400) + 0xbc))),
                 (uint)*(ushort *)((int)this + iVar5 + 0x572),0,0,0,0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x198),*(undefined4 *)((int)this + iVar5 + 0x568));
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    bVar1 = *(byte *)((int)this + 0x13a);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar5 + 0x560);
    (*(undefined2 *)(gen_frame + 0xa)) = 1;
    puVar6 = ((undefined1 *)(gen_frame + 0x0));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x38))))(*(int * PTR32 *)((int)this + 400));
    F_00590ad0(pvVar3,4,(uint)bVar1,uVar2,puVar6);
    if (*(ushort *)((int)this + iVar5 + 0x570) < *(ushort *)((int)this + iVar5 + 0x572)) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x6c)));
      uVar7 = 7;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x6c)));
      uVar7 = 0x11;
    }
    F_0059d670(pvVar4,uVar7);
    if (*(int *)((int)this + iVar5 + 0x578) != 0) {
      if (*(ushort *)((int)this + iVar5 + 0x588) < *(ushort *)((int)this + iVar5 + 0x58a)) {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c)));
        uVar7 = 7;
      }
      else {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c)));
        uVar7 = 0x11;
      }
      F_0059d670(pvVar4,uVar7);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar5 + 0x578);
      puVar6 = ((undefined1 *)(gen_frame + 0x0));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x194) + 0x38))))(*(int * PTR32 *)((int)this + 0x194));
      F_00590ad0(pvVar3,4,(uint)bVar1,uVar2,puVar6);
      uVar7 = 0x66;
      pvVar3 = (undefined *)F_0055e2f0(this,9);
      F_0059d670(pvVar3,uVar7);
      F_00595190(*(undefined * PTR32 *)((int)this + 0x194),*(undefined4 *)((int)this + iVar5 + 0x57c),0,0);
      F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x194) + 0xbc))),
                   (uint)*(ushort *)((int)this + iVar5 + 0x58a),0,0,0,0);
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),*(undefined4 *)((int)this + iVar5 + 0x580))
      ;
      return uVar2;
    }
    uVar7 = 0x65;
    pvVar3 = (undefined *)F_0055e2f0(this,9);
    uVar2 = F_0059d670(pvVar3,uVar7);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf44 */
byte F_00807870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  
  pvVar3 = (undefined *)F_0055e340(this,2);
  uVar2 = F_0055a020(pvVar3);
  *(uint *)(this + 0x1d4) = (uint)uVar2;
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  pvVar3 = (undefined *)F_0055e340(this,3);
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  pvVar3 = (undefined *)F_0055e340(this,4);
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  *(undefined4 *)(this + 0xa0) = 0;
  bVar1 = 0;
  if (param_2 != 0) {
    this[0x1d8] = (undefined1)0x1;
    bVar1 = F_007a74b0(this,param_1,param_2);
    this[0x1d8] = (undefined1)0x0;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf46 */
byte F_00807920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    bVar1 = F_007a74b0(this,param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00807940 */
uint F_00807940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  undefined1 * puVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  puVar3 = ((undefined1 *)GEN_TOP((*(uint *)((int)this + 0xf4) >> 0x14 & 0xf)));
  if ((puVar3 != &REFG(undefined, 0x5)) && (puVar3 != &REFG(undefined, 0x4))) {
    bVar2 = *(byte *)((int)this + 0xf9);
    puVar3 = (undefined1 *)(uint)bVar2;
    if (((bVar2 & 1) != 0) &&
       (((-0x400 < *param_2 || (-0x400 < param_2[1])) && (*(char *)((int)this + 0x265) == '\0')))) {
      if ((bVar2 & 0x10) != 0) {
        *(byte *)((int)this + 0xf9) = bVar2 & 0xef;
        return (uint)(bVar2 & 0xef);
      }
      uVar4 = F_0055dcb0();
      puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x74))))(*(int * PTR32 *)(uVar4 + 0x14))))
      ;
      if ((char)puVar3 != '\0') {
        uVar4 = F_0055dcb0();
        puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x78))))(*(int * PTR32 *)(uVar4 + 0x14))));
        if (puVar3 != this) {
          return (uint)puVar3;
        }
      }
      if ((*(byte *)((int)param_2 + 7) & 0x10) == 0) {
        cVar1 = (char)param_2[3];
        puVar3 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar3) >> 8),cVar1)));
        if (((cVar1 == '\0') || (cVar1 == '\x01')) &&
           (puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))))(*(int * PTR32 *)(param_1 + 4)))),
           (char)puVar3 == '\x01')) {
          bVar2 = F_007a7f20(this);
          puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
          if (bVar2 == 1) {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x37);
            puVar3 = (undefined1 *)F_005a2670(((undefined1 *)(gen_frame + 0x4)));
          }
        }
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00807a30 */
uint F_00807a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 != 5) && (uVar2 != 4)) && (*(char *)((int)this + 0x265) == '\0')) &&
     ((*(byte *)((int)this + 0xf9) & 0x10) == 0)) {
    bVar1 = *(byte *)(param_2 + 1);
    uVar2 = (uint)bVar1;
    if ((bVar1 == 0) && ((*(byte *)(param_1 + 0x16) & 1) == 0)) {
      if (*param_2 == 1) {
        F_00557670(param_1,0);
        bVar1 = F_007a7f20(this);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 1) {
          uVar2 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x37);
          uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0xc)));
          return uVar2;
        }
      }
      else {
        uVar2 = *param_2 - 2;
        if (uVar2 < 2) {
          F_00557670(param_1,0);
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
          F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
          uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
          return uVar2;
        }
      }
    }
    else if ((bVar1 == 2) && (((*(byte *)(param_1 + 0x16) & 1) == 0 && (*param_2 == 0)))) {
      *(undefined4 *)((int)this + 0x25c) = 3;
      uVar2 = F_00557670(param_1,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00807b40 */
uint F_00807b40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x807b40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  float fVar2;
  ushort uVar3;
  double dVar4;
  longlong lVar5;
  byte bVar6;
  char * pcVar7;
  uint uVar8;
  undefined * this;
  undefined3 extraout_var = 0;
  char * PTR32 * this_00;
  int iVar9;
  float10 fVar10;
  
  pcVar7 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar7;
  if (*(char *)((int)param_1 + 0x248) != '\x01') {
    pcVar7 = *(char * PTR32 *)((int)param_1 + 0x194);
    if (*pcVar7 != '\0') {
      if ((int)*(uint *)((int)param_1 + 0x254) < *(int *)((int)param_1 + 0x23c)) {
        F_0055ad30(*(undefined4 *)((int)param_1 + 0x184),*(uint *)((int)param_1 + 0x254) & 0xffff)
        ;
        F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x184),(uint)(*(int *)((int)param_1 + 0x254) != 0));
        F_0055aa30(*(undefined4 *)((int)param_1 + 0x184),*(undefined4 *)((int)param_1 + 0x188));
        *(int *)((int)param_1 + 0x254) =
             *(int *)((int)param_1 + 0x254) +
             *(int *)((int)param_1 + 0x25c) * *(int *)((int)param_1 + 600);
        iVar9 = *(int *)((int)param_1 + 0x254);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar9);
        (*(float *)(gen_frame + 0x14)) = (float)iVar9;
        if ((float10)iVar9 < (float10)*(double *)&REFG(undefined, 0x1088070)) {
          fVar2 = ((float)GEN_TOF(((((float10)iVar9 * (float10)REFG(double, 0x1088108)) /
                           (float10)*(double *)&REFG(undefined, 0x1088070) + (float10)REFG(double, 0x1088108)) *
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
          (*(float *)(gen_frame + 0x14)) = fVar2;
          fVar10 = ((float10)GEN_TOD(fsin((float10)fVar2)));
          (*(float *)(gen_frame + 0x14)) = (float)fVar10;
          (*(float *)(gen_frame + 0x14)) = (float)((float10)1 - (float10)(float)fVar10);
        }
        else {
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
        }
        fVar10 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x1094560));
        dVar4 = (double)(float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x1094560));
        fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar4),
                              (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
        (*(float *)(gen_frame + 0x14)) = (float)fVar10;
        uVar8 = (uint)((double)(float)fVar10 + *(double *)&REFG(undefined, 0x10944e0));
        *(uint *)((int)param_1 + 600) = uVar8;
        *(undefined4 *)((int)param_1 + 0x260) = 0;
        F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar8;
      }
      uVar8 = F_0042a990((int)param_1 + 0x194);
      F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x184),uVar8);
      F_0055ad30(*(undefined4 *)((int)param_1 + 0x184),0);
      F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x184),1);
      F_0055aa30(*(undefined4 *)((int)param_1 + 0x184),*(undefined4 *)((int)param_1 + 0x188));
      iVar9 = *(int *)((int)param_1 + 0x240);
      if (iVar9 != 0) {
        iVar9 = iVar9 + -1;
      }
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      uVar8 = F_0042a990((int)param_1 + 0x1e8);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
      (*(uint *)(gen_frame + 0x1c)) = uVar8;
      uVar3 = *(ushort *)((int)param_1 + 0x250);
      uVar8 = *(uint *)((int)param_1 + 0x268);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = (uint)uVar3 << 0x10 | uVar8;
      uVar8 = F_0055ab00(*(undefined4 *)((int)param_1 + 0x184));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar8;
      bVar6 = F_0055ab50(*(undefined4 *)((int)param_1 + 0x184));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)bVar6;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
      uVar8 = *(uint *)((int)param_1 + 0x260);
      (*(undefined1 *)(gen_frame + 0x3c)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = iVar9 << 0x10 | uVar8;
      uVar8 = F_0055dcb0();
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x38) + 4))))
                        (*(int * PTR32 *)(uVar8 + 0x38),&(*(longlong *)(gen_frame + 0xc)),0x2a,6,&(*(undefined4 *)(gen_frame + 0x18)));
      F_00596cd0((undefined *)((int)param_1 + 0x18c),uVar8);
      F_005a2670(&(*(longlong *)(gen_frame + 0xc)));
      (*(uint *)(gen_frame + 0x4)) = 0;
      F_0056c4c0((undefined *)((int)param_1 + 0x18c),5,&(*(uint *)(gen_frame + 0x4)));
      if (*((char *)GEN_TOP((-(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8))))) == '1') {
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2)) = ((undefined2)0x27f);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0))));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = ((undefined2)0x27f) | 0xc00;
        (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x10912a8));
        lVar5 = (*(longlong *)(gen_frame + 0xc));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (int)(longlong)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x10912a8));
        *(int *)((int)param_1 + 0x260) = *(int *)((int)param_1 + 0x260) + (int)(*(longlong *)(gen_frame + 0xc));
        (*(longlong *)(gen_frame + 0xc)) = lVar5;
        if (0xfffe < *(uint *)((int)param_1 + 0x260)) {
          *(undefined4 *)((int)param_1 + 0x260) = 0xfffe;
        }
      }
      else if (*(int *)((int)param_1 + 0x260) == 0) {
        if (*(char *)((int)param_1 + 0x265) == '\0') {
          this = (undefined *)F_0055e2f0(param_1,4);
          F_0055a300(this,1);
          F_0059d640(this,0x66);
          *(undefined1 *)((int)param_1 + 0x280) = 0;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x248) = 1;
        }
      }
      else {
        F_007a7df0(param_1);
      }
      F_005a2670(&(*(uint *)(gen_frame + 0x4)));
      this_00 = &(*(char * PTR32 *)(gen_frame + 0x48));
      iVar9 = 5;
      do {
        this_00 = this_00 + -2;
        uVar8 = F_005a2670(this_00);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar8;
    }
  }
  piVar1 = (int *)((int)param_1 + 0x244);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined1 *)((int)param_1 + 0x280) = 0;
    bVar6 = F_007a7f20(param_1);
    pcVar7 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)pcVar7;
}

/* ref: FUN_00807eb0 */
unsigned int F_00807eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  if ((int)param_2 < 1) {
    if (param_1[0x28] == 0) {
      uVar4 = F_0055e2f0(param_1,0xf);
      if (uVar4 != 0) {
        piVar3 = (int *)F_00559c20(uVar4);
        if ((piVar3 == (int *)0x0) || (uVar4 = F_005613a0(piVar3), uVar4 != 2)) {
          piVar3 = (int *)0x0;
        }
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
        param_1[0x28] = uVar4;
      }
      *(byte *)((int)param_1 + 0xfa) = *(byte *)((int)param_1 + 0xfa) & 0xbf;
      param_1[0x9c] = 0;
      F_0055dda0(param_1,param_1[0x9d],GEN_TOF(gen_bits2f(param_1[0x9e])),GEN_TOF(gen_bits2f(param_1[0x9f])));
      F_00568210(param_1[0x24],(float)(float10)1,(float)(float10)1);
      F_005876a0(param_1);
      ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1);
    }
  }
  else if (param_1[0x28] != 0) {
    *(byte *)((int)param_1 + 0xfa) = *(byte *)((int)param_1 + 0xfa) | 0x40;
    param_1[0x28] = 0;
    piVar3 = (int *)F_0055dd80(param_1);
    if (piVar3 != (int *)0x0) {
      param_1[0x9d] = *piVar3;
      param_1[0x9e] = piVar3[1];
      param_1[0x9f] = piVar3[2];
    }
  }
  if (0 < (int)param_2) {
    uVar4 = F_0055dcb0();
    fVar2 = REFG(float, 0x1094834);
    fVar6 = (float10)*(int *)(uVar4 + 0x238);
    if (*(int *)(uVar4 + 0x238) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = ((float)GEN_TOF(((float10)(int)(((param_2 & 0x7fffffff) + param_3) * 100) / fVar6)));
    bVar5 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[0x9c])))) || GEN_ISNAN((float10)fVar1);
    if (bVar5 == (bVar5 || ((float10)GEN_TOD(gen_bits2f(param_1[0x9c]))) == (float10)fVar1)) {
      param_1[0x9c] = (int)gen_fl2bits(fVar1);
      F_0055dda0(param_1,7,fVar2,fVar1);
      F_00568210(param_1[0x24],(float)(float10)1,(float)(float10)1);
      F_005876a0(param_1);
      ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonHowTo::vf38 */
uint F_00808060(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x808060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) == 0) goto LAB_00808151;
  iVar3 = 0;
  bVar1 = F_0056c7e0();
  if ((bVar1 != 0) &&
     ((uVar2 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    uVar2 = F_0055dcb0();
    iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 1;
  }
  if (*(int *)(param_1 + 0x1a0) == iVar3) goto LAB_00808151;
  F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1a8),0x66 - (uint)(iVar3 != 0));
  F_00563db0(*(undefined4 *)(param_1 + 0x1a4),1);
  if (iVar3 == 1) {
    if (*(char *)(param_1 + 0x1ac) == '\x01') {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x184) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x184) + 0x70)));
      }
      uVar2 = F_0055a2d0(uVar4);
      if ((char)uVar2 != '\0') {
        uVar2 = F_0055dcb0();
        uVar4 = 0x34b;
        goto LAB_00808132;
      }
    }
    uVar2 = F_0055dcb0();
    uVar4 = 0x34a;
LAB_00808132: ;
    uVar2 = F_0056c6b0(*(undefined4 *)(uVar2 + 0x30),uVar4,0);
    F_0058bba0(*(undefined * PTR32 *)(param_1 + 0x1a4),uVar2);
  }
  else if (iVar3 == 2) {
    uVar2 = F_0055dcb0();
    uVar4 = 0x18a8a;
    goto LAB_00808132;
  }
  *(int *)(param_1 + 0x1a0) = iVar3;
LAB_00808151: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_008080e3 */
uint F_008080e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8080e3u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0056c6b0(*(undefined4 *)(uVar1 + 0x30),0x18a8a,0);
  F_0058bba0(*(undefined * PTR32 *)(in_esi + 0x1a4),uVar1);
  *(undefined4 *)(in_esi + 0x1a0) = in_edi;
  uVar1 = F_005a2370(in_esi,*(float *)(in_ebp + 8));
  return uVar1;
}

/* ref: Client::UI2::AddonHowTo::vf52 */
byte F_00808170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x808170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == 9) {
    uVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x184),-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x184) + 0xc2))),1
                  );
    }
  }
  else {
    if (*param_1 != 10) {
      return 0;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x184),(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x184) + 0xc2))),1)
      ;
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonHowTo::vf60 */
byte F_00808200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x808200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  if (param_1 == 0xf) {
    if (*(ushort *)(this + 0x19c) < 2) {
      return 1;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x198) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    this_00 = ((undefined1 *)(gen_frame + 0x4));
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (*(ushort *)(this + 0x19c) < 2) {
      return 1;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x194) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
    this_00 = ((undefined1 *)(gen_frame + 0xc));
  }
  F_005a2670(this_00);
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return 1;
}

/* ref: Client::UI2::AddonChatLog::vf51 */
uint F_008082f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x8082f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  code * pcVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  
  uVar8 = (uint)((double)param_2 + REFG(double, 0x1088108));
  dVar2 = REFG(double, 0x1088108) + (double)param_3;
  if ((int)uVar8 < 0xba) {
    uVar8 = 0xba;
  }
  uVar5 = F_0055dcb0();
  dVar3 = (double)*(int *)(uVar5 + 0x234);
  if (*(int *)(uVar5 + 0x234) < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar5 = (int)TRUNC(dVar3 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
  if ((int)uVar5 < (int)uVar8) {
    uVar8 = uVar5;
  }
  uVar5 = (int)dVar2;
  if ((int)dVar2 < (int)(uint)*(ushort *)(param_1 + 0x7a)) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x7a);
  }
  uVar6 = F_0055dcb0();
  dVar2 = (double)*(int *)(uVar6 + 0x238);
  if (*(int *)(uVar6 + 0x238) < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar2 = dVar2 * *(double *)&REFG(undefined, 0x1090b18);
  *(short *)(param_1 + 0x7b) = (short)uVar8;
  uVar6 = (int)TRUNC(dVar2) & 0xffff;
  if ((int)uVar6 < (int)uVar5) {
    uVar5 = uVar6;
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x4c);
  *(short *)((int)param_1 + 0x1ee) = (short)uVar5;
  (*pcVar1)(param_1,uVar8,uVar5);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar10 = 0;
  uVar4 = F_0055a030(uVar7);
  F_005810f0(param_1 + 0x87,uVar8,(uint)(ushort)((short)uVar5 - uVar4),uVar10);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar4 = F_0055a030(uVar7);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  fVar9 = F_00559d60(uVar7);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar8 = F_0057f4c0(uVar7,(uint)(ushort)(((short)uVar8 - (short)param_1[0x68]) -
                                           (short)(int)fVar9),(uint)uVar4);
  return uVar8;
}

/* ref: FUN_00808460 */
uint F_00808460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x808460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  
  if (*(int *)((int)this + 0x19c) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
  }
  uVar1 = F_0055a030(in_ecx);
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))
                    (param_1,(uint)*(ushort *)((int)this + 0x1ec),
                     (uint)(ushort)(*(short *)((int)this + 0x1ee) - uVar1));
  return uVar2;
}

