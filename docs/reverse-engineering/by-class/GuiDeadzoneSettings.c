/* Candidate RTTI class: GuiDeadzoneSettings
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903e58 slot 0 address 00775c70 */

/* ADDRESS: 00775c70 NAME: thunk_FUN_00775c78 */

void thunk_FUN_00775c78(void)

{
  FUN_00775c78();
  return;
}



/* vtable 00903e58 slot 1 address 00775c4c */

/* ADDRESS: 00775c4c NAME: FUN_00775c4c */

void __fastcall FUN_00775c4c(void *param_1)

{
  FUN_00775c78();
  free(param_1);
  return;
}



/* vtable 00903e58 slot 2 address 0047c44a */

/* ADDRESS: 0047c44a NAME: FUN_0047c44a */

void __fastcall FUN_0047c44a(int param_1)

{
  int iVar1;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047bdfc("Deadzone Settings");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2,0x1e,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047bdfc("Controller analog stick");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2,0x2e,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 00903e58 slot 3 address 0047c41c */

/* ADDRESS: 0047c41c NAME: FUN_0047c41c */

void __thiscall FUN_0047c41c(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  FUN_004852d0();
  return;
}



/* vtable 00903e58 slot 4 address 0048536a */

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



/* vtable 00903e58 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00903e58 slot 6 address 0047c082 */

/* ADDRESS: 0047c082 NAME: FUN_0047c082 */

void __thiscall FUN_0047c082(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0x34) == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if ((iVar1 != 0xc9) && (iVar1 != 0xcb)) {
    if (iVar1 != 0xcc) {
      if (iVar1 == 200) {
        FUN_0051d808();
        return;
      }
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc4) = 0x3e4ccccd;
  }
  FUN_0047c018();
  return;
}



/* vtable 00903e58 slot 7 address 0047c118 */

/* ADDRESS: 0047c118 NAME: FUN_0047c118 */

void __fastcall FUN_0047c118(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uStack_38;
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  iVar3 = *(int *)(param_1 + 0x10) / 2;
  iVar4 = iVar3 + 0xc;
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b601);
  FUN_0047866a(0xc9,*(int *)(param_1 + 0xc) / 2 + -100,iVar4,0x30,0x14,auStack_34);
  uStack_38 = uVar5;
  FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(extraout_EDX);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b603);
  FUN_0047866a(0xca,*(int *)(param_1 + 0xc) / 2 + -0x30,iVar4,0x60,0x14,auStack_34);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x38);
  piVar2 = *(int **)(param_1 + 0x18);
  *(undefined1 *)(iVar1 + 0x34) = 0;
  if (piVar2 == *(int **)(param_1 + 0x1c)) {
    FUN_0081d1f8(param_1 + 0x38);
  }
  else {
    *piVar2 = iVar1;
    *(int **)(param_1 + 0x18) = piVar2 + 1;
  }
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b604);
  FUN_0047866a(0xcb,*(int *)(param_1 + 0xc) / 2 + 0x34,iVar4,0x30,0x14,auStack_34);
  uStack_38 = uVar5;
  uVar5 = FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(uVar5);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc("Reset to 20%");
  FUN_004786b8(0xcc,*(int *)(param_1 + 0xc) / 2 + -100,iVar3 + 0x2a,auStack_34);
  uStack_38 = uVar5;
  FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(extraout_ECX);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b613);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,iVar3 + 0x42,auStack_34);
  uStack_38 = uVar5;
  uVar5 = FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(uVar5);
  FUN_0047be94();
  return;
}



/* vtable 00903e58 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00903e58 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00903e58 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00903e58 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00903e58 slot 12 address 00485280 */
/* Already included above. */
