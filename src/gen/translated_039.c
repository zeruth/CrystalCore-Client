#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf57 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ffe80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined4 *)&REFG(undefined, 0x1379d00) = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  *(undefined4 *)&REFG(undefined, 0x1379d04) = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  *(undefined4 *)&REFG(undefined, 0x1379d08) = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
  return 0x1379d00;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf59 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ffeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a1e180(0x1379d10,*(float *)(this + 0x3c));
  return 0x1379d10;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf61 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ffed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  *(float *)&REFG(undefined, 0x1379d28) = (float)extraout_ST0;
  *(float *)&REFG(undefined, 0x1379d24) = *(float *)&REFG(undefined, 0x1379d28);
  *(float *)&REFG(undefined, 0x1379d20) = *(float *)&REFG(undefined, 0x1379d28);
  return 0x1379d20;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf62 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005fff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5fff00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf6 */
GEN_OWN GEN_NOFRAME uint F_005fff10(void)
{
  GEN_ENTER(0x5fff10u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME float F_005fff20(void)
{
  GEN_ENTER(0x5fff20u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1088068);
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf6 */
GEN_OWN GEN_NOFRAME uint F_005fff30(void)
{
  GEN_ENTER(0x5fff30u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf6 */
GEN_OWN GEN_NOFRAME uint F_005fff40(void)
{
  GEN_ENTER(0x5fff40u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME float F_005fff50(void)
{
  GEN_ENTER(0x5fff50u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1088068);
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf6 */
GEN_OWN GEN_NOFRAME uint F_005fff60(void)
{
  GEN_ENTER(0x5fff60u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005fff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5fff70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))(this GEN_EDX_FWD)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME float F_005fffa0(void)
{
  GEN_ENTER(0x5fffa0u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1088068);
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf24 */
GEN_OWN GEN_NOFRAME uint F_005fffb0(void)
{
  GEN_ENTER(0x5fffb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf23 */
GEN_OWN GEN_NOFRAME uint F_005fffc0(void)
{
  GEN_ENTER(0x5fffc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005fffd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fffd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 100)));
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf21 */
GEN_OWN GEN_NOFRAME byte F_005fffe0(void)
{
  GEN_ENTER(0x5fffe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte F_005ffff0(void)
{
  GEN_ENTER(0x5ffff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf24 */
GEN_OWN GEN_NOFRAME uint F_00600000(void)
{
  GEN_ENTER(0x600000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf23 */
GEN_OWN GEN_NOFRAME uint F_00600010(void)
{
  GEN_ENTER(0x600010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00600020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x600020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00600030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x600030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30;
}

/* ref: FUN_00600090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return (uint)in_ecx;
}

/* ref: FUN_006000f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006000f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6000f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600110 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600140(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600180(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600190(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006001c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6001c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006001d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6001d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006001e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6001e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[10];
  return (uint)this;
}

/* ref: FUN_00600250 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00600250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x600250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return;
}

/* ref: FUN_00600280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return (uint)in_ecx;
}

/* ref: FUN_006002b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006002b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6002b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 10))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006002d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006002d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6002d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006002f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006002f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6002f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600320(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600330(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600340 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006003a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006003a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6003a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006003c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006003c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6003c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006003e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006003e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6003e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600410(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600420 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600440 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600460 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600480 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006004b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006004b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6004b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 ^ *((uint *)GEN_TOP((in_ecx + 0x30)))) & 1;
  *((uint *)GEN_TOP((in_ecx + 0x30))) = *((uint *)GEN_TOP((in_ecx + 0x30))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_006004d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006004d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6004d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006004f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006004f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6004f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600530 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600550 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600570 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600590 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006005b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006005b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6005b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006005d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006005d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6005d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006005f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006005f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6005f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600650 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00600670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00600690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x600690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_006006b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006006b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6006b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_006006d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006006d0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6006d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006006f0 */
GEN_OWN GEN_FRAME uint F_006006f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6006f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00600700 */
GEN_OWN GEN_FRAME uint F_00600700(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00600710 */
GEN_OWN GEN_FRAME uint F_00600710(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600720 */
GEN_OWN GEN_FRAME uint F_00600720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00600730 */
GEN_OWN GEN_FRAME uint F_00600730(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00600740 */
GEN_OWN GEN_FRAME uint F_00600740(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00600750 */
GEN_OWN GEN_FRAME uint F_00600750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x21)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x21)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600770 */
GEN_OWN GEN_FRAME uint F_00600770(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x21)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006007b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006007b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6007b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_006007e0 */
GEN_OWN GEN_FRAME uint F_006007e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6007e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00600810 */
GEN_OWN GEN_FRAME uint F_00600810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x90;
}

/* ref: FUN_00600820 */
GEN_OWN GEN_FRAME uint F_00600820(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x91;
}

/* ref: FUN_00600830 */
GEN_OWN GEN_FRAME uint F_00600830(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600840 */
GEN_OWN GEN_FRAME uint F_00600840(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00600850 */
GEN_OWN GEN_FRAME uint F_00600850(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00600860 */
GEN_OWN GEN_FRAME uint F_00600860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00600870 */
GEN_OWN GEN_FRAME uint F_00600870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x91)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x91)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006008a0 */
GEN_OWN GEN_FRAME uint F_006008a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6008a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x91)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x91)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006008e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006008e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6008e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600950(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006009c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006009c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6009c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600a20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00600a50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600a80(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600ac0 */
GEN_OWN GEN_FRAME uint F_00600ac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00600ad0 */
GEN_OWN GEN_FRAME uint F_00600ad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00600ae0 */
GEN_OWN GEN_FRAME uint F_00600ae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600af0 */
GEN_OWN GEN_FRAME uint F_00600af0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00600b00 */
GEN_OWN GEN_FRAME uint F_00600b00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00600b10 */
GEN_OWN GEN_FRAME uint F_00600b10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00600b20 */
GEN_OWN GEN_FRAME uint F_00600b20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600b40 */
GEN_OWN GEN_FRAME uint F_00600b40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600b80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600bb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00600bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x600bb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((byte *)GEN_TOP((in_ecx + 0x23))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x24))) = param_3;
  return param_2;
}

/* ref: FUN_00600bd0 */
GEN_OWN GEN_FRAME uint F_00600bd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00600be0 */
GEN_OWN GEN_FRAME uint F_00600be0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00600bf0 */
GEN_OWN GEN_FRAME uint F_00600bf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600c00 */
GEN_OWN GEN_FRAME uint F_00600c00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00600c10 */
GEN_OWN GEN_FRAME uint F_00600c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00600c20 */
GEN_OWN GEN_FRAME uint F_00600c20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00600c30 */
GEN_OWN GEN_FRAME uint F_00600c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600c50 */
GEN_OWN GEN_FRAME uint F_00600c50(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600c90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600c90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600cc0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00600d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x600d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x90))) == '\0') {
    F_004b6080(this GEN_EDX_FWD);
    *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  }
  return (int)this + 0x14;
}

/* ref: FUN_00600da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600da0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600dd0 */
GEN_OWN GEN_FRAME unsigned int F_00600dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x600dd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (REFG(int, 0x1375554) != 0) {
    F_004b6160(REFG(int, 0x1375554) GEN_EDX_ARG,(undefined1)param_1,param_2,(undefined1)param_3);
    REFG(undefined1, 0x1301314) = 0;
  }
  return;
}

/* ref: FUN_00600e40 */
GEN_OWN GEN_FRAME uint F_00600e40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00600e50 */
GEN_OWN GEN_FRAME uint F_00600e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00600e60 */
GEN_OWN GEN_FRAME uint F_00600e60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600e70 */
GEN_OWN GEN_FRAME uint F_00600e70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00600e80 */
GEN_OWN GEN_FRAME uint F_00600e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00600e90 */
GEN_OWN GEN_FRAME uint F_00600e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00600ea0 */
GEN_OWN GEN_FRAME uint F_00600ea0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600ec0 */
GEN_OWN GEN_FRAME uint F_00600ec0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600f00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00600f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00600f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00600f60(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x600f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600fc0 */
GEN_OWN GEN_FRAME uint F_00600fc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00600fd0 */
GEN_OWN GEN_FRAME uint F_00600fd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00600fe0 */
GEN_OWN GEN_FRAME uint F_00600fe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00600ff0 */
GEN_OWN GEN_FRAME uint F_00600ff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x600ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601000 */
GEN_OWN GEN_FRAME uint F_00601000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601010 */
GEN_OWN GEN_FRAME uint F_00601010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601020 */
GEN_OWN GEN_FRAME uint F_00601020(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601040 */
GEN_OWN GEN_FRAME uint F_00601040(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601080 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_006010c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006010c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6010c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00601120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601120(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00601150 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_006011a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006011a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6011a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x21))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x21)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601220 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00601220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x601220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006012a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006012a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6012a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601340 */
GEN_OWN GEN_FRAME uint F_00601340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00601350 */
GEN_OWN GEN_FRAME uint F_00601350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00601360 */
GEN_OWN GEN_FRAME uint F_00601360(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601370 */
GEN_OWN GEN_FRAME uint F_00601370(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601380 */
GEN_OWN GEN_FRAME uint F_00601380(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601390 */
GEN_OWN GEN_FRAME uint F_00601390(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_006013a0 */
GEN_OWN GEN_FRAME uint F_006013a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6013a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x21)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x21)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006013c0 */
GEN_OWN GEN_FRAME uint F_006013c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6013c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x21)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601400 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601440 */
GEN_OWN GEN_FRAME uint F_00601440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00601450 */
GEN_OWN GEN_FRAME uint F_00601450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00601460 */
GEN_OWN GEN_FRAME uint F_00601460(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601470 */
GEN_OWN GEN_FRAME uint F_00601470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601480 */
GEN_OWN GEN_FRAME uint F_00601480(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601490 */
GEN_OWN GEN_FRAME uint F_00601490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_006014a0 */
GEN_OWN GEN_FRAME uint F_006014a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6014a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006014c0 */
GEN_OWN GEN_FRAME uint F_006014c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6014c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601500 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00601530(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006015d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006015d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6015d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00601640 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00601640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x601640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006016a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006016a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6016a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00601700 */
GEN_OWN GEN_FRAME uint F_00601700(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00601740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00601740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x34 + param_2 * 4)));
}

/* ref: FUN_00601790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00601790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x601790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x70)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x14))) = *param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = param_1[1];
  *((undefined4 *)GEN_TOP((uVar1 + 0x1c))) = param_1[2];
  *((undefined4 *)GEN_TOP((uVar1 + 0x20))) = param_1[3];
  return uVar1;
}

/* ref: FUN_006017c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006017c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6017c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x70)));
  *((float *)GEN_TOP((uVar1 + 0x20))) = param_2;
  return uVar1;
}

/* ref: FUN_006017e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006017e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6017e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x70)));
  *((undefined2 *)GEN_TOP((uVar1 + 10))) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00601850 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00601850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x601850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006018b0 */
GEN_OWN GEN_FRAME uint F_006018b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6018b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_006018c0 */
GEN_OWN GEN_FRAME uint F_006018c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6018c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_006018d0 */
GEN_OWN GEN_FRAME uint F_006018d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6018d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006018e0 */
GEN_OWN GEN_FRAME uint F_006018e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6018e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_006018f0 */
GEN_OWN GEN_FRAME uint F_006018f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6018f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601900 */
GEN_OWN GEN_FRAME uint F_00601900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601910 */
GEN_OWN GEN_FRAME uint F_00601910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601930 */
GEN_OWN GEN_FRAME uint F_00601930(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601950(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00601970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_006019b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006019b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6019b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601a50 */
GEN_OWN GEN_FRAME uint F_00601a50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00601a60 */
GEN_OWN GEN_FRAME uint F_00601a60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601a70 */
GEN_OWN GEN_FRAME uint F_00601a70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601a80 */
GEN_OWN GEN_FRAME uint F_00601a80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601a90 */
GEN_OWN GEN_FRAME uint F_00601a90(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ab0 */
GEN_OWN GEN_FRAME uint F_00601ab0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601ad0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601b10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601bb0 */
GEN_OWN GEN_FRAME uint F_00601bb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x25;
}

/* ref: FUN_00601bc0 */
GEN_OWN GEN_FRAME uint F_00601bc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601bd0 */
GEN_OWN GEN_FRAME uint F_00601bd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601be0 */
GEN_OWN GEN_FRAME uint F_00601be0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601bf0 */
GEN_OWN GEN_FRAME uint F_00601bf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601c20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_00601c50 */
GEN_OWN GEN_FRAME uint F_00601c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00601c60 */
GEN_OWN GEN_FRAME uint F_00601c60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601c70 */
GEN_OWN GEN_FRAME uint F_00601c70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601c80 */
GEN_OWN GEN_FRAME uint F_00601c80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601c90 */
GEN_OWN GEN_FRAME uint F_00601c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601ca0 */
GEN_OWN GEN_FRAME uint F_00601ca0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ce0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00601d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x601d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00601de0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601e10 */
GEN_OWN GEN_FRAME uint F_00601e10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00601e20 */
GEN_OWN GEN_FRAME uint F_00601e20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601e30 */
GEN_OWN GEN_FRAME uint F_00601e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601e40 */
GEN_OWN GEN_FRAME uint F_00601e40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601e50 */
GEN_OWN GEN_FRAME uint F_00601e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601e80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601e80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601eb0 */
GEN_OWN GEN_FRAME uint F_00601eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00601ec0 */
GEN_OWN GEN_FRAME uint F_00601ec0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601ed0 */
GEN_OWN GEN_FRAME uint F_00601ed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601ee0 */
GEN_OWN GEN_FRAME uint F_00601ee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601ef0 */
GEN_OWN GEN_FRAME uint F_00601ef0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601f20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601f50 */
GEN_OWN GEN_FRAME uint F_00601f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x19;
}

/* ref: FUN_00601f60 */
GEN_OWN GEN_FRAME uint F_00601f60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00601f70 */
GEN_OWN GEN_FRAME uint F_00601f70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00601f80 */
GEN_OWN GEN_FRAME uint F_00601f80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00601f90 */
GEN_OWN GEN_FRAME uint F_00601f90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00601fa0 */
GEN_OWN GEN_FRAME uint F_00601fa0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x601fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x19)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601fe0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00601fe0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x601fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_00602040 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00602090 */
GEN_OWN GEN_FRAME uint F_00602090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_006020a0 */
GEN_OWN GEN_FRAME uint F_006020a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6020a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006020b0 */
GEN_OWN GEN_FRAME uint F_006020b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6020b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_006020c0 */
GEN_OWN GEN_FRAME uint F_006020c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6020c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_006020d0 */
GEN_OWN GEN_FRAME uint F_006020d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6020d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_006020e0 */
GEN_OWN GEN_FRAME uint F_006020e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6020e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00602120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00602180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00602200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602200(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602250 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd4);
  return (uint)uVar1;
}

/* ref: FUN_00602280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006022d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006022d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6022d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x21))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x21)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006023a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006023a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6023a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x385);
  return (uint)uVar1;
}

/* ref: FUN_006023e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006023e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6023e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602410(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602440(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602450 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00602450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x602450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006024c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006024c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6024c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006024d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006024d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6024d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006024f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006024f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6024f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602510(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602530(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00602540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x602540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x91))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x91))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x91)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = ((int *)GEN_TOP(*piVar5));
        cVar1 = *((char *)GEN_TOP(((int)piVar4 + 0x91)));
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x91)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x91)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006025a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006025a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6025a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006025d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006025d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6025d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006025e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006025e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6025e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_006025f0 */
GEN_OWN GEN_FRAME uint F_006025f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6025f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00602610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602610(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x602610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602660 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,900);
  return uVar1;
}

/* ref: FUN_006026a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006026a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6026a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x95))) & 8) == 0) {
    if (param_1 == *((uint *)GEN_TOP(((int)this + 0x74)))) {
      return *((uint *)GEN_TOP(((int)this + 0x78)));
    }
  }
  else {
    puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x78)));
    for (uVar1 = *((uint *)GEN_TOP(((int)this + 0x74))); uVar1 != 0; uVar1 = uVar1 >> 4) {
      if (param_1 == (uVar1 & 0xf)) {
        return *puVar2;
      }
      if (param_1 < (uVar1 & 0xf)) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00602700 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00602700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x95))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x95))) = *((byte *)GEN_TOP((in_ecx + 0x95))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00602720 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00602720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x95)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x95))) = *((byte *)GEN_TOP((in_ecx + 0x95))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00602740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602740(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x602740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006a3820(param_1 GEN_EDX_FWD,(int)param_2 & 0xffff);
  return uVar1;
}

/* ref: FUN_00602770 */
GEN_OWN GEN_FRAME uint F_00602770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00602780 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602780(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_006027c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006027c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6027c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,900);
  return uVar1;
}

/* ref: FUN_006027f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006027f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6027f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
  fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)*((byte *)GEN_TOP(((int)this + 0x8d))) / fVar1))));
  *param_1 = ((float)GEN_TOF((fVar2 * (float10)*((byte *)GEN_TOP(((int)this + 0x90))))));
  param_1[1] = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP(((int)this + 0x91))) * fVar2)));
  param_1[2] = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP(((int)this + 0x92))) * fVar2)));
  param_1[3] = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP(((int)this + 0x93))) / fVar1)));
  return (uint)param_1;
}

/* ref: FUN_00602870 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xa0,param_2,0x385);
  return uVar1;
}

/* ref: FUN_006028a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006028a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6028a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006026a0(this GEN_EDX_FWD,3);
  if (uVar1 != 0) {
    uVar1 = F_00637ca0(uVar1 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006028c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006028c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6028c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00602930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_00602940 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00602940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x602940u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x8c))) = param_2;
  return;
}

/* ref: FUN_00602960 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00602960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x602960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x90))) = param_2;
  return;
}

/* ref: FUN_00602980 */
GEN_OWN GEN_FRAME uint F_00602980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00602990 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x385);
  return uVar1;
}

/* ref: FUN_006029c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006029c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6029c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  *((undefined4 *)GEN_TOP((param_1 * 0xa0 + 0x100 + (int)this))) = param_2;
  bVar1 = F_0068b4a0(this GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: FUN_006029e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006029e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6029e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((param_2 * 0xa0 + 0x10cU + in_ecx))) = param_3;
  return param_2 * 0xa0;
}

/* ref: FUN_00602a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x602a00u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((param_2 * 0xa0 + 0x110U + in_ecx))) = param_3;
  return param_2 * 0xa0;
}

/* ref: FUN_00602a20 */
GEN_OWN GEN_FRAME uint F_00602a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x24;
}

/* ref: FUN_00602a30 */
GEN_OWN GEN_FRAME uint F_00602a30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x25)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x25)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00602a50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602a50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,900);
  return uVar1;
}

/* ref: FUN_00602a80 */
GEN_OWN GEN_FRAME uint F_00602a80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00602a90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602a90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602ac0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602af0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602af0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602b20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602b20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00602b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 8 + (int)this;
}

/* ref: FUN_00602b90 */
GEN_OWN GEN_FRAME uint F_00602b90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00602ba0 */
GEN_OWN GEN_FRAME uint F_00602ba0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00602bc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00602bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) + param_1 * 4 + (int)this;
}

