#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a52340 */
GEN_OWN GEN_NOFRAME uint F_00a52340(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined1 *)(gen_frame + 0x1c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a523d0 */
GEN_OWN GEN_NOFRAME uint F_00a523d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa523d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x1a;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a524a0 */
GEN_OWN GEN_NOFRAME uint F_00a524a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa524a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_1;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x1c;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52560 */
GEN_OWN GEN_NOFRAME uint F_00a52560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x1b;
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52620 */
GEN_OWN GEN_NOFRAME uint F_00a52620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a526e0 */
GEN_OWN GEN_NOFRAME uint F_00a526e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa526e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = param_5;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 7;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x30)) = param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_4;
  (*(undefined4 *)(gen_frame + 0x44)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a527b0 */
GEN_OWN GEN_NOFRAME uint F_00a527b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa527b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52870 */
GEN_OWN GEN_NOFRAME uint F_00a52870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52930 */
GEN_OWN GEN_NOFRAME uint F_00a52930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa52930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a529f0 */
GEN_OWN GEN_NOFRAME uint F_00a529f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa529f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x1e;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52ab0 */
GEN_OWN GEN_NOFRAME uint F_00a52ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa52ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_6;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x1f;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52b80 */
GEN_OWN GEN_NOFRAME uint F_00a52b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa52b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_7;
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x21;
  (*(undefined4 *)(gen_frame + 0x40)) = param_6;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52c50 */
GEN_OWN GEN_NOFRAME uint F_00a52c50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa52c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52d10 */
GEN_OWN GEN_NOFRAME uint F_00a52d10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int * this;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  
  this = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(0x0));
  if (this == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar4 = F_00a9f620(this GEN_EDX_ARG);
  if (bVar4 != 0) {
    *(undefined4 *)&REFG(undefined, 0x14bcf64) = *(undefined4 *)(param_2 + 4);
    fVar14 = *(float *)(param_2 + 4);
    uVar7 = (uint)*param_2;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
    uVar5 = F_00ac3e10(uVar5 GEN_EDX_ARG,uVar7,fVar14);
    return uVar5;
  }
  uVar5 = F_00ab1ed0((uint)*param_2);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  F_00b5ae60(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x22),0);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
  if (*((int *)GEN_TOP((uVar5 + 0x4c))) != 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
    F_00ac99b0(this,*((undefined4 *)GEN_TOP((uVar5 + 0x4c))));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
    if (uVar5 != 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
      F_00ac3da0(uVar5 GEN_EDX_ARG);
    }
  }
  if (*(int *)(param_2 + 6) != -0x20000000) {
    piVar6 = ((int *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(int *)(param_2 + 6))));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
    if ((piVar6 != ((int *)GEN_TOP(0x0))) &&
       (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xb8))))(piVar6 GEN_EDX_ARG), (char)uVar5 != '\0')) {
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x14));
    }
  }
  if ((*(int *)(param_2 + 6) == REFG(int, 0x1379690)) && (*((char *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 0x3a))) == '\x01')) {
    F_0053f190(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,this);
  }
  if ((*param_2 != 0x2dd) && (*param_2 != 0x2de)) {
    cVar1 = *((char *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 0x1c)));
    if (cVar1 == '\x02') {
      uVar5 = (uint)(byte)param_2[1];
      uVar13 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f6;
    }
    else if (cVar1 == '\x05') {
      uVar5 = (uint)(byte)param_2[1];
      uVar13 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f7;
    }
    else {
      if (cVar1 == '\b') goto LAB_00a52f0a;
      uVar5 = (uint)(byte)param_2[1];
      uVar13 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f5;
    }
    F_00a7d4b0(uVar11,this,(*(int * PTR32 *)(gen_frame + 0x1c)),uVar5,uVar13,0,0,0,0,REFG(float, 0x10916ec));
  }
LAB_00a52f0a: ;
  uVar13 = *(undefined4 *)(param_2 + 6);
  fVar14 = *(float *)(param_2 + 4);
  uVar7 = (uint)*param_2;
  uVar15 = 0;
  uVar11 = 0;
  uVar12 = 1;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
  F_00ac3dd0(uVar5 GEN_EDX_ARG,uVar12,uVar7,fVar14,uVar13,uVar11,uVar15);
  F_00aa58e0(this GEN_EDX_ARG,*(undefined4 *)(param_2 + 6));
  F_00aa46b0(this GEN_EDX_ARG,(uint)(byte)param_2[1],*(undefined4 *)(param_2 + 2),param_2 + 0xc,
               *(float *)(param_2 + 8));
  uVar5 = (*(uint *)(gen_frame + 0x18));
  if (*((char *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 0x1c))) == '\v') {
    uVar2 = param_2[0xd];
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP((uint)param_2[0xc]));
    uVar3 = param_2[0xe];
    fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP((uint)uVar2));
    uVar13 = *(undefined4 *)(param_2 + 10);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)param_2[0xc] * fVar8) * fVar9 - fVar10)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP((uint)uVar3));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar2 * fVar8) * fVar9 - fVar10)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar9 * ((float10)uVar3 * fVar8) - fVar10)));
    uVar5 = F_00ac3a60(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar13,&(*(float *)(gen_frame + 0x0)),0);
  }
  return uVar5;
}

/* ref: FUN_00a52fd0 */
GEN_OWN GEN_FRAME uint F_00a52fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa52fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  int * piVar2;
  int * piVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  int iVar7;
  undefined4 * puVar8;
  int * piVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_10;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (1 < *((byte *)GEN_TOP((param_2 + 0xe11)))) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x4e,0,0);
  }
  if (3 < *((byte *)GEN_TOP((param_2 + 0xe11)))) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x5c,0,0);
  }
  bVar1 = *((byte *)GEN_TOP((param_2 + 0xe11)));
  if (REFG(undefined1, 0x1338ad4) == 8) {
    if ((bVar1 < 4) || (7 < bVar1)) goto LAB_00a5306e;
LAB_00a53057: ;
    uVar11 = 0x1d528;
  }
  else {
    if (bVar1 != 8) {
      if ((3 < REFG(undefined1, 0x1338ad4)) || (bVar1 < 4)) goto LAB_00a5306e;
      goto LAB_00a53057;
    }
    uVar11 = 0x1d529;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG,uVar11,1,0,0xffffffff);
LAB_00a5306e: ;
  bVar10 = REFG(undefined1, 0x1338ad4) != *((byte *)GEN_TOP((param_2 + 0xe11)));
  REFG(undefined4, 0x1338ac0) = *((undefined4 *)GEN_TOP((param_2 + 0xe00)));
  REFG(undefined4, 0x1338ac4) = *((undefined4 *)GEN_TOP((param_2 + 0xe04)));
  REFG(undefined4, 0x1338ac8) = *((undefined4 *)GEN_TOP((param_2 + 0xe08)));
  REFG(undefined4, 0x1338acc) = *((undefined4 *)GEN_TOP((param_2 + 0xe0c)));
  REFG(undefined1, 0x1338ad4) = *((undefined1 *)GEN_TOP((param_2 + 0xe11)));
  REFG(undefined4, 0x1338ad0) = (uint)*((byte *)GEN_TOP((param_2 + 0xe10)));
  local_10 = 0;
  if (*((char *)GEN_TOP((param_2 + 0xe11))) != '\0') {
    piVar9 = ((int *)GEN_TOP((param_2 + 0x28)));
    do {
      piVar3 = ((int *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,local_10)));
      if (*piVar9 != *piVar3) {
        bVar10 = true;
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      *piVar3 = *piVar9;
      piVar3[1] = piVar9[1];
      piVar3[2] = piVar9[-2];
      piVar3[3] = piVar9[-1];
      F_00c4d9ef(piVar3 + 4,0x40,piVar9 - 10,0x3f);
      *((undefined1 *)GEN_TOP(((int)piVar3 + 0x51))) = *((undefined1 *)GEN_TOP(((int)piVar9 + 9)));
      *(undefined1 *)(piVar3 + 0x14) = *((undefined1 *)GEN_TOP(((int)piVar9 + 10)));
      *((undefined1 *)GEN_TOP(((int)piVar3 + 0x52))) = *((undefined1 *)GEN_TOP(((int)piVar9 + 0xb)));
      *((char *)GEN_TOP(((int)piVar3 + 0x53))) = (char)piVar9[3];
      *(undefined1 *)(piVar3 + 0x15) = *((undefined1 *)GEN_TOP(((int)piVar9 + 0xd)));
      piVar3[0x16] = piVar9[5];
      *(short *)(piVar3 + 0x18) = (short)piVar9[7];
      *(short *)(piVar3 + 0x19) = (short)piVar9[8];
      piVar3[0x17] = piVar9[6];
      *((undefined2 *)GEN_TOP(((int)piVar3 + 0x62))) = *((undefined2 *)GEN_TOP(((int)piVar9 + 0x1e)));
      *((undefined2 *)GEN_TOP(((int)piVar3 + 0x66))) = *((undefined2 *)GEN_TOP(((int)piVar9 + 0x22)));
      *(undefined1 *)(piVar3 + 0x1a) = *((undefined1 *)GEN_TOP(((int)piVar9 + 0xe)));
      *((char *)GEN_TOP(((int)piVar3 + 0x69))) = (char)piVar9[4];
      *((bool *)GEN_TOP(((int)piVar3 + 0x6a))) = (char)piVar9[2] != '\0';
      *(undefined1 *)(piVar3 + 0x81) = *((undefined1 *)GEN_TOP(((int)piVar9 + 0xf)));
      piVar3[0x82] = piVar9[9];
      piVar3[0x83] = piVar9[10];
      puVar4 = (ushort *)(piVar9 + 0xc);
      piVar3[0x84] = piVar9[0xb];
      iVar7 = 0;
      do {
        F_00b7b840(piVar3 + 0x1b GEN_EDX_ARG,iVar7,(uint)*puVar4,(float)(float10)0,(uint)puVar4[1],0);
        puVar4 = puVar4 + 6;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      iVar7 = 0;
      do {
        F_00b7b8a0(piVar3 + 0x85 GEN_EDX_ARG,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      if ((char)piVar9[3] == '\0') {
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      local_10 = local_10 + 1;
      piVar9 = piVar9 + 0x70;
    } while (local_10 < (int)(uint)*((byte *)GEN_TOP((param_2 + 0xe11))));
  }
  uVar5 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
  if (uVar5 != 0) {
    iVar7 = 0;
    puVar4 = ((ushort *)GEN_TOP((param_2 + 0xe16)));
    do {
      F_00b7b840(uVar5 + 0x214 GEN_EDX_ARG,iVar7,(uint)puVar4[-1],(float)(float10)0,(uint)*puVar4,
                   *(undefined4 *)(puVar4 + 3));
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 6;
    } while (iVar7 < 0x1e);
  }
  piVar9 = &REFG(undefined4, 0x14a9a1c);
  do {
    iVar7 = *piVar9;
    if (iVar7 != 0) {
      bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar7 + 0x74))));
      F_00aa6a30(iVar7 GEN_EDX_ARG,bVar1);
    }
    piVar9 = piVar9 + 1;
  } while ((int)piVar9 < 0x14a9bac);
  if (bVar10) {
    pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006de6b0(pvVar6 GEN_EDX_ARG);
  }
  uVar11 = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x44))))(piVar2 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(F_00435440(uVar5 GEN_EDX_ARG,uVar11)));
  pvVar6 = this;
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar7 = 0, *((char *)GEN_TOP((param_2 + 0xe11))) != '\0')) {
    puVar8 = ((undefined4 *)GEN_TOP((param_2 + 0x20)));
    do {
      F_00455780(this GEN_EDX_ARG,*puVar8,puVar8[1],(uint)*((byte *)GEN_TOP(((int)puVar8 + 0x12))),puVar8 - 8);
      pvVar6 = ((undefined *)GEN_TOP((uint)*((byte *)GEN_TOP((param_2 + 0xe11)))));
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 0x70;
    } while (iVar7 < (int)pvVar6);
  }
  return (uint)pvVar6;
}

/* ref: Global::OnCreateObject */
GEN_OWN GEN_FRAME uint F_00a53340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa53340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int * in_EAX = 0;
  uint uVar6;
  int * this;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar6 = (uint)param_2[1];
    if (uVar6 == 6) {
      F_00ae3230(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),0,0,(uint)*param_2);
      this = ((int *)GEN_TOP(F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2)));
      if (this == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x2c);
      in_EAX = ((int *)GEN_TOP(this[0x6a]));
      in_EAX[2] = *(int *)(param_2 + 0x28);
      in_EAX[3] = iVar2;
    }
    else if (uVar6 == 7) {
      F_00ae3330(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),0,*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x18),(uint)*param_2);
      this = ((int *)GEN_TOP(F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2)));
      if (this == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00a5f570(this GEN_EDX_ARG,param_2[0x26]);
      F_00a5f530(this GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x10));
      this[0x21] = *(int *)(param_2 + 0x14);
      F_00a5f550(this GEN_EDX_ARG,(uint)*(ushort *)(param_2 + 0x24));
      in_EAX = ((int *)GEN_TOP(F_00ae2030(this GEN_EDX_ARG,(uint)*(ushort *)(param_2 + 0x28))));
      if (*(int *)(param_2 + 0x18) == 0) {
        in_EAX = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x4c))))(this GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x1c))));
      }
    }
    else {
      if (uVar6 - 0xb != 0) {
        return uVar6 - 0xb;
      }
      F_00ae39b0(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2);
      in_EAX = ((int *)GEN_TOP(F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2)));
      this = in_EAX;
    }
    if (this != ((int *)GEN_TOP(0x0))) {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x1334840);
      uVar1 = *(ushort *)(param_2 + 0x22);
      fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
      fVar3 = (float10)REFG(double, 0x109cab0);
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
      fVar9 = (float10)*(double *)&REFG(undefined, 0x10a3960);
      fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x40))))
                (this GEN_EDX_ARG,(undefined4)
                      gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x30) * fVar9) * fVar8 -
                                         fVar10)))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x32) * fVar9) * fVar8 - fVar10
                                    )))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x34) * fVar9) * fVar8 - fVar10
                                    )))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x48))))
                (this GEN_EDX_ARG,(undefined4)
                      gen_fl2bits(((float)GEN_TOF((((float10)uVar1 * ((fVar7 * fVar4) / fVar3)) * fVar8 -
                                         fVar5)))));
      F_00a5f450(this GEN_EDX_ARG,*(undefined4 *)(param_2 + 8));
      F_00a5f430(this GEN_EDX_ARG,*(undefined4 *)(param_2 + 0xc));
      *((byte *)GEN_TOP(((int)this + 0x8a))) = param_2[1];
      in_EAX = *(int * PTR32 *)(param_2 + 4);
      this[0x20] = (int)in_EAX;
      if (param_2[1] == 0xb) {
        in_EAX = ((int *)GEN_TOP(F_00ae22b0(this GEN_EDX_ARG,*(float *)(param_2 + 0x1c))));
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a53550 */
GEN_OWN GEN_FRAME uint F_00a53550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa53550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  F_00a7f520(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_2);
  F_00a7f9c0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,param_2);
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
  uVar2 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00781660(this GEN_EDX_ARG,*param_2,param_2[1]);
  }
  return uVar2;
}

/* ref: FUN_00a535a0 */
GEN_OWN GEN_FRAME uint F_00a535a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa535a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = REFG(int, 0x1379694);
  F_00a7e4e0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2);
  F_00a7e510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  if (iVar4 != 0) {
    F_00a7d290(0x231,iVar4,(uint)*param_2,0,0,REFG(float, 0x10916ec));
  }
  F_00a7e5a0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)REFG(undefined2, 0x14ab148));
  iVar4 = 0;
  pbVar3 = param_2 + 8;
  do {
    F_00ac3300(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,iVar4,*(undefined4 *)pbVar3,param_2[1] != 0,0);
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar4 < 10);
  if (param_2[1] != 0) {
    F_00ac3520(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_ARG,2,(uint)*param_2,0);
  }
  iVar4 = 0;
  do {
    uVar2 = F_00a68680(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar4,param_2[iVar4 + 0x30]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (param_2[1] != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xec))))(piVar1 GEN_EDX_ARG,(uint)*param_2);
  }
  if (param_2[2] == 0) {
    uVar2 = F_00a6e4a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  return uVar2;
}

/* ref: FUN_00a536c0 */
GEN_OWN GEN_FRAME uint F_00a536c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa536c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_0045a500(this GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00a536f0 */
GEN_OWN GEN_FRAME uint F_00a536f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa536f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1,0);
  }
  if (REFG(int, 0x1379c70) != 3) {
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    bVar1 = F_006b8c30(this GEN_EDX_ARG,uVar2,param_2,param_3,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a53740 */
GEN_OWN_GS GEN_FRAME uint F_00a53740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa53740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_GS(0x1c4, 12, 4);
  byte bVar1;
  int * piVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c0));
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x72,((char *)REFP(0x10e5c68)),param_2,param_3);
  }
  else {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(param_2,param_3);
    F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x72,((char *)REFP(0x10e5c5c)),uVar4);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x124)),0x96,((char *)REFP(0x10e5c78)),((undefined1 *)(gen_frame + 0xb0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x124)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,&REFG(undefined, 0x10e5472),REFG(undefined4, 0x108cc50));
  F_00459b00(this GEN_EDX_ARG,1,((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x8)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar4 = (uint)uVar7;
  iVar6 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + param_4)));
      uVar4 = 0;
      do {
        pcVar5 = ((char *)REFP(0x10e5c84));
        if ((bVar1 >> GEN_SHC((byte)uVar4, (unsigned int)(uintptr_t)uVar4) & 1) == 0) {
          pcVar5 = ((char *)REFP(0x10e5c8c));
        }
        F_00c472af(((undefined1 *)(gen_frame + 0x124)),0x96,((char *)REFP(0x10e5c94)),iVar6,pcVar5);
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x124)),REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e5473),REFG(undefined4, 0x108cc50));
        F_00459b00(this GEN_EDX_ARG,1,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x5c)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 1;
      } while (uVar4 < 8);
      uVar4 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar4;
    } while (uVar4 < param_5);
  }
  return uVar4;
}

