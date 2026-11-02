/* Candidate RTTI class: GuiSleepMP
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb164 slot 0 address 00771308 */

/* ADDRESS: 00771308 NAME: thunk_FUN_00771310 */

void thunk_FUN_00771310(void)

{
  FUN_00771310();
  return;
}



/* vtable 008fb164 slot 1 address 007712e4 */

/* ADDRESS: 007712e4 NAME: FUN_007712e4 */

void __fastcall FUN_007712e4(void *param_1)

{
  FUN_00771310();
  free(param_1);
  return;
}



/* vtable 008fb164 slot 2 address 00487180 */

/* ADDRESS: 00487180 NAME: thunk_FUN_00478ade */

void thunk_FUN_00478ade(void)

{
  FUN_00478ade();
  return;
}



/* vtable 008fb164 slot 3 address 0048705e */

/* ADDRESS: 0048705e NAME: FUN_0048705e */

void __thiscall FUN_0048705e(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 local_84 [4];
  int local_80;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 *local_38 [2];
  undefined1 local_30 [32];
  
  if (param_3 == 1) {
    FUN_00486ebc();
  }
  else {
    if (param_3 != 0x1c) {
      FUN_004787e6();
      return;
    }
    FUN_00478a50(param_1);
    FUN_00823680(local_6c);
    local_3c = 0;
    FUN_00410a19(local_38,local_54);
    uVar1 = FUN_00823120(local_38);
    FUN_0081ffd0(uVar1);
    FUN_0081ffd0();
    FUN_0081ffd0();
    if (local_80 != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x1b4))(local_84);
    }
    local_38[0] = local_30;
    FUN_00486e48("","");
    uVar1 = extraout_ECX;
    uVar2 = FUN_00478a8c(local_38);
    FUN_0081ffd0(uVar2,uVar1);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 008fb164 slot 4 address 00478b24 */

/* ADDRESS: 00478b24 NAME: FUN_00478b24 */

void __thiscall FUN_00478b24(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 local_64 [4];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  FUN_0048536a(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0048af2e(param_2,param_3,param_4);
  }
  if (((param_4 == 0) && (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x84) + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x30) != 0)) {
    uVar2 = FUN_0048acee();
    FUN_00823370(uVar2);
    if ((local_68 != 0) && (*(char *)((int)local_6c + local_68 + -1) != ' ')) {
      FUN_00823090(0x20);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x84);
    uVar1 = *(uint *)(iVar3 + 0x20);
    if (0x7ffffffeU - local_68 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e530("basic_string::append");
    }
    uVar2 = FUN_00822ca0(*(undefined4 *)(iVar3 + 0x1c),uVar1);
    FUN_008238d0(&local_6c);
    local_20 = 0;
    iVar3 = FUN_0040f9d7(&local_38,uVar2);
    FUN_0081ffd0();
    if (100 < iVar3) {
      FUN_008238d0(&local_6c);
      local_3c = 0;
      FUN_0041092e(&local_38,local_54,100);
      if (local_38 == local_30) {
        if (local_34 != 0) {
          FUN_008220b0(local_6c,local_38,local_34);
        }
        local_68 = local_34;
        *(undefined1 *)((int)local_6c + local_34) = 0;
      }
      else {
        if (local_6c == local_64) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          local_70 = local_64[0];
          puVar4 = local_6c;
        }
        local_68 = local_34;
        local_6c = local_38;
        local_64[0] = local_30[0];
        if (puVar4 == (undefined4 *)0x0) {
          local_38 = local_30;
        }
        else {
          local_30[0] = local_70;
          local_38 = puVar4;
        }
      }
      local_34 = 0;
      *(undefined1 *)local_38 = 0;
      FUN_0081ffd0();
      FUN_0081ffd0();
    }
    FUN_008238d0(&local_6c);
    local_20 = 0;
    uVar2 = FUN_0048acc6(&local_38);
    FUN_0081ffd0(uVar2);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 008fb164 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fb164 slot 6 address 00487186 */

/* ADDRESS: 00487186 NAME: FUN_00487186 */

void FUN_00487186(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_00486ebc();
    return;
  }
  return;
}



/* vtable 008fb164 slot 7 address 00486f48 */

/* ADDRESS: 00486f48 NAME: FUN_00486f48 */

void __fastcall FUN_00486f48(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined1 *local_4c [2];
  undefined1 local_44 [16];
  undefined1 local_34 [36];
  
  FUN_00478954();
  uVar2 = FUN_004fc82e();
  uVar3 = FUN_00846710(0x38);
  local_4c[0] = local_44;
  FUN_00486e48("multiplayer.stopSleeping","");
  FUN_004fbdd2(uVar2,local_4c);
  uVar2 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) + -0x28,local_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_50 = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar2 = FUN_0081d2a4(&local_50);
  }
  else {
    *puVar1 = uVar3;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar2);
  FUN_0081ffd0();
  return;
}



/* vtable 008fb164 slot 8 address 0047876a */

/* ADDRESS: 0047876a NAME: FUN_0047876a */

void __fastcall FUN_0047876a(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_0048acf2();
  return;
}



/* vtable 008fb164 slot 9 address 00487058 */

/* ADDRESS: 00487058 NAME: thunk_FUN_00478740 */

void thunk_FUN_00478740(void)

{
  FUN_00478740();
  return;
}



/* vtable 008fb164 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008fb164 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fb164 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