/* ref: FUN_00602c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *((int *)GEN_TOP(((int)this + 8)))))) + *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00602c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x24))) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x2c))) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *((int *)GEN_TOP(((int)this + 8)))))) + *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00602ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00602d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00602d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) + param_1 * 8 + (int)this;
}

/* ref: FUN_00602db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602db0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x2c + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00602dd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00602dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 5 + in_ecx)));
}

/* ref: FUN_00602de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) + param_1 * 2 + (int)this;
}

/* ref: FUN_00602e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00602e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *((int *)GEN_TOP(((int)this + 0x14)))))) + *((int *)GEN_TOP(((int)this + 0x14)))
  ;
}

/* ref: FUN_00602eb0 */
GEN_OWN GEN_FRAME uint F_00602eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00602ec0 */
GEN_OWN GEN_FRAME uint F_00602ec0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00602ee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602ee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *((int *)GEN_TOP(((int)this + 0x38)))))) + *((int *)GEN_TOP(((int)this + 0x38)))
  ;
}

/* ref: FUN_00602f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00602f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x602f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602fb0 */
GEN_OWN GEN_FRAME uint F_00602fb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x602fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x18;
}

/* ref: FUN_00602fc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00602fc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x602fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,900);
  return uVar1;
}

/* ref: FUN_00603000 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00603040 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603040(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00603060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,900);
  return uVar1;
}

/* ref: FUN_00603090 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603090(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006030a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006030a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6030a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 4))) + in_ecx;
}

/* ref: FUN_006030d0 */
GEN_OWN GEN_FRAME uint F_006030d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6030d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_006030e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006030e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6030e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00603110 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603110(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00603150 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603150(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00603180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603180(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603190 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x385);
  return uVar1;
}

/* ref: FUN_006031c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006031c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6031c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006031d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006031d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6031d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00603200 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603200(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00603250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x603250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 8 + (int)this;
}

/* ref: FUN_006032c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006032c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6032c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00603300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x603300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 8 + (int)this;
}

/* ref: FUN_00603320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603320(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[3] = (undefined2)param_2;
  in_ecx[2] = (undefined2)param_2;
  in_ecx[1] = (undefined2)param_2;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x603360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(uint *)this = (uint)(byte)param_1 * 0x1010101;
  *((short *)GEN_TOP(((int)this + 4))) = (short)((uint)(byte)param_1 * 0x1010101);
  *((uint *)GEN_TOP(((int)this + 6))) = (uint)(byte)param_1 * 0x1010101;
  *((short *)GEN_TOP(((int)this + 10))) = (short)((uint)(byte)param_1 * 0x1010101);
  *((uint *)GEN_TOP(((int)this + 0xc))) = (uint)(byte)param_1 * 0x1010101;
  *((short *)GEN_TOP(((int)this + 0x10))) = (short)((uint)(byte)param_1 * 0x1010101);
  return (uint)this;
}

/* ref: FUN_006033b0 */
GEN_OWN GEN_FRAME uint F_006033b0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x6033b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x10912a8)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3960));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_006033f0 */
GEN_OWN GEN_FRAME float10 F_006033f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6033f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8)))));
}

