/* Candidate RTTI class: GuiMainMenu
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc84c slot 0 address 007723ec */

/* ADDRESS: 007723ec NAME: thunk_FUN_007723f4 */

void thunk_FUN_007723f4(void)

{
  FUN_007723f4();
  return;
}



/* vtable 008fc84c slot 1 address 007723c8 */

/* ADDRESS: 007723c8 NAME: FUN_007723c8 */

void __fastcall FUN_007723c8(void *param_1)

{
  FUN_007723f4();
  free(param_1);
  return;
}



/* vtable 008fc84c slot 2 address 004824dc */

/* ADDRESS: 004824dc NAME: FUN_004824dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004824dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 local_34 [36];
  
  FUN_0048597e();
  iVar2 = *(int *)(param_1 + 0xc) / 2;
  FUN_00481ace("/title/mclogo.png");
  uVar3 = FUN_004db2c6(local_34);
  uVar3 = (*DAT_0145d354)(0xde1,uVar3);
  FUN_0081ffd0(uVar3,uVar3);
  (*DAT_0145d2d4)(DAT_0088c2e4,DAT_0088c2e4,DAT_0088c2e4,DAT_0088c2e4);
  FUN_00475a74(iVar2 + -0x89,0x1e,0,0,0x9b,0x2c);
  FUN_00475a74(iVar2 + 0x12,0x1e,0,0x2d,0x9b,0x2c);
  uVar3 = FUN_004fe6f0(0xffffff);
  (*DAT_0145d020)(uVar3);
  (*DAT_0145ce94)((float)(*(int *)(param_1 + 0xc) / 2 + 0x5a),0x428c0000,0);
  (*DAT_0145cf88)(0xc1a00000,0,0,DAT_0088c2e4);
  uVar7 = FUN_00410ad4();
  iVar2 = FUN_00750ea0(uVar7,1000,0);
  fVar6 = ((float)iVar2 / _DAT_0088c2e8) * _DAT_0088c2ec;
  fVar5 = (float10)FUN_004a3d32(fVar6 + fVar6);
  fVar5 = (float10)FUN_004a3e34((float)fVar5 * _DAT_0088c2f0);
  fVar6 = (DAT_0088c2f4 - (float)fVar5) * _DAT_0088c2f8;
  iVar2 = FUN_0046f612(param_1 + 0x34);
  fVar6 = fVar6 / (float)(iVar2 + 0x20);
  (*DAT_0145cf80)(fVar6,fVar6,fVar6);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,0,0xfffffff8,0xffff00);
  (*DAT_0145d034)();
  FUN_00481ace("Minecraft Beta 1.7.3");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,2,2,0x505050);
  FUN_0081ffd0();
  FUN_00481ace("Copyright Mojang AB. Do not distribute.");
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = FUN_0046f612(local_34);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,(iVar1 - iVar4) + -2,iVar2 + -10,0xffffff);
  FUN_0048528a(param_2,param_3,param_4);
  FUN_0081ffd0();
  return;
}



/* vtable 008fc84c slot 3 address 00481944 */

/* ADDRESS: 00481944 NAME: FUN_00481944 */

void FUN_00481944(void)

{
  return;
}



/* vtable 008fc84c slot 4 address 0048536a */

/* ADDRESS: 0048536a NAME: FUN_0048536a */

void __thiscall FUN_0048536a(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (param_4 == 0) {
    for (; param_4 < param_1[6] - param_1[5] >> 2; param_4 = param_4 + 1) {
      piVar1 = *(int **)(param_1[5] + param_4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))(param_1[2],param_2,param_3);
      if (cVar2 != '\0') {
        param_1[0xb] = (int)piVar1;
        FUN_004852fc("random.click");
        local_20 = 0;
        FUN_004f4888(local_38,DAT_0088c87c,DAT_0088c87c);
        FUN_0081ffd0();
        (**(code **)(*param_1 + 0x18))(piVar1);
      }
    }
  }
  return;
}



/* vtable 008fc84c slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fc84c slot 6 address 00481948 */

