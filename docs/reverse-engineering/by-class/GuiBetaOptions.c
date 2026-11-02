/* Candidate RTTI class: GuiBetaOptions
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900f04 slot 0 address 00477de8 */

/* ADDRESS: 00477de8 NAME: FUN_00477de8 */

void __fastcall FUN_00477de8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900f04;
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))(param_2);
  }
  FUN_00485438();
  return;
}



/* vtable 00900f04 slot 1 address 00477e0c */

/* ADDRESS: 00477e0c NAME: FUN_00477e0c */

void __fastcall FUN_00477e0c(void *param_1)

{
  FUN_00477de8();
  free(param_1);
  return;
}



/* vtable 00900f04 slot 2 address 00478318 */

/* ADDRESS: 00478318 NAME: FUN_00478318 */

void __fastcall FUN_00478318(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00477e5a("BETA++ Options");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2,0x1e,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_00477e5a("Player name");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -100,iVar1 / 2 + -0x20,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0048af78();
  }
  FUN_0048528a();
  return;
}



/* vtable 00900f04 slot 3 address 004780e8 */

/* ADDRESS: 004780e8 NAME: FUN_004780e8 */

void __thiscall FUN_004780e8(int param_1,short param_2)

{
  if (param_2 == 0xd) {
    FUN_00477f96();
  }
  else if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0048acf6();
    return;
  }
  return;
}



/* vtable 00900f04 slot 4 address 004782c6 */

/* ADDRESS: 004782c6 NAME: FUN_004782c6 */

void __thiscall FUN_004782c6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0048536a(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048af2e();
  return;
}



/* vtable 00900f04 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00900f04 slot 6 address 00478114 */

/* ADDRESS: 00478114 NAME: FUN_00478114 */

void FUN_00478114(int param_1)

{
  if (((param_1 != 0) && (*(char *)(param_1 + 0x34) != '\0')) && (*(int *)(param_1 + 0x30) == 200))
  {
    FUN_00477f96();
  }
  return;
}



/* vtable 00900f04 slot 7 address 0047813a */

/* ADDRESS: 0047813a NAME: FUN_0047813a */

void __fastcall FUN_0047813a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
  }
  uVar2 = FUN_00846710(0x48);
  FUN_008238d0(*(int *)(param_1 + 0x34) + 0xa8);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0xc) / 2 + -100,
               *(int *)(param_1 + 0x10) / 2 + -0x14,200,0x14,local_38);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  FUN_0081ffd0();
  FUN_0048b0da(0x10);
  FUN_0048af12(0);
  uVar2 = FUN_00846710(0x38);
  FUN_00477e5a(&DAT_0088b1d2);
  uVar3 = 200;
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 2 + 0x14,local_38);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_3c = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&local_3c);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  return;
}



/* vtable 00900f04 slot 8 address 00477e4c */

/* ADDRESS: 00477e4c NAME: FUN_00477e4c */

void __fastcall FUN_00477e4c(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048acf2();
  return;
}



/* vtable 00900f04 slot 9 address 00477e30 */

/* ADDRESS: 00477e30 NAME: FUN_00477e30 */

void __fastcall FUN_00477e30(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048af12(0);
  return;
}



/* vtable 00900f04 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00900f04 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00900f04 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


