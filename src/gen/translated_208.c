#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf27 */
byte F_010543c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10543c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00cc6ea0(param_1,param_2,param_3);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf68 */
uint F_010543e0(void)
{
  GEN_ENTER(0x10543e0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7754);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf33 */
uint F_01054400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00cc5520(((undefined4 *)(gen_frame + 0xc)),0x100);
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)] + 0xd0))((int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)]);
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + iVar1) = uVar3;
    } while (uVar2 < uVar4);
  }
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf36 */
uint F_01054490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc77f0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf37 */
unsigned int F_010544b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10544b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 4) != 0) {
    F_00d05de0(*(int *)(this + 4),0xffffffff,param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf38 */
uint F_010544d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10544d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc84b0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf41 */
uint F_010544f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10544f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc5440(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf42 */
unsigned int F_01054510(void)
{
  GEN_ENTER(0x1054510u, 0u, 0u, 0u, 0u);
  F_00cc5800();
  F_00cc00e0();
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf43 */
uint F_01054520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8600(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf44 */
uint F_01054540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8690(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf45 */
uint F_01054560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1054560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cc8710(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf46 */
uint F_01054580(void)
{
  GEN_ENTER(0x1054580u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x15d86bc) - REFG(int, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf47 */
uint F_01054590(void)
{
  GEN_ENTER(0x1054590u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf48 */
unsigned int F_010545a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cc87b0(param_1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf49 */
byte F_010545c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc8800(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf64 */
uint F_010545e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbf720(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf65 */
byte F_01054600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbf7b0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf63 */
byte F_01054620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc74d0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf69 */
unsigned int F_01054640(unsigned int gen_a0)
{
  GEN_ENTER(0x1054640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf70 */
unsigned int F_01054660(unsigned int gen_a0)
{
  GEN_ENTER(0x1054660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf74 */
uint F_01054680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  float10 fVar9;
  double dVar10;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x10)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x18)),"--Checker Ver.2--\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Driver]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"updateEnabled= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2c]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2d]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"soundReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2e]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xdc))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"PLIIzEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busPLIIzEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2f]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xe4))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"StereoDownmixEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerVsyncProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x20));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerMsecProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"outputChannels= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"volumeCurveType= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 8));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateVSync= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateMsec= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1c));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xb8))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"RemainingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xbc))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"UsingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)REFG(int, 0x15d7754);
  F_00c4720f(((char *)(gen_frame + 0x18)),"BusCount= %d\n",REFG(int, 0x15d7754));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  uVar6 = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) {
    do {
      F_00cbf720(uVar6);
      F_00cbf770(uVar6);
      fVar9 = F_00cbfef0(uVar6);
      dVar10 = (double)fVar9;
      bVar3 = F_00cbfb10(uVar6);
      F_00cbfad0(uVar6,(uint)bVar3,(int)(ulonglong)gen_d2bits(dVar10),
                   (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
      F_00cbfbc0(uVar6);
      bVar3 = F_00cbf7b0(uVar6);
      F_00c4720f(((char *)(gen_frame + 0x18)),"Bus[%d] 3D= %d Rev=%d Pause= %d SPause= %d Vol= %f Play= %d/%d \n",uVar6,
               (uint)bVar3);
      pcVar4 = ((char *)(gen_frame + 0x18));
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
      pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
      do {
        pcVar8 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = ((char *)(gen_frame + 0x18));
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar4 = pcVar4 + 4;
      }
      uVar6 = uVar6 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
    } while ((int)uVar6 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14)));
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x8)),0);
  F_00cbb9b0(((undefined1 *)(gen_frame + 0x8)));
  F_00cbb930(((undefined1 *)(gen_frame + 0x8)));
  uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x8)));
  uVar6 = F_00cbb8f0(((undefined1 *)(gen_frame + 0x8)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"Reverb No= %d TempNo= %d Bypass= %d Level= %.3f\n",uVar6,uVar5);
  iVar2 = (*(int *)(gen_frame + 0x10));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = F_00cc54e0();
  F_00c4720f(((char *)(gen_frame + 0x18)),"SoundCount = %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00cc5940(iVar2);
  F_00ce9e30(iVar2);
  uVar5 = F_00ccb6c0(iVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf54 */
uint F_01054d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe50();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf55 */
byte F_01054dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe50();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf56 */
uint F_01054de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe60();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf57 */
byte F_01054e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054e10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe60();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf60 */
uint F_01054e30(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054e30u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  undefined4 uVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,((undefined1 *)(gen_frame + 0xc)),0);
  ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,((undefined1 *)(gen_frame + 0x14)),1);
  fVar1 = (float10)1;
  if (((float10)param_2 <= fVar1) && (param_2 = (float)fVar1, param_3 == 0)) {
    F_00cc26e0((float)fVar1,0);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)),1);
    uVar3 = 1;
  }
  else {
    F_00cc26e0(param_2,param_3);
    F_00cc6b10(((undefined1 *)(gen_frame + 0xc)),param_2,0,param_3);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)),0);
    F_00cc6b10(((undefined1 *)(gen_frame + 0x14)),param_2,0,param_3);
    uVar3 = 0;
  }
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x14)),uVar3);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x14)));
  F_00cc6ac0(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf62 */
uint F_01054f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = *param_1;
  uVar2 = F_00cbfda0();
  ((code *)*(gen_code32 *)(iVar1 + 0x60))(param_1,((undefined1 *)(gen_frame + 0x4)),uVar2);
  fVar3 = F_00cbfdc0(param_2);
  uVar2 = F_00cbfdf0(param_2);
  F_00cc26e0(fVar3,uVar2);
  F_00cc6b10(((undefined1 *)(gen_frame + 0x4)),fVar3,0,uVar2);
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x4)),0);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_01054f70 */
uint F_01054f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00427d90();
  *(ulonglong *)((int)this + 0x10) = uVar1;
  uVar1 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = 0x10000;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined1 *)((int)this + 0x48) = 1;
  F_00cc0dd0(param_1);
  F_00cc8dd0(param_1);
  F_00cc5dc0(param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 4);
  F_00cea4e0(&(*(undefined4 *)(gen_frame + 0x18)));
  if (*(char *)(param_1 + 0x1bc) == '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10000;
    (*(char * PTR32 *)(gen_frame + 0x8)) = "CDevSd StreamHandler";
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 0x44);
    F_00ce3d30(&(*(char * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 8) = 3;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return (uint)this;
}

/* ref: FUN_01055030 */
unsigned int F_01055030(unsigned int gen_a0)
{
  GEN_ENTER(0x1055030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  if ((REFG(int, 0x15d8c04) != 0) && (REFG(int, 0x15d8c04) != -0xa0)) {
    F_00ce3b10(1);
    F_00ce3530();
  }
  *(undefined1 *)((int)this + 0x2c) = 0;
  F_00cc5320();
  F_00cc27e0();
  F_00ce9fe0();
  F_00cc6d60();
  F_00cbf410();
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf7 */
byte F_01055090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1055090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((char)param_2 != '\0') {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,((undefined1 *)(gen_frame + 0x0)),param_1)));
    F_00cbe4b0(this_00);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  }
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 == (int *)0x0) {
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  bVar1 = F_00cc2b60(piVar2);
  if ((bVar1 == 0) && ((short)piVar2[8] < 1)) {
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_0105513a;
      }
    }
    bVar1 = F_00cc8a70(param_1);
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return bVar1;
  }
