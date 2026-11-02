/* Candidate RTTI class: Packet16BlockItemSwitch
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904aa0 slot 0 address 007766a8 */

/* ADDRESS: 007766a8 NAME: FUN_007766a8 */

void FUN_007766a8(void)

{
  return;
}



/* vtable 00904aa0 slot 1 address 00776690 */

/* ADDRESS: 00776690 NAME: FUN_00776690 */

void __fastcall FUN_00776690(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904aa0 slot 2 address 004ba1d4 */

/* ADDRESS: 004ba1d4 NAME: FUN_004ba1d4 */

void __thiscall FUN_004ba1d4(int param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x10) = (int)sVar1;
  return;
}



/* vtable 00904aa0 slot 3 address 004ba1f4 */

/* ADDRESS: 004ba1f4 NAME: FUN_004ba1f4 */

void __thiscall FUN_004ba1f4(int param_1,undefined4 param_2)

{
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 00904aa0 slot 4 address 004ba1b8 */

/* ADDRESS: 004ba1b8 NAME: FUN_004ba1b8 */

void FUN_004ba1b8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))();
  return;
}



/* vtable 00904aa0 slot 5 address 004ba1ce */

/* ADDRESS: 004ba1ce NAME: FUN_004ba1ce */

undefined4 FUN_004ba1ce(void)

{
  return 2;
}


