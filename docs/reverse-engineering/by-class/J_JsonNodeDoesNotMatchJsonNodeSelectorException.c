/* Candidate RTTI class: J_JsonNodeDoesNotMatchJsonNodeSelectorException
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904cfc slot 0 address 00776c8c */

/* ADDRESS: 00776c8c NAME: thunk_FUN_00776c94 */

void thunk_FUN_00776c94(void)

{
  FUN_00776c94();
  return;
}



/* vtable 00904cfc slot 1 address 00776c68 */

/* ADDRESS: 00776c68 NAME: FUN_00776c68 */

void __fastcall FUN_00776c68(void *param_1)

{
  FUN_00776c94();
  free(param_1);
  return;
}



/* vtable 00904cfc slot 2 address 007843a0 */

/* ADDRESS: 007843a0 NAME: FUN_007843a0 */

undefined4 __fastcall FUN_007843a0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


