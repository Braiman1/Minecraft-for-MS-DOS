/* Candidate RTTI class: Packet27Position
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009028f8 slot 0 address 007753b4 */

/* ADDRESS: 007753b4 NAME: FUN_007753b4 */

void FUN_007753b4(void)

{
  return;
}



/* vtable 009028f8 slot 1 address 0077539c */

/* ADDRESS: 0077539c NAME: FUN_0077539c */

void __fastcall FUN_0077539c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009028f8 slot 2 address 004bb404 */

/* ADDRESS: 004bb404 NAME: FUN_004bb404 */

void __thiscall FUN_004bb404(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x10) = (float)fVar2;
  fVar2 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x14) = (float)fVar2;
  fVar2 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x1c) = (float)fVar2;
  fVar2 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x20) = (float)fVar2;
  uVar1 = FUN_0040c7e3(param_2);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0040c7e3(param_2);
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}



/* vtable 009028f8 slot 3 address 004bb45c */

/* ADDRESS: 004bb45c NAME: FUN_004bb45c */

void __thiscall FUN_004bb45c(int param_1,undefined4 param_2)

{
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x20));
  FUN_0040c62f(param_2,*(undefined1 *)(param_1 + 0x18));
  FUN_0040c62f(param_2,*(undefined1 *)(param_1 + 0x19));
  return;
}



/* vtable 009028f8 slot 4 address 004bb3e8 */

/* ADDRESS: 004bb3e8 NAME: FUN_004bb3e8 */

void FUN_004bb3e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd4))();
  return;
}



/* vtable 009028f8 slot 5 address 004bb3fe */

/* ADDRESS: 004bb3fe NAME: FUN_004bb3fe */

undefined4 FUN_004bb3fe(void)

{
  return 0x12;
}


