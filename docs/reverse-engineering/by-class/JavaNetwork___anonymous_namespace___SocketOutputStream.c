/* Candidate RTTI class: JavaNetwork::(anonymous namespace)::SocketOutputStream
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00883300 slot 0 address 0040dd54 */

/* ADDRESS: 0040dd54 NAME: FUN_0040dd54 */

void FUN_0040dd54(void)

{
  FUN_0040dce8(2,0);
  return;
}



/* vtable 00883300 slot 1 address 0040dd78 */

/* ADDRESS: 0040dd78 NAME: FUN_0040dd78 */

void __fastcall FUN_0040dd78(void *param_1)

{
  FUN_0040dd54();
  free(param_1);
  return;
}



/* vtable 00883314 slot 0 address 0040dd70 */

/* ADDRESS: 0040dd70 NAME: FUN_0040dd70 */

void FUN_0040dd70(void)

{
  FUN_0040dd54();
  return;
}



/* vtable 00883314 slot 1 address 0040dd9c */

/* ADDRESS: 0040dd9c NAME: FUN_0040dd9c */

void __fastcall FUN_0040dd9c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_0040dd54();
  free((void *)((int)param_1 + iVar1));
  return;
}