/* ref: FUN_00603420 */
GEN_OWN GEN_FRAME uint F_00603420(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x603420u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00603460 */
GEN_OWN GEN_FRAME float10 F_00603460(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3968)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x1080228)))));
}

/* ref: FUN_00603490 */
GEN_OWN GEN_FRAME uint F_00603490(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x603490u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x10912a8)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3960));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_006034d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006034d0(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x6034d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *in_ecx = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  in_ecx[1] = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    in_ecx[2] = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  in_ecx[2] = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603570(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006034d0(in_ecx GEN_EDX_FWD,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_006035a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006035a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6035a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_2 + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    *((undefined2 *)GEN_TOP((in_ecx + 6))) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  *((short *)GEN_TOP((in_ecx + 6))) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_006035f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006035f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6035f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[0]);
  F_006034d0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(uint *)&gen_args[0])))),GEN_ARGF(*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)))),GEN_ARGF(*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)))));
  F_00a1e160(&(*(uint *)&gen_args[0]),uVar1 + 0x10);
  uVar1 = (uint)(((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0])))) + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    *((undefined2 *)GEN_TOP((param_1 + 6))) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  *((short *)GEN_TOP((param_1 + 6))) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_00603670 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00603670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x603670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)((int)(uintptr_t)this) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)this + 2))) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*((ushort *)GEN_TOP(((int)this + 4))) * fVar1) - fVar3)));
  return 0;
}

