/* Candidate RTTI class: Packet102WindowClick
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904428 slot 0 address 004b8f0e */

/* ADDRESS: 004b8f0e NAME: FUN_004b8f0e */

void __fastcall FUN_004b8f0e(int param_1)

{
  if ((*(char *)(param_1 + 0x24) == '\0') || (*(void **)(param_1 + 0x20) == (void *)0x0)) {
    return;
  }
  free(*(void **)(param_1 + 0x20));
  return;
}



/* vtable 00904428 slot 1 address 004b8f34 */

/* ADDRESS: 004b8f34 NAME: FUN_004b8f34 */

void __fastcall FUN_004b8f34(void *param_1)

{
  FUN_004b8f0e();
  free(param_1);
  return;
}



/* vtable 00904428 slot 2 address 004b8d6c */

/* ADDRESS: 004b8d6c NAME: FUN_004b8d6c */

void __thiscall FUN_004b8d6c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x20));
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  sVar3 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar3;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x18) = (int)cVar1;
  uVar4 = FUN_0040c828(param_2);
  *(undefined2 *)(param_1 + 0x1c) = uVar4;
  uVar2 = FUN_0040c7e3(param_2);
  *(undefined1 *)(param_1 + 0x25) = uVar2;
  sVar3 = FUN_0040c828(param_2);
  if (sVar3 < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    cVar1 = FUN_0040c7f8(param_2);
    sVar5 = FUN_0040c828(param_2);
    uVar6 = FUN_00846710(0x10);
    FUN_00498316((int)sVar3,(int)cVar1,(int)sVar5);
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}



/* vtable 00904428 slot 3 address 004b8e66 */

/* ADDRESS: 004b8e66 NAME: FUN_004b8e66 */

void __thiscall FUN_004b8e66(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x18));
  thunk_FUN_0040c65f(param_2,(int)*(short *)(param_1 + 0x1c));
  FUN_0040c62f(param_2,*(undefined1 *)(param_1 + 0x25));
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
    FUN_0040c647(param_2,**(undefined4 **)(param_1 + 0x20));
    uVar1 = FUN_0049870e();
  }
  thunk_FUN_0040c65f(param_2,uVar1);
  return;
}



/* vtable 00904428 slot 4 address 004b8d50 */

/* ADDRESS: 004b8d50 NAME: FUN_004b8d50 */

void FUN_004b8d50(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbc))();
  return;
}



/* vtable 00904428 slot 5 address 004b8d66 */

/* ADDRESS: 004b8d66 NAME: FUN_004b8d66 */

undefined4 FUN_004b8d66(void)

{
  return 0xb;
}


