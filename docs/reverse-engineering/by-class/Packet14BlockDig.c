/* Candidate RTTI class: Packet14BlockDig
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009028b8 slot 0 address 00775398 */

/* ADDRESS: 00775398 NAME: FUN_00775398 */

void FUN_00775398(void)

{
  return;
}



/* vtable 009028b8 slot 1 address 00775380 */

/* ADDRESS: 00775380 NAME: FUN_00775380 */

void __fastcall FUN_00775380(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009028b8 slot 2 address 004b9eb8 */

/* ADDRESS: 004b9eb8 NAME: FUN_004b9eb8 */

void __thiscall FUN_004b9eb8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



/* vtable 009028b8 slot 3 address 004b9f02 */

/* ADDRESS: 004b9f02 NAME: FUN_004b9f02 */

void __thiscall FUN_004b9f02(int param_1,undefined4 param_2)

{
  FUN_007d5380((int)*(char *)(param_1 + 0x20));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_007d5380((int)*(char *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_007d5380();
  return;
}



/* vtable 009028b8 slot 4 address 004b9e9c */

/* ADDRESS: 004b9e9c NAME: FUN_004b9e9c */

void FUN_004b9e9c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))();
  return;
}



/* vtable 009028b8 slot 5 address 004b9eb2 */

/* ADDRESS: 004b9eb2 NAME: FUN_004b9eb2 */

undefined4 FUN_004b9eb2(void)

{
  return 0xb;
}


