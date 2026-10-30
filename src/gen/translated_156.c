#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c973f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c973f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc973f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),0xffffffff,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00c97440 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c97440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc97440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  return (byte)uVar2;
}

/* ref: FUN_00c974a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c974a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc974a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x0)) = 5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  return (byte)uVar2;
}

/* ref: FUN_00c974f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c974f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc974f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  unsigned int gen_args[7];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x0)) = 6;
  (*(float *)(gen_frame + 0x10)) = (*(float *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00c97550 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c97550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97550u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(float *)(gen_frame + 0x10)) = (*(float *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  return (byte)uVar2;
}

/* ref: FUN_00c975b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c975b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc975b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3);
  return (byte)uVar1;
}

/* ref: FUN_00c975c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c975c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c975d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc975d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3);
  return (byte)uVar1;
}

/* ref: FUN_00c975e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c975e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc975e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x3c))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c975f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc975f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD));
}

/* ref: FUN_00c97600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc97600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc97610u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x44))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97620 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c97620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[3]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),*((undefined4 *)GEN_TOP(((int)this + 0x18))),
               *((undefined4 *)GEN_TOP(((int)this + 0x1c))),*((undefined4 *)GEN_TOP(((int)this + 0x20))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00c97680 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c97680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128ffc));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = puVar2[3];
      if (puVar2[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[2] + 0xc))) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[3] + 8))) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff4),this);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  return;
}

/* ref: FUN_00c976f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c976f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc976f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = puVar2[3];
      if (puVar2[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[2] + 0xc))) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[3] + 8))) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff5),this);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  return 1;
}

/* ref: FUN_00c97760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c97760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00 GEN_EDX_ARG,this);
  }
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) = uVar1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00c977a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c977a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc977a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) == param_1) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    }
    if (param_1[2] != 0) {
      *((undefined4 *)GEN_TOP((param_1[2] + 0xc))) = param_1[3];
    }
    if (param_1[3] != 0) {
      *((undefined4 *)GEN_TOP((param_1[3] + 8))) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,0);
    F_00ca2140(param_1,&REFG(undefined, 0x1128ff7),this);
  }
  return;
}

/* ref: FUN_00c97800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc97800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00 GEN_EDX_ARG,this);
  }
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) = uVar1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00c978a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c978a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc978a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c978e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c978e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc978e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c978f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c978f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc978f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00c97900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c97910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *((int *)GEN_TOP((uVar1 + 8))) = param_1;
  }
  *(int *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00c97930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c97940 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c97940(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc97940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00c97990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
      *(undefined4 *)this = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return param_1;
}

/* ref: FUN_00c97a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  if (*(int *)this == param_1) {
    *(uint *)this = uVar1;
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  }
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  return uVar1;
}

/* ref: FUN_00c97a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97a60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 0xc))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 8))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c97ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c97ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c97b20((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c97b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 0xc))) = param_1[3];
  }
  if (param_1[3] != 0) {
    *((undefined4 *)GEN_TOP((param_1[3] + 8))) = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c97b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x28,&REFG(undefined1, 0x107fc63),param_1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00ca16b0(this_00 GEN_EDX_ARG,param_1);
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00c97c20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c97c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xc97c20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  F_00c9fa30(*((undefined4 *)GEN_TOP((in_ecx + 0x14))) GEN_EDX_FWD,param_2,param_3,param_4,param_5);
  return;
}

/* ref: FUN_00c97c60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c97c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x20))) != 0;
}

/* ref: FUN_00c97c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc97c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ca1200(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) == 1));
  return uVar1;
}

/* ref: FUN_00c97ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(undefined4 * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xc97ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;)
  uint uVar1;
  
  uVar1 = F_00ca12f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) == 1),*param_4,param_4[1],
                       param_4[2],*param_5,param_5[1],param_5[2],*param_6,param_6[1],param_6[2]);
  return uVar1;
}

/* ref: FUN_00c97d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc97d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ca13a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc97d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ca1410(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc97dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ca1480(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc97e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ca14f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97e90(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c9fa90(param_2);
  return uVar1;
}

/* ref: FUN_00c97ea0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c97ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ca1760(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  return;
}

/* ref: FUN_00c97eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97eb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xc97eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  uint uVar1;
  
  uVar1 = F_00c9fea0(*((undefined4 *)GEN_TOP((param_1 + 0x14))) GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00c97ee0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c97ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc97ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00ca0220(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00c97ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc97ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ca0980(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2);
  return (uint)(*((int *)GEN_TOP((param_1 + 0x40))) != 0);
}

/* ref: FUN_00c97f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c97f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc97f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ca0ac0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)(*((int *)GEN_TOP((param_1 + 0x40))) != 0);
}

/* ref: FUN_00c97f50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c97f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ca0c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00c97f60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c97f60(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc97f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00c97f70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c97f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc97f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ca0d90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: FUN_00c97f80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c97f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc97f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ca0e90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00c97f90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c97f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc97f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c98020((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c97fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c97fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc97fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0);
  F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x14))),&REFG(undefined1, 0x107fc63),*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return uVar1;
}

/* ref: FUN_00c98020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c98020(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c97fa0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c98050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c98050(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c97680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c98080 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00c98080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_00c98090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c98090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc98090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 4)));
  *param_1 = *param_2 + *(float *)this;
  fVar2 = *((float *)GEN_TOP(((int)this + 8)));
  param_1[1] = param_2[1] + fVar1;
  param_1[2] = param_2[2] + fVar2;
  return (uint)param_1;
}

/* ref: FUN_00c98100 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00c98100(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc98100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)in_ecx[2] * (float10)in_ecx[2] +
                         ((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[1] * (float10)in_ecx[1])))));
}

/* ref: FUN_00c98130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c98130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c98140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98150 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c98150(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xc98150u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return;
}

/* ref: FUN_00c981c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c981c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc981c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00c981e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c981e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc981e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_00c981f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c981f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc981f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  param_2[1] = in_ecx[1];
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_00c98210 */
GEN_LIB GEN_FRAME unsigned int F_00c98210(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar7 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(param_2)))));
  fVar1 = (float)fVar7;
  fVar7 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP((param_2 + 4))))));
  fVar2 = (float)fVar7;
  fVar7 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP((param_2 + 8))))));
  fVar3 = (float)fVar7;
  fVar7 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(param_2)))));
  fVar4 = (float)fVar7;
  fVar7 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP((param_2 + 4))))));
  fVar5 = (float)fVar7;
  fVar7 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP((param_2 + 8))))));
  fVar6 = (float)fVar7;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  param_1[2] = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
  param_1[3] = 0.0;
  param_1[1] = fVar5 * fVar3;
  *param_1 = fVar6 * fVar5;
  param_1[7] = 0.0;
  param_1[4] = ((float)GEN_TOF(((double)fVar6 * ((double)fVar2 * (double)fVar1) -
                      (double)fVar4 * (double)fVar3)));
  param_1[5] = ((float)GEN_TOF(((double)fVar6 * (double)fVar4 +
                      (double)fVar3 * ((double)fVar2 * (double)fVar1))));
  param_1[6] = fVar5 * fVar1;
  param_1[8] = ((float)GEN_TOF(((double)fVar6 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar8 * (double)fVar3)));
  param_1[9] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar6 * (double)fVar1)));
  param_1[0xb] = 0.0;
  param_1[10] = (float)((float10)fVar5 * (float10)fVar4);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c983f0 */
GEN_LIB GEN_FRAME unsigned int F_00c983f0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc983f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar6 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(param_2)))));
  fVar1 = (float)fVar6;
  fVar6 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP((param_2 + 4))))));
  fVar2 = (float)fVar6;
  fVar6 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP((param_2 + 8))))));
  fVar3 = (float)fVar6;
  fVar6 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(param_2)))));
  fVar4 = (float)fVar6;
  fVar6 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP((param_2 + 4))))));
  fVar7 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP((param_2 + 8))))));
  fVar5 = (float)fVar7;
  fVar7 = (float10)(float)fVar6;
  *param_1 = (float)(fVar7 * (float10)fVar5);
  param_1[1] = (float)(fVar7 * (float10)fVar3);
  param_1[2] = ((float)GEN_TOF(-(float10)fVar2));
  param_1[3] = 0.0;
  param_1[4] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar2 * (double)fVar1) -
                      (double)fVar4 * (double)fVar3)));
  param_1[7] = 0.0;
  param_1[6] = (float)(fVar7 * (float10)fVar1);
  param_1[5] = ((float)GEN_TOF(((double)fVar5 * (double)fVar4 +
                      (double)fVar3 * ((double)fVar2 * (double)fVar1))));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  param_1[9] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar5 * (double)fVar1)));
  param_1[0xb] = 0.0;
  param_1[8] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar8 * (double)fVar3)));
  param_1[10] = (float)fVar6 * fVar4;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c985b0 */
GEN_LIB GEN_FRAME uint F_00c985b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc985b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d769c)));
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7698)));
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7694)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7690)));
  fVar8 = ((float10)GEN_TOD(fsin((float10)param_2)));
  uVar10 = (uint)gen_fl2bits((float)fVar8) ^ REFG(uint, 0x10920d0);
  fVar9 = ((float10)GEN_TOD(fcos((float10)param_2)));
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7660)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d765c)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7654)));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  *param_1 = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = (undefined4)gen_fl2bits((float)fVar9);
  param_1[7] = 0;
  param_1[6] = (undefined4)gen_fl2bits((float)fVar8);
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[9] = uVar10;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar9);
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar7;
  return (uint)param_1;
}

/* ref: FUN_00c98740 */
GEN_LIB GEN_FRAME uint F_00c98740(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc98740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  fVar9 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar10 = ((float10)GEN_TOD(fcos((float10)param_2)));
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0.0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0.0;
    REFG(float, 0x15d7674) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7674);
  fVar3 = REFG(float, 0x15d7670);
  fVar2 = REFG(float, 0x15d766c);
  fVar1 = REFG(float, 0x15d7668);
  param_1[2] = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  *param_1 = (float)fVar10;
  param_1[1] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = fVar1;
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  param_1[7] = fVar4;
  param_1[8] = (float)fVar9;
  param_1[9] = 0.0;
  param_1[10] = (float)fVar10;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar5;
  param_1[0xd] = fVar6;
  param_1[0xe] = fVar7;
  param_1[0xf] = fVar8;
  return (uint)param_1;
}

/* ref: FUN_00c988c0 */
GEN_LIB GEN_FRAME uint F_00c988c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc988c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0.0;
    REFG(float, 0x15d7680) = 0.0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7688);
  fVar3 = REFG(float, 0x15d7684);
  fVar2 = REFG(float, 0x15d7680);
  fVar1 = REFG(float, 0x15d767c);
  fVar9 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar11 = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  fVar10 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar10;
  param_1[1] = (float)fVar9;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = fVar11;
  param_1[5] = (float)fVar10;
  param_1[8] = fVar1;
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  param_1[0xb] = fVar4;
  param_1[0xc] = fVar5;
  param_1[0xd] = fVar6;
  param_1[0xe] = fVar7;
  param_1[0xf] = fVar8;
  return (uint)param_1;
}

/* ref: FUN_00c98a60 */
GEN_LIB GEN_FRAME unsigned int F_00c98a60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[2];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x15d7690));
  param_1[0xd] = GEN_FLT_TO(param_1[0xd], REFG(float, 0x15d7694));
  param_1[0xe] = GEN_FLT_TO(param_1[0xe], REFG(float, 0x15d7698));
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x15d769c));
  return 0;
}

/* ref: FUN_00c98b30 */
GEN_LIB GEN_FRAME unsigned int F_00c98b30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc98b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x15d7654));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x15d765c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x15d7660));
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = uVar3;
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x15d7668));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x15d766c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x15d7670));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x15d7674));
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = uVar3;
    REFG(float, 0x15d7688) = 0;
  }
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x15d767c));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x15d7680));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x15d7684));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x15d7688));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return 0;
}

