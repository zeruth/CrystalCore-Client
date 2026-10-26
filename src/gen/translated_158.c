#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf53 */
uint F_00cd5c20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x344);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf54 */
uint F_00cd5c30(void)
{
  GEN_ENTER(0xcd5c30u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf55 */
uint F_00cd5c40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xf8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf74 */
byte F_00cd5c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf42 */
byte F_00cd5c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 0x1d8 + (uint)(byte)param_2 * 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf43 */
uint F_00cd5c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5c80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf44 */
byte F_00cd5ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1cc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf64 */
unsigned int F_00cd5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf45 */
uint F_00cd5cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x228);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf46 */
uint F_00cd5cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x228;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf47 */
uint F_00cd5ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 700) == 1) {
    uVar1 = F_00cd7c60(*(undefined * PTR32 *)(this + 0x2c0));
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf48 */
byte F_00cd5d00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x12);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf52 */
uint F_00cd5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf80 */
byte F_00cd5d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 8) == param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf56 */
uint F_00cd5d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x164);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf31 */
uint F_00cd5d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10c) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf84 */
byte F_00cd5d70(void)
{
  GEN_ENTER(0xcd5d70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf85 */
uint F_00cd5d80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf58 */
uint F_00cd5d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd5d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))
                    (this + 0x8c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf105 */
unsigned int F_00cd5db0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x340) = 1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf59 */
uint F_00cd5dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x13);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf89 */
uint F_00cd5dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5dd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(byte *)(in_ecx + 0x14) & 4) != 0) && (*(char *)(in_ecx + 0x128) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf90 */
uint F_00cd5df0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf91 */
uint F_00cd5e00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 6 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf92 */
uint F_00cd5e10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf93 */
uint F_00cd5e20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 9 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf13 */
byte F_00cd5e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x128) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf94 */
unsigned int F_00cd5e40(void)
{
  GEN_ENTER(0xcd5e40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf60 */
uint F_00cd5e50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    return (int)(char)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf61 */
uint F_00cd5e90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x14)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf63 */
uint F_00cd5ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xd4);
  param_1[1] = *(undefined4 *)(this + 0xd8);
  uVar1 = *(undefined4 *)(this + 0xe0);
  param_1[2] = *(undefined4 *)(this + 0xdc);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf95 */
unsigned int F_00cd5ed0(void)
{
  GEN_ENTER(0xcd5ed0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf65 */
byte F_00cd5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf16 */
uint F_00cd5ef0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd5ef0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x138,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf69 */
uint F_00cd5f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x120);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf35 */
uint F_00cd5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x124) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf36 */
uint F_00cd5f30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x124);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf96 */
uint F_00cd5f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf71 */
uint F_00cd5f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd5f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0xffffffff;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf39 */
uint F_00cd5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd5f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x180) = param_1;
  *(undefined4 *)(this + 0x184) = param_2;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf70 */
uint F_00cd5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(uint *)(this + 0x180);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf100 */
uint F_00cd5fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x1e);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf101 */
byte F_00cd5fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf40 */
uint F_00cd5fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xfc) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf76 */
byte F_00cd5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c5);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf102 */
uint F_00cd5ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0xe4) = *param_1;
  *(undefined4 *)(this + 0xe8) = param_1[1];
  *(undefined4 *)(this + 0xec) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0xf0) = uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf103 */
uint F_00cd6020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xe4);
  param_1[1] = *(undefined4 *)(this + 0xe8);
  uVar1 = *(undefined4 *)(this + 0xf0);
  param_1[2] = *(undefined4 *)(this + 0xec);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf98 */
uint F_00cd6050(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1b0);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf99 */
uint F_00cd6060(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1b4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf0 */
uint F_00cd6070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cd3df0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf51 */
uint F_00cd60a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd60a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 700) <= (int)(param_1 & 0xff)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("trackIndex < trackCount_",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\RootSound.h"
                    ,0x105,"SQEX::CDev::Engine::Sd::Driver::RootSound::GetTrack");
  }
  return *((uint *)GEN_TOP((this + (param_1 & 0xff) * 4 + 0x2c0)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf50 */
uint F_00cd6100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 700) <= (int)(param_1 & 0xff)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("trackIndex < trackCount_",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\RootSound.h"
                    ,0x10a,"SQEX::CDev::Engine::Sd::Driver::RootSound::GetTrack");
  }
  return *((uint *)GEN_TOP((this + (param_1 & 0xff) * 4 + 0x2c0)));
}

/* ref: FUN_00cd6160 */
unsigned int F_00cd6160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6160u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cd6180 */
unsigned int F_00cd6180(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  int iVar1;
  
  F_00cccb40(in_ecx + 0x228);
  in_ecx_00 = in_ecx + 0x1a4;
  iVar1 = 3;
  do {
    in_ecx_00 = in_ecx_00 + -0x24;
    F_00cccb40(in_ecx_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00cccb40(in_ecx + 0xf0);
  F_00cccb40(in_ecx + 0xcc);
  F_00cccb40(in_ecx + 0xa8);
  F_00cccb40(in_ecx + 0x84);
  F_00cccb40(in_ecx + 0x60);
  F_00cbbdb0(in_ecx + 0xc);
  return 0;
}

/* ref: FUN_00cd61f0 */
uint F_00cd61f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd61f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)((int)this + 0x24c) =
       *(uint *)((int)this + 0x24c) ^ ((param_3 & 0xff) << 6 ^ *(uint *)((int)this + 0x24c)) & 0x40;
  *(uint *)((int)this + 0x1b4) = param_1;
  return param_1;
}

/* ref: FUN_00cd6220 */
double F_00cd6220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 4))))((undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 4))))((undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 4))))((undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))))
            ((int)this + 0xa8,(undefined4)gen_fl2bits((float)(float10)0));
  F_00cccc10((int)this + 0xa8,(float)(float10)0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcc) + 4))))
            ((int)this + 0xcc,(undefined4)gen_fl2bits((float)(float10)0));
  fVar2 = F_00cccc10((int)this + 0xcc,(float)(float10)0);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x1a4) = (float)fVar1;
  *(float *)((int)this + 0x1a8) = (float)fVar1;
  *(float *)((int)this + 0x1ac) = (float)fVar1;
  return (double)fVar2;
}

/* ref: FUN_00cd62d0 */
uint F_00cd62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd62d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00cccbd0((int)this + 0x60,(float)(float10)1);
  F_00cccbd0((int)this + 0xf0,(float)(float10)1);
  F_00cccbd0((int)this + 0x84,(float)(float10)1);
  F_00cccbd0((int)this + 0xa8,(float)(float10)0);
  F_00cccbd0((int)this + 0xcc,(float)(float10)0);
  fVar5 = (float10)1;
  *(float *)((int)this + 0x1c4) = (float)fVar5;
  *(float *)((int)this + 0x1c8) = (float)fVar5;
  *(float *)((int)this + 0x1d4) = (float)fVar5;
  *(float *)((int)this + 0x1d8) = (float)fVar5;
  *(float *)((int)this + 0x1d0) = (float)fVar5;
  fVar3 = (float10)0;
  *(float *)((int)this + 0x1cc) = (float)fVar3;
  *(float *)((int)this + 0x1f0) = (float)fVar3;
  *(float *)((int)this + 500) = (float)fVar3;
  *(float *)((int)this + 0x1e8) = (float)fVar5;
  *(float *)((int)this + 0x1ec) = (float)fVar5;
  *(float *)((int)this + 0x1f8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x1fc) = (float)fVar3;
  *(float *)((int)this + 0x200) = (float)fVar3;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4)));
  *(float *)((int)this + 0x220) = (float)fVar5;
  *(float *)((int)this + 0x224) = (float)fVar5;
  (*pcVar1)((undefined4)gen_fl2bits((float)fVar5));
  fVar5 = (float10)1;
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xffffffc0;
  *(float *)((int)this + 0x25c) = (float)fVar5;
  *(float *)((int)this + 0x21c) = (float)fVar5;
  *(float *)((int)this + 0x218) = (float)fVar5;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xffffffd0 | 0x10;
  *(float *)((int)this + 0x210) = (float)(float10)0;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined2 *)((int)this + 0x264) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x15c))(piVar2);
    fVar5 = (float10)1;
    if ((char)uVar4 != '\0') {
      *(float *)((int)this + 0x268) = (float)fVar5;
      goto LAB_00cd643e;
    }
  }
  *(float *)((int)this + 0x268) = (float)(float10)1;
  fVar5 = (float10)0;
LAB_00cd643e: ;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  *(float *)((int)this + 0x26c) = (float)fVar5;
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2);
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cd6460 */
uint F_00cd6460(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined1 *)((int)this + 0x20b) = 1;
  F_00cccc70((int)this + 0x60);
  F_00cccc70((int)this + 0xf0);
  F_00cccc70((int)this + 0x84);
  F_00cccc70((int)this + 0xa8);
  F_00cccc70((int)this + 0xcc);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar2 = F_00cbdd20((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00cd64e0 */
uint F_00cd64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd64e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x18)));
  *(undefined1 *)((int)this + 0x20b) = 0;
  (*pcVar1)((int)this + 0x60);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x18))))((int)this + 0xf0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x18))))((int)this + 0x84);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x18))))((int)this + 0xa8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcc) + 0x18))))((int)this + 0xcc);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar3 = F_00cbdd70((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_00cd6590 */
byte F_00cd6590(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x5c) == 0) && (*(int *)(in_ecx + 8) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd65b0 */
byte F_00cd65b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd65b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x5c) != 5) && (*(int *)(in_ecx + 0x5c) != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd65d0 */
byte F_00cd65d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd65d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte in_AL = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4));
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00cd66f0 */
unsigned int F_00cd66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),param_1);
  }
  F_00cbc480((undefined *)((int)this + 0xc),param_1);
  return 0;
}

/* ref: FUN_00cd6720 */
uint F_00cd6720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd6720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xb4))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd6740 */
uint F_00cd6740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x84))))((undefined4)gen_fl2bits(param_2));
  }
  uVar1 = F_00cbc710(param_1 + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cd6780 */
uint F_00cd6780(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  float fVar5;
  
  if (*(int *)((int)this + 8) != 0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xec))))(*(int * PTR32 *)((int)this + 8));
    if (((in_EAX != 0xb) && (in_EAX != 6)) && (*(int *)((int)this + 4) != 0)) {
      if ((in_EAX != 8) && (in_EAX != 10)) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x16c))))(*(int * PTR32 *)((int)this + 8));
        if ((char)uVar4 == '\0') {
LAB_00cd67e8: ;
          fVar1 = *(float *)((int)this + 0xc4);
          iVar2 = **(int * PTR32 *)((int)this + 4);
          F_00cccde0((undefined *)((int)this + 0xcc));
          fVar5 = F_00cccde0((undefined *)((int)this + 0xa8));
          uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xb8))
                            (*(undefined4 *)((int)this + 4),
                             (undefined4)
                             gen_fl2bits(((float)GEN_TOF(((((float10)fVar5 + (float10)fVar1) +
                                                 (float10)*(float *)((int)this + 0x1f0)) +
                                                (float10)*(float *)((int)this + 0x1cc))))));
          return uVar4;
        }
        bVar3 = F_00d2cdf0();
        if (bVar3 == 0) goto LAB_00cd67e8;
      }
      in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xb8))))
                         (*(int * PTR32 *)((int)this + 4),(undefined4)gen_fl2bits((float)(float10)0));
    }
  }
  return in_EAX;
}

/* ref: FUN_00cd6890 */
unsigned int F_00cd6890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1e4) = param_2;
  return 0;
}

/* ref: FUN_00cd68a0 */
float10 F_00cd68a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd68a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00cccc10(in_ecx + 0x84,param_2);
  return fVar1;
}

/* ref: FUN_00cd68c0 */
float10 F_00cd68c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd68c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00cccc10(in_ecx + 0xa8,param_2);
  return fVar1;
}

/* ref: FUN_00cd6960 */
uint F_00cd6960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd6960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xac))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd69c0 */
float10 F_00cd69c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd69c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar4 = 0;
  iVar2 = 0;
switchD_00cd69e8_caseD_7: ;
  iVar1 = iVar2;
  iVar2 = iVar1 + 2;
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar1 + param_1))) {
  case 0: ;
  case 0xe: ;
  case 0x10: ;
  case 0x35: ;
    goto switchD_00cd69e8_caseD_0;
  case 1: ;
  case 2: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xd: ;
  case 0x12: ;
  case 0x14: ;
  case 0x16: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x25: ;
  case 0x27: ;
  case 0x33: ;
    iVar2 = iVar1 + 10;
    goto switchD_00cd69e8_caseD_7;
  case 3: ;
    iVar4 = iVar4 + *(int *)(iVar2 + param_1);
switchD_00cd69e8_caseD_5: ;
    iVar2 = iVar1 + 6;
    goto switchD_00cd69e8_caseD_7;
  case 4: ;
  case 0x37: ;
  case 0x38: ;
    iVar2 = iVar1 + 0xe;
    goto switchD_00cd69e8_caseD_7;
  case 5: ;
  case 0xf: ;
  case 0x11: ;
  case 0x13: ;
  case 0x15: ;
  case 0x17: ;
  case 0x1d: ;
  case 0x20: ;
  case 0x30: ;
  case 0x3c: ;
    goto switchD_00cd69e8_caseD_5;
  case 7: ;
  case 0xc: ;
  case 0x24: ;
  case 0x26: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x31: ;
  case 0x32: ;
  case 0x34: ;
  case 0x36: ;
    goto switchD_00cd69e8_caseD_7;
  default: ;
    return (float10)0;
  case 0x2b: ;
  case 0x3b: ;
    iVar2 = iVar1 + 0x12;
    goto switchD_00cd69e8_caseD_7;
  case 0x2f: ;
    iVar2 = iVar1 + 4;
    goto switchD_00cd69e8_caseD_7;
  case 0x39: ;
    iVar2 = iVar2 + (uint)*(ushort *)(iVar2 + param_1) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3a: ;
    iVar2 = iVar1 + 6 + (uint)*(ushort *)(iVar1 + 4 + param_1) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3d: ;
    iVar2 = *(short *)(iVar1 + 4 + param_1) + iVar2 + *(short *)(iVar1 + 6 + param_1) * 4;
    goto switchD_00cd69e8_caseD_7;
  case 0x3f: ;
    break;
  }
  iVar3 = (int)*(short *)(iVar2 + param_1 + 4);
  iVar2 = iVar2 + *(short *)(iVar1 + 4 + param_1);
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      iVar2 = *(short *)(iVar2 + 2 + param_1) + iVar2 + *(short *)(iVar2 + 4 + param_1) * 4;
    } while (iVar3 != 0);
  }
  goto switchD_00cd69e8_caseD_7;
switchD_00cd69e8_caseD_0: ;
  return (float10)(float)((float10)iVar4 * (float10)REFG(double, 0x1091858));
}

/* ref: FUN_00cd6af0 */
unsigned int F_00cd6af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x82) = 1;
  *(float *)(in_ecx + 0x1d4) = param_2;
  return 0;
}

/* ref: FUN_00cd6b10 */
float10 F_00cd6b10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6b10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  
  *(float *)((int)param_1 + 0x1d8) = param_2;
  dVar1 = F_00cda360(param_1);
  *(undefined1 *)((int)param_1 + 0xa6) = 1;
  return (float10)dVar1;
}

/* ref: FUN_00cd6b30 */
float10 F_00cd6b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6b30u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = *(short *)(in_eax + 2) + in_eax;
  iVar1 = *(short *)(in_eax + 4) + -1;
  iVar8 = 0;
  iVar3 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar3 = (iVar6 + iVar8) / 2;
      uVar2 = *(ushort *)(iVar4 + iVar3 * 4);
      if (uVar2 == (ushort)param_2) break;
      if (uVar2 < (ushort)param_2) {
        iVar8 = iVar3 + 1;
      }
      else {
        iVar6 = iVar3 + -1;
      }
    } while (iVar8 <= iVar6);
  }
  if (((ushort)param_2 < *(ushort *)(iVar4 + iVar3 * 4)) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
  }
  else if (*(short *)(in_eax + 4) <= iVar3) {
    iVar3 = iVar1;
  }
  if (iVar3 != iVar1) {
    uVar5 = (uint)*(ushort *)(iVar4 + iVar3 * 4);
    uVar7 = (uint)*(ushort *)(iVar4 + 2 + iVar3 * 4);
    return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((float10)(int)((param_2 & 0xffff) - uVar5) /
                                             (float10)(int)(*(ushort *)(iVar4 + 4 + iVar3 * 4) -
                                                           uVar5)))) *
                             (float10)(int)(*(ushort *)(iVar4 + 6 + iVar3 * 4) - uVar7) +
                            (float10)uVar7) / (float10)REFG(double, 0x109cab0))));
  }
  return (float10)((float)GEN_TOF(((float10)*(ushort *)(iVar4 + 2 + iVar3 * 4) / (float10)REFG(double, 0x109cab0))));
}

