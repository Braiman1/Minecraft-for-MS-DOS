/* Candidate RTTI class: Packet103SetSlot
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902878 slot 0 address 004b8fc0 */

/* ADDRESS: 004b8fc0 NAME: FUN_004b8fc0 */

void __fastcall FUN_004b8fc0(int param_1)

{
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 0x18));
  return;
}



/* vtable 00902878 slot 1 address 004b8fe0 */

/* ADDRESS: 004b8fe0 NAME: FUN_004b8fe0 */

void __fastcall FUN_004b8fe0(void *param_1)

{
  FUN_004b8fc0();
  free(param_1);
  return;
}



/* vtable 00902878 slot 2 address 004b9004 */

/* ADDRESS: 004b9004 NAME: FUN_004b9004 */

void __thiscall FUN_004b9004(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  sVar2 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar2;
  sVar2 = FUN_0040c828(param_2);
  if (-1 < sVar2) {
    cVar1 = FUN_0040c7f8(param_2);
    sVar3 = FUN_0040c828(param_2);
    uVar4 = FUN_00846710(0x10);
    FUN_00498316((int)sVar2,(int)cVar1,(int)sVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



/* vtable 00902878 slot 3 address 004b90c4 */

/* ADDRESS: 004b90c4 NAME: FUN_004b90c4 */

void __thiscall FUN_004b90c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    FUN_0040c647(param_2,**(undefined4 **)(param_1 + 0x18));
    uVar1 = FUN_0049870e();
  }
  thunk_FUN_0040c65f(param_2,uVar1);
  return;
}



/* vtable 00902878 slot 4 address 004b8fa4 */

/* ADDRESS: 004b8fa4 NAME: FUN_004b8fa4 */

void FUN_004b8fa4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8c))();
  return;
}



/* vtable 00902878 slot 5 address 004b8fba */

/* ADDRESS: 004b8fba NAME: FUN_004b8fba */

undefined4 FUN_004b8fba(void)

{
  return 8;
}


