/* Candidate RTTI class: J_InvalidSyntaxException
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904ae0 slot 0 address 00776950 */

/* ADDRESS: 00776950 NAME: thunk_FUN_00776958 */

void thunk_FUN_00776958(void)

{
  FUN_00776958();
  return;
}



/* vtable 00904ae0 slot 1 address 0077692c */

/* ADDRESS: 0077692c NAME: FUN_0077692c */

void __fastcall FUN_0077692c(void *param_1)

{
  FUN_00776958();
  free(param_1);
  return;
}



/* vtable 00904ae0 slot 2 address 0077ca58 */

/* ADDRESS: 0077ca58 NAME: FUN_0077ca58 */

undefined4 __fastcall FUN_0077ca58(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


