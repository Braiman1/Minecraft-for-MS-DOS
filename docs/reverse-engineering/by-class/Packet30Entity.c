/* Candidate RTTI class: Packet30Entity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009011fc slot 0 address 007746b0 */

/* ADDRESS: 007746b0 NAME: FUN_007746b0 */

void FUN_007746b0(void)

{
  return;
}



/* vtable 009011fc slot 1 address 00774698 */

/* ADDRESS: 00774698 NAME: FUN_00774698 */

void __fastcall FUN_00774698(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009011fc slot 2 address 004bb81a */

/* ADDRESS: 004bb81a NAME: FUN_004bb81a */

void __thiscall FUN_004bb81a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



/* vtable 009011fc slot 3 address 004bb83a */

/* ADDRESS: 004bb83a NAME: FUN_004bb83a */

void __thiscall FUN_004bb83a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009011fc slot 4 address 004bb800 */

/* ADDRESS: 004bb800 NAME: FUN_004bb800 */

void FUN_004bb800(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* vtable 009011fc slot 5 address 004bb814 */

/* ADDRESS: 004bb814 NAME: FUN_004bb814 */

undefined4 FUN_004bb814(void)

{
  return 4;
}


