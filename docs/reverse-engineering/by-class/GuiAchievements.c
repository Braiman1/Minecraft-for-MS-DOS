/* Candidate RTTI class: GuiAchievements
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902020 slot 0 address 00774ae0 */

/* ADDRESS: 00774ae0 NAME: thunk_FUN_00774ae8 */

void thunk_FUN_00774ae8(void)

{
  FUN_00774ae8();
  return;
}



/* vtable 00902020 slot 1 address 00774abc */

/* ADDRESS: 00774abc NAME: FUN_00774abc */

void __fastcall FUN_00774abc(void *param_1)

{
  FUN_00774ae8();
  free(param_1);
  return;
}



/* vtable 00902020 slot 2 address 0047764c */

/* ADDRESS: 0047764c NAME: FUN_0047764c */

void __thiscall FUN_0047764c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  double dVar4;
  double dVar5;
  double dVar6;
  
  cVar1 = FUN_00569a50(0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2;
    if ((((iVar2 + 8 <= param_2) && (*(uint *)(param_1 + 0x70) < 2)) &&
        (iVar3 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x34)) / 2, param_2 <= iVar2 + 0xe7)
        ) && ((iVar3 + 0x11 <= param_3 && (param_3 <= iVar3 + 0xab)))) {
      if (*(uint *)(param_1 + 0x70) == 0) {
        *(undefined4 *)(param_1 + 0x70) = 1;
      }
      else {
        dVar5 = *(double *)(param_1 + 0x60) - (double)(param_2 - *(int *)(param_1 + 0x38));
        dVar4 = *(double *)(param_1 + 0x68) - (double)(param_3 - *(int *)(param_1 + 0x3c));
        *(double *)(param_1 + 0x60) = dVar5;
        *(double *)(param_1 + 0x40) = dVar5;
        *(double *)(param_1 + 0x68) = dVar4;
        *(double *)(param_1 + 0x50) = dVar5;
        *(double *)(param_1 + 0x48) = dVar4;
        *(double *)(param_1 + 0x58) = dVar4;
      }
      *(int *)(param_1 + 0x38) = param_2;
      *(int *)(param_1 + 0x3c) = param_3;
    }
    dVar5 = (double)DAT_00a085b8;
    dVar4 = *(double *)(param_1 + 0x60);
    if (*(double *)(param_1 + 0x60) < dVar5) {
      *(double *)(param_1 + 0x60) = dVar5;
      dVar4 = dVar5;
    }
    dVar6 = (double)DAT_00a085b4;
    dVar5 = *(double *)(param_1 + 0x68);
    if (*(double *)(param_1 + 0x68) < dVar6) {
      *(double *)(param_1 + 0x68) = dVar6;
      dVar5 = dVar6;
    }
    if ((double)DAT_00a085b0 <= dVar4) {
      *(double *)(param_1 + 0x60) = (double)(DAT_00a085b0 + -1);
    }
    if ((double)DAT_00a085ac <= dVar5) {
      *(double *)(param_1 + 0x68) = (double)(DAT_00a085ac + -1);
    }
  }
  FUN_0048597e();
  FUN_00476834(param_2,param_3,param_4);
  (*DAT_0145d26c)(0xb50);
  (*DAT_0145d26c)(0xb71);
  FUN_00476620(extraout_EDX);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d248)(0xb71);
  return;
}



/* vtable 00902020 slot 3 address 004767e6 */

/* ADDRESS: 004767e6 NAME: FUN_004767e6 */

void __thiscall FUN_004767e6(int param_1,undefined4 param_2,int param_3)

{
  undefined4 extraout_EDX;
  
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x4c) + 0x18) == param_3) {
    FUN_0051d808(0);
    FUN_0051e3ba(extraout_EDX);
    return;
  }
  FUN_004852d0();
  return;
}



/* vtable 00902020 slot 4 address 0048536a */

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



/* vtable 00902020 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00902020 slot 6 address 004767ac */

/* ADDRESS: 004767ac NAME: FUN_004767ac */

void FUN_004767ac(int param_1)

{
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_0051d808(0);
    FUN_0051e3ba(extraout_EDX);
  }
  return;
}



/* vtable 00902020 slot 7 address 0047669e */

/* ADDRESS: 0047669e NAME: FUN_0047669e */

void __fastcall FUN_0047669e(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x3c);
  FUN_0047652e("gui.done");
  FUN_004f6ab8(auStack_34,auStack_4c);
  uVar3 = 1;
  FUN_00489fe4(1,*(int *)(param_1 + 0xc) / 2 + 0x18,*(int *)(param_1 + 0x10) / 2 + 0x4a,0x50,0x14,
               auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_50 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&uStack_50);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  return;
}



/* vtable 00902020 slot 8 address 004764b0 */

/* ADDRESS: 004764b0 NAME: FUN_004764b0 */

void __fastcall FUN_004764b0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = DAT_0088b128;
  dVar1 = *(double *)(param_1 + 0x50);
  dVar2 = *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x40) = dVar1;
  dVar5 = *(double *)(param_1 + 0x60) - dVar1;
  dVar4 = *(double *)(param_1 + 0x68) - dVar2;
  *(double *)(param_1 + 0x48) = dVar2;
  if (dVar3 <= dVar5 * dVar5 + dVar4 * dVar4) {
    dVar5 = dVar5 * DAT_0088b130;
    dVar4 = dVar4 * DAT_0088b130;
  }
  *(double *)(param_1 + 0x50) = dVar1 + dVar5;
  *(double *)(param_1 + 0x58) = dVar4 + dVar2;
  return;
}



/* vtable 00902020 slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00902020 slot 10 address 0047652a */

/* ADDRESS: 0047652a NAME: FUN_0047652a */

undefined1 FUN_0047652a(void)

{
  return 1;
}



/* vtable 00902020 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00902020 slot 12 address 00485280 */
/* Already included above. */
