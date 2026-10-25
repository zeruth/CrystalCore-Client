#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ace220 */
unsigned int F_00ace220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ace240 */
uint F_00ace240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace240u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_00ace250 */
uint F_00ace250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00ace270 */
uint F_00ace270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00ace290 */
uint F_00ace290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_00ace2b0 */
uint F_00ace2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace2b0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_00ace2c0 */
unsigned int F_00ace2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00ace2e0 */
unsigned int F_00ace2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00ace320 */
unsigned int F_00ace320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}

/* ref: FUN_00ace360 */
uint F_00ace360(void)
{
  GEN_ENTER(0xace360u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(undefined4, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc510(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd4b0));
    uVar1 = F_004fc7b0(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace4a0 */
uint F_00ace4a0(void)
{
  GEN_ENTER(0xace4a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(undefined4, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc400(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd6a0));
    uVar1 = F_004fc7b0(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace5e0 */
unsigned int F_00ace5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int in_edi;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  in_edi = *(int *)(REFG(int, 0x137104c) + 0x10);
  F_0041f130(in_edi + 0xb0,in_edi,this);
  iVar4 = (int)this + 0x54;
  uVar1 = F_00414010(in_edi,0);
  F_0041f130(uVar1,in_edi,iVar4);
  iVar4 = (int)this + 0xa8;
  uVar1 = F_00414010(in_edi,1);
  F_0041f130(uVar1,in_edi,iVar4);
  uVar1 = 0;
  do {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar2 == (int *)0x0) {
switchD_00ace646_default: ;
      piVar2 = (int *)0x0;
    }
    else {
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2)));
        break;
      case 1: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2)));
        break;
      case 2: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2)));
        break;
      case 3: ;
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
        if (uVar3 == 0) goto switchD_00ace646_default;
        piVar2 = (int *)(uVar3 + 0x850);
        break;
      case 4: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2)));
        break;
      case 5: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2)));
        break;
      case 6: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2)));
        break;
      default: ;
        goto switchD_00ace646_default;
      }
    }
    *(undefined4 *)((int)this + uVar1 * 4 + 0x108) = 0;
    *(undefined4 *)((int)this + uVar1 * 4 + 0x130) = 0;
    if ((char)piVar2[0xb] != '\0') {
      F_00447240(piVar2,uVar1);
      *(int *)((int)this + uVar1 * 4 + 0x108) = piVar2[5];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      *(uint *)((int)this + uVar1 * 4 + 0x130) = uVar3 + 0x20;
    }
    if (*(char *)((int)piVar2 + 0x2d) != '\0') {
      *(undefined1 *)((int)piVar2 + 0x2d) = 0;
    }
    uVar1 = uVar1 + 1;
    if (6 < uVar1) {
      uVar1 = F_0042a990(this);
      *(uint *)((int)this + 0xfc) = uVar1;
      uVar1 = F_0042a990((int)this + 0x54);
      *(uint *)((int)this + 0x100) = uVar1;
      uVar1 = F_0042a990((int)this + 0xa8);
      *(uint *)((int)this + 0x104) = uVar1;
      uVar1 = F_0042a970(this);
      *(uint *)((int)this + 0x124) = uVar1 + 1;
      uVar1 = F_0042a970((int)this + 0x54);
      *(uint *)((int)this + 0x128) = uVar1 + 1;
      uVar1 = F_0042a970((int)this + 0xa8);
      *(uint *)((int)this + 300) = uVar1 + 1;
      *(undefined * PTR32 *)(param_1 + 0x14) = this;
      *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
      *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdc60));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ace7a0 */
unsigned int F_00ace7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  *(int *)((int)this + 0x108) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x130) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  *(int *)((int)this + 0x10c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x134) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  *(int *)((int)this + 0x110) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x138) = uVar4 + 0x20;
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  F_0043c5e0((undefined *)(uVar4 + 0x850));
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  if (uVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(uVar4 + 0x850);
  }
  *(int *)((int)this + 0x114) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x13c) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  *(int *)((int)this + 0x118) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x140) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  *(int *)((int)this + 0x11c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x144) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  *(int *)((int)this + 0x120) = piVar1[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  *(uint *)((int)this + 0x148) = uVar4 + 0x20;
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
  *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdce0));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}

/* ref: FUN_00ace9c0 */
byte F_00ace9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00acea20 */
uint F_00acea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00acea50 */
uint F_00acea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacea50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_00acea70 */
unsigned int F_00acea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacea70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00aceaa0 */
unsigned int F_00aceaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00acead0 */
uint F_00acead0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacead0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_00aceaf0 */
unsigned int F_00aceaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaceaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*(uint *)(param_3 + 8) <= param_4) {
    param_4 = param_4 - *(uint *)(param_3 + 8);
  }
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = param_2 - *(uint *)(param_1 + 8);
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + param_2 * 4)));
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_3 + 4) + param_4 * 4)));
  puVar2 = puVar3;
  puVar4 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = puVar5;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return 0;
}

/* ref: FUN_00aceba0 */
uint F_00aceba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00acebc0 */
unsigned int F_00acebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00acec00 */
uint F_00acec00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00acec30 */
uint F_00acec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_00acec40 */
unsigned int F_00acec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacec40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00acec70 */
unsigned int F_00acec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacec70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceca0 */
unsigned int F_00aceca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaceca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x184)) = iVar2;
  (*(int *)(gen_frame + 0x188)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x188));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x188)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x188));
  }
  (*(int *)(gen_frame + 0x188)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x188))) {
      (*(uint *)(gen_frame + 0x158)) = (*(int *)(gen_frame + 0x188)) + param_2;
      (*(uint *)(gen_frame + 0x170)) = (*(int *)(gen_frame + 0x184)) + (*(uint *)(gen_frame + 0x158));
      (*(uint *)(gen_frame + 0x168)) = param_2;
      (*(uint *)(gen_frame + 0x168)) = (*(uint *)(gen_frame + 0x158));
      (*(int *)(gen_frame + 0x17c)) = param_1;
      if ((*(uint *)(gen_frame + 0x170)) == param_6) {
        (*(int *)(gen_frame + 0x174)) = param_1;
        (*(uint *)(gen_frame + 0x170)) = param_2;
      }
      else {
        (*(int *)(gen_frame + 0x16c)) = param_1;
        (*(int *)(gen_frame + 0x174)) = param_1;
      }
      do {
        uVar5 = (*(uint *)(gen_frame + 0x170));
        uVar3 = uVar5;
        if (*(uint *)((*(int *)(gen_frame + 0x174)) + 8) <= uVar5) {
          uVar3 = uVar5 - *(uint *)((*(int *)(gen_frame + 0x174)) + 8);
        }
        if (*(uint *)((*(int *)(gen_frame + 0x17c)) + 8) <= (*(uint *)(gen_frame + 0x158))) {
          (*(uint *)(gen_frame + 0x158)) = (*(uint *)(gen_frame + 0x158)) - *(uint *)((*(int *)(gen_frame + 0x17c)) + 8);
        }
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x174)) + 4) + uVar3 * 4)));
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x17c)) + 4) + (*(uint *)(gen_frame + 0x158)) * 4)));
        puVar6 = puVar7;
        puVar8 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar6 = puVar9;
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar7 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        (*(int *)(gen_frame + 0x17c)) = (*(int *)(gen_frame + 0x174));
        (*(uint *)(gen_frame + 0x180)) = uVar5;
        if ((*(int *)(gen_frame + 0x184)) < (int)(param_6 - uVar5)) {
          (*(uint *)(gen_frame + 0x158)) = uVar5;
          (*(int *)(gen_frame + 0x15c)) = (*(int *)(gen_frame + 0x174));
          (*(int *)(gen_frame + 0x160)) = uVar5 + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x15c));
        }
        else {
          (*(uint *)(gen_frame + 0x158)) = param_2;
          (*(int *)(gen_frame + 0x14c)) = param_1;
          (*(int *)(gen_frame + 0x150)) = (param_2 - (param_6 - uVar5)) + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x14c));
        }
        (*(int *)(gen_frame + 0x174)) = *piVar4;
        (*(uint *)(gen_frame + 0x170)) = piVar4[1];
        (*(uint *)(gen_frame + 0x158)) = uVar5;
      } while (piVar4[1] != (*(uint *)(gen_frame + 0x168)));
      (*(int *)(gen_frame + 0x188)) = (*(int *)(gen_frame + 0x188)) + -1;
    }
  }
  return 0;
}