/* ref: FUN_00cd6e00 */
uint F_00cd6e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x214) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x214) = *(uint *)(in_ecx + 0x214) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00cd6e40 */
unsigned int F_00cd6e40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd4))))(*(int * PTR32 *)((int)this + 4));
    return 0;
  }
  return 0;
}

/* ref: FUN_00cd6e60 */
uint F_00cd6e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar1)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar1)));
  param_1[1] = uVar2;
  *(int *)this = iVar1 + 8;
  return (uint)param_1;
}

/* ref: FUN_00cd6e90 */
uint F_00cd6e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)this;
  uVar1 = *(undefined1 *)(iVar2 + iVar3);
  iVar5 = iVar2 + iVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 4 + iVar3);
  *param_1 = uVar1;
  param_1[1] = *(undefined1 *)(iVar5 + 1);
  param_1[2] = *(undefined1 *)(iVar5 + 2);
  uVar1 = *(undefined1 *)(iVar5 + 3);
  uVar4 = *(undefined4 *)(iVar5 + 8);
  *(int *)this = iVar3 + 0xc;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00cd6ee0 */
uint F_00cd6ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)this + 8;
  *param_1 = *(undefined4 *)(iVar2 + *(int *)this);
  uVar1 = *(undefined4 *)(iVar2 + -4 + iVar3);
  *(int *)this = iVar3;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cd6f10 */
uint F_00cd6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 8) + iVar2;
  *param_1 = *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
  sVar1 = *(short *)(iVar3 + 2);
  param_1[1] = sVar1;
  if (-1 < sVar1) {
    *(int *)this = iVar2 + 4;
    return (uint)param_1;
  }
  *(int *)(param_1 + 2) = iVar3 + 4;
  *(int *)this = iVar2 + (2 - sVar1) * 2;
  return (uint)param_1;
}

/* ref: FUN_00cd6f90 */
uint F_00cd6f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(uint *)this = iVar1 + 4U;
  return iVar1 + 4U;
}

/* ref: FUN_00cd6fd0 */
uint F_00cd6fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)this;
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
  *(int *)this = iVar2 + 4;
  uVar4 = *((uint *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 8))));
  *(int *)this = iVar2 + 8;
  iVar5 = *(int *)((int)this + 0xc);
  if ((iVar5 < 0) || ((*(byte *)((int)this + iVar5 * 0x10 + 0x1c) & 2) == 0)) {
    *(int *)((int)this + 0xc) = iVar5 + 1;
    *((undefined4 *)GEN_TOP(((int)this + (iVar5 + 1) * 0x10 + 0x14))) = 0;
    *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0xc) + 1) * 0x10))) = iVar2 + -2;
    if (((char)param_1 == '\0') && (uVar3 < uVar4)) {
      uVar6 = F_00a4b840();
      *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) =
           uVar6 % ((uVar4 - uVar3) + 1) + uVar3;
    }
    else {
      *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) = uVar3;
    }
    *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x1c))) =
         (uint)(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) == 0);
  }
  iVar2 = *(int *)((int)this + 0xc);
  puVar1 = (uint *)((int)this + iVar2 * 0x10 + 0x1c);
  *puVar1 = *puVar1 & 0xfffffffd;
  return (int)this + iVar2 * 0x10 + 0x1c;
}

/* ref: FUN_00cd70b0 */
uint F_00cd70b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd70b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar1 = *((float *)GEN_TOP((*(int *)this + *(int *)((int)this + 8))));
  iVar2 = *(int *)((int)this + 0xc);
  *(int *)this = *(int *)this + 4;
  fVar5 = (float10)*(int *)((int)this + iVar2 * 0x10 + 0x14);
  if (*(int *)((int)this + iVar2 * 0x10 + 0x14) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = fVar5 * (float10)fVar1;
  uVar3 = (uint)fVar5;
  uVar4 = uVar3;
  if (-1 < iVar2) {
    uVar4 = uVar3 + *(int *)((int)this + 4);
    if (0 < (int)uVar4) {
      *(uint *)((int)this + 4) = uVar4;
      *param_1 = (float)((float10)(float)fVar5 - (float10)(int)uVar3);
      return uVar4;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar4;
}

/* ref: FUN_00cd7180 */
uint F_00cd7180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  *param_1 = *(undefined4 *)((int)this + 0x1b4);
  param_1[1] = *(undefined4 *)((int)this + 0x5c);
  fVar4 = F_00cccde0((undefined *)((int)this + 0x60));
  param_1[2] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0((undefined *)((int)this + 0x84));
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0((undefined *)((int)this + 0xa8));
  param_1[4] = (undefined4)gen_fl2bits(fVar4);
  param_1[5] = *(undefined4 *)((int)this + 8);
  param_1[6] = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xd0))))(*(int * PTR32 *)((int)this + 8));
  }
  param_1[7] = uVar1;
  param_1[8] = param_1[8] ^ ((uint)(*(int *)((int)this + 8) != 0) ^ param_1[8]) & 1;
  if ((*(int *)((int)this + 0x5c) == 0) && (*(int *)((int)this + 8) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  uVar1 = (iVar2 * 2 ^ param_1[8]) & 2U ^ param_1[8];
  param_1[8] = uVar1;
  uVar3 = ((uint)*(byte *)((int)this + 0x20b) * 4 ^ uVar1) & 4 ^ uVar1;
  param_1[8] = uVar3;
  param_1[8] = (*(uint *)((int)this + 0x24c) >> 3 ^ uVar3) & 8 ^ uVar3;
  return uVar1;
}

/* ref: FUN_00cd7250 */
uint F_00cd7250(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ecx;
  int local_8;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00cbbd70((int)this + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_00cccb10((int)this + 0x60,(float)(float10)1);
  F_00cccb10((int)this + 0x84,(float)(float10)1);
  F_00cccb10((int)this + 0xa8,(float)(float10)0);
  F_00cccb10((int)this + 0xcc,(float)(float10)0);
  F_00cccb10((int)this + 0xf0,(float)(float10)1);
  in_ecx = (int)this + 0x114;
  local_8 = 3;
  do {
    F_00cccb10(in_ecx,(float)(float10)0);
    in_ecx = in_ecx + 0x24;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  fVar4 = (float10)0;
  *(float *)((int)this + 0x1a4) = (float)fVar4;
  *(float *)((int)this + 0x1a8) = (float)fVar4;
  *(float *)((int)this + 0x1ac) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0x1b0) = (float)fVar3;
  *(float *)((int)this + 0x1c4) = (float)fVar3;
  *(float *)((int)this + 0x1c8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(float *)((int)this + 0x1d0) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  *(float *)((int)this + 0x1d4) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(float *)((int)this + 0x1d8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(float *)((int)this + 0x1e4) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x1f8) = (float)fVar4;
  *(float *)((int)this + 0x1fc) = (float)fVar4;
  *(float *)((int)this + 0x200) = (float)fVar4;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(float *)((int)this + 0x210) = (float)fVar4;
  *(undefined1 *)((int)this + 0x20c) = 0;
  F_00cccb10((int)this + 0x228,(float)fVar4);
  fVar4 = (float10)0;
  *(float *)((int)this + 0x1cc) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0x1e8) = (float)fVar3;
  *(float *)((int)this + 0x1ec) = (float)fVar3;
  *(float *)((int)this + 0x1f0) = (float)fVar4;
  *(float *)((int)this + 500) = (float)fVar4;
  *(float *)((int)this + 0x1f8) = (float)fVar4;
  *(float *)((int)this + 0x1fc) = (float)fVar4;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x200) = (float)fVar4;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4)));
  *(float *)((int)this + 0x220) = (float)fVar3;
  *(float *)((int)this + 0x224) = (float)fVar3;
  (*pcVar1)((int)this + 0x228,(undefined4)gen_fl2bits((float)fVar3));
  *(float *)((int)this + 0x25c) = (float)(float10)1;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xffffff90 | 0x10;
  piVar2 = *(int * PTR32 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  if ((piVar2 == (int *)0x0) ||
     (uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x15c))(piVar2), uVar5 = REFG(float, 0x1088068), (char)uVar6 == '\0')) {
    *(float *)((int)this + 0x268) = (float)(float10)1;
    *(float *)((int)this + 0x26c) = (float)(float10)0;
  }
  else {
    *(undefined4 *)((int)this + 0x268) = REFG(float, 0x1088068);
    *(undefined4 *)((int)this + 0x26c) = uVar5;
  }
  *(undefined2 *)((int)this + 0x264) = 0;
  *(float *)((int)this + 0x21c) = (float)(float10)1;
  *(float *)((int)this + 0x218) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x270) = 0;
  F_00cccc10((int)this + 0xa8,(float)(float10)0);
  F_00cccc10((int)this + 0xcc,(float)(float10)0);
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xffffffc0;
  return (uint)this;
}

/* ref: FUN_00cd7670 */
unsigned int F_00cd7670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(undefined4 *)((int)this + 0x1a4) = *param_1;
  *(undefined4 *)((int)this + 0x1a8) = param_1[1];
  *(undefined4 *)((int)this + 0x1ac) = param_1[2];
  *(undefined4 *)((int)this + 0x1b0) = param_1[3];
  F_00cda400(this,(uint)((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x8)));
  }
  F_00cbc4e0((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cd76f0 */
float F_00cd76f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd76f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  if (*(uint *)((int)this + 0x24) == 0) {
    return (float)(float10)0;
  }
  fVar1 = F_00cd69c0(*(uint *)((int)this + 0x24));
  return (float)fVar1;
}

/* ref: FUN_00cd7720 */
unsigned int F_00cd7720(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd7720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  if ((*(int *)((int)param_1 + 0x5c) != 5) && (*(int *)((int)param_1 + 0x5c) != 6)) {
    *(float *)((int)param_1 + 0x1f0) = param_2;
    *(float *)((int)param_1 + 500) = param_3;
    *(undefined4 *)((int)param_1 + 0x1f8) = *param_4;
    *(undefined4 *)((int)param_1 + 0x1fc) = param_4[1];
    *(undefined4 *)((int)param_1 + 0x200) = param_4[2];
    *(undefined4 *)((int)param_1 + 0x204) = param_4[3];
    F_00cdafb0(param_1);
    F_00cbc9e0((int)param_1 + 0xc,param_2,param_3,param_4);
  }
  return 0;
}

/* ref: FUN_00cd77a0 */
uint F_00cd77a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd77a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xa8,param_2);
    uVar1 = F_00cdafb0(param_1);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xa8,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd77e0 */
uint F_00cd77e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd77e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xcc,param_2);
    uVar1 = F_00cdafb0(param_1);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xcc,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd7820 */
uint F_00cd7820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd7820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00cd78c0 */
uint F_00cd78c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd78c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (-1 < *(int *)((int)this + 0x1c)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!commandAnalyzer_.IsActive()",&REFG(undefined, 0x112c98e),"Track.cpp",0xe0,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
  }
  if (*(int *)((int)this + 0x20) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("commandAnalyzer_.getInterval() == 0",&REFG(undefined, 0x112c98f),"Track.cpp",0xe1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
    *(uint *)((int)this + 0x1b4) = param_2;
    *(uint *)((int)this + 0x24) = param_1;
    return param_2;
  }
  *(uint *)((int)this + 0x1b4) = param_2;
  *(uint *)((int)this + 0x24) = param_1;
  return param_1;
}

/* ref: FUN_00cd7980 */
byte F_00cd7980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd7980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) == 4) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISH_WAIT",&REFG(undefined, 0x112c9ad),"Track.cpp",0xf4,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined, 0x112c9ae),"Track.cpp",0xf5,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*(int *)((int)this + 0x1b8) == -1) {
    *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(param_1 + 0xc);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1,param_2,param_3);
  return (byte)uVar2;
}

/* ref: FUN_00cd7a50 */
uint F_00cd7a50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if ((((iVar1 != 5) && (iVar1 != 0)) && (iVar1 != 6)) && (iVar1 != 999)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_FINISHED || state_ == STATE_RUNNABLE || state_ == STATE_ZOMBIE || state_ == STATE_RESERVED"
                    ,&REFG(undefined, 0x112cb06),"Track.cpp",0x278,
                    "SQEX::CDev::Engine::Sd::Driver::Track::RefreshVoice");
  }
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  *(undefined4 *)((int)this + 0x208) = 0;
  uVar2 = F_00cd8330(this,0);
  return uVar2;
}

/* ref: FUN_00cd7ae0 */
uint F_00cd7ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsMusic] already detached\"",&REFG(undefined, 0x112cb2f),"Track.cpp",0xf65,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetBusNumber");
  return 0;
}

/* ref: FUN_00cd7b40 */
byte F_00cd7b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa8))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetSendBus] already detached\"",&REFG(undefined, 0x112cb67),"Track.cpp",0xf72,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetSendBus");
  return 0;
}

/* ref: FUN_00cd7c00 */
byte F_00cd7c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xb0))))(*(int * PTR32 *)((int)this + 8));
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetNumSendBuses] already detached\"",&REFG(undefined, 0x112cb73),"Track.cpp",
                  0xf8a,"SQEX::CDev::Engine::Sd::Driver::Track::GetNumSendBuses");
  return 0;
}

/* ref: FUN_00cd7c60 */
uint F_00cd7c60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 4) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd0))))(*(int * PTR32 *)((int)this + 4));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetEffect] already detached\"",&REFG(undefined, 0x112cbee),"Track.cpp",0xf96,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetEffect");
  return 0;
}

/* ref: FUN_00cd7cc0 */
uint F_00cd7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x180))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetBank] already detached\"",&REFG(undefined, 0x112cbef),"Track.cpp",0x1115,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetBank");
  return 0;
}

/* ref: FUN_00cd7d20 */
byte F_00cd7d20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x170))))(*(int * PTR32 *)((int)this + 8));
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsMusic] already detached\"",&REFG(undefined, 0x112cc09),"Track.cpp",0x112f,
                  "SQEX::CDev::Engine::Sd::Driver::Track::IsMusic");
  return 0;
}

/* ref: FUN_00cd7d80 */
byte F_00cd7d80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x160))))(*(int * PTR32 *)((int)this + 8));
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsUsingGranular] already detached\"",&REFG(undefined, 0x112cc0a),"Track.cpp",
                  0x1138,"SQEX::CDev::Engine::Sd::Driver::Track::IsUsingGranular");
  return 0;
}

/* ref: FUN_00cd7de0 */
byte F_00cd7de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd7de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  
  if ((char)param_2 != '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *(undefined4 *)((int)this + 0x1b8);
    param_1[5] = 0xffffffff;
  }
  iVar2 = *(int *)((int)this + 0x24);
  uVar9 = (uint)*(ushort *)(param_1[2] + iVar2);
  param_1[2] = param_1[2] + 2;
  bVar3 = false;
  bVar4 = false;
  if (0x3f < uVar9) {
switchD_00cd7e46_caseD_cd7e31: ;
    return 0;
  }
switchD_00cd7e46_switchD: ;
  switch((unsigned int)(uintptr_t)((&REFG(undefined * PTR32, 0xcd8098))[uVar9])) {
  case (undefined *)0xcd7e31: ;
    goto switchD_00cd7e46_caseD_cd7e31;
  case (undefined *)0xcd7e4d: ;
    iVar5 = param_1[2];
    param_1[2] = *(short *)(iVar5 + 2 + iVar2) + iVar5 + *(short *)(iVar5 + 4 + iVar2) * 4;
    break;
  case (undefined *)0xcd7e67: ;
    iVar8 = param_1[2];
    param_1[2] = param_1[2] + (int)*(short *)(iVar8 + 2 + iVar2);
    iVar5 = param_1[2];
    iVar8 = iVar8 + iVar2;
    iVar10 = 0;
    if (0 < *(short *)(iVar8 + 4)) {
      do {
        iVar5 = *(short *)(iVar5 + 2 + iVar2) + iVar5 + *(short *)(iVar5 + 4 + iVar2) * 4;
        param_1[2] = iVar5;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)(iVar8 + 4));
    }
    break;
  case (undefined *)0xcd7ea3: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] + -2;
      goto LAB_00cd8034;
    }
    param_1[2] = param_1[2] + 8;
    if ((!bVar3) || (!bVar4)) {
      *param_1 = param_1[3];
    }
    bVar3 = true;
    break;
  case (undefined *)0xcd7eca: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] + -2;
