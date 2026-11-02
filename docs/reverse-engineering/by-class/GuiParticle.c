/* Candidate RTTI class: GuiParticle
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc888 slot 0 address 00772438 */

/* ADDRESS: 00772438 NAME: thunk_FUN_00772440 */

void __fastcall thunk_FUN_00772440(int param_1)

{
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* vtable 008fc888 slot 1 address 00772414 */

/* ADDRESS: 00772414 NAME: FUN_00772414 */

void __fastcall FUN_00772414(void *param_1)

{
  func_0x00772440();
  free(param_1);
  return;
}