LAB_0105513a: ;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf8 */
byte F_01055170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 != (int *)0x0) {
    bVar1 = F_00cc2b60(piVar2);
    if ((bVar1 != 0) || (0 < (short)piVar2[8])) {
LAB_010551ce: ;
      if (this[0x48] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_010551ce;
      }
    }
  }
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: FUN_01055200 */
uint F_01055200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = this;
  ((byte *)(gen_frame + 0x0))[0x10] = (byte)param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(uint *)(gen_frame + 0x24)) = param_1;
  ((byte *)(gen_frame + 0x0))[0x1c] = (byte)param_7;
  ((byte *)(gen_frame + 0x0))[0x14] = (byte)param_8;
  F_00ccb2c0(((char *)(gen_frame + 0x2c)));
  uVar6 = param_1;
  if ((*(byte *)(param_2 + 4) & 0x80) == 0) {
LAB_010552ac: ;
    puVar2 = (undefined4 *)F_00ce9a60(param_1,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      pcVar8 = ((char *)(gen_frame + 0x2c));
      for (iVar3 = 0x1f; uVar6 = (*(uint *)(gen_frame + 0x24)), iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar8 = pcVar8 + 4;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    if (REFG(char, 0x15d7798) == '\0') goto LAB_010552ac;
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    F_00cca3f0(&REFG(char, 0x15d7798),((char *)(gen_frame + 0x2c)),(uint)*(ushort *)(param_2 + 6));
  }
  uVar4 = (*(uint *)(gen_frame + 0x30));
  bVar1 = (byte)((*(uint *)(gen_frame + 0x30)) >> 0x10);
  if (((*(uint *)(gen_frame + 0x30)) >> 0x10 & 4) == 0) {
    if (((*(uint *)(gen_frame + 0x30)) & 0x80000) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
      iVar3 = *(int *)(uVar6 + 0x10) * 1000;
      (*(int *)(gen_frame + 0x34)) = iVar3;
      iVar3 = iVar3 + 999;
      goto LAB_0105530a;
    }
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
    iVar3 = *(int *)(uVar6 + 0x10) * 1000 + (uint)*(ushort *)(param_2 + 0xc);
    (*(int *)(gen_frame + 0x34)) = iVar3;
LAB_0105530a: ;
    (*(uint *)(gen_frame + 0x30)) = uVar4 | 0x20000;
    (*(int *)(gen_frame + 0x38)) = iVar3;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  if (((*(undefined2 *)((char *)((char *)(gen_frame + 0x2c)) + 2)) != 0) && (((char *)(gen_frame + 0x2c))[0] != '\0')) {
    uVar4 = F_00cc1e50(((char *)(gen_frame + 0x2c)),param_2,(*(undefined4 *)(gen_frame + 0x20)),param_5,param_6,&(*(undefined1 *)(gen_frame + 0x2b)),0);
    (*(uint *)(gen_frame + 0x24)) = uVar4;
    if ((uVar4 != 0) && (uVar4 - 1 < 5)) {
      if (uVar4 == 1) {
        pcVar8 = ((char *)(gen_frame + 0x3c));
      }
      else {
        pcVar8 = ((char *)(gen_frame + 0x3c)) + (uVar4 * 3 + -6) * 8 + 0x18;
        if (pcVar8 == (char *)0x0) goto LAB_01055390;
      }
      iVar3 = 0;
      do {
        if (pcVar8[iVar3] == '\a') goto LAB_010554a1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 1);
    }
  }
LAB_01055390: ;
  bVar1 = F_00cbf6a0(param_2);
  if ((bVar1 != 0) &&
     (piVar5 = (int *)F_00cc5fc0(uVar6,param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))),
     piVar5 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar5 + 0x198))(piVar5,(*(undefined4 *)(gen_frame + 0x20)));
    ((code *)*(gen_code32 *)(*piVar5 + 0x9c))(piVar5,param_5,param_6);
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5);
    if ((uVar6 == 2) || (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5), uVar6 == 0xc)) {
      *(undefined1 *)(piVar5 + 0x106) = (*(undefined1 *)(gen_frame + 0x2b));
    }
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xa4))(piVar5);
    piVar7 = (int *)F_00cbf660(uVar6);
    if (piVar7 != (int *)0x0) {
      uVar9 = *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 4)));
      iVar3 = *piVar7;
      uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5);
      uVar6 = F_00cbbd50(((byte *)(gen_frame + 0x0)),uVar6,uVar9);
      ((code *)*(gen_code32 *)(iVar3 + 8))(piVar7,uVar6);
      F_00cbbdb0(((byte *)(gen_frame + 0x0)));
    }
    F_00ce9cd0(((char *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x24)),piVar5);
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5);
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar6;
  }
LAB_010554a1: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_010554c0 */
uint F_010554c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x10554c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
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
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint3 uVar7;
  int iVar6;
  code * pcVar8;
  bool bVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[2]);
  F_00427d90();
  uVar4 = (*(uint *)&gen_args[4]);
  F_00d2cf60();
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_args[5]) & 1;
  if (((*(uint *)&gen_args[5]) & 1) == 0) {
    piVar3 = (int *)F_00cc6e60(uVar4);
  }
  else {
    piVar3 = (int *)F_00cc6e00((*(uint *)&gen_args[2]));
  }
  if (piVar3 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    if (uVar4 == 3) {
LAB_0105556b: ;
      piVar3 = (int *)F_00cc5fc0(piVar3,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
      if (piVar3 != (int *)0x0) {
        uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xd0))(piVar3);
        F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),uVar4,uVar12);
        goto LAB_01055815;
      }
    }
    else if ((*(byte *)(piVar3 + 0x12) & 8) == 0) {
LAB_01055633: ;
      F_00ce11f0(piVar3);
      if ((*(uint *)(gen_frame + 0x18)) == 0) {
        pcVar8 = *(gen_code32 *)(*piVar3 + 0x28);
        uVar4 = (*(uint *)&gen_args[4]);
      }
      else {
        pcVar8 = *(gen_code32 *)(*piVar3 + 0xc);
        uVar4 = (*(uint *)&gen_args[3]);
      }
      uVar4 = (*pcVar8)(piVar3,uVar4);
      (*(uint *)(gen_frame + 0x14)) = uVar4;
      if (uVar4 != 0) {
        if ((*(uint *)(gen_frame + 0x18)) == 0) {
          pcVar8 = *(gen_code32 *)(*piVar3 + 0x2c);
          uVar4 = (*(uint *)&gen_args[4]);
        }
        else {
          pcVar8 = *(gen_code32 *)(*piVar3 + 0x18);
          uVar4 = (*(uint *)&gen_args[3]);
        }
        uVar4 = (*pcVar8)(piVar3,uVar4);
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        if (uVar4 != 0) {
          F_00d2de20(((undefined1 *)(gen_frame + 0x8)),0);
          (*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)((*(uint *)(gen_frame + 0x10)) + 0xd);
          uVar4 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x8)));
          if (uVar4 != (*(uint *)(gen_frame + 0x10))) {
            F_00cbba10(((undefined1 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)));
          }
          F_00cbb890(((undefined1 *)(gen_frame + 0x8)));
        }
        bVar2 = F_00cbf7b0((uint)*(byte *)((*(uint *)(gen_frame + 0x14)) + 1));
        if ((bVar2 == 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
          if (((*(byte *)(piVar3 + 0x12) & 8) != 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
            if ((*(uint *)(gen_frame + 0x18)) == 0) {
              pcVar8 = *(gen_code32 *)(*piVar3 + 0x2c);
              uVar4 = (*(uint *)&gen_args[4]);
            }
            else {
              pcVar8 = *(gen_code32 *)(*piVar3 + 0x18);
              uVar4 = (*(uint *)&gen_args[3]);
            }
            uVar4 = (*pcVar8)(piVar3,uVar4);
            fVar11 = (float10)*(float *)(uVar4 + 0x54);
            fVar1 = (float10)0;
            bVar9 = GEN_ISNAN(fVar1) || GEN_ISNAN(fVar11);
            bVar10 = bVar9 || fVar1 == fVar11;
            uVar7 = (uint3)(CONCAT22((short)(uVar4 >> 0x10),
                                     (ushort)!(fVar11 <= fVar1) << 8 | (ushort)bVar9 << 10 |
                                     (ushort)bVar10 << 0xe) >> 8);
            if (bVar9 == bVar10) {
              iVar6 = CONCAT31(uVar7,1);
            }
            else {
              iVar6 = (uint)uVar7 << 8;
            }
            (*(uint *)&gen_args[4]) = F_01055200((*(undefined * PTR32 *)&gen_args[0]),piVar3,(*(uint *)(gen_frame + 0x14)),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),
                                   iVar6);
            F_00ce1230(piVar3);
            F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
            goto LAB_01055815;
          }
          if ((*(uint *)(gen_frame + 0x18)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01054000((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        else {
          if ((*(uint *)(gen_frame + 0x18)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01053fc0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        F_00ce1230(piVar3);
        F_00cbbd50(((undefined1 *)(gen_frame + 0x0)),(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
        F_00cbc4e0(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[7]));
        F_00cbbd90((*(undefined * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)));
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)));
        goto LAB_01055815;
      }
      F_00ce1230(piVar3);
    }
    else if ((*(byte *)(piVar3 + 0x12) & 0x20) == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3);
      if ((char)uVar4 != '\0') {
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3);
        if ((char)uVar4 == '\0') goto LAB_0105556b;
        goto LAB_01055633;
      }
    }
    else {
      bVar2 = F_00cc5160(piVar3);
      if (bVar2 != 0) {
        piVar5 = (int *)F_00cc5fc0(piVar3,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
        if (piVar5 != (int *)0x0) {
          piVar3[0x30] = (int)piVar5;
          uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5);
          F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),uVar4,uVar12);
          goto LAB_01055815;
        }
      }
    }
  }
  F_00cbbd70((*(undefined * PTR32 *)&gen_args[1]));
LAB_01055815: ;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf12 */
uint F_01055830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this,param_1,0,0,param_2,2,param_4,param_3,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf15 */
uint F_01055870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this,param_1,param_2,param_3,0,0x11,0,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf14 */
uint F_010558b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x10558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_010554c0(this,param_1,0,0,param_2,0x12,0,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_010558e0 */
uint F_010558e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10558e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf13 */
uint F_01055980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_010554c0(this,param_1,param_2,param_3,0,1,param_5,param_4,param_6,param_7,param_8);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf1 */
unsigned int F_010559c0(unsigned int gen_a0)
{
  GEN_ENTER(0x10559c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(int *)(this + 4) == 0) {
    piVar1 = (int *)F_00d2cce0();
    if (piVar1 == (int *)0x0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined4, 0x15d861c) = ((code *)REFP(0x10558e0));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("pLayout","","SoundDriver.cpp",0xb1,
                      "SQEX::CDev::Engine::Sd::Driver::SoundDriver::CreateDefaultLayoutPage");
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x9c))(piVar1,0);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1,uVar2)));
    *(undefined * PTR32 *)(this + 4) = this_00;
    F_00d05170(this_00,1,1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISoundDriver::vf0 */
uint F_01055a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055af0 */
uint F_01055af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc0) = param_2;
  return param_2;
}