LAB_00cd8049: ;
      param_1[1] = param_1[3];
      return 1;
    }
  case (undefined *)0xcd7ed8: ;
    goto switchD_00cd7e46_caseD_cd7ed8;
  case (undefined *)0xcd7ee3: ;
    param_1[2] = param_1[2] + 8;
    break;
  case (undefined *)0xcd7ee9: ;
    param_1[2] = param_1[2] + 0xc;
    break;
  case (undefined *)0xcd7eef: ;
    param_1[3] = param_1[3] + *(int *)(param_1[2] + iVar2);
  case (undefined *)0xcd7ef8: ;
    param_1[2] = param_1[2] + 4;
    break;
  case (undefined *)0xcd7f1f: ;
    if ((bVar3) && (!bVar4)) {
LAB_00cd8034: ;
      param_1[1] = param_1[3];
      return 1;
    }
    break;
  case (undefined *)0xcd7f2f: ;
    iVar5 = param_1[2];
    sVar11 = *(short *)(iVar5 + 2 + iVar2);
    uVar1 = *(ushort *)(iVar5 + iVar2);
    param_1[2] = iVar5 + 4;
    piVar7 = (int *)F_00cd7cc0(this);
    uVar9 = (uint)uVar1;
    if (piVar7[4] != uVar9) {
      piVar7 = (int *)F_00d2ccd0();
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x90))(piVar7,uVar9)));
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    }
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,(int)sVar11);
    param_1[4] = *(undefined4 *)(uVar6 + 0xc);
    param_1[5] = uVar9;
    break;
  case (undefined *)0xcd7f8b: ;
    bVar4 = true;
    break;
  case (undefined *)0xcd7f94: ;
    if (bVar3) goto LAB_00cd8049;
    bVar4 = false;
    break;
  case (undefined *)0xcd7fa4: ;
    param_1[2] = param_1[2] + 0x10;
    break;
  case (undefined *)0xcd7fad: ;
    piVar7 = (int *)F_00cd7cc0(this);
    iVar5 = param_1[2];
    sVar11 = *(short *)(iVar5 + 2 + iVar2);
    uVar1 = *(ushort *)(iVar5 + iVar2);
    if (sVar11 < 0) {
      param_1[2] = iVar5 + (2 - sVar11) * 2;
      sVar11 = *(short *)(iVar5 + 4 + iVar2);
    }
    else {
      param_1[2] = iVar5 + 4;
    }
    if (piVar7[4] != (uint)uVar1) {
      piVar7 = (int *)F_00d2ccd0();
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x90))(piVar7,(uint)uVar1)));
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    }
    uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,(int)sVar11);
    param_1[4] = *(undefined4 *)(uVar9 + 0xc);
    break;
  case (undefined *)0xcd8027: ;
    param_1[2] = param_1[2] + 2;
    break;
  case (undefined *)0xcd805a: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] + -2;
    param_1[1] = 0xffffffff;
    return 1;
  case (undefined *)0xcd8078: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] + -2;
    param_1[1] = param_1[3];
    return 1;
  }
switchD_00cd7e46_caseD_cd7efc: ;
  uVar9 = (uint)*(ushort *)(param_1[2] + iVar2);
  param_1[2] = param_1[2] + 2;
  if (0x3f < uVar9) {
    return 0;
  }
  goto switchD_00cd7e46_switchD;
switchD_00cd7e46_caseD_cd7ed8: ;
  *param_1 = param_1[3];
  bVar3 = true;
  goto switchD_00cd7e46_caseD_cd7efc;
}

/* ref: FUN_00cd81a0 */
byte F_00cd81a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd81a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pTrackData_ != 0",&REFG(undefined, 0x112d698),"Track.cpp",0x12f8,
                    "SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::Activate");
  }
  *(undefined4 *)this = 0;
  uVar1 = (*(short * PTR32 *)((int)this + 8))[1];
  if ((**(short * PTR32 *)((int)this + 8) == 0x2f) && (*(undefined4 *)this = 4, 0xb < uVar1)) {
    *(undefined4 *)this = 0xffffffff;
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd8220 */
byte F_00cd8220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x14)));
  *piVar1 = *piVar1 + 1;
  iVar3 = *(int *)((int)this + 0xc);
  if (((*(byte *)((int)this + iVar3 * 0x10 + 0x1c) & 1) == 0) &&
     (*(uint *)((int)this + iVar3 * 0x10 + 0x18) <= *(uint *)((int)this + iVar3 * 0x10 + 0x14))) {
    *(int *)((int)this + 0xc) = iVar3 + -1;
    return 0;
  }
  iVar3 = *(int *)((int)this + iVar3 * 0x10 + 0x10);
  if (iVar3 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("offset != -1",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\Track.h"
                    ,0x2a2,"SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::setReadOffset");
  }
  *(int *)this = iVar3;
  puVar2 = ((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x1c)));
  *puVar2 = *puVar2 | 2;
  return 1;
}

/* ref: FUN_00cd82b0 */
uint F_00cd82b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd82b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x5c) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_RESERVED",&REFG(undefined, 0x112cacb),"Track.cpp",0x1c6,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Initialize");
  }
  uVar1 = *(uint *)((int)this + 0x5c);
  if (((uVar1 != 5) && (uVar1 != 6)) && (uVar1 != 0)) {
    return uVar1;
  }
  F_00cd7a50(this);
  F_00cd6220(this);
  uVar1 = F_00cd62d0(this);
  return uVar1;
}

/* ref: FUN_00cd8330 */
uint F_00cd8330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd8330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  *(undefined1 * PTR32 *)((int)this + 0x5c) = param_1;
  if (param_1 == &REFG(undefined, 0x5)) {
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x28) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    puVar1 = F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
    if (*(int *)((int)this + 8) == 0) {
      puVar1 = (undefined1 *)F_00cd82b0(this);
    }
  }
  else {
    puVar1 = param_1;
    if (param_1 == &REFG(undefined, 0x6)) {
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
      return 6;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cd8390 */
uint F_00cd8390(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x5c);
  if (((uVar2 != 5) && (uVar2 != 4)) && (uVar2 != 6)) {
    if (uVar2 != 3) {
      bVar1 = F_00cd81a0((undefined *)((int)this + 0x1c));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        *(undefined4 *)((int)this + 0x5c) = 4;
        return uVar2;
      }
    }
    *(undefined4 *)((int)this + 0x5c) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cd8440 */
unsigned int F_00cd8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcd8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112c9af),"Track.cpp",0x13e,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetStreamAudioData");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1,param_2,param_3,param_4,param_5),
     (char)uVar2 != '\0')) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00cd84d0 */
uint F_00cd84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd84d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x5c);
  if ((uVar2 != 0) && (uVar2 != 3)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    uVar2 = ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE || state_ == STATE_SEEKING",&REFG(undefined, 0x112c9ee),
                            "Track.cpp",0x147,
                            "SQEX::CDev::Engine::Sd::Driver::Track::ResetStreamData");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_1,param_2), (char)uVar2 != '\0')) {
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return uVar2;
}

/* ref: FUN_00cd8550 */
unsigned int F_00cd8550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd8550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112c9ef),"Track.cpp",0x154,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetStreamAudioDataEx");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,param_1,param_2), (char)uVar2 != '\0')) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00cd85d0 */
unsigned int F_00cd85d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd85d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112ca52),"Track.cpp",0x161,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Reserve");
  }
  *(undefined4 *)((int)this + 0x5c) = 999;
  return 0;
}

/* ref: FUN_00cd8630 */
unsigned int F_00cd8630(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00cd8a90 */
uint F_00cd8a90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_RESERVED",&REFG(undefined, 0x112cac9),"Track.cpp",0x1a1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined, 0x112caca),"Track.cpp",0x1a2,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  F_00cd87f0(this,0);
  if (*(int *)((int)this + 8) != 0) {
    F_00427d90();
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe4))))(*(int * PTR32 *)((int)this + 8));
    F_00d2cf60();
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  F_00cd82b0(this);
  F_00cea180(*(undefined4 *)((int)this + 4));
  dVar1 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
  *(undefined4 *)((int)this + 4) = 0;
  (*(uint *)(gen_frame + 0x8)) = (int)dVar1;
  uVar2 = F_00cbe1a0((int)this + 0xc,(uint)&(*(uint *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00cd8c00 */
uint F_00cd8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00cd87f0(this,0);
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x8c))))(*(int * PTR32 *)((int)this + 4),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x40))))(*(int * PTR32 *)((int)this + 4));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbe1a0((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00cd8a90(this);
  return uVar1;
}

/* ref: FUN_00cda190 */
uint F_00cda190(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda190u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cda1a0 */
uint F_00cda1a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda1b0 */
uint F_00cda1b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda220 */
uint F_00cda220(unsigned int gen_a0)
{
  GEN_ENTER(0xcda220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  F_00c48350((undefined *)((int)this + 0x10),0,0x30);
  return (uint)this;
}

/* ref: FUN_00cda290 */
uint F_00cda290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cda2d0 */
uint F_00cda2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return param_2;
}

/* ref: FUN_00cda2e0 */
uint F_00cda2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cda310 */
unsigned int F_00cda310(unsigned int gen_a0)
{
  GEN_ENTER(0xcda310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00cccb40(in_ecx + 0x28);
  F_00cccb40(in_ecx + 4);
  return 0;
}

/* ref: FUN_00cda3e0 */
uint F_00cda3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda3e0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00cda3f0 */
uint F_00cda3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cda400 */
uint F_00cda400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0xc4);
  uVar2 = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1a4);
  uVar3 = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  fVar6 = F_00cccde0((undefined *)(param_1 + 0xa8));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)param_2 + (float10)(float)((float10)fVar6 + (float10)fVar1))));
  fVar4 = (float10)fVar1;
  *(float *)param_2 = fVar1;
  fVar5 = (float10)REFG(float, 0x1090708);
  if (fVar4 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && fVar5 != fVar4)) {
    *(float *)param_2 = REFG(float, 0x1090708);
  }
  fVar4 = (float10)1;
  if (!((float10)*(float *)param_2 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN((float10)*(float *)param_2))) {
    return param_2;
  }
  *(float *)param_2 = (float)fVar4;
  return param_2;
}

/* ref: FUN_00cda4b0 */
uint F_00cda4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcda4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00cda700 */
byte F_00cda700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcda700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x1c);
  if ((*(byte *)((int)this + 0x24c) & 0x20) == 0) {
    iVar3 = *((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    *(int *)((int)this + 0x20) = *param_1 + iVar3;
  }
  else {
    fVar1 = *((float *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    iVar2 = (int)fVar1;
    *param_2 = (float)((float10)fVar1 - (float10)iVar2);
    *(int *)((int)this + 0x20) = *param_1 + iVar2;
  }
  if (0 < *(int *)((int)this + 0x20)) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = *(int *)((int)this + 0x20);
  return 0;
}

/* ref: FUN_00cda780 */
uint F_00cda780(unsigned int gen_a0)
{
  GEN_ENTER(0xcda780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  uVar2 = *(int *)((int)this + 0x1c) + 4;
  *(uint *)((int)this + 0x1c) = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x8c))))(*(int * PTR32 *)((int)this + 4),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cda8f0 */
uint F_00cda8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd6fd0((undefined *)((int)this + 0x1c),param_1);
  return uVar1;
}

/* ref: FUN_00cda900 */
uint F_00cda900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)((int)this + 0x24c) & 0x20) != 0) {
    uVar2 = F_00cd70b0((undefined *)((int)this + 0x1c),param_1);
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  uVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x28) * 0x10 + 0x30))) * iVar1;
  if (-1 < *(int *)((int)this + 0x28)) {
    uVar2 = uVar2 + *(int *)((int)this + 0x20);
    *(uint *)((int)this + 0x20) = ((int)uVar2 < 1) - 1 & uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cda9d0 */
uint F_00cda9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  uVar2 = *(int *)((int)this + 0x1c) + 4;
  *(uint *)((int)this + 0x1c) = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cdaa00 */
uint F_00cdaa00(unsigned int gen_a0)
{
  GEN_ENTER(0xcdaa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdab10 */
uint F_00cdab10(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3,0);
  }
  return uVar4;
}

/* ref: FUN_00cdab40 */
uint F_00cdab40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x68))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdab70 */
uint F_00cdab70(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar1 + 4;
  uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar1 + 8;
  uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)((int)this + 0x24))));
  uVar5 = iVar1 + 0xc;
  *(uint *)((int)this + 0x1c) = uVar5;
  if (*(int *)((int)this + 4) != 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))
                      (*(int * PTR32 *)((int)this + 4),uVar2,uVar3,uVar4);
  }
  return uVar5;
}

/* ref: FUN_00cdaec0 */
byte F_00cdaec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdaec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  int local_10;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  if (uVar2 < uVar1) {
    fVar5 = F_00a4b7d0();
    iVar3 = uVar1 - uVar2;
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_10 = (int)(longlong)TRUNC(fVar4 * (float10)fVar5);
    uVar2 = local_10 + uVar2;
  }
  iVar3 = uVar2 + *param_1;
  *(int *)((int)this + 0x20) = iVar3;
  if (0 < iVar3) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = iVar3;
  return 0;
}

/* ref: FUN_00cdaf50 */
uint F_00cdaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xcdaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x1c);
  cVar1 = *((char *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
  uVar5 = iVar2 + 4;
  *(uint *)((int)this + 0x1c) = uVar5;
  iVar3 = *((int *)GEN_TOP((uVar5 + *(int *)((int)this + 0x24))));
  iVar2 = iVar2 + 8;
  *(int *)((int)this + 0x1c) = iVar2;
  if (cVar1 == '\x01') {
    uVar4 = *(uint *)((int)this + 0x28);
    uVar5 = uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4 * 2;
      if (*(int *)((int)this + uVar4 * 0x10 + 0x30) == 0) {
        *(int *)((int)this + 0x1c) = iVar2 + iVar3;
        return uVar4 * 2;
      }
    }
  }
  else if (((cVar1 == '\x02') &&
           (uVar4 = *(uint *)((int)this + 0x28), uVar5 = uVar4, -1 < (int)uVar4)) &&
          (uVar5 = uVar4 * 2, *(int *)((int)this + uVar4 * 0x10 + 0x30) != 0)) {
    *(int *)((int)this + 0x1c) = iVar2 + iVar3;
  }
  return uVar5;
}

/* ref: FUN_00cdafb0 */
uint F_00cdafb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)((int)this + 0x5c);
  if (((uVar1 != 5) && (uVar1 != 6)) && (piVar2 = *(int * PTR32 *)((int)this + 8), piVar2 != (int *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x174))(piVar2);
    if ((char)uVar1 != '\0') {
      *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 4;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x130))))(*(int * PTR32 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      *(float *)((int)this + 0x1fc) = (float)(float10)1;
    }
    *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) & 0xef;
    piVar2 = (int *)F_00d2cce0();
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2);
      if (uVar1 == 2) {
        piVar2 = (int *)F_00d2ccd0();
        if (piVar2 != (int *)0x0) {
          uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2);
          if ((char)uVar1 != '\0') {
            uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
            F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),uVar1);
            uVar1 = F_00cbb300(((undefined1 *)(gen_frame + 0xc)));
            if (uVar1 != 1) {
              if ((uVar1 != 2) || (piVar2 = *(int * PTR32 *)((int)this + 4), piVar2 == (int *)0x0))
              goto LAB_00cdb086;
              uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2);
              if ((char)uVar1 != '\x04') goto LAB_00cdb086;
            }
            *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 0x10;
LAB_00cdb086: ;
            F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
            uVar1 = F_00cd6780(this);
            return uVar1;
          }
        }
        *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 0x10;
      }
    }
    uVar1 = F_00cd6780(this);
  }
  return uVar1;
}

/* ref: FUN_00cdb0b0 */
double F_00cdb0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 4 + iVar2)));
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  fVar4 = F_00cd74c0(this,fVar1,uVar3);
  return (double)fVar4;
}

/* ref: FUN_00cdb340 */
unsigned int F_00cdb340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("offset != -1",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\Track.h"
                    ,0x2a2,"SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::setReadOffset");
  }
  *(int *)this = param_1;
  return 0;
}

/* ref: FUN_00cdb3a0 */
unsigned int F_00cdb3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    F_00427d90();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe4))))(*(int * PTR32 *)((int)this + 8));
    F_00d2cf60();
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 0x5c) = 2;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
  }
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) | 0x20;
  return 0;
}

/* ref: FUN_00cdb430 */
uint F_00cdb430(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined1 * in_ecx;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  in_ecx = ((undefined1 *)(gen_frame + 0x4));
  iVar3 = 3;
  do {
    F_00cea700(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  }
  F_00cea180(*(undefined4 *)((int)this + 4));
  piVar1 = (int *)F_00cea080();
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x5c) = 6;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,this);
    if (*(int *)((int)this + 4) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,((undefined1 *)(gen_frame + 0x4)));
    }
  }
  *(int * PTR32 *)((int)this + 4) = piVar1;
  iVar3 = 3;
  puVar4 = &(*(uint *)(gen_frame + 0x158));
  do {
    F_00cccb40(puVar4 + -0xc);
    F_00cccb40(puVar4 + -0x15);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x15;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar2;
}

/* ref: FUN_00cdb500 */
byte F_00cdb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x208) = 1;
    *(undefined2 *)((int)this + 0x209) = 1;
    return 0;
  }
  F_00cdb3a0(this);
  return 1;
}