/* ref: FUN_006036d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006036d0(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x6036d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *in_ecx = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  in_ecx[1] = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    in_ecx[2] = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  in_ecx[2] = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603770(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006036d0(in_ecx GEN_EDX_FWD,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_00603830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x603830u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3968);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *((short *)GEN_TOP((in_ecx + 6))) = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *((short *)GEN_TOP((in_ecx + 8))) = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    *((undefined2 *)GEN_TOP((in_ecx + 10))) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *((short *)GEN_TOP((in_ecx + 10))) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x603920u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *((short *)GEN_TOP((in_ecx + 0xc))) = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *((short *)GEN_TOP((in_ecx + 0xe))) = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    *((undefined2 *)GEN_TOP((in_ecx + 0x10))) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *((short *)GEN_TOP((in_ecx + 0x10))) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_006039c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006039c0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6039c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00603920(in_ecx GEN_EDX_FWD,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_006039f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006039f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6039f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  
  F_006036d0(this GEN_EDX_FWD,*param_1,param_1[1],param_1[2]);
  F_00a1e0f0(&(*(float *)(gen_frame + 0x0)),param_1 + 4);
  F_00603830(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)));
  uVar1 = F_00603920(this GEN_EDX_ARG,param_1[8],param_1[9],param_1[10]);
  return uVar1;
}

/* ref: FUN_00603a80 */
GEN_OWN GEN_FRAME uint F_00603a80(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x603a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *param_1 = ((ushort)param_2 << 6 | (ushort)param_5 & 0x3f) * 4 | 2;
  param_1[1] = (ushort)param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00603ac0 */
GEN_OWN GEN_FRAME ushort F_00603ac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((ushort *)GEN_TOP((param_1 + 2)));
}

