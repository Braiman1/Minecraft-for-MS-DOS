/* Candidate RTTI class: Packet105UpdateProgressbar
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904c0c slot 0 address 00776ae0 */

/* ADDRESS: 00776ae0 NAME: FUN_00776ae0 */

void FUN_00776ae0(void)

{
  return;
}



/* vtable 00904c0c slot 1 address 00776ac8 */

/* ADDRESS: 00776ac8 NAME: FUN_00776ac8 */

void __fastcall FUN_00776ac8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904c0c slot 2 address 004b948c */

/* ADDRESS: 004b948c NAME: FUN_004b948c */

void __thiscall FUN_004b948c(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  sVar2 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar2;
  sVar2 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x18) = (int)sVar2;
  return;
}



/* vtable 00904c0c slot 3 address 004b94c8 */

/* ADDRESS: 004b94c8 NAME: FUN_004b94c8 */

void __thiscall FUN_004b94c8(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x18));
  return;
}



/* vtable 00904c0c slot 4 address 004b9470 */

/* ADDRESS: 004b9470 NAME: FUN_004b9470 */

void FUN_004b9470(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x9c))();
  return;
}



/* vtable 00904c0c slot 5 address 004b9486 */

/* ADDRESS: 004b9486 NAME: FUN_004b9486 */

undefined4 FUN_004b9486(void)

{
  return 5;
}