/* ref: FUN_00acee10 */
unsigned int F_00acee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacee10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00acee40 */
unsigned int F_00acee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacee40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00acee70 */
unsigned int F_00acee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00aceca0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_00aceef0 */
uint F_00aceef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceef0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x137);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x137);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00acf060 */
unsigned int F_00acf060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xacf060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_00aceca0(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    param_4 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_4;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return 0;
}

/* ref: FUN_00acf110 */
uint F_00acf110(unsigned int gen_a0)
{
  GEN_ENTER(0xacf110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x137);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00acf160 */
uint F_00acf160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar1 = *(int *)((int)this + 0x10) + 1;
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar1 = F_00aceef0(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar4 != (undefined4 *)0x0) {
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(uint *)((int)this + 0xc) = uVar3;
    return uVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar1;
}

/* ref: FUN_00acf1f0 */
unsigned int F_00acf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00aceef0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar4 != (undefined4 *)0x0) {
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00acf260 */
uint F_00acf260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x18)) = param_4 - *(int *)((int)this + 0xc);
  if (*(uint *)((int)this + 0x10) >> 1 < (*(uint *)(gen_frame + 0x18))) {
    F_00acf1f0(this,param_5);
    iVar4 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
    uVar9 = *(undefined4 *)this;
    piVar3 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)*puVar1;
    }
    iVar2 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) + -1;
    uVar8 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar8 = *(undefined4 *)*piVar3;
    }
    piVar3 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)*puVar1;
    }
    iVar5 = (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc);
    uVar7 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar3;
    }
  }
  else {
    F_00acf160(this,param_5);
    piVar3 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)*puVar1;
    }
    piVar6 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      piVar6 = *(int * PTR32 *)*piVar3;
    }
    piVar3 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      piVar3 = *(int * PTR32 *)*piVar6;
    }
    iVar4 = *(int *)((int)this + 0xc) + 1 + (*(uint *)(gen_frame + 0x18));
    uVar9 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar3;
    }
    piVar3 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)*puVar1;
    }
    iVar2 = *(int *)((int)this + 0xc) + 1;
    uVar8 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar8 = *(undefined4 *)*piVar3;
    }
    iVar5 = *(int *)((int)this + 0xc);
    uVar7 = *(undefined4 *)this;
  }
  F_00acf060(((undefined1 *)(gen_frame + 0xc)),uVar7,0,iVar5,uVar8,0,iVar2,uVar9,0,iVar4);
  iVar4 = *(int *)((int)this + 0xc);
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x18)) + iVar4;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00acf3f0 */
unsigned int F_00acf3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00acf1f0((undefined *)((int)this + 4),param_1);
  return 0;
}

/* ref: FUN_00acf400 */
uint F_00acf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)((int)this + 0x10);
  this_00 = (int *)((int)this + 4);
  ((int * PTR32 *)(gen_frame + 0xc))[0] = (int *)*this_00;
  uVar4 = *(int *)((int)this + 0x14) + uVar1;
  (*(char *)(gen_frame + 0x1b)) = '\x01';
  while( true ) {
    if (uVar1 == uVar4) {
      if (*(uint *)((int)this + 0xc) <= *(int *)((int)this + 0x14) + 1U) {
        F_00aceef0(this_00,1);
      }
      uVar4 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x14);
      uVar1 = *(uint *)((int)this + 0xc);
      if (uVar1 <= uVar4) {
        uVar4 = uVar4 - uVar1;
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) == 0) {
        uVar1 = F_004296a0(0x140,0,0x137);
        *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) = uVar1;
      }
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4)));
      if (puVar5 != (undefined4 *)0x0) {
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *param_1;
          param_1 = param_1 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar1;
    }
    if (((int * PTR32 *)(gen_frame + 0xc))[0] == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int * PTR32 *)(gen_frame + 0xc))[0];
    }
    uVar3 = uVar1;
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar3 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar3 * 4))) + 0xf4))) != '\0') break;
    if (((int * PTR32 *)(gen_frame + 0xc))[0] == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int * PTR32 *)(gen_frame + 0xc))[0];
    }
    uVar3 = uVar1;
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar3 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (*(char *)(param_1 + 0x4f) < *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar3 * 4))) + 0x13c))))
    goto LAB_00acf508;
    uVar1 = uVar1 + 1;
    (*(char *)(gen_frame + 0x1b)) = '\0';
  }
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    uVar1 = F_00acf160(this_00,param_1);
    return uVar1;
  }
  uVar1 = uVar1 - 1;
LAB_00acf508: ;
  uVar6 = 0;
  if ((((int * PTR32 *)(gen_frame + 0xc))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0])) != (undefined4 *)0x0)) {
    uVar6 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0]));
  }
  uVar1 = F_00acf260(this_00,((int * PTR32 *)(gen_frame + 0xc)),uVar6,0,uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00acf570 */
byte F_00acf570(unsigned int gen_a0)
{
  GEN_ENTER(0xacf570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00acf5c0 */
uint F_00acf5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042b790((undefined *)((int)this + 0xcc));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00acf5e0 */
byte F_00acf5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (1 < param_1) {
    return 1;
  }
  if (*(int *)((int)this + param_1 * 4 + 8) == 0) {
    return 0;
  }
  return *(int *)((int)this + param_1 * 4 + 0x18) == 1;
}

/* ref: FUN_00acf630 */
uint F_00acf630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * pcVar1;
  uint uVar2;
  
  if (param_5 != 0) {
    pcVar1 = "https:";
    if ((char)param_6 == '\0') {
      pcVar1 = "http:";
    }
    uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s",
                       pcVar1,param_3,param_4,param_5);
    return uVar2;
  }
  pcVar1 = "https:";
  if ((char)param_6 == '\0') {
    pcVar1 = "http:";
  }
  uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s",pcVar1
                     ,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00acf6a0 */
uint F_00acf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf6a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042d540(param_1,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  return uVar1;
}

/* ref: FUN_00acf6c0 */
uint F_00acf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea85c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_0042d540(param_1,param_3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf740 */
uint F_00acf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea86c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea874),param_3);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf7d0 */
unsigned int F_00acf7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 == '\0') {
    *(uint *)((int)this + 200) = 1 << ((byte)param_1 + 8 & 0x1f) | *(uint *)((int)this + 200);
  }
  return 0;
}

/* ref: FUN_00acf810 */
unsigned int F_00acf810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 < 2) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    }
    if ((char)param_2 != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 0;
      F_0042aca0(param_1 * 0x54 + 0x20 + (int)this);
    }
  }
  return 0;
}

/* ref: FUN_00acf860 */
uint F_00acf860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf860u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430(param_2,*(undefined4 *)(uVar2 + 4));
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar5 = &REFG(undefined1, 0x10ea88c);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00acf8c0: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00acf8c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00acf8c0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00acf8c5: ;
  if (iVar4 == 0) {
    return 0;
  }
  uVar2 = F_00bc86e0(param_1,"return_status");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430((undefined *)((int)param_2 + 0x54),*(undefined4 *)(uVar2 + 4));
  return 1;
}