/* ref: FUN_00a53940 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a53940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa53940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-2] == 0) {
      F_00406b30(puVar1 - 2);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x298 + *((int *)GEN_TOP(((int)this + 0x24)))))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2a0;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x28))));
  }
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x38))) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x20 + *((int *)GEN_TOP(((int)this + 0x34)))))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x38))));
  }
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 0x20 + iVar3))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x48))));
  }
  return 0;
}

/* ref: FUN_00a53a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a53a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa53a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP((uVar1 + 0x28)));
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar2;
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = 0;
  }
  if (uVar1 != 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
    *((undefined4 *)GEN_TOP((uVar1 + 0x28))) = 0;
    if (iVar2 == 0) {
      *((undefined4 *)GEN_TOP((uVar1 + 0x24))) = 0;
      *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
    }
    else {
      *((int *)GEN_TOP((uVar1 + 0x24))) = iVar2;
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x28))) = uVar1;
    }
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x10))) = param_1;
    uVar3 = F_0046ff40();
    *((ulonglong *)GEN_TOP((uVar1 + 8))) = uVar3;
    *((undefined4 *)GEN_TOP((uVar1 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x20))) = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a53a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a53a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa53a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
    while (iVar1 != 0) {
      iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
      if (iVar1 != 0) {
        iVar2 = *((int *)GEN_TOP((iVar1 + 0x54)));
        *((int *)GEN_TOP((param_1 + 0x14))) = iVar2;
        if (iVar2 != 0) {
          *((undefined4 *)GEN_TOP((iVar2 + 0x50))) = 0;
        }
        if (iVar1 == *((int *)GEN_TOP((param_1 + 0x18)))) {
          iVar2 = *((int *)GEN_TOP((iVar1 + 0x50)));
          *((int *)GEN_TOP((param_1 + 0x18))) = iVar2;
          if (iVar2 != 0) {
            *((undefined4 *)GEN_TOP((iVar2 + 0x54))) = 0;
          }
        }
        if (*((int *)GEN_TOP((iVar1 + 0x50))) != 0) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x50))) + 0x50)));
        }
        if (*((int *)GEN_TOP((iVar1 + 0x54))) != 0) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x54))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x54))) + 0x54)));
        }
        iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x54))) = 0;
        if (iVar2 == 0) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x50))) = 0;
          *((int *)GEN_TOP(((int)this + 8))) = iVar1;
        }
        else {
          *((int *)GEN_TOP((iVar1 + 0x50))) = iVar2;
          *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x54))) = iVar1;
        }
        *((int *)GEN_TOP(((int)this + 0xc))) = iVar1;
        *((int *)GEN_TOP((param_1 + 0x1c))) = *((int *)GEN_TOP((param_1 + 0x1c))) - 1;
      }
      iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
    }
    if (param_1 == *((int *)GEN_TOP(((int)this + 0x1c)))) {
      iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
      *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1;
      if (iVar1 != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = 0;
      }
    }
    if (param_1 == *((int *)GEN_TOP(((int)this + 0x20)))) {
      iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
      *((int *)GEN_TOP(((int)this + 0x20))) = iVar1;
      if (iVar1 != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = 0;
      }
    }
    if (*((int *)GEN_TOP((param_1 + 0x24))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x24))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + 0x24)));
    }
    if (*((int *)GEN_TOP((param_1 + 0x28))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x28))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0x28)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
    if (iVar1 != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0;
      *((int *)GEN_TOP((param_1 + 0x24))) = iVar1;
      uVar3 = *((uint *)GEN_TOP(((int)this + 0x18)));
      *((int *)GEN_TOP((uVar3 + 0x28))) = param_1;
      *((int *)GEN_TOP(((int)this + 0x18))) = param_1;
      return uVar3;
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
    *((undefined4 *)GEN_TOP((param_1 + 0x24))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0;
    in_EAX = 0;
  }
  return in_EAX;
}

/* ref: FUN_00a53b70 */
GEN_OWN GEN_NOFRAME byte F_00a53b70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa53b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = 300;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
  (*(undefined1 *)(gen_frame + 0x20)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974dd0(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return bVar1;
}

/* ref: FUN_00a53c00 */
GEN_OWN GEN_NOFRAME uint F_00a53c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa53c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x15fe8, 8);
  undefined1 uVar1;
  uint * puVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x15fd4)) = 0xa53c20;
  (*(uint *)(gen_frame + 0x15fd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  piVar4 = ((int *)GEN_TOP(F_00e83c50()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9e7b0(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    F_00f3d350(((undefined1 *)(gen_frame + 0x10008)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e83c20(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10008)));
    piVar4 = ((int *)GEN_TOP(F_00e83c60()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15da0)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG,0x16);
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,0x14);
      if ((uVar5 != 0) && (uVar7 != 0)) {
        uVar8 = F_00aadfc0(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG,param_1);
        puVar2 = *((uint * PTR32 *)GEN_TOP((uVar7 + 0x20)));
        if (uVar8 != *puVar2) {
          *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
        }
        *puVar2 = uVar8;
        if (**((int * PTR32 *)GEN_TOP((uVar5 + 0x20))) != 0) {
          **((int * PTR32 *)GEN_TOP((uVar5 + 0x20))) = 0;
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) != (*(int *)(gen_frame + 0x15ab0))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) = (*(int *)(gen_frame + 0x15ab0));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8))) != (*(int *)(gen_frame + 0x15ab4))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 8))) = (*(int *)(gen_frame + 0x15ab4));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc))) != (*(int *)(gen_frame + 0x15ab8))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc))) = (*(int *)(gen_frame + 0x15ab8));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x10))) != (*(int *)(gen_frame + 0x15a98))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x10))) = (*(int *)(gen_frame + 0x15a98));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x14))) != (*(int *)(gen_frame + 0x15aa0))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x14))) = (*(int *)(gen_frame + 0x15aa0));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x18))) != (*(int *)(gen_frame + 0x15a9c))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x18))) = (*(int *)(gen_frame + 0x15a9c));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x1c))) != (*(int *)(gen_frame + 0x15aa4))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x1c))) = (*(int *)(gen_frame + 0x15aa4));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x20))) != (*(int *)(gen_frame + 0x15aa8))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x20))) = (*(int *)(gen_frame + 0x15aa8));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x24))) != (*(int *)(gen_frame + 0x15aac))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x24))) = (*(int *)(gen_frame + 0x15aac));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x28))) != (*(int *)(gen_frame + 0x15b28))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x28))) = (*(int *)(gen_frame + 0x15b28));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2c))) != (*(int *)(gen_frame + 0x15b3c))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x2c))) = (*(int *)(gen_frame + 0x15b3c));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x30))) != (*(int *)(gen_frame + 0x15b38))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x30))) = (*(int *)(gen_frame + 0x15b38));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x34))) != (*(int *)(gen_frame + 0x15b30))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x34))) = (*(int *)(gen_frame + 0x15b30));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x38))) != (*(int *)(gen_frame + 0x15b34))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x38))) = (*(int *)(gen_frame + 0x15b34));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x3c))) != (*(int *)(gen_frame + 0x15b2c))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x3c))) = (*(int *)(gen_frame + 0x15b2c));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x40))) != (*(int *)(gen_frame + 0x15ae4))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x40))) = (*(int *)(gen_frame + 0x15ae4));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x48))) != (*(int *)(gen_frame + 0x15aec))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x48))) = (*(int *)(gen_frame + 0x15aec));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x44))) != (*(int *)(gen_frame + 0x15ae8))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x44))) = (*(int *)(gen_frame + 0x15ae8));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x4c))) != (*(int *)(gen_frame + 0x15af0))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x4c))) = (*(int *)(gen_frame + 0x15af0));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x50))) != (*(int *)(gen_frame + 0x15b18))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x50))) = (*(int *)(gen_frame + 0x15b18));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x5c))) != (*(int *)(gen_frame + 0x15b24))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x5c))) = (*(int *)(gen_frame + 0x15b24));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x54))) != (*(int *)(gen_frame + 0x15b1c))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x54))) = (*(int *)(gen_frame + 0x15b1c));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x58))) != (*(int *)(gen_frame + 0x15b20))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x58))) = (*(int *)(gen_frame + 0x15b20));
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
      }
    }
    F_00f104c0(((undefined1 *)(gen_frame + 0x10008)) GEN_EDX_ARG);
    uVar5 = F_00e9e800(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84c10()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ef30(((undefined1 *)(gen_frame + 0x15ca0)) GEN_EDX_ARG);
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84be0(((undefined1 *)(gen_frame + 0x15ca0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15f48)));
    piVar4 = ((int *)GEN_TOP(F_00e84c20()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15ca0)));
    if (REFG(int, 0x14a7404) != (*(int *)(gen_frame + 0x15f5c))) {
      REFG(int, 0x14a7404) = (*(int *)(gen_frame + 0x15f5c));
    }
    if (REFG(int, 0x14a7408) != (*(int *)(gen_frame + 0x15f60))) {
      REFG(int, 0x14a7408) = (*(int *)(gen_frame + 0x15f60));
    }
    if (REFG(int, 0x14a740c) != (*(int *)(gen_frame + 0x15f64))) {
      REFG(int, 0x14a740c) = (*(int *)(gen_frame + 0x15f64));
    }
    if (REFG(int, 0x14a7414) != (*(int *)(gen_frame + 0x15f6c))) {
      REFG(int, 0x14a7414) = (*(int *)(gen_frame + 0x15f6c));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    uVar5 = F_00e9ef90(((undefined1 *)(gen_frame + 0x15ca0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84d60()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9efe0(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84d30(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15f48)));
    piVar4 = ((int *)GEN_TOP(F_00e84d70()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15da0)));
    if (REFG(int, 0x14a7418) != (*(int *)(gen_frame + 0x15f70))) {
      REFG(int, 0x14a7418) = (*(int *)(gen_frame + 0x15f70));
    }
    if (REFG(int, 0x14a741c) != (*(int *)(gen_frame + 0x15f74))) {
      REFG(int, 0x14a741c) = (*(int *)(gen_frame + 0x15f74));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    uVar5 = F_00e9f030(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84eb0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9f080(((undefined1 *)(gen_frame + 0x15d40)) GEN_EDX_ARG);
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84e80(((undefined1 *)(gen_frame + 0x15d40)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15f48)));
    piVar4 = ((int *)GEN_TOP(F_00e84ec0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15d40)));
    if (REFG(int, 0x14a7420) != (*(int *)(gen_frame + 0x15f78))) {
      REFG(int, 0x14a7420) = (*(int *)(gen_frame + 0x15f78));
    }
    if (REFG(int, 0x14a7424) != (*(int *)(gen_frame + 0x15f7c))) {
      REFG(int, 0x14a7424) = (*(int *)(gen_frame + 0x15f7c));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f48)) GEN_EDX_ARG);
    uVar5 = F_00e9f0d0(((undefined1 *)(gen_frame + 0x15d40)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84ac0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ee90(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84a90(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84ad0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15da0)));
    bVar3 = REFG(undefined1, 0x14a9260);
    if ((char)REFG(undefined1, 0x14a9260) < '\0') {
      bVar3 = 0;
    }
    (*(undefined4 *)(gen_frame + 0x10000)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10000)), 1, 3),bVar3);
    uVar1 = 0;
    if (bVar3 != 0) {
      uVar1 = (&REFG(undefined1, 0x14a9260))[(int)(bVar3)];
    }
    F_00a68910(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,bVar3);
    F_00a7e790(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x10000)),uVar1);
    uVar10 = 0xc0;
    pvVar9 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006de4e0(pvVar9 GEN_EDX_ARG,uVar10);
    uVar5 = F_00e9eee0(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e83da0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9e850(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e83d70(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e83db0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15e00)));
    uVar5 = F_00e9e8a0(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84970()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9edf0(((undefined1 *)(gen_frame + 0x15c80)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84940(((undefined1 *)(gen_frame + 0x15c80)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84980()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15c80)));
    pvVar9 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_0070f520(pvVar9 GEN_EDX_ARG);
    uVar5 = F_00e9ee40(((undefined1 *)(gen_frame + 0x15c80)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84820()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ed50(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e847f0(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84830()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15da0)));
    uVar5 = F_00e9eda0(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e83ef0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9e8f0(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e83ec0(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e83f00()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15e00)));
    uVar5 = F_00e9e940(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84430()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9eb70(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84400(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84440()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15dd0)));
    uVar5 = F_00e9ebc0(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e842e0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ead0(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e842b0(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e842f0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15dd0)));
    uVar5 = F_00e9eb20(((undefined1 *)(gen_frame + 0x15dd0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e846d0()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ecb0(((undefined1 *)(gen_frame + 0x15cb0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e846a0(((undefined1 *)(gen_frame + 0x15cb0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e846e0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15cb0)));
    uVar5 = F_00e9ed00(((undefined1 *)(gen_frame + 0x15cb0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84580()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ec10(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84550(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84590()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15da0)));
    uVar5 = F_00e9ec60(((undefined1 *)(gen_frame + 0x15da0)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84190()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9ea30(((undefined1 *)(gen_frame + 0x15d10)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84160(((undefined1 *)(gen_frame + 0x15d10)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e841a0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15d10)));
    uVar5 = F_00e9ea80(((undefined1 *)(gen_frame + 0x15d10)) GEN_EDX_ARG);
    return uVar5;
  }
  piVar4 = ((int *)GEN_TOP(F_00e84040()));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  if (param_2 == uVar5) {
    F_00e9e990(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00e84010(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,&REFG(undefined, 0x14a7470));
    piVar4 = ((int *)GEN_TOP(F_00e84050()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,param_4,((undefined1 *)(gen_frame + 0x15e00)));
    F_00a66c00(&REFG(undefined, 0x14ab744) GEN_EDX_ARG,2);
    uVar5 = F_00e9e9e0(((undefined1 *)(gen_frame + 0x15e00)) GEN_EDX_ARG);
  }
  return uVar5;
}

/* ref: Global::OnQuests */
GEN_OWN_GS GEN_FRAME uint F_00a54690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa54690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  short sVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined1 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  puVar6 = ((undefined1 *)GEN_TOP((param_1 + 3)));
  (*(int *)(gen_frame + 0x0)) = 0;
  puVar5 = &REFG(undefined1, 0x14a882a);
  do {
    puVar7 = puVar5 - 6;
    F_00f00b60(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,puVar7);
    sVar2 = (*(short *)(gen_frame + 0x8));
    sVar1 = *(short *)(puVar6 - 3);
    if ((*(short *)(gen_frame + 0x8)) == 0) {
      if (sVar1 != 0) {
LAB_00a546ed: ;
        *(short *)(puVar5 - 2) = sVar1;
        *puVar5 = puVar6[-1];
        puVar5[1] = *puVar6;
        puVar5[2] = puVar6[1];
        puVar5[3] = puVar6[2];
        puVar5[4] = puVar6[3];
        puVar5[5] = puVar6[4];
        puVar5[6] = puVar6[5];
        puVar8 = ((undefined1 *)(gen_frame + 0x4));
        puVar5[7] = puVar6[6];
        iVar9 = (*(int *)(gen_frame + 0x0));
        pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
        F_00703900(pvVar3 GEN_EDX_ARG,puVar7,puVar8,iVar9);
        if (sVar2 == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
        }
        else if (*(short *)(puVar6 - 3) == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) - 1;
        }
      }
    }
    else if (((*(short *)(gen_frame + 0x8)) == sVar1) || (sVar1 == 0)) goto LAB_00a546ed;
    F_00ef87b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    puVar6 = puVar6 + 10;
    puVar5 = puVar5 + 0x10;
    if (0x1d < (ushort)(*(int *)(gen_frame + 0x0))) {
      if (REFG(char, 0x14a73d2) == '\0') {
        REFG(char, 0x14a73d2) = '\x01';
        pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
        F_006e5e00(pvVar3 GEN_EDX_ARG);
      }
      REFG(undefined4, 0x14a458f) = 1;
      uVar4 = F_00a679e0(&REFG(undefined, 0x14ac288) GEN_EDX_ARG);
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar4 == 1) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
      }
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a547d0 */
GEN_OWN GEN_FRAME uint F_00a547d0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa547d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  ushort uVar1;
  undefined * this;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  ushort * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  puVar4 = &REFG(undefined1, 0x14a8afa);
  puVar5 = param_1;
  do {
    puVar6 = puVar4 - 6;
    F_00e781d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar6);
    (*(uint *)(gen_frame + 0x10)) = (uint)(*(ushort *)(gen_frame + 0x4));
    uVar1 = *puVar5;
    if ((*(ushort *)(gen_frame + 0x4)) == 0) {
      if (uVar1 != 0) {
LAB_00a5481f: ;
        *(ushort *)(puVar4 - 2) = uVar1;
        *puVar4 = (char)puVar5[1];
        *(ushort *)(puVar4 + 2) = puVar5[2];
        *(ushort *)(puVar4 + 4) = puVar5[3];
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
        puVar4[6] = (char)puVar5[4];
        iVar2 = (*(int *)(gen_frame + 0x14));
        this = ((undefined *)GEN_TOP(F_006b8c00()));
        F_0070e450(this GEN_EDX_ARG,puVar6,puVar7,iVar2);
        if ((short)(*(uint *)(gen_frame + 0x10)) == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
        }
        else if (*puVar5 == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) - 1;
        }
      }
    }
    else if (((*(ushort *)(gen_frame + 0x4)) == uVar1) || (uVar1 == 0)) goto LAB_00a5481f;
    F_00e6ced0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar2 = (*(int *)(gen_frame + 0x14)) + 1;
    puVar5 = puVar5 + 5;
    puVar4 = puVar4 + 0x10;
    (*(int *)(gen_frame + 0x14)) = iVar2;
    if (0xf < (ushort)iVar2) {
      if (REFG(char, 0x14a73d9) == '\0') {
        REFG(char, 0x14a73d9) = '\x01';
        F_006b8c00();
        F_006b8cd0();
      }
      uVar3 = F_00a679e0(&REFG(undefined, 0x14ac288) GEN_EDX_ARG);
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar3 == 2) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
      }
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_00a548d0 */
GEN_OWN GEN_FRAME uint F_00a548d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa548d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00aa39d0(this GEN_EDX_ARG,(uint)(*param_2 & 1));
    F_00aa9000(this GEN_EDX_ARG,*param_2 >> 1 & 1);
    F_00aa1720(this GEN_EDX_ARG,(uint)(*param_2 >> 2 & 1));
    bVar1 = F_00a9f620(this GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined2, 0x14b4eb8) = *(undefined2 *)param_2;
      uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),REFG(undefined2, 0x14b4eb8));
    }
  }
  return uVar2;
}

/* ref: FUN_00a54950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a54950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa54950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*((ushort *)GEN_TOP((param_2 + 2))) == 0x1aa) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c)));
    if (uVar3 != 0) {
      do {
        if (*((int *)GEN_TOP((uVar3 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) goto LAB_00a54a40;
        uVar3 = *((uint *)GEN_TOP((uVar3 + 0x28)));
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54a40: ;
      uVar2 = *((uint *)GEN_TOP((param_2 + 0x10)));
      ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
      uVar1 = *((uint *)GEN_TOP((param_2 + 0x14)));
      ((uint *)(gen_frame + 0x8))[0] = uVar2;
      ((uint *)(gen_frame + 0x8))[1] = uVar1;
      *((uint *)GEN_TOP((uVar3 + 0x20))) = uVar1 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar3,((uint *)(gen_frame + 0x0)));
      if (*((int *)GEN_TOP((uVar3 + 0x20))) <= *((int *)GEN_TOP((uVar3 + 0x1c)))) {
        F_00a3b630(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x14))));
        uVar2 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar3);
      }
    }
  }
  else {
    uVar2 = *((ushort *)GEN_TOP((param_2 + 2))) - 0x1ab;
    if (uVar2 == 0) {
      uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c)));
      if (uVar3 != 0) {
        do {
          if (*((int *)GEN_TOP((uVar3 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) {
            (*(uint *)(gen_frame + 0x4c)) = uVar3;
            goto LAB_00a549b7;
          }
          uVar3 = *((uint *)GEN_TOP((uVar3 + 0x28)));
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a549b7: ;
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
        puVar5 = ((uint *)GEN_TOP((param_2 + 0x10)));
        puVar6 = ((uint *)(gen_frame + 0x8));
        for (iVar4 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar3,((uint *)(gen_frame + 0x0)));
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        uVar2 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x20)));
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x1c))))) {
          F_00a3b630(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x14))));
          uVar3 = F_00a53a80(this_00 GEN_EDX_ARG,uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a54a90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a54a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa54a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*((ushort *)GEN_TOP((param_2 + 2))) == 0x1ac) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c)));
    if (uVar3 != 0) {
      do {
        if (*((int *)GEN_TOP((uVar3 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) goto LAB_00a54b8b;
        uVar3 = *((uint *)GEN_TOP((uVar3 + 0x28)));
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54b8b: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar2 = *((uint *)GEN_TOP((param_2 + 0x14)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
      ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
      (*(uint *)(gen_frame + 0xc)) = uVar2;
      *((uint *)GEN_TOP((uVar3 + 0x20))) = uVar2 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar3,((uint *)(gen_frame + 0x0)));
      if (*((int *)GEN_TOP((uVar3 + 0x20))) <= *((int *)GEN_TOP((uVar3 + 0x1c)))) {
        F_00a3b5a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x14))));
        uVar2 = F_00a53a80(this_00 GEN_EDX_ARG,uVar3);
      }
    }
  }
  else {
    uVar2 = *((ushort *)GEN_TOP((param_2 + 2))) - 0x1ad;
    if (uVar2 == 0) {
      uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c)));
      if (uVar3 != 0) {
        do {
          if (*((int *)GEN_TOP((uVar3 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) goto LAB_00a54af3;
          uVar3 = *((uint *)GEN_TOP((uVar3 + 0x28)));
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a54af3: ;
        (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
        uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
        ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
        (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
        (*(uint *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
        (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_2 + 0x20)));
        (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
        (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((param_2 + 0x24)));
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar3,((uint *)(gen_frame + 0x0)));
        uVar2 = *((uint *)GEN_TOP((uVar3 + 0x20)));
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *((int *)GEN_TOP((uVar3 + 0x1c))))) {
          F_00a3b5a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x14))));
          uVar3 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Network::PacketQue::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a54be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa54be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined * this_00;
  uint uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*((ushort *)GEN_TOP((param_2 + 2))) == 0x1b1) {
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*((int *)GEN_TOP((uVar5 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) goto LAB_00a54cdb;
        uVar5 = *((uint *)GEN_TOP((uVar5 + 0x28)));
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54cdb: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    uVar2 = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
    ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
    uVar4 = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
    ((undefined4 *)(gen_frame + 0x8))[0] = uVar2;
    ((undefined4 *)(gen_frame + 0x8))[2] = uVar4;
    ((undefined4 *)(gen_frame + 0x8))[1] = uVar3;
    ((undefined4 *)(gen_frame + 0x8))[3] = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
    *((uint *)GEN_TOP((uVar5 + 0x20))) = (uint)*((byte *)GEN_TOP((param_2 + 0x1a)));
    uVar7 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar5,((uint *)(gen_frame + 0x0)));
    if (*((int *)GEN_TOP((uVar5 + 0x1c))) < *((int *)GEN_TOP((uVar5 + 0x20)))) {
      return uVar7;
    }
    uVar11 = *((uint *)GEN_TOP((uVar5 + 0x14)));
  }
  else {
    uVar5 = *((ushort *)GEN_TOP((param_2 + 2))) - 0x1b2;
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*((int *)GEN_TOP((uVar5 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) {
          (*(uint *)(gen_frame + 0x4c)) = uVar5;
          goto LAB_00a54c47;
        }
        uVar5 = *((uint *)GEN_TOP((uVar5 + 0x28)));
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54c47: ;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
    puVar9 = ((undefined4 *)GEN_TOP((param_2 + 0x10)));
    puVar10 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar8 = 0xc; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar5,((uint *)(gen_frame + 0x0)));
    uVar5 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x20)));
    if (uVar5 == 0xffffffff) {
      return 0xffffffff;
    }
    if (*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x1c))) < (int)uVar5) {
      return uVar5;
    }
    uVar11 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x14)));
    uVar6 = uVar11;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        uVar7 = uVar6;
        if (*((int *)GEN_TOP((uVar6 + 8))) == 0x1b1) goto LAB_00a54d1d;
        puVar1 = ((uint *)GEN_TOP((uVar6 + 0x54)));
        uVar6 = *puVar1;
      } while (*puVar1 != 0);
      uVar7 = 0;
    }
  }
LAB_00a54d1d: ;
  F_00a47b20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar11,uVar7);
  uVar5 = F_00a53a80(this_00 GEN_EDX_ARG,uVar5);
  return uVar5;
}

/* ref: FUN_00a54d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a54d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa54d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  for (; uVar3 != 0; uVar3 = *((uint *)GEN_TOP((uVar3 + 0x28)))) {
    if (*((int *)GEN_TOP((uVar3 + 0x10))) == param_2) {
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      goto LAB_00a54d8f;
    }
  }
  uVar3 = F_00a53a10(this GEN_EDX_FWD,param_2);
  (*(uint *)(gen_frame + 0x4c)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_00a54d8f: ;
  uVar3 = (uint)*((ushort *)GEN_TOP((param_3 + 2)));
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  if (uVar3 == 0x1af) {
    puVar5 = ((undefined4 *)GEN_TOP((param_3 + 0x10)));
    iVar4 = 0x10;
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  else {
    if (uVar3 != 0x1b3) {
      if (uVar3 == 0x1b7) {
        uVar1 = *((undefined4 *)GEN_TOP((param_3 + 0x14)));
        ((undefined4 *)(gen_frame + 0x8))[0] = *((undefined4 *)GEN_TOP((param_3 + 0x10)));
        ((undefined4 *)(gen_frame + 0x8))[1] = uVar1;
        ((undefined4 *)(gen_frame + 0x8))[2] = *((undefined4 *)GEN_TOP((param_3 + 0x18)));
        ((undefined4 *)(gen_frame + 0x8))[3] = *((undefined4 *)GEN_TOP((param_3 + 0x1c)));
      }
      goto LAB_00a54de6;
    }
    iVar4 = 8;
    puVar5 = ((undefined4 *)GEN_TOP((param_3 + 0x10)));
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  for (; this = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00a54de6: ;
  F_00a4fee0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4c)),((uint *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x4c));
  uVar3 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x20)));
  if ((uVar3 != 0xffffffff) && ((int)uVar3 <= *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x1c))))) {
    F_00a49c10(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x14))),param_1);
    uVar3 = F_00a53a80(this GEN_EDX_ARG,uVar2);
  }
  return uVar3;
}

/* ref: FUN_00a54e30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a54e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa54e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      if (*((uint *)GEN_TOP(((int)this + 0x2c))) == *((uint *)GEN_TOP(((int)this + 0x30)))) {
        return;
      }
      uVar1 = *((uint *)GEN_TOP(((int)this + 0x2c)));
      while( true ) {
        uVar2 = (*((int *)GEN_TOP(((int)this + 0x2c))) + 1U) % *((uint *)GEN_TOP(((int)this + 0x28)));
        *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar2;
        if (*((char *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *((int *)GEN_TOP(((int)this + 0x24)))))) != '\0') break;
        uVar1 = uVar2;
        if (uVar2 == *((uint *)GEN_TOP(((int)this + 0x30)))) {
          return;
        }
      }
      *((undefined1 *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *((int *)GEN_TOP(((int)this + 0x24)))))) = 0;
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + uVar1 * 0x2a0)));
      if (REFG(int, 0x1379c70) == 3) {
        return;
      }
      this_00 = ((undefined *)GEN_TOP(F_00a64860(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*puVar3,(uint)*((byte *)GEN_TOP(((int)puVar3 + 0x3b))))));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00aac200(this_00 GEN_EDX_ARG,puVar3 + 4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return;
}

/* ref: FUN_00a54ef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a54ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa54ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * this_00;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * puVar5;
  undefined * this_01;
  
  if (REFG(int, 0x1379c70) == 3) {
    return 0;
  }
  this_00 = ((int *)GEN_TOP(((int)this + 0x24)));
  F_00a5e350(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x8)));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0xc));
  uVar2 = (*(uint *)(gen_frame + 0x8));
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
    if (*piVar3 == param_1) break;
    puVar5 = ((uint *)GEN_TOP(F_00a5e3d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x8)))));
    uVar2 = *puVar5;
    piVar3 = ((int *)GEN_TOP(puVar5[1]));
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
    piVar3 = (*(int * PTR32 *)(gen_frame + 0xc));
  }
  bVar1 = *((byte *)GEN_TOP(((int)piVar3 + 0x3b)));
  iVar4 = *piVar3;
  this_01 = ((undefined *)GEN_TOP(F_00a64860(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,iVar4,(uint)bVar1)));
  if (this_01 != ((undefined *)GEN_TOP(0x0))) {
    F_00aac200(this_01 GEN_EDX_ARG,piVar3 + 4);
  }
  if ((-1 < (int)uVar2) && (uVar2 < *((uint *)GEN_TOP(((int)this + 0x28))))) {
    *((undefined1 *)GEN_TOP((uVar2 * 0x2a0 + 0x298 + *this_00))) = 0;
  }
  return 1;
}

/* ref: FUN_00a54fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a54fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa54fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x24)));
  F_00a5e350(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
  uVar1 = (*(uint *)(gen_frame + 0x0));
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(uint *)(gen_frame + 0x0)) != 0xffffffff) {
    do {
      if (((*piVar2 == param_1) && (-1 < (int)uVar1)) && (uVar1 < *((uint *)GEN_TOP(((int)this + 0x28))))) {
        *((undefined1 *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *this_00))) = 0;
      }
      if (uVar1 != *((uint *)GEN_TOP(((int)this + 0x30)))) {
        do {
          uVar1 = (uVar1 + 1) % *((uint *)GEN_TOP(((int)this + 0x28)));
          if (*((char *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *this_00))) != '\0') {
            piVar2 = ((int *)GEN_TOP((uVar1 * 0x2a0 + *this_00)));
            goto LAB_00a55014;
          }
        } while (uVar1 != *((uint *)GEN_TOP(((int)this + 0x30))));
      }
      uVar1 = 0xffffffff;
      piVar2 = ((int *)GEN_TOP(0x0));
LAB_00a55014: ;
    } while (uVar1 != 0xffffffff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a55030 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a55030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa55030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 * puVar9;
  byte bVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (param_1 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(((int)this + 0x34)));
    do {
      F_00a5e4b0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      if ((*(char *)(gen_frame + 0xc)) == '\0') {
        return;
      }
      if ((*(char *)(gen_frame + 0xd)) != '\0') {
        pbVar1 = (byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 4);
        this_00 = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          uVar11 = puVar9[2];
          (*(uint *)(gen_frame + 0x0)) = uVar11;
          (*(int *)(gen_frame + 0x4)) = puVar9[3];
          uVar8 = *((uint *)GEN_TOP(((int)this_00 + 0xf8)));
          uVar12 = (puVar9[3] - *((int *)GEN_TOP(((int)this_00 + 0xfc)))) -
                   (uint)(uVar11 < *((uint *)GEN_TOP(((int)this_00 + 0xf8))));
          bVar10 = F_00a611f0(this_00 GEN_EDX_ARG,0,&(*(uint *)(gen_frame + 0x0)));
          if (bVar10 != 0) {
            fVar2 = ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar12 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar12,uVar11 - uVar8) & 0x7fffffffffffffff)))) /
                           (float10)*(double *)&REFG(undefined, 0x10912a8))));
            (*(float *)(gen_frame + 0x14)) = fVar2;
            fVar13 = F_00a9f650(this_00 GEN_EDX_ARG,fVar2,pbVar1);
            (*(float *)(gen_frame + 0x10)) = (float)fVar13;
            (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)*(byte *)(puVar9 + 5));
            fVar14 = GEN_X87(((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)*(double *)&REFG(undefined, 0x1088100));
            fVar2 = ((float)GEN_TOF(((float10)*(byte *)(puVar9 + 5) / (float10)REFG(double, 0x10944b8))));
            (*(float *)(gen_frame + 0x14)) = fVar2;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*((byte *)GEN_TOP(((int)puVar9 + 0x11))));
            uVar11 = (uint)*pbVar1;
            fVar15 = (float10)*(double *)&REFG(undefined, 0x10928e8);
            fVar3 = ((float)GEN_TOF((((float10)*((byte *)GEN_TOP(((int)puVar9 + 0x11))) * fVar14) * fVar15 -
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x10)) = fVar3;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar11);
            fVar4 = ((float)GEN_TOF((((float10)uVar11 * fVar14) * fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228))))
            ;
            (*(float *)(gen_frame + 0x10)) = fVar4;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*((ushort *)GEN_TOP(((int)puVar9 + 0x1a))));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
            fVar5 = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)puVar9 + 0x1a))) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x10)) = fVar5;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*(ushort *)(puVar9 + 6));
            fVar6 = ((float)GEN_TOF((((float10)*(ushort *)(puVar9 + 6) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x10)) = fVar6;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*((ushort *)GEN_TOP(((int)puVar9 + 0x16))));
            fVar7 = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)puVar9 + 0x16))) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x10)) = fVar7;
            F_00a9f6d0(this_00 GEN_EDX_ARG,fVar7,fVar6,fVar5,fVar4,fVar3,(uint)*((byte *)GEN_TOP(((int)puVar9 + 0x12))),
                         (uint)*((byte *)GEN_TOP(((int)puVar9 + 0x13))),(float)fVar13,fVar2);
          }
        }
      }
      uVar11 = (*(uint *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar11;
    } while (uVar11 < param_1);
  }
  return;
}

/* ref: FUN_00a55210 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a55210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa55210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      F_00a5e680(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
      puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
      if ((*(char *)(gen_frame + 0x4)) == '\0') {
        return;
      }
      if ((*(char *)(gen_frame + 0x5)) != '\0') {
        (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x1a))));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 7));
        fVar5 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x1a))) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x1e))));
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 7) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 4));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x1e))) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 4) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * fVar5 - (float10)*(double *)&REFG(undefined, 0x1080228))));
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        if (uVar2 != 0) {
          F_00a9f750(uVar2 GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)),(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x14)),GEN_ARGF(gen_bits2f(puVar1[5])),
                       (uint)*(byte *)(puVar1 + 6));
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return;
}

/* ref: FUN_00a55330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa55330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a5e350(((int *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x0));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
joined_r0x00a5534d: ;
  do {
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (*piVar3 == param_1) {
      return (uint)(piVar3 + 4);
    }
    if (uVar2 != *((uint *)GEN_TOP(((int)this + 0x30)))) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
      do {
        uVar2 = (uVar2 + 1) % *((uint *)GEN_TOP(((int)this + 0x28)));
        if (*((char *)GEN_TOP((uVar2 * 0x2a0 + 0x298 + iVar1))) != '\0') {
          piVar3 = ((int *)GEN_TOP((uVar2 * 0x2a0 + iVar1)));
          goto joined_r0x00a5534d;
        }
      } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0x30))));
    }
    uVar2 = 0xffffffff;
    piVar3 = ((int *)GEN_TOP(0x0));
  } while( true );
}

/* ref: FUN_00a553c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a553c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa553c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x34)));
  piVar2 = ((int *)GEN_TOP(F_00a5e530(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)))));
  uVar3 = (*(uint *)(gen_frame + 0x0));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x4));
joined_r0x00a553db: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *((uint *)GEN_TOP(((int)this + 0x38))))) {
      *((undefined1 *)GEN_TOP((*this_00 + 0x20 + uVar3 * 0x28))) = 0;
    }
    if (uVar3 != *((uint *)GEN_TOP(((int)this + 0x40)))) {
      do {
        uVar3 = (uVar3 + 1) % *((uint *)GEN_TOP(((int)this + 0x38)));
        if (*((char *)GEN_TOP((*this_00 + 0x20 + uVar3 * 0x28))) != '\0') {
          piVar2 = ((int *)GEN_TOP((*this_00 + uVar3 * 0x28)));
          piVar1 = piVar2;
          goto joined_r0x00a553db;
        }
      } while (uVar3 != *((uint *)GEN_TOP(((int)this + 0x40))));
    }
    uVar3 = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(0x0));
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a55440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa55440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x44)));
  piVar2 = ((int *)GEN_TOP(F_00a5e700(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)))));
  uVar3 = (*(uint *)(gen_frame + 0x0));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x4));
joined_r0x00a5545b: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *((uint *)GEN_TOP(((int)this + 0x48))))) {
      *((undefined1 *)GEN_TOP((*this_00 + 0x20 + uVar3 * 0x28))) = 0;
    }
    if (uVar3 != *((uint *)GEN_TOP(((int)this + 0x50)))) {
      do {
        uVar3 = (uVar3 + 1) % *((uint *)GEN_TOP(((int)this + 0x48)));
        if (*((char *)GEN_TOP((*this_00 + 0x20 + uVar3 * 0x28))) != '\0') {
          piVar2 = ((int *)GEN_TOP((*this_00 + uVar3 * 0x28)));
          piVar1 = piVar2;
          goto joined_r0x00a5545b;
        }
      } while (uVar3 != *((uint *)GEN_TOP(((int)this + 0x50))));
    }
    uVar3 = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(0x0));
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a554c0 */
GEN_OWN GEN_FRAME uint F_00a554c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa554c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
    if (uVar1 == 0) {
      uVar1 = F_00a55330(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1);
      if (uVar1 != 0) {
        *((undefined4 *)GEN_TOP((uVar1 + 0x6c))) = *param_2;
        *((undefined2 *)GEN_TOP((uVar1 + 0x72))) = *((undefined2 *)GEN_TOP(((int)param_2 + 6)));
        uVar2 = F_00ab21a0((uint)*((byte *)GEN_TOP((uVar1 + 0x6b))));
        if (*((int *)GEN_TOP((uVar2 + 0x10))) == 0x20) {
          *((undefined2 *)GEN_TOP((uVar1 + 0x70))) = *(undefined2 *)(param_2 + 2);
        }
        else if (*((int *)GEN_TOP((uVar2 + 0x10))) != 0x21) {
          *((undefined2 *)GEN_TOP((uVar1 + 0x70))) = *(undefined2 *)(param_2 + 1);
        }
      }
    }
    else {
      *((undefined4 *)GEN_TOP((uVar1 + 0x1690))) = *param_2;
      *((uint *)GEN_TOP((uVar1 + 0x1698))) = (uint)*(ushort *)(param_2 + 1);
      *((undefined2 *)GEN_TOP((uVar1 + 0x16a2))) = *(undefined2 *)(param_2 + 2);
      *((undefined2 *)GEN_TOP((uVar1 + 0x16a0))) = *((undefined2 *)GEN_TOP(((int)param_2 + 6)));
    }
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    if (uVar1 != 0) {
      *((undefined4 *)GEN_TOP((uVar1 + 0x58))) = *param_2;
      *((undefined2 *)GEN_TOP((uVar1 + 0x60))) = *(undefined2 *)(param_2 + 1);
      *((undefined2 *)GEN_TOP((uVar1 + 100))) = *((undefined2 *)GEN_TOP(((int)param_2 + 6)));
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    if (in_EAX != 0) {
      *((undefined4 *)GEN_TOP((in_EAX + 0x20c))) = *param_2;
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *param_2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a555b0 */
GEN_OWN GEN_FRAME uint F_00a555b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa555b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int * in_EAX = 0;
  int * piVar5;
  uint uVar6;
  undefined * this;
  byte * pbVar7;
  undefined4 * puVar8;
  undefined2 uVar9;
  int iVar10;
  ushort * puVar11;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
    uVar9 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*param_2);
    if (*((int *)GEN_TOP((uVar6 + 0x10))) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar9 = *(undefined2 *)(param_2 + 0xc);
    }
    else if (*((int *)GEN_TOP((uVar6 + 0x10))) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 0xe);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 0xc);
      local_c = (uint)*(ushort *)(param_2 + 0xe);
    }
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      uVar6 = F_00a55330(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1);
      if (uVar6 != 0) {
        *((byte *)GEN_TOP((uVar6 + 0x6a))) = param_2[1];
        *((byte *)GEN_TOP((uVar6 + 0x6b))) = *param_2;
        *((undefined4 *)GEN_TOP((uVar6 + 0x6c))) = *(undefined4 *)(param_2 + 4);
        *((undefined4 *)GEN_TOP((uVar6 + 0x74))) = *(undefined4 *)(param_2 + 8);
        *((undefined2 *)GEN_TOP((uVar6 + 0x70))) = *(undefined2 *)(param_2 + 0xc);
        *((undefined2 *)GEN_TOP((uVar6 + 0x78))) = *(undefined2 *)(param_2 + 0xe);
        *((undefined2 *)GEN_TOP((uVar6 + 0x72))) = *(undefined2 *)(param_2 + 0x10);
        puVar8 = ((undefined4 *)GEN_TOP((uVar6 + 0x98)));
        pbVar7 = param_2 + 0x14;
        iVar10 = 0x1e;
        do {
          *puVar8 = *(undefined4 *)pbVar7;
          puVar8[1] = *(undefined4 *)(pbVar7 + 4);
          puVar8[2] = *(undefined4 *)(pbVar7 + 8);
          pbVar7 = pbVar7 + 0xc;
          puVar8 = puVar8 + 3;
          iVar10 = iVar10 - 1;
        } while (iVar10 != 0);
      }
    }
    else {
      *(byte *)(piVar5 + 0x5a2) = *param_2;
      *((byte *)GEN_TOP(((int)piVar5 + 0x1689))) = param_2[1];
      piVar5[0x5a4] = *(int *)(param_2 + 4);
      piVar5[0x5a5] = *(int *)(param_2 + 8);
      piVar5[0x5a6] = local_8;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar3;
      *((undefined2 *)GEN_TOP(((int)piVar5 + 0x16a2))) = uVar9;
      *((undefined2 *)GEN_TOP(((int)piVar5 + 0x16a6))) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *(undefined2 *)(param_2 + 0x10);
      bVar4 = F_00a9f620(piVar5 GEN_EDX_ARG);
      if (bVar4 == 0) {
        pbVar7 = param_2 + 0x14;
        this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd4))))(piVar5 GEN_EDX_ARG)));
        F_00b7b8e0(this GEN_EDX_ARG,pbVar7);
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    if (uVar6 != 0) {
      *((byte *)GEN_TOP((uVar6 + 0x51))) = *param_2;
      *((byte *)GEN_TOP((uVar6 + 0x53))) = param_2[2];
      *((byte *)GEN_TOP((uVar6 + 0x54))) = param_2[3];
      *((undefined4 *)GEN_TOP((uVar6 + 0x58))) = *(undefined4 *)(param_2 + 4);
      *((undefined4 *)GEN_TOP((uVar6 + 0x5c))) = *(undefined4 *)(param_2 + 8);
      *((undefined2 *)GEN_TOP((uVar6 + 0x60))) = (undefined2)local_8;
      *((undefined2 *)GEN_TOP((uVar6 + 0x62))) = (undefined2)local_c;
      *((undefined2 *)GEN_TOP((uVar6 + 100))) = *(undefined2 *)(param_2 + 0x10);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        F_00b7b840(uVar6 + 0x6c GEN_EDX_ARG,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),(uint)*puVar11,
                     *(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
    in_EAX = ((int *)GEN_TOP(F_00ae0880(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1)));
    if (in_EAX != ((int *)GEN_TOP(0x0))) {
      in_EAX[0x83] = *(int *)(param_2 + 4);
      in_EAX[0x84] = *(int *)(param_2 + 8);
      if (*in_EAX == REFG(int, 0x1379690)) {
        iVar10 = 0;
        piVar5 = in_EAX + 0x85;
        puVar11 = (ushort *)(param_2 + 0x16);
        do {
          in_EAX = ((int *)GEN_TOP(F_00b7b840(piVar5 GEN_EDX_ARG,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                       (uint)*puVar11,*(undefined4 *)(puVar11 + 3))));
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar10 < 0x1e);
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *(undefined4 *)(param_2 + 4);
      REFG(undefined4, 0x14ab5c4) = *(undefined4 *)(param_2 + 8);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        in_EAX = ((int *)GEN_TOP(F_00b7b840(&REFG(undefined, 0x14ab5c8) GEN_EDX_ARG,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                     (uint)*puVar11,*(undefined4 *)(puVar11 + 3))));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a55860 */
GEN_OWN GEN_FRAME uint F_00a55860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a54be0((undefined *)&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55880 */
GEN_OWN GEN_FRAME uint F_00a55880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a54a90(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558a0 */
GEN_OWN GEN_FRAME uint F_00a558a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa558a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a54950(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558c0 */
GEN_OWN GEN_FRAME byte F_00a558c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa558c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 != REFG(undefined4, 0x1379690)) {
    bVar1 = F_00a54ef0(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a55930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a55930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa55930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cd8));
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x44))) - 8);
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x34))) - 8);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x24))) - 8);
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return uVar1;
}