/* ref: FUN_00603ad0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00603ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x603ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  if ((((*(short *)this == *param_1) && (*((short *)GEN_TOP(((int)this + 2))) == param_1[1])) &&
      (*((short *)GEN_TOP(((int)this + 4))) == param_1[2])) && (*((short *)GEN_TOP(((int)this + 6))) == param_1[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00603b30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00603b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x603b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*(short *)this != (short)param_1) || (*((short *)GEN_TOP(((int)this + 2))) != (short)param_2)) &&
     ((*((short *)GEN_TOP(((int)this + 4))) != (short)param_1 || (*((short *)GEN_TOP(((int)this + 6))) != (short)param_2))
     )) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00603b70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x603b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,900);
  return uVar1;
}

/* ref: FUN_00603ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603bb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603bc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603bd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00603bf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x603bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603c10 */
GEN_OWN GEN_FRAME uint F_00603c10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603c50 */
GEN_OWN GEN_FRAME uint F_00603c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603c80 */
GEN_OWN GEN_FRAME uint F_00603c80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x25)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x25)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603cb0 */
GEN_OWN GEN_FRAME uint F_00603cb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603d00 */
GEN_OWN GEN_FRAME uint F_00603d00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603d30 */
GEN_OWN GEN_FRAME uint F_00603d30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603d60 */
GEN_OWN GEN_FRAME uint F_00603d60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x19)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x19)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603da0 */
GEN_OWN GEN_FRAME uint F_00603da0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00603db0 */
GEN_OWN GEN_FRAME uint F_00603db0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00603e10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00603e10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00603eb0 */
GEN_OWN GEN_FRAME uint F_00603eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0xa0,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0xa0,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_006955c0(this GEN_EDX_ARG);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0xa0)));
  }
  return (uint)piVar1;
}

