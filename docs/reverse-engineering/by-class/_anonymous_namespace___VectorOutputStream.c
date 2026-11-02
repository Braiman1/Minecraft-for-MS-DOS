/* Candidate RTTI class: (anonymous namespace)::VectorOutputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0088f5ec slot 0 address 004a472e */

/* ADDRESS: 004a472e NAME: FUN_004a472e */

void FUN_004a472e(void)

{
  FUN_004a46c2(2,0);
  return;
}



/* vtable 0088f5ec slot 1 address 004a4752 */

/* ADDRESS: 004a4752 NAME: FUN_004a4752 */

void __fastcall FUN_004a4752(void *param_1)

{
  FUN_004a472e();
  free(param_1);
  return;
}



/* vtable 0088f600 slot 0 address 004a474a */

/* ADDRESS: 004a474a NAME: FUN_004a474a */

void FUN_004a474a(void)

{
  FUN_004a472e();
  return;
}



/* vtable 0088f600 slot 1 address 004a4776 */

/* ADDRESS: 004a4776 NAME: FUN_004a4776 */

void __fastcall FUN_004a4776(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004a472e();
  free((void *)((int)param_1 + iVar1));
  return;
}


