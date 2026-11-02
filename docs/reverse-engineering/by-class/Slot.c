/* Candidate RTTI class: Slot
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904db4 slot 0 address 00776d14 */

/* ADDRESS: 00776d14 NAME: FUN_00776d14 */

void FUN_00776d14(void)

{
  return;
}



/* vtable 00904db4 slot 1 address 00776cfc */

/* ADDRESS: 00776cfc NAME: FUN_00776cfc */

void __fastcall FUN_00776cfc(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904db4 slot 2 address 004f3718 */

/* ADDRESS: 004f3718 NAME: FUN_004f3718 */

void __fastcall FUN_004f3718(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00904db4 slot 3 address 004f3728 */

/* ADDRESS: 004f3728 NAME: FUN_004f3728 */

undefined1 FUN_004f3728(void)

{
  return 1;
}



/* vtable 00904db4 slot 4 address 004f372e */

/* ADDRESS: 004f372e NAME: FUN_004f372e */

void __fastcall FUN_004f372e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



/* vtable 00904db4 slot 5 address 004f3736 */

/* ADDRESS: 004f3736 NAME: FUN_004f3736 */

void __fastcall FUN_004f3736(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f373b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  return;
}



/* vtable 00904db4 slot 6 address 004f373e */

/* ADDRESS: 004f373e NAME: FUN_004f373e */

undefined4 FUN_004f373e(void)

{
  return 0xffffffff;
}


