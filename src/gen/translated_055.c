#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006ebda0 */
uint F_006ebda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  bool bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_006ea2d0(param_1,param_3,param_4);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10b7ff8),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_3,((undefined1 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  F_0042aca0(param_3);
  bVar1 = 1 < (byte)param_2;
  if (bVar1) {
    F_00c472af(((undefined1 *)(gen_frame + 0x70)),8,&REFG(undefined, 0x10b7ffc),(uint)(byte)param_2);
  }
  if (((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54 == 2) {
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)));
    F_0042e370(param_3,(*(undefined * PTR32 (*)[1])REFP(0x10b8000)));
    if (bVar1) {
      F_0042e370(param_3,((undefined1 *)(gen_frame + 0x70)));
    }
    F_0042e370(param_3,&REFG(undefined, 0x10b8004));
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)) + 0x54);
  }
  F_0042e370(param_4,(*(undefined * PTR32 (*)[1])REFP(0x10b8008)));
  if (bVar1) {
    F_0042e370(param_4,((undefined1 *)(gen_frame + 0x70)));
  }
  uVar2 = F_004876d0(&(*(int *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_006ebec0 */
uint F_006ebec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0xc)));
  F_006ea2d0((int)this + 0x410,((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  F_0042ce40(((undefined1 *)(gen_frame + 0x60)),"%s/%s",REFG(undefined * PTR32, 0x132372c),uVar1);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar1);
  F_006e8f60(this,0,0xffffffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar2;
}

/* ref: FUN_006ebf80 */
uint F_006ebf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ebf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(ushort *)((int)this + 0x20c) = (ushort)param_1;
  F_007440c0((undefined *)((int)this + 0x6fc));
  F_007443b0((undefined *)((int)this + 0x70c));
  if (*(int *)((int)this + 0x210) != 0) {
    F_006e5450(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 8))),0);
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  uVar1 = F_00ab1c90((uint)(ushort)param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 8) != 0)) {
    uVar1 = F_006eb2d0(this,*(int *)(uVar1 + 8),0);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x210) = uVar1;
    }
  }
  uVar1 = F_006e33b0(this);
  if (*(int *)((int)this + 0x238) != 0) {
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x240) = 0xe0000000;
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined1 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined1 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0x254) = 0;
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined1 *)((int)this + 0x25c) = 0;
  }
  return uVar1;
}

/* ref: FUN_006ec050 */
uint F_006ec050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ec050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006eb2d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006ec060 */
uint F_006ec060(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b8604));
  *(undefined * PTR32 *)((int)this + 0xc) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[136])REFP(0x10b882c));
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  F_00751140((undefined4 *)((int)this + 0x4c),8);
  F_00751140((undefined4 *)((int)this + 0x5c),8);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0xff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  F_0074ce90((undefined *)((int)this + 0x2c),0xc);
  F_0074d050((undefined *)((int)this + 0x3c),0x40);
  *(undefined2 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd6) = 0;
  *(undefined2 *)((int)this + 0xda) = 0;
  return (uint)this;
}

/* ref: FUN_006ec190 */
unsigned int F_006ec190(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004d1660(REFG(undefined4, 0x1370c18));
  F_006e68e0(this);
  return 0;
}

/* ref: FUN_006ec1b0 */
uint F_006ec1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ec1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006e87e0((undefined *)((int)this + 0x4c));
  F_006c5500((undefined *)((int)this + 0x70));
  uVar1 = F_006d7210(this,*(undefined4 *)((int)this + 0x6c));
  return uVar1;
}

/* ref: FUN_006ec1d0 */
uint F_006ec1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6ec1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int * this_00;
  undefined8 uVar5;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(int *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x144))(param_1);
    F_00a6ef00(&REFG(undefined, 0x14ab428));
  }
  F_00751e80((undefined *)((int)this + 0x14),&(*(int * PTR32 *)(gen_frame + 0x4)));
  pvVar1 = REFG(void * PTR32, 0x1379694);
  iVar4 = param_2;
  if (*(int *)((int)this + 0x24) == 1) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    *(undefined4 *)((int)this + 0xc0) = *puVar2;
    *(undefined4 *)((int)this + 0xc4) = puVar2[1];
    *(undefined4 *)((int)this + 200) = puVar2[2];
    F_0071edf0(&(*(undefined8 *)(gen_frame + 0x10)));
    F_006b9490(&(*(undefined8 *)(gen_frame + 0x10)),1,pvVar1);
    F_007511f0((undefined *)((int)this + 0x2c),&(*(undefined8 *)(gen_frame + 0x10)));
    iVar4 = (*(int *)(gen_frame + 0x8));
  }
  if (iVar4 == -0x20000000) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar4,(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
  if (uVar3 == 3) {
    F_0071edf0(&(*(undefined8 *)(gen_frame + 0x10)));
    F_006b9490(&(*(undefined8 *)(gen_frame + 0x10)),2,this_00);
  }
  else {
    if (uVar3 != 7) goto LAB_006ec356;
    F_0071edf0(&(*(undefined8 *)(gen_frame + 0x10)));
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    uVar5 = ((gen_lcode *)*(gen_code32 *)*this_00)(this_00);
    (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(this_00 + 0x22);
    (*(undefined8 *)(gen_frame + 0x10)) = uVar5;
    puVar2 = (undefined4 *)F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x68)) = *puVar2;
    (*(undefined4 *)(gen_frame + 0x6c)) = puVar2[1];
    (*(undefined4 *)(gen_frame + 0x70)) = puVar2[2];
    (*(int *)(gen_frame + 0x74)) = this_00[0x2c];
    (*(uint *)(gen_frame + 0x7c)) = (uint)*(ushort *)((int)this_00 + 0x18a);
  }
  F_007511f0((undefined *)((int)this + 0x2c),&(*(undefined8 *)(gen_frame + 0x10)));
LAB_006ec356: ;
  uVar3 = F_00af2010();
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: FUN_006ec370 */
uint F_006ec370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xd5) = 0;
  F_00ab6d10();
  F_00ab6e10();
  uVar1 = F_006e88c0((undefined *)((int)this + 0x4c),param_1);
  return uVar1;
}

/* ref: FUN_006ec3a0 */
uint F_006ec3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00754690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_006ec3b0 */
uint F_006ec3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_006ec3d0 */
uint F_006ec3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236dc));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar3 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar4 = uVar2 + 2;
    F_00a01c40(param_1,iVar4,"className",puVar1);
    F_00a01c80(param_1,iVar4,"referenceCount",1);
    F_00a01cc0(param_1,iVar4,&REFG(undefined, 0x10b4254),((code *)REFP(0x6cade0)));
    F_00a01cc0(param_1,iVar4,"IsEventNpc",((code *)REFP(0x6cae40)));
    F_00a01cc0(param_1,iVar4,"IsBattleNpc",((code *)REFP(0x6caea0)));
    F_00a01cc0(param_1,iVar4,"IsRetainer",((code *)REFP(0x6caf00)));
    F_00a01cc0(param_1,iVar4,"IsEventObject",((code *)REFP(0x6caf60)));
    F_00a01cc0(param_1,iVar4,"IsAetheryte",((code *)REFP(0x6cafc0)));
    F_00a01cc0(param_1,iVar4,"GetBaseId",((code *)REFP(0x6cabe0)));
    F_00a01cc0(param_1,iVar4,"GetLayoutId",((code *)REFP(0x6cac50)));
    F_00a01cc0(param_1,iVar4,"GetContentId",((code *)REFP(0x6cad20)));
    F_00a01cc0(param_1,iVar4,"IsContent",((code *)REFP(0x6cad80)));
    F_00a01cc0(param_1,iVar4,"IsInContent",((code *)REFP(0x6cad80)));
    F_00a01cc0(param_1,iVar4,&REFG(undefined, 0x10b42dc),((code *)REFP(0x6b9e60)));
    F_00a01cc0(param_1,iVar4,"MotionTalk",((code *)REFP(0x6b9e80)));
    F_00a01cc0(param_1,iVar4,"WalkOutTalk",((code *)REFP(0x6b9ea0)));
    F_00a01cc0(param_1,iVar4,"TalkAsync",((code *)REFP(0x6b9ec0)));
    F_00a01cc0(param_1,iVar4,"CloseTalk",((code *)REFP(0x6b9f00)));
    F_00a01cc0(param_1,iVar4,"GetPosition",((code *)REFP(0x6caca0)));
    F_00a01cc0(param_1,iVar4,"Position",((code *)REFP(0x6baf20)));
    F_00a01cc0(param_1,iVar4,"Visible",((code *)REFP(0x6baf40)));
    F_00a01cc0(param_1,iVar4,"Direction",((code *)REFP(0x6baf60)));
    F_00a01cc0(param_1,iVar4,"EndEventRollback",((code *)REFP(0x6bb140)));
    F_00a01cc0(param_1,iVar4,"WalkIn",((code *)REFP(0x6bb1c0)));
    F_00a01cc0(param_1,iVar4,"WalkOut",((code *)REFP(0x6bb1e0)));
    F_00a01cc0(param_1,iVar4,"BattleMode",((code *)REFP(0x6bb200)));
    F_00a01cc0(param_1,iVar4,"EquipWeapon",((code *)REFP(0x6bb220)));
    F_00a01cc0(param_1,iVar4,"EquipArmor",((code *)REFP(0x6bb240)));
    F_00a01cc0(param_1,iVar4,"Equip",((code *)REFP(0x6bb260)));
    F_00a01cc0(param_1,iVar4,"AutoShake",((code *)REFP(0x6bb280)));
    F_00a01cc0(param_1,iVar4,"SetSceneEndRollback",((code *)REFP(0x6ca830)));
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar4);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236dc),0);
  return 1;
}

/* ref: FUN_006ec6e0 */
uint F_006ec6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236e4);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236e4));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetNpcId",((code *)REFP(0x6cabe0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236e4),0);
  return 1;
}

/* ref: FUN_006ec890 */
uint F_006ec890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ec890u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236e8);
  puVar1 = REFG(undefined * PTR32, 0x13236e4);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236e8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetModel",((code *)REFP(0x6cb1c0)));
    F_00a01cc0(param_1,iVar5,"GetRace",((code *)REFP(0x734340)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x7343b0)));
    F_00a01cc0(param_1,iVar5,"GetTribe",((code *)REFP(0x734420)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236e8),0);
  return 1;
}

/* ref: FUN_006eca70 */
uint F_006eca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236ec);
  puVar1 = REFG(undefined * PTR32, 0x13236e4);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236ec));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetClassJob",((code *)REFP(0x6cb250)));
    F_00a01cc0(param_1,iVar5,"GetClassLevel",((code *)REFP(0x6cb380)));
    F_00a01cc0(param_1,iVar5,"GetModel",((code *)REFP(0x6cb2f0)));
    F_00a01cc0(param_1,iVar5,"GetHp",((code *)REFP(0x6cb3e0)));
    F_00a01cc0(param_1,iVar5,"GetHpMax",((code *)REFP(0x6cb4c0)));
    F_00a01cc0(param_1,iVar5,"GetHpPercent",((code *)REFP(0x6cb460)));
    F_00a01cc0(param_1,iVar5,"GetMp",((code *)REFP(0x6cb520)));
    F_00a01cc0(param_1,iVar5,"GetMpMax",((code *)REFP(0x6cb600)));
    F_00a01cc0(param_1,iVar5,"GetMpPercent",((code *)REFP(0x6cb5a0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236ec),0);
  return 1;
}

/* ref: FUN_006eccb0 */
uint F_006eccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f0);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f0));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetRace",((code *)REFP(0x734490)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x7344f0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236f0),0);
  return 1;
}

/* ref: FUN_006ece70 */
uint F_006ece70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ece70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f4);
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f4));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"PlaySharedGroupTimeline",((code *)REFP(0x6baf80)));
    F_00a01cc0(param_1,iVar5,"SetSharedGroupTimelineState",((code *)REFP(0x6bafa0)));
    F_00a01cc0(param_1,iVar5,"PlayQuestGimmickReaction",((code *)REFP(0x6bafc0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236f4),0);
  return 1;
}

/* ref: FUN_006ed040 */
uint F_006ed040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed040u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236fc);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236fc));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"GetCurrentEvent",((code *)REFP(0x6db050)));
    F_00a01cc0(param_1,iVar5,"GetClassJob",((code *)REFP(0x6cba90)));
    F_00a01cc0(param_1,iVar5,"GetClass",((code *)REFP(0x6cbaf0)));
    F_00a01cc0(param_1,iVar5,"GetClassLevel",((code *)REFP(0x6cbb50)));
    F_00a01cc0(param_1,iVar5,"GetClassLevelMax",((code *)REFP(0x6cbc50)));
    F_00a01cc0(param_1,iVar5,"GetFirstClass",((code *)REFP(0x6cbcf0)));
    F_00a01cc0(param_1,iVar5,"GetSex",((code *)REFP(0x6cbd60)));
    F_00a01cc0(param_1,iVar5,"GetStartTown",((code *)REFP(0x6cd390)));
    F_00a01cc0(param_1,iVar5,"GetQuestSequence",((code *)REFP(0x6cc000)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8A",((code *)REFP(0x7347d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8B",((code *)REFP(0x734850)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8C",((code *)REFP(0x7348d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8D",((code *)REFP(0x734950)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8E",((code *)REFP(0x7349d0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI8F",((code *)REFP(0x734a50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8A",((code *)REFP(0x734ad0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8B",((code *)REFP(0x734b50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8C",((code *)REFP(0x734bd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8D",((code *)REFP(0x734c50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8E",((code *)REFP(0x734cd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8F",((code *)REFP(0x734d50)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8AH",((code *)REFP(0x734dd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8BH",((code *)REFP(0x734e60)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8CH",((code *)REFP(0x734ef0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8DH",((code *)REFP(0x734f80)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8EH",((code *)REFP(0x735010)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8FH",((code *)REFP(0x7350a0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8AL",((code *)REFP(0x735130)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8BL",((code *)REFP(0x7351b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8CL",((code *)REFP(0x735230)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8DL",((code *)REFP(0x7352b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8EL",((code *)REFP(0x735330)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI8FL",((code *)REFP(0x7353b0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16A",((code *)REFP(0x735430)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16B",((code *)REFP(0x7354c0)));
    F_00a01cc0(param_1,iVar5,"GetQuestI16C",((code *)REFP(0x735550)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16A",((code *)REFP(0x7355e0)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16B",((code *)REFP(0x735670)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI16C",((code *)REFP(0x735700)));
    F_00a01cc0(param_1,iVar5,"GetQuestI32A",((code *)REFP(0x735790)));
    F_00a01cc0(param_1,iVar5,"GetQuestUI32A",((code *)REFP(0x735800)));
    F_00a01cc0(param_1,iVar5,"GetQuestBranch",((code *)REFP(0x734cd0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag8",((code *)REFP(0x735870)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag16",((code *)REFP(0x7358f0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag24",((code *)REFP(0x735970)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag32",((code *)REFP(0x7359f0)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag40",((code *)REFP(0x735a70)));
    F_00a01cc0(param_1,iVar5,"GetQuestBitFlag48",((code *)REFP(0x735af0)));
    F_00a01cc0(param_1,iVar5,"IsQuestCompleted",((code *)REFP(0x6cbf20)));
    F_00a01cc0(param_1,iVar5,"IsQuestAccepted",((code *)REFP(0x6cbe50)));
    F_00a01cc0(param_1,iVar5,"IsQuestAcceptQualified",((code *)REFP(0x6e4080)));
    F_00a01cc0(param_1,iVar5,"IsQuestProgressQualified",((code *)REFP(0x6e4080)));
    F_00a01cc0(param_1,iVar5,"IsEpicQuestAccepted",((code *)REFP(0x6d5560)));
    F_00a01cc0(param_1,iVar5,"IsEpicQuestAcceptedAny",((code *)REFP(0x6cc0b0)));
    F_00a01cc0(param_1,iVar5,"GetLegacyEpicQuestWeapon",((code *)REFP(0x6cc150)));
    F_00a01cc0(param_1,iVar5,"GetLegacyEpicQuestSequence",((code *)REFP(0x6cc1f0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfNewLetters",((code *)REFP(0x6cb6c0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfDeniedLetters",((code *)REFP(0x6cb750)));
    F_00a01cc0(param_1,iVar5,"GetLetterBoxUsage",((code *)REFP(0x6cb7e0)));
    F_00a01cc0(param_1,iVar5,"IsReward",((code *)REFP(0x6cc260)));
    F_00a01cc0(param_1,iVar5,"IsHowTo",((code *)REFP(0x6cc390)));
    F_00a01cc0(param_1,iVar5,"IsChocoboTaxiStand",((code *)REFP(0x6cc420)));
    F_00a01cc0(param_1,iVar5,"GetGil",((code *)REFP(0x6cc4b0)));
    F_00a01cc0(param_1,iVar5,"IsMount",((code *)REFP(0x6ccde0)));
    F_00a01cc0(param_1,iVar5,"IsParty",((code *)REFP(0x6cce70)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItem",((code *)REFP(0x6cc520)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItemLevel",((code *)REFP(0x6cc580)));
    F_00a01cc0(param_1,iVar5,"GetEquippedItemEquipLevel",((code *)REFP(0x6cc610)));
    F_00a01cc0(param_1,iVar5,"GetNumOfItems",((code *)REFP(0x6cc6a0)));
    F_00a01cc0(param_1,iVar5,"GetNumOfNqItems",((code *)REFP(0x6cc850)));
    F_00a01cc0(param_1,iVar5,"GetNumOfHqItems",((code *)REFP(0x6cc900)));
    F_00a01cc0(param_1,iVar5,"IsItemObtainable",((code *)REFP(0x6bb320)));
    F_00a01cc0(param_1,iVar5,"IsClassJobBattle",((code *)REFP(0x6cc9e0)));
    F_00a01cc0(param_1,iVar5,"IsClassJobFighter",((code *)REFP(0x6cca80)));
    F_00a01cc0(param_1,iVar5,"IsClassJobSorcerer",((code *)REFP(0x6ccb20)));
    F_00a01cc0(param_1,iVar5,"IsClassJobLive",((code *)REFP(0x6ccbc0)));
    F_00a01cc0(param_1,iVar5,"IsClassJobGatherer",((code *)REFP(0x6ccc60)));
    F_00a01cc0(param_1,iVar5,"IsClassJobCrafter",((code *)REFP(0x6ccd00)));
    F_00a01cc0(param_1,iVar5,"IsChocoboTaxiPossible",((code *)REFP(0x6ccd70)));
    F_00a01cc0(param_1,iVar5,"IsInstanceContentUnlocked",((code *)REFP(0x6cd440)));
    F_00a01cc0(param_1,iVar5,"IsInstanceContentCompleted",((code *)REFP(0x6cd4b0)));
    F_00a01cc0(param_1,iVar5,"IsContentFinderUnlocked",((code *)REFP(0x6cba30)));
    F_00a01cc0(param_1,iVar5,"GetGrandCompany",((code *)REFP(0x6ccee0)));
    F_00a01cc0(param_1,iVar5,"GetGrandCompanyRank",((code *)REFP(0x6ccf40)));
    F_00a01cc0(param_1,iVar5,"IsItemsEquipped",((code *)REFP(0x6ccfc0)));
    F_00a01cc0(param_1,iVar5,"IsLegacy",((code *)REFP(0x6cd0a0)));
    F_00a01cc0(param_1,iVar5,"IsWarriorOfLight",((code *)REFP(0x6cd110)));
    F_00a01cc0(param_1,iVar5,"IsGCRankUpQuestCompleted",((code *)REFP(0x6cb900)));
    F_00a01cc0(param_1,iVar5,"IsMonsterNoteGCRankCompleted",((code *)REFP(0x6cb980)));
    F_00a01cc0(param_1,iVar5,"GetHomePoint",((code *)REFP(0x6cd180)));
    F_00a01cc0(param_1,iVar5,"IsAetheryte",((code *)REFP(0x6cd1d0)));
    F_00a01cc0(param_1,iVar5,"GetFavoritePoint",((code *)REFP(0x6cd260)));
    F_00a01cc0(param_1,iVar5,"IsFavoritePoint",((code *)REFP(0x6cd2c0)));
    F_00a01cc0(param_1,iVar5,"GetEmptyFavoriteIndex",((code *)REFP(0x6cd330)));
    F_00a01cc0(param_1,iVar5,"IsBuddyExist",((code *)REFP(0x6cd3e0)));
    F_00a01cc0(param_1,iVar5,"IsActionReward",((code *)REFP(0x6cc2f0)));
    F_00a01cc0(param_1,iVar5,"IsFreeCompany",((code *)REFP(0x6cd520)));
    F_00a01cc0(param_1,iVar5,"GetHp",((code *)REFP(0x6cd580)));
    F_00a01cc0(param_1,iVar5,"GetHpMax",((code *)REFP(0x6cd660)));
    F_00a01cc0(param_1,iVar5,"GetHpPercent",((code *)REFP(0x6cd600)));
    F_00a01cc0(param_1,iVar5,"GetMp",((code *)REFP(0x6cd6c0)));
    F_00a01cc0(param_1,iVar5,"GetMpMax",((code *)REFP(0x6cd7a0)));
    F_00a01cc0(param_1,iVar5,"GetMpPercent",((code *)REFP(0x6cd740)));
    F_00a01cc0(param_1,iVar5,"IsRight",((code *)REFP(0x6cd800)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x13236e0),REFG(undefined * PTR32, 0x13236fc),0);
  return 1;
}

/* ref: FUN_006ed930 */
uint F_006ed930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 8;
  uVar2 = F_006ec3d0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ca8b0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ed040(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ec6e0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ec890(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eca70(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eccb0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ece70(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006cb020(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  return uVar2;
}

/* ref: Client::Game::Event::LuaActorModule::vf4 */
uint F_006ed9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ed9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006ed930(this,1);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf38 */
uint F_006ed9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ed9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(short *)(this + 0x54) != -1) && (*(int *)(this + 0x60) == 0)) {
    *(undefined4 *)(this + 0x60) = param_1;
  }
  iVar1 = *(int *)(this + 4);
  *(undefined1 *)(iVar1 + 0xd5) = 0;
  F_00ab6d10();
  F_00ab6e10();
  uVar2 = F_006e88c0((undefined *)(iVar1 + 0x4c),param_1);
  return uVar2;
}

/* ref: FUN_006eda10 */
uint F_006eda10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eda10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
  for (piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))); piVar3 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
      piVar3 = piVar3 + 1) {
    if (*(int *)(*piVar3 + 8) == (*(uint *)&gen_args[1])) {
      return (uint)piVar3;
    }
  }
  uVar4 = F_006eb2d0(REFG(void * PTR32, 0x1488344),(*(uint *)&gen_args[1]),0);
  if (uVar4 == 0) {
    return 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
  (*(uint *)&gen_args[1]) = uVar4;
  if (&(*(uint *)&gen_args[1]) < puVar1) {
    puVar2 = (undefined4 *)*this_00;
    if (puVar2 <= &(*(uint *)&gen_args[1])) {
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)))) {
        F_00751c10(this_00,1);
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
      puVar5 = (uint *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) + 4;
        return (uint)puVar1;
      }
      goto LAB_006edaac;
    }
  }
  if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)))) {
    F_00751c10(this_00,1);
  }
  puVar5 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)));
  if (puVar5 != (uint *)0x0) {
    *puVar5 = uVar4;
  }
LAB_006edaac: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) + 4;
  return (uint)puVar5;
}

/* ref: FUN_006edac0 */
uint F_006edac0(unsigned int gen_a0)
{
  GEN_ENTER(0x6edac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006eda10(this,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006edb10 */
uint F_006edb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6edb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  uint * puVar9;
  int * piVar10;
  uint uVar11;
  
  iVar3 = *(int *)(*param_1 + 4);
  uVar11 = 0;
  puVar9 = (uint *)((int)this + 0xf8);
  do {
    iVar4 = *(int *)(iVar3 + uVar11 * 4);
    piVar8 = (int *)0x0;
    if (iVar4 != 0) {
      if (*(int *)((int)this + 0x14) == 0) {
        piVar8 = (int *)F_006eb2d0(REFG(void * PTR32, 0x1488344),iVar4,0);
        *puVar9 = (uint)piVar8;
      }
      else {
        piVar8 = *(int * PTR32 *)((int)this + 0x10);
        piVar10 = (int *)*piVar8;
        if (piVar10 != piVar8) {
          do {
            uVar7 = F_006eb2d0(REFG(void * PTR32, 0x1488344),*(undefined4 *)(iVar3 + uVar11 * 4),piVar10[3]);
            *puVar9 = uVar7;
            if (*(char *)((int)piVar10 + 0x11) == '\0') {
              piVar8 = (int *)piVar10[2];
              if (*(char *)((int)piVar8 + 0x11) == '\0') {
                cVar1 = *(char *)(*piVar8 + 0x11);
                piVar10 = piVar8;
                piVar8 = (int *)*piVar8;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar8 + 0x11);
                  piVar10 = piVar8;
                  piVar8 = (int *)*piVar8;
                }
              }
              else {
                cVar1 = *(char *)(piVar10[1] + 0x11);
                piVar6 = (int *)piVar10[1];
                piVar8 = piVar10;
                while ((piVar10 = piVar6, cVar1 == '\0' && (piVar8 == (int *)piVar10[2]))) {
                  cVar1 = *(char *)(piVar10[1] + 0x11);
                  piVar6 = (int *)piVar10[1];
                  piVar8 = piVar10;
                }
              }
            }
            piVar8 = this;
          } while (piVar10 != *(int * PTR32 *)((int)this + 0x10));
        }
      }
      if (*puVar9 != 0) {
        puVar9 = puVar9 + 1;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x10);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x13c);
  if (puVar5 != (undefined4 *)0x0) {
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar5)(puVar5,1)));
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar2 = *(byte *)((int)this + 0x1c);
  uVar11 = CONCAT31((int3)((uint)((int)(uintptr_t)piVar8) >> 8),bVar2);
  if ((bVar2 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar2 | 1;
    uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
  }
  return uVar11;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf141 */
uint F_006edc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6edc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar1 = *(undefined4 *)(this + 0x10);
    puVar1[1] = *(undefined4 *)(this + 0x10);
    puVar1[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar1 + 4) = 0;
    if (puVar1 + 3 != (int *)0x0) {
      puVar1[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  }
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  uVar2 = *(uint *)(this + 0x40);
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  if (((byte)this[0x1c] & 1) != 0) {
    puVar1 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar1 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 8))((int *)*puVar1);
        if ((char)uVar2 == '\0') {
          return (*(uint *)(gen_frame + 0x8));
        }
        puVar1 = puVar1 + 1;
      } while (puVar1 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    pAVar3 = this + 0xf8;
    iVar4 = 0x10;
    do {
      if (*(int *)pAVar3 != 0) {
        F_006eb2d0(REFG(void * PTR32, 0x1488344),*(undefined4 *)(*(int *)pAVar3 + 8),param_1);
      }
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + -1;
      uVar2 = (*(uint *)(gen_frame + 0x8));
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_006edcf0 */
ushort F_006edcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42, unsigned int gen_a43, unsigned int gen_a44, unsigned int gen_a45, unsigned int gen_a46)
{
  GEN_ENTER(0x6edcf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[47];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  gen_args[42] = gen_a42;
  gen_args[43] = gen_a43;
  gen_args[44] = gen_a44;
  gen_args[45] = gen_a45;
  gen_args[46] = gen_a46;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ushort * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int * piVar8;
  uint uVar9;
  ushort * puVar10;
  uint uVar7;
  
  uVar7 = ((*(uint *)&gen_args[44]) & 0xffff) / 5;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  if (0x13 < uVar7) {
    (*(uint *)(gen_frame + 0x10)) = 0x13;
  }
  uVar7 = (*(uint *)(gen_frame + 0x10));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 4 + 0x22c))) * 0x14;
  piVar8 = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) * 0x10 +
                  *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 0x10
                                   ))) + iVar3))))));
  (*(int *)(gen_frame + 0xc)) = iVar3;
  puVar10 = (ushort *)*piVar8;
  puVar2 = (ushort *)piVar8[1];
  if (puVar10 != puVar2) {
    do {
      if (*puVar10 == (ushort)(*(undefined4 *)&gen_args[1])) {
        F_007390c0(puVar10 + 0x5c,puVar2,puVar10,iVar3);
        iVar3 = piVar8[1];
        (*(int *)(gen_frame + 0x18)) = iVar3 + -0xb8;
        while ((*(int *)(gen_frame + 0x18)) != iVar3) {
          F_0042c880((undefined *)((*(int *)(gen_frame + 0x18)) + 0x58));
          F_0042c880((undefined *)((*(int *)(gen_frame + 0x18)) + 4));
          (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0xb8;
        }
        piVar8[1] = piVar8[1] + -0xb8;
        puVar2 = (ushort *)piVar8[1];
        if (puVar10 == puVar2) {
          iVar3 = (int)puVar2 - *piVar8 >> 0x1f;
          if (((int)puVar2 - *piVar8) / 0xb8 + iVar3 != iVar3) {
            (*(uint *)(gen_frame + 0x14)) = (uint)puVar2[-0x5c];
            goto LAB_006edecd;
          }
          piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x538))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) * 0x10
                                   ))) + (*(int *)(gen_frame + 0xc)))));
          uVar9 = uVar7 + 1;
          iVar3 = *piVar8;
          uVar5 = piVar8[1] - iVar3 >> 4;
          (*(int *)(gen_frame + 0x18)) = iVar3;
          if (uVar5 <= uVar9) {
LAB_006ede8f: ;
            iVar6 = uVar7 - 1;
            if (iVar6 < 0) break;
            piVar8 = (int *)(iVar6 * 0x10 + iVar3);
            while (iVar4 = piVar8[1] - *piVar8 >> 0x1f,
                  (piVar8[1] - *piVar8) / 0xb8 + iVar4 == iVar4) {
              piVar8 = piVar8 + -4;
              iVar6 = iVar6 + -1;
              if (iVar6 < 0) goto LAB_006edf09;
            }
            (*(uint *)(gen_frame + 0x14)) = (uint)**(ushort * PTR32 *)(iVar3 + iVar6 * 0x10);
            goto LAB_006edecd;
          }
          piVar8 = (int *)(uVar9 * 0x10 + iVar3);
          while (iVar6 = piVar8[1] - *piVar8 >> 0x1f, uVar7 = (*(uint *)(gen_frame + 0x10)),
                (piVar8[1] - *piVar8) / 0xb8 + iVar6 == iVar6) {
            uVar9 = uVar9 + 1;
            piVar8 = piVar8 + 4;
            if (uVar5 <= uVar9) goto LAB_006ede8f;
          }
          uVar1 = **(ushort * PTR32 *)(iVar3 + uVar9 * 0x10);
          (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
          if (uVar1 == 0) goto LAB_006ede8f;
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = (uint)*puVar10;
LAB_006edecd: ;
          if ((ushort)(*(uint *)(gen_frame + 0x14)) == 0) break;
        }
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x534))) = 0;
        F_0073dba0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
        F_00752000(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(int *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0xc)));
        break;
      }
      puVar10 = puVar10 + 0x5c;
    } while (puVar10 != puVar2);
  }
LAB_006edf09: ;
  F_0042c880(&(*(undefined4 *)&gen_args[23]));
  F_0042c880(&(*(undefined4 *)&gen_args[2]));
  return (ushort)(*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_006edf30 */
uint F_006edf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6edf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323718);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323718));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132371c),REFG(undefined * PTR32, 0x1323718),0);
  return 1;
}

/* ref: FUN_006ee120 */
uint F_006ee120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ee120u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323720);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323720));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"CreateLinkshell",((code *)REFP(0x6ceba0)));
    F_00a01cc0(param_1,iVar5,"DisbandLinkshell",((code *)REFP(0x6cec40)));
    F_00a01cc0(param_1,iVar5,"RenameLinkshell",((code *)REFP(0x6cecf0)));
    F_00a01cc0(param_1,iVar5,"LoadRetainerCreation",((code *)REFP(0x6cf210)));
    F_00a01cc0(param_1,iVar5,"CreateRetainer",((code *)REFP(0x6cf390)));
    F_00a01cc0(param_1,iVar5,"CallRetainer",((code *)REFP(0x6cf460)));
    F_00a01cc0(param_1,iVar5,"GetMarketSellTaxRates",((code *)REFP(0x6cf550)));
    F_00a01cc0(param_1,iVar5,"RemoveRetainer",((code *)REFP(0x6cf5d0)));
    F_00a01cc0(param_1,iVar5,"MarketRegister",((code *)REFP(0x6cf6c0)));
    F_00a01cc0(param_1,iVar5,"MarketUnregister",((code *)REFP(0x6cf7f0)));
    F_00a01cc0(param_1,iVar5,"SelectRetainer",((code *)REFP(0x6cf8d0)));
    F_00a01cc0(param_1,iVar5,"SetCurrentRetainerIndex",((code *)REFP(0x6cf950)));
    F_00a01cc0(param_1,iVar5,"SendRetainerCharaMake",((code *)REFP(0x6cf9c0)));
    F_00a01cc0(param_1,iVar5,"IsInContentFinder",((code *)REFP(0x6cfa80)));
    F_00a01cc0(param_1,iVar5,"SetCharaMakeCondition",((code *)REFP(0x6cfb00)));
    F_00a01cc0(param_1,iVar5,"OpenRetainerInventory",((code *)REFP(0x6cfba0)));
    F_00a01cc0(param_1,iVar5,"DepopRetainer",((code *)REFP(0x6cfc10)));
    F_00a01cc0(param_1,iVar5,"GetRetainerName",((code *)REFP(0x6cfcf0)));
    F_00a01cc0(param_1,iVar5,"GetRetainerEmployedCount",((code *)REFP(0x6cfda0)));
    F_00a01cc0(param_1,iVar5,"CheckLinkshellCount",((code *)REFP(0x6bea00)));
    F_00a01cc0(param_1,iVar5,"GetFcStatus",((code *)REFP(0x6cf290)));
    F_00a01cc0(param_1,iVar5,"CreateFreeCompany",((code *)REFP(0x6cee70)));
    F_00a01cc0(param_1,iVar5,"CreateFreeCompanyPayGil",((code *)REFP(0x6cf0c0)));
    F_00a01cc0(param_1,iVar5,"RenameFcTag",((code *)REFP(0x6cedb0)));
    F_00a01cc0(param_1,iVar5,"DisbandFreeCompany",((code *)REFP(0x6cef80)));
    F_00a01cc0(param_1,iVar5,"MoveGrandCompany",((code *)REFP(0x6cf030)));
    F_00a01cc0(param_1,iVar5,"GetLinkshellList",((code *)REFP(0x6cfe10)));
    F_00a01cc0(param_1,iVar5,"GetRankUpCondition",((code *)REFP(0x6cff40)));
    F_00a01cc0(param_1,iVar5,"CheckFcChestEmpty",((code *)REFP(0x6cf310)));
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVALID",0);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVITESTART",1);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_INVITECOMPLETE",2);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_NORMAL",3);
    F_00a01c80(param_1,iVar5,"FC_STATUS_TYPE_FREEZE",4);
    F_00a01c80(param_1,iVar5,"INPUT_STRING_TYPE_SHORT_NAME",2);
    F_00a01c80(param_1,iVar5,"INPUT_STRING_TYPE_NORMAL",2);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_NORMAL",0);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_FIRST_TIME",1);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_INVALID",2);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_TIME",3);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_EQUIP",4);
    F_00a01c80(param_1,iVar5,"GC_CHANGE_RESULT_ERROR_QUEST",5);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323724),REFG(undefined * PTR32, 0x1323720),0);
  return 1;
}

/* ref: FUN_006ee590 */
uint F_006ee590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ee590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  char * pcVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint * puVar8;
  uint * puVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar8 = *(uint * PTR32 *)(*param_1 + 4);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar8;
  F_0042e430((undefined *)((int)this + 0x22c),(int)puVar8 + (puVar8[0x3d] & 0xffffff) + 0xf4);
  F_006e9c50((undefined *)((int)this + 0x22c),(int)this + 0x280,(int)this + 0x118);
  F_0042e430((undefined *)((int)this + 0x1d8),(int)puVar8 + (puVar8[0x3c] & 0xffffff) + 0xf0);
  *(uint *)((int)this + 0x2ec) = puVar8[0x3e];
  *(byte *)((int)this + 0x2f0) =
       *(byte *)((int)this + 0x2f0) ^
       (*(byte *)((int)puVar8 + 0xfd) ^ *(byte *)((int)this + 0x2f0)) & 1;
  bVar4 = (*(char *)((int)puVar8 + 0xff) * '\x04' ^ *(byte *)((int)this + 0x2f0)) & 4 ^
          *(byte *)((int)this + 0x2f0);
  *(byte *)((int)this + 0x2f0) = bVar4;
  *(byte *)((int)this + 0x2f0) = (*(char *)((int)puVar8 + 0xfe) * '\x02' ^ bVar4) & 2 ^ bVar4;
  if ((char)puVar8[0x40] != '\0') {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 4;
  }
  if (*(char *)((int)puVar8 + 0x101) != '\0') {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8000;
  }
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
  (*(int *)(gen_frame + 0x28)) = 0x1e;
  puVar9 = puVar8;
  do {
    pcVar5 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar5;
    pcVar1 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    if (pcVar5 != pcVar1) {
      (*(uint *)(gen_frame + 0x14)) = puVar8[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
      puVar6 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar6 = *(undefined4 *)((int)this + 0x2e0);
      puVar6[1] = *(undefined4 *)((int)this + 0x2e0);
      puVar6[2] = *(undefined4 *)((int)this + 0x2e0);
      *(undefined2 *)(puVar6 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x14));
      if (puVar6 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar6 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar6[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x2dc),((undefined1 *)(gen_frame + 0x8)),puVar6,0);
      puVar8 = (*(uint * PTR32 *)(gen_frame + 0x24));
      puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    }
    puVar8 = puVar8 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
  } while (iVar2 != 0);
  if ((char)puVar9[0x3f] != '\0') {
    *(byte *)((int)this + 0x2f0) = *(byte *)((int)this + 0x2f0) | 8;
  }
  uVar7 = F_0042a990((int)this + 0x280);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323724),uVar7);
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar7);
  F_006e8f60(this,0,0xffffffff);
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x2d8);
  if (puVar6 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    *(undefined4 *)((int)this + 0x2d8) = 0;
  }
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar10;
}