/* ref: FUN_00cdb540 */
uint F_00cdb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb540u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    F_00427d90();
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    in_EAX = F_00d2cf60();
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((short)(*(int *)&gen_args[1]) == 0x24) {
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
    }
    (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(int *)&gen_args[1]));
    uVar2 = F_00cdb430((*(undefined * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) & 0xffffffdf;
    return uVar2;
  }
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) | 8;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) & 0xffffffdf;
  return in_EAX;
}

/* ref: FUN_00cdba60 */
byte F_00cdba60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdba60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint3 uVar8;
  int iVar7;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar3 = (int *)F_00cd7cc0(this);
  uVar1 = param_1[1];
  if ((short)uVar1 < 0) {
    uVar4 = F_00a4b840();
    uVar1 = *((ushort *)GEN_TOP((*(int *)(param_1 + 2) +
             ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) % (int)(short)param_1[1]) *
             2)));
  }
  if (((piVar3 == (int *)0x0) || (piVar3[4] != (uint)*param_1)) ||
     ((*(byte *)(piVar3 + 0x12) & 8) != 0)) {
    piVar6 = (int *)F_00d2ccd0();
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x90))(piVar6,(uint)*param_1)));
    if ((piVar6 == (int *)0x0) || ((*(byte *)(piVar6 + 0x12) & 8) != 0)) goto LAB_00cdbc30;
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6,(int)(short)uVar1);
    uVar8 = (uint3)((uint)((int)(uintptr_t)piVar3) >> 8);
    if (*(int *)((int)this + 8) == 0) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x15c))))(*(int * PTR32 *)((int)this + 8));
      iVar7 = CONCAT31(uVar8,(char)uVar5);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x104))))(*(int * PTR32 *)((int)this + 8));
    bVar2 = F_00cd7980(this,uVar4,iVar7,uVar5 & 0xff);
    if (bVar2 == 0) goto LAB_00cdbb18;
    if (*(int *)((int)this + 4) != 0) {
      iVar7 = **(int * PTR32 *)((int)this + 4);
      goto LAB_00cdbbbb;
    }
  }
  else {
    if (((char)param_2 == '\0') &&
       ((*(int *)((int)this + 8) == 0 ||
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x15c))))(*(int * PTR32 *)((int)this + 8)),
        (char)uVar4 == '\0')))) {
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),1);
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x104))))(*(int * PTR32 *)((int)this + 8));
    uVar4 = uVar4 & 0xff;
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,(int)(short)uVar1);
    bVar2 = F_00cd7980(this,uVar5,(*(uint *)(gen_frame + 0x4)),uVar4);
    if (bVar2 == 0) {
LAB_00cdbb18: ;
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    if (*(int *)((int)this + 4) != 0) {
      iVar7 = **(int * PTR32 *)((int)this + 4);
LAB_00cdbbbb: ;
      fVar9 = F_00cd83d0(this);
      ((code *)*(gen_code32 *)(iVar7 + 0x4c))(*(undefined4 *)((int)this + 4),(undefined4)gen_fl2bits(fVar9));
      iVar7 = **(int * PTR32 *)((int)this + 4);
      fVar9 = F_00cd68f0(this);
      ((code *)*(gen_code32 *)(iVar7 + 0x80))(*(undefined4 *)((int)this + 4),(undefined4)gen_fl2bits(fVar9));
      iVar7 = **(int * PTR32 *)((int)this + 4);
      uVar4 = F_00cda400(this,(uint)((undefined1 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(iVar7 + 0x7c))(*(undefined4 *)((int)this + 4),uVar4);
    }
  }
  F_00cd6780(this);
  fVar9 = F_00cccde0((undefined *)((int)this + 0xcc));
  F_00cccbd0((int)this + 0xcc,fVar9);
  F_00cdafb0(this);
LAB_00cdbc30: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_00cdbcd0 */
byte F_00cdbcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined1, 0x107fc63),"Track.cpp",0x8f9,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetMidiVoice");
  }
  iVar1 = *(int *)((int)this + 0x5c);
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined1, 0x107fc63),"Track.cpp",0x8ff,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetMidiVoice");
  }
  bVar2 = F_00cdba60(this,(int)this + 0x270,1);
  return bVar2;
}

/* ref: FUN_00cdbd90 */
byte F_00cdbd90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcdbd90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  int * piVar1;
  double dVar2;
  byte bVar3;
  float fVar4;
  
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 1) != 0) && ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 2) == 0))
  {
    F_00cdbc50((*(undefined * PTR32 *)&gen_args[0]));
    fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4;
    F_00cd74c0((*(undefined * PTR32 *)&gen_args[0]),fVar4,*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))));
    return 0;
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') {
    F_00cdb540((*(undefined * PTR32 *)&gen_args[0]),0x24);
  }
  else {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 0;
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)dVar2);
    F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(float *)(gen_frame + 0x8)));
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 4))))((undefined4)gen_fl2bits((float)(float10)1));
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffb | 0x10;
  bVar3 = F_00cdbcd0((*(undefined * PTR32 *)&gen_args[0]));
  if (bVar3 == 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + -2;
    return 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffd;
  F_00cdbc50((*(undefined * PTR32 *)&gen_args[0]));
  fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4;
  (*(float *)(gen_frame + 0x8)) = fVar4;
  F_00cd74c0((*(undefined * PTR32 *)&gen_args[0]),fVar4,*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))));
  in_ecx = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) == 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) == 0) {
      F_00cccbd0(in_ecx,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))));
      fVar4 = F_00cd83d0((*(undefined * PTR32 *)&gen_args[0]));
      (*(float *)(gen_frame + 0x8)) = fVar4;
      if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x4c))))((undefined4)gen_fl2bits(fVar4));
      }
      (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
    }
    else {
      F_00cccbd0(in_ecx,(float)(float10)1);
      F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))),
                   *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
    }
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx,(float)(float10)0);
    F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,(float)(float10)1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) | 4;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))));
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x88))(piVar1);
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) != '\0') {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 1;
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x209))) = 1;
    return 0;
  }
  F_00cdb3a0((*(undefined * PTR32 *)&gen_args[0]));
  return 1;
}

/* ref: FUN_00cdbfe0 */
byte F_00cdbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  uint uVar1;
  int * piVar2;
  double dVar3;
  byte bVar4;
  float fVar5;
  
  uVar1 = *(uint *)((int)this + 0x24c);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    return 0;
  }
  *(uint *)((int)this + 0x24c) = uVar1 & 0xfffffffd;
  if ((char)param_1 == '\0') {
    F_00cdb540(this,0x24);
  }
  else {
    *(undefined1 *)((int)this + 0x208) = 0;
    dVar3 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    *(undefined1 *)((int)this + 0x20a) = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)dVar3);
    F_00cbe1a0((int)this + 0xc,(uint)&(*(float *)(gen_frame + 0x8)));
  }
  if ((*(byte *)((int)this + 0x24c) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4))))((undefined4)gen_fl2bits((float)(float10)1));
  }
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xfffffffb | 0x10;
  bVar4 = F_00cdbcd0(this);
  if (bVar4 == 0) {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -2;
    return 0;
  }
  in_ecx = (int)this + 0xf0;
  if (*(int *)((int)this + 0x254) == 0) {
    if (*(int *)((int)this + 600) == 0) {
      F_00cccbd0(in_ecx,*(float *)((int)this + 0x25c));
      fVar5 = F_00cd83d0(this);
      (*(float *)(gen_frame + 0x8)) = fVar5;
      if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))((undefined4)gen_fl2bits(fVar5));
      }
      (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
    }
    else {
      F_00cccbd0(in_ecx,(float)(float10)1);
      F_00cccd90((int)this + 0xf0,*(float *)((int)this + 0x25c),*(undefined4 *)((int)this + 600));
      *(undefined4 *)((int)this + 600) = 0;
    }
    *(float *)((int)this + 0x25c) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx,(float)(float10)0);
    F_00cccd90((int)this + 0xf0,(float)(float10)1,*(undefined4 *)((int)this + 0x254));
    *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) | 4;
    *(undefined4 *)((int)this + 0x254) = 0;
  }
  if ((*(int *)((int)this + 0x260) != 0) &&
     (piVar2 = *(int * PTR32 *)((int)this + 4), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x8c))(piVar2,*(int *)((int)this + 0x260));
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x88))(piVar2);
  }
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x208) = 1;
    *(undefined2 *)((int)this + 0x209) = 1;
    return 0;
  }
  F_00cdb3a0(this);
  return 1;
}

/* ref: FUN_00cdc1e0 */
double F_00cdc1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 + 4)));
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  F_00cccbd0((int)this + 0x60,*(float *)((int)this + 0x1d0));
  fVar5 = F_00cd83d0(this);
  (*(float *)(gen_frame + 0x8)) = fVar5;
  if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))((undefined4)gen_fl2bits(fVar5));
  }
  (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
  fVar4 = F_00cd8980(this,fVar1,uVar3);
  *(float *)((int)this + 0x1d0) = fVar1;
  return (double)fVar4;
}

/* ref: FUN_00cdc280 */
byte F_00cdc280(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined1, 0x107fc63),"Track.cpp",0xae4,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetExternalAudio");
  }
  iVar2 = *(int *)((int)this + 0x5c);
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined1, 0x107fc63),"Track.cpp",0xaf2,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetExternalAudio");
  }
  iVar2 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x24) + iVar2;
  (*(undefined2 *)(gen_frame + 0x4)) = *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  sVar1 = *(short *)(iVar4 + 2);
  (*(short *)(gen_frame + 0x6)) = sVar1;
  if (-1 < sVar1) {
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    bVar3 = F_00cdba60(this,&(*(undefined2 *)(gen_frame + 0x4)),0);
    return bVar3;
  }
  (*(int *)(gen_frame + 0x8)) = iVar4 + 4;
  *(int *)((int)this + 0x1c) = iVar2 + (2 - sVar1) * 2;
  bVar3 = F_00cdba60(this,&(*(undefined2 *)(gen_frame + 0x4)),0);
  return bVar3;
}

/* ref: FUN_00cdc550 */
uint F_00cdc550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  return (uint)this;
}

/* ref: FUN_00cdc590 */
unsigned int F_00cdc590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc590u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdc5c0 */
uint F_00cdc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdc5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AtomosgearSound::vf0 */
uint F_00cdc660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdc690 */
uint F_00cdc690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdc690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_00cdd250(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  return (uint)this;
}

/* ref: FUN_00cdc6d0 */
unsigned int F_00cdc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc6d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf107 */
byte F_00cdc700(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pOVar8;
  int iVar9;
  undefined * pOVar10;
  undefined4 local_30;
  short local_28;
  short sStack_26;
  int local_1c;
  uint local_18;
  undefined * local_14;
  uint local_c;
  int local_8;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
  if (uVar4 < 2) {
    local_18 = 0;
  }
  else {
    local_18 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_18);
  if (this[0x13] == (undefined1)0x5) {
    uVar4 = (int)(uVar4 + 1) % (int)(uint)(byte)this[0x10];
    uVar5 = (uint)*(ushort *)(this + uVar4 * 8 + 0x398);
    *(uint *)(this + 0x344) = uVar5;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar5);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar6,uVar5);
    if ((*(ushort *)(this + uVar4 * 8 + 0x39a) & 0x4000) == 0) {
      piVar2 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar6 = (uint)*(ushort *)(this + uVar4 * 8 + 0x39a);
      uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
    }
  }
  else {
    local_c = uVar4;
    if ((int)uVar4 < 0) {
      local_30 = 0xffff0000;
    }
    else {
      local_30 = *(undefined4 *)(this + uVar4 * 8 + 0x39c);
    }
    while ((-1 < (int)uVar4 || ((int)(local_c + 1) < (int)(uint)(byte)this[0x10]))) {
      local_c = (int)(local_c + 1) % (int)(uint)(byte)this[0x10];
      uVar5 = *(uint *)(this + local_c * 8 + 0x398);
      local_28 = (short)*(undefined4 *)(this + local_c * 8 + 0x39c);
      sStack_26 = (short)((uint)*(undefined4 *)(this + local_c * 8 + 0x39c) >> 0x10);
      if ((uVar4 == local_c) || (((short)((uint)local_30 >> 0x10) != sStack_26 && (local_28 == 0))))
      goto LAB_00cdc85f;
    }
    uVar5 = *(uint *)(this + 0x398);
    local_c = 0;
    sStack_26 = (short)((uint)*(undefined4 *)(this + 0x39c) >> 0x10);
LAB_00cdc85f: ;
    *(uint *)(this + 0x344) = uVar5 & 0xffff;
    local_8 = 0;
    if ((int)local_c < (int)(uint)(byte)this[0x10]) {
      pOVar10 = this + 0x2c0;
      pOVar8 = this + local_c * 8 + 0x398;
      local_14 = (undefined *)local_c;
      do {
        if (sStack_26 != *(short *)(pOVar8 + 6)) break;
        uVar4 = *(uint *)pOVar8;
        uVar5 = uVar4 >> 0x10;
        uVar6 = uVar4 & 0xffff;
        sStack_26 = (short)(*(uint *)(pOVar8 + 4) >> 0x10);
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar6);
        F_00cd78c0(*(undefined * PTR32 *)pOVar10,uVar7,uVar6);
        if ((uVar4 & 0x40000000) == 0) {
          piVar2 = *(int * PTR32 *)(this + 0xc);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
          uVar4 = uVar4 & 0xff;
          uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
          F_00cd7980(*(undefined * PTR32 *)pOVar10,uVar6,uVar5,uVar4);
        }
        local_8 = local_8 + 1;
        local_14 = (undefined *)((int)local_14 + 1);
        pOVar10 = pOVar10 + 4;
        pOVar8 = pOVar8 + 8;
      } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
    }
    sVar3 = -1;
    local_1c = 0;
    if (this[0x10] != (undefined1)0x0) {
      pOVar10 = this + 0x39e;
      do {
        uVar4 = *(uint *)(pOVar10 + -6);
        local_28 = (short)*(undefined4 *)(pOVar10 + -2);
        sStack_26 = (short)((uint)*(undefined4 *)(pOVar10 + -2) >> 0x10);
        if (((sStack_26 != sVar3) && (sVar3 = sStack_26, local_28 != 0)) &&
           (local_1c < (int)(uint)(byte)this[0x10])) {
          pOVar8 = this + local_8 * 4 + 0x2c0;
          iVar9 = local_1c;
          local_14 = pOVar10;
          do {
            if (sStack_26 != *(short *)local_14) break;
            uVar5 = uVar4 & 0xffff;
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar5);
            F_00cd78c0(*(undefined * PTR32 *)pOVar8,uVar6,uVar5);
            if ((uVar4 & 0x40000000) == 0) {
              piVar2 = *(int * PTR32 *)(this + 0xc);
              uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
              uVar6 = uVar6 & 0xff;
              uVar5 = uVar4 >> 0x10;
              uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
              F_00cd7980(*(undefined * PTR32 *)pOVar8,uVar7,uVar5,uVar6);
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 8;
            iVar9 = iVar9 + 1;
            pOVar8 = pOVar8 + 4;
          } while (iVar9 < (int)(uint)(byte)this[0x10]);
        }
        local_1c = local_1c + 1;
        pOVar10 = pOVar10 + 8;
      } while (local_1c < (int)(uint)(byte)this[0x10]);
    }
    if (local_8 < *(int *)(this + 700)) {
      pOVar10 = this + local_8 * 4 + 0x2c0;
      iVar9 = local_8;
      do {
        F_00cd8a90(*(undefined * PTR32 *)pOVar10);
        *(undefined4 *)pOVar10 = 0;
        iVar9 = iVar9 + 1;
        pOVar10 = pOVar10 + 4;
      } while (iVar9 < *(int *)(this + 700));
    }
    *(int *)(this + 700) = local_8;
    uVar4 = local_c;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_18,uVar4);
  return 1;
}

