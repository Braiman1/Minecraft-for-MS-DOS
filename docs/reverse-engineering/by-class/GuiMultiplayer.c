/* Candidate RTTI class: GuiMultiplayer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900fb8 slot 0 address 0048280c */

/* ADDRESS: 0048280c NAME: FUN_0048280c */

void __fastcall FUN_0048280c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900fb8;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(param_2);
  }
  FUN_00485438();
  return;
}



/* vtable 00900fb8 slot 1 address 00482830 */

/* ADDRESS: 00482830 NAME: FUN_00482830 */

void __fastcall FUN_00482830(void *param_1)

{
  FUN_0048280c();
  free(param_1);
  return;
}



/* vtable 00900fb8 slot 2 address 00483302 */

/* ADDRESS: 00483302 NAME: FUN_00483302 */

void __fastcall FUN_00483302(int param_1)

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
  FUN_004828c8("multiplayer.title");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_004828c8("multiplayer.info1");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_004828c8("multiplayer.info2");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 9,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_004828c8("multiplayer.ipinfo");
  FUN_004fbdd2(uVar3,local_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x24,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048af78();
  FUN_0048528a();
  return;
}



/* vtable 00900fb8 slot 3 address 0048286e */

/* ADDRESS: 0048286e NAME: FUN_0048286e */

void __thiscall FUN_0048286e(int *param_1,short param_2,undefined4 param_3)

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
  return;
}



/* vtable 00900fb8 slot 4 address 004832be */

/* ADDRESS: 004832be NAME: FUN_004832be */

void FUN_004832be(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0048536a(param_1,param_2,param_3);
  FUN_0048af2e();
  return;
}



/* vtable 00900fb8 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00900fb8 slot 6 address 00482e04 */

/* ADDRESS: 00482e04 NAME: FUN_00482e04 */

void __thiscall FUN_00482e04(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *extraout_EDX;
  undefined8 uVar8;
  char **local_f4;
  char **local_f0;
  char *local_e8;
  int local_e4;
  char *local_d0;
  int local_cc;
  undefined1 local_b8 [24];
  char *local_a0;
  int local_9c;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58;
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined1 local_1c [12];
  
  if (*(char *)(param_2 + 0x34) != '\0') {
    if (*(int *)(param_2 + 0x30) == 1) {
      FUN_0051d808();
      return;
    }
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar2 = FUN_0048acee();
      FUN_00410a19(local_54,uVar2);
      uVar2 = FUN_00823120(local_54);
      FUN_0081ffd0(uVar2);
      FUN_00823370(&local_e8);
      pcVar7 = local_d0 + local_cc;
      for (; pcVar7 != local_d0; local_d0 = local_d0 + 1) {
        if (*local_d0 == ':') {
          *local_d0 = '_';
        }
      }
      uVar2 = FUN_00822d70(&local_d0);
      FUN_004735de(uVar2);
      FUN_008238d0(&local_e8);
      local_3c = 0;
      puVar4 = local_54;
      FUN_0040ffd2(&local_f4,local_54,0x3a);
      FUN_0081ffd0();
      if ((local_e4 != 0) && (*local_e8 == '[')) {
        uVar8 = FUN_0078c4c0(0x5d,0);
        puVar4 = (undefined1 *)((ulonglong)uVar8 >> 0x20);
        uVar1 = (int)uVar8 - 1;
        if (uVar1 < 0xfffffffe) {
          FUN_0078c6f0(&local_e8,1,uVar1);
          FUN_0078c6f0(&local_e8,(int)uVar8 + 1,0xffffffff);
          FUN_00823680(local_88);
          local_58 = 0;
          FUN_00410a19(local_54,local_70);
          uVar2 = FUN_00823120(local_54);
          FUN_0081ffd0(uVar2);
          FUN_0081ffd0();
          FUN_0081ffd0();
          if ((local_9c == 0) || (*local_a0 != ':')) {
            FUN_008238d0(local_b8);
            local_3c = 0;
            FUN_00482cce(local_54,local_38);
            puVar3 = extraout_EDX;
            puVar4 = extraout_EDX;
          }
          else {
            FUN_008238d0(local_b8);
            local_3c = 0;
            FUN_0078c6f0(&local_a0,1,0xffffffff);
            FUN_00823680(local_70);
            local_20 = 0;
            puVar3 = (undefined1 *)FUN_00482cce(local_54,local_1c);
            puVar4 = puVar3;
            FUN_0081ffd0(puVar3,puVar3);
            FUN_0081ffd0();
          }
          FUN_0081ffd0(puVar3,puVar4);
          FUN_0081ffd0();
          FUN_0081ffd0();
        }
      }
      if (0x38 < (int)local_f0 - (int)local_f4) {
        FUN_008238d0(&local_e8);
        local_3c = 0;
        puVar4 = (undefined1 *)FUN_00482cce(local_54,local_38);
        FUN_0081ffd0(puVar4,puVar4);
      }
      ppcVar5 = local_f4;
      if (local_f0 == local_f4) {
        ppcVar5 = &local_e8;
      }
      FUN_00823370(ppcVar5);
      if ((int)local_f0 - (int)local_f4 < 0x1d) {
        uVar8 = CONCAT44(puVar4,0x63dd);
      }
      else {
        uVar8 = FUN_0048295a(local_f4 + 7,0x63dd);
      }
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar6 = FUN_00846710(0x3c,(int)((ulonglong)uVar8 >> 0x20));
      FUN_00479a82(uVar2,local_54,(int)uVar8);
      uVar2 = FUN_0051d808(uVar6);
      FUN_0081ffd0(uVar2);
      FUN_0081aa48();
      FUN_0081ffd0();
      FUN_0081ffd0();
    }
  }
  return;
}