/* ref: FUN_00c98ca0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c98ca0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc98ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
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
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  fVar1 = in_ecx[4];
  fVar2 = in_ecx[5];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[8];
  fVar5 = in_ecx[9];
  fVar6 = in_ecx[0xc];
  fVar7 = *in_ecx;
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  dVar19 = (double)in_ecx[0xf] * (double)in_ecx[10] - (double)in_ecx[0xe] * (double)in_ecx[0xb];
  dVar16 = (double)in_ecx[0xf] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[0xb];
  dVar22 = (double)in_ecx[0xe] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[10];
  fVar11 = ((float)GEN_TOF((((double)fVar2 * dVar19 - (double)fVar3 * dVar16) + (double)in_ecx[7] * dVar22)));
  dVar17 = (double)in_ecx[0xf] * (double)fVar4 - (double)fVar6 * (double)in_ecx[0xb];
  dVar23 = (double)in_ecx[0xe] * (double)fVar4 - (double)fVar6 * (double)in_ecx[10];
  fVar12 = ((float)GEN_TOF((((double)fVar3 * dVar17 - (double)fVar1 * dVar19) - (double)in_ecx[7] * dVar23)));
  dVar18 = (double)in_ecx[0xd] * (double)fVar4 - (double)fVar6 * (double)fVar5;
  fVar13 = ((float)GEN_TOF((((double)fVar1 * dVar16 - (double)fVar2 * dVar17) + (double)in_ecx[7] * dVar18)));
  fVar14 = ((float)GEN_TOF((((double)fVar2 * dVar23 - (double)fVar1 * dVar22) - (double)fVar3 * dVar18)));
  fVar15 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                  (double)((float)GEN_TOF(((((double)fVar12 * (double)fVar8 + (double)fVar11 * (double)fVar7)
                                  + (double)fVar13 * (double)fVar9) +
                                 (double)fVar14 * (double)fVar10))))));
  *in_ecx = fVar11 * fVar15;
  in_ecx[4] = fVar12 * fVar15;
  in_ecx[8] = fVar13 * fVar15;
  in_ecx[0xc] = fVar14 * fVar15;
  in_ecx[1] = ((float)GEN_TOF(((((double)fVar9 * dVar16 - (double)fVar8 * dVar19) - (double)fVar10 * dVar22)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xf] * (double)fVar3 - (double)in_ecx[0xe] * (double)in_ecx[7];
  dVar24 = (double)in_ecx[0xf] * (double)fVar2 - (double)in_ecx[0xd] * (double)in_ecx[7];
  dVar26 = (double)in_ecx[0xe] * (double)fVar2 - (double)in_ecx[0xd] * (double)fVar3;
  in_ecx[2] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar9 * dVar24) + (double)fVar10 * dVar26)
                     * (double)fVar15)));
  dVar21 = (double)in_ecx[0xb] * (double)fVar2 - (double)fVar5 * (double)in_ecx[7];
  dVar25 = (double)in_ecx[0xb] * (double)fVar3 - (double)in_ecx[10] * (double)in_ecx[7];
  dVar27 = (double)in_ecx[10] * (double)fVar2 - (double)fVar5 * (double)fVar3;
  in_ecx[3] = ((float)GEN_TOF(((((double)fVar9 * dVar21 - (double)fVar8 * dVar25) - (double)fVar10 * dVar27)
                     * (double)fVar15)));
  in_ecx[5] = ((float)GEN_TOF(((((double)fVar7 * dVar19 - (double)fVar9 * dVar17) + (double)fVar10 * dVar23)
                     * (double)fVar15)));
  dVar19 = (double)in_ecx[0xf] * (double)fVar1 - (double)fVar6 * (double)in_ecx[7];
  dVar28 = (double)in_ecx[0xe] * (double)fVar1 - (double)fVar6 * (double)fVar3;
  in_ecx[6] = ((float)GEN_TOF(((((double)fVar9 * dVar19 - (double)fVar7 * dVar20) - (double)fVar10 * dVar28)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xb] * (double)fVar1 - (double)fVar4 * (double)in_ecx[7];
  dVar29 = (double)in_ecx[10] * (double)fVar1 - (double)fVar4 * (double)fVar3;
  in_ecx[7] = ((float)GEN_TOF(((((double)fVar7 * dVar25 - (double)fVar9 * dVar20) + (double)fVar10 * dVar29)
                     * (double)fVar15)));
  in_ecx[9] = ((float)GEN_TOF(((((double)fVar8 * dVar17 - (double)fVar7 * dVar16) - (double)fVar10 * dVar18)
                     * (double)fVar15)));
  dVar16 = (double)in_ecx[0xd] * (double)fVar1 - (double)fVar6 * (double)fVar2;
  in_ecx[10] = ((float)GEN_TOF(((((double)fVar7 * dVar24 - (double)fVar8 * dVar19) + (double)fVar10 * dVar16)
                      * (double)fVar15)));
  dVar17 = (double)fVar5 * (double)fVar1 - (double)fVar4 * (double)fVar2;
  in_ecx[0xb] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar7 * dVar21) - (double)fVar10 * dVar17
                        ) * (double)fVar15)));
  in_ecx[0xd] = ((float)GEN_TOF(((((double)fVar7 * dVar22 - (double)fVar8 * dVar23) + (double)fVar9 * dVar18)
                       * (double)fVar15)));
  in_ecx[0xe] = ((float)GEN_TOF(((((double)fVar8 * dVar28 - (double)fVar7 * dVar26) - (double)fVar9 * dVar16)
                       * (double)fVar15)));
  in_ecx[0xf] = ((float)GEN_TOF(((((double)fVar7 * dVar27 - (double)fVar8 * dVar29) + (double)fVar9 * dVar17)
                       * (double)fVar15)));
  return 0;
}

/* ref: FUN_00c994c0 */
GEN_LIB GEN_FRAME byte F_00c994c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc994c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  double dVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = REFG(float, 0x11290b0);
  fVar6 = REFG(float, 0x1090998);
  *param_4 = 0.0;
  uVar4 = (ulonglong)gen_d2bits((double)(REFG(double, 0x11290a0)));
  dVar3 = REFG(double, 0x1088130);
  fVar1 = *param_3 - *param_1;
  fVar2 = param_3[2] - *param_1;
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)*param_2) & REFG(ulonglong, 0x11290a0)))) < fVar5) {
    if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
      return 0;
    }
    if (fVar2 < 0.0) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(REFG(double, 0x1088130) / (double)*param_2);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (0.0 < fVar5) {
        *param_4 = fVar5;
      }
      if ((double)fVar1 < REFG(double, 0x10909a0)) {
        fVar6 = fVar1;
      }
    }
    else {
      if (0.0 < fVar1) {
        *param_4 = fVar1;
      }
      if ((double)fVar5 < REFG(double, 0x10909a0)) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  fVar1 = param_3[1] - param_1[2];
  fVar2 = param_3[3] - param_1[2];
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)param_2[2]) & uVar4))) < REFG(float, 0x11290b0)) {
    if ((!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) || (fVar2 < 0.0)) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(dVar3 / (double)param_2[2]);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (*param_4 < fVar5) {
        *param_4 = fVar5;
      }
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
    }
    else {
      if (*param_4 < fVar1) {
        *param_4 = fVar1;
      }
      if (fVar5 < fVar6) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c996f0 */
GEN_LIB GEN_FRAME byte F_00c996f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc996f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  *param_4 = 0.0;
  uVar5 = (ulonglong)gen_d2bits((double)(REFG(double, 0x11290a0)));
  uVar8 = 0;
  pfVar7 = param_3;
  while( true ) {
    fVar10 = *((float *)GEN_TOP(((param_2 - (int)param_3) + (int)pfVar7)));
    fVar1 = *((float *)GEN_TOP(((int)pfVar7 + (param_1 - param_2) + (param_2 - (int)param_3))));
    fVar2 = *pfVar7 - fVar1;
    fVar1 = pfVar7[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar8 = uVar8 + 1;
    pfVar7 = pfVar7 + 1;
    if (2 < uVar8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99860 */
GEN_LIB GEN_FRAME byte F_00c99860(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc99860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  uVar8 = 0;
  *param_4 = 0.0;
  uVar5 = (ulonglong)gen_d2bits((double)(REFG(double, 0x11290a0)));
  pfVar7 = param_3;
  while( true ) {
    fVar10 = *((float *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar7)));
    fVar1 = *((float *)GEN_TOP(((int)param_1 + (int)pfVar7 + (((int)param_2 - (int)param_3) - (int)param_2))));
    fVar2 = *pfVar7 - fVar1;
    fVar1 = pfVar7[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar8 = uVar8 + 1;
    pfVar7 = pfVar7 + 1;
    if (2 < uVar8) {
      fVar11 = *param_4;
      *param_5 = *param_2 * fVar11;
      param_5[1] = param_2[1] * fVar11;
      param_5[2] = param_2[2] * fVar11;
      *param_5 = *param_1 + *param_5;
      param_5[1] = param_1[1] + param_5[1];
      param_5[2] = param_1[2] + param_5[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99a80 */
GEN_LIB GEN_FRAME byte F_00c99a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc99a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  bool bVar3;
  float * pfVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  uVar5 = 0;
  pfVar4 = param_3;
  fVar8 = REFG(float, 0x1090998);
  while( true ) {
    fVar7 = *((float *)GEN_TOP(((param_2 - (int)param_3) + (int)pfVar4)));
    fVar1 = *((float *)GEN_TOP(((int)pfVar4 + (param_1 - param_2) + (param_2 - (int)param_3))));
    fVar2 = *pfVar4 - fVar1;
    fVar1 = pfVar4[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar7) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0)) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar6 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar7 = (float)(REFG(double, 0x1088130) / (double)fVar7);
      fVar2 = fVar7 * fVar2;
      fVar7 = fVar7 * fVar1;
      if (fVar7 < fVar2) {
        if (fVar9 < fVar7) {
          fVar9 = fVar7;
        }
        if (fVar2 < fVar8) {
          fVar8 = fVar2;
        }
      }
      else {
        if (fVar9 < fVar2) {
          fVar9 = fVar2;
        }
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
      }
      bVar6 = (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8;
      bVar3 = fVar8 <= fVar9;
    }
    if (bVar3 && !bVar6) break;
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99be0 */
GEN_LIB GEN_FRAME byte F_00c99be0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc99be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
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
  float fVar14;
  float fVar15;
  
  fVar8 = *((float *)GEN_TOP(param_3));
  fVar10 = *((float *)GEN_TOP(param_4)) - fVar8;
  fVar2 = *((float *)GEN_TOP((param_4 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar15 = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar3 = *((float *)GEN_TOP(param_5)) - fVar8;
  fVar4 = *((float *)GEN_TOP((param_5 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar9 = *((float *)GEN_TOP((param_2 + 8)));
  fVar5 = *((float *)GEN_TOP((param_5 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar1 = *((float *)GEN_TOP(param_2));
  fVar11 = ((float)GEN_TOF(((double)fVar5 * (double)*((float *)GEN_TOP((param_2 + 4))) - (double)fVar9 * (double)fVar4)));
  fVar12 = (float)((double)fVar9 * (double)fVar3 - (double)fVar5 * (double)fVar1);
  fVar13 = ((float)GEN_TOF(((double)fVar1 * (double)fVar4 - (double)*((float *)GEN_TOP((param_2 + 4))) * (double)fVar3)));
  fVar14 = ((float)GEN_TOF((((double)fVar12 * (double)fVar2 + (double)fVar11 * (double)fVar10) +
                  (double)fVar13 * (double)fVar15)));
  if ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(REFG(float, 0x11290b0))) && !(fVar14 <= REFG(float, 0x11290b0))) {
    fVar8 = *param_1 - fVar8;
    fVar6 = param_1[1] - *((float *)GEN_TOP((param_3 + 4)));
    fVar7 = param_1[2] - *((float *)GEN_TOP((param_3 + 8)));
    fVar11 = ((float)GEN_TOF((((double)fVar6 * (double)fVar12 + (double)fVar8 * (double)fVar11) +
                    (double)fVar7 * (double)fVar13)));
    if ((!(fVar11 < 0.0)) && (!(fVar14 < fVar11))) {
      fVar12 = (float)((double)fVar8 * (double)fVar2 - (double)fVar6 * (double)fVar10);
      fVar10 = (float)((double)fVar7 * (double)fVar10 - (double)fVar15 * (double)fVar8);
      fVar15 = (float)((double)fVar6 * (double)fVar15 - (double)fVar7 * (double)fVar2);
      fVar8 = ((float)GEN_TOF((((double)*((float *)GEN_TOP((param_2 + 4))) * (double)fVar10 +
                      (double)fVar1 * (double)fVar15) + (double)fVar9 * (double)fVar12)));
      if (!(fVar8 < 0.0)) {
        if (!((double)fVar14 < (double)fVar8 + (double)fVar11)) {
          fVar9 = (float)(REFG(double, 0x1088130) / (double)fVar14);
          *param_6 = ((float)GEN_TOF((((double)fVar10 * (double)fVar4 + (double)fVar15 * (double)fVar3) +
                            (double)fVar12 * (double)fVar5))) * fVar9;
          *param_7 = fVar9 * fVar11;
          *param_8 = fVar9 * fVar8;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c99fd0 */
GEN_LIB GEN_FRAME uint F_00c99fd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc99fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  
  uVar9 = param_1;
  fVar12 = *((float *)GEN_TOP(param_2));
  fVar16 = *((float *)GEN_TOP(param_1));
  fVar3 = fVar12 - fVar16;
  fVar15 = *((float *)GEN_TOP((param_1 + 4)));
  fVar4 = *((float *)GEN_TOP((param_2 + 4))) - fVar15;
  fVar11 = *((float *)GEN_TOP((param_1 + 8)));
  fVar6 = *((float *)GEN_TOP((param_2 + 8))) - fVar11;
  fVar1 = *((float *)GEN_TOP(param_3));
  fVar5 = fVar1 - fVar16;
  fVar7 = *((float *)GEN_TOP((param_3 + 4))) - fVar15;
  fVar8 = *((float *)GEN_TOP((param_3 + 8))) - fVar11;
  fVar17 = *((float *)GEN_TOP(param_4));
  fVar18 = *((float *)GEN_TOP((param_4 + 4)));
  fVar2 = *((float *)GEN_TOP((param_4 + 8)));
  fVar14 = ((float)GEN_TOF((((double)(fVar18 - fVar15) * (double)fVar4 +
                   (double)(fVar17 - fVar16) * (double)fVar3) +
                  (double)(fVar2 - fVar11) * (double)fVar6)));
  fVar15 = ((float)GEN_TOF((((double)(fVar18 - fVar15) * (double)fVar7 +
                   (double)(fVar17 - fVar16) * (double)fVar5) +
                  (double)(fVar2 - fVar11) * (double)fVar8)));
  if ((fVar14 <= 0.0) && (fVar15 <= 0.0)) {
    *param_5 = fVar16;
    param_5[1] = *((float *)GEN_TOP((param_1 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_1 + 8)));
    return uVar9;
  }
  fVar16 = fVar18 - *((float *)GEN_TOP((param_2 + 4)));
  fVar11 = fVar2 - *((float *)GEN_TOP((param_2 + 8)));
  fVar10 = ((float)GEN_TOF((((double)fVar16 * (double)fVar4 + (double)fVar3 * (double)(fVar17 - fVar12)) +
                  (double)fVar11 * (double)fVar6)));
  fVar16 = ((float)GEN_TOF((((double)fVar16 * (double)fVar7 + (double)fVar5 * (double)(fVar17 - fVar12)) +
                  (double)fVar11 * (double)fVar8)));
  if ((0.0 <= fVar10) && (fVar16 <= fVar10)) {
    *param_5 = fVar12;
    param_5[1] = *((float *)GEN_TOP((param_2 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_2 + 8)));
    return (uint)param_5;
  }
  fVar11 = (float)((double)fVar16 * (double)fVar14 - (double)fVar10 * (double)fVar15);
  if (((fVar11 <= 0.0) && (0.0 <= fVar14)) && (fVar10 <= 0.0)) {
    fVar12 = ((float)GEN_TOF(((double)fVar14 / ((double)fVar14 - (double)fVar10))));
    *param_5 = fVar3 * fVar12;
    param_5[2] = fVar6 * fVar12;
    param_5[1] = fVar4 * fVar12;
    *param_5 = fVar3 * fVar12 + *((float *)GEN_TOP(param_1));
    param_5[1] = fVar4 * fVar12 + *((float *)GEN_TOP((param_1 + 4)));
    param_5[2] = fVar6 * fVar12 + *((float *)GEN_TOP((param_1 + 8)));
    return uVar9;
  }
  fVar18 = fVar18 - *((float *)GEN_TOP((param_3 + 4)));
  fVar2 = fVar2 - *((float *)GEN_TOP((param_3 + 8)));
  fVar13 = ((float)GEN_TOF((((double)fVar18 * (double)fVar7 + (double)(fVar17 - fVar1) * (double)fVar5) +
                  (double)fVar2 * (double)fVar8)));
  fVar17 = ((float)GEN_TOF((((double)fVar18 * (double)fVar4 + (double)(fVar17 - fVar1) * (double)fVar3) +
                  (double)fVar2 * (double)fVar6)));
  if ((0.0 <= fVar13) && (fVar17 <= fVar13)) {
    *param_5 = fVar1;
    param_5[1] = *((float *)GEN_TOP((param_3 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_3 + 8)));
    return (uint)param_5;
  }
  fVar18 = (float)((double)fVar17 * (double)fVar15 - (double)fVar13 * (double)fVar14);
  if (((fVar18 <= 0.0) && (0.0 <= fVar15)) && (fVar13 <= 0.0)) {
    fVar12 = ((float)GEN_TOF(((double)fVar15 / ((double)fVar15 - (double)fVar13))));
    *param_5 = fVar5 * fVar12;
    param_5[1] = fVar7 * fVar12;
    param_5[2] = fVar8 * fVar12;
    *param_5 = *((float *)GEN_TOP(param_1)) + fVar5 * fVar12;
    param_5[1] = fVar7 * fVar12 + *((float *)GEN_TOP((param_1 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_1 + 8))) + fVar8 * fVar12;
    return uVar9;
  }
  fVar15 = (float)((double)fVar13 * (double)fVar10 - (double)fVar17 * (double)fVar16);
  if (((fVar15 <= 0.0) && (dVar19 = (double)fVar16 - (double)fVar10, 0.0 <= dVar19)) &&
     (0.0 <= (double)fVar17 - (double)fVar13)) {
    *param_5 = fVar1 - fVar12;
    param_5[1] = *((float *)GEN_TOP((param_3 + 4))) - *((float *)GEN_TOP((param_2 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_3 + 8))) - *((float *)GEN_TOP((param_2 + 8)));
    fVar12 = *param_5;
    fVar11 = ((float)GEN_TOF((dVar19 / (dVar19 - ((double)fVar17 - (double)fVar13)))));
    fVar16 = param_5[1];
    *param_5 = fVar12 * fVar11;
    fVar15 = param_5[2];
    param_5[1] = fVar16 * fVar11;
    param_5[2] = fVar15 * fVar11;
    *param_5 = *((float *)GEN_TOP(param_2)) + fVar12 * fVar11;
    param_5[1] = fVar16 * fVar11 + *((float *)GEN_TOP((param_2 + 4)));
    param_5[2] = *((float *)GEN_TOP((param_2 + 8))) + fVar15 * fVar11;
    return (uint)param_5;
  }
  fVar12 = ((float)GEN_TOF((REFG(double, 0x1088130) / (((double)fVar15 + (double)fVar18) + (double)fVar11))));
  fVar18 = fVar12 * fVar18;
  fVar12 = fVar12 * fVar11;
  fVar16 = fVar5 * fVar12 + fVar3 * fVar18;
  *param_5 = fVar16;
  fVar15 = fVar7 * fVar12 + fVar4 * fVar18;
  fVar12 = fVar8 * fVar12 + fVar6 * fVar18;
  param_5[1] = fVar15;
  param_5[2] = fVar12;
  *param_5 = *((float *)GEN_TOP(param_1)) + fVar16;
  param_5[1] = fVar15 + *((float *)GEN_TOP((param_1 + 4)));
  param_5[2] = *((float *)GEN_TOP((param_1 + 8))) + fVar12;
  return uVar9;
}

/* ref: FUN_00c9a8a0 */
GEN_LIB GEN_FRAME uint F_00c9a8a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc9a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar4 = *param_2 - fVar1;
  fVar5 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar7 = 0.0;
  fVar6 = ((float)GEN_TOF((((double)(*param_3 - fVar1) * (double)fVar4 +
                  (double)fVar5 * (double)(param_3[1] - param_1[1])) +
                 (double)(param_3[2] - param_1[2]) * (double)fVar3))) /
          ((float)GEN_TOF((((double)fVar5 * (double)fVar5 + (double)fVar4 * (double)fVar4) +
                 (double)fVar3 * (double)fVar3)));
  if ((!GEN_ISNAN(fVar6) && (!(0.0 < fVar6) && fVar6 != 0.0)) ||
     (fVar7 = REFG(float, 0x1087f04), REFG(float, 0x1087f04) < fVar6)) {
    fVar6 = fVar7;
  }
  fVar7 = param_1[1];
  fVar2 = param_1[2];
  *param_4 = fVar1 + fVar4 * fVar6;
  param_4[1] = fVar5 * fVar6 + fVar7;
  param_4[2] = fVar2 + fVar3 * fVar6;
  return (uint)param_4;
}

/* ref: FUN_00c9aa50 */
GEN_LIB GEN_FRAME uint F_00c9aa50(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xc9aa50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  fVar10 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar5 = param_1[2] - param_2[2];
  fVar6 = ((float)GEN_TOF((((double)fVar1 * (double)fVar10 + (double)fVar3 * (double)fVar2) +
                 (double)fVar5 * (double)fVar4)));
  if ((!(fVar6 < 0.0)) &&
     (dVar7 = (double)fVar10, dVar8 = (double)fVar2, dVar9 = (double)fVar4,
     fVar10 = ((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))), !(fVar10 < fVar6))) {
    dVar7 = (double)fVar1;
    dVar8 = (double)fVar3;
    dVar9 = (double)fVar5;
    if ((double)((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))) -
        ((double)fVar6 * (double)fVar6) / (double)fVar10 < (double)param_4 * (double)param_4) {
      return 1;
    }
    return 0;
  }
  return (uint)param_1 & 0xffffff00;
}

/* ref: FUN_00c9abd0 */
GEN_LIB GEN_FRAME byte F_00c9abd0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xc9abd0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  fVar10 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar5 = param_1[2] - param_2[2];
  fVar6 = ((float)GEN_TOF((((double)fVar1 * (double)fVar10 + (double)fVar3 * (double)fVar2) +
                 (double)fVar5 * (double)fVar4)));
  if ((!(fVar6 < 0.0)) &&
     (dVar7 = (double)fVar10, dVar8 = (double)fVar2, dVar9 = (double)fVar4,
     fVar10 = ((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))), !(fVar10 < fVar6))) {
    dVar7 = (double)fVar1;
    dVar8 = (double)fVar3;
    dVar9 = (double)fVar5;
    if ((double)((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))) -
        ((double)fVar6 * (double)fVar6) / (double)fVar10 < (double)param_4) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c9ad50 */
GEN_LIB GEN_FRAME byte F_00c9ad50(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc9ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (fVar1 < 0.0) {
      *param_4 = 0.0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9ae80 */
GEN_LIB GEN_FRAME byte F_00c9ae80(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc9ae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (0.0 <= fVar1) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c9afc0 */
GEN_LIB GEN_FRAME byte F_00c9afc0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc9afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9b0f0 */
GEN_LIB GEN_FRAME uint F_00c9b0f0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc9b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (0.0 <= fVar2) {
      return 1;
    }
    return 0;
  }
  return (uint)param_3 & 0xffffff00;
}

/* ref: FUN_00c9b220 */
GEN_LIB GEN_FRAME uint F_00c9b220(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc9b220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  fVar7 = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
  fVar13 = *((float *)GEN_TOP((param_4 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar8 = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar11 = *((float *)GEN_TOP(param_1)) - *((float *)GEN_TOP(param_3));
  fVar14 = *((float *)GEN_TOP((param_1 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar1 = *((float *)GEN_TOP((param_1 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar9 = *((float *)GEN_TOP(param_2)) - *((float *)GEN_TOP(param_1));
  fVar2 = *((float *)GEN_TOP((param_2 + 4))) - *((float *)GEN_TOP((param_1 + 4)));
  fVar10 = *((float *)GEN_TOP((param_2 + 8))) - *((float *)GEN_TOP((param_1 + 8)));
  fVar5 = ((float)GEN_TOF((((double)fVar14 * (double)fVar13 + (double)fVar11 * (double)fVar7) +
                 (double)fVar1 * (double)fVar8)));
  fVar6 = ((float)GEN_TOF((((double)fVar2 * (double)fVar13 + (double)fVar9 * (double)fVar7) +
                 (double)fVar10 * (double)fVar8)));
  fVar7 = ((float)GEN_TOF((((double)fVar7 * (double)fVar7 + (double)fVar13 * (double)fVar13) +
                 (double)fVar8 * (double)fVar8)));
  pfVar4 = ((float *)GEN_TOP(param_1));
  if (((!(fVar5 < 0.0)) || (!(fVar6 + fVar5 < 0.0))) &&
     ((!(fVar7 < fVar5) || (!(fVar7 < fVar6 + fVar5))))) {
    fVar13 = ((float)GEN_TOF((((double)fVar9 * (double)fVar9 + (double)fVar2 * (double)fVar2) +
                    (double)fVar10 * (double)fVar10)));
    fVar8 = (float)((double)fVar13 * (double)fVar7 - (double)fVar6 * (double)fVar6);
    if (!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar8) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0))) {
      fVar9 = ((float)GEN_TOF((((double)fVar2 * (double)fVar14 + (double)fVar9 * (double)fVar11) +
                     (double)fVar10 * (double)fVar1)));
      fVar10 = (float)((double)fVar9 * (double)fVar7 - (double)fVar6 * (double)fVar5);
      fVar14 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar11 * (double)fVar11 +
                                       (double)fVar14 * (double)fVar14) +
                                      (double)fVar1 * (double)fVar1))) -
                      (double)param_5 * (double)param_5)));
      dVar12 = (double)fVar10;
      fVar11 = ((float)GEN_TOF((dVar12 * dVar12 -
                      (double)(float)((double)fVar14 * (double)fVar7 - (double)fVar5 * (double)fVar5
                                     ) * (double)fVar8)));
      if (!(fVar11 < 0.0)) {
        fVar8 = ((float)GEN_TOF(((((double)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar10) ^ REFG(uint, 0x10920d0)))) -
                        ((double)GEN_TOD(SQRT(fVar11)))) / (double)fVar8)));
        *param_6 = fVar8;
        pfVar4 = param_6;
        if ((!(fVar8 < 0.0)) && (!(REFG(float, 0x1087f04) < fVar8))) {
          dVar12 = (double)fVar8 * (double)fVar6 + (double)fVar5;
          if (dVar12 < 0.0) {
            if (!GEN_ISNAN(fVar6) && !(0.0 < fVar6)) goto LAB_00c9b723;
            fVar6 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ uVar3) / fVar6;
            *param_6 = fVar6;
            if (((double)fVar6 * (double)fVar13 + (double)fVar9) *
                ((double)fVar6 * *(double *)&REFG(undefined, 0x1092098)) + (double)fVar14 <= 0.0) {
              return 1;
            }
          }
          else {
            if (!((double)fVar7 < dVar12)) {
              return CONCAT31((int3)((uint)((int)(uintptr_t)param_6) >> 8),1);
            }
            if (!GEN_ISNAN(fVar6) && !(fVar6 < 0.0)) goto LAB_00c9b723;
            dVar15 = ((double)fVar9 - (double)fVar6) * *(double *)&REFG(undefined, 0x1092098);
            fVar8 = ((float)GEN_TOF((((double)fVar7 - (double)fVar5) / (double)fVar6)));
            dVar12 = (double)fVar5 * *(double *)&REFG(undefined, 0x1092098);
            *param_6 = fVar8;
            if ((dVar15 + (double)fVar8 * (double)fVar13) * (double)fVar8 +
                (((double)fVar14 + (double)fVar7) - dVar12) <= 0.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
LAB_00c9b723: ;
  return (uint)pfVar4 & 0xffffff00;
}

/* ref: FUN_00c9b730 */
GEN_LIB GEN_FRAME byte F_00c9b730(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc9b730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  
  uVar5 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  fVar9 = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
  fVar10 = *((float *)GEN_TOP((param_4 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar1 = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar13 = *((float *)GEN_TOP(param_1)) - *((float *)GEN_TOP(param_3));
  (*(float *)(gen_frame + 0xc)) = fVar13;
  fVar14 = *((float *)GEN_TOP((param_1 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  (*(float *)(gen_frame + 0x10)) = fVar14;
  fVar15 = *((float *)GEN_TOP((param_1 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar3 = *((float *)GEN_TOP(param_2)) - *((float *)GEN_TOP(param_1));
  fVar2 = *((float *)GEN_TOP((param_2 + 4))) - *((float *)GEN_TOP((param_1 + 4)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar4 = *((float *)GEN_TOP((param_2 + 8))) - *((float *)GEN_TOP((param_1 + 8)));
  (*(float *)(gen_frame + 0x8)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar15;
  fVar7 = ((float)GEN_TOF((((double)fVar10 * (double)fVar14 + (double)fVar13 * (double)fVar9) +
                 (double)fVar15 * (double)fVar1)));
  fVar8 = ((float)GEN_TOF((((double)fVar2 * (double)fVar10 + (double)fVar3 * (double)fVar9) +
                 (double)fVar4 * (double)fVar1)));
  fVar9 = ((float)GEN_TOF((((double)fVar9 * (double)fVar9 + (double)fVar10 * (double)fVar10) +
                 (double)fVar1 * (double)fVar1)));
  if (((!(fVar7 < 0.0)) || (!(fVar8 + fVar7 < 0.0))) &&
     ((!(fVar9 < fVar7) || (!(fVar9 < fVar8 + fVar7))))) {
    fVar11 = ((float)GEN_TOF((((double)fVar3 * (double)fVar3 + (double)fVar2 * (double)fVar2) +
                    (double)fVar4 * (double)fVar4)));
    fVar10 = (float)((double)fVar11 * (double)fVar9 - (double)fVar8 * (double)fVar8);
    dVar16 = (double)fVar13 * (double)fVar13 + (double)fVar14 * (double)fVar14;
    (*(double *)(gen_frame + 0x18)) = dVar16;
    fVar1 = (float)(dVar16 + (double)fVar15 * (double)fVar15) - param_5;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar1;
    (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(int)(ulonglong)gen_d2bits(dVar16)));
    fVar12 = (float)((double)fVar1 * (double)fVar9 - (double)fVar7 * (double)fVar7);
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0)) {
      if (((!(0.0 < fVar12)) && (0.0 <= fVar7)) && (fVar7 <= fVar9)) {
        *param_6 = 0.0;
        return 1;
      }
    }
    else {
      fVar13 = ((float)GEN_TOF((((double)fVar2 * (double)fVar14 + (double)fVar3 * (double)fVar13) +
                      (double)fVar4 * (double)fVar15)));
      fVar14 = (float)((double)fVar13 * (double)fVar9 - (double)fVar8 * (double)fVar7);
      dVar16 = (double)fVar14;
      fVar15 = (float)(dVar16 * dVar16 - (double)fVar12 * (double)fVar10);
      if (!(fVar15 < 0.0)) {
        fVar10 = ((float)GEN_TOF(((((double)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar14) ^ REFG(uint, 0x10920d0)))) -
                         ((double)GEN_TOD(SQRT(fVar15)))) / (double)fVar10)));
        *param_6 = fVar10;
        if ((!(fVar10 < 0.0)) && (!(REFG(float, 0x1087f04) < fVar10))) {
          dVar16 = (double)fVar10 * (double)fVar8 + (double)fVar7;
          if (dVar16 < 0.0) {
            if (!(fVar8 <= 0.0)) {
              fVar8 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ uVar5) / fVar8;
              *param_6 = fVar8;
              fVar9 = *((float *)GEN_TOP((param_1 + 4)));
              fVar1 = *((float *)GEN_TOP((param_1 + 8)));
              (*(float *)(gen_frame + 0x0)) = (*((float *)GEN_TOP(param_1)) + fVar8 * fVar3) - *((float *)GEN_TOP(param_3));
              (*(float *)(gen_frame + 0x4)) = (fVar9 + fVar2 * fVar8) - *((float *)GEN_TOP((param_3 + 4)));
              (*(float *)(gen_frame + 0x8)) = (fVar1 + fVar4 * fVar8) - *((float *)GEN_TOP((param_3 + 8)));
              fVar6 = F_00c98100(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
              if (!(fVar6 <= (float10)param_5)) {
                return 0;
              }
              return 1;
            }
          }
          else {
            if (!((double)fVar9 < dVar16)) {
              return 1;
            }
            if (!(0.0 <= fVar8)) {
              fVar10 = ((float)GEN_TOF((((double)fVar9 - (double)fVar7) / (double)fVar8)));
              *param_6 = fVar10;
              if (!((((double)fVar13 - (double)fVar8) * *(double *)&REFG(undefined, 0x1092098) +
                    (double)fVar10 * (double)fVar11) * (double)fVar10 +
                    (((double)fVar1 + (double)fVar9) - (double)fVar7 * *(double *)&REFG(undefined, 0x1092098)) <=
                   0.0)) {
                return 0;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c9bd20 */
GEN_LIB GEN_FRAME unsigned int F_00c9bd20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc9bd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  float fVar5;
  
  uVar3 = 0;
  pfVar4 = ((float *)GEN_TOP((param_2 + 0x10)));
  do {
    fVar1 = pfVar4[8];
    *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) = fVar1;
    *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar1;
    fVar5 = *param_3 * pfVar4[-4];
    fVar2 = pfVar4[-4] * param_3[3];
    fVar1 = *((float *)GEN_TOP((param_1 + uVar3 * 4)));
    if (fVar5 < fVar2) {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar5 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar2;
    }
    else {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar2 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar5;
    }
    *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) = fVar5;
    fVar5 = param_3[1] * *pfVar4;
    fVar2 = param_3[4] * *pfVar4;
    fVar1 = *((float *)GEN_TOP((param_1 + uVar3 * 4)));
    if (fVar5 < fVar2) {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar5 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar2;
    }
    else {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar2 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar5;
    }
    *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) = fVar5;
    fVar5 = param_3[2] * pfVar4[4];
    fVar2 = pfVar4[4] * param_3[5];
    fVar1 = *((float *)GEN_TOP((param_1 + uVar3 * 4)));
    if (fVar5 < fVar2) {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar5 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar2;
    }
    else {
      *((float *)GEN_TOP((param_1 + uVar3 * 4))) = fVar2 + fVar1;
      fVar5 = *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) + fVar5;
    }
    *((float *)GEN_TOP((param_1 + 0xc + uVar3 * 4))) = fVar5;
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar3 < 3);
  return 0;
}

/* ref: FUN_00c9bf20 */
GEN_LIB GEN_FRAME byte F_00c9bf20(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc9bf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
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
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = *((float *)GEN_TOP(param_3));
  fVar11 = *((float *)GEN_TOP(param_4)) - fVar10;
  fVar3 = *((float *)GEN_TOP((param_4 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar4 = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar5 = *((float *)GEN_TOP(param_5)) - fVar10;
  fVar6 = *((float *)GEN_TOP((param_5 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
  fVar7 = *((float *)GEN_TOP((param_5 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
  fVar12 = *((float *)GEN_TOP(param_2));
  fVar1 = *((float *)GEN_TOP((param_2 + 4)));
  fVar2 = *((float *)GEN_TOP((param_2 + 8)));
  fVar13 = (float)((double)fVar7 * (double)fVar1 - (double)fVar6 * (double)fVar2);
  fVar14 = (float)((double)fVar2 * (double)fVar5 - (double)fVar7 * (double)fVar12);
  fVar15 = (float)((double)fVar6 * (double)fVar12 - (double)fVar1 * (double)fVar5);
  fVar16 = ((float)GEN_TOF((((double)fVar14 * (double)fVar3 + (double)fVar13 * (double)fVar11) +
                  (double)fVar15 * (double)fVar4)));
  if ((!GEN_ISNAN(fVar16) && !GEN_ISNAN(REFG(float, 0x11290b0))) && !(fVar16 <= REFG(float, 0x11290b0))) {
    fVar10 = *param_1 - fVar10;
    fVar8 = param_1[1] - *((float *)GEN_TOP((param_3 + 4)));
    fVar9 = param_1[2] - *((float *)GEN_TOP((param_3 + 8)));
    fVar13 = ((float)GEN_TOF((((double)fVar8 * (double)fVar14 + (double)fVar10 * (double)fVar13) +
                    (double)fVar9 * (double)fVar15)));
    if ((!(fVar13 < 0.0)) && (!(fVar16 < fVar13))) {
      fVar14 = (float)((double)fVar9 * (double)fVar11 - (double)fVar4 * (double)fVar10);
      fVar11 = (float)((double)fVar10 * (double)fVar3 - (double)fVar8 * (double)fVar11);
      fVar10 = (float)((double)fVar8 * (double)fVar4 - (double)fVar9 * (double)fVar3);
      fVar12 = ((float)GEN_TOF((((double)fVar1 * (double)fVar14 + (double)fVar12 * (double)fVar10) +
                      (double)fVar2 * (double)fVar11)));
      if ((!(fVar12 < 0.0)) && (!((double)fVar16 < (double)fVar12 + (double)fVar13))) {
        *param_7 = ((float)GEN_TOF((((double)fVar14 * (double)fVar6 + (double)fVar10 * (double)fVar5) +
                          (double)fVar11 * (double)fVar7))) * (float)(REFG(double, 0x1088130) / (double)fVar16);
        fVar1 = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
        fVar10 = *((float *)GEN_TOP((param_4 + 4))) - *((float *)GEN_TOP((param_3 + 4)));
        fVar12 = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
        fVar2 = *((float *)GEN_TOP(param_5)) - *((float *)GEN_TOP(param_4));
        fVar4 = *((float *)GEN_TOP((param_5 + 4))) - *((float *)GEN_TOP((param_4 + 4)));
        fVar3 = *((float *)GEN_TOP((param_5 + 8))) - *((float *)GEN_TOP((param_4 + 8)));
        *param_6 = (float)((double)fVar3 * (double)fVar10 - (double)fVar4 * (double)fVar12);
        param_6[1] = (float)((double)fVar12 * (double)fVar2 - (double)fVar3 * (double)fVar1);
        param_6[2] = (float)((double)fVar4 * (double)fVar1 - (double)fVar10 * (double)fVar2);
        F_00553ac0(param_6 GEN_EDX_ARG);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c9c410 */
GEN_LIB GEN_FRAME byte F_00c9c410(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc9c410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (fVar1 < 0.0) {
      *param_4 = 0.0;
    }
    fVar1 = *param_4;
    *param_5 = *param_2 * fVar1;
    param_5[1] = fVar1 * param_2[1];
    param_5[2] = fVar1 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_1[1] + param_5[1];
    param_5[2] = param_5[2] + param_1[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9c5f0 */
GEN_LIB GEN_FRAME byte F_00c9c5f0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc9c5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (0.0 <= fVar1) {
      *param_5 = *param_2 * fVar1;
      param_5[1] = fVar1 * param_2[1];
      param_5[2] = fVar1 * param_2[2];
      *param_5 = *param_1 + *param_5;
      param_5[1] = param_1[1] + param_5[1];
      param_5[2] = param_5[2] + param_1[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c9c7d0 */
GEN_LIB GEN_FRAME byte F_00c9c7d0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc9c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    fVar2 = *param_4;
    *param_5 = *param_2 * fVar2;
    param_5[1] = fVar2 * param_2[1];
    param_5[2] = fVar2 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_5[1] + param_1[1];
    param_5[2] = param_1[2] + param_5[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9c9b0 */
GEN_LIB GEN_FRAME byte F_00c9c9b0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc9c9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    fVar2 = *param_4;
    *param_5 = *param_2 * fVar2;
    param_5[1] = fVar2 * param_2[1];
    param_5[2] = fVar2 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_5[1] + param_1[1];
    param_5[2] = param_1[2] + param_5[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9cb90 */
GEN_LIB GEN_FRAME byte F_00c9cb90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc9cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 * puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  
  uVar7 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  fVar10 = *((float *)GEN_TOP((param_3 + 4)));
  fVar12 = *((float *)GEN_TOP((param_3 + 8)));
  fVar1 = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
  fVar3 = *((float *)GEN_TOP((param_4 + 4))) - fVar10;
  fVar2 = *((float *)GEN_TOP((param_4 + 8))) - fVar12;
  fVar11 = *((float *)GEN_TOP(param_1));
  fVar4 = fVar11 - *((float *)GEN_TOP(param_3));
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar10 = *((float *)GEN_TOP((param_1 + 4))) - fVar10;
  (*(float *)(gen_frame + 0x10)) = fVar10;
  fVar12 = *((float *)GEN_TOP((param_1 + 8))) - fVar12;
  fVar11 = *((float *)GEN_TOP(param_2)) - fVar11;
  fVar5 = *((float *)GEN_TOP((param_2 + 4))) - *((float *)GEN_TOP((param_1 + 4)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = fVar5;
  fVar6 = *((float *)GEN_TOP((param_2 + 8))) - *((float *)GEN_TOP((param_1 + 8)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = fVar6;
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar9 = ((float)GEN_TOF((((double)fVar10 * (double)fVar3 + (double)fVar4 * (double)fVar1) +
                 (double)fVar12 * (double)fVar2)));
  fVar13 = ((float)GEN_TOF((((double)fVar5 * (double)fVar3 + (double)fVar11 * (double)fVar1) +
                  (double)fVar6 * (double)fVar2)));
  fVar14 = ((float)GEN_TOF((((double)fVar1 * (double)fVar1 + (double)fVar3 * (double)fVar3) +
                  (double)fVar2 * (double)fVar2)));
  fVar15 = fVar13 + fVar9;
  (*(float *)(gen_frame + 0x2c)) = fVar14;
  if (((fVar9 < 0.0) && (fVar15 < 0.0)) ||
     ((fVar14 < fVar9 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar14)) && !(fVar15 <= fVar14))))) {
    return 0;
  }
  dVar19 = (double)fVar11 * (double)fVar11 + (double)fVar5 * (double)fVar5;
  (*(double *)(gen_frame + 0x18)) = dVar19;
  fVar15 = (float)(dVar19 + (double)fVar6 * (double)fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar15;
  fVar16 = ((float)GEN_TOF((((double)fVar11 * (double)fVar4 + (double)fVar5 * (double)fVar10) +
                  (double)fVar6 * (double)fVar12)));
  fVar17 = (float)((double)fVar15 * (double)fVar14 - (double)fVar13 * (double)fVar13);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar17;
  (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar17),(int)(ulonglong)gen_d2bits(dVar19)));
  fVar18 = (float)(REFG(double, 0x1088130) / ((double)GEN_TOD(SQRT(fVar14))));
  if (0.0 < fVar18) {
    fVar1 = fVar1 * fVar18;
    fVar3 = fVar3 * fVar18;
    fVar2 = fVar2 * fVar18;
  }
  else {
    fVar3 = REFG(float, 0x1379704);
    fVar2 = REFG(float, 0x1379708);
    fVar1 = REFG(float, 0x1379700);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar3 = REFG(float, 0x1087f04);
      fVar2 = REFG(float, 0x1379708);
      fVar1 = REFG(float, 0x1379700);
    }
  }
  fVar18 = (float)(REFG(double, 0x1088130) / ((double)GEN_TOD(SQRT(fVar15))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  if (0.0 < fVar18) {
    fVar11 = fVar18 * fVar11;
    fVar5 = fVar5 * fVar18;
    fVar6 = fVar6 * fVar18;
  }
  else {
    fVar6 = REFG(float, 0x1379708);
    fVar11 = REFG(float, 0x1379700);
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar6 = REFG(float, 0x1379708);
      fVar11 = REFG(float, 0x1379700);
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  fVar18 = ((float)GEN_TOF((((double)fVar11 * (double)fVar1 + (double)fVar5 * (double)fVar3) +
                  (double)fVar6 * (double)fVar2)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = fVar18;
  fVar12 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar4 * (double)fVar4 + (double)fVar10 * (double)fVar10)
                                  + (double)fVar12 * (double)fVar12))) -
                  (double)param_5 * (double)param_5)));
  (*(float *)(gen_frame + 0x2c)) = fVar12;
  fVar10 = (float)((double)fVar12 * (double)fVar14 - (double)fVar9 * (double)fVar9);
  (*(float *)(gen_frame + 0x30)) = fVar10;
  dVar19 = (double)fVar18;
  (*(double *)(gen_frame + 0x24)) = dVar19;
  if (((float)GEN_TOF(gen_bits2d((ulonglong)
                        gen_d2bits((double)((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar3 * (double)fVar3 +
                                                                   (double)fVar1 * (double)fVar1) +
                                                                  (double)fVar2 * (double)fVar2))) *
                                                   (double)((float)GEN_TOF((((double)fVar5 * (double)fVar5 +
                                                                   (double)fVar11 * (double)fVar11)
                                                                  + (double)fVar6 * (double)fVar6))) -
                                                  dVar19 * dVar19)))) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b4))
  {
    if (!(0.0 < fVar10)) {
      if (fVar9 < 0.0) {
        *param_6 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ REFG(uint, 0x10920d0)) / fVar15;
        fVar10 = *((float *)GEN_TOP((param_4 + 4)));
        (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(param_3)) - *((float *)GEN_TOP(param_4));
        (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_3 + 4))) - fVar10;
        (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_3 + 8))) - *((float *)GEN_TOP((param_4 + 8)));
        puVar8 = ((undefined4 *)GEN_TOP(F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        *param_7 = *puVar8;
        param_7[1] = puVar8[1];
        param_7[2] = puVar8[2];
        *param_8 = 1;
        return 1;
      }
      if (fVar14 < fVar9) {
        *param_6 = ((float)GEN_TOF((((double)fVar13 - (double)fVar16) / (double)fVar15)));
        fVar10 = *((float *)GEN_TOP((param_3 + 4)));
        (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
        (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_4 + 4))) - fVar10;
        (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
        puVar8 = ((undefined4 *)GEN_TOP(F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        *param_7 = *puVar8;
        param_7[1] = puVar8[1];
        param_7[2] = puVar8[2];
        *param_8 = 2;
        return 1;
      }
    }
  }
  else {
    fVar11 = (float)((double)fVar16 * (double)fVar14 - (double)fVar13 * (double)fVar9);
    dVar19 = (double)fVar11;
    fVar10 = (float)(dVar19 * dVar19 - (double)fVar10 * (double)fVar17);
    if (!(fVar10 < 0.0)) {
      fVar10 = ((float)GEN_TOF(((((double)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar11) ^ REFG(uint, 0x10920d0)))) -
                       ((double)GEN_TOD(SQRT(fVar10)))) / (double)fVar17)));
      dVar19 = (double)fVar10 * (double)fVar13 + (double)fVar9;
      *param_6 = fVar10;
      if (dVar19 < 0.0) {
        if (!(fVar13 <= 0.0)) {
          fVar13 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ uVar7) / fVar13;
          dVar19 = (double)fVar16 * *(double *)&REFG(undefined, 0x1092098);
          *param_6 = fVar13;
          if ((((double)fVar13 * (double)fVar15 + dVar19) * (double)fVar13 + (double)fVar12 <= 0.0)
             && (!(fVar13 < 0.0))) {
            fVar10 = *((float *)GEN_TOP((param_4 + 4)));
            (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(param_3)) - *((float *)GEN_TOP(param_4));
            (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_3 + 4))) - fVar10;
            (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_3 + 8))) - *((float *)GEN_TOP((param_4 + 8)));
            puVar8 = ((undefined4 *)GEN_TOP(F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG)));
            *param_7 = *puVar8;
            param_7[1] = puVar8[1];
            param_7[2] = puVar8[2];
            *param_8 = 1;
            return 1;
          }
        }
      }
      else if ((double)fVar14 < dVar19) {
        if (!(0.0 <= fVar13)) {
          fVar10 = ((float)GEN_TOF((((double)fVar14 - (double)fVar9) / (double)fVar13)));
          dVar19 = (double)fVar9 * *(double *)&REFG(undefined, 0x1092098);
          *param_6 = fVar10;
          if (((((double)fVar16 - (double)fVar13) * *(double *)&REFG(undefined, 0x1092098) +
               (double)fVar10 * (double)fVar15) * (double)fVar10 +
               (((double)fVar12 + (double)fVar14) - dVar19) <= 0.0) && (!(fVar10 < 0.0))) {
            fVar10 = *((float *)GEN_TOP((param_3 + 4)));
            (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(param_4)) - *((float *)GEN_TOP(param_3));
            (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_4 + 4))) - fVar10;
            (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((param_4 + 8))) - *((float *)GEN_TOP((param_3 + 8)));
            puVar8 = ((undefined4 *)GEN_TOP(F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG)));
            *param_7 = *puVar8;
            param_7[1] = puVar8[1];
            param_7[2] = puVar8[2];
            *param_8 = 2;
            return 1;
          }
        }
      }
      else {
        *param_6 = fVar10;
        if ((!(fVar10 < 0.0)) && (!(REFG(float, 0x1087f04) < fVar10))) {
          fVar2 = (*((float *)GEN_TOP(param_2)) - *((float *)GEN_TOP(param_1))) * fVar10 + *((float *)GEN_TOP(param_1));
          fVar12 = *((float *)GEN_TOP((param_3 + 8)));
          fVar3 = *((float *)GEN_TOP((param_1 + 4))) +
                  (*((float *)GEN_TOP((param_2 + 4))) - *((float *)GEN_TOP((param_1 + 4)))) * fVar10;
          (*(float *)(gen_frame + 0x4)) = fVar3;
          fVar4 = *((float *)GEN_TOP((param_1 + 8))) +
                  (*((float *)GEN_TOP((param_2 + 8))) - *((float *)GEN_TOP((param_1 + 8)))) * fVar10;
          fVar10 = *((float *)GEN_TOP(param_3));
          (*(float *)(gen_frame + 0x8)) = fVar4;
          fVar5 = *((float *)GEN_TOP(param_4)) - fVar10;
          fVar11 = *((float *)GEN_TOP((param_3 + 4)));
          fVar6 = *((float *)GEN_TOP((param_4 + 4))) - fVar11;
          fVar1 = *((float *)GEN_TOP((param_4 + 8)));
          (*(float *)(gen_frame + 0x0)) = fVar2;
          fVar1 = fVar1 - fVar12;
          fVar15 = 0.0;
          fVar12 = ((float)GEN_TOF((((double)(fVar3 - fVar11) * (double)fVar6 +
                           (double)(fVar2 - fVar10) * (double)fVar5) +
                          (double)(fVar4 - fVar12) * (double)fVar1))) /
                   ((float)GEN_TOF((((double)fVar5 * (double)fVar5 + (double)fVar6 * (double)fVar6) +
                          (double)fVar1 * (double)fVar1)));
          if ((!GEN_ISNAN(fVar12) && (!(0.0 < fVar12) && fVar12 != 0.0)) ||
             (fVar15 = REFG(float, 0x1087f04), REFG(float, 0x1087f04) < fVar12)) {
            fVar12 = fVar15;
          }
          fVar11 = *((float *)GEN_TOP((param_3 + 4)));
          fVar15 = *((float *)GEN_TOP((param_3 + 8)));
          (*(float *)(gen_frame + 0xc)) = fVar2 - (fVar5 * fVar12 + fVar10);
          (*(float *)(gen_frame + 0x10)) = fVar3 - (fVar6 * fVar12 + fVar11);
          (*(float *)(gen_frame + 0x14)) = fVar4 - (fVar1 * fVar12 + fVar15);
          puVar8 = ((undefined4 *)GEN_TOP(F_00553ac0(&(*(float *)(gen_frame + 0xc)) GEN_EDX_ARG)));
          *param_7 = *puVar8;
          param_7[1] = puVar8[1];
          param_7[2] = puVar8[2];
          *param_8 = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c9d8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9d8d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9d8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c9d8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9d8f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9d8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00c9d900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9d900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9d900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(float, 0x15d76a4);
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(float, 0x15d76a4);
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x15d76a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x4c))), REFG(float, 0x15d76a8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x15d76ac));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  return (uint)this;
}

/* ref: FUN_00c9d9e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c9d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9d9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x40)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + *((uint *)GEN_TOP(((int)this + 0x40))) * 4))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) + 1;
  return *((uint *)GEN_TOP(((int)this + 0x40))) < 0x10;
}

/* ref: FUN_00c9da10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9da10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9da10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00c9da20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c9da20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9da20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_00c9da30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c9da30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9da30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x55))) = param_2;
  return param_2;
}

/* ref: FUN_00c9da60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c9da60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9da60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x55)));
}

/* ref: FUN_00c9da70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c9da70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9da70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c9da90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9da90(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc9da90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x190, 0, 4);
  double dVar1;
  float * pfVar2;
  float * pfVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = gen_bits2f(param_4);
  param_1[0x11] = gen_bits2f(param_3);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = gen_bits2f(param_2);
  dVar1 = REFG(double, 0x10920b8);
  param_1[0x12] =
       ((float)GEN_TOF(((((double)*param_6 + REFG(double, 0x10920b8)) - ((double)*param_5 + REFG(double, 0x10920b8))) -
              REFG(double, 0x10920b8))));
  param_1[0x13] = ((float)GEN_TOF(((((double)param_6[1] + dVar1) - ((double)param_5[1] + dVar1)) - dVar1)));
  pfVar2 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[0x11])));
  pfVar3 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[0x10])));
  param_1[0x14] = ((float)GEN_TOF(((((double)param_6[2] + dVar1) - ((double)param_5[2] + dVar1)) - dVar1)));
  (*(float *)(gen_frame + 0x118)) = 0.0;
  (*(float *)(gen_frame + 0x128)) = 0.0;
  (*(float *)(gen_frame + 0x138)) = 0.0;
  (*(float *)(gen_frame + 0x148)) = 0.0;
  fVar6 = pfVar2[1];
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar9 = pfVar2[2];
  (*(float *)(gen_frame + 0xc0)) = *pfVar3 + *pfVar2;
  (*(float *)(gen_frame + 0xc4)) = fVar6 + fVar7;
  (*(float *)(gen_frame + 0xc8)) = fVar9 + fVar8;
  F_00c98b30(&(*(float *)(gen_frame + 0x10c)),&(*(float *)(gen_frame + 0xc0)));
  pfVar2 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x80)),param_1[0x13])));
  pfVar3 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x40)),param_1[0x14])));
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  fVar8 = *pfVar3;
  fVar9 = pfVar3[4];
  fVar4 = pfVar3[8];
  (*(float *)(gen_frame + 0x14c)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar6 + (double)fVar9 * (double)fVar7) +
                     (double)pfVar2[2] * (double)fVar4) + (double)pfVar2[3] * (double)pfVar3[0xc])));
  (*(float *)(gen_frame + 0x150)) = ((float)GEN_TOF(((((double)pfVar3[1] * (double)fVar6 + (double)pfVar3[5] * (double)fVar7) +
                     (double)pfVar3[9] * (double)pfVar2[2]) +
                    (double)pfVar3[0xd] * (double)pfVar2[3])));
  (*(float *)(gen_frame + 0x154)) = ((float)GEN_TOF(((((double)pfVar3[2] * (double)fVar6 + (double)pfVar3[6] * (double)fVar7) +
                     (double)pfVar3[10] * (double)pfVar2[2]) +
                    (double)pfVar3[0xe] * (double)pfVar2[3])));
  fVar5 = pfVar2[4];
  (*(float *)(gen_frame + 0x158)) = ((float)GEN_TOF(((((double)pfVar3[3] * (double)fVar6 + (double)pfVar3[7] * (double)fVar7) +
                     (double)pfVar3[0xb] * (double)pfVar2[2]) +
                    (double)pfVar3[0xf] * (double)pfVar2[3])));
  fVar6 = pfVar2[5];
  (*(float *)(gen_frame + 0x15c)) = ((float)GEN_TOF(((((double)fVar5 * (double)fVar8 + (double)fVar6 * (double)fVar9) +
                     (double)pfVar2[6] * (double)fVar4) + (double)pfVar2[7] * (double)pfVar3[0xc])));
  (*(float *)(gen_frame + 0x160)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar3[1] + (double)fVar6 * (double)pfVar3[5]) +
                     (double)pfVar2[6] * (double)pfVar3[9]) +
                    (double)pfVar2[7] * (double)pfVar3[0xd])));
  (*(float *)(gen_frame + 0x164)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar3[2] + (double)fVar6 * (double)pfVar3[6]) +
                     (double)pfVar2[6] * (double)pfVar3[10]) +
                    (double)pfVar2[7] * (double)pfVar3[0xe])));
  fVar7 = pfVar2[8];
  (*(float *)(gen_frame + 0x168)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar3[3] + (double)fVar6 * (double)pfVar3[7]) +
                     (double)pfVar2[6] * (double)pfVar3[0xb]) +
                    (double)pfVar2[7] * (double)pfVar3[0xf])));
  fVar6 = pfVar2[9];
  (*(float *)(gen_frame + 0x16c)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar8 + (double)fVar6 * (double)fVar9) +
                     (double)pfVar2[10] * (double)fVar4) + (double)pfVar2[0xb] * (double)pfVar3[0xc]
                    )));
  (*(float *)(gen_frame + 0x170)) = ((float)GEN_TOF(((((double)fVar7 * (double)pfVar3[1] + (double)fVar6 * (double)pfVar3[5]) +
                     (double)pfVar2[10] * (double)pfVar3[9]) +
                    (double)pfVar2[0xb] * (double)pfVar3[0xd])));
  (*(float *)(gen_frame + 0x174)) = ((float)GEN_TOF(((((double)fVar7 * (double)pfVar3[2] + (double)fVar6 * (double)pfVar3[6]) +
                     (double)pfVar2[10] * (double)pfVar3[10]) +
                    (double)pfVar2[0xb] * (double)pfVar3[0xe])));
  fVar5 = pfVar2[0xf];
  fVar10 = pfVar2[0xd];
  fVar11 = pfVar2[0xe];
  (*(float *)(gen_frame + 0x178)) = ((float)GEN_TOF(((((double)fVar7 * (double)pfVar3[3] + (double)fVar6 * (double)pfVar3[7]) +
                     (double)pfVar2[10] * (double)pfVar3[0xb]) +
                    (double)pfVar2[0xb] * (double)pfVar3[0xf])));
  fVar6 = pfVar2[0xc];
  (*(float *)(gen_frame + 0x17c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar8 + (double)fVar10 * (double)fVar9) +
                     (double)fVar11 * (double)fVar4) + (double)fVar5 * (double)pfVar3[0xc])));
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((((double)fVar6 * (double)pfVar3[1] + (double)fVar10 * (double)pfVar3[5]) +
                     (double)fVar11 * (double)pfVar3[9]) + (double)fVar5 * (double)pfVar3[0xd])));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((((double)fVar6 * (double)pfVar3[2] + (double)fVar10 * (double)pfVar3[6]) +
                    (double)fVar11 * (double)pfVar3[10]) + (double)fVar5 * (double)pfVar3[0xe])));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((((double)fVar6 * (double)pfVar3[3] + (double)pfVar2[0xd] * (double)pfVar3[7]) +
                    (double)pfVar3[0xb] * (double)fVar11) + (double)fVar5 * (double)pfVar3[0xf])));
  pfVar2 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x0)),param_1[0x12])));
  fVar6 = pfVar2[1];
  fVar7 = *pfVar2;
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[3];
  fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x15c)) * (double)fVar6 + (double)fVar7 * (double)(*(float *)(gen_frame + 0x14c))) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9)));
  fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar7 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar6) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)fVar8) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar9)));
  (*(float *)(gen_frame + 0xd0)) = fVar24;
  fVar4 = pfVar2[5];
  fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar7 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar6) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)fVar8) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar9)));
  fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x158)) * (double)fVar7) +
                   (double)(*(float *)(gen_frame + 0x178)) * (double)fVar8) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar9)));
  fVar6 = pfVar2[4];
  fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x15c)) * (double)fVar4 + (double)fVar6 * (double)(*(float *)(gen_frame + 0x14c))) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)pfVar2[6]) + (double)(*(float *)(gen_frame + 0x17c)) * (double)pfVar2[7])));
  (*(float *)(gen_frame + 0xdc)) = fVar20;
  fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar4) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)pfVar2[6]) + (double)(*(float *)(gen_frame + 0x180)) * (double)pfVar2[7])));
  (*(float *)(gen_frame + 0xe0)) = fVar21;
  fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar4) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)pfVar2[6]) + (double)(*(float *)(gen_frame + 0x184)) * (double)pfVar2[7])));
  fVar4 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar4 + (double)fVar6 * (double)(*(float *)(gen_frame + 0x158))) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)pfVar2[6]) + (double)(*(float *)(gen_frame + 0x188)) * (double)pfVar2[7])));
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  fVar6 = pfVar2[9];
  fVar11 = ((float)GEN_TOF(((((double)pfVar2[8] * (double)(*(float *)(gen_frame + 0x14c)) + (double)(*(float *)(gen_frame + 0x15c)) * (double)fVar6) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)pfVar2[10]) + (double)(*(float *)(gen_frame + 0x17c)) * (double)pfVar2[0xb])));
  (*(float *)(gen_frame + 0xec)) = fVar11;
  fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)pfVar2[8] + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar6) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)pfVar2[10]) + (double)(*(float *)(gen_frame + 0x180)) * (double)pfVar2[0xb])));
  (*(float *)(gen_frame + 0xf0)) = fVar12;
  fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)pfVar2[8] + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar6) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)pfVar2[10]) + (double)(*(float *)(gen_frame + 0x184)) * (double)pfVar2[0xb])));
  (*(float *)(gen_frame + 0xf4)) = fVar13;
  fVar7 = pfVar2[0xe];
  fVar8 = pfVar2[0xf];
  fVar5 = ((float)GEN_TOF(((((double)pfVar2[8] * (double)(*(float *)(gen_frame + 0x158)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar6) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)pfVar2[10]) + (double)(*(float *)(gen_frame + 0x188)) * (double)pfVar2[0xb])));
  fVar6 = pfVar2[0xc];
  (*(float *)(gen_frame + 0xf8)) = fVar5;
  fVar9 = pfVar2[0xd];
  fVar14 = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x14c)) + (double)(*(float *)(gen_frame + 0x15c)) * (double)fVar9) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar7) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8)));
  (*(float *)(gen_frame + 0xfc)) = fVar14;
  fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar9) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)fVar7) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x100)) = fVar15;
  fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar9) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)fVar7) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x104)) = fVar16;
  fVar6 = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x158)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar9) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x108)) = fVar6;
  fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10c)) * (double)fVar23 + (double)(*(float *)(gen_frame + 0x11c)) * (double)fVar24) +
                   (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar25) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar10)));
  (*(float *)(gen_frame + 0x14c)) = fVar17;
  fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar24 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar23) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar25) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar10)));
  (*(float *)(gen_frame + 0x150)) = fVar18;
  fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar24 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar23) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar25) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar10)));
  (*(float *)(gen_frame + 0x154)) = fVar19;
  fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar24 + (double)fVar23 * (double)(*(float *)(gen_frame + 0x118))) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar25) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar10)));
  (*(float *)(gen_frame + 0x158)) = fVar7;
  fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar21 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar20) +
                   (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar22) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x15c)) = fVar10;
  fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar21 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar20) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar22) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x160)) = fVar23;
  fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar21 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar20) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar22) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x164)) = fVar24;
  fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar21 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar20) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar22) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x168)) = fVar8;
  fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar12 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar11) +
                   (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x16c)) = fVar20;
  fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar12 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar11) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x170)) = fVar21;
  fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar12 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar11) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x174)) = fVar22;
  fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar12 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar11) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x178)) = fVar9;
  fVar4 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar14) +
                  (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar6)));
  (*(float *)(gen_frame + 0x17c)) = fVar4;
  fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar14) +
                  (double)(*(float *)(gen_frame + 0x130)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar6)));
  (*(float *)(gen_frame + 0x180)) = fVar5;
  *param_1 = fVar17;
  param_1[1] = fVar18;
  param_1[2] = fVar19;
  param_1[3] = fVar7;
  param_1[4] = fVar10;
  param_1[5] = fVar23;
  param_1[6] = fVar24;
  param_1[7] = fVar8;
  param_1[8] = fVar20;
  param_1[9] = fVar21;
  param_1[10] = fVar22;
  param_1[0xb] = fVar9;
  param_1[0xc] = fVar4;
  param_1[0xd] = fVar5;
  param_1[0xe] = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar14) +
                         (double)(*(float *)(gen_frame + 0x134)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar6)));
  param_1[0xf] = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar14) +
                         (double)(*(float *)(gen_frame + 0x138)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar6)));
  return (uint)param_1;
}

/* ref: FUN_00c9ee40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9ee40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc9ee40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar9 = *((float * PTR32 *)GEN_TOP(((int)this + 0x44)));
  fVar10 = *param_2 - *pfVar9;
  fVar11 = param_2[1] - pfVar9[1];
  fVar12 = param_2[2] - pfVar9[2];
  fVar1 = *((float *)GEN_TOP(((int)this + 0x24)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x28)));
  fVar3 = *((float *)GEN_TOP(((int)this + 0x14)));
  fVar4 = *((float *)GEN_TOP(((int)this + 0x18)));
  fVar5 = *((float *)GEN_TOP(((int)this + 4)));
  fVar6 = *((float *)GEN_TOP(((int)this + 8)));
  fVar7 = *((float *)GEN_TOP(((int)this + 0x34)));
  fVar8 = *((float *)GEN_TOP(((int)this + 0x38)));
  *param_1 = *((float *)GEN_TOP(((int)this + 0x30))) +
             ((*(float *)((int)(uintptr_t)this) * fVar10 + *((float *)GEN_TOP(((int)this + 0x10))) * fVar11) +
             *((float *)GEN_TOP(((int)this + 0x20))) * fVar12);
  param_1[1] = fVar7 + ((fVar5 * fVar10 + fVar3 * fVar11) + fVar1 * fVar12);
  param_1[2] = fVar8 + ((fVar6 * fVar10 + fVar4 * fVar11) + fVar2 * fVar12);
  return 0;
}

/* ref: FUN_00c9f060 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00c9f090 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00c9f0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = iVar1;
  if (iVar1 != 0) {
    *((uint *)GEN_TOP((iVar1 + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00c9f100 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c9f100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD);
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      fVar1 = *((float *)GEN_TOP(((int)this + 0x18))) - *((float *)GEN_TOP(((int)this + 0xc)));
      fVar2 = *((float *)GEN_TOP(((int)this + 0x1c))) - *((float *)GEN_TOP(((int)this + 0x10)));
      fVar3 = *((float *)GEN_TOP(((int)this + 0x20))) - *((float *)GEN_TOP(((int)this + 0x14)));
      fVar4 = *((float *)GEN_TOP(((int)this + 0x24))) - *((float *)GEN_TOP(((int)this + 0x18)));
      fVar6 = *((float *)GEN_TOP(((int)this + 0x28))) - *((float *)GEN_TOP(((int)this + 0x1c)));
      fVar5 = *((float *)GEN_TOP(((int)this + 0x2c))) - *((float *)GEN_TOP(((int)this + 0x20)));
      *param_1 = (float)((double)fVar5 * (double)fVar2 - (double)fVar6 * (double)fVar3);
      param_1[1] = (float)((double)fVar3 * (double)fVar4 - (double)fVar5 * (double)fVar1);
      param_1[2] = (float)((double)fVar6 * (double)fVar1 - (double)fVar2 * (double)fVar4);
      F_00553ac0(param_1 GEN_EDX_ARG);
      return 1;
    case 4: ;
      break;
    default: ;
      return 0;
    }
  }
  *param_1 = *((float *)GEN_TOP(((int)this + 0x30)));
  param_1[1] = *((float *)GEN_TOP(((int)this + 0x34)));
  param_1[2] = *((float *)GEN_TOP(((int)this + 0x38)));
  return 1;
}

/* ref: FUN_00c9f290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  int * piVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  uint uVar3;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  *((char *)GEN_TOP((param_1 + 0x54))) = param_2;
  if (param_2 == '\0') {
    uVar2 = F_00c9d900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,2);
    uVar3 = uVar2;
    for (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x60))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,uVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_00c9f2d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c9f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9f2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00c9f300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9f300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = F_00c9d900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,1);
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,uVar4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar3 + 8)));
    *((undefined4 *)GEN_TOP((iVar3 + 4))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 8))) = 0;
    iVar3 = iVar2;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar4 != 0) {
    *((undefined4 *)GEN_TOP((uVar4 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar4;
}

/* ref: FUN_00c9f380 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c9f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc9f380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  bVar1 = F_00c9f100(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar1 != 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    *param_2 = (*(undefined4 *)(gen_frame + 0x4));
    *param_3 = (*(undefined4 *)(gen_frame + 0x8));
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9f3e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c9f3e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9f3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11290c8));
  return (uint)in_ecx;
}

/* ref: FUN_00c9f400 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00c9f450 */
GEN_LIB GEN_NOFRAME unsigned int F_00c9f450(void)
{
  GEN_ENTER(0xc9f450u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c9f460 */
GEN_LIB GEN_NOFRAME unsigned int F_00c9f460(void)
{
  GEN_ENTER(0xc9f460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c9f4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f4a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c9f4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c9f540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f540(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xc9f540u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *param_2 = *in_ecx + param_3;
  param_2[1] = in_ecx[1] + param_3;
  param_2[2] = in_ecx[2] + param_3;
  return (uint)param_2;
}

/* ref: FUN_00c9f5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f5a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xc9f5a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *param_2 = *in_ecx - param_3;
  param_2[1] = in_ecx[1] - param_3;
  param_2[2] = in_ecx[2] - param_3;
  return (uint)param_2;
}

/* ref: FUN_00c9f600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_2;
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00c9f630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f630(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  if (*param_2 < *in_ecx) {
    *in_ecx = *param_2;
  }
  if (param_2[1] < in_ecx[1]) {
    in_ecx[1] = param_2[1];
  }
  if (param_2[2] < in_ecx[2]) {
    in_ecx[2] = param_2[2];
  }
  if (in_ecx[3] < *param_2) {
    in_ecx[3] = *param_2;
  }
  if (in_ecx[4] < param_2[1]) {
    in_ecx[4] = param_2[1];
  }
  if (in_ecx[5] < param_2[2]) {
    in_ecx[5] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00c9f6f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc9f6f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x50))) = param_2;
  return;
}

/* ref: FUN_00c9f710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc9f710u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc9f720u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc9f730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc9f740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc9f750u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  return (int)(((double)param_2 - (double)*((float *)GEN_TOP((in_ecx + 4)))) / (double)*((float *)GEN_TOP((in_ecx + 0xc)))
              );
}

/* ref: FUN_00c9f780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc9f780u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  return (int)(((double)param_2 - (double)*((float *)GEN_TOP((in_ecx + 0x10)))) /
              (double)*((float *)GEN_TOP((in_ecx + 0x18))));
}

/* ref: FUN_00c9f7d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c9f7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc9f7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c9f800 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c9f800(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc9f800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00c9f810 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c9f810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc9f810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290e8));
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
      iVar1 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar1))))))
                  (*((int *)GEN_TOP(((int)this + 0x20))) + iVar1,0);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x24))));
    }
    F_00c96f60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return;
}

/* ref: FUN_00c9f860 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c9f860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc9f860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = (param_1 << 8 | param_1) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (uVar1 * 2 | uVar1) & 0x55555555;
}

/* ref: FUN_00c9f8a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9f8a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xc9f8a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  uint local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (uint)(longlong)
                  TRUNC(((float10)(*(float *)&gen_args[0]) - (float10)*((float *)GEN_TOP((param_1 + 4)))) /
                        (float10)*((float *)GEN_TOP((param_1 + 0xc))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = (local_c << 8 | local_c) & 0xff00ff;
  uVar2 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  fVar3 = (float10)(*(float *)&gen_args[1]);
  uVar2 = uVar2 * 4 | uVar2;
  (*(undefined2 *)((char *)&(*(float *)&gen_args[1]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[1]) + 0)));
  local_c = (uint)(longlong)
                  TRUNC((fVar3 - (float10)*((float *)GEN_TOP((param_1 + 0x10)))) /
                        (float10)*((float *)GEN_TOP((param_1 + 0x18))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = (local_c << 8 | local_c) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (((uVar1 * 2 | uVar1) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar1 * 2 | uVar1)) * 2 |
         uVar2 & 0x11111111;
}

/* ref: FUN_00c9f970 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9f970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xc9f970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x3d))) = 0;
  in_ecx[1] = *param_3;
  in_ecx[2] = param_3[1];
  in_ecx[3] = param_3[2];
  in_ecx[4] = *param_4;
  in_ecx[5] = param_4[1];
  in_ecx[6] = param_4[2];
  in_ecx[7] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00c9f9f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c9f9f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc9f9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x20))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  }
  return param_1;
}

/* ref: FUN_00c9fa30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c9fa30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xc9fa30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x14))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0x18))) = param_4;
  *((float *)GEN_TOP((in_ecx + 0x1c))) = param_5;
  return;
}

/* ref: FUN_00c9fa60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc9fa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  *param_2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *param_3 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *param_4 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  return (uint)param_3;
}

/* ref: FUN_00c9fa90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c9fa90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc9fa90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((int *)GEN_TOP((param_1 + 0x30))) = *((int *)GEN_TOP((param_1 + 0x30))) - 1;
  return param_1;
}

/* ref: FUN_00c9faa0 */
GEN_LIB GEN_FRAME byte F_00c9faa0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc9faa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc)));
  }
  if ((!((double)(*(float *)(gen_frame + 0x0)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0xc)))) &&
     ((!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0xc)) - (*(float *)(gen_frame + 0x0)))) & REFG(ulonglong, 0x11290a0)))) <=
        REFG(float, 0x1094778)) ||
      ((!((double)(*(float *)(gen_frame + 0x8)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0x14))) &&
       ((!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x8)))) & REFG(ulonglong, 0x11290a0)))) <=
          REFG(float, 0x1094778)) || (!((double)(*(float *)(gen_frame + 0x4)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0x10))))))))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c9fbe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc9fbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 uVar1;
  undefined8 * puVar2;
  int iVar3;
  byte bVar4;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(int *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  bVar4 = *((char *)GEN_TOP((param_1 + 0x1c))) - 1;
  *((byte *)GEN_TOP(((int)this + 0x3c))) = bVar4;
  *((undefined1 *)GEN_TOP(((int)this + 0x3d))) = 0;
  puVar2 = ((undefined8 *)GEN_TOP(F_00ca1d00(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(uint)param_2,(uint)bVar4)));
  *((undefined8 *)GEN_TOP(((int)this + 0x20))) = *puVar2;
  *((undefined8 *)GEN_TOP(((int)this + 0x28))) = puVar2[1];
  *((undefined8 *)GEN_TOP(((int)this + 0x30))) = puVar2[2];
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x10;
  }
  *((int *)GEN_TOP(((int)this + 0x38))) = iVar3;
  if (iVar3 == 0) {
    F_00ca1f00(this GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: FUN_00c9fc90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc9fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 uVar1;
  undefined8 * puVar2;
  int iVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(int *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((char *)GEN_TOP(((int)this + 0x3c))) = *((char *)GEN_TOP((param_1 + 0x1c))) - 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x3d))) = 1;
  puVar2 = ((undefined8 *)GEN_TOP(F_00ca1d00(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(uint)param_2,param_3)));
  *((undefined8 *)GEN_TOP(((int)this + 0x20))) = *puVar2;
  *((undefined8 *)GEN_TOP(((int)this + 0x28))) = puVar2[1];
  *((undefined8 *)GEN_TOP(((int)this + 0x30))) = puVar2[2];
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x10;
  }
  *((int *)GEN_TOP(((int)this + 0x38))) = iVar3;
  if (iVar3 == 0) {
    F_00ca1f00(this GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: FUN_00c9fd60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc9fd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  (*(float *)(gen_frame + 0x8)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xc)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x10)) = param_2[4];
  (*(float *)(gen_frame + 0x14)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  uVar1 = 0;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c9fbe0(param_1 GEN_EDX_FWD,this,&(*(float *)(gen_frame + 0x0)));
  }
  return uVar1;
}

/* ref: FUN_00c9fe00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc9fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  (*(float *)(gen_frame + 0x8)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xc)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x10)) = param_2[4];
  (*(float *)(gen_frame + 0x14)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  uVar1 = 0;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c9fc90(param_1 GEN_EDX_FWD,this,&(*(float *)(gen_frame + 0x0)),param_3);
  }
  return uVar1;
}

/* ref: FUN_00c9fea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c9fea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc9fea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  memcpy(&gen_args[5], &gen_a6, sizeof gen_a6);
  GEN_FRAME_DECL_TOP(0xe4, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  code * pcVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int * piVar13;
  float fVar14;
  
  uVar12 = (*(uint *)&gen_args[3]);
  piVar13 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
  (*(int *)(gen_frame + 0xc4)) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x10))))(piVar13 GEN_EDX_FWD,(*(uint *)&gen_args[3]));
  fVar14 = *((float *)GEN_TOP((uVar12 + 4)));
  fVar1 = *((float *)GEN_TOP((uVar12 + 8)));
  fVar2 = *((float *)GEN_TOP(uVar12));
  (*(float * PTR32 *)(gen_frame + 0x50)) = &(*(float *)(gen_frame + 0xb4));
  fVar3 = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0xb8)) = fVar3 * (*(float *)&gen_args[5]);
  fVar4 = (*(float * PTR32 *)&gen_args[4])[1];
  fVar5 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((*(float *)&gen_args[5]));
  (*(float *)(gen_frame + 0xcc)) = fVar14;
  (*(float *)(gen_frame + 0xd8)) = fVar14;
  fVar4 = fVar14 + fVar4 * (*(float *)&gen_args[5]);
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar5 = fVar1 + fVar5 * (*(float *)&gen_args[5]);
  fVar3 = fVar2 + fVar3 * (*(float *)&gen_args[5]);
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  ((byte *)(gen_frame + 0x0))[0x28] = 0;
  ((byte *)(gen_frame + 0x0))[0x29] = 0;
  ((byte *)(gen_frame + 0x0))[0x2a] = 0;
  ((byte *)(gen_frame + 0x0))[0x2b] = 0;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  ((byte *)(gen_frame + 0x0))[0x30] = 0;
  ((byte *)(gen_frame + 0x0))[0x31] = 0;
  ((byte *)(gen_frame + 0x0))[0x32] = 0;
  ((byte *)(gen_frame + 0x0))[0x33] = 0;
  ((byte *)(gen_frame + 0x0))[0x34] = 0;
  ((byte *)(gen_frame + 0x0))[0x35] = 0;
  ((byte *)(gen_frame + 0x0))[0x36] = 0;
  ((byte *)(gen_frame + 0x0))[0x37] = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = 0;
  ((byte *)(gen_frame + 0x0))[0x39] = 0;
  ((byte *)(gen_frame + 0x0))[0x3a] = 0;
  ((byte *)(gen_frame + 0x0))[0x3b] = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 4;
  (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)&gen_args[4]);
  (*(uint * PTR32 *)(gen_frame + 0x58)) = &(*(uint *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  fVar8 = fVar2;
  if (fVar3 < fVar2) {
    fVar8 = fVar3;
  }
  if (fVar4 < fVar14) {
    (*(float *)(gen_frame + 0xcc)) = fVar4;
  }
  if (fVar5 < fVar1) {
    (*(float *)(gen_frame + 0xd0)) = fVar5;
  }
  if (fVar2 < fVar3) {
    fVar2 = fVar3;
  }
  if (fVar14 < fVar4) {
    fVar14 = fVar4;
  }
  if (fVar1 < fVar5) {
    fVar1 = fVar5;
  }
  uVar6 = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0xac)) = (float)((double)fVar8 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xcc));
  (*(float *)(gen_frame + 0xb4)) = (float)((double)(*(float *)(gen_frame + 0xd0)) - REFG(double, 0x10ac068));
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(int *)(gen_frame + 0xa4)) = 0;
  (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar2 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xbc)) = fVar14;
  (*(float *)(gen_frame + 0xc0)) = (float)((double)fVar1 + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,uVar6,&(*(float *)(gen_frame + 0xac)));
  do {
    if ((*(int *)(gen_frame + 0xa4)) == 0) {
      piVar13 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc4)) + 4))) + 4)));
      pcVar7 = *((gen_code32 *)GEN_TOP((*piVar13 + 0x14)));
      (*pcVar7)(piVar13,uVar12,(*(int * PTR32 *)&gen_args[0]));
      uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return (uint)(uVar12 != 0);
    }
    do {
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((*(float *)&gen_args[5]));
      if ((*(int *)(gen_frame + 0xa4)) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (*(int *)(gen_frame + 0xa4)) - 0x10;
      }
      iVar10 = (*(int *)(gen_frame + 0xa4));
      if (*((char *)GEN_TOP((iVar11 + 0x54))) != '\0') {
        if ((*(int *)(gen_frame + 0xa4)) == 0) {
          piVar13 = ((int *)GEN_TOP(0x0));
        }
        else {
          piVar13 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0xa4)) - 0x10)));
        }
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x4c))))(piVar13 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x4c)));
        iVar10 = (*(int *)(gen_frame + 0xa4));
        if (((char)uVar9 != '\0') && (gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))) < (*(float *)&gen_args[5]))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)));
          iVar10 = (*(int *)(gen_frame + 0xa4));
        }
      }
      if (*((int *)GEN_TOP((iVar10 + 0xc))) == 0) {
        (*(int *)(gen_frame + 0xa4)) = 0;
        break;
      }
      iVar11 = *((int *)GEN_TOP((iVar10 + 0xc))) + 0x10;
      (*(int *)(gen_frame + 0xa4)) = iVar11;
    } while (iVar11 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ca0220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca0220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca0220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xf0, 0, 4);
  float fVar1;
  float fVar2;
  byte bVar3;
  float * pfVar4;
  float * pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte * pbVar17;
  uint uVar18;
  int iVar19;
  int * piVar20;
  undefined * pvVar21;
  float fVar22;
  
  pbVar17 = (*(byte * PTR32 *)&gen_args[2]);
  piVar20 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar20 + 0x10))))(piVar20 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4))));
  pfVar4 = *(float * PTR32 *)(pbVar17 + 0xc);
  bVar3 = *pbVar17;
  (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[2]) & 0xffffff)));
  (*(float *)(gen_frame + 0xe8)) = *pfVar4;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  ((byte *)(gen_frame + 0x0))[0x28] = 0;
  ((byte *)(gen_frame + 0x0))[0x29] = 0;
  ((byte *)(gen_frame + 0x0))[0x2a] = 0;
  ((byte *)(gen_frame + 0x0))[0x2b] = 0;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  ((byte *)(gen_frame + 0x0))[0x30] = 0;
  ((byte *)(gen_frame + 0x0))[0x31] = 0;
  ((byte *)(gen_frame + 0x0))[0x32] = 0;
  ((byte *)(gen_frame + 0x0))[0x33] = 0;
  ((byte *)(gen_frame + 0x0))[0x34] = 0;
  ((byte *)(gen_frame + 0x0))[0x35] = 0;
  ((byte *)(gen_frame + 0x0))[0x36] = 0;
  ((byte *)(gen_frame + 0x0))[0x37] = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = 0;
  ((byte *)(gen_frame + 0x0))[0x39] = 0;
  ((byte *)(gen_frame + 0x0))[0x3a] = 0;
  ((byte *)(gen_frame + 0x0))[0x3b] = 0;
  fVar22 = REFG(float, 0x10abe98);
  if ((bVar3 & 1) != 0) {
    fVar22 = *((float *)GEN_TOP((*(int *)(pbVar17 + 4) + 0xc)));
  }
  pfVar5 = *(float * PTR32 *)(pbVar17 + 4);
  fVar7 = *pfVar5 + fVar22;
  fVar8 = pfVar5[1] + fVar22;
  fVar9 = pfVar5[2] + fVar22;
  (*(float *)(gen_frame + 0xe4)) = fVar9;
  fVar10 = *pfVar5 - fVar22;
  fVar1 = pfVar5[1];
  (*(float *)(gen_frame + 0xdc)) = fVar7;
  (*(float *)(gen_frame + 0xd0)) = fVar7;
  (*(float *)(gen_frame + 0xd8)) = fVar9;
  fVar11 = pfVar5[2] - fVar22;
  (*(float *)(gen_frame + 0xe0)) = fVar8;
  (*(float *)(gen_frame + 0xb8)) = fVar11;
  (*(float *)(gen_frame + 0xc4)) = fVar10;
  (*(float *)(gen_frame + 0xc8)) = fVar1 - fVar22;
  (*(float *)(gen_frame + 0xcc)) = fVar11;
  (*(float *)(gen_frame + 0xd4)) = fVar8;
  if ((!GEN_ISNAN((double)*pfVar4) && !GEN_ISNAN(*(double *)&REFG(double, 0x10a1b50))) &&
      !((double)*pfVar4 <= *(double *)&REFG(double, 0x10a1b50))) {
    *pfVar4 = GEN_FLT_TO(*pfVar4, REFG(float, 0x11290ec));
  }
  fVar2 = **(float * PTR32 *)(pbVar17 + 0xc);
  pfVar4 = *(float * PTR32 *)(pbVar17 + 8);
  pfVar5 = *(float * PTR32 *)(pbVar17 + 4);
  fVar12 = *pfVar4 * fVar2 + *pfVar5;
  fVar13 = pfVar5[1] + pfVar4[1] * fVar2;
  fVar2 = pfVar5[2] + pfVar4[2] * fVar2;
  (*(float *)(gen_frame + 0x5c)) = fVar13;
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar15 = fVar12 - fVar22;
  fVar14 = fVar13 - fVar22;
  (*(float *)(gen_frame + 0x50)) = fVar14;
  fVar16 = fVar2 - fVar22;
  if (fVar15 < fVar10) {
    fVar10 = fVar15;
  }
  if (fVar14 < fVar1 - fVar22) {
    (*(float *)(gen_frame + 0xc8)) = fVar14;
  }
  if (fVar16 < fVar11) {
    (*(float *)(gen_frame + 0xcc)) = fVar16;
  }
  if (fVar7 < fVar15) {
    (*(float *)(gen_frame + 0xd0)) = fVar15;
  }
  if (fVar8 < fVar14) {
    (*(float *)(gen_frame + 0xd4)) = fVar14;
  }
  if (!(fVar9 < fVar16)) {
    fVar16 = fVar9;
  }
  fVar12 = fVar12 + fVar22;
  fVar13 = fVar13 + fVar22;
  fVar2 = fVar2 + fVar22;
  if (fVar12 < fVar10) {
    fVar10 = fVar12;
  }
  if (fVar13 < (*(float *)(gen_frame + 0xc8))) {
    (*(float *)(gen_frame + 0xc8)) = fVar13;
  }
  if (fVar2 < (*(float *)(gen_frame + 0xcc))) {
    (*(float *)(gen_frame + 0xcc)) = fVar2;
  }
  if ((*(float *)(gen_frame + 0xd0)) < fVar12) {
    (*(float *)(gen_frame + 0xd0)) = fVar12;
  }
  fVar22 = (*(float *)(gen_frame + 0xd4));
  if ((*(float *)(gen_frame + 0xd4)) < fVar13) {
    fVar22 = fVar13;
  }
  if (fVar16 < fVar2) {
    fVar16 = fVar2;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(float *)(gen_frame + 0xb4)) = fVar22;
  if ((*pbVar17 & 1) == 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
    (*(float *)(gen_frame + 0xa4)) = (float)((double)fVar10 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xac)) = (float)((double)(*(float *)(gen_frame + 0xcc)) - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb0)) = (float)((double)(*(float *)(gen_frame + 0xd0)) + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar16 + REFG(double, 0x10ac068));
    F_00c9fbe0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar6,&(*(float *)(gen_frame + 0xa4)));
    while ((*(int *)(gen_frame + 0x9c)) != 0) {
      do {
        iVar19 = (*(int *)(gen_frame + 0x9c));
        if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x9c)) + 0x44))) != '\0') {
          **(float * PTR32 *)(pbVar17 + 0xc) = (*(float *)(gen_frame + 0xe8));
          if ((*(int *)(gen_frame + 0x9c)) == 0) {
            piVar20 = ((int *)GEN_TOP(0x0));
          }
          else {
            piVar20 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x9c)) - 0x10)));
          }
          uVar18 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar20 + 0x4c))))(piVar20 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]),pbVar17);
          iVar19 = (*(int *)(gen_frame + 0x9c));
          if (((char)uVar18 != '\0') && (gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))) < (*(float *)(gen_frame + 0xe8)))) {
            (*(float *)(gen_frame + 0xe8)) = gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)));
            F_00550bc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)));
            (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 0, 3))));
            iVar19 = (*(int *)(gen_frame + 0x9c));
          }
        }
        if (*((int *)GEN_TOP((iVar19 + 0xc))) == 0) {
          (*(int *)(gen_frame + 0x9c)) = 0;
          break;
        }
        iVar19 = *((int *)GEN_TOP((iVar19 + 0xc))) + 0x10;
        (*(int *)(gen_frame + 0x9c)) = iVar19;
      } while (iVar19 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      this = (*(undefined * PTR32 *)(gen_frame + 0xc0));
    }
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0xbc)) = ((undefined *)GEN_TOP(0x0));
    uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
    (*(float *)(gen_frame + 0xa4)) = (float)((double)fVar10 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xac)) = (float)((double)(*(float *)(gen_frame + 0xcc)) - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb0)) = (float)((double)(*(float *)(gen_frame + 0xd0)) + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar16 + REFG(double, 0x10ac068));
    F_00c9fbe0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar6,&(*(float *)(gen_frame + 0xa4)));
    while ((*(int *)(gen_frame + 0x9c)) != 0) {
      do {
        iVar19 = (*(int *)(gen_frame + 0x9c));
        if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x9c)) + 0x44))) != '\0') {
          **(float * PTR32 *)(pbVar17 + 0xc) = (*(float *)(gen_frame + 0xe8));
          if ((*(int *)(gen_frame + 0x9c)) == 0) {
            piVar20 = ((int *)GEN_TOP(0x0));
          }
          else {
            piVar20 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x9c)) - 0x10)));
          }
          uVar18 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar20 + 0x4c))))(piVar20 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]),pbVar17);
          iVar19 = (*(int *)(gen_frame + 0x9c));
          if ((((char)uVar18 != '\0') &&
              (((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) <= (double)(*(float *)(gen_frame + 0xe8)) + *(double *)&REFG(undefined, 0x109ce00))) &&
             (0.0 <= gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) {
            (*(float *)(gen_frame + 0xdc)) = 0.0;
            (*(float *)(gen_frame + 0xe0)) = 0.0;
            (*(float *)(gen_frame + 0xe4)) = 0.0;
            F_00c9f100(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
            pfVar4 = *(float * PTR32 *)(pbVar17 + 8);
            pvVar21 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((double)pfVar4[1] * (double)(*(float *)(gen_frame + 0xe0)) +
                                      (double)*pfVar4 * (double)(*(float *)(gen_frame + 0xdc))) +
                                     (double)pfVar4[2] * (double)(*(float *)(gen_frame + 0xe4))))))));
            (*(undefined * PTR32 *)(gen_frame + 0xc0)) = pvVar21;
            if ((!((double)(*(float *)(gen_frame + 0xe8)) - ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) < REFG(double, 0x109cdf8))) ||
               (iVar19 = (*(int *)(gen_frame + 0x9c)), !(((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xbc))))) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar21)))))) {
              (*(float *)(gen_frame + 0xe8)) = gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)));
              F_00550bc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)));
              (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (*(undefined * PTR32 *)(gen_frame + 0xc0));
              (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 0, 3))));
              iVar19 = (*(int *)(gen_frame + 0x9c));
            }
          }
        }
        if (*((int *)GEN_TOP((iVar19 + 0xc))) == 0) {
          (*(int *)(gen_frame + 0x9c)) = 0;
          break;
        }
        iVar19 = *((int *)GEN_TOP((iVar19 + 0xc))) + 0x10;
        (*(int *)(gen_frame + 0x9c)) = iVar19;
      } while (iVar19 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    }
  }
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = **(undefined4 * PTR32 *)(pbVar17 + 0xc);
  }
  piVar20 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar20 + 0x18))))(piVar20 GEN_EDX_ARG,*(undefined4 *)(pbVar17 + 4),(int)&(*(byte * PTR32 *)&gen_args[2]) + 3,(*(undefined * PTR32 *)&gen_args[0]));
  return (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
}

/* ref: FUN_00ca0980 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca0980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca0980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x40))) = 0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)((double)fVar1 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x48)) = (float)((double)fVar3 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x4c)) = (float)((double)fVar1 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x54)) = (float)((double)fVar3 + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,uVar4,&(*(float *)(gen_frame + 0x40)));
  do {
    if ((*(int *)(gen_frame + 0x38)) == 0) {
      return 0;
    }
    do {
      iVar7 = (*(int *)(gen_frame + 0x38));
      if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x44))) != '\0') {
        if ((*(int *)(gen_frame + 0x38)) == 0) {
          piVar8 = ((int *)GEN_TOP(0x0));
        }
        else {
          piVar8 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) - 0x10)));
        }
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x54))))(piVar8 GEN_EDX_ARG,param_2);
        iVar7 = (*(int *)(gen_frame + 0x38));
        if ((char)uVar6 != '\0') {
          if ((*(int *)(gen_frame + 0x38)) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (*(int *)(gen_frame + 0x38)) - 0x10;
          }
          bVar5 = F_00c9d9e0(param_1 GEN_EDX_ARG,iVar7);
          iVar7 = (*(int *)(gen_frame + 0x38));
          if (bVar5 == 0) {
            return 0;
          }
        }
      }
      if (*((int *)GEN_TOP((iVar7 + 0xc))) == 0) {
        (*(int *)(gen_frame + 0x38)) = 0;
        break;
      }
      iVar7 = *((int *)GEN_TOP((iVar7 + 0xc))) + 0x10;
      (*(int *)(gen_frame + 0x38)) = iVar7;
    } while (iVar7 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ca0ac0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca0ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca0ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x40))) = 0;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)((double)fVar1 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x48)) = (float)((double)fVar3 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x4c)) = (float)((double)fVar1 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x54)) = (float)((double)fVar3 + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,uVar4,&(*(float *)(gen_frame + 0x40)));
  do {
    if ((*(int *)(gen_frame + 0x38)) == 0) {
      return 0;
    }
    do {
      iVar7 = (*(int *)(gen_frame + 0x38));
      if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x44))) != '\0') {
        if ((*(int *)(gen_frame + 0x38)) == 0) {
          piVar8 = ((int *)GEN_TOP(0x0));
        }
        else {
          piVar8 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) - 0x10)));
        }
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x50))))(piVar8 GEN_EDX_ARG,param_2,param_3);
        iVar7 = (*(int *)(gen_frame + 0x38));
        if ((char)uVar6 != '\0') {
          if ((*(int *)(gen_frame + 0x38)) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (*(int *)(gen_frame + 0x38)) - 0x10;
          }
          bVar5 = F_00c9d9e0(param_1 GEN_EDX_ARG,iVar7);
          iVar7 = (*(int *)(gen_frame + 0x38));
          if (bVar5 == 0) {
            return 0;
          }
        }
      }
      if (*((int *)GEN_TOP((iVar7 + 0xc))) == 0) {
        (*(int *)(gen_frame + 0x38)) = 0;
        break;
      }
      iVar7 = *((int *)GEN_TOP((iVar7 + 0xc))) + 0x10;
      (*(int *)(gen_frame + 0x38)) = iVar7;
    } while (iVar7 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ca0c00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca0c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca0c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int * piVar7;
  float fVar8;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x10)));
  fVar8 = ((float)GEN_TOF(((double)*((float *)GEN_TOP(((int)this + 0x1c))) * REFG(double, 0x1088108))));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x14)));
  fVar3 = *((float *)GEN_TOP(((int)this + 0x18)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((double)(fVar1 - fVar8) - REFG(double, 0x10ac068))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((double)(fVar3 - fVar8) - REFG(double, 0x10ac068))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((double)(fVar1 + fVar8) + REFG(double, 0x10ac068))));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar2 - fVar8;
  (*(float *)(gen_frame + 0x50)) = fVar2 + fVar8;
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((double)(fVar3 + fVar8) + REFG(double, 0x10ac068))));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,uVar4,&(*(float *)(gen_frame + 0x40)));
  do {
    if ((*(int *)(gen_frame + 0x38)) == 0) {
      return 0;
    }
    do {
      bVar5 = F_00c9da60((*(int *)(gen_frame + 0x38)) - 0x10 GEN_EDX_ARG);
      if (bVar5 != 0) {
        if ((*(int *)(gen_frame + 0x38)) == 0) {
          piVar7 = ((int *)GEN_TOP(0x0));
        }
        else {
          piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) - 0x10)));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x58))))(piVar7 GEN_EDX_ARG,param_1);
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) == 0) {
        (*(int *)(gen_frame + 0x38)) = 0;
        break;
      }
      iVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) + 0x10;
      (*(int *)(gen_frame + 0x38)) = iVar6;
    } while (iVar6 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ca0d90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca0d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca0d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x44)) = param_2[1];
  (*(float *)(gen_frame + 0x48)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x4c)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x50)) = param_2[4];
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x54)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,uVar1,&(*(float *)(gen_frame + 0x40)));
  do {
    if ((*(int *)(gen_frame + 0x38)) == 0) {
      return 0;
    }
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)) - 0x10);
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) == 0) {
        (*(int *)(gen_frame + 0x38)) = 0;
        break;
      }
      iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) + 0x10;
      (*(int *)(gen_frame + 0x38)) = iVar2;
    } while (iVar2 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ca0e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca0e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 < 7) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(float *)(gen_frame + 0x40)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x44)) = param_2[1];
    (*(float *)(gen_frame + 0x48)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x4c)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x50)) = param_2[4];
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x38)) = 0;
    (*(float *)(gen_frame + 0x54)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
    F_00c9fc90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,uVar1,&(*(float *)(gen_frame + 0x40)),param_3);
    while ((*(int *)(gen_frame + 0x38)) != 0) {
      do {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)) - 0x10);
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) == 0) {
          (*(int *)(gen_frame + 0x38)) = 0;
          break;
        }
        iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0xc))) + 0x10;
        (*(int *)(gen_frame + 0x38)) = iVar2;
      } while (iVar2 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00ca0fa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca0fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca0fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x28)));
  ((float *)(gen_frame + 0x0))[0] = 0.0;
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  ((float *)(gen_frame + 0x0))[3] = 0.0;
  ((float *)(gen_frame + 0x0))[4] = 0.0;
  ((float *)(gen_frame + 0x0))[5] = 0.0;
  (*pcVar2)(param_1,((float *)(gen_frame + 0x0)));
  fVar8 = (float)((double)((float *)(gen_frame + 0x0))[0] + REFG(double, 0x10ac068));
  if (!((float)((double)((float *)(gen_frame + 0x0))[0] + REFG(double, 0x10ac068)) < *((float *)GEN_TOP(((int)this + 8))))) {
    fVar8 = *((float *)GEN_TOP(((int)this + 8)));
  }
  fVar10 = (float)((double)((float *)(gen_frame + 0x0))[2] + REFG(double, 0x10ac068));
  if (!((float)((double)((float *)(gen_frame + 0x0))[2] + REFG(double, 0x10ac068)) < *((float *)GEN_TOP(((int)this + 0x14))))) {
    fVar10 = *((float *)GEN_TOP(((int)this + 0x14)));
  }
  fVar9 = (float)((double)((float *)(gen_frame + 0x0))[3] - REFG(double, 0x10ac068));
  if (!(*((float *)GEN_TOP(((int)this + 4))) < (float)((double)((float *)(gen_frame + 0x0))[3] - REFG(double, 0x10ac068)))) {
    fVar9 = *((float *)GEN_TOP(((int)this + 4)));
  }
  fVar1 = *((float *)GEN_TOP(((int)this + 0x10)));
  fVar11 = (float)((double)((float *)(gen_frame + 0x0))[5] - REFG(double, 0x10ac068));
  if (!(fVar1 < (float)((double)((float *)(gen_frame + 0x0))[5] - REFG(double, 0x10ac068)))) {
    fVar11 = fVar1;
  }
  if (fVar9 < fVar8) {
    fVar8 = ((float)GEN_TOF((((double)fVar9 + (double)fVar8) * REFG(double, 0x1088108))));
    fVar9 = fVar8;
  }
  if (fVar11 < fVar10) {
    fVar10 = ((float)GEN_TOF((((double)fVar11 + (double)fVar10) * REFG(double, 0x1088108))));
    fVar11 = fVar10;
  }
  if (!(*((float *)GEN_TOP(((int)this + 4))) < fVar8)) {
    fVar8 = *((float *)GEN_TOP(((int)this + 4)));
  }
  if (!(fVar1 < fVar10)) {
    fVar10 = fVar1;
  }
  if (!(fVar9 < *((float *)GEN_TOP(((int)this + 8))))) {
    fVar9 = *((float *)GEN_TOP(((int)this + 8)));
  }
  if (!(fVar11 < *((float *)GEN_TOP(((int)this + 0x14))))) {
    fVar11 = *((float *)GEN_TOP(((int)this + 0x14)));
  }
  uVar5 = F_00c9f8a0(this GEN_EDX_FWD,fVar8,fVar10);
  uVar6 = F_00c9f8a0(this GEN_EDX_ARG,fVar9,fVar11);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar7 = iVar3;
  for (uVar6 = uVar6 ^ uVar5; iVar7 = iVar7 - 1, uVar6 != 0; uVar6 = uVar6 >> 2) {
  }
  iVar4 = *(int *)(&REFG(undefined, 0x134c1ec) + iVar7 * 4);
  if (param_1[6] != 0) {
    *((int *)GEN_TOP((param_1[6] + 0x1c))) = param_1[7];
  }
  if (param_1[7] != 0) {
    *((int *)GEN_TOP((param_1[7] + 0x18))) = param_1[6];
  }
  param_1[6] = 0;
  param_1[7] = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x20))) + 4 +
          ((uVar5 >> GEN_SHC(((char)iVar3 - (char)iVar7) * '\x02' - 2U, ((char)iVar3 - (char)iVar7) * '\x02' - 2U)) + iVar4) * 0x10;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar3 - 0x14;
  }
  param_1[6] = iVar7;
  param_1[7] = *((int *)GEN_TOP((iVar3 + 8)));
  if (*((int *)GEN_TOP((iVar3 + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 8))) + 0x18))) = param_1;
  }
  *((int * PTR32 *)GEN_TOP((iVar3 + 8))) = param_1;
  return 0;
}

/* ref: FUN_00ca11f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca11f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca11f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ca0fa0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00ca1200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca1200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x180,&REFG(undefined, 0x11290e0),*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ca2560(this_00 GEN_EDX_ARG,this,param_1,param_2,param_3);
  }
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = uVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((int *)GEN_TOP((uVar1 + 0x30))) = *((int *)GEN_TOP((uVar1 + 0x30))) + 1;
  return uVar1;
}

/* ref: FUN_00ca1260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca1260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,this,param_1,param_2)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x150,&REFG(undefined, 0x11290e1),*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      piVar1 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar1 = ((int *)GEN_TOP(F_00c951e0(this_00 GEN_EDX_ARG,this,param_1,param_2)));
    }
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2);
  return (uint)piVar1;
}

/* ref: FUN_00ca12f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca12f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xca12f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[12];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,this,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]))));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x150,&REFG(undefined, 0x11290e2),*((undefined4 *)GEN_TOP(((int)this + 4))))));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      piVar1 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar1 = ((int *)GEN_TOP(F_00c951e0(this_00 GEN_EDX_ARG,this,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]))));
    }
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[6]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[9]));
  return (uint)piVar1;
}

/* ref: FUN_00ca13a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca13a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[10];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x108,&REFG(undefined, 0x11290e3),*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00ca62b0(this_00 GEN_EDX_ARG,this,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)&gen_args[7]))));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca1410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[10];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x110,&REFG(undefined, 0x11290e4),*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00ca9c90(this_00 GEN_EDX_ARG,this,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)&gen_args[7]))));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca1480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[10];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x118,&REFG(undefined, 0x11290e5),*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00cac890(this_00 GEN_EDX_ARG,this,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)&gen_args[7]))));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca14f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca14f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca14f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[10];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x108,&REFG(undefined, 0x11290e6),*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00cb0190(this_00 GEN_EDX_ARG,this,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)&gen_args[7]))));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1560(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xca1560u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  param_1[2] = (undefined4)gen_fl2bits((float)((double)param_4 - REFG(double, 0x1088130)));
  param_1[4] = (undefined4)gen_fl2bits(param_3);
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  dVar6 = (double)param_5 - REFG(double, 0x1088130);
  param_1[10] = param_7;
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
  uVar1 = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11290e8));
  param_1[5] = (undefined4)gen_fl2bits((float)dVar6);
  param_1[7] = param_6;
  if (1 < (int)param_6) {
    do {
      iVar3 = iVar3 + (&REFG(undefined4, 0x134c1c8))[(int)(uVar1)];
      iVar5 = iVar5 + (&REFG(undefined4, 0x134c1cc))[(int)(uVar1)];
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_6 - 1);
  }
  if (uVar1 < param_6) {
    iVar4 = (&REFG(undefined4, 0x134c1c8))[(int)(uVar1)];
  }
  iVar4 = iVar4 + iVar3 + iVar5;
  uVar1 = F_00c96f50(param_7 GEN_EDX_FWD,iVar4 * 0x10,&REFG(undefined, 0x11290dc));
  param_1[8] = uVar1;
  if (iVar4 != 0) {
    iVar5 = 0;
    iVar3 = iVar4;
    do {
      puVar2 = ((undefined4 *)GEN_TOP((param_1[8] + iVar5)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1128f10));
        puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128f0c));
      }
      iVar5 = iVar5 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  iVar3 = 1 << GEN_SHC((char)param_6 - 1U, (char)param_6 - 1U);
  param_1[9] = iVar4;
  param_1[3] = (undefined4)gen_fl2bits(((float)GEN_TOF((((double)param_4 - (double)param_2) / (double)iVar3))))
  ;
  param_1[6] = (undefined4)gen_fl2bits(((float)GEN_TOF((((double)param_5 - (double)param_3) / (double)iVar3))))
  ;
  return (uint)param_1;
}

/* ref: FUN_00ca16b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca16b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca16b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290f4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1c))), REFG(float, 0x10916ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  uVar1 = F_00ca2100(0x2c,&REFG(undefined, 0x11290dd),param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ca1560(uVar1 GEN_EDX_ARG,REFG(float, 0x11290f0),REFG(float, 0x11290f0),REFG(float, 0x10b2b38),REFG(float, 0x10b2b38),7,param_1);
    *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: FUN_00ca1760 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca1760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  while (piVar2 = piVar1, piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
    if ((char)uVar3 == '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        piVar2[0x14] = 0;
      }
      else {
        F_00ca0fa0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,piVar2);
      }
      piVar1 = ((int *)GEN_TOP(piVar2[3]));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      if (piVar2[6] != 0) {
        *((int *)GEN_TOP((piVar2[6] + 0x1c))) = piVar2[7];
      }
      if (piVar2[7] != 0) {
        *((int *)GEN_TOP((piVar2[7] + 0x18))) = piVar2[6];
      }
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar1 = ((int *)GEN_TOP(piVar2[3]));
      if (*((int * PTR32 *)GEN_TOP(((int)this + 8))) == piVar2) {
        *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar1;
      }
      if (piVar2[2] != 0) {
        *((int *)GEN_TOP((piVar2[2] + 0xc))) = piVar2[3];
      }
      if (piVar2[3] != 0) {
        *((int *)GEN_TOP((piVar2[3] + 8))) = piVar2[2];
      }
      piVar2[2] = 0;
      piVar2[3] = 0;
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,0);
        F_00ca2140(piVar2,&REFG(undefined, 0x11290e7),*((undefined4 *)GEN_TOP(((int)this + 4))));
      }
    }
  }
  return;
}

/* ref: FUN_00ca1830 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca1830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca1830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290f4));
  F_00ca1760(this GEN_EDX_FWD);
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[3]))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
    if (uVar4 == 1) {
      piVar1[0xc] = piVar1[0xc] - 1;
    }
  }
  F_00ca1760(this GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  while (iVar2 != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 8))) = puVar3[3];
      if (puVar3[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar3[2] + 0xc))) = puVar3[3];
      }
      if (puVar3[3] != 0) {
        *((undefined4 *)GEN_TOP((puVar3[3] + 8))) = puVar3[2];
      }
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
    F_00ca2140(puVar3,&REFG(undefined, 0x11290de),*((undefined4 *)GEN_TOP(((int)this + 4))));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
    F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x24))),&REFG(undefined, 0x11290df),*((undefined4 *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return;
}

/* ref: FUN_00ca1900 */
GEN_LIB GEN_FRAME uint F_00ca1900(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca1900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ca1950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca1950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca1950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x38))) != *((int *)GEN_TOP((param_1 + 0x38)));
}

/* ref: FUN_00ca1990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1990(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca1990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  return (uint)in_ecx;
}

/* ref: FUN_00ca1a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1a00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca1a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ca1a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca1a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00ca1a20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca1a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ca1a70 */
GEN_LIB GEN_FRAME float10 F_00ca1a70(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xca1a70u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (param_2 < param_1) {
    return (float10)param_1;
  }
  return (float10)param_2;
}

/* ref: FUN_00ca1aa0 */
GEN_LIB GEN_FRAME float10 F_00ca1aa0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xca1aa0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (param_1 < param_2) {
    return (float10)param_1;
  }
  return (float10)param_2;
}

/* ref: FUN_00ca1ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca1ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 << 8 | param_1) & 0xff00ff;
  uVar2 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar2 = uVar2 * 4 | uVar2;
  uVar1 = (param_2 << 8 | param_2) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (((((uVar1 * 2 | uVar1) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar1 * 2 | uVar1)) * 2 |
          uVar2 & 0x11111111) + *(int *)(&REFG(undefined, 0x134c1ec) + param_3 * 4)) * 0x10 +
         *((int *)GEN_TOP(((int)this + 0x20)));
}

/* ref: FUN_00ca1b60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca1b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xca1b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *((short *)GEN_TOP(((int)this + 0x14))) = (short)param_6;
  *(int *)this = param_1;
  bVar1 = ((char)*((undefined4 *)GEN_TOP((param_1 + 0x1c))) - (char)param_6) - 1;
  uVar3 = param_3 >> GEN_SHC(bVar1, bVar1);
  uVar2 = param_2 >> GEN_SHC(bVar1, bVar1);
  *((short *)GEN_TOP(((int)this + 10))) = (short)uVar3;
  *((short *)GEN_TOP(((int)this + 8))) = (short)uVar2;
  *((short *)GEN_TOP(((int)this + 0x10))) = (short)(param_4 >> GEN_SHC(bVar1, bVar1));
  *((short *)GEN_TOP(((int)this + 0xc))) = (short)uVar2;
  uVar2 = (uVar2 << 8 | uVar2) & 0xff00ff;
  uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
  uVar2 = uVar2 * 4 | uVar2;
  *((short *)GEN_TOP(((int)this + 0xe))) = (short)uVar3;
  uVar3 = (uVar3 << 8 | uVar3) & 0xff00ff;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 * 4 | uVar3) & 0x33333333;
  *((short *)GEN_TOP(((int)this + 0x12))) = (short)(param_5 >> GEN_SHC(bVar1, bVar1));
  *((uint *)GEN_TOP(((int)this + 4))) =
       (((((uVar3 * 2 | uVar3) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar3 * 2 | uVar3)) * 2 |
        uVar2 & 0x11111111) + *(int *)(&REFG(undefined, 0x134c1ec) + param_6 * 4)) * 0x10 +
       *((int *)GEN_TOP((param_1 + 0x20)));
  return 0;
}

/* ref: FUN_00ca1c30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca1c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca1c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  *((short *)GEN_TOP(((int)this + 8))) = *((short *)GEN_TOP(((int)this + 8))) + 1;
  do {
    if (*((ushort *)GEN_TOP(((int)this + 8))) <= *((ushort *)GEN_TOP(((int)this + 0x10)))) {
      uVar1 = ((uint)*((ushort *)GEN_TOP(((int)this + 8))) << 8 | (uint)*((ushort *)GEN_TOP(((int)this + 8)))) & 0xff00ff;
      uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
      uVar1 = uVar1 * 4 | uVar1;
      uVar2 = ((uint)*((ushort *)GEN_TOP(((int)this + 10))) << 8 | (uint)*((ushort *)GEN_TOP(((int)this + 10)))) &
              0xff00ff;
      uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
      uVar2 = (uVar2 * 4 | uVar2) & 0x33333333;
      uVar1 = *((int *)GEN_TOP((*(int *)this + 0x20))) +
              (((((uVar2 * 2 | uVar2) ^ uVar1 & 0x33333333) & 0x2aaaaaaa ^ (uVar2 * 2 | uVar2)) * 2
               | uVar1 & 0x11111111) +
              *(int *)(&REFG(undefined, 0x134c1ec) + (uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 4)) * 0x10;
      *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
      return uVar1;
    }
    *((short *)GEN_TOP(((int)this + 10))) = *((short *)GEN_TOP(((int)this + 10))) + 1;
    *((undefined2 *)GEN_TOP(((int)this + 8))) = *((undefined2 *)GEN_TOP(((int)this + 0xc)));
  } while (*((ushort *)GEN_TOP(((int)this + 10))) <= *((ushort *)GEN_TOP(((int)this + 0x12))));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00ca1d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca1d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_28;
  undefined4 local_1c;
  float local_10;
  float local_c;
  float local_8;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  local_8 = *((float *)GEN_TOP((param_1 + 4)));
  fVar5 = *((float *)GEN_TOP((*(uint *)&gen_args[1])));
  if (!(local_8 < *((float *)GEN_TOP((*(uint *)&gen_args[1]))))) {
    fVar5 = local_8;
  }
  fVar7 = *((float *)GEN_TOP((param_1 + 8)));
  local_10 = fVar7;
  if (fVar5 < fVar7) {
    local_10 = fVar5;
  }
  fVar5 = *((float *)GEN_TOP((param_1 + 0x10)));
  fVar6 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
  if (!(fVar5 < *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))))) {
    fVar6 = fVar5;
  }
  fVar1 = *((float *)GEN_TOP((param_1 + 0x14)));
  local_c = fVar1;
  if (fVar6 < fVar1) {
    local_c = fVar6;
  }
  fVar6 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc)));
  if (!(*((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc))) < fVar7)) {
    fVar6 = fVar7;
  }
  if (local_8 < fVar6) {
    local_8 = fVar6;
  }
  fVar7 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x14)));
  if (!(*((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x14))) < fVar1)) {
    fVar7 = fVar1;
  }
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar5);
  if (fVar5 < fVar7) {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar7);
  }
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_1c = (undefined4)
             (longlong)
             TRUNC((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) - (float10)*((float *)GEN_TOP((param_1 + 0x10)))) /
                   (float10)*((float *)GEN_TOP((param_1 + 0x18))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_8 - (float10)*((float *)GEN_TOP((param_1 + 4)))) /
                   (float10)*((float *)GEN_TOP((param_1 + 0xc))));
  uVar3 = local_28;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_c - (float10)*((float *)GEN_TOP((param_1 + 0x10)))) /
                   (float10)*((float *)GEN_TOP((param_1 + 0x18))));
  uVar4 = local_28;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(ushort)(*(undefined4 *)&gen_args[2]));
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_10 - (float10)*((float *)GEN_TOP((param_1 + 4)))) /
                   (float10)*((float *)GEN_TOP((param_1 + 0xc))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  F_00ca1b60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,param_1,local_28,uVar4,uVar3,local_1c,uVar2);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ca1ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1ed0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca1ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c9f810(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca1f00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca1f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca1f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  ulonglong uVar1;
  byte bVar2;
  undefined8 * puVar3;
  int iVar4;
  
  uVar1 = (*(ulonglong *)(gen_frame + 0x18));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = 0;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar1 & 0xffffffff00000000;
  do {
    F_00ca1c30(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
    if (*((int *)GEN_TOP(((int)this + 0x20))) == (int)(*(ulonglong *)(gen_frame + 0x18))) {
      if (*((char *)GEN_TOP(((int)this + 0x3c))) == '\0') {
        return 0;
      }
      if (*((char *)GEN_TOP(((int)this + 0x3d))) != '\0') {
        return 0;
      }
      bVar2 = *((char *)GEN_TOP(((int)this + 0x3c))) - 1;
      *((byte *)GEN_TOP(((int)this + 0x3c))) = bVar2;
      puVar3 = ((undefined8 *)GEN_TOP(F_00ca1d00(*(undefined4 *)this GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),(int)this + 4,(uint)bVar2)));
      *((undefined8 *)GEN_TOP(((int)this + 0x20))) = *puVar3;
      *((undefined8 *)GEN_TOP(((int)this + 0x28))) = puVar3[1];
      *((undefined8 *)GEN_TOP(((int)this + 0x30))) = puVar3[2];
      ((byte *)(gen_frame + 0x0))[0] = 0;
      ((byte *)(gen_frame + 0x0))[1] = 0;
      ((byte *)(gen_frame + 0x0))[2] = 0;
      ((byte *)(gen_frame + 0x0))[3] = 0;
      (*(ulonglong *)(gen_frame + 0x18)) = (ulonglong)(uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) << 0x20;
      ((byte *)(gen_frame + 0x20))[0] = ((byte *)(gen_frame + 0x0))[8];
      ((byte *)(gen_frame + 0x20))[1] = ((byte *)(gen_frame + 0x0))[9];
      ((byte *)(gen_frame + 0x20))[2] = ((byte *)(gen_frame + 0x0))[10];
      ((byte *)(gen_frame + 0x20))[3] = ((byte *)(gen_frame + 0x0))[0xb];
      ((byte *)(gen_frame + 0x20))[4] = ((byte *)(gen_frame + 0x0))[0xc];
      ((byte *)(gen_frame + 0x20))[5] = ((byte *)(gen_frame + 0x0))[0xd];
      ((byte *)(gen_frame + 0x20))[6] = ((byte *)(gen_frame + 0x0))[0xe];
      ((byte *)(gen_frame + 0x20))[7] = ((byte *)(gen_frame + 0x0))[0xf];
      ((byte *)(gen_frame + 0x28))[0] = ((byte *)(gen_frame + 0x0))[0x10];
      ((byte *)(gen_frame + 0x28))[1] = ((byte *)(gen_frame + 0x0))[0x11];
      ((byte *)(gen_frame + 0x28))[2] = ((byte *)(gen_frame + 0x0))[0x12];
      ((byte *)(gen_frame + 0x28))[3] = ((byte *)(gen_frame + 0x0))[0x13];
      ((byte *)(gen_frame + 0x28))[4] = ((byte *)(gen_frame + 0x0))[0x14];
      ((byte *)(gen_frame + 0x28))[5] = ((byte *)(gen_frame + 0x0))[0x15];
      ((byte *)(gen_frame + 0x28))[6] = ((byte *)(gen_frame + 0x0))[0x16];
      ((byte *)(gen_frame + 0x28))[7] = ((byte *)(gen_frame + 0x0))[0x17];
    }
    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x10;
    }
    *((int *)GEN_TOP(((int)this + 0x38))) = iVar4;
    if (iVar4 != 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ca1fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca1fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this - 0x14;
  }
  *((int *)GEN_TOP((param_1 + 0x18))) = iVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00ca1fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca1fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *((int *)GEN_TOP((uVar1 + 8))) = param_1;
  }
  *(int *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00ca2000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ca2010 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ca2010(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xca2010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00ca2030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
      *(undefined4 *)this = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return param_1;
}

/* ref: FUN_00ca2080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca2080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
  if (iVar1 != 0) {
    if (*(int *)this == iVar1) {
      *(undefined4 *)this = uVar2;
    }
    if (*((int *)GEN_TOP((iVar1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + 0xc))) = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
    }
    if (*((int *)GEN_TOP((iVar1 + 0xc))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    }
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00ca20d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca20d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca20d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ca1830(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca2100 */
GEN_LIB GEN_FRAME uint F_00ca2100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca2100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c96f50(param_3 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ca2120 */
GEN_LIB GEN_FRAME uint F_00ca2120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca2120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c96f50(param_3 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ca2140 */
GEN_LIB GEN_FRAME unsigned int F_00ca2140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca2140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  F_00c96f60(param_3 GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00ca2160 */
GEN_LIB GEN_FRAME unsigned int F_00ca2160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca2160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  F_00c96f60(param_3 GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00ca2180 */
GEN_LIB GEN_FRAME unsigned int F_00ca2180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  F_00c96f60(param_2 GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00ca21b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca21b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca21b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x30))) == 0) && (*((int *)GEN_TOP((in_ecx + 0x16c))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca21d0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ca21d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca21d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x12c, 4, 4);
  undefined4 * puVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128));
  iVar6 = 0;
  if ((*((int *)GEN_TOP(((int)this + 0x30))) != 0) && (*((int *)GEN_TOP(((int)this + 0x17c))) != 0)) {
    F_00c9fa60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x4)) - (*(float *)(gen_frame + 0x8));
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x4)) + (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x8));
    if (**((int * PTR32 *)GEN_TOP(((int)this + 0x174))) != 0) {
      do {
        fVar2 = *((float *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP(((int)this + 0x17c))))));
        puVar1 = ((undefined4 *)GEN_TOP((iVar6 + *((int *)GEN_TOP(((int)this + 0x17c))))));
        if (((((GEN_ISNAN(fVar2) || GEN_ISNAN((*(float *)(gen_frame + 0x1c)))) || fVar2 <= (*(float *)(gen_frame + 0x1c))) &&
             ((GEN_ISNAN(gen_bits2f(puVar1[3])) || GEN_ISNAN((*(float *)(gen_frame + 0xc)))) || gen_bits2f(puVar1[3]) <= (*(float *)(gen_frame + 0xc))))
            && ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(gen_bits2f(puVar1[4]))) || (*(float *)(gen_frame + 0x18)) <= gen_bits2f(puVar1[4])
               )) && ((GEN_ISNAN((*(float *)(gen_frame + 0x10))) || GEN_ISNAN(gen_bits2f(puVar1[5]))) ||
                      (*(float *)(gen_frame + 0x10)) <= gen_bits2f(puVar1[5]))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (puVar1[1] == 0) {
          if (!bVar3) {
            F_00c472af(((undefined1 *)(gen_frame + 0x24)),0x100,((char *)REFP(0x11290f8)),(int)this + 0x6c,*puVar1);
            uVar5 = F_00ca1260(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x44))),
                                 ((undefined1 *)(gen_frame + 0x24)),0);
            *((uint *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) = uVar5;
            bVar4 = F_00c9da60(this GEN_EDX_ARG);
            F_00c9da30(*((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) GEN_EDX_ARG,bVar4);
          }
        }
        else {
          bVar4 = F_00c9da60(this GEN_EDX_ARG);
          F_00c9da30(*((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) GEN_EDX_ARG,bVar4);
          F_00c9f290(*((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) GEN_EDX_ARG,
                       *((undefined1 *)GEN_TOP(((int)this + 0x54))));
          uVar5 = F_00c9da20(this GEN_EDX_ARG);
          F_00c9da10(*((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) GEN_EDX_ARG,uVar5);
          if (bVar3) {
            F_00c9fa90(*((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))));
            *((undefined4 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x17c)))))) = 0;
          }
        }
        uVar5 = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar6 = iVar6 + 0x18;
        (*(uint *)(gen_frame + 0x20)) = uVar5;
      } while (uVar5 < **((uint * PTR32 *)GEN_TOP(((int)this + 0x174))));
    }
  }
  return 0;
}