/* ref: FUN_00603f40 */
GEN_OWN GEN_FRAME uint F_00603f40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x603f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x48,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x48,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  if (param_1 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((uVar2 + 0x18)));
    local_8 = param_1;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x18))) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *((byte *)GEN_TOP(((int)puVar3 + 0x11))) = *((byte *)GEN_TOP(((int)puVar3 + 0x11))) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0x12))) = 0xff;
        *((byte *)GEN_TOP(((int)puVar3 + 0x13))) = *((byte *)GEN_TOP(((int)puVar3 + 0x13))) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2e6c));
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = REFG(undefined4, 0x1302e54);
        puVar3[9] = REFG(undefined4, 0x1302e58);
        puVar3[10] = REFG(undefined4, 0x1302e5c);
        puVar3[0xb] = REFG(undefined4, 0x1302e60);
      }
      puVar3 = puVar3 + 0x12;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604040 */
GEN_OWN GEN_FRAME uint F_00604040(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x604040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 << 7,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 << 7,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00696b10(this GEN_EDX_ARG);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0x80)));
  }
  return (uint)piVar1;
}

/* ref: FUN_006040b0 */
GEN_OWN GEN_FRAME uint F_006040b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6040b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  if (param_1 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((uVar2 + 0x18)));
    local_8 = param_1;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x18))) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *((byte *)GEN_TOP(((int)puVar3 + 0x11))) = *((byte *)GEN_TOP(((int)puVar3 + 0x11))) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0x12))) = 0xff;
        *((byte *)GEN_TOP(((int)puVar3 + 0x13))) = *((byte *)GEN_TOP(((int)puVar3 + 0x13))) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a309c));
        puVar3[6] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604190 */