/* ref: FUN_006ee800 */
uint F_006ee800(unsigned int gen_a0)
{
  GEN_ENTER(0x6ee800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  F_006e9ff0(this);
  uVar2 = 0;
  uVar1 = F_0042a990((int)this + 0x280);
  uVar1 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132372c),uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006ee830 */
unsigned int F_006ee830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ee830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  iVar2 = *param_2;
  if (iVar2 != param_2[1]) {
    F_00c46e20(iVar2,param_2[1],0);
    param_2[1] = iVar2;
  }
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x348)));
  if (piVar6 != *(int * PTR32 *)((int)this + 0x348)) {
    do {
      if (piVar6[0xe] == param_1) {
        piVar3 = (int *)param_2[1];
        piVar5 = piVar6 + 3;
        if ((piVar5 < piVar3) && (piVar4 = (int *)*param_2, piVar4 <= piVar5)) {
          if (piVar3 == (int *)param_2[2]) {
            F_007520f0(param_2,1);
          }
          if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_2[1] =
                 *((undefined2 *)GEN_TOP((*param_2 + ((int)piVar5 - (int)((int)(uintptr_t)piVar4) >> 1) * 2)));
          }
        }
        else {
          if (piVar3 == (int *)param_2[2]) {
            F_007520f0(param_2,1);
          }
          if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
            *(undefined2 *)param_2[1] = (short)*piVar5;
          }
        }
        param_2[1] = param_2[1] + 2;
      }
      if (*(char *)((int)piVar6 + 0x9d) == '\0') {
        piVar5 = (int *)piVar6[2];
        if (*(char *)((int)piVar5 + 0x9d) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x9d);
          piVar6 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x9d);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x9d);
          piVar3 = (int *)piVar6[1];
          piVar5 = piVar6;
          while ((piVar6 = piVar3, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x9d);
            piVar3 = (int *)piVar6[1];
            piVar5 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x348));
  }
  return 0;
}

/* ref: FUN_006ee940 */
uint F_006ee940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ee940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  char * pcVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  puVar5 = *(uint * PTR32 *)(*param_1 + 4);
  pcVar2 = ((char *)GEN_TOP(((int)puVar5 + (puVar5[0x17] & 0xffffff) + 0x5c)));
  if (*pcVar2 == '\0') {
    F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323738));
    *(undefined1 *)((int)this + 0x24c) = 0;
  }
  else {
    F_0042e430((undefined *)((int)this + 0x118),pcVar2);
    *(undefined1 *)((int)this + 0x24c) = 1;
  }
  if (**(char * PTR32 *)((int)this + 0x1e0) == '\0') {
    F_0042e430((undefined *)((int)this + 0x1e0),(int)puVar5 + (puVar5[0x14] & 0xffffff) + 0x50);
  }
  if (**(char * PTR32 *)((int)this + 0x2b8) == '\0') {
    F_0042e430((undefined *)((int)this + 0x2b8),(int)puVar5 + (puVar5[0x15] & 0xffffff) + 0x54);
  }
  if (**(char * PTR32 *)((int)this + 0x30c) == '\0') {
    F_0042e430((undefined *)((int)this + 0x30c),(int)puVar5 + (puVar5[0x16] & 0xffffff) + 0x58);
  }
  *(uint *)((int)this + 0x260) = puVar5[0x18];
  *(char *)((int)this + 0x374) = (char)puVar5[0x19];
  F_0074df70((undefined *)((int)this + 0x23c),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x240) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 4))) = *(int *)((int)this + 0x240);
  *(undefined4 *)*(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0x240);
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 8))) = *(int *)((int)this + 0x240);
  *(undefined4 *)((int)this + 0x244) = 0;
  if (*(char *)((int)this + 0x24c) != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
    (*(int *)(gen_frame + 0x1c)) = 10;
    do {
      pcVar2 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar2;
      if (*pcVar2 != '\0') {
        (*(uint *)(gen_frame + 0x10)) = puVar5[1];
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
        puVar3 = (undefined4 *)F_004296a0(0x68,0,800);
        *puVar3 = *(undefined4 *)((int)this + 0x240);
        puVar3[1] = *(undefined4 *)((int)this + 0x240);
        puVar3[2] = *(undefined4 *)((int)this + 0x240);
        *(undefined2 *)(puVar3 + 0x19) = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x20)),(*(char * PTR32 *)(gen_frame + 0x14)),REFG(undefined4, 0x108cc50));
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x10));
        if (puVar3 + 3 != (undefined4 *)0x0) {
          F_0042cbc0(puVar3 + 3,((undefined1 *)(gen_frame + 0x20)));
          puVar3[0x18] = (*(uint *)(gen_frame + 0x74));
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_007502b0((undefined *)((int)this + 0x23c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
        puVar5 = (*(uint * PTR32 *)(gen_frame + 0x18));
      }
      puVar5 = puVar5 + 2;
      iVar1 = (*(int *)(gen_frame + 0x1c)) + -1;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
    } while (iVar1 != 0);
  }
  if (*(short *)((int)this + 0x25e) != 0) {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8000;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x238);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  uVar4 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10f);
  *(uint *)((int)this + 0x234) = uVar4;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0x6ea730));
  }
  *(undefined4 * PTR32 *)((int)this + 0x238) = puVar3;
  F_00cb4540(puVar3,0,(uint)*(ushort *)((int)this + 0x1de));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x234) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x234),*(undefined4 *)((int)this + 0x238));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_006eebe0 */
uint F_006eebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323740);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323740));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetSequence",((code *)REFP(0x6dd9f0)));
    F_00a01cc0(param_1,iVar7,"GetSequenceParam",((code *)REFP(0x6d9930)));
    uVar3 = F_00ab02e0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3600(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323744),REFG(undefined * PTR32, 0x1323740),0);
  return 1;
}

/* ref: FUN_006eedf0 */
uint F_006eedf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eedf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323748));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar1);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetLeveId",((code *)REFP(0x6d2910)));
    F_00a01cc0(param_1,iVar7,"LeveStart",((code *)REFP(0x6ba180)));
    F_00a01cc0(param_1,iVar7,"LeveSuccess",((code *)REFP(0x6ba1a0)));
    F_00a01cc0(param_1,iVar7,"LeveFailed",((code *)REFP(0x6ba1c0)));
    F_00a01cc0(param_1,iVar7,"PlayLeveStartAction",((code *)REFP(0x6d28b0)));
    F_00a01cc0(param_1,iVar7,"HideDirectorTodo",((code *)REFP(0x6c3860)));
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_START",0);
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_RESULT",1);
    F_00a01c80(param_1,iVar7,"NOTICE_ID_GAME_COME_BACK",2);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_NONE",0);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_SUCCEED",1);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_FAILED",2);
    F_00a01c80(param_1,iVar7,"LEVE_RESULT_FAILED_TIMER",3);
    uVar3 = F_00ab02a0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3300(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar2 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar2);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748),0);
  return 1;
}

/* ref: FUN_006ef0b0 */
uint F_006ef0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323750);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323750));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323754),REFG(undefined * PTR32, 0x1323750),0);
  return 1;
}

/* ref: FUN_006ef250 */
uint F_006ef250(unsigned int gen_a0)
{
  GEN_ENTER(0x6ef250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)((int)this + 0x4e8);
  *(undefined1 *)((int)this + 0x4f8) = 1;
  if ((uVar1 == 5) || (uVar1 == 9)) {
    uVar1 = F_00ab3300(0x2b);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(uVar1 + 4);
    }
    uVar1 = F_006e5f80(REFG(void * PTR32, 0x1488344),this,uVar2,0);
    *(uint *)((int)this + 0x504) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_006ef2a0 */
uint F_006ef2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ef2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  *(undefined1 *)(iVar1 + 0x4f8) = 1;
  if ((*(int *)(iVar1 + 0x4e8) == 5) || (*(int *)(iVar1 + 0x4e8) == 9)) {
    uVar2 = F_00ab3300(0x2b);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(uVar2 + 4);
    }
    uVar2 = F_006e5f80(REFG(void * PTR32, 0x1488344),iVar1,uVar4,0);
    *(uint *)(iVar1 + 0x504) = uVar2;
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ef320 */
uint F_006ef320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ef320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  undefined4 * puVar8;
  
  puVar6 = (uint *)((int)this + 0x3d4);
  uVar2 = *puVar6;
  if (uVar2 != *(uint *)((int)this + 0x3d8)) {
    F_00c46e20(uVar2,*(uint *)((int)this + 0x3d8),0);
    *(uint *)((int)this + 0x3d8) = uVar2;
  }
  F_0074cbd0(puVar6,4);
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x0)) * 4) + 4)));
      if (piVar7 != (int *)0x0) {
        iVar3 = *piVar7;
        uVar2 = 0;
        piVar7 = (int *)((int)this + 0x360);
        do {
          if (iVar3 == *piVar7) goto LAB_006ef470;
          uVar2 = uVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar2 < 4);
        piVar7 = *(int * PTR32 *)((int)this + 0x3d8);
        (*(int *)(gen_frame + 0x8)) = iVar3;
        if ((&(*(int *)(gen_frame + 0x8)) < piVar7) && (piVar1 = (int *)*puVar6, piVar1 <= &(*(int *)(gen_frame + 0x8)))) {
          if (piVar7 == *(int * PTR32 *)((int)this + 0x3dc)) {
            iVar3 = (int)piVar7 - (int)((int)(uintptr_t)piVar1) >> 2;
            if (iVar3 == -1) {
LAB_006ef501: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar4 = iVar3 + 1;
            uVar2 = (int)*(int * PTR32 *)((int)this + 0x3dc) - (int)((int)(uintptr_t)piVar1) >> 2;
            if (uVar2 < uVar4) {
              if (-(uVar2 >> 1) - 1 < uVar2) {
                uVar2 = 0;
              }
              else {
                uVar2 = uVar2 + (uVar2 >> 1);
              }
              if (uVar2 < uVar4) {
                uVar2 = uVar4;
              }
              F_0074cbd0(puVar6,uVar2);
            }
          }
          if (*(undefined4 * PTR32 *)((int)this + 0x3d8) != (undefined4 *)0x0) {
            **(undefined4 * PTR32 *)((int)this + 0x3d8) =
                 *((undefined4 *)GEN_TOP((*puVar6 + ((int)&(*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
          }
        }
        else {
          if (piVar7 == *(int * PTR32 *)((int)this + 0x3dc)) {
            iVar5 = (int)((int)piVar7 - *puVar6) >> 2;
            if (iVar5 == -1) goto LAB_006ef501;
            uVar4 = iVar5 + 1;
            uVar2 = (int)((int)*(int * PTR32 *)((int)this + 0x3dc) - *puVar6) >> 2;
            if (uVar2 < uVar4) {
              if (-(uVar2 >> 1) - 1 < uVar2) {
                uVar2 = 0;
              }
              else {
                uVar2 = uVar2 + (uVar2 >> 1);
              }
              if (uVar2 < uVar4) {
                uVar2 = uVar4;
              }
              F_0074cbd0(puVar6,uVar2);
            }
          }
          if (*(int * PTR32 *)((int)this + 0x3d8) != (int *)0x0) {
            **(int * PTR32 *)((int)this + 0x3d8) = iVar3;
          }
        }
        *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) + 4;
      }
LAB_006ef470: ;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < param_2);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar8 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  puVar6 = (uint *)F_00ab3420(*(undefined4 *)((int)this + 0x370));
  uVar2 = 0;
  if (puVar6 != (uint *)0x0) {
    uVar2 = F_0042e430((undefined *)((int)this + 0x118),(*puVar6 & 0xffffff) + (int)puVar6);
    if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
      puVar8 = *(undefined4 * PTR32 *)((int)this + 0xe8);
      if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
        return uVar2;
      }
      while (uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar8 + 8))((int *)*puVar8), (char)uVar2 != '\0') {
        puVar8 = puVar8 + 1;
        if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
          return uVar2;
        }
      }
    }
    F_006c3bc0(this);
    uVar2 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132375c),
                         (*puVar6 & 0xffffff) + (int)puVar6,0);
  }
  return uVar2;
}

/* ref: FUN_006ef540 */
uint F_006ef540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef540u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323758);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323758));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132375c),REFG(undefined * PTR32, 0x1323758),0);
  return 1;
}

/* ref: FUN_006ef6e0 */
uint F_006ef6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ef6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323760);
  puVar1 = REFG(undefined * PTR32, 0x1323748);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323760));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"SetDirectorTodo",((code *)REFP(0x730120)));
    F_00a01cc0(param_1,iVar5,"GetName",((code *)REFP(0x730170)));
    F_00a01c80(param_1,iVar5,"TODO_TYPE_FRACTION_BAR",1);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_NUMBER",2);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_BAR",3);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_TIME_REMAINING",4);
    F_00a01c80(param_1,iVar5,"TODO_TYPE_LARGE_BAR",5);
    F_00a01c80(param_1,iVar5,"UI8_A",1);
    F_00a01c80(param_1,iVar5,"UI8_B",2);
    F_00a01c80(param_1,iVar5,"UI8_C",3);
    F_00a01c80(param_1,iVar5,"UI8_D",4);
    F_00a01c80(param_1,iVar5,"UI8_E",5);
    F_00a01c80(param_1,iVar5,"UI8_F",6);
    F_00a01c80(param_1,iVar5,"UI8_G",7);
    F_00a01c80(param_1,iVar5,"UI8_H",8);
    F_00a01c80(param_1,iVar5,"UI8_I",9);
    F_00a01c80(param_1,iVar5,"UI8_J",10);
    F_00a01c80(param_1,iVar5,"NAME_TYPE_BNPC",2);
    F_00a01cc0(param_1,iVar5,"GetEntry",((code *)REFP(0x6d40d0)));
    F_00a01c80(param_1,iVar5,"BASE_ID_ENTRY",0);
    F_00a01c80(param_1,iVar5,"LEVEL_ENTRY",1);
    F_00a01c80(param_1,iVar5,"NAME_ID_ENTRY",2);
    F_00a01c80(param_1,iVar5,"DROP_EVENT_ITEM_ID_ENTRY",3);
    F_00a01c80(param_1,iVar5,"DROP_EVENT_ITEM_MAX_ENTRY",4);
    F_00a01c80(param_1,iVar5,"GEN_LPANY",5);
    F_00a01c80(param_1,iVar5,"NUM_OF_APPEARANCE_ENTRY",6);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323764),REFG(undefined * PTR32, 0x1323760),0);
  return 1;
}

/* ref: Client::Game::Event::TestDirector::vf1 */
uint F_006efa10(unsigned int gen_a0)
{
  GEN_ENTER(0x6efa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_006c3f30(this);
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x118);
  uVar1 = F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x132376c),uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006efa40 */
uint F_006efa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323768);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323768));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar1);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    if (puVar2 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar2);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132376c),REFG(undefined * PTR32, 0x1323768),0);
  return 1;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf1 */
uint F_006efbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6efbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10a);
  *(uint *)(this + 0x230) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92c8));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6eb660));
  }
  *(undefined4 * PTR32 *)(this + 0x234) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 0x1d4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x230) + 0x48))))
                    (*(int * PTR32 *)(this + 0x230),*(undefined4 *)(this + 0x234));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006efc70 */
uint F_006efc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323770);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323770));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"EnableEventRange",((code *)REFP(0x6ebaf0)));
    F_00a01cc0(param_1,iVar7,"DisableEventRange",((code *)REFP(0x6e2a00)));
    F_00a01cc0(param_1,iVar7,"GetQuestId",((code *)REFP(0x6d45a0)));
    F_00a01cc0(param_1,iVar7,"IsSelectControlMode",((code *)REFP(0x6d4550)));
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_0",0);
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_1",1);
    F_00a01c80(param_1,iVar7,"OPENING_SEQ_2",2);
    uVar3 = F_00ab02c0();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab35d0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323774),REFG(undefined * PTR32, 0x1323770),0);
  return 1;
}

/* ref: FUN_006efed0 */
uint F_006efed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6efed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323778);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323778));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"IsDestMountable",((code *)REFP(0x6d4630)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
      F_00a01ad0(param_1,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132377c),REFG(undefined * PTR32, 0x1323778),0);
  return 1;
}

/* ref: FUN_006f0080 */
uint F_006f0080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f0080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323788);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323788));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"GetSequence",((code *)REFP(0x6d4760)));
    F_00a01cc0(param_1,iVar7,"GetI8A",((code *)REFP(0x736680)));
    F_00a01cc0(param_1,iVar7,"GetI8B",((code *)REFP(0x7366d0)));
    F_00a01cc0(param_1,iVar7,"GetI8C",((code *)REFP(0x736720)));
    F_00a01cc0(param_1,iVar7,"GetI8D",((code *)REFP(0x736770)));
    F_00a01cc0(param_1,iVar7,"GetI8E",((code *)REFP(0x7367c0)));
    F_00a01cc0(param_1,iVar7,"GetI8F",((code *)REFP(0x736810)));
    F_00a01cc0(param_1,iVar7,"GetI8G",((code *)REFP(0x736860)));
    F_00a01cc0(param_1,iVar7,"GetI8H",((code *)REFP(0x7368b0)));
    F_00a01cc0(param_1,iVar7,"GetI8I",((code *)REFP(0x736900)));
    F_00a01cc0(param_1,iVar7,"GetI8J",((code *)REFP(0x736950)));
    F_00a01cc0(param_1,iVar7,"GetUI8A",((code *)REFP(0x727830)));
    F_00a01cc0(param_1,iVar7,"GetUI8B",((code *)REFP(0x727880)));
    F_00a01cc0(param_1,iVar7,"GetUI8C",((code *)REFP(0x7278d0)));
    F_00a01cc0(param_1,iVar7,"GetUI8D",((code *)REFP(0x727920)));
    F_00a01cc0(param_1,iVar7,"GetUI8E",((code *)REFP(0x727970)));
    F_00a01cc0(param_1,iVar7,"GetUI8F",((code *)REFP(0x7279c0)));
    F_00a01cc0(param_1,iVar7,"GetUI8G",((code *)REFP(0x727a10)));
    F_00a01cc0(param_1,iVar7,"GetUI8H",((code *)REFP(0x727a60)));
    F_00a01cc0(param_1,iVar7,"GetUI8I",((code *)REFP(0x727ab0)));
    F_00a01cc0(param_1,iVar7,"GetUI8J",((code *)REFP(0x727b00)));
    F_00a01cc0(param_1,iVar7,"GetUI8AH",((code *)REFP(0x7369a0)));
    F_00a01cc0(param_1,iVar7,"GetUI8BH",((code *)REFP(0x736a00)));
    F_00a01cc0(param_1,iVar7,"GetUI8CH",((code *)REFP(0x736a60)));
    F_00a01cc0(param_1,iVar7,"GetUI8DH",((code *)REFP(0x736ac0)));
    F_00a01cc0(param_1,iVar7,"GetUI8EH",((code *)REFP(0x736b20)));
    F_00a01cc0(param_1,iVar7,"GetUI8FH",((code *)REFP(0x736b80)));
    F_00a01cc0(param_1,iVar7,"GetUI8GH",((code *)REFP(0x736be0)));
    F_00a01cc0(param_1,iVar7,"GetUI8HH",((code *)REFP(0x736c40)));
    F_00a01cc0(param_1,iVar7,"GetUI8IH",((code *)REFP(0x736ca0)));
    F_00a01cc0(param_1,iVar7,"GetUI8JH",((code *)REFP(0x736d00)));
    F_00a01cc0(param_1,iVar7,"GetUI8AL",((code *)REFP(0x736d60)));
    F_00a01cc0(param_1,iVar7,"GetUI8BL",((code *)REFP(0x736dc0)));
    F_00a01cc0(param_1,iVar7,"GetUI8CL",((code *)REFP(0x736e20)));
    F_00a01cc0(param_1,iVar7,"GetUI8DL",((code *)REFP(0x736e80)));
    F_00a01cc0(param_1,iVar7,"GetUI8EL",((code *)REFP(0x736ee0)));
    F_00a01cc0(param_1,iVar7,"GetUI8FL",((code *)REFP(0x736f40)));
    F_00a01cc0(param_1,iVar7,"GetUI8GL",((code *)REFP(0x736fa0)));
    F_00a01cc0(param_1,iVar7,"GetUI8HL",((code *)REFP(0x737000)));
    F_00a01cc0(param_1,iVar7,"GetUI8IL",((code *)REFP(0x737060)));
    F_00a01cc0(param_1,iVar7,"GetUI8JL",((code *)REFP(0x7370c0)));
    F_00a01cc0(param_1,iVar7,"GetI16A",((code *)REFP(0x737120)));
    F_00a01cc0(param_1,iVar7,"GetI16B",((code *)REFP(0x737190)));
    F_00a01cc0(param_1,iVar7,"GetI16C",((code *)REFP(0x737200)));
    F_00a01cc0(param_1,iVar7,"GetI16D",((code *)REFP(0x737270)));
    F_00a01cc0(param_1,iVar7,"GetI16E",((code *)REFP(0x7372e0)));
    F_00a01cc0(param_1,iVar7,"GetUI16A",((code *)REFP(0x737350)));
    F_00a01cc0(param_1,iVar7,"GetUI16B",((code *)REFP(0x7373b0)));
    F_00a01cc0(param_1,iVar7,"GetUI16C",((code *)REFP(0x737410)));
    F_00a01cc0(param_1,iVar7,"GetUI16D",((code *)REFP(0x737470)));
    F_00a01cc0(param_1,iVar7,"GetUI16E",((code *)REFP(0x7374d0)));
    F_00a01cc0(param_1,iVar7,"GetI32A",((code *)REFP(0x737530)));
    F_00a01cc0(param_1,iVar7,"GetI32B",((code *)REFP(0x7375b0)));
    F_00a01cc0(param_1,iVar7,"GetUI32A",((code *)REFP(0x737630)));
    F_00a01cc0(param_1,iVar7,"GetUI32B",((code *)REFP(0x7376b0)));
    F_00a01cc0(param_1,iVar7,"GetBranch",((code *)REFP(0x727b00)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag8",((code *)REFP(0x737730)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag16",((code *)REFP(0x7377b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag24",((code *)REFP(0x737830)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag32",((code *)REFP(0x7378b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag40",((code *)REFP(0x737930)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag48",((code *)REFP(0x7379b0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag56",((code *)REFP(0x737a30)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag64",((code *)REFP(0x737ab0)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag72",((code *)REFP(0x737b30)));
    F_00a01cc0(param_1,iVar7,"GetBitFlag80",((code *)REFP(0x737bb0)));
    uVar3 = F_00ab0300();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab3870(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x132378c),REFG(undefined * PTR32, 0x1323788),0);
  return 1;
}

/* ref: FUN_006f0710 */
uint F_006f0710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f0710u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  char * pcVar6;
  int iVar7;
  
  this = param_1;
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x1323790);
  puVar1 = REFG(undefined * PTR32, 0x1323788);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x1323790));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar7 = uVar3 + 2;
    F_00a01c40(param_1,iVar7,"className",puVar2);
    F_00a01c80(param_1,iVar7,"referenceCount",1);
    F_00a01cc0(param_1,iVar7,"SetDirectorObjective",((code *)REFP(0x6e2aa0)));
    F_00a01cc0(param_1,iVar7,"SetContentBGM",((code *)REFP(0x6d48b0)));
    F_00a01cc0(param_1,iVar7,"ResetContentBGM",((code *)REFP(0x6c5070)));
    F_00a01c80(param_1,iVar7,"END_EVENT_SCENE_RESULT",0);
    uVar3 = F_00ab0490();
    param_1 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        puVar5 = (uint *)F_00ab40a0(param_1);
        if ((puVar5 != (uint *)0x0) &&
           (pcVar6 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5))), *pcVar6 != '\0')) {
          F_00a01c80(this,iVar7,pcVar6,puVar5[1]);
        }
        param_1 = (undefined *)((int)param_1 + 1);
      } while (param_1 < uVar3);
    }
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
    }
    else {
      F_00b9bc00(*(undefined4 *)((int)this + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b290(*(undefined4 *)((int)this + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this + 8),iVar7,"__index");
      F_00b9a910(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b3d0(*(undefined4 *)((int)this + 8),iVar7);
      F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
      F_00a01ad0(this,puVar1);
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x1323794),REFG(undefined * PTR32, 0x1323790),0);
  return 1;
}

/* ref: FUN_006f0940 */
uint F_006f0940(unsigned int gen_a0)
{
  GEN_ENTER(0x6f0940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * this_00;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  uint * puVar8;
  int iVar9;
  undefined4 uVar10;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar10 = *(undefined4 *)((int)this_00 + 8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar4 = F_00b9a750(uVar10);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar4 = F_0042a990((int)this + 0x118);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = REFG(undefined * PTR32, 0x1323790);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar5 == 0) {
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
    iVar9 = (*(uint *)(gen_frame + 0x10)) + 2;
    F_00a01c40(this_00,iVar9,"className",(*(uint *)(gen_frame + 0x18)));
    F_00a01c80(this_00,iVar9,"referenceCount",0);
    (*(uint *)(gen_frame + 0x10)) = 0;
    do {
      puVar8 = ((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + *(int *)((int)this + 0x3b8))));
      pcVar6 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
      pcVar7 = pcVar6;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (pcVar7 != pcVar6 + 1) {
        F_00a01c80(this_00,iVar9,pcVar6,puVar8[1]);
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
      uVar4 = (*(uint *)(gen_frame + 0x10)) + 8;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
    } while ((int)uVar4 < 800);
    piVar2 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1c4);
    piVar3 = (int *)*piVar2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = piVar3;
    if (piVar3 != piVar2) {
      do {
        uVar10 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xc);
        uVar4 = F_0042a990((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10);
        F_00a01c80(this_00,iVar9,uVar4,uVar10);
        F_00732c70(&(*(undefined * PTR32 *)(gen_frame + 0xc)));
      } while ((*(undefined * PTR32 *)(gen_frame + 0xc)) != *(undefined * PTR32 *)((int)this + 0x1c4));
    }
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(uint *)(gen_frame + 0x18)));
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar9);
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0) {
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    }
    else {
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x14)));
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar9,"__index");
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar9);
      F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar9);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x14)));
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  uVar10 = 0;
  uVar4 = F_0042a990((int)this + 0x464);
  uVar4 = F_00754440((undefined *)((int)this + 0xfc),REFG(undefined * PTR32, 0x132372c),uVar4,uVar10);
  return uVar4;
}

/* ref: FUN_006f0b80 */
uint F_006f0b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f0b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  F_0042e430((undefined *)((int)this + 0x3bc),
               (**(uint * PTR32 *)(*param_1 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_1 + 4));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x314);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x314) = 0;
  }
  *(undefined4 *)((int)this + 0x310) = 0;
  uVar2 = F_006ebec0(this);
  return uVar2;
}

/* ref: FUN_006f0be0 */
uint F_006f0be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f0be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int * this_00;
  int * piVar5;
  undefined * pvVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x70)) = REFG(int, 0x1379694);
  pvVar6 = (undefined *)0x0;
  if ((REFG(int, 0x1379694) != 0) && (pvVar6 = (undefined *)0x0, (*(uint *)&gen_args[1]) != 0)) {
    (*(uint *)(gen_frame + 0x68)) = (*(uint *)&gen_args[1]) & 0x80000000;
    if (((*(uint *)&gen_args[1]) & 0x80000000) == 0x80000000) {
      this_00 = (int *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),(*(uint *)&gen_args[1]));
    }
    else {
      this_00 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
    }
    pvVar6 = (undefined *)0x0;
    if (this_00 != (int *)0x0) {
      if ((*(int *)&gen_args[2]) == -0x20000000) {
        (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
        (*(int * PTR32 *)(gen_frame + 0x74)) = piVar5;
      }
      (*(int * PTR32 *)(gen_frame + 0x6c)) = (*(int * PTR32 *)(gen_frame + 0x74));
      pvVar6 = (undefined *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0x74)) != (int *)0x0) {
        F_006da470((*(undefined * PTR32 *)&gen_args[0]));
        uVar3 = (*(undefined4 *)&gen_args[5]);
        uVar2 = (*(undefined4 *)&gen_args[4]);
        iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(undefined1 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(undefined1 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(undefined4 *)(gen_frame + 0x60)) = 0;
        (*(undefined1 *)(gen_frame + 0x64)) = 0;
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x38))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
        (*(undefined4 *)(gen_frame + 0x48)) = 0xe0000000;
        if (iVar1 == 0) {
          if (((char)(*(undefined4 *)&gen_args[4]) != '\a') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224))) != 0)) {
            uVar7 = F_006d9ec0((*(undefined * PTR32 *)&gen_args[0]));
            if (((char)uVar7 == '\0') && (((*(uint *)&gen_args[6]) & 1) == 0)) {
              return uVar7;
            }
            uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,(*(undefined4 *)&gen_args[5]));
            uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,(*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[6]),uVar7);
            F_0071f280(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))),uVar7);
            uVar7 = F_006e33b0((*(undefined * PTR32 *)&gen_args[0]));
            return uVar7;
          }
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
          uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]),uVar7);
          pvVar6 = (undefined *)F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar7);
        }
        else {
          bVar4 = F_006b9110(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x230))),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
          if (bVar4 == 0) {
            uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x210))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
            uVar7 = F_006b9070(((undefined1 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]),uVar7);
            F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),uVar7);
          }
          else {
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x250) = (undefined1)(*(uint *)&gen_args[6]);
            F_0071f280(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)),(int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x230);
            F_006b9180((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x230);
          }
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x78));
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x224) != 0) &&
             (pvVar6 = (undefined *)F_00743a80((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x214)),
             *(char *)((int)pvVar6 + 0x2c) != '\0')) {
            F_0071f280((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x280),((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
            pvVar6 = (undefined *)F_006b9180(((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
          }
        }
        if ((*(int *)(gen_frame + 0x40)) != 0) {
          F_006ec1d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x100),this_00,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]));
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x218))(this_00,(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          F_00536cc0(&REFG(undefined4, 0x1375bc0),uVar7,(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),uVar2,uVar3,(*(uint *)&gen_args[6]));
          F_007513d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x214),((undefined * PTR32 * PTR32 *)(gen_frame + 0x38)));
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x74)) + 0x54))((*(int * PTR32 *)(gen_frame + 0x74)),1);
          F_0074a590((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x6c0),&(*(int *)&gen_args[2]),&(*(int * PTR32 *)(gen_frame + 0x6c)));
          uVar7 = ((code *)*(gen_code32 *)(*this_00 + 0x214))(this_00,(*(int *)(gen_frame + 0x70)),(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260);
          if ((iVar1 == 0) || (iVar1 == 0xf)) {
            if (uVar7 != 0) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260) = uVar7;
            }
          }
          else if ((iVar1 == 0x10) && (uVar7 == 0x11)) {
            *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x260) = 0x11;
          }
          uVar7 = F_006df850(this_00,(*(int * PTR32 *)(gen_frame + 0x74)),uVar2,uVar3);
          if ((*(uint *)(gen_frame + 0x68)) == 0x80000000) {
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc0) = 0;
            return uVar7;
          }
          pvVar6 = (undefined *)F_006eb2d0((*(undefined * PTR32 *)(gen_frame + 0x78)),(*(uint *)&gen_args[1]),(*(int *)(gen_frame + 0x70)));
        }
      }
    }
  }
  return (uint)pvVar6;
}

/* ref: FUN_006f0f30 */
uint F_006f0f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f0f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined8 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = REFG(undefined4, 0x1379694);
  puVar7 = REFG(undefined4 * PTR32, 0x1323874);
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (param_1 < 0) {
    if (param_1 != -1) goto LAB_006f118f;
  }
  else if (param_1 < REFG(int, 0x13238f8)) {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x1323878))[(int)(param_1)]));
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x214))
                      (piVar1,REFG(undefined4, 0x1379694),REFG(undefined4 * PTR32, 0x1323874),(uint)REFG(undefined1, 0x13238fc),REFG(undefined4, 0x1323900));
    if (uVar4 != 0) {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4);
      if (bVar3 == 0) {
        if (*(int *)((int)this + 0x720) == 0) {
          *(uint *)((int)this + 0x720) = uVar4;
        }
        goto LAB_006f1183;
      }
    }
    if (REFG(undefined1, 0x13238fc) == 1) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x210))(piVar1,uVar8,puVar7,1,REFG(undefined4, 0x1323900));
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x1bc))(piVar1,uVar8,puVar7,(uint)REFG(undefined1, 0x13238fc),REFG(undefined4, 0x1323900));
      bVar3 = REFG(undefined1, 0x13238fc);
      iVar2 = piVar1[2];
      uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar7)(puVar7);
      *(int *)((int)this + 0x240) = (int)uVar6;
      *(char *)((int)this + 0x250) = (char)uVar5;
      *(int *)((int)this + 0x244) = (int)((ulonglong)uVar6 >> 0x20);
      *(int *)((int)this + 0x238) = iVar2;
      *(byte *)((int)this + 0x248) = bVar3;
      *(undefined4 *)((int)this + 0x24c) = 0;
      *(uint *)((int)this + 0x254) = uVar4;
      if (uVar4 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360),uVar4,1);
        if (uVar4 == 0x10) {
          F_006b8f50((uint)puVar7);
        }
      }
      iVar2 = piVar1[2];
      if ((uVar5 & 2) == 0) {
        uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar7)(puVar7);
        uVar9 = 0;
        uVar8 = 0;
        puVar7 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1c2;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
        (*(undefined8 *)(gen_frame + 0x20)) = uVar6;
        (*(int *)(gen_frame + 0x28)) = iVar2;
        this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        bVar3 = F_00974e00(this_00,puVar7,uVar8,uVar9);
        if (bVar3 == 0) {
          F_00a4a760(&REFG(undefined, 0x14a7360),uVar4,0);
          F_006b9180((int)this + 0x230);
        }
      }
      else {
        uVar4 = (uint)REFG(undefined1, 0x13238fc);
        uVar9 = 2;
        uVar8 = REFG(undefined4, 0x1323900);
        uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar7)(puVar7);
        F_006f0be0(this,iVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar8,uVar9);
      }
    }
    goto LAB_006f118f;
  }
LAB_006f1183: ;
  F_00547460(&REFG(undefined4, 0x1375bc0),1);
LAB_006f118f: ;
  REFG(undefined4 * PTR32, 0x1323874) = (undefined4 *)0x0;
  REFG(int, 0x13238f8) = 0;
  REFG(undefined1, 0x13238fc) = 0;
  REFG(undefined4, 0x1323900) = 0;
  REFG(undefined4, 0x1323904) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_006f11c0 */
uint F_006f11c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb70];
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint * puVar6;
  undefined * this_00;
  int iVar7;
  uint uVar8;
  uint * puVar9;
  undefined1 * in_ecx;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined * PTR32 * ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0xb68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb6c);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = ((undefined1 *)(gen_frame + 0x68));
  iVar7 = 0x1f;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  uVar8 = -(uint)(REFG(undefined4, 0x13238f8) != 1);
  uVar10 = 0;
  (*(byte *)(gen_frame + 0x13)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  if (REFG(undefined4, 0x13238f8) != 0) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x68));
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x1323878))[(int)(uVar10)]));
      ((code *)*(gen_code32 *)(*piVar1 + 0x1b8))(piVar1,(*(undefined1 * PTR32 *)(gen_frame + 0x8)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c0))(piVar1,REFG(undefined4, 0x1323874));
      ((uint *)(gen_frame + 0xae8))[(int)(uVar10)] = uVar4;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,REFG(undefined4, 0x1323874));
      bVar2 = (byte)(uVar4 >> 8);
      if ((*(byte *)(gen_frame + 0x13)) < bVar2) {
        (*(int *)(gen_frame + 0x4)) = 1;
        uVar8 = uVar10;
        (*(byte *)(gen_frame + 0x13)) = bVar2;
      }
      else if (bVar2 == (*(byte *)(gen_frame + 0x13))) {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8)) + 0x54;
      uVar10 = uVar10 + 1;
    } while (uVar10 < REFG(undefined4, 0x13238f8));
  }
  if ((REFG(undefined4, 0x13238f8) == 1) || ((*(int *)(gen_frame + 0x4)) == 1)) {
    F_006f0f30(this,uVar8);
  }
  else {
    puVar5 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    *(undefined4 *)((int)this + 0x1c0) = *puVar5;
    *(undefined4 *)((int)this + 0x1c4) = puVar5[1];
    *(undefined4 *)((int)this + 0x1c8) = puVar5[2];
    iVar7 = REFG(undefined4, 0x13238f8) * 3;
    uVar8 = iVar7 + 9;
    uVar10 = -(uint)((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 8);
    puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar10) | uVar10 + 4,0,0);
    if (puVar6 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = puVar6 + 1;
      *puVar6 = uVar8;
      puVar6 = puVar9;
      for (iVar7 = iVar7 + 8; -1 < iVar7; iVar7 = iVar7 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 2;
      }
    }
    F_005a2710(puVar9 + 6,6);
    uVar10 = 0;
    puVar9[7] = (uint)&REFG(undefined, 0x10b3a1b);
    if (REFG(undefined4, 0x13238f8) != 0) {
      (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x68));
      puVar6 = puVar9 + 0xf;
      do {
        F_005a2710(puVar6 + -3,3);
        puVar6[-2] = ((uint *)(gen_frame + 0xae8))[(int)(uVar10)];
        uVar4 = F_0042a990((*(undefined1 * PTR32 *)(gen_frame + 0x8)));
        F_005a2710(puVar6 + -1,6);
        *puVar6 = uVar4;
        F_005a2710(puVar6 + 1,3);
        (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8)) + 0x54;
        puVar6[2] = 0;
        uVar10 = uVar10 + 1;
        puVar6 = puVar6 + 6;
      } while (uVar10 < REFG(undefined4, 0x13238f8));
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    F_00ab0230(0x19029,((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(puVar9 + (uVar10 * 3 + 6) * 2,3);
    (puVar9 + (uVar10 * 3 + 6) * 2)[1] = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(puVar9 + uVar10 * 6 + 0xe,6);
    puVar9[uVar10 * 6 + 0xf] = uVar4;
    F_005a2710(puVar9 + uVar10 * 6 + 0x10,3);
    uVar16 = 4;
    uVar15 = 0;
    uVar14 = 0;
    ppuVar13 = &REFG(undefined * PTR32, 0x1323870);
    puVar9[uVar10 * 6 + 0x11] = 0;
    uVar12 = 0x28;
    puVar6 = puVar9;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    REFG(undefined4, 0x1323904) = F_008668b0(this_00,uVar12,uVar8,puVar6,ppuVar13,uVar14,uVar15,uVar16);
    if (puVar9 != (uint *)0x0) {
      uVar8 = puVar9[-1];
      puVar6 = puVar9 + uVar8 * 2;
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
      }
      F_00406b30(puVar9 + -1);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  puVar6 = ((uint *)(gen_frame + 0xae8));
  iVar7 = 0x1f;
  do {
    puVar6 = puVar6 + -0x15;
    uVar11 = F_0042c880(puVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0xb68)) ^ (uint)(uint)(gen_frame + 0xb6c));
  return (uint)uVar11;
}

/* ref: FUN_006f1520 */
uint F_006f1520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd2))) = 0;
  puVar2 = (undefined4 *)F_00406b90(0x14,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar2[2] = uVar1;
    uVar1 = REFG(float, 0x1094838);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c74));
    puVar2[3] = uVar1;
    *(undefined2 *)(puVar2 + 4) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_006f15b0 */