/* ref: FUN_00a55990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a55990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa55990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *((ushort *)GEN_TOP((param_2 + 2))) - 0x1af;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 4: ;
  case 8: ;
    uVar3 = F_00a54d40(this GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP((param_2 + 0x10))),param_2);
    break;
  case 1: ;
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x1c)));
    if (uVar4 != 0) {
      do {
        if (*((int *)GEN_TOP((uVar4 + 0x10))) == *((int *)GEN_TOP((param_2 + 0x10)))) goto LAB_00a559ef;
        uVar4 = *((uint *)GEN_TOP((uVar4 + 0x28)));
      } while (uVar4 != 0);
    }
    uVar4 = F_00a53a10(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    uVar3 = 0;
    if (uVar4 != 0) {
LAB_00a559ef: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
      iVar2 = *((int *)GEN_TOP((param_2 + 0x14)));
      ((uint *)(gen_frame + 0x0))[0] = (uint)*((ushort *)GEN_TOP((param_2 + 2)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
      *((int *)GEN_TOP((uVar4 + 0x20))) = iVar2 + 1;
      uVar3 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar4,((uint *)(gen_frame + 0x0)));
      if (*((int *)GEN_TOP((uVar4 + 0x20))) <= *((int *)GEN_TOP((uVar4 + 0x1c)))) {
        F_00a49c10(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 0x14))),param_1);
        uVar3 = F_00a53a80(this_00 GEN_EDX_ARG,uVar4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a55a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa55a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(this GEN_EDX_ARG,5);
    bVar1 = F_00a5d350(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa55ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar3;
  uint uVar2;
  
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  F_009755f0(this_00 GEN_EDX_ARG,puVar3);
  bVar1 = F_00a5d450(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55030(this GEN_EDX_ARG,1);
    bVar1 = F_00a5d450(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa55b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD,param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(this GEN_EDX_ARG,10);
    bVar1 = F_00a5d540(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: Global::HandleSpawn */
GEN_OWN GEN_FRAME uint F_00a55c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350(&REFG(undefined, 0x1334944) GEN_EDX_ARG,param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,5);
    bVar1 = F_00a5d350(&REFG(undefined, 0x1334944) GEN_EDX_ARG,param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55c40 */
GEN_OWN GEN_FRAME uint F_00a55c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a55ae0(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55c60 */
GEN_OWN GEN_FRAME uint F_00a55c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540(&REFG(undefined, 0x1334964) GEN_EDX_ARG,param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,10);
    bVar1 = F_00a5d540(&REFG(undefined, 0x1334964) GEN_EDX_ARG,param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ca0 */
GEN_OWN GEN_FRAME uint F_00a55ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa55ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a55990(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a55cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa55cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x10,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  return (uint)this;
}

/* ref: FUN_00a55cf0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a55cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa55cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))));
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      F_009bc530(((undefined *)GEN_TOP(piVar2[2])) GEN_EDX_FWD,1);
      piVar2 = ((int *)GEN_TOP(*piVar2));
    } while (piVar2 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar1 = ((int *)GEN_TOP(*piVar2));
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      piVar2 = ((int *)GEN_TOP(*piVar1));
      F_00429760(piVar1,0x10,800);
      piVar1 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  return 0;
}

/* ref: FUN_00a55d60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a55d60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa55d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  piVar3 = ((int *)GEN_TOP(*piVar2));
  while (piVar4 = piVar3, piVar4 != piVar2) {
    fVar1 = gen_bits2f(piVar4[3]);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
       (piVar4[3] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar4[3]))) - (float10)param_2)),
       gen_bits2f(piVar4[3]) <= 0.0)) {
      F_009bc530(((undefined *)GEN_TOP(piVar4[2])) GEN_EDX_FWD,1);
      piVar3 = ((int *)GEN_TOP(*piVar4));
      if (piVar4 != *((int * PTR32 *)GEN_TOP((param_1 + 4)))) {
        *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar3;
        *((int *)GEN_TOP((*piVar4 + 4))) = piVar4[1];
        F_00429760(piVar4,0x10,800);
        *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) - 1;
      }
    }
    else {
      piVar3 = ((int *)GEN_TOP(*piVar4));
    }
  }
  return;
}

/* ref: FUN_00a55df0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a55df0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xa55df0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0x6c, 4);
  float10 fVar1;
  uint in_ecx;
  undefined * this;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x8)) = param_1;
  in_ecx = F_00ab44e0(param_2,param_3,(float)(float10)1,0);
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x3c)) = (float)fVar1;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    ((float *)(gen_frame + 0xc))[0] = param_5;
    ((float *)(gen_frame + 0xc))[1] = 0.0;
    ((float *)(gen_frame + 0xc))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(float *)(gen_frame + 0x20)) = param_5;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(float *)(gen_frame + 0x34)) = param_5;
    F_0065ed60(((float *)(gen_frame + 0xc)) GEN_EDX_ARG,param_6);
    pfVar2 = ((float *)(gen_frame + 0xc));
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)*param_3);
    (*(float *)(gen_frame + 0x40)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x44)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x44)));
    this = ((undefined *)GEN_TOP(F_00983160(in_ecx GEN_EDX_ARG)));
    F_009bc130(this GEN_EDX_ARG,pfVar2);
    if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_4 <= *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x0)) = in_ecx;
      (*(float *)(gen_frame + 0x4)) = param_4;
      F_00a5ed60(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    }
  }
  return in_ecx;
}

/* ref: FUN_00a55f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a55f00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xa55f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = F_00ab4370(param_2,param_3,param_4,0,0);
  if ((uVar1 != 0) &&
     ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)(gen_frame + 0x0)) = uVar1;
    (*(float *)(gen_frame + 0x4)) = param_5;
    F_00a5ed60(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  }
  return uVar1;
}

/* ref: FUN_00a55f60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a55f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa55f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this GEN_EDX_FWD);
  uVar1 = F_00a5ec40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a55f80 */
GEN_OWN GEN_NOFRAME uint F_00a55f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xa55f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  GEN_FRAME_DECL(0x748, 8);
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  int * piVar5;
  undefined3 extraout_var_00 = 0;
  ushort * puVar6;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  ushort * extraout_EAX = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined4 * puVar7;
  undefined3 extraout_var_08 = 0;
  undefined2 extraout_var_37 = 0;
  undefined3 extraout_var_09 = 0;
  ushort * puVar8;
  undefined3 extraout_var_10 = 0;
  undefined3 extraout_var_11 = 0;
  undefined3 extraout_var_12 = 0;
  undefined3 extraout_var_13 = 0;
  undefined3 extraout_var_14 = 0;
  undefined3 extraout_var_15 = 0;
  undefined3 extraout_var_16 = 0;
  undefined3 extraout_var_17 = 0;
  undefined3 extraout_var_18 = 0;
  undefined3 extraout_var_19 = 0;
  undefined3 extraout_var_20 = 0;
  undefined3 extraout_var_21 = 0;
  undefined3 extraout_var_22 = 0;
  undefined3 extraout_var_23 = 0;
  undefined3 extraout_var_24 = 0;
  undefined3 extraout_var_25 = 0;
  undefined3 extraout_var_26 = 0;
  undefined3 extraout_var_27 = 0;
  undefined3 extraout_var_28 = 0;
  code * pcVar9;
  undefined3 extraout_var_29 = 0;
  undefined3 extraout_var_30 = 0;
  undefined2 extraout_var_38 = 0;
  undefined3 extraout_var_31 = 0;
  undefined3 extraout_var_32 = 0;
  ushort * extraout_EAX_00 = 0;
  undefined3 extraout_var_33 = 0;
  uint extraout_EAX_01 = 0;
  undefined3 extraout_var_34 = 0;
  undefined3 extraout_var_35 = 0;
  undefined3 extraout_var_36 = 0;
  uint uVar10;
  undefined2 extraout_var_39 = 0;
  ushort * extraout_EAX_02 = 0;
  uint * puVar11;
  undefined2 extraout_var_40 = 0;
  undefined2 extraout_var_41 = 0;
  undefined * pvVar12;
  uint uVar13;
  undefined1 * puVar14;
  int iVar15;
  bool bVar16;
  float10 fVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  ushort * puVar21;
  int * piVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  ushort * PTR32 * ppuVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  (*(uint *)(gen_frame + 0x734)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x738);
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = (*(ushort * PTR32 *)&gen_args[3]);
  (*(ushort * PTR32 *)(gen_frame + 0x3c)) = (*(ushort * PTR32 *)&gen_args[2]);
  (*(ushort * PTR32 *)(gen_frame + 0x30)) = (*(ushort * PTR32 *)&gen_args[4]);
  piVar4 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(uint *)&gen_args[0]))));
  if (REFG(int, 0x1379c70) == 3) {
    return (uint)piVar4;
  }
  piVar5 = piVar4;
  if ((*(uint *)&gen_args[1]) < 0x10f) {
    if ((*(uint *)&gen_args[1]) == 0x10e) {
      piVar5 = ((int *)GEN_TOP(0x3));
LAB_00a5601b: ;
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        bVar1 = F_00a611f0(piVar4 GEN_EDX_ARG,piVar5,0);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
        if (bVar1 == 0) {
          return (uint)piVar5;
        }
      }
      goto LAB_00a56039;
    }
    if ((*(uint *)&gen_args[1]) == 0) {
      piVar5 = ((int *)GEN_TOP(0x1));
      goto LAB_00a5601b;
    }
    if ((*(uint *)&gen_args[1]) != 3) goto LAB_00a56039;
    bVar1 = F_0053c3f0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG,0);
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else {
    if ((*(uint *)&gen_args[1]) == 400) {
      piVar5 = ((int *)GEN_TOP(0x2));
      goto LAB_00a5601b;
    }
LAB_00a56039: ;
    if (0x389 < (*(uint *)&gen_args[1])) {
      return (uint)piVar5;
    }
  }
  piVar5 = REFG(int * PTR32, 0x1379694);
  bVar1 = (&REFG(undefined, 0xa5bfb0))[(int)((*(uint *)&gen_args[1]))];
  puVar6 = ((ushort *)GEN_TOP((uint)bVar1));
                    
                    
  switch((unsigned int)(uintptr_t)(bVar1)) {
  case 0: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x30)) == ((ushort *)GEN_TOP(0x1))) {
        uVar13 = F_00aa6f20(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1)),(*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1)));
        return uVar13;
      }
      if (piVar4 != REFG(int * PTR32, 0x1379694)) {
        uVar13 = F_00aa6f20(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1)),(*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1)));
        return uVar13;
      }
      uVar13 = F_00a66b10(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,(uint)((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))));
      return uVar13;
    }
    break;
  case 1: ;
    uVar13 = F_00a6b810(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1)));
    return uVar13;
  case 2: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aaa5b0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 3: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
        bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
        puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_05,bVar1)));
        if (bVar1 == 0) {
          uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG);
          F_00ac3d40(uVar13 GEN_EDX_ARG);
          uVar23 = 0;
          uVar27 = 0;
          uVar13 = F_00ab1fc0((*(ushort * PTR32 *)(gen_frame + 0x38)));
          F_00aa4270(piVar4 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar13 + 10))),uVar27,uVar23);
          uVar13 = F_00aa0a70(piVar4 GEN_EDX_ARG);
          return uVar13;
        }
      }
      else {
        F_00aa2560(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(int *)&gen_args[8]),(*(int *)&gen_args[9]));
        bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
        puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_04,bVar1)));
        if (bVar1 != 0) {
          uVar13 = F_00ac5730(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(int *)&gen_args[8]),(*(int *)&gen_args[9]));
          return uVar13;
        }
      }
    }
    break;
  case 4: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar16 = (*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = bVar16;
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar16);
      *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) =
           *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) ^ (bVar16 * '\x02' ^ *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2)))) & 2
      ;
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
        *((undefined1 *)GEN_TOP(((int)piVar4 + 0x196))) = 0;
        piVar4[0x66] = 0;
        piVar4[0x67] = 0;
      }
      uVar13 = F_00533b90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      if (uVar13 == (*(uint *)&gen_args[0])) {
        uVar3 = *(ushort *)(piVar4 + 0x22);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = REFG(ushort * PTR32, 0x1487c90);
        uVar13 = F_00aa1a70(piVar4 GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x0)),1);
        F_009d1670((*(ushort * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(uint)uVar3,uVar13);
      }
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_01,bVar1)));
      if (bVar1 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,10,(char)(*(uint *)(gen_frame + 0x4)));
        uVar13 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,9,(*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0)));
        REFG(float, 0x14bd70c) = REFG(float, 0x10a509c);
        return uVar13;
      }
    }
    break;
  case 5: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab4370(0x75,piVar4,piVar4,0,0);
      return uVar13;
    }
    break;
  case 6: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0xe0000000))) {
        piVar5 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)))));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x2ece))) == '\x02') {
          uVar13 = F_00a7d4b0(0x269,piVar5,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
          return uVar13;
        }
      }
      else {
        uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        if (uVar13 != 0) {
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
          if (uVar10 == 1) {
            uVar13 = F_00a7d4b0(0x22e,piVar4,uVar13,0,0,0,0,0,0,REFG(float, 0x10916ec));
            return uVar13;
          }
          if (*((char *)GEN_TOP(((int)piVar4 + 0x2ece))) != '\x02') {
            uVar13 = F_00a7d4b0(0x22d,uVar13,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
            return uVar13;
          }
          uVar13 = F_00a7d4b0(0x267,uVar13,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
          return uVar13;
        }
        piVar5 = piVar4;
        if (*((char *)GEN_TOP(((int)piVar4 + 0x2ece))) == '\x02') {
          uVar13 = F_00a7d4b0(0x269,0,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
          return uVar13;
        }
      }
      uVar13 = F_00a7d4b0(0x22f,piVar5,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 7: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)((int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x30))) * 100 - 1 + (int)(*(ushort * PTR32 *)(gen_frame + 0x38))) / (int)(*(ushort * PTR32 *)(gen_frame + 0x38));
      }
      uVar13 = F_00a7d290((((ushort *)GEN_TOP((uint)*(byte *)(piVar4 + 0x5a2))) != (*(ushort * PTR32 *)(gen_frame + 0x3c))) + 0x24c,piVar4,
                            (*(ushort * PTR32 *)(gen_frame + 0x3c)),((undefined1 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x38))))),iVar15,
                            REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 8: ;
    uVar13 = F_00bc5eb0((*(uint *)&gen_args[0]),(*(ushort * PTR32 *)(gen_frame + 0x3c)),(uint)((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1))));
    return uVar13;
  case 9: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00bc5e50(piVar4[0x1d],(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return uVar13;
    }
    break;
  case 10: ;
    puVar8 = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) + 1)));
    if (puVar8 <= (*(ushort * PTR32 *)(gen_frame + 0x38))) {
      do {
        uVar13 = F_00bc5fc0((*(uint *)&gen_args[0]),(*(ushort * PTR32 *)(gen_frame + 0x3c)),puVar8);
        puVar8 = ((ushort *)GEN_TOP(((int)puVar8 + 1)));
      } while (puVar8 <= (*(ushort * PTR32 *)(gen_frame + 0x38)));
      return uVar13;
    }
    break;
  case 0xb: ;
    uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_00a7d290(0x22b,uVar13,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x38)),0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0xc: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) {
        F_00a7d290(0x225,piVar4,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x38))) / 100,0,REFG(float, 0x10916ec));
      }
      fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x38));
      if ((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) < 0) {
        fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
      uVar13 = F_00a6b870(&REFG(undefined4, 0x14ab050) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),
                            (float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)));
      return uVar13;
    }
    break;
  case 0xd: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa1860(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return uVar13;
    }
    break;
  case 0xe: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aabf60(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0xf: ;
    if ((*(uint *)&gen_args[0]) == REFG(undefined4, 0x1379690)) {
      puVar6 = ((ushort *)GEN_TOP(F_00ac2f90(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(float)(float10)0,(float)(float10)0)));
    }
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa3360(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]) == ((ushort *)GEN_TOP(0x1)));
      puVar6 = ((ushort *)GEN_TOP(F_00ac1a20((*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)))));
      if ((puVar6 != ((ushort *)GEN_TOP(0x2dd))) && (puVar6 != ((ushort *)GEN_TOP(0x2de)))) {
        uVar13 = F_00a7d4b0((*(ushort * PTR32 *)(gen_frame + 0x3c)),piVar4,0,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),0,0,0,0,REFG(float, 0x10916ec));
        return uVar13;
      }
    }
    break;
  case 0x10: ;
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar6;
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x38));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    puVar8 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
    uVar13 = F_00ac2fe0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar8))),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))));
    return uVar13;
  case 0x11: ;
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
    uVar13 = F_00ac30c0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),
                          (float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)));
    return uVar13;
  case 0x12: ;
    uVar13 = F_00ac3450(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(float)(float10)0);
    return uVar13;
  case 0x13: ;
    uVar13 = F_00ac3300(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)) == ((ushort *)GEN_TOP(0x1)),1);
    return uVar13;
  case 0x14: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG)));
      F_00b7aca0(pvVar12 GEN_EDX_ARG,puVar6);
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG)));
      uVar13 = F_00b7ad00(pvVar12 GEN_EDX_ARG,puVar6);
      return uVar13;
    }
    break;
  case 0x15: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar24 = 1;
      uVar23 = 1;
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG);
      uVar13 = F_00b7bb20(uVar13 GEN_EDX_ARG,puVar6,puVar8,uVar23,uVar24);
      return uVar13;
    }
    break;
  case 0x16: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
      puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG)));
      F_00b7ac70(pvVar12 GEN_EDX_ARG,puVar6,puVar8,puVar21);
    }
    uVar13 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_00b7ac70(((undefined *)GEN_TOP((uVar13 + 0x6c))) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
      return uVar13;
    }
    break;
  case 0x17: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
      puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG);
      uVar13 = F_00b7ade0(piVar4,puVar6,puVar8,puVar21);
      return uVar13;
    }
    break;
  case 0x18: ;
    *(ushort * PTR32 *)&REFG(undefined, 0x14ab2c4) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    uVar13 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x24,0,0);
    return uVar13;
  case 0x19: ;
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
      uVar13 = (uint)((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + 3) / 0x3c;
      uVar27 = 0x38b;
    }
    else if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))) {
      uVar13 = 0;
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) < ((ushort *)GEN_TOP(0xb8))) {
        uVar27 = 0x38c;
      }
      else {
        uVar27 = 0x38d;
      }
    }
    else {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x2))) goto LAB_00a57621;
      uVar27 = 0x38e;
      uVar13 = 0;
    }
    F_00a7d290(uVar27,piVar4,uVar13,0,0,REFG(float, 0x10916ec));
LAB_00a57621: ;
    REFG(undefined1, 0x14ab0d0) = SUB41((*(ushort * PTR32 *)(gen_frame + 0x3c)),0);
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
    ppuVar25 = &(*(ushort * PTR32 *)(gen_frame + 0x34));
    uVar27 = 0x32;
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG)));
    pvVar12 = ((undefined *)GEN_TOP(F_00484010(pvVar12 GEN_EDX_ARG,uVar27)));
    uVar13 = F_00490f30(pvVar12 GEN_EDX_ARG,ppuVar25);
    return uVar13;
  case 0x1a: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) =
           *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) ^
           (((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))) * '\b' ^ *((byte *)GEN_TOP(((int)piVar4 + 0x2dd2)))) & 8;
      return (uint)puVar6;
    }
    break;
  case 0x1b: ;
    REFG(ushort * PTR32, 0x14a73b8) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    return (uint)puVar6;
  case 0x1c: ;
    puVar6 = ((ushort *)GEN_TOP((uint)REFG(undefined1, 0x14ab0d4)));
    if (puVar6 == (*(ushort * PTR32 *)(gen_frame + 0x3c))) {
      iVar15 = 0;
      do {
        uVar13 = F_00a68680(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar15,0);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 6);
      return uVar13;
    }
    break;
  case 0x1d: ;
    if ((((ushort *)GEN_TOP((uint)REFG(undefined1, 0x14ab0d4))) == (*(ushort * PTR32 *)(gen_frame + 0x3c))) &&
       (puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x38)), (*(ushort * PTR32 *)(gen_frame + 0x38)) < &REFG(undefined, 0x6))) {
      uVar13 = F_00a68680(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0)));
      return uVar13;
    }
    break;
  case 0x1e: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa59d0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
      return uVar13;
    }
    break;
  case 0x1f: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa5b90(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x20: ;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) &&
       (*(byte *)(piVar4 + 0xb75) = *(byte *)(piVar4 + 0xb75) | 2, (*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0)))) {
      uVar13 = F_00aa4150(piVar4 GEN_EDX_ARG,0x25,0,0);
      return uVar13;
    }
    break;
  case 0x21: ;
    REFG(undefined1, 0x1338ad5) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0));
    return (uint)puVar6;
  case 0x22: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab4370(0xd9,piVar4,piVar4,0,0);
      return uVar13;
    }
    break;
  case 0x23: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00aa4460(piVar4 GEN_EDX_ARG);
        return uVar13;
      }
      uVar13 = F_00aa7450(piVar4 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return uVar13;
    }
    break;
  case 0x24: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) {
        piVar4[0xbb2] = GEN_FLT_TO(piVar4[0xbb2], REFG(float, 0x1087f04));
      }
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
        puVar6 = ((ushort *)GEN_TOP(F_00aa4150(piVar4 GEN_EDX_ARG,0x8e,0,0)));
      }
      *(byte *)(piVar4 + 0x24) = *(byte *)(piVar4 + 0x24) | 1;
      return (uint)puVar6;
    }
    uVar13 = F_00a55330(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((ushort *)GEN_TOP((uVar13 + 0x96))) = *((ushort *)GEN_TOP((uVar13 + 0x96))) & 0xffdf;
      return uVar13;
    }
    break;
  case 0x25: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00a55330(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if (uVar13 != 0) {
        *((ushort *)GEN_TOP((uVar13 + 0x96))) = *((ushort *)GEN_TOP((uVar13 + 0x96))) & 0xffdf;
        return uVar13;
      }
    }
    else {
      puVar6 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,10,0)));
      piVar4[0xbb2] = GEN_FLT_TO(piVar4[0xbb2], REFG(float, 0x1087f04));
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00ab4370(0xa3,piVar4,piVar4,0,0);
        return uVar13;
      }
    }
    break;
  case 0x26: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      *(byte *)(piVar4 + 0xb75) =
           *(byte *)(piVar4 + 0xb75) ^
           (((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) * '\b' ^ *(byte *)(piVar4 + 0xb75)) & 8;
      return (uint)puVar6;
    }
    break;
  case 0x27: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa0ca0(piVar4 GEN_EDX_ARG);
      return (uint)puVar6;
    }
    break;
  case 0x28: ;
    uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)));
    if ((uVar13 != 0) && (bVar1 = F_00a9f620(uVar13 GEN_EDX_ARG), bVar1 != 0)) {
      F_00a7e5a0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    }
    uVar13 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((undefined1 *)GEN_TOP((uVar13 + 0x54))) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0));
      return uVar13;
    }
    break;
  case 0x29: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar27 = 3;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
    if (uVar13 == 0) {
      return 0;
    }
    uVar27 = 0;
    (*(bool *)(gen_frame + 0x2f)) = false;
    if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))) {
        uVar27 = 0x24;
      }
      else {
        if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != (ushort *)&REFG(undefined, 0x4)) goto LAB_00a5a407;
        uVar27 = 0x23;
      }
      (*(bool *)(gen_frame + 0x2f)) = true;
    }
