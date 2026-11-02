/* Candidate RTTI class: GuiIngameMenu
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff310 slot 0 address 00773d6c */

/* ADDRESS: 00773d6c NAME: thunk_FUN_00773d74 */

void thunk_FUN_00773d74(void)

{
  FUN_00773d74();
  return;
}



/* vtable 008ff310 slot 1 address 00773d48 */

/* ADDRESS: 00773d48 NAME: FUN_00773d48 */

void __fastcall FUN_00773d48(void *param_1)

{
  FUN_00773d74();
  free(param_1);
  return;
}



/* vtable 008ff310 slot 2 address 004811d6 */

/* ADDRESS: 004811d6 NAME: FUN_004811d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004811d6(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  undefined1 local_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  cVar2 = thunk_FUN_0050e298(iVar1);
  if ((cVar2 == '\0') || (*(int *)(param_1 + 0x34) < 0x14)) {
    fVar5 = (((float)(*(int *)(param_1 + 0x34) % 10) + param_4) / _DAT_0088c168) * _DAT_0088c16c;
    fVar4 = (float10)FUN_004a3d32(fVar5 + fVar5);
    uVar3 = (uint)(((float)fVar4 * _DAT_0088c170 + _DAT_0088c174) * _DAT_0088c178);
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_00480d70("Saving level..");
    FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,8,iVar1 + -0x10,
                 uVar3 << 0x10 | uVar3 << 8 | uVar3);
    FUN_0081ffd0();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00480d70("Game menu");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2,0x28,0xffffff);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 008ff310 slot 3 address 004852d0 */

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



/* vtable 008ff310 slot 4 address 0048536a */

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



/* vtable 008ff310 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008ff310 slot 6 address 00480bd0 */

/* ADDRESS: 00480bd0 NAME: FUN_00480bd0 */

void __thiscall FUN_00480bd0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = FUN_00846710(0x50);
    FUN_00483848(param_1,*(undefined4 *)(iVar1 + 0x94));
    FUN_0051d808(uVar3);
  }
  if (*(int *)(param_2 + 0x30) == 1) {
    uVar3 = FUN_004f77f6(DAT_00a53588,1);
    cVar2 = FUN_0051cdd2(uVar3,uVar3);
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x10) + 0x6c))();
    }
    FUN_0051f524(0);
    uVar3 = FUN_00846710(0x50);
    FUN_00481b3c();
    FUN_0051d808(uVar3);
  }
  if (*(int *)(param_2 + 0x30) == 4) {
    uVar3 = FUN_0051d808(0);
    FUN_0051e3ba(uVar3);
  }
  if (*(int *)(param_2 + 0x30) == 5) {
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = FUN_00846710(0x78);
    FUN_004765ae(*(undefined4 *)(iVar1 + 0xa4));
    FUN_0051d808(uVar3);
  }
  if (*(int *)(param_2 + 0x30) == 6) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00846710(0x60);
    FUN_0048a1f0(param_1,*(undefined4 *)(iVar1 + 0xa4));
    FUN_0051d808();
    return;
  }
  return;
}



/* vtable 008ff310 slot 7 address 00480e22 */

/* ADDRESS: 00480e22 NAME: FUN_00480e22 */

void __fastcall FUN_00480e22(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uStack_50;
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Save and quit to title");
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x68,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  cVar1 = FUN_0051cdd2();
  if (cVar1 != '\0') {
    FUN_00820000(0,*(undefined4 *)(**(int **)(param_1 + 0x14) + 0x1c),"Disconnect",10);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Back to game");
  FUN_004786b8(4,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 8,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Options...");
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x50,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("gui.achievements");
  FUN_004f6ab8(auStack_34,auStack_4c);
  FUN_0047866a(5,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x20,0x62,0x14,
               auStack_34);
  uStack_50 = uVar2;
  FUN_00480dfc(&uStack_50);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("gui.stats");
  FUN_004f6ab8(auStack_34,auStack_4c);
  FUN_0047866a(6,*(int *)(param_1 + 0xc) / 2 + 2,*(int *)(param_1 + 0x10) / 4 + 0x20,0x62,0x14,
               auStack_34);
  uStack_50 = uVar2;
  uVar2 = FUN_00480dfc(&uStack_50);
  FUN_0081ffd0(uVar2);
  FUN_0081ffd0();
  return;
}



/* vtable 008ff310 slot 8 address 004811c2 */

/* ADDRESS: 004811c2 NAME: FUN_004811c2 */

void __fastcall FUN_004811c2(int param_1)

{
  FUN_00485280();
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}



/* vtable 008ff310 slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008ff310 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008ff310 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008ff310 slot 12 address 00485280 */
/* Already included above. */