/* ref: FUN_00acf910 */
byte F_00acf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  bool bVar5;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0;
  }
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar4 = &REFG(undefined1, 0x10ea930);
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar5 == (uint)(bVar5 != 0);
}

/* ref: FUN_00acf980 */
byte F_00acf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf980u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = F_00bc86e0(param_1,"inquiry_template");
  if (uVar3 == 0) {
    return 0;
  }
  do {
    for (puVar2 = *(undefined4 * PTR32 *)(uVar3 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar4 = (byte *)*puVar2;
      pbVar6 = &REFG(undefined1, 0x10eab5c);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00acf9d7: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00acf9dc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00acf9d7;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00acf9dc: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
      }
    }
    uVar3 = *(uint *)(uVar3 + 0xc);
    if (uVar3 == 0) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfa30 */
uint F_00acfa30(unsigned int gen_a0)
{
  GEN_ENTER(0xacfa30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  __time64_t _Var2;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  uVar1 = F_0042d000(param_1,&REFG(undefined, 0x10eab80),(int)_Var2,(int)((ulonglong)_Var2 >> 0x20));
  return uVar1;
}

/* ref: FUN_00acfa60 */
uint F_00acfa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacfa60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c4f4ca(((byte *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0xc];
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 1))) = ((byte *)(gen_frame + 0x4))[0x10] + 1;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0];
  *(*(short * PTR32 *)&gen_args[0]) = (*(undefined2 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) + 0x76c;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 2))) = ((byte *)(gen_frame + 0x4))[8];
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 5))) = ((byte *)(gen_frame + 0x4))[4];
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)((byte *)(gen_frame + 0x4))[4];
}

/* ref: FUN_00acfad0 */
uint F_00acfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * in_ecx_00;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  in_ecx_00 = in_ecx + 8;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x33);
  F_0042b630(in_ecx + 0x48);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042aca0(in_ecx + 0x33);
  F_0042aca0(in_ecx + 0x48);
  in_ecx[0x5d] = 0;
  in_ecx[0x5e] = 0;
  in_ecx[0x32] = 0;
  return (uint)in_ecx;
}

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
uint F_00acfed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacfed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * puVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 4) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c) ^ (uint)(uint)(gen_frame + 0x11c));
    return param_3 & 0xffffff00;
  }
  uVar2 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(param_2 - 1)) {
  case 0: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea658);
    break;
  case 1: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea674);
    break;
  case 2: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea694));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               &REFG(undefined, 0x10ea6a4),"get_init",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 3: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea6b4));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               "information","get_headline_all",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 4: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6d8);
    break;
  case 5: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6f8);
    break;
  case 6: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea710);
    break;
  case 7: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea728);
    break;
  case 8: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea748);
    break;
  case 9: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea764);
    break;
  case 10: ;
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
    *(uint *)((int)this + param_1 * 4 + 0x10) = param_2;
    *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  *(uint *)((int)this + param_1 * 4 + 0x10) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  uVar2 = param_2;
switchD_00acff24_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2 & 0xffffff00;
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
uint F_00ad0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(uint *)(gen_frame + 0x118)) = uVar2;
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar4 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar4), !bVar4)))) {
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
            uVar2 = F_00acfed0(this,param_1,1,uVar3,uVar2);
            uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
            return CONCAT31((int3)(uVar5 >> 8),(char)uVar2);
          }
        }
      }
    }
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
    uVar2 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ad0470 */
uint F_00ad0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = param_1;
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar3 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar1 = CONCAT31((int3)(param_1 >> 8),bVar3), !bVar3)))) {
    uVar1 = F_0042b790((undefined *)((int)this + 0xcc));
    if (uVar1 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    uVar1 = F_0042a990((int)this + 0xcc);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar1);
    uVar1 = F_0042a990((int)this + 0x120);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"lastaccess",uVar1);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    F_0042aca0((int)this + 0xcc);
    F_0042aca0((int)this + 0x120);
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = F_00acfed0(this,param_1,2,uVar2,uVar1);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return CONCAT31((int3)(uVar4 >> 8),(char)uVar1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00ad05a0 */
uint F_00ad05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    uVar1 = F_00acfed0(this,param_1,3,0,0);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ad05e0 */
uint F_00ad05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  uVar1 = (*(uint *)(gen_frame + 0x98));
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar2 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar1 = CONCAT31((int3)((*(uint *)(gen_frame + 0x98)) >> 8),bVar2), !bVar2)))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,"</%s>",&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    uVar1 = F_00acfed0(this,param_1,4,0,0);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return CONCAT31((int3)(uVar3 >> 8),(char)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00ad0700 */
uint F_00ad0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  uVar3 = (*(uint *)(gen_frame + 0x198));
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
    return uVar3 & 0xffffff00;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  uVar3 = F_0042a990(param_2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),"queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),uVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>","queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea70c)),"get_list");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea6f8),uVar4,uVar3);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 6;
    if (uVar3 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar3;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0916;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0916: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0940 */
uint F_00ad0940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  uVar3 = (*(uint *)(gen_frame + 0x198));
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
    return uVar3 & 0xffffff00;
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
  uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea724)),"get_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea710),uVar4,uVar3);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 7;
    if (uVar3 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar3;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0b03;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0b03: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0b30 */
uint F_00ad0b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar3 = (*(uint *)(gen_frame + 0x158));
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar3 & 0xffffff00;
  }
  uVar3 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x100);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  uVar3 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10ea4d0),(int)this + 0x174);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"mainCategoryId",param_2);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"subCategoryId",param_3);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","get_template");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea728),uVar4,uVar3);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 8;
    if (uVar3 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar3;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0d0a;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0d0a: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0d30 */
uint F_00ad0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  uVar4 = param_3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
LAB_00ad0d70: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return uVar4 & 0xffffff00;
  }
  uVar3 = F_0042b790((undefined *)((int)this + 0xcc));
  uVar4 = 0;
  if (uVar3 == 0) goto LAB_00ad0d70;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var7,(int)((ulonglong)_Var7 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar4 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar4);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea51c),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"ticketId",*param_2);
  uVar4 = F_0042a990(param_2 + 1);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar4);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",param_2[0x16]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",param_2[0x17]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"status",param_2[0x18]);
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar4 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea584),uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","post_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea748),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 9;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0ff1;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0ff1: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return CONCAT31((int3)(uVar8 >> 8),uVar5);
}

/* ref: FUN_00ad1020 */
uint F_00ad1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  uVar4 = param_3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
LAB_00ad1060: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return uVar4 & 0xffffff00;
  }
  uVar3 = F_0042b790((undefined *)((int)this + 0xcc));
  uVar4 = 0;
  if (uVar3 == 0) goto LAB_00ad1060;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var7,(int)((ulonglong)_Var7 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar4 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar4);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea5b8),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  uVar4 = F_0042a990(param_2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar4);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",*(undefined4 *)(param_2 + 0x54));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",*(undefined4 *)(param_2 + 0x58));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar4 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea60c),uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "report","post_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea784),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0xb;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad12b3;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad12b3: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return CONCAT31((int3)(uVar8 >> 8),uVar5);
}

