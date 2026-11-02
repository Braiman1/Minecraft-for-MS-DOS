/* Candidate RTTI class: MinecraftError
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901160 slot 0 address 00774584 */

/* ADDRESS: 00774584 NAME: thunk_FUN_0077458c */

void thunk_FUN_0077458c(void)

{
  FUN_0077458c();
  return;
}



/* vtable 00901160 slot 1 address 00774560 */

/* ADDRESS: 00774560 NAME: FUN_00774560 */

void __fastcall FUN_00774560(void *param_1)

{
  FUN_0077458c();
  free(param_1);
  return;
}



/* vtable 00901160 slot 2 address 007c8180 */

/* ADDRESS: 007c8180 NAME: FUN_007c8180 */

char * FUN_007c8180(void)

{
  return "std::exception";
}