/* ref: FUN_01055b00 */
byte F_01055b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x418) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_01055b40 */
uint F_01055b40(unsigned int gen_a0)
{
  GEN_ENTER(0x1055b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_01055b50 */
uint F_01055b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_01055b60 */
unsigned int F_01055b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x1055b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_6;
  *(undefined4 *)((int)this + 0x2c) = param_7;
  *(undefined4 *)((int)this + 0x30) = param_8;
  *(undefined4 *)((int)this + 0x34) = param_9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf66 */
uint F_01055bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf67 */
uint F_01055bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf39 */
byte F_01055bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf50 */
byte F_01055be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf51 */
byte F_01055bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2d);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf52 */
byte F_01055c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf53 */
byte F_01055c10(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2e);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf58 */
byte F_01055c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf59 */
byte F_01055c30(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2f);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf71 */
uint F_01055c40(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf72 */
uint F_01055c50(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf73 */
uint F_01055c60(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf0 */
uint F_01055c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01055030(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055ca0 */
uint F_01055ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_01055cb0 */
uint F_01055cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00cbe360(in_ecx,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cd0 */
uint F_01055cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00cbe380(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cf0 */
uint F_01055cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  F_00cbe380(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  in_ecx[1] = *(undefined4 *)(param_2 + 4);
  return (uint)in_ecx;
}

/* ref: FUN_01055d30 */
unsigned int F_01055d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_01055d50 */
byte F_01055d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1);
  uVar2 = F_00cbe3e0(param_2);
  return uVar1 == uVar2;
}

/* ref: FUN_01055d70 */
byte F_01055d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1);
  uVar2 = F_00cbe3e0(param_2);
  return uVar1 != uVar2;
}

/* ref: FUN_01055d90 */
uint F_01055d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x10) = param_1;
  }
  return uVar1;
}

/* ref: FUN_01055dd0 */
uint F_01055dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e00 */
uint F_01055e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e30 */
uint F_01055e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e60 */
uint F_01055e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e90 */
uint F_01055e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055ec0 */
uint F_01055ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  while (uVar1 != 0) {
    uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_01055ef0 */
uint F_01055ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f20 */
uint F_01055f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f50 */
uint F_01055f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f80 */
uint F_01055f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055fb0 */
uint F_01055fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBankController::vf0 */
uint F_01055fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  F_00cbe3b0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01056010 */
unsigned int F_01056010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056010u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_01056030 */
unsigned int F_01056030(unsigned int gen_a0)
{
  GEN_ENTER(0x1056030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  iVar2 = 0;
  do {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28))));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28)))) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406810(*(int *)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406810(*(int *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  return 0;
}

/* ref: FUN_010560d0 */
uint F_010560d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10560d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  
  iVar1 = (int)param_3;
  if (2 < iVar1) {
    iVar1 = 2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 4) = **(undefined4 * PTR32 *)(param_1 + 0x2c);
    return param_2;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 4)));
    return param_2;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 8)));
    return param_2;
  }
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf1 */
uint F_01056130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_01056140 */
uint F_01056140(unsigned int gen_a0)
{
  GEN_ENTER(0x1056140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf2 */
uint F_01056150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_01056160 */
uint F_01056160(unsigned int gen_a0)
{
  GEN_ENTER(0x1056160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf5 */
uint F_01056170(unsigned int gen_a0)
{
  GEN_ENTER(0x1056170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: FUN_01056300 */
uint F_01056300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar3 = *(int * PTR32 *)((int)this + 0x28);
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(int *)(*piVar3 + 0x34) == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    uVar2 = 0xffffffff;
  } while ((int)uVar1 < 0x1e);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_01056350 */
uint F_01056350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1056350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint extraout_EAX = 0;
  int iVar2;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar2 = 0;
  do {
    uVar1 = *(uint *)((int)this + 0x28);
    if (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)(iVar2 + uVar1) + 0x34))) != -1) {
      uVar1 = F_010569e0(*(undefined * PTR32 *)(iVar2 + uVar1),param_1,param_2);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf9 */
byte F_010563b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10563b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte extraout_AL = 0;
  byte bVar1;
  byte extraout_AL_00 = 0;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(this + 0x28);
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (*(int *)(*piVar3 + 0x34) == param_1) goto LAB_010563f7;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar4 = -1;
LAB_010563f7: ;
  bVar1 = (byte)iVar2;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  if (iVar4 != -1) {
    bVar1 = F_01056cc0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar4 * 4))));
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL_00;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf3 */
uint F_010564e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10564e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if (0x1e < *(int *)(this + 0x30)) {
    *(undefined4 *)(this + 0x30) = 0;
    uVar1 = F_01056300(this,0);
    if (uVar1 != 0xffffffff) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,*(undefined4 *)(this + 0x30));
    }
  }
  uVar1 = *(uint *)(this + 0x30);
  *(uint *)(this + 0x30) = uVar1 + 1;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  return uVar1;
}

/* ref: FUN_010565e0 */
uint F_010565e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10565e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_01056680 */
uint F_01056680(unsigned int gen_a0)
{
  GEN_ENTER(0x1056680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(undefined4, 0x15d778c),0x1248,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x28) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined4, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4a48),&REFG(undefined, 0x12b49ff),"WhizManager.cpp",0x26,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  else {
    iVar3 = 0;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
      }
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                  (REFG(undefined4, 0x15d778c),0x9c,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10)));
      if (this_00 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_01056b90(this_00,this);
      }
      *((uint *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))) = uVar2;
      F_01056cc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))));
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(undefined4, 0x15d778c),0xc,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x2c) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined4, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4b24),&REFG(undefined, 0x12b4a37),"WhizManager.cpp",0x2e,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  *puVar1 = 0x99;
  puVar1[1] = 0x9a;
  puVar1[2] = 0x9b;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::IWhizManager::vf0 */
uint F_01056840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf4 */
uint F_010568a0(void)
{
  GEN_ENTER(0x10568a0u, 0u, 0u, 0u, 0u);
  return 0x1e;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf0 */
uint F_010568b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10568b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01056030(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010568e0 */
unsigned int F_010568e0(float gen_a0)
{
  GEN_ENTER(0x10568e0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_01056940 */
unsigned int F_01056940(unsigned int gen_a0)
{
  GEN_ENTER(0x1056940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0((int)this + 0x48);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_01056960 */
byte F_01056960(unsigned int gen_a0)
{
  GEN_ENTER(0x1056960u, gen_a0, 0u, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = F_00c51673((double)*in_esi);
  if (iVar1 == 0) {
    iVar1 = F_00c51673((double)in_esi[1]);
    if (iVar1 == 0) {
      iVar1 = F_00c51673((double)in_esi[2]);
      if (iVar1 == 0) {
        iVar1 = F_00c51673((double)in_esi[3]);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_010569e0 */
uint F_010569e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10569e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  HGDIOBJ h;
  HGDIOBJ pvVar3;
  undefined * h_00;
  HGDIOBJ pvVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  ulong color;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = param_2;
  h = gen_imp_GetStockObject(5);
  pvVar3 = gen_imp_SelectObject(param_2,h);
  if (*(char *)((int)this + 0x40) == '\0') {
    color = 0x900000;
  }
  else {
    color = 0x90;
  }
  h_00 = gen_imp_CreatePen(0,1,color);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = h_00;
  pvVar4 = gen_imp_SelectObject(param_2,h_00);
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x28)));
  iVar8 = (*(tagRECT *)(gen_frame + 0x28)).bottom / 2;
  iVar7 = (*(tagRECT *)(gen_frame + 0x28)).right / 2;
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar7 + -300,iVar8 + -300,iVar7 + 300,iVar8 + 300);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar7 + -0x96,iVar8 + -0x96,iVar7 + 0x96,iVar8 + 0x96);
  piVar5 = (int *)F_01056160(*(undefined4 *)((int)this + 0x44));
  ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5,((byte *)(gen_frame + 0x4)) + 0x14);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits(*(float *)((int)this + 0x28));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *(undefined4 *)((int)this + 0x24);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = *(undefined4 *)((int)this + 0x2c);
  fVar9 = (float10)*(float *)((int)this + 0x28) - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits((float)fVar9);
  iVar7 = (int)((float10)*(float *)((int)this + 0x20) - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)))))) * 5 +
          iVar7;
  iVar8 = (int)fVar9 * 5 + iVar8;
  iVar1 = (int)*(float *)((int)this + 0x84);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar7 + iVar1 * -5,iVar8 + iVar1 * -5,iVar1 * 5 + iVar7,
          iVar1 * 5 + iVar8);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16));
  iVar1 = (int)*(float *)((int)this + 0x80);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar7 + iVar1 * -5,iVar8 + iVar1 * -5,iVar1 * 5 + iVar7,
          iVar1 * 5 + iVar8);
  gen_imp_SelectObject(uVar2,pvVar4);
  gen_imp_SelectObject(uVar2,pvVar3);
  gen_imp_DeleteObject((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
  uVar6 = gen_imp_DeleteObject(h);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar6;
}

/* ref: FUN_01056b90 */
uint F_01056b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = param_1;
  F_00cbbd70((int)this + 0x48);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x88) = (float)fVar1;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0((undefined *)((int)this + 0x48),uVar2);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  fVar1 = (float10)0;
  *(float *)((int)this + 0x58) = (float)fVar1;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(float *)((int)this + 0x60) = (float)fVar1;
  *(float *)((int)this + 100) = (float)fVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(float *)((int)this + 0x68) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return (uint)this;
}

/* ref: FUN_01056c50 */
byte F_01056c50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1056c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(float *)(param_1 + 0x80) = param_3;
  *(float *)(param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(float *)(param_1 + 0x88) = (float)(float10)0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined4 *)(param_1 + 0x94) = param_6;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return 1;
}

/* ref: FUN_01056cc0 */
byte F_01056cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x1056cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(float *)((int)this + 0x88) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return 1;
}

/* ref: FUN_01057050 */
unsigned int F_01057050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1057050u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[3];
  fVar2 = param_1[3];
  fVar3 = param_2[1] * param_1[1];
  fVar4 = param_2[2] * param_1[2];
  *param_3 = (fVar4 + *param_2 * *param_1) + fVar3;
  param_3[1] = (fVar4 + fVar3) + fVar3;
  param_3[2] = (fVar4 + fVar4) + fVar3;
  param_3[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return 0;
}

