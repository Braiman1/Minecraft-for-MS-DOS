/* Candidate RTTI class: SDLException
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe3c8 slot 0 address 00773654 */

/* ADDRESS: 00773654 NAME: thunk_FUN_0077365c */

void thunk_FUN_0077365c(void)

{
  FUN_0077365c();
  return;
}



/* vtable 008fe3c8 slot 1 address 00773630 */

/* ADDRESS: 00773630 NAME: FUN_00773630 */

void __fastcall FUN_00773630(void *param_1)

{
  FUN_0077365c();
  free(param_1);
  return;
}



/* vtable 008fe3c8 slot 2 address 007843a0 */

/* ADDRESS: 007843a0 NAME: FUN_007843a0 */

undefined4 __fastcall FUN_007843a0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