/* ref: FUN_00ca2430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG)));
    *((int * PTR32 *)GEN_TOP(((int)this + 0x10c))) = piVar2;
    *((int * PTR32 *)GEN_TOP(((int)this + 0x110))) = piVar2 + 8;
    uVar1 = F_00c96f50(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x34))) + 4))) GEN_EDX_ARG,*piVar2 * 0x18,&REFG(undefined, 0x1129106));
    uVar5 = 0;
    *((uint *)GEN_TOP(((int)this + 0x114))) = uVar1;
    if (**((int * PTR32 *)GEN_TOP(((int)this + 0x10c))) != 0) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x114)))))) =
             *((undefined4 *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x110))))));
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP(((int)this + 0x114)))))) = 0;
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((int)this + 0x114)))))) =
             *((undefined4 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP(((int)this + 0x110))))));
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((int)this + 0x114)))))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0x110))))));
        *((undefined4 *)GEN_TOP((iVar3 + 0x10 + *((int *)GEN_TOP(((int)this + 0x114)))))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0x10 + *((int *)GEN_TOP(((int)this + 0x110))))));
        *((undefined4 *)GEN_TOP((iVar3 + 0x14 + *((int *)GEN_TOP(((int)this + 0x114)))))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0x18 + *((int *)GEN_TOP(((int)this + 0x110))))));
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x20;
        iVar3 = iVar3 + 0x18;
      } while (uVar5 < **((uint * PTR32 *)GEN_TOP(((int)this + 0x10c))));
    }
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x34))) + 0x20)));
    *piVar2 = *piVar2 - 1;
    *((int *)GEN_TOP(((int)this - 0x38))) = *((int *)GEN_TOP(((int)this - 0x38))) - 1;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x68))) + 0x48))))((int)this - 0x68);
    *((undefined1 *)GEN_TOP(((int)this + 0x108))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ca2550 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca2550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca2560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xca2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  char * _Dst;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  _Dst = ((char *)GEN_TOP(((int)this + 0x6c)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129120));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129118));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1129114));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1129110));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1129108));
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  F_00c48350(_Dst,0x88,0x100);
  F_00c49908(_Dst,0x100,param_3);
  cVar1 = *_Dst;
  iVar4 = 0;
  iVar2 = 0;
  while (cVar1 != '\0') {
    bVar5 = cVar1 == '/';
    cVar1 = *((char *)GEN_TOP(((int)this + iVar2 + 0x6d)));
    if (bVar5) {
      iVar4 = iVar2;
    }
    iVar2 = iVar2 + 1;
  }
  *((undefined1 *)GEN_TOP((iVar4 + 0x6c + (int)this))) = 0;
  uVar3 = F_00c96f70(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,param_3,((undefined4 *)GEN_TOP(((int)this + 0x68))),0,0,0,0);
  *((uint *)GEN_TOP(((int)this + 0x16c))) = uVar3;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + 1;
  *((int *)GEN_TOP((param_1 + 0x20))) = *((int *)GEN_TOP((param_1 + 0x20))) + 1;
  return (uint)this;
}

/* ref: FUN_00ca2640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca2640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca2640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129120));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129118));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1129114));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1129110));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1129108));
  if ((*((int *)GEN_TOP(((int)this + 0x16c))) != 0) &&
     (F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x16c)))),
     *((char *)GEN_TOP(((int)this + 0x170))) == '\0')) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x20)));
    *piVar1 = *piVar1 - 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x17c))) != 0) {
    uVar3 = 0;
    if (**((int * PTR32 *)GEN_TOP(((int)this + 0x174))) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x17c))) + 4 + iVar4)));
        if (iVar2 != 0) {
          F_00c9fa90(iVar2);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (uVar3 < **((uint * PTR32 *)GEN_TOP(((int)this + 0x174))));
    }
    F_00c96f60(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x17c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  uVar3 = F_00c96c00(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ca2700 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca2700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca2710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x15d76a4));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d76a8));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x15d76ac));
  return (uint)param_1;
}

/* ref: FUN_00ca2770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097b10));
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1090998));
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00ca27b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca27b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca27b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca27c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca27c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca27c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca27d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca27d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca27d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca27e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca27e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca27e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca27f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca27f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca27f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca2800 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ca2800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ca2810 */
GEN_LIB GEN_NOFRAME uint F_00ca2810(void)
{
  GEN_ENTER(0xca2810u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00ca2820 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca2820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00ca2830 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xca2830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: FUN_00ca2840 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca2840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: FUN_00ca2850 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca2850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00ca2860 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xca2860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: FUN_00ca2870 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca2870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: FUN_00ca2880 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca2880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: FUN_00ca2890 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca2890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca2890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00ca28a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca28a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca28a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00ca28b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ca28b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca28b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: FUN_00ca28c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca28c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca28c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca2900((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca28d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca28d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca28d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca2900((int)this - 0x68 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca28e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca28e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca28e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca2900((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca28f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca28f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca28f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca2900((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca2900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2900(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ca2640(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca2930 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00ca2930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) *
                                      (float10)*((float *)GEN_TOP(((int)this + 8))) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*((float *)GEN_TOP(((int)this + 4))) *
                                     (float10)*((float *)GEN_TOP(((int)this + 4)))))))))));
}

/* ref: FUN_00ca2970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2970(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  if ((((*in_ecx <= *param_2) && (in_ecx[1] <= param_2[1])) && (in_ecx[2] <= param_2[2])) &&
     (((*param_2 <= in_ecx[3] && (param_2[1] <= in_ecx[4])) && (param_2[2] <= in_ecx[5])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca2a00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*(uint *)this & param_1) == *((uint *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00ca2a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2a30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca2a60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca2a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00ca2ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  return (uint)param_2;
}

/* ref: FUN_00ca2b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca2b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x84)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
  return (uint)param_2;
}

/* ref: FUN_00ca2b30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca2b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *param_2 = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xa4))) * (double)*((float *)GEN_TOP((in_ecx + 0xa4))) +
                          (double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8)))) +
                         (double)*((float *)GEN_TOP((in_ecx + 0xac))) * (double)*((float *)GEN_TOP((in_ecx + 0xac)))))));
  param_2[1] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xb0))) * (double)*((float *)GEN_TOP((in_ecx + 0xb0))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xb4))) * (double)*((float *)GEN_TOP((in_ecx + 0xb4)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xb8))) * (double)*((float *)GEN_TOP((in_ecx + 0xb8)))))));
  param_2[2] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xbc))) * (double)*((float *)GEN_TOP((in_ecx + 0xbc))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xc0))) * (double)*((float *)GEN_TOP((in_ecx + 0xc0)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xc4))) * (double)*((float *)GEN_TOP((in_ecx + 0xc4)))))));
  return 0;
}

/* ref: FUN_00ca2c20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca2c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca2c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00ca2cf0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca2cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca2cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (*((char *)GEN_TOP(((int)this + 0x104))) != '\0') {
    fVar5 = *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x68))) - *((float *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x6c))) - fVar5;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x70))) - *((float *)GEN_TOP(((int)this + 0x7c)));
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(int)this + 0x74U,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x8c,
                         (int)this + 0x80);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + 0x74U))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    (*(float *)(gen_frame + 0x174)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 0;
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),(int)this + 0x98);
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),((undefined4 *)GEN_TOP(((int)this + 0x68))));
    pfVar3 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = *pfVar4;
    fVar8 = pfVar4[4];
    fVar9 = pfVar3[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar6) +
                       (double)pfVar4[8] * (double)fVar9) + (double)pfVar4[0xc] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar6) +
                       (double)pfVar4[9] * (double)fVar9) + (double)pfVar4[0xd] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar6) +
                       (double)pfVar4[10] * (double)fVar9) + (double)pfVar4[0xe] * (double)pfVar3[3]
                      )));
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar9 * (double)pfVar4[0xb]) +
                      (double)pfVar3[3] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar5 + (double)fVar7 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar11 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar11 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar10) +
                      (double)pfVar4[0xe] * (double)pfVar3[7])));
    fVar6 = pfVar3[10];
    fVar9 = pfVar3[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar11 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar10 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar9 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar6) +
                      (double)pfVar4[0xc] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar9 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar6) +
                      (double)pfVar4[0xd] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar9 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar6) +
                      (double)pfVar4[0xe] * (double)pfVar3[0xb])));
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xd];
    fVar12 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar6 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)fVar12)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar11) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)fVar12)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar11) +
                      (double)pfVar4[10] * (double)fVar10) + (double)pfVar4[0xe] * (double)fVar12)));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar3[0xd] * (double)pfVar4[7] + (double)pfVar4[3] * (double)fVar5)
                      + (double)pfVar4[0xb] * (double)fVar10) + (double)fVar12 * (double)pfVar4[0xf]
                     )));
    pfVar3 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x80)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[7];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar6 = pfVar3[0xb];
    fVar7 = pfVar3[10];
    fVar8 = pfVar3[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[0xf];
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[0xd];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar10;
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar11;
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar11) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar6) +
                     (double)fVar12 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)fVar10 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar7) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x1f8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x208)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xa4))) = fVar17;
    *((float *)GEN_TOP(((int)this + 0xa8))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xac))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xb0))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar22;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar25;
    *((float *)GEN_TOP(((int)this + 200))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14)));
    *((float *)GEN_TOP(((int)this + 0xcc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(float *)(gen_frame + 0x160)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x100))) = (*(float *)(gen_frame + 0x160));
    F_00ca11f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca4610 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca4610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xca4610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  code * pcVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  
  pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x28)));
  (*(int * PTR32 *)(gen_frame + 0x80)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*pcVar7)((*(int * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)));
  uVar11 = (*(uint *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  bVar9 = F_00c99860((*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x9c)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar9 != 0) {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x3c)));
    (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1090998);
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*pcVar7)((*(int * PTR32 *)&gen_args[0]),&(*(float *)(gen_frame + 0x3c)));
    uVar8 = (*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x9c)));
    pfVar12 = (float *)&REFG(undefined4, 0x11291bc);
    (*(int *)(gen_frame + 0x7c)) = 6;
    do {
      fVar1 = pfVar12[-4];
      fVar2 = pfVar12[-3];
      fVar3 = pfVar12[-5];
      (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x4c)) * (double)fVar1 + (double)(*(float *)(gen_frame + 0x3c)) * (double)fVar3) +
                         (double)(*(float *)(gen_frame + 0x5c)) * (double)fVar2) + (double)(*(float *)(gen_frame + 0x6c)))));
      fVar4 = *pfVar12;
      fVar5 = pfVar12[-1];
      (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x50)) * (double)fVar1 + (double)(*(float *)(gen_frame + 0x40)) * (double)fVar3) +
                         (double)(*(float *)(gen_frame + 0x60)) * (double)fVar2) + (double)(*(float *)(gen_frame + 0x70)))));
      (*(float *)(gen_frame + 0x8c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x54)) * (double)fVar1 + (double)(*(float *)(gen_frame + 0x44)) * (double)fVar3) +
                         (double)(*(float *)(gen_frame + 0x64)) * (double)fVar2) + (double)(*(float *)(gen_frame + 0x74)))));
      fVar1 = pfVar12[-2];
      (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x4c)) + (double)(*(float *)(gen_frame + 0x3c)) * (double)fVar1) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x5c))) + (double)(*(float *)(gen_frame + 0x6c)))));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x50)) + (double)(*(float *)(gen_frame + 0x40)) * (double)fVar1) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x60))) + (double)(*(float *)(gen_frame + 0x70)))));
      fVar2 = pfVar12[3];
      fVar3 = pfVar12[2];
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x54)) + (double)(*(float *)(gen_frame + 0x44)) * (double)fVar1) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x64))) + (double)(*(float *)(gen_frame + 0x74)))));
      fVar1 = pfVar12[1];
      (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x4c)) + (double)fVar1 * (double)(*(float *)(gen_frame + 0x3c))) +
                         (double)fVar2 * (double)(*(float *)(gen_frame + 0x5c))) + (double)(*(float *)(gen_frame + 0x6c)))));
      (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x50)) + (double)(*(float *)(gen_frame + 0x40)) * (double)fVar1) +
                         (double)fVar2 * (double)(*(float *)(gen_frame + 0x60))) + (double)(*(float *)(gen_frame + 0x70)))));
      fVar4 = pfVar12[6];
      fVar5 = pfVar12[5];
      (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x54)) + (double)(*(float *)(gen_frame + 0x44)) * (double)fVar1) +
                        (double)fVar2 * (double)(*(float *)(gen_frame + 0x64))) + (double)(*(float *)(gen_frame + 0x74)))));
      fVar1 = pfVar12[4];
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x4c)) + (double)fVar1 * (double)(*(float *)(gen_frame + 0x3c))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x5c))) + (double)(*(float *)(gen_frame + 0x6c)))));
      (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x50)) + (double)(*(float *)(gen_frame + 0x40)) * (double)fVar1) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x60))) + (double)(*(float *)(gen_frame + 0x70)))));
      (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x54)) + (double)(*(float *)(gen_frame + 0x44)) * (double)fVar1) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x64))) + (double)(*(float *)(gen_frame + 0x74)))));
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[3]);
      bVar9 = F_00550990((*(float * PTR32 *)&gen_args[2]),uVar11,(uint)&(*(float *)(gen_frame + 0x84)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x90)),&(*(uint *)&gen_args[1]));
      if ((((bVar9 != 0) &&
           ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(gen_bits2f((*(uint *)&gen_args[1])) < *(float *)&REFG(undefined, 0x1088114)))) &&
          (gen_bits2f((*(uint *)&gen_args[1])) < gen_bits2f((*(uint *)&gen_args[3])))) &&
         (uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x80)) + 4))))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x90))),
         (char)uVar10 != '\0')) {
        (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[1]);
        *((float *)GEN_TOP((uVar8 + 0xc))) = (*(float *)(gen_frame + 0x84));
        *((float *)GEN_TOP((uVar8 + 0x10))) = (*(float *)(gen_frame + 0x88));
        *((float *)GEN_TOP((uVar8 + 0x14))) = (*(float *)(gen_frame + 0x8c));
        *((float *)GEN_TOP((uVar8 + 0x18))) = (*(float *)(gen_frame + 0x30));
        *((float *)GEN_TOP((uVar8 + 0x1c))) = (*(float *)(gen_frame + 0x34));
        *((float *)GEN_TOP((uVar8 + 0x20))) = (*(float *)(gen_frame + 0x38));
        *((float *)GEN_TOP((uVar8 + 0x24))) = (*(float *)(gen_frame + 0x90));
        *((float *)GEN_TOP((uVar8 + 0x28))) = (*(float *)(gen_frame + 0x94));
        *((float *)GEN_TOP((uVar8 + 0x2c))) = (*(float *)(gen_frame + 0x98));
      }
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[3]);
      bVar9 = F_00550990((*(float * PTR32 *)&gen_args[2]),uVar11,(uint)&(*(float *)(gen_frame + 0x84)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x24)),&(*(uint *)&gen_args[1]));
      if (((bVar9 != 0) && (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[1])))) &&
         ((gen_bits2f((*(uint *)&gen_args[1])) < gen_bits2f((*(uint *)&gen_args[3])) &&
          (uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x80)) + 4))))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x24))),
          (char)uVar10 != '\0')))) {
        *((float *)GEN_TOP((uVar8 + 0xc))) = (*(float *)(gen_frame + 0x84));
        *((float *)GEN_TOP((uVar8 + 0x10))) = (*(float *)(gen_frame + 0x88));
        *((float *)GEN_TOP((uVar8 + 0x14))) = (*(float *)(gen_frame + 0x8c));
        *((float *)GEN_TOP((uVar8 + 0x18))) = (*(float *)(gen_frame + 0x90));
        *((float *)GEN_TOP((uVar8 + 0x1c))) = (*(float *)(gen_frame + 0x94));
        *((float *)GEN_TOP((uVar8 + 0x20))) = (*(float *)(gen_frame + 0x98));
        *((float *)GEN_TOP((uVar8 + 0x24))) = (*(float *)(gen_frame + 0x24));
        *((float *)GEN_TOP((uVar8 + 0x28))) = (*(float *)(gen_frame + 0x28));
        (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[1]);
        *((float *)GEN_TOP((uVar8 + 0x2c))) = (*(float *)(gen_frame + 0x2c));
      }
      pfVar12 = pfVar12 + 0xc;
      iVar6 = (*(int *)(gen_frame + 0x7c)) - 1;
      (*(int *)(gen_frame + 0x7c)) = iVar6;
    } while (iVar6 != 0);
    if (gen_bits2f((*(uint *)&gen_args[3])) < (*(float *)(gen_frame + 0x9c))) {
      *((float *)GEN_TOP(uVar8)) = *((float *)GEN_TOP(uVar11)) * gen_bits2f((*(uint *)&gen_args[3]));
      *((float *)GEN_TOP((uVar8 + 4))) = *((float *)GEN_TOP((uVar11 + 4))) * gen_bits2f((*(uint *)&gen_args[3]));
      *((float *)GEN_TOP((uVar8 + 8))) = *((float *)GEN_TOP((uVar11 + 8))) * gen_bits2f((*(uint *)&gen_args[3]));
      *((float *)GEN_TOP(uVar8)) = *((float *)GEN_TOP(uVar8)) + *(*(float * PTR32 *)&gen_args[2]);
      *((float *)GEN_TOP((uVar8 + 4))) = (*(float * PTR32 *)&gen_args[2])[1] + *((float *)GEN_TOP((uVar8 + 4)));
      *((float *)GEN_TOP((uVar8 + 8))) = (*(float * PTR32 *)&gen_args[2])[2] + *((float *)GEN_TOP((uVar8 + 8)));
      *((int * PTR32 *)GEN_TOP((uVar8 + 0x44))) = (*(int * PTR32 *)&gen_args[0]);
      *((uint *)GEN_TOP((uVar8 + 0x40))) = (*(uint *)&gen_args[3]);
      pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
      (*(float *)(gen_frame + 0x9c)) = gen_bits2f((*(uint *)&gen_args[3]));
      uVar11 = (*pcVar7)((*(int * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP((uVar8 + 0x3c))) = uVar11;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ca4d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca4d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xca4d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00ca4d60 */
GEN_LIB GEN_NOFRAME undefined1 F_00ca4d60(void)
{
  GEN_ENTER(0xca4d60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00ca4d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca4d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xca4d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00ca4db0 */
GEN_LIB GEN_NOFRAME undefined1 F_00ca4db0(void)
{
  GEN_ENTER(0xca4db0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00ca4dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca4dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca4dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ca4df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca4df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca4df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  float fVar2;
  code * pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*pcVar3)(this,&(*(float *)(gen_frame + 0x0)));
  fVar4 = *param_1;
  if (((((*(float *)(gen_frame + 0x0)) <= fVar4) && ((*(float *)(gen_frame + 0x4)) <= param_1[1])) && ((*(float *)(gen_frame + 0x8)) <= param_1[2])) &&
     (((fVar4 <= (*(float *)(gen_frame + 0xc)) && (param_1[1] <= (*(float *)(gen_frame + 0x10)))) && (param_1[2] <= (*(float *)(gen_frame + 0x14)))))) {
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar6 = ((float)GEN_TOF(((((double)fVar1 * (double)*((float *)GEN_TOP(((int)this + 0xe0))) +
                     (double)fVar4 * (double)*((float *)GEN_TOP(((int)this + 0xd4)))) +
                    (double)fVar2 * (double)*((float *)GEN_TOP(((int)this + 0xec)))) +
                   (double)*((float *)GEN_TOP(((int)this + 0xf8))))));
    fVar5 = ((float)GEN_TOF(((((double)fVar1 * (double)*((float *)GEN_TOP(((int)this + 0xe4))) +
                     (double)fVar4 * (double)*((float *)GEN_TOP(((int)this + 0xd8)))) +
                    (double)fVar2 * (double)*((float *)GEN_TOP(((int)this + 0xf0)))) +
                   (double)*((float *)GEN_TOP(((int)this + 0xfc))))));
    fVar4 = ((float)GEN_TOF(((((double)fVar1 * (double)*((float *)GEN_TOP(((int)this + 0xe8))) +
                     (double)fVar4 * (double)*((float *)GEN_TOP(((int)this + 0xdc)))) +
                    (double)fVar2 * (double)*((float *)GEN_TOP(((int)this + 0xf4)))) +
                   (double)*((float *)GEN_TOP(((int)this + 0x100))))));
    if (((REFG(double, 0x1094890) <= (double)fVar6) && (REFG(double, 0x1094890) <= (double)fVar5)) &&
       ((REFG(double, 0x1094890) <= (double)fVar4 &&
        (((fVar6 <= REFG(float, 0x1087f04) && (fVar5 <= REFG(float, 0x1087f04))) && (fVar4 <= REFG(float, 0x1087f04))))))) {
      return 1;
    }
    return 0;
  }
  return (uint)param_1 & 0xffffff00;
}

/* ref: FUN_00ca5020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca5020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) +
                                          (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c))) +
                                         (double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30)))))))) * REFG(double, 0x1088108))));
  uVar3 = (*pcVar1)(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xc))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00ca5140 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca5140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xca5140u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0xb8, 8, 4);
  float fVar1;
  float fVar2;
  int iVar3;
  code * pcVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  float * pfVar8;
  float fVar9;
  
  pcVar4 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x28)));
  (*(int * PTR32 *)(gen_frame + 0x68)) = param_1;
  (*(float *)(gen_frame + 0x6c)) = 0.0;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  (*(float *)(gen_frame + 0x74)) = 0.0;
  (*(float *)(gen_frame + 0x78)) = 0.0;
  (*(float *)(gen_frame + 0x7c)) = 0.0;
  (*(float *)(gen_frame + 0x80)) = 0.0;
  (*pcVar4)((*(int * PTR32 *)&gen_args[0]),&(*(float *)(gen_frame + 0x6c)));
  uVar7 = (*(uint *)&gen_args[3]);
  fVar9 = (*(float * PTR32 *)&gen_args[2])[3];
  (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x6c)) - fVar9;
  (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x70)) - fVar9;
  (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x74)) - fVar9;
  (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x78)) + fVar9;
  (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x7c)) + fVar9;
  (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x80)) + fVar9;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  bVar5 = F_00c99860((*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),&(*(float *)(gen_frame + 0x6c)),&(*(float *)(gen_frame + 0xa8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar5 != 0) {
    pcVar4 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x3c)));
    (*(float *)(gen_frame + 0xac)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1090998);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*pcVar4)((*(int * PTR32 *)&gen_args[0]),&(*(float *)(gen_frame + 0xc)));
    (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xa8));
    (*(float *)(gen_frame + 0x84)) = 0.0;
    (*(float *)(gen_frame + 0x88)) = 0.0;
    (*(float *)(gen_frame + 0x8c)) = 0.0;
    pfVar8 = (float *)&REFG(undefined4, 0x11292fc);
    (*(int *)(gen_frame + 0x64)) = 6;
    do {
      fVar9 = pfVar8[-4];
      fVar1 = pfVar8[-3];
      fVar2 = pfVar8[-5];
      (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0xc)) * (double)fVar2 + (double)(*(float *)(gen_frame + 0x1c)) * (double)fVar9) +
                         (double)(*(float *)(gen_frame + 0x2c)) * (double)fVar1) + (double)(*(float *)(gen_frame + 0x3c)))));
      (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10)) * (double)fVar2 + (double)(*(float *)(gen_frame + 0x20)) * (double)fVar9) +
                         (double)(*(float *)(gen_frame + 0x30)) * (double)fVar1) + (double)(*(float *)(gen_frame + 0x40)))));
      (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x14)) * (double)fVar2 + (double)(*(float *)(gen_frame + 0x24)) * (double)fVar9) +
                         (double)(*(float *)(gen_frame + 0x34)) * (double)fVar1) + (double)(*(float *)(gen_frame + 0x44)))));
      (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0xc)) * (double)pfVar8[-2] +
                          (double)pfVar8[-1] * (double)(*(float *)(gen_frame + 0x1c))) +
                         (double)*pfVar8 * (double)(*(float *)(gen_frame + 0x2c))) + (double)(*(float *)(gen_frame + 0x3c)))));
      (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10)) * (double)pfVar8[-2] +
                          (double)pfVar8[-1] * (double)(*(float *)(gen_frame + 0x20))) +
                         (double)*pfVar8 * (double)(*(float *)(gen_frame + 0x30))) + (double)(*(float *)(gen_frame + 0x40)))));
      (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x14)) * (double)pfVar8[-2] +
                          (double)pfVar8[-1] * (double)(*(float *)(gen_frame + 0x24))) +
                         (double)*pfVar8 * (double)(*(float *)(gen_frame + 0x34))) + (double)(*(float *)(gen_frame + 0x44)))));
      (*(float *)(gen_frame + 0x9c)) = ((float)GEN_TOF(((((double)pfVar8[1] * (double)(*(float *)(gen_frame + 0xc)) +
                          (double)pfVar8[2] * (double)(*(float *)(gen_frame + 0x1c))) +
                         (double)pfVar8[3] * (double)(*(float *)(gen_frame + 0x2c))) + (double)(*(float *)(gen_frame + 0x3c)))));
      (*(float *)(gen_frame + 0xa0)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10)) * (double)pfVar8[1] +
                          (double)pfVar8[2] * (double)(*(float *)(gen_frame + 0x20))) +
                         (double)pfVar8[3] * (double)(*(float *)(gen_frame + 0x30))) + (double)(*(float *)(gen_frame + 0x40)))));
      fVar9 = pfVar8[5];
      (*(float *)(gen_frame + 0xa4)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x14)) * (double)pfVar8[1] +
                          (double)pfVar8[2] * (double)(*(float *)(gen_frame + 0x24))) +
                         (double)pfVar8[3] * (double)(*(float *)(gen_frame + 0x34))) + (double)(*(float *)(gen_frame + 0x44)))));
      fVar1 = pfVar8[4];
      (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((((double)fVar1 * (double)(*(float *)(gen_frame + 0xc)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x1c))) +
                         (double)pfVar8[6] * (double)(*(float *)(gen_frame + 0x2c))) + (double)(*(float *)(gen_frame + 0x3c)))));
      (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10)) * (double)fVar1 + (double)fVar9 * (double)(*(float *)(gen_frame + 0x20))) +
                         (double)pfVar8[6] * (double)(*(float *)(gen_frame + 0x30))) + (double)(*(float *)(gen_frame + 0x40)))));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x14)) * (double)fVar1 + (double)fVar9 * (double)(*(float *)(gen_frame + 0x24))) +
                         (double)pfVar8[6] * (double)(*(float *)(gen_frame + 0x34))) + (double)(*(float *)(gen_frame + 0x44)))));
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
      bVar5 = F_00553ba0((uint)(*(float * PTR32 *)&gen_args[2]),uVar7,(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x84)),
                           &(*(uint *)&gen_args[3]));
      if ((((bVar5 != 0) &&
           (((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (double)(*(float *)(gen_frame + 0xb0)) + *(double *)&REFG(undefined, 0x109ce00))) &&
          ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) &&
         (((fVar9 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)*((float *)GEN_TOP((uVar7 + 4))) * (double)(*(float *)(gen_frame + 0x88)) +
                                            (double)*((float *)GEN_TOP(uVar7)) * (double)(*(float *)(gen_frame + 0x84))) +
                                           (double)*((float *)GEN_TOP((uVar7 + 8))) * (double)(*(float *)(gen_frame + 0x8c))))) +
                           *(double *)&REFG(undefined, 0x109ce00)))),
           !((double)(*(float *)(gen_frame + 0xb0)) - ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < REFG(double, 0x109cdf8)) || (!((*(float *)(gen_frame + 0xac)) <= fVar9)))
          && (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 4))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x9c))),
             (char)uVar6 != '\0')))) {
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc))) = (*(float *)(gen_frame + 0x90));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = (*(float *)(gen_frame + 0x94));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x14))) = (*(float *)(gen_frame + 0x98));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x18))) = (*(float *)(gen_frame + 0x58));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x1c))) = (*(float *)(gen_frame + 0x5c));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x20))) = (*(float *)(gen_frame + 0x60));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x24))) = (*(float *)(gen_frame + 0x9c));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x28))) = (*(float *)(gen_frame + 0xa0));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x2c))) = (*(float *)(gen_frame + 0xa4));
        (*(float *)(gen_frame + 0xb0)) = gen_bits2f((*(uint *)&gen_args[3]));
        (*(float *)(gen_frame + 0xac)) = fVar9;
      }
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
      bVar5 = F_00553ba0((uint)(*(float * PTR32 *)&gen_args[2]),uVar7,(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x84)),
                           &(*(uint *)&gen_args[3]));
      if (((bVar5 != 0) &&
          (((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (double)(*(float *)(gen_frame + 0xb0)) + *(double *)&REFG(undefined, 0x109ce00))) &&
         (((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)) &&
          (((fVar9 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)*((float *)GEN_TOP((uVar7 + 4))) * (double)(*(float *)(gen_frame + 0x88)) +
                                             (double)*((float *)GEN_TOP(uVar7)) * (double)(*(float *)(gen_frame + 0x84))) +
                                            (double)*((float *)GEN_TOP((uVar7 + 8))) * (double)(*(float *)(gen_frame + 0x8c))))) +
                            *(double *)&REFG(undefined, 0x109ce00)))),
            !((double)(*(float *)(gen_frame + 0xb0)) - ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < REFG(double, 0x109cdf8)) || (!((*(float *)(gen_frame + 0xac)) <= fVar9))
            ) && (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 4))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x4c))),
                 (char)uVar6 != '\0')))))) {
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc))) = (*(float *)(gen_frame + 0x90));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = (*(float *)(gen_frame + 0x94));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x14))) = (*(float *)(gen_frame + 0x98));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x18))) = (*(float *)(gen_frame + 0x9c));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x1c))) = (*(float *)(gen_frame + 0xa0));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x20))) = (*(float *)(gen_frame + 0xa4));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x24))) = (*(float *)(gen_frame + 0x4c));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x28))) = (*(float *)(gen_frame + 0x50));
        *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x2c))) = (*(float *)(gen_frame + 0x54));
        (*(float *)(gen_frame + 0xb0)) = gen_bits2f((*(uint *)&gen_args[3]));
        (*(float *)(gen_frame + 0xac)) = fVar9;
      }
      pfVar8 = pfVar8 + 0xc;
      iVar3 = (*(int *)(gen_frame + 0x64)) - 1;
      (*(int *)(gen_frame + 0x64)) = iVar3;
    } while (iVar3 != 0);
    if ((*(float *)(gen_frame + 0xb0)) < (*(float *)(gen_frame + 0xa8))) {
      *((float *)GEN_TOP((*(uint *)&gen_args[1]))) = *((float *)GEN_TOP(uVar7)) * (*(float *)(gen_frame + 0xb0));
      *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))) = *((float *)GEN_TOP((uVar7 + 4))) * (*(float *)(gen_frame + 0xb0));
      *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) = *((float *)GEN_TOP((uVar7 + 8))) * (*(float *)(gen_frame + 0xb0));
      *((float *)GEN_TOP((*(uint *)&gen_args[1]))) = *((float *)GEN_TOP((*(uint *)&gen_args[1]))) + *(*(float * PTR32 *)&gen_args[2]);
      *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))) = (*(float * PTR32 *)&gen_args[2])[1] + *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4)));
      *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) = (*(float * PTR32 *)&gen_args[2])[2] + *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
      *((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x44))) = (*(int * PTR32 *)&gen_args[0]);
      *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x40))) = (*(float *)(gen_frame + 0xb0));
      pcVar4 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
      (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xb0));
      uVar7 = (*pcVar4)((*(int * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x3c))) = uVar7;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ca5af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca5af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00ca5cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca5cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11292c8));
  bVar1 = F_00ca4610(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ca5cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5cf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xca5cf0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11292d0));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00ca5140(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00ca5d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca5d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00ca5f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca5f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11292d8));
  bVar1 = F_00ca5140(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ca5f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca5f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca5f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  uVar4 = *param_3;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    goto switchD_00ca5f6d_caseD_0;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00ca5f6d_default;
switchD_00ca5f6d_caseD_0: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00ca5f6d_default;
  case 1: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar4 = uVar4 & *((uint *)GEN_TOP(param_3[5]));
    if (uVar4 != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00ca5f6d_default;
  case 2: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11292e0));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00ca4610(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var,bVar3);
  case 7: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00ca5f6d_default;
  case 3: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11292e0));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00ca5140(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var_00,bVar3);
  default: ;
switchD_00ca5f6d_default: ;
    return uVar4 & 0xffffff00;
  }
}

/* ref: FUN_00ca6090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca6090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00ca6260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6260(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xca6260u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1129408));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00ca4610(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00ca62b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca62b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca62b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129420));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1129418));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1129414));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1129410));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 1;
  return (uint)this;
}

/* ref: FUN_00ca6490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca64d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca64d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca64d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca6520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6520(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca6560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6560(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca6590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6590(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112919c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca65c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca65c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca65c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca65f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca65f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca65f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca6620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca6650 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca6650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00ca6720 */
GEN_LIB GEN_NOFRAME uint F_00ca6720(void)
{
  GEN_ENTER(0xca6720u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00ca6730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca6730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00ca6770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca6770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca6770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca67a0((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca6780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca6780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca6780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca67a0((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca6790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca6790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca6790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ca67a0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca67a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca67a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca67a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x1129420));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1129418));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x1129414));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1129410));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ca67e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca67e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca67e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = param_3[1];
  fVar5 = *param_3;
  *param_2 = (float)((double)param_3[2] * (double)fVar2 - (double)fVar4 * (double)fVar3);
  param_2[1] = (float)((double)fVar5 * (double)fVar3 - (double)param_3[2] * (double)fVar1);
  param_2[2] = (float)((double)fVar4 * (double)fVar1 - (double)fVar5 * (double)fVar2);
  return 0;
}

