/* Candidate RTTI class: (anonymous namespace)::VectorInputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0088f54c slot 0 address 004a41fa */

/* ADDRESS: 004a41fa NAME: FUN_004a41fa */

void FUN_004a41fa(void)

{
  FUN_004a418e(2,0);
  return;
}



/* vtable 0088f54c slot 1 address 004a421e */

/* ADDRESS: 004a421e NAME: FUN_004a421e */

void __fastcall FUN_004a421e(void *param_1)

{
  FUN_004a41fa();
  free(param_1);
  return;
}



/* vtable 0088f560 slot 0 address 004a4216 */

/* ADDRESS: 004a4216 NAME: FUN_004a4216 */

void FUN_004a4216(void)

{
  FUN_004a41fa();
  return;
}



/* vtable 0088f560 slot 1 address 004a4242 */

/* ADDRESS: 004a4242 NAME: FUN_004a4242 */

void __fastcall FUN_004a4242(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004a41fa();
  free((void *)((int)param_1 + iVar1));
  return;
}


