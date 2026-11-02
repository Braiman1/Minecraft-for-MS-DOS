/* Candidate RTTI class: NBTTagDouble
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe250 slot 0 address 00773538 */

/* ADDRESS: 00773538 NAME: thunk_FUN_00773540 */

void thunk_FUN_00773540(void)

{
  FUN_00773540();
  return;
}



/* vtable 008fe250 slot 1 address 00773514 */

/* ADDRESS: 00773514 NAME: FUN_00773514 */

void __fastcall FUN_00773514(void *param_1)

{
  FUN_00773540();
  free(param_1);
  return;
}



/* vtable 008fe250 slot 2 address 004ae62c */

/* ADDRESS: 004ae62c NAME: FUN_004ae62c */

void __thiscall FUN_004ae62c(int param_1,undefined4 param_2)

{
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* vtable 008fe250 slot 3 address 004ae64c */

/* ADDRESS: 004ae64c NAME: FUN_004ae64c */

void __thiscall FUN_004ae64c(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x20) = (double)fVar1;
  return;
}



/* vtable 008fe250 slot 4 address 004ae628 */

/* ADDRESS: 004ae628 NAME: FUN_004ae628 */

undefined1 FUN_004ae628(void)

{
  return 6;
}



/* vtable 008fe250 slot 5 address 004ae66c */

/* ADDRESS: 004ae66c NAME: FUN_004ae66c */

undefined4 * __fastcall FUN_004ae66c(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_38 [40];
  
  puVar2 = (undefined4 *)FUN_00846710(0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_004aca38();
  *puVar2 = &PTR_LAB_008fe250;
  *(undefined8 *)(puVar2 + 8) = uVar1;
  FUN_004aca52(param_1);
  uVar3 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar3);
  return puVar2;
}



/* vtable 008fe250 slot 6 address 004ae6f8 */

/* ADDRESS: 004ae6f8 NAME: FUN_004ae6f8 */

undefined4 __thiscall FUN_004ae6f8(undefined4 param_1,int param_2)

{
  FUN_0041046f(param_1,*(undefined8 *)(param_2 + 0x20));
  return param_1;
}


