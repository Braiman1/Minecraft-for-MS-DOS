/* Candidate RTTI class: NBTTagShort
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fca94 slot 0 address 00772ab4 */

/* ADDRESS: 00772ab4 NAME: thunk_FUN_00772abc */

void thunk_FUN_00772abc(void)

{
  FUN_00772abc();
  return;
}



/* vtable 008fca94 slot 1 address 00772a90 */

/* ADDRESS: 00772a90 NAME: FUN_00772a90 */

void __fastcall FUN_00772a90(void *param_1)

{
  FUN_00772abc();
  free(param_1);
  return;
}



/* vtable 008fca94 slot 2 address 004af05c */

/* ADDRESS: 004af05c NAME: FUN_004af05c */

void __thiscall FUN_004af05c(int param_1,undefined4 param_2)

{
  thunk_FUN_0040c65f(param_2,(int)*(short *)(param_1 + 0x20));
  return;
}



/* vtable 008fca94 slot 3 address 004af07a */

/* ADDRESS: 004af07a NAME: FUN_004af07a */

void __thiscall FUN_004af07a(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0040c828(param_2);
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 008fca94 slot 4 address 004af058 */

/* ADDRESS: 004af058 NAME: FUN_004af058 */

undefined1 FUN_004af058(void)

{
  return 2;
}



/* vtable 008fca94 slot 5 address 004af09a */

/* ADDRESS: 004af09a NAME: FUN_004af09a */

undefined4 * __fastcall FUN_004af09a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  puVar1 = (undefined4 *)FUN_00846710(0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_004aca38();
  *(short *)(puVar1 + 8) = (short)uVar2;
  *puVar1 = &PTR_LAB_008fca94;
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return puVar1;
}



/* vtable 008fca94 slot 6 address 004af11a */

/* ADDRESS: 004af11a NAME: FUN_004af11a */

undefined4 __thiscall FUN_004af11a(undefined4 param_1,int param_2)

{
  FUN_0040f327(param_1,(int)*(short *)(param_2 + 0x20),10);
  return param_1;
}


