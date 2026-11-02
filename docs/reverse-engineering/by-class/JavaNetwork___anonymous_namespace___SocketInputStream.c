/* Candidate RTTI class: JavaNetwork::(anonymous namespace)::SocketInputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008832a0 slot 0 address 0040dc98 */

/* ADDRESS: 0040dc98 NAME: FUN_0040dc98 */

void FUN_0040dc98(void)

{
  FUN_0040dc2a(2,0);
  return;
}



/* vtable 008832a0 slot 1 address 0040dcbc */

/* ADDRESS: 0040dcbc NAME: FUN_0040dcbc */

void __fastcall FUN_0040dcbc(void *param_1)

{
  FUN_0040dc98();
  free(param_1);
  return;
}



/* vtable 008832b4 slot 0 address 0040dcb4 */

/* ADDRESS: 0040dcb4 NAME: FUN_0040dcb4 */

void FUN_0040dcb4(void)

{
  FUN_0040dc98();
  return;
}



/* vtable 008832b4 slot 1 address 0040dce0 */

/* ADDRESS: 0040dce0 NAME: FUN_0040dce0 */

void __fastcall FUN_0040dce0(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_0040dc98();
  free((void *)((int)param_1 + iVar1));
  return;
}


