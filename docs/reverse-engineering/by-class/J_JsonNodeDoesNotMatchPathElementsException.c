/* Candidate RTTI class: J_JsonNodeDoesNotMatchPathElementsException
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904ce8 slot 0 address 00776c48 */

/* ADDRESS: 00776c48 NAME: thunk_FUN_00776c50 */

void thunk_FUN_00776c50(void)

{
  FUN_00776c50();
  return;
}



/* vtable 00904ce8 slot 1 address 00776c24 */

/* ADDRESS: 00776c24 NAME: FUN_00776c24 */

void __fastcall FUN_00776c24(void *param_1)

{
  FUN_00776c50();
  free(param_1);
  return;
}



/* vtable 00904ce8 slot 2 address 007843a0 */

/* ADDRESS: 007843a0 NAME: FUN_007843a0 */

undefined4 __fastcall FUN_007843a0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


