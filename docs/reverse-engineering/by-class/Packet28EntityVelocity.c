/* Candidate RTTI class: Packet28EntityVelocity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090494c slot 0 address 0077650c */

/* ADDRESS: 0077650c NAME: FUN_0077650c */

void FUN_0077650c(void)

{
  return;
}



/* vtable 0090494c slot 1 address 007764f4 */

/* ADDRESS: 007764f4 NAME: FUN_007764f4 */

void __fastcall FUN_007764f4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090494c slot 2 address 004bb4fa */

/* ADDRESS: 004bb4fa NAME: FUN_004bb4fa */

void __thiscall FUN_004bb4fa(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x18) = (int)sVar1;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x1c) = (int)sVar1;
  return;
}



/* vtable 0090494c slot 3 address 004bb540 */

/* ADDRESS: 004bb540 NAME: FUN_004bb540 */

void __thiscall FUN_004bb540(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x18));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}



/* vtable 0090494c slot 4 address 004bb4e0 */

/* ADDRESS: 004bb4e0 NAME: FUN_004bb4e0 */

void FUN_004bb4e0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb4f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



/* vtable 0090494c slot 5 address 004bb4f4 */

/* ADDRESS: 004bb4f4 NAME: FUN_004bb4f4 */

undefined4 FUN_004bb4f4(void)

{
  return 10;
}


