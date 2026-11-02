/* Candidate RTTI class: GuiVideoSettings
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009026dc slot 0 address 00775100 */

/* ADDRESS: 00775100 NAME: thunk_FUN_00775108 */

void thunk_FUN_00775108(void)

{
  FUN_00775108();
  return;
}



/* vtable 009026dc slot 1 address 007750dc */

/* ADDRESS: 007750dc NAME: FUN_007750dc */

void __fastcall FUN_007750dc(void *param_1)

{
  FUN_00775108();
  free(param_1);
  return;
}



/* vtable 009026dc slot 2 address 0048c598 */

/* ADDRESS: 0048c598 NAME: FUN_0048c598 */

void __fastcall FUN_0048c598(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x38,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 009026dc slot 3 address 004852d0 */

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



/* vtable 009026dc slot 4 address 0048536a */

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



/* vtable 009026dc slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 009026dc slot 6 address 0048bc7c */

/* ADDRESS: 0048bc7c NAME: FUN_0048bc7c */

void __thiscall FUN_0048bc7c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 local_3c [44];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_0048bd3a;
    uVar2 = FUN_0048a0b4();
    FUN_0047485a(uVar2,1);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),extraout_ECX);
    uVar2 = FUN_00471dcc(uVar2,uVar3);
    uVar3 = FUN_0048bbf4(local_3c);
    FUN_0081ffd0(uVar3,uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
  }
LAB_0048bd3a:
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 100) {
    FUN_004735de();
    FUN_00846710(0x50);
    FUN_004779dc(param_1,*(undefined4 *)(param_1 + 0x34));
  }
  else if (iVar1 == 0x65) {
    FUN_004735de();
    FUN_00846710(0x5c);
    FUN_0047c802(param_1,*(undefined4 *)(param_1 + 0x34));
  }
  else if (iVar1 == 0x66) {
    FUN_004735de();
    FUN_00846710(0x5c);
    FUN_0048c8c6(param_1,*(undefined4 *)(param_1 + 0x34));
  }
  else {
    if (iVar1 != 0x67) {
      if ((iVar1 != *DAT_00a08470) && (iVar1 != *DAT_00a08444)) {
        iVar1 = *(int *)(param_1 + 8);
        FUN_004ef328(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 8),
                     *(undefined4 *)(iVar1 + 0xc));
        uVar2 = FUN_004ef410();
        uVar3 = FUN_004ef40c();
        FUN_0048556c(*(undefined4 *)(param_1 + 8),uVar3,uVar2);
      }
      return;
    }
    FUN_004735de();
    FUN_00846710(0x5c);
    FUN_00484146(param_1,*(undefined4 *)(param_1 + 0x34));
  }
  FUN_0051d808();
  return;
}



/* vtable 009026dc slot 7 address 0048bfaa */

/* ADDRESS: 0048bfaa NAME: FUN_0048bfaa */

void __fastcall FUN_0048bfaa(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_EDX;
  float10 fVar7;
  uint uStack_90;
  undefined4 uStack_80;
  undefined4 auStack_7c [6];
  undefined1 auStack_64 [24];
  int aiStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_4c[0] = DAT_00a08490;
  aiStack_4c[1] = DAT_00a084a8;
  aiStack_4c[2] = DAT_00a08444;
  aiStack_4c[3] = DAT_00a08498;
  uStack_3c = DAT_00a084a0;
  uStack_38 = DAT_00a084a4;
  uStack_34 = DAT_00a08488;
  uStack_30 = DAT_00a0849c;
  uStack_2c = DAT_00a08484;
  uStack_28 = DAT_00a08480;
  uStack_24 = DAT_00a08438;
  uStack_20 = DAT_00a08470;
  uVar2 = FUN_004fc82e();
  FUN_0048beca("options.videoTitle");
  uVar3 = FUN_004fbdd2(uVar2,auStack_7c);
  uVar4 = FUN_0048bbf4(auStack_64);
  FUN_0081ffd0(uVar4,uVar3);
  FUN_0081ffd0();
  uStack_90 = 0;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0x10) / 6 + ((int)uStack_90 >> 1) * 0x15;
    iVar6 = iVar5 + -10;
    if (uStack_90 == 0xc) break;
    puVar1 = (undefined4 *)aiStack_4c[uStack_90];
    iVar5 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_90 & 1) & 0xa0);
    if (*(char *)(puVar1 + 8) == '\0') {
      uVar3 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar1);
      FUN_0048a030(*puVar1,iVar5,iVar6,puVar1,auStack_64);
      auStack_7c[0] = uVar3;
      FUN_0048bf84(auStack_7c);
    }
    else {
      uVar3 = FUN_00846710(0x44);
      fVar7 = (float10)FUN_00471cd0(puVar1);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar1);
      FUN_00487482(*puVar1,iVar5,iVar6,puVar1,auStack_64,(float)fVar7);
      auStack_7c[0] = uVar3;
      FUN_0048bf84(auStack_7c);
    }
    FUN_0081ffd0(puVar1);
    uStack_90 = uStack_90 + 1;
  }
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Animations...");
  FUN_0048a080(100,*(int *)(param_1 + 0xc) / 2 + -0x9b,iVar6,auStack_64);
  auStack_7c[0] = uVar3;
  FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(extraout_EDX);
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Details...");
  FUN_0048a080(0x65,*(int *)(param_1 + 0xc) / 2 + 5,iVar6,auStack_64);
  auStack_7c[0] = uVar3;
  uVar3 = FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  iVar5 = iVar5 + 0xb;
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("World...");
  FUN_0048a080(0x66,*(int *)(param_1 + 0xc) / 2 + -0x9b,iVar5,auStack_64);
  auStack_7c[0] = uVar3;
  uVar3 = FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Other...");
  FUN_0048a080(0x67,*(int *)(param_1 + 0xc) / 2 + 5,iVar5,auStack_64);
  auStack_7c[0] = uVar3;
  FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x38);
  FUN_0048beca("gui.done");
  FUN_004fbdd2(uVar2,auStack_7c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_64
              );
  uStack_80 = uVar3;
  uVar2 = FUN_0048bf84(&uStack_80);
  FUN_0081ffd0(uVar2);
  FUN_0081ffd0();
  return;
}



/* vtable 009026dc slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 009026dc slot 9 address 00485280 */
/* Already included above. */

/* vtable 009026dc slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 009026dc slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 009026dc slot 12 address 00485280 */
/* Already included above. */
