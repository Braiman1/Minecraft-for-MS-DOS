/* Candidate RTTI class: CodecMus
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905b88 slot 0 address 00778880 */

/* ADDRESS: 00778880 NAME: thunk_FUN_00778888 */

void thunk_FUN_00778888(void)

{
  FUN_00778888();
  return;
}



/* vtable 00905b88 slot 1 address 0077885c */

/* ADDRESS: 0077885c NAME: FUN_0077885c */

void __fastcall FUN_0077885c(void *param_1)

{
  FUN_00778888();
  free(param_1);
  return;
}


