/* Candidate RTTI class: TexturePackCustom
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009032ac slot 0 address 00775800 */

/* ADDRESS: 00775800 NAME: thunk_FUN_00775808 */

void thunk_FUN_00775808(void)

{
  FUN_00775808();
  return;
}



/* vtable 009032ac slot 1 address 007757dc */

/* ADDRESS: 007757dc NAME: FUN_007757dc */

void __fastcall FUN_007757dc(void *param_1)

{
  FUN_00775808();
  free(param_1);
  return;
}



/* vtable 009032ac slot 2 address 004ff758 */

/* ADDRESS: 004ff758 NAME: FUN_004ff758 */

void FUN_004ff758(void)

{
  return;
}



/* vtable 009032ac slot 3 address 004ff758 */
/* Already included above. */

/* vtable 009032ac slot 4 address 004ff754 */

/* ADDRESS: 004ff754 NAME: FUN_004ff754 */

void FUN_004ff754(void)

{
  return;
}



/* vtable 009032ac slot 5 address 004ff75a */

/* ADDRESS: 004ff75a NAME: FUN_004ff75a */

void __fastcall FUN_004ff75a(int *param_1)

{
  if (param_1[0x1f] != 0) {
    FUN_004d976c(param_1[0x1e]);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 009032ac slot 6 address 004ff790 */

/* ADDRESS: 004ff790 NAME: FUN_004ff790 */

void FUN_004ff790(void)

{
  undefined4 uVar1;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int aiStack_1c [4];
  
  iStack_28 = 0x15;
  piStack_24 = aiStack_1c;
  piStack_24 = (int *)FUN_00822e70(&iStack_28,0);
  aiStack_1c[0] = iStack_28;
  FUN_008220b0(piStack_24,"/gui/unknown_pack.png",0x15);
  iStack_20 = iStack_28;
  *(undefined1 *)((int)piStack_24 + iStack_28) = 0;
  uVar1 = FUN_004db2c6(&piStack_24);
  uVar1 = (*DAT_0145d354)(0xde1,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* vtable 009032ac slot 7 address 004ff78a */

/* ADDRESS: 004ff78a NAME: thunk_FUN_004ff6de */

void thunk_FUN_004ff6de(void)

{
  FUN_004ff6de();
  return;
}