GEN_OWN GEN_FRAME uint F_00604190(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x604190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  if (param_1 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((uVar2 + 0x18)));
    local_8 = param_1;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x18))) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *((byte *)GEN_TOP(((int)puVar3 + 0x11))) = *((byte *)GEN_TOP(((int)puVar3 + 0x11))) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0x12))) = 0xff;
        *((byte *)GEN_TOP(((int)puVar3 + 0x13))) = *((byte *)GEN_TOP(((int)puVar3 + 0x13))) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2c3c));
        puVar3[6] = 0;
        puVar3[7] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604270 */
GEN_OWN GEN_FRAME uint F_00604270(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x604270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x38,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  if (param_1 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((uVar2 + 0x18)));
    local_8 = param_1;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x18))) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *((byte *)GEN_TOP(((int)puVar3 + 0x11))) = *((byte *)GEN_TOP(((int)puVar3 + 0x11))) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0x12))) = 0xff;
        *((byte *)GEN_TOP(((int)puVar3 + 0x13))) = *((byte *)GEN_TOP(((int)puVar3 + 0x13))) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2d54));
        puVar3[6] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604350 */
GEN_OWN GEN_FRAME uint F_00604350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x604350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      F_005d83a0(this GEN_EDX_ARG);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_006043d0 */
GEN_OWN GEN_FRAME uint F_006043d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6043d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      F_005d83a0(this GEN_EDX_ARG);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_00604450 */
GEN_OWN GEN_FRAME uint F_00604450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x604450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      F_005d83a0(this GEN_EDX_ARG);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a3614));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_006044d0 */
GEN_OWN GEN_FRAME uint F_006044d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6044d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00404310()));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00510db0();
    piVar1 = ((int *)GEN_TOP(F_00404310()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1 * 0x60,0x10)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      F_005d83a0(this GEN_EDX_ARG);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a372c));
      *(undefined1 *)(this + 0x14) = 1;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_00604550 */