LAB_00a5a407: ;
    F_00a6e020(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    uVar28 = 4;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    puVar6 = ((ushort *)GEN_TOP(F_006de4e0(pvVar12 GEN_EDX_ARG,uVar28)));
    if ((*(bool *)(gen_frame + 0x2f)) != false) {
      bVar1 = F_0076ec40(uVar27,1,0x1e);
      return CONCAT31(extraout_var_36,bVar1);
    }
    break;
  case 0x2a: ;
    uVar13 = F_0046c080(REFG(int * PTR32, 0x1379694),0x11,0);
    return uVar13;
  case 0x2b: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_02,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a68400(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
        *(ushort * PTR32 *)&REFG(undefined, 0x14ab2c4) = (*(ushort * PTR32 *)(gen_frame + 0x30));
        return uVar13;
      }
    }
    break;
  case 0x2c: ;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x24)))) {
      uVar13 = F_00a7d4b0(0x259,piVar4,piVar4,1,0x24,(*(ushort * PTR32 *)(gen_frame + 0x38)),0,0,0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0x2d: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      if (bVar1 != 1) {
        uVar3 = F_00aa1910(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        return CONCAT22(extraout_var_39,uVar3);
      }
      uVar13 = F_00a7d4b0(0x1fe,piVar4,piVar4,0,0,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0x2e: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      iVar15 = *piVar4;
      piVar4[0x69] = (*(int *)&gen_args[9]);
      pcVar9 = *((gen_code32 *)GEN_TOP((iVar15 + 4)));
      piVar4[0x68] = (*(int *)&gen_args[8]);
      puVar6 = ((ushort *)GEN_TOP((*pcVar9)(piVar4)));
      if (puVar6 == ((ushort *)GEN_TOP(0x2))) {
        uVar13 = F_00a5f0b0((*(int *)&gen_args[8]),(*(int *)&gen_args[9]));
        uVar13 = F_00aa58e0(piVar4 GEN_EDX_ARG,uVar13);
        return uVar13;
      }
    }
    break;
  case 0x2f: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab4370(0x76,piVar4,piVar4,0,0);
      return uVar13;
    }
    break;
  case 0x30: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab4370(0x77,piVar4,piVar4,0,0);
      return uVar13;
    }
    break;
  case 0x31: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      *((byte *)GEN_TOP(((int)piVar4 + 0x8e))) =
           *((byte *)GEN_TOP(((int)piVar4 + 0x8e))) ^
           (((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) * '\x02' ^ *((byte *)GEN_TOP(((int)piVar4 + 0x8e)))) & 2;
      return (uint)puVar6;
    }
    break;
  case 0x32: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa1d10(piVar4 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)));
      return uVar13;
    }
    break;
  case 0x33: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa2c50(piVar4 GEN_EDX_ARG,0,0,0);
      uVar13 = F_00aa4270(piVar4 GEN_EDX_ARG,3,0,0);
      return uVar13;
    }
    break;
  case 0x34: ;
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
      REFG(undefined1, 0x14a73b0) = 0;
      REFG(float, 0x14a73b4) = 0.0;
      return (uint)puVar6;
    }
    if ((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))) {
      REFG(undefined1, 0x14a73b0) = 1;
      return (uint)(*(ushort * PTR32 *)(gen_frame + 0x38));
    }
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x38));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    REFG(float, 0x14a73b4) = (float)fVar17;
    return (uint)(*(ushort * PTR32 *)(gen_frame + 0x38));
  case 0x35: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa2da0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x36: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar27 = 3;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
      uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if (uVar13 != 0) {
        bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
        puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_06,bVar1)));
        if (bVar1 == 1) {
          puVar6 = ((ushort *)GEN_TOP(F_00770920(uVar13 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)))));
        }
      }
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00ab4370(0xb9,piVar4,piVar4,0,0);
        return uVar13;
      }
    }
    break;
  case 0x37: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar27 = 3;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
      uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if (uVar13 != 0) {
        bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
        puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_07,bVar1)));
        if (bVar1 == 1) {
          puVar6 = ((ushort *)GEN_TOP(F_00770960(uVar13 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)))));
        }
      }
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00aa4270(piVar4 GEN_EDX_ARG,0x8b7,0,0);
        return uVar13;
      }
    }
    break;
  case 0x38: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00bc5df0(piVar4 + 0x577 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x39: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar27 = 3;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if (uVar13 != 0) {
        uVar13 = F_00770940(uVar13 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        return uVar13;
      }
    }
    break;
  case 0x3a: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00a7b5b0(piVar4,piVar4,0x1f8,0,0,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0);
      piVar4[0x5a4] = (int)(*(ushort * PTR32 *)(gen_frame + 0x38));
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if ((*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00ab4370((*(ushort * PTR32 *)(gen_frame + 0x30)),piVar4,piVar4,0,0);
        return uVar13;
      }
    }
    break;
  case 0x3b: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa2c50(piVar4 GEN_EDX_ARG,0,0,0);
      uVar13 = F_00aa4270(piVar4 GEN_EDX_ARG,0x4d,0,0);
      *((byte *)GEN_TOP(((int)piVar4 + 0x8e))) = *((byte *)GEN_TOP(((int)piVar4 + 0x8e))) | 2;
      return uVar13;
    }
    break;
  case 0x3c: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa05b0(piVar4 GEN_EDX_ARG);
      F_00aa0100(piVar4 GEN_EDX_ARG,0,0);
      F_00b78380(piVar4 + 0x4d0 GEN_EDX_ARG);
      uVar3 = F_00b76d60(piVar4 + 0x4d0 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return CONCAT22(extraout_var_37,uVar3);
    }
    break;
  case 0x3d: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006f92a0(pvVar12 GEN_EDX_ARG,puVar6,puVar8);
    return uVar13;
  case 0x3e: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e5f20(pvVar12 GEN_EDX_ARG,puVar6);
    return uVar13;
  case 0x3f: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00aa7ae0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return CONCAT31(extraout_var_35,bVar1);
    }
    break;
  case 0x40: ;
    uVar13 = F_00a79280(&REFG(undefined, 0x14ac288) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return uVar13;
  case 0x41: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    uVar13 = F_006b8c00();
    uVar13 = F_006d6f50(uVar13 GEN_EDX_ARG,(char)puVar6);
    return uVar13;
  case 0x42: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00a5f530(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x43: ;
    uVar13 = F_00a5e200((*(uint *)&gen_args[0]));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      bVar1 = F_00a5f570(uVar13 GEN_EDX_ARG,(char)(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return CONCAT31(extraout_var_34,bVar1);
    }
    break;
  case 0x44: ;
    uVar13 = F_00a82300(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x45: ;
    uVar13 = F_00a82500(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x46: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006ded70(pvVar12 GEN_EDX_ARG,puVar6,puVar8,puVar21,(*(ushort * PTR32 *)&gen_args[5]));
    return uVar13;
  case 0x47: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    F_006b8c00();
    uVar13 = F_006d4b60(puVar6);
    return uVar13;
  case 0x48: ;
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    if (REFG(int, 0x14bcc80) == 0) {
      uVar13 = F_006b8c00();
      uVar13 = F_006c5190(uVar13 GEN_EDX_ARG);
      if ((char)uVar13 != '\0') {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,1,0x18,1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,0,0x18,1);
      }
    }
    switch((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x3c)))) {
    case 0x5f6: ;
      (*(undefined4 *)(gen_frame + 0x650)) = 0;
      (*(undefined4 *)(gen_frame + 0x654)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x658)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x650)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x650)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x650)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x6bc)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c0)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x6c4)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x6bc)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6bc)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x6bc)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x6b0)) = 0;
      (*(undefined4 *)(gen_frame + 0x6b4)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[5]);
      (*(undefined1 *)(gen_frame + 0x6b8)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x6b0)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6b0)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x6b0)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x638)) = 0;
      (*(undefined4 *)(gen_frame + 0x63c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[6]);
      (*(undefined1 *)(gen_frame + 0x640)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x638)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x638)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x638));
      break;
    default: ;
      goto switchD_00a5a715_caseD_5f7;
    case 0x5f8: ;
      (*(undefined4 *)(gen_frame + 0x578)) = 0;
      (*(undefined4 *)(gen_frame + 0x57c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x580)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x578)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x578)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x578)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x560)) = 0;
      (*(undefined4 *)(gen_frame + 0x564)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x568)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x560)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x560)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x560)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x548)) = 0;
      (*(undefined4 *)(gen_frame + 0x54c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[5]);
      (*(undefined1 *)(gen_frame + 0x550)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x548)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x548)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x548));
      break;
    case 0x5f9: ;
      (*(undefined4 *)(gen_frame + 0x500)) = 0;
      (*(undefined4 *)(gen_frame + 0x504)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x508)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x500)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x500)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x500)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x4e8)) = 0;
      (*(undefined4 *)(gen_frame + 0x4ec)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x4f0)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x4e8)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4e8)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x4e8));
      break;
    case 0x605: ;
      (*(undefined4 *)(gen_frame + 0x5c0)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c4)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x5c8)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x5c0)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5c0)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x5c0)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x5a8)) = 0;
      (*(undefined4 *)(gen_frame + 0x5ac)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x5b0)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x5a8)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5a8)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x5a8)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x590)) = 0;
      (*(undefined4 *)(gen_frame + 0x594)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[5]);
      (*(undefined1 *)(gen_frame + 0x598)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x590)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x590)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x590));
      break;
    case 0x606: ;
      (*(undefined4 *)(gen_frame + 0x5f0)) = 0;
      (*(undefined4 *)(gen_frame + 0x5f4)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x5f8)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x5f0)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5f0)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x5f0)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x5d8)) = 0;
      (*(undefined4 *)(gen_frame + 0x5dc)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x5e0)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x5d8)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5d8)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x5d8));
      break;
    case 0x607: ;
      (*(undefined4 *)(gen_frame + 0x620)) = 0;
      (*(undefined4 *)(gen_frame + 0x624)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x628)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x620)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x620)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x620)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x608)) = 0;
      (*(undefined4 *)(gen_frame + 0x60c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x610)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x608)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x608)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x608));
      break;
    case 0x608: ;
      (*(undefined4 *)(gen_frame + 0x530)) = 0;
      (*(undefined4 *)(gen_frame + 0x534)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x538)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x530)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x530)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x530)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x518)) = 0;
      (*(undefined4 *)(gen_frame + 0x51c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x520)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x518)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x518)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x518));
      break;
    case 0x63c: ;
    case 0x654: ;
      goto switchD_00a5a715_caseD_63c;
    case 0x63d: ;
      (*(undefined4 *)(gen_frame + 0x680)) = 0;
      (*(undefined4 *)(gen_frame + 0x684)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x688)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x680)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x680)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x680)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x668)) = 0;
      (*(undefined4 *)(gen_frame + 0x66c)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0x670)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x668)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x668)));
      puVar7 = &(*(undefined4 *)(gen_frame + 0x668));
    }
    F_004917c0(puVar7 GEN_EDX_ARG);
switchD_00a5a715_caseD_63c: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar14 = ((undefined1 *)(gen_frame + 0x10));
    uVar28 = 0;
    uVar27 = 0;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    F_0046abb0(pvVar12 GEN_EDX_ARG,puVar6,uVar27,uVar28,puVar14);
    goto switchD_00a5a715_caseD_5f7;
  case 0x49: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    F_006b8c00();
    uVar13 = F_006c51c0(puVar6);
    return uVar13;
  case 0x4a: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    uVar13 = F_00b070f0();
    uVar13 = F_00b0a000(uVar13 GEN_EDX_ARG,puVar6,(char)puVar8);
    return uVar13;
  case 0x4b: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(F_00b070f0()));
    uVar13 = F_00b09c30(pvVar12 GEN_EDX_ARG,puVar6);
    return uVar13;
  case 0x4c: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    pvVar12 = ((undefined *)GEN_TOP(F_00b070f0()));
    uVar13 = F_00b092a0(pvVar12 GEN_EDX_ARG,puVar6,puVar8);
    return uVar13;
  case 0x4d: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    F_00b070f0();
    uVar13 = F_00b0b310(puVar6,puVar8);
    return uVar13;
  case 0x4e: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    F_00b070f0();
    uVar13 = F_00b0b6d0(puVar6);
    return uVar13;
  case 0x4f: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar3 = F_00a5f550(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return CONCAT22(extraout_var_40,uVar3);
    }
    break;
  case 0x50: ;
    uVar13 = F_00b0aa00((*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x51: ;
    uVar13 = F_00b09710((*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x52: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e2dc0(pvVar12 GEN_EDX_ARG,puVar6,puVar8);
    return uVar13;
  case 0x53: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006d6eb0(pvVar12 GEN_EDX_ARG,puVar6,puVar8,puVar21,(*(ushort * PTR32 *)&gen_args[5]),(*(ushort * PTR32 *)&gen_args[6]),(*(uint *)&gen_args[7]));
    return uVar13;
  case 0x54: ;
    uVar13 = F_00b09220((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return uVar13;
  case 0x55: ;
    uVar13 = F_00b09260((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return uVar13;
  case 0x56: ;
    F_00b8b4f0((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return (uint)puVar6;
  case 0x57: ;
    uVar13 = F_00a5c720(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1)));
    return uVar13;
  case 0x58: ;
    REFG(ushort * PTR32, 0x14ab2d8) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    REFG(undefined1, 0x14ab2c8) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
    REFG(undefined4, 0x14ab2c9) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0));
    REFG(undefined4, 0x14ab2ca) = (*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[5]) + 0))));
    REFG(undefined4, 0x14ab2cb) = (*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[6]) + 0))));
    return (uint)(*(ushort * PTR32 *)&gen_args[6]) & 0xff;
  case 0x59: ;
    bVar16 = (*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1));
    (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x34)) + 0)) = bVar16;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(ushort * PTR32 *)(gen_frame + 0x34)), 1, 3),bVar16)));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x34));
    F_00b8dea0(&REFG(undefined, 0x14a7470),(*(ushort * PTR32 *)(gen_frame + 0x3c)),bVar16);
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006de5d0(pvVar12 GEN_EDX_ARG,puVar8,puVar6);
    return uVar13;
  case 0x5a: ;
    bVar16 = (*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1));
    (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x34)) + 0)) = bVar16;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(ushort * PTR32 *)(gen_frame + 0x34)), 1, 3),bVar16)));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x34));
    F_00b8dd50(&REFG(undefined, 0x14a7470),(*(ushort * PTR32 *)(gen_frame + 0x3c)),bVar16);
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006de500(pvVar12 GEN_EDX_ARG,puVar8,puVar6);
    uVar13 = F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    return uVar13;
  case 0x5b: ;
    uVar13 = F_00b0b1f0((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return uVar13;
  case 0x5c: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    F_00b070f0();
    uVar13 = F_00b0b700(puVar6);
    return uVar13;
  case 0x5d: ;
    uVar13 = F_00b0aa80();
    return uVar13;
  case 0x5e: ;
    uVar13 = F_00a7d830(1,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x5f: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006d6f00(pvVar12 GEN_EDX_ARG,puVar6,puVar8);
    return uVar13;
  case 0x60: ;
    *(ushort * PTR32 *)&REFG(undefined, 0x14ab2cc) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    *(ushort * PTR32 *)&REFG(undefined, 0x14ab2d0) = (*(ushort * PTR32 *)(gen_frame + 0x38));
    *(ushort * PTR32 *)&REFG(undefined, 0x14ab2d4) = (*(ushort * PTR32 *)(gen_frame + 0x30));
    uVar13 = F_00b9e1d0(&REFG(undefined, 0x14b3134) GEN_EDX_ARG);
    return uVar13;
  case 0x61: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_006b8c00();
      pvVar12 = ((undefined *)GEN_TOP((uVar13 + 0x100)));
      puVar6 = ((ushort *)GEN_TOP(F_00753350(pvVar12 GEN_EDX_ARG)));
      if ((puVar6 != ((ushort *)GEN_TOP(0x0))) && (*(ushort * PTR32 *)(puVar6 + 4) == (*(ushort * PTR32 *)(gen_frame + 0x3c)))) {
        F_006da800(pvVar12 GEN_EDX_ARG,piVar4,0,0);
        uVar13 = F_006da800(pvVar12 GEN_EDX_ARG,piVar4,1,0);
        return uVar13;
      }
    }
    break;
  case 0x62: ;
    uVar3 = F_00b078e0((*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return CONCAT22(extraout_var_41,uVar3);
  case 99: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
    F_006b8c00();
    puVar6 = ((ushort *)GEN_TOP(F_006c52d0(puVar6,puVar8,puVar21)));
    break;
  case 100: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab5d80(&REFG(int, 0x14bcc80) GEN_EDX_ARG,piVar4,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x65: ;
    uVar13 = F_00a6f000((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
    return uVar13;
  case 0x66: ;
    uVar13 = F_00a6f140(&REFG(undefined, 0x14ab428) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    return uVar13;
  case 0x67: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00a6acb0(piVar4);
      return uVar13;
    }
    break;
  case 0x68: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab5cf0(&REFG(int, 0x14bcc80) GEN_EDX_ARG,piVar4,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0x69: ;
    uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_00ab78d0(&REFG(int, 0x14bcc80) GEN_EDX_ARG,uVar13,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(char)(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
      return uVar13;
    }
    break;
  case 0x6a: ;
    uVar13 = F_00ab5b10(&REFG(int, 0x14bcc80) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0x6b: ;
    F_00a69710(&REFG(undefined, 0x14ab380) GEN_EDX_ARG);
    return (uint)puVar6;
  case 0x6c: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      fVar17 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)(int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3c))) / fVar17);
      (*(float *)(gen_frame + 0x1c)) = (float)((float10)(int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x38))) / fVar17);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x30))) / fVar17);
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(int)(*(ushort * PTR32 *)&gen_args[5]) / fVar17))))));
      uVar13 = F_00a9f9e0(piVar4 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),((float)GEN_TOF(((float10)(int)(*(ushort * PTR32 *)&gen_args[5]) / fVar17))));
      return uVar13;
    }
    break;
  case 0x6d: ;
    uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))) {
        iVar15 = 0;
      }
      else {
        iVar15 = ((int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x30))) * 100) / (int)(*(ushort * PTR32 *)(gen_frame + 0x38));
      }
      uVar13 = F_00a7d290(0x24c,uVar13,0,((undefined1 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x38))))),iVar15,
                            REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0x6e: ;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0)))) {
      uVar13 = F_00a5feb0(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
      uVar10 = F_00a5feb0(piVar4 GEN_EDX_ARG);
      F_0046f4a0(&(*(float *)(gen_frame + 0x18)),uVar10,uVar13);
      dVar20 = F_0054cd20(&(*(float *)(gen_frame + 0x18)) GEN_EDX_ARG);
      puVar6 = extraout_EAX;
      if ((dVar20 <= *(double *)&REFG(undefined, 0x1090710)) &&
         (puVar8 = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + 1))), puVar8 <= (*(ushort * PTR32 *)(gen_frame + 0x3c)))) {
        do {
          uVar13 = F_00a7d290(0x53b,piVar4,0,puVar8,0,REFG(float, 0x10916ec));
          puVar8 = ((ushort *)GEN_TOP(((int)puVar8 + 1)));
        } while (puVar8 <= (*(ushort * PTR32 *)(gen_frame + 0x3c)));
        return uVar13;
      }
    }
    break;
  case 0x6f: ;
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x6d,0,0);
    }
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x38));
    REFG(undefined1, 0x14ab585) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    REFG(float, 0x14ab588) = (float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118));
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *(float *)&REFG(undefined, 0x14ab58c) = (float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118));
    return (uint)(*(ushort * PTR32 *)(gen_frame + 0x38));
  case 0x70: ;
    uVar13 = F_00a6b2b0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return uVar13;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(ushort * PTR32 *)(gen_frame + 0x710)) = ((ushort *)GEN_TOP(0x0));
    (*(undefined1 *)(gen_frame + 0x718)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x710)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    (*(ushort * PTR32 * PTR32 *)(gen_frame + 0x714)) = &(*(ushort * PTR32 *)(gen_frame + 0x710));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x710)));
    F_004917c0(&(*(ushort * PTR32 *)(gen_frame + 0x710)) GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x529));
    goto LAB_00a56d30;
  case 0x71: ;
    F_00a6b320(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 0x5c;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((undefined1 *)GEN_TOP((uVar13 + 0xc))) = 1;
      return uVar13;
    }
    break;
  case 0x72: ;
    if (((piVar4 != ((int *)GEN_TOP(0x0))) && (pvVar12 = ((undefined *)GEN_TOP(piVar4[0xb80])), (char)piVar4[0xb82] == '\x01'))
       && (pvVar12 != ((undefined *)GEN_TOP(0x0)))) {
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00aa2260(pvVar12 GEN_EDX_ARG,0,(*(ushort * PTR32 *)(gen_frame + 0x38)));
        return uVar13;
      }
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))) {
        uVar13 = F_00aa2260(pvVar12 GEN_EDX_ARG,1,(*(ushort * PTR32 *)(gen_frame + 0x38)));
        return uVar13;
      }
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c)) - 1;
      if (puVar6 == ((ushort *)GEN_TOP(0x0))) {
        uVar13 = F_00aa2260(pvVar12 GEN_EDX_ARG,4,(*(ushort * PTR32 *)(gen_frame + 0x38)));
        return uVar13;
      }
    }
    break;
  case 0x73: ;
    puVar7 = ((undefined4 *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)))));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x38));
      *(undefined1 *)(puVar7 + 0x1a) = 3;
      *((undefined1 *)GEN_TOP(((int)puVar7 + 0x6a))) = 1;
      return (uint)puVar7;
    }
    break;
  case 0x74: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if (((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0x0))) && ((char)piVar4[0x62] != '\x02')) {
        puVar6 = ((ushort *)GEN_TOP(F_00aa4150(piVar4 GEN_EDX_ARG,0x8f,0,0)));
      }
      if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
        uVar13 = F_00a5feb0(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
        uVar10 = F_00a5feb0(piVar4 GEN_EDX_ARG);
        F_0046f4a0(&(*(float *)(gen_frame + 0x18)),uVar10,uVar13);
        dVar20 = F_0054cd20(&(*(float *)(gen_frame + 0x18)) GEN_EDX_ARG);
        puVar6 = extraout_EAX_02;
        if (dVar20 <= (double)*(float *)&REFG(undefined, 0x10e539c)) {
          uVar13 = F_00a7d4b0(0x530,piVar4,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
          return uVar13;
        }
      }
    }
    break;
  case 0x75: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00a7d4b0(0x538,piVar4,piVar4,0,0,0,0,0,0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0x76: ;
    uVar13 = F_00a71240(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)));
    REFG(undefined1, 0x14ab73c) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
    REFG(undefined1, 0x14ab73d) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0));
    return CONCAT31((int3)(uVar13 >> 8),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0)));
  case 0x77: ;
    if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x6c,0,0);
    }
    REFG(undefined4, 0x14ab5b4) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
    *(ushort * PTR32 *)&REFG(undefined, 0x14ab5b0) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    REFG(undefined1, 0x14ab5b5) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 0x5c;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((undefined1 *)GEN_TOP((uVar13 + 0xc))) = 1;
      return uVar13;
    }
    break;
  case 0x78: ;
    F_00a6b360(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,0,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)));
    F_00a6b360(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,1,(char)(*(ushort * PTR32 *)(gen_frame + 0x38)));
    F_00a6b360(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,2,(char)(*(ushort * PTR32 *)(gen_frame + 0x30)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 0x5c;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((undefined1 *)GEN_TOP((uVar13 + 0xc))) = 1;
      return uVar13;
    }
    break;
  case 0x79: ;
    puVar6 = ((ushort *)GEN_TOP(F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)))));
    if (puVar6 != ((ushort *)GEN_TOP(0x0))) {
      *(undefined1 *)(puVar6 + 0x102) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
      *(ushort * PTR32 *)(puVar6 + 0x104) = (*(ushort * PTR32 *)(gen_frame + 0x30));
    }
    if ((*(ushort * PTR32 *)&gen_args[5]) != ((ushort *)GEN_TOP(0x0))) {
      uVar13 = F_00a6b4f0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x30)));
      return uVar13;
    }
    break;
  case 0x7a: ;
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    if (((*(ushort * PTR32 *)(gen_frame + 0x3c)) != ((ushort *)GEN_TOP(0xffffffff))) &&
       (puVar6 = ((ushort *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c))))), puVar6 != ((ushort *)GEN_TOP(0x0)))) {
      *((undefined1 *)GEN_TOP(((int)puVar6 + 0x69))) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
    }
    if ((*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0))) {
      REFG(undefined1, 0x14ab5b9) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
      return (uint)puVar6;
    }
    break;
  case 0x7b: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ab2cc0((*(ushort * PTR32 *)(gen_frame + 0x38)));
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if (uVar13 != 0) {
        uVar10 = (uint)*((ushort *)GEN_TOP((uVar13 + (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3c))) * 2)));
        if (*((char *)GEN_TOP((uVar13 + 7))) != '\x01') {
          uVar13 = F_00a7d290(0x52c,piVar4,uVar10,0,0,REFG(float, 0x10916ec));
          return uVar13;
        }
        uVar13 = F_00a7d4b0(0x52b,piVar4,0,1,uVar10,0,0,0,0,REFG(float, 0x10916ec));
        return uVar13;
      }
    }
    break;
  case 0x7c: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      piVar4[0xbb2] = GEN_FLT_TO(piVar4[0xbb2], REFG(float, 0x109cb08));
      return (uint)puVar6;
    }
    break;
  case 0x7d: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,10,0);
      uVar13 = F_00aa0980(piVar4 GEN_EDX_ARG,(float)(float10)0,0);
      piVar4[0xbb2] = GEN_FLT_TO(piVar4[0xbb2], REFG(float, 0x1087f04));
      return uVar13;
    }
    break;
  case 0x7e: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    puVar11 = ((uint *)GEN_TOP(F_00ab2320((*(ushort * PTR32 *)(gen_frame + 0x3c)))));
    if (puVar11 == ((uint *)GEN_TOP(0x0))) {
      return 0;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
    F_004918c0(((undefined1 *)(gen_frame + 0x488)) GEN_EDX_ARG,uVar13);
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x488)));
    F_004917c0(((undefined1 *)(gen_frame + 0x488)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x280));
    goto LAB_00a56d30;
  case 0x7f: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    puVar11 = ((uint *)GEN_TOP(F_00ab2320((*(ushort * PTR32 *)(gen_frame + 0x3c)))));
    if (puVar11 == ((uint *)GEN_TOP(0x0))) {
      return 0;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x148)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
    F_004918c0(((undefined1 *)(gen_frame + 0x470)) GEN_EDX_ARG,uVar13);
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x470)));
    F_004917c0(((undefined1 *)(gen_frame + 0x470)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x148)) GEN_EDX_ARG);
    uVar27 = REFG(undefined4, 0x108cc50);
    uVar13 = F_00ac1ac0(0xb,(*(ushort * PTR32 *)(gen_frame + 0x38)));
    uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x3b0)) GEN_EDX_ARG,uVar13,uVar27);
    F_004918c0(((undefined1 *)(gen_frame + 0x464)) GEN_EDX_ARG,uVar13);
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x464)));
    F_004917c0(((undefined1 *)(gen_frame + 0x464)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x3b0)) GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x282));
    goto LAB_00a56d30;
  case 0x80: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00aaa4e0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),1);
      return CONCAT31(extraout_var_03,bVar1);
    }
    break;
  case 0x81: ;
    if (((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x1))) && (bVar1 = F_009080e0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c))), bVar1 == 0))
    {
      F_00a7d4b0(0x261,piVar4,0,8,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0,0,REFG(float, 0x10916ec));
    }
    uVar13 = F_00a6e900(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    return uVar13;
  case 0x82: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00475f20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_00475f50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(int *)&gen_args[8]),(*(int *)&gen_args[9]),(*(ushort * PTR32 *)(gen_frame + 0x30)),0xffffffff,1);
      uVar13 = F_00aa0ee0(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x8)));
      return uVar13;
    }
    break;
  case 0x83: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa0ef0(piVar4 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0x84: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa0f00(piVar4 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0x85: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa0f10(piVar4 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0x86: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa9970(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
      return uVar13;
    }
    break;
  case 0x87: ;
    uVar13 = F_006e4ad0((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0)));
    return uVar13;
  case 0x88: ;
    uVar13 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c)) & 0xffff | 0x30000;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e3240(pvVar12 GEN_EDX_ARG,uVar13);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((undefined1 *)GEN_TOP((uVar13 + 0x148))) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
      return uVar13;
    }
    break;
  case 0x89: ;
    iVar15 = 0;
    (*(bool *)(gen_frame + 0x2f)) = (bool)((byte)(*(uint *)&gen_args[7]) & 1);
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x0));
    switch((unsigned int)(uintptr_t)((uint)(*(ushort * PTR32 *)(gen_frame + 0x3c)) & 0xff)) {
    case 2: ;
      if (((*(uint *)&gen_args[7]) & 1) == 0) {
        iVar15 = 0xec16;
        (*(uint *)(gen_frame + 0x4)) = 1;
      }
      else {
        iVar15 = 0xec30;
        (*(uint *)(gen_frame + 0x4)) = 5;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x1));
      }
      break;
    case 3: ;
      if (((*(uint *)&gen_args[7]) & 1) == 0) {
        iVar15 = 0xec15;
        (*(uint *)(gen_frame + 0x4)) = 2;
      }
      else {
        iVar15 = 0xec2f;
        (*(uint *)(gen_frame + 0x4)) = 6;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x1));
      }
      break;
    case 4: ;
      if (((*(uint *)&gen_args[7]) & 1) == 0) {
        iVar15 = 0xec11;
        (*(uint *)(gen_frame + 0x4)) = 3;
      }
      else {
        iVar15 = 0xec2e;
        (*(uint *)(gen_frame + 0x4)) = 7;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x2));
      }
      break;
    case 5: ;
      if (((*(uint *)&gen_args[7]) & 1) == 0) {
        iVar15 = 0xec10;
        (*(uint *)(gen_frame + 0x4)) = 4;
      }
      else {
        iVar15 = 0xec2d;
        (*(uint *)(gen_frame + 0x4)) = 8;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x2));
      }
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,&REFG(undefined, 0x10e5463),REFG(undefined4, 0x108cc50));
    switch((unsigned int)(uintptr_t)((uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x3c))) >> 8 & 0xff)) {
    case 0: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18ed8)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x250)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x250));
      break;
    case 1: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18ed9)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x98));
      break;
    case 2: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18eda)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x300));
      break;
    case 3: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18edb)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x358)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x358));
      break;
    case 4: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18edc)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x2a8)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x2a8));
      break;
    case 5: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18edd)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x1a0));
      break;
    case 6: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18ede)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0xf0));
      break;
    case 7: ;
      puVar11 = ((uint *)GEN_TOP(F_00ab31d0(0x18edf)));
      uVar13 = F_0042cc20(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*puVar11 & 0xffffff) + (int)puVar11,REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13);
      puVar14 = ((undefined1 *)(gen_frame + 0x40));
      break;
    default: ;
      goto switchD_00a5953b_default;
    }
    F_0042c880(puVar14 GEN_EDX_ARG);
