/* Candidate RTTI class: Packet15Place
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff3f0 slot 0 address 004ba132 */

/* ADDRESS: 004ba132 NAME: FUN_004ba132 */

void __fastcall FUN_004ba132(int param_1)

{
  if ((*(char *)(param_1 + 0x24) == '\0') || (*(void **)(param_1 + 0x20) == (void *)0x0)) {
    return;
  }
  free(*(void **)(param_1 + 0x20));
  return;
}



/* vtable 008ff3f0 slot 1 address 004ba158 */

/* ADDRESS: 004ba158 NAME: FUN_004ba158 */

void __fastcall FUN_004ba158(void *param_1)

{
  FUN_004ba132();
  free(param_1);
  return;
}



/* vtable 008ff3f0 slot 2 address 004b9fb4 */

/* ADDRESS: 004b9fb4 NAME: FUN_004b9fb4 */

void __thiscall FUN_004b9fb4(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x20));
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  sVar2 = FUN_0040c828(param_2);
  if (sVar2 < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    cVar1 = FUN_0040c7f8(param_2);
    sVar3 = FUN_0040c828(param_2);
    uVar4 = FUN_00846710(0x10);
    FUN_00498316((int)sVar2,(int)cVar1,(int)sVar3);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}



/* vtable 008ff3f0 slot 3 address 004ba09a */

/* ADDRESS: 004ba09a NAME: FUN_004ba09a */

void __thiscall FUN_004ba09a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_007d5380((int)*(char *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_007d5380((int)*(char *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
    uVar1 = FUN_007d5380((int)**(char **)(param_1 + 0x20));
    uVar1 = FUN_0049870e(uVar1);
  }
  thunk_FUN_0040c65f(param_2,uVar1);
  return;
}



/* vtable 008ff3f0 slot 4 address 004b9f98 */

/* ADDRESS: 004b9f98 NAME: FUN_004b9f98 */

void FUN_004b9f98(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc4))();
  return;
}



/* vtable 008ff3f0 slot 5 address 004b9fae */

/* ADDRESS: 004b9fae NAME: FUN_004b9fae */

undefined4 FUN_004b9fae(void)

{
  return 0xf;
}


