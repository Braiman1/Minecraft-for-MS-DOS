/* Candidate RTTI class: GuiConflictWarning
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090377c slot 0 address 00775954 */

/* ADDRESS: 00775954 NAME: thunk_FUN_0077595c */

void thunk_FUN_0077595c(void)

{
  FUN_0077595c();
  return;
}



/* vtable 0090377c slot 1 address 00775930 */

/* ADDRESS: 00775930 NAME: FUN_00775930 */

void __fastcall FUN_00775930(void *param_1)

{
  FUN_0077595c();
  free(param_1);
  return;
}



/* vtable 0090377c slot 2 address 004791ee */

/* ADDRESS: 004791ee NAME: FUN_004791ee */

void __fastcall FUN_004791ee(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("Level save conflict");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("Minecraft detected a conflict in the level save data.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4,&DAT_00a0a0a0)
  ;
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("This could be caused by two copies of the game");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x12,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("accessing the same level.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x1b,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("To prevent level corruption, the current game has quit.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x2d,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 0090377c slot 3 address 004852d0 */

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



/* vtable 0090377c slot 4 address 0048536a */

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



/* vtable 0090377c slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 0090377c slot 6 address 00479028 */

/* ADDRESS: 00479028 NAME: FUN_00479028 */

void FUN_00479028(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') || (*(int *)(param_1 + 0x30) != 0)) {
    return;
  }
  FUN_00846710(0x50);
  FUN_00481b3c();
  FUN_0051d808();
  return;
}



/* vtable 0090377c slot 7 address 00479114 */

/* ADDRESS: 00479114 NAME: FUN_00479114 */

void __fastcall FUN_00479114(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_0047908a("Back to title screen");
  uVar3 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x84,local_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_38 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&local_38);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  return;
}



/* vtable 0090377c slot 8 address 00479024 */

/* ADDRESS: 00479024 NAME: FUN_00479024 */

void __fastcall FUN_00479024(int param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



/* vtable 0090377c slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 0090377c slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 0090377c slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 0090377c slot 12 address 00485280 */
/* Already included above. */