switchD_00a5953b_default: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      if ((*(bool *)(gen_frame + 0x2f)) == false) {
        F_004918c0(((undefined1 *)(gen_frame + 0x494)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x408)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x494)));
        F_004917c0(((undefined1 *)(gen_frame + 0x494)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x4f4)) = 0;
        (*(undefined4 *)(gen_frame + 0x4f8)) = 0;
        (*(undefined1 *)(gen_frame + 0x4fc)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x4f4)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x30)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4f4)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4f4)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x30)) = ((ushort *)GEN_TOP(((uint)(*(ushort * PTR32 *)(gen_frame + 0x38)) & 0xff)));
        (*(undefined4 *)(gen_frame + 0x584)) = 0;
        (*(undefined4 *)(gen_frame + 0x588)) = 0;
        (*(undefined1 *)(gen_frame + 0x58c)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x584)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x30)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x584)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x584)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x6a4)) = 0;
        (*(undefined4 *)(gen_frame + 0x6a8)) = 0;
        (*(undefined1 *)(gen_frame + 0x6ac)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x6a4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6a4)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x6a4)) GEN_EDX_ARG);
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0x43e;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      }
      else {
        (*(undefined4 *)(gen_frame + 0x4c4)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c8)) = 0;
        (*(undefined1 *)(gen_frame + 0x4cc)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x4c4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4c4)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4c4)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x4)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x38)) & 0xff;
        (*(undefined4 *)(gen_frame + 0x59c)) = 0;
        (*(undefined4 *)(gen_frame + 0x5a0)) = 0;
        (*(undefined1 *)(gen_frame + 0x5a4)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x59c)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x59c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x59c)) GEN_EDX_ARG);
        F_004918c0(((undefined1 *)(gen_frame + 0x47c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x408)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x47c)));
        F_004917c0(((undefined1 *)(gen_frame + 0x47c)) GEN_EDX_ARG);
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0xdad;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      }
      F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
      F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      if (iVar15 != 0) {
        uVar27 = 0x1f;
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
        pvVar12 = ((undefined *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
        if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
          F_00773dc0(pvVar12 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x34)),(*(ushort * PTR32 *)&gen_args[5]),(*(ushort * PTR32 *)&gen_args[6]),iVar15,0);
        }
      }
    }
    uVar18 = F_0042c880(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG);
    return (uint)uVar18;
  case 0x8a: ;
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)piVar5;
    }
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x6c8)) = 0;
      (*(undefined4 *)(gen_frame + 0x6cc)) = 0;
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      (*(undefined1 *)(gen_frame + 0x6d0)) = 0xff;
      F_00490f30(&(*(undefined4 *)(gen_frame + 0x6c8)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
      F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6c8)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x6c8)) GEN_EDX_ARG);
    }
    puVar14 = ((undefined1 *)(gen_frame + 0x10));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
    goto LAB_00a56d39;
  case 0x8b: ;
    puVar6 = ((ushort *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (puVar6 != ((ushort *)GEN_TOP(0x0)))) {
      F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      puVar14 = ((undefined1 *)(gen_frame + 0x10));
      uVar27 = 0xdae;
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)puVar6 + 0x28))))(puVar6 GEN_EDX_ARG)));
      F_0046ab30(pvVar12 GEN_EDX_ARG,uVar27,piVar4,puVar14);
      uVar27 = 0x1f;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)puVar6 + 0x48))))(puVar6 GEN_EDX_ARG);
      pvVar12 = ((undefined *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
      if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
        F_00773e40(pvVar12 GEN_EDX_ARG,1);
        F_00773e40(pvVar12 GEN_EDX_ARG,2);
      }
      goto switchD_00a5a715_caseD_5f7;
    }
    break;
  case 0x8c: ;
    uVar13 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c)) & 0xffff | 0x30000;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e3240(pvVar12 GEN_EDX_ARG,uVar13);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      bVar1 = F_006bdde0(uVar13 GEN_EDX_ARG,(char)(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return CONCAT31(extraout_var_32,bVar1);
    }
    break;
  case 0x8d: ;
    uVar13 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c)) & 0xffff | 0x30000;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    pvVar12 = ((undefined *)GEN_TOP(F_006e3240(pvVar12 GEN_EDX_ARG,uVar13)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
      uVar13 = F_006bde00(pvVar12 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0x8e: ;
    uVar27 = 0x150001;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e3240(pvVar12 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_00706c70((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
      return uVar13;
    }
    break;
  case 0x8f: ;
    uVar13 = F_00a5c790(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    return uVar13;
  case 0x90: ;
    REFG(ushort * PTR32, 0x14ab378) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    return (uint)puVar6;
  case 0x91: ;
    uVar13 = F_00a71b20(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0)));
    return uVar13;
  case 0x92: ;
    *((undefined1 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0x14ab343))) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0));
    return (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c));
  case 0x93: ;
    F_00a6cfd0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar27 = 0xdc2;
      puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      goto LAB_00a59c6d;
    }
    break;
  case 0x94: ;
    uVar27 = 0xa0001;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006e3240(pvVar12 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_006befd0((*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
      return uVar13;
    }
    break;
  case 0x95: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
    if (bVar1 != 0) {
      REFG(ushort * PTR32, 0x14a66c0) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      REFG(ushort * PTR32, 0x14a66c4) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      return CONCAT31(extraout_var_14,bVar1);
    }
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return CONCAT31(extraout_var_14,bVar1);
    }
    fVar19 = F_00a601f0(piVar5 GEN_EDX_ARG,piVar4);
    fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
    if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
      fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    if (!((float10)fVar19 < fVar17)) {
      return (uint)(*(ushort * PTR32 *)(gen_frame + 0x30));
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x65c)) = 0;
    (*(undefined4 *)(gen_frame + 0x660)) = 0;
    (*(undefined1 *)(gen_frame + 0x664)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x65c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x65c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x65c)) GEN_EDX_ARG);
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0x554)) = 0;
    (*(undefined4 *)(gen_frame + 0x558)) = 0;
    (*(undefined1 *)(gen_frame + 0x55c)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x554)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x554)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x554)) GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x4b0));
    goto LAB_00a56d30;
  case 0x96: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    uVar3 = F_00a9fe00(piVar4 GEN_EDX_ARG);
    F_00ab4370(0xd2,piVar4,piVar4,0,(uint)uVar3);
    F_00aa4150(piVar4 GEN_EDX_ARG,0xfd,0,0);
    (*(bool *)(gen_frame + 0x2f)) = (*(ushort * PTR32 *)&gen_args[5]) != ((ushort *)GEN_TOP(0x0));
    if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
      fVar19 = F_00a601f0(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG,piVar4);
      fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
      if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
        fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      if ((float10)fVar19 < fVar17) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x644)) = 0;
        (*(undefined4 *)(gen_frame + 0x648)) = 0;
        (*(undefined1 *)(gen_frame + 0x64c)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x644)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x644)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x644)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x4ac)) = 0;
        (*(undefined4 *)(gen_frame + 0x4b0)) = 0;
        (*(undefined1 *)(gen_frame + 0x4b4)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x4ac)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4ac)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4ac)) GEN_EDX_ARG);
        piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar27 = 0x4b1;
LAB_00a58405: ;
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        piVar22 = piVar4;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
        F_0046ab30(pvVar12 GEN_EDX_ARG,uVar27,piVar22,puVar14);
        F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      }
    }
    goto LAB_00a58420;
  case 0x97: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    uVar3 = F_00a9fe00(piVar4 GEN_EDX_ARG);
    F_00ab4370(0xd3,piVar4,piVar4,0,(uint)uVar3);
    F_00aa4150(piVar4 GEN_EDX_ARG,0xfe,0,0);
    (*(bool *)(gen_frame + 0x2f)) = (*(ushort * PTR32 *)&gen_args[5]) != ((ushort *)GEN_TOP(0x0));
    if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
      fVar19 = F_00a601f0(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG,piVar4);
      fVar17 = (float10)(int)(*(ushort * PTR32 *)(gen_frame + 0x30));
      if ((int)(*(ushort * PTR32 *)(gen_frame + 0x30)) < 0) {
        fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      if ((float10)fVar19 < fVar17) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x62c)) = 0;
        (*(undefined4 *)(gen_frame + 0x630)) = 0;
        (*(undefined1 *)(gen_frame + 0x634)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x62c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x62c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x62c)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x53c)) = 0;
        (*(undefined4 *)(gen_frame + 0x540)) = 0;
        (*(undefined1 *)(gen_frame + 0x544)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x53c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x53c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x53c)) GEN_EDX_ARG);
        piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar27 = 0x4b2;
        goto LAB_00a58405;
      }
    }
LAB_00a58420: ;
    bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
    puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_15,bVar1)));
    if (bVar1 != 0) {
      F_00a3a050();
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if ((*(bool *)(gen_frame + 0x2f)) != false) {
        REFG(undefined4, 0x14a7344) = 0;
        *(undefined4 *)&REFG(undefined, 0x14a7340) = 0;
        return 0;
      }
    }
    break;
  case 0x98: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aaa5b0(piVar4 GEN_EDX_ARG,7);
      F_00aa0040(piVar4 GEN_EDX_ARG,0,0xec,0xed,0,REFG(float, 0x1090708),0,0);
      F_00aa80c0(piVar4 GEN_EDX_ARG,2,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      F_00aa80c0(piVar4 GEN_EDX_ARG,1,(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
      uVar13 = F_00aa2620(piVar4 GEN_EDX_ARG,2);
      return uVar13;
    }
    break;
  case 0x99: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00aa4270(piVar4 GEN_EDX_ARG,0xee,0,0);
      F_00aa80c0(piVar4 GEN_EDX_ARG,2,0,0);
      F_00aa80c0(piVar4 GEN_EDX_ARG,1,0,0);
      if ((char)piVar4[0x62] == '\a') {
        F_00aaa5b0(piVar4 GEN_EDX_ARG,1);
      }
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_16,bVar1)));
      if (bVar1 != 0) {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar27 = 0x23;
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
        pvVar12 = ((undefined *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
        uVar13 = F_00a5d090(pvVar12 GEN_EDX_ARG);
        return uVar13;
      }
    }
    break;
  case 0x9a: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_22,bVar1)));
      if (bVar1 != 0) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x4b8)) = 0;
        (*(undefined4 *)(gen_frame + 0x4bc)) = 0;
        (*(undefined1 *)(gen_frame + 0x4c0)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x4b8)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4b8)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4b8)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
        (*(undefined4 *)(gen_frame + 0x5fc)) = 0;
        (*(undefined4 *)(gen_frame + 0x600)) = 0;
        (*(undefined1 *)(gen_frame + 0x604)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x5fc)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5fc)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x5fc)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x524)) = 0;
        (*(undefined4 *)(gen_frame + 0x528)) = 0;
        (*(undefined1 *)(gen_frame + 0x52c)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x524)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x524)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x524)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0x4b4;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
        F_00a3a050();
        goto switchD_00a5a715_caseD_5f7;
      }
    }
    break;
  case 0x9b: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_17,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar27 = 0x23;
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
        uVar10 = F_00763050(uVar10 GEN_EDX_ARG,uVar27);
        uVar13 = F_008edf10(uVar10 GEN_EDX_ARG,uVar13,(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
        return uVar13;
      }
    }
    break;
  case 0x9c: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
    if (bVar1 != 0) {
      F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar27 = 0x23;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
      *(undefined4 *)&REFG(undefined, 0x14a7340) = 0;
      REFG(undefined4, 0x14a7344) = 0;
      return 0;
    }
    return CONCAT31(extraout_var_18,bVar1);
  case 0x9d: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_19,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        puVar6 = ((ushort *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if ((uVar13 != 0) && (puVar6 != ((ushort *)GEN_TOP(0x0)))) {
          uVar28 = 0;
          uVar27 = 0x4c2;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)puVar6 + 0x28))))(puVar6 GEN_EDX_ARG)));
          uVar13 = F_0046ac40(pvVar12 GEN_EDX_ARG,uVar27,uVar28,uVar13);
          return uVar13;
        }
      }
    }
    break;
  case 0x9e: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_20,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar27 = 0x23;
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
        piVar5 = ((int *)GEN_TOP(F_00763050(uVar10 GEN_EDX_ARG,uVar27)));
        puVar6 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG)));
        if (uVar13 != 0) {
          uVar28 = 0;
          uVar27 = 0x4c4;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
          uVar13 = F_0046ac40(pvVar12 GEN_EDX_ARG,uVar27,uVar28,uVar13);
          return uVar13;
        }
      }
    }
    break;
  case 0x9f: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_27,bVar1)));
      if (bVar1 != 0) {
        (*(bool *)(gen_frame + 0x2f)) = (*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0));
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if ((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))) {
          uVar27 = 0x31b;
        }
        else {
          uVar27 = 0x31a;
        }
        puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046a6b0(pvVar12 GEN_EDX_ARG,uVar27,puVar6);
        F_004ea820(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0x2c);
        if ((*(bool *)(gen_frame + 0x2f)) != false) {
          piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x34))))(piVar4 GEN_EDX_ARG)));
          F_0044c070(pvVar12 GEN_EDX_ARG);
        }
        uVar13 = F_00a3a0a0();
        return uVar13;
      }
    }
    break;
  case 0xa0: ;
    *(ushort * PTR32 *)&REFG(undefined, 0x14a7348) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    return (uint)puVar6;
  case 0xa1: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_28,bVar1)));
      if (bVar1 != 0) {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        pcVar9 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x28)));
        puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x38));
        if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
          uVar27 = 0x76a;
        }
        else {
          uVar27 = 0x768;
        }
override_prt_a58e2c_776d44d0: ;
        pvVar12 = ((undefined *)GEN_TOP((*pcVar9)(piVar4)));
        F_0046a6b0(pvVar12 GEN_EDX_ARG,uVar27,puVar6);
        uVar13 = F_00a3a0d0();
        return uVar13;
      }
    }
    break;
  case 0xa2: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_29,bVar1)));
      if (bVar1 != 0) {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        pcVar9 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x28)));
        puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        if ((*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))) {
          uVar27 = 0x76b;
        }
        else {
          uVar27 = 0x769;
        }
        goto override_prt_a58e2c_776d44d0;
      }
    }
    break;
  case 0xa3: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
    if (bVar1 == 0) {
      return CONCAT31(extraout_var_21,bVar1);
    }
    uVar13 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (uVar13 != 0) {
      F_00aa4270(uVar13 GEN_EDX_ARG,0x3ce,0,0);
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x614)) = 0;
    (*(undefined4 *)(gen_frame + 0x618)) = 0;
    (*(undefined1 *)(gen_frame + 0x61c)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x614)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x614)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x614)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x4b6));
    goto LAB_00a58911;
  case 0xa4: ;
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == REFG(ushort * PTR32, 0x14a7230)) {
      *(undefined4 *)&REFG(undefined4, 0x14a72b4) = CONCAT31(*(undefined3 *)&REFG(undefined, 0x14a72b5),1);
    }
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == REFG(ushort * PTR32, 0x14a7270)) {
      *(undefined2 *)&REFG(undefined4, 0x14a72b4) = CONCAT11(1,REFG(undefined4, 0x14a72b4));
      return (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c));
    }
    break;
  case 0xa5: ;
    *(undefined4 *)&REFG(undefined4, 0x14a72b4) = 0;
    REFG(undefined4, 0x14a72b8) = 0;
    F_00a35f30(&REFG(ushort * PTR32, 0x14a7230) GEN_EDX_ARG);
    uVar13 = F_00a35f30(&REFG(ushort * PTR32, 0x14a7270) GEN_EDX_ARG);
    return uVar13;
  case 0xa6: ;
    uVar13 = F_00a51200(0x28,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0);
    return uVar13;
  case 0xa7: ;
    uVar13 = F_00a51200(0x29,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0);
    return uVar13;
  case 0xa8: ;
    uVar13 = F_00a51200(0x2a,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0);
    return uVar13;
  case 0xa9: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 0x45;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0xaa: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aab790(piVar4 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]),0);
      return uVar13;
    }
    break;
  case 0xab: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa4270(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0);
      return uVar13;
    }
    break;
  case 0xac: ;
    piVar4 = ((int *)GEN_TOP(F_00ae1320(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(*(uint *)&gen_args[0]))));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) &&
       (puVar6 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG))), puVar6 == ((ushort *)GEN_TOP(0x7)))) {
      uVar13 = F_00ae2030(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0xad: ;
    piVar4 = ((int *)GEN_TOP(F_00ae1320(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(*(uint *)&gen_args[0]))));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) &&
       (puVar6 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG))), puVar6 == ((ushort *)GEN_TOP(0x7)))) {
      uVar13 = F_00a5f860(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
      return uVar13;
    }
    break;
  case 0xae: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa0100(piVar4 GEN_EDX_ARG,0,0);
      return uVar13;
    }
    break;
  case 0xaf: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa4150(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0);
      return uVar13;
    }
    break;
  case 0xb0: ;
    puVar8 = ((ushort *)GEN_TOP(F_00ae1320(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(*(uint *)&gen_args[0]))));
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if ((puVar8 != ((ushort *)GEN_TOP(0x0))) &&
       (puVar6 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)puVar8 + 4))))(puVar8 GEN_EDX_ARG))), puVar6 == ((ushort *)GEN_TOP(0x7)))) {
      uVar13 = 0;
      uVar10 = 1;
      do {
        if (((uint)(*(ushort * PTR32 *)(gen_frame + 0x38)) & uVar10) != 0) {
          F_00a5f860((*(ushort * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar13,0);
        }
        uVar13 = uVar13 + 1;
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      } while (uVar13 < 0x10);
      (*(ushort * PTR32 *)(gen_frame + 0x34))[0xc5] = (ushort)(*(ushort * PTR32 *)(gen_frame + 0x3c));
      uVar13 = F_00ae2030((*(ushort * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0xb1: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      iVar15 = *piVar4;
      uVar27 = 0x11;
      if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x1))) {
        uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar15 + 0x24))))(piVar4,0x11,0);
        return uVar13;
      }
LAB_00a5b0ce: ;
      uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar15 + 0x28))))(piVar4,uVar27,0);
      return uVar13;
    }
    break;
  case 0xb2: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      iVar15 = *piVar4;
      uVar27 = 0xd;
      goto LAB_00a5b0ce;
    }
    break;
  case 0xb3: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar3 = F_00a6a980(piVar4,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return CONCAT22(extraout_var_38,uVar3);
    }
    break;
  case 0xb4: ;
    bVar1 = F_00a6ede0(&REFG(undefined, 0x14b29c0) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return CONCAT31(extraout_var_31,bVar1);
  case 0xb5: ;
    uVar13 = F_00a70760(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(int *)&gen_args[8]),(*(int *)&gen_args[9]));
    return uVar13;
  case 0xb6: ;
    uVar13 = F_00a707f0(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    return uVar13;
  case 0xb7: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      *((undefined1 *)GEN_TOP(((int)piVar4 + 0x18a))) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0));
      return (uint)(*(ushort * PTR32 *)(gen_frame + 0x3c)) & 0xff;
    }
    break;
  case 0xb8: ;
    F_00a69c80(&REFG(undefined, 0x14b29b0) GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x30)) + 0)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 3;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    uVar13 = F_00763050(uVar13 GEN_EDX_ARG,uVar27);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      bVar1 = F_00770980(uVar13 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(char)(*(ushort * PTR32 *)(gen_frame + 0x30)));
      return CONCAT31(extraout_var_30,bVar1);
    }
    break;
  case 0xb9: ;
    REFG(undefined1, 0x14ab29e) = (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0));
    return (uint)puVar6;
  case 0xba: ;
    uVar13 = F_00a5c6e0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0)));
    return uVar13;
  case 0xbb: ;
    F_00a69ac0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    uVar27 = 8;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006de4e0(pvVar12 GEN_EDX_ARG,uVar27);
    return uVar13;
  case 0xbc: ;
    F_00a69b00(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    uVar27 = 0x10;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006de4e0(pvVar12 GEN_EDX_ARG,uVar27);
    return uVar13;
  case 0xbd: ;
    uVar13 = F_00a833f0(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0xbe: ;
    uVar13 = F_00a841b0(&REFG(undefined, 0x14b1258) GEN_EDX_ARG);
    return uVar13;
  case 0xbf: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar27 = 0x4b;
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    pvVar12 = ((undefined *)GEN_TOP(F_00763050(uVar13 GEN_EDX_ARG,uVar27)));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x0))) {
      if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
        uVar13 = F_00777a90(pvVar12 GEN_EDX_ARG);
        return uVar13;
      }
    }
    else if (((*(ushort * PTR32 *)(gen_frame + 0x3c)) < ((ushort *)GEN_TOP(0x7))) &&
            (F_00a6aed0(&REFG(undefined, 0x14ab440) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0))),
            puVar6 = extraout_EAX_00, pvVar12 != ((undefined *)GEN_TOP(0x0)))) {
      uVar13 = F_00777a20(pvVar12 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
    break;
  case 0xc0: ;
    uVar13 = F_00a6b130(&REFG(undefined, 0x14ab464) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)));
    return uVar13;
  case 0xc1: ;
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x84,0,0);
    F_00a6f690(&REFG(undefined, 0x14ab464) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
    bVar1 = F_008aa620(pvVar12 GEN_EDX_ARG,puVar6);
    return CONCAT31(extraout_var_33,bVar1);
  case 0xc2: ;
    F_00a69bd0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    uVar27 = 0x20;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006de4e0(pvVar12 GEN_EDX_ARG,uVar27);
    return uVar13;
  case 0xc3: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x4d0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4d4)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
    (*(undefined1 *)(gen_frame + 0x4d8)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x4d0)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4d0)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x4d0)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x5cc)) = 0;
    (*(undefined4 *)(gen_frame + 0x5d0)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
    (*(undefined1 *)(gen_frame + 0x5d4)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x5cc)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5cc)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x5cc)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x50c)) = 0;
    (*(undefined4 *)(gen_frame + 0x510)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[5]);
    (*(undefined1 *)(gen_frame + 0x514)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x50c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x50c)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x5b4)) = 0;
    (*(undefined4 *)(gen_frame + 0x5b8)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)&gen_args[6]);
    (*(undefined1 *)(gen_frame + 0x5bc)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x5b4)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5b4)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x5b4)) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
LAB_00a58911: ;
    puVar14 = ((undefined1 *)(gen_frame + 0x10));
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    F_0046aa70(pvVar12 GEN_EDX_ARG,puVar6,puVar14);
    goto switchD_00a5a715_caseD_5f7;
  case 0xc4: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    if (REFG(int * PTR32, 0x1379694) == ((int *)GEN_TOP(0x0))) {
      return (uint)puVar6;
    }
    uVar13 = F_00a5feb0(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
    uVar10 = F_00a5feb0(piVar4 GEN_EDX_ARG);
    F_0046f4a0(&(*(float *)(gen_frame + 0x18)),uVar10,uVar13);
    dVar20 = F_0054cd20(&(*(float *)(gen_frame + 0x18)) GEN_EDX_ARG);
    if (!(dVar20 <= *(double *)&REFG(undefined, 0x1090710))) {
      return extraout_EAX_01;
    }
    F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x698)) = 0;
    (*(undefined4 *)(gen_frame + 0x69c)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    (*(undefined1 *)(gen_frame + 0x6a0)) = 0xff;
    F_00490f30(&(*(undefined4 *)(gen_frame + 0x698)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
    F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x698)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x698)) GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x3b8));
LAB_00a56d30: ;
    puVar14 = ((undefined1 *)(gen_frame + 0x10));
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
LAB_00a56d39: ;
    F_0046ab30(pvVar12 GEN_EDX_ARG,puVar6,piVar4,puVar14);