/* ref: FUN_00ca6870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xca6870u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00ca68a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca68a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xca68a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = *((float *)GEN_TOP((param_3 + 4)));
  fVar4 = *((float *)GEN_TOP(param_3));
  fVar5 = *in_ecx;
  fVar6 = *((float *)GEN_TOP((param_3 + 8)));
  fVar7 = *((float *)GEN_TOP((param_3 + 0xc)));
  fVar8 = in_ecx[3];
  fVar9 = *((float *)GEN_TOP((param_3 + 8)));
  *param_2 = (fVar4 * fVar8 + fVar5 * fVar7) +
             ((float)GEN_TOF(((double)*((float *)GEN_TOP((param_3 + 8))) * (double)fVar1 - (double)fVar3 * (double)fVar2
                    )));
  param_2[2] = (fVar9 * fVar8 + fVar2 * fVar7) +
               (float)((double)fVar3 * (double)fVar5 - (double)fVar4 * (double)fVar1);
  param_2[1] = (fVar3 * fVar8 + fVar1 * fVar7) +
               (float)((double)fVar4 * (double)fVar2 - (double)fVar6 * (double)fVar5);
  param_2[3] = ((float)GEN_TOF(((double)fVar8 * (double)fVar7 -
                      (double)((float)GEN_TOF((((double)fVar3 * (double)fVar1 + (double)fVar4 * (double)fVar5
                                      ) + (double)fVar9 * (double)fVar2))))));
  return (uint)param_2;
}

/* ref: FUN_00ca6b10 */
GEN_LIB GEN_FRAME uint F_00ca6b10(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xca6b10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint in_ecx;
  float10 fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  
  fVar6 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_4 * (float10)REFG(double, 0x1088108)))));
  fVar4 = (float)fVar6;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  fVar6 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_4 * (float10)REFG(double, 0x1088108)))));
  fVar5 = (float)fVar6;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  (*(float *)(gen_frame + 0x34)) = fVar2 * fVar5;
  (*(undefined4 *)(gen_frame + 0x20)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x24)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x28)) = param_3[2];
  fVar7 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  pfVar9 = &(*(float *)(gen_frame + 0x30));
  pfVar8 = &(*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x30)) = fVar1 * fVar5;
  (*(float *)(gen_frame + 0x38)) = fVar3 * fVar5;
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x10)) = fVar1 * fVar7;
  (*(float *)(gen_frame + 0x14)) = fVar2 * fVar7;
  (*(float *)(gen_frame + 0x18)) = fVar3 * fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  in_ecx = F_00ca68a0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_00ca68a0(in_ecx GEN_EDX_ARG,pfVar8,(uint)pfVar9);
  *param_1 = (*(float *)(gen_frame + 0x10));
  param_1[1] = (*(float *)(gen_frame + 0x14));
  param_1[2] = (*(float *)(gen_frame + 0x18));
  return (uint)param_1;
}

