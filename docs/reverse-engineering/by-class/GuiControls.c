/* Candidate RTTI class: GuiControls
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc754 slot 0 address 007722e4 */

/* ADDRESS: 007722e4 NAME: thunk_FUN_007722ec */

void thunk_FUN_007722ec(void)

{
  FUN_007722ec();
  return;
}



/* vtable 008fc754 slot 1 address 007722c0 */

/* ADDRESS: 007722c0 NAME: FUN_007722c0 */

void __fastcall FUN_007722c0(void *param_1)

{
  FUN_007722ec();
  free(param_1);
  return;
}



/* vtable 008fc754 slot 2 address 0047ad24 */

/* ADDRESS: 0047ad24 NAME: FUN_0047ad24 */

void __fastcall FUN_0047ad24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_34 [36];
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x38,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  iVar1 = *(int *)(param_1 + 0xc);
  for (uVar4 = 0; iVar2 = *(int *)(param_1 + 0x34),
      (int)uVar4 < *(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x60) >> 2; uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(param_1 + 0x10);
    FUN_00471bf2(iVar2,uVar4);
    FUN_00475a44(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2 + -0x4f + (-(uVar4 & 1) & 0xa0),
                 iVar3 / 6 + 7 + ((int)uVar4 >> 1) * 0x18,0xffffffff);
    FUN_0081ffd0();
  }
  FUN_0048528a();
  return;
}



/* vtable 008fc754 slot 3 address 0047aca4 */

/* ADDRESS: 0047aca4 NAME: FUN_0047aca4 */

void __thiscall FUN_0047aca4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar1;
  undefined1 local_24 [24];
  
  if (*(int *)(param_1 + 0x50) < 0) {
    FUN_004852d0();
    return;
  }
  FUN_0047483c(*(int *)(param_1 + 0x50),param_3);
  FUN_00471c14(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x50));
  uVar1 = extraout_EDX;
  FUN_0047a7c8(local_24);
  FUN_0081ffd0(extraout_ECX,uVar1);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* vtable 008fc754 slot 4 address 0048536a */

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



/* vtable 008fc754 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fc754 slot 6 address 0047a850 */

/* ADDRESS: 0047a850 NAME: FUN_0047a850 */

void __thiscall FUN_0047a850(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *unaff_EDI;
  undefined1 local_34 [36];
  
  for (iVar5 = 0; iVar1 = *(int *)(param_1 + 0x34),
      iVar5 < *(int *)(iVar1 + 100) - *(int *)(iVar1 + 0x60) >> 2; iVar5 = iVar5 + 1) {
    unaff_EDI = local_34;
    uVar3 = FUN_00471c14(iVar1,iVar5);
    uVar4 = FUN_0047a7c8(unaff_EDI);
    FUN_0081ffd0(uVar4,uVar3);
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 == 200) {
    FUN_0051d808();
    return;
  }
  *(int *)(param_1 + 0x50) = iVar2;
  FUN_00471c14(iVar1,iVar2);
  uVar3 = FUN_00821d90(0,&DAT_0088b3f8);
  FUN_00823120(uVar3);
  uVar3 = FUN_00821690(&DAT_0088b3fb);
  FUN_00823120(uVar3);
  FUN_0047a7c8(local_34);
  FUN_0081ffd0(iVar5,unaff_EDI);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return;
}



/* vtable 008fc754 slot 7 address 0047aa3a */

/* ADDRESS: 0047aa3a NAME: FUN_0047aa3a */

void __fastcall FUN_0047aa3a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 local_50;
  undefined4 local_4c [6];
  undefined1 local_34 [36];
  
  uVar8 = 0;
  uVar4 = FUN_004fc82e();
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (*(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x60) >> 2 <= (int)uVar8) break;
    uVar5 = FUN_00846710(0x3c);
    FUN_00471c14(iVar2,uVar8);
    uVar6 = uVar8;
    FUN_00489fe4(uVar8,iVar1 / 2 + -0x9b + (-(uVar8 & 1) & 0xa0),
                 *(int *)(param_1 + 0x10) / 6 + ((int)uVar8 >> 1) * 0x18,0x46,0x14,local_34);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    local_4c[0] = uVar5;
    if (puVar3 == *(undefined4 **)(param_1 + 0x1c)) {
      uVar6 = FUN_0081d2a4(local_4c);
    }
    else {
      *puVar3 = uVar5;
      *(undefined4 **)(param_1 + 0x18) = puVar3 + 1;
    }
    uVar8 = uVar8 + 1;
    FUN_0081ffd0(uVar6);
  }
  uVar7 = FUN_00846710(0x38);
  FUN_0047a968("gui.done");
  FUN_004fbdd2(uVar4,local_4c);
  uVar5 = 200;
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xa8,local_34);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  local_50 = uVar7;
  if (puVar3 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(&local_50);
    uVar5 = uVar7;
  }
  else {
    *puVar3 = uVar7;
    *(undefined4 **)(param_1 + 0x18) = puVar3 + 1;
  }
  FUN_0081ffd0(uVar5);
  FUN_0081ffd0();
  FUN_0047a968("controls.title");
  uVar4 = FUN_004fbdd2(uVar4,local_4c);
  FUN_0047a7c8(local_34);
  FUN_0081ffd0(extraout_EDX,uVar4);
  FUN_0081ffd0();
  return;
}



/* vtable 008fc754 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fc754 slot 9 address 00485280 */
/* Already included above. */

/* vtable 008fc754 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008fc754 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fc754 slot 12 address 00485280 */
/* Already included above. */