/* ref: FUN_00cdca80 */
uint F_00cdca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdca80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf53 */
uint F_00cdcb20(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcb20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x344);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf0 */
uint F_00cdcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  F_00cdd3c0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdcb60 */
ushort F_00cdcb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00a4b890(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cdcb70 */
uint F_00cdcb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  F_00cdd250(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  puVar3 = (undefined4 *)F_00ce9850(param_3,3);
  uVar1 = *puVar3;
  *(undefined4 *)((int)this + 0x420) = uVar1;
  uVar2 = puVar3[1];
  *(undefined4 *)((int)this + 0x428) = uVar1;
  *(undefined4 *)((int)this + 0x424) = uVar2;
  *(undefined1 *)((int)this + 0x42c) = 0;
  return (uint)this;
}

/* ref: FUN_00cdcbe0 */
unsigned int F_00cdcbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcbe0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdcc10 */
byte F_00cdcc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint * puVar10;
  int iVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  ushort uStack_16;
  uint local_c;
  int local_8;
  
  iVar11 = 0;
  uVar3 = F_00a4b890(0,100);
  *(undefined4 *)((int)this + 0x344) = 0xffffffff;
  uVar4 = F_00d2e4f0();
  if ((char)param_1 == '\0') {
    local_8 = *(int *)((int)this + 700) + -1;
  }
  else {
    local_8 = 0;
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 < (int)(uint)*(byte *)((int)this + 0x10)) {
      uVar4 = *(uint *)((int)this + uVar4 * 8 + 0x398);
      uVar5 = uVar4 & 0xffff;
      uVar7 = uVar4 >> 0x10;
      *(uint *)((int)this + 0x344) = uVar5;
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))(*(int * PTR32 *)((int)this + 0xc),uVar5);
      F_00cd78c0(*(undefined * PTR32 *)((int)this + 0x2c0),uVar8,uVar5);
      if ((uVar4 & 0x40000000) == 0) {
        piVar2 = *(int * PTR32 *)((int)this + 0xc);
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
        uVar4 = uVar4 & 0xff;
        uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
        F_00cd7980(*(undefined * PTR32 *)((int)this + 0x2c0),uVar5,uVar7,uVar4);
      }
    }
    return 1;
  }
  if (*(char *)((int)this + 0x10) != '\0') {
    puVar10 = (uint *)((int)this + 0x398);
    do {
      local_c = 0;
      if (0 < iVar11) {
        local_c = puVar10[-1];
      }
      uVar4 = puVar10[1];
      uStack_16 = (ushort)(*puVar10 >> 0x10);
      if (uVar4 == REFG(undefined4, 0x112dea0)) break;
      if ((uVar4 != local_c) &&
         (((uint)(int)(short)uVar3 <= uVar4 || (*(char *)((int)this + 0x418) != '\0')))) {
        piVar2 = *(int * PTR32 *)((int)this + 0xc);
        *(uint *)((int)this + 0x344) = *puVar10 & 0xffff;
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
        if (uVar4 < 2) {
          local_c = 0;
        }
        else {
          local_c = (uint)*(ushort *)((int)this + 0x1c);
        }
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,local_c);
        if (*(uint *)((int)this + 0x344) == uVar4) {
          do {
            iVar11 = (iVar11 + 1) % (int)(uint)*(byte *)((int)this + 0x10);
            iVar9 = 0;
            if (0 < iVar11) {
              iVar9 = *(int *)((int)this + iVar11 * 8 + 0x394);
            }
            uVar4 = *(uint *)((int)this + iVar11 * 8 + 0x398);
            uStack_16 = (ushort)(uVar4 >> 0x10);
          } while (*(int *)((int)this + iVar11 * 8 + 0x39c) == iVar9);
          *(uint *)((int)this + 0x344) = uVar4 & 0xffff;
        }
        uVar14 = *(undefined4 *)((int)this + 0x344);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))(*(int * PTR32 *)((int)this + 0xc),uVar14)
        ;
        F_00cd78c0(*(undefined * PTR32 *)((int)this + local_8 * 4 + 0x2c0),uVar4,uVar14);
        if ((uStack_16 & 0x4000) == 0) {
          piVar1 = *(int * PTR32 *)((int)this + 0xc);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
          uVar4 = uVar4 & 0xff;
          uVar7 = (uint)uStack_16;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
          F_00cd7980(*(undefined * PTR32 *)((int)this + local_8 * 4 + 0x2c0),uVar5,uVar7,uVar4);
        }
        local_8 = local_8 + 1;
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,local_c,*(undefined4 *)((int)this + 0x344));
        *(undefined1 *)((int)this + 0x42c) = 0;
        break;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 2;
    } while (iVar11 < (int)(uint)*(byte *)((int)this + 0x10));
  }
  if ((char)param_1 != '\0') {
    local_c = 0;
    if (*(char *)((int)this + 0x10) != '\0') {
      param_1 = (undefined4 *)((int)this + local_8 * 4 + 0x2c0);
      puVar10 = (uint *)((int)this + 0x398);
      uVar4 = 0;
      do {
        uVar7 = *puVar10;
        uVar5 = puVar10[1];
        uVar8 = uVar7 >> 0x10;
        if (uVar4 == uVar5) {
          uVar12 = uVar7 & 0xffff;
          uVar4 = uVar12;
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                            (*(int * PTR32 *)((int)this + 0xc),uVar12);
          F_00cd78c0((undefined *)*param_1,uVar6,uVar4);
          if ((uVar7 & 0x40000000) == 0) {
            piVar2 = *(int * PTR32 *)((int)this + 0xc);
            uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
            uVar4 = uVar4 & 0xff;
            uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
            F_00cd7980((undefined *)*param_1,uVar7,uVar8,uVar4);
          }
          local_8 = local_8 + 1;
          param_1 = param_1 + 1;
          *(undefined1 *)((int)this + 0x42c) = 0;
          if (*(int *)((int)this + 0x344) < 0) {
            *(uint *)((int)this + 0x344) = uVar12;
          }
        }
        local_c = local_c + 1;
        puVar10 = puVar10 + 2;
        uVar4 = uVar5;
      } while ((int)local_c < (int)(uint)*(byte *)((int)this + 0x10));
    }
  }
  if (local_8 < *(int *)((int)this + 700)) {
    puVar13 = (undefined4 *)((int)this + local_8 * 4 + 0x2c0);
    iVar11 = local_8;
    do {
      F_00cd8a90((undefined *)*puVar13);
      *puVar13 = 0;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar11 < *(int *)((int)this + 700));
  }
  *(int *)((int)this + 700) = local_8;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf78 */
uint F_00cdcf70(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcf70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd28c0(in_ecx);
  if ((bVar1 != 0) && ((*(uint *)(in_ecx + 0xf8) >> 3 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf104 */
unsigned int F_00cdcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x344) < 0) {
    this[0x42c] = (undefined1)0x1;
    return 0;
  }
  F_00cd1ff0((undefined *)this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf9 */
byte F_00cdcfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  undefined * pRVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int local_14;
  int iStack_10;
  int local_c;
  undefined * local_8;
  
  bVar1 = F_00cd50e0(param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf8) >> 3 & 1) != 0) {
    return bVar1;
  }
  local_c = *(int *)(param_1 + 700);
  if (0 < local_c) {
    local_8 = param_1 + 0x2c0;
    iStack_10 = local_c;
    do {
      iVar4 = 0;
      if (param_1[0x10] != (undefined1)0x0) {
        pRVar2 = param_1 + 0x398;
        uVar3 = 0;
        do {
          if ((uVar3 == *(uint *)(pRVar2 + 4)) &&
             ((*(uint *)pRVar2 & 0xffff) == *(uint *)(*(int *)local_8 + 0x1b4))) {
            local_c = local_c + -1;
            break;
          }
          uVar3 = *(uint *)(pRVar2 + 4);
          iVar4 = iVar4 + 1;
          pRVar2 = pRVar2 + 8;
        } while (iVar4 < (int)(uint)(byte)param_1[0x10]);
      }
      local_8 = local_8 + 4;
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  if (((int)(uint)*(ushort *)(param_1 + 0x424) <= local_c) && (param_1[0x42c] == (undefined1)0x0))
  goto LAB_00cdd148;
  if (0 < (int)(*(int *)(param_1 + 0x428) - param_2)) {
    *(uint *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) - param_2;
    goto LAB_00cdd148;
  }
  pRVar2 = param_1 + *(int *)(param_1 + 700) * 4 + 0x2c0;
  bVar1 = F_00cc2aa0(1,pRVar2,0);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
LAB_00cdd0f4: ;
    param_1[0x42c] = (undefined1)0x1;
  }
  else {
    F_00cd8640(*(undefined * PTR32 *)pRVar2,param_1,0);
    *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
    param_1[0x42] = (undefined1)0x1;
    fVar5 = F_00cd2330(param_1);
    F_00cd8a30(*(undefined4 *)pRVar2,fVar5);
    F_00cdcc10(param_1,0);
    if (*(int *)(param_1 + 0x344) < 0) goto LAB_00cdd0f4;
    F_00cd8390(*(undefined * PTR32 *)pRVar2);
  }
  fVar5 = F_00a4b7d0();
  local_14 = (int)(longlong)
                  TRUNC((float10)((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0x426) * (float10)fVar5))));
  *(int *)(param_1 + 0x428) = local_14 + *(int *)(param_1 + 0x420);
LAB_00cdd148: ;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x138))(param_1);
  return (char)uVar3 == '\0';
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf107 */
byte F_00cdd170(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cdcc10(this,1);
  return bVar1;
}

/* ref: FUN_00cdd180 */
uint F_00cdd180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdd180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf0 */
uint F_00cdd220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdd220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  F_00cdd3c0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdd250 */
uint F_00cdd250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdd250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,0,param_6,param_7);
  iVar6 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  *(undefined1 *)((int)this + 0x418) = 0;
  if (0 < *(int *)((int)this + 700)) {
    puVar3 = (undefined4 *)((int)this + 0x2c0);
    do {
      F_00cd8640((undefined *)*puVar3,this,iVar6);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 < *(int *)((int)this + 700));
  }
  uVar1 = F_00ce9920(param_3,0,3);
  cVar4 = *(char *)((int)this + 0x10);
  puVar3 = (undefined4 *)(uVar1 + 0x10);
  puVar2 = (undefined4 *)((int)this + 0x39c);
  iVar6 = 4;
  do {
    if (cVar4 == '\0') {
      *puVar2 = 0xffffffff;
      cVar5 = cVar4;
LAB_00cdd324: ;
      puVar2[2] = 0xffffffff;
LAB_00cdd32b: ;
      puVar2[4] = 0xffffffff;
LAB_00cdd332: ;
      puVar2[6] = 0xffffffff;
      cVar4 = cVar5;
    }
    else {
      puVar2[-1] = puVar3[-4];
      *puVar2 = puVar3[-3];
      cVar5 = '\0';
      if (cVar4 == '\x01') goto LAB_00cdd324;
      puVar2[1] = puVar3[-2];
      puVar2[2] = puVar3[-1];
      cVar5 = '\0';
      if (cVar4 == '\x02') goto LAB_00cdd32b;
      puVar2[3] = *puVar3;
      puVar2[4] = puVar3[1];
      cVar5 = '\0';
      if (cVar4 == '\x03') goto LAB_00cdd332;
      puVar2[5] = puVar3[2];
      puVar2[6] = puVar3[3];
      cVar4 = cVar4 + -4;
    }
    puVar2 = puVar2 + 8;
    puVar3 = puVar3 + 8;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      if (1 < *(uint *)(param_2 + 0xc)) {
        *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x18);
        this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)*(byte *)((int)this + 0x11));
        fVar7 = F_00cbb330(this_00);
        F_00cd2680(this,fVar7);
        F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
        *(undefined1 *)((int)this + 0x128) = 1;
        F_00cd2250(this,(float)(float10)1,0);
      }
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00cdd3a0 */
unsigned int F_00cdd3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdd3a0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdd3c0 */
uint F_00cdd3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  uVar1 = F_00cd3df0(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf107 */
byte F_00cdd3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  undefined * pRVar10;
  int iVar11;
  int iVar12;
  undefined * pRVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  ushort uStack_2a;
  short sStack_26;
  short local_20;
  short sStack_1e;
  int local_18;
  uint local_14;
  undefined * local_c;
  uint local_8;
  
  local_14 = 0;
  uVar3 = F_00a4b890(0,100);
  *(undefined4 *)(this + 0x344) = 0xffffffff;
  uVar5 = F_00d2e4f0();
  if ((int)uVar5 < 0) {
    if (this[0x13] != (undefined1)0x2) {
      uVar5 = 0;
      local_8 = 0;
      sStack_26 = -1;
      if (this[0x10] == (undefined1)0x0) {
LAB_00cdd73d: ;
        sVar9 = 0;
        sVar4 = -1;
        local_14 = 0;
        if (this[0x10] != (undefined1)0x0) {
          pRVar10 = this + 0x39e;
          do {
            uVar5 = *(uint *)(pRVar10 + -6);
            local_20 = (short)*(undefined4 *)(pRVar10 + -2);
            sStack_1e = (short)((uint)*(undefined4 *)(pRVar10 + -2) >> 0x10);
            if (((sStack_1e != sVar4) &&
                (bVar16 = sVar9 == local_20, sVar4 = sStack_1e, sVar9 = local_20, bVar16)) &&
               (local_18 = local_14, (int)local_14 < (int)(uint)(byte)this[0x10])) {
              pRVar13 = this + local_8 * 4 + 0x2c0;
              local_c = pRVar10;
              do {
                if (sStack_1e != *(short *)local_c) break;
                uVar15 = uVar5 & 0xffff;
                uVar6 = uVar15;
                uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar15);
                F_00cd78c0(*(undefined * PTR32 *)pRVar13,uVar7,uVar6);
                if ((uVar5 & 0x40000000) == 0) {
                  piVar1 = *(int * PTR32 *)(this + 0xc);
                  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
                  uVar7 = uVar7 & 0xff;
                  uVar6 = uVar5 >> 0x10;
                  uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
                  F_00cd7980(*(undefined * PTR32 *)pRVar13,uVar8,uVar6,uVar7);
                }
                local_8 = local_8 + 1;
                pRVar13 = pRVar13 + 4;
                if (*(int *)(this + 0x344) < 0) {
                  *(uint *)(this + 0x344) = uVar15;
                }
                local_c = local_c + 8;
                local_18 = local_18 + 1;
              } while (local_18 < (int)(uint)(byte)this[0x10]);
            }
            local_14 = local_14 + 1;
            pRVar10 = pRVar10 + 8;
          } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
        }
        if ((int)local_8 < *(int *)(this + 700)) {
          pRVar10 = this + local_8 * 4 + 0x2c0;
          uVar5 = local_8;
          do {
            F_00cd8a90(*(undefined * PTR32 *)pRVar10);
            *(undefined4 *)pRVar10 = 0;
            uVar5 = uVar5 + 1;
            pRVar10 = pRVar10 + 4;
          } while ((int)uVar5 < *(int *)(this + 700));
        }
        *(uint *)(this + 700) = local_8;
        return 1;
      }
      pRVar10 = this + 0x398;
LAB_00cdd580: ;
      local_20 = (short)*(uint *)(pRVar10 + 4);
      sStack_1e = (short)(*(uint *)(pRVar10 + 4) >> 0x10);
      if (sStack_1e != sStack_26) {
        uVar6 = (uint)local_20;
        if ((uVar6 != (int)(short)uVar5 && -1 < (int)(uVar6 - (int)(short)uVar5)) &&
           (((uint)(int)(short)uVar3 <= uVar6 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
          if (uVar5 < 2) {
            local_c = (undefined *)0x0;
          }
          else {
            local_c = (undefined *)(uint)*(ushort *)(this + 0x1c);
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_c);
          if (*(uint *)(this + 0x344) == uVar5) {
            iVar14 = 0;
            local_14 = 0;
            iVar11 = 0;
            if (this[0x10] != (undefined1)0x0) {
              do {
                if (*(ushort *)(this + iVar11 * 8 + 0x398) != uVar5) {
                  if (iVar11 == 0) {
                    iVar12 = (int)*(short *)(this + 0x39c);
                  }
                  else {
                    iVar12 = (int)*(short *)(this + iVar11 * 8 + 0x39c) -
                             (int)*(short *)(this + iVar11 * 8 + 0x394);
                  }
                  if (iVar14 < iVar12) {
                    iVar14 = iVar12;
                    local_14 = iVar11;
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)(uint)(byte)this[0x10]);
            }
            sStack_1e = (short)((uint)*(undefined4 *)(this + local_14 * 8 + 0x39c) >> 0x10);
            *(uint *)(this + 0x344) = *(uint *)(this + local_14 * 8 + 0x398) & 0xffff;
          }
          if ((int)local_14 < (int)(uint)(byte)this[0x10]) {
            pRVar10 = this + 0x2c0;
            pRVar13 = this + local_14 * 8 + 0x398;
            do {
              if (sStack_1e != *(short *)(pRVar13 + 6)) break;
              uVar5 = *(uint *)pRVar13;
              uVar6 = uVar5 >> 0x10;
              uVar7 = uVar5 & 0xffff;
              sStack_1e = (short)(*(uint *)(pRVar13 + 4) >> 0x10);
              uVar15 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar7);
              F_00cd78c0(*(undefined * PTR32 *)pRVar10,uVar15,uVar7);
              if ((uVar5 & 0x40000000) == 0) {
                piVar2 = *(int * PTR32 *)(this + 0xc);
                uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
                uVar5 = uVar5 & 0xff;
                uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
                F_00cd7980(*(undefined * PTR32 *)pRVar10,uVar7,uVar6,uVar5);
              }
              local_8 = local_8 + 1;
              local_14 = local_14 + 1;
              pRVar10 = pRVar10 + 4;
              pRVar13 = pRVar13 + 8;
            } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
          }
          ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_c,*(undefined4 *)(this + 0x344));
          goto LAB_00cdd73d;
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        sStack_26 = (short)(uVar5 >> 0x10);
      }
      local_14 = local_14 + 1;
      pRVar10 = pRVar10 + 8;
      if ((int)(uint)(byte)this[0x10] <= (int)local_14) goto LAB_00cdd73d;
      goto LAB_00cdd580;
    }
    if (this[0x10] != (undefined1)0x0) {
      pRVar10 = this + 0x398;
      iVar14 = 0;
      while( true ) {
        local_14 = 0;
        if (0 < iVar14) {
          local_14 = *(uint *)(pRVar10 + -4);
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        uStack_2a = (ushort)(*(uint *)((int)(uintptr_t)pRVar10) >> 0x10);
        if (uVar5 == 0xffffffff) break;
        if ((uVar5 != local_14) &&
           (((uint)(int)(short)uVar3 <= uVar5 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
          if (uVar5 < 2) {
            local_8 = 0;
          }
          else {
            local_8 = (uint)*(ushort *)(this + 0x1c);
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_8);
          if (*(uint *)(this + 0x344) == uVar5) {
            do {
              iVar14 = (iVar14 + 1) % (int)(uint)(byte)this[0x10];
              iVar11 = 0;
              if (0 < iVar14) {
                iVar11 = *(int *)(this + iVar14 * 8 + 0x394);
              }
              uStack_2a = (ushort)(*(uint *)(this + iVar14 * 8 + 0x398) >> 0x10);
            } while (*(int *)(this + iVar14 * 8 + 0x39c) == iVar11);
            *(uint *)(this + 0x344) = *(uint *)(this + iVar14 * 8 + 0x398) & 0xffff;
          }
          uVar17 = *(undefined4 *)(this + 0x344);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar17);
          F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar5,uVar17);
          if ((uStack_2a & 0x4000) == 0) {
            piVar2 = *(int * PTR32 *)(this + 0xc);
            uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
            uVar5 = uVar5 & 0xff;
            uVar6 = (uint)uStack_2a;
            uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
            F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
          }
          ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_8,*(undefined4 *)(this + 0x344));
          return 1;
        }
        iVar14 = iVar14 + 1;
        pRVar10 = pRVar10 + 8;
        if ((int)(uint)(byte)this[0x10] <= iVar14) {
          return 1;
        }
      }
    }
  }
  else if ((int)uVar5 < (int)(uint)(byte)this[0x10]) {
    uVar5 = *(uint *)(this + uVar5 * 8 + 0x398);
    uVar7 = uVar5 & 0xffff;
    uVar6 = uVar5 >> 0x10;
    *(uint *)(this + 0x344) = uVar7;
    uVar15 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar7);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar15,uVar7);
    if ((uVar5 & 0x40000000) == 0) {
      piVar1 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar7 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf104 */
uint F_00cdd930(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x344) < 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
    return uVar1;
  }
  uVar1 = F_00cd1ff0((undefined *)this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf54 */
uint F_00cdd950(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pRVar2;
  
  uVar1 = 0;
  if ((byte)this[0x10] != 0) {
    pRVar2 = this + 0x398;
    do {
      if ((*(uint *)pRVar2 & 0xffff) == *(uint *)(this + 0x344)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pRVar2 = pRVar2 + 8;
    } while ((int)uVar1 < (int)(uint)(byte)this[0x10]);
  }
  return 0xffffffff;
}

/* ref: FUN_00cdd9a0 */
uint F_00cdd9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdd9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf0 */
uint F_00cdda40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdda40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdda70 */
uint F_00cdda70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdda70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float10 fVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),(undefined1)param_6);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_7);
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)));
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      fVar1 = (float10)0;
      ((float *)(gen_frame + 0x18))[0] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[1] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[2] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[3] = (float)fVar1;
      (*(float *)(gen_frame + 0x28)) = (float)fVar1;
      (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
      (*(float *)(gen_frame + 0x30)) = (float)fVar1;
      (*(float *)(gen_frame + 0x34)) = (float)fVar1;
      if (iVar3 < 2) {
        ((float *)(gen_frame + 0x18))[(int)(iVar3)] = (float)(float10)1;
      }
      else {
        ((float *)(gen_frame + 0x18))[(int)(iVar3 + 2)] = (float)(float10)1;
      }
      F_00cd66f0((undefined *)*puVar2,((float *)(gen_frame + 0x18)));
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)((int)this + 700));
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)this;
}