/* ref: FUN_00ca6c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  return (uint)param_2;
}

/* ref: FUN_00ca6c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca6c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x84)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
  return (uint)param_2;
}

/* ref: FUN_00ca6cb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca6cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *param_2 = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8))) +
                          (double)*((float *)GEN_TOP((in_ecx + 0xac))) * (double)*((float *)GEN_TOP((in_ecx + 0xac)))) +
                         (double)*((float *)GEN_TOP((in_ecx + 0xb0))) * (double)*((float *)GEN_TOP((in_ecx + 0xb0)))))));
  param_2[1] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xb4))) * (double)*((float *)GEN_TOP((in_ecx + 0xb4))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xb8))) * (double)*((float *)GEN_TOP((in_ecx + 0xb8)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xbc))) * (double)*((float *)GEN_TOP((in_ecx + 0xbc)))))));
  param_2[2] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xc0))) * (double)*((float *)GEN_TOP((in_ecx + 0xc0))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xc4))) * (double)*((float *)GEN_TOP((in_ecx + 0xc4)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 200))) * (double)*((float *)GEN_TOP((in_ecx + 200)))))));
  return 0;
}

/* ref: FUN_00ca6da0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca6da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca6da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00ca6e10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca6e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca6e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00ca6ee0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xca6ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (*((char *)GEN_TOP(((int)this + 0x108))) != '\0') {
    fVar5 = *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x68))) - *((float *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x6c))) - fVar5;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x70))) - *((float *)GEN_TOP(((int)this + 0x7c)));
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(int)this + 0x74U,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x8c,
                         (int)this + 0x80);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + 0x74U))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = uVar1;
    *((undefined1 *)GEN_TOP(((int)this + 0x108))) = 0;
    (*(float *)(gen_frame + 0x174)) = 0.0;
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),((undefined4 *)GEN_TOP(((int)this + 0x98))));
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),((undefined4 *)GEN_TOP(((int)this + 0x68))));
    pfVar3 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = *pfVar4;
    fVar8 = pfVar4[4];
    fVar9 = pfVar3[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar6) +
                       (double)pfVar4[8] * (double)fVar9) + (double)pfVar4[0xc] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar6) +
                       (double)pfVar4[9] * (double)fVar9) + (double)pfVar4[0xd] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar6) +
                       (double)pfVar4[10] * (double)fVar9) + (double)pfVar3[3] * (double)pfVar4[0xe]
                      )));
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar9 * (double)pfVar4[0xb]) +
                      (double)pfVar3[3] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar11 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar11 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar11 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar10) +
                      (double)pfVar3[7] * (double)pfVar4[0xe])));
    fVar6 = pfVar3[10];
    fVar9 = pfVar3[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar11 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar10 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar9 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar6) +
                      (double)pfVar4[0xc] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar9 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar6) +
                      (double)pfVar4[0xd] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar9 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar6) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xe])));
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xd];
    fVar12 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar6 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)fVar12)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar11) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)fVar12)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar11) +
                      (double)pfVar4[10] * (double)fVar10) + (double)fVar12 * (double)pfVar4[0xe])));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar4[3] * (double)fVar5 + (double)pfVar4[7] * (double)pfVar3[0xd])
                      + (double)fVar10 * (double)pfVar4[0xb]) + (double)pfVar4[0xf] * (double)fVar12
                     )));
    pfVar3 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x80)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[7];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar6 = pfVar3[0xb];
    fVar7 = pfVar3[10];
    fVar8 = pfVar3[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[0xd];
    fVar6 = pfVar3[0xe];
    fVar7 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar6 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar6 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar6 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar6 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar10;
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar11;
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar11) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar6) +
                     (double)fVar12 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)fVar10 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar7) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x1f8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x208)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xa8))) = fVar17;
    *((float *)GEN_TOP(((int)this + 0xac))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xb0))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar22;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar24;
    *((float *)GEN_TOP(((int)this + 200))) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xcc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14)));
    *((float *)GEN_TOP(((int)this + 0xd0))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    *((float *)GEN_TOP(((int)this + 0xd4))) = fVar5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(float *)(gen_frame + 0x160)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x104))) = (*(float *)(gen_frame + 0x160));
    F_00ca11f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca8810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca8810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xca8810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ca8830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca8830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca8830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2[1];
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar4 = ((float)GEN_TOF(((((double)fVar3 * (double)*((float *)GEN_TOP((in_ecx + 0xe4))) +
                   (double)fVar1 * (double)*((float *)GEN_TOP((in_ecx + 0xd8)))) +
                  (double)fVar2 * (double)*((float *)GEN_TOP((in_ecx + 0xf0)))) +
                 (double)*((float *)GEN_TOP((in_ecx + 0xfc))))));
  fVar5 = ((float)GEN_TOF(((((double)fVar3 * (double)*((float *)GEN_TOP((in_ecx + 0xe8))) +
                   (double)fVar1 * (double)*((float *)GEN_TOP((in_ecx + 0xdc)))) +
                  (double)fVar2 * (double)*((float *)GEN_TOP((in_ecx + 0xf4)))) +
                 (double)*((float *)GEN_TOP((in_ecx + 0x100))))));
  fVar3 = ((float)GEN_TOF(((((double)fVar3 * (double)*((float *)GEN_TOP((in_ecx + 0xec))) +
                   (double)fVar1 * (double)*((float *)GEN_TOP((in_ecx + 0xe0)))) +
                  (double)fVar2 * (double)*((float *)GEN_TOP((in_ecx + 0xf8)))) +
                 (double)*((float *)GEN_TOP((in_ecx + 0x104))))));
  if ((((REFG(double, 0x1094890) <= (double)fVar4) && (REFG(double, 0x1094890) <= (double)fVar5)) &&
      (REFG(double, 0x1094890) <= (double)fVar3)) &&
     (((fVar4 <= REFG(float, 0x1087f04) && (fVar5 <= REFG(float, 0x1087f04))) &&
      ((fVar3 <= REFG(float, 0x1087f04) &&
       ((double)fVar3 * (double)fVar3 + (double)fVar4 * (double)fVar4 < REFG(double, 0x1088130))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca89b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) + (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c)))
                         + (double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30))))));
  uVar3 = (*pcVar1)(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00ca8ac0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca8ac0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(int * param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xca8ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(int * param_9 = (int *)(uintptr_t)gen_a8;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  (*(int * PTR32 *)(gen_frame + 0x24)) = param_1;
  param_2[0xc] = *param_5;
  param_2[0xd] = param_5[1];
  param_2[0xe] = param_5[2];
  *param_2 = *param_4 * param_6;
  param_2[1] = param_4[1] * param_6;
  param_2[2] = param_4[2] * param_6;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = param_6;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD));
  dVar7 = REFG(double, 0x11294b8);
  fVar10 = REFG(float, 0x1087f04);
  fVar11 = 0.0;
  param_2[0xf] = fVar3;
  fVar3 = fVar11;
  if ((double)((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)param_5[1]) & REFG(ulonglong, 0x11290a0)))) < dVar7) {
    dVar7 = (double)param_5[1] * 0.0;
    fVar10 = (float)(dVar7 - (double)param_5[2]);
    fVar11 = (float)((double)param_5[2] * 0.0 - (double)*param_5 * 0.0);
    dVar8 = (double)fVar11;
    fVar3 = (float)((double)*param_5 - dVar7);
    dVar7 = (double)fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar6 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar8 * dVar8) +
                                       (double)fVar3 * (double)fVar3)))))))));
    if (0.0 < fVar6) {
      fVar10 = fVar10 * fVar6;
      fVar11 = fVar11 * fVar6;
      fVar3 = fVar3 * fVar6;
    }
    else {
      fVar10 = REFG(float, 0x1379700);
      fVar11 = REFG(float, 0x1379704);
      fVar3 = REFG(float, 0x1379708);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0.0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0.0;
        fVar10 = REFG(float, 0x1379700);
        fVar11 = REFG(float, 0x1087f04);
        fVar3 = REFG(float, 0x1379708);
      }
    }
  }
  iVar1 = *param_9;
  (*(float *)(gen_frame + 0xc)) = (float)((double)fVar10 * REFG(double, 0x1091858));
  (*(float *)(gen_frame + 0x10)) = (float)((double)fVar11 * REFG(double, 0x1091858));
  (*(float *)(gen_frame + 0x14)) = (float)((double)fVar3 * REFG(double, 0x1091858));
  if (iVar1 == 0) {
    fVar10 = param_3[3];
    (*(float *)(gen_frame + 0x18)) = *param_2 - *param_5 * fVar10;
    (*(float *)(gen_frame + 0x1c)) = param_2[1] - fVar10 * param_5[1];
    (*(float *)(gen_frame + 0x20)) = param_2[2] - param_5[2] * fVar10;
    pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),(float)(REFG(double, 0x10920b8) * 0.0))));
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    param_2[3] = *pfVar4 + (*(float *)(gen_frame + 0x18));
    fVar3 = REFG(float, 0x11294b0);
    param_2[4] = fVar10 + (*(float *)(gen_frame + 0x1c));
    param_2[5] = fVar11 + (*(float *)(gen_frame + 0x20));
    pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),fVar3)));
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    param_2[6] = *pfVar4 + (*(float *)(gen_frame + 0x18));
    fVar3 = REFG(float, 0x11294ac);
    param_2[7] = fVar10 + (*(float *)(gen_frame + 0x1c));
    param_2[8] = fVar11 + (*(float *)(gen_frame + 0x20));
    pfVar5 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),fVar3)));
    fVar3 = (*(float *)(gen_frame + 0x18)) + *pfVar5;
    fVar10 = (*(float *)(gen_frame + 0x1c));
    fVar11 = (*(float *)(gen_frame + 0x20));
  }
  else {
    pfVar4 = param_7;
    if (iVar1 != 1) {
      pfVar4 = param_8;
    }
    fVar11 = ((float)GEN_TOF(((double)(param_2[2] - pfVar4[2]) * (double)param_5[1] -
                    (double)(param_2[1] - pfVar4[1]) * (double)param_5[2])));
    dVar7 = (double)fVar11;
    fVar3 = ((float)GEN_TOF(((double)(param_2[1] - pfVar4[1]) * (double)*param_5 -
                   (double)param_5[1] * (double)(*param_2 - *pfVar4))));
    fVar10 = ((float)GEN_TOF(((double)param_5[2] * (double)(*param_2 - *pfVar4) -
                    (double)(param_2[2] - pfVar4[2]) * (double)*param_5)));
    dVar8 = (double)fVar10;
    dVar9 = (double)fVar3;
    fVar6 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9)))))))));
    if (0.0 < fVar6) {
      fVar11 = fVar11 * fVar6;
      fVar10 = fVar10 * fVar6;
      fVar3 = fVar3 * fVar6;
    }
    else {
      fVar11 = REFG(float, 0x1379700);
      fVar10 = REFG(float, 0x1379704);
      fVar3 = REFG(float, 0x1379708);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0.0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0.0;
        fVar11 = REFG(float, 0x1379700);
        fVar10 = REFG(float, 0x1087f04);
        fVar3 = REFG(float, 0x1379708);
      }
    }
    fVar6 = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x24))[0x29]);
    (*(float *)(gen_frame + 0x14)) = fVar3 * fVar6;
    (*(float *)(gen_frame + 0xc)) = fVar6 * fVar11;
    (*(float *)(gen_frame + 0x10)) = fVar10 * fVar6;
    pfVar5 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),REFG(float, 0x109ca64))));
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar3 = pfVar5[1];
    fVar6 = pfVar5[2];
    param_2[3] = *pfVar4 + *pfVar5;
    fVar2 = REFG(float, 0x11294a8);
    param_2[4] = fVar3 + fVar10;
    param_2[5] = fVar6 + fVar11;
    pfVar5 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),fVar2)));
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar3 = pfVar5[1];
    fVar6 = pfVar5[2];
    param_2[6] = *pfVar4 + *pfVar5;
    fVar2 = REFG(float, 0x11294a4);
    param_2[7] = fVar3 + fVar10;
    param_2[8] = fVar6 + fVar11;
    pfVar5 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),param_5,&(*(float *)(gen_frame + 0xc)),fVar2)));
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar3 = *pfVar4 + *pfVar5;
  }
  fVar6 = pfVar5[1];
  param_2[0xb] = pfVar5[2] + fVar11;
  param_2[10] = fVar6 + fVar10;
  param_2[9] = fVar3;
  return 1;
}

/* ref: FUN_00ca9260 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca9260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xca9260u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float * pfVar8;
  byte bVar9;
  
  pfVar8 = (*(float * PTR32 *)&gen_args[2]);
  uVar7 = (*(uint *)&gen_args[1]);
  fVar1 = *((float *)GEN_TOP((param_1 + 0xa8)));
  fVar2 = *((float *)GEN_TOP((param_1 + 0xb4)));
  fVar3 = *((float *)GEN_TOP((param_1 + 0xac)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0xb8)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  fVar5 = *((float *)GEN_TOP((param_1 + 0xb0)));
  fVar6 = *((float *)GEN_TOP((param_1 + 0xbc)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((((double)fVar1 * 0.0 + (double)fVar2) +
                     (double)*((float *)GEN_TOP((param_1 + 0xc0))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xcc))))))
  ;
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((((double)fVar3 * 0.0 + (double)fVar4) +
                     (double)*((float *)GEN_TOP((param_1 + 0xc4))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd0))))))
  ;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((((double)fVar5 * 0.0 + (double)fVar6) +
                     (double)*((float *)GEN_TOP((param_1 + 200))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd4))))));
  fVar2 = *((float *)GEN_TOP((param_1 + 0xb8)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((((double)fVar1 * 0.0 - (double)*((float *)GEN_TOP((param_1 + 0xb4))) * REFG(double, 0x1088130)) +
                     (double)*((float *)GEN_TOP((param_1 + 0xc0))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xcc))))))
  ;
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((((double)fVar3 * 0.0 - (double)fVar2 * REFG(double, 0x1088130)) +
                    (double)*((float *)GEN_TOP((param_1 + 0xc4))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd0))))));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((((double)fVar5 * 0.0 - (double)fVar6 * REFG(double, 0x1088130)) +
                    (double)*((float *)GEN_TOP((param_1 + 200))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd4))))));
  fVar1 = (*(float * PTR32 *)&gen_args[2])[1];
  fVar2 = (*(float * PTR32 *)&gen_args[2])[2];
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((*(uint *)&gen_args[1]))) + *(*(float * PTR32 *)&gen_args[2]) * (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))) + fVar1 * (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0xc)) = fVar2 * (*(float *)&gen_args[3]) + *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
  bVar9 = F_00c9cb90((*(uint *)&gen_args[1]),(uint)&(*(float *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x1c)),(uint)&(*(float *)(gen_frame + 0x28)),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa4)))),&(*(uint *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float * PTR32 *)&gen_args[2]));
  if (bVar9 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(uVar7));
    (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((uVar7 + 4)));
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(*((undefined4 *)GEN_TOP((uVar7 + 8))));
    (*(float *)(gen_frame + 0xc)) = 0.0;
    bVar9 = F_00ca8ac0(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)),pfVar8,&(*(undefined4 *)(gen_frame + 0x10)),gen_bits2f((*(uint *)&gen_args[1])) * (*(float *)&gen_args[3]),
                         &(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x28)),&(*(float * PTR32 *)&gen_args[2]));
    return bVar9;
  }
  return 0;
}

/* ref: FUN_00ca9570 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ca9570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xca9570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = (*(uint *)&gen_args[2]);
  uVar5 = (*(uint *)&gen_args[1]);
  fVar1 = *((float *)GEN_TOP((param_1 + 0xac)));
  fVar2 = *((float *)GEN_TOP((param_1 + 0xb0)));
  fVar12 = ((float)GEN_TOF(((((double)*((float *)GEN_TOP((param_1 + 0xa8))) * 0.0 + (double)*((float *)GEN_TOP((param_1 + 0xb4))))
                   + (double)*((float *)GEN_TOP((param_1 + 0xc0))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xcc))))))
  ;
  fVar13 = ((float)GEN_TOF(((((double)fVar1 * 0.0 + (double)*((float *)GEN_TOP((param_1 + 0xb8)))) +
                   (double)*((float *)GEN_TOP((param_1 + 0xc4))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd0))))));
  (*(float *)(gen_frame + 0x34)) = fVar13;
  fVar14 = ((float)GEN_TOF(((((double)fVar2 * 0.0 + (double)*((float *)GEN_TOP((param_1 + 0xbc)))) +
                   (double)*((float *)GEN_TOP((param_1 + 200))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd4))))));
  fVar11 = ((float)GEN_TOF(((((double)*((float *)GEN_TOP((param_1 + 0xa8))) * 0.0 -
                    (double)*((float *)GEN_TOP((param_1 + 0xb4))) * REFG(double, 0x1088130)) +
                   (double)*((float *)GEN_TOP((param_1 + 0xc0))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xcc))))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  fVar3 = *((float *)GEN_TOP((param_1 + 0xb8)));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(float *)(gen_frame + 0x30)) = fVar12;
  (*(float *)(gen_frame + 0x38)) = fVar14;
  (*(float *)(gen_frame + 0x3c)) = fVar11;
  fVar10 = ((float)GEN_TOF(((((double)fVar1 * 0.0 - (double)fVar3 * REFG(double, 0x1088130)) +
                   (double)*((float *)GEN_TOP((param_1 + 0xc4))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd0))))));
  (*(float *)(gen_frame + 0x40)) = fVar10;
  fVar1 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc)));
  fVar8 = ((float)GEN_TOF(((((double)fVar2 * 0.0 - (double)*((float *)GEN_TOP((param_1 + 0xbc))) * REFG(double, 0x1088130)) +
                  (double)*((float *)GEN_TOP((param_1 + 200))) * 0.0) + (double)*((float *)GEN_TOP((param_1 + 0xd4))))));
  (*(float *)(gen_frame + 0x44)) = fVar8;
  fVar2 = fVar12 - fVar11;
  fVar4 = fVar13 - fVar10;
  (*(float *)(gen_frame + 0x48)) = fVar2;
  fVar3 = fVar14 - fVar8;
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar9 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)fVar2 * (double)fVar2 + (double)fVar4 * (double)fVar4
                                      ) + (double)fVar3 * (double)fVar3)))))))));
  (*(float *)(gen_frame + 0x50)) = fVar3;
  if (0.0 < fVar9) {
    fVar2 = fVar2 * fVar9;
    fVar4 = fVar4 * fVar9;
    fVar3 = fVar3 * fVar9;
  }
  else {
    fVar2 = REFG(float, 0x1379700);
    fVar4 = REFG(float, 0x1379704);
    fVar3 = REFG(float, 0x1379708);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar2 = REFG(float, 0x1379700);
      fVar4 = REFG(float, 0x1087f04);
      fVar3 = REFG(float, 0x1379708);
    }
  }
  (*(float *)(gen_frame + 0x0)) = fVar2 * fVar1 + fVar12;
  (*(float *)(gen_frame + 0x4)) = fVar4 * fVar1 + fVar13;
  (*(float *)(gen_frame + 0x8)) = fVar3 * fVar1 + fVar14;
  fVar9 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc)));
  fVar12 = *((float *)GEN_TOP((*(uint *)&gen_args[2])));
  (*(float *)(gen_frame + 0x48)) = fVar11 - fVar2 * fVar1;
  (*(float *)(gen_frame + 0x4c)) = fVar10 - fVar4 * fVar1;
  fVar2 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
  fVar4 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4)));
  (*(float *)(gen_frame + 0x50)) = fVar8 - fVar3 * fVar1;
  fVar3 = *((float *)GEN_TOP((*(uint *)&gen_args[1])));
  fVar8 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
  (*(float *)(gen_frame + 0xc)) = fVar3;
  fVar10 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 8)));
  (*(float *)(gen_frame + 0x18)) = fVar3 + fVar12 * (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x1c)) = fVar4 + fVar8 * (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0x20)) = fVar2 + fVar10 * (*(float *)&gen_args[3]);
  fVar2 = *((float *)GEN_TOP((param_1 + 0xa4)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
  bVar7 = F_00c9cb90((uint)&(*(float *)(gen_frame + 0xc)),(uint)&(*(float *)(gen_frame + 0x18)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x48)),fVar2 + fVar9
                       ,&(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x24)),&(*(uint *)&gen_args[1]));
  if (bVar7 == 0) {
    return 0;
  }
  bVar7 = F_00ca8ac0(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),uVar5,uVar6,&(*(undefined4 *)(gen_frame + 0x24)),gen_bits2f((*(uint *)&gen_args[2])) * (*(float *)&gen_args[3]),&(*(float *)(gen_frame + 0x30))
                       ,&(*(float *)(gen_frame + 0x3c)),&(*(uint *)&gen_args[1]));
  return bVar7;
}

/* ref: FUN_00ca9a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca9a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xca9a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float * pfVar2;
  undefined3 extraout_var_01 = 0;
  float fVar3;
  float fVar4;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  pfVar2 = ((float *)GEN_TOP(*param_3));
  switch((unsigned int)(uintptr_t)(pfVar2)) {
  case 0x0: ;
    goto switchD_00ca9ab9_caseD_0;
  case 0x1: ;
    bVar1 = F_00ca9570(this GEN_EDX_FWD,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
    if (bVar1 == 0) {
      return 0;
    }
    fVar4 = *((float *)GEN_TOP(param_3[3]));
    goto LAB_00ca9aef;
  case 0x2: ;
    bVar1 = F_00ca9260(this GEN_EDX_ARG,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
    pfVar2 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 == 0) goto switchD_00ca9ab9_default;
    fVar3 = *((float *)GEN_TOP(param_3[3]));
    goto LAB_00ca9b6c;
  case 0x3: ;
    break;
  case 0x4: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00ca9ab9_default;
    goto switchD_00ca9ab9_caseD_0;
  case 0x5: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00ca9ab9_default;
    bVar1 = F_00ca9570(this GEN_EDX_ARG,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
    goto LAB_00ca9ae0;
  case 0x6: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00ca9ab9_default;
    bVar1 = F_00ca9260(this GEN_EDX_ARG,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
    pfVar2 = ((float *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
    goto LAB_00ca9c50;
  case 0x7: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00ca9ab9_default;
    break;
  default: ;
    goto switchD_00ca9ab9_default;
  }
  bVar1 = F_00ca9570(this GEN_EDX_ARG,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
  pfVar2 = ((float *)GEN_TOP(CONCAT31(extraout_var_01,bVar1)));
LAB_00ca9c50: ;
  if ((char)pfVar2 == '\0') {
switchD_00ca9ab9_default: ;
    return (uint)pfVar2 & 0xffffff00;
  }
  pfVar2 = ((float *)GEN_TOP(param_3[3]));
  fVar3 = *pfVar2;
LAB_00ca9b6c: ;
  if (!(*((float *)GEN_TOP((param_1 + 0x40))) <= fVar3)) goto switchD_00ca9ab9_default;
  fVar3 = *((float *)GEN_TOP((param_1 + 0x34)));
  fVar4 = gen_bits2f(param_3[4]);
  goto LAB_00ca9af4;
switchD_00ca9ab9_caseD_0: ;
  bVar1 = F_00ca9260(this GEN_EDX_ARG,param_1,param_3[1],param_3[2],GEN_ARGF(*((float *)GEN_TOP(param_3[3]))));
LAB_00ca9ae0: ;
  if (bVar1 != 0) {
    fVar4 = *((float *)GEN_TOP(param_3[3]));
LAB_00ca9aef: ;
    fVar3 = *((float *)GEN_TOP((param_1 + 0x40)));
LAB_00ca9af4: ;
    if (fVar3 <= fVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ca9c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca9c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xca9c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  undefined4 uVar1;
  
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x11294d0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x11294c8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x11294c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x11294c0));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x108))) = 1;
  return (uint)this;
}

/* ref: FUN_00ca9e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca9e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca9e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x108))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca9e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca9e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca9e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x108))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca9ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ca9ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca9ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x108))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00ca9ed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ca9ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xca9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x104)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00ca9fa0 */
GEN_LIB GEN_NOFRAME uint F_00ca9fa0(void)
{
  GEN_ENTER(0xca9fa0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00ca9fb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca9fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca9fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00caa000((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca9fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca9fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca9fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00caa000((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ca9fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ca9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xca9fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00caa000((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00caa000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caa000(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaa000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[23])REFP(0x11294d0));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x11294c8));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x11294c4));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x11294c0));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00caa040 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00caa040(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcaa040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)in_ecx[2] * (float10)in_ecx[2] +
                         ((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[1] * (float10)in_ecx[1])))));
}