uint F_006f15b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f15b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)F_00406b90(0x40c,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c)));
    puVar2[0x101] = uVar1;
    *(undefined1 *)(puVar2 + 0x100) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 0))));
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c90));
    *(undefined2 *)(puVar2 + 0x102) = 0;
    F_00c46aa0(puVar2 + 1,(*(undefined4 *)&gen_args[1]),((uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xff) * 4);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
    uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_006f1640 */
uint F_006f1640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1640u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  float10 fVar3;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    fVar3 = (float10)(int)(*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
    if ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    puVar1[1] = (undefined4)gen_fl2bits((float)(fVar3 * (float10)*(double *)&REFG(undefined, 0x10ba6f8)));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f16b0 */
uint F_006f16b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f16b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ce4));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f1700 */
uint F_006f1700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
    F_0071edf0(puVar1 + 2);
    puVar1[0x26] = (*(undefined4 *)&gen_args[2]);
    puVar1[0x24] = 0;
    puVar1[0x25] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar1[0x27] = 3;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f17a0 */
uint F_006f17a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x6f17a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  
  uVar1 = F_00406b90(0xc0,0,0);
  if (uVar1 != 0) {
    (*(float *)&gen_args[5]) = gen_bits2f(F_006bb3a0(uVar1,3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5])));
    uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
    return uVar1;
  }
  (*(float *)&gen_args[5]) = 0.0;
  uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_006f1810 */
uint F_006f1810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1810u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
    F_0071edf0(puVar1 + 2);
    puVar1[0x26] = (*(undefined4 *)&gen_args[2]);
    puVar1[0x24] = 0;
    puVar1[0x25] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar1[0x27] = 7;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined2 *)(puVar1 + 0x2f) = 1;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f18b0 */
uint F_006f18b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x6f18b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  
  uVar1 = F_00406b90(0xc0,0,0);
  if (uVar1 != 0) {
    (*(float *)&gen_args[5]) = gen_bits2f(F_006bb3a0(uVar1,7,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5])));
    uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
    return uVar1;
  }
  (*(float *)&gen_args[5]) = 0.0;
  uVar1 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(float *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_006f1920 */
uint F_006f1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8bb0));
    puVar1[1] = 0;
    puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[1]);
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(puVar1 + 4) = _Var3;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1990 */
uint F_006f1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8bcc));
    puVar1[1] = 0;
    puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[1]);
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(puVar1 + 4) = _Var3;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1a00 */
uint F_006f1a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1a00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(0x40,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[2] = (int)uVar4;
    puVar2[4] = (uint)uVar1;
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
    puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
    puVar2[5] = (*(undefined4 *)&gen_args[2]);
    *(undefined2 *)(puVar2 + 0xf) = 0x100;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  }
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_006f1a70 */
uint F_006f1a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x6f1a70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(0x40,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[2] = (int)uVar4;
    puVar2[4] = (uint)uVar1;
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
    puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
    puVar2[8] = *(*(undefined4 * PTR32 *)&gen_args[2]);
    puVar2[9] = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    puVar2[10] = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    puVar2[0xc] = (undefined4)gen_fl2bits((*(float *)&gen_args[3]));
    puVar2[0xd] = (*(undefined4 *)&gen_args[4]);
    puVar2[0xe] = (undefined4)gen_fl2bits((*(float *)&gen_args[5]));
    *(undefined2 *)(puVar2 + 0xf) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  }
  uVar3 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_006f1b10 */
byte F_006f1b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1b10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined8 uVar6;
  
  uVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  uVar4 = F_00aa02d0((*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]),0);
  if ((char)uVar4 == '\0') {
    bVar3 = F_00aa2d60((*(undefined4 * PTR32 *)&gen_args[1]),uVar2,0);
    if (bVar3 == 0) {
      return 0;
    }
  }
  puVar5 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar5[2] = (int)uVar6;
    puVar5[4] = (uint)uVar1;
    puVar5[3] = (int)((ulonglong)uVar6 >> 0x20);
    *puVar5 = (*(undefined * PTR32 (*)[7])REFP(0x10b8d40));
    puVar5[6] = (*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar5;
  }
  F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return 1;
}

/* ref: FUN_006f1bb0 */
uint F_006f1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1bb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * in_ecx;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  in_ecx = (*(undefined4 * PTR32 *)&gen_args[1]);
  bVar2 = F_00a9fc00((*(undefined4 * PTR32 *)&gen_args[1]));
  if (bVar2 == 0) {
    bVar2 = F_00aa07c0(in_ecx);
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  puVar3 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(ushort *)(in_ecx + 0x22);
    uVar5 = ((gen_lcode *)*(gen_code32 *)*in_ecx)(in_ecx);
    puVar3[4] = (uint)uVar1;
    *(undefined8 *)(puVar3 + 2) = uVar5;
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x10b8d20));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
  }
  uVar4 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_006f1c40 */
byte F_006f1c40(unsigned int gen_a0)
{
  GEN_ENTER(0x6f1c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if ((uVar2 & 8) == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = (*(undefined * PTR32 (*)[6])REFP(0x10b8a80));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f1cc0 */
byte F_006f1cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1cc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[2] = (int)uVar3;
    puVar2[4] = (uint)uVar1;
    puVar2[3] = (int)((ulonglong)uVar3 >> 0x20);
    *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x10b8d60));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return 1;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return 1;
}

/* ref: FUN_006f1d30 */
uint F_006f1d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1d30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x30,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c;
    puVar1[10] = (*(undefined4 * PTR32 *)&gen_args[2]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
    puVar1[0xb] = 0;
    F_00c46aa0(puVar1 + 2,(*(undefined4 *)&gen_args[1]),(int)(*(undefined4 * PTR32 *)&gen_args[2]) * 4);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_006f1db0 */
uint F_006f1db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1db0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined8 uVar5;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar3 = F_00a9fbf0((*(undefined4 * PTR32 *)&gen_args[1]));
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  puVar4 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(ushort *)(puVar2 + 0x22);
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
    puVar4[4] = (uint)uVar1;
    *(undefined8 *)(puVar4 + 2) = uVar5;
    *puVar4 = (*(undefined * PTR32 (*)[7])REFP(0x10b8d80));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
  }
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return CONCAT31((int3)(uVar3 >> 8),1);
}

/* ref: FUN_006f1e30 */
byte F_006f1e30(unsigned int gen_a0)
{
  GEN_ENTER(0x6f1e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  bVar1 = F_00b6b550(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8a9c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f1ec0 */
uint F_006f1ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f1ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
    F_0042b630(puVar1 + 1);
    puVar1[0x16] = (*(undefined4 *)&gen_args[1]);
    puVar1[0x17] = (*(undefined4 *)&gen_args[3]);
    puVar1[0x19] = (*(undefined4 *)&gen_args[5]);
    puVar1[0x18] = (*(undefined4 *)&gen_args[4]);
    puVar1[0x1a] = (*(undefined4 *)&gen_args[6]);
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((int)puVar1 + 0x6e) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 0))));
    *(undefined1 *)((int)puVar1 + 0x6f) = 0;
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar2;
}

/* ref: FUN_006f1f50 */
uint F_006f1f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f1f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_006f1fa0 */
uint F_006f1fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f1fa0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * puVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(100,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = (*(undefined4 * PTR32 *)&gen_args[1]);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = uVar1;
    puVar3 = (*(undefined * PTR32 *)&gen_args[2]);
    if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
      puVar3 = &REFG(undefined, 0x10b3a4a);
    }
    F_0042cc20(puVar2 + 4,puVar3,REFG(undefined4, 0x108cc50));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    uVar4 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar4;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar4 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar4;
}

/* ref: FUN_006f2030 */
uint F_006f2030(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = (undefined *)F_00406b90(0x10,0,0);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_006c9c80(pvVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f2080 */
uint F_006f2080(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c58));
    *(undefined1 *)(puVar1 + 1) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006f20d0 */
byte F_006f20d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f20d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  bVar1 = F_00b6b580(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ab8));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f2160 */
byte F_006f2160(unsigned int gen_a0)
{
  GEN_ENTER(0x6f2160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  bVar1 = F_00b6b5b0(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8ad4));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f21f0 */
byte F_006f21f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f21f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_ecx;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  bVar1 = F_00b6b5d0(in_ecx);
  if (bVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8af0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f2280 */
byte F_006f2280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  undefined8 uVar5;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  bVar4 = GEN_ISNAN(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[1])[0xbb2])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar4 != (bVar4 || gen_bits2f((*(undefined4 * PTR32 *)&gen_args[1])[0xbb2]) == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  puVar3 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(ushort *)(puVar2 + 0x22);
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
    puVar3[4] = (uint)uVar1;
    *(undefined8 *)(puVar3 + 2) = uVar5;
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x10b8da0));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
  }
  F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return 1;
}

/* ref: FUN_006f2310 */
uint F_006f2310(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6f2310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[2] = (int)uVar4;
    puVar2[4] = (uint)uVar1;
    puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
    *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x10b8dc0));
    puVar2[6] = (undefined4)gen_fl2bits((*(float *)&gen_args[2]));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    uVar3 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  uVar3 = F_00754690((undefined *)((*(int *)&gen_args[0]) + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_006f2390 */
uint F_006f2390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f2390u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[2] = (int)uVar4;
    puVar2[4] = (uint)uVar1;
    puVar2[5] = (*(undefined4 *)&gen_args[2]);
    puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
    puVar2[6] = (*(undefined4 *)&gen_args[3]);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b28));
    *(undefined1 *)(puVar2 + 7) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[4]) + 0))));
    (*(undefined4 * PTR32 *)&gen_args[4]) = puVar2;
    uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[4]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[4]) = (undefined4 *)0x0;
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[4]));
  return uVar3;
}

/* ref: FUN_006f2410 */
uint F_006f2410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f2410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0x22)));
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
    puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
    puVar2[4] = (uint)uVar1;
    puVar2[2] = (int)uVar4;
    *(undefined1 *)(puVar2 + 6) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 0))));
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b0c));
    puVar2[5] = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
    uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
    return uVar3;
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  uVar3 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 * PTR32 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_006f2490 */
uint F_006f2490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f2490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (*(undefined4 *)&gen_args[1]);
    puVar1[2] = (*(undefined4 *)&gen_args[2]);
    *(undefined1 *)(puVar1 + 3) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[3]) + 0))));
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    (*(undefined4 * PTR32 *)&gen_args[3]) = puVar1;
    uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[3]));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x0;
  uVar2 = F_00754690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(undefined4 * PTR32 *)&gen_args[3]));
  return uVar2;
}

/* ref: FUN_006f24f0 */
uint F_006f24f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f24f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return uVar2;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  uVar2 = F_00754690((undefined *)((int)this + 0x4c),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf59 */
uint F_006f2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  float10 fVar6;
  
  pvVar1 = *(undefined * PTR32 *)(param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar1;
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 3) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    F_006f1700(pvVar1,uVar2,uVar3);
  }
  else {
    if (uVar2 != 5) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),3);
    piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3,uVar3);
    pvVar1 = *(undefined * PTR32 *)(*piVar4 + 4);
    uVar3 = F_00a5feb0(pvVar1);
    fVar6 = F_00a01dd0(((byte *)(gen_frame + 0x4)),5);
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    param_2 = *(uint *)((int)pvVar1 + 0xb0);
    if ((char)uVar5 == '\x04') {
      param_2 = *(uint *)((int)pvVar1 + 0x20);
      uVar5 = 0;
    }
    F_006f17a0((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar2,uVar3,GEN_TOF(gen_bits2f(param_2)),uVar5 & 0xff,(*(float *)(gen_frame + 0x28)));
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf60 */
uint F_006f2670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  float10 fVar4;
  
  this = *(undefined * PTR32 *)(param_1 + 4);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 3) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    F_006f1810(this,uVar1,uVar2);
  }
  else {
    if (uVar2 != 5) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar1 = F_00a01d20(((byte *)(gen_frame + 0x4)),3);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3,uVar1);
    this_00 = *(undefined * PTR32 *)(*piVar3 + 4);
    uVar1 = F_00a5feb0(this_00);
    fVar4 = F_00a01dd0(((byte *)(gen_frame + 0x4)),5);
    (*(float *)(gen_frame + 0x28)) = (float)fVar4;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    param_2 = *(uint *)((int)this_00 + 0xb0);
    if ((char)uVar2 == '\x04') {
      param_2 = *(uint *)((int)this_00 + 0x20);
      uVar2 = 0;
    }
    F_006f18b0(this,(*(uint *)(gen_frame + 0x24)),uVar1,GEN_TOF(gen_bits2f(param_2)),uVar2 & 0xff,(*(float *)(gen_frame + 0x28)));
  }
  uVar1 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf61 */
uint F_006f2780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006f1990(*(undefined * PTR32 *)(this + 4),uVar1);
  uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf62 */
uint F_006f27d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f27d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006f1920(*(undefined * PTR32 *)(this + 4),uVar1);
  uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf72 */
uint F_006f2820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint * this_00;
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  iVar7 = 0;
  iVar6 = 2;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (1 < (int)uVar3) {
    do {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),iVar6);
      ((uint *)(gen_frame + 0x28))[(int)(iVar7)] = uVar3;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 1;
      uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
    } while (iVar6 <= (int)uVar3);
  }
  iVar6 = *(int *)(this + 4);
  puVar4 = (undefined4 *)F_00406b90(0x30,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = iVar6 + 0x3c;
    *puVar4 = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
    puVar4[10] = iVar7;
    puVar4[0xb] = 0;
    F_00c46aa0(puVar4 + 2,((uint *)(gen_frame + 0x28)),iVar7 * 4);
  }
  ppuVar1 = *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x50);
  this_00 = (uint *)(iVar6 + 0x4c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
  if (&(*(undefined4 * PTR32 *)(gen_frame + 0x24)) < ppuVar1) {
    ppuVar2 = (undefined4 * PTR32 *)*this_00;
    if (ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x24))) {
      if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54)) {
        iVar7 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
        if (iVar7 == -1) {
                    
          F_00c4579a("vector<T> too long");
        }
        uVar5 = iVar7 + 1;
        uVar3 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54) - (int)((int)(uintptr_t)ppuVar2) >> 2;
        if (uVar3 < uVar5) {
          if (-(uVar3 >> 1) - 1 < uVar3) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + (uVar3 >> 1);
          }
          if (uVar3 < uVar5) {
            uVar3 = uVar5;
          }
          F_00751140(this_00,uVar3);
        }
      }
      if (*(undefined4 * PTR32 *)(iVar6 + 0x50) != (undefined4 *)0x0) {
        **(undefined4 * PTR32 *)(iVar6 + 0x50) =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
      }
      goto LAB_006f297f;
    }
  }
  if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54)) {
    iVar7 = (int)((int)ppuVar1 - *this_00) >> 2;
    if (iVar7 == -1) {
                    
      F_00c4579a("vector<T> too long");
    }
    uVar5 = iVar7 + 1;
    uVar3 = (int)((int)*(undefined4 * PTR32 * PTR32 *)(iVar6 + 0x54) - *this_00) >> 2;
    if (uVar3 < uVar5) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
      F_00751140(this_00,uVar3);
    }
  }
  if (*(undefined4 * PTR32 *)(iVar6 + 0x50) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)(iVar6 + 0x50) = puVar4;
  }
LAB_006f297f: ;
  *(int *)(iVar6 + 0x50) = *(int *)(iVar6 + 0x50) + 4;
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf102 */
uint F_006f29b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f29b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(4,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8ce4));
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf58 */
uint F_006f2a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    fVar3 = (float10)(int)uVar2;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
    if ((int)uVar2 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = (undefined4)gen_fl2bits((float)(fVar3 * (float10)*(double *)&REFG(undefined, 0x10ba6f8)));
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf66 */
uint F_006f2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f1e30(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf71 */
uint F_006f2b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f1c40(*(undefined * PTR32 *)(this + 4));
  if (bVar1 == 0) {
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return 0;
  }
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf73 */
uint F_006f2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  
  ((uint *)(gen_frame + 0x48))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar8 = *(int *)(this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  puVar5 = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar5;
  (*(bool *)(gen_frame + 0x37)) = true;
  if (2 < (int)uVar4) {
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
    if (bVar3 != 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
      (*(bool *)(gen_frame + 0x37)) = uVar6 == 0;
    }
  }
  F_00a51200(0x1e,(*(undefined4 * PTR32 *)(gen_frame + 0x30)),0,0,0);
  if (*(char *)(iVar8 + 0xd4) != '\0') {
    F_00a01860(((undefined1 *)(gen_frame + 0x38)),param_1);
    F_00b9ae00((*(undefined4 *)(gen_frame + 0x40)),1);
    F_00a01890(((undefined1 *)(gen_frame + 0x38)));
    F_00a02240(((byte *)(gen_frame + 0xc)));
    F_00c47745(((uint *)(gen_frame + 0x48))[4] ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  ((uint *)(gen_frame + 0x48))[0] = 0;
  ((uint *)(gen_frame + 0x48))[1] = 0;
  ((uint *)(gen_frame + 0x48))[2] = 0;
  ((uint *)(gen_frame + 0x48))[3] = 0;
  iVar8 = 4;
  puVar9 = ((uint *)(gen_frame + 0x48));
  do {
    if ((int)uVar4 < iVar8) break;
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),iVar8);
    if (bVar3 != 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),iVar8);
      *puVar9 = uVar6;
    }
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar8 < 8);
  iVar8 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4);
  puVar5 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
    F_0042b630(puVar5 + 1);
    puVar5[0x16] = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
    puVar5[0x17] = ((uint *)(gen_frame + 0x48))[0];
    puVar5[0x18] = ((uint *)(gen_frame + 0x48))[1];
    puVar5[0x19] = ((uint *)(gen_frame + 0x48))[2];
    puVar5[0x1a] = ((uint *)(gen_frame + 0x48))[3];
    *(undefined2 *)(puVar5 + 0x1b) = 0;
    *(bool *)((int)puVar5 + 0x6e) = (*(bool *)(gen_frame + 0x37));
    *(undefined1 *)((int)puVar5 + 0x6f) = 0;
  }
  ppuVar1 = *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x50);
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar5;
  if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x30)) < ppuVar1) && (ppuVar2 = *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x4c), ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x30)))) {
    if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54)) {
      iVar7 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
      if (iVar7 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar6 = iVar7 + 1;
      uVar4 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54) - (int)((int)(uintptr_t)ppuVar2) >> 2;
      if (uVar4 < uVar6) {
        if (-(uVar4 >> 1) - 1 < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
        F_00751140((undefined *)(iVar8 + 0x4c),uVar4);
      }
    }
    if (*(undefined4 * PTR32 *)(iVar8 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(iVar8 + 0x50) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0x4c) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x30)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
    }
  }
  else {
    if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54)) {
      iVar7 = (int)ppuVar1 - *(int *)(iVar8 + 0x4c) >> 2;
      if (iVar7 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar6 = iVar7 + 1;
      uVar4 = (int)*(undefined4 * PTR32 * PTR32 *)(iVar8 + 0x54) - *(int *)(iVar8 + 0x4c) >> 2;
      if (uVar4 < uVar6) {
        if (-(uVar4 >> 1) - 1 < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
        F_00751140((undefined *)(iVar8 + 0x4c),uVar4);
      }
    }
    if (*(undefined4 * PTR32 *)(iVar8 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(iVar8 + 0x50) = puVar5;
    }
  }
  *(int *)(iVar8 + 0x50) = *(int *)(iVar8 + 0x50) + 4;
  uVar4 = F_00a02290(((byte *)(gen_frame + 0xc)),1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x48))[4] ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf104 */
uint F_006f2dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2dc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(uint *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (undefined *)F_00406b90(0x10,0,0);
  if (this_00 == (undefined *)0x0) {
    (*(uint *)&gen_args[1]) = 0;
  }
  else {
    (*(uint *)&gen_args[1]) = F_006c9c80(this_00);
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(uint *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf105 */
uint F_006f2e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2e30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8c58));
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf76 */
uint F_006f2ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f20d0(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf78 */
uint F_006f2ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f2160(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf81 */
uint F_006f2f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  bVar1 = F_006f21f0(*(undefined * PTR32 *)(this + 4));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
    F_00a02240(((undefined1 *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf93 */
uint F_006f2f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f2f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd1))) = 1;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(8,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = uVar3;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf94 */
uint F_006f3030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar4 = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (1 < (int)uVar2) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  }
  (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3 = (undefined4 *)F_00406b90(100,0,0);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar3 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = uVar1;
    puVar3[3] = uVar4;
    F_0042cc20(puVar3 + 4,&REFG(undefined, 0x10b3a4a),REFG(undefined4, 0x108cc50));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
  }
  F_00754690((undefined *)((*(int *)(gen_frame + 0x28)) + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd1))) = 0;
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf103 */
uint F_006f3100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00406b90(0x10,0,0);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 3))) = 0;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00a02290(((undefined1 *)(gen_frame + 0xc)),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf107 */
uint F_006f3170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined * this;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (uVar2 == 2) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    F_006f1a00(*(undefined * PTR32 *)(param_1 + 4),uVar1,uVar2);
  }
  else {
    uVar2 = F_00a019d0(((byte *)(gen_frame + 0x4)));
    if ((int)uVar2 < 4) {
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return 0;
    }
    uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),2);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2,uVar2);
    this = *(undefined * PTR32 *)(*piVar3 + 4);
    uVar2 = F_00a5feb0(this);
    fVar5 = F_00a01dd0(((byte *)(gen_frame + 0x4)),4);
    (*(float *)(gen_frame + 0x28)) = (float)fVar5;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    param_2 = *(uint *)((int)this + 0xb0);
    if ((char)uVar4 == '\x04') {
      param_2 = *(uint *)((int)this + 0x20);
      uVar4 = 0;
    }
    F_006f1a70(*(undefined4 *)(param_1 + 4),(*(undefined4 *)(gen_frame + 0x24)),uVar2,GEN_TOF(gen_bits2f(param_2)),uVar4 & 0xff,(*(float *)(gen_frame + 0x28))
                );
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf133 */
uint F_006f3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(char)uVar4);
  F_006f2390(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1,uVar2,(*(uint *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf115 */
uint F_006f3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = F_006f1b10(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(iVar1 + 0x60),uVar3);
  if (bVar2 != 0) {
    uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf117 */
uint F_006f33a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f33a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_006f1bb0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar2 + 0x60));
  if ((char)uVar1 != '\0') {
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf120 */
uint F_006f3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_006f1cc0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar3 + 0x60));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf122 */
uint F_006f3480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_006f1db0(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar2 + 0x60));
  if ((char)uVar1 != '\0') {
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf127 */
uint F_006f34f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f34f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_006f2280(*(undefined * PTR32 *)(this + 4),*(undefined4 *)(*piVar3 + 0x60));
  if (bVar1 != 0) {
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf135 */
uint F_006f3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3560u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar5 = 1;
  bVar2 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar3) {
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  }
  if (3 < (int)uVar3) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),4);
  }
  iVar1 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 4);
  puVar4 = (undefined4 *)F_00406b90(0x10,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    *puVar4 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
    puVar4[1] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar4[2] = uVar5;
    *(byte *)(puVar4 + 3) = bVar2;
    *(undefined1 *)((int)puVar4 + 0xd) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
  }
  F_00754690((undefined *)(iVar1 + 0x4c),&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: Client::Game::Event::PlayCutSceneTask::vf1 */
uint F_006f3640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined * pPVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
  if (piVar1 == (int *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  if (this[0x6d] == (undefined1)0x0) {
    if (**(char * PTR32 *)(this + 4) == '\0') {
      puVar2 = (uint *)F_00ab3810(*(undefined4 *)(this + 0x58));
      if (puVar2 == (uint *)0x0) goto LAB_006f3836;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
      F_0042ccf0(this + 4,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    }
    pvVar5 = REFG(void * PTR32, 0x1375b00);
    if (this[0x6c] == (undefined1)0x0) {
      uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(&(*(undefined4 *)(gen_frame + 0xc)),*(undefined4 *)(uVar3 + 0x14));
      uVar3 = F_0049c160(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      uVar4 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      pvVar5 = REFG(void * PTR32, 0x14c4ea0);
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0),0x10000000,(*(undefined4 *)(gen_frame + 0xc)));
      F_00b5f440(pvVar5,0x10000001,uVar3);
      F_00b5f440(pvVar5,0x10000002,uVar4);
      F_00b5f440(pvVar5,0x1000000f,1);
      F_00b5f440(pvVar5,0x10000004,(uint)REFG(undefined1, 0x14ab14f));
      F_00b5f440(pvVar5,0x10000012,(uint)REFG(undefined1, 0x14ab0d4));
      bVar6 = REFG(undefined1, 0x14ab150) & 2;
      F_00b5f440(pvVar5,0x10000010,(uint)((REFG(undefined1, 0x14ab150) & 1) == 1));
      F_00b5f440(pvVar5,0x10000011,(uint)(bVar6 == 2));
      pPVar8 = this + 0x5c;
      F_00b5f440(pvVar5,0x10000009,*(undefined4 *)(this + 0x5c));
      F_00b5f440(pvVar5,0x1000000a,*(undefined4 *)(this + 0x60));
      F_00b5f440(pvVar5,0x1000000b,*(undefined4 *)(this + 100));
      F_00b5f440(pvVar5,0x1000000c,*(undefined4 *)(this + 0x68));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x10)))));
      uVar7 = 0x49;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      pvVar5 = (undefined *)F_00484010(pvVar5,uVar7);
      F_00490f30(pvVar5,pPVar8);
      pvVar5 = REFG(void * PTR32, 0x1375b00);
      uVar3 = F_0042a990(this + 4);
      F_0052f730(pvVar5,uVar3);
      this[0x6c] = (undefined1)0x1;
    }
    else {
      uVar3 = F_0042a990(this + 4);
      bVar6 = F_0052f530(pvVar5,uVar3);
      if (bVar6 != 0) {
        bVar6 = F_006d9e20(REFG(void * PTR32, 0x1488344));
        if (bVar6 == 0xf) {
          F_004e7cc0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
        }
        pvVar5 = REFG(void * PTR32, 0x1375b00);
        uVar3 = F_0042a990(this + 4);
        F_0052f780(pvVar5,uVar3);
        this[0x6d] = (undefined1)0x1;
        goto LAB_006f38a5;
      }
    }
LAB_006f3836: ;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
LAB_006f38a5: ;
  if ((this[0x6f] == (undefined1)0x0) && (this[0x6d] != (undefined1)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
    if ((((uVar3 & 1) != 0) || (uVar3 == 0)) &&
       (this[0x6f] = (undefined1)0x1, *(int *)(this + 0x58) == 0x80)) {
      uVar7 = 1;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      F_008976b0(pvVar5,uVar7);
    }
  }
  pvVar5 = REFG(void * PTR32, 0x1375b00);
  uVar3 = F_0042a990(this + 4);
  bVar6 = F_0052f640(pvVar5,uVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)(bVar6 == 0);
}

/* ref: Client::Game::Event::PlayCutSceneTask::vf3 */
byte F_006f3920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (this[0x6c] == (undefined1)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0042a990(this + 4);
  }
  F_006f1fa0(param_1,2,uVar1);
  if (param_2 != (int *)0x0) {
    if ((*(uint *)((int)param_1 + 0x6c) & 0x400) != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::LuaActorModule::vf1 */
uint F_006f3990(unsigned int gen_a0)
{
  GEN_ENTER(0x6f3990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006ed930(this,0);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf36 */
byte F_006f39a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f39a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pEVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  if (*(int *)(this + 0x78) != 0) {
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + param_2;
    bVar5 = F_006cda10(this);
    if (bVar5 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x74);
    *(undefined4 *)(this + 0xe4) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x74) = 0;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x78) + 0x50))))(*(int * PTR32 *)(this + 0x78));
    if (uVar6 == 1) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x78) + 0x18))))(*(int * PTR32 *)(this + 0x78));
    }
    pEVar1 = this + 0xd0;
    *(undefined4 *)(this + 0x78) = 0;
    if (pEVar1 != ((undefined1 *)(gen_frame + 0xc))) {
      iVar3 = *(int *)pEVar1;
      *(int *)pEVar1 = 0;
      *(undefined4 *)(this + 0xd4) = 0;
      iVar4 = *(int *)(this + 0xd8);
      *(undefined4 *)(this + 0xd8) = 0;
      if (iVar3 != 0) {
        F_00429760(iVar3,(iVar4 - iVar3 >> 2) * 4,800);
      }
    }
  }
  return 0;
}

/* ref: FUN_006f3a50 */
uint F_006f3a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf53 */
unsigned int F_006f3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf54 */
unsigned int F_006f3ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf55 */
unsigned int F_006f3ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf56 */
unsigned int F_006f3b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf57 */
unsigned int F_006f3b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf58 */
unsigned int F_006f3b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf59 */
unsigned int F_006f3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f3ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf61 */
unsigned int F_006f3bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf60 */
unsigned int F_006f3c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f3c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf62 */
unsigned int F_006f3c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf63 */
unsigned int F_006f3c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf64 */
unsigned int F_006f3c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf65 */
unsigned int F_006f3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf66 */
unsigned int F_006f3cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf67 */
unsigned int F_006f3d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf68 */
unsigned int F_006f3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf69 */
unsigned int F_006f3d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf70 */
unsigned int F_006f3db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf71 */
unsigned int F_006f3de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf72 */
unsigned int F_006f3e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf73 */
unsigned int F_006f3e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf74 */
unsigned int F_006f3e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf75 */
unsigned int F_006f3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf76 */
unsigned int F_006f3ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf77 */
unsigned int F_006f3f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf78 */
unsigned int F_006f3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf79 */
unsigned int F_006f3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f3f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf80 */
unsigned int F_006f3f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf83 */
uint F_006f3fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f3fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
    EVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f4000 */
uint F_006f4000(unsigned int gen_a0)
{
  GEN_ENTER(0x6f4000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar3 = (*(uint *)(gen_frame + 0x8)) >> 8;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  if ((*(int *)((int)this + 0x60) == 0) &&
     (uVar2 = F_00a022b0(*(undefined4 *)((int)this + 0x1d0)), uVar2 == 0)) {
    uVar2 = F_00a019d0(*(undefined4 *)((int)this + 0x1d0));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31((int3)uVar3,(char)uVar2);
    if ((char)uVar2 != '\0') {
      (*(uint *)(gen_frame + 0x4)) = uVar2 & 0xff;
      puVar4 = ((uint *)(gen_frame + 0xc));
      iVar5 = 1;
      do {
        bVar1 = F_00a01f40(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
        if (bVar1 == 0) {
          bVar1 = F_00a01f80(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
          if (bVar1 == 0) {
            *puVar4 = 0;
          }
          else {
            bVar1 = F_00a01fa0(*(undefined * PTR32 *)((int)this + 0x1d0),iVar5);
            *puVar4 = (uint)(bVar1 != 0);
          }
        }
        else {
          uVar3 = F_00b9ab70(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 8))),iVar5);
          *puVar4 = uVar3;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
      } while ((*(uint *)(gen_frame + 0x4)) != 0);
    }
    F_00a01a00(*(undefined * PTR32 *)((int)this + 0x1d0),uVar2);
  }
  if (*(int *)((int)this + 0x1d0) != 0) {
    F_006b8e20(REFG(void * PTR32, 0x1488344),(int)this + 0x1d0);
  }
  uVar3 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),((uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_006f4150 */
unsigned int F_006f4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 1) {
    bVar1 = F_00a02270(param_1);
    if (bVar1 != 0) {
      *(int *)((int)this + 0x60) = param_1;
    }
    F_006f4000(this);
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf36 */
byte F_006f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint * puVar1;
  undefined4 uVar2;
  undefined * pLVar3;
  byte bVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = param_1;
  (*(int *)(gen_frame + 0x10)) = param_3;
  (*(uint *)(gen_frame + 0x14)) = 0;
  iVar6 = param_3;
  iVar9 = param_1;
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)(iVar9 + (*(uint *)(gen_frame + 0x14)) * 4) + 4)));
      uVar7 = (*(uint *)(gen_frame + 0x14));
      if (puVar1 != (uint *)0x0) {
        uVar2 = *((undefined4 *)GEN_TOP((iVar8 + *(int *)(iVar6 + 0xc))));
        uVar7 = puVar1[1];
        F_0042cc20(((undefined1 *)(gen_frame + 0xcc)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x120)),(int)puVar1 + (uVar7 & 0xffffff) + 4,REFG(undefined4, 0x108cc50));
        (*(undefined1 *)(gen_frame + 0x174)) = 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
        F_0042cbc0(((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xcc)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0x120)));
        pLVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x174));
        puVar5 = (undefined4 *)F_004296a0(0xc0,0,800);
        *puVar5 = *(undefined4 *)(pLVar3 + 0x1c4);
        puVar5[1] = *(undefined4 *)(pLVar3 + 0x1c4);
        puVar5[2] = *(undefined4 *)(pLVar3 + 0x1c4);
        *(undefined2 *)(puVar5 + 0x2f) = 0;
        F_00748140(pLVar3 + 0x1cd,puVar5 + 3,&(*(undefined4 *)(gen_frame + 0x1c)));
        F_00750050(pLVar3 + 0x1c0,((undefined1 *)(gen_frame + 0x4)),puVar5,0);
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_0042c880(((undefined1 *)(gen_frame + 0x120)));
        F_0042c880(((undefined1 *)(gen_frame + 0xcc)));
        iVar6 = (*(int *)(gen_frame + 0x10));
        uVar7 = (*(uint *)(gen_frame + 0x14));
        iVar9 = (*(int *)(gen_frame + 0xc));
      }
      iVar8 = iVar8 + 0x10;
      (*(uint *)(gen_frame + 0x14)) = uVar7 + 1;
    } while (uVar7 + 1 < param_2);
  }
  bVar4 = F_006f39a0((undefined *)(*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,param_2,iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return bVar4;
}

/* ref: Client::Game::Event::LuaEventHandler::vf83 */
uint F_006f4330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf36 */
byte F_006f4350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4350u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00735bf0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006f4440 */
uint F_006f4440(unsigned int gen_a0)
{
  GEN_ENTER(0x6f4440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x32)));
  uVar6 = CONCAT31((int3)((uint)*(int *)((int)this + 0x2d4) >> 8),cVar1);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = (byte)((uint)((int)(uintptr_t)this) >> 0x18);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = cVar1;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(cVar1,(short)this)));
  if (cVar1 != '\0') {
    uVar3 = F_00aafe10();
    uVar6 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar6 & 0xffffff);
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = F_00ab2690((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x18);
        uVar6 = uVar4;
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0x32) == (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)))) {
          uVar5 = F_00ab1c90((uint)*(ushort *)(uVar4 + 0x28));
          uVar6 = 0;
          if (uVar5 != 0) {
            if (*(char *)(uVar5 + 0x2a) == '\0') {
              uVar6 = F_00756760((undefined *)((int)this + 0x2f8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
              if (*(char *)(uVar4 + 0x35) != '\0') {
                *(byte *)((int)this + 0x318) = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
              }
            }
            else {
              uVar6 = F_00756760((undefined *)((int)this + 0x308),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
            }
          }
        }
        bVar2 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) + 1;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar2);
        (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = bVar2;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(bVar2,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3))));
      } while (bVar2 < uVar3);
    }
  }
  return uVar6;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf1 */
uint F_006f44f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f44f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x29);
  *(uint *)(this + 0x138) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b917c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6edb10));
  }
  *(undefined4 * PTR32 *)(this + 0x13c) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x138) + 0x48))))
                    (*(int * PTR32 *)(this + 0x138),*(undefined4 *)(this + 0x13c));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf54 */
unsigned int F_006f4580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(int *)(this + 0x60) != 0) && (*(short *)(this + 0x54) != -1)) &&
     (((byte)this[0x5c] & 4) == 0)) {
    this[0x5c] = (undefined1)((byte)this[0x5c] | 4);
    F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf36 */
byte F_006f45b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f45b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 == 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
          F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
          F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
        } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    F_006d86b0((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf83 */
uint F_006f4680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = piVar2;
  if (REFG(undefined4, 0x132410c) == this) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324110),0)));
    bVar1 = 1;
  }
  if (REFG(undefined4, 0x132411c) == this) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324120),0);
    return uVar4;
  }
  if (bVar1 == 0) {
    piVar3 = (int *)F_006f4000(this);
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf36 */
byte F_006f4700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006db910(this,(uint)bVar1);
  bVar1 = F_006d8320((undefined *)this);
  if (bVar1 == 0) {
    F_00735d50(this,this);
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    if (((byte)this[0x1c] & 1) == 0) {
      this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
  }
  return 0;
}

/* ref: FUN_006f4770 */
uint F_006f4770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0xffff;
  if (*(short *)((int)this + 0x54) != -1) {
    uVar2 = *(undefined4 *)((int)this + 0x138);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (undefined2)param_2;
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = (uint)CONCAT11((char)((uint)param_2 >> 8),bVar1);
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (undefined2)param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((undefined2)param_1,(undefined2)param_2);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf1 */
uint F_006f47d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6f47d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x40);
  *(uint *)(this + 0x2d4) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b91c0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6ee590));
  }
  *(undefined4 * PTR32 *)(this + 0x2d8) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2d4) + 0x48))))
                    (*(int * PTR32 *)(this + 0x2d4),*(undefined4 *)(this + 0x2d8));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf83 */
uint F_006f4860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x3c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      return uVar3;
    }
  }
  if (bVar1 == 0) {
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf36 */
byte F_006f48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f48d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006e99a0(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x280);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323724),uVar2,uVar3);
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf83 */
uint F_006f4930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 DVar1;
  int * piVar2;
  undefined4 * puVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  if (*(int *)(this + 0xfc) != 0) {
    piVar2 = *(int * PTR32 *)(this + 0x100);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0xfc));
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0xfc);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)(this + 0xfc) = 0;
    }
  }
  bVar4 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar5 = CONCAT31(extraout_var,bVar4);
  if ((bVar4 == 0) && (*(short *)(this + 0x54) != -1)) {
    DVar1 = this[0x5c];
    uVar5 = CONCAT31(extraout_var,DVar1);
    if (((byte)DVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)DVar1 | 4);
      uVar5 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar5;
}