/* vtable 00900fb8 slot 7 address 004829e6 */

/* ADDRESS: 004829e6 NAME: FUN_004829e6 */

void __fastcall FUN_004829e6(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_54;
  char *local_50;
  int local_4c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  uVar3 = FUN_004fc82e();
  FUN_00568da8(1);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar4 = FUN_00846710(0x38);
  FUN_004828c8("multiplayer.connect");
  FUN_004fbdd2(uVar3,&local_50);
  uVar6 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x6c,local_38);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_54 = uVar4;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar6 = FUN_0081d2a4(&local_54);
  }
  else {
    *puVar1 = uVar4;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar6);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_004828c8("gui.cancel");
  FUN_004fbdd2(uVar3,&local_50);
  uVar3 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x84,local_38);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_54 = uVar4;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(&local_54);
    uVar3 = uVar4;
  }
  else {
    *puVar1 = uVar4;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  FUN_00823370(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x90);
  pcVar5 = local_50 + local_4c;
  for (; pcVar5 != local_50; local_50 = local_50 + 1) {
    if (*local_50 == '_') {
      *local_50 = ':';
    }
  }
  piVar2 = *(int **)(param_1 + 0x34);
  *(bool *)(**(int **)(param_1 + 0x14) + 0x34) = local_4c != 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(extraout_ECX);
  }
  uVar3 = FUN_00846710(0x48);
  FUN_008238d0(&local_50);
  local_20 = 0;
  FUN_0048ac38(param_1,*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0xc) / 2 + -100,
               *(int *)(param_1 + 0x10) / 4 + 0x3a,200,0x14,local_38);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_0081ffd0();
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 8) = 1;
  uVar3 = FUN_0048b0da(0x80);
  FUN_0081ffd0(uVar3);
  return;
}



/* vtable 00900fb8 slot 8 address 00482854 */

/* ADDRESS: 00482854 NAME: FUN_00482854 */

void FUN_00482854(void)

{
  FUN_0048acf2();
  return;
}



/* vtable 00900fb8 slot 9 address 0048285c */

/* ADDRESS: 0048285c NAME: FUN_0048285c */

void FUN_0048285c(void)

{
  FUN_00568da8(0);
  return;
}



/* vtable 00900fb8 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00900fb8 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00900fb8 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


