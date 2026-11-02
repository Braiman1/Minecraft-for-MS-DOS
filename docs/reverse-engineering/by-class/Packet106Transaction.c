/* Candidate RTTI class: Packet106Transaction
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904468 slot 0 address 0077600c */

/* ADDRESS: 0077600c NAME: FUN_0077600c */

void FUN_0077600c(void)

{
  return;
}



/* vtable 00904468 slot 1 address 00775ff4 */

/* ADDRESS: 00775ff4 NAME: FUN_00775ff4 */

void __fastcall FUN_00775ff4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904468 slot 2 address 004b9528 */

/* ADDRESS: 004b9528 NAME: FUN_004b9528 */

void __thiscall FUN_004b9528(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  uVar3 = FUN_0040c828(param_2);
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  uVar2 = FUN_0040c7e3(param_2);
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  return;
}



/* vtable 00904468 slot 3 address 004b9564 */

/* ADDRESS: 004b9564 NAME: FUN_004b9564 */

void __thiscall FUN_004b9564(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,(int)*(short *)(param_1 + 0x14));
  FUN_0040c62f(param_2,*(undefined1 *)(param_1 + 0x16));
  return;
}



/* vtable 00904468 slot 4 address 004b950c */

/* ADDRESS: 004b950c NAME: FUN_004b950c */

void FUN_004b950c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



/* vtable 00904468 slot 5 address 004b9522 */

/* ADDRESS: 004b9522 NAME: FUN_004b9522 */

undefined4 FUN_004b9522(void)

{
  return 4;
}