/* ref: FUN_006f49b0 */
uint F_006f49b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f49b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar2;
  if (((*(byte *)((int)this + 0x184) & 8) != 0) ||
     (uVar2 = 0xffff, *(short *)((int)this + 0x54) == -1)) goto LAB_006f4bb8;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    (*(uint *)(gen_frame + 0xc)) = (uint)REFG(undefined1, 0x14ab7dc);
    (*(uint *)(gen_frame + 0x2c)) = (uint)REFG(undefined1, 0x14ab7dd);
    (*(uint *)(gen_frame + 0x10)) = (uint)REFG(undefined1, 0x14ab7e8);
    (*(uint *)(gen_frame + 0x30)) = (uint)REFG(undefined1, 0x14ab7e9);
    (*(uint *)(gen_frame + 0x14)) = (uint)REFG(undefined1, 0x14ab7f4);
    (*(uint *)(gen_frame + 0x34)) = (uint)REFG(undefined1, 0x14ab7f5);
    (*(uint *)(gen_frame + 0x18)) = (uint)REFG(undefined1, 0x14ab800);
    (*(uint *)(gen_frame + 0x38)) = (uint)REFG(undefined1, 0x14ab801);
    (*(uint *)(gen_frame + 0x1c)) = (uint)REFG(undefined1, 0x14ab80c);
    (*(uint *)(gen_frame + 0x3c)) = (uint)REFG(undefined1, 0x14ab80d);
    (*(uint *)(gen_frame + 0x20)) = (uint)REFG(undefined1, 0x14ab818);
    (*(uint *)(gen_frame + 0x40)) = (uint)REFG(undefined1, 0x14ab819);
    (*(uint *)(gen_frame + 0x24)) = (uint)REFG(undefined1, 0x14ab824);
    uVar2 = (uint)REFG(undefined1, 0x14ab831);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x11);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x44)) = (uint)REFG(undefined1, 0x14ab825);
    (*(uint *)(gen_frame + 0x28)) = (uint)REFG(undefined1, 0x14ab830);
    (*(uint *)(gen_frame + 0x48)) = uVar2;
    break;
  case 1: ;
    bVar1 = F_006d06b0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 2;
      (*(uint *)(gen_frame + 0xc)) = param_2;
      goto LAB_006f4b7c;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x38);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    break;
  default: ;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    (*(uint *)(gen_frame + 0x10)) = param_3;
    (*(uint *)(gen_frame + 0x14)) = param_4;
    uVar2 = param_4;
LAB_006f4b7c: ;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),4);
    break;
  case 0xd: ;
  case 0xe: ;
    bVar1 = F_006d06b0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),0x38);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  }
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 8;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
LAB_006f4bb8: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar2;
}

/* ref: Client::Game::Event::QuestEventHandler::vf83 */
uint F_006f4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  bVar1 = false;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x1324160) == this) {
    if (REFG(int, 0x1324164) == 0) {
      REFG(undefined4, 0x1324160) = (undefined *)0x0;
      REFG(int, 0x1324164) = 0;
      *(undefined4 *)&REFG(undefined, 0x1324168) = 0;
    }
    else {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324164),0);
      bVar1 = true;
    }
  }
  if (REFG(undefined4, 0x1324170) == this) {
    if (REFG(int, 0x1324174) == 0) {
      REFG(undefined4, 0x1324170) = (undefined *)0x0;
      REFG(int, 0x1324174) = 0;
      *(undefined4 *)&REFG(undefined, 0x1324178) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1324174),0);
      bVar1 = true;
    }
  }
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  uVar5 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (!bVar1)) {
    uVar5 = F_006f4000(this);
  }
  return uVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf40 */
unsigned int F_006f4cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f4cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pQVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x368))) != 0) {
    F_00748d80((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[3]));
    F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) + 100,(*(undefined4 *)&gen_args[2]));
    pQVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x368;
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    if (*(int *)pQVar1 == 0) {
      F_006e9ff0((*(undefined * PTR32 *)&gen_args[0]));
      uVar3 = 0;
      uVar2 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x280);
      F_00754440((*(undefined * PTR32 *)&gen_args[0]) + 0xfc,REFG(undefined * PTR32, 0x132372c),uVar2,uVar3);
    }
  }
  return 0;
}

/* ref: FUN_006f4d20 */
uint F_006f4d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar2 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar2 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::ShopEventHandler::vf53 */
uint F_006f4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  undefined1 SVar1;
  undefined * pvVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  pvVar2 = F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
  this[0x1bf9] = (undefined1)0x1;
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar2) >> 8),SVar1)));
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      pvVar2 = (undefined *)F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0);
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_006f4dc0 */
byte F_006f4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f4dc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
    return 1;
  }
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) {
    *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
    return 1;
  }
  if ((*(int *)&gen_args[1]) == 0) {
    (*(int *)&gen_args[1]) = 1;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  else if ((*(int *)&gen_args[1]) == 1) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  else {
    if ((*(int *)&gen_args[1]) == 2) {
      cVar3 = '\0';
      bVar2 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) != 0) {
        uVar1 = 0;
        do {
          if (*((int *)GEN_TOP(((uVar1 + 0x21) * 0xa8 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
            cVar3 = cVar3 + '\x01';
          }
          bVar2 = bVar2 + 1;
          uVar1 = (uint)bVar2;
        } while (uVar1 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))));
        if (cVar3 != '\0') {
          (*(int *)&gen_args[1]) = 1;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 1;
          goto LAB_006f4e61;
        }
      }
    }
    else if (((*(int *)&gen_args[1]) < 3) && ((*(int *)&gen_args[1]) != -1)) goto LAB_006f4e61;
    (*(int *)&gen_args[1]) = 0;
  }
LAB_006f4e61: ;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) = 1;
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 4) == 0) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 4;
    F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]),1);
  }
  *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
  return 1;
}

/* ref: FUN_006f4e90 */
byte F_006f4e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f4e90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) == 0x400) {
    F_006c1270((*(undefined * PTR32 *)&gen_args[0]));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
    return 0;
  }
  if ((*(uint *)&gen_args[1]) == 0x401) {
    F_006c1990((*(undefined * PTR32 *)&gen_args[0]));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 1;
    return 0;
  }
  if ((*(uint *)&gen_args[1]) == 0x402) {
    F_006c2180((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  if ((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) != '\0') || (REFG(int, 0x13241b4) != 0)) || (REFG(int, 0x13241c4) != 0)) ||
     (REFG(int, 0x13241a4) != 0)) {
    return 0;
  }
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) == 0) && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0x28)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
    if ((uVar5 != 0xffffffff) && (uVar5 != 0xfffffffe)) {
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) == '\0') {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = *((undefined4 *)GEN_TOP((uVar5 * 0x7c + 0x164 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        uVar2 = (*(undefined4 *)&gen_args[2]);
      }
      else {
        if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) <= uVar5) {
          return 0;
        }
        uVar4 = 0;
        bVar3 = 0;
        if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))) != 0) {
          uVar1 = 0;
          do {
            if (*((int *)GEN_TOP(((uVar1 + 0x21) * 0xa8 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
              if (uVar4 == uVar5) {
                uVar5 = (uint)bVar3;
                break;
              }
              uVar4 = (uint)(byte)((char)uVar4 + 1);
            }
            bVar3 = bVar3 + 1;
            uVar1 = (uint)bVar3;
          } while (uVar1 < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd4))));
        }
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = *((undefined4 *)GEN_TOP((uVar5 * 0xa8 + 0x1538 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        uVar2 = *((undefined4 *)GEN_TOP((uVar5 * 0xa8 + 0x153c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bcc))) = uVar2;
      (*(uint *)&gen_args[1]) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc)));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bd8))) = uVar5;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1be0))) = 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bed))) = 1;
      if (1000000 < (int)(*(uint *)&gen_args[1])) {
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + -1000000;
      }
      F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),1,0);
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    uVar5 = F_00753350(this_00);
    if (uVar5 != 0) {
      F_006f4d20((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)),1);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf2))) = 0;
  }
  REFG(undefined4, 0x1324194) = 0;
  return 1;
}

/* ref: FUN_006f5080 */
uint F_006f5080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  uVar2 = *(undefined4 *)((int)this + 0x104);
  (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x1bd8);
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0x7c + 0x168 + (int)this)));
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  uVar4 = *(uint *)((int)this + 0xfc);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar4 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0xff);
    }
  }
  return uVar4;
}

/* ref: FUN_006f5130 */
uint F_006f5130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  undefined4 uVar1;
  uint uVar2;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x14c8);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x104);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x100);
  uVar1 = *(undefined4 *)((int)this + 0xfc);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),0xff);
  }
  uVar2 = F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104),
                       (uint)*(ushort *)((int)this + 0x100));
  *(undefined1 *)((int)this + 0x1bf2) = 1;
  return uVar2;
}

/* ref: FUN_006f5200 */
uint F_006f5200(unsigned int gen_a0)
{
  GEN_ENTER(0x6f5200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x3f8);
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0x1bd8);
  iVar4 = *(int *)((int)this + 0x1bd8) * 0xa8;
  uVar2 = *(undefined4 *)(iVar4 + 0x153c + (int)this);
  uVar3 = *(undefined4 *)(iVar4 + 0x1540 + (int)this);
  uVar5 = 0xffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  *(undefined1 *)((int)this + 0x1bf9) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar5 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar5 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),5);
    }
  }
  return uVar5;
}

/* ref: Client::Game::Event::ShopEventHandler::vf83 */
uint F_006f52a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f52a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  this[0x1bf9] = (undefined1)0x0;
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 != (int *)0x0) {
    F_006c21d0();
    if (REFG(int, 0x13241b4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241b4),0);
    }
    if (REFG(int, 0x13241c4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241c4),0);
    }
    if (REFG(int, 0x13241a4) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13241a4),0);
    }
    if (REFG(int, 0x1324194) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324194),0);
    }
  }
  uVar4 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    uVar4 = CONCAT31(0xff,SVar1);
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      uVar4 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  this[0x1bf2] = (undefined1)0x0;
  return uVar4;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf128 */
uint F_006f5390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5390u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pCVar1;
  byte bVar2;
  uint uVar3;
  ushort * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pCVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x334;
  F_006ee830((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[3]),pCVar1);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))) - *(int *)((int)(uintptr_t)pCVar1) >> 1 == 0) {
    return 0;
  }
  uVar3 = F_00a4ffd0();
  puVar4 = *(ushort * PTR32 *)pCVar1;
  if (puVar4 != *((ushort * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338)))) {
    do {
      bVar2 = F_006dd140((*(undefined * PTR32 *)&gen_args[0]),(uint)*puVar4);
      if (bVar2 != 0) {
        return 0xece5;
      }
      (*(uint *)&gen_args[3]) = (uint)*puVar4;
      F_00744670((*(undefined * PTR32 *)&gen_args[0]) + 0x344,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[3]));
      if (9 < *((byte *)GEN_TOP((uVar3 + 0x168a + *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x94) * 0x10)))) {
        return 0xece5;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *((ushort * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))));
  }
  return 0xecef;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf5 */
uint F_006f5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pCVar1;
  
  pCVar1 = this + 0x334;
  F_006ee830(this,*(undefined4 *)(param_1 + 0x78),pCVar1);
  if ((*(int *)(this + 0x338) - *(int *)pCVar1 & 0xfffffffeU) == 2) {
    *(undefined2 *)(this + 0x1d4) = **(undefined2 * PTR32 *)pCVar1;
  }
  return (uint)(*(int *)(this + 0x338) - *(int *)((int)(uintptr_t)pCVar1) >> 1 != 0);
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf36 */
byte F_006f5490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00735f60((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf83 */
uint F_006f5580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x13241d0) == this) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar1 = REFG(undefined4, 0x13241d4);
    if ((piVar3 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar1,0);
      REFG(undefined4, 0x13241d0) = (undefined *)0x0;
      return uVar4;
    }
  }
  else if (bVar2 == 0) {
    piVar3 = (int *)F_006f4000(this);
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::FishingEventHandler::vf41 */
uint F_006f5600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 FVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_3;
  if ((param_3 == 1) || (param_3 == 2)) {
    iVar3 = *(int *)((int)param_1 + 0x2dd8);
    if ((iVar3 != 0) && (iVar3 != param_2)) {
      *(undefined4 *)((int)param_1 + 0x2dd8) = 0;
      iVar5 = REFG(int, 0x1488344);
      F_00aa4270(param_1,iVar3,0,0);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x28;
      uVar4 = *(undefined4 *)(iVar5 + 0x6f0);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
      (*(int *)(gen_frame + 0xc)) = iVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined2 *)(gen_frame + 0x18)) = 0;
      F_00746770((undefined4 *)(iVar5 + 0x6f0),uVar4,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      uVar6 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        FVar1 = this[0x5c];
        uVar6 = CONCAT31(0xff,FVar1);
        if (((byte)FVar1 & 4) == 0) {
          this[0x5c] = (undefined1)((byte)FVar1 | 4);
          uVar6 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        }
      }
    }
  }
  else {
    if (param_3 == 6) {
      iVar3 = *(int *)((int)param_1 + 0x2dd8);
      if ((iVar3 != 0) && (iVar3 != param_2)) {
        *(undefined4 *)((int)param_1 + 0x2dd8) = 0;
        uVar6 = F_006df740(this,param_1,iVar3,6);
        return uVar6;
      }
      uVar6 = 0xffff;
      sVar2 = *(short *)(this + 0x54);
    }
    else {
      if (param_3 != 3) {
        return param_3;
      }
      sVar2 = *(short *)(this + 0x54);
    }
    if (sVar2 != -1) {
      FVar1 = this[0x5c];
      uVar6 = CONCAT31((int3)(uVar6 >> 8),FVar1);
      if (((byte)FVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)FVar1 | 4);
        uVar6 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_006f5720 */
byte F_006f5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x01') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  if (*param_3 == 0) {
    F_00aa4270(param_1,0x10f,0,0);
    uVar1 = *(undefined4 *)(iVar2 + 0x6f0);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(int *)(gen_frame + 0xc)) = 0x10f;
    (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00746770((undefined *)(iVar2 + 0x6f0),uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x2dd8) = 0x10f;
  iVar3 = REFG(int, 0x1488344);
  iVar2 = *param_3;
  F_00aa4270(param_1,iVar2,0,0);
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  uVar1 = *(undefined4 *)(iVar3 + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(int *)(gen_frame + 0xc)) = iVar2;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined *)(iVar3 + 0x6f0),uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006f5820 */
byte F_006f5820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((char)param_4 == '\x02') {
    *(bool *)((int)this + 0x109) = *(int *)(param_3 + 4) == 1;
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,0);
  }
  else if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    return 0;
  }
  return 0;
}

/* ref: FUN_006f5890 */
byte F_006f5890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x1488344);
  if ((char)param_4 == '\x01') {
    uVar1 = *param_3;
    F_00aa4270(param_1,uVar1,0,0);
    uVar2 = *(undefined4 *)(iVar3 + 0x6f0);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00746770((undefined *)(iVar3 + 0x6f0),uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  else if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
    F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    return 0;
  }
  return 0;
}

/* ref: FUN_006f5930 */
byte F_006f5930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f5930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x02') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  uVar1 = *param_3;
  F_00aa4270(param_1,uVar1,0,0);
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  uVar2 = *(undefined4 *)(iVar3 + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined4 *)(iVar3 + 0x6f0),uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)param_1 + 0x2dd8) = param_3[1];
  return 1;
}

/* ref: FUN_006f59d0 */
byte F_006f59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1488344);
  if ((char)param_4 != '\x01') {
    if ((*(short *)((int)this + 0x54) != -1) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),0,0);
    }
    return 0;
  }
  uVar1 = *param_3;
  F_00aa4270(param_1,uVar1,0,0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined4 *)(iVar2 + 0x6f0),*(undefined4 *)(iVar2 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf53 */
uint F_006f5a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined1 GVar1;
  uint uVar2;
  
  if ((((*(uint *)&gen_args[1]) == 0xfffffffe) || ((*(uint *)&gen_args[1]) == 0xffffffff)) || (uVar2 = (*(uint *)&gen_args[1]), (*(uint *)&gen_args[1]) == 0)) {
    uVar2 = 0xffff;
    (*(uint *)&gen_args[1]) = 1;
    if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) {
      GVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
      uVar2 = CONCAT31(0xff,GVar1);
      if (((byte)GVar1 & 4) == 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)GVar1 | 4);
        uVar2 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(uint *)&gen_args[1]),1);
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf83 */
uint F_006f5ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 GVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar2 = F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  bVar3 = F_006d1bb0(0);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (((bVar3 == 0) && (bVar2 == 0)) && (uVar4 = 0xffff, *(short *)(this + 0x54) != -1)) {
    GVar1 = this[0x5c];
    uVar4 = CONCAT31(0xff,GVar1);
    if (((byte)GVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)GVar1 | 4);
      uVar4 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar4;
}

/* ref: FUN_006f5b00 */
byte F_006f5b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5b00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(int * PTR32 *)&gen_args[1]);
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10d))) = 0;
  if (((*(int * PTR32 *)&gen_args[1]) == (int *)0xffffffff) || ((*(int * PTR32 *)&gen_args[1]) == (int *)0xfffffffe)) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))));
    uVar2 = 0;
    if ((*(int * PTR32 *)&gen_args[1]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))) {
LAB_006f5b76: ;
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
    else {
      do {
        if (uVar1 == uVar2) {
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10d))) = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x124))) = 0xffffffff;
          REFG(void * PTR32, 0x1488768) = (*(undefined * PTR32 *)&gen_args[0]);
          goto LAB_006f5b76;
        }
        uVar2 = (uint)(byte)((char)uVar2 + 1);
        F_00732f60(&(*(int * PTR32 *)&gen_args[1]));
      } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))));
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
  }
  if ((*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) && ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 4) == 0)) {
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 4;
    F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int * PTR32 *)&gen_args[1]),1);
  }
  return 1;
}

/* ref: FUN_006f5bc0 */
uint F_006f5bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  *(uint *)((int)this + 0x1d8) = puVar1[2];
  *(undefined2 *)((int)this + 0x1dc) = *(undefined2 *)((int)puVar1 + 0x1a);
  *(short *)((int)this + 0x1de) = (short)puVar1[6];
  F_0042e430((undefined *)((int)this + 0x1e0),(*puVar1 & 0xffffff) + (int)puVar1);
  F_0042e430((undefined *)((int)this + 0x264),(int)puVar1 + (puVar1[1] & 0xffffff) + 4);
  uVar3 = puVar1[3];
  *(uint *)((int)this + 0x250) = uVar3;
  *(uint *)((int)this + 0x254) = puVar1[4];
  *(uint *)((int)this + 600) = puVar1[5];
  if (uVar3 != 0) {
    F_006eda10(this,uVar3);
  }
  iVar2 = *(int *)((int)this + 0x254);
  if ((iVar2 != 0) && (iVar2 != *(int *)((int)this + 0x250))) {
    F_006eda10(this,iVar2);
  }
  iVar2 = *(int *)((int)this + 600);
  if (((iVar2 != 0) && (iVar2 != *(int *)((int)this + 0x250))) &&
     (iVar2 != *(int *)((int)this + 0x254))) {
    F_006eda10(this,iVar2);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x238);
  *(short *)((int)this + 0x25c) = (short)puVar1[7];
  *(undefined2 *)((int)this + 0x25e) = *(undefined2 *)((int)puVar1 + 0x1e);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x111);
  *(uint *)((int)this + 0x234) = uVar3;
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4,1,0);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar4[6] = this;
    puVar4[7] = ((code *)REFP(0x6ee940));
  }
  *(undefined4 * PTR32 *)((int)this + 0x238) = puVar4;
  F_00cb4540(puVar4,0,(uint)*(ushort *)((int)this + 0x1dc));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x234) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x234),*(undefined4 *)((int)this + 0x238));
  return uVar3;
}

/* ref: Client::Game::Event::WarpEventHandler::vf36 */
byte F_006f5d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f5d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006ea850(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x118);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x132373c),uVar2,uVar3);
  return 0;
}

/* ref: FUN_006f5da0 */
uint F_006f5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f5da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  ushort uVar1;
  ushort uVar2;
  undefined2 * puVar3;
  uint uVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  ushort * puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_1;
  F_007523f0((undefined *)((int)this + 0x244),&(*(uint *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x244),
               *(undefined4 *)((int)this + 0x248));
  uVar8 = 0;
  (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_1 + 0xb2;
  (*(uint *)(gen_frame + 0x18)) = 0;
LAB_006f5df5: ;
  uVar4 = 0;
  puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x20)) + -0x10;
  do {
    if (*(int *)puVar7 != 0) goto LAB_006f5e26;
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 2;
  } while (uVar4 < 3);
  uVar4 = 0;
  puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x20)) + -10;
  do {
    if (*(int *)puVar7 != 0) goto LAB_006f5e26;
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 2;
  } while (uVar4 < 3);
  goto LAB_006f6057;
LAB_006f5e26: ;
  uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x20));
  if (uVar1 <= (ushort)uVar8) goto LAB_006f6057;
  (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
  puVar5 = (undefined2 *)F_00720190(((undefined1 *)(gen_frame + 0x24)),(uint)uVar1,(*(ushort * PTR32 *)(gen_frame + 0x20)) + -0x12);
  puVar6 = *(undefined2 * PTR32 *)((int)this + 0x248);
  if ((puVar5 < puVar6) && (puVar3 = *(undefined2 * PTR32 *)((int)this + 0x244), puVar3 <= puVar5)) {
    if (puVar6 == *(undefined2 * PTR32 *)((int)this + 0x24c)) {
      iVar9 = ((int)puVar6 - (int)puVar3) / 0x74;
      if (iVar9 == -1) {
LAB_006f60ff: ;
                    
        F_00c4579a("vector<T> too long");
      }
      uVar8 = ((int)*(undefined2 * PTR32 *)((int)this + 0x24c) - (int)puVar3) / 0x74;
      uVar4 = iVar9 + 1;
      if (uVar8 < uVar4) {
        if (-(uVar8 >> 1) - 1 < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + (uVar8 >> 1);
        }
        if (uVar8 < uVar4) {
          uVar8 = uVar4;
        }
        F_00752ae0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244),uVar8);
      }
    }
    puVar5 = ((undefined2 *)GEN_TOP(((((int)puVar5 - (int)puVar3) / 0x74) * 0x74 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244))));
    puVar6 = *(undefined2 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248);
    this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
      puVar6[4] = puVar5[4];
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar5 + 5);
      puVar6[7] = puVar5[7];
      *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(puVar5 + 8);
      *(undefined2 *)((int)puVar6 + 0x11) = *(undefined2 *)((int)puVar5 + 0x11);
      *(undefined1 *)((int)puVar6 + 0x13) = *(undefined1 *)((int)puVar5 + 0x13);
      *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(puVar5 + 10);
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
      *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(puVar5 + 0xe);
      *(undefined1 *)((int)puVar6 + 0x1d) = *(undefined1 *)((int)puVar5 + 0x1d);
LAB_006f6034: ;
      F_0042cbc0(puVar6 + 0x10,puVar5 + 0x10);
    }
  }
  else {
    if (puVar6 == *(undefined2 * PTR32 *)((int)this + 0x24c)) {
      iVar9 = ((int)puVar6 - *(int *)((int)this + 0x244)) / 0x74;
      if (iVar9 == -1) goto LAB_006f60ff;
      uVar8 = ((int)*(undefined2 * PTR32 *)((int)this + 0x24c) - *(int *)((int)this + 0x244)) / 0x74;
      uVar4 = iVar9 + 1;
      if (uVar8 < uVar4) {
        if (-(uVar8 >> 1) - 1 < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + (uVar8 >> 1);
        }
        if (uVar8 < uVar4) {
          uVar8 = uVar4;
        }
        F_00752ae0((undefined *)((int)this + 0x244),uVar8);
      }
    }
    puVar6 = *(undefined2 * PTR32 *)((int)this + 0x248);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
      puVar6[4] = puVar5[4];
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar5 + 5);
      puVar6[7] = puVar5[7];
      *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(puVar5 + 8);
      *(undefined2 *)((int)puVar6 + 0x11) = *(undefined2 *)((int)puVar5 + 0x11);
      *(undefined1 *)((int)puVar6 + 0x13) = *(undefined1 *)((int)puVar5 + 0x13);
      *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(puVar5 + 10);
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
      *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(puVar5 + 0xe);
      *(undefined1 *)((int)puVar6 + 0x1d) = *(undefined1 *)((int)puVar5 + 0x1d);
      goto LAB_006f6034;
    }
  }
  *(int *)((int)this + 0x248) = *(int *)((int)this + 0x248) + 0x74;
  F_0042c880(((undefined1 *)(gen_frame + 0x44)));
  uVar8 = (*(uint *)(gen_frame + 0xc));
  this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
LAB_006f6057: ;
  uVar4 = (*(uint *)(gen_frame + 0x18)) + 1;
  (*(ushort * PTR32 *)(gen_frame + 0x20)) = (*(ushort * PTR32 *)(gen_frame + 0x20)) + 0x16;
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  if (0x45 < uVar4) goto code_r0x006f6073;
  goto LAB_006f5df5;
code_r0x006f6073: ;
  F_007448d0((undefined *)((int)this + 0x254));
  uVar8 = 0;
  puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x14)) + 0x6a7;
  do {
    uVar4 = 0;
    if (*(int *)(puVar7 + -3) == 0) break;
    uVar1 = *puVar7;
    uVar2 = puVar7[-1];
    (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x20)) + 2)) = uVar1;
    (*(int *)(gen_frame + 0x10)) = *(int *)(puVar7 + -3);
    (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x20)) + 0)) = uVar2;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = ((ushort *)GEN_TOP(CONCAT22(uVar1,uVar2)));
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (*(ushort * PTR32 *)(gen_frame + 0x20));
    uVar4 = F_00750850((undefined *)((int)this + 0x254),((undefined1 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x10)));
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 4;
  } while (uVar8 < 0x3c);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8) == 0x1a0001) {
    uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x244);
    iVar9 = 0;
    if (uVar4 != *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248)) {
      do {
        iVar10 = *(int *)(uVar4 + 0x14);
        if (iVar10 == 0) {
          *(int *)(uVar4 + 0x14) = iVar9;
          iVar10 = iVar9;
        }
        uVar4 = uVar4 + 0x74;
        iVar9 = iVar10;
      } while (uVar4 != *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x248));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar4;
}

/* ref: FUN_006f6130 */
uint F_006f6130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f6130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  int iVar2;
  char cVar3;
  char * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar7 = *(uint * PTR32 *)(*param_1 + 4);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar7;
  F_0042e430((undefined *)((int)this + 0x1d8),(int)puVar7 + (puVar7[0x3ca] & 0xffffff) + 0xf28);
  F_0042ccf0((undefined *)((int)this + 0x118),(undefined *)((int)this + 0x1d8));
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  (*(int *)(gen_frame + 0x28)) = 0x28;
  puVar8 = puVar7;
  do {
    pcVar4 = ((char *)GEN_TOP(((*puVar7 & 0xffffff) + (int)puVar7)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (pcVar4 != pcVar1) {
      (*(uint *)(gen_frame + 0x14)) = puVar7[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
      puVar5 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar5 = *(undefined4 *)((int)this + 0x238);
      puVar5[1] = *(undefined4 *)((int)this + 0x238);
      puVar5[2] = *(undefined4 *)((int)this + 0x238);
      *(undefined2 *)(puVar5 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x14));
      if (puVar5 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar5 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar5[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x234),((undefined1 *)(gen_frame + 0x8)),puVar5,0);
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24));
      puVar8 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    }
    puVar7 = puVar7 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  } while (iVar2 != 0);
  F_006f5da0(this,puVar8);
  uVar6 = F_0042a990((int)this + 0x1d8);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323744),uVar6);
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar6);
  F_006e8f60(this,0,0xffffffff);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x230);
  if (puVar5 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar9;
}

/* ref: Client::Game::Event::StoryEventHandler::vf36 */
byte F_006f62f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f62f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006eab00(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x1d8);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323744),uVar2,uVar3);
  return 0;
}

/* ref: FUN_006f6350 */
uint F_006f6350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba704));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  uVar1 = F_004296a0(0x70,0,800);
  *(uint *)((int)this + 0x110) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 4))) = *(int *)((int)this + 0x110);
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 8))) = *(int *)((int)this + 0x110);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x6c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x6d))) = 1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  F_0042cc20((undefined *)((int)this + 0x144),&REFG(undefined, 0x10b3a6f),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: FUN_006f6430 */
uint F_006f6430(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba704));
  if (REFG(void * PTR32, 0x148876c) == this) {
    REFG(void * PTR32, 0x148876c) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x13c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x140);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x13c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x13c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
  }
  F_0042c880((undefined *)((int)this + 0x144));
  iVar3 = *(int *)((int)this + 300);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x134) - iVar3 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  iVar3 = *(int *)((int)this + 0x11c);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x124) - iVar3 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_0074f310((undefined *)((int)this + 0x10c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x110),
               *(undefined4 * PTR32 *)((int)this + 0x110));
  F_00429760(*(undefined4 *)((int)this + 0x110),0x70,800);
  F_007552d0((undefined *)((int)this + 0xf8));
  uVar4 = F_006df660(this);
  return uVar4;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf83 */
uint F_006f6550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  this[0x1a0] = (undefined1)0x0;
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,0);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 99;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)(this + 0x198) == 2) {
    uVar3 = F_00a48ae0(&REFG(undefined, 0x14a4230));
  }
  if (*(short *)(this + 0x54) != -1) {
    SVar1 = this[0x5c];
    uVar3 = CONCAT31((int3)(uVar3 >> 8),SVar1);
    if (((byte)SVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)SVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f65e0 */
uint F_006f65e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f65e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pbVar2 = ((byte *)GEN_TOP((param_1 * 0x1b0 + *(int *)((int)this + 0xf8))));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x0)) = (uint)*pbVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(pbVar2 + 0xec);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(pbVar2 + 0xf0);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(pbVar2 + 0xdc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(pbVar2 + 0xe0);
  uVar3 = *(uint *)(pbVar2 + 0xd8);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(pbVar2 + 0xe4);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  *(undefined1 *)((int)this + 0x1a0) = 1;
  if (*(short *)((int)this + 0x54) != -1) {
    bVar1 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(uint *)(gen_frame + 0x0)),7);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf59 */
unsigned int F_006f66a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f66a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 0) {
    F_006f65e0(this,*(undefined4 *)(this + 0x19c));
  }
  return 0;
}

/* ref: Client::Game::Event::LeveDirector::vf36 */
byte F_006f66c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f66c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  undefined * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  bVar2 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar2 == 0) {
    bVar2 = F_006d8320((undefined *)(*(undefined * PTR32 *)&gen_args[0]));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (int *)F_00b9a750(*(undefined4 *)((int)this_00 + 8));
      uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
      puVar1 = REFG(undefined * PTR32, 0x1323748);
      (*(int * PTR32 *)&gen_args[3]) = (int *)uVar3;
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
      if (uVar4 != 0) {
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        return 1;
      }
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (int)(*(int * PTR32 *)&gen_args[2]) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(int * PTR32 *)&gen_args[3]));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[2]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xc)));
          uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[2]) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[2]));
        } while ((*(int * PTR32 *)&gen_args[2]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[3]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if (puVar1 == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        return 1;
      }
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
      F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
      F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      F_00a01ad0(this_00,puVar1);
      return 1;
    }
    uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),REFG(undefined * PTR32, 0x1323748));
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
          uVar4 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
        } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  return 1;
}

/* ref: FUN_006f6940 */
uint F_006f6940(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323750);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  F_00a01cc0(this_00,iVar5,"GetVariation",((code *)REFP(0x6d2c00)));
  F_00a01cc0(this_00,iVar5,"GetBattleLeveEntryParameter",((code *)REFP(0x6d2c50)));
  F_00a01cc0(this_00,iVar5,"GetDropEventItemId",((code *)REFP(0x6d2ce0)));
  F_00a01cc0(this_00,iVar5,"SetListenEmote",((code *)REFP(0x6d2d60)));
  F_00a01cc0(this_00,iVar5,"SetUsableEventItem",((code *)REFP(0x6ef2a0)));
  F_00a01cc0(this_00,iVar5,"ChangeUsableEventItemToEOBJ",((code *)REFP(0x6d2dc0)));
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006f6b40 */
uint F_006f6b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x34c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb);
  *(uint *)((int)this + 0x348) = uVar1;
  uVar5 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    F_0074cbd0(&(*(int * PTR32 *)(gen_frame + 0xc)),4);
    (*(uint *)(gen_frame + 0x1c)) = 0;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
    do {
      uVar5 = (*(uint *)(gen_frame + 0x1c));
      iVar7 = *(int *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4);
      if (((iVar7 != 0) && (puVar2 = (undefined4 *)F_00ab2d80(iVar7), puVar2 != (undefined4 *)0x0)
          ) && (piVar3 = (int *)F_00ab2db0(*puVar2), piVar3 != (int *)0x0)) {
        (*(int *)(gen_frame + 0x20)) = 8;
        do {
          piVar3 = piVar3 + 1;
          iVar7 = *piVar3;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0xc));
          if (iVar7 != 0) {
            for (; piVar4 != piVar6; piVar4 = piVar4 + 1) {
              if (*piVar4 == iVar7) {
                if (piVar4 != piVar6) goto LAB_006f6c76;
                break;
              }
            }
            (*(int *)(gen_frame + 0x24)) = iVar7;
            if ((&(*(int *)(gen_frame + 0x24)) < piVar6) && ((*(int * PTR32 *)(gen_frame + 0xc)) <= &(*(int *)(gen_frame + 0x24)))) {
              iVar7 = (int)&(*(int *)(gen_frame + 0x24)) - (int)(*(int * PTR32 *)(gen_frame + 0xc));
              if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x14))) {
                F_0074d4f0(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
                piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
              }
              if (piVar6 != (int *)0x0) {
                *piVar6 = (*(int * PTR32 *)(gen_frame + 0xc))[iVar7 >> 2];
              }
            }
            else {
              if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x14))) {
                F_0074d4f0(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
                piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
              }
              if (piVar6 != (int *)0x0) {
                *piVar6 = iVar7;
              }
            }
            piVar6 = piVar6 + 1;
            (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
          }
LAB_006f6c76: ;
          iVar7 = (*(int *)(gen_frame + 0x20)) + -1;
          (*(int *)(gen_frame + 0x20)) = iVar7;
          uVar5 = (*(uint *)(gen_frame + 0x1c));
        } while (iVar7 != 0);
      }
      (*(uint *)(gen_frame + 0x1c)) = uVar5 + 1;
    } while (uVar5 + 1 < 10);
    iVar7 = (int)piVar6 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc))) >> 2;
    puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar2,iVar7,0);
      puVar2[5] = iVar7;
      *puVar2 = (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
      puVar2[6] = (*(undefined * PTR32 *)(gen_frame + 0x28));
      puVar2[7] = ((code *)REFP(0x6ef320));
    }
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c) = puVar2;
    iVar7 = 0;
    for (piVar3 = (*(int * PTR32 *)(gen_frame + 0xc)); piVar3 != piVar6; piVar3 = piVar3 + 1) {
      F_00cb4540(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c),iVar7,*piVar3);
      iVar7 = iVar7 + 1;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x348),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34c));
    if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
      uVar8 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),((int)(*(int * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc))) >> 2) * 4,800);
      uVar5 = (uint)uVar8;
    }
  }
  return uVar5;
}

/* ref: FUN_006f6d40 */
uint F_006f6d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f6d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 8;
  uVar2 = F_006f0080(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006eedf0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef0b0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef540(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006efa40(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_00b912c0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006f0710(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  uVar2 = F_006ef6e0(*(undefined4 *)((int)this + 4),iVar1);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
  return uVar2;
}

/* ref: FUN_006f6dc0 */
byte F_006f6dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f6dc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if (((REFG(int, 0x1379694) != 0) && (REFG(int, 0x1379c70) == 2)) &&
     ((REFG(int, 0x14bcc80) == 0 || ((REFG(int, 0x14bcc80) == 1 || (REFG(int, 0x14bcc80) == 6)))))) {
    piVar2 = (int *)F_006d9ad0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
    if (piVar2 != (int *)0x0) {
      F_00a51200(0x4c,1,0,0,0);
      ((code *)*(gen_code32 *)(*piVar2 + 0x234))(piVar2,0);
      return 1;
    }
    (*(uint *)&gen_args[1]) = uVar1 >> 0x10;
    F_00749050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((*(code *)(*(int * PTR32 *)(gen_frame + 0x8))[4])(uVar1,(*(int * PTR32 *)&gen_args[2]))));
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        F_00756a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(int * PTR32 *)&gen_args[2]));
        piVar2 = (*(int * PTR32 *)&gen_args[2]);
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x234))))((*(int * PTR32 *)&gen_args[2]),0);
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24c))(piVar2);
        if (((char)uVar3 != '\0') && (REFG(int, 0x1379694) != 0)) {
          F_00a5f530(REFG(int, 0x1379694),uVar1);
        }
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        F_00a35580(uVar1);
        return 1;
      }
    }
    F_00a51200(0x4c,2,0,0,0);
    return 0;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[1]);
  F_007510b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))),&(*(uint *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::DirectorModule::vf4 */
uint F_006f6f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_006f6d40(this,1);
  piVar3 = *(int * PTR32 *)(this + 0x2c);
  if (piVar3 != *(int * PTR32 *)(this + 0x30)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)(this + 0x30));
  }
  return uVar2;
}

/* ref: FUN_006f6f30 */
unsigned int F_006f6f30(unsigned int gen_a0)
{
  GEN_ENTER(0x6f6f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  code * pcVar4;
  int iVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar6 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        iVar5 = *(int *)*piVar6;
        if ((char)uVar2 == '\0') {
          pcVar4 = *(gen_code32 *)(iVar5 + 0x260);
        }
        else {
          pcVar4 = *(gen_code32 *)(iVar5 + 0x264);
        }
        (*pcVar4)((int *)*piVar6);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x30));
  }
  if ((((*(int *)((int)this + 0x5c) != 0) && (REFG(int, 0x1379694) != 0)) && (REFG(int, 0x1379c70) == 2)) &&
     (((REFG(int, 0x14bcc80) == 0 || (REFG(int, 0x14bcc80) == 1)) || (REFG(int, 0x14bcc80) == 6)))) {
    do {
      if (*(int * PTR32 *)((int)this + 0x4c) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int * PTR32 *)((int)this + 0x4c);
      }
      uVar2 = *(uint *)((int)this + 0x58) >> 1;
      uVar3 = *(uint *)((int)this + 0x58) & 1;
      if (*(uint *)(iVar5 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar5 + 8);
      }
      iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4)));
      F_006f6dc0(this,*(undefined4 *)(iVar5 + uVar3 * 8),*(undefined4 *)(iVar5 + uVar3 * 8 + 4));
      if (*(int *)((int)this + 0x5c) != 0) {
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
        if ((uint)(*(int *)((int)this + 0x54) * 2) <= *(uint *)((int)this + 0x58)) {
          *(undefined4 *)((int)this + 0x58) = 0;
        }
        iVar5 = *(int *)((int)this + 0x5c) + -1;
        *(int *)((int)this + 0x5c) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)((int)this + 0x58) = 0;
        }
      }
    } while (*(int *)((int)this + 0x5c) != 0);
  }
  return 0;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf36 */