/* ref: FUN_00cddb30 */
unsigned int F_00cddb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddb30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf17 */
unsigned int F_00cddb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf21 */
unsigned int F_00cddb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcddb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cddb80 */
uint F_00cddb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcddb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf0 */
uint F_00cddc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cddc50 */
unsigned int F_00cddc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddc50u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cddc70 */
uint F_00cddc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcddc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,param_6,param_7);
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  *(undefined4 *)((int)this + 0x398) = 0;
  uVar1 = F_00ce9920(param_3,0,3);
  param_7 = (uint *)((int)this + 0x39c);
  do {
    iVar3 = *(int *)((int)this + 700) - iVar2;
    F_00cd8980(*(undefined4 *)((int)this + iVar3 * 4 + 700),(float)(float10)1,0);
    *param_7 = (uint)*((ushort *)GEN_TOP(((uVar1 - 2) + iVar3 * 4)));
    iVar2 = iVar2 + 1;
    param_7 = param_7 + 1;
  } while (iVar2 < 2);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf1 */
uint F_00cddd20(unsigned int gen_a0)
{
  GEN_ENTER(0xcddd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))((undefined4)gen_fl2bits((float)(float10)0),0);
  uVar1 = F_00cd4f90((undefined *)this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf108 */
uint F_00cddd80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcddd80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_ecx;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar6 = *(int *)(param_1 + 700) + -3;
  uVar3 = (uint)((float10)param_2 * (float10)iVar6);
  if (iVar6 <= (int)uVar3) {
    uVar3 = *(int *)(param_1 + 700) - 4;
  }
  fVar1 = (float10)1;
  uVar7 = 0;
  fVar8 = (float10)((float)GEN_TOF((fVar1 / ((float10)GEN_TOD((*(int *)(param_1 + 700) + -3))))));
  fVar9 = (float10)((float)GEN_TOF((((float10)param_2 - fVar8 * (float10)(int)uVar3) / fVar8)));
  fVar10 = (float10)*(double *)&REFG(undefined, 0x112e508);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x112e500);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x112e4f8);
  uVar4 = uVar3;
  if (0 < *(int *)(param_1 + 700) + -2) {
    puVar5 = (undefined4 *)(param_1 + 0x2c0);
    do {
      in_ecx = *puVar5;
      if (uVar7 == uVar3) {
        F_00cd6af0(in_ecx,(float)(fVar1 - fVar9 * fVar9));
        F_00cd6b10(*puVar5,(float)(fVar10 * fVar9 + fVar1));
      }
      else if (uVar7 == uVar3 + 1) {
        F_00cd6af0(in_ecx,((float)GEN_TOF((fVar1 - (fVar1 - fVar9) * (fVar1 - fVar9)))));
        F_00cd6b10(*puVar5,(float)(fVar9 * fVar2 + fVar8));
      }
      else {
        F_00cd6af0(in_ecx,(float)(float10)0);
      }
      uVar7 = uVar7 + 1;
      uVar4 = *(int *)(param_1 + 700) - 2;
      puVar5 = puVar5 + 1;
    } while ((int)uVar7 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00cddea0 */
uint F_00cddea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcddea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf0 */
uint F_00cde120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cde150 */
uint F_00cde150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcde150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  if ((char)param_6 != '\0') {
    F_00cd77a0(*(undefined4 *)((int)this + 0x2c0),REFG(float, 0x1090708),0);
    F_00cd77a0(*(undefined4 *)((int)this + 0x2c4),(float)(float10)1,0);
  }
  return (uint)this;
}

/* ref: FUN_00cde1c0 */
unsigned int F_00cde1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde1c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cde200 */
uint F_00cde200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcde200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StereoSound::vf0 */
uint F_00cde2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cde2d0 */
unsigned int F_00cde2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde2d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cde2f0 */
uint F_00cde2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcde2f0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00cde300 */
uint F_00cde300(unsigned int gen_a0)
{
  GEN_ENTER(0xcde300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  pvVar1 = (undefined *)F_00ce1c70(piVar2);
  if (pvVar1 == this) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2);
    F_00ce1e80(piVar2,this);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  uVar3 = F_00cd3df0(this);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf1 */
uint F_00cde350(unsigned int gen_a0)
{
  GEN_ENTER(0xcde350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x398] != (undefined1)0x0) {
    if (this[0x13] == (undefined1)0xb) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1a4))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,(undefined4)gen_fl2bits((float)(float10)0),0);
    }
    uVar1 = F_00cd4f90((undefined *)this);
    return uVar1;
  }
  F_00cd4720(this);
  return 8;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf4 */
uint F_00cde3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd45f0((undefined *)this,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf17 */
unsigned int F_00cde410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x13] != (undefined1)0xb) {
    F_00cd23f0((undefined *)this,param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00cde750 */
unsigned int F_00cde750(unsigned int gen_a0)
{
  GEN_ENTER(0xcde750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a4) = 1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf101 */
byte F_00cde760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *(int *)(in_ecx + 0xc);
  if (in_ecx_00 == 0) {
    return 0;
  }
  uVar1 = F_00ce1bf0(in_ecx_00);
  *param_2 = uVar1;
  param_2[1] = *(uint *)(in_ecx_00 + 0x9c);
  return 1;
}

/* ref: FUN_00cdecb0 */
uint F_00cdecb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00cded50 */
uint F_00cded50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcded50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00cd38f0(this,param_1,param_2,0,param_3,param_4,0,param_5,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined2 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  if (uVar1 != 3) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pBank->GetType() == BT_STREAM_BANK_EX","","StreamSoundEx.cpp",0x34,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  if (param_3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("tracks != 0","","StreamSoundEx.cpp",0x35,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      F_00cd8640((undefined *)*puVar2,this,iVar3);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)((int)this + 700));
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf84 */
byte F_00cdee80(void)
{
  GEN_ENTER(0xcdee80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf0 */
uint F_00cdee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  pSVar1 = (undefined *)F_00ce1c70(piVar2);
  if (pSVar1 == this) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2);
    F_00ce1e80(piVar2,this);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdef00 */
uint F_00cdef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  uVar3 = F_00c46aa0(uVar2,param_1,uVar1);
  *(uint *)((int)this + 4) = uVar2;
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf43 */
uint F_00cdef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf22 */
uint F_00cdef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_00ce11f0(this);
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4)));
  F_00ce1230(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf23 */
uint F_00cdefb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdefb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00ce11f0(this);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4))) = param_2;
  uVar1 = F_00ce1230(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf8 */
uint F_00cdefe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdefe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x50) - *(int *)(in_ecx + 0x4c) >> 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf3 */
uint F_00cdeff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdeff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf4 */
uint F_00cdf020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 100) - *(int *)(this + 0x60) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf5 */
uint F_00cdf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  if ((param_1 & 0x8000) == 0) {
    if ((param_1 & 0x4000) != 0) {
      uVar2 = 0;
    }
  }
  else {
    piVar1 = (int *)F_00d2ccd0();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  uVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2;
  if ((int)uVar3 <= (int)uVar2) {
    return 0;
  }
  if (uVar3 <= uVar2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x74) + uVar2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf6 */
uint F_00cdf0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf10 */
uint F_00cdf110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  F_00ce11f0(this);
  puVar1 = *(uint * PTR32 *)(this + 0x4c);
  if (puVar1 != *(uint * PTR32 *)(this + 0x50)) {
    while ((uint)*(ushort *)(*puVar1 + 0xc) != param_1 % 1000) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(uint * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0;
      }
    }
    uVar2 = *puVar1;
  }
  F_00ce1230(this);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf9 */
uint F_00cdf180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  F_00ce11f0(this);
  piVar2 = *(int * PTR32 *)(this + 0x4c);
  uVar1 = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x50)) {
    while (uVar3 = uVar1, (uint)*(ushort *)(*piVar2 + 0xc) != param_1 % 1000) {
      piVar2 = piVar2 + 1;
      uVar1 = uVar3 + 1;
      if (piVar2 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0xffffffff;
      }
    }
  }
  F_00ce1230(this);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf11 */
uint F_00cdf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  F_00ce11f0(this);
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != *(int * PTR32 *)(this + 0x50)) {
    while ((uint)*(ushort *)(*piVar1 + 0xc) != param_1 % 1000) {
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
      if (piVar1 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0;
      }
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,iVar3);
  }
  F_00ce1230(this);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf18 */
unsigned int F_00cdf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf19 */
unsigned int F_00cdf2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf20 */
unsigned int F_00cdf330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf21 */
unsigned int F_00cdf390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: FUN_00cdf400 */
uint F_00cdf400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * _Dst;
  
  F_00ce0f90(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar2,param_1,uVar1);
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 4;
  *(uint *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c),4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: FUN_00cdf510 */
uint F_00cdf510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  
  F_00ce0ff0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c),4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf13 */
unsigned int F_00cdf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x4c,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf14 */
unsigned int F_00cdf5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x60,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf16 */
unsigned int F_00cdf610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x88,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf15 */
unsigned int F_00cdf630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x74,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf44 */
unsigned int F_00cdf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x9c,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf2 */
uint F_00cdf670(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xe);
  uVar2 = F_00ce1300(this);
  F_00ce0470(this,this + 0x4c,(uint)*(ushort *)(iVar1 + uVar3),uVar2 + uVar3 + *(int *)(this + 4))
  ;
  F_00ce0470(this,this + 0x60,(uint)*(ushort *)(iVar1 + 2 + uVar3),
               *(int *)(iVar1 + 8 + uVar3) + *(int *)(this + 4));
  F_00ce0470(this,this + 0x74,(uint)*(ushort *)(iVar1 + 4 + uVar3),
               *(int *)(iVar1 + 0xc + uVar3) + *(int *)(this + 4));
  if (1 < *(uint *)(this + 0xc)) {
    F_00ce0470(this,this + 0x88,(uint)*(ushort *)(iVar1 + uVar3),
                 *(int *)(iVar1 + 0x10 + uVar3) + *(int *)(this + 4));
  }
  *(uint *)(this + 0x10) = (uint)*(ushort *)(iVar1 + 6 + uVar3);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = F_00cc8520(this);
  local_8 = 0;
  if (*(short *)(iVar1 + uVar3) != 0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,local_8);
      *(undefined1 *)(uVar2 + 0xf) = 0xff;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while ((int)uVar2 < (int)(uint)*(ushort *)(iVar1 + uVar3));
  }
  return uVar2;
}

/* ref: FUN_00cdf740 */
uint F_00cdf740(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    ((int *)(gen_frame + 0x8))[0] = (int)this + 0x4c;
    ((int *)(gen_frame + 0x8))[1] = (int)this + 0x60;
    ((int *)(gen_frame + 0x8))[2] = (int)this + 0x88;
    ((int *)(gen_frame + 0x8))[3] = (int)this + 0x9c;
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      piVar2 = (int *)((int *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x18)))];
      piVar3 = (int *)*piVar2;
      iVar1 = (*(int *)(gen_frame + 0x18));
      if (piVar3 != (int *)piVar2[1]) {
        do {
          if (*piVar3 != 0) {
            F_00406810(*piVar3);
          }
          piVar3 = piVar3 + 1;
          iVar1 = (*(int *)(gen_frame + 0x18));
        } while (piVar3 != (int *)piVar2[1]);
      }
      (*(int *)(gen_frame + 0x18)) = iVar1 + 1;
    } while (iVar1 + 1 < 4);
    piVar2 = *(int * PTR32 *)((int)this + 0x74);
    if (piVar2 != *(int * PTR32 *)((int)this + 0x78)) {
      do {
        if (*piVar2 != 0) {
          F_00406810(*piVar2);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int * PTR32 *)((int)this + 0x78));
    }
  }
  else {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar2 = (int *)((int)this + 0x4c);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x60);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x74);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x88);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar3 = (int *)((int)this + 0x9c);
  piVar2 = &(*(int *)(gen_frame + 0x4));
  if (piVar2 != piVar3) {
    iVar1 = *piVar3;
    *piVar3 = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)F_00406810(iVar1);
    }
  }
  return (uint)piVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf12 */
uint F_00cdf890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00cc8590(this);
  F_00cdf740(this);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar3,param_1,uVar1);
  pcVar2 = *(gen_code32 *)(*(int *)this + 8);
  *(uint *)(this + 4) = uVar3;
  uVar3 = (*pcVar2)(this);
  return uVar3;
}

