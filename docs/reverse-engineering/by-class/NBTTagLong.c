/* Candidate RTTI class: NBTTagLong
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb508 slot 0 address 0077145c */

/* ADDRESS: 0077145c NAME: thunk_FUN_00771464 */

void thunk_FUN_00771464(void)

{
  FUN_00771464();
  return;
}



/* vtable 008fb508 slot 1 address 00771438 */

/* ADDRESS: 00771438 NAME: FUN_00771438 */

void __fastcall FUN_00771438(void *param_1)

{
  FUN_00771464();
  free(param_1);
  return;
}



/* vtable 008fb508 slot 2 address 004aef08 */

/* ADDRESS: 004aef08 NAME: FUN_004aef08 */

void __thiscall FUN_004aef08(int param_1,undefined4 param_2)

{
  FUN_0040c6e2(param_2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}



/* vtable 008fb508 slot 3 address 004aef2c */

/* ADDRESS: 004aef2c NAME: FUN_004aef2c */

void __thiscall FUN_004aef2c(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040c895(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 008fb508 slot 4 address 004aef04 */

/* ADDRESS: 004aef04 NAME: FUN_004aef04 */

undefined1 FUN_004aef04(void)

{
  return 4;
}



/* vtable 008fb508 slot 5 address 004aef4e */

/* ADDRESS: 004aef4e NAME: FUN_004aef4e */

undefined4 * __fastcall FUN_004aef4e(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_38 [40];
  
  puVar2 = (undefined4 *)FUN_00846710(0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FUN_004aca38();
  puVar2[8] = uVar3;
  *puVar2 = &PTR_LAB_008fb508;
  puVar2[9] = uVar1;
  FUN_004aca52(param_1);
  uVar3 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar3);
  return puVar2;
}



/* vtable 008fb508 slot 6 address 004aefda */

/* ADDRESS: 004aefda NAME: FUN_004aefda */

undefined4 __thiscall FUN_004aefda(undefined4 param_1,int param_2)

{
  FUN_0040f3cc(param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),10);
  return param_1;
}


