/* Candidate RTTI class: NBTTagFloat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fca70 slot 0 address 00772a7c */

/* ADDRESS: 00772a7c NAME: thunk_FUN_00772a84 */

void thunk_FUN_00772a84(void)

{
  FUN_00772a84();
  return;
}



/* vtable 008fca70 slot 1 address 00772a58 */

/* ADDRESS: 00772a58 NAME: FUN_00772a58 */

void __fastcall FUN_00772a58(void *param_1)

{
  FUN_00772a84();
  free(param_1);
  return;
}



/* vtable 008fca70 slot 2 address 004ae848 */

/* ADDRESS: 004ae848 NAME: FUN_004ae848 */

void __thiscall FUN_004ae848(int param_1,undefined4 param_2)

{
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* vtable 008fca70 slot 3 address 004ae868 */

/* ADDRESS: 004ae868 NAME: FUN_004ae868 */

void __thiscall FUN_004ae868(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x20) = (float)fVar1;
  return;
}



/* vtable 008fca70 slot 4 address 004ae844 */

/* ADDRESS: 004ae844 NAME: FUN_004ae844 */

undefined1 FUN_004ae844(void)

{
  return 5;
}



/* vtable 008fca70 slot 5 address 004ae888 */

/* ADDRESS: 004ae888 NAME: FUN_004ae888 */

undefined4 * __fastcall FUN_004ae888(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  puVar1 = (undefined4 *)FUN_00846710(0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_004aca38();
  puVar1[8] = uVar2;
  *puVar1 = &PTR_LAB_008fca70;
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return puVar1;
}



/* vtable 008fca70 slot 6 address 004ae906 */

/* ADDRESS: 004ae906 NAME: FUN_004ae906 */

undefined4 __thiscall FUN_004ae906(undefined4 param_1,int param_2)

{
  FUN_00410823(param_1,*(undefined4 *)(param_2 + 0x20));
  return param_1;
}