switchD_00a5a715_caseD_5f7: ;
    uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    return uVar13;
  case 0xc5: ;
    uVar13 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      *((ushort * PTR32 *)GEN_TOP((uVar13 + 0x388))) = (*(ushort * PTR32 *)(gen_frame + 0x38));
      *((ushort * PTR32 *)GEN_TOP((uVar13 + 0x38c))) = (*(ushort * PTR32 *)(gen_frame + 0x30));
      return uVar13;
    }
    break;
  case 0xc6: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      *(undefined1 *)(piVar4 + 0x59b) = 0;
      F_00aa1cc0(piVar4 GEN_EDX_ARG,0xffffffff,0xffffffff);
      pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
      uVar13 = F_006df010(pvVar12 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 199: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_08,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0);
        return uVar13;
      }
    }
    break;
  case 200: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_12,bVar1)));
      if (bVar1 != 0) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x68c)) = 0;
        (*(undefined4 *)(gen_frame + 0x690)) = 0;
        (*(undefined1 *)(gen_frame + 0x694)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x68c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x68c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x68c)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x56c)) = 0;
        (*(undefined4 *)(gen_frame + 0x570)) = 0;
        (*(undefined1 *)(gen_frame + 0x574)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x56c)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x56c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x56c)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0x3f3;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar26 = 0xffffffff;
        uVar28 = 0;
        uVar23 = 1;
        uVar27 = 0x1d507;
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG);
        F_007c8bb0(uVar13 GEN_EDX_ARG,uVar27,uVar23,uVar28,uVar26);
        uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return uVar13;
      }
    }
    break;
  case 0xc9: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_09,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00ab3d80((*(ushort * PTR32 *)(gen_frame + 0x3c)));
        puVar6 = ((ushort *)GEN_TOP(0x0));
        if (uVar13 != 0) {
          puVar8 = ((ushort *)GEN_TOP(F_00ab3db0((uint)*((ushort *)GEN_TOP((uVar13 + 8 + (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x38))) * 2))))));
          (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
          puVar6 = ((ushort *)GEN_TOP(0x0));
          if (puVar8 != ((ushort *)GEN_TOP(0x0))) {
            F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
            (*(ushort * PTR32 *)(gen_frame + 0x6e0)) = ((ushort *)GEN_TOP(0x0));
            (*(ushort * PTR32 *)(gen_frame + 0x6e0)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
            (*(ushort * PTR32 * PTR32 *)(gen_frame + 0x6e4)) = &(*(ushort * PTR32 *)(gen_frame + 0x6e0));
            (*(undefined1 *)(gen_frame + 0x6e8)) = 0;
            F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x6e0)));
            F_004917c0(&(*(ushort * PTR32 *)(gen_frame + 0x6e0)) GEN_EDX_ARG);
            uVar3 = *(*(ushort * PTR32 *)(gen_frame + 0x34));
            (*(uint *)(gen_frame + 0x728)) = 0;
            (*(uint *)(gen_frame + 0x728)) = (uint)uVar3;
            (*(undefined1 *)(gen_frame + 0x730)) = 0;
            (*(uint * PTR32 *)(gen_frame + 0x72c)) = &(*(uint *)(gen_frame + 0x728));
            F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x728)));
            F_004917c0(&(*(uint *)(gen_frame + 0x728)) GEN_EDX_ARG);
            (*(ushort * PTR32 *)(gen_frame + 0x71c)) = ((ushort *)GEN_TOP(0x0));
            (*(undefined1 *)(gen_frame + 0x724)) = 0;
            (*(ushort * PTR32 *)(gen_frame + 0x71c)) = (*(ushort * PTR32 *)(gen_frame + 0x30));
            (*(ushort * PTR32 * PTR32 *)(gen_frame + 0x720)) = &(*(ushort * PTR32 *)(gen_frame + 0x71c));
            F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x71c)));
            F_004917c0(&(*(ushort * PTR32 *)(gen_frame + 0x71c)) GEN_EDX_ARG);
            bVar1 = *((byte *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + uVar13 + 0x10)));
            (*(uint *)(gen_frame + 0x704)) = 0;
            (*(uint *)(gen_frame + 0x704)) = (uint)bVar1;
            (*(undefined1 *)(gen_frame + 0x70c)) = 0;
            (*(uint * PTR32 *)(gen_frame + 0x708)) = &(*(uint *)(gen_frame + 0x704));
            F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x704)));
            F_004917c0(&(*(uint *)(gen_frame + 0x704)) GEN_EDX_ARG);
            if ((*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + uVar13 + 0x10)))))) {
              if ((*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0))) {
                piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
                puVar14 = ((undefined1 *)(gen_frame + 0x10));
                uVar27 = 0x3e9;
                pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
                F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
              }
              uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              return uVar13;
            }
            piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
            puVar14 = ((undefined1 *)(gen_frame + 0x10));
            uVar27 = 0x3ea;
            pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
            F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
            piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
            if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) < ((ushort *)GEN_TOP(0xf4240))) {
              uVar27 = 0;
            }
            else {
              uVar27 = 3;
            }
            puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
            puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
            pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x1c))))(piVar5 GEN_EDX_ARG)));
            F_0075f900(pvVar12 GEN_EDX_ARG,uVar27,puVar6,puVar8);
            F_00ab4370(0xd6,piVar4,piVar4,0,0);
            uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
            return uVar13;
          }
        }
      }
    }
    break;
  case 0xca: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_10,bVar1)));
      if (bVar1 != 0) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x6ec)) = ((ushort *)GEN_TOP(0x0));
        (*(undefined1 *)(gen_frame + 0x6f4)) = 0;
        (*(ushort * PTR32 *)(gen_frame + 0x6ec)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(ushort * PTR32 * PTR32 *)(gen_frame + 0x6f0)) = &(*(ushort * PTR32 *)(gen_frame + 0x6ec));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x6ec)));
        F_004917c0(&(*(ushort * PTR32 *)(gen_frame + 0x6ec)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0x3eb;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) < ((ushort *)GEN_TOP(0xf4240))) {
          uVar27 = 1;
        }
        else {
          uVar27 = 4;
        }
        puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
        F_0075f900(pvVar12 GEN_EDX_ARG,uVar27,puVar6,puVar8);
        F_00a62940(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,1);
        uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return uVar13;
      }
    }
    break;
  case 0xcb: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_11,bVar1)));
      if (bVar1 != 0) {
        bVar2 = F_00a62a70((char)(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        bVar1 = F_00a62b20((char)(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        (*(bool *)(gen_frame + 0x2f)) = (bool)bVar1;
        if (bVar1 != 0) {
          bVar2 = F_00a62ad0((char)(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        }
        uVar13 = (uint)bVar2;
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(uint * PTR32 *)(gen_frame + 0x6d8)) = &(*(uint *)(gen_frame + 0x6d4));
        (*(uint *)(gen_frame + 0x6d4)) = 0;
        (*(uint *)(gen_frame + 0x6d4)) = uVar13;
        (*(undefined1 *)(gen_frame + 0x6dc)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x6d4)));
        F_004917c0(&(*(uint *)(gen_frame + 0x6d4)) GEN_EDX_ARG);
        (*(undefined1 * PTR32 *)(gen_frame + 0x6f8)) = ((undefined1 *)GEN_TOP(0x0));
        (*(undefined1 * PTR32 *)(gen_frame + 0x6f8)) = ((undefined1 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + 1)));
        (*(undefined1 *)(gen_frame + 0x700)) = 0;
        (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x6fc)) = &(*(undefined1 * PTR32 *)(gen_frame + 0x6f8));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x6f8)));
        F_004917c0(&(*(undefined1 * PTR32 *)(gen_frame + 0x6f8)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if ((*(bool *)(gen_frame + 0x2f)) == false) {
          puVar14 = ((undefined1 *)(gen_frame + 0x10));
          uVar27 = 0x3ec;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
          F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
          piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          uVar27 = 2;
        }
        else {
          puVar14 = ((undefined1 *)(gen_frame + 0x10));
          uVar27 = 0x3ed;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
          F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
          piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          uVar27 = 5;
        }
        puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x38));
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
        F_0075f900(pvVar12 GEN_EDX_ARG,uVar27,uVar13,puVar6);
        F_00a62970(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,1);
        uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return uVar13;
      }
    }
    break;
  case 0xcc: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_13,bVar1)));
      if (bVar1 != 0) {
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x674)) = 0;
        (*(undefined4 *)(gen_frame + 0x678)) = 0;
        (*(undefined1 *)(gen_frame + 0x67c)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x674)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x674)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x674)) GEN_EDX_ARG);
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = (*(ushort * PTR32 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x4dc)) = 0;
        (*(undefined4 *)(gen_frame + 0x4e0)) = 0;
        (*(undefined1 *)(gen_frame + 0x4e4)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x4dc)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4dc)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4dc)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        puVar14 = ((undefined1 *)(gen_frame + 0x10));
        uVar27 = 0x3f4;
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
        F_00a629a0(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,1);
        uVar13 = F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return uVar13;
      }
    }
    break;
  case 0xcd: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00aa1570(piVar4 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)),(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0)));
      return uVar13;
    }
    break;
  case 0xce: ;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006d7020(pvVar12 GEN_EDX_ARG);
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      fVar17 = F_00a5c810((uint)(*(ushort * PTR32 *)&gen_args[6]));
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      fVar17 = F_00a5c810((uint)(*(ushort * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar17;
      fVar17 = F_00a5c810((uint)(*(ushort * PTR32 *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x1c)) = (float)fVar17;
      fVar17 = F_00a5c810((uint)(*(ushort * PTR32 *)&gen_args[5]));
      (*(float *)(gen_frame + 0x20)) = (float)fVar17;
      if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x34))))) < REFG(double, 0x1094800)) {
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x0));
      }
      uVar13 = F_00a55df0(uVar13 + 0x354 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x18)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x34))))),(float)(float10)1,
                            (float)(float10)0);
      return uVar13;
    }
    break;
  case 0xcf: ;
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006d7020(pvVar12 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x4)) = uVar13;
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (uVar13 != 0) {
      uVar13 = F_00a5e200((*(ushort * PTR32 *)(gen_frame + 0x38)));
      uVar10 = F_00a5e200((*(ushort * PTR32 *)(gen_frame + 0x30)));
      fVar17 = F_00a5c810((uint)(*(ushort * PTR32 *)&gen_args[5]));
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      if ((double)(float)fVar17 < REFG(double, 0x1094800)) {
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(0x0));
      }
      uVar13 = F_00a55f00((*(uint *)(gen_frame + 0x4)) + 0x354 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),uVar13,uVar10,((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x34))))));
      return uVar13;
    }
    break;
  case 0xd0: ;
    pvVar12 = ((undefined *)GEN_TOP(F_00a5e200((*(ushort * PTR32 *)(gen_frame + 0x3c)))));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
      uVar13 = F_00a5f290(pvVar12 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(0x0));
      if ((*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x1))) {
        if ((*(ushort * PTR32 *)(gen_frame + 0x38)) - 1 != ((ushort *)GEN_TOP(0x0))) {
          return (uint)((*(ushort * PTR32 *)(gen_frame + 0x38)) - 1);
        }
        puVar6 = ((ushort *)GEN_TOP(0x0));
        if ((*(ushort * PTR32 *)(gen_frame + 0x30)) != ((ushort *)GEN_TOP(0x0))) {
          puVar6 = ((ushort *)GEN_TOP(F_00ab4370((*(ushort * PTR32 *)(gen_frame + 0x30)),pvVar12,pvVar12,0,0)));
        }
      }
      if (uVar13 != 0) {
        *((float *)GEN_TOP((uVar13 + 0x2ec8))) = GEN_FLT_TO(*((float *)GEN_TOP((uVar13 + 0x2ec8))), REFG(float, 0x1090708));
        return (uint)puVar6;
      }
    }
    break;
  case 0xd1: ;
    F_00a5e960(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0);
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x0));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x3c))))(piVar4 GEN_EDX_ARG)));
      uVar13 = F_0043c750(pvVar12 GEN_EDX_ARG);
      return uVar13;
    }
    break;
  case 0xd2: ;
    uVar13 = F_00a5ea10(REFG(int, 0x137127c) GEN_EDX_ARG,*((char *)GEN_TOP((REFG(int, 0x137127c) + 0xe9fd))) == '\0');
    return uVar13;
  case 0xd3: ;
    uVar13 = F_00a5e200((*(ushort * PTR32 *)(gen_frame + 0x38)));
    uVar10 = F_00a5e200((*(ushort * PTR32 *)(gen_frame + 0x30)));
    uVar13 = F_00ab4370((*(ushort * PTR32 *)(gen_frame + 0x3c)),uVar13,uVar10,0,0);
    return uVar13;
  case 0xd4: ;
    puVar6 = ((ushort *)GEN_TOP(F_00ac2e10(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      if (((*(uint *)&gen_args[7]) != 0) &&
         (uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG), *((uint *)GEN_TOP((uVar13 + 8))) == (*(uint *)&gen_args[7]))) {
        F_00aa3360(piVar4 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),1);
      }
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG);
      if ((((ushort *)GEN_TOP((uint)*((byte *)GEN_TOP((uVar13 + 0x44))))) == (*(ushort * PTR32 *)(gen_frame + 0x38))) &&
         (uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG), *((ushort * PTR32 *)GEN_TOP((uVar13 + 0x48))) == (*(ushort * PTR32 *)(gen_frame + 0x30))))
      {
        F_00ac2f90(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(float)(float10)0,(float)(float10)0);
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG);
        F_00ac3da0(uVar13 GEN_EDX_ARG);
        F_00b5ae90(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)(piVar4 + 0x22));
        F_00b5c0c0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,piVar4 + 0x5b0);
        F_00aa6f90(piVar4 GEN_EDX_ARG);
      }
      puVar6 = ((ushort *)GEN_TOP(F_00a7d4b0((*(ushort * PTR32 *)(gen_frame + 0x3c)),piVar4,0,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),0,0,0,0,REFG(float, 0x10916ec))));
    }
    if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x246))) {
      fVar17 = (float10)(int)(*(ushort * PTR32 *)&gen_args[6]);
      if ((int)(*(ushort * PTR32 *)&gen_args[6]) < 0) {
        fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar6;
      fVar17 = (float10)(int)(*(ushort * PTR32 *)&gen_args[5]);
      if ((int)(*(ushort * PTR32 *)&gen_args[5]) < 0) {
        fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      puVar8 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 / (float10)*(double *)&REFG(undefined, 0x1088118)))));
      (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar8;
      puVar6 = ((ushort *)GEN_TOP(F_00ac2f90(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar8))),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))))
      ;
    }
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar28 = 0;
      uVar27 = 0;
      uVar23 = 0;
      uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG);
      uVar13 = F_00ac3e30(uVar13 GEN_EDX_ARG,uVar23,uVar27,uVar28);
      return uVar13;
    }
    break;
  case 0xd5: ;
    uVar13 = F_00a7d290((*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0,0,REFG(float, 0x10916ec));
    return uVar13;
  case 0xd6: ;
    uVar13 = F_00ab5a60(&REFG(int, 0x14bcc80) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)) != ((ushort *)GEN_TOP(0x0)));
    return uVar13;
  case 0xd7: ;
    uVar13 = F_00a6eed0(&REFG(undefined, 0x14ab3a4) GEN_EDX_ARG);
    return uVar13;
  case 0xd8: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,0,0x5a,1);
    return uVar13;
  case 0xd9: ;
    F_006b8c00();
    uVar13 = F_00701640();
    return uVar13;
  case 0xda: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00a7d4b0(0x265,piVar4,0,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),0,0,0,0,REFG(float, 0x10916ec));
      return uVar13;
    }
    break;
  case 0xdb: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP(0x1304));
    uVar27 = 0x535;
LAB_00a59c6d: ;
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    uVar13 = F_0046a6b0(pvVar12 GEN_EDX_ARG,uVar27,puVar6);
    return uVar13;
  case 0xdc: ;
    bVar1 = F_00a37c10(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 0)));
    return CONCAT31(extraout_var_23,bVar1);
  case 0xdd: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_24,bVar1)));
      if (bVar1 != 0) {
        uVar13 = F_00a42940((*(ushort * PTR32 *)(gen_frame + 0x3c)),(uint)REFG(undefined1, 0x14a668c),&REFG(undefined, 0x14a668d),1);
        return uVar13;
      }
    }
    break;
  case 0xde: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_25,bVar1)));
      if ((bVar1 != 0) &&
         ((&REFG(undefined, 0x14a668e))[(int)((int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x38))) * 3)] = 1, puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x38)), (*(ushort * PTR32 *)(gen_frame + 0x38)) == ((ushort *)GEN_TOP(0x0))))
      {
        (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x34)) + 0)) = 1;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(ushort * PTR32 *)(gen_frame + 0x34)), 1, 3),1)));
        if (((*(ushort * PTR32 *)(gen_frame + 0x30)) == ((ushort *)GEN_TOP(0x2c4))) || ((*(ushort * PTR32 *)(gen_frame + 0x30)) == ((ushort *)GEN_TOP(0x2da)))) {
          (*(undefined1 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x34)) + 0)) = 0;
          (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(((uint)GEN_PIECE(&(*(ushort * PTR32 *)(gen_frame + 0x34)), 1, 3) << 8)));
        }
        REFG(undefined1, 0x14a668c) = 0;
        F_00a42940((*(ushort * PTR32 *)(gen_frame + 0x3c)),0,&REFG(undefined, 0x14a668d),(*(ushort * PTR32 *)(gen_frame + 0x34)));
        uVar13 = F_00a7d290((*(ushort * PTR32 *)(gen_frame + 0x30)),piVar4,(*(ushort * PTR32 *)&gen_args[5]),0,0,REFG(float, 0x10916ec));
        return uVar13;
      }
    }
    break;
  case 0xdf: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      bVar1 = F_00a9f620(piVar4 GEN_EDX_ARG);
      puVar6 = ((ushort *)GEN_TOP(CONCAT31(extraout_var_26,bVar1)));
      if (bVar1 != 0) {
        REFG(undefined1, 0x14a668c) = 0;
        F_00a42940((*(ushort * PTR32 *)(gen_frame + 0x3c)),0,&REFG(undefined, 0x14a668d),0);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x34))))(piVar4 GEN_EDX_ARG);
        uVar13 = F_0043b3e0(uVar13 GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,uVar13 + 4,REFG(undefined4, 0x108cc50));
        F_004816e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        F_004918c0(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x408)));
        F_00493bc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a0)));
        F_004917c0(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x5e4)) = 0;
        (*(undefined4 *)(gen_frame + 0x5e8)) = 0;
        (*(ushort * PTR32 *)(gen_frame + 0x34)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x3c)) + 1)));
        (*(undefined1 *)(gen_frame + 0x5ec)) = 0xff;
        F_00490f30(&(*(undefined4 *)(gen_frame + 0x5e4)) GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x34)));
        F_00493b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x5e4)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x5e4)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        if ((*(ushort * PTR32 *)(gen_frame + 0x3c)) == ((ushort *)GEN_TOP(0x64))) {
          uVar27 = 0x2fa;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
          F_0046a630(pvVar12 GEN_EDX_ARG,uVar27);
        }
        else {
          puVar14 = ((undefined1 *)(gen_frame + 0x10));
          uVar27 = 0x2f7;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
          F_0046aa70(pvVar12 GEN_EDX_ARG,uVar27,puVar14);
        }
        F_00493180(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        uVar18 = F_0042c880(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG);
        return (uint)uVar18;
      }
    }
    break;
  case 0xe0: ;
    uVar13 = F_00a51200(0x5f,(*(ushort * PTR32 *)(gen_frame + 0x3c)),0,0,0);
    return uVar13;
  case 0xe1: ;
    F_005d4fa0(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)),(*(ushort * PTR32 *)(gen_frame + 0x30)),(*(ushort * PTR32 *)&gen_args[5]));
    F_005e15e0(&REFG(undefined2, 0x1379ca0));
    puVar6 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
    puVar8 = (*(ushort * PTR32 *)(gen_frame + 0x38));
    puVar21 = (*(ushort * PTR32 *)(gen_frame + 0x30));
    pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar13 = F_006df020(pvVar12 GEN_EDX_ARG,puVar6,puVar8,puVar21,(*(ushort * PTR32 *)&gen_args[5]));
    return uVar13;
  case 0xe2: ;
    uVar13 = F_00a6cf80(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
    return uVar13;
  case 0xe3: ;
    uVar13 = F_00a7d290(0x285,0,0,0,0,REFG(float, 0x10916ec));
    return uVar13;
  case 0xe4: ;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar13 = F_00ac38c0(piVar4,(*(ushort * PTR32 *)(gen_frame + 0x3c)));
      return uVar13;
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00a5c400 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  ushort uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x166c))) = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  *((ushort *)GEN_TOP(((int)this + 0x1670))) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5c430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x2dd4)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x2dd4))) = *((byte *)GEN_TOP((in_ecx + 0x2dd4))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0x2dd4)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0x2dd4))) = *((byte *)GEN_TOP((in_ecx + 0x2dd4))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c470 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x196))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x198))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x1a0))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c4c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1688))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c4d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1689))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1690))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c4f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1694))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1698))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x169c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c520 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x16a0))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c540 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x16a2))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c560 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x16a4))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c580 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x16a6))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5a0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5c5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x16a8))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c5c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5c5c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd4))))(param_1 GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd4))))(param_1 GEN_EDX_ARG);
    uVar2 = F_00b7b840(uVar2 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

/* ref: FUN_00a5c610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x18a))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x2dd2)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x2dd2))) = *((byte *)GEN_TOP((in_ecx + 0x2dd2))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c680 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5c680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5c680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return;
}

/* ref: FUN_00a5c6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c6a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c6b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x22e))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c6c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x254))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x60))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c6e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if ((-1 < (int)param_2) && (param_2 < 3)) {
    *((undefined1 *)GEN_TOP((param_2 + 0x22f + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a5c700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c700(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 4) {
    *((undefined1 *)GEN_TOP((param_2 + 600 + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a5c720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c720(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_2 >> 3;
  if (uVar2 < 4) {
    bVar3 = (byte)(0x80 >> ((byte)param_2 & 7));
    if (param_3 != '\0') {
      pbVar1 = ((byte *)GEN_TOP((uVar2 + 600 + param_1)));
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = ((byte *)GEN_TOP((uVar2 + 600 + param_1)));
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a5c760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 < 3) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x25c))) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x268))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa5c790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + param_1 * 2 + 0x272))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP(((int)this + param_1 * 2 + 0x296))) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_00a5c7c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5c7c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((byte *)GEN_TOP((param_2 + 0x2d3 + param_1))) = param_3;
  return param_3;
}

/* ref: FUN_00a5c7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x308))) = param_2;
  return param_2;
}

/* ref: FUN_00a5c7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x3aa8))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x3aac))) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00a5c810 */
GEN_OWN GEN_FRAME float10 F_00a5c810(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5c810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8)))));
}

/* ref: FUN_00a5c840 */
GEN_OWN GEN_FRAME float10 F_00a5c840(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5c840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228)))));
}

/* ref: FUN_00a5c880 */
GEN_OWN GEN_FRAME float10 F_00a5c880(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5c880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)(param_1 & 0xff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)*(double *)&REFG(undefined, 0x1088100))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228)))));
}

/* ref: FUN_00a5c8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 6))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 7))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5c900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 8 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00a5c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 6))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 5))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c9d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5c9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5c9f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5c9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x1df1 + in_ecx;
}

/* ref: FUN_00a5ca10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ca10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x12ea + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ca30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x15bc + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ca50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_00a5ca70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ca70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_00a5ca90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ca90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ca90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5cab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x1890 + param_2 * 8;
}

/* ref: FUN_00a5cad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00a5caf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5caf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5caf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00a5cb10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cb10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00a5cb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cb30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00a5cb50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00a5cb70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00a5cb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cb90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00a5cbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cbb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00a5cbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cbd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00a5cbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cbf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00a5cc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cc10(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00a5cc20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cc20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5cc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return param_1;
}

/* ref: FUN_00a5cc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c4d9ef((int)this + 0x10,0x40,param_1,0x3f);
  return uVar1;
}

/* ref: FUN_00a5cc70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x50))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cc80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x51))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cc90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x52))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cca0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x53))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ccb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x54))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ccc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ccc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x58))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ccd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ccd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x5c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cce0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5cce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x60))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5ccf0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5ccf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x62))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd00 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5cd00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 100))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd10 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5cd10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x66))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x68))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cd30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cd30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x69))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cd40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x6a))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cd50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x1f0))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 500))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x1f8))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a5cd80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cd80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1e0))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cd90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x204))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x208))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cdb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cdc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x210))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5cde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x388))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38c))) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ce00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c90))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ce10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1c94))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ce20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ce20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x1c80))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c84))) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ce40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ce40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x1c88))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8c))) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ce60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ce60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1c95))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ce70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 1))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5ce80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5ce80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 4))) = param_2;
  return;
}

/* ref: FUN_00a5cea0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5cea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5cea0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  return;
}

/* ref: FUN_00a5cec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ced0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ced0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x31))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x35))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cf00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x3c))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cf10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x40))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cf20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cf20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1b8))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5cf30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1b9))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5cf60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5cf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return;
}

/* ref: FUN_00a5cf80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5cf80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x7cc))) = param_2;
  return;
}

/* ref: FUN_00a5cfa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5cfa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5cfa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x184))) = param_2;
  return;
}

/* ref: FUN_00a5cfc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5cfc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5cfc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x18c))) = param_2;
  return;
}

/* ref: FUN_00a5cfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cfe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1ec))) = param_2;
  return param_2;
}

/* ref: FUN_00a5cff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5cff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5cff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1d0))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1e2))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1e4))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5d020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return param_1;
}

/* ref: FUN_00a5d040 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5d040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x18a))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5d070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5d070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b07230(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a5d090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5d090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5d090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  uVar1 = F_008edf60(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Network::PacketElement::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
    return (uint)param_1;
  }
  iVar1 = param_1[-2];
  puVar2 = param_1 + iVar1 * 0x16;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    puVar2 = puVar2 - 0x16;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  }
  if ((param_2 & 1) != 0) {
    F_00406b30(param_1 - 2);
  }
  return (uint)(param_1 - 2);
}

/* ref: Client::Game::Network::PacketContext::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d110(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
    return (uint)param_1;
  }
  iVar1 = param_1[-1];
  puVar2 = param_1 + iVar1 * 0xc;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    puVar2 = puVar2 - 0xc;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
  }
  if ((param_2 & 1) != 0) {
    F_00406b30(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00a5d1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d1c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_00a5d1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5d220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 4))) = *param_2;
  return param_1;
}

/* ref: FUN_00a5d240 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa5d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + (uint)(ushort)param_1 * 4 + 4)));
    uVar2 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((param_3 + (uVar3 & 0xffff) * 4)));
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

/* ref: FUN_00a5d290 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x271))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d2a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x3a6d))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d2b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1b0))) = param_2;
  return param_2;
}

/* ref: FUN_00a5d2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x5a8c + param_2 * 4;
}

/* ref: FUN_00a5d2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5d2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00edfd00(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  return (uint)this;
}

/* ref: Global::QueueSpawn */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa5d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 0xc))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 == *((uint *)GEN_TOP(((int)this + 8)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * 0x2a0 + *(int *)this))) = param_1;
  puVar4 = param_2;
  puVar5 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * 0x2a0 + 0x10 + *(int *)this)));
  for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)this;
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc))) * 0x2a0;
  *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar2))) = param_3;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc + iVar2))) = param_4;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * 0x2a0 + 0x298 + *(int *)this))) = 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return 1;
}

/* ref: FUN_00a5d400 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a5d400(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5d400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 == -1;
}

/* ref: FUN_00a5d420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d420(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < (uint)in_ecx[1])) {
    uVar1 = uVar1 * 0x2a0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x298 + *in_ecx))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5d450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa5d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*((int *)GEN_TOP(((int)this + 0xc))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar4 == *((uint *)GEN_TOP(((int)this + 8)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  iVar3 = *(int *)this;
  *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar2 * 0x28))) = param_3;
  *((undefined4 *)GEN_TOP((iVar3 + 0xc + iVar2 * 0x28))) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28))) = 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  return 1;
}

/* ref: FUN_00a5d500 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a5d500(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5d500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 == -1;
}

/* ref: FUN_00a5d520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *((uint *)GEN_TOP(((int)this + 4))))) {
    uVar2 = *(uint *)this;
    *((undefined1 *)GEN_TOP((uVar2 + 0x20 + uVar1 * 0x28))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5d540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa5d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*((int *)GEN_TOP(((int)this + 0xc))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar4 == *((uint *)GEN_TOP(((int)this + 8)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  iVar3 = *(int *)this;
  *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar2 * 0x28))) = param_3;
  *((undefined4 *)GEN_TOP((iVar3 + 0xc + iVar2 * 0x28))) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *((int *)GEN_TOP(((int)this + 0xc))) * 0x28))) = 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  return 1;
}

/* ref: FUN_00a5d5f0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a5d5f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5d5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 == -1;
}

/* ref: FUN_00a5d610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5d610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *((uint *)GEN_TOP(((int)this + 4))))) {
    uVar2 = *(uint *)this;
    *((undefined1 *)GEN_TOP((uVar2 + 0x20 + uVar1 * 0x28))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d630(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 300;
  param_1[1] = 0x20;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a5d660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa5d660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_5;
  *(undefined4 *)this = 0x191;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x30;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d6a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xa5d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  param_1[6] = param_2;
  param_1[0xb] = (undefined4)gen_fl2bits(param_7);
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[0xc] = (undefined4)gen_fl2bits(param_8);
  *param_1 = 0x195;
  param_1[1] = 0x30;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xd] = (undefined4)gen_fl2bits(param_9);
  return (uint)param_1;
}

/* ref: FUN_00a5d700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d700(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xa5d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  *(undefined1 *)(param_1 + 6) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  *(undefined2 *)(param_1 + 9) = (undefined2)param_6;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x26))) = (undefined2)param_7;
  *param_1 = 0x196;
  param_1[1] = 0x28;
  param_1[10] = param_8;
  param_1[0xb] = param_9;
  return (uint)param_1;
}

/* ref: FUN_00a5d750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa5d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_5;
  *(undefined4 *)this = 0x197;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x30;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa5d790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_5;
  *(undefined4 *)this = 0x198;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4;
  puVar2 = param_6;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xa5d7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  *(undefined1 *)(param_1 + 6) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_8);
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[0xb] = (undefined4)gen_fl2bits(param_9);
  *param_1 = 0x199;
  param_1[1] = 0x30;
  *(undefined2 *)(param_1 + 9) = (undefined2)param_6;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x26))) = (undefined2)param_7;
  param_1[0xc] = (undefined4)gen_fl2bits(param_10);
  return (uint)param_1;
}

/* ref: FUN_00a5d840 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5d840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xa5d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  *(undefined2 *)(param_1 + 10) = (undefined2)param_6;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  param_1[0xd] = param_9;
  param_1[0xe] = param_10;
  *(undefined2 *)(param_1 + 0xf) = (undefined2)param_11;
  *param_1 = 0x1ae;
  param_1[1] = 0x40;
  param_1[0x10] = param_12;
  param_1[0x11] = param_13;
  return 0;
}

/* ref: FUN_00a5d8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d8b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5d8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 0x1b3;
  param_1[1] = 0x20;
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[8] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a5d8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d8e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1d7;
  param_1[1] = 0x20;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  return (uint)param_1;
}

/* ref: FUN_00a5d920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1d8;
  param_1[1] = 0x28;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  param_1[10] = param_6[2];
  param_1[0xb] = param_6[3];
  return (uint)param_1;
}

/* ref: FUN_00a5d970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1d9;
  param_1[1] = 0x38;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5d9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5d9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5d9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1da;
  param_1[1] = 0x58;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5da10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5da10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1db;
  param_1[1] = 0x98;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5da60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5da60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1dc;
  param_1[1] = 0x118;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dab0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1dd;
  param_1[1] = 0x218;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5db00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5db00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1de;
  param_1[1] = 0x418;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5db50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5db50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e0;
  param_1[1] = 0x20;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  return (uint)param_1;
}

/* ref: FUN_00a5db90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5db90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5db90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e1;
  param_1[1] = 0x28;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  param_1[10] = param_6[2];
  param_1[0xb] = param_6[3];
  return (uint)param_1;
}

/* ref: FUN_00a5dbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dbe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e2;
  param_1[1] = 0x38;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dc30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e3;
  param_1[1] = 0x58;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dc80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e4;
  param_1[1] = 0x98;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dcd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e5;
  param_1[1] = 0x118;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dd20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e6;
  param_1[1] = 0x218;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dd70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa5dd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1e7;
  param_1[1] = 0x418;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1f))) = param_5;
  puVar2 = param_6;
  puVar3 = param_1 + 8;
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5ddc0 */
GEN_OWN GEN_FRAME uint F_00a5ddc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5ddc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a5ddd0 */
GEN_OWN GEN_FRAME uint F_00a5ddd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5ddd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a5de00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a5de00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5de00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a5de20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5de20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa5de20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  param_1[6] = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1eb;
  param_1[1] = 0x20;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1f))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x23))) = param_5[1];
  return (uint)param_1;
}

/* ref: FUN_00a5de60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5de60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  param_1[6] = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1ec;
  param_1[1] = 0x28;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1f))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x23))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x27))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x2b))) = param_5[3];
  return (uint)param_1;
}

/* ref: FUN_00a5deb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5deb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a5ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ded0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa5ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *param_1 = 0x1ed;
  param_1[1] = 0x38;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  puVar2 = param_5;
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x1f)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5df40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5df40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5df40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5df60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5df60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5df60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a5df80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5df80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa5df80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  param_1[6] = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1e))) = param_4;
  *(undefined2 *)(param_1 + 7) = (undefined2)param_3;
  param_1[9] = param_6;
  *param_1 = 0x1ee;
  param_1[1] = 0x40;
  param_1[8] = param_5;
  puVar2 = param_7;
  puVar3 = param_1 + 10;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a5dff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5dff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5dff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a5e030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x262;
  in_ecx[1] = 0x18;
  *(undefined2 *)(in_ecx + 6) = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: Client::Network::Protocol::Zone::PacketReceiverCallbackInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e0a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a5e0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e100 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a5e130 */
GEN_OWN GEN_FRAME uint F_00a5e130(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5e130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a5e160 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a5e160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a5e180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e180(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5e1a0 */
GEN_OWN GEN_FRAME uint F_00a5e1a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5e1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00a5e1c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a5e1c0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e1f0 */
GEN_OWN GEN_FRAME uint F_00a5e1f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5e1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a5e200 */
GEN_OWN GEN_FRAME uint F_00a5e200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5e200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a5e220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 8))) = param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = param_2;
  return uVar1;
}