/* ref: FUN_00ad12e0 */
uint F_00ad12e0(unsigned int gen_a0, unsigned int gen_a1)
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
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  uVar4 = F_00bc86e0(param_1,"information");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xa8) != iVar6) {
    uVar5 = F_00ad41d0(iVar6,iVar6,*(int *)(param_2 + 0xa8),(undefined *)(param_2 + 0xa8));
    iVar6 = F_00485c80(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    *(uint *)(param_2 + 0xac) = uVar5;
  }
  iVar2 = *(int *)(uVar4 + 8);
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
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
      pbVar7 = pbVar8;
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00ad13e0: ;
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad13e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00ad13e0;
        pbVar7 = pbVar7 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad13e5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar3[1]);
      }
      else {
        pcVar9 = "content";
        pbVar7 = pbVar8;
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1424: ;
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1429;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1424;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad1429: ;
        if (iVar6 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x70)),puVar3[1]);
        }
        else {
          pcVar9 = "published";
          pbVar7 = pbVar8;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1468: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad146d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1468;
            pbVar7 = pbVar7 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad146d: ;
          if (iVar6 == 0) {
            (*(uint *)(gen_frame + 0x8)) = F_00c4c74c(puVar3[1]);
            (*(int *)(gen_frame + 0xc)) = (int)(*(uint *)(gen_frame + 0x8)) >> 0x1f;
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
            pbVar7 = pbVar8;
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad1510: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1515;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad1510;
              pbVar7 = pbVar7 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1515: ;
            if (iVar6 == 0) {
              (*(uint *)(gen_frame + 0x10)) = F_00c4c74c(puVar3[1]);
              (*(int *)(gen_frame + 0x14)) = (int)(*(uint *)(gen_frame + 0x10)) >> 0x1f;
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
              pbVar7 = pbVar8;
              do {
                bVar1 = *pbVar7;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad15b1: ;
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad15b6;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad15b1;
                pbVar7 = pbVar7 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad15b6: ;
              if (iVar6 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar3[1]);
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10eaaa4);
                pbVar7 = pbVar8;
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad15f5: ;
                    iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad15fa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad15f5;
                  pbVar7 = pbVar7 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00ad15fa: ;
                if (iVar6 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x17c)),puVar3[1]);
                }
                else {
                  pcVar9 = "lsb_parendid";
                  pbVar7 = pbVar8;
                  do {
                    bVar1 = *pbVar7;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad1636: ;
                      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad163b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad1636;
                    pbVar7 = pbVar7 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_00ad163b: ;
                  if (iVar6 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x128)),puVar3[1]);
                  }
                  else {
                    pcVar9 = "catId";
                    do {
                      bVar1 = *pbVar8;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad1677: ;
                        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad167c;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad1677;
                      pbVar8 = pbVar8 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_00ad167c: ;
                    if (iVar6 == 0) {
                      (*(uint *)(gen_frame + 0x1d0)) = F_00c4c74c(puVar3[1]);
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
    uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
    iVar6 = (int)uVar12;
  } while( true );
}

/* ref: FUN_00ad1700 */
uint F_00ad1700(unsigned int gen_a0, unsigned int gen_a1)
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
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = F_00bc86e0(param_1,"faq_itemList");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar2 = *(int *)(uVar4 + 8);
  this = (undefined *)(param_2 + 0xa8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar4 = F_00ad5370(this,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac)
                      );
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return CONCAT31((int3)(uVar4 >> 8),1);
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
          (*(uint *)(gen_frame + 0x64)) = F_00c4c74c(puVar3[1]);
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    F_00ad6340(this,((undefined1 *)(gen_frame + 0x10)));
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    uVar4 = (uint)uVar11;
  } while( true );
}

/* ref: FUN_00ad1850 */
uint F_00ad1850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1850u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  uVar3 = F_00bc86e0(param_1,"faq_item");
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)(uVar3 + 8);
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) == (undefined4 *)0x0) {
      uVar3 = F_00bc86e0(param_1,"faq_rel");
      if (uVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
        return 0;
      }
      iVar5 = *(int *)(uVar3 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(param_2 + 0x164);
      uVar3 = F_00ad5370((undefined *)(param_2 + 0x164),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),*(undefined4 *)(param_2 + 0x164),
                           *(undefined4 *)(param_2 + 0x168));
      do {
        if (iVar5 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return CONCAT31((int3)(uVar3 >> 8),1);
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
              (*(uint *)(gen_frame + 0x70)) = F_00c4c74c(puVar2[1]);
            }
          }
        }
        F_00ad6340((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)));
        iVar5 = *(int *)(iVar5 + 0xc);
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
        uVar3 = (uint)uVar12;
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
                  (*(uint *)(gen_frame + 0xc)) = F_00c4c74c(puVar2[1]);
                  (*(int *)(gen_frame + 0x10)) = (int)(*(uint *)(gen_frame + 0xc)) >> 0x1f;
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
    param_1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  } while( true );
}

/* ref: FUN_00ad1c60 */
uint F_00ad1c60(unsigned int gen_a0, unsigned int gen_a1)
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
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = F_00bc86e0(param_1,"report_templateList");
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar7 = *(int *)(uVar5 + 8);
  this = (uint *)(param_2 + 0xa8);
  (*(int *)(gen_frame + 0x10)) = iVar7;
  uVar5 = F_00ad54e0(this,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac)
                      );
  iVar9 = iVar7;
  do {
    if (iVar7 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return CONCAT31((int3)(uVar5 >> 8),1);
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
    uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar5 = (uint)uVar11;
    iVar9 = (*(int *)(gen_frame + 0x10));
  } while( true );
}