/* ref: FUN_00caa090 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00caa090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaa090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00caa100 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00caa100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaa100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00caa1d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00caa1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcaa1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*((char *)GEN_TOP(((int)this + 0x68))) != '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
    fVar6 = *((float *)GEN_TOP(((int)this + 0x7c)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x6c))) - *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x70))) - fVar6;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x74))) - *((float *)GEN_TOP(((int)this + 0x80)));
    uVar3 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(uint)puVar1,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x90,
                         ((undefined4 *)GEN_TOP(((int)this + 0x84))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar3);
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x174)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP(((int)this + 0xa0)));
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),((undefined4 *)GEN_TOP(((int)this + 0xa8))));
    pfVar4 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    pfVar5 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    fVar6 = pfVar4[1];
    fVar7 = *pfVar5;
    fVar8 = *pfVar4;
    fVar9 = pfVar5[4];
    fVar10 = pfVar4[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar7 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar10) + (double)pfVar5[0xc] * (double)pfVar4[3]
                      )));
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar8 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar10) + (double)pfVar5[0xd] * (double)pfVar4[3]
                      )));
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar5[2] + (double)pfVar5[6] * (double)fVar6) +
                       (double)fVar10 * (double)pfVar5[10]) +
                      (double)pfVar4[3] * (double)pfVar5[0xe])));
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar10 * (double)pfVar5[0xb]) +
                      (double)pfVar4[3] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar12 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar11) + (double)pfVar5[0xc] * (double)pfVar4[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar12 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar11) + (double)pfVar5[0xd] * (double)pfVar4[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar6 + (double)fVar12 * (double)pfVar5[2]) +
                       (double)fVar11 * (double)pfVar5[10]) +
                      (double)pfVar4[7] * (double)pfVar5[0xe])));
    fVar8 = pfVar4[10];
    fVar10 = pfVar4[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar12 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar11 * (double)pfVar5[0xb]) +
                      (double)pfVar4[7] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar10 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar8) +
                      (double)pfVar5[0xc] * (double)pfVar4[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar10 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar8) +
                      (double)pfVar5[0xd] * (double)pfVar4[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar6 + (double)fVar10 * (double)pfVar5[2]) +
                       (double)fVar8 * (double)pfVar5[10]) +
                      (double)pfVar4[0xb] * (double)pfVar5[0xe])));
    fVar11 = pfVar4[0xe];
    fVar12 = pfVar4[0xd];
    fVar13 = pfVar4[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar10 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar8 * (double)pfVar5[0xb]) +
                      (double)pfVar4[0xb] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar6 + (double)fVar9 * (double)fVar12) +
                       (double)pfVar5[8] * (double)fVar11) + (double)pfVar5[0xc] * (double)fVar13)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar6 + (double)pfVar5[5] * (double)fVar12) +
                       (double)pfVar5[9] * (double)fVar11) + (double)pfVar5[0xd] * (double)fVar13)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar12 + (double)fVar6 * (double)pfVar5[2]) +
                      (double)fVar11 * (double)pfVar5[10]) + (double)fVar13 * (double)pfVar5[0xe])));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar5[3] * (double)fVar6 + (double)pfVar5[7] * (double)pfVar4[0xd])
                      + (double)fVar11 * (double)pfVar5[0xb]) + (double)pfVar5[0xf] * (double)fVar13
                     )));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x8c)))))));
    fVar6 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar8 = pfVar4[2];
    fVar9 = pfVar4[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar10 = pfVar4[7];
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar7 = pfVar4[0xb];
    fVar8 = pfVar4[10];
    fVar9 = pfVar4[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar10 = pfVar4[0xf];
    fVar11 = pfVar4[0xe];
    fVar12 = pfVar4[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[0xd];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),puVar1);
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar11;
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar12) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar7 + (double)fVar10 * (double)(*(float *)(gen_frame + 0x16c))) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar8) +
                     (double)fVar14 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1f8)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x1fc)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x200)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x208)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x20c)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x210)) = fVar26;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar22;
    *((float *)GEN_TOP(((int)this + 200))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xcc))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xd4))) = fVar26;
    *((float *)GEN_TOP(((int)this + 0xd8))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    *((float *)GEN_TOP(((int)this + 0xdc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar8) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar17)));
    *((float *)GEN_TOP(((int)this + 0xe0))) = fVar6;
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 0xd8)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xdc)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
    (*(float *)(gen_frame + 0x160)) = fVar6;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 0xd4)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0x104))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0x108))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x110))) = (*(float *)(gen_frame + 0x160));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcabaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00cabb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcabb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00cabb50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcabb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00cabb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcabb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x78))) - *param_2)));
  dVar2 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x7c))) - param_2[1])));
  dVar3 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x80))) - param_2[2])));
  if ((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar1 * dVar1) + dVar3 * dVar3))) <
      (double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcabc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) + (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c)))
                         + (double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30))))));
  uVar3 = (*pcVar1)(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x14))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00cabd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabd20(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcabd20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = param_3;
  if (((param_1[0x11] & param_3) == 0) ||
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_FWD,param_2,param_5,param_6), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e])) *
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e]))) +
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])) *
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    }
    else {
      fVar2 = REFG(float, 0x1379704);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0;
        fVar2 = REFG(float, 0x1087f04);
      }
    }
    if (!(fVar2 <= param_4)) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cabe60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabe60(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xcabe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  *param_2 = *param_4 * param_5;
  param_2[1] = param_4[1] * param_5;
  param_2[2] = param_4[2] * param_5;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = param_5;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD));
  param_2[0xf] = fVar3;
  dVar6 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
  dVar5 = (double)(*param_2 - gen_bits2f(param_1[0x1e]));
  dVar7 = (double)(param_2[2] - gen_bits2f(param_1[0x20]));
  fVar3 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar6 * dVar6 + dVar5 * dVar5) + dVar7 * dVar7)))))))));
  fVar9 = 0.0;
  if (0.0 < fVar3) {
    fVar1 = (*param_2 - gen_bits2f(param_1[0x1e])) * fVar3;
    fVar2 = fVar3 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar3 = (param_2[2] - gen_bits2f(param_1[0x20])) * fVar3;
  }
  else {
    fVar1 = REFG(float, 0x1379700);
    fVar3 = REFG(float, 0x1379708);
    fVar2 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar1 = REFG(float, 0x1379700);
      fVar3 = REFG(float, 0x1379708);
      fVar2 = REFG(float, 0x1087f04);
    }
  }
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(float *)(gen_frame + 0x20)) = 0.0;
  fVar8 = REFG(float, 0x1087f04);
  if ((double)((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar2) & REFG(ulonglong, 0x11290a0)))) < REFG(double, 0x11294b8))
  {
    fVar8 = (float)((double)fVar2 * 0.0 - (double)fVar3);
    fVar9 = (float)((double)fVar3 * 0.0 - (double)fVar1 * 0.0);
    (*(float *)(gen_frame + 0x20)) = (float)((double)fVar1 - (double)fVar2 * 0.0);
  }
  fVar3 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)fVar8 * (double)fVar8 + (double)fVar9 * (double)fVar9
                                      ) + (double)(*(float *)(gen_frame + 0x20)) * (double)(*(float *)(gen_frame + 0x20)))))))))));
  if (0.0 < fVar3) {
    (*(float *)(gen_frame + 0x18)) = fVar3 * fVar8;
    (*(float *)(gen_frame + 0x1c)) = fVar9 * fVar3;
    fVar3 = (*(float *)(gen_frame + 0x20)) * fVar3;
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1379700);
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1379704);
    fVar3 = REFG(float, 0x1379708);
  }
  (*(float *)(gen_frame + 0x20)) = fVar3;
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),(float)(REFG(double, 0x10920b8) * 0.0))));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[3] = *pfVar4 + *param_2;
  fVar1 = REFG(float, 0x11294b0);
  param_2[4] = fVar3 + param_2[1];
  param_2[5] = fVar9 + param_2[2];
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),fVar1)));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[6] = *param_2 + *pfVar4;
  fVar1 = REFG(float, 0x11294ac);
  param_2[7] = fVar3 + param_2[1];
  param_2[8] = fVar9 + param_2[2];
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),fVar1)));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[9] = *param_2 + *pfVar4;
  param_2[10] = fVar3 + param_2[1];
  param_2[0xb] = fVar9 + param_2[2];
  return (uint)pfVar4;
}

/* ref: FUN_00cac330 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cac330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac330u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  byte bVar2;
  
  uVar1 = (*(uint *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 + 0x78)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_1 + 0x7c)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_1 + 0x80)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 0xa8)));
  bVar2 = F_00c9ae80((*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
  if (bVar2 != 0) {
    F_00cabe60(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),uVar1,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[2]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac3c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcac3c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = param_3;
  if (((param_1[0x11] & param_3) == 0) ||
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_FWD,param_2,param_5,param_6), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e])) *
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e]))) +
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])) *
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    }
    else {
      fVar2 = REFG(float, 0x1379704);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0;
        fVar2 = REFG(float, 0x1087f04);
      }
    }
    if (!(fVar2 <= param_4)) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cac500 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cac500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar6 = (*(undefined4 *)&gen_args[2]);
  uVar5 = (*(uint *)&gen_args[1]);
  fVar1 = *((float *)GEN_TOP((param_1 + 0x7c)));
  fVar2 = *((float *)GEN_TOP((param_1 + 0x80)));
  dVar8 = ((double)GEN_TOD((*((float *)GEN_TOP((param_1 + 0x78))) - *((float *)GEN_TOP((*(uint *)&gen_args[1]))))));
  dVar9 = ((double)GEN_TOD((fVar1 - *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))))));
  dVar10 = ((double)GEN_TOD((fVar2 - *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))))));
  if ((double)((float)GEN_TOF(((dVar9 * dVar9 + dVar8 * dVar8) + dVar10 * dVar10))) <
      (double)*((float *)GEN_TOP((param_1 + 0xa8))) * (double)*((float *)GEN_TOP((param_1 + 0xa8)))) {
    return 0;
  }
  fVar3 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((param_1 + 0x78)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar3 + fVar4;
  bVar7 = F_00c9ad50((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
  if (bVar7 != 0) {
    F_00cabe60(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),uVar5,uVar6,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcac620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  float * pfVar2;
  code * pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  pfVar2 = ((float *)GEN_TOP(*param_3));
  switch((unsigned int)(uintptr_t)(pfVar2)) {
  case 0x2: ;
    goto switchD_00cac64a_caseD_2;
  case 0x3: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x68)));
    goto LAB_00cac708;
  case 0x4: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00cac64a_default;
  case 0x0: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x74)));
    break;
  case 0x5: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    pfVar2 = ((float *)GEN_TOP((uVar1 & *((uint *)GEN_TOP(param_3[5])))));
    if (pfVar2 != ((float *)GEN_TOP((((uint *)GEN_TOP(param_3[5])))[1]))) goto switchD_00cac64a_default;
  case 0x1: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x68)));
    break;
  case 0x6: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00cac64a_default;
    goto switchD_00cac64a_caseD_2;
  case 0x7: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1]) ||
        (pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]))),
        (char)pfVar2 == '\0')) || (!(param_1[0x10] <= *((float *)GEN_TOP(param_3[3])))))
    goto switchD_00cac64a_default;
    fVar4 = *((float *)GEN_TOP(((int)this + 0x7c)));
    (*(float *)(gen_frame + 0x0)) = *param_1 - *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x4)) = param_1[1] - fVar4;
    (*(float *)(gen_frame + 0x8)) = param_1[2] - *((float *)GEN_TOP(((int)this + 0x80)));
    F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar5 = gen_bits2f(param_3[4]);
    fVar4 = (*(float *)(gen_frame + 0x4));
    goto LAB_00cac67a;
  default: ;
    goto switchD_00cac64a_default;
  }
  uVar1 = (*pcVar3)(this,param_1,uVar6,uVar7);
  if ((char)uVar1 != '\0') {
    fVar4 = param_1[0x10];
    fVar5 = *((float *)GEN_TOP(param_3[3]));
LAB_00cac67a: ;
    if (fVar4 <= fVar5) {
      return 1;
    }
  }
  return 0;
switchD_00cac64a_caseD_2: ;
  uVar7 = param_3[2];
  uVar6 = param_3[1];
  pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x74)));
LAB_00cac708: ;
  pfVar2 = ((float *)GEN_TOP((*pcVar3)(this,param_1,uVar6,uVar7)));
  if (((char)pfVar2 == '\0') || (pfVar2 = ((float *)GEN_TOP(param_3[3])), !(param_1[0x10] <= *pfVar2))) {
switchD_00cac64a_default: ;
    return (uint)pfVar2 & 0xffffff00;
  }
  fVar4 = *((float *)GEN_TOP(((int)this + 0x7c)));
  (*(float *)(gen_frame + 0x0)) = *param_1 - *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0x4)) = param_1[1] - fVar4;
  (*(float *)(gen_frame + 0x8)) = param_1[2] - *((float *)GEN_TOP(((int)this + 0x80)));
  F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar5 = gen_bits2f(param_3[4]);
  fVar4 = (*(float *)(gen_frame + 0x4));
  goto LAB_00cac67a;
}

/* ref: FUN_00cac890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcac890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  undefined4 uVar1;
  
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  return (uint)this;
}

/* ref: FUN_00caca50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00caca70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x7c)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: FUN_00caca90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x8c))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cacac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x90)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x94)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x98)));
  return (uint)param_2;
}

/* ref: FUN_00cacaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacaf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa4))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cacb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  return (uint)param_2;
}

/* ref: FUN_00cacb50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x104)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x10c)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x110)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0x108)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacc20 */
GEN_LIB GEN_NOFRAME uint F_00cacc20(void)
{
  GEN_ENTER(0xcacc20u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00cacc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcacc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cacc70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacc80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacc90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00caccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caccf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cacd20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00cacda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  return (uint)param_2;
}

/* ref: FUN_00cacdd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacdd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x84)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
  return (uint)param_2;
}

/* ref: FUN_00cace00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cace00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcace00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *param_2 = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xa4))) * (double)*((float *)GEN_TOP((in_ecx + 0xa4))) +
                          (double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8)))) +
                         (double)*((float *)GEN_TOP((in_ecx + 0xac))) * (double)*((float *)GEN_TOP((in_ecx + 0xac)))))));
  param_2[1] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xb0))) * (double)*((float *)GEN_TOP((in_ecx + 0xb0))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xb4))) * (double)*((float *)GEN_TOP((in_ecx + 0xb4)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xb8))) * (double)*((float *)GEN_TOP((in_ecx + 0xb8)))))));
  param_2[2] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xbc))) * (double)*((float *)GEN_TOP((in_ecx + 0xbc))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xc0))) * (double)*((float *)GEN_TOP((in_ecx + 0xc0)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xc4))) * (double)*((float *)GEN_TOP((in_ecx + 0xc4)))))));
  return 0;
}

/* ref: FUN_00cacef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacfc0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cacfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcacfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (*((char *)GEN_TOP(((int)this + 0x104))) != '\0') {
    fVar5 = *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x68))) - *((float *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x6c))) - fVar5;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x70))) - *((float *)GEN_TOP(((int)this + 0x7c)));
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(int)this + 0x74U,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x8c,
                         (int)this + 0x80);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + 0x74U))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    (*(float *)(gen_frame + 0x174)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 0;
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),(int)this + 0x98);
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),((undefined4 *)GEN_TOP(((int)this + 0x68))));
    pfVar3 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = *pfVar4;
    fVar8 = pfVar4[4];
    fVar9 = pfVar3[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar6) +
                       (double)pfVar4[8] * (double)fVar9) + (double)pfVar4[0xc] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar6) +
                       (double)pfVar4[9] * (double)fVar9) + (double)pfVar4[0xd] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar6) +
                       (double)pfVar4[10] * (double)fVar9) + (double)pfVar4[0xe] * (double)pfVar3[3]
                      )));
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar9 * (double)pfVar4[0xb]) +
                      (double)pfVar3[3] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar5 + (double)fVar7 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar11 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar11 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar10) +
                      (double)pfVar4[0xe] * (double)pfVar3[7])));
    fVar6 = pfVar3[10];
    fVar9 = pfVar3[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar11 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar10 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar9 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar6) +
                      (double)pfVar4[0xc] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar9 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar6) +
                      (double)pfVar4[0xd] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar9 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar6) +
                      (double)pfVar4[0xe] * (double)pfVar3[0xb])));
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xd];
    fVar12 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar6 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)fVar12)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar11) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)fVar12)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar11) +
                      (double)pfVar4[10] * (double)fVar10) + (double)pfVar4[0xe] * (double)fVar12)));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar3[0xd] * (double)pfVar4[7] + (double)pfVar4[3] * (double)fVar5)
                      + (double)pfVar4[0xb] * (double)fVar10) + (double)fVar12 * (double)pfVar4[0xf]
                     )));
    pfVar3 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x80)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[7];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar6 = pfVar3[0xb];
    fVar7 = pfVar3[10];
    fVar8 = pfVar3[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[0xf];
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[0xd];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar10;
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar11;
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar11) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar6) +
                     (double)fVar12 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)fVar10 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar7) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x1f8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x208)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xa4))) = fVar17;
    *((float *)GEN_TOP(((int)this + 0xa8))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xac))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xb0))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar22;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar25;
    *((float *)GEN_TOP(((int)this + 200))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14)));
    *((float *)GEN_TOP(((int)this + 0xcc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(float *)(gen_frame + 0x160)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x100))) = (*(float *)(gen_frame + 0x160));
    F_00ca11f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cae8e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cae8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcae8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x70)) = this;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  if ((*(uint *)&REFG(undefined, 0x15d76ec) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76ec) = *(uint *)&REFG(undefined, 0x15d76ec) | 1;
    REFG(float, 0x15d76bc) = REFG(float, 0x1090708);
    REFG(float, 0x15d76c0) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76c4) = 0.0;
    REFG(float, 0x15d76c8) = REFG(float, 0x1090708);
    REFG(float, 0x15d76cc) = REFG(float, 0x1090708);
    REFG(float, 0x15d76d0) = 0.0;
    REFG(float, 0x15d76d4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76d8) = REFG(float, 0x1090708);
    REFG(float, 0x15d76dc) = 0.0;
    REFG(float, 0x15d76e0) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76e4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76e8) = 0.0;
  }
  (*(float *)(gen_frame + 0x74)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x78)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  bVar1 = F_00550990(param_3,(uint)param_4,(uint)&(*(float *)(gen_frame + 0x64)),(uint)&(*(float *)(gen_frame + 0x4c)),(uint)&(*(float *)(gen_frame + 0x58)),
                       &(*(float *)(gen_frame + 0x78)));
  if ((((bVar1 != 0) &&
       ((!GEN_ISNAN((*(float *)(gen_frame + 0x78))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x78)) < *(float *)&REFG(undefined, 0x1088114))))
      && ((double)(*(float *)(gen_frame + 0x78)) < REFG(double, 0x10909a0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x58))),
     (char)uVar2 != '\0')) {
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x78));
    param_2[3] = (*(float *)(gen_frame + 0x64));
    param_2[4] = (*(float *)(gen_frame + 0x68));
    param_2[5] = (*(float *)(gen_frame + 0x6c));
    param_2[6] = (*(float *)(gen_frame + 0x4c));
    param_2[7] = (*(float *)(gen_frame + 0x50));
    param_2[8] = (*(float *)(gen_frame + 0x54));
    param_2[9] = (*(float *)(gen_frame + 0x58));
    param_2[10] = (*(float *)(gen_frame + 0x5c));
    param_2[0xb] = (*(float *)(gen_frame + 0x60));
  }
  (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x74));
  bVar1 = F_00550990(param_3,(uint)param_4,(uint)&(*(float *)(gen_frame + 0x64)),(uint)&(*(float *)(gen_frame + 0x58)),(uint)&(*(float *)(gen_frame + 0x40)),
                       &(*(float *)(gen_frame + 0x78)));
  fVar3 = (*(float *)(gen_frame + 0x74));
  if (((bVar1 != 0) &&
      ((!GEN_ISNAN((*(float *)(gen_frame + 0x78))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x78)) < *(float *)&REFG(undefined, 0x1088114)))) &&
     (((*(float *)(gen_frame + 0x78)) < (*(float *)(gen_frame + 0x74)) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40))), fVar3 = (*(float *)(gen_frame + 0x74))
      , (char)uVar2 != '\0')))) {
    param_2[3] = (*(float *)(gen_frame + 0x64));
    param_2[4] = (*(float *)(gen_frame + 0x68));
    param_2[5] = (*(float *)(gen_frame + 0x6c));
    param_2[6] = (*(float *)(gen_frame + 0x58));
    param_2[7] = (*(float *)(gen_frame + 0x5c));
    param_2[8] = (*(float *)(gen_frame + 0x60));
    param_2[9] = (*(float *)(gen_frame + 0x40));
    param_2[10] = (*(float *)(gen_frame + 0x44));
    param_2[0xb] = (*(float *)(gen_frame + 0x48));
    fVar3 = (*(float *)(gen_frame + 0x78));
  }
  if (!((double)fVar3 < REFG(double, 0x10909a0))) {
    return 0;
  }
  *param_2 = *param_4 * fVar3;
  param_2[1] = param_4[1] * fVar3;
  param_2[2] = param_4[2] * fVar3;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = fVar3;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00caf080 */
GEN_LIB GEN_NOFRAME undefined1 F_00caf080(void)
{
  GEN_ENTER(0xcaf080u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00caf0d0 */
GEN_LIB GEN_NOFRAME undefined1 F_00caf0d0(void)
{
  GEN_ENTER(0xcaf0d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf0f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00caf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcaf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: FUN_00caf100 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00caf100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaf100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00caf110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaf110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  iVar2 = *param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) +
                                          (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c))) + 0.0)))))) * REFG(double, 0x1088108))))
  ;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x1c))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x18))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00caf230 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00caf230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8c, 4, 4);
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x64)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0xc)));
  if ((*(uint *)&REFG(undefined, 0x15d7720) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7720) = *(uint *)&REFG(undefined, 0x15d7720) | 1;
    REFG(float, 0x15d76f0) = REFG(float, 0x1090708);
    REFG(float, 0x15d76f4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76f8) = 0.0;
    REFG(float, 0x15d76fc) = REFG(float, 0x1090708);
    REFG(float, 0x15d7700) = REFG(float, 0x1090708);
    REFG(float, 0x15d7704) = 0.0;
    REFG(float, 0x15d7708) = REFG(float, 0x1087f04);
    REFG(float, 0x15d770c) = REFG(float, 0x1090708);
    REFG(float, 0x15d7710) = 0.0;
    REFG(float, 0x15d7714) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7718) = REFG(float, 0x1087f04);
    REFG(float, 0x15d771c) = 0.0;
  }
  (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1090998);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x44)))));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x68)),(uint)&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x74)),&(*(undefined4 *)(gen_frame + 0x0)),
                       &(*(float *)(gen_frame + 0x84)));
  if ((((bVar1 != 0) &&
       ((!GEN_ISNAN((*(float *)(gen_frame + 0x84))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x84)) < *(float *)&REFG(undefined, 0x1088114))))
      && ((double)(*(float *)(gen_frame + 0x84)) < REFG(double, 0x10909a0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x74))),
     (char)uVar2 != '\0')) {
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x84));
    param_2[3] = (*(float *)(gen_frame + 0x68));
    param_2[4] = (*(float *)(gen_frame + 0x6c));
    param_2[5] = (*(float *)(gen_frame + 0x70));
    param_2[6] = (*(float *)(gen_frame + 0x58));
    param_2[7] = (*(float *)(gen_frame + 0x5c));
    param_2[8] = (*(float *)(gen_frame + 0x60));
    param_2[9] = (*(float *)(gen_frame + 0x74));
    param_2[10] = (*(float *)(gen_frame + 0x78));
    param_2[0xb] = (*(float *)(gen_frame + 0x7c));
  }
  (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x80));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x68)),(uint)&(*(float *)(gen_frame + 0x74)),&(*(float *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x0)),
                       &(*(float *)(gen_frame + 0x84)));
  fVar3 = (*(float *)(gen_frame + 0x80));
  if (((bVar1 != 0) &&
      ((!GEN_ISNAN((*(float *)(gen_frame + 0x84))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x84)) < *(float *)&REFG(undefined, 0x1088114)))) &&
     (((*(float *)(gen_frame + 0x84)) < (*(float *)(gen_frame + 0x80)) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x74)),&(*(float *)(gen_frame + 0x4c))), fVar3 = (*(float *)(gen_frame + 0x80))
      , (char)uVar2 != '\0')))) {
    param_2[3] = (*(float *)(gen_frame + 0x68));
    param_2[4] = (*(float *)(gen_frame + 0x6c));
    param_2[5] = (*(float *)(gen_frame + 0x70));
    param_2[6] = (*(float *)(gen_frame + 0x74));
    param_2[7] = (*(float *)(gen_frame + 0x78));
    param_2[8] = (*(float *)(gen_frame + 0x7c));
    param_2[9] = (*(float *)(gen_frame + 0x4c));
    param_2[10] = (*(float *)(gen_frame + 0x50));
    param_2[0xb] = (*(float *)(gen_frame + 0x54));
    fVar3 = (*(float *)(gen_frame + 0x84));
  }
  if (!((double)fVar3 < REFG(double, 0x10909a0))) {
    return 0;
  }
  *param_2 = *param_4 * fVar3;
  param_2[1] = param_4[1] * fVar3;
  param_2[2] = param_4[2] * fVar3;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = fVar3;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcaf9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cafba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295c4));
  bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafbd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcafbd0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295cc));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00cafc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cafdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295d4));
  bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafe20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafe20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  uVar4 = *param_3;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    goto switchD_00cafe4d_caseD_0;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
