/* Candidate RTTI class: GuiRenameWorld
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900ff4 slot 0 address 00484a6c */

/* ADDRESS: 00484a6c NAME: FUN_00484a6c */

void __fastcall FUN_00484a6c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900ff4;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(param_2);
  }
  FUN_0081ffd0();
  FUN_00485438();
  return;
}



/* vtable 00900ff4 slot 1 address 00484a98 */

/* ADDRESS: 00484a98 NAME: FUN_00484a98 */

void __fastcall FUN_00484a98(void *param_1)

{
  FUN_00484a6c();
  free(param_1);
  return;
}



/* vtable 00900ff4 slot 2 address 004850d0 */

/* ADDRESS: 004850d0 NAME: FUN_004850d0 */

void __fastcall FUN_004850d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  uVar3 = FUN_004fc82e();
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_00484b6a("selectWorld.renameTitle");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00484b6a("selectWorld.enterName");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2 + -100,0x2f,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048af78();
  FUN_0048528a();
  return;
}



/* vtable 00900ff4 slot 3 address 00484ad6 */

/* ADDRESS: 00484ad6 NAME: FUN_00484ad6 */

void __thiscall FUN_00484ad6(int *param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int local_4c;
  undefined1 local_38 [40];
  
  FUN_0048acf6(param_2,param_3);
  uVar2 = FUN_0048acee(extraout_EDX,extraout_EDX);
  FUN_00410a19(local_38,uVar2);
  FUN_00823120(local_38);
  uVar2 = extraout_ECX;
  FUN_0081ffd0(extraout_ECX);
  iVar1 = *(int *)param_1[5];
  *(bool *)(iVar1 + 0x34) = local_4c != 0;
  if (param_2 == 0xd) {
    uVar2 = (**(code **)(*param_1 + 0x18))(iVar1);
  }
  FUN_0081ffd0(uVar2);
  return;
}



/* vtable 00900ff4 slot 4 address 0048508c */

/* ADDRESS: 0048508c NAME: FUN_0048508c */

void FUN_0048508c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0048536a(param_1,param_2,param_3);
  FUN_0048af2e();
  return;
}



/* vtable 00900ff4 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00900ff4 slot 6 address 00484bd8 */

/* ADDRESS: 00484bd8 NAME: FUN_00484bd8 */

void __thiscall FUN_00484bd8(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (*(char *)(param_2 + 0x34) != '\0') {
    if (*(int *)(param_2 + 0x30) == 1) {
      FUN_0051d808();
      return;
    }
    if (*(int *)(param_2 + 0x30) == 0) {
      piVar2 = (int *)FUN_0051cf70();
      uVar3 = FUN_0048acee();
      FUN_00410a19(local_38,uVar3);
      uVar3 = FUN_00823120(local_38);
      FUN_0081ffd0(uVar3);
      pcVar1 = *(code **)(*piVar2 + 0x20);
      FUN_008238d0(local_6c);
      local_20 = 0;
      FUN_008238d0(param_1 + 0x38);
      local_3c = 0;
      (*pcVar1)(local_54,local_38);
      FUN_0081ffd0(extraout_EDX,extraout_EDX);
      FUN_0081ffd0();
      uVar3 = FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
      FUN_0081ffd0(uVar3);
    }
  }
  return;
}



/* vtable 00900ff4 slot 7 address 00484d2e */

/* ADDRESS: 00484d2e NAME: FUN_00484d2e */

void __fastcall FUN_00484d2e(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_54;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  uVar2 = FUN_004fc82e();
  FUN_00568da8(1);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  iVar3 = FUN_00846710(0x38);
  FUN_00484b6a("selectWorld.renameButton");
  FUN_004fbdd2(uVar2,local_50);
  uVar7 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x6c,local_38);
  piVar5 = *(int **)(param_1 + 0x18);
  local_54 = iVar3;
  if (piVar5 == *(int **)(param_1 + 0x1c)) {
    uVar7 = FUN_0081d2a4(&local_54);
  }
  else {
    *piVar5 = iVar3;
    *(int **)(param_1 + 0x18) = piVar5 + 1;
  }
  FUN_0081ffd0(uVar7);
  FUN_0081ffd0();
  iVar4 = FUN_00846710(0x38);
  FUN_00484b6a("gui.cancel");
  FUN_004fbdd2(uVar2,local_50);
  iVar3 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x84,local_38);
  piVar5 = *(int **)(param_1 + 0x18);
  local_54 = iVar4;
  if (piVar5 == *(int **)(param_1 + 0x1c)) {
    FUN_0081d2a4(&local_54);
    iVar3 = iVar4;
  }
  else {
    *piVar5 = iVar4;
    *(int **)(param_1 + 0x18) = piVar5 + 1;
  }
  FUN_0081ffd0(iVar3);
  FUN_0081ffd0();
  piVar5 = (int *)FUN_0051cf70();
  pcVar1 = *(code **)(*piVar5 + 0x18);
  FUN_008238d0(param_1 + 0x38);
  local_20 = 0;
  uVar6 = (*pcVar1)(local_38);
  iVar3 = (int)uVar6;
  local_54 = iVar3;
  FUN_0081ffd0((int)((ulonglong)uVar6 >> 0x20));
  if (iVar3 == 0) {
    FUN_00484b6a(&DAT_0088c826);
    local_20 = 0;
  }
  else {
    FUN_00519984(iVar3);
  }
  FUN_00823120(local_38);
  FUN_0081ffd0(extraout_ECX);
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))();
  }
  uVar2 = FUN_00846710(0x48);
  FUN_008238d0(local_50);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0xc) / 2 + -100,0x3c,200,
               0x14,local_38);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_0081ffd0();
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 8) = 1;
  uVar2 = FUN_0048b0da(0x20);
  FUN_0081ffd0(uVar2);
  FUN_007ed1c4();
  return;
}



/* vtable 00900ff4 slot 8 address 00484abc */

/* ADDRESS: 00484abc NAME: FUN_00484abc */

void FUN_00484abc(void)

{
  FUN_0048acf2();
  return;
}



/* vtable 00900ff4 slot 9 address 00484ac4 */

/* ADDRESS: 00484ac4 NAME: FUN_00484ac4 */

void FUN_00484ac4(void)

{
  FUN_00568da8(0);
  return;
}



/* vtable 00900ff4 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00900ff4 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00900ff4 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


