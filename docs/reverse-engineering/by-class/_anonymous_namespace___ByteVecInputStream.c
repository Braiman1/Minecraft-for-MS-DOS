/* Candidate RTTI class: (anonymous namespace)::ByteVecInputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008921ec slot 0 address 004c4854 */

/* ADDRESS: 004c4854 NAME: FUN_004c4854 */

void FUN_004c4854(void)

{
  FUN_004c47e8(2,0);
  return;
}



/* vtable 008921ec slot 1 address 004c4878 */

/* ADDRESS: 004c4878 NAME: FUN_004c4878 */

void __fastcall FUN_004c4878(void *param_1)

{
  FUN_004c4854();
  free(param_1);
  return;
}



/* vtable 00892200 slot 0 address 004c4870 */

/* ADDRESS: 004c4870 NAME: FUN_004c4870 */

void FUN_004c4870(void)

{
  FUN_004c4854();
  return;
}



/* vtable 00892200 slot 1 address 004c489c */

/* ADDRESS: 004c489c NAME: FUN_004c489c */

void __fastcall FUN_004c489c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004c4854();
  free((void *)((int)param_1 + iVar1));
  return;
}


