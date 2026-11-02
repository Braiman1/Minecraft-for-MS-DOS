/* Candidate RTTI class: GuiChat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905134 slot 0 address 004786f8 */

/* ADDRESS: 004786f8 NAME: FUN_004786f8 */

void __fastcall FUN_004786f8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00905134;
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))(param_2);
  }
  FUN_00485438();
  return;
}



/* vtable 00905134 slot 1 address 0047871c */

/* ADDRESS: 0047871c NAME: FUN_0047871c */

void __fastcall FUN_0047871c(void *param_1)

{
  FUN_004786f8();
  free(param_1);
  return;
}



/* vtable 00905134 slot 2 address 00478ade */

/* ADDRESS: 00478ade NAME: FUN_00478ade */

void __fastcall FUN_00478ade(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0048af78();
  }
  FUN_0048528a();
  return;
}



/* vtable 00905134 slot 3 address 004787e6 */

/* ADDRESS: 004787e6 NAME: FUN_004787e6 */

void __thiscall FUN_004787e6(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *extraout_ECX;
  undefined1 *puVar4;
  undefined1 local_84 [4];
  int local_80;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [40];
  
  if (param_3 == 1) {
    FUN_0051d808(0);
  }
  else if (param_3 == 0x1c) {
    puVar4 = local_54;
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_00478778(&DAT_0088b208);
      local_3c = 0;
    }
    else {
      iVar2 = FUN_0048acee();
      FUN_008238d0(iVar2);
      local_3c = *(undefined1 *)(iVar2 + 0x18);
    }
    FUN_00410a19(local_38,puVar4);
    uVar3 = FUN_00823120(local_38);
    FUN_0081ffd0(uVar3);
    FUN_0081ffd0();
    if (local_80 != 0) {
      FUN_008238d0(local_84);
      local_3c = 0;
      FUN_00410a19(local_38,puVar4);
      uVar3 = FUN_00823120(local_38);
      FUN_0081ffd0(uVar3);
      FUN_0081ffd0();
      cVar1 = FUN_0051d07c(local_6c);
      if (cVar1 == '\0') {
        (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x1b4))(local_6c);
        puVar4 = extraout_ECX;
      }
      FUN_0081ffd0(puVar4);
    }
    uVar3 = FUN_0051d808(0);
    FUN_0081ffd0(uVar3);
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0048acf6();
    return;
  }
  return;
}



/* vtable 00905134 slot 4 address 00478b24 */

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



/* vtable 00905134 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00905134 slot 6 address 0048527c */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 00905134 slot 7 address 00478954 */

/* ADDRESS: 00478954 NAME: FUN_00478954 */

void __fastcall FUN_00478954(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_00568da8(1);
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_00846710(0x48);
  FUN_00478778(&DAT_0088b208);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),4,iVar1 + -0xe,*(int *)(param_1 + 0xc) + -8,
               0xc,local_38);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  FUN_0081ffd0();
  FUN_0048b0da(100);
  FUN_0048af12(1);
  return;
}



/* vtable 00905134 slot 8 address 0047876a */

/* ADDRESS: 0047876a NAME: FUN_0047876a */

void __fastcall FUN_0047876a(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_0048acf2();
  return;
}



/* vtable 00905134 slot 9 address 00478740 */

/* ADDRESS: 00478740 NAME: FUN_00478740 */

void __fastcall FUN_00478740(int param_1)

{
  FUN_00568da8(0);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0048af12(0);
  }
  return;
}



/* vtable 00905134 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00905134 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00905134 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


