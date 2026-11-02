/* Candidate RTTI class: NBTTagByte
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb4c0 slot 0 address 00771424 */

/* ADDRESS: 00771424 NAME: thunk_FUN_0077142c */

void thunk_FUN_0077142c(void)

{
  FUN_0077142c();
  return;
}



/* vtable 008fb4c0 slot 1 address 00771400 */

/* ADDRESS: 00771400 NAME: FUN_00771400 */

void __fastcall FUN_00771400(void *param_1)

{
  FUN_0077142c();
  free(param_1);
  return;
}



/* vtable 008fb4c0 slot 2 address 004acf28 */

/* ADDRESS: 004acf28 NAME: FUN_004acf28 */

void __thiscall FUN_004acf28(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x20));
  return;
}



/* vtable 008fb4c0 slot 3 address 004acf46 */

/* ADDRESS: 004acf46 NAME: FUN_004acf46 */

void __thiscall FUN_004acf46(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 008fb4c0 slot 4 address 004acf24 */

/* ADDRESS: 004acf24 NAME: FUN_004acf24 */

undefined1 FUN_004acf24(void)

{
  return 1;
}



/* vtable 008fb4c0 slot 5 address 004acf66 */

/* ADDRESS: 004acf66 NAME: FUN_004acf66 */

undefined4 * __fastcall FUN_004acf66(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  puVar1 = (undefined4 *)FUN_00846710(0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_004aca38();
  *puVar1 = &PTR_LAB_008fb4c0;
  *(char *)(puVar1 + 8) = (char)uVar2;
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return puVar1;
}



/* vtable 008fb4c0 slot 6 address 004acfe6 */

/* ADDRESS: 004acfe6 NAME: FUN_004acfe6 */

undefined4 __thiscall FUN_004acfe6(undefined4 param_1,int param_2)

{
  FUN_0040f327(param_1,(int)*(char *)(param_2 + 0x20),10);
  return param_1;
}


