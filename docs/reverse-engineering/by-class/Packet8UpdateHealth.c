/* Candidate RTTI class: Packet8UpdateHealth
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904018 slot 0 address 00775eb0 */

/* ADDRESS: 00775eb0 NAME: FUN_00775eb0 */

void FUN_00775eb0(void)

{
  return;
}



/* vtable 00904018 slot 1 address 00775e98 */

/* ADDRESS: 00775e98 NAME: FUN_00775e98 */

void __fastcall FUN_00775e98(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904018 slot 2 address 004bd422 */

/* ADDRESS: 004bd422 NAME: FUN_004bd422 */

void __thiscall FUN_004bd422(int param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x10) = (int)sVar1;
  return;
}



/* vtable 00904018 slot 3 address 004bd442 */

/* ADDRESS: 004bd442 NAME: FUN_004bd442 */

void __thiscall FUN_004bd442(int param_1,undefined4 param_2)

{
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 00904018 slot 4 address 004bd408 */

/* ADDRESS: 004bd408 NAME: FUN_004bd408 */

void FUN_004bd408(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7c))();
  return;
}



/* vtable 00904018 slot 5 address 004bd41c */

/* ADDRESS: 004bd41c NAME: FUN_004bd41c */

undefined4 FUN_004bd41c(void)

{
  return 2;
}