/* ref: FUN_00cdf910 */
uint F_00cdf910(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  F_00cdf740(this);
  if (*(int *)((int)this + 0xb0) != 0) {
    F_00406810(*(int *)((int)this + 0xb0));
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406810(*(int *)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    F_00406810(*(int *)((int)this + 0x88));
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406810(*(int *)((int)this + 0x74));
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406810(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  F_00ce10b0(this);
  return uVar1;
}

/* ref: FUN_00cdfa20 */
uint F_00cdfa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cdfa40 */
uint F_00cdfa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfa70 */
uint F_00cdfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cdfad0 */
uint F_00cdfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1 * 4,"CDev.Engine.Sd.Allocator",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cdfb40 */
uint F_00cdfb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb60 */
uint F_00cdfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb90 */
uint F_00cdfb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00cdfbc0 */
uint F_00cdfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfc10 */
uint F_00cdfc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfc20 */
byte F_00cdfc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cdfc70 */
uint F_00cdfc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfc90 */
uint F_00cdfc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00cdfcc0 */
uint F_00cdfcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cdfcf0 */
uint F_00cdfcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00cdfd10 */
uint F_00cdfd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd40 */
uint F_00cdfd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd80 */
uint F_00cdfd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cdfd90 */
uint F_00cdfd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00cdfda0 */
byte F_00cdfda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cdfde0 */
uint F_00cdfde0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfdf0 */
uint F_00cdfdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdfdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfe50 */
uint F_00cdfe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if ((int)uVar1 <= (int)param_2) {
    return 0;
  }
  if (uVar1 <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(uint *)(*param_1 + param_2 * 4);
}

/* ref: FUN_00cdfe80 */
unsigned int F_00cdfe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *(int *)(*param_1 + param_2 * 4);
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00cdfef0 */
uint F_00cdfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdff20 */
unsigned int F_00cdff20(unsigned int gen_a0)
{
  GEN_ENTER(0xcdff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00cdff50 */
unsigned int F_00cdff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdff50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cdff80 */
uint F_00cdff80(unsigned int gen_a0)
{
  GEN_ENTER(0xcdff80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdffb0 */
unsigned int F_00cdffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00cdffe0 */
uint F_00cdffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ce0020 */
unsigned int F_00ce0020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf27 */
unsigned int F_00ce0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf28 */
uint F_00ce0060(unsigned int gen_a0)
{
  GEN_ENTER(0xce0060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf32 */
uint F_00ce0070(void)
{
  GEN_ENTER(0xce0070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf33 */
unsigned int F_00ce0080(void)
{
  GEN_ENTER(0xce0080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf34 */
byte F_00ce0090(unsigned int gen_a0)
{
  GEN_ENTER(0xce0090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf35 */
unsigned int F_00ce00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf36 */
unsigned int F_00ce00b0(void)
{
  GEN_ENTER(0xce00b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf37 */
unsigned int F_00ce00c0(void)
{
  GEN_ENTER(0xce00c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf38 */
uint F_00ce00d0(void)
{
  GEN_ENTER(0xce00d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf39 */
unsigned int F_00ce00e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce00e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf40 */
byte F_00ce00f0(unsigned int gen_a0)
{
  GEN_ENTER(0xce00f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf41 */
unsigned int F_00ce0100(unsigned int gen_a0)
{
  GEN_ENTER(0xce0100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) & 0x7f;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf42 */
unsigned int F_00ce0110(void)
{
  GEN_ENTER(0xce0110u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf1 */
uint F_00ce0120(void)
{
  GEN_ENTER(0xce0120u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf7 */
unsigned int F_00ce0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ce0140 */
unsigned int F_00ce0140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0140u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00ce0170 */
uint F_00ce0170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    puVar4 = (undefined4 *)F_00cdfad0(param_1);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00406810(iVar2);
    }
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return param_1;
}

/* ref: FUN_00ce0200 */
uint F_00ce0200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 + (uVar2 >> 1);
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00ce0170(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00ce0260 */
uint F_00ce0260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ce0200(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ce0200(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ce02d0 */
unsigned int F_00ce02d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce02d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar4 = (*(undefined4 *)&gen_args[3]);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),(*(undefined4 *)&gen_args[3]),"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  F_00c46aa0(uVar5,(*(int *)&gen_args[2]),uVar4);
  (*(int *)&gen_args[2]) = (int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
  if ((*(int *)&gen_args[2]) <= (int)(*(uint *)&gen_args[1])) {
    (*(undefined4 *)&gen_args[3]) = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1]));
      if (&(*(undefined4 *)&gen_args[3]) < puVar1) {
        puVar2 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[0])));
        if (&(*(undefined4 *)&gen_args[3]) < puVar2) goto LAB_00ce03b4;
        if (puVar1 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          uVar6 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
          if (0x3ffffffe < uVar6) goto LAB_00ce0431;
          uVar6 = uVar6 + 1;
          uVar7 = (int)(*(uint * PTR32 *)&gen_args[0])[2] - (int)((int)(uintptr_t)puVar2) >> 2;
          if (uVar7 < uVar6) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00ce0170((*(uint * PTR32 *)&gen_args[0]),uVar7);
          }
        }
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) =
               *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + ((int)&(*(undefined4 *)&gen_args[3]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
        }
      }
      else {
LAB_00ce03b4: ;
        if (puVar1 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          uVar6 = (int)((int)puVar1 - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
          if (0x3ffffffe < uVar6) {
LAB_00ce0431: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar6 = uVar6 + 1;
          uVar7 = (int)((int)(*(uint * PTR32 *)&gen_args[0])[2] - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
          if (uVar7 < uVar6) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00ce0170((*(uint * PTR32 *)&gen_args[0]),uVar7);
          }
        }
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) = 0;
        }
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + 4;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) <= (int)(*(uint *)&gen_args[1]));
  }
  if ((uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2) <= (*(uint *)&gen_args[1])) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar3 = *((int *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4)));
  if (iVar3 != 0) {
    F_00406810(iVar3);
  }
  if ((*(uint *)&gen_args[1]) < (uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2)) {
    *((uint *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4))) = uVar5;
    return 0;
  }
                    
  F_00c457e7("invalid vector<T> subscript");
}

/* ref: FUN_00ce0470 */
unsigned int F_00ce0470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce0470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = (*(int *)&gen_args[2]);
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar7 = *piVar4 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    piVar4 = piVar4 + 1;
    puVar2 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
    (*(int * PTR32 *)&gen_args[3]) = (int *)iVar7;
    if (&(*(int * PTR32 *)&gen_args[3]) < puVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1])));
      if (&(*(int * PTR32 *)&gen_args[3]) < puVar3) goto LAB_00ce0512;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
        uVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
        if (0x3ffffffe < uVar5) goto LAB_00ce0573;
        uVar5 = uVar5 + 1;
        uVar6 = (int)(*(uint * PTR32 *)&gen_args[1])[2] - (int)((int)(uintptr_t)puVar3) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          F_00ce0170((*(uint * PTR32 *)&gen_args[1]),uVar6);
        }
      }
      if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
        *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) =
             *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[1]) + ((int)&(*(int * PTR32 *)&gen_args[3]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
      }
    }
    else {
LAB_00ce0512: ;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
        uVar5 = (int)((int)puVar2 - *(*(uint * PTR32 *)&gen_args[1])) >> 2;
        if (0x3ffffffe < uVar5) {
LAB_00ce0573: ;
                    
          F_00c4579a("vector<T> too long");
        }
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)(*(uint * PTR32 *)&gen_args[1])[2] - *(*(uint * PTR32 *)&gen_args[1])) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          F_00ce0170((*(uint * PTR32 *)&gen_args[1]),uVar6);
        }
      }
      if (((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (int *)0x0) {
        *((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) = iVar7;
      }
    }
    (*(uint * PTR32 *)&gen_args[1])[1] = (*(uint * PTR32 *)&gen_args[1])[1] + 4;
    iVar1 = iVar1 + -1;
  } while( true );
}

/* ref: FUN_00ce0580 */
unsigned int F_00ce0580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00ce05d0 */
uint F_00ce05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0610 */
uint F_00ce0610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0660 */
uint F_00ce0660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_00ce06a0 */
uint F_00ce06a0(unsigned int gen_a0)
{
  GEN_ENTER(0xce06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)(gen_frame + 0x8));
  if (puVar2 != this) {
    iVar1 = *(int *)this;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    puVar2 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)F_00406810(iVar1);
    }
  }
  return (uint)puVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf0 */
uint F_00ce06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cdf910(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce0700 */
uint F_00ce0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ce0f90(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0740 */
uint F_00ce0740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ce0ff0(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0780 */
uint F_00ce0780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ce1050(this,param_1);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  return (uint)this;
}

/* ref: FUN_00ce07c0 */
unsigned int F_00ce07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xce07c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(in_ecx);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf2 */
uint F_00ce07d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce07d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 4);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe);
  *(undefined2 *)(this + 0x5c) = *(undefined2 *)(iVar3 + uVar2);
  *(undefined2 *)(this + 0x5e) = *(undefined2 *)(iVar3 + 2 + uVar2);
  *(undefined2 *)(this + 0x60) = *(undefined2 *)(iVar3 + 4 + uVar2);
  uVar1 = F_00ce1300(this);
  *(uint *)(this + 0x4c) = uVar1 + uVar2;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(iVar3 + 8 + uVar2);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar3 + 0xc + uVar2);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar3 + 0x10 + uVar2);
  *(uint *)(this + 0x10) = (uint)*(ushort *)(iVar3 + 6 + uVar2);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar3 + 0x10);
  F_00cc8520(this);
  if ((((byte)this[0x48] & 8) == 0) && (iVar3 = 0, *(short *)(this + 0x5c) != 0)) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,iVar3);
      *(undefined1 *)(uVar1 + 0xf) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(this + 0x5c));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0);
  if ((*(byte *)(uVar1 + 0x6c) & 2) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0);
    if (*(char *)(uVar1 + 1) == '\x05') {
      *(undefined1 *)(uVar1 + 1) = 0xe;
      return uVar1;
    }
    if (*(char *)(uVar1 + 1) == '\v') {
      *(undefined1 *)(uVar1 + 1) = 0xf;
    }
  }
  return uVar1;
}

/* ref: FUN_00ce08a0 */
uint F_00ce08a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce08a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_2 * 4 + param_1)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf3 */
uint F_00ce08c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce08c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5c) <= param_1) {
    iVar2 = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    bVar1 = F_00ce12d0(this);
    if (bVar1 == 0) {
      return iVar2 * 0x94 + *(int *)(this + 0x18);
    }
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x4c) + iVar2 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf4 */
uint F_00ce0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5e) <= param_1) {
    iVar1 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x50) + iVar1 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf5 */
uint F_00ce0940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 & 0x8000) == 0) {
    if (((param_1 & 0x4000) != 0) &&
       (uVar2 = param_1 & 0xffffbfff, (int)(uint)*(ushort *)(this + 0x60) <= (int)uVar2)) {
      uVar2 = 0;
    }
  }
  else {
    piVar1 = (int *)F_00d2ccd0();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  if ((int)(uint)*(ushort *)(this + 0x60) <= (int)uVar2) {
    uVar2 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x54) + uVar2 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf6 */
uint F_00ce09c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce09c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5c) <= param_1) {
    iVar1 = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    return iVar1 * 0x94 + 0x10 + *(int *)(this + 0x18);
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x58) + iVar1 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf7 */
uint F_00ce0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0a00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  uint uVar2;
  byte * pbVar3;
  ushort * puVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  local_8 = (float)(float10)0;
  uVar2 = (*(uint *)&gen_args[1]);
  if ((int)(uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) <= (int)(*(uint *)&gen_args[1])) {
    uVar2 = 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    return uVar2 * 0x94;
  }
  pbVar3 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),uVar2)));
  uVar2 = 0;
  if (pbVar3 != (byte *)0x0) {
    uVar2 = F_00ce9790(pbVar3,3);
    if (uVar2 != 0) {
      return uVar2;
    }
    bVar6 = 0;
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
    uVar2 = 0;
    if (*pbVar3 != 0) {
      do {
        puVar4 = (ushort *)F_00ce9920(pbVar3,(*(uint *)&gen_args[1]),3);
        uVar2 = 0;
        if (puVar4 != (ushort *)0x0) {
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]),(uint)*puVar4);
          uVar2 = 0;
          if (uVar5 != 0) {
            fVar7 = F_00cd69c0(uVar5);
            fVar8 = (float10)local_8;
            fVar9 = (float10)(float)fVar7;
            uVar1 = (ushort)((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8);
            uVar2 = CONCAT22(extraout_var,
                             (ushort)!(fVar8 <= fVar9) << 8 |
                             (ushort)(GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) << 10 | uVar1 << 0xe);
            if (fVar8 <= fVar9 && uVar1 == 0) {
              local_8 = (float)fVar7;
            }
          }
        }
        bVar6 = bVar6 + 1;
        (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar6);
      } while (bVar6 < *pbVar3);
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf43 */
uint F_00ce0b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf9 */
uint F_00ce0b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  
  uVar3 = param_1 % 1000;
  param_1 = 0xffffffff;
  if (*(int *)(this + 0x18) == 0) {
    F_00ce11f0(this);
    uVar1 = 0;
    if (*(short *)(this + 0x5c) != 0) {
      while (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar1), param_1 = uVar1,
            *(ushort *)(uVar2 + 0xc) != uVar3) {
        uVar1 = uVar1 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= (int)uVar1) {
          F_00ce1230(this);
          return 0xffffffff;
        }
      }
    }
    F_00ce1230(this);
    return param_1;
  }
  uVar1 = 0;
  if (*(ushort *)(this + 0x5c) != 0) {
    puVar4 = ((ushort *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
    do {
      if (*puVar4 == uVar3) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 0x4a;
    } while ((int)uVar1 < (int)(uint)*(ushort *)(this + 0x5c));
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf10 */
uint F_00ce0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 % 1000;
  uVar2 = *(uint *)(this + 0x18);
  iVar3 = 0;
  param_1 = 0;
  if (uVar2 == 0) {
    F_00ce11f0(this);
    if (*(short *)(this + 0x5c) != 0) {
      while (param_1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,iVar3),
            *(ushort *)(param_1 + 0xc) != uVar1) {
        iVar3 = iVar3 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= iVar3) {
          F_00ce1230(this);
          return 0;
        }
      }
    }
    F_00ce1230(this);
  }
  else {
    iVar3 = 0;
    if (*(ushort *)(this + 0x5c) != 0) {
      do {
        if (*(ushort *)(uVar2 + 0xc) == uVar1) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 + 0x94;
      } while (iVar3 < (int)(uint)*(ushort *)(this + 0x5c));
      return 0;
    }
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf11 */
uint F_00ce0c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0x18);
  iVar1 = 0;
  uVar3 = param_1 % 1000;
  param_1 = 0;
  if (iVar5 == 0) {
    F_00ce11f0(this);
    iVar5 = 0;
    if (*(short *)(this + 0x5c) != 0) {
      while( true ) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,iVar5);
        if (*(ushort *)(uVar2 + 0xc) == uVar3) break;
        iVar5 = iVar5 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= iVar5) {
          F_00ce1230(this);
          return 0;
        }
      }
      param_1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,iVar5);
    }
    F_00ce1230(this);
  }
  else if (*(ushort *)(this + 0x5c) != 0) {
    puVar4 = (ushort *)(iVar5 + 0xc);
    do {
      if (*puVar4 == uVar3) {
        return iVar1 * 0x94 + 0x10 + iVar5;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x4a;
    } while (iVar1 < (int)(uint)*(ushort *)(this + 0x5c));
    return 0;
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf45 */
ushort F_00ce0d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x5c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf8 */
uint F_00ce0d70(unsigned int gen_a0)
{
  GEN_ENTER(0xce0d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x5c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf27 */
uint F_00ce0d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int local_c;
  
  *(undefined4 *)(this + 0x18) = 0;
  local_c = 0;
  if (*(short *)(this + 0x5c) == 0) {
    *(int *)(this + 0x18) = param_1;
    *(undefined4 *)(this + 4) = 0;
    return 0;
  }
  puVar5 = (undefined4 *)(param_1 + 0x90);
  do {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,local_c)));
    puVar5[-0x24] = *puVar1;
    puVar5[-0x23] = puVar1[1];
    puVar5[-0x22] = puVar1[2];
    puVar5[-0x21] = puVar1[3];
    *(undefined1 *)((int)puVar5 + -0x81) = 0xff;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,local_c)));
    puVar6 = puVar5 + -0x20;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00ce9790(puVar1,3);
    if (uVar3 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = *(undefined4 *)(uVar3 + 4);
    }
    puVar5 = puVar5 + 0x25;
    local_c = local_c + 1;
  } while (local_c < (int)(uint)*(ushort *)(this + 0x5c));
  *(int *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 4) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf12 */
