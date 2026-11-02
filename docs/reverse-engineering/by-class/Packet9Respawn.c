/* Candidate RTTI class: Packet9Respawn
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090121c slot 0 address 007746cc */

/* ADDRESS: 007746cc NAME: FUN_007746cc */

void FUN_007746cc(void)

{
  return;
}



/* vtable 0090121c slot 1 address 007746b4 */

/* ADDRESS: 007746b4 NAME: FUN_007746b4 */

void __fastcall FUN_007746b4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090121c slot 2 address 004bd47c */

/* ADDRESS: 004bd47c NAME: FUN_004bd47c */

void __thiscall FUN_004bd47c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  return;
}



/* vtable 0090121c slot 3 address 004bd49c */

/* ADDRESS: 004bd49c NAME: FUN_004bd49c */

void __thiscall FUN_004bd49c(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x10));
  return;
}



/* vtable 0090121c slot 4 address 004bd460 */

/* ADDRESS: 004bd460 NAME: FUN_004bd460 */

void FUN_004bd460(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



/* vtable 0090121c slot 5 address 004bd476 */

/* ADDRESS: 004bd476 NAME: FUN_004bd476 */

undefined4 FUN_004bd476(void)

{
  return 1;
}