/* ref: FUN_00ad1dd0 */
uint F_00ad1dd0(unsigned int gen_a0, unsigned int gen_a1)
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
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  undefined * this;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  uVar5 = F_00bc86e0(param_1,"history");
  iVar6 = 0;
  if (uVar5 != 0) {
    iVar2 = *(int *)(uVar5 + 8);
    iVar6 = *(int *)(param_2 + 0xac);
    this = (undefined *)(param_2 + 0xa8);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    if (*(int *)(param_2 + 0xa8) != iVar6) {
      uVar5 = F_00ad4990(iVar6,iVar6,*(int *)(param_2 + 0xa8),this);
      iVar6 = F_00485ce0(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
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
        pbVar7 = pbVar8;
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1ed0: ;
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1ed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1ed0;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad1ed5: ;
        if (iVar6 == 0) {
          (*(uint *)(gen_frame + 0x124)) = F_00c4c74c(puVar3[1]);
        }
        else {
          pbVar10 = &REFG(undefined1, 0x10ea8b0);
          pbVar7 = pbVar8;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00ad1f17: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1f1c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00ad1f17;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1f1c: ;
          if (iVar6 == 0) {
            (*(uint *)(gen_frame + 0x128)) = F_00c4c74c(puVar3[1]);
          }
          else {
            pbVar10 = &REFG(undefined1, 0x10ea8b8);
            pbVar7 = pbVar8;
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00ad1f60: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1f65;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00ad1f60;
              pbVar7 = pbVar7 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1f65: ;
            if (iVar6 == 0) {
              F_0042b630(((undefined1 *)(gen_frame + 0x10)));
              F_0042b630(((undefined1 *)(gen_frame + 0x68)));
              F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
              for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != (undefined4 *)0x0;
                  puVar4 = (undefined4 *)puVar4[3]) {
                pbVar8 = (byte *)*puVar4;
                pcVar9 = "messageId";
                pbVar7 = pbVar8;
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1fd0: ;
                    iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1fd5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1fd0;
                  pbVar7 = pbVar7 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00ad1fd5: ;
                if (iVar6 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x12c)),puVar4[1]);
                }
                else {
                  pcVar9 = "ticketId";
                  pbVar7 = pbVar8;
                  do {
                    bVar1 = *pbVar7;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2014: ;
                      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad2019;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2014;
                    pbVar7 = pbVar7 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_00ad2019: ;
                  if (iVar6 == 0) {
                    (*(uint *)(gen_frame + 0x180)) = F_00c4c74c(puVar4[1]);
                  }
                  else {
                    pcVar9 = "summary";
                    pbVar7 = pbVar8;
                    do {
                      bVar1 = *pbVar7;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2060: ;
                        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad2065;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2060;
                      pbVar7 = pbVar7 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_00ad2065: ;
                    if (iVar6 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x184)),puVar4[1]);
                    }
                    else {
                      pcVar9 = "mainCategoryId";
                      pbVar7 = pbVar8;
                      do {
                        bVar1 = *pbVar7;
                        bVar11 = bVar1 < (byte)*pcVar9;
                        if (bVar1 != *pcVar9) {
LAB_00ad20a4: ;
                          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                          goto LAB_00ad20a9;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar7[1];
                        bVar11 = bVar1 < (byte)pcVar9[1];
                        if (bVar1 != pcVar9[1]) goto LAB_00ad20a4;
                        pbVar7 = pbVar7 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar1 != 0);
                      iVar6 = 0;
LAB_00ad20a9: ;
                      if (iVar6 == 0) {
                        (*(uint *)(gen_frame + 0x1d8)) = F_00c4c74c(puVar4[1]);
                      }
                      else {
                        pcVar9 = "subCategoryId";
                        pbVar7 = pbVar8;
                        do {
                          bVar1 = *pbVar7;
                          bVar11 = bVar1 < (byte)*pcVar9;
                          if (bVar1 != *pcVar9) {
LAB_00ad20f0: ;
                            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                            goto LAB_00ad20f5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar7[1];
                          bVar11 = bVar1 < (byte)pcVar9[1];
                          if (bVar1 != pcVar9[1]) goto LAB_00ad20f0;
                          pbVar7 = pbVar7 + 2;
                          pcVar9 = pcVar9 + 2;
                        } while (bVar1 != 0);
                        iVar6 = 0;
LAB_00ad20f5: ;
                        if (iVar6 == 0) {
                          (*(uint *)(gen_frame + 0x1dc)) = F_00c4c74c(puVar4[1]);
                        }
                        else {
                          pbVar10 = &REFG(undefined1, 0x10ea900);
                          pbVar7 = pbVar8;
                          do {
                            bVar1 = *pbVar7;
                            bVar11 = bVar1 < *pbVar10;
                            if (bVar1 != *pbVar10) {
LAB_00ad2137: ;
                              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                              goto LAB_00ad213c;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar7[1];
                            bVar11 = bVar1 < pbVar10[1];
                            if (bVar1 != pbVar10[1]) goto LAB_00ad2137;
                            pbVar7 = pbVar7 + 2;
                            pbVar10 = pbVar10 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_00ad213c: ;
                          if (iVar6 == 0) {
                            F_0042e430(((undefined1 *)(gen_frame + 0x1e0)),puVar4[1]);
                          }
                          else {
                            pcVar9 = "status";
                            pbVar7 = pbVar8;
                            do {
                              bVar1 = *pbVar7;
                              bVar11 = bVar1 < (byte)*pcVar9;
                              if (bVar1 != *pcVar9) {
LAB_00ad2180: ;
                                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                goto LAB_00ad2185;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar7[1];
                              bVar11 = bVar1 < (byte)pcVar9[1];
                              if (bVar1 != pcVar9[1]) goto LAB_00ad2180;
                              pbVar7 = pbVar7 + 2;
                              pcVar9 = pcVar9 + 2;
                            } while (bVar1 != 0);
                            iVar6 = 0;
LAB_00ad2185: ;
                            if (iVar6 == 0) {
                              (*(uint *)(gen_frame + 0x234)) = F_00c4c74c(puVar4[1]);
                            }
                            else {
                              pcVar9 = "dateTime";
                              do {
                                bVar1 = *pbVar8;
                                bVar11 = bVar1 < (byte)*pcVar9;
                                if (bVar1 != *pcVar9) {
LAB_00ad21c7: ;
                                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                  goto LAB_00ad21cc;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar8[1];
                                bVar11 = bVar1 < (byte)pcVar9[1];
                                if (bVar1 != pcVar9[1]) goto LAB_00ad21c7;
                                pbVar8 = pbVar8 + 2;
                                pcVar9 = pcVar9 + 2;
                              } while (bVar1 != 0);
                              iVar6 = 0;
LAB_00ad21cc: ;
                              if (iVar6 == 0) {
                                (*(uint *)(gen_frame + 0x0)) = F_00c4c74c(puVar4[1]);
                                (*(int *)(gen_frame + 0x4)) = (int)(*(uint *)(gen_frame + 0x0)) >> 0x1f;
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
              pbVar7 = &REFG(undefined1, 0x10ea91c);
              do {
                bVar1 = *pbVar8;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00ad2290: ;
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad2295;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00ad2290;
                pbVar8 = pbVar8 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad2295: ;
              if (iVar6 == 0) {
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
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
      iVar6 = (int)uVar12;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

/* ref: FUN_00ad2320 */
uint F_00ad2320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad2320u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  char * pcVar9;
  undefined * PTR32 * ppuVar10;
  byte * pbVar11;
  undefined4 * puVar12;
  uint * puVar13;
  uint * puVar14;
  undefined4 * puVar15;
  bool bVar16;
  ulonglong uVar17;
  
  (*(uint *)(gen_frame + 0x2c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_2;
  uVar3 = F_00bc86e0(param_1,"information");
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  puVar12 = *(undefined4 * PTR32 *)(uVar3 + 8);
  if (puVar12 != (undefined4 *)0x0) {
    pbVar4 = (byte *)*puVar12;
    pbVar8 = &REFG(undefined1, 0x10ea940);
    do {
      bVar1 = *pbVar4;
      bVar16 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00ad23a0: ;
        uVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_00ad23a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar16 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00ad23a0;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00ad23a5: ;
    if (uVar3 != 0) goto LAB_00ad2d30;
    F_00ad5b00((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8));
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x28)));
      F_0042b630(((undefined1 *)(gen_frame + 0x7c)));
      F_0042b630(((undefined1 *)(gen_frame + 0xe0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x134)));
      F_0042b630(((undefined1 *)(gen_frame + 0x188)));
      for (puVar15 = (undefined4 *)puVar12[2]; puVar15 != (undefined4 *)0x0;
          puVar15 = (undefined4 *)puVar15[3]) {
        pbVar4 = (byte *)*puVar15;
        pcVar9 = "title";
        pbVar8 = pbVar4;
        do {
          bVar1 = *pbVar8;
          bVar16 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad2430: ;
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00ad2435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar16 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad2430;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad2435: ;
        if (iVar5 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x28)),puVar15[1]);
        }
        else {
          pcVar9 = "content";
          pbVar8 = pbVar4;
          do {
            bVar1 = *pbVar8;
            bVar16 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad2474: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad2479;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar16 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad2474;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad2479: ;
          if (iVar5 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x7c)),puVar15[1]);
          }
          else {
            pcVar9 = "published";
            pbVar8 = pbVar4;
            do {
              bVar1 = *pbVar8;
              bVar16 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad24b8: ;
                iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00ad24bd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar16 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad24b8;
              pbVar8 = pbVar8 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad24bd: ;
            if (iVar5 == 0) {
              (*(uint *)(gen_frame + 0x8)) = F_00c4c74c(puVar15[1]);
              (*(int *)(gen_frame + 0xc)) = (int)(*(uint *)(gen_frame + 0x8)) >> 0x1f;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x8)));
              (*(char *)(gen_frame + 0xd2)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xd3)) = (*(undefined1 *)(gen_frame + 0x2b0));
              (*(short *)(gen_frame + 0xd0)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd4)) = (*(undefined1 *)(gen_frame + 0x2ac));
              (*(undefined1 *)(gen_frame + 0xd5)) = (*(undefined1 *)(gen_frame + 0x2a8));
              (*(undefined1 *)(gen_frame + 0xd6)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
            }
            else {
              pcVar9 = "updated";
              pbVar8 = pbVar4;
              do {
                bVar1 = *pbVar8;
                bVar16 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00ad2558: ;
                  iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad255d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar16 = bVar1 < (byte)pcVar9[1];
                if (bVar1 != pcVar9[1]) goto LAB_00ad2558;
                pbVar8 = pbVar8 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad255d: ;
              if (iVar5 == 0) {
                (*(uint *)(gen_frame + 0x18)) = F_00c4c74c(puVar15[1]);
                (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)(*(uint *)(gen_frame + 0x18)) >> 0x1f);
                F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x18)));
                (*(char *)(gen_frame + 0xda)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
                (*(undefined1 *)(gen_frame + 0xdb)) = (*(undefined1 *)(gen_frame + 0x2b0));
                (*(short *)(gen_frame + 0xd8)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
                (*(undefined1 *)(gen_frame + 0xdc)) = (*(undefined1 *)(gen_frame + 0x2ac));
                (*(undefined1 *)(gen_frame + 0xdd)) = (*(undefined1 *)(gen_frame + 0x2a8));
                (*(undefined1 *)(gen_frame + 0xde)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
              }
              else {
                pbVar11 = &REFG(undefined1, 0x10ea96c);
                pbVar8 = pbVar4;
                do {
                  bVar1 = *pbVar8;
                  bVar16 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_00ad25f8: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad25fd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar16 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_00ad25f8;
                  pbVar8 = pbVar8 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad25fd: ;
                if (iVar5 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0xe0)),puVar15[1]);
                }
                else {
                  pbVar11 = &REFG(undefined1, 0x10ea974);
                  pbVar8 = pbVar4;
                  do {
                    bVar1 = *pbVar8;
                    bVar16 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_00ad2640: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2645;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar16 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_00ad2640;
                    pbVar8 = pbVar8 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2645: ;
                  if (iVar5 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x188)),puVar15[1]);
                  }
                  else {
                    pcVar9 = "lsb_parendid";
                    pbVar8 = pbVar4;
                    do {
                      bVar1 = *pbVar8;
                      bVar16 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2684: ;
                        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_00ad2689;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar16 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2684;
                      pbVar8 = pbVar8 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar5 = 0;
LAB_00ad2689: ;
                    if (iVar5 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x134)),puVar15[1]);
                    }
                    else {
                      pcVar9 = "catId";
                      do {
                        bVar1 = *pbVar4;
                        bVar16 = bVar1 < (byte)*pcVar9;
                        if (bVar1 != *pcVar9) {
LAB_00ad26c5: ;
                          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                          goto LAB_00ad26ca;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar4[1];
                        bVar16 = bVar1 < (byte)pcVar9[1];
                        if (bVar1 != pcVar9[1]) goto LAB_00ad26c5;
                        pbVar4 = pbVar4 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar1 != 0);
                      iVar5 = 0;
LAB_00ad26ca: ;
                      if (iVar5 == 0) {
                        (*(uint *)(gen_frame + 0x1dc)) = F_00c4c74c(puVar15[1]);
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
      puVar12 = (undefined4 *)puVar12[3];
      F_0042c880(((undefined1 *)(gen_frame + 0x188)));
      F_0042c880(((undefined1 *)(gen_frame + 0x134)));
      F_0042c880(((undefined1 *)(gen_frame + 0xe0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    } while (puVar12 != (undefined4 *)0x0);
  }
  uVar6 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_categoryList");
  uVar3 = 0;
  if (uVar6 != 0) {
    puVar12 = *(undefined4 * PTR32 *)(uVar6 + 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
    if (puVar12 != (undefined4 *)0x0) {
      pbVar4 = (byte *)*puVar12;
      pcVar9 = "mainCategory";
      do {
        bVar1 = *pbVar4;
        bVar16 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00ad2795: ;
          uVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ad279a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar16 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00ad2795;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00ad279a: ;
      if (uVar3 != 0) goto LAB_00ad2d30;
      F_00ad6a20((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8));
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x23c)));
        (*(uint * PTR32 *)(gen_frame + 0x294)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x298)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x29c)) = (uint *)0x0;
        puVar15 = (undefined4 *)puVar12[2];
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar15;
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar15, puVar15 != (undefined4 *)0x0) {
          pbVar4 = (byte *)*puVar15;
          pcVar9 = "label";
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad2807: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad280c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad2807;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad280c: ;
          if (iVar5 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x23c)),puVar15[1]);
          }
          pbVar4 = (byte *)*puVar15;
          pcVar9 = "mainCategoryId";
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad2846: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad2846;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad284b: ;
          if (iVar5 == 0) {
            (*(uint *)(gen_frame + 0x290)) = F_00c4c74c(puVar15[1]);
          }
          pbVar4 = (byte *)*puVar15;
          pcVar9 = "subCategoryList";
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad2885: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad288a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad2885;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad288a: ;
          if (iVar5 == 0) {
            F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
            iVar5 = puVar15[2];
            (*(int *)(gen_frame + 0x10)) = iVar5;
            F_00ad52a0(&(*(uint * PTR32 *)(gen_frame + 0x294)),&(*(int *)(gen_frame + 0xc)),(*(uint * PTR32 *)(gen_frame + 0x294)),(*(uint * PTR32 *)(gen_frame + 0x298)));
            puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
            while (iVar5 != 0) {
              puVar14 = puVar13;
              for (puVar12 = *(undefined4 * PTR32 *)(iVar5 + 8); puVar12 != (undefined4 *)0x0;
                  puVar12 = (undefined4 *)puVar12[3]) {
                pbVar4 = (byte *)*puVar12;
                pcVar9 = "label";
                pbVar8 = pbVar4;
                do {
                  bVar1 = *pbVar8;
                  bVar16 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad2910: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad2915;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar16 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad2910;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad2915: ;
                if (iVar5 == 0) {
                  F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar12[1]);
                }
                else {
                  pcVar9 = "subCategoryId";
                  do {
                    bVar1 = *pbVar4;
                    bVar16 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2951: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2956;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar16 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2951;
                    pbVar4 = pbVar4 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2956: ;
                  if (iVar5 == 0) {
                    (*(uint *)(gen_frame + 0x238)) = F_00c4c74c(puVar12[1]);
                  }
                }
                puVar14 = (*(uint * PTR32 *)(gen_frame + 0x294));
              }
              if ((&(*(uint *)(gen_frame + 0x1e4)) < (*(uint * PTR32 *)(gen_frame + 0x298))) && (puVar14 <= &(*(uint *)(gen_frame + 0x1e4)))) {
                puVar13 = puVar14;
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar5 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar14) / 0x58;
                  if (iVar5 == -1) {
LAB_00ad2b86: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar3 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar14) / 0x58;
                  uVar6 = iVar5 + 1;
                  if (uVar3 < uVar6) {
                    if (-(uVar3 >> 1) - 1 < uVar3) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = uVar3 + (uVar3 >> 1);
                    }
                    if (uVar3 < uVar6) {
                      uVar3 = uVar6;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar3);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar2 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),puVar13 + (((int)&(*(uint *)(gen_frame + 0x1e4)) - (int)puVar14) / 0x58) * 0x16);
                  puVar2[0x15] = (puVar13 + (((int)&(*(uint *)(gen_frame + 0x1e4)) - (int)puVar14) / 0x58) * 0x16)[0x15];
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              else {
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar5 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar14) / 0x58;
                  if (iVar5 == -1) goto LAB_00ad2b86;
                  uVar3 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar14) / 0x58;
                  uVar6 = iVar5 + 1;
                  if (uVar3 < uVar6) {
                    if (-(uVar3 >> 1) - 1 < uVar3) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = uVar3 + (uVar3 >> 1);
                    }
                    if (uVar3 < uVar6) {
                      uVar3 = uVar6;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar3);
                    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar2 = (*(uint * PTR32 *)(gen_frame + 0x298));
                puVar13 = puVar14;
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),&(*(uint *)(gen_frame + 0x1e4)));
                  puVar2[0x15] = (*(uint *)(gen_frame + 0x238));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x298)) = (*(uint * PTR32 *)(gen_frame + 0x298)) + 0x16;
              iVar5 = *(int *)((*(int *)(gen_frame + 0x10)) + 0xc);
              (*(int *)(gen_frame + 0x10)) = iVar5;
              puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
              puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
            }
            F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
          }
          puVar15 = (undefined4 *)puVar15[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar15;
        }
        F_00ad6af0((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8),((undefined1 *)(gen_frame + 0x23c)));
        puVar12 = (undefined4 *)puVar12[3];
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
        F_0048a290(&(*(uint * PTR32 *)(gen_frame + 0x294)));
        F_0042c880(((undefined1 *)(gen_frame + 0x23c)));
      } while (puVar12 != (undefined4 *)0x0);
    }
    uVar6 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_itemList");
    iVar5 = (*(int *)(gen_frame + 0x20));
    uVar3 = 0;
    if (uVar6 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *(undefined4 * PTR32 *)(uVar6 + 8);
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x24)) != (undefined4 *)0x0) {
        pbVar4 = (byte *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
        pbVar8 = &REFG(undefined1, 0x10eaa10);
        do {
          bVar1 = *pbVar4;
          bVar16 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00ad2b90: ;
            uVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00ad2b95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar16 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00ad2b90;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_00ad2b95: ;
        if (uVar3 != 0) goto LAB_00ad2d30;
        F_00ad53f0((undefined *)((*(int *)(gen_frame + 0x20)) + 200),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 200),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xcc));
        do {
          F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
          for (puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]; puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)puVar12[3]) {
            pbVar4 = (byte *)*puVar12;
            pcVar9 = "title";
            pbVar8 = pbVar4;
            do {
              bVar1 = *pbVar8;
              bVar16 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad2c10: ;
                iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00ad2c15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar16 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad2c10;
              pbVar8 = pbVar8 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad2c15: ;
            if (iVar7 == 0) {
              F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar12[1]);
            }
            else {
              ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaa20));
              do {
                bVar1 = *pbVar4;
                bVar16 = bVar1 < *(byte *)ppuVar10;
                if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad2c51: ;
                  iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad2c56;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar16 = bVar1 < *(byte *)((int)ppuVar10 + 1);
                if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad2c51;
                pbVar4 = pbVar4 + 2;
                ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00ad2c56: ;
              if (iVar7 == 0) {
                (*(uint *)(gen_frame + 0x238)) = F_00c4c74c(puVar12[1]);
              }
            }
          }
          F_00ad63d0((undefined *)(iVar5 + 200),&(*(uint *)(gen_frame + 0x1e4)));
          puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
          F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
        } while (puVar12 != (undefined4 *)0x0);
      }
      uVar6 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"report_itemList");
      uVar3 = 0;
      if (uVar6 != 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8);
        uVar3 = F_00ad5470((undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),&(*(int *)(gen_frame + 0xc)),
                             *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xdc));
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *(undefined4 * PTR32 *)(uVar6 + 8);
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x24)) != (undefined4 *)0x0) {
          pbVar4 = (byte *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
          pbVar8 = &REFG(undefined1, 0x10eaa34);
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00ad2d27: ;
              uVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad2d2c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00ad2d27;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_00ad2d2c: ;
          if (uVar3 != 0) goto LAB_00ad2d30;
          do {
            puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            F_0042b630(((undefined1 *)(gen_frame + 0x1e8)));
            for (puVar12 = (undefined4 *)puVar12[2]; puVar12 != (undefined4 *)0x0;
                puVar12 = (undefined4 *)puVar12[3]) {
              pbVar4 = (byte *)*puVar12;
              pbVar11 = &REFG(undefined1, 0x10eaa3c);
              pbVar8 = pbVar4;
              do {
                bVar1 = *pbVar8;
                bVar16 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00ad2da0: ;
                  iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad2da5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar16 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00ad2da0;
                pbVar8 = pbVar8 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad2da5: ;
              if (iVar5 == 0) {
                for (puVar15 = (undefined4 *)puVar12[2]; puVar15 != (undefined4 *)0x0;
                    puVar15 = (undefined4 *)puVar15[3]) {
                  pbVar4 = (byte *)*puVar15;
                  pcVar9 = "mainCategoryId";
                  pbVar8 = pbVar4;
                  do {
                    bVar1 = *pbVar8;
                    bVar16 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2df0: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2df5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar16 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2df0;
                    pbVar8 = pbVar8 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2df5: ;
                  if (iVar5 == 0) {
                    (*(uint *)(gen_frame + 0x1e0)) = F_00c4c74c(puVar15[1]);
                  }
                  else {
                    pcVar9 = "subCategoryId";
                    do {
                      bVar1 = *pbVar4;
                      bVar16 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2e31: ;
                        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_00ad2e36;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar4[1];
                      bVar16 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2e31;
                      pbVar4 = pbVar4 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar5 = 0;
LAB_00ad2e36: ;
                    if (iVar5 == 0) {
                      (*(uint *)(gen_frame + 0x1e4)) = F_00c4c74c(puVar15[1]);
                    }
                  }
                }
              }
              else {
                pbVar8 = &REFG(undefined1, 0x10eaa64);
                do {
                  bVar1 = *pbVar4;
                  bVar16 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_00ad2e80: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad2e85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar16 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_00ad2e80;
                  pbVar4 = pbVar4 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad2e85: ;
                if (iVar5 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x1e8)),puVar12[1]);
                }
              }
            }
            F_00ad6460((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x1e0)));
            puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
            (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
            uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x1e8)));
            uVar3 = (uint)uVar17;
          } while (puVar12 != (undefined4 *)0x0);
        }
        F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_00ad2d30: ;
  F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
  return uVar3 & 0xffffff00;
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
    uVar2 = F_00ad1dd0(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  default: ;
    goto switchD_00ad2fa2_caseD_2;
  case 3: ;
    if (param_3 != 0xe8) {
      return 0;
    }
    uVar2 = F_00ad2320(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 4: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    uVar2 = F_00ad12e0(uVar2,param_2);
    local_5 = (byte)uVar2;
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
    uVar2 = F_00ad1700(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 7: ;
    if (param_3 != 0x174) {
      return 0;
    }
    uVar2 = F_00ad1850(uVar2,param_2);
    local_5 = (byte)uVar2;
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
    uVar2 = F_00ad1c60(uVar2,param_2);
    local_5 = (byte)uVar2;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
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
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)((int)param_3 + 0xa8);
    puVar2 = param_1 + 0x2a;
    do {
      F_0042ccf0(param_3,puVar2 + -0x2a);
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
      param_3 = (undefined *)((int)param_3 + 0x1b8);
      puVar3 = puVar3 + 0x6e;
      puVar2 = puVar2 + 0x6e;
    } while (puVar1 != param_2);
    return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad42d0 */
uint F_00ad42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad42d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4310 */
uint F_00ad4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    F_0042ccf0(param_3 + 2,param_1 + 2);
    param_1 = param_1 + 0x17;
    param_3 = param_3 + 0x17;
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4360 */
uint F_00ad4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    param_1 = param_1 + 0x54;
    param_3 = (undefined *)((int)param_3 + 0x54);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad43a0 */
uint F_00ad43a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      F_0042ccf0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      param_1 = param_1 + 0x58;
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (param_1 != param_2);
  }
  return (uint)param_3;
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      F_0042ccf0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      param_1 = param_1 + 0x58;
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (param_1 != param_2);
  }
  return (uint)param_3;
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      F_0042ccf0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      param_1 = param_1 + 0x58;
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (param_1 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad48c0 */
uint F_00ad48c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad48c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      F_0042ccf0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      param_1 = param_1 + 0x58;
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (param_1 != param_2);
  }
  return (uint)param_3;
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
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    F_0042ccf0(param_3,param_1);
    param_3 = (undefined *)((int)param_3 + 0x54);
  }
  return (uint)param_3;
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
  int iVar2;
  undefined4 * this;
  
  if (param_1 != param_2) {
    this = param_3 + 0x18;
    iVar2 = param_1 + 0x60;
    do {
      *param_3 = *(undefined4 *)(iVar2 + -0x60);
      this[-0x17] = *(undefined4 *)(iVar2 + -0x5c);
      F_0042ccf0(this + -0x16,iVar2 + -0x58);
      this[-1] = *(undefined4 *)(iVar2 + -4);
      F_0042ccf0(this,iVar2);
      this[0x15] = *(undefined4 *)(iVar2 + 0x54);
      this[0x16] = *(undefined4 *)(iVar2 + 0x58);
      F_0042ccf0(this + 0x17,iVar2 + 0x5c);
      this[0x2c] = *(undefined4 *)(iVar2 + 0xb0);
      this[0x2d] = *(undefined4 *)(iVar2 + 0xb4);
      this[0x2e] = *(undefined4 *)(iVar2 + 0xb8);
      F_0042ccf0(this + 0x2f,iVar2 + 0xbc);
      iVar1 = iVar2 + 0x110;
      param_3 = param_3 + 0x5c;
      this = this + 0x5c;
      iVar2 = iVar2 + 0x170;
    } while (iVar1 != param_2);
    return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4d60 */
uint F_00ad4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_00ad36e0(param_3,param_1);
    }
    param_1 = param_1 + 0x1b8;
    param_3 = (undefined *)((int)param_3 + 0x1b8);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4da0 */
