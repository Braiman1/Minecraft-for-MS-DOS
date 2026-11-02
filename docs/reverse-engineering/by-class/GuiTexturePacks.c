/* Candidate RTTI class: GuiTexturePacks
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090205c slot 0 address 0048b438 */

/* ADDRESS: 0048b438 NAME: FUN_0048b438 */

void __fastcall FUN_0048b438(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_0090205c;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))(param_2);
  }
  FUN_0081ffd0();
  FUN_00485438();
  return;
}



/* vtable 0090205c slot 1 address 0048b464 */

/* ADDRESS: 0048b464 NAME: FUN_0048b464 */

void __fastcall FUN_0048b464(void *param_1)

{
  FUN_0048b438();
  free(param_1);
  return;
}



/* vtable 0090205c slot 2 address 0048b982 */

/* ADDRESS: 0048b982 NAME: FUN_0048b982 */

void __thiscall FUN_0048b982(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  FUN_0048791e(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x34) < 1) {
    FUN_004ffe9a();
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x14;
  }
  uVar3 = FUN_004fc82e();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0048b582("texturePack.title");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2,0x10,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0048b582("texturePack.folderInfo");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x4d,iVar1 + -0x1a,
               &LAB_00808080);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 0090205c slot 3 address 004852d0 */

/* ADDRESS: 004852d0 NAME: FUN_004852d0 */

void FUN_004852d0(undefined4 param_1,int param_2)

{
  undefined4 extraout_EDX;
  
  if (param_2 == 1) {
    FUN_0051d808(0);
    FUN_0051e3ba(extraout_EDX);
  }
  return;
}



/* vtable 0090205c slot 4 address 0048b976 */

/* ADDRESS: 0048b976 NAME: thunk_FUN_0048536a */

void thunk_FUN_0048536a(void)

{
  FUN_0048536a();
  return;
}



/* vtable 0090205c slot 5 address 0048b97c */

/* ADDRESS: 0048b97c NAME: thunk_FUN_00485244 */

void thunk_FUN_00485244(void)

{
  FUN_00485244();
  return;
}



/* vtable 0090205c slot 6 address 0048b4ae */

/* ADDRESS: 0048b4ae NAME: FUN_0048b4ae */

void __thiscall FUN_0048b4ae(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [28];
  
  if (*(char *)(param_2 + 0x34) != '\0') {
    if (*(int *)(param_2 + 0x30) != 5) {
      if (*(int *)(param_2 + 0x30) == 6) {
        FUN_004db47a();
        FUN_0051d808();
        return;
      }
      FUN_004876b4();
      return;
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    local_34 = local_2c;
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    local_2c[0] = 0;
    local_30 = 0;
    FUN_00822a40(iVar1 + 7);
    FUN_0048b488("file://",7);
    uVar2 = FUN_0048b488(uVar2,iVar1);
    FUN_00410b08(&local_34,uVar2);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 0090205c slot 7 address 0048b642 */

/* ADDRESS: 0048b642 NAME: FUN_0048b642 */

void __fastcall FUN_0048b642(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_50 [6];
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  uVar1 = FUN_004fc82e();
  uVar2 = FUN_00846710(0x3c);
  FUN_0048b582("texturePack.openFolder");
  FUN_004fbdd2(uVar1,local_50);
  uVar4 = 5;
  FUN_0048a080(5,*(int *)(param_1 + 0xc) / 2 + -0x9a,*(int *)(param_1 + 0x10) + -0x30,&local_38);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  local_54 = uVar2;
  if (puVar3 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar4 = FUN_0081d2a4(&local_54);
  }
  else {
    *puVar3 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar3 + 1;
  }
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar2 = FUN_00846710(0x3c);
  FUN_0048b582("gui.done");
  FUN_004fbdd2(uVar1,local_50);
  uVar1 = 6;
  FUN_0048a080(6,*(int *)(param_1 + 0xc) / 2 + 4,*(int *)(param_1 + 0x10) + -0x30,&local_38);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  local_54 = uVar2;
  if (puVar3 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar1 = FUN_0081d2a4(&local_54);
  }
  else {
    *puVar3 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar3 + 1;
  }
  FUN_0081ffd0(uVar1);
  FUN_0081ffd0();
  FUN_004ffe9a();
  FUN_0048b582("texturepacks");
  local_20 = 0;
  uVar1 = FUN_0051d262(uVar2);
  uVar1 = FUN_0056a13a(uVar1,&local_38);
  local_50[0] = uVar1;
  FUN_0081ffd0();
  FUN_0040be10(uVar1);
  puVar3 = *(undefined4 **)(param_1 + 0x38);
  if (local_38 == local_30) {
    puVar5 = extraout_ECX;
    if (local_34 != 0) {
      FUN_008220b0(puVar3,local_38,local_34);
      puVar5 = puVar3;
    }
    *(int *)(param_1 + 0x3c) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x38) + local_34) = 0;
  }
  else {
    if (puVar3 == (undefined4 *)(param_1 + 0x40)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_68 = *(undefined4 *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x3c) = local_34;
    *(undefined4 **)(param_1 + 0x38) = local_38;
    *(undefined4 *)(param_1 + 0x40) = local_30[0];
    puVar5 = extraout_ECX;
    if (puVar3 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_68;
      local_38 = puVar3;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  FUN_0081ffd0(puVar5);
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 4))();
  }
  uVar1 = FUN_00846710(0x58);
  FUN_0048b3e4(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_00487658(param_1 + 0x14,7,8);
  FUN_007ed12c();
  return;
}



/* vtable 0090205c slot 8 address 0048bb04 */

/* ADDRESS: 0048bb04 NAME: FUN_0048bb04 */

void __fastcall FUN_0048bb04(int param_1)

{
  FUN_00485280();
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  return;
}



/* vtable 0090205c slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 0090205c slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 0090205c slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 0090205c slot 12 address 00485280 */
/* Already included above. */