/* ADDRESS: 00481948 NAME: FUN_00481948 */

void __thiscall FUN_00481948(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = FUN_00846710(0x50);
    FUN_00483848(param_1,*(undefined4 *)(iVar1 + 0x94));
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 1) {
    uVar2 = FUN_00846710(0xa4);
    FUN_00485e10(param_1);
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 2) {
    uVar2 = FUN_00846710(0x38);
    FUN_00482936(param_1);
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 3) {
    uVar2 = FUN_00846710(0x54);
    FUN_0048b5f0(param_1);
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 4) {
    FUN_0051c668();
  }
  return;
}



/* vtable 008fc84c slot 7 address 00481fa6 */

/* ADDRESS: 00481fa6 NAME: FUN_00481fa6 */

void __fastcall FUN_00481fa6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  tm *ptVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  time_t tVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  tVar7 = time((time_t *)0x0);
  uStack_54 = (undefined4)tVar7;
  ptVar3 = localtime((time_t *)&uStack_54);
  iVar5 = ptVar3->tm_mon;
  iVar1 = ptVar3->tm_mday;
  if ((iVar5 == 10) && (iVar1 == 9)) {
    pcVar8 = "Happy birthday, ez!";
  }
  else if ((iVar5 != 5) || (iVar1 != 1)) {
    if ((iVar5 == 0xb) && (iVar1 == 0x18)) {
      pcVar8 = "Merry X-mas!";
    }
    else {
      if ((iVar5 != 0) || (iVar1 != 1)) goto LAB_00482032;
      pcVar8 = "Happy new year!";
    }
  }
  else {
    pcVar8 = "Happy birthday, Notch!";
  }
  FUN_00481a92(pcVar8);
LAB_00482032:
  uVar4 = FUN_004fc82e();
  iVar5 = *(int *)(param_1 + 0x10) / 4;
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.singleplayer");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x30,auStack_34);
  uStack_50 = uVar6;
  uVar6 = FUN_00481f80(&uStack_50);
  FUN_0081ffd0(uVar6);
  FUN_0081ffd0();
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.multiplayer");
  FUN_004fbdd2(uVar4,auStack_4c);
  uVar9 = 2;
  FUN_004786b8(2,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x48,auStack_34);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  if (puVar2 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar9 = FUN_0081d1f8(param_1 + 0x4c);
  }
  else {
    *puVar2 = uVar6;
    *(undefined4 **)(param_1 + 0x18) = puVar2 + 1;
  }
  FUN_0081ffd0(uVar9);
  FUN_0081ffd0();
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.mods");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(3,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x60,auStack_34);
  uStack_50 = uVar6;
  FUN_00481f80(&uStack_50);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  if (*(char *)(*(int *)(param_1 + 8) + 0x40) == '\0') {
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.options");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_0047866a(0,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x84,0x62,0x14,auStack_34);
    uStack_50 = uVar6;
    FUN_00481f80(&uStack_50);
    FUN_0081ffd0(uVar6);
    FUN_0081ffd0();
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.quit");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_0047866a(4,*(int *)(param_1 + 0xc) / 2 + 2,iVar5 + 0x84,0x62,0x14,auStack_34);
    uStack_50 = uVar6;
    uVar4 = FUN_00481f80(&uStack_50);
  }
  else {
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.options");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x78,auStack_34);
    uStack_50 = uVar6;
    uVar4 = FUN_00481f80(&uStack_50);
  }
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  if (*(int *)(*(int *)(param_1 + 8) + 0x24) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x34) = 0;
  }
  return;
}



/* vtable 008fc84c slot 8 address 00481930 */

/* ADDRESS: 00481930 NAME: FUN_00481930 */

void __fastcall FUN_00481930(int param_1)

{
  *(float *)(param_1 + 0x30) = DAT_0088c2e4 + *(float *)(param_1 + 0x30);
  return;
}



/* vtable 008fc84c slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fc84c slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008fc84c slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fc84c slot 12 address 00485280 */
/* Already included above. */
