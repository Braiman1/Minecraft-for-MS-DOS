/* Candidate RTTI class: GuiConnecting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff2d4 slot 0 address 004797e4 */

/* ADDRESS: 004797e4 NAME: FUN_004797e4 */

void __fastcall FUN_004797e4(undefined4 *param_1)

{
  void *_Memory;
  
  *param_1 = &PTR_FUN_008ff2d4;
  if (param_1[0xd] != 0) {
    FUN_005021e4();
    _Memory = (void *)param_1[0xd];
    if (_Memory != (void *)0x0) {
      FUN_005021ea();
      free(_Memory);
    }
    param_1[0xd] = 0;
  }
  if ((*(char *)(param_1 + 0xe) != '\0') && ((int *)param_1[0xc] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
    param_1[0xc] = 0;
  }
  FUN_00485438();
  return;
}



/* vtable 008ff2d4 slot 1 address 00479848 */

/* ADDRESS: 00479848 NAME: FUN_00479848 */

void __fastcall FUN_00479848(void *param_1)

{
  FUN_004797e4();
  free(param_1);
  return;
}



/* vtable 008ff2d4 slot 2 address 00479c96 */

/* ADDRESS: 00479c96 NAME: FUN_00479c96 */

void __fastcall FUN_00479c96(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  uVar2 = FUN_004fc82e();
  iVar1 = *(int *)(param_1 + 0x10) / 2 + -0x32;
  iVar3 = *(int *)(param_1 + 0xc) / 2;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_004798e6("connect.connecting");
    FUN_004fbdd2(uVar2,auStack_4c);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3,iVar1,0xffffff);
    FUN_0081ffd0();
    FUN_0081ffd0();
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0xc);
    FUN_004798e6(&DAT_0088b3ce);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3 / 2,iVar1 / 2 + -10,0xffffff);
    FUN_0081ffd0();
  }
  else {
    FUN_004798e6("connect.authorizing");
    FUN_004fbdd2(uVar2,auStack_4c);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3,iVar1,0xffffff);
    FUN_0081ffd0();
    FUN_0081ffd0();
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x30) + 0xc,
                 *(int *)(param_1 + 0xc) / 2,*(int *)(param_1 + 0x10) / 2 + -10,0xffffff);
  }
  FUN_0048528a();
  return;
}



/* vtable 008ff2d4 slot 3 address 004797e0 */

/* ADDRESS: 004797e0 NAME: FUN_004797e0 */

void FUN_004797e0(void)

{
  return;
}



/* vtable 008ff2d4 slot 4 address 0048536a */

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



/* vtable 008ff2d4 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008ff2d4 slot 6 address 0047986c */

/* ADDRESS: 0047986c NAME: FUN_0047986c */

void __thiscall FUN_0047986c(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005021e4();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_004b031a();
  }
  FUN_00846710(0x50);
  FUN_00481b3c();
  FUN_0051d808();
  return;
}



/* vtable 008ff2d4 slot 7 address 00479b88 */

/* ADDRESS: 00479b88 NAME: FUN_00479b88 */

void __fastcall FUN_00479b88(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  uVar2 = FUN_004fc82e();
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar3 = FUN_00846710(0x38);
  FUN_004798e6("gui.cancel");
  FUN_004fbdd2(uVar2,local_4c);
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



/* vtable 008ff2d4 slot 8 address 00479954 */

/* ADDRESS: 00479954 NAME: FUN_00479954 */

void __fastcall FUN_00479954(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x34) != 0)) {
    uVar2 = FUN_00502260();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  local_64 = local_5c;
  local_5c[0] = 0;
  local_60 = 0;
  if (((*(char *)(param_1 + 0x38) == '\0') && (*(int *)(param_1 + 0x34) != 0)) &&
     (cVar1 = FUN_00502290(&local_64), cVar1 != '\0')) {
    uVar2 = FUN_00846710(0x60);
    FUN_004798e6("disconnect.genericReason");
    FUN_004798e6("connect.failed");
    FUN_0047951e(local_4c,local_34,&local_64);
    uVar2 = FUN_0051d808(uVar2);
    FUN_0081ffd0(uVar2);
    FUN_0081ffd0();
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_004af6da();
  }
  FUN_0081ffd0();
  return;
}



/* vtable 008ff2d4 slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008ff2d4 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008ff2d4 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008ff2d4 slot 12 address 00485280 */
/* Already included above. */
