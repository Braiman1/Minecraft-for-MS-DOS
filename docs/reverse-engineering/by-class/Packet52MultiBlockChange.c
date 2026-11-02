/* Candidate RTTI class: Packet52MultiBlockChange
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904b78 slot 0 address 00776a2c */

/* ADDRESS: 00776a2c NAME: thunk_FUN_00776a34 */

void thunk_FUN_00776a34(void)

{
  FUN_00776a34();
  return;
}



/* vtable 00904b78 slot 1 address 00776a08 */

/* ADDRESS: 00776a08 NAME: FUN_00776a08 */

void __fastcall FUN_00776a08(void *param_1)

{
  FUN_00776a34();
  free(param_1);
  return;
}



/* vtable 00904b78 slot 2 address 004bc60a */

/* ADDRESS: 004bc60a NAME: FUN_004bc60a */

void __thiscall FUN_004bc60a(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar3 = FUN_0040c828(param_2);
  uVar3 = uVar3 & 0xffff;
  *(uint *)(param_1 + 0x3c) = uVar3;
  uVar4 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1;
  if (uVar4 < uVar3) {
    FUN_0081eaa4(uVar3 - uVar4);
  }
  else if ((uVar3 < uVar4) &&
          (iVar5 = uVar3 * 2 + *(int *)(param_1 + 0x18), *(int *)(param_1 + 0x1c) != iVar5)) {
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  FUN_0081ded4(*(undefined4 *)(param_1 + 0x3c));
  FUN_0081ded4(*(undefined4 *)(param_1 + 0x3c));
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x3c); iVar5 = iVar5 + 1) {
    uVar1 = FUN_0040c828(param_2);
    *(undefined2 *)(*(int *)(param_1 + 0x18) + iVar5 * 2) = uVar1;
  }
  FUN_007d3200(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x3c));
  FUN_007d3200(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c));
  return;
}



/* vtable 00904b78 slot 3 address 004bc53c */

/* ADDRESS: 004bc53c NAME: FUN_004bc53c */

void __thiscall FUN_004bc53c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_0040c65f(param_2,(int)*(short *)(param_1 + 0x3c));
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x3c); iVar1 = iVar1 + 1) {
    thunk_FUN_0040c65f(param_2,(int)*(short *)(*(int *)(param_1 + 0x18) + iVar1 * 2));
  }
  FUN_007d5c10(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x3c));
  FUN_007d5c10(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c));
  return;
}



/* vtable 00904b78 slot 4 address 004bc51c */

/* ADDRESS: 004bc51c NAME: FUN_004bc51c */

void FUN_004bc51c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* vtable 00904b78 slot 5 address 004bc530 */

/* ADDRESS: 004bc530 NAME: FUN_004bc530 */

int __fastcall FUN_004bc530(int param_1)

{
  return *(int *)(param_1 + 0x3c) * 4 + 10;
}


