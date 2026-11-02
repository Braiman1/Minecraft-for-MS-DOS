/* Candidate RTTI class: MusInputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901194 slot 0 address 007745f4 */

/* ADDRESS: 007745f4 NAME: FUN_007745f4 */

void FUN_007745f4(void)

{
  FUN_00774610(2,0);
  return;
}



/* vtable 00901194 slot 1 address 007745d0 */

/* ADDRESS: 007745d0 NAME: FUN_007745d0 */

void __fastcall FUN_007745d0(void *param_1)

{
  FUN_007745f4();
  free(param_1);
  return;
}



/* vtable 009011a8 slot 0 address 0084581c */

/* ADDRESS: 0084581c NAME: FUN_0084581c */

void FUN_0084581c(void)

{
  FUN_007745f4();
  return;
}




/* vtable 009011a8 slot 1 address 00845810 */

/* ADDRESS: 00845810 NAME: FUN_00845810 */

void __fastcall FUN_00845810(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_007745f4();
  free((void *)((int)param_1 + iVar1));
  return;
}


