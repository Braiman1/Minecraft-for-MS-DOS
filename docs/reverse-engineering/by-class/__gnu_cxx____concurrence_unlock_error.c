/* Candidate RTTI class: __gnu_cxx::__concurrence_unlock_error
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907c80 slot 0 address 0077ad30 */

/* ADDRESS: 0077ad30 NAME: FUN_0077ad30 */

void __fastcall FUN_0077ad30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907c80;
  FUN_0083c5c0();
  return;
}



/* vtable 00907c80 slot 1 address 0077ad00 */

/* ADDRESS: 0077ad00 NAME: FUN_0077ad00 */

void __fastcall FUN_0077ad00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907c80;
  FUN_0083c5c0();
  free(param_1);
  return;
}



/* vtable 00907c80 slot 2 address 0077d2d0 */

/* ADDRESS: 0077d2d0 NAME: FUN_0077d2d0 */

char * FUN_0077d2d0(void)

{
  return "__gnu_cxx::__concurrence_unlock_error";
}