uint F_00ce0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00cc8590(this);
  *(undefined4 *)(this + 4) = param_1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf22 */
uint F_00ce0eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x18) != 0) {
    return (int)*((char *)GEN_TOP(((param_1 & 0xffff) * 0x94 + 0xf + *(int *)(this + 0x18))));
  }
  F_00ce11f0(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1 & 0xffff);
  cVar1 = *(char *)(uVar2 + 0xf);
  F_00ce1230(this);
  return (int)cVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf23 */
uint F_00ce0f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x18);
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP(((param_1 & 0xffff) * 0x94 + 0xf + uVar1))) = (undefined1)param_2;
    return uVar1;
  }
  F_00ce11f0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1 & 0xffff);
  *(undefined1 *)(uVar1 + 0xf) = (undefined1)param_2;
  uVar1 = F_00ce1230(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf1 */
uint F_00ce0f50(void)
{
  GEN_ENTER(0xce0f50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf0 */
uint F_00ce0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce0f90 */
unsigned int F_00ce0f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00ce0ff0 */
uint F_00ce0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00ce1050 */
uint F_00ce1050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 2;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00ce10b0 */
unsigned int F_00ce10b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce10b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  return 0;
}

/* ref: FUN_00ce10c0 */
uint F_00ce10c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce10c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1)));
  return *puVar1;
}

/* ref: FUN_00ce10e0 */
byte F_00ce10e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce10e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf13 */
unsigned int F_00ce1100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf14 */
unsigned int F_00ce1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf15 */
unsigned int F_00ce1120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf16 */
unsigned int F_00ce1130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf17 */
unsigned int F_00ce1140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce1140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf44 */
unsigned int F_00ce1150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf18 */
unsigned int F_00ce1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf19 */
unsigned int F_00ce1170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf20 */
unsigned int F_00ce1180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf21 */
unsigned int F_00ce1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf29 */
uint F_00ce11a0(void)
{
  GEN_ENTER(0xce11a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf30 */
uint F_00ce11b0(void)
{
  GEN_ENTER(0xce11b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf31 */
uint F_00ce11c0(void)
{
  GEN_ENTER(0xce11c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ce11d0 */
uint F_00ce11d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce11d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) | 0x40;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00ce11f0 */
uint F_00ce11f0(unsigned int gen_a0)
{
  GEN_ENTER(0xce11f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x18) == 0) && ((*(byte *)((int)this + 0x48) & 0x40) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8));
    if (uVar1 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8));
      *(uint *)((int)this + 4) = uVar1;
      return uVar1;
    }
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00ce1230 */
uint F_00ce1230(unsigned int gen_a0)
{
  GEN_ENTER(0xce1230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x18) == 0) && ((*(byte *)((int)this + 0x48) & 0x40) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce1250 */
uint F_00ce1250(unsigned int gen_a0)
{
  GEN_ENTER(0xce1250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x48) & 0x40) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8));
    if (uVar1 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8));
      if (uVar1 != 0) {
        *(uint *)((int)this + 4) = uVar1;
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ce1280 */
uint F_00ce1280(unsigned int gen_a0)
{
  GEN_ENTER(0xce1280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x48) & 0x40) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce12a0 */
byte F_00ce12a0(unsigned int gen_a0)
{
  GEN_ENTER(0xce12a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8));
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 4) = uVar1;
  }
  return 1;
}

/* ref: FUN_00ce12d0 */
byte F_00ce12d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8));
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)((int)this + 4) == uVar1;
}

/* ref: FUN_00ce1300 */
uint F_00ce1300(unsigned int gen_a0)
{
  GEN_ENTER(0xce1300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce94d0(*(undefined4 *)((int)this + 0xc));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf24 */
uint F_00ce1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8));
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8));
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  if (uVar1 != 0) {
    uVar2 = (uint)*(byte *)(uVar1 + 1);
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf25 */
uint F_00ce1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8));
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8));
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  if (uVar1 != 0) {
    uVar2 = *(int *)(this + 0x10) * 1000 + (uint)*(ushort *)(uVar1 + 0xc);
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf26 */
byte F_00ce1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8));
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8));
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  if (uVar1 != 0) {
    bVar2 = *(byte *)(uVar1 + 4) & 1;
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8));
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf1 */
uint F_00ce1480(void)
{
  GEN_ENTER(0xce1480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf0 */
uint F_00ce1490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce14c0 */
unsigned int F_00ce14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce14c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf29 */
uint F_00ce14e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce14e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x6c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf30 */
uint F_00ce14f0(unsigned int gen_a0)
{
  GEN_ENTER(0xce14f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf11 */
uint F_00ce1500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf33 */
unsigned int F_00ce1510(unsigned int gen_a0)
{
  GEN_ENTER(0xce1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x6c);
  if (*(uint *)(this + 0x70) <= uVar1) {
    if (*(uint *)(this + 0x70) != uVar1 / *(uint *)(this + 0xa4)) {
      *(uint *)(this + 0x70) = uVar1 / *(uint *)(this + 0xa4);
    }
    if (0xfff < (int)uVar1) {
      uVar1 = F_00ce3e30(*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68),0,0,0x1000,0,
                           *(undefined4 *)(this + 0x14),0);
      *(uint *)(this + 0xac) = uVar1;
      *(undefined4 *)(this + 0xb0) = 0;
      *(undefined4 *)(this + 0xb8) = 0;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf34 */
byte F_00ce1570(unsigned int gen_a0)
{
  GEN_ENTER(0xce1570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf35 */
uint F_00ce1580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)(this + 0xbc) = param_1;
  uVar1 = param_1;
  if ((param_1 == 0) && (*(int *)(this + 0xc0) != 0)) {
    if (((byte)this[0x48] & 0x10) == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this);
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf37 */
uint F_00ce15c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xce15c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xbc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xbc) + 0x178))))
                      (*(int * PTR32 *)(this + 0xbc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf38 */
uint F_00ce15e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce15e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf36 */
uint F_00ce15f0(unsigned int gen_a0)
{
  GEN_ENTER(0xce15f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc7f20(*(undefined4 *)(this + 0x14));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf39 */
uint F_00ce1600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc78c0(param_1);
  return uVar1;
}

/* ref: FUN_00ce1620 */
uint F_00ce1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(ushort *)(param_1 + 0xe) + 0xc + param_1))) + param_1)));
  iVar2 = param_1 + *piVar1;
  *param_2 = iVar2;
  return *(int *)(iVar2 + 0x18) + 0x20 + *piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf42 */
unsigned int F_00ce1650(void)
{
  GEN_ENTER(0xce1650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf3 */
uint F_00ce1660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce08c0((undefined *)this,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf4 */
uint F_00ce1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce0910((undefined *)this,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf5 */
uint F_00ce16a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce0940((undefined *)this,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf6 */
uint F_00ce16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce09c0((undefined *)this,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf43 */
uint F_00ce16e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf24 */
uint F_00ce1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0);
    return (uint)*(byte *)(uVar1 + 1);
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf26 */
uint F_00ce1730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0);
    return *(uint *)(uVar1 + 4) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00ce1760 */
uint F_00ce1760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce1760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00ce0780(this,param_1);
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(undefined4 *)((int)this + 0x70) = param_5;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  *(undefined1 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = param_4;
  *(undefined4 *)((int)this + 0xa4) = param_6;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  return (uint)this;
}

/* ref: FUN_00ce1810 */
unsigned int F_00ce1810(unsigned int gen_a0)
{
  GEN_ENTER(0xce1810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *(undefined1 *)((int)this + 0xa0) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(char *)((int)this + 0xa0) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(this);
  return 0;
}

/* ref: FUN_00ce1860 */
uint F_00ce1860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce1860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00ce1900 */
byte F_00ce1900(unsigned int gen_a0)
{
  GEN_ENTER(0xce1900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)((int)this + 0xac) != 0) {
    bVar5 = F_00ce3430(*(int *)((int)this + 0xac));
    if (bVar5 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x68);
      if (*piVar2 == 0x42444553) {
        uVar1 = *(ushort *)((int)piVar2 + 0xe);
        *(int *)((int)this + 0xc) = piVar2[2];
        *(uint *)((int)this + 0x1c) = piVar2[4] - (uint)*(ushort *)(uVar1 + 0x1c + (int)piVar2);
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce1860));
        }
        ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112edd8),&REFG(undefined, 0x112ed59),"StreamBank.cpp",0x10f,
                        "SQEX::CDev::Engine::Sd::Driver::StreamBank::StandbyData");
      }
      else {
        *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0x7d | 2;
        F_00cc4e60(this,0);
      }
      *(undefined4 *)((int)this + 0xac) = 0;
    }
  }
  if (*(int *)((int)this + 0xb0) == 0) goto LAB_00ce1a2e;
  bVar5 = F_00ce3430(*(int *)((int)this + 0xb0));
  if (bVar5 == 0) goto LAB_00ce1a2e;
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,*(undefined4 *)((int)this + 0x68));
  iVar3 = *(int *)((int)this + 0x70);
  iVar7 = *(int *)((int)this + 0x6c) - iVar3;
  if (iVar7 == 0) {
LAB_00ce1a23: ;
    *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 2;
  }
  else {
    if (*(int *)((int)this + 0x1c) <= *(int *)((int)this + 0x6c)) {
      iVar7 = *(int *)((int)this + 0x1c) - iVar3;
    }
    if (iVar7 < 1) goto LAB_00ce1a23;
    iVar4 = *(int *)((int)this + 0xa8);
    if (iVar4 != 0) {
      iVar7 = (iVar7 / iVar4) * iVar4;
    }
    uVar6 = F_00ce3e30(*(undefined4 *)((int)this + 100),*(int *)((int)this + 0x68) + iVar3,iVar3,0
                         ,iVar7,iVar7 >> 0x1f,*(undefined4 *)((int)this + 0x14),0);
    *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + iVar7;
    *(uint *)((int)this + 0xb8) = uVar6;
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
LAB_00ce1a2e: ;
  bVar5 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    bVar5 = F_00ce3430(*(int *)((int)this + 0xb8));
    if (bVar5 != 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 2;
      *(undefined4 *)((int)this + 0xb8) = 0;
    }
  }
  return bVar5;
}

/* ref: FUN_00ce1a60 */
uint F_00ce1a60(unsigned int gen_a0)
{
  GEN_ENTER(0xce1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined1 *)((int)this + 0x28) = 1;
  return (uint)this;
}

/* ref: FUN_00ce1a90 */
unsigned int F_00ce1a90(unsigned int gen_a0)
{
  GEN_ENTER(0xce1a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00ce1ac0 */
unsigned int F_00ce1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf1 */
uint F_00ce1b00(void)
{
  GEN_ENTER(0xce1b00u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf32 */
uint F_00ce1b10(unsigned int gen_a0)
{
  GEN_ENTER(0xce1b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf46 */
uint F_00ce1b20(unsigned int gen_a0)
{
  GEN_ENTER(0xce1b20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf0 */
uint F_00ce1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  this[0xa0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  if (this[0xa0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce1ba0 */
unsigned int F_00ce1ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ba0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce1bc0 */
uint F_00ce1bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x84) - *(int *)(in_ecx + 0x88);
}

/* ref: FUN_00ce1bf0 */
uint F_00ce1bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x84) - *(int *)(in_ecx + 0x88);
}

/* ref: FUN_00ce1c00 */
uint F_00ce1c00(unsigned int gen_a0)
{
  GEN_ENTER(0xce1c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(int *)((int)this + 0x88) % *(int *)((int)this + 0x9c) + *(int *)((int)this + 0x78);
}

/* ref: FUN_00ce1c20 */
uint F_00ce1c20(unsigned int gen_a0)
{
  GEN_ENTER(0xce1c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x88);
  iVar2 = *(int *)((int)this + 0xa0);
  uVar3 = *(int *)((int)this + 0x84) - iVar1;
  if ((-1 < iVar2) && (iVar2 < (int)(iVar1 + uVar3))) {
    uVar3 = iVar2 - iVar1;
  }
  iVar2 = *(int *)((int)this + 0x9c);
  if (iVar2 < (int)(iVar1 % iVar2 + uVar3)) {
    return iVar2 - iVar1 % iVar2;
  }
  return uVar3;
}

/* ref: FUN_00ce1c70 */
uint F_00ce1c70(unsigned int gen_a0)
{
  GEN_ENTER(0xce1c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xdc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf3 */
uint F_00ce1c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(int *)(in_ecx + 0x98) != 0) && (param_2 == 0)) {
    return *((int *)GEN_TOP((*(int *)(in_ecx + 0x98) + 0x50))) + *(int *)(in_ecx + 0x98);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf4 */
uint F_00ce1cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && (param_2 == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x38) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf5 */
uint F_00ce1ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && (param_2 == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x3c) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf6 */
uint F_00ce1d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && (param_2 == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x40) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce1d40 */
uint F_00ce1d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) != 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1d80 */
uint F_00ce1d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) == 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1dc0 */
byte F_00ce1dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) != 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1df0 */
byte F_00ce1df0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) == 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1e20 */
byte F_00ce1e20(unsigned int gen_a0)
{
  GEN_ENTER(0xce1e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = 1;
  if (((*(byte *)((int)this + 0xd4) & 1) != 0) ||
     (*(int *)((int)this + 0x8c) < *(int *)((int)this + 0x90))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce1e80 */
byte F_00ce1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0xdc) == param_1) {
    *(undefined4 *)((int)this + 0xdc) = 0;
    if ((*(byte *)((int)this + 0x48) & 0x20) != 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xdf;
      F_00ce3950(*(undefined4 *)((int)this + 0x14));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1ec0 */
byte F_00ce1ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0xdc) == 0) {
    *(int *)((int)this + 0xdc) = param_1;
    if ((*(byte *)((int)this + 0x48) & 0x20) == 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 0x20;
      F_00ce3fa0(*(undefined4 *)((int)this + 0x14),(int)this + 100);
    }
  }
  return param_1 == *(int *)((int)this + 0xdc);
}

/* ref: FUN_00ce1f10 */
unsigned int F_00ce1f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 0xf8) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + param_1;
  if (*(char *)((int)this + 0xf8) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf33 */
uint F_00ce1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xce1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 SVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  SVar1 = this[0x48];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),SVar1);
  if (((byte)SVar1 & 0x20) == 0) {
    this[0x48] = (undefined1)((byte)SVar1 | 0x20);
    uVar2 = F_00ce3fa0(*(undefined4 *)(this + 0x14),this + 100);
  }
  return uVar2;
}

/* ref: FUN_00ce1fe0 */
uint F_00ce1fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint extraout_EAX = 0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xf8) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(uint *)((int)this + 0x80) = param_1;
  uVar1 = param_1;
  if (*(char *)((int)this + 0xf8) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce2020 */
uint F_00ce2020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ce0780(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *(undefined4 *)((int)this + 0x68) = param_2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 0x74) = param_3;
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(undefined4 *)((int)this + 0x7c) = param_4;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined1 *)((int)this + 0xcc) = 1;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined1 *)((int)this + 0xf8) = 1;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  F_00ce0d60(this,1);
  return (uint)this;
}

/* ref: FUN_00ce2110 */
uint F_00ce2110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce2110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00ce0780(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 0x70) = param_3;
  *(undefined4 *)((int)this + 0x74) = param_4;
  *(undefined4 *)((int)this + 0x78) = param_4;
  *(undefined4 *)((int)this + 0x7c) = param_5;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined1 *)((int)this + 0xcc) = 1;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined1 *)((int)this + 0xf8) = 1;
  *(int *)((int)this + 0x68) = (int)this + 0x6c;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  F_00ce0d60(this,1);
  return (uint)this;
}

/* ref: FUN_00ce2210 */
unsigned int F_00ce2210(unsigned int gen_a0)
{
  GEN_ENTER(0xce2210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  if ((*(byte *)((int)this + 0x48) & 0x20) != 0) {
    *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xdf;
    F_00ce3950(*(undefined4 *)((int)this + 0x14));
  }
  do {
    bVar1 = F_00ce3460(*(undefined4 *)((int)this + 0x14));
  } while (bVar1 != 0);
  gen_imp_DeleteCriticalSection((int)this + 0xe0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb4);
  *(undefined1 *)((int)this + 0xcc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  if (*(char *)((int)this + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  F_00ce07c0(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf36 */
unsigned int F_00ce22c0(unsigned int gen_a0)
{
  GEN_ENTER(0xce22c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pSVar1;
  
  pSVar1 = this + 0xe0;
  this[0xf8] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(pSVar1);
  this[0xf8] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(pSVar1);
  *(undefined4 *)(this + 0x80) = 5;
  if (this[0xf8] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(pSVar1);
  }
  *(uint *)(this + 0xd4) = *(uint *)(this + 0xd4) & 0xfffffffd;
  if (this[0xf8] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(pSVar1);
  }
  return 0;
}

