/* Candidate RTTI class: GuiCreateWorld
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900f40 slot 0 address 0047b0c8 */

/* ADDRESS: 0047b0c8 NAME: FUN_0047b0c8 */

void __fastcall FUN_0047b0c8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900f40;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(param_2);
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
  }
  FUN_0081ffd0();
  FUN_00485438();
  return;
}



/* vtable 00900f40 slot 1 address 0047b100 */

/* ADDRESS: 0047b100 NAME: FUN_0047b100 */

void __fastcall FUN_0047b100(void *param_1)

{
  FUN_0047b0c8();
  free(param_1);
  return;
}



/* vtable 00900f40 slot 2 address 0047baae */

/* ADDRESS: 0047baae NAME: FUN_0047baae */

void __fastcall FUN_0047baae(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_7c [48];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  uVar3 = FUN_004fc82e();
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.create");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.enterName");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x2f,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.resultFolder");
  FUN_004fbdd2(uVar3,auStack_7c);
  uVar4 = FUN_00821690(&DAT_0088b4ed);
  FUN_00823120(uVar4);
  uVar4 = FUN_00821710(param_1 + 0x3c);
  FUN_00823120(uVar4);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x55,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.enterSeed");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x68,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.seedInfo");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x8c,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048af78();
  FUN_0048af78();
  FUN_0048528a();
  return;
}



/* vtable 00900f40 slot 3 address 0047b650 */

/* ADDRESS: 0047b650 NAME: FUN_0047b650 */

void __thiscall FUN_0047b650(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_EDX;
  
  FUN_0048acf6(param_2,param_3);
  uVar1 = extraout_EDX;
  if (param_2 == 0xd) {
    uVar1 = (**(code **)(*param_1 + 0x18))(*(undefined4 *)param_1[5],extraout_EDX);
  }
  iVar2 = FUN_0048acee(uVar1);
  *(bool *)(*(int *)param_1[5] + 0x34) = *(int *)(iVar2 + 4) != 0;
  FUN_0047b55a();
  return;
}



/* vtable 00900f40 slot 4 address 0047ba52 */

/* ADDRESS: 0047ba52 NAME: FUN_0047ba52 */

void FUN_0047ba52(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0048536a(param_1,param_2,param_3);
  FUN_0048af2e(param_1,param_2,param_3);
  FUN_0048af2e();
  return;
}



/* vtable 00900f40 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00900f40 slot 6 address 0047b290 */

/* ADDRESS: 0047b290 NAME: FUN_0047b290 */

void __thiscall FUN_0047b290(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  longlong lVar6;
  int local_74;
  int local_70;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) == 1) {
    FUN_0051d808();
    return;
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    return;
  }
  FUN_0051d808(0);
  if (*(char *)(param_1 + 0x54) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  FUN_0040e6b2(extraout_ECX);
  lVar6 = FUN_0040e85a();
  uVar4 = FUN_0048acee();
  FUN_00823370(uVar4);
  FUN_008238d0(local_50);
  local_20 = 0;
  cVar3 = FUN_004a3eca(local_38);
  FUN_0081ffd0();
  if (cVar3 != '\0') goto LAB_0047b3ce;
  local_74 = 0;
  local_70 = 0;
  FUN_008238d0(local_50);
  local_20 = 0;
  cVar3 = FUN_0040fbca(local_38,&local_74);
  FUN_0081ffd0();
  if (cVar3 == '\0') {
    FUN_008238d0(local_50);
    local_20 = 0;
    iVar5 = FUN_0040fb87(local_38);
    lVar6 = (longlong)iVar5;
    FUN_0081ffd0();
LAB_0047b3c2:
    lVar2 = lVar6;
  }
  else {
    lVar2 = CONCAT44(local_70,local_74);
    if ((local_70 == 0) && (lVar2 = CONCAT44(local_70,local_74), local_74 == 0)) goto LAB_0047b3c2;
  }
  lVar6 = lVar2;
LAB_0047b3ce:
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  uVar4 = FUN_00846710(0x28);
  FUN_004bffee(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = uVar4;
  uVar4 = FUN_0048acee(extraout_ECX_00);
  FUN_005202e8(param_1 + 0x3c,uVar4,lVar6);
  uVar4 = FUN_0051d808(0);
  FUN_0081ffd0(uVar4);
  return;
}



/* vtable 00900f40 slot 7 address 0047b6ba */

/* ADDRESS: 0047b6ba NAME: FUN_0047b6ba */

void __fastcall FUN_0047b6ba(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 local_68 [6];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  uVar2 = FUN_004fc82e();
  FUN_00568da8(1);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar3 = FUN_00846710(0x38);
  FUN_0047b222("selectWorld.create");
  FUN_004fbdd2(uVar2,local_50);
  uVar4 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x6c,local_38);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_68[0] = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(local_68);
    uVar4 = extraout_EDX;
  }
  else {
    *puVar1 = uVar3;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_0047b222("gui.cancel");
  FUN_004fbdd2(uVar2,local_50);
  uVar3 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x84,local_38);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_68[0] = uVar4;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(local_68);
  }
  else {
    *puVar1 = uVar4;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))();
  }
  uVar4 = FUN_00846710(0x48);
  FUN_0047b222("selectWorld.newWorld");
  FUN_004fbdd2(uVar2,local_68);
  FUN_00823680(local_50);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0xc) / 2 + -100,0x3c,200,
               0x14,local_38);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 8) = 1;
  FUN_0048b0da(0x20);
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))(extraout_EDX_00);
  }
  uVar2 = FUN_00846710(0x48);
  FUN_0047b222(&DAT_0088b4bd);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0xc) / 2 + -100,0x74,200,
               0x14,local_38);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  FUN_0081ffd0();
  FUN_0047b55a();
  return;
}



/* vtable 00900f40 slot 8 address 0047b124 */

/* ADDRESS: 0047b124 NAME: FUN_0047b124 */

void FUN_0047b124(void)

{
  FUN_0048acf2();
  FUN_0048acf2();
  return;
}



/* vtable 00900f40 slot 9 address 0047b13e */

/* ADDRESS: 0047b13e NAME: FUN_0047b13e */

void FUN_0047b13e(void)

{
  FUN_00568da8(0);
  return;
}



/* vtable 00900f40 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00900f40 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00900f40 slot 12 address 0047b150 */

/* ADDRESS: 0047b150 NAME: FUN_0047b150 */

void __fastcall FUN_0047b150(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(*(int *)(param_1 + 0x34) + 8) == '\0';
  if (bVar1) {
    FUN_0048af12(1);
  }
  else {
    FUN_0048af12(0);
  }
  FUN_0048af12(!bVar1);
  return;
}


