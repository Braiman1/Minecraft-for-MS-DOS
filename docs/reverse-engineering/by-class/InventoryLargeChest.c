/* Candidate RTTI class: InventoryLargeChest
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903f18 slot 0 address 00775d44 */

/* ADDRESS: 00775d44 NAME: thunk_FUN_00775d4c */

void thunk_FUN_00775d4c(void)

{
  FUN_00775d4c();
  return;
}



/* vtable 00903f18 slot 1 address 00775d20 */

/* ADDRESS: 00775d20 NAME: FUN_00775d20 */

void __fastcall FUN_00775d20(void *param_1)

{
  FUN_00775d4c();
  free(param_1);
  return;
}



/* vtable 00903f18 slot 2 address 0048e1ac */

/* ADDRESS: 0048e1ac NAME: FUN_0048e1ac */

int __fastcall FUN_0048e1ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 8))();
  return iVar2 + iVar1;
}



/* vtable 00903f18 slot 3 address 0048e2a6 */

/* ADDRESS: 0048e2a6 NAME: FUN_0048e2a6 */

void __thiscall FUN_0048e2a6(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (param_2 < iVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x1c) + 0xc);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x20) + 0xc);
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0048e2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* vtable 00903f18 slot 4 address 0048e1cc */

/* ADDRESS: 0048e1cc NAME: FUN_0048e1cc */

void __thiscall FUN_0048e1cc(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (param_2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0048e222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x20) + 0x10);
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0048e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* vtable 00903f18 slot 5 address 0048e2ea */

/* ADDRESS: 0048e2ea NAME: FUN_0048e2ea */

void __thiscall FUN_0048e2ea(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (param_2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0048e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x20) + 0x14);
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0048e32e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* vtable 00903f18 slot 6 address 0048e284 */

/* ADDRESS: 0048e284 NAME: FUN_0048e284 */

undefined4 __thiscall FUN_0048e284(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 4);
  return param_1;
}



/* vtable 00903f18 slot 7 address 0048e224 */

/* ADDRESS: 0048e224 NAME: FUN_0048e224 */

void __fastcall FUN_0048e224(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0048e229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
  return;
}



/* vtable 00903f18 slot 8 address 0048e22c */

/* ADDRESS: 0048e22c NAME: FUN_0048e22c */

void __fastcall FUN_0048e22c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0048e246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  return;
}



/* vtable 00903f18 slot 9 address 0048e248 */

/* ADDRESS: 0048e248 NAME: FUN_0048e248 */

undefined4 __thiscall FUN_0048e248(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0048e276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
  return uVar2;
}