switchD_00cafe4d_caseD_0: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 1: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar4 = uVar4 & *((uint *)GEN_TOP(param_3[5]));
    if (uVar4 != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 2: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var,bVar3);
  case 7: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 3: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var_00,bVar3);
  default: ;
switchD_00cafe4d_default: ;
    return uVar4 & 0xffffff00;
  }
}

/* ref: FUN_00caff70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcaff70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cb0140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0140u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295e4));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00cb0190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 1;
  return (uint)this;
}

/* ref: FUN_00cb0370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb03b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb03b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb03b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb04a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb04a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb04a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb04d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb04d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb04d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb0500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb0530 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cb0600 */
GEN_LIB GEN_NOFRAME uint F_00cb0600(void)
{
  GEN_ENTER(0xcb0600u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_00cb0610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cb0650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb06f0 */
GEN_LIB GEN_FRAME uint F_00cb06f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0710 */
GEN_LIB GEN_FRAME uint F_00cb0710(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0740 */
GEN_LIB GEN_FRAME float10 F_00cb0740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: FUN_00cb0790 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb0790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + 4 + param_2 * 6)));
}

/* ref: FUN_00cb07c0 */
GEN_LIB GEN_FRAME uint F_00cb07c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x134c214) = param_1;
  return param_1;
}

