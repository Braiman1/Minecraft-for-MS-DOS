/* Candidate RTTI class: GuiIngame
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009074d8 slot 0 address 0047f1a8 */

/* ADDRESS: 0047f1a8 NAME: FUN_0047f1a8 */

void __fastcall FUN_0047f1a8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009074d8;
  FUN_0047f15a();
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  param_1[5] = 0;
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_007f0014();
  return;
}



/* vtable 009074d8 slot 1 address 0047f1f6 */

/* ADDRESS: 0047f1f6 NAME: FUN_0047f1f6 */

void __fastcall FUN_0047f1f6(void *param_1)

{
  FUN_0047f1a8();
  free(param_1);
  return;
}


