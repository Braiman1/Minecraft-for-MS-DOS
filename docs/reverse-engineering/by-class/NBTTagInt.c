/* Candidate RTTI class: NBTTagInt
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907848 slot 0 address 00779584 */

/* ADDRESS: 00779584 NAME: thunk_FUN_0077958c */

void thunk_FUN_0077958c(void)

{
  FUN_0077958c();
  return;
}



/* vtable 00907848 slot 1 address 00779560 */

/* ADDRESS: 00779560 NAME: FUN_00779560 */

void __fastcall FUN_00779560(void *param_1)

{
  FUN_0077958c();
  free(param_1);
  return;
}



/* vtable 00907848 slot 2 address 004ae974 */

/* ADDRESS: 004ae974 NAME: FUN_004ae974 */

void __thiscall FUN_004ae974(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* vtable 00907848 slot 3 address 004ae990 */

/* ADDRESS: 004ae990 NAME: FUN_004ae990 */

void __thiscall FUN_004ae990(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 00907848 slot 4 address 004ae970 */

/* ADDRESS: 004ae970 NAME: FUN_004ae970 */

undefined1 FUN_004ae970(void)

{
  return 3;
}



/* vtable 00907848 slot 5 address 004ae9b0 */

/* ADDRESS: 004ae9b0 NAME: FUN_004ae9b0 */

undefined4 * __fastcall FUN_004ae9b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  puVar1 = (undefined4 *)FUN_00846710(0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_004aca38();
  puVar1[8] = uVar2;
  *puVar1 = &PTR_LAB_00907848;
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return puVar1;
}



/* vtable 00907848 slot 6 address 004aea2e */

/* ADDRESS: 004aea2e NAME: FUN_004aea2e */

undefined4 __thiscall FUN_004aea2e(undefined4 param_1,int param_2)

{
  FUN_0040f327(param_1,*(undefined4 *)(param_2 + 0x20),10);
  return param_1;
}