/* ref: FUN_010570f0 */
byte F_010570f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10570f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x40) != '\0') {
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  piVar2 = (int *)F_01056140(*(undefined4 *)((int)this + 0x44));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  bVar1 = F_00cbc040((undefined *)((int)this + 0x48));
  if (bVar1 == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))
                      ((*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x90),
                       *(undefined4 *)((int)this + 0x94),(int)this + 0x20,0,0,0,1);
    F_00cbbdc0((undefined *)((int)this + 0x48),uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)));
    F_00cbd610((undefined *)((int)this + 0x48),((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x14)),(int)this + 0x88,(int)this + 0x8c);
    F_00cbc630((undefined *)((int)this + 0x48),1);
    *(undefined1 *)((int)this + 0x40) = 1;
    F_01056d30(this);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbdf90((int)this + 0x48,(uint)&(*(int * PTR32 *)(gen_frame + 0x18)),0);
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057200 */
uint F_01057200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_010572c0 */
float F_010572c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10572c0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  fVar7 = param_1[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar7;
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x40)) = fVar5;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = fVar7;
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar7 = param_3[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar7;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar7;
  pfVar1 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x20)) = *pfVar1;
  (*(float *)(gen_frame + 0x24)) = pfVar1[1];
  (*(float *)(gen_frame + 0x28)) = pfVar1[2];
  (*(float *)(gen_frame + 0x2c)) = pfVar1[3];
  fVar4 = pfVar1[1] * (*(float *)(gen_frame + 0x40));
  fVar5 = pfVar1[2] * (*(float *)(gen_frame + 0x44));
  fVar8 = (fVar5 + *pfVar1 * (*(float *)(gen_frame + 0x3c))) + fVar4;
  fVar6 = (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40));
  fVar7 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x10)) = fVar8;
  (*(float *)(gen_frame + 0x14)) = (fVar5 + fVar4) + fVar4;
  (*(float *)(gen_frame + 0x18)) = (fVar5 + fVar5) + fVar4;
  (*(float *)(gen_frame + 0x1c)) = (fVar5 + pfVar1[3] * (*(float *)(gen_frame + 0x48))) + fVar4;
  fVar2 = (float10)fVar8;
  fVar4 = SQRT((fVar7 + (*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c))) + fVar6);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = (fVar7 + fVar6) + fVar6;
  (*(float *)(gen_frame + 0x28)) = (fVar7 + fVar7) + fVar6;
  (*(float *)(gen_frame + 0x2c)) = (fVar7 + (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48))) + fVar6;
  fVar3 = (float10)fVar4;
  fVar4 = (float)(fVar2 * fVar2 - fVar3 * fVar3);
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(ABS((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  return fVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizObject::vf0 */
uint F_01057720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0(this + 0x48);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010577a0 */
unsigned int F_010577a0(float gen_a0)
{
  GEN_ENTER(0x10577a0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_010577b0 */
byte F_010577b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10577b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX = 0;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(in_ecx[5] - param_2[5]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(in_ecx[4] - param_2[4]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(in_ecx[6] - param_2[6]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(in_ecx[7] - param_2[7]) < param_3);
  uVar3 = gen_movmskps(&(auVar2));
  if (((byte)uVar3 & 7) != 7) {
    return 0;
  }
  fVar7 = *in_ecx * *param_2;
  fVar8 = in_ecx[1] * param_2[1];
  fVar9 = in_ecx[2] * param_2[2];
  fVar10 = in_ecx[3] * param_2[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_2[1]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) &
                                                  *(uint *)&REFG(undefined, 0x1134c80) ^
                                                  (uint)gen_fl2bits(*param_2))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_2[2]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(in_ecx[3] -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_2[3]))) < param_3);
  iVar4 = gen_movmskps(&(auVar1));
  return iVar4 == 0xf;
}

/* ref: FUN_01057830 */
unsigned int F_01057830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057830u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = gen_bits2f(*param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0));
  fVar4 = gen_bits2f(param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4));
  fVar5 = gen_bits2f(param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8));
  fVar6 = gen_bits2f(param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc));
  *in_ecx = fVar3;
  in_ecx[1] = fVar4;
  in_ecx[2] = fVar5;
  in_ecx[3] = fVar6;
  fVar9 = gen_bits2f(param_2[4]);
  fVar10 = gen_bits2f(param_2[5]);
  fVar1 = gen_bits2f(param_2[6]);
  fVar2 = gen_bits2f(param_2[7]);
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  in_ecx[4] = fVar7;
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar9 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  fVar10 = gen_bits2f((uint)gen_fl2bits(fVar10) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
  in_ecx[4] = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  return 0;
}

/* ref: FUN_010578d0 */
unsigned int F_010578d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10578d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar13 = param_1[3];
  fVar12 = *(float *)(param_2 + 2);
  fVar4 = *(float *)((int)param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 3);
  fVar6 = *(float *)((int)param_2 + 0x1c);
  fVar7 = fVar12 * fVar1;
  fVar8 = fVar4 * fVar2;
  fVar9 = fVar5 * fVar3;
  fVar10 = (((fVar8 + fVar7) + fVar9) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar12)
           + (fVar5 * fVar2 - fVar4 * fVar3) * fVar13;
  fVar11 = (((fVar8 + fVar7) + fVar9) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar4)
           + (fVar12 * fVar3 - fVar5 * fVar1) * fVar13;
  fVar12 = (((fVar8 + fVar7) + fVar9) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar5)
           + (fVar4 * fVar1 - fVar12 * fVar2) * fVar13;
  fVar13 = (((fVar8 + fVar7) + fVar9) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar6)
           + (fVar6 * fVar13 - fVar6 * fVar13) * fVar13;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  *(float *)((int)this + 0x10) = (fVar10 + fVar10) + param_1[4];
  *(float *)((int)this + 0x14) = (fVar11 + fVar11) + fVar1;
  *(float *)((int)this + 0x18) = (fVar12 + fVar12) + fVar2;
  *(float *)((int)this + 0x1c) = (fVar13 + fVar13) + fVar3;
  fVar1 = *(float *)((int)param_2 + 0xc);
  local_20 = gen_bits2f((uint)*(undefined8 *)param_1);
  fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_1) >> 0x20));
  fStack_18 = gen_bits2f((uint)*(undefined8 *)(param_1 + 2));
  local_30 = gen_bits2f((uint)*param_2);
  fStack_2c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_28 = gen_bits2f((uint)param_2[1]);
  fVar2 = param_1[3];
  *(float *)this =
       ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar2) + local_20 * fVar1;
  *(float *)((int)this + 4) =
       ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar2) + fStack_1c * fVar1;
  *(float *)((int)this + 8) =
       ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar2) + fStack_18 * fVar1;
  *(float *)((int)this + 0xc) =
       fVar1 * fVar2 - ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
  return 0;
}

/* ref: FUN_01059190 */
uint F_01059190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_010591b0 */
unsigned int F_010591b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  fVar2 = param_2[2] * param_1[2] + *param_2 * *param_1;
  fVar3 = param_2[3] * param_1[3] + param_2[1] * param_1[1];
  fVar4 = *param_2 * *param_1 + param_2[2] * param_1[2];
  fVar5 = param_2[1] * param_1[1] + param_2[3] * param_1[3];
  uVar6 = (uint)gen_fl2bits(fVar2 + fVar3) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar7 = (uint)gen_fl2bits(fVar5 + fVar4) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar8 = (uint)gen_fl2bits(fVar4 + fVar5) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar1 = param_1[3];
  *(uint *)this =
       (uint)gen_fl2bits(fVar3 + fVar2) & *(uint *)&REFG(undefined, 0x1134c80) ^ (uint)gen_fl2bits(*param_1);
  *(uint *)((int)this + 4) = uVar6 ^ (uint)gen_fl2bits(fVar4);
  *(uint *)((int)this + 8) = uVar7 ^ (uint)gen_fl2bits(fVar5);
  *(uint *)((int)this + 0xc) = uVar8 ^ (uint)gen_fl2bits(fVar1);
  return 0;
}

/* ref: FUN_010591f0 */
byte F_010591f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 in_EDX = 0;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x14) - param_1[5]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x10) - param_1[4]) < *param_2);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x18) - param_1[6]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(*(float *)((int)this + 0x1c) - param_1[7]) < param_2[3]);
  uVar4 = gen_movmskps(&(auVar2));
  if (((byte)uVar4 & 7) != 7) {
    return 0;
  }
  fVar7 = *(float *)this * *param_1;
  fVar8 = *(float *)((int)this + 4) * param_1[1];
  fVar9 = *(float *)((int)this + 8) * param_1[2];
  fVar10 = *(float *)((int)this + 0xc) * param_1[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_1[1]))) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this -
                             gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) & *(uint *)&REFG(undefined, 0x1134c80) ^
                                        (uint)gen_fl2bits(*param_1))) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_1[2]))) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(*(float *)((int)this + 0xc) -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_1[3]))) < param_2[3]);
  iVar3 = gen_movmskps(&(auVar1));
  return iVar3 == 0xf;
}

/* ref: FUN_01059630 */
uint F_01059630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_01059650 */
uint F_01059650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_1;
  if (this_00 != (undefined *)0x0) {
    F_00d919e0(this_00);
  }
  *(undefined * PTR32 *)this = this_00;
  return (uint)this;
}

/* ref: FUN_01059680 */
unsigned int F_01059680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_010596b0 */
uint F_010596b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10596b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e4030) + 0x14))))(REFG(undefined4, 0x15e4030),*(int *)this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_010596d0 */
uint F_010596d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10596d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_00d919e0(param_1);
  return (uint)this;
}