GEN_OWN GEN_FRAME unsigned int F_00604550(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x12;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006045a0 */
GEN_OWN GEN_FRAME unsigned int F_006045a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6045a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006045f0 */
GEN_OWN GEN_FRAME unsigned int F_006045f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6045f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604640 */
GEN_OWN GEN_FRAME unsigned int F_00604640(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604690 */
GEN_OWN GEN_FRAME unsigned int F_00604690(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x12;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006046e0 */
GEN_OWN GEN_FRAME unsigned int F_006046e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6046e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604730 */
GEN_OWN GEN_FRAME unsigned int F_00604730(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604780 */
GEN_OWN GEN_FRAME unsigned int F_00604780(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006047d0 */
GEN_OWN GEN_FRAME unsigned int F_006047d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6047d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604820 */
GEN_OWN GEN_FRAME unsigned int F_00604820(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604870 */
GEN_OWN GEN_FRAME unsigned int F_00604870(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006048c0 */
GEN_OWN GEN_FRAME unsigned int F_006048c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6048c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604910 */
GEN_OWN GEN_FRAME unsigned int F_00604910(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604960 */
GEN_OWN GEN_FRAME unsigned int F_00604960(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_006049b0 */
GEN_OWN GEN_FRAME unsigned int F_006049b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6049b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604a00 */
GEN_OWN GEN_FRAME unsigned int F_00604a00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604a50 */
GEN_OWN GEN_FRAME unsigned int F_00604a50(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604aa0 */
GEN_OWN GEN_FRAME unsigned int F_00604aa0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604af0 */
GEN_OWN GEN_FRAME unsigned int F_00604af0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x30;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604b40 */
GEN_OWN GEN_FRAME unsigned int F_00604b40(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604b90 */
GEN_OWN GEN_FRAME unsigned int F_00604b90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604be0 */
GEN_OWN GEN_FRAME unsigned int F_00604be0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604c30 */
GEN_OWN GEN_FRAME unsigned int F_00604c30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604c80 */
GEN_OWN GEN_FRAME unsigned int F_00604c80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604cd0 */
GEN_OWN GEN_FRAME unsigned int F_00604cd0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604d20 */
GEN_OWN GEN_FRAME unsigned int F_00604d20(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604d70 */
GEN_OWN GEN_FRAME unsigned int F_00604d70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604dc0 */
GEN_OWN GEN_FRAME unsigned int F_00604dc0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604e10 */
GEN_OWN GEN_FRAME unsigned int F_00604e10(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00604e60 */
GEN_OWN GEN_FRAME unsigned int F_00604e60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x604e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return;
}

