/* Candidate RTTI class: J_PositionTrackingPushbackReader
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904cc0 slot 0 address 00776b88 */

/* ADDRESS: 00776b88 NAME: thunk_FUN_00776b90 */

void thunk_FUN_00776b90(void)

{
  FUN_00776b90();
  return;
}



/* vtable 00904cc0 slot 1 address 00776b64 */

/* ADDRESS: 00776b64 NAME: FUN_00776b64 */

void __fastcall FUN_00776b64(void *param_1)

{
  FUN_00776b90();
  free(param_1);
  return;
}



/* vtable 00904cc0 slot 2 address 0049cb0c */

/* ADDRESS: 0049cb0c NAME: FUN_0049cb0c */

undefined4 __fastcall FUN_0049cb0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* vtable 00904cc0 slot 3 address 0049cb10 */

/* ADDRESS: 0049cb10 NAME: FUN_0049cb10 */

undefined4 __fastcall FUN_0049cb10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