/* ref: FUN_01059700 */
unsigned int F_01059700(unsigned int gen_a0)
{
  GEN_ENTER(0x1059700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_01059720 */
uint F_01059720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_01059750 */
uint F_01059750(unsigned int gen_a0)
{
  GEN_ENTER(0x1059750u, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi,0x40);
  uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,((char *)(gen_frame + 0xc)),0x40);
  if (uVar2 == 0) {
    return 0;
  }
  do {
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
        if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
          ((code *)*(gen_code32 *)(*in_edi + 0x20))(in_edi);
          uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x14))(in_edi,iVar3);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    ((code *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi,0x40);
    uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,((char *)(gen_frame + 0xc)),0x40);
    if (uVar2 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_01059960 */
float10 F_01059960(unsigned int gen_a0)
{
  GEN_ENTER(0x1059960u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  F_01059750(in_eax);
  iVar3 = 0;
  ((code *)*(gen_code32 *)(*in_eax + 0x1c))(in_eax,0xff);
  uVar2 = ((code *)*(gen_code32 *)(*in_eax + 0x10))(in_eax,((char *)(gen_frame + 0xc)),0xff);
  if ((uVar2 != 0) &&
     ((((('/' < ((char *)(gen_frame + 0xc))[0] && (((char *)(gen_frame + 0xc))[0] < ':')) || (((char *)(gen_frame + 0xc))[0] == '+')) ||
       (((((char *)(gen_frame + 0xc))[0] == '-' || (((char *)(gen_frame + 0xc))[0] == '.')) || (((char *)(gen_frame + 0xc))[0] == ',')))) &&
      (iVar3 = 1, 1 < (int)uVar2)))) {
    do {
      cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
      if (((cVar1 < '0') || ('9' < cVar1)) &&
         ((cVar1 != '+' && (((cVar1 != '-' && (cVar1 != 'E')) && (cVar1 != 'e')))))) {
        if (cVar1 != '.') {
          if (cVar1 == ',') goto LAB_010599ff;
          break;
        }
LAB_01059a09: ;
        ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '.';
      }
      else {
LAB_010599ff: ;
        if ((cVar1 == '.') || (cVar1 == ',')) goto LAB_01059a09;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  ((code *)*(gen_code32 *)(*in_eax + 0x20))(in_eax);
  ((code *)*(gen_code32 *)(*in_eax + 0x14))(in_eax,iVar3);
  ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '\0';
  if (iVar3 < 1) {
    return (float10)REFG(float, 0x1090708);
  }
  dVar4 = F_00c52474(((char *)(gen_frame + 0xc)),0);
  return (float10)dVar4;
}

/* ref: FUN_01059a60 */
uint F_01059a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),6);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x4)),6);
  if (3 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined1, 0x113bf28),4);
    if ((uVar2 == 0) &&
       ((((uVar1 == 4 || ((*(char *)(gen_frame + 0x8)) == ' ')) || ((*(char *)(gen_frame + 0x8)) == '\t')) ||
        (((*(char *)(gen_frame + 0x8)) == '\r' || ((*(char *)(gen_frame + 0x8)) == '\n')))))) {
      *param_1 = 1;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8),4);
      return (uint)this;
    }
  }
  if (4 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),"false",4);
    if ((uVar2 == 0) &&
       (((uVar1 == 5 || ((*(char *)(gen_frame + 0x9)) == ' ')) ||
        (((*(char *)(gen_frame + 0x9)) == '\t' || (((*(char *)(gen_frame + 0x9)) == '\r' || ((*(char *)(gen_frame + 0x9)) == '\n')))))))) {
      *param_1 = 0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8),5);
      return (uint)this;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_01059b60 */
uint F_01059b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),param_1,1);
  return (uint)this;
}

/* ref: FUN_01059b80 */
uint F_01059b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (float)fVar1;
  return (uint)this;
}

/* ref: FUN_01059ba0 */
uint F_01059ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double * param_1 = (double *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (double)fVar1;
  return (uint)this;
}

/* ref: FUN_01059bc0 */
uint F_01059bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1059bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  uVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
      if ((uVar1 == 0xffffffff) || (uVar1 == (int)(char)param_3)) {
        *(undefined1 *)(uVar2 + param_1) = 0;
        return uVar2;
      }
      *(char *)(uVar2 + param_1) = (char)uVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_2);
  }
  return 0xffffffff;
}

/* ref: FUN_01059c20 */
uint F_01059c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1059c20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_01059c30 */
uint F_01059c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0xc))))(REFG(undefined4, 0x15dffa8),param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_01059c60 */
uint F_01059c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059cb0 */
uint F_01059cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d00 */
uint F_01059d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d40 */
uint F_01059d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d80 */
uint F_01059d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059dc0 */
uint F_01059dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059e00 */
uint F_01059e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00d93630(this_00,param_1,param_2,2);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059e60 */
uint F_01059e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x18)));
  *(undefined2 *)((int)this_00 + 4) = 0x18;
  uVar2 = F_00db9820(this_00,param_1,2,0);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059eb0 */
uint F_01059eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  F_00da4850(param_1);
  piVar1 = (int *)F_00da4200(param_1);
  F_01059750(*(undefined4 *)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),1);
  uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
  while ((((uVar2 != 0xffffffff && (uVar2 != 0x20)) && (uVar2 != 9)) &&
         ((uVar2 != 0xd && (uVar2 != 10))))) {
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
    }
    *(char *)(piVar1[1] + *piVar1) = (char)uVar2;
    piVar1[1] = piVar1[1] + 1;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),1);
    uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
  }
  *(undefined1 *)(piVar1[1] + *piVar1) = 0;
  piVar1[1] = piVar1[1] + 1;
  return (uint)this;
}

/* ref: FUN_01059f90 */
uint F_01059f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  F_01059eb0(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d91520(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)this;
}

/* ref: FUN_0105a020 */
uint F_0105a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a060 */
uint F_0105a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a0a0 */
uint F_0105a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a0d0 */
uint F_0105a0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a100 */
uint F_0105a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_0105a130 */
uint F_0105a130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_0105a160 */
uint F_0105a160(unsigned int gen_a0)
{
  GEN_ENTER(0x105a160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_0105a190 */
uint F_0105a190(unsigned int gen_a0)
{
  GEN_ENTER(0x105a190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_0105a1c0 */
uint F_0105a1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x105a1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkIstream::vf0 */
uint F_0105a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_01059700(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105a230 */
uint F_0105a230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_0105a270 */
uint F_0105a270(void)
{
  GEN_ENTER(0x105a270u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x20)));
  puVar2[1] = 0x10020;
  *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  puVar2[2] = "hk_2011.3.1-r1";
  F_00da3de0(puVar2 + 3,0);
  *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  return (uint)puVar2;
}

/* ref: FUN_0105a2c0 */
uint F_0105a2c0(void)
{
  GEN_ENTER(0x105a2c0u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x20)));
  puVar2[1] = 0x10020;
  *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(puVar2 + 2,0);
  puVar2[6] = 1;
  puVar2[7] = 1;
  return (uint)puVar2;
}

/* ref: FUN_0105a320 */
unsigned int F_0105a320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (*param_1 != 0) {
    piVar2 = param_1;
    do {
      iVar1 = *((int *)GEN_TOP(((param_2 - (int)param_1) + (int)piVar2)));
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(*piVar2 + 0x10) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,*(int *)(*piVar2 + 0x10),iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
  }
  return 0;
}

/* ref: hkVtableClassRegistry::vf3 */
uint F_0105a360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 8,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105a380 */
unsigned int F_0105a380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar1) {
    piVar2 = *(int * PTR32 *)(param_1 + 8);
    do {
      if (*piVar2 != -1) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 <= iVar1);
  }
  if (iVar3 <= iVar1) {
    do {
      F_00dbd8b0((undefined *)((int)this + 8),&REFG(undefined * PTR32, 0x13516ac),
                   *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3 * 8))),
                   *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4 + iVar3 * 8))));
      iVar1 = *(int *)(param_1 + 0x10);
      iVar3 = iVar3 + 1;
      if (iVar3 <= iVar1) {
        piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 8) + iVar3 * 8)));
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 <= iVar1);
      }
    } while (iVar3 <= iVar1);
  }
  return 0;
}

/* ref: FUN_0105a400 */
uint F_0105a400(void)
{
  GEN_ENTER(0x105a400u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  puVar2[1] = 0x10014;
  *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x114c54c));
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  return (uint)puVar2;
}

/* ref: FUN_0105a440 */
uint F_0105a440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a440u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105a450 */
uint F_0105a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105a470 */
uint F_0105a470(unsigned int gen_a0)
{
  GEN_ENTER(0x105a470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (0x14 < iVar1) {
    return 0;
  }
  F_00da0e40(((undefined1 *)(gen_frame + 0x4)),*(int *)this,iVar1);
  ((undefined1 *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 4) - *(int *)this)] = 0;
  uVar2 = F_00da0e80(((undefined1 *)(gen_frame + 0x4)),10);
  return uVar2;
}

/* ref: FUN_0105a4c0 */
uint F_0105a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00da0140(param_1);
  return (uint)param_1;
}

/* ref: FUN_0105a510 */
uint F_0105a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  uVar1 = F_00da0e60(param_1);
  *(uint *)((int)this + 4) = uVar1 + *(int *)this;
  return uVar1 + *(int *)this;
}