/* ref: FUN_00a5e240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x2a0 >> 0x20) != 0) |
          (uint)((ulonglong)param_1 * 0x2a0);
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 0xa6) = 0;
    puVar2 = puVar2 + 0xa8;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) == *((uint *)GEN_TOP(((int)this + 0xc)))) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  do {
    uVar2 = (*((int *)GEN_TOP(((int)this + 8))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    if (*((char *)GEN_TOP((uVar3 * 0x2a0 + 0x298 + iVar1))) != '\0') {
      *((undefined1 *)GEN_TOP((uVar3 * 0x2a0 + 0x298 + iVar1))) = 0;
      *param_1 = *(int *)this + uVar3 * 0x2a0;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*((char *)GEN_TOP((uVar3 * 0x2a0 + 0x298 + iVar2))) != '\0') {
        *param_1 = uVar3;
        param_1[1] = uVar3 * 0x2a0 + iVar2;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc)))) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
      if (*((char *)GEN_TOP((uVar2 * 0x2a0 + 0x298 + iVar1))) != '\0') {
        *param_1 = uVar2;
        param_1[1] = uVar2 * 0x2a0 + iVar1;
        return (uint)param_1;
      }
    } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) == *((uint *)GEN_TOP(((int)this + 0xc)))) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  do {
    uVar2 = (*((int *)GEN_TOP(((int)this + 8))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    if (*((char *)GEN_TOP((iVar1 + 0x20 + uVar3 * 0x28))) != '\0') {
      *((undefined1 *)GEN_TOP((uVar3 * 0x28 + 0x20 + iVar1))) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*((char *)GEN_TOP((iVar2 + 0x20 + uVar3 * 0x28))) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc)))) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
      if (*((char *)GEN_TOP((iVar1 + 0x20 + uVar2 * 0x28))) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) == *((uint *)GEN_TOP(((int)this + 0xc)))) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  do {
    uVar2 = (*((int *)GEN_TOP(((int)this + 8))) + 1U) % *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    if (*((char *)GEN_TOP((iVar1 + 0x20 + uVar3 * 0x28))) != '\0') {
      *((undefined1 *)GEN_TOP((uVar3 * 0x28 + 0x20 + iVar1))) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*((char *)GEN_TOP((iVar2 + 0x20 + uVar3 * 0x28))) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc)))) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *((uint *)GEN_TOP(((int)this + 4)));
      if (*((char *)GEN_TOP((iVar1 + 0x20 + uVar2 * 0x28))) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *((uint *)GEN_TOP(((int)this + 0xc))));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a5e820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e820(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 8;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_00a5e860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e860(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 8;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_00a5e8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e8a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 8;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_00a5e910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a5e940 */
GEN_OWN GEN_FRAME unsigned int F_00a5e940(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5e960(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5e960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar2 = CONCAT22((short)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28)) >> 0x10),(undefined2)param_2);
  *((undefined2 *)GEN_TOP((param_1 + 0xb078))) = (undefined2)param_2;
  if (param_3 != '\0') {
    uVar5 = 0;
    uVar4 = 0;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
    (*(undefined2 *)(gen_frame + 0x18)) = REFG(undefined2, 0x14b4eb8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0x262;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    bVar1 = F_00974e00(this GEN_EDX_ARG,puVar3,uVar4,uVar5);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a5e9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5e9f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5e9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') | *((uint *)GEN_TOP((param_1 + 0x1148))) & 0xfffffffe;
  *((uint *)GEN_TOP((param_1 + 0x1148))) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ea10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ea10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  *((char *)GEN_TOP((param_1 + 0xe9fd))) = param_2;
  *((char *)GEN_TOP((param_1 + 0xaf81))) = param_2;
  *((char *)GEN_TOP((param_1 + 0xebe0))) = param_2;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xff78))) & 0xfffffffe;
  *((uint *)GEN_TOP((param_1 + 0xff78))) = param_2 != '\0' | uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5ea50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5ea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5ea90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5eb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5eb90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5eb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5eba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5eba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5eba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ebd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a5ebd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ebd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,800)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a5ec40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5ec40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ec40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0x10,800);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x10,800);
  return (uint)uVar3;
}

/* ref: FUN_00a5ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ec90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ec90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00a5eca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5eca0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5eca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5ecb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a5ecb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a5ecc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ecc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x10,0,800)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Client::Game::Network::PacketQue::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ed30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ed30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a55930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a5ed60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ed60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x10,0,800)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00a5edd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5edd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5edd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0x10,800);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Client::Game::Network::PacketVFX::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ee20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(param_1 GEN_EDX_FWD);
  F_00a5ec40(param_1 + 1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a5ee80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5ee80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5ee80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xc0))) = param_2;
  return;
}

/* ref: FUN_00a5eed0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5eed0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5eed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x8f))) & 0x7f | param_2 << 7;
  *((byte *)GEN_TOP((param_1 + 0x8f))) = bVar1;
  return bVar1;
}

/* ref: FUN_00a5eef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5eef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5eef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xf0))) = param_2;
  return param_2;
}

/* ref: FUN_00a5ef00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5ef00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa5ef00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return;
}

/* ref: FUN_00a5ef40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ef40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa5ef40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xf8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xfc))) = param_3;
  return param_1;
}

/* ref: FUN_00a5ef80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5ef80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 4 ^ *((byte *)GEN_TOP((in_ecx + 0x8f)))) & 0x10;
  *((byte *)GEN_TOP((in_ecx + 0x8f))) = *((byte *)GEN_TOP((in_ecx + 0x8f))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5efe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5efe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5efe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x118))) = param_2;
  return param_2;
}

/* ref: FUN_00a5f000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x170))) = param_2;
  return param_2;
}

/* ref: FUN_00a5f010 */
GEN_OWN GEN_FRAME float10 F_00a5f010(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa5f010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00a5f030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f030(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa5f030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_3 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD,param_2,param_4);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG,param_2,param_4);
  return uVar1;
}

/* ref: FUN_00a5f060 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return *((byte *)GEN_TOP(((int)this + 0x8e))) >> 1 & 1;
}

/* ref: Client::Game::Object::GameObject::GetObjectId */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(uint *)(this + 0x74) != 0xe0000000) {
    return *(uint *)(this + 0x74);
  }
  if (*(uint *)(this + 0x78) == 0) {
    return (uint)*(ushort *)(this + 0x88);
  }
  return *(uint *)(this + 0x78);
}

/* ref: FUN_00a5f0b0 */
GEN_OWN GEN_FRAME uint F_00a5f0b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if ((param_2 < 2) && (uVar1 = param_1, param_2 != 0)) {
    uVar1 = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00a5f0d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return;
  }
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xec)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00a5f106;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
LAB_00a5f106: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0xb,0);
  return;
}

/* ref: FUN_00a5f120 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
      F_00a1b5a0(((undefined4 *)GEN_TOP(((int)this + 0xf0))));
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
    (*pcVar1)(this,0xb,0);
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  float fVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = F_00aae7a0(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar2));
  return uVar1;
}

/* ref: FUN_00a5f1d0 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00a5f1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0xb4)));
}

/* ref: FUN_00a5f1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0xc4))) +
                                  (float10)*((float *)GEN_TOP((in_ecx + 0xd4)))))));
  return (uint)param_2;
}

/* ref: Client::Game::Object::GameObject::vf22 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  return;
}

/* ref: Client::Game::Object::GameObject::vf23 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5f220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00a5f230 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x70)));
  if (((bVar1 & 1) != 0) &&
     ((REFG(int, 0x1379694) == 0 ||
      (((((bVar1 & 2) != 0 || (*((int *)GEN_TOP((REFG(int, 0x1379694) + 0xe4))) == 0)) ||
        (*((int *)GEN_TOP((REFG(int, 0x1379694) + 0xe4))) != *((int *)GEN_TOP(((int)this + 0xe4))))) &&
       ((((bVar1 & 4) != 0 || (*((int *)GEN_TOP(((int)this + 0x84))) == -0x20000000)) ||
        (*((int *)GEN_TOP((REFG(int, 0x1379694) + 0x74))) != *((int *)GEN_TOP(((int)this + 0x84))))))))))) {
    return *((byte *)GEN_TOP(((int)this + 0x8f))) >> 4 & 1;
  }
  return 1;
}

/* ref: FUN_00a5f290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_FWD);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)this;
}

/* ref: FUN_00a5f2b0 */
GEN_OWN GEN_FRAME uint F_00a5f2b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5f2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)param_1;
}

/* ref: FUN_00a5f2e0 */
GEN_OWN GEN_FRAME uint F_00a5f2e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5f2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  longlong lVar1;
  
  if ((param_1 != ((undefined4 *)GEN_TOP(0x0))) &&
     (lVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG), lVar1 != 0xe0000000)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a5f310 */
GEN_OWN GEN_FRAME uint F_00a5f310(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xa5f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0xe0000000;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))
                    (param_1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a5f330 */
GEN_OWN GEN_FRAME uint F_00a5f330(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5f330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 0) {
    return 0xe0000000;
  }
  return *((uint *)GEN_TOP((param_1 + 0x74)));
}

/* ref: Client::Game::Object::GameObject::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x178))) != 0) {
    *param_2 = *((int *)GEN_TOP((in_ecx + 0x178)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00a5f380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xe4)));
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar1 = F_006da050(this_00 GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      return 1;
    }
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a5f3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xe4)));
  iVar2 = 0;
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar1 = F_006da050(this_00 GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      iVar2 = 1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,param_1 + iVar2);
  return uVar1 + iVar2;
}

/* ref: FUN_00a5f430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (*((uint *)GEN_TOP(((int)this + 0x78))) != param_1) {
    *((uint *)GEN_TOP(((int)this + 0x78))) = param_1;
    uVar1 = F_00a35710(&REFG(undefined, 0x14a31e0) GEN_EDX_FWD,this);
  }
  return uVar1;
}

/* ref: FUN_00a5f450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (*((uint *)GEN_TOP(((int)this + 0x74))) != param_1) {
    *((uint *)GEN_TOP(((int)this + 0x74))) = param_1;
    uVar1 = F_00a35720(&REFG(undefined, 0x14a31e0) GEN_EDX_FWD,this);
  }
  return uVar1;
}

/* ref: FUN_00a5f470 */
GEN_OWN GEN_FRAME byte F_00a5f470(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa5f470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    return 3;
  case 9: ;
    return 2;
  default: ;
    return 0;
  case 0xc: ;
    return 5;
  case 0xe: ;
    return 6;
  case 0x10: ;
    return 4;
  case 0x2d: ;
    return 7;
  }
}

/* ref: FUN_00a5f500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_FWD);
    if (uVar1 == 3) {
      return *((uint *)GEN_TOP(((int)this + 0xec)));
    }
  }
  return 0;
}

/* ref: FUN_00a5f530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x8f))) = *((byte *)GEN_TOP((in_ecx + 0x8f))) | 0xc;
  *((uint *)GEN_TOP((in_ecx + 0xe4))) = param_2;
  return param_2;
}

/* ref: FUN_00a5f550 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a5f550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x8f))) = *((byte *)GEN_TOP((in_ecx + 0x8f))) | 0xc;
  *((ushort *)GEN_TOP((in_ecx + 0xe8))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5f570 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5f570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x8f))) = *((byte *)GEN_TOP((in_ecx + 0x8f))) | 8;
  *((byte *)GEN_TOP((in_ecx + 0x70))) = param_2;
  return param_2;
}

/* ref: FUN_00a5f590 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5f590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5f590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x7c))) == 0)) {
    F_005db410(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x94)));
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar2 = F_006e5cf0(this_00 GEN_EDX_ARG,this);
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf26 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f5e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x8e))) >> 2 & 1;
}

/* ref: Client::Game::Object::GameObject::vf29 */
GEN_OWN GEN_NOFRAME unsigned int F_00a5f5f0(void)
{
  GEN_ENTER(0xa5f5f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GameObject::vf30 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x8e))) >> 3 & 1;
}

/* ref: Client::Game::Object::GameObject::vf34 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((byte *)GEN_TOP((in_ecx + 0x90))) = *((byte *)GEN_TOP((in_ecx + 0x90))) & 0xf3;
  return;
}

/* ref: Client::Game::Object::GameObject::vf35 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x7c))) != 0) && (bVar1 = *((byte *)GEN_TOP((in_ecx + 0x90))), (bVar1 & 4) == 0)) {
    *((byte *)GEN_TOP((in_ecx + 0x90))) = bVar1 | 4;
    return (bVar1 & 8) >> 3;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf36 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x7c))) != 0) && (bVar1 = *((byte *)GEN_TOP((in_ecx + 0x90))), (bVar1 & 8) == 0)) {
    *((byte *)GEN_TOP((in_ecx + 0x90))) = bVar1 | 8;
    return (bVar1 & 4) >> 2;
  }
  return 0;
}

/* ref: FUN_00a5f680 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5f680(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  if (param_1[0x3c] != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x0)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)param_1) >> 8)));
    (*(int *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3),1);
    if (param_2 == '\x01') {
      (*(int *)(gen_frame + 0x0)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3) << 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_FWD,1,(*(int *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd0))))(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a5f6d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5f6d0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  if (param_1[0x3c] != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x0)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)param_1) >> 8)));
    (*(int *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3),1);
    if (param_2 == '\x01') {
      (*(int *)(gen_frame + 0x0)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3) << 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_FWD,0,(*(int *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf47 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5f710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5f710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  int iVar1;
  char cVar2;
  
  if ((((byte)this[0x8f] & 2) == 0) && (this_00 = *(undefined * PTR32 *)(this + 0xf0), this_00 != ((undefined *)GEN_TOP(0x0))))
  {
    cVar2 = (char)param_1;
    if (*((int *)GEN_TOP(((int)this_00 + 0x9c))) != 0) {
      iVar1 = (*((int *)GEN_TOP(((int)this_00 + 0xb0))) << 0x1a) >> 0x1d;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          if (cVar2 != '\0') {
            return;
          }
        }
        else {
          if (iVar1 != 2) {
            return;
          }
          if (cVar2 != '\x01') {
            return;
          }
        }
      }
      F_005e3480(this_00 GEN_EDX_FWD,param_1,param_2);
      return;
    }
    iVar1 = (*((int *)GEN_TOP(((int)this_00 + 0xb0))) << 0x1d) >> 0x1d;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (cVar2 != '\0') {
          return;
        }
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        if (cVar2 != '\x01') {
          return;
        }
      }
    }
    F_005f51d0(this_00 GEN_EDX_ARG,param_1,param_2);
  }
  return;
}

/* ref: FUN_00a5f7a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (REFG(char, 0x1379c96) == '\0')) {
    bVar1 = F_005e1600();
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG);
      if ((char)uVar2 == '\0') {
        if ((((*((byte *)GEN_TOP(((int)this + 0x8e))) & 0x80) != 0) && (*((int *)GEN_TOP(((int)this + 0x7c))) == 0)) &&
           (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0)))) {
          bVar1 = F_005d5fe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG);
          uVar2 = CONCAT31(extraout_var_00,bVar1);
          if (bVar1 == 1) {
            uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xbc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG);
            if ((char)uVar2 == '\0') {
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG);
              return uVar2;
            }
          }
        }
      }
      else if ((*((byte *)GEN_TOP(((int)this + 0x8e))) & 0x80) == 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf49 */
GEN_OWN GEN_NOFRAME byte F_00a5f830(void)
{
  GEN_ENTER(0xa5f830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf50 */
GEN_OWN GEN_NOFRAME byte F_00a5f840(void)
{
  GEN_ENTER(0xa5f840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf51 */
GEN_OWN GEN_NOFRAME uint F_00a5f850(void)
{
  GEN_ENTER(0xa5f850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a5f860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5f860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_005dbc90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = F_005eb180(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_1,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a5f8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5f8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xec)));
  if (uVar1 == 0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_005e3290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,0x2d);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5f8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == ((char *)GEN_TOP(0x0))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
    return in_EAX;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c4d9ef((int)this + 0x30,0x40,param_1,0xffffffff);
  if (0x3f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    uVar5 = 0x3e;
    do {
      bVar2 = *((byte *)GEN_TOP(((int)this + 0x30 + uVar5)));
      if ((bVar2 & 0xc0) == 0xc0) {
        *((undefined1 *)GEN_TOP((uVar5 + 0x30 + (int)this))) = 0;
        return uVar5;
      }
      if (-1 < (char)bVar2) {
        return uVar5;
      }
      uVar4 = uVar5 - 1;
      *((undefined1 *)GEN_TOP(((int)this + uVar5 + 0x30))) = 0;
      uVar5 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf31 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a5f940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x8e))) >> 5 & 1;
}

/* ref: Client::Game::Object::GameObject::vf32 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((byte *)GEN_TOP((in_ecx + 0x8e))) = *((byte *)GEN_TOP((in_ecx + 0x8e))) | 0x20;
  return;
}

/* ref: Client::Game::Object::GameObject::vf48 */
GEN_OWN GEN_NOFRAME byte F_00a5f960(void)
{
  GEN_ENTER(0xa5f960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GameObject::vf43 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a5f970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5f970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  this[0x90] = (undefined1)((byte)this[0x90] & 0xfc);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x74) = 0xe0000000;
  *(undefined4 *)(this + 0x84) = 0xe0000000;
  *(undefined2 *)(this + 0x88) = (undefined2)param_1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x70] = (undefined1)0x0;
  *(undefined2 *)(this + 0x8a) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x7c | 3);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 3 | 0xec);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x83);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfd);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0x8c) = 0xd;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xb4) = uVar1;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x124);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x128);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x130);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x138);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfe);
  *(undefined4 *)(this + 0x11c) = 0x900;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x90] = (undefined1)((byte)this[0x90] & 0xf3);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5fb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pGVar5;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_FWD);
  if ((char)uVar4 == '\0') {
    pGVar5 = this;
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar4 = F_006e5b10(this_00 GEN_EDX_ARG,pGVar5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  *(undefined4 *)(this + 0x174) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_00a5fbf9;
  if (*(int *)(this + 0x7c) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      goto LAB_00a5fbe2;
    }
  }
  else {
LAB_00a5fbe2: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0xb,0);
LAB_00a5fbf9: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
    *(undefined4 *)(this + 0xf0) = 0;
    uVar4 = (*pcVar3)(this,0xb,0);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf12 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a5fc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    return;
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_00a5fc7c;
  if (*(int *)(this + 0x7c) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      goto LAB_00a5fc65;
    }
  }
  else {
LAB_00a5fc65: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0xb,0);
LAB_00a5fc7c: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
    *(undefined4 *)(this + 0xf0) = 0;
    (*pcVar3)(this,0xb,0);
  }
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x6f);
  return;
}

/* ref: FUN_00a5fcc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a5fcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5fcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03')) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_FWD,param_1);
      return (byte)uVar3;
    }
  }
  else {
    bVar2 = F_005d5fe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG);
    if (bVar2 != 0) {
      bVar2 = F_005eae70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_1);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a5fd10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa5fd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
    bVar5 = F_005d5fe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD);
    if (bVar5 != 0) {
      bVar5 = F_005eae70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_2);
      if (bVar5 == 0) {
        param_2 = 0x2e;
      }
      bVar5 = F_005eae70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_2);
      if (bVar5 != 0) {
        F_005eb040(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_1,param_2);
      }
      goto LAB_00a5fdf3;
    }
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
  if ((piVar4 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar4 + 0x65))) == '\x03')) {
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG,param_2);
    if ((char)uVar7 == '\0') {
      param_2 = 0x2e;
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,param_2);
    if ((char)uVar7 != '\0') {
      pfVar6 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x48))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_2)));
      *param_1 = *pfVar6;
      param_1[1] = pfVar6[1];
      param_1[2] = pfVar6[2];
    }
  }
LAB_00a5fdf3: ;
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
    (*(float *)(gen_frame + 0x1c)) = *((float *)GEN_TOP(((int)this + 0xb4)));
    fVar8 = (float10)*((float *)GEN_TOP(((int)this + 0xb4)));
    *param_1 = (float)(fVar8 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar8);
    param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_ARG);
    if (((char)uVar7 != '\0') && (*((int *)GEN_TOP(((int)this + 0xec))) != 0)) {
      fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 0x294)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar8 = (float10)fVar1;
      *param_1 = (float)(fVar8 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar8);
      param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    }
  }
  fVar2 = *((float *)GEN_TOP(((int)this + 0xd0)));
  fVar1 = *((float *)GEN_TOP(((int)this + 0xd8)));
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0xd4)));
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xc4))) + (float10)*((float *)GEN_TOP(((int)this + 0xd4))))));
  (*(float *)(gen_frame + 0x4)) = fVar3;
  *param_1 = (float)((float10)*param_1 + (float10)fVar2);
  param_1[1] = (float)((float10)param_1[1] + (float10)fVar3);
  param_1[2] = (float)((float10)param_1[2] + (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_00a5feb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5feb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5feb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD);
      return uVar1;
    }
    if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
      return *((int *)GEN_TOP(((int)this + 0xec))) + 0x30;
    }
  }
  return (int)this + 0xa0;
}

/* ref: FUN_00a5fef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a5fef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD);
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    return *((int *)GEN_TOP(((int)this + 0xec))) + 0x30;
  }
  return (int)this + 0xa0;
}

/* ref: Client::Game::Object::GameObject::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a5ff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined1 GVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD,param_1,(uint)((byte)this[0x8e] >> 6 & 1));
  GVar1 = this[0x8e];
  uVar2 = CONCAT31((int3)(uVar2 >> 8),GVar1);
  bVar3 = (byte)param_1;
  if ((((byte)GVar1 >> 6 & 1) != bVar3) &&
     (this[0x8e] = (undefined1)((bVar3 << 6 ^ (byte)GVar1) & 0x40 ^ (byte)GVar1), bVar3 != 0)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0xa0);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0xa8);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00a5ffa0 */
GEN_OWN GEN_NOFRAME float F_00a5ffa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa5ffa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  
  if (*((int *)GEN_TOP((param_1 + 0x7c))) == 0) {
LAB_00a5ffef: ;
    pfVar1 = ((float *)GEN_TOP((param_1 + 0xa0)));
  }
  else if (*((int *)GEN_TOP((param_1 + 0xf0))) == 0) {
    pfVar1 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xec))) + 0x30)));
    if (*((int *)GEN_TOP((param_1 + 0xec))) == 0) goto LAB_00a5ffef;
  }
  else {
    pfVar1 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG)));
  }
  if (*((int *)GEN_TOP((param_2 + 0x7c))) != 0) {
    if (*((int *)GEN_TOP((param_2 + 0xf0))) != 0) {
      pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((param_2 + 0xf0))) GEN_EDX_ARG)));
      goto LAB_00a6002f;
    }
    if (*((int *)GEN_TOP((param_2 + 0xec))) != 0) {
      pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xec))) + 0x30)));
      goto LAB_00a6002f;
    }
  }
  pfVar2 = ((float *)GEN_TOP((param_2 + 0xa0)));
LAB_00a6002f: ;
  fVar3 = ((float10)GEN_TOD(atan2((float10)(float)((float10)*pfVar2 - (float10)*pfVar1),
                          (float10)(float)((float10)pfVar2[2] - (float10)pfVar1[2]))));
  fVar3 = (float10)(float)fVar3;
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
    fVar3 = GEN_X87((float10)(float)(fVar3 - (float10)*(float *)&REFG(undefined, 0x1334a30)));
  }
  if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
    return GEN_X87((float)((float10)*(float *)&REFG(undefined, 0x1334a30) + fVar3));
  }
  return (float)fVar3;
}

/* ref: FUN_00a600a0 */
GEN_OWN GEN_NOFRAME double F_00a600a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa600a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != ((undefined *)GEN_TOP(0x0))) && (param_2 != ((undefined *)GEN_TOP(0x0)))) && (param_1 != param_2)) {
    pfVar1 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
    pfVar2 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    return GEN_X87((double)((float)GEN_TOF((((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) *
                                                                  (float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) +
                                                                 (float10)(float)((float10)pfVar2[2]
                                                                                 - (float10)pfVar1[2
                                                  ]) * (float10)(float)((float10)pfVar2[2] -
                                                                       (float10)pfVar1[2])))))))) -
                           (float10)*((float *)GEN_TOP(((int)param_1 + 0xc0)))) -
                          (float10)*((float *)GEN_TOP(((int)param_2 + 0xc0)))))));
  }
  return 0.0;
}

/* ref: FUN_00a60140 */
GEN_OWN GEN_NOFRAME float F_00a60140(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa60140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != ((undefined *)GEN_TOP(0x0))) && (param_2 != ((undefined *)GEN_TOP(0x0)))) && (param_1 != param_2)) {
    pfVar1 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
    pfVar2 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    return GEN_X87(((float)GEN_TOF((((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) *
                                                          (float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) +
                                                         ((float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) *
                                                          (float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) +
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1]) *
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1]))))))))) -
                   (float10)*((float *)GEN_TOP(((int)param_1 + 0xc0)))) -
                  (float10)*((float *)GEN_TOP(((int)param_2 + 0xc0)))))));
  }
  return (float)(float10)0;
}

/* ref: FUN_00a601f0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00a601f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa601f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  double dVar1;
  
  dVar1 = F_00a600a0(this,param_1);
  return (float)dVar1;
}

/* ref: FUN_00a60210 */
GEN_OWN GEN_FRAME float F_00a60210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa60210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 == param_2) {
    return 0.0;
  }
  if (*((int *)GEN_TOP((param_2 + 0x7c))) != 0) {
    if (*((int *)GEN_TOP((param_2 + 0xf0))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((param_2 + 0xf0))) GEN_EDX_ARG);
      goto LAB_00a60264;
    }
    uVar1 = *((int *)GEN_TOP((param_2 + 0xec))) + 0x30;
    if (*((int *)GEN_TOP((param_2 + 0xec))) != 0) goto LAB_00a60264;
  }
  uVar1 = param_2 + 0xa0;
LAB_00a60264: ;
  if (*((int *)GEN_TOP((param_1 + 0x7c))) != 0) {
    if (*((int *)GEN_TOP((param_1 + 0xf0))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG);
      return GEN_X87(((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 4))) - (float10)*((float *)GEN_TOP((uVar2 + 4)))))));
    }
    if (*((int *)GEN_TOP((param_1 + 0xec))) != 0) {
      return GEN_X87(((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 4))) -
                    (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xec))) + 0x34)))))));
    }
  }
  return GEN_X87(((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 4))) - (float10)*((float *)GEN_TOP((param_1 + 0xa4)))))));
}