byte F_006f7010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_006d8320((undefined *)this);
  F_006eb820(this,(uint)bVar1);
  uVar3 = 0;
  uVar2 = F_0042a990(this + 0x1dc);
  F_00754440(this + 0xfc,REFG(undefined * PTR32, 0x1323774),uVar2,uVar3);
  return 0;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf36 */
byte F_006f7070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00736520((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf36 */
byte F_006f7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7160u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[3]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[3]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[3]));
      } while ((*(int * PTR32 *)&gen_args[3]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_007365d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 0xfd);
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) == 0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x1c] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] | 1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006f7250 */
uint F_006f7250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f7250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + 0x1e8);
  F_0042e430(this_00,param_1);
  uVar3 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && (*(int *)(REFG(undefined4, 0x1379694) + 0xe4) == **(int * PTR32 *)((int)this + 0x1d4))) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar4 = 0x37;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
    pvVar2 = (undefined *)F_00484010(pvVar2,uVar4);
    uVar3 = F_00490f90(pvVar2,this_00);
  }
  return uVar3;
}

/* ref: FUN_006f72c0 */
uint F_006f72c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f72c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11);
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6f0b80));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf36 */
byte F_006f7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f7350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_006f4180((undefined *)this,param_1,param_2,param_3);
  if (bVar1 == 0) {
    F_006f0940(this);
  }
  return 1;
}

/* ref: FUN_006f7380 */
uint F_006f7380(unsigned int gen_a0)
{
  GEN_ENTER(0x6f7380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  ulonglong uVar4;
  
  F_00a69770(&REFG(undefined4, 0x14b119c));
  uVar2 = F_0042a990((int)this + 0x3bc);
  F_006f7250(this,uVar2);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(this_00);
  }
  uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x324))) * 0x3c;
  uVar3 = uVar1 + uVar2;
  *(uint *)((int)this + 0x2e8) = uVar2;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(uint *)((int)this + 0x2f0) = uVar3;
  *(uint *)((int)this + 0x2f4) = (uint)CARRY4(uVar1,uVar2);
  *(undefined4 *)((int)this + 0x3c) = 0xeda3;
  return uVar3;
}

/* ref: FUN_006f7410 */
uint F_006f7410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f7410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  int * in_EAX = 0;
  int * piVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != 0) {
    if ((((REFG(int, 0x13238f8) == 0) && (*(int *)((int)this + 0x238) == 0)) &&
        (*(int *)((int)this + 0x224) == 0)) && (*(int *)((int)this + 0x738) == 0)) {
      bVar1 = F_006c5310(REFG(undefined4, 0x1379694),(uint)param_1,1,1);
      in_EAX = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
      if (bVar1 != 0) {
        if (((char)param_2 != '\0') && (bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),param_1,0), bVar1 == 0))
        {
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar6 = 0x523;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
          uVar3 = F_0046a630(this_00,uVar6);
          return uVar3;
        }
        if ((*(char *)((int)param_1 + 0x8a) == '\x02') &&
           (uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar4 == 3)) {
          uVar4 = F_00a5f290(param_1);
          uVar4 = F_00a9fbf0(uVar4);
          if ((char)uVar4 != '\0') {
            return uVar4;
          }
        }
        F_00af2090();
        uVar4 = F_00a5f3d0(param_1,((undefined1 *)(gen_frame + 0x8)));
        in_EAX = (int *)F_006d48f0(this,uVar3,param_1,((undefined1 *)(gen_frame + 0x8)),uVar4);
        if (REFG(int, 0x13238f8) != 0) {
          REFG(int * PTR32, 0x1323874) = param_1;
          REFG(undefined1, 0x13238fc) = 1;
          REFG(undefined4, 0x1323900) = 0;
          in_EAX = (int *)F_006f11c0(this);
        }
      }
    }
    else {
      in_EAX = (int *)F_006de750(this);
      if (in_EAX != param_1) {
        if (REFG(int, 0x13238f8) != 0) {
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
          ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1323904),0);
        }
        in_EAX = (int *)F_006d9f00(this);
        if ((char)in_EAX == '\0') {
          if (*(int *)((int)this + 0x224) != 0) {
            piVar2 = *(int * PTR32 *)((int)this + 0x214);
            uVar3 = *(uint *)((int)this + 0x220);
            if (piVar2 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar2;
            }
            uVar4 = uVar3;
            if (*(uint *)(iVar5 + 8) <= uVar3) {
              uVar4 = uVar3 - *(uint *)(iVar5 + 8);
            }
            if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + 0x2c))) != '\0') {
              return uVar3;
            }
            if (piVar2 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar2;
            }
            if (*(uint *)(iVar5 + 8) <= uVar3) {
              uVar3 = uVar3 - *(uint *)(iVar5 + 8);
            }
            uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + 8)));
            in_EAX = (int *)0x0;
            if (uVar3 != 0) {
              if ((uVar3 & 0x80000000) == 0x80000000) {
                in_EAX = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar3);
              }
              else {
                in_EAX = (int *)F_006dda70(this,uVar3);
              }
              if ((in_EAX != (int *)0x0) && ((short)in_EAX[0x15] != -1)) {
                uVar3 = F_00743a80((undefined *)((int)this + 0x214));
                if (*(char *)(uVar3 + 0x2c) == '\0') {
                  *(undefined1 *)(uVar3 + 0x2c) = 1;
                }
                uVar3 = ((code *)*(gen_code32 *)(*in_EAX + 0x98))(in_EAX,0x32);
                return uVar3;
              }
            }
          }
          if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
            *(undefined1 *)((int)this + 0x25c) = 1;
            return (uint)in_EAX;
          }
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_006f7660 */
uint F_006f7660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f7660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd30];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0xd1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd20);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd4)) + 0)) = (undefined1)param_2;
  (*(uint *)(gen_frame + 0xd4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd4)), 1, 3),(undefined1)param_2);
  (*(undefined * PTR32 *)(gen_frame + 0xc8)) = this;
  (*(int * PTR32 *)(gen_frame + 0xcc)) = REFG(int * PTR32, 0x1379694);
  piVar3 = (int *)0x0;
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    if ((((REFG(int, 0x13238f8) == 0) && (*(int *)((int)this + 0x238) == 0)) &&
        (*(int *)((int)this + 0x224) == 0)) && (*(int *)((int)this + 0x738) == 0)) {
      (*(int * PTR32 *)(gen_frame + 0xec)) = (int *)0x0;
      if (param_1 == REFG(int * PTR32, 0x1379694)) {
        uVar4 = F_00a4ffd0();
        (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)(uVar4 + 0x13b8);
        (*(int * PTR32 *)(gen_frame + 0xf4)) = (int *)0x1e;
        do {
          if ((((*(*(ushort * PTR32 *)(gen_frame + 0xd8)) != 0) && (uVar4 = *(*(ushort * PTR32 *)(gen_frame + 0xd8)) | 0x10000, uVar4 != 0)) &&
              (uVar4 = F_006dda70(this,uVar4), uVar4 != 0)) &&
             ((*(uint *)(uVar4 + 0x38) >> 2 & 1) != 0)) {
            ((uint *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0xec)))] = uVar4;
            (*(int * PTR32 *)(gen_frame + 0xec)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xec)) + 1);
          }
          (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (*(ushort * PTR32 *)(gen_frame + 0xd8)) + 8;
          piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xf4)) + -1);
          (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar3;
        } while (piVar3 != (int *)0x0);
      }
      else {
        piVar3 = (int *)F_00a5f3d0(param_1,((uint *)(gen_frame + 0x0)));
        (*(int * PTR32 *)(gen_frame + 0xec)) = piVar3;
      }
      piVar3 = (int *)0x0;
      REFG(int, 0x13238f8) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0xec)) != (int *)0x0) {
        do {
          piVar3 = (int *)((uint *)(gen_frame + 0x0))[(int)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)))];
          (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar3;
          if (*(short *)((int)piVar3 + 10) == 0xd) {
            iVar7 = 0;
            piVar3 = piVar3 + 0x3e;
            (*(int * PTR32 *)(gen_frame + 0xf4)) = (int *)0x10;
            do {
              if (*piVar3 != 0) {
                ((int *)(gen_frame + 0x88))[(int)(iVar7)] = *piVar3;
                iVar7 = iVar7 + 1;
              }
              piVar3 = piVar3 + 1;
              iVar1 = (int)(*(int * PTR32 *)(gen_frame + 0xf4)) + -1;
              (*(int * PTR32 *)(gen_frame + 0xf4)) = (int *)iVar1;
            } while (iVar1 != 0);
            (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)iVar7;
            (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44(iVar7,(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
            (*(int * PTR32 *)(gen_frame + 0xf4)) = (int *)0x0;
            if (iVar7 != 0) {
              do {
                piVar3 = (int *)((int *)(gen_frame + 0x88))[(int)((int)(*(int * PTR32 *)(gen_frame + 0xf4)))];
                piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x214))
                                          (piVar3,(*(int * PTR32 *)(gen_frame + 0xcc)),param_1,2,(*(uint *)(gen_frame + 0xd4)) & 0xff)));
                (*(int * PTR32 *)(gen_frame + 0xd0)) = piVar5;
                uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
                if (((char)uVar4 != '\0') && (((uint)piVar3[0xe] >> 2 & 1) != 0)) {
                  if (((*(int * PTR32 *)(gen_frame + 0xd0)) == (int *)0x0) ||
                     (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),(*(int * PTR32 *)(gen_frame + 0xd0))), bVar2 != 0)) {
                    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,param_1,(*(uint *)(gen_frame + 0xd4)));
                    if ((char)uVar4 != '\0') {
                      (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = piVar3;
                      this = (*(undefined * PTR32 *)(gen_frame + 0xc8));
                      goto LAB_006f7ab2;
                    }
                  }
                  else if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + 0x720) == 0) {
                    *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + 0x720) = (*(int * PTR32 *)(gen_frame + 0xd0));
                  }
                }
                piVar3 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xf4)) + 1);
                (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar3;
                this = (*(undefined * PTR32 *)(gen_frame + 0xc8));
              } while (piVar3 < (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)));
              goto LAB_006f7ab8;
            }
          }
          else {
            uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
            if (((char)uVar4 != '\0') && (((uint)(*(int * PTR32 *)(gen_frame + 0xf4))[0xe] >> 2 & 1) != 0)) {
              uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0x214))
                                ((*(int * PTR32 *)(gen_frame + 0xf4)),(*(int * PTR32 *)(gen_frame + 0xcc)),param_1,2,(*(uint *)(gen_frame + 0xd4)) & 0xff);
              (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)uVar4;
              (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44(uVar4,(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
              if ((uVar4 == 0) || (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar2 != 0)) {
                uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xf4)),param_1,(*(uint *)(gen_frame + 0xd4)));
                if ((char)uVar4 != '\0') {
                  (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = (*(int * PTR32 *)(gen_frame + 0xf4));
LAB_006f7ab2: ;
                  REFG(int, 0x13238f8) = REFG(int, 0x13238f8) + 1;
                }
              }
              else if (*(int *)((int)this + 0x720) == 0) {
                *(int * PTR32 *)((int)this + 0x720) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4));
              }
            }
LAB_006f7ab8: ;
            if (REFG(int, 0x13238f8) != 0) {
              bVar2 = F_006c5310((uint)(*(int * PTR32 *)(gen_frame + 0xcc)),(uint)param_1,2,1);
              if (bVar2 != 0) {
                REFG(int * PTR32, 0x1323900) = (int *)((*(uint *)(gen_frame + 0xd4)) & 0xff);
                REFG(int * PTR32, 0x1323874) = param_1;
                REFG(undefined1, 0x13238fc) = 2;
                (*(int * PTR32 *)(gen_frame + 0xec)) = REFG(int * PTR32, 0x1323878);
                piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1323878) + 0x210))))
                                          (REFG(int * PTR32, 0x1323878),(*(int * PTR32 *)(gen_frame + 0xcc)),param_1,2,REFG(int * PTR32, 0x1323900))));
                (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar3;
                uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xec)) + 0x1bc))
                                  ((*(int * PTR32 *)(gen_frame + 0xec)),(*(int * PTR32 *)(gen_frame + 0xcc)),param_1,(uint)REFG(undefined1, 0x13238fc),REFG(int * PTR32, 0x1323900));
                (*(byte *)(gen_frame + 0xf3)) = (byte)uVar4;
                (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)(*(int * PTR32 *)(gen_frame + 0xec))[2];
                (*(int * PTR32 *)(gen_frame + 0xd0)) = REFG(int * PTR32, 0x1323900);
                (*(byte *)(gen_frame + 0xdc)) = REFG(undefined1, 0x13238fc);
                uVar12 = (undefined4)(*(ulonglong *)(gen_frame + 0xe0));
                uVar8 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                *(int *)((int)this + 0x244) = (int)((ulonglong)uVar8 >> 0x20);
                *(int * PTR32 *)((int)this + 0x238) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4));
                *(byte *)((int)this + 0x248) = (*(byte *)(gen_frame + 0xdc));
                *(int *)((int)this + 0x240) = (int)uVar8;
                *(byte *)((int)this + 0x250) = (*(byte *)(gen_frame + 0xf3));
                *(int * PTR32 *)((int)this + 0x254) = (*(int * PTR32 *)(gen_frame + 0xf4));
                *(int * PTR32 *)((int)this + 0x24c) = (*(int * PTR32 *)(gen_frame + 0xd0));
                uVar9 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                (*(ulonglong *)(gen_frame + 0xe0)) = uVar9;
                uVar9 = F_00538780(&REFG(undefined4, 0x1375bc0));
                if (uVar9 != (*(ulonglong *)(gen_frame + 0xe0))) {
                  F_00543c00(&REFG(undefined4, 0x1375bc0),(undefined4)(*(ulonglong *)(gen_frame + 0xe0)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)),1);
                }
                if ((((*(int * PTR32 *)(gen_frame + 0xf4)) != (int *)0x0) &&
                    (F_00a4a760(&REFG(undefined, 0x14a7360),(*(int * PTR32 *)(gen_frame + 0xf4)),1), (*(int * PTR32 *)(gen_frame + 0xf4)) == (int *)0x10)) &&
                   ((*(int * PTR32 *)(gen_frame + 0xd0)) = REFG(int * PTR32, 0x1379694), REFG(int * PTR32, 0x1379694) != param_1)) {
                  fVar10 = F_00a5ffa0(REFG(int * PTR32, 0x1379694),param_1);
                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar10)));
                  (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44((uint)gen_fl2bits(fVar10),(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
                  F_00a9f870((*(int * PTR32 *)(gen_frame + 0xd0)),fVar10);
                }
                if (((*(byte *)(gen_frame + 0xf3)) & 2) == 0) {
                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)(*(int * PTR32 *)(gen_frame + 0xec))[2];
                  (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44((*(int * PTR32 *)(gen_frame + 0xec))[2],(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
                  uVar8 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                  uVar13 = 0;
                  (*(undefined8 *)(gen_frame + 0x110)) = uVar8;
                  uVar12 = 0;
                  puVar11 = &(*(undefined4 *)(gen_frame + 0xf8));
                  (*(undefined4 *)(gen_frame + 0x118)) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4));
                  (*(undefined4 *)(gen_frame + 0xf8)) = 0x1c3;
                  (*(undefined4 *)(gen_frame + 0xfc)) = 0x20;
                  (*(undefined1 *)(gen_frame + 0x11c)) = (undefined1)(*(uint *)(gen_frame + 0xd4));
                  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
                  bVar2 = F_00974e00(this_00,puVar11,uVar12,uVar13);
                  if (bVar2 == 0) {
                    F_00a4a760(&REFG(undefined, 0x14a7360),(*(int * PTR32 *)(gen_frame + 0xf4)),0);
                    *(undefined4 *)((int)this + 0x238) = 0;
                    *(undefined4 *)((int)this + 0x240) = 0xe0000000;
                    *(undefined4 *)((int)this + 0x244) = 0;
                    *(undefined1 *)((int)this + 0x248) = 0;
                    *(undefined4 *)((int)this + 0x24c) = 0;
                    *(undefined1 *)((int)this + 0x250) = 0;
                    *(undefined4 *)((int)this + 0x254) = 0;
                    *(undefined4 *)((int)this + 600) = 0;
                    *(undefined1 *)((int)this + 0x25c) = 0;
                  }
                }
                else {
                  uVar4 = (uint)REFG(undefined1, 0x13238fc);
                  uVar12 = 2;
                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)(*(int * PTR32 *)(gen_frame + 0xec))[2];
                  (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44((*(int * PTR32 *)(gen_frame + 0xec))[2],(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
                  piVar3 = REFG(int * PTR32, 0x1323900);
                  uVar8 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                  F_006f0be0(this,(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4
                               ,piVar3,uVar12);
                }
              }
              piVar3 = (int *)0x0;
              REFG(int * PTR32, 0x1323874) = (int *)0x0;
              REFG(int, 0x13238f8) = 0;
              REFG(undefined1, 0x13238fc) = 0;
              REFG(int * PTR32, 0x1323900) = (int *)0x0;
              REFG(undefined4, 0x1323904) = 0;
              break;
            }
          }
          piVar3 = (int *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) + 1);
          (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)piVar3;
        } while (piVar3 < (*(int * PTR32 *)(gen_frame + 0xec)));
      }
    }
    else {
      piVar3 = (int *)F_006de750(this);
      if (piVar3 != param_1) {
        if (REFG(int, 0x13238f8) != 0) {
          piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
          ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1323904),0);
        }
        piVar3 = (int *)F_006d9f00(this);
        if ((char)piVar3 == '\0') {
          if (*(int *)((int)this + 0x224) != 0) {
            piVar5 = *(int * PTR32 *)((int)this + 0x214);
            piVar3 = *(int * PTR32 *)((int)this + 0x220);
            (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)) = (int *)((int)this + 0x214);
            (*(ulonglong *)(gen_frame + 0xe0)) = CONCAT44((int)this + 0x214,(undefined4)(*(ulonglong *)(gen_frame + 0xe0)));
            if (piVar5 == (int *)0x0) {
              (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar5;
            }
            else {
              (*(int * PTR32 *)(gen_frame + 0xf4)) = (int *)*piVar5;
            }
            piVar6 = piVar3;
            if ((int *)(*(int * PTR32 *)(gen_frame + 0xf4))[2] <= piVar3) {
              piVar6 = (int *)((int)piVar3 - (*(int * PTR32 *)(gen_frame + 0xf4))[2]);
            }
            if (*((char *)GEN_TOP((*(int *)((*(int * PTR32 *)(gen_frame + 0xf4))[1] + (int)((int)(uintptr_t)piVar6) * 4) + 0x2c))) != '\0')
            goto LAB_006f7cd1;
            if (piVar5 == (int *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *piVar5;
            }
            if (*(int * PTR32 *)(iVar7 + 8) <= piVar3) {
              piVar3 = ((int *)GEN_TOP(((int)piVar3 - (int)*(int * PTR32 *)(iVar7 + 8))));
            }
            uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + (int)((int)(uintptr_t)piVar3) * 4))) + 8)));
            piVar3 = (int *)0x0;
            if (uVar4 != 0) {
              if ((uVar4 & 0x80000000) == 0x80000000) {
                piVar3 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar4);
              }
              else {
                piVar3 = (int *)F_006dda70(this,uVar4);
              }
              if ((piVar3 != (int *)0x0) && ((short)piVar3[0x15] != -1)) {
                uVar4 = F_00743a80((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xe0)) + 4)));
                if (*(char *)(uVar4 + 0x2c) == '\0') {
                  *(undefined1 *)(uVar4 + 0x2c) = 1;
                }
                piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3,0x32)));
                goto LAB_006f7cd1;
              }
            }
          }
          if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
            *(undefined1 *)((int)this + 0x25c) = 1;
          }
        }
      }
    }
  }
LAB_006f7cd1: ;
  F_00c47745((*(uint *)(gen_frame + 0xd1c)) ^ (uint)(uint)(gen_frame + 0xd20));
  return (uint)piVar3;
}

/* ref: FUN_006f7db0 */
byte F_006f7db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f7db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xca0];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  undefined8 uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar8 = REFG(undefined4 * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0xc8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc90);
  (*(int * PTR32 *)(gen_frame + 0x5c)) = this;
  (*(uint *)(gen_frame + 0x54)) = param_1;
  if ((REFG(undefined4 * PTR32, 0x1379694) == (undefined4 *)0x0) ||
     (((((REFG(int, 0x13238f8) != 0 || (*(int *)((int)this + 0x238) != 0)) ||
        (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)) &&
      ((*(int *)((int)this + 0x260) != 0xf || (bVar3 = F_006e3100(this,0x32,1), bVar3 == 0)))))) {
    bVar3 = 0;
  }
  else {
    REFG(int, 0x13238f8) = 0;
    if (*(char *)((*(uint *)(gen_frame + 0x54)) + 0x11) == ')') {
      piVar5 = *(int * PTR32 *)((int)this + 0x58);
      (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar5;
      if (((piVar5 != (int *)0x0) &&
          (uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5), (char)uVar4 != '\0')) &&
         ((((uint)(*(int * PTR32 *)(gen_frame + 0x5c))[0xe] >> 10 & 1) != 0 &&
          (uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x5c)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x54))), (char)uVar4 != '\0')))) {
        uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x5c)) + 0x214))
                          ((*(int * PTR32 *)(gen_frame + 0x5c)),puVar8,puVar8,10,*(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x14));
        (*(uint *)(gen_frame + 0x58)) = uVar4;
        if ((uVar4 == 0) || (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar3 != 0)) {
          (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = (*(int * PTR32 *)(gen_frame + 0x5c));
          REFG(int, 0x13238f8) = REFG(int, 0x13238f8) + 1;
        }
        else {
          F_006b8e80(this,(*(uint *)(gen_frame + 0x58)));
        }
      }
    }
    else if (*(char *)((*(uint *)(gen_frame + 0x54)) + 0x11) == '1') {
      (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x54));
      F_00745670((undefined *)((int)this + 0x70c),&(*(uint *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x50)));
      (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x40));
      if ((*(uint *)(gen_frame + 0x40)) != (*(uint *)(gen_frame + 0x44))) {
        do {
          if (*(char *)((*(uint *)(gen_frame + 0x50)) + 0x14) == '\0') break;
          if (*(char *)((*(uint *)(gen_frame + 0x50)) + 0x14) == '\n') {
            piVar5 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x50)) + 0x10);
            (*(int * PTR32 *)(gen_frame + 0x64)) = piVar5;
            if (*(short *)((int)piVar5 + 10) == 0xd) {
              piVar6 = (int *)0x0;
              piVar5 = piVar5 + 0x3e;
              (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x10;
              do {
                if (*piVar5 != 0) {
                  ((int *)(gen_frame + 0x0))[(int)((int)piVar6)] = *piVar5;
                  piVar6 = (int *)((int)piVar6 + 1);
                }
                piVar5 = piVar5 + 1;
                iVar1 = (int)(*(int * PTR32 *)(gen_frame + 0x64)) + -1;
                (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)iVar1;
              } while (iVar1 != 0);
              (*(int * PTR32 *)(gen_frame + 0x48)) = piVar6;
              (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x0;
              if (piVar6 != (int *)0x0) {
                do {
                  piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x64)))];
                  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
                  if ((((char)uVar4 != '\0') && (((uint)piVar5[0xe] >> 10 & 1) != 0)) &&
                     (uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5,(*(uint *)(gen_frame + 0x54))), (char)uVar4 != '\0'))
                  {
                    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x214))
                                      (piVar5,puVar8,puVar8,10,*(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x14));
                    (*(uint *)(gen_frame + 0x58)) = uVar4;
                    if ((uVar4 == 0) || (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar3 != 0)) {
                      (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = piVar5;
                      this = (*(int * PTR32 *)(gen_frame + 0x5c));
                      goto LAB_006f8046;
                    }
                    F_006b8e80((*(int * PTR32 *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x58)));
                  }
                  piVar5 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 1);
                  (*(int * PTR32 *)(gen_frame + 0x64)) = piVar5;
                  this = (*(int * PTR32 *)(gen_frame + 0x5c));
                } while (piVar5 < (*(int * PTR32 *)(gen_frame + 0x48)));
              }
            }
            else {
              uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
              if ((((char)uVar4 != '\0') && (((uint)(*(int * PTR32 *)(gen_frame + 0x64))[0xe] >> 10 & 1) != 0)) &&
                 (uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x54))), (char)uVar4 != '\0'
                 )) {
                uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x214))
                                  ((*(int * PTR32 *)(gen_frame + 0x64)),puVar8,puVar8,10,*(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x14));
                (*(uint *)(gen_frame + 0x58)) = uVar4;
                if ((uVar4 == 0) || (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar3 != 0)) {
                  (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = (*(int * PTR32 *)(gen_frame + 0x64));
LAB_006f8046: ;
                  REFG(int, 0x13238f8) = REFG(int, 0x13238f8) + 1;
                }
                else {
                  F_006b8e80(this,(*(uint *)(gen_frame + 0x58)));
                }
              }
            }
            if (REFG(int, 0x13238f8) != 0) break;
          }
          F_00724c40(&(*(uint *)(gen_frame + 0x50)));
        } while ((*(uint *)(gen_frame + 0x50)) != (*(uint *)(gen_frame + 0x44)));
      }
    }
    (*(byte *)(gen_frame + 0x63)) = 1;
    bVar3 = (*(byte *)(gen_frame + 0x63));
    if (REFG(int, 0x13238f8) != 0) {
      REFG(undefined4 * PTR32, 0x1323874) = puVar8;
      REFG(undefined1, 0x13238fc) = 10;
      REFG(int * PTR32, 0x1323900) = *(int * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x14);
      piVar5 = (int *)F_00a5feb0(puVar8);
      (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar5;
      (*(int * PTR32 *)(gen_frame + 0x64)) = REFG(int * PTR32, 0x1323878);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1323878) + 0x210))))
                        (REFG(int * PTR32, 0x1323878),puVar8,puVar8,(uint)REFG(undefined1, 0x13238fc),REFG(int * PTR32, 0x1323900));
      pcVar2 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x1bc);
      (*(uint *)(gen_frame + 0x50)) = uVar4;
      uVar4 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x64)),puVar8,puVar8,(uint)REFG(undefined1, 0x13238fc),REFG(int * PTR32, 0x1323900));
      (*(byte *)(gen_frame + 0x62)) = (byte)uVar4;
      (*(int * PTR32 *)(gen_frame + 0x48)) = REFG(int * PTR32, 0x1323900);
      (*(uint *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
      (*(byte *)(gen_frame + 0x4c)) = REFG(undefined1, 0x13238fc);
      uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar8)(puVar8);
      *(int *)((int)this + 0x240) = (int)uVar7;
      *(int * PTR32 *)((int)this + 0x24c) = (*(int * PTR32 *)(gen_frame + 0x48));
      *(uint *)((int)this + 0x238) = (*(uint *)(gen_frame + 0x58));
      *(int *)((int)this + 0x244) = (int)((ulonglong)uVar7 >> 0x20);
      *(byte *)((int)this + 0x248) = (*(byte *)(gen_frame + 0x4c));
      *(byte *)((int)this + 0x250) = (*(byte *)(gen_frame + 0x62));
      *(uint *)((int)this + 0x254) = (*(uint *)(gen_frame + 0x50));
      if ((*(uint *)(gen_frame + 0x50)) != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360),(*(uint *)(gen_frame + 0x50)),1);
      }
      if (((*(byte *)(gen_frame + 0x62)) & 2) == 0) {
        uVar10 = 0;
        (*(int *)(gen_frame + 0x88)) = *(*(int * PTR32 *)(gen_frame + 0x5c));
        (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)((*(uint *)(gen_frame + 0x54)) + 0x14);
        uVar9 = 0;
        puVar8 = &(*(undefined4 *)(gen_frame + 0x68));
        (*(int *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
        (*(int *)(gen_frame + 0x8c)) = (*(int * PTR32 *)(gen_frame + 0x5c))[1];
        iVar1 = (*(int * PTR32 *)(gen_frame + 0x5c))[2];
        (*(undefined4 *)(gen_frame + 0x68)) = 0x1c4;
        (*(undefined4 *)(gen_frame + 0x6c)) = 0x28;
        (*(int *)(gen_frame + 0x90)) = iVar1;
        this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        bVar3 = F_00974e00(this_00,puVar8,uVar9,uVar10);
        if (bVar3 == 0) {
          F_00a4a760(&REFG(undefined, 0x14a7360),(*(uint *)(gen_frame + 0x50)),0);
          *(int *)((int)this + 0x238) = 0;
          *(int *)((int)this + 0x240) = -0x20000000;
          *(int *)((int)this + 0x244) = 0;
          *(undefined1 *)((int)this + 0x248) = 0;
          *(int *)((int)this + 0x24c) = 0;
          *(undefined1 *)((int)this + 0x250) = 0;
          *(int *)((int)this + 0x254) = 0;
          *(int *)((int)this + 600) = 0;
          *(undefined1 *)((int)this + 0x25c) = 0;
          (*(byte *)(gen_frame + 0x63)) = 0;
        }
      }
      else {
        uVar4 = (uint)REFG(undefined1, 0x13238fc);
        uVar9 = 2;
        (*(uint *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
        piVar5 = REFG(int * PTR32, 0x1323900);
        uVar7 = ((gen_lcode *)*(gen_code32 *)*puVar8)(puVar8);
        F_006f0be0(this,(*(uint *)(gen_frame + 0x58)),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar4,piVar5,uVar9);
      }
      REFG(undefined4 * PTR32, 0x1323874) = (undefined4 *)0x0;
      REFG(int, 0x13238f8) = 0;
      REFG(undefined1, 0x13238fc) = 0;
      REFG(int * PTR32, 0x1323900) = (int *)0x0;
      REFG(undefined4, 0x1323904) = 0;
      bVar3 = (*(byte *)(gen_frame + 0x63));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8c)) ^ (uint)(uint)(gen_frame + 0xc90));
  return bVar3;
}

/* ref: FUN_006f8390 */
byte F_006f8390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f8390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xca0];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined * this_00;
  int * piVar7;
  undefined8 uVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar9 = REFG(undefined4 * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0xc8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc90);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(uint *)(gen_frame + 0x5c)) = param_1;
  if ((REFG(undefined4 * PTR32, 0x1379694) == (undefined4 *)0x0) ||
     (((((REFG(int, 0x13238f8) != 0 || (*(int *)((int)this + 0x238) != 0)) ||
        (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)) &&
      ((*(int *)((int)this + 0x260) != 0xf || (bVar3 = F_006e3100(this,0x32,1), bVar3 == 0)))))) {
    bVar3 = 0;
  }
  else {
    REFG(int, 0x13238f8) = 0;
    if (*(char *)((*(uint *)(gen_frame + 0x5c)) + 0x11) == '1') {
      (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x5c));
      F_00745670((undefined *)((int)this + 0x70c),&(*(uint *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x58)));
      (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x40));
      if ((*(uint *)(gen_frame + 0x40)) != (*(uint *)(gen_frame + 0x44))) {
        do {
          if (*(char *)((*(uint *)(gen_frame + 0x58)) + 0x14) == '\0') break;
          if (*(char *)((*(uint *)(gen_frame + 0x58)) + 0x14) == '\v') {
            piVar5 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x58)) + 0x10);
            (*(int * PTR32 *)(gen_frame + 0x64)) = piVar5;
            if (*(short *)((int)piVar5 + 10) == 0xd) {
              piVar7 = (int *)0x0;
              piVar5 = piVar5 + 0x3e;
              (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x10;
              do {
                if (*piVar5 != 0) {
                  ((int *)(gen_frame + 0x0))[(int)((int)piVar7)] = *piVar5;
                  piVar7 = (int *)((int)piVar7 + 1);
                }
                piVar5 = piVar5 + 1;
                iVar1 = (int)(*(int * PTR32 *)(gen_frame + 0x64)) + -1;
                (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)iVar1;
              } while (iVar1 != 0);
              (*(int * PTR32 *)(gen_frame + 0x48)) = piVar7;
              (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x0;
              if (piVar7 != (int *)0x0) {
                do {
                  piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x64)))];
                  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
                  if ((((char)uVar4 != '\0') && (((uint)piVar5[0xe] >> 0xb & 1) != 0)) &&
                     (uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5,(*(uint *)(gen_frame + 0x5c))), (char)uVar4 != '\0'))
                  {
                    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x214))
                                      (piVar5,puVar9,puVar9,0xb,*(undefined4 *)((*(uint *)(gen_frame + 0x5c)) + 0x14));
                    (*(uint *)(gen_frame + 0x50)) = uVar4;
                    if ((uVar4 == 0) || (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar3 != 0)) {
                      (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = piVar5;
                      this = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
                      goto LAB_006f8626;
                    }
                    F_006b8e80((*(undefined4 * PTR32 *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x50)));
                  }
                  piVar5 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 1);
                  (*(int * PTR32 *)(gen_frame + 0x64)) = piVar5;
                  this = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
                } while (piVar5 < (*(int * PTR32 *)(gen_frame + 0x48)));
              }
            }
            else {
              uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
              if ((((char)uVar4 != '\0') && (((uint)(*(int * PTR32 *)(gen_frame + 0x64))[0xe] >> 0xb & 1) != 0)) &&
                 (uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x5c))), (char)uVar4 != '\0'
                 )) {
                uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x214))
                                  ((*(int * PTR32 *)(gen_frame + 0x64)),puVar9,puVar9,0xb,*(undefined4 *)((*(uint *)(gen_frame + 0x5c)) + 0x14));
                (*(uint *)(gen_frame + 0x50)) = uVar4;
                if ((uVar4 == 0) || (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar4), bVar3 != 0)) {
                  (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = (*(int * PTR32 *)(gen_frame + 0x64));
LAB_006f8626: ;
                  REFG(int, 0x13238f8) = REFG(int, 0x13238f8) + 1;
                }
                else {
                  F_006b8e80(this,(*(uint *)(gen_frame + 0x50)));
                }
              }
            }
            if (REFG(int, 0x13238f8) != 0) break;
          }
          F_00724c40(&(*(uint *)(gen_frame + 0x58)));
        } while ((*(uint *)(gen_frame + 0x58)) != (*(uint *)(gen_frame + 0x44)));
      }
    }
    (*(byte *)(gen_frame + 0x63)) = 1;
    bVar3 = (*(byte *)(gen_frame + 0x63));
    if (REFG(int, 0x13238f8) != 0) {
      REFG(undefined4 * PTR32, 0x1323874) = puVar9;
      REFG(undefined1, 0x13238fc) = 0xb;
      REFG(int * PTR32, 0x1323900) = *(int * PTR32 *)((*(uint *)(gen_frame + 0x5c)) + 0x14);
      puVar6 = (undefined4 *)F_00a5feb0(puVar9);
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar6;
      (*(int * PTR32 *)(gen_frame + 0x64)) = REFG(int * PTR32, 0x1323878);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1323878) + 0x210))))
                        (REFG(int * PTR32, 0x1323878),puVar9,puVar9,(uint)REFG(undefined1, 0x13238fc),REFG(int * PTR32, 0x1323900));
      pcVar2 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x1bc);
      (*(uint *)(gen_frame + 0x58)) = uVar4;
      uVar4 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x64)),puVar9,puVar9,(uint)REFG(undefined1, 0x13238fc),REFG(int * PTR32, 0x1323900));
      (*(byte *)(gen_frame + 0x62)) = (byte)uVar4;
      (*(int * PTR32 *)(gen_frame + 0x48)) = REFG(int * PTR32, 0x1323900);
      (*(uint *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
      (*(byte *)(gen_frame + 0x54)) = REFG(undefined1, 0x13238fc);
      uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar9)(puVar9);
      *(int *)((int)this + 0x240) = (int)uVar8;
      *(int * PTR32 *)((int)this + 0x24c) = (*(int * PTR32 *)(gen_frame + 0x48));
      *(uint *)((int)this + 0x238) = (*(uint *)(gen_frame + 0x50));
      *(int *)((int)this + 0x244) = (int)((ulonglong)uVar8 >> 0x20);
      *(byte *)((int)this + 0x248) = (*(byte *)(gen_frame + 0x54));
      *(byte *)((int)this + 0x250) = (*(byte *)(gen_frame + 0x62));
      *(uint *)((int)this + 0x254) = (*(uint *)(gen_frame + 0x58));
      if ((*(uint *)(gen_frame + 0x58)) != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360),(*(uint *)(gen_frame + 0x58)),1);
      }
      if (((*(byte *)(gen_frame + 0x62)) & 2) == 0) {
        uVar12 = 0;
        (*(undefined4 *)(gen_frame + 0x88)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x4c));
        (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)((*(uint *)(gen_frame + 0x5c)) + 0x14);
        uVar10 = 0;
        puVar9 = &(*(undefined4 *)(gen_frame + 0x68));
        (*(int *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
        (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1];
        uVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2];
        (*(undefined4 *)(gen_frame + 0x68)) = 0x1c5;
        (*(undefined4 *)(gen_frame + 0x6c)) = 0x28;
        (*(undefined4 *)(gen_frame + 0x90)) = uVar11;
        this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        bVar3 = F_00974e00(this_00,puVar9,uVar10,uVar12);
        if (bVar3 == 0) {
          F_00a4a760(&REFG(undefined, 0x14a7360),(*(uint *)(gen_frame + 0x58)),0);
          *(undefined4 *)((int)this + 0x238) = 0;
          *(undefined4 *)((int)this + 0x240) = 0xe0000000;
          *(undefined4 *)((int)this + 0x244) = 0;
          *(undefined1 *)((int)this + 0x248) = 0;
          *(undefined4 *)((int)this + 0x24c) = 0;
          *(undefined1 *)((int)this + 0x250) = 0;
          *(undefined4 *)((int)this + 0x254) = 0;
          *(undefined4 *)((int)this + 600) = 0;
          *(undefined1 *)((int)this + 0x25c) = 0;
          (*(byte *)(gen_frame + 0x63)) = 0;
        }
      }
      else {
        uVar4 = (uint)REFG(undefined1, 0x13238fc);
        uVar11 = 2;
        (*(uint *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x64))[2];
        piVar5 = REFG(int * PTR32, 0x1323900);
        uVar8 = ((gen_lcode *)*(gen_code32 *)*puVar9)(puVar9);
        F_006f0be0(this,(*(uint *)(gen_frame + 0x50)),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4,piVar5,uVar11);
      }
      REFG(undefined4 * PTR32, 0x1323874) = (undefined4 *)0x0;
      REFG(int, 0x13238f8) = 0;
      REFG(undefined1, 0x13238fc) = 0;
      REFG(int * PTR32, 0x1323900) = (int *)0x0;
      REFG(undefined4, 0x1323904) = 0;
      bVar3 = (*(byte *)(gen_frame + 0x63));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8c)) ^ (uint)(uint)(gen_frame + 0xc90));
  return bVar3;
}