/* ref: FUN_0105a540 */
uint F_0105a540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * pcVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (char *)*param_2;
  pcVar3 = *(char * PTR32 *)this;
  if (pcVar3 == pcVar1) {
    *param_1 = *(int *)((int)this + 4) == param_2[1];
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 4) - (int)pcVar3;
  if (iVar2 != param_2[1] - (int)pcVar1) {
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar5 = (int)pcVar1 - (int)pcVar3;
    do {
      if (*pcVar3 != pcVar3[iVar5]) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 < iVar2);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105a5b0 */
uint F_0105a5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  char * pcVar2;
  
  pcVar1 = *(char * PTR32 *)this;
  for (pcVar2 = param_2; (pcVar1 < *(char * PTR32 *)((int)this + 4) && (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if (*pcVar1 != *pcVar2) {
      *param_1 = 0;
      return (uint)param_1;
    }
    pcVar1 = pcVar1 + 1;
  }
  if ((pcVar1 == *(char * PTR32 *)((int)this + 4)) && (*pcVar2 == '\0')) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0105a600 */
uint F_0105a600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char * pcVar1;
  char * pcVar2;
  int iVar4;
  char * pcVar5;
  int iVar6;
  int iVar3;
  
  pcVar1 = *(char * PTR32 *)this;
  pcVar5 = (char *)*param_1;
  iVar6 = *(int *)((int)this + 4) - (int)pcVar1;
  iVar4 = param_1[1] - (int)pcVar5;
  iVar3 = iVar6;
  if (iVar4 <= iVar6) {
    iVar3 = iVar4;
  }
  pcVar2 = pcVar1 + iVar3;
  do {
    if (pcVar2 <= pcVar1) {
LAB_0105a637: ;
      if (iVar6 == iVar4) {
        return 0;
      }
      return (uint)(iVar4 <= iVar6) * 2 - 1;
    }
    if (*pcVar1 != *pcVar5) {
      if (pcVar1 < pcVar2) {
        return (uint)(*pcVar5 <= *pcVar1) * 2 - 1;
      }
      goto LAB_0105a637;
    }
    pcVar1 = pcVar1 + 1;
    pcVar5 = pcVar5 + 1;
  } while( true );
}

/* ref: FUN_0105a660 */
uint F_0105a660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  *(uint *)((int)this + 4) = param_2;
  *(uint *)this = (uint)uVar1 + param_1;
  return param_2;
}

/* ref: FUN_0105a680 */
uint F_0105a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = F_00d928d0(param_2,param_3);
  *(uint *)((int)this + 4) = uVar1;
  if (uVar1 != 0) {
    *(uint *)this = (uint)*(ushort *)(uVar1 + 0x12) + param_1;
  }
  return uVar1;
}

/* ref: FUN_0105a6b0 */
uint F_0105a6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  
  F_0105a660(this,param_1,param_2);
  return ((uint)(uint)(this));
}

/* ref: FUN_0105a6d0 */
uint F_0105a6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105a680(this,*param_1,param_1[1],param_2);
  return (uint)this;
}

/* ref: FUN_0105a700 */
uint F_0105a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105a700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0105a680(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_0105a720 */
uint F_0105a720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a720u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_0105a740 */
uint F_0105a740(unsigned int gen_a0)
{
  GEN_ENTER(0x105a740u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0105a750 */
uint F_0105a750(unsigned int gen_a0)
{
  GEN_ENTER(0x105a750u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0105a760 */
uint F_0105a760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a770 */
uint F_0105a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a780 */
uint F_0105a780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a780u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a790 */
uint F_0105a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a7a0 */
uint F_0105a7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7b0 */
uint F_0105a7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a7c0 */
uint F_0105a7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7d0 */
uint F_0105a7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7e0 */
uint F_0105a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a7f0 */
uint F_0105a7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a800 */
uint F_0105a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a800u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a810 */
uint F_0105a810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a810u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a820 */
uint F_0105a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a830 */
uint F_0105a830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a840 */
uint F_0105a840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a840u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a850 */
uint F_0105a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a850u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_0105a860 */
uint F_0105a860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_0105a880 */
uint F_0105a880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a880u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_0105a890 */
uint F_0105a890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_0105a8b0 */
uint F_0105a8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a8c0 */
uint F_0105a8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_0105a8e0 */
uint F_0105a8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a8f0 */
uint F_0105a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x105a8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0105a900 */
uint F_0105a900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da5fc0(*(undefined4 *)((int)this + 4));
  F_0105a700(param_1,*(undefined4 *)this,uVar1,param_2);
  return (uint)param_1;
}

/* ref: FUN_0105a930 */
uint F_0105a930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0105a950 */
uint F_0105a950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0105a970 */
uint F_0105a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da5fc0(*(undefined4 *)((int)this + 4));
  F_0105a930(param_1,*(undefined4 *)this,uVar1);
  return (uint)param_1;
}

/* ref: hkOffsetOnlyStreamWriter::vf4 */
unsigned int F_0105a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(int *)(this + 8) = *(int *)(this + 8) + param_2;
  if (*(int *)(this + 0xc) < *(int *)(this + 8)) {
    *(int *)(this + 0xc) = *(int *)(this + 8);
    return 0;
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc);
  return 0;
}

/* ref: hkOffsetOnlyStreamWriter::vf7 */
uint F_0105a9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(int *)(this + 8) = *(int *)(this + 8) + param_1;
      goto LAB_0105a9f7;
    }
    if (param_2 != 2) goto LAB_0105a9f7;
    iVar1 = *(int *)(this + 0xc) - param_1;
  }
  *(int *)(this + 8) = iVar1;
LAB_0105a9f7: ;
  if (*(int *)(this + 8) <= *(int *)(this + 0xc)) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc);
    return 0;
  }
  *(int *)(this + 0xc) = *(int *)(this + 8);
  return 0;
}

/* ref: hkOffsetOnlyStreamWriter::vf8 */
uint F_0105aa20(unsigned int gen_a0)
{
  GEN_ENTER(0x105aa20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_0105aa30 */
uint F_0105aa30(unsigned int gen_a0)
{
  GEN_ENTER(0x105aa30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x12b4d0c));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: hkOffsetOnlyStreamWriter::vf3 */
uint F_0105aa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105aa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkOffsetOnlyStreamWriter::vf6 */
uint F_0105aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105aa70 */
uint F_0105aa70(unsigned int gen_a0)
{
  GEN_ENTER(0x105aa70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkOffsetOnlyStreamWriter::vf0 */
uint F_0105aaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105aaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105aaf0 */
byte F_0105aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105aaf0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab00 */
ushort F_0105ab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab00u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = *in_ecx | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0105ab10 */
ushort F_0105ab10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab10u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = *in_ecx & (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0105ab20 */
uint F_0105ab20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105ab20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105ab30 */
byte F_0105ab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab40 */
byte F_0105ab40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab50 */
unsigned int F_0105ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x105ab50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(char *)(param_1 + 0xc) == '\x14') && (*(char *)(param_1 + 0xd) == '\x02')) {
    *(undefined2 *)(param_1 + 0xc) = 0x1d;
  }
  return 0;
}

/* ref: FUN_0105ab70 */
unsigned int F_0105ab70(unsigned int gen_a0)
{
  GEN_ENTER(0x105ab70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (*(char *)(param_1 + 0xc) == '\x13') {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x400;
  }
  if ((*(char *)(param_1 + 0xc) == '\x18') || (*(char *)(param_1 + 0xc) == '\x1f')) {
    if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfff7;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffef;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffdf;
    }
  }
  return 0;
}

/* ref: FUN_0105abe0 */
uint F_0105abe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105abe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  int iVar3;
  
  uVar1 = F_00dbd970(param_2,param_1,0);
  in_ecx = param_1;
  while( true ) {
    if ((param_3 & uVar1) != 0) {
      return uVar1;
    }
    F_00dbd8b0(param_2,&REFG(undefined * PTR32, 0x13516ac),in_ecx,uVar1 | param_3);
    uVar1 = F_00d92850(in_ecx);
    if (0 < (int)uVar1) {
      iVar3 = 0;
      do {
        uVar1 = F_00d92860(in_ecx,iVar3);
        uVar2 = F_00da5fd0(uVar1);
        if (uVar2 != 0) {
          F_0105abe0(uVar2,param_2,param_3,param_4);
        }
        (*param_4)(uVar1);
        iVar3 = iVar3 + 1;
        uVar1 = F_00d92850(in_ecx);
      } while (iVar3 < (int)uVar1);
    }
    uVar1 = F_00d92630(in_ecx);
    if (uVar1 == 0) break;
    in_ecx = F_00d92630(in_ecx);
    uVar1 = F_00dbd970(param_2,in_ecx,0);
  }
  return 0;
}

/* ref: FUN_0105ac90 */
uint F_0105ac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ac90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint in_ecx;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar2 = F_00dbd970(param_2,param_1,0);
  in_ecx = param_1;
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return uVar2;
    }
    F_00dbd8b0(param_2,&REFG(undefined * PTR32, 0x13516ac),in_ecx,uVar2 | 1);
    uVar2 = F_00d928d0(&REFG(undefined, 0x15e4034),"hasVtable");
    uVar4 = (uint)*(ushort *)(uVar2 + 0x12);
    uVar3 = F_00d92630(in_ecx);
    uVar2 = in_ecx;
    while (uVar3 != 0) {
      *(undefined4 *)(uVar2 + uVar4) = 0;
      uVar2 = F_00d92630(uVar2);
      uVar3 = F_00d92630(uVar2);
    }
    if (*(char *)(uVar2 + uVar4) != '\0') {
      uVar3 = F_00d928d0(&REFG(undefined, 0x15e4034),"numImplementedInterfaces");
      piVar1 = ((int *)GEN_TOP((*(ushort *)(uVar3 + 0x12) + uVar2)));
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(uVar2 + uVar4) = 0;
    iVar5 = 0;
    uVar2 = F_00d92850(in_ecx);
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92860(in_ecx,iVar5);
        if (*(int *)(uVar2 + 4) != 0) {
          pvVar6 = param_2;
          uVar2 = F_00da5fc0(uVar2);
          F_0105ac90(uVar2,pvVar6);
        }
        iVar5 = iVar5 + 1;
        uVar2 = F_00d92850(in_ecx);
      } while (iVar5 < (int)uVar2);
    }
    uVar2 = F_00d92630(in_ecx);
    if (uVar2 == 0) break;
    in_ecx = F_00d92630(in_ecx);
    uVar2 = F_00dbd970(param_2,in_ecx,0);
  }
  return 0;
}

