/* Candidate RTTI class: RenderFallingSand
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903240 slot 0 address 00775774 */

/* ADDRESS: 00775774 NAME: thunk_FUN_0077577c */

void thunk_FUN_0077577c(void)

{
  FUN_0077577c();
  return;
}



/* vtable 00903240 slot 1 address 00775750 */

/* ADDRESS: 00775750 NAME: FUN_00775750 */

void __fastcall FUN_00775750(void *param_1)

{
  FUN_0077577c();
  free(param_1);
  return;
}



/* vtable 00903240 slot 2 address 004db95e */

/* ADDRESS: 004db95e NAME: thunk_FUN_004db816 */

void thunk_FUN_004db816(int param_1,double param_2,double param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_2,(float)param_3,(float)param_4);
  puStack_34 = auStack_2c;
  FUN_008220b0(puStack_34,"/terrain.png",0xc);
  uStack_30 = 0xc;
  puStack_34[0xc] = 0;
  FUN_004c4c12(&puStack_34);
  FUN_0081ffd0();
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = (&DAT_00a07120)[*(int *)(param_1 + 0x1b0)];
  (*DAT_0145d26c)();
  uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
  uVar4 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x48));
  uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
  FUN_004cae56(uVar2,uVar1,uVar5,uVar4,uVar3);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d034)(extraout_ECX);
  return;
}