/* ref: FUN_006f88c0 */
uint F_006f88c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f88c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int * this_01;
  undefined8 uVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xd1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd20);
  (*(int * PTR32 *)(gen_frame + 0xf0)) = this;
  (*(uint *)(gen_frame + 0xe0)) = param_2;
  if ((param_4 == (char *)0x0) ||
     (uVar2 = param_2, (*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110))), *param_4 != '\0'
     )) {
    (*(int *)(gen_frame + 0xd8)) = REFG(int, 0x1379694);
    uVar2 = 0;
    (*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110)));
    if (REFG(int, 0x1379694) != 0) {
      (*(uint *)(gen_frame + 0xdc)) = param_1[0x39];
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      (*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110)));
      if ((uVar2 == 2) &&
         ((uVar2 = 0, (*(uint *)(gen_frame + 0xdc)) == 0 ||
          (uVar2 = (*(uint *)(gen_frame + 0xdc)) >> 0x10, (*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110))),
          uVar2 == 0x801a)))) {
        bVar1 = *(byte *)(param_3 + 0x1c);
        uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
        (*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110)));
        if ((1 < bVar1) &&
           ((bVar1 < 6 || ((*(undefined8 *)(gen_frame + 0x110)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x110)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x110))), bVar1 == 9))
           )) {
          uVar2 = F_006c5190((*(int * PTR32 *)(gen_frame + 0xf0)));
          if ((char)uVar2 == '\0') {
            uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,((int *)(gen_frame + 0x8)));
            (*(uint *)(gen_frame + 0xe8)) = uVar3;
            REFG(int, 0x13238f8) = 0;
            if (param_4 == (char *)0x0) {
              (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xd4)) + 0)) = 0;
              (*(int *)(gen_frame + 0xd4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0xd4)), 1, 3) << 8;
            }
            else {
              (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xd4)) + 0)) = *param_4;
              (*(int *)(gen_frame + 0xd4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0xd4)), 1, 3),*param_4);
            }
            (*(uint *)(gen_frame + 0xcc)) = 0;
            uVar2 = 0;
            if (uVar3 != 0) {
              do {
                piVar4 = (int *)((int *)(gen_frame + 0x8))[(int)((*(uint *)(gen_frame + 0xcc)))];
                if (*(short *)((int)piVar4 + 10) == 0xd) {
                  uVar3 = 0;
                  piVar4 = piVar4 + 0x3e;
                  uVar2 = 0x10;
                  do {
                    if (*piVar4 != 0) {
                      ((int *)(gen_frame + 0x88))[(int)(uVar3)] = *piVar4;
                      uVar3 = uVar3 + 1;
                    }
                    piVar4 = piVar4 + 1;
                    uVar2 = uVar2 - 1;
                  } while (uVar2 != 0);
                  (*(uint *)(gen_frame + 0xdc)) = uVar3;
                  (*(uint *)(gen_frame + 0xd0)) = uVar2;
                  if (uVar3 != 0) {
                    do {
                      piVar4 = (int *)((int *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0xd0)))];
                      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
                      if (((char)uVar2 != '\0') && (((uint)piVar4[0xe] >> 0x12 & 1) != 0)) {
                        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x214))
                                          (piVar4,(*(int *)(gen_frame + 0xd8)),param_1,0x12,(*(uint *)(gen_frame + 0xe0)));
                        (*(uint *)(gen_frame + 0xe4)) = uVar2;
                        if ((uVar2 == 0) || (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar2), bVar1 != 0))
                        {
                          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,param_1,(*(uint *)(gen_frame + 0xe0)),(*(int *)(gen_frame + 0xd4)));
                          if ((char)uVar2 != '\0') goto LAB_006f8b3c;
                        }
                        else {
                          F_006b8e80((*(int * PTR32 *)(gen_frame + 0xf0)),(*(uint *)(gen_frame + 0xe4)));
                        }
                      }
                      uVar2 = (*(uint *)(gen_frame + 0xd0)) + 1;
                      (*(uint *)(gen_frame + 0xd0)) = uVar2;
                      this_01 = (*(int * PTR32 *)(gen_frame + 0xf0));
                    } while (uVar2 < (*(uint *)(gen_frame + 0xdc)));
                    goto LAB_006f8b54;
                  }
                }
                else {
                  uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
                  this_01 = (*(int * PTR32 *)(gen_frame + 0xf0));
                  if (((char)uVar2 != '\0') && (((uint)piVar4[0xe] >> 0x12 & 1) != 0)) {
                    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4,(*(int *)(gen_frame + 0xd8)),param_1,0x12,(*(uint *)(gen_frame + 0xe0)));
                    (*(uint *)(gen_frame + 0xe4)) = uVar2;
                    if ((uVar2 == 0) ||
                       (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar2), this_01 = (*(int * PTR32 *)(gen_frame + 0xf0)), bVar1 != 0))
                    {
                      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,param_1,(*(uint *)(gen_frame + 0xe0)),(*(int *)(gen_frame + 0xd4)));
                      this_01 = (*(int * PTR32 *)(gen_frame + 0xf0));
                      if ((char)uVar2 != '\0') {
LAB_006f8b3c: ;
                        (&REFG(int * PTR32, 0x1323878))[(int)(REFG(int, 0x13238f8))] = piVar4;
                        REFG(int, 0x13238f8) = REFG(int, 0x13238f8) + 1;
                        this_01 = (*(int * PTR32 *)(gen_frame + 0xf0));
                      }
                    }
                    else {
                      F_006b8e80((*(int * PTR32 *)(gen_frame + 0xf0)),(*(uint *)(gen_frame + 0xe4)));
                    }
                  }
LAB_006f8b54: ;
                  if (REFG(int, 0x13238f8) != 0) {
                    REFG(undefined4, 0x1323900) = (*(uint *)(gen_frame + 0xe0));
                    REFG(int * PTR32, 0x1323874) = param_1;
                    REFG(undefined1, 0x13238fc) = 0x12;
                    (*(int * PTR32 *)(gen_frame + 0xf0)) = REFG(int * PTR32, 0x1323878);
                    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1323878) + 0x210))))
                                      (REFG(int * PTR32, 0x1323878),(*(int *)(gen_frame + 0xd8)),param_1,0x12,(*(uint *)(gen_frame + 0xe0)));
                    (*(uint *)(gen_frame + 0xdc)) = uVar2;
                    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0x1bc))
                                      ((*(int * PTR32 *)(gen_frame + 0xf0)),(*(int *)(gen_frame + 0xd8)),param_1,(uint)REFG(undefined1, 0x13238fc),REFG(undefined4, 0x1323900));
                    (*(undefined1 *)(gen_frame + 0xef)) = (char)uVar2;
                    (*(uint *)(gen_frame + 0xe8)) = (*(int * PTR32 *)(gen_frame + 0xf0))[2];
                    if ((uVar2 & 2) == 0) {
                      (*(undefined8 *)(gen_frame + 0x110)) = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                      uVar8 = 0;
                      (*(uint *)(gen_frame + 0x118)) = (*(uint *)(gen_frame + 0xe8));
                      uVar7 = 0;
                      puVar6 = &(*(undefined4 *)(gen_frame + 0xf8));
                      (*(uint *)(gen_frame + 0x11c)) = (*(uint *)(gen_frame + 0xe0));
                      (*(undefined4 *)(gen_frame + 0xf8)) = 0x1c7;
                      (*(undefined4 *)(gen_frame + 0xfc)) = 0x28;
                      (*(undefined1 *)(gen_frame + 0x120)) = (char)(*(int *)(gen_frame + 0xd4));
                      this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
                      bVar1 = F_00974e00(this_00,puVar6,uVar7,uVar8);
                      if (bVar1 != 0) {
                        (*(uint *)(gen_frame + 0xe8)) = (*(int * PTR32 *)(gen_frame + 0xf0))[2];
                        (*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x1323900);
                        (*(byte *)(gen_frame + 0xf4)) = REFG(undefined1, 0x13238fc);
                        uVar5 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                        this_01[0x90] = (int)uVar5;
                        this_01[0x8e] = (*(uint *)(gen_frame + 0xe8));
                        this_01[0x91] = (int)((ulonglong)uVar5 >> 0x20);
                        this_01[0x93] = (*(uint *)(gen_frame + 0xe4));
                        *(byte *)(this_01 + 0x92) = (*(byte *)(gen_frame + 0xf4));
                        *(undefined1 *)(this_01 + 0x94) = (*(undefined1 *)(gen_frame + 0xef));
                        this_01[0x95] = 0;
                      }
                    }
                    else {
                      (*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x1323900);
                      (*(byte *)(gen_frame + 0xf4)) = REFG(undefined1, 0x13238fc);
                      uVar5 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                      this_01[0x90] = (int)uVar5;
                      this_01[0x8e] = (*(uint *)(gen_frame + 0xe8));
                      this_01[0x93] = (*(uint *)(gen_frame + 0xe4));
                      this_01[0x91] = (int)((ulonglong)uVar5 >> 0x20);
                      *(byte *)(this_01 + 0x92) = (*(byte *)(gen_frame + 0xf4));
                      *(undefined1 *)(this_01 + 0x94) = (*(undefined1 *)(gen_frame + 0xef));
                      this_01[0x95] = (*(uint *)(gen_frame + 0xdc));
                      if ((*(uint *)(gen_frame + 0xdc)) != 0) {
                        F_00a4a760(&REFG(undefined, 0x14a7360),(*(uint *)(gen_frame + 0xdc)),1);
                      }
                      uVar3 = (uint)REFG(undefined1, 0x13238fc);
                      uVar7 = 2;
                      (*(uint *)(gen_frame + 0xe8)) = (*(int * PTR32 *)(gen_frame + 0xf0))[2];
                      uVar2 = REFG(undefined4, 0x1323900);
                      uVar5 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
                      F_006f0be0(this_01,(*(uint *)(gen_frame + 0xe8)),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),
                                   uVar3,uVar2,uVar7);
                    }
                    uVar2 = 0;
                    REFG(int * PTR32, 0x1323874) = (int *)0x0;
                    REFG(int, 0x13238f8) = 0;
                    REFG(undefined1, 0x13238fc) = 0;
                    REFG(undefined4, 0x1323900) = 0;
                    REFG(undefined4, 0x1323904) = 0;
                    break;
                  }
                }
                uVar2 = (*(uint *)(gen_frame + 0xcc)) + 1;
                (*(uint *)(gen_frame + 0xcc)) = uVar2;
              } while (uVar2 < (*(uint *)(gen_frame + 0xe8)));
            }
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xd1c)) ^ (uint)(uint)(gen_frame + 0xd20));
  return uVar2;
}

/* ref: FUN_006f8dd0 */
uint F_006f8dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6f8dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    if (((*(uint *)&gen_args[2]) & 0x80000000) == 0x80000000) {
      this_00 = (undefined *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),(*(uint *)&gen_args[2]));
    }
    else {
      this_00 = (undefined *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]));
    }
    piVar1 = (*(int * PTR32 *)&gen_args[1]);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      if (((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) && ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x8e))) & 0x40) == 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54))))((*(int * PTR32 *)&gen_args[1]),1);
        F_0074a590(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),((undefined1 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
      }
      F_006bcf50(this_00,piVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
      uVar2 = F_006f1520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))),(*(undefined4 *)&gen_args[4]));
    }
  }
  return uVar2;
}

/* ref: FUN_006f8e70 */
uint F_006f8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x15);
  if (uVar2 != 0xffff) {
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 2;
  }
  uVar3 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar4 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar4 + 8);
  }
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x2c))) == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x60))
                      (param_1,param_1[0x16],(uint)uVar2,&REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
    return uVar3;
  }
  uVar3 = 0xffff;
  param_1[0x18] = 0x39;
  if (uVar2 != 0xffff) {
    bVar1 = *(byte *)(param_1 + 0x17);
    uVar3 = CONCAT31(0xff,bVar1);
    if ((bVar1 & 4) == 0) {
      *(byte *)(param_1 + 0x17) = bVar1 | 4;
      uVar3 = F_006f15b0((undefined *)param_1[1],0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_006f8f10 */
uint F_006f8f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6f8f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  int * piVar9;
  uint uVar10;
  int * piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int * piVar15;
  int iVar16;
  
  uVar10 = *(uint *)((int)this + 0x220);
  iVar16 = 0;
  if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
    iVar16 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar16 + 8) <= uVar10) {
    uVar10 = uVar10 - *(uint *)(iVar16 + 8);
  }
  iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar10 * 4)));
  bVar1 = *(byte *)(iVar16 + 0x18);
  uVar3 = *(undefined4 *)(iVar16 + 0x1c);
  uVar4 = *(undefined4 *)(iVar16 + 0x10);
  uVar10 = *(uint *)(iVar16 + 8);
  ((byte *)(gen_frame + 0x8))[0x24] = bVar1;
  uVar5 = *(undefined4 *)(iVar16 + 0x14);
  uVar14 = *(uint *)(iVar16 + 0x28);
  uVar13 = *(uint *)(iVar16 + 0x24);
  if (uVar10 == 0) {
    return uVar14;
  }
  if ((uVar10 & 0x80000000) == 0x80000000) {
    piVar11 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar10);
  }
  else {
    piVar11 = (int *)F_006dda70(this,uVar10);
  }
  piVar8 = REFG(int * PTR32, 0x1379694);
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  F_006e6740((undefined *)((int)this + 0x100));
  if (*(int *)((int)this + 0x224) == 1) {
    piVar15 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6c4)));
    if (piVar15 != *(int * PTR32 *)((int)this + 0x6c4)) {
      do {
        piVar6 = (int *)piVar15[3];
        if ((*(byte *)((int)piVar6 + 0x8e) & 0x40) != 0) {
          uVar12 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6);
          if ((char)uVar12 != '\0') {
            F_00aa4310((undefined *)piVar15[3]);
          }
          ((code *)*(gen_code32 *)(*(int *)piVar15[3] + 0x54))((int *)piVar15[3],0);
        }
        if (*(char *)((int)piVar15 + 0x11) == '\0') {
          piVar6 = (int *)piVar15[2];
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            cVar2 = *(char *)(*piVar6 + 0x11);
            piVar15 = piVar6;
            piVar6 = (int *)*piVar6;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar6 + 0x11);
              piVar15 = piVar6;
              piVar6 = (int *)*piVar6;
            }
          }
          else {
            cVar2 = *(char *)(piVar15[1] + 0x11);
            piVar9 = (int *)piVar15[1];
            piVar6 = piVar15;
            while ((piVar15 = piVar9, cVar2 == '\0' && (piVar6 == (int *)piVar15[2]))) {
              cVar2 = *(char *)(piVar15[1] + 0x11);
              piVar9 = (int *)piVar15[1];
              piVar6 = piVar15;
            }
          }
        }
      } while (piVar15 != *(int * PTR32 *)((int)this + 0x6c4));
    }
    F_00743520((undefined *)((int)this + 0x6c0));
    if (piVar8 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar8 + 0x54))(piVar8,0);
    }
    *(undefined4 *)((int)this + 0x260) = 0;
  }
  if (((uVar14 == 0x3d) && (uVar13 != 0)) && (uVar13 < 9)) {
    F_00a4a760(&REFG(undefined, 0x14a7360),uVar13,0);
  }
  uVar13 = ((code *)*(gen_code32 *)(*piVar11 + 0x21c))(piVar11);
  if ((char)uVar13 != '\0') {
    *(undefined4 *)((int)this + 0x740) = uVar4;
    *(undefined4 *)((int)this + 0x744) = uVar5;
  }
  F_00751470((undefined *)((int)this + 0x728),iVar16);
  ((code *)*(gen_code32 *)(*piVar11 + 0x9c))(piVar11,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)),uVar3,uVar14);
  if ((uVar10 & 0x80000000) == 0x80000000) {
    *(undefined1 *)((int)this + 0xc0) = 1;
    F_006de430((undefined *)((int)this + 0x5c));
  }
  else {
    F_006e5450(this,uVar10,piVar8);
  }
  iVar16 = 0;
  if (*(int *)((int)this + 0x224) != 0) {
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x218) + *(int *)((int)this + 0x220) * 4)));
    ((code *)*(gen_code32 *)*puVar7)(puVar7,0);
    *(int *)((int)this + 0x220) = *(int *)((int)this + 0x220) + 1;
    if (*(uint *)((int)this + 0x21c) <= *(uint *)((int)this + 0x220)) {
      *(undefined4 *)((int)this + 0x220) = 0;
    }
    piVar11 = (int *)((int)this + 0x224);
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      *(undefined4 *)((int)this + 0x220) = 0;
    }
  }
  if (*(int *)((int)this + 0x224) == 0) {
    if (*(char *)((int)this + 0x7a8) != '\0') {
      *(undefined1 *)((int)this + 0x7a8) = 0;
    }
    uVar10 = 0;
  }
  else {
    piVar11 = *(int * PTR32 *)((int)this + 0x214);
    uVar10 = *(uint *)((int)this + 0x220);
    if (piVar11 != (int *)0x0) {
      iVar16 = *piVar11;
    }
    uVar14 = uVar10;
    if (*(uint *)(iVar16 + 8) <= uVar10) {
      uVar14 = uVar10 - *(uint *)(iVar16 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar14 * 4))) + 0x28))) != 0) {
      if (piVar11 == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *piVar11;
      }
      if (*(uint *)(iVar16 + 8) <= uVar10) {
        uVar10 = uVar10 - *(uint *)(iVar16 + 8);
      }
      iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar10 * 4)));
      uVar10 = F_006fd010(this,*(undefined4 *)(iVar16 + 8),(uint)*(byte *)(iVar16 + 0x18),
                            *(undefined4 *)(iVar16 + 0x1c),*(undefined4 *)(iVar16 + 0x28));
      goto LAB_006f927a;
    }
  }
  if (*(int *)((int)this + 0x224) != 0) {
    return uVar10;
  }
  uVar10 = 0;
  if (*(int *)((int)this + 0x288) != 0) {
    F_006f0be0(this,*(int *)((int)this + 0x288),*(undefined4 *)((int)this + 0x290),
                 *(undefined4 *)((int)this + 0x294),(uint)*(byte *)((int)this + 0x298),
                 *(undefined4 *)((int)this + 0x29c),(uint)*(byte *)((int)this + 0x2a0));
    if (*(short *)((int)this + 0x2b8) != -1) {
      if (*(int *)((int)this + 0x2b0) == -0x20000000) {
        uVar10 = 0;
      }
      else {
        uVar10 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0x2b0),
                              *(undefined4 *)((int)this + 0x2b4));
      }
      F_006f8dd0(this,uVar10,*(undefined4 *)((int)this + 0x288),
                   (uint)*(ushort *)((int)this + 0x2b8),*(undefined4 *)((int)this + 700),
                   (int)this + 0x2c0,(uint)*(byte *)((int)this + 0x6bc));
    }
    uVar10 = F_0072df00((undefined *)((int)this + 0x280));
  }
LAB_006f927a: ;
  if ((*(int *)((int)this + 0x224) == 0) && (bVar1 == 0xf)) {
    uVar10 = F_00ab60c0(&REFG(undefined4, 0x14bcc80));
  }
  return uVar10;
}

/* ref: FUN_006f92a0 */
uint F_006f92a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f92a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_006f6dc0((undefined *)((int)this + 0x5c),param_1,param_2);
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: Client::Game::Event::InitializeSceneTask::vf2 */
uint F_006f95e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f95e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  byte bVar1;
  char cVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x6c))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x1000) == 0) {
    if (((byte)(*(undefined * PTR32 *)&gen_args[0])[4] & 1) == 0) {
      if ((REFG(int, 0x1375bbc) == 0) && (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0)) {
        if (REFG(int, 0x1375bbc) == -1) {
          iVar7 = 0;
        }
        else {
          iVar7 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
        }
        *(undefined1 *)(iVar7 + 0x198) = 1;
      }
      if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*(int *)((*(int *)&gen_args[2]) + 0x50) != 0)) {
        F_006da750(this_00,REFG(void * PTR32, 0x1379694),*(int *)((*(int *)&gen_args[2]) + 0x50),1);
      }
    }
  }
  else if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x800) == 0) {
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x2000) != 0) {
      if (*(char *)((int)this_00 + 0xd6) != '\0') {
        *(undefined1 *)((int)this_00 + 0xd6) = 0;
        uVar8 = 2;
        if (*(char *)((int)this_00 + 0xd7) != '\0') {
          *(undefined1 *)((int)this_00 + 0xd7) = 0;
          uVar8 = 6;
        }
        piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3,uVar8,1,1);
        }
      }
      if (*(char *)((int)this_00 + 0xdb) == '\0') {
        *(undefined1 *)((int)this_00 + 0xdb) = 1;
        piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3,0x10,0,1);
        }
      }
    }
  }
  else {
    F_006c5600(this_00,0x16);
  }
  if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x224))) == 0) {
    if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x238))) == 0) goto LAB_006f979f;
    cVar2 = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x248)));
  }
  else {
    uVar6 = *((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x220)));
    if (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214))) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214)));
    }
    if (*(uint *)(iVar7 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iVar7 + 8);
    }
    cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar6 * 4))) + 0x18)));
  }
  if (cVar2 == '\x0f') {
    uVar8 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x8000) == 0) {
      F_004e7f70(uVar8,(float)(float10)1);
    }
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x10000) == 0) {
      F_00ab05b0();
    }
    if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x20000) == 0) {
      F_004e7cc0(uVar8,(float)(float10)1);
    }
  }
LAB_006f979f: ;
  if ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x400) != 0) {
    F_009d53f0(REFG(void * PTR32, 0x1487c90),1);
    F_00984b30(1);
    pvVar4 = REFG(void * PTR32, 0x1379694);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      F_00aa3410(REFG(void * PTR32, 0x1379694),0xffffffff);
      piVar3 = *(int * PTR32 *)((int)pvVar4 + 0x2e04);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1,0);
      }
    }
    F_00a06560(0);
    F_004d1650(REFG(undefined4, 0x1370c18));
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar3 != (int *)0x0) {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3)));
      F_00449620(pvVar4);
    }
  }
  pvVar4 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    uVar8 = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0xb0)));
    puVar5 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    F_006d7550(this_00,&(*(undefined * PTR32 *)&gen_args[1]),pvVar4);
    if ((*(undefined * PTR32 *)&gen_args[1]) != *(undefined * PTR32 *)((int)this_00 + 0x30)) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x58))) = *puVar5;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x5c))) = puVar5[1];
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x60))) = puVar5[2];
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 100))) = uVar8;
    }
  }
  uVar6 = F_006f8e70(REFG(void * PTR32, 0x1488344),(*(int *)&gen_args[2]));
  return uVar6;
}

/* ref: Client::Game::Event::EventHandler::vf24 */
uint F_006f9890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f9890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf27 */
uint F_006f98c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6f98c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf26 */
uint F_006f98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 EVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    EVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,EVar1);
    if (((byte)EVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)EVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006f9920 */
byte F_006f9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6f9920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = REFG(int, 0x1488344);
  if (*(int *)(REFG(int, 0x1488344) + 0x208) == 0) {
    *(undefined4 *)(REFG(int, 0x1488344) + 0x208) = *(undefined4 *)((int)this + 8);
    iVar2 = iVar2 + 0x1e8;
  }
  else {
    iVar2 = 0;
  }
  *(int *)((int)this + 0x1d0) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x60) = 0x35;
    return 0;
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(param_3 + 8);
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0042a990(param_2 + 8);
  }
  uVar5 = F_0042a990((int)this + 0x16c);
  uVar3 = F_00a03750(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,uVar5,uVar4,uVar3,param_4,param_5);
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar3;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006f99e0 */
uint F_006f99e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f99e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03900(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_006f9a30 */
uint F_006f9a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2,param_3);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_006f9a80 */
uint F_006f9a80(unsigned int gen_a0)
{
  GEN_ENTER(0x6f9a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: FUN_006f9ac0 */
uint F_006f9ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a039e0(*(undefined * PTR32 *)((int)this + 0x1d0),param_1,param_2);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf53 */
uint F_006f9b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf54 */
uint F_006f9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf55 */
uint F_006f9bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf56 */
uint F_006f9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf57 */
uint F_006f9c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf58 */
uint F_006f9cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf59 */
uint F_006f9d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_2,param_3);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf61 */
uint F_006f9d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6f9d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf60 */
uint F_006f9db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6f9db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a039e0(*(undefined * PTR32 *)(this + 0x1d0),param_2,param_3);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf62 */
uint F_006f9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf63 */
uint F_006f9e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf64 */
uint F_006f9eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf65 */
uint F_006f9f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf66 */
uint F_006f9f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf67 */
uint F_006f9fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf68 */
uint F_006f9ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6f9ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf69 */
uint F_006fa040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf70 */
uint F_006fa090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf71 */
uint F_006fa0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf72 */
uint F_006fa130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf73 */
uint F_006fa180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf74 */
uint F_006fa1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf75 */
uint F_006fa220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf76 */
uint F_006fa270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1 + 1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf77 */
uint F_006fa2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf78 */
uint F_006fa320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fa320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_1,param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf79 */
uint F_006fa380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fa380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03900(*(undefined * PTR32 *)(this + 0x1d0),param_1,param_2);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf80 */
uint F_006fa3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf84 */
uint F_006fa430(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf85 */
uint F_006fa470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa470u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf86 */
uint F_006fa4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa4d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf87 */
uint F_006fa530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa530u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    (*(uint *)&gen_args[1]) = F_0042a990(*(int *)((*(uint *)&gen_args[1]) + 0x174) + 8);
    uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(uint *)&gen_args[1]));
    uVar3 = 1;
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
      }
      uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0x3a;
  uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf88 */
uint F_006fa5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf89 */
uint F_006fa5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf90 */
uint F_006fa620(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf91 */
uint F_006fa660(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf92 */
uint F_006fa6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf93 */
uint F_006fa6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf95 */
uint F_006fa720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fa720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf96 */
uint F_006fa760(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf97 */
unsigned int F_006fa7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if ((*(undefined * PTR32 *)(this + 0x1d0) != (undefined *)0x0) &&
     (uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0)), uVar2 != 1)) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    F_006f4000(this);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf98 */
uint F_006fa7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf99 */
uint F_006fa820(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf100 */
uint F_006fa860(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf101 */
uint F_006fa8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf102 */
uint F_006fa8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf103 */
uint F_006fa920(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf108 */
uint F_006fa960(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf109 */
uint F_006fa9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fa9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  return 1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf40 */
unsigned int F_006fa9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fa9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    uVar2 = F_0042a990(param_2);
    uVar2 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),uVar2);
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *(uint *)(this + 0x60) = uVar2;
      }
      F_006f4000(this);
    }
  }
  return 0;
}

/* ref: Client::Game::Event::LuaEventHandler::vf104 */
uint F_006faa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6faa30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf105 */
uint F_006faa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03710(*(undefined * PTR32 *)(this + 0x1d0));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf106 */
uint F_006faab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf107 */
uint F_006faaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: Client::Game::Event::LuaEventHandler::vf27 */
uint F_006fab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined1 LVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[2]) & 0xff;
  if ((uVar3 == 1) || (uVar3 == 2)) {
    (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(*(int * PTR32 *)&gen_args[3]) == 1);
    uVar3 = F_00a03850(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),(*(uint *)&gen_args[2]));
  }
  else {
    if (uVar3 != 3) {
      if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == -1) {
        return 0xffff;
      }
      LVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
      if (((byte)LVar1 & 4) != 0) {
        return CONCAT31(0xff,LVar1);
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar3 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,0);
      return uVar3;
    }
    uVar3 = F_00a03710(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))));
  }
  uVar4 = 1;
  if (uVar3 != 1) {
    bVar2 = F_00a02270(uVar3);
    if (bVar2 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar3;
    }
    uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar4;
}

/* ref: Client::Game::Event::LuaEventHandler::vf26 */
uint F_006fabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fabc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 LVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    LVar1 = this[0x5c];
    uVar2 = CONCAT31(0xff,LVar1);
    if (((byte)LVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar2 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf56 */
uint F_006fabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fabf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0xfffffffe) {
    if (*(int *)(this + 0x60) == 0) {
      uVar3 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),0xffffffff);
      uVar2 = 1;
      if (uVar3 != 1) {
        bVar1 = F_00a02270(uVar3);
        if (bVar1 != 0) {
          *(uint *)(this + 0x60) = uVar3;
        }
        uVar2 = F_006f4000(this);
      }
      return uVar2;
    }
  }
  else {
    if (param_2 == 1) {
      uVar2 = param_1;
      if ((-1 < (int)param_1) && (*((char *)GEN_TOP((*(int *)(this + 0x2d4) + 0x32))) == '\0')) {
        uVar2 = param_1 + 1;
      }
      uVar2 = F_006f9c10((undefined *)this,uVar2,1);
      return uVar2;
    }
    if (param_2 != 3) {
      uVar2 = F_006f9c10((undefined *)this,param_1,param_2);
      return uVar2;
    }
    uVar2 = param_1;
    if (-1 < (int)param_1) {
      if (param_1 < (uint)(*(int *)(this + 0x2ec) - *(int *)(this + 0x2e8))) {
        uVar2 = (uint)*((byte *)GEN_TOP((param_1 + *(int *)(this + 0x2e8))));
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    if (*(int *)(this + 0x60) == 0) {
      uVar2 = F_00757760(this,uVar2);
      return uVar2;
    }
  }
  uVar2 = F_006f4000(this);
  return uVar2;
}

/* ref: FUN_006facc0 */
byte F_006facc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6facc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && (param_1 != -2)) {
    return 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_006f4000(this);
    return 1;
  }
  if (param_1 == 6) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324110),0);
    return 1;
  }
  uVar3 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar3;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006fad60 */
byte F_006fad60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fad60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x574))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5a4))) * 4)));
    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) == 0) {
      F_00a50880(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),2,&(*(uint *)&gen_args[1]),1);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) | 1;
      return 1;
    }
  }
  else {
    uVar2 = F_00a03ae0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),0,0,0);
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
      }
      F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return 1;
}

/* ref: FUN_006fae00 */
byte F_006fae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fae00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_1 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0x80) {
      REFG(undefined1, 0x1324138) = 1;
      if (REFG(char, 0x1324139) == '\0') {
        REFG(undefined1, 0x1324138) = 1;
        return 0;
      }
      F_006ce950(this);
      return 0;
    }
  }
  if (*(short *)((int)this + 0x54) != -1) {
    if (iVar3 == -2) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
      F_006f4770(this,1,0);
      return 1;
    }
    if (iVar3 == -1) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
      F_006f4770(this,0,0);
      return 1;
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    *(char *)(uVar2 + 0x2db64) = (char)iVar3;
    if ((*(byte *)((int)this + 0x14c) & 1) == 0) {
      F_006be2c0(this,1);
      F_006f4770(this,2,iVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_006faee0 */
byte F_006faee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  
  if (*(short *)((int)this + 0x54) == -1) {
    return 0;
  }
  F_006be2c0(this,1);
  if (*(short *)((int)this + 0x54) != -1) {
    uVar2 = *(undefined4 *)((int)this + 0x138);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (undefined2)param_1;
    bVar1 = *(byte *)((int)this + 0x5c);
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(3,(undefined2)param_1);
    if ((bVar1 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar1 | 4;
      F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf83 */
uint F_006faf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6faf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 GVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  if ((REFG(undefined4, 0x132412c) == this) && (REFG(int, 0x1324130) != 0)) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1324130),0);
      return uVar4;
    }
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
  uVar4 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    uVar2 = *(undefined4 *)(this + 0x138);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    GVar1 = this[0x5c];
    uVar4 = (uint)(byte)GVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x10000;
    if (((byte)GVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)GVar1 | 4);
      uVar4 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x4)),2);
    }
  }
  return uVar4;
}