/* ref: FUN_00a602d0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00a602d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa602d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  fVar1 = F_00a60210(this,param_1);
  return fVar1;
}

/* ref: FUN_00a602f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a602f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa602f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*((byte *)GEN_TOP(((int)this + 0x8f))) & 4) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006d9de0(this_00 GEN_EDX_ARG);
    F_006d9e70(this_00 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          piVar4 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar5)]));
          if ((piVar4 != ((int *)GEN_TOP(0x0))) &&
             (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c4))))(piVar4 GEN_EDX_ARG), (char)uVar3 == '\0')) {
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar5 = 0;
      piVar4 = ((int *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar5)]));
          if (piVar1 != ((int *)GEN_TOP(0x0))) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1cc))))(piVar1 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar4 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar5)]));
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar2 = 0;
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c0))))(piVar4 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x118))) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *((byte *)GEN_TOP(((int)this + 0x8f))) = *((byte *)GEN_TOP(((int)this + 0x8f))) & 0xfb;
  }
  return;
}

/* ref: FUN_00a60400 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a60400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*((byte *)GEN_TOP(((int)this + 0x8f))) & 0x20) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          piVar5 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
          if ((piVar5 != ((int *)GEN_TOP(0x0))) &&
             (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x208))))(piVar5 GEN_EDX_ARG), (char)uVar3 == '\0')) {
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar4 = 0;
      piVar5 = ((int *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
          if (piVar1 != ((int *)GEN_TOP(0x0))) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1cc))))(piVar1 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar5 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar2 = 0;
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x1fc))))(piVar5 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x170))) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *((byte *)GEN_TOP(((int)this + 0x8f))) = *((byte *)GEN_TOP(((int)this + 0x8f))) & 0xdf;
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf28 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a60500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (((byte)this[0x8e] & 0x80) != 0) {
    if ((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0))) &&
       (bVar1 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_FWD), bVar1 != 0)) {
      return 1;
    }
    if (((*(int *)(this + 0xec) != 0) && (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) &&
       (bVar1 = F_00b5ba80(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x88)), bVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a60560 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a60560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa60560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  float * pfVar2;
  undefined4 * puVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xf0)));
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
  if (iVar1 == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0xec)));
      *param_1 = *((float *)GEN_TOP((iVar1 + 0x30)));
      param_1[1] = *((float *)GEN_TOP((iVar1 + 0x34)));
      param_1[2] = *((float *)GEN_TOP((iVar1 + 0x38)));
      iVar1 = *((int *)GEN_TOP(((int)this + 0xec)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x4c)));
      (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((iVar1 + 0x50)));
      (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((iVar1 + 0x54)));
      (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((iVar1 + 0x58)));
    }
  }
  else {
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xe4))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG)));
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
    param_1[2] = pfVar2[2];
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xec))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xf4))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x0)) = *pfVar2;
    (*(float *)(gen_frame + 0x4)) = pfVar2[1];
    (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x10)));
  *param_2 = (float)((float10)*param_2 * (float10)(*(float *)(gen_frame + 0x0)));
  param_2[1] = (float)((float10)param_2[1] * (float10)(*(float *)(gen_frame + 0x4)));
  param_2[2] = (float)((float10)param_2[2] * (float10)(*(float *)(gen_frame + 0x8)));
  F_00aaeb00((uint)param_2,(*(float *)(gen_frame + 0x2c)));
  *param_1 = (float)((float10)*param_1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_1[1] + (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_1[2]);
  return;
}

/* ref: FUN_00a606e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a606e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa606e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x88, 8, 4);
  int * piVar1;
  bool bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if ((uVar3 == 0) || (uVar3 = F_00974710(uVar3 GEN_EDX_ARG), (char)uVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (REFG(int, 0x1379694) == 0) {
      return 0;
    }
  }
  else if (REFG(int, 0x1379694) == 0) goto LAB_00a6075d;
  if ((((*((uint *)GEN_TOP((REFG(int, 0x1379694) + 0xe4))) != 0) &&
       (uVar3 = *((uint *)GEN_TOP(((int)this + 0xe4))), *((uint *)GEN_TOP((REFG(int, 0x1379694) + 0xe4))) == uVar3)) &&
      (uVar3 != 0)) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar3 = F_006da050(pvVar4 GEN_EDX_ARG,uVar3);
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_00a6075d: ;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xe4)));
  iVar6 = 0;
  if ((uVar3 != 0) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar3 = F_006da050(pvVar4 GEN_EDX_ARG,uVar3);
    if (uVar3 != 0) {
      ((uint *)(gen_frame + 0x0))[0] = uVar3;
      iVar6 = 1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,((uint *)(gen_frame + 0x0)) + iVar6);
  uVar3 = uVar3 + iVar6;
  if ((uVar3 != 0) && (uVar7 = 0, uVar3 != 0)) {
    do {
      piVar1 = ((int *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(uVar7)]));
      if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
         (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG), (char)uVar5 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}

/* ref: FUN_00a607e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a607e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa607e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00463610(param_1,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a5f8c0(this GEN_EDX_ARG,uVar1);
    *((byte *)GEN_TOP(((int)this + 0x8f))) = *((byte *)GEN_TOP(((int)this + 0x8f))) | 1;
  }
  return uVar2;
}

/* ref: FUN_00a60820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a60820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x7c)));
  if ((((uVar2 != 0) && (*((int *)GEN_TOP(((int)this + 0xf0))) == 0)) && (*((int *)GEN_TOP(((int)this + 0xec))) == 0)) &&
     (REFG(char, 0x1379c96) == '\0')) {
    piVar1 = ((int *)GEN_TOP(F_005f3270(1,uVar2,0)));
    if ((piVar1 == ((int *)GEN_TOP(0x0))) &&
       (piVar1 = ((int *)GEN_TOP(F_005f3270(6,*((undefined4 *)GEN_TOP(((int)this + 0x7c))),0))), piVar1 == ((int *)GEN_TOP(0x0))))
    {
      return 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xc0))), REFG(float, 0x10928e4));
    if (*((byte *)GEN_TOP(((int)piVar1 + 0x11))) == 1) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this + 0xec))) = uVar2;
      }
    }
    else {
      uVar2 = *((byte *)GEN_TOP(((int)piVar1 + 0x11))) - 6;
      if (uVar2 == 0) {
        *((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) = piVar1;
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a608c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa608c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  undefined3 uVar3;
  uint uVar2;
  
  GVar1 = this[0x8e];
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,GVar1);
  if ((-1 < (char)GVar1) && (((byte)GVar1 & 0x20) != 0)) {
    uVar2 = CONCAT31(uVar3,GVar1) & 0xffffffef | 0x80;
    this[0x8e] = SUB41(uVar2,0);
    if (*(int *)(this + 0x7c) != 0) {
      uVar2 = F_00a60820(this GEN_EDX_FWD);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a608f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a608f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa608f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  undefined * this_00;
  int * piVar1;
  byte bVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_FWD,param_1,param_2);
      return (uint)param_1;
    }
  }
  else {
    bVar2 = F_005d5fe0(this_00 GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_005eaf50(this_00 GEN_EDX_ARG,((float *)(gen_frame + 0x0)),param_2);
      goto LAB_00a60a1b;
    }
  }
  fVar6 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
  fVar7 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x7c)));
  ((float *)(gen_frame + 0x0))[0] = (float)fVar7;
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar6));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x20)) = (float)fVar6;
  (*(float *)(gen_frame + 0x28)) = (float)fVar7;
  if (iVar4 == 0) {
LAB_00a609fc: ;
    pfVar3 = ((float *)GEN_TOP(((int)this + 0xa0)));
  }
  else if (*((int *)GEN_TOP(((int)this + 0xf0))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xec))) == 0) goto LAB_00a609fc;
    pfVar3 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 0x30)));
  }
  else {
    pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xe4))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG)));
  }
  fVar6 = (float10)0;
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + fVar6);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + fVar6);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar6 + (float10)pfVar3[2]);
LAB_00a60a1b: ;
  pfVar3 = ((float *)(gen_frame + 0x0));
  pfVar5 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a60a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a60a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa60a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0xe0, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined * this_00;
  byte bVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x3c)) = param_2;
  if (*((int *)GEN_TOP(((int)this + 0x7c))) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xf0)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xe4))))(piVar4 GEN_EDX_FWD)));
      goto LAB_00a60aad;
    }
    if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
      puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 0x30)));
      goto LAB_00a60aad;
    }
  }
  puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0xa0)));
LAB_00a60aad: ;
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0)));
  (*(int * PTR32 *)(gen_frame + 0x38)) = this_00;
  puVar6 = param_1;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar4 + 0x65))) == '\x03')) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x3c)));
      if (((char)uVar7 == '\0') || ((*(int *)(gen_frame + 0x3c)) == 0x2e)) {
        if ((*((byte *)GEN_TOP(((int)this + 0x8f))) & 0x80) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),0x2e);
          puVar8 = ((undefined4 *)GEN_TOP(F_004bd7b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0xb4)))))));
          uVar1 = *puVar8;
          (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
          uVar2 = puVar8[1];
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          uVar3 = puVar8[2];
          *((undefined4 *)GEN_TOP(((int)this + 0x160))) = uVar1;
          *((undefined4 *)GEN_TOP(((int)this + 0x164))) = uVar2;
          *((undefined4 *)GEN_TOP(((int)this + 0x168))) = uVar3;
          *((byte *)GEN_TOP(((int)this + 0x8f))) = *((byte *)GEN_TOP(((int)this + 0x8f))) & 0x7f;
        }
        (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this + 0x160)));
        (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this + 0x164)));
        (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this + 0x168)));
        puVar8 = ((undefined4 *)GEN_TOP(F_004bd670(((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0xc,&(*(undefined4 *)(gen_frame + 0x20)))));
        *param_1 = *puVar8;
        param_1[1] = puVar8[1];
        param_1[2] = puVar8[2];
      }
      else {
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x40))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)))));
        puVar8 = ((undefined4 *)(gen_frame + 0x80));
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0xb0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = (*(undefined4 *)(gen_frame + 0xb4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined4 *)(gen_frame + 0xb8));
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
    }
  }
  else {
    bVar5 = F_005d5fe0(this_00 GEN_EDX_ARG);
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x38));
    if (bVar5 != 0) {
      bVar5 = F_005eae70((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x3c)));
      if (bVar5 == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0x2e;
      }
      F_005eaf50(piVar4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x80)),(*(int *)(gen_frame + 0x3c)));
      *param_1 = (*(undefined4 *)(gen_frame + 0xb0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0xb4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xb8));
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00a60ca0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a60ca0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa60ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL(0x6c, 4);
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_4);
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0xf0))) == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xec)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03')) {
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)),0x3d,param_3,(*(undefined4 *)(gen_frame + 0x0)))));
      puVar6 = puVar4;
      puVar7 = param_2;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00a60dc0;
    }
  }
  else {
    bVar3 = F_005d5fe0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG);
    if (bVar3 != 0) {
      bVar3 = F_005eaf50(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG,param_2,0x2e);
      puVar4 = ((undefined4 *)GEN_TOP((uint)bVar3));
      goto LAB_00a60dc0;
    }
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar6 = param_2;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x7c))) == 0) {
LAB_00a60d70: ;
    puVar4 = ((undefined4 *)GEN_TOP((param_1 + 0xa0)));
  }
  else if (*((int *)GEN_TOP((param_1 + 0xf0))) == 0) {
    if (*((int *)GEN_TOP((param_1 + 0xec))) == 0) goto LAB_00a60d70;
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xec))) + 0x30)));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG)));
  }
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = uVar2;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = uVar2;
  param_2[0xc] = *puVar4;
  param_2[0xd] = puVar4[1];
  param_2[0xe] = puVar4[2];
LAB_00a60dc0: ;
  return (byte)puVar4;
}

/* ref: FUN_00a60de0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a60de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  float * pfVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
      fVar2 = *((float *)GEN_TOP(((int)this + 0xc4)));
      fVar1 = *((float *)GEN_TOP(((int)this + 0xa8)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar3 = *((float *)GEN_TOP(((int)this + 0xa4)));
      (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP(((int)this + 0xa0)));
      (*(float *)(gen_frame + 0x18)) = fVar1;
      fVar1 = (float)((float10)fVar3 + (float10)fVar2);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      bVar5 = F_0054ccb0(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_FWD,&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *((float *)GEN_TOP(((int)this + 0xd8)));
        (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)this + 0xd0)));
        (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0xd4)));
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) +
                       (float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
        (*(float *)(gen_frame + 0x28)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xe8))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
      return uVar6;
    }
    if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
      (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP(((int)this + 0xc4)));
      pfVar7 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
      (*(float *)(gen_frame + 0x2c)) = *pfVar7;
      uVar6 = F_00a5feb0(this GEN_EDX_ARG);
      fVar1 = *((float *)GEN_TOP((uVar6 + 4)));
      (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x2c));
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar6 = F_00a5feb0(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP((uVar6 + 8)));
      bVar5 = F_0054ccb0(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG,&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *((float *)GEN_TOP(((int)this + 0xd8)));
        (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)this + 0xd0)));
        (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0xd4)));
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) +
                       (float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
        (*(float *)(gen_frame + 0x24)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x2c)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x28)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_ARG);
      if (((char)in_EAX == '\0') || (*((char *)GEN_TOP(((int)this + 0x2e08))) == '\0')) {
        in_EAX = *((uint *)GEN_TOP(((int)this + 0xec)));
        *((float *)GEN_TOP((in_EAX + 0x30))) = (*(float *)(gen_frame + 0x10));
        *((float *)GEN_TOP((in_EAX + 0x34))) = (*(float *)(gen_frame + 0x14));
        *((float *)GEN_TOP((in_EAX + 0x38))) = (*(float *)(gen_frame + 0x18));
        *((uint *)GEN_TOP((in_EAX + 0x24))) = *((uint *)GEN_TOP((in_EAX + 0x24))) | 2;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
      if (*((char *)GEN_TOP(((int)piVar4 + 0x65))) == '\x03') {
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG,1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61000 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined3 extraout_var = 0;
  float10 fVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) + (float10)*((float *)GEN_TOP(((int)this + 0xb0))))))
      ;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar7 = (float10)fVar2;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * (float10)REFG(float, 0x1302c80));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar7);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)REFG(float, 0x1302c88));
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      (*(float *)(gen_frame + 0xc)) = (float)fVar7;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0xf0))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
      return uVar6;
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0xec)));
    if (iVar3 != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) + (float10)*((float *)GEN_TOP(((int)this + 0xb0))))))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      F_0054cfd0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(float, 0x1302c80),fVar1);
      *((uint *)GEN_TOP((iVar3 + 0x24))) = *((uint *)GEN_TOP((iVar3 + 0x24))) | 2;
      *((float *)GEN_TOP((iVar3 + 0x40))) = (*(float *)(gen_frame + 0x0));
      *((float *)GEN_TOP((iVar3 + 0x44))) = (*(float *)(gen_frame + 0x4));
      *((float *)GEN_TOP((iVar3 + 0x48))) = (*(float *)(gen_frame + 0x8));
      *((float *)GEN_TOP((iVar3 + 0x4c))) = (*(float *)(gen_frame + 0xc));
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
      if (*((char *)GEN_TOP(((int)piVar4 + 0x65))) == '\x03') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG,1);
      }
    }
    bVar5 = F_0054ccb0(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG,&REFG(float, 0x1375ac0));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) {
      in_EAX = F_00a60de0(this GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61140 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a61140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xf0))) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xf0)));
      (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xf8))))(piVar2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
      return;
    }
    if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
      iVar3 = *((int *)GEN_TOP(((int)this + 0xec)));
      *((undefined4 *)GEN_TOP((iVar3 + 0x58))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar3 + 0x50))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar3 + 0x54))) = uVar1;
      *((uint *)GEN_TOP((iVar3 + 0x24))) = *((uint *)GEN_TOP((iVar3 + 0x24))) | 2;
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,1);
      }
    }
  }
  return;
}

/* ref: FUN_00a611f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a611f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa611f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_2 == ((uint *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    F_009755f0(this_00 GEN_EDX_ARG,puVar4);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    uVar3 = (*(uint *)(gen_frame + 0x2c));
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xfc)));
  if ((uVar3 <= uVar1) && ((uVar3 < uVar1 || (uVar2 < *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xf8)))))))
  {
    return 0;
  }
  *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xf8))) = uVar2;
  *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xfc))) = uVar3;
  return 1;
}

/* ref: FUN_00a61290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa61290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  int iVar2;
  
  *param_1 = *((float *)GEN_TOP(((int)this + 0xa0)));
  param_1[1] = *((float *)GEN_TOP(((int)this + 0xa4)));
  param_1[2] = *((float *)GEN_TOP(((int)this + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x7c)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)this + 0x120)));
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0x124)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)this + 0x128)));
  if (iVar2 != 0) {
    F_00a60560(this GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) + (float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: FUN_00a61360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa61360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  int iVar2;
  
  *param_1 = *((float *)GEN_TOP(((int)this + 0xa0)));
  param_1[1] = *((float *)GEN_TOP(((int)this + 0xa4)));
  param_1[2] = *((float *)GEN_TOP(((int)this + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x7c)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)this + 0x130)));
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0x134)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)this + 0x138)));
  if (iVar2 != 0) {
    F_00a60560(this GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xe0))) + (float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: Client::Game::Object::GameObject::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 GVar6;
  code * pcVar7;
  byte bVar8;
  uint uVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  if ((((byte)this[0x8e] & 0x20) == 0) &&
     (uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc0))))(this GEN_EDX_FWD), (char)uVar9 != '\0')) {
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x20);
  }
  if (((((byte)this[0x8e] & 8) == 0) && (((byte)this[0x8e] & 0x20) != 0)) &&
     (bVar8 = F_00a606e0(this GEN_EDX_ARG), bVar8 != 0)) {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x74)));
    this[0x8e] = (undefined1)((byte)this[0x8e] | 8);
    (*pcVar7)(this);
  }
  if ((((byte)this[0x8e] & 0x10) == 0) &&
     (uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG), (char)uVar9 != '\0')) {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x6c)));
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x10);
    (*pcVar7)(this);
  }
  GVar6 = this[0x8e];
  if (((((byte)GVar6 & 4) == 0) && (((byte)GVar6 & 0x20) != 0)) &&
     ((((byte)GVar6 & 8) != 0 &&
      ((((byte)GVar6 & 0x10) != 0 && (bVar8 = F_00a606e0(this GEN_EDX_ARG), bVar8 != 0)))))) {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)this + 100)));
    this[0x8e] = (undefined1)((byte)this[0x8e] | 4);
    (*pcVar7)(this);
  }
  fVar1 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x144);
  fVar3 = *(float *)(this + 0x124);
  fVar4 = *(float *)(this + 0x148);
  fVar5 = *(float *)(this + 0x128);
  fVar12 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120)))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  fVar13 = GEN_X87((float10)(float)((float10)fVar2 - (float10)fVar3));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar14 = GEN_X87((float10)(float)((float10)fVar4 - (float10)fVar5));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar12 * fVar12 + fVar13 * fVar13))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar15 = (float10)fVar2;
  bVar11 = GEN_ISNAN(fVar15) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || fVar15 == (float10)0)) {
    if (fVar2 < REFG(float, 0x10e5d90)) {
      *(float *)(this + 0x120) = fVar1;
      *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x144);
      *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x148);
    }
    else {
      fVar16 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
      if (fVar15 * fVar16 < (float10)*(double *)&REFG(undefined, 0x10e5d88)) {
        pfVar10 = ((float *)GEN_TOP(F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG)));
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10e5d88);
        fVar12 = GEN_X87((float10)*pfVar10 * fVar14);
        fVar13 = GEN_X87((float10)pfVar10[1] * fVar14);
        fVar14 = GEN_X87(fVar14 * (float10)pfVar10[2]);
      }
      else {
        fVar12 = GEN_X87(fVar12 * fVar16);
        fVar13 = GEN_X87(fVar13 * fVar16);
        fVar14 = GEN_X87(fVar14 * fVar16);
      }
      (*(float *)(gen_frame + 0x4)) = (float)fVar13;
      (*(float *)(gen_frame + 0x0)) = (float)fVar12;
      *(float *)(this + 0x120) = ((float)GEN_TOF(((float10)*(float *)(this + 0x120) + (float10)(*(float *)(gen_frame + 0x0)))));
      *(float *)(this + 0x124) = ((float)GEN_TOF(((float10)*(float *)(this + 0x124) + (float10)(*(float *)(gen_frame + 0x4)))));
      *(float *)(this + 0x128) = ((float)GEN_TOF(((float10)*(float *)(this + 0x128) + (float10)(float)fVar14)))
      ;
    }
  }
  fVar1 = *(float *)(this + 0x150);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x154);
  fVar3 = *(float *)(this + 0x134);
  fVar4 = *(float *)(this + 0x158);
  fVar5 = *(float *)(this + 0x138);
  fVar12 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130)))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  fVar15 = GEN_X87((float10)(float)((float10)fVar2 - (float10)fVar3));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar13 = GEN_X87((float10)(float)((float10)fVar4 - (float10)fVar5));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar15 * fVar15) + fVar13 * fVar13)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  bVar11 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || (float10)fVar2 == (float10)0)) {
    if (fVar2 <= REFG(float, 0x10e5d84)) {
      *(float *)(this + 0x130) = fVar1;
      *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x154);
      fVar12 = (float10)*(float *)(this + 0x158);
    }
    else {
      pfVar10 = ((float *)GEN_TOP(F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG)));
      fVar12 = (float10)REFG(double, 0x1094800);
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      *(float *)(this + 0x130) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x130) + (float10)(float)((float10)*pfVar10 * fVar12))))
      ;
      *(float *)(this + 0x134) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x134) + (float10)(float)((float10)fVar1 * fVar12))));
      fVar12 = GEN_X87((float10)(float)(fVar12 * (float10)fVar2) + (float10)*(float *)(this + 0x138));
    }
    *(float *)(this + 0x138) = (float)fVar12;
  }
  F_00a602f0(this GEN_EDX_ARG);
  F_00a60400(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_ARG);
  uVar9 = F_00a5f7a0(this GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_00a61740 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a61740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0xf0))) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        bVar1 = *((byte *)GEN_TOP(((int)this + 0x8e)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) = piVar3;
        if (((-1 < (char)bVar1) && ((bVar1 & 0x20) != 0)) &&
           (*((byte *)GEN_TOP(((int)this + 0x8e))) = bVar1 & 0xef | 0x80, *((int *)GEN_TOP(((int)this + 0x7c))) != 0)) {
          F_00a60820(this GEN_EDX_ARG);
        }
        F_00a1eab0(((undefined1 *)(gen_frame + 0x0)),this);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x100))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a617e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xa617e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0xd0))) = param_2;
  *((float *)GEN_TOP(((int)param_1 + 0xd4))) = param_3;
  *((float *)GEN_TOP(((int)param_1 + 0xd8))) = param_4;
  uVar1 = F_00a60de0(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61820(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa61820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*((float *)GEN_TOP(((int)param_1 + 0xe0)));
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
  if (bVar2 == bVar3) {
    *((float *)GEN_TOP(((int)param_1 + 0xe0))) = param_2;
    uVar1 = F_00a61000(param_1 GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xa61850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0xa0))) = param_2;
  *((float *)GEN_TOP(((int)param_1 + 0xa4))) = param_3;
  *((float *)GEN_TOP(((int)param_1 + 0xa8))) = param_4;
  uVar1 = F_00a60de0(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa61890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0xb0))) = param_2;
  uVar1 = F_00a61000(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf19 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a618b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa618b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP(((int)param_1 + 0xb4))) = param_2;
  F_00a61140(param_1 GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)param_1 + 0x8f))) = *((byte *)GEN_TOP(((int)param_1 + 0x8f))) | 0x80;
  return;
}

/* ref: FUN_00a618e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a618e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa618e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0xec))) == 0) {
    return 1;
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xec))) + 100))) >> 3 & 1;
}

/* ref: FUN_00a61900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 100)));
    *pbVar1 = *pbVar1 | 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_FWD);
    if (uVar2 == 4) {
      uVar2 = F_00699cb0(*((undefined4 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: FUN_00a61940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_FWD);
    if (uVar2 == 4) {
      uVar2 = F_0068b730(*((undefined4 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf9 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a61980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa61980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x11c);
  uVar2 = ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & uVar1;
  *(uint *)(this + 0x11c) = uVar2;
  if (((*(int *)(this + 0xf0) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a5f680(this GEN_EDX_FWD,(undefined1)param_2);
    return 1;
  }
  if (((*(int *)(this + 0xec) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a61900(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a619f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa619f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0x47];
  uVar2 = 1 << GEN_SHC((byte)(*(int *)&gen_args[0]), (byte)(*(int *)&gen_args[0])) | uVar1;
  param_1[0x47] = uVar2;
  if (((param_1[0x3c] != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    (*(int *)&gen_args[0]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[0]), 1, 3),1);
    if ((*(char *)&gen_args[1]) == '\x01') {
      (*(int *)&gen_args[0]) = (uint)GEN_PIECE(&(*(int *)&gen_args[0]), 1, 3) << 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_FWD,0,(*(int *)&gen_args[0]));
    return 1;
  }
  if (((param_1[0x3b] != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    F_00a61940(param_1 GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xdc, 4);
  int * piVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined * pGVar5;
  code * pcVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  
  if (((byte)this[0x8f] & 8) == 0) {
LAB_00a61a85: ;
    return in_EAX & 0xffffff00;
  }
  uVar4 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  in_EAX = F_00974710(uVar4 GEN_EDX_ARG);
  if ((((char)in_EAX != '\0') && (REFG(int, 0x1379694) == 0)) || (in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG), (char)in_EAX == '\0')) goto LAB_00a61a85;
  if (*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0))) {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_ARG);
    if (bVar3 == 0) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  uVar4 = F_00a5f380(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0xc0)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0xd0)) = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)GEN_TOP(0x0));
  if (uVar4 != 0) {
    (*(char *)(gen_frame + 0xd7)) = '\0';
    piVar8 = ((int *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0xcc)) = uVar4;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar8));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        if (*((short *)GEN_TOP(((int)piVar1 + 10))) == 0xd) {
          uVar4 = F_006ce010(piVar1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x80)),0x10);
          uVar7 = 0;
          (*(uint *)(gen_frame + 0xc8)) = uVar4;
          if (uVar4 != 0) {
            do {
              bVar10 = (*(int * PTR32 *)(gen_frame + 0xd0)) == ((int *)GEN_TOP(0x0));
              piVar1 = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x80))[(int)(uVar7)]));
              *piVar8 = (int)piVar1;
              if ((bVar10) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1d0))))(piVar1 GEN_EDX_ARG,this), (char)uVar4 != '\0')) {
                (*(char *)(gen_frame + 0xd7)) = '\x01';
                (*(int * PTR32 *)(gen_frame + 0xd0)) = ((int *)GEN_TOP(*piVar8));
              }
              if (*((short *)GEN_TOP((*piVar8 + 10))) == 0x1a) {
                (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)GEN_TOP(*piVar8));
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (*(uint *)(gen_frame + 0xc8)));
          }
        }
        else {
          if (((*(int * PTR32 *)(gen_frame + 0xd0)) == ((int *)GEN_TOP(0x0))) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1d0))))(piVar1 GEN_EDX_ARG,this), (char)uVar4 != '\0')) {
            (*(char *)(gen_frame + 0xd7)) = '\x01';
            (*(int * PTR32 *)(gen_frame + 0xd0)) = ((int *)GEN_TOP(*piVar8));
          }
          if (*((short *)GEN_TOP((*piVar8 + 10))) == 0x1a) {
            (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)GEN_TOP(*piVar8));
          }
        }
      }
      piVar8 = piVar8 + 1;
      uVar4 = (*(uint *)(gen_frame + 0xcc)) - 1;
      (*(uint *)(gen_frame + 0xcc)) = uVar4;
    } while (uVar4 != 0);
    if ((((*(int * PTR32 *)(gen_frame + 0xd0)) != ((int *)GEN_TOP(0x0))) && ((*(int * PTR32 *)(gen_frame + 0xc4)) != ((int *)GEN_TOP(0x0)))) && ((*(int * PTR32 *)(gen_frame + 0xd0)) != (*(int * PTR32 *)(gen_frame + 0xc4)))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc4)) + 0x1d0))))((*(int * PTR32 *)(gen_frame + 0xc4)) GEN_EDX_ARG,this);
      (*(char *)(gen_frame + 0xd7)) = (char)uVar4;
    }
    this[0x8f] = (undefined1)((byte)this[0x8f] ^ ((*(char *)(gen_frame + 0xd7)) << 4 ^ (byte)this[0x8f]) & 0x10);
  }
  piVar8 = (*(int * PTR32 *)(gen_frame + 0xd0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))(this GEN_EDX_ARG);
  cVar2 = (char)uVar4;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = cVar2;
  (*(uint *)(gen_frame + 0xcc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xcc)), 1, 3),cVar2);
  bVar3 = F_00a5f230(this GEN_EDX_ARG);
  if (bVar3 == 0) {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
    pGVar5 = this;
  }
  else {
    pcVar6 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
    pGVar5 = (((undefined *)GEN_TOP((uint)(this))));
  }
  (*pcVar6)(pGVar5,8,(*(uint *)(gen_frame + 0xcc)));
  if (cVar2 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_ARG,1,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61900(this GEN_EDX_ARG);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_ARG,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61940(this GEN_EDX_ARG);
      }
    }
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  if ((char)uVar4 != '\0') {
    bVar3 = F_005e1600();
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      bVar3 = F_005d99e0();
      uVar4 = CONCAT31(extraout_var_01,bVar3);
      if (bVar3 != 0) goto LAB_00a61c9e;
    }
  }
  if (((byte)this[0x8e] & 0x80) != 0) {
    return uVar4 & 0xffffff00;
  }
LAB_00a61c9e: ;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)this[0x8e] >> 1) & 0xffffff01;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc8)) + 0)) = (char)uVar4;
  (*(uint *)(gen_frame + 0xc8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc8)), 1, 3),(char)uVar4);
  if (piVar8 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x1d4))))(piVar8 GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0xc8)));
  }
  uVar7 = (*(uint *)(gen_frame + 0xc0));
  uVar9 = 0;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 * '\x02' ^ (byte)this[0x8e]) & 0xffffff02;
  this[0x8e] = (undefined1)((byte)this[0x8e] ^ (byte)uVar4);
  if ((*(uint *)(gen_frame + 0xc0)) != 0) {
    do {
      piVar8 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar9)]));
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc0))))(piVar8 GEN_EDX_ARG,this);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xf7);
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: Client::Game::Object::GameObject::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a61d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP(F_00a5fd10(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x2d)));
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x120) = uVar1;
  *(undefined4 *)(this + 0x124) = uVar2;
  *(undefined4 *)(this + 0x128) = uVar3;
  *(undefined4 *)(this + 0x140) = uVar1;
  *(undefined4 *)(this + 0x144) = uVar2;
  *(undefined4 *)(this + 0x148) = uVar3;
  puVar5 = ((undefined4 *)GEN_TOP(F_00a5fd10(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x46)));
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x130) = uVar1;
  *(undefined4 *)(this + 0x134) = uVar2;
  *(undefined4 *)(this + 0x138) = uVar3;
  *(undefined4 *)(this + 0x150) = uVar1;
  *(undefined4 *)(this + 0x154) = uVar2;
  *(undefined4 *)(this + 0x158) = uVar3;
  F_00a60de0(this GEN_EDX_ARG);
  F_00a61000(this GEN_EDX_ARG);
  F_00a61140(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0xb,(uint)(*(int *)(this + 0x7c) != 0));
  pcVar4 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x8c)));
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  uVar6 = (*pcVar4)(this);
  if ((char)uVar6 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_ARG,1,0);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61900(this GEN_EDX_ARG);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_ARG,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61940(this GEN_EDX_ARG);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a61e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61e80(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa61e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61eb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa61eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa61ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x160))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x164))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x168))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a61f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a61f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa61f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x160)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x164)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x168)));
  return (uint)param_2;
}

