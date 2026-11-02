/* Candidate RTTI class: GuiErrorScreen
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900f7c slot 0 address 00774304 */

/* ADDRESS: 00774304 NAME: thunk_FUN_0077430c */

void thunk_FUN_0077430c(void)

{
  FUN_0077430c();
  return;
}



/* vtable 00900f7c slot 1 address 007742e0 */

/* ADDRESS: 007742e0 NAME: FUN_007742e0 */

void __fastcall FUN_007742e0(void *param_1)

{
  FUN_0077430c();
  free(param_1);
  return;
}



/* vtable 00900f7c slot 2 address 0047dac8 */

/* ADDRESS: 0047dac8 NAME: FUN_0047dac8 */

void __fastcall FUN_0047dac8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("Out of memory!");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("Minecraft has run out of memory.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4,&DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("This could be caused by a bug in the game or by the");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x12,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("Java Virtual Machine not being allocated enough");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x1b,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("memory. If you are playing in a web browser, try");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x24,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("downloading the game and playing it offline.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x2d,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("To prevent level corruption, the current game has quit.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x3f,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047da3e("Please restart the game.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x51,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 00900f7c slot 3 address 0047da3a */

/* ADDRESS: 0047da3a NAME: FUN_0047da3a */

void FUN_0047da3a(void)

{
  return;
}



/* vtable 00900f7c slot 4 address 0048536a */

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



/* vtable 00900f7c slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00900f7c slot 6 address 0047da36 */

/* ADDRESS: 0047da36 NAME: FUN_0047da36 */

void FUN_0047da36(void)

{
  return;
}



/* vtable 00900f7c slot 7 address 0047da34 */

/* ADDRESS: 0047da34 NAME: FUN_0047da34 */

void FUN_0047da34(void)

{
  return;
}



/* vtable 00900f7c slot 8 address 0047da30 */

/* ADDRESS: 0047da30 NAME: FUN_0047da30 */

void __fastcall FUN_0047da30(int param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



/* vtable 00900f7c slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00900f7c slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00900f7c slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00900f7c slot 12 address 00485280 */
/* Already included above. */