/* ref: FUN_006fb010 */
uint F_006fb010(unsigned int gen_a0)
{
  GEN_ENTER(0x6fb010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  *(byte *)((int)this + 0x14c) = *(byte *)((int)this + 0x14c) & 0xfe;
  REFG(undefined1, 0x1324138) = 0;
  REFG(void * PTR32, 0x132412c) = this;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffff;
    if (*(short *)((int)this + 0x54) != -1) {
      uVar7 = *(undefined4 *)((int)this + 0x138);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      bVar1 = *(byte *)((int)this + 0x5c);
      uVar3 = (uint)bVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if ((bVar1 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar1 | 4;
        uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),2);
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return uVar3;
      }
    }
  }
  else {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    bVar1 = F_007c9500(pvVar4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      iVar6 = 0x41;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      bVar1 = *(byte *)(uVar3 + 0x2db64);
      F_005a2710(((undefined1 *)(gen_frame + 0x208)),4);
      (*(uint *)(gen_frame + 0x20c)) = (uint)bVar1;
      F_006be3d0(this,((undefined4 *)(gen_frame + 0x8)));
      uVar12 = 4;
      uVar11 = 0;
      uVar10 = 0;
      ppuVar9 = &REFG(undefined * PTR32, 0x1324128);
      puVar5 = ((undefined4 *)(gen_frame + 0x8));
      uVar8 = 0x42;
      uVar7 = 0x17;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      REFG(undefined4, 0x1324130) = F_008668b0(pvVar4,uVar7,uVar8,puVar5,ppuVar9,uVar10,uVar11,uVar12);
      this_00 = &(*(uint *)(gen_frame + 0x218));
      iVar6 = 0x41;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    else if (*(short *)((int)this + 0x54) != -1) {
      uVar7 = *(undefined4 *)((int)this + 0x138);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      bVar1 = *(byte *)((int)this + 0x5c);
      uVar3 = (uint)bVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = uVar7;
      if ((bVar1 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar1 | 4;
        uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)),2);
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return uVar3;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf26 */
uint F_006fb1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 CVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((char)param_2 == '5') {
    uVar4 = F_00a03970(*(undefined * PTR32 *)(this + 0x1d0),param_3);
    uVar3 = 1;
    if (uVar4 != 1) {
      bVar2 = F_00a02270(uVar4);
      if (bVar2 != 0) {
        *(uint *)(this + 0x60) = uVar4;
      }
      uVar3 = F_006f4000(this);
    }
  }
  else {
    uVar3 = 0xffff;
    if (*(short *)(this + 0x54) != -1) {
      CVar1 = this[0x5c];
      uVar3 = CONCAT31(0xff,CVar1);
      if (((byte)CVar1 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar1 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006fb230 */
uint F_006fb230(unsigned int gen_a0)
{
  GEN_ENTER(0x6fb230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  
  pvVar4 = REFG(void * PTR32, 0x1379694);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    F_00aa2900(REFG(void * PTR32, 0x1379694),0);
    F_00aa80c0(pvVar4,1,0,0);
    uVar3 = F_00aa80c0(pvVar4,2,0,0);
  }
  bVar1 = *(byte *)((int)this + 0x184);
  if (((bVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)((int)this + 0x54) != -1)) {
    pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 7;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) == 0) {
      *(byte *)((int)this + 0x5c) = bVar2 | 4;
      uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb300 */
uint F_006fb300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if (param_1 == 2) {
    bVar1 = *(byte *)((int)this + 0x184);
    uVar3 = 0;
    if (((bVar1 & 8) != 0) || (*(short *)((int)this + 0x54) == -1)) goto LAB_006fb420;
    pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 5;
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) != 0) goto LAB_006fb420;
    *(byte *)((int)this + 0x5c) = bVar2 | 4;
  }
  else {
    uVar3 = param_1 - 3;
    if (((uVar3 != 0) || (bVar1 = *(byte *)((int)this + 0x184), (bVar1 & 8) != 0)) ||
       (uVar3 = 0xffff, *(short *)((int)this + 0x54) == -1)) goto LAB_006fb420;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    bVar2 = *(byte *)((int)this + 0x5c);
    uVar3 = CONCAT31((int3)((uint)param_3 >> 8),bVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = 6;
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    *(byte *)((int)this + 0x184) = bVar1 | 8;
    if ((bVar2 & 4) != 0) goto LAB_006fb420;
    *(byte *)((int)this + 0x5c) = bVar2 | 4;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
LAB_006fb420: ;
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb440 */
byte F_006fb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if (((*(byte *)((int)this + 0x184) & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 1;
    bVar1 = *(byte *)((int)this + 0x184);
    *(undefined4 *)((int)this + 0x118) = param_1;
    if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
      F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      bVar2 = *(byte *)((int)this + 0x5c);
      (*(undefined4 *)(gen_frame + 0x8)) = 10;
      (*(undefined4 *)(gen_frame + 0xc)) = param_1;
      *(byte *)((int)this + 0x184) = bVar1 | 8;
      if ((bVar2 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar2 | 4;
        F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec) ^ (uint)(uint)(gen_frame + 0xec));
  return 0;
}

/* ref: FUN_006fb530 */
byte F_006fb530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  if (((*(byte *)((int)this + 0x184) & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
    *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 1;
    bVar1 = *(byte *)((int)this + 0x184);
    if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
      F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      (*(undefined4 *)(gen_frame + 0xc)) = param_1;
      bVar2 = *(byte *)((int)this + 0x5c);
      (*(undefined4 *)(gen_frame + 0x8)) = 9;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      *(byte *)((int)this + 0x184) = bVar1 | 8;
      if ((bVar2 & 4) == 0) {
        *(byte *)((int)this + 0x5c) = bVar2 | 4;
        F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec) ^ (uint)(uint)(gen_frame + 0xec));
  return 0;
}

/* ref: FUN_006fb610 */
uint F_006fb610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if (((char)param_1 != '\0') || ((char)param_3 != '\0')) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = 0x14;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar4 = (int *)F_00763050(uVar3,uVar6);
      uVar3 = 0;
      if ((piVar4 != (int *)0x0) &&
         (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), (char)uVar3 != '\0')) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
        bVar1 = *(byte *)((int)this + 0x184);
        if (((bVar1 & 8) == 0) && (*(short *)((int)this + 0x54) != -1)) {
          pvVar5 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
          bVar2 = *(byte *)((int)this + 0x5c);
          uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar5) >> 8),bVar2);
          (*(undefined4 *)(gen_frame + 0x8)) = 8;
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          *(byte *)((int)this + 0x184) = bVar1 | 8;
          if ((bVar2 & 4) == 0) {
            *(byte *)((int)this + 0x5c) = bVar2 | 4;
            uVar3 = F_006f15b0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: Client::Game::Event::CraftEventHandler::vf41 */
uint F_006fb710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fb710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined1 CVar1;
  undefined1 CVar2;
  uint uVar3;
  undefined * pvVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  if ((param_3 == this) &&
     (((uVar3 = 0, param_2 == 0xee || (uVar3 = param_2 - 0xf5, uVar3 == 0)) &&
      (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\x05')))) {
    uVar3 = F_00aaa5b0(REFG(void * PTR32, 0x1379694),1);
    if (((byte)this[0x184] & 2) != 0) {
      uVar3 = F_006befa0();
      this[0x184] = (undefined1)((byte)this[0x184] & 0xfd);
    }
    CVar1 = this[0x184];
    if ((((byte)CVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
      pvVar4 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      CVar2 = this[0x5c];
      uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),CVar2);
      (*(undefined4 *)(gen_frame + 0x8)) = 8;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      this[0x184] = (undefined1)((byte)CVar1 | 8);
      if (((byte)CVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar2 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: Client::Game::Event::CraftEventHandler::vf83 */
uint F_006fb800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined1 CVar1;
  undefined1 CVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  bool bVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  bVar6 = REFG(int, 0x1324144) != 0;
  if (bVar6) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324144),0);
  }
  if (REFG(int, 0x1324154) == 0) {
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x1324154),0);
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  if ((!bVar6) && ((char)uVar3 == '\0')) {
    this[0x184] = (undefined1)((byte)this[0x184] & 0xf7);
    CVar1 = this[0x184];
    if ((((byte)CVar1 & 8) == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
      pvVar5 = F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0xe0);
      CVar2 = this[0x5c];
      uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pvVar5) >> 8),CVar2);
      (*(undefined4 *)(gen_frame + 0x8)) = 8;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      this[0x184] = (undefined1)((byte)CVar1 | 8);
      if (((byte)CVar2 & 4) == 0) {
        this[0x5c] = (undefined1)((byte)CVar2 | 4);
        uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)),4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_006fb930 */
byte F_006fb930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fb930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  short * psVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  
  bVar5 = 0;
  uVar1 = F_00a4ffd0();
  psVar2 = (short *)(uVar1 + 0x13b8);
  iVar4 = 0x1e;
  do {
    if (*psVar2 != 0) {
      bVar5 = bVar5 + 1;
    }
    psVar2 = psVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)((int)this + 0x60) != 0) {
    F_006f4000(this);
    return 1;
  }
  if (bVar5 < 0x1e) {
    uVar1 = (uint)(param_1 == 3);
  }
  else {
    if (param_1 == 3) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x6a0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      F_0046a630(this_00,uVar6);
    }
    uVar1 = 0;
  }
  uVar1 = F_00a03850(*(undefined * PTR32 *)((int)this + 0x1d0),uVar1);
  if (uVar1 != 1) {
    bVar5 = F_00a02270(uVar1);
    if (bVar5 != 0) {
      *(uint *)((int)this + 0x60) = uVar1;
    }
    F_006f4000(this);
  }
  return 1;
}

/* ref: FUN_006fb9e0 */
byte F_006fb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fb9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  *(byte *)((int)this + 800) = *(byte *)((int)this + 800) & 0xdf;
  if (*(int *)((int)this + 0x60) != 0) {
    F_006f4000(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00a6a680(&REFG(undefined, 0x14afd38),param_2);
  uVar2 = F_00a6a660(&REFG(undefined, 0x14afd38));
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  if (param_1 == 0) {
    uVar5 = 0;
    if (*(byte *)(uVar2 + 0x158) != 0) {
      (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)(uVar2 + 0x158);
      piVar3 = (int *)(uVar2 + 0x15c);
      do {
        iVar1 = *piVar3;
        if (((iVar1 == 2) || (iVar1 == 4)) || (iVar1 == 6)) {
          ((int *)(gen_frame + 0x14))[(int)(uVar5)] = piVar3[0x18];
          uVar5 = (uint)(byte)((char)uVar5 + 1);
        }
        piVar3 = piVar3 + 0x1a;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      } while ((*(uint *)(gen_frame + 0xc)) != 0);
    }
    bVar4 = (byte)uVar5;
    if (*(int *)(uVar2 + 0x570) != -1) {
      ((int *)(gen_frame + 0x14))[(int)(uVar5)] = *(int *)(uVar2 + 0x56c);
      bVar4 = bVar4 + 1;
    }
    if (bVar4 == 0) {
      *(byte *)((int)this + 800) = *(byte *)((int)this + 800) | 0x20;
      uVar2 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),1,&(*(undefined4 *)(gen_frame + 0x10)),1);
      if (uVar2 != 1) {
        bVar4 = F_00a02270(uVar2);
        if (bVar4 != 0) {
          *(uint *)((int)this + 0x60) = uVar2;
        }
        F_006f4000(this);
      }
    }
    else {
      F_006cd8f0(this,((int *)(gen_frame + 0x14)),(uint)bVar4,0);
    }
  }
  else {
    uVar2 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),0,&(*(undefined4 *)(gen_frame + 0x10)),1);
    if (uVar2 != 1) {
      bVar4 = F_00a02270(uVar2);
      if (bVar4 != 0) {
        *(uint *)((int)this + 0x60) = uVar2;
      }
      F_006f4000(this);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf34 */
uint F_006fbb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fbb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined1 QVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar4 = F_00a6a660(&REFG(undefined, 0x14afd38));
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar4 + 0x56c);
  bVar3 = F_006bfb60(uVar4,1);
  if (bVar3 == 0) {
    uVar8 = 0;
  }
  else {
    QVar1 = this[0x44];
    uVar8 = *(undefined4 *)(this + 0x50);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = QVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),QVar1);
    bVar3 = F_006dc7f0(this,REFG(undefined4, 0x1379694),uVar8,(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8)));
    if (bVar3 == 0) {
      piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      F_0042e170(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10b6a60));
      uVar10 = 0;
      puVar9 = ((undefined1 *)(gen_frame + 0x64));
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x10b3a5e),REFG(undefined4, 0x108cc50));
      uVar8 = 0x3c;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
      F_00459b00(this_00,uVar8,uVar4,puVar9,uVar10);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      uVar4 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),0,&(*(undefined4 *)(gen_frame + 0xc)),1);
      if (uVar4 != 1) {
        bVar3 = F_00a02270(uVar4);
        if (bVar3 != 0) {
          *(uint *)(this + 0x60) = uVar4;
        }
        F_006f4000(this);
      }
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      uVar4 = (uint)uVar7;
      goto LAB_006fbca0;
    }
    this[800] = (undefined1)((byte)this[800] | 0x20);
    uVar8 = 1;
  }
  uVar6 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),uVar8,&(*(undefined4 *)(gen_frame + 0xc)),1);
  uVar4 = 1;
  if (uVar6 != 1) {
    bVar3 = F_00a02270(uVar6);
    if (bVar3 != 0) {
      *(uint *)(this + 0x60) = uVar6;
    }
    uVar4 = F_006f4000(this);
  }
LAB_006fbca0: ;
  puVar2 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar4;
}

/* ref: Client::Game::Event::QuestEventHandler::vf55 */
uint F_006fbcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x60) != 0) {
    uVar2 = F_006f4000(this);
    return uVar2;
  }
  uVar3 = F_00a03850(*(undefined * PTR32 *)(this + 0x1d0),(uint)(param_1 == 0));
  uVar2 = 1;
  if (uVar3 != 1) {
    bVar1 = F_00a02270(uVar3);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar3;
    }
    uVar2 = F_006f4000(this);
  }
  return uVar2;
}

/* ref: FUN_006fbd30 */
byte F_006fbd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x400];
  
  if ((*(int *)((int)this + 0x60) == 0) && (*(short *)((int)this + 0x54) == 0x28)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x3f8);
    if (param_1 == 0) {
      if (*(int *)((int)this + 0x1be0) == 1) {
        F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241a4) = 0;
        return 1;
      }
      if (*(int *)((int)this + 0x1be0) == 2) {
        F_006f5130(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241a4) = 0;
        return 1;
      }
      F_006f4d20(this,&(*(undefined4 *)(gen_frame + 0x0)),0);
    }
  }
  REFG(undefined4, 0x13241a4) = 0;
  return 1;
}

/* ref: FUN_006fbde0 */
uint F_006fbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f5080(this,param_1);
  return uVar1;
}

/* ref: FUN_006fbdf0 */
byte F_006fbdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fbdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  
  F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104),(uint)*(ushort *)((int)this + 0x100)
              );
  pvVar1 = *(undefined * PTR32 *)&REFG(undefined, 0x1324190);
  if (((*(int *)((int)this + 0x60) == 0) && (*(short *)((int)this + 0x54) == 0x28)) &&
     (pvVar1 = this, param_1 == 0)) {
    if (*(int *)((int)this + 0x1be0) == 1) {
      if (*(char *)((int)this + 0x1bf3) == '\0') {
        F_006f5080(this,*(undefined4 *)((int)this + 0x1bcc));
        REFG(undefined4, 0x13241c4) = 0;
        return 1;
      }
      F_006f5200(this);
      REFG(undefined4, 0x13241c4) = 0;
      return 1;
    }
    pvVar1 = this;
    if (*(int *)((int)this + 0x1be0) == 2) {
      F_006f5130(this,*(undefined4 *)((int)this + 0x1bcc));
      REFG(undefined4, 0x13241c4) = 0;
      return 1;
    }
  }
  *(undefined * PTR32 *)&REFG(undefined, 0x1324190) = pvVar1;
  REFG(undefined4, 0x13241c4) = 0;
  return 1;
}

/* ref: FUN_006fbeb0 */
byte F_006fbeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    F_006e1f70(this,(uint)*(ushort *)((int)this + 0x1d4),(int)this + 0x244);
    sVar1 = *(short *)((int)this + 0x54);
    uVar4 = 1;
    if (((sVar1 == 3) || (sVar1 == 2)) || (sVar1 == 5)) {
      bVar2 = F_006e1e90(this);
      if (1 < bVar2) {
        uVar4 = 0;
      }
    }
    bVar2 = *(byte *)((int)this + 0x5c);
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)((int)this + 0x1d4);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
    if ((bVar2 & 1) == 0) {
      F_00a50880(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),1,&(*(uint *)(gen_frame + 0x4)),2);
      *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
      return 1;
    }
  }
  else {
    uVar3 = F_00a03ae0(*(undefined * PTR32 *)((int)this + 0x1d0),0,0,0);
    if (uVar3 != 1) {
      bVar2 = F_00a02270(uVar3);
      if (bVar2 != 0) {
        *(uint *)((int)this + 0x60) = uVar3;
      }
      F_006f4000(this);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf55 */
uint F_006fbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fbf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 CVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar3 = (uint)*(ushort *)(this + 0x54);
    uVar5 = 1;
    if (((uVar3 == 3) || (uVar3 == 2)) || (uVar3 == 5)) {
      uVar5 = 0;
    }
    CVar1 = this[0x5c];
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(this + 0x1d4);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar5;
    if (((byte)CVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(this + 8),uVar3,1,&(*(uint *)(gen_frame + 0x4)),2);
      this[0x5c] = (undefined1)((byte)this[0x5c] | 1);
    }
  }
  else {
    uVar3 = F_00a03ae0(*(undefined * PTR32 *)(this + 0x1d0),0,0,0);
    if (uVar3 != 1) {
      bVar2 = F_00a02270(uVar3);
      if (bVar2 != 0) {
        *(uint *)(this + 0x60) = uVar3;
      }
      F_006f4000(this);
    }
  }
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = REFG(undefined4, 0x13241d4);
  if ((piVar4 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,uVar5,0)));
    REFG(undefined4, 0x13241d0) = (undefined *)0x0;
  }
  return (uint)piVar4;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf59 */
uint F_006fc050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 CVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined * PTR32 * ppCVar7;
  uint uVar8;
  undefined * pCVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  ((undefined * PTR32 *)(gen_frame + 0x14))[0] = this;
  if (param_1 == (undefined *)0x0) {
    pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
    if (1 < param_3) {
      uVar8 = 0;
      (*(int *)(gen_frame + 0xc)) = param_3 - 1;
      ppCVar7 = ((undefined * PTR32 *)(gen_frame + 0x14));
      puVar2 = param_2;
      do {
        ppCVar7 = (undefined * PTR32 *)((int)ppCVar7 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2 + 1;
        if (uVar8 % 3 == 2) {
          pvVar5 = (undefined *)F_00a37da0(pvVar4,uVar8 / 3);
          pCVar9 = (undefined *)0x0;
          if (pvVar5 != (undefined *)0x0) {
            if (*(char *)((int)pvVar5 + 6) == '\0') {
              uVar6 = *(uint *)((int)pvVar5 + 8);
              if ((*(byte *)((int)pvVar5 + 0x14) & 1) != 0) {
                uVar6 = uVar6 + 1000000;
              }
            }
            else {
              pvVar5 = (undefined *)F_00a3a860(pvVar5);
              uVar6 = F_0046e5e0(pvVar5);
            }
            if (uVar6 - 1000000 < 1000000) {
              pCVar9 = (undefined *)0x1;
            }
          }
          *ppCVar7 = pCVar9;
          this = ((undefined * PTR32 *)(gen_frame + 0x14))[0];
        }
        else {
          *ppCVar7 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        uVar8 = uVar8 + 1;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    CVar1 = this[0x5c];
    ((undefined * PTR32 *)(gen_frame + 0x14))[(int)(param_3)] = (undefined *)(uint)*(ushort *)(this + 0x1d4);
    uVar8 = param_3;
    if (((byte)CVar1 & 1) == 0) {
      uVar8 = F_00a50880(*(undefined4 *)(this + 8),(uint)*(ushort *)(this + 0x54),0,((undefined * PTR32 *)(gen_frame + 0x14)) + 1,
                           param_3);
      this[0x5c] = (undefined1)((byte)this[0x5c] | 1);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar8;
    }
  }
  else {
    pvVar4 = *(undefined * PTR32 *)(this + 0x1d0);
    ((undefined * PTR32 *)(gen_frame + 0x14))[0] = param_1;
    uVar6 = F_00a03900(pvVar4,((undefined * PTR32 *)(gen_frame + 0x14)),1);
    uVar8 = 1;
    if (uVar6 != 1) {
      bVar3 = F_00a02270(uVar6);
      if (bVar3 != 0) {
        *(uint *)(this + 0x60) = uVar6;
      }
      uVar8 = F_006f4000(this);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar8;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf57 */
uint F_006fc1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fc1b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 CVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 7) {
    if (((int)(*(uint *)&gen_args[1]) < 0) ||
       ((uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x338))) - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x334))) >> 1) <= (*(uint *)&gen_args[1]))) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x334))) + (*(uint *)&gen_args[1]) * 2)));
    }
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = uVar3;
    (*(uint *)&gen_args[1]) = (uint)uVar3;
    CVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
    uVar4 = (uint)CONCAT11((char)(uVar3 >> 8),CVar1);
    if (((byte)CVar1 & 4) == 0) {
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)CVar1 | 4);
      uVar4 = F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(uint *)&gen_args[1]),1);
      return uVar4;
    }
  }
  else {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
      uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
      return uVar4;
    }
    uVar5 = F_00a038b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),(*(uint *)&gen_args[1]) + 1);
    uVar4 = 1;
    if (uVar5 != 1) {
      bVar2 = F_00a02270(uVar5);
      if (bVar2 != 0) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar5;
      }
      uVar4 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::FishingEventHandler::vf24 */
uint F_006fc260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fc260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 FVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  
  uVar3 = F_00a5f290(param_1);
  if (uVar3 != 0) {
    *(uint *)(this + 0xfc) = (uint)(ushort)param_2;
    if ((ushort)param_2 == 1) {
      bVar2 = F_006e2150(this,uVar3,1,param_3,param_4);
      uVar3 = CONCAT31(extraout_var,bVar2);
    }
    else if ((ushort)param_2 == 2) {
      bVar2 = F_006f5720(this,uVar3,2,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    else if ((ushort)param_2 == 4) {
      bVar2 = F_006f5820(this,uVar3,4,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_01,bVar2);
    }
    else if ((ushort)param_2 == 5) {
      bVar2 = F_006f5890(this,uVar3,5,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_02,bVar2);
    }
    else if ((ushort)param_2 == 6) {
      bVar2 = F_006f5930(this,uVar3,6,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_03,bVar2);
    }
    else {
      if ((ushort)param_2 != 3) goto LAB_006fc324;
      bVar2 = F_006f59d0(this,uVar3,3,param_3,param_4);
      uVar3 = CONCAT31(extraout_var_04,bVar2);
    }
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
  }
LAB_006fc324: ;
  uVar3 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    FVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,FVar1);
    if (((byte)FVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)FVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::WarpEventHandler::vf1 */
uint F_006fc350(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*(int *)(this + 0x238) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x234);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x238));
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0x238);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)(this + 0x238) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xed);
  *(uint *)(this + 0x234) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0x6f5bc0));
  }
  *(undefined4 * PTR32 *)(this + 0x238) = puVar3;
  F_00cb4540(puVar3,0,*(undefined4 *)(this + 8));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x234) + 0x48))))
                    (*(int * PTR32 *)(this + 0x234),*(undefined4 *)(this + 0x238));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar2;
}

/* ref: Client::Game::Event::StoryEventHandler::vf1 */
uint F_006fc410(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x122);
  *(uint *)(this + 0x22c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9270));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6f6130));
  }
  *(undefined4 * PTR32 *)(this + 0x230) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)(this + 0x1d4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x22c) + 0x48))))
                    (*(int * PTR32 *)(this + 0x22c),*(undefined4 *)(this + 0x230));
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006fc4a0 */
uint F_006fc4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1a4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006f6350(this,param_1 & 0xffff | 0x1b0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006fc4d0 */
uint F_006fc4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  undefined1 * in_ecx;
  uint * puVar10;
  uint * puVar11;
  
  (*(uint *)(gen_frame + 0x298)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  puVar2 = *(uint * PTR32 *)(*param_1 + 4);
  iVar9 = *(int *)((int)this + 0xfc);
  if (*(int *)((int)this + 0xf8) != iVar9) {
    uVar6 = F_007413b0(iVar9,iVar9,*(int *)((int)this + 0xf8),this);
    F_0074c430(uVar6,*(undefined4 *)((int)this + 0xfc),(int)this + 0x104,this);
    *(uint *)((int)this + 0xfc) = uVar6;
  }
  iVar9 = *(int *)((int)this + 0x11c);
  if (iVar9 != *(int *)((int)this + 0x120)) {
    F_00c46e20(iVar9,*(int *)((int)this + 0x120),0);
    *(int *)((int)this + 0x120) = iVar9;
  }
  iVar9 = *(int *)((int)this + 300);
  if (iVar9 != *(int *)((int)this + 0x130)) {
    F_00c46e20(iVar9,*(int *)((int)this + 0x130),0);
    *(int *)((int)this + 0x130) = iVar9;
  }
  if (puVar2 != (uint *)0x0) {
    (*(char *)(gen_frame + 0x17)) = '\0';
    (*(uint *)(gen_frame + 0x8)) = 0;
    puVar11 = puVar2 + 6;
    do {
      if (puVar11[-2] != 0) {
        (*(uint *)(gen_frame + 0x10)) = 1;
        in_ecx = ((undefined1 *)(gen_frame + 0x1e0));
        do {
          F_0042b630(in_ecx);
          in_ecx = in_ecx + 0x5c;
          uVar6 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar6;
        } while (-1 < (int)uVar6);
        (*(uint *)(gen_frame + 0x1cc)) = puVar11[-1];
        uVar6 = puVar11[1];
        (*(uint *)(gen_frame + 0x1d0)) = *puVar11;
        uVar3 = puVar11[-3];
        ((undefined1 *)(gen_frame + 0xe4))[0] = (undefined1)(*(uint *)(gen_frame + 0x8));
        (*(uint *)(gen_frame + 0x1d4)) = uVar6;
        (*(uint *)(gen_frame + 0x1c4)) = uVar3;
        (*(uint *)(gen_frame + 0x1c0)) = puVar11[-4];
        (*(uint *)(gen_frame + 0x1bc)) = puVar11[-5];
        (*(uint *)(gen_frame + 0x1c8)) = puVar11[-2];
        F_00757610((undefined *)((int)this + 0xf8),((undefined1 *)(gen_frame + 0xe4)));
        if ((char)puVar2[0x461] != '\0') {
          puVar10 = *(uint * PTR32 *)((int)this + 0x120);
          puVar7 = *(uint * PTR32 *)((int)this + 0x11c);
          if (puVar7 != puVar10) {
            do {
              if (*puVar7 == (*(uint *)(gen_frame + 0x1cc))) break;
              puVar7 = puVar7 + 1;
            } while (puVar7 != puVar10);
            if (puVar7 != puVar10) goto LAB_006fc6c8;
          }
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x1cc));
          F_00750f70((undefined *)((int)this + 0x11c),&(*(uint *)(gen_frame + 0x10)));
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x1d0));
          F_00750f70((undefined *)((int)this + 300),&(*(uint *)(gen_frame + 0x10)));
        }
LAB_006fc6c8: ;
        if (((*(char *)(gen_frame + 0x17)) == '\0') &&
           (((((*(uint *)(gen_frame + 0x1d0)) == 0x165c || ((*(uint *)(gen_frame + 0x1d0)) == 0x165d)) || ((*(uint *)(gen_frame + 0x1d0)) == 0x165e)) ||
            ((*(uint *)(gen_frame + 0x1d0)) == 0x165f)))) {
          (*(char *)(gen_frame + 0x17)) = '\x01';
        }
        iVar9 = 1;
        puVar10 = &(*(uint *)(gen_frame + 0x298));
        do {
          puVar10 = puVar10 + -0x17;
          F_0042c880(puVar10);
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      puVar11 = puVar11 + 7;
    } while ((*(uint *)(gen_frame + 0x8)) < 0xa0);
    if ((char)puVar2[0x461] == '\0') {
      *(undefined4 *)((int)this + 0x198) = 2;
    }
    else {
      *(uint *)((int)this + 0x198) = (uint)((*(char *)(gen_frame + 0x17)) != '\0');
    }
    F_0042e430((undefined *)((int)this + 0x144),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x13c);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  iVar9 = *(int *)((int)this + 0xf8);
  iVar8 = 0;
  if (iVar9 != *(int *)((int)this + 0xfc)) {
    iVar5 = *(int *)((int)this + 0xfc);
    do {
      ((undefined4 *)(gen_frame + 0x18))[(int)(iVar8)] = *(undefined4 *)(iVar9 + 0xe4);
      iVar9 = iVar9 + 0x1b0;
      iVar8 = iVar8 + 1;
    } while (iVar9 != iVar5);
    if (iVar8 != 0) {
      *(undefined1 *)((int)this + 0x108) = 0;
      uVar6 = F_006cd8f0(this,((undefined4 *)(gen_frame + 0x18)),iVar8,0);
      goto LAB_006fc812;
    }
  }
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  uVar6 = CONCAT31((int3)((uint)iVar9 >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
    return uVar6;
  }
LAB_006fc812: ;
  F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
  return uVar6;
}

/* ref: Client::Game::Event::LeveDirector::vf157 */
uint F_006fc830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  uVar4 = F_00ab32a0(puVar1[0xe]);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(uVar4 + 4);
  F_006f7250(this,(*puVar1 & 0xffffff) + (int)puVar1);
  uVar4 = F_00ab3390((uint)*(byte *)((int)puVar1 + 0x56));
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(uVar4 + 4);
  uVar4 = F_00ab3390((uint)*(byte *)((int)puVar1 + 0x57));
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(uVar4 + 4);
  *(uint *)(this + 0x31c) = puVar1[0x11];
  *(short *)(this + 800) = (short)puVar1[0x14];
  *(uint *)(this + 0x338) = (uint)(byte)puVar1[0x15];
  *(undefined4 *)(this + 0x33c) = 0;
  *(uint *)(this + 0x340) = (uint)(byte)puVar1[0x15];
  *(undefined4 *)(this + 0x344) = 0;
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 == (undefined *)0x0) {
    uVar5 = F_0046ff40();
    uVar4 = (uint)(uVar5 / 1000);
  }
  else {
    uVar4 = F_00975680(this_00);
  }
  uVar3 = (uint)(byte)puVar1[0x15] * 0x3c;
  *(uint *)(this + 0x2e8) = uVar4;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(uint *)(this + 0x2f0) = uVar3 + uVar4;
  *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar3,uVar4);
  *(uint *)(this + 0x324) = (uint)*(byte *)((int)puVar1 + 0x56);
  *(uint *)(this + 0x328) = (uint)*(byte *)((int)puVar1 + 0x57);
  uVar4 = F_00ab6ad0((uint)*(ushort *)((int)puVar1 + 0x52));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x330);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x330) = 0;
  }
  *(undefined4 *)(this + 0x32c) = 0;
  return uVar4;
}

/* ref: FUN_006fc970 */
uint F_006fc970(unsigned int gen_a0)
{
  GEN_ENTER(0x6fc970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  if ((*(short *)((int)this + 0x54) != -1) && (*(int *)((int)this + 0x60) == 0)) {
    uVar2 = F_00a03710(*(undefined * PTR32 *)((int)this + 0x1d0));
    if (uVar2 != 1) {
      bVar1 = F_00a02270(uVar2);
      if (bVar1 != 0) {
        *(uint *)((int)this + 0x60) = uVar2;
      }
      uVar2 = F_006f4000(this);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf157 */
uint F_006fc9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_006d2b30(this,*((undefined4 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x48))));
  uVar1 = F_006fc830((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006fc9f0 */
uint F_006fc9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fc9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar4 = (undefined4 *)((int)this + 900);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  *(undefined4 *)((int)this + 0x348) = 0;
  uVar1 = F_006f6b40(this,(int)this + 900);
  return uVar1;
}

/* ref: Client::Game::Event::DirectorModule::vf1 */
uint F_006fca50(unsigned int gen_a0)
{
  GEN_ENTER(0x6fca50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f6d40(this,0);
  return uVar1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf56 */
uint F_006fca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fca60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0xfffffffe) {
    if (*(int *)(this + 0x60) == 0) {
      uVar4 = 0xffffffff;
      goto LAB_006fcb0d;
    }
  }
  else {
    if (param_2 != 1) {
      uVar3 = F_006f9c10((undefined *)this,param_1,param_2);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar3;
    }
    if (((-1 < (int)param_1) && (param_1 < *(uint *)(this + 0x22c))) && (param_1 < 0x10)) {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + param_1 * 0x10 + 0x234);
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((this + (param_1 + 0x23) * 0x10)));
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + param_1 * 0x10 + 0x238);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_1 * 0x10 + 0x23c);
      uVar3 = F_006f99e0(this,&(*(undefined4 *)(gen_frame + 0x8)),4);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar3;
    }
    uVar4 = 0;
LAB_006fcb0d: ;
    uVar2 = F_00a038b0(*(undefined * PTR32 *)(this + 0x1d0),uVar4);
    uVar3 = 1;
    if (uVar2 == 1) goto LAB_006fcb39;
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)(this + 0x60) = uVar2;
    }
  }
  uVar3 = F_006f4000(this);
LAB_006fcb39: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf152 */
uint F_006fcb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6fcb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 QVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined4 * puVar4;
  
  if (((byte)this[0x1c] & 1) == 0) {
LAB_006fcb83: ;
    if ((this[0x318] != (undefined1)0x0) &&
       (piVar2 = *(int * PTR32 *)(this + 0x4b8), piVar2 != (int *)0x0)) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if ((char)in_EAX != '\0') {
        F_006f7380(this);
        uVar3 = F_00a51200(0x4c,0,0,0,0);
        this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
        QVar1 = this[0x1c];
        in_EAX = CONCAT31((int3)(uVar3 >> 8),QVar1);
        if (((byte)QVar1 & 1) == 0) {
          this[0x1c] = (undefined1)((byte)QVar1 | 1);
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))
                            (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar3;
        }
      }
    }
  }
  else {
    puVar4 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar4 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        in_EAX = ((code *)*(gen_code32 *)(*(int *)*puVar4 + 8))((int *)*puVar4);
        if ((char)in_EAX == '\0') goto LAB_006fcb83;
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 * PTR32 *)(this + 0xec));
    }
  }
  return in_EAX;
}

/* ref: FUN_006fcbe0 */
uint F_006fcbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fcbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  F_0042e430((undefined *)((int)this + 0x3bc),(*puVar1 & 0xffffff) + (int)puVar1);
  F_0042e430((undefined *)((int)this + 0x410),(int)puVar1 + (puVar1[0x2d5] & 0xffffff) + 0xb54);
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar4 = F_0042a990((int)this + 0x410);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar4,uVar3);
  F_006ebda0(((undefined1 *)(gen_frame + 0x4)),(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x3b8) + 0x328))),(int)this + 0x464,
               (int)this + 0x118);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x314);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x314) = 0;
  }
  *(undefined4 *)((int)this + 0x310) = 0;
  if (*(int *)((int)this + 0x4bc) != 0) {
    uVar4 = F_006f72c0(this,*(int *)((int)this + 0x4bc));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar4;
  }
  uVar4 = F_006ebec0(this);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_006fccf0 */
byte F_006fccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fccf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  
  puVar8 = REFG(undefined4 * PTR32, 0x1379694);
  piVar4 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (REFG(undefined4 * PTR32, 0x1379694) != (undefined4 *)0x0) {
    if (param_1 == 4) {
      F_006fb230(piVar4);
      return 1;
    }
    bVar2 = F_006bec90(REFG(undefined4 * PTR32, 0x1379694),param_2);
    if (bVar2 != 0) {
      if ((param_1 != 0) && (param_1 != 1)) {
        if ((param_1 != 2) && (param_1 != 3)) {
          return 1;
        }
        F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
        F_006fb300(piVar4,param_1,param_2,param_3);
        return 1;
      }
      bVar2 = F_006bed40();
      if (bVar2 != 0) {
        uVar3 = F_006c5190(this);
        if ((char)uVar3 == '\0') {
          F_00a4a760(&REFG(undefined, 0x14a7360),0x18,1);
          uVar3 = F_00a51200(0x41,param_1,param_2,param_3,0);
          if ((char)uVar3 != '\0') {
            uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x210))(piVar4,puVar8,puVar8,6,0);
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x1bc))(piVar4,puVar8,puVar8,6,0);
            iVar1 = piVar4[2];
            uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar8)(puVar8);
            *(int *)((int)this + 0x244) = (int)((ulonglong)uVar6 >> 0x20);
            *(int *)((int)this + 0x238) = iVar1;
            *(int *)((int)this + 0x240) = (int)uVar6;
            *(undefined1 *)((int)this + 0x248) = 6;
            *(undefined4 *)((int)this + 0x24c) = 0;
            *(char *)((int)this + 0x250) = (char)uVar5;
            *(uint *)((int)this + 0x254) = uVar3;
          }
          F_00a6e590();
          return 1;
        }
        piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        if (piVar4 != (int *)0x0) {
          uVar9 = 0;
          uVar7 = 0x47c;
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
          F_0046ac40(this_00,uVar7,puVar8,uVar9);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006fce70 */
byte F_006fce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fce70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 8))) == 0xa0001) &&
       (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0)) {
      bVar1 = F_006fb440(*(undefined * PTR32 *)((int)this + 0x4c),param_1);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006fced0 */
byte F_006fced0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fced0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 8)));
    if (uVar2 != 0) {
      if ((uVar2 & 0x80000000) == 0x80000000) {
        this_00 = (undefined *)F_00748af0((undefined *)((int)this + 0x5c),uVar2);
      }
      else {
        this_00 = (undefined *)F_006dda70(this,uVar2);
      }
      if (this_00 != (undefined *)0x0) {
        if (*(short *)((int)this_00 + 10) == 3) {
          bVar1 = F_006faee0(this_00,param_1);
          return bVar1;
        }
        if (*(short *)((int)this_00 + 10) == 10) {
          bVar1 = F_006fb530(this_00,param_1);
          return bVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006fcf60 */
uint F_006fcf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6fcf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined8 uVar4;
  
  if ((*(int *)((int)this + 0x288) != 0) && (*(int *)((int)this + 0x288) == param_2)) {
    if (param_1 == (undefined4 *)0x0) {
      uVar4 = 0xe0000000;
    }
    else {
      uVar4 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
    }
    *(undefined4 *)((int)this + 700) = param_4;
    *(undefined8 *)((int)this + 0x2b0) = uVar4;
    *(undefined2 *)((int)this + 0x2b8) = (undefined2)param_3;
    uVar1 = 0;
    cVar2 = '\0';
    if ((char)param_6 != '\0') {
      puVar3 = (undefined4 *)((int)this + 0x2c0);
      do {
        *puVar3 = *(undefined4 *)(param_5 + uVar1 * 4);
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
        cVar2 = (char)param_6;
      } while (uVar1 < (param_6 & 0xff));
    }
    *(char *)((int)this + 0x6bc) = cVar2;
    return uVar1;
  }
  uVar1 = F_006f8dd0(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_006fd010 */
uint F_006fd010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fd010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (((char)param_2 == '\n') && (param_4 == 0x3c)) {
    uVar3 = F_005f3270(0x31,param_3,0);
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    if (uVar3 != 0) {
      F_0073d9b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x6fc),&(*(undefined4 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x14)));
      F_00745550((undefined *)((int)this + 0x6fc),&(*(uint *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
    }
  }
  uVar3 = *(uint *)((int)this + 0x220);
  piVar1 = *(int * PTR32 *)((int)this + 0x214);
  uVar4 = *(int *)((int)this + 0x224) + uVar3;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  do {
    if (uVar3 == uVar4) {
LAB_006fd132: ;
      uVar4 = *(uint *)((int)this + 0x288);
      if (((uVar4 != 0) && (uVar4 == param_1)) &&
         ((*(char *)((int)this + 0x298) == (char)param_2 &&
          (uVar4 = param_3, *(uint *)((int)this + 0x29c) == param_3)))) {
        uVar3 = F_0072df00((undefined *)((int)this + 0x280));
        return uVar3;
      }
      if (param_1 != 0) {
        if ((param_1 & 0x80000000) == 0x80000000) {
          uVar5 = F_00748af0((undefined *)((int)this + 0x5c),param_1);
        }
        else {
          uVar5 = F_006dda70(this,param_1);
        }
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        uVar4 = 0;
        if (uVar5 != 0) {
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          uVar4 = uVar3;
          if (*(uint *)(iVar6 + 8) <= uVar3) {
            uVar4 = uVar3 - *(uint *)(iVar6 + 8);
          }
          *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4))) + 0x28))) = param_4;
          uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x220);
          iVar6 = 0;
          if (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x214) != (int *)0x0) {
            iVar6 = **(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x214);
          }
          if (*(uint *)(iVar6 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar6 + 8);
          }
          uVar4 = *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          if (*(uint *)(iVar6 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar6 + 8);
          }
          if (uVar4 == *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4)))) {
            if (((*(byte *)(uVar4 + 0x20) & 2) == 0) && (param_4 - 10U < 0x13)) {
              bVar2 = F_006e3100((*(undefined * PTR32 *)(gen_frame + 0x18)),0x33,1);
              if (bVar2 != 0) {
                return CONCAT31(extraout_var,bVar2);
              }
            }
            uVar4 = F_006f8f10(this_00);
          }
        }
      }
      return uVar4;
    }
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    uVar5 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar5 = uVar3 - *(uint *)(iVar6 + 8);
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4))) + 0x28))) == 0) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar5 = uVar3;
      if (*(uint *)(iVar6 + 8) <= uVar3) {
        uVar5 = uVar3 - *(uint *)(iVar6 + 8);
      }
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4)));
      if (((*(uint *)(iVar6 + 8) != param_1) || (*(char *)(iVar6 + 0x18) != (char)param_2)) ||
         (*(uint *)(iVar6 + 0x1c) != param_3)) {
        uVar3 = uVar4;
      }
      goto LAB_006fd132;
    }
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    uVar5 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar5 = uVar3 - *(uint *)(iVar6 + 8);
    }
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4)));
    if (((*(uint *)(iVar6 + 8) == param_1) && (*(char *)(iVar6 + 0x18) == (char)param_2)) &&
       (*(uint *)(iVar6 + 0x1c) == param_3)) goto LAB_006fd132;
    uVar3 = uVar3 + 1;
  } while( true );
}

/* ref: FUN_006fd230 */
uint F_006fd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  *(undefined4 *)((int)this + 4) = param_1;
  F_00509590((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x65))) = 1;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  return (uint)this;
}

/* ref: FUN_006fd2b0 */
uint F_006fd2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd230(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004296a0(0x28,0,0x322);
  *(uint *)((int)this + 0x30) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21))) = 1;
  return (uint)this;
}

/* ref: FUN_006fd310 */
uint F_006fd310(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),0x28,0x322);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar1 = F_00757fb0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf28 */
uint F_006fd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fd360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 0x60);
  if (((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x288))) == *(int *)(this + 8)) &&
      (*((short *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x2b8))) != -1)) || (bVar2 = true, iVar1 == 0x34)) {
    bVar2 = false;
  }
  if (((byte)this[0x4c] & 2) != 0) {
    uVar3 = F_006fd010(REFG(void * PTR32, 0x1488344),*(int *)(this + 8),(uint)(byte)this[0x44],
                         *(undefined4 *)(this + 0x48),1);
    goto LAB_006fd434;
  }
  if (iVar1 == 0x34) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x230))(this);
    goto LAB_006fd434;
  }
  if (iVar1 == 0x33) {
    uVar3 = F_006f8f10(REFG(void * PTR32, 0x1488344));
    goto LAB_006fd434;
  }
  if (iVar1 == 0x36) {
    uVar4 = 0x520;
LAB_006fd3fb: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,uVar4,0,0);
  }
  else {
    if (iVar1 == 0x39) {
      uVar4 = 0x526;
      goto LAB_006fd3fb;
    }
    if (iVar1 == 0x3a) {
      uVar4 = 0x527;
      goto LAB_006fd3fb;
    }
  }
  uVar3 = (uint)*(ushort *)(this + 0x54);
  if (*(ushort *)(this + 0x54) != 0xffff) {
    uVar3 = F_00a50640(*(undefined4 *)(this + 8),uVar3,*(undefined4 *)(this + 0x60),param_1,
                         param_2);
  }
