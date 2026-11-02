/* Candidate RTTI class: GuiOptions
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb128 slot 0 address 007712bc */

/* ADDRESS: 007712bc NAME: thunk_FUN_007712c4 */

void thunk_FUN_007712c4(void)

{
  FUN_007712c4();
  return;
}



/* vtable 008fb128 slot 1 address 00771298 */

/* ADDRESS: 00771298 NAME: FUN_00771298 */

void __fastcall FUN_00771298(void *param_1)

{
  FUN_007712c4();
  free(param_1);
  return;
}



/* vtable 008fb128 slot 2 address 00483e18 */

/* ADDRESS: 00483e18 NAME: FUN_00483e18 */

void __fastcall FUN_00483e18(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x38,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 008fb128 slot 3 address 004852d0 */

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



/* vtable 008fb128 slot 4 address 0048536a */

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



/* vtable 008fb128 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fb128 slot 6 address 00483600 */

/* ADDRESS: 00483600 NAME: FUN_00483600 */

void __thiscall FUN_00483600(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_34 [36];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_0048372a;
    uVar2 = FUN_0048a0b4();
    uVar3 = FUN_0047485a(uVar2,1);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),uVar3);
    uVar2 = FUN_00471dcc(uVar2,uVar3);
    uVar3 = FUN_00483578(local_34);
    FUN_0081ffd0(uVar3,uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 0x65) {
    FUN_004735de();
    uVar2 = FUN_00846710(0x50);
    FUN_0048bf38(param_1,*(undefined4 *)(param_1 + 0x34));
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 100) {
    FUN_004735de();
    uVar2 = FUN_00846710(0x54);
    FUN_0047a9d6(param_1,*(undefined4 *)(param_1 + 0x34));
    FUN_0051d808(uVar2);
  }
LAB_0048372a:
  if (*(int *)(param_2 + 0x30) == 0x66) {
    FUN_004735de();
    uVar2 = FUN_00846710(0x3c);
    FUN_00477ec8(param_1,*(undefined4 *)(param_1 + 0x34));
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808();
    return;
  }
  return;
}



/* vtable 008fb128 slot 7 address 004838ba */

/* ADDRESS: 004838ba NAME: FUN_004838ba */

void __fastcall FUN_004838ba(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uStack_64;
  int aiStack_60 [5];
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  aiStack_60[0] = DAT_00a084b8;
  aiStack_60[1] = DAT_00a084b4;
  aiStack_60[2] = DAT_00a084b0;
  aiStack_60[3] = DAT_00a084ac;
  aiStack_60[4] = DAT_00a08494;
  uVar3 = FUN_004fc82e();
  FUN_004837da("options.title");
  uVar4 = FUN_004fbdd2(uVar3,auStack_4c);
  uVar5 = FUN_00483578(auStack_34);
  uVar7 = 0;
  FUN_0081ffd0(uVar5,uVar4);
  FUN_0081ffd0();
  do {
    puVar2 = (undefined4 *)aiStack_60[uVar7];
    iVar1 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uVar7 & 1) & 0xa0);
    iVar6 = *(int *)(param_1 + 0x10) / 6 + ((int)uVar7 >> 1) * 0x18;
    if (*(char *)(puVar2 + 8) == '\0') {
      uVar4 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar2);
      FUN_0048a030(*puVar2,iVar1,iVar6,puVar2,auStack_34);
      auStack_4c[0] = uVar4;
      FUN_00483894(auStack_4c);
    }
    else {
      uVar4 = FUN_00846710(0x44);
      fVar8 = (float10)FUN_00471cd0(puVar2);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar2);
      FUN_00487482(*puVar2,iVar1,iVar6,puVar2,auStack_34,(float)fVar8);
      auStack_4c[0] = uVar4;
      FUN_00483894(auStack_4c);
    }
    uVar7 = uVar7 + 1;
    FUN_0081ffd0(puVar2);
  } while (uVar7 != 5);
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("options.video");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_0047866a(0x65,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0x6c,0x62,0x14
               ,auStack_34);
  uStack_64 = uVar4;
  uVar4 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("options.controls");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_0047866a(100,*(int *)(param_1 + 0xc) / 2 + 2,*(int *)(param_1 + 0x10) / 6 + 0x6c,0x62,0x14,
               auStack_34);
  uStack_64 = uVar4;
  uVar4 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("BETA++ Options...");
  FUN_004786b8(0x66,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0x84,
               auStack_34);
  auStack_4c[0] = uVar4;
  FUN_00483894(auStack_4c);
  FUN_0081ffd0(uVar4);
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("gui.done");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xa8,auStack_34
              );
  uStack_64 = uVar4;
  uVar3 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  return;
}



/* vtable 008fb128 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fb128 slot 9 address 00485280 */
/* Already included above. */

/* vtable 008fb128 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008fb128 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fb128 slot 12 address 00485280 */
/* Already included above. */