/* ref: FUN_00cb07d0 */
GEN_LIB GEN_FRAME uint F_00cb07d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb07d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 + param_2 * 0xc,0);
  return uVar1;
}

/* ref: FUN_00cb0800 */
GEN_LIB GEN_FRAME uint F_00cb0800(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcb0800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cb52f0(param_1 + param_3 * 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cb0820 */
GEN_LIB GEN_FRAME uint F_00cb0820(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0840 */
GEN_LIB GEN_FRAME uint F_00cb0840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0860 */
GEN_LIB GEN_FRAME uint F_00cb0860(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (((int)this + 0x18U <= param_1) &&
     (param_1 < (int)this + 0x18U + *((int *)GEN_TOP(((int)this + 0xc))) * 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb08d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb08d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  return (uint)param_1;
}

/* ref: FUN_00cb0910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  return uVar1 + *((int *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00cb0930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  return uVar1 + *((int *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00cb0950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  puVar3 = ((uint *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))))));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0x60))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc);
  uVar1 = *puVar3;
  if (uVar2 < 3) {
    return uVar1 + 4;
  }
  return (uVar1 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_00cb09a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb09a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb09a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb5870(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00cb09f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb09f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb09f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return ~*((uint *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: FUN_00cb0a50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb0a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb0b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0bb0 */
GEN_LIB GEN_FRAME uint F_00cb0bb0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0be0 */
GEN_LIB GEN_FRAME uint F_00cb0be0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0c10 */
GEN_LIB GEN_FRAME uint F_00cb0c10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c30 */
GEN_LIB GEN_FRAME uint F_00cb0c30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb0c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),~*((byte *)GEN_TOP(((int)this + 4))));
  if ((~*((byte *)GEN_TOP(((int)this + 4))) & 1) != 0) {
    iVar5 = 0;
    if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *((int *)GEN_TOP(((int)this + 8)));
        sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x24))) + iVar4)));
        if (sVar1 == 0) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + 0x60))))(iVar3 + 0xc);
          if (uVar2 < 3) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                              (*((int *)GEN_TOP(((int)this + 8))) + 0xc,iVar5);
            F_00cb5490(((undefined *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4)))))) GEN_EDX_ARG);
          }
        }
        else if (sVar1 == 0xc) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + 0xc))))(iVar3 + 0xc,iVar5);
          iVar3 = uVar2 + *((int *)GEN_TOP(((int)this + 4)));
          if (iVar3 != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar3);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar5 < (int)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 4))));
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cb0d10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb0d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  char * pcVar8;
  float fVar9;
  ushort * puVar10;
  float * this_00;
  float10 fVar11;
  int local_8;
  
  puVar10 = ((ushort *)GEN_TOP((param_1 + param_2 * 2)));
  F_00cb0c50(this GEN_EDX_FWD);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                    (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2c))),0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
  param_1 = 0;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
      this_00 = ((float *)GEN_TOP(((int)*((short *)GEN_TOP((local_8 + 4 + iVar5))) + *((int *)GEN_TOP(((int)this + 4))))));
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((local_8 + iVar5))))) {
      case 0: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        pcVar8 = param_3;
        for (uVar7 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8); uVar7 != 0; uVar7 = uVar7 - 1) {
          cVar3 = *pcVar8;
          while (cVar3 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar3 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
        }
        F_00cb5870(this_00 GEN_EDX_ARG,pcVar8);
        break;
      case 1: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 2: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 3: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 4: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*((undefined1 *)GEN_TOP(((int)puVar10 + 1))));
        puVar10 = puVar10 + 1;
        break;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*((undefined1 *)GEN_TOP(((int)puVar10 + 1))));
        puVar10 = puVar10 + 1;
        break;
      case 6: ;
      case 9: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 1)))),
                                                (char)puVar10[1]),*((undefined1 *)GEN_TOP(((int)puVar10 + 3))))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 7: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 1)))),
                                                (char)puVar10[1]),*((undefined1 *)GEN_TOP(((int)puVar10 + 3))))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 8: ;
        fVar11 = F_00cb0740((uint)(ushort)(*puVar10 >> 8 | *puVar10 << 8));
        *this_00 = (float)fVar11;
        puVar10 = puVar10 + 1;
        break;
      case 10: ;
      case 0xb: ;
        uVar4 = *puVar10;
        uVar1 = *((undefined1 *)GEN_TOP(((int)puVar10 + 1)));
        uVar6 = puVar10[1];
        uVar2 = *((undefined1 *)GEN_TOP(((int)puVar10 + 3)));
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)puVar10[2],
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 5)))),
                                                (char)puVar10[3]),*((undefined1 *)GEN_TOP(((int)puVar10 + 7))))
                             );
        this_00[1] = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)uVar4,uVar1),(char)uVar6),uVar2));
        puVar10 = puVar10 + 4;
        break;
      case 0xc: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                     (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(uint)(ushort)(uVar4 << 8 | uVar4 >> 8),0));
        *this_00 = fVar9;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 6;
    } while (param_1 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb0f70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(short * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcb0f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(short * param_4 = (short *)(uintptr_t)gen_a4;)
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  short * psVar6;
  char * pcVar7;
  uint uVar8;
  char * pcVar9;
  undefined1 * puVar10;
  char * pcVar11;
  int iVar12;
  uint * this_00;
  uint local_c;
  int local_8;
  
  iVar1 = param_1 + (int)((int)(uintptr_t)param_2) * 2;
  F_00cb0c50(this GEN_EDX_FWD);
  param_2 = ((char *)GEN_TOP(((int)param_4 + (int)param_2 * -2)));
  pcVar11 = param_2;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    param_4 = *((short * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
    psVar6 = param_4 + 2;
    local_c = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78)));
    do {
      puVar10 = ((undefined1 *)GEN_TOP((iVar1 + *psVar6)));
      if (*param_4 == 0) {
        pcVar7 = puVar10 + param_3 + ((int)CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),
                                                             puVar10[2]),puVar10[3]) - (int)*psVar6)
        ;
        pcVar9 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar9));
      }
      param_4 = param_4 + 3;
      psVar6 = psVar6 + 3;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,pcVar11,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar8;
  F_00c46aa0(uVar8,iVar1,pcVar11);
  local_c = 0;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
      iVar12 = (int)*((short *)GEN_TOP((local_8 + 4 + iVar4)));
      this_00 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar12)));
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((local_8 + iVar4))))) {
      case 0: ;
        pcVar9 = ((char *)GEN_TOP(((int)CONCAT31(CONCAT21(CONCAT11((char)*this_00,
                                                          *((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                                 *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                                        *((undefined1 *)GEN_TOP(((int)this_00 + 3)))) + iVar1 + param_3)));
        pcVar11 = pcVar9;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        F_00c46aa0(param_2 + *((int *)GEN_TOP(((int)this + 4))),pcVar9,pcVar11 + (1 - (int)(pcVar9 + 1)));
        *this_00 = (int)param_2 - iVar12;
        F_00cb5570(this_00 GEN_EDX_ARG);
        param_2 = param_2 + (int)(pcVar11 + (1 - (int)(pcVar9 + 1)));
        break;
      case 4: ;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1))));
        break;
      case 6: ;
      case 7: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
        break;
      case 8: ;
        uVar3 = (ushort)*this_00;
        uVar5 = uVar3 >> 8 | uVar3 << 8;
        if (uVar5 == 0) {
          *this_00 = 0;
        }
        else {
          *this_00 = ((uVar5 & 0xffff8000) * 8 | uVar5 & 0x3ff) << 0xd |
                     (((uVar3 & 0xff) >> 2 & 0x1f) + 0x70) * 0x800000;
        }
        break;
      case 9: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
        break;
      case 10: ;
      case 0xb: ;
        uVar8 = *this_00;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)this_00[1],*((undefined1 *)GEN_TOP(((int)this_00 + 5)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 6)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 7))));
        this_00[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar8,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                       *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                              *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
      }
      local_c = local_c + 1;
      local_8 = local_8 + 6;
    } while (local_c < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb1240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *((int *)GEN_TOP(((int)this + 8))) = param_3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0xc))) + 0x60))))(((int *)GEN_TOP((param_3 + 0xc))) GEN_EDX_FWD);
  if (uVar1 < 3) {
    F_00cb0d10(this GEN_EDX_ARG,param_1,param_2,param_4);
    return (uint)this;
  }
  F_00cb0f70(this GEN_EDX_ARG,param_1,param_2,(param_4 + param_2 * -2) - param_1,param_5);
  return (uint)this;
}

/* ref: FUN_00cb12c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb12d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb12f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb1330 */
GEN_LIB GEN_FRAME unsigned int F_00cb1330(GEN_P(undefined * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;)
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != ((undefined * PTR32 *)GEN_TOP(0x0))) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((GEN_TCODE *)*(gen_code32 *)*ppuVar1)(ppuVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00cb1390 */
GEN_LIB GEN_FRAME unsigned int F_00cb1390(GEN_P(undefined * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;)
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != ((undefined * PTR32 *)GEN_TOP(0x0))) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((GEN_TCODE *)*(gen_code32 *)*ppuVar1)(ppuVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00cb13f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb13f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb13f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  F_00cb0c50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00cb1330(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb1480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb14b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb14b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb14b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb15d0 */
GEN_LIB GEN_NOFRAME uint F_00cb15d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb15d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppuVar3;
  uint uVar4;
  int * piVar5;
  
  ppuVar3 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    do {
      if (ppuVar3[4] != ((undefined *)GEN_TOP(0x0))) {
        puVar2 = (undefined4 *)ppuVar3[5];
        ppuVar3[4] = ppuVar3[4] - 1;
        ppuVar3[5] = ((undefined *)GEN_TOP(*puVar2));
        return (uint)puVar2;
      }
      ppuVar3 = (undefined * PTR32 *)ppuVar3[2];
    } while (ppuVar3 != &REFG(undefined * PTR32, 0x134c224));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(REFG(int, 0x134c214) * 3 + 6) * 4,0)))
  ;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129678));
    puVar2[3] = REFG(int, 0x134c214);
    uVar4 = 0;
    puVar2[4] = REFG(int, 0x134c214);
    piVar5 = puVar2 + 6;
    if (puVar2[3] != 0) {
      do {
        *piVar5 = (int)(piVar5 + 3);
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 3;
      } while (uVar4 < (uint)puVar2[3]);
    }
    puVar2[uVar4 * 3 + 3] = 0;
    puVar2[5] = puVar2 + 6;
  }
  puVar2[1] = &REFG(undefined * PTR32, 0x134c218);
  puVar2[2] = REFG(undefined * PTR32, 0x134c220);
  if (REFG(undefined * PTR32, 0x134c220) != ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar2;
  }
  REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[5]));
  REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar2;
  puVar2[4] = puVar2[4] - 1;
  puVar2[5] = *puVar1;
  return (uint)puVar1;
}