LAB_006fd434: ;
  if (bVar2) {
    uVar3 = 0;
    this[0x5c] = (undefined1)((byte)this[0x5c] & 0xf8);
    *(undefined2 *)(this + 0x54) = 0xffff;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  return uVar3;
}

/* ref: FUN_006fd460 */
uint F_006fd460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10ba9b4));
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(REFG(int, 0x1488344) + 0x1e4);
  uVar1 = *(undefined4 *)(REFG(int, 0x1488344) + 0x1e4);
  F_00509590((undefined *)((int)this + 0xfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  *(undefined4 *)((int)this + 0x100) = uVar1;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  uVar2 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x10c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10c) + 4))) = *(int *)((int)this + 0x10c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10c) + 8))) = *(int *)((int)this + 0x10c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 0x65))) = 1;
  F_0042b630((int)this + 0x118);
  F_0042b630((int)this + 0x16c);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  uVar2 = F_004296a0(0xc0,0,800);
  *(uint *)((int)this + 0x1c4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 8))) = *(int *)((int)this + 0x1c4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xbc))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0xbd))) = 1;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined * PTR32 *)((int)this + 0x104) = this;
  return (uint)this;
}

/* ref: FUN_006fd580 */
uint F_006fd580(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10ba9b4));
  F_006bd340(this);
  F_00a036e0(*(undefined * PTR32 *)((int)this + 0xf8));
  F_00752540((undefined *)((int)this + 0x1c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c4),
               *(undefined4 * PTR32 *)((int)this + 0x1c4));
  F_00429760(*(undefined4 *)((int)this + 0x1c4),0xc0,800);
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x118));
  F_007581c0((undefined *)((int)this + 0xfc));
  uVar1 = F_006df660(this);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf24 */
uint F_006fd600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fd600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 LVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar5 = 0;
  uVar4 = 0;
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x5d];
    if (iVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
      if (uVar3 == 1) goto LAB_006fd650;
    }
    iVar5 = 0;
  }
LAB_006fd650: ;
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x174);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"OnScene%05u",param_2 & 0xffff);
  bVar2 = F_006f9920(this,((undefined1 *)(gen_frame + 0x8)),iVar5,uVar4,param_3,param_4 & 0xff);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && (uVar3 = 0xffff, *(short *)(this + 0x54) != -1)) {
    LVar1 = this[0x5c];
    uVar3 = CONCAT31(0xff,LVar1);
    if (((byte)LVar1 & 4) == 0) {
      this[0x5c] = (undefined1)((byte)LVar1 | 4);
      uVar3 = F_006f15b0(*(undefined * PTR32 *)(this + 4),0,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_006fd6e0 */
uint F_006fd6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fd6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10babfc));
  *(char *)((int)this + 0x1d4) = (char)param_1;
  F_0042b630((int)this + 0x1d8);
  F_0042b630((int)this + 0x22c);
  F_0042b630((int)this + 0x280);
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  *(uint *)((int)this + 0x2d4) = uVar1;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined1 *)((int)this + 0x318) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323708));
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x35))) == '\0') {
    uVar2 = 0xaa2;
  }
  else {
    uVar2 = 0xa9a;
  }
  F_00ab0230(uVar2,(int)this + 0x1d8);
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  if (uVar1 == 0) {
    F_0042aca0((int)this + 0x22c);
  }
  else {
    F_00ab9240(0x18fb2,(uint)*(ushort *)(uVar1 + 0x24),(int)this + 0x22c);
  }
  uVar1 = F_00ab2690((uint)*(byte *)((int)this + 0x1d4));
  if (uVar1 != 0) {
    F_00ab9240(0x18fb3,(uint)*(ushort *)(uVar1 + 0x26),(int)this + 0x280);
    F_006f4440(this);
    return (uint)this;
  }
  F_0042aca0((int)this + 0x280);
  F_006f4440(this);
  return (uint)this;
}

/* ref: FUN_006fd840 */
uint F_006fd840(unsigned int gen_a0)
{
  GEN_ENTER(0x6fd840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10babfc));
  iVar1 = *(int *)((int)this + 0x308);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x310) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  iVar1 = *(int *)((int)this + 0x2f8);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x300) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  iVar1 = *(int *)((int)this + 0x2e8);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x2f0) - iVar1,0x323);
  }
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  F_004876d0((undefined *)((int)this + 0x2d8));
  F_0042c880((undefined *)((int)this + 0x280));
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: FUN_006fd920 */
uint F_006fd920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fd920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  if (*(int *)((int)this + 0x574) != *(int *)((int)this + 0x578)) {
    *(int *)((int)this + 0x578) = *(int *)((int)this + 0x574);
  }
  F_0074e1b0((undefined *)((int)this + 0x584),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 4))) = *(int *)((int)this + 0x588);
  *(undefined4 *)*(undefined4 *)((int)this + 0x588) = *(undefined4 *)((int)this + 0x588);
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 8))) = *(int *)((int)this + 0x588);
  *(undefined4 *)((int)this + 0x58c) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x20)) = 0;
    do {
      uVar2 = *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *((int *)GEN_TOP((*(int *)((int)this + 0x570) + 0xc))))));
      uVar5 = (*(uint *)(gen_frame + 0x18));
      if ((uVar2 != 0) && (iVar3 = *(int *)(param_1 + (*(uint *)(gen_frame + 0x18)) * 4), iVar3 != 0)) {
        iVar3 = *(int *)(iVar3 + 4);
        iVar6 = (int)*(short *)(iVar3 + 0x4a);
        (*(int *)(gen_frame + 0x14)) = iVar6;
        if ((*(char *)((int)this + 0x265) == '\0') &&
           ((*(char *)((int)this + 0x266) == '\0' && (*(char *)((int)this + 0x267) == '\0')))) {
          if ((iVar6 == 1) || (iVar6 == 2)) {
LAB_006fda10: ;
            uVar1 = *(undefined1 *)(iVar3 + 0x28);
            (*(ushort *)(gen_frame + 0x1c)) = uVar2;
            (*(undefined1 *)(gen_frame + 0x1e)) = uVar1;
            F_00751770((undefined *)((int)this + 0x574),&(*(ushort *)(gen_frame + 0x1c)));
            F_0071db50(((undefined1 *)(gen_frame + 0x118)));
            F_006d8740((uint)uVar2,(*(int *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x118)));
            ((ushort *)(gen_frame + 0x24))[0] = uVar2;
            F_00720450(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x118)));
            uVar7 = 0;
            uVar5 = F_0074bd60((undefined *)((int)this + 0x584),((ushort *)(gen_frame + 0x24)));
            F_007504b0((undefined *)((int)this + 0x584),((undefined1 *)(gen_frame + 0xc)),uVar5,uVar7);
            F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_0042c880(((undefined1 *)(gen_frame + 0x60)));
            F_0042c880(((undefined1 *)(gen_frame + 0x1b4)));
            F_0042c880(((undefined1 *)(gen_frame + 0x150)));
            uVar5 = (*(uint *)(gen_frame + 0x18));
          }
        }
        else if (iVar6 == 3) goto LAB_006fda10;
      }
      (*(uint *)(gen_frame + 0x18)) = uVar5 + 1;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x10;
    } while (uVar5 + 1 < param_2);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x570);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar5 = F_006fd600(this,*(undefined4 *)((int)this + 0x58),(uint)*(ushort *)((int)this + 0x54),
                     &REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar5;
}

/* ref: FUN_006fdb50 */
uint F_006fdb50(unsigned int gen_a0)
{
  GEN_ENTER(0x6fdb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  ushort * puVar2;
  uint uVar3;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
  *(uint *)((int)this + 0x56c) = uVar1;
  uVar1 = F_00a4ffd0();
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,0x10,0);
    this_00[5] = 0x10;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fd920));
  }
  uVar3 = 0;
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  if (this_00[5] != 0) {
    puVar2 = (ushort *)(uVar1 + 0x1688);
    do {
      if ((char)puVar2[1] == -1) {
        uVar1 = (uint)*puVar2;
      }
      else {
        uVar1 = 0;
      }
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),uVar3,uVar1);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar3 < *((uint *)GEN_TOP((*(int *)((int)this + 0x570) + 0x14))));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006fdc10 */
uint F_006fdc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b64bc),REFG(undefined * PTR32, 0x1323718),param_1);
  F_0042ccf0((undefined *)((int)this + 0x118),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf24 */
uint F_006fdc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fdc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006fdcc0 */
uint F_006fdcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb08c));
  *(short *)((int)this + 0x1d4) = (short)param_1;
  F_0042b630((int)this + 0x1d8);
  F_0042b630((int)this + 0x22c);
  F_0042b630((int)this + 0x280);
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x2e0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x2e0) + 4))) = *(int *)((int)this + 0x2e0);
  *((int *)GEN_TOP((*(int *)((int)this + 0x2e0) + 8))) = *(int *)((int)this + 0x2e0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2e0) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2e0) + 0x65))) = 1;
  *(byte *)((int)this + 0x2f0) = *(byte *)((int)this + 0x2f0) & 0xf0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  return (uint)this;
}

/* ref: FUN_006fdd70 */
uint F_006fdd70(unsigned int gen_a0)
{
  GEN_ENTER(0x6fdd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb08c));
  if (*(int *)((int)this + 0x2d8) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x2d4);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x2d8));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2d8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x2d8) = 0;
    }
  }
  F_007528f0((undefined *)((int)this + 0x2dc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x2e0),
               *(undefined4 * PTR32 *)((int)this + 0x2e0));
  F_00429760(*(undefined4 *)((int)this + 0x2e0),0x68,800);
  F_0042c880((undefined *)((int)this + 0x280));
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf6 */
uint F_006fde20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fde20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  F_006db1d0((undefined *)this,param_1);
  uVar1 = F_006dbc50(this_00,param_1);
  if (((byte)this[0x4c] & 2) != 0) {
    uVar1 = F_006fcf60(REFG(void * PTR32, 0x1488344),*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 8),0,0,0,0
                        );
  }
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf18 */
uint F_006fde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fde60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006db430((undefined *)this,param_1);
  uVar1 = F_006dbc50(this,REFG(undefined4, 0x1379694));
  if (((byte)this[0x4c] & 2) != 0) {
    uVar1 = F_006fcf60(REFG(void * PTR32, 0x1488344),*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 8),0,1,0,0
                        );
  }
  return uVar1;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf6 */
uint F_006fdeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdeb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  
  F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  iVar2 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1,&(*(int *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(int *)&gen_args[1]) != *(int *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x7e) = 0;
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1,&(*(int *)&gen_args[1]),iVar2);
    if ((*(int *)&gen_args[1]) != *(int *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0xf,1);
  uVar3 = F_006fcf60(REFG(void * PTR32, 0x1488344),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0,0x2001,
                       0,0);
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf24 */
uint F_006fdf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fdf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined1 QVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar3 = (*(int *)&gen_args[1]);
  iVar2 = REFG(int, 0x1488344);
  pcVar5 = *((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
  if (*pcVar5 != '\0') {
    if (((*(int *)&gen_args[1]) != 0) && (*(char *)((*(int *)&gen_args[1]) + 0x8a) == '\a')) {
      F_006d7550((undefined *)(REFG(int, 0x1488344) + 0x100),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
      if ((*(int *)&gen_args[1]) != *(int *)(iVar2 + 0x130)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x83) = 0;
      }
    }
    uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),iVar3,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar4;
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0x3c;
  if (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != -1) {
    QVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x5c];
    pcVar5 = ((char *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar5) >> 8),QVar1)));
    if (((byte)QVar1 & 4) == 0) {
      (*(undefined * PTR32 *)&gen_args[0])[0x5c] = (undefined1)((byte)QVar1 | 4);
      pcVar5 = (char *)F_006f15b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,0);
    }
  }
  return (uint)pcVar5;
}

/* ref: FUN_006fdfe0 */
uint F_006fdfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fdfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0x8001;
  if (*(short *)((int)this + 0x36c) == -0x7fff) {
    uVar1 = F_006fcf60(REFG(void * PTR32, 0x1488344),param_1,*(undefined4 *)((int)this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006fe010 */
uint F_006fe010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined2 *)((int)this + 0x1d4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb2d4));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  F_0042b630((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  F_0071db50((undefined *)((int)this + 0x244));
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  uVar1 = F_004296a0(0xa0,0,0x324);
  *(uint *)((int)this + 0x348) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x348) + 4))) = *(int *)((int)this + 0x348);
  *((int *)GEN_TOP((*(int *)((int)this + 0x348) + 8))) = *(int *)((int)this + 0x348);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x348) + 0x9c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x348) + 0x9d))) = 1;
  *(undefined4 *)((int)this + 0x354) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323730));
  F_007516d0((undefined *)((int)this + 0x334),0x10);
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  return (uint)this;
}

/* ref: FUN_006fe160 */
uint F_006fe160(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb2d4));
  if (*(int *)((int)this + 0x1dc) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1d8);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x1dc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1dc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1dc) = 0;
    }
  }
  if (*(int *)((int)this + 0x1e4) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1e0);
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6,*(int *)((int)this + 0x1e4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1e4) = 0;
    }
  }
  piVar6 = (int *)((int)this + 0x358);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  do {
    if (*piVar6 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x354);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*piVar6);
      }
      puVar2 = (undefined4 *)*piVar6;
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *piVar6 = 0;
      }
    }
    piVar6 = piVar6 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  F_00755030((undefined *)((int)this + 0x344),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x348),
               *(undefined4 * PTR32 *)((int)this + 0x348));
  F_00429760(*(undefined4 *)((int)this + 0x348),0xa0,0x324);
  iVar4 = *(int *)((int)this + 0x334);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x33c) - iVar4 >> 1) * 2,800);
  }
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  F_0042c880((undefined *)((int)this + 0x2e0));
  F_0042c880((undefined *)((int)this + 0x27c));
  F_0042c880((undefined *)((int)this + 0x1e8));
  uVar5 = F_006fd580(this);
  return uVar5;
}

/* ref: FUN_006fe2b0 */
uint F_006fe2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6fe2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1e4);
  *(undefined4 *)((int)this + 0x240) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1e4) = 0;
  }
  uVar2 = F_006fd600(this,*(undefined4 *)((int)this + 0x58),(uint)*(ushort *)((int)this + 0x54),
                     &REFG(undefined4, 0x1488348),(uint)REFG(undefined1, 0x1488342));
  return uVar2;
}

/* ref: FUN_006fe310 */
uint F_006fe310(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * this_00;
  
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0x1d4);
  F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 0x1e0) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x71);
    *(uint *)((int)this + 0x1e0) = uVar1;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fe2b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1e4) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)((*(int *)(gen_frame + 0x4)) + 0x14));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1e0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x1e0),*(undefined4 *)((int)this + 0x1e4));
  return uVar1;
}

/* ref: FUN_006fe3d0 */
uint F_006fe3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[146])REFP(0x10bb51c));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  F_0042b630((int)this + 0x1e0);
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x240) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 4))) = *(int *)((int)this + 0x240);
  *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 8))) = *(int *)((int)this + 0x240);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x240) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x240) + 0x65))) = 1;
  *(undefined1 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  F_0042b630((int)this + 0x264);
  F_0042b630((int)this + 0x2b8);
  F_0042b630((int)this + 0x30c);
  *(undefined2 *)((int)this + 0x36c) = 0;
  *(undefined1 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined1 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x366) = 0;
  *(undefined2 *)((int)this + 0x36a) = 0;
  return (uint)this;
}

/* ref: FUN_006fe4f0 */
uint F_006fe4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[146])REFP(0x10bb51c));
  if (*(int *)((int)this + 0x238) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x234);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x238));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x238);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x238) = 0;
    }
  }
  F_0042c880((undefined *)((int)this + 0x30c));
  F_0042c880((undefined *)((int)this + 0x2b8));
  F_0042c880((undefined *)((int)this + 0x264));
  F_007528f0((undefined *)((int)this + 0x23c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x240),
               *(undefined4 * PTR32 *)((int)this + 0x240));
  F_00429760(*(undefined4 *)((int)this + 0x240),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1e0));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006fe5a0 */
uint F_006fe5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb76c));
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  F_0042b630((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x238) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x238) + 4))) = *(int *)((int)this + 0x238);
  *((int *)GEN_TOP((*(int *)((int)this + 0x238) + 8))) = *(int *)((int)this + 0x238);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x238) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x65))) = 1;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 600) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 600) + 4))) = *(int *)((int)this + 600);
  *((int *)GEN_TOP((*(int *)((int)this + 600) + 8))) = *(int *)((int)this + 600);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 600) + 0x15))) = 1;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323740));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffffd;
  return (uint)this;
}

/* ref: FUN_006fe690 */
uint F_006fe690(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb76c));
  if (*(int *)((int)this + 0x230) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x230));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
  }
  F_00746240((undefined *)((int)this + 0x254),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 600),
               *(undefined4 * PTR32 *)((int)this + 600));
  F_00429760(*(undefined4 *)((int)this + 600),0x18,800);
  F_00752460((undefined *)((int)this + 0x244));
  F_007528f0((undefined *)((int)this + 0x234),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x238),
               *(undefined4 * PTR32 *)((int)this + 0x238));
  F_00429760(*(undefined4 *)((int)this + 0x238),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006fe760 */
uint F_006fe760(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b928c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fc4d0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x13c) = this_00;
  if (*(int *)((int)this + 0x140) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x143);
    *(uint *)((int)this + 0x140) = uVar2;
  }
  uVar2 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x13c),0,*(undefined4 *)((int)this + 8));
  piVar1 = *(int * PTR32 *)((int)this + 0x140);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x13c));
  }
  return uVar2;
}

/* ref: FUN_006fe800 */
uint F_006fe800(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10bb9b4));
  F_00749bf0((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x1c,800);
  F_00744dc0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),0x18,800);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar1 = F_00757fb0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf24 */
uint F_006fe870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fe870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_2 & 0xffff) == 2) {
    F_00ab6b60();
  }
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006fe8b0 */
uint F_006fe8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fe8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb7);
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x6fc9f0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_006fe980 */
uint F_006fe980(unsigned int gen_a0)
{
  GEN_ENTER(0x6fe980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10bb9d4));
  F_00745180((undefined *)((int)this + 0x4c));
  F_00429760(*(undefined4 *)((int)this + 0x4c),8,800);
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00749c90((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x18,800);
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x34) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  uVar2 = F_00757fb0((undefined *)((int)this + 8));
  return uVar2;
}

/* ref: FUN_006fea30 */
uint F_006fea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb9f4));
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  *(undefined2 *)((int)this + 0x1d8) = 0;
  F_0042b630((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x23c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x23c) + 4))) = *(int *)((int)this + 0x23c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x23c) + 8))) = *(int *)((int)this + 0x23c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x23c) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x23c) + 0x65))) = 1;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323770));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8c00;
  return (uint)this;
}

/* ref: FUN_006feae0 */
uint F_006feae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6feae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bb9f4));
  if (*(int *)((int)this + 0x234) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x230);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x234));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x234);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x234) = 0;
    }
  }
  F_007528f0((undefined *)((int)this + 0x238),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x23c),
               *(undefined4 * PTR32 *)((int)this + 0x23c));
  F_00429760(*(undefined4 *)((int)this + 0x23c),0x68,800);
  F_0042c880((undefined *)((int)this + 0x1dc));
  uVar3 = F_006fd580(this);
  return uVar3;
}

/* ref: FUN_006feb70 */
uint F_006feb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6feb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
  *(undefined1 *)((int)this + 0x1d4) = 0;
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323778));
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x400;
  return (uint)this;
}

/* ref: FUN_006febc0 */
uint F_006febc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6febc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042b630((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x22c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x230);
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x1323780));
  F_00ab0230(0x18fed,(int)this + 0x1d8);
  return (uint)this;
}

/* ref: FUN_006fec40 */
uint F_006fec40(unsigned int gen_a0)
{
  GEN_ENTER(0x6fec40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042c880((undefined *)((int)this + 0x1d8));
  uVar1 = F_006fd580(this);
  return uVar1;
}

/* ref: FUN_006fec60 */
uint F_006fec60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fec60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fd460(this,param_1);
  *(int *)((int)this + 0x1d4) = (int)this + 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc0cc));
  *(undefined4 *)((int)this + 0x1d8) = param_2;
  *(undefined2 *)((int)this + 0x1dc) = 0;
  F_0042b630((int)this + 0x1e8);
  F_0042b630((int)this + 0x23c);
  F_0042b630((int)this + 0x290);
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x1de) = 0;
  *(undefined4 *)((int)this + 0x1e2) = 0;
  *(undefined2 *)((int)this + 0x1e6) = 0;
  F_007567c0((undefined4 *)((int)this + 0x2f8),8);
  return (uint)this;
}

/* ref: FUN_006fed10 */
uint F_006fed10(unsigned int gen_a0)
{
  GEN_ENTER(0x6fed10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc0cc));
  if (REFG(void * PTR32, 0x14b119c) == this) {
    F_00a79840(&REFG(void * PTR32, 0x14b119c),0);
  }
  if (REFG(void * PTR32, 0x14b26a8) == this) {
    F_00a84350(&REFG(undefined, 0x14b1258),0);
  }
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) == **(int * PTR32 *)((int)this + 0x1d4))) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b3a7f),REFG(undefined4, 0x108cc50));
    uVar4 = 0x37;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
    pvVar3 = (undefined *)F_00484010(pvVar3,uVar4);
    F_00490f90(pvVar3,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00751db0((undefined *)((int)this + 0x2f8));
  F_0042c880((undefined *)((int)this + 0x290));
  F_0042c880((undefined *)((int)this + 0x23c));
  F_0042c880((undefined *)((int)this + 0x1e8));
  uVar2 = F_006fd580(this);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_006fee00 */
uint F_006fee00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fee00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc344));
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined1 *)((int)this + 0x318) = 0;
  F_00ba0ed0((int)this + 0x31c,this);
  *(undefined4 *)((int)this + 0x3b8) = 0;
  F_0042b630((int)this + 0x3bc);
  F_0042b630((int)this + 0x410);
  F_0042b630((int)this + 0x464);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 0x8004;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  return (uint)this;
}

/* ref: FUN_006feea0 */
uint F_006feea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6feea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[157])REFP(0x10bc344));
  if ((*(int *)((int)this + 0x4b8) != 0) && (*(int *)((int)this + 0x3b8) != 0)) {
    F_006e5450(REFG(void * PTR32, 0x1488344),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3b8) + 800))),0);
  }
  F_00a69720(&REFG(undefined, 0x14ab380));
  F_00ab6b60();
  F_0042c880((undefined *)((int)this + 0x464));
  F_0042c880((undefined *)((int)this + 0x410));
  F_0042c880((undefined *)((int)this + 0x3bc));
  F_00ba0f80((undefined *)((int)this + 0x31c));
  uVar1 = F_006fed10(this);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf24 */
uint F_006fef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6fef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006fd600((undefined *)this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf28 */
uint F_006fef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6fef30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006fd360((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006fef40 */
uint F_006fef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6fef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11);
  *(uint *)((int)this + 0x310) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6fcbe0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x314) = this_00;
  F_00cb4540(this_00,0,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x310) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x310),*(undefined4 *)((int)this + 0x314));
  return uVar1;
}

/* ref: FUN_006fefd0 */
uint F_006fefd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6fefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  if (999999 < (*(uint *)&gen_args[1])) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) - 1000000;
    (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c)));
  uVar5 = F_00745750(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c))),&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
  uVar2 = (*(undefined4 *)&gen_args[6]);
  uVar1 = (*(undefined4 *)&gen_args[5]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0xc));
  if ((*(int *)(gen_frame + 0xc)) != (*(int *)(gen_frame + 0x10))) {
    while (iVar3 = (*(int *)(gen_frame + 0x18)),
          bVar4 = F_006b92d0((undefined *)((*(int *)(gen_frame + 0x18)) + 0x18),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),uVar1,uVar2,
                               (*(undefined4 *)&gen_args[7])), bVar4 == 0) {
      uVar5 = F_00724e40(&(*(int *)(gen_frame + 0x18)));
      if ((*(int *)(gen_frame + 0x18)) == (*(int *)(gen_frame + 0x10))) {
        return uVar5;
      }
    }
    (*(uint *)&gen_args[1]) = (*(undefined4 *)&gen_args[8]);
    F_0073cae0((undefined *)(iVar3 + 0x74),&(*(int *)(gen_frame + 0xc)),&(*(uint *)&gen_args[1]));
    uVar5 = F_007496b0((undefined *)(iVar3 + 0x74),&(*(uint *)&gen_args[1]),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
    if (*(int *)(iVar3 + 0x7c) == 0) {
      uVar5 = F_00759160((*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)&gen_args[1]),iVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_006ff0a0 */
uint F_006ff0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ff0a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)));
  piVar5 = (int *)*piVar3;
  if (piVar5 != piVar3) {
    do {
      F_0073cae0(piVar5 + 0x1d,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)&gen_args[1]));
      piVar3 = (int *)F_007496b0(piVar5 + 0x1d,((undefined1 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
      if (piVar5[0x1f] == 0) {
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x89) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x89) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x89);
            piVar3 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x89);
              piVar4 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x89);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
            while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x89);
              piVar2 = (int *)piVar4[1];
              piVar3 = piVar4;
            }
          }
        }
        piVar3 = (int *)F_00759160(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78c))),((undefined1 *)(gen_frame + 0x14)),piVar5);
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x89) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x89) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x89);
          piVar3 = (int *)*piVar4;
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x89);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x89);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar3 = piVar2, piVar5 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x89);
            piVar2 = (int *)piVar3[1];
            piVar4 = piVar3;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790))));
  }
  return (uint)piVar3;
}

/* ref: Client::Game::Event::EventHandler::vf4 */
uint F_006ff1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  pvVar5 = REFG(void * PTR32, 0x1488344);
  F_006da0a0(REFG(void * PTR32, 0x1488344),this + 0x20);
  F_006da0f0(pvVar5,this + 0x28);
  F_006de8d0(pvVar5,this,0);
  F_006ff0a0(pvVar5,this + 0x30);
  F_006debf0(pvVar5,this);
  (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(this + 0xe8);
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != *(int * PTR32 *)(this + 0xec)) {
    do {
      pvVar5 = REFG(void * PTR32, 0x1488344);
      uVar8 = *(uint *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x30)));
      puVar9 = (undefined4 *)puVar2[1];
      cVar1 = *(char *)((int)puVar9 + 0x15);
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      while (cVar1 == '\0') {
        if ((uint)puVar9[3] < uVar8) {
          puVar6 = (undefined4 *)puVar9[2];
          puVar9 = puVar2;
        }
        else {
          puVar6 = (undefined4 *)*puVar9;
        }
        puVar2 = puVar9;
        puVar9 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x15);
      }
      puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x30)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar2;
      if ((puVar2 == puVar9) || (uVar8 < (uint)puVar2[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
      }
      puVar2 = *ppuVar7;
      if (((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x30)))) &&
          (piVar3 = (int *)puVar2[4], piVar3 != (int *)0x0)) &&
         (uVar8 = ((code *)*(gen_code32 *)(*piVar3 + 0x238))(piVar3,0), uVar8 == 0)) {
        ((code *)*(gen_code32 *)(*(int *)puVar2[4] + 0x10))((int *)puVar2[4]);
        puVar9 = (undefined4 *)puVar2[4];
        if (puVar9 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
          puVar2[4] = 0;
        }
        F_0073d240((undefined *)((int)pvVar5 + 0x2c),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0xc)));
        F_00744dc0((undefined *)((int)pvVar5 + 0x2c),((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      }
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
    } while ((*(int * PTR32 *)(gen_frame + 0x18)) != *(int * PTR32 *)(this + 0xec));
  }
  iVar4 = *(int *)(this + 0xe8);
  if (iVar4 != *(int *)(this + 0xec)) {
    F_00c46e20(iVar4,*(int *)(this + 0xec),0);
    *(int *)(this + 0xec) = iVar4;
  }
  F_0042aca0(this + 0x7c);
  uVar8 = F_006bcd10(this);
  this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfe);
  return uVar8;
}

/* ref: FUN_006ff350 */
uint F_006ff350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6ff350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_006fefd0(REFG(void * PTR32, 0x1488344),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       (int)this + 0x30);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf4 */
uint F_006ff3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  if (**(char * PTR32 *)(this + 0x16c) != '\0') {
    uVar2 = 0;
    uVar1 = F_0042a990(this + 0x16c);
    F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnTerminate",uVar1,uVar2);
  }
  F_006bd340(this);
  uVar1 = F_006ff1d0((undefined *)this);
  return uVar1;
}

/* ref: FUN_006ff3e0 */
uint F_006ff3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined * this;
  
  uVar1 = F_00ab2690(param_1 & 0xffff);
  if (uVar1 != 0) {
    this = (undefined *)F_00406b90(0x31c,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_006fd6e0(this,param_1 & 0xffff | 0x50000);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf4 */
uint F_006ff420(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  uint uVar9;
  undefined4 * puVar10;
  int * piVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this + 0xf8;
  (*(int *)(gen_frame + 0x20)) = 0x10;
  do {
    if ((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) != 0) &&
       (piVar11 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10))), piVar11 != *(int * PTR32 *)(this + 0x10))) {
      do {
        iVar5 = REFG(int, 0x1488344);
        iVar2 = piVar11[3];
        puVar3 = *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30);
        uVar9 = *(uint *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        (*(int *)(gen_frame + 0x14)) = iVar2;
        puVar10 = (undefined4 *)puVar3[1];
        cVar1 = *(char *)((int)puVar10 + 0x15);
        (*(uint *)(gen_frame + 0x10)) = uVar9;
        while (cVar1 == '\0') {
          if ((uint)puVar10[3] < uVar9) {
            puVar7 = (undefined4 *)puVar10[2];
            puVar10 = puVar3;
          }
          else {
            puVar7 = (undefined4 *)*puVar10;
          }
          puVar3 = puVar10;
          puVar10 = puVar7;
          cVar1 = *(char *)((int)puVar7 + 0x15);
        }
        puVar10 = *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
        if ((puVar3 == puVar10) || (uVar9 < (uint)puVar3[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar10;
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        }
        else {
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        }
        puVar3 = *ppuVar8;
        if (((puVar3 != *(undefined4 * PTR32 *)(REFG(int, 0x1488344) + 0x30)) &&
            (piVar4 = (int *)puVar3[4], piVar4 != (int *)0x0)) &&
           (uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x238))(piVar4,iVar2), uVar9 == 0)) {
          ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0x10))((int *)puVar3[4]);
          puVar10 = (undefined4 *)puVar3[4];
          if (puVar10 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
            puVar3[4] = 0;
          }
          F_0073d240((undefined *)(iVar5 + 0x2c),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x10)));
          F_00744dc0((undefined *)(iVar5 + 0x2c),((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        }
        *(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) = 0;
        if (*(char *)((int)piVar11 + 0x11) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x11);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar11[1] + 0x11);
            piVar6 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar1 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar1 = *(char *)(piVar11[1] + 0x11);
              piVar6 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x24));
      } while (piVar11 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x10));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 4;
    iVar2 = (*(int *)(gen_frame + 0x20)) + -1;
    (*(int *)(gen_frame + 0x20)) = iVar2;
  } while (iVar2 != 0);
  uVar9 = F_006ff1d0((undefined *)this);
  return uVar9;
}

/* ref: FUN_006ff590 */
uint F_006ff590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ff590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x268) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar2 = F_006fdb50(this);
  return uVar2;
}

/* ref: FUN_006ff5e0 */
uint F_006ff5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9a);
  *(uint *)((int)this + 0x56c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6ff590));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)((int)this + 600));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006ff670 */
uint F_006ff670(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * this;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this = (undefined4 *)F_00406b90(0x1d4,0,0);
  if (this != (undefined4 *)0x0) {
    uVar1 = param_1 & 0xffff | 0xc0000;
    F_006fd460(this,uVar1);
    *this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
    uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b64bc),REFG(undefined * PTR32, 0x1323718),uVar1);
    F_0042ccf0(this + 0x46,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)this;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_006ff710 */
uint F_006ff710(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x2f4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fdcc0(this,param_1 & 0xffff | 0xb0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf6 */
uint F_006ff740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ff740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))))();
  if ((char)uVar2 == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(this_00,&(*(uint *)&gen_args[1]),REFG(undefined4, 0x1379694));
    uVar2 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)this_00 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x81) = 0;
    }
  }
  if ((((byte)(*(undefined * PTR32 *)&gen_args[0])[0x4c] & 2) != 0) && (*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x36c))) == -0x7fff)) {
    uVar2 = F_006fcf60(REFG(void * PTR32, 0x1488344),uVar1,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0x8001,1,0,0);
  }
  return uVar2;
}

/* ref: Client::Game::Event::QuestEventHandler::vf8 */
uint F_006ff7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ff7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  this[0x44] = (undefined1)0x2;
  *(uint *)(this + 0x48) = param_2 & 0xff;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x224))) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x220)));
    if (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214))) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214)));
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x20));
  }
  this[0x4c] = SUB41(uVar1,0);
  if (((uVar1 & 2) != 0) && (*(short *)(this + 0x36c) == -0x7fff)) {
    uVar1 = F_006fcf60(REFG(void * PTR32, 0x1488344),param_1,*(undefined4 *)(this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf20 */
uint F_006ff940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ff940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  this[0x44] = (undefined1)0x12;
  *(uint *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x224))) == 0) {
    uVar1 = param_2 & 0xffffff00;
  }
  else {
    uVar1 = *((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x220)));
    if (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214))) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214)));
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x20));
  }
  this[0x4c] = SUB41(uVar1,0);
  if (((uVar1 & 2) != 0) && (*(short *)(this + 0x36c) == -0x7fff)) {
    uVar1 = F_006fcf60(REFG(void * PTR32, 0x1488344),param_1,*(undefined4 *)(this + 8),0x8001,1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006ff9d0 */
uint F_006ff9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ff9d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  if ((param_1 & 0xffff | 0xe0000) == 0xe0000) {
    this = (undefined *)F_00406b90(0x398,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_006fe010(this,0xe0000);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006ffa10 */
uint F_006ffa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ffa10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344)));
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x16)) = 0;
  (*(undefined4 *)(gen_frame + 0x1a)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) & 0xffffff00;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_007445f0(this_00,&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1]));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x10));
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x348)))) {
    iVar3 = 0;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 6;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x10)) != 0) {
        F_006fefd0(REFG(void * PTR32, 0x1488344),*(*(int * PTR32 *)(gen_frame + 0x10)),(uint)*(byte *)(iVar3 + 0x31 + (int)piVar1),0,1,
                     &(*(undefined2 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),0,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30);
      }
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
      iVar3 = iVar3 + 1;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    } while (iVar3 < 4);
  }
  F_0073dda0(this_00,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00755030(this_00,&(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_006ffae0 */
uint F_006ffae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x378,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fe3d0(this,param_1 & 0xffff | 0x20000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006ffb10 */
uint F_006ffb10(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x264,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006fe5a0(this,param_1 & 0xffff | 0x1a0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf1 */
uint F_006ffb40(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006fe760(this);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar1;
}

/* ref: FUN_006ffb50 */
uint F_006ffb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this,param_1,(uint)(ushort)param_2);
  *(ushort *)((int)this + 0x310) = (ushort)param_2;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined1 *)((int)this + 0x322) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bc5bc));
  *(undefined2 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  return (uint)this;
}

/* ref: FUN_006ffbe0 */
uint F_006ffbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bc5bc));
  if (*(int *)((int)this + 0x330) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x32c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x330));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x330);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x330) = 0;
    }
  }
  F_00ab6b60();
  F_00a69720(&REFG(undefined, 0x14ab380));
  uVar3 = F_006fed10(this);
  return uVar3;
}

/* ref: FUN_006ffc40 */
uint F_006ffc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined1 *)((int)this + 0x4f8) = 0;
  *(undefined1 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined2 *)((int)this + 0x510) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[160])REFP(0x10bc83c));
  *(undefined4 *)((int)this + 0x4fc) = 2;
  return (uint)this;
}

/* ref: FUN_006ffca0 */
uint F_006ffca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[160])REFP(0x10bc83c));
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar3 = F_006ffbe0(this);
  return uVar3;
}

/* ref: FUN_006ffcf0 */
uint F_006ffcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcac4));
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  return (uint)this;
}

/* ref: FUN_006ffd40 */
uint F_006ffd40(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcac4));
  iVar1 = *(int *)((int)this + 0x3d4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x3dc) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  uVar2 = F_006ffbe0(this);
  return uVar2;
}

/* ref: FUN_006ffda0 */
uint F_006ffda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ffda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  puVar6 = *(undefined4 * PTR32 *)(*param_1 + 4);
  puVar7 = (undefined4 *)((int)this + 0x350);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*(ushort *)((int)this + 0x378) != 0) &&
     (puVar2 = (uint *)F_00ab33c0((uint)*(ushort *)((int)this + 0x378)), puVar2 != (uint *)0x0)) {
    F_0042e430((undefined *)((int)this + 0x23c),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  if ((*(int *)((int)this + 0x370) == 3) &&
     (puVar2 = (uint *)F_00ab33c0(0xf), puVar2 != (uint *)0x0)) {
    F_0042e430((undefined *)((int)this + 0x290),(*puVar2 & 0xffffff) + (int)puVar2);
  }
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x34c);
  if (puVar6 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  uVar1 = *(ushort *)((int)this + 0x1d8);
  *(undefined4 *)((int)this + 0x348) = 0;
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x1684;
  do {
    iVar8 = iVar4;
    if (*(ushort *)(iVar4 + 4) == uVar1) break;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
    iVar8 = 0;
  } while (iVar5 < 0x10);
  uVar3 = F_006d3910((int)this + 0x350,(uint)uVar1,(uint)*(ushort *)(iVar8 + 10));
  uVar3 = F_006fe8b0(this,uVar3);
  return uVar3;
}

/* ref: FUN_006ffe90 */
uint F_006ffe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ffe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006ffb50(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  F_00ba0ed0((int)this + 0x4f0,this);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 4;
  return (uint)this;
}

/* ref: FUN_006ffed0 */
uint F_006ffed0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ffed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
  F_00ba0f80((undefined *)((int)this + 0x4f0));
  uVar1 = F_006ffbe0(this);
  return uVar1;
}

