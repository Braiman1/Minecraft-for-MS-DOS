/* Candidate RTTI class: J_JsonObjectNodeBuilder
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904a78 slot 0 address 00776618 */

/* ADDRESS: 00776618 NAME: thunk_FUN_00776620 */

void thunk_FUN_00776620(void)

{
  FUN_00776620();
  return;
}



/* vtable 00904a78 slot 1 address 007765f4 */

/* ADDRESS: 007765f4 NAME: FUN_007765f4 */

void __fastcall FUN_007765f4(void *param_1)

{
  FUN_00776620();
  free(param_1);
  return;
}



/* vtable 00904a78 slot 2 address 0049c286 */

/* ADDRESS: 0049c286 NAME: thunk_FUN_0049c246 */

undefined4 __fastcall thunk_FUN_0049c246(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_24 [28];
  
  FUN_0049c2d0(param_1);
  uVar1 = FUN_0049b634(auStack_24);
  FUN_0049c1d4();
  return uVar1;
}


