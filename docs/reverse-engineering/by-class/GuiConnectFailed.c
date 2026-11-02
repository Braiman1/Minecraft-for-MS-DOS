/* Candidate RTTI class: GuiConnectFailed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902668 slot 0 address 00775074 */

/* ADDRESS: 00775074 NAME: thunk_FUN_0077507c */

void thunk_FUN_0077507c(void)

{
  FUN_0077507c();
  return;
}



/* vtable 00902668 slot 1 address 00775050 */

/* ADDRESS: 00775050 NAME: FUN_00775050 */

void __fastcall FUN_00775050(void *param_1)

{
  FUN_0077507c();
  free(param_1);
  return;
}



/* vtable 00902668 slot 2 address 00479728 */

/* ADDRESS: 00479728 NAME: FUN_00479728 */

void __fastcall FUN_00479728(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x30,*(int *)(param_1 + 0xc) / 2,
               *(int *)(param_1 + 0x10) / 2 + -0x32,0xffffff);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x48,*(int *)(param_1 + 0xc) / 2,
               *(int *)(param_1 + 0x10) / 2 + -10,0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00902668 slot 3 address 00479436 */

/* ADDRESS: 00479436 NAME: FUN_00479436 */

void FUN_00479436(void)

{
  return;
}



/* vtable 00902668 slot 4 address 0048536a */

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



/* vtable 00902668 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00902668 slot 6 address 0047943a */

/* ADDRESS: 0047943a NAME: FUN_0047943a */

void FUN_0047943a(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00846710(0x50);
    FUN_00481b3c();
    FUN_0051d808();
    return;
  }
  return;
}



/* vtable 00902668 slot 7 address 00479602 */

/* ADDRESS: 00479602 NAME: FUN_00479602 */

void __fastcall FUN_00479602(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [36];
  
  uVar2 = FUN_004fc82e();
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar3 = FUN_00846710(0x38);
  local_4c = local_44;
  FUN_008220b0(local_4c,"gui.toMenu",10);
  local_48 = 10;
  local_4c[10] = 0;
  FUN_004fbdd2(uVar2,&local_4c);
  uVar2 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x84,local_34);
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



/* vtable 00902668 slot 8 address 00479434 */

/* ADDRESS: 00479434 NAME: FUN_00479434 */

void FUN_00479434(void)

{
  return;
}



/* vtable 00902668 slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00902668 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00902668 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00902668 slot 12 address 00485280 */
/* Already included above. */