uint F_00ad4da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4de0 */
uint F_00ad4de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
    param_1 = param_1 + 0x58;
    param_3 = (undefined *)((int)param_3 + 0x58);
  } while (param_1 != param_2);
  return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      F_0042cbc0(param_3 + 2,param_1 + 2);
    }
    param_1 = param_1 + 0x17;
    param_3 = param_3 + 0x17;
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4e70 */
uint F_00ad4e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
    }
    param_1 = param_1 + 0x54;
    param_3 = (undefined *)((int)param_3 + 0x54);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00ad4eb0 */
uint F_00ad4eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4ef0 */
uint F_00ad4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4f30 */
uint F_00ad4f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00ad36e0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x1b8);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4f70 */
uint F_00ad4f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4fb0 */
uint F_00ad4fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4fb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x54);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
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
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + -8);
        param_3[1] = *(undefined4 *)(iVar2 + -4);
        F_00ad37e0(param_3 + 2,iVar2);
        F_0042cbc0(param_3 + 0x47,iVar2 + 0x114);
      }
      iVar1 = iVar2 + 0x168;
      param_3 = param_3 + 0x5c;
      iVar2 = iVar2 + 0x170;
    } while (iVar1 != param_2);
    return (uint)param_3;
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad5100 */
uint F_00ad5100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad5140 */
uint F_00ad5140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5140u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_00ad36e0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x1b8);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad5180 */
uint F_00ad5180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00ad51c0 */
uint F_00ad51c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad51c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x58);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
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
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x54);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
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
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x58)) {
      F_0042ccf0(this_00,param_3);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)param_3 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x58)) {
      F_0042c880(this_01);
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
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x58)) {
      F_0042ccf0(this_00,param_3);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)param_3 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x58)) {
      F_0042c880(this_01);
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
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x58)) {
      F_0042ccf0(this_00,param_3);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)param_3 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x58)) {
      F_0042c880(this_01);
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
  undefined * this_01;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (; param_3 != pvVar1; param_3 = (undefined *)((int)param_3 + 0x54)) {
      F_0042ccf0(this_00,param_3);
      this_00 = (undefined *)((int)this_00 + 0x54);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_01 = this_00; this_01 != pvVar1; this_01 = (undefined *)((int)this_01 + 0x54)) {
      F_0042c880(this_01);
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
unsigned int F_00ad58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x5c) < param_1) {
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
  return 0;
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
unsigned int F_00ad5bc0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad5560(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad5560(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00ad5c50 */
unsigned int F_00ad5c50(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad5640(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad5640(this,uVar1);
  }
  return 0;
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
unsigned int F_00ad5d30(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad5720(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad5720(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00ad5dc0 */
unsigned int F_00ad5dc0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad5800(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad5800(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00ad5e50 */
unsigned int F_00ad5e50(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad58e0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad58e0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00ad5ee0 */
unsigned int F_00ad5ee0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad59d0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad59d0(this,uVar1);
  }
  return 0;
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
  undefined4 * puVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ad5e50(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x5c) * 0x5c + *(int *)this)));
  }
  else if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_00ad5e50(this,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar3 = F_0042cbc0(puVar1 + 2,param_1 + 2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x5c;
  return uVar3;
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
unsigned int F_00ad6560(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad5f70(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad5f70(this,uVar1);
  }
  return 0;
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
    param_1 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x170) * 0x170 + *(int *)this)));
  }
  else if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
    F_00ad6560(this,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    F_00ad37e0(puVar1 + 2,param_1 + 2);
    F_0042cbc0(puVar1 + 0x47,param_1 + 0x47);
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    F_00ad6050((undefined *)((int)param_3 + 0x58),param_1 + 0x58);
    param_1 = param_1 + 0x68;
    param_3 = (undefined *)((int)param_3 + 0x68);
  } while (param_1 != param_2);
  return (uint)param_3;
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
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      F_00490be0((undefined *)((int)param_3 + 0x58),param_1 + 0x58);
    }
    param_1 = param_1 + 0x68;
    param_3 = (undefined *)((int)param_3 + 0x68);
  } while (param_1 != param_2);
  return (uint)param_3;
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
unsigned int F_00ad6a60(unsigned int gen_a0, unsigned int gen_a1)
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
      F_00ad6950(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00ad6950(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00ad6af0 */
unsigned int F_00ad6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad6af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad6a60(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    param_1 = ((int)(param_1 - uVar2) / 0x68) * 0x68 + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00ad6b74;
    F_0042cbc0(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ad6a60(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00ad6b74;
    F_0042cbc0(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  }
  F_00490be0((undefined *)((int)this_00 + 0x58),param_1 + 0x58);
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
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00ad6db0 */
uint F_00ad6db0(unsigned int gen_a0)
{
  GEN_ENTER(0xad6db0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
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
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x65)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x65);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00ad6e30 */
uint F_00ad6e30(unsigned int gen_a0)
{
  GEN_ENTER(0xad6e30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x65);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x65);
    param_1 = piVar3;
  }
  return (uint)param_1;
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
unsigned int F_00ad6f20(unsigned int gen_a0)
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
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00ad6f80 */
unsigned int F_00ad6f80(unsigned int gen_a0)
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
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
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
unsigned int F_00ad7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
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

/* ref: FUN_00ad7480 */
unsigned int F_00ad7480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00ad74f0 */
unsigned int F_00ad74f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad74f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x65) == '\0') {
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

/* ref: FUN_00ad7550 */
unsigned int F_00ad7550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad7550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x65))) == '\0') {
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