/* ref: FUN_0105ad90 */
uint F_0105ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00dbd970(in_edi,in_eax,0);
  if ((uVar1 & 4) == 0) {
    F_00dbd8b0(in_edi,&REFG(undefined * PTR32, 0x13516ac),in_eax,uVar1 | 4);
    pcVar3 = "hkpConstraintInstance";
    uVar1 = F_00d92610(in_eax);
    uVar1 = F_00da0d20(uVar1,pcVar3);
    if (uVar1 == 0) {
      uVar2 = F_00d92860(in_eax,2);
      uVar1 = F_00d92800(&REFG(undefined, 0x15da2a0),4);
      uVar1 = (uint)*(ushort *)(uVar1 + 0x12);
      *(undefined1 *)(uVar1 + uVar2) = 0x19;
    }
  }
  return uVar1;
}

/* ref: FUN_0105adf0 */
unsigned int F_0105adf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105adf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 1) {
    F_0105ac90(param_1,param_2);
    F_0105ad90(param_1,param_2);
  }
  else if (3 < param_3) goto LAB_0105ae2d;
  F_0105abe0(param_1,param_2,2,((code *)REFP(0x105ab50)));
LAB_0105ae2d: ;
  if (param_3 < 5) {
    F_0105abe0(param_1,param_2,8,((code *)REFP(0x105ab70)));
  }
  return 0;
}

/* ref: FUN_0105ae50 */
uint F_0105ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ae50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  for (; iVar1 != 0; iVar1 = param_1[iVar1]) {
    F_0105adf0(iVar1,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
  }
  uVar2 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar2;
}

/* ref: FUN_0105afb0 */
unsigned int F_0105afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x105afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8));
  return 0;
}

/* ref: FUN_0105afc0 */
uint F_0105afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8),param_1);
  return param_1;
}

/* ref: FUN_0105aff0 */
uint F_0105aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d919e0(param_1);
  uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  return uVar1;
}

/* ref: FUN_0105b020 */
uint F_0105b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  F_00d919e0(param_1);
  return (uint)this;
}

/* ref: FUN_0105b050 */
uint F_0105b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0xc))))(REFG(undefined4, 0x15dffa8),param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_0105b090 */
unsigned int F_0105b090(unsigned int gen_a0)
{
  GEN_ENTER(0x105b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_0105b0f0 */
uint F_0105b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00d93630(this_00,param_1,param_2,2);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_0105b150 */
uint F_0105b150(unsigned int gen_a0)
{
  GEN_ENTER(0x105b150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkIArchive::vf0 */
uint F_0105b180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_0105b090(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105b1c0 */
uint F_0105b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b1c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(int *)&gen_args[0]) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_0105b1e0 */
uint F_0105b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105b1f0 */
byte F_0105b1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_0105b200 */
byte F_0105b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 == param_2;
}

/* ref: FUN_0105b210 */
uint F_0105b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b220 */
uint F_0105b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b280 */
uint F_0105b280(unsigned int gen_a0)
{
  GEN_ENTER(0x105b280u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b2a0 */
uint F_0105b2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b2b0 */
uint F_0105b2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b310 */
uint F_0105b310(unsigned int gen_a0)
{
  GEN_ENTER(0x105b310u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b330 */
uint F_0105b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b340 */
uint F_0105b340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b3a0 */
uint F_0105b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b3a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b3c0 */
uint F_0105b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b3c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105b3d0 */
uint F_0105b3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_0105b400 */
unsigned int F_0105b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_0105b430 */
uint F_0105b430(unsigned int gen_a0)
{
  GEN_ENTER(0x105b430u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

/* ref: FUN_0105b450 */
unsigned int F_0105b450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0105b490 */
int F_0105b490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = 0;
  iVar2 = *(int *)(iVar1 + uVar4 * 8);
  while (iVar2 != -1) {
    if ((iVar2 == param_1) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

/* ref: FUN_0105b4e0 */
int F_0105b4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = 0;
  iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  while (iVar1 != -1) {
    if (iVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return iVar2;
}

/* ref: FUN_0105b540 */
uint F_0105b540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105b550 */
uint F_0105b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_0105b560 */
uint F_0105b560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_0105b580 */
uint F_0105b580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_0105b5d0 */
unsigned int F_0105b5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0105b600 */
uint F_0105b600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b600u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_0105b620 */
unsigned int F_0105b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105b8f0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105b680 */
uint F_0105b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar3 = param_1 * -0x61c8864f & uVar1;
  iVar2 = *(int *)(*(int *)this + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return uVar1 + 1;
    }
    if (iVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    iVar2 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return uVar3;
}

/* ref: FUN_0105b6c0 */
uint F_0105b6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)this;
  uVar4 = param_1 * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(int *)(iVar2 + uVar4 * 8) == param_1) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_2))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

/* ref: FUN_0105b700 */
uint F_0105b700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return param_2;
    }
    if (iVar2 == param_1) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  return *(uint *)(iVar1 + 4 + uVar3 * 8);
}

/* ref: FUN_0105b750 */
uint F_0105b750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b680(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105b780 */
unsigned int F_0105b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 8);
  iVar1 = *(int *)this;
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  uVar6 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = *(int *)(iVar1 + uVar3 * 8) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar6 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar6 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + uVar3 * 8) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return 0;
}

/* ref: FUN_0105b830 */
uint F_0105b830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      iVar3 = *(int *)(iVar2 + iVar6 * 8);
      if (iVar3 != -1) {
        uVar5 = iVar3 * -0x61c8864f & uVar1;
        iVar4 = *(int *)(iVar2 + uVar5 * 8);
        while (iVar4 != iVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          iVar4 = *(int *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105b870 */
unsigned int F_0105b870(unsigned int gen_a0)
{
  GEN_ENTER(0x105b870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105b8a0 */
unsigned int F_0105b8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_0105b8d0 */
uint F_0105b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

/* ref: FUN_0105b8f0 */
uint F_0105b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 8);
  if (uVar4 == 0) {
    return 1;
  }
  *(uint *)this = uVar4;
  iVar5 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 8) = 0xffffffff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  *(int *)((int)this + 8) = param_1 + -1;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(iVar2 + iVar5 * 8);
      if (iVar3 != -1) {
        F_0105b620(this,iVar3,*(undefined4 *)(iVar2 + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar2,iVar6 * 8);
  }
  return 0;
}

/* ref: FUN_0105b9e0 */
uint F_0105b9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + param_1 * 0x10);
}

/* ref: FUN_0105ba00 */
uint F_0105ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + 8 + param_1 * 0x10);
}

/* ref: FUN_0105ba20 */
uint F_0105ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = param_3;
  return param_1 * 2;
}

/* ref: FUN_0105ba40 */
uint F_0105ba40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105ba40u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_0105ba70 */
unsigned int F_0105ba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ba70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_0105baa0 */
uint F_0105baa0(unsigned int gen_a0)
{
  GEN_ENTER(0x105baa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 5;
}

/* ref: FUN_0105bac0 */
uint F_0105bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_0105bae0 */
uint F_0105bae0(unsigned int gen_a0)
{
  GEN_ENTER(0x105bae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105baf0 */
uint F_0105baf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105baf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[2]);
}

/* ref: FUN_0105bb10 */
uint F_0105bb10(unsigned int gen_a0)
{
  GEN_ENTER(0x105bb10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105bb30 */
uint F_0105bb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1])) != 0xffffffff) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb50 */
uint F_0105bb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105bb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb70 */
uint F_0105bb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bb90 */
uint F_0105bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b680(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105bbb0 */
uint F_0105bbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbd0 */
uint F_0105bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbf0 */
unsigned int F_0105bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0105bc30 */
unsigned int F_0105bc30(unsigned int gen_a0)
{
  GEN_ENTER(0x105bc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,*(int *)((int)this + 8) * 8 + 8);
  }
  return 0;
}

/* ref: FUN_0105bc60 */
int F_0105bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  while (uVar2 != 0xffffffff) {
    if ((uVar2 == param_1) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

/* ref: FUN_0105bcb0 */
int F_0105bcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = 0;
  uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  while (uVar1 != 0xffffffff) {
    if (uVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return iVar2;
}

/* ref: FUN_0105bcf0 */
unsigned int F_0105bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105bd60 */
uint F_0105bd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return uVar1 + 1;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return uVar3;
}

/* ref: FUN_0105bda0 */
uint F_0105bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(uint *)(iVar2 + uVar4 * 8) == param_1) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_2))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

/* ref: FUN_0105bde0 */
uint F_0105bde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return param_2;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  }
  return *(uint *)(iVar1 + 4 + uVar3 * 8);
}

/* ref: FUN_0105be30 */
uint F_0105be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105be30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105be60 */
unsigned int F_0105be60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  iVar1 = *(int *)this;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  uVar6 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = (*(uint *)(iVar1 + uVar3 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar6 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar6 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + uVar3 * 8) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return 0;
}

