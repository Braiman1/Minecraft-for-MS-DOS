/* Candidate RTTI class: GuiOtherSettingsOF
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009037f4 slot 0 address 007759c4 */

/* ADDRESS: 007759c4 NAME: thunk_FUN_007759cc */

void thunk_FUN_007759cc(void)

{
  FUN_007759cc();
  return;
}



/* vtable 009037f4 slot 1 address 007759a0 */

/* ADDRESS: 007759a0 NAME: FUN_007759a0 */

void __fastcall FUN_007759a0(void *param_1)

{
  FUN_007759cc();
  free(param_1);
  return;
}



/* vtable 009037f4 slot 2 address 004845e0 */

/* ADDRESS: 004845e0 NAME: FUN_004845e0 */

void __thiscall FUN_004845e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a(param_2,param_3,param_4);
  iVar5 = param_2 - *(int *)(param_1 + 0x50);
  iVar1 = -iVar5;
  if (iVar1 < 0) {
    iVar1 = iVar5;
  }
  if (iVar1 < 6) {
    iVar5 = param_3 - *(int *)(param_1 + 0x54);
    iVar1 = -iVar5;
    if (iVar1 < 0) {
      iVar1 = iVar5;
    }
    if (iVar1 < 6) {
      uVar3 = thunk_FUN_00579530();
      if (uVar3 < *(int *)(param_1 + 0x58) + 700U) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x10) / 6;
      iVar1 = iVar5 + 100;
      if (iVar5 + 0x5d < param_3) {
        iVar1 = iVar5 + -5;
      }
      iVar5 = FUN_004841f4(param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0048419c(param_1,iVar5 + 0x18);
      uVar2 = FUN_00484236(param_1,auStack_34);
      FUN_0081ffd0(uVar2,uVar2);
      if (iStack_40 != iStack_3c) {
        iVar4 = iVar4 / 2;
        FUN_00475794(iVar4 + -0x96,iVar1,iVar4 + 0x96,iVar1 + 0x5e,0xe0000000,0xe0000000);
        iVar6 = iStack_3c - iStack_40;
        for (iVar5 = iVar1 + 5; iVar5 != iVar1 + 5 + (iVar6 >> 3) * 0x55555559; iVar5 = iVar5 + 0xb)
        {
          FUN_0046feda(iStack_40,iVar4 + -0x91,iVar5,&DAT_00dddddd);
          iStack_40 = iStack_40 + 0x18;
        }
      }
      FUN_0081b1d0();
      return;
    }
  }
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x50) = param_2;
  uVar2 = thunk_FUN_00579530();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* vtable 009037f4 slot 3 address 004852d0 */

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



/* vtable 009037f4 slot 4 address 0048536a */

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



/* vtable 009037f4 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 009037f4 slot 6 address 00483e8c */

/* ADDRESS: 00483e8c NAME: FUN_00483e8c */

void __thiscall FUN_00483e8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 auStack_34 [9];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_00483fb1;
    uVar2 = FUN_0048a0b4();
    FUN_0047485a(uVar2,1);
    puVar5 = *(undefined4 **)(param_1 + 0x4c);
    uVar2 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),extraout_ECX);
    FUN_00471dcc(puVar5,uVar2);
    puVar3 = *(undefined4 **)(param_2 + 0x18);
    puVar6 = puVar5;
    if (puStack_3c == auStack_34) {
      if (iStack_38 != 0) {
        puVar6 = puStack_3c;
        FUN_008220b0(puVar3,puStack_3c,iStack_38);
        puVar5 = puVar3;
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined1 *)(*(int *)(param_2 + 0x18) + iStack_38) = 0;
    }
    else {
      if (puVar3 == (undefined4 *)(param_2 + 0x20)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uStack_40 = *(undefined4 *)(param_2 + 0x20);
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined4 **)(param_2 + 0x18) = puStack_3c;
      *(undefined4 *)(param_2 + 0x20) = auStack_34[0];
      if (puVar3 == (undefined4 *)0x0) {
        puStack_3c = auStack_34;
      }
      else {
        auStack_34[0] = uStack_40;
        puStack_3c = puVar3;
      }
    }
    *(undefined1 *)puStack_3c = 0;
    FUN_0081ffd0(puVar5,puVar6);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
  }
LAB_00483fb1:
  if (*(int *)(param_2 + 0x30) != *DAT_00a08468) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004ef328(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar1 + 0xc));
    uVar2 = FUN_004ef410();
    uVar4 = FUN_004ef40c();
    FUN_0048556c(*(undefined4 *)(param_1 + 8),uVar4,uVar2);
  }
  return;
}



/* vtable 009037f4 slot 7 address 0048431c */

/* ADDRESS: 0048431c NAME: FUN_0048431c */

void __fastcall FUN_0048431c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uStack_74;
  undefined4 uStack_60;
  int aiStack_5c [4];
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  aiStack_5c[0] = DAT_00a08474;
  aiStack_5c[1] = DAT_00a08404;
  aiStack_5c[2] = DAT_00a0843c;
  aiStack_5c[3] = DAT_00a08440;
  uVar4 = FUN_004fc82e();
  uStack_74 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_5c[uStack_74];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_74 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + (-((int)uStack_74 >> 1) & 0x15U);
    if (*(char *)(puVar3 + 8) == '\0') {
      uVar5 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_34);
      auStack_4c[0] = uVar5;
      FUN_004842f6(auStack_4c);
    }
    else {
      uVar5 = FUN_00846710(0x44);
      fVar6 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_34,(float)fVar6);
      auStack_4c[0] = uVar5;
      FUN_004842f6(auStack_4c);
    }
    FUN_0081ffd0(puVar3);
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 != 4);
  uVar5 = FUN_00846710(0x38);
  FUN_00484016("gui.done");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_34
              );
  uStack_60 = uVar5;
  uVar4 = FUN_004842f6(&uStack_60);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* vtable 009037f4 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 009037f4 slot 9 address 00485280 */
/* Already included above. */

/* vtable 009037f4 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 009037f4 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 009037f4 slot 12 address 00485280 */
/* Already included above. */
