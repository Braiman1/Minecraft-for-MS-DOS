/* Candidate RTTI class: RenderEntity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe2b8 slot 0 address 007735f8 */

/* ADDRESS: 007735f8 NAME: thunk_FUN_00773600 */

void thunk_FUN_00773600(void)

{
  FUN_00773600();
  return;
}



/* vtable 008fe2b8 slot 1 address 007735d4 */

/* ADDRESS: 007735d4 NAME: FUN_007735d4 */

void __fastcall FUN_007735d4(void *param_1)

{
  FUN_00773600();
  free(param_1);
  return;
}



/* vtable 008fe2b8 slot 2 address 004db75c */

/* ADDRESS: 004db75c NAME: FUN_004db75c */

void FUN_004db75c(int param_1,double param_2,double param_3,double param_4)

{
  (*DAT_0145d020)();
  FUN_004c57da(*(undefined4 *)(param_1 + 0xb0),param_2 - *(double *)(param_1 + 0xd8),
               param_3 - *(double *)(param_1 + 0xe0),param_4 - *(double *)(param_1 + 0xe8));
  (*DAT_0145d034)();
  return;
}