/* ref: FUN_0105bf10 */
uint F_0105bf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105bf60 */
unsigned int F_0105bf60(unsigned int gen_a0)
{
  GEN_ENTER(0x105bf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105bf90 */
uint F_0105bf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 8);
  if (uVar4 == 0) {
    return 1;
  }
  *(uint *)this = uVar4;
  iVar5 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 8) = 0xffffffff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  *(int *)((int)this + 8) = param_1 + -1;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(iVar2 + iVar5 * 8);
      if (iVar3 != -1) {
        F_0105bcf0(this,iVar3,*(undefined4 *)(iVar2 + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar2,iVar6 * 8);
  }
  return 0;
}

/* ref: FUN_0105c050 */
uint F_0105c050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105b870(this);
  return (uint)this;
}

/* ref: FUN_0105c120 */
uint F_0105c120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(int *)(iVar3 + iVar2) == param_1) {
      F_0105b780(this,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105c1a0 */
uint F_0105c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105b8f0(this,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105c220 */
unsigned int F_0105c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105b8f0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(int *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(int *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(int *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105c290 */
uint F_0105c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b6c0(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c2d0 */
uint F_0105c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105b680(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c300 */
uint F_0105c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105b8f0(this,iVar1);
  return uVar2;
}

/* ref: FUN_0105c330 */
unsigned int F_0105c330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar3 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar3 + 4 + iVar1) = 0xffffffff;
      iVar3 = iVar3 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0105c370 */
uint F_0105c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  iVar1 = *(int *)this;
  local_8 = 0;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    iVar3 = uVar4 * 0x10;
    uVar2 = *(uint *)(iVar3 + 4 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & uVar2) == 0xffffffff) break;
    if ((((*(uint *)(iVar3 + iVar1) == param_1) && (uVar2 == param_2)) &&
        (*(int *)(iVar3 + iVar1 + 8) == param_3)) && (*(int *)(iVar3 + iVar1 + 0xc) == param_4)) {
      local_8 = local_8 + 1;
    }
    uVar4 = uVar4 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c3e0 */
uint F_0105c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  local_8 = 0;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      local_8 = local_8 + 1;
    }
    uVar3 = uVar3 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c470 */
uint F_0105c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      puVar3 = (uint *)(uVar2 * 0x10 + *(int *)this);
      do {
        if ((*puVar3 & puVar3[1]) == 0xffffffff) {
          return iVar1 + 1;
        }
        if ((*puVar3 == param_2) && (puVar3[1] == param_3)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 4;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_0105c4d0 */
unsigned int F_0105c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint * puVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    puVar2 = (uint *)(iVar1 * 0x10 + *(int *)this);
    do {
      if ((*puVar2 & puVar2[1]) != 0xffffffff) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0105c500 */
unsigned int F_0105c500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return 0;
}

/* ref: FUN_0105c580 */
uint F_0105c580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((uVar1 == param_1) && (uVar2 == param_2)) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

/* ref: FUN_0105c5d0 */
uint F_0105c5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar2 = uVar2 & *(uint *)((int)this + 8);
    iVar3 = uVar2 * 0x10;
    puVar4 = (uint *)(iVar3 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & *(uint *)(iVar3 + 4 + iVar1)) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((((*puVar4 == param_1) && (puVar4[1] == param_2)) && (puVar4[2] == param_3)) &&
       (puVar4[3] == param_4)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_0105c630 */
uint F_0105c630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 & uVar3) == 0xffffffff) {
      return param_3;
    }
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    uVar4 = uVar4 + 1;
  }
  return *(uint *)(iVar1 + 8 + uVar4 * 0x10);
}

/* ref: FUN_0105c690 */
uint F_0105c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0105c580(this,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c6d0 */
unsigned int F_0105c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = 0xffffffff;
  uVar4 = *(uint *)((int)this + 8);
  uVar3 = param_1;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*(int *)this + uVar3 * 0x10) & *(uint *)(*(int *)this + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_1 + 1 & uVar4;
  while( true ) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
    if ((((uVar4 < uVar3) || (uVar5 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar5 <= param_1 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_1 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_1 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_1 * 0x10) = uVar2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_1 = uVar4;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_0105c7b0 */
uint F_0105c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_c;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105c830 */
unsigned int F_0105c830(unsigned int gen_a0)
{
  GEN_ENTER(0x105c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) + 1;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105c860 */
uint F_0105c860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  puVar1 = *(uint * PTR32 *)this;
  uVar2 = *(uint *)((int)this + 4);
  iVar7 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 << 4);
  if (uVar4 != 0) {
    *(uint *)this = uVar4;
    if (0 < param_1) {
      iVar5 = 0;
      iVar6 = param_1;
      do {
        iVar3 = *(int *)this;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = param_1 + -1;
    puVar8 = puVar1;
    param_1 = iVar7;
    if (0 < iVar7) {
      do {
        if ((*puVar8 & puVar8[1]) != 0xffffffff) {
          F_0105c500(this,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        }
        iVar6 = param_1 + -1;
        puVar8 = puVar8 + 4;
        param_1 = iVar6;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar7 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c940 */
uint F_0105c940(unsigned int gen_a0)
{
  GEN_ENTER(0x105c940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105c960 */
unsigned int F_0105c960(unsigned int gen_a0)
{
  GEN_ENTER(0x105c960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105c990 */
uint F_0105c990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105c9b0 */
uint F_0105c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105c9d0 */
unsigned int F_0105c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105ca00 */
uint F_0105ca00(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105ca20 */
unsigned int F_0105ca20(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105ca50 */
uint F_0105ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0105c580(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105ca80 */
uint F_0105ca80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105bf60(this);
  return (uint)this;
}

/* ref: FUN_0105cae0 */
uint F_0105cae0(unsigned int gen_a0)
{
  GEN_ENTER(0x105cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),0x80);
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xf;
  if (uVar1 != 0) {
    F_0105bf60(this);
  }
  return (uint)this;
}

/* ref: FUN_0105cb20 */
uint F_0105cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(uint *)(iVar3 + iVar2) == param_1) {
      F_0105be60(this,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105cba0 */
uint F_0105cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105cc20 */
unsigned int F_0105cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(uint *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(uint *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105cc90 */
uint F_0105cc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bda0(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105ccd0 */
uint F_0105ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cd00 */
uint F_0105cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105bf90(this,iVar1);
  return uVar2;
}

/* ref: FUN_0105cd30 */
uint F_0105cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 << 4);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105c830(this);
  return (uint)this;
}

/* ref: FUN_0105cdd0 */
uint F_0105cdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  local_8 = 0;
  uVar3 = uVar4;
  while( true ) {
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      F_0105c6d0(this,uVar3);
      local_8 = local_8 + 1;
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    }
  }
  return local_8;
}

/* ref: FUN_0105ce30 */
uint F_0105ce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar2 = F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
    if (uVar2 != 0) {
      return 1;
    }
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return 0;
}

/* ref: FUN_0105cec0 */
unsigned int F_0105cec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_1;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_3;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0105cf40 */
uint F_0105cf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0105c5d0(this,param_1,param_2,param_3,param_4);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cf80 */
uint F_0105cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105c580(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cfc0 */
uint F_0105cfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105c860(this,iVar1);
  return uVar2;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf2 */
unsigned int F_0105cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf3 */
unsigned int F_0105d000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf4 */
unsigned int F_0105d010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf5 */
unsigned int F_0105d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf6 */
unsigned int F_0105d030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf7 */
unsigned int F_0105d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf8 */
unsigned int F_0105d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf9 */
unsigned int F_0105d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf10 */
unsigned int F_0105d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf11 */
unsigned int F_0105d080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf12 */
unsigned int F_0105d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf13 */
unsigned int F_0105d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf14 */
unsigned int F_0105d0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf15 */
unsigned int F_0105d0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf16 */
unsigned int F_0105d0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf17 */
unsigned int F_0105d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf18 */
unsigned int F_0105d0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf19 */
unsigned int F_0105d100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf20 */
unsigned int F_0105d110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf21 */
unsigned int F_0105d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf22 */
unsigned int F_0105d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf23 */
unsigned int F_0105d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf24 */
unsigned int F_0105d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf25 */
unsigned int F_0105d160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf26 */
unsigned int F_0105d170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf27 */
unsigned int F_0105d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf28 */
unsigned int F_0105d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf29 */
unsigned int F_0105d1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf30 */
unsigned int F_0105d1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf31 */
unsigned int F_0105d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf32 */
unsigned int F_0105d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf33 */
unsigned int F_0105d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf34 */
unsigned int F_0105d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf35 */
unsigned int F_0105d200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf36 */
unsigned int F_0105d210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf37 */
unsigned int F_0105d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf38 */
unsigned int F_0105d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf39 */
unsigned int F_0105d240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf40 */
unsigned int F_0105d250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf41 */
unsigned int F_0105d260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf42 */
unsigned int F_0105d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf43 */
unsigned int F_0105d280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf44 */
unsigned int F_0105d290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf45 */
unsigned int F_0105d2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf46 */
unsigned int F_0105d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf47 */
unsigned int F_0105d2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf48 */
unsigned int F_0105d2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf49 */
unsigned int F_0105d2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf50 */
unsigned int F_0105d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf51 */
unsigned int F_0105d300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf52 */
unsigned int F_0105d310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf53 */
unsigned int F_0105d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf54 */
unsigned int F_0105d330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf55 */
unsigned int F_0105d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf56 */
unsigned int F_0105d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf57 */
unsigned int F_0105d360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf58 */
unsigned int F_0105d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf59 */
unsigned int F_0105d380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf60 */
unsigned int F_0105d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf61 */
unsigned int F_0105d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

