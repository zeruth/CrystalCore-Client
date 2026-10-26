#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::UI2::AddonCharaMakeDataExport::vf0 */
uint F_00925dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  F_0042c880(this + 0x188);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf0 */
uint F_00925e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1d9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf0 */
uint F_00925e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1e9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf0 */
uint F_00925e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1f9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf0 */
uint F_00925ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk2::vf18 */
uint F_00925ee0(void)
{
  GEN_ENTER(0x925ee0u, 0u, 0u, 0u, 0u);
  return 0x10d61b4;
}

/* ref: FUN_00925ef0 */
unsigned int F_00925ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x925ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk2::vf0 */
uint F_00925f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk3::vf18 */
uint F_00925f60(void)
{
  GEN_ENTER(0x925f60u, 0u, 0u, 0u, 0u);
  return 0x10d6214;
}

/* ref: FUN_00925f70 */
unsigned int F_00925f70(unsigned int gen_a0)
{
  GEN_ENTER(0x925f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk3::vf0 */
uint F_00925fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk4::vf18 */
uint F_00925fe0(void)
{
  GEN_ENTER(0x925fe0u, 0u, 0u, 0u, 0u);
  return 0x10d6274;
}

/* ref: FUN_00925ff0 */
unsigned int F_00925ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x925ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk4::vf0 */
uint F_00926020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk5::vf18 */
uint F_00926060(void)
{
  GEN_ENTER(0x926060u, 0u, 0u, 0u, 0u);
  return 0x10d62d4;
}

/* ref: FUN_00926070 */
unsigned int F_00926070(unsigned int gen_a0)
{
  GEN_ENTER(0x926070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk5::vf0 */
uint F_009260a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9260a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk6::vf18 */
uint F_009260e0(void)
{
  GEN_ENTER(0x9260e0u, 0u, 0u, 0u, 0u);
  return 0x10d6334;
}

/* ref: FUN_009260f0 */
unsigned int F_009260f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9260f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk6::vf0 */
uint F_00926120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk12::vf18 */
uint F_00926160(void)
{
  GEN_ENTER(0x926160u, 0u, 0u, 0u, 0u);
  return 0x10d6394;
}

/* ref: FUN_00926170 */
unsigned int F_00926170(unsigned int gen_a0)
{
  GEN_ENTER(0x926170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk12::vf0 */
uint F_009261a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9261a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFacePaint::vf18 */
uint F_009261e0(void)
{
  GEN_ENTER(0x9261e0u, 0u, 0u, 0u, 0u);
  return 0x10d63f4;
}

/* ref: FUN_009261f0 */
unsigned int F_009261f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9261f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFacePaint::vf0 */
uint F_00926220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFaceType::vf18 */
uint F_00926260(void)
{
  GEN_ENTER(0x926260u, 0u, 0u, 0u, 0u);
  return 0x10d645c;
}

/* ref: FUN_00926270 */
unsigned int F_00926270(unsigned int gen_a0)
{
  GEN_ENTER(0x926270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFaceType::vf0 */
uint F_009262a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9262a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconHair::vf18 */
uint F_009262e0(void)
{
  GEN_ENTER(0x9262e0u, 0u, 0u, 0u, 0u);
  return 0x10d64c4;
}

/* ref: FUN_009262f0 */
unsigned int F_009262f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9262f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconHair::vf0 */
uint F_00926320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTail::vf18 */
uint F_00926360(void)
{
  GEN_ENTER(0x926360u, 0u, 0u, 0u, 0u);
  return 0x10d6524;
}

/* ref: FUN_00926370 */
unsigned int F_00926370(unsigned int gen_a0)
{
  GEN_ENTER(0x926370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTail::vf0 */
uint F_009263a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9263a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf18 */
uint F_009263e0(void)
{
  GEN_ENTER(0x9263e0u, 0u, 0u, 0u, 0u);
  return 0x10d6584;
}

/* ref: FUN_009263f0 */
unsigned int F_009263f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9263f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf0 */
uint F_00926420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf18 */
uint F_00926460(void)
{
  GEN_ENTER(0x926460u, 0u, 0u, 0u, 0u);
  return 0x10d65ec;
}

/* ref: FUN_00926470 */
unsigned int F_00926470(unsigned int gen_a0)
{
  GEN_ENTER(0x926470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf0 */
uint F_009264a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9264a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf18 */
uint F_009264e0(void)
{
  GEN_ENTER(0x9264e0u, 0u, 0u, 0u, 0u);
  return 0x10d6654;
}

/* ref: FUN_009264f0 */
unsigned int F_009264f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9264f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf0 */
uint F_00926520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorFacePaint::vf18 */
uint F_00926560(void)
{
  GEN_ENTER(0x926560u, 0u, 0u, 0u, 0u);
  return 0x10d66b4;
}

/* ref: FUN_00926570 */
unsigned int F_00926570(unsigned int gen_a0)
{
  GEN_ENTER(0x926570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorFacePaint::vf0 */
uint F_009265a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9265a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorLip::vf18 */
uint F_009265e0(void)
{
  GEN_ENTER(0x9265e0u, 0u, 0u, 0u, 0u);
  return 0x10d671c;
}

/* ref: FUN_009265f0 */
unsigned int F_009265f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9265f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorLip::vf0 */
uint F_00926620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorHair::vf18 */
uint F_00926660(void)
{
  GEN_ENTER(0x926660u, 0u, 0u, 0u, 0u);
  return 0x10d677c;
}

/* ref: FUN_00926670 */
unsigned int F_00926670(unsigned int gen_a0)
{
  GEN_ENTER(0x926670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorHair::vf0 */
uint F_009266a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9266a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorEye::vf18 */
uint F_009266e0(void)
{
  GEN_ENTER(0x9266e0u, 0u, 0u, 0u, 0u);
  return 0x10d67e4;
}

/* ref: FUN_009266f0 */
unsigned int F_009266f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9266f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorEye::vf0 */
uint F_00926720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkSlider::vf18 */
uint F_00926760(void)
{
  GEN_ENTER(0x926760u, 0u, 0u, 0u, 0u);
  return 0x10d6844;
}

/* ref: FUN_00926770 */
unsigned int F_00926770(unsigned int gen_a0)
{
  GEN_ENTER(0x926770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkSlider::vf0 */
uint F_009267a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9267a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf0 */
uint F_009267e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9267e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf0 */
uint F_00926810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf0 */
uint F_00926840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf0 */
uint F_00926870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf0 */
uint F_009268a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9268a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf0 */
uint F_009268d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9268d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf0 */
uint F_00926900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf0 */
uint F_00926930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf0 */
uint F_00926960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf0 */
uint F_00926990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf0 */
uint F_009269c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9269c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf0 */
uint F_009269f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9269f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf0 */
uint F_00926a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton6::vf0 */
uint F_00926a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton12::vf0 */
uint F_00926a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf0 */
uint F_00926ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf0 */
uint F_00926ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFaceType::vf0 */
uint F_00926b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconHair::vf0 */
uint F_00926b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTail::vf0 */
uint F_00926b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf0 */
uint F_00926ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf0 */
uint F_00926bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSimpleClassSelect::vf0 */
uint F_00926c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d37cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00926c30 */
uint F_00926c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = ((code *)REFP(0x9127c0));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00926c60 */
uint F_00926c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926c70 */
uint F_00926c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926c80 */
uint F_00926c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926c90 */
uint F_00926c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926ca0 */
uint F_00926ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x88) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return param_1 * 0x88 + *(int *)this;
}

/* ref: FUN_00926cf0 */
uint F_00926cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x14) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x14;
}

/* ref: FUN_00926d30 */
uint F_00926d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926d40 */
uint F_00926d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926d50 */
uint F_00926d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926d60 */
uint F_00926d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926d70 */
uint F_00926d70(unsigned int gen_a0)
{
  GEN_ENTER(0x926d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00910a90(this);
  return (uint)this;
}

/* ref: FUN_00926d80 */
byte F_00926d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00926db0 */
uint F_00926db0(unsigned int gen_a0)
{
  GEN_ENTER(0x926db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00910c10(this);
  return (uint)this;
}

/* ref: FUN_00926dc0 */
byte F_00926dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00926df0 */
uint F_00926df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926e00 */
uint F_00926e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926e10 */
uint F_00926e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0xc) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0xc;
}

/* ref: FUN_00926e50 */
uint F_00926e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x18) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x18;
}

/* ref: FUN_00926ea0 */
uint F_00926ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 8;
}

/* ref: FUN_00926ed0 */
uint F_00926ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x14) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x14;
}

/* ref: FUN_00926f10 */
uint F_00926f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00926f70 */
byte F_00926f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00926fa0 */
byte F_00926fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00926fe0 */
uint F_00926fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926ff0 */
uint F_00926ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927000 */
uint F_00927000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00927030 */
uint F_00927030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927040 */
uint F_00927040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927050 */
uint F_00927050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00927080 */
uint F_00927080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927090 */
uint F_00927090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009270a0 */
uint F_009270a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9270a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009270b0 */
uint F_009270b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9270b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009270c0 */
uint F_009270c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9270c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x54) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return param_1 * 0x54 + *(int *)this;
}

/* ref: FUN_00927100 */
uint F_00927100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927110 */
uint F_00927110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927120 */
uint F_00927120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927130 */
uint F_00927130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927140 */
uint F_00927140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927150 */
uint F_00927150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927160 */
uint F_00927160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00927190 */
uint F_00927190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return param_1 * 0x10 + *(int *)this;
}

/* ref: FUN_009271e0 */
uint F_009271e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9271e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_00927240 */
byte F_00927240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927260 */
byte F_00927260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927280 */
byte F_00927280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009272a0 */
byte F_009272a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9272a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927300 */
byte F_00927300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009273e0 */
byte F_009273e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9273e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927420 */
byte F_00927420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927500 */
byte F_00927500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927540 */
byte F_00927540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00927570 */
byte F_00927570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009275a0 */
byte F_009275a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9275a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009275d0 */
byte F_009275d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9275d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: CallbackSheetWaiter_VRewardLoader_Reward_Agent_UI2_Client::vf0 */
uint F_00927620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VAgentLobby_Agent_UI2_Client_Game::vf0 */
uint F_00927650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VLobbyUIClient_Agent_UI2_Client_Game::vf0 */
uint F_00927680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00927730 */
byte F_00927730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00927760 */
uint F_00927760(unsigned int gen_a0)
{
  GEN_ENTER(0x927760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00927780 */
uint F_00927780(unsigned int gen_a0)
{
  GEN_ENTER(0x927780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00927790 */
uint F_00927790(unsigned int gen_a0)
{
  GEN_ENTER(0x927790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009277a0 */
uint F_009277a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9277a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009277d0 */
uint F_009277d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9277d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00927810 */
uint F_00927810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00927870 */
uint F_00927870(unsigned int gen_a0)
{
  GEN_ENTER(0x927870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00927890 */
uint F_00927890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x927890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009279b0 */
uint F_009279b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9279b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x39))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00927a10 */
uint F_00927a10(unsigned int gen_a0)
{
  GEN_ENTER(0x927a10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00927ce0 */
uint F_00927ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x927ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00927cf0 */
byte F_00927cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00927d40 */
uint F_00927d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00927d60 */
uint F_00927d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927d70 */
uint F_00927d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927db0 */
uint F_00927db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00927e20 */
uint F_00927e20(unsigned int gen_a0)
{
  GEN_ENTER(0x927e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00927e30 */
uint F_00927e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00927e40 */
uint F_00927e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927e40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00927fc0 */
uint F_00927fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x927fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00927fe0 */
byte F_00927fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x927fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928000 */
uint F_00928000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928020 */
byte F_00928020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928040 */
uint F_00928040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928060 */
byte F_00928060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009280e0 */
uint F_009280e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9280e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928100 */
unsigned int F_00928100(unsigned int gen_a0)
{
  GEN_ENTER(0x928100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00928150 */
uint F_00928150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928170 */
unsigned int F_00928170(unsigned int gen_a0)
{
  GEN_ENTER(0x928170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009281c0 */
byte F_009281c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9281c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009281e0 */
byte F_009281e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9281e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928200 */
byte F_00928200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00928240 */
uint F_00928240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928250 */
byte F_00928250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928270 */
uint F_00928270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928280 */
byte F_00928280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009282a0 */
uint F_009282a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9282a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009282b0 */
byte F_009282b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9282b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009282e0 */
uint F_009282e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9282e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928300 */
uint F_00928300(unsigned int gen_a0)
{
  GEN_ENTER(0x928300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00928310 */
uint F_00928310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928330 */
uint F_00928330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928340 */
byte F_00928340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928360 */
uint F_00928360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928370 */
byte F_00928370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928390 */
byte F_00928390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009283b0 */
uint F_009283b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9283b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009283d0 */
unsigned int F_009283d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9283d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x71) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x71);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x71);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x71);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x71);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00928420 */
byte F_00928420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928440 */
byte F_00928440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928460 */
uint F_00928460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928480 */
uint F_00928480(unsigned int gen_a0)
{
  GEN_ENTER(0x928480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00914400(this);
  return (uint)this;
}

/* ref: FUN_00928490 */
byte F_00928490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_009284b0 */
byte F_009284b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9284b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009284d0 */
uint F_009284d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9284d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009284e0 */
byte F_009284e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9284e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928500 */
byte F_00928500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928520 */
byte F_00928520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928540 */
byte F_00928540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928560 */
byte F_00928560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928580 */
byte F_00928580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009285a0 */
uint F_009285a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9285a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009285c0 */
uint F_009285c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9285c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009285e0 */
byte F_009285e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9285e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00928630 */
uint F_00928630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00928670 */
uint F_00928670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009286a0 */
uint F_009286a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9286a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009286d0 */
uint F_009286d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9286d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009286f0 */
uint F_009286f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9286f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928700 */
uint F_00928700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x928700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00928740 */
uint F_00928740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009288d0 */
uint F_009288d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9288d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00928910 */
uint F_00928910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00928980 */
uint F_00928980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_009289a0 */
uint F_009289a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9289a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_009289e0 */
undefined4 * F_009289e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9289e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00928a10 */
undefined4 * F_00928a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00928a40 */
uint F_00928a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928a60 */
uint F_00928a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_00928aa0 */
uint F_00928aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928ac0 */
uint F_00928ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00928b00 */
uint F_00928b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928b20 */
uint F_00928b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
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

/* ref: FUN_00928b60 */
uint F_00928b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x34;
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

/* ref: FUN_00928ba0 */
uint F_00928ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928bc0 */
uint F_00928bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928bc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00928c10 */
uint F_00928c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928c10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00928c60 */
uint F_00928c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x39) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x39) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00928ce0 */
uint F_00928ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd;
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

/* ref: FUN_00928d30 */
uint F_00928d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 3;
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

/* ref: FUN_00928d80 */
uint F_00928d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x60;
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

/* ref: FUN_00928dd0 */
uint F_00928dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00928e10 */
uint F_00928e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00928e50 */
uint F_00928e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_00928f00 */
uint F_00928f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928f20 */
uint F_00928f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd4;
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

/* ref: FUN_00928f60 */
uint F_00928f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
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

/* ref: FUN_00928fa0 */
uint F_00928fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
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

/* ref: FUN_00928ff0 */
uint F_00928ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
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

/* ref: FUN_00929040 */
uint F_00929040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929080 */
uint F_00929080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_009290c0 */
uint F_009290c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9290c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929100 */
uint F_00929100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929140 */
uint F_00929140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929170 */
uint F_00929170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_009291b0 */
uint F_009291b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9291b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00929200 */
uint F_00929200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929240 */
uint F_00929240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00929280 */
uint F_00929280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_009292d0 */
uint F_009292d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9292d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00929300 */
uint F_00929300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929310 */
uint F_00929310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00929330 */
uint F_00929330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929340 */
uint F_00929340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929350 */
uint F_00929350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00929370 */
uint F_00929370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929380 */
uint F_00929380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009293c0 */
uint F_009293c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9293c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00929400 */
uint F_00929400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00929420 */
uint F_00929420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00929470 */
uint F_00929470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_009294c0 */
uint F_009294c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9294c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009294e0 */
uint F_009294e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9294e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00929520 */
uint F_00929520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_00929570 */
uint F_00929570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc0;
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

/* ref: FUN_009295b0 */
uint F_009295b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009295c0 */
uint F_009295c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
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

/* ref: FUN_009295f0 */
uint F_009295f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929600 */
uint F_00929600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929600u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00929640 */
uint F_00929640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929650 */
uint F_00929650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x6c;
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

/* ref: FUN_00929690 */
uint F_00929690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009296a0 */
uint F_009296a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_009296d0 */
uint F_009296d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009296f0 */
uint F_009296f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00929730 */
uint F_00929730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929740 */
unsigned int F_00929740(unsigned int gen_a0)
{
  GEN_ENTER(0x929740u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00929790 */
uint F_00929790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009297a0 */
unsigned int F_009297a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9297a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009297f0 */
uint F_009297f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9297f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00929800 */
uint F_00929800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00929820 */
uint F_00929820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929860 */
uint F_00929860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929870 */
unsigned int F_00929870(unsigned int gen_a0)
{
  GEN_ENTER(0x929870u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009298c0 */
uint F_009298c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9298c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009298d0 */
uint F_009298d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9298d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_009298f0 */
uint F_009298f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9298f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929930 */
uint F_00929930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929940 */
uint F_00929940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929950 */
uint F_00929950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929960 */
uint F_00929960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929970 */
uint F_00929970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929980 */
uint F_00929980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929990 */
uint F_00929990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009299a0 */
uint F_009299a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9299a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xd4;
  return (uint)in_ecx;
}

/* ref: FUN_009299e0 */
uint F_009299e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9299e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009299f0 */
uint F_009299f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9299f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a00 */
uint F_00929a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a10 */
uint F_00929a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x54;
  return (uint)in_ecx;
}

/* ref: FUN_00929a30 */
uint F_00929a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a40 */
uint F_00929a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xd;
  return (uint)in_ecx;
}

/* ref: FUN_00929a60 */
uint F_00929a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a70 */
uint F_00929a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 3;
  return (uint)in_ecx;
}

/* ref: FUN_00929a90 */
uint F_00929a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929aa0 */
uint F_00929aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929aa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x60;
  return (uint)in_ecx;
}

/* ref: FUN_00929ac0 */
uint F_00929ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929ad0 */
uint F_00929ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00929af0 */
uint F_00929af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b00 */
uint F_00929b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00929b20 */
uint F_00929b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b30 */
uint F_00929b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_00929b50 */
uint F_00929b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b60 */
uint F_00929b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b70 */
uint F_00929b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b80 */
uint F_00929b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b90 */
uint F_00929b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929ba0 */
uint F_00929ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bb0 */
uint F_00929bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bc0 */
uint F_00929bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bd0 */
uint F_00929bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929be0 */
uint F_00929be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bf0 */
uint F_00929bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c00 */
uint F_00929c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c10 */
uint F_00929c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c20 */
uint F_00929c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c30 */
uint F_00929c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c40 */
uint F_00929c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929cf0 */
uint F_00929cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00910c10(this);
  return (uint)param_1;
}

/* ref: FUN_00929e00 */
uint F_00929e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00914400(this);
  return (uint)param_1;
}

/* ref: FUN_00929e20 */
byte F_00929e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929e60 */
byte F_00929e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929e80 */
uint F_00929e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929ec0 */
byte F_00929ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929ee0 */
byte F_00929ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f00 */
byte F_00929f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f20 */
byte F_00929f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f40 */
byte F_00929f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f60 */
byte F_00929f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f80 */
byte F_00929f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fa0 */
byte F_00929fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fc0 */
byte F_00929fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fe0 */
byte F_00929fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a000 */
byte F_0092a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a020 */
byte F_0092a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a040 */
byte F_0092a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a060 */
byte F_0092a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a080 */
byte F_0092a080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0a0 */
byte F_0092a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0c0 */
byte F_0092a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0e0 */
byte F_0092a0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a100 */
byte F_0092a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a120 */
byte F_0092a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a140 */
byte F_0092a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a160 */
byte F_0092a160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a180 */
uint F_0092a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a1e0 */
uint F_0092a1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a240 */
uint F_0092a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a2a0 */
uint F_0092a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a300 */
uint F_0092a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a360 */
uint F_0092a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a3c0 */
uint F_0092a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a420 */
uint F_0092a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a480 */
uint F_0092a480(unsigned int gen_a0)
{
  GEN_ENTER(0x92a480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009159a0(this);
  return (uint)this;
}

/* ref: FUN_0092a490 */
uint F_0092a490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_0092a4d0 */
uint F_0092a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a510 */
uint F_0092a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a550 */
uint F_0092a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a590 */
uint F_0092a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  return (uint)this;
}

/* ref: FUN_0092a5c0 */
uint F_0092a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a600 */
uint F_0092a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917470(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092a790 */
uint F_0092a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009174e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092a920 */
uint F_0092a920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917550(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092aab0 */
uint F_0092aab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92aab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009175c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ac40 */
uint F_0092ac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917630(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092add0 */
uint F_0092add0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92add0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009176a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092af60 */
uint F_0092af60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92af60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917710(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b0f0 */
uint F_0092b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917780(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b280 */
uint F_0092b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009177f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b410 */
uint F_0092b410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917860(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b5a0 */
uint F_0092b5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009178d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b730 */
uint F_0092b730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917940(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b8c0 */
uint F_0092b8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009179b0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ba50 */
uint F_0092ba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ba50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917a20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bbe0 */
uint F_0092bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917a90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bd70 */
uint F_0092bd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917b40(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bf00 */
uint F_0092bf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917bb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c090 */
uint F_0092c090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917c20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c220 */
uint F_0092c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917c90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c3b0 */
uint F_0092c3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917d00(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c540 */
uint F_0092c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917d70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c6d0 */
uint F_0092c6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917de0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c860 */
uint F_0092c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917e50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c9f0 */
uint F_0092c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917ec0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cb80 */
uint F_0092cb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917f70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cd10 */
uint F_0092cd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917fe0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cea0 */
uint F_0092cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918050(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d030 */
uint F_0092d030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009180c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d1c0 */
uint F_0092d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918130(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

