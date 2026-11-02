/* Candidate RTTI class: GuiWorldSettingsOF
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903864 slot 0 address 00775a2c */

/* ADDRESS: 00775a2c NAME: thunk_FUN_00775a34 */

void thunk_FUN_00775a34(void)

{
  FUN_00775a34();
  return;
}



/* vtable 00903864 slot 1 address 00775a08 */

/* ADDRESS: 00775a08 NAME: FUN_00775a08 */

void __fastcall FUN_00775a08(void *param_1)

{
  FUN_00775a34();
  free(param_1);
  return;
}



/* vtable 00903864 slot 2 address 0048cdee */

/* ADDRESS: 0048cdee NAME: FUN_0048cdee */

void __thiscall FUN_0048cdee(int param_1,int param_2,int param_3,undefined4 param_4)

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
      iVar5 = FUN_0048c974(param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0048c91c(param_1,iVar5 + 0x18);
      uVar2 = FUN_0048c9b6(param_1,auStack_34);
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
      FUN_0081b200();
      return;
    }
  }
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x50) = param_2;
  uVar2 = thunk_FUN_00579530();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* vtable 00903864 slot 3 address 004852d0 */

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



/* vtable 00903864 slot 4 address 0048536a */

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



/* vtable 00903864 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00903864 slot 6 address 0048c60c */

/* ADDRESS: 0048c60c NAME: FUN_0048c60c */

void __thiscall FUN_0048c60c(int param_1,int param_2)

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
    if (iVar1 == 0) goto LAB_0048c731;
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
LAB_0048c731:
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



/* vtable 00903864 slot 7 address 0048cb14 */

/* ADDRESS: 0048cb14 NAME: FUN_0048cb14 */

void __fastcall FUN_0048cb14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uStack_74;
  undefined4 uStack_6c;
  undefined4 auStack_68 [6];
  undefined1 auStack_50 [24];
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_38[0] = DAT_00a0847c;
  aiStack_38[1] = DAT_00a08478;
  aiStack_38[2] = DAT_00a08414;
  aiStack_38[3] = DAT_00a08410;
  uStack_28 = DAT_00a08424;
  uStack_24 = DAT_00a0840c;
  uStack_20 = DAT_00a08418;
  uVar4 = FUN_004fc82e();
  uStack_74 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_38[uStack_74];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_74 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + ((int)uStack_74 >> 1) * 0x15;
    if (*(char *)(puVar3 + 8) == '\0') {
      uVar5 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_50);
      auStack_68[0] = uVar5;
      FUN_0048caee(auStack_68);
    }
    else {
      uVar5 = FUN_00846710(0x44);
      fVar6 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_50,(float)fVar6);
      auStack_68[0] = uVar5;
      FUN_0048caee(auStack_68);
    }
    FUN_0081ffd0(puVar3);
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 != 7);
  uVar5 = FUN_00846710(0x38);
  FUN_0048c796("gui.done");
  FUN_004fbdd2(uVar4,auStack_68);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_50
              );
  uStack_6c = uVar5;
  uVar4 = FUN_0048caee(&uStack_6c);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* vtable 00903864 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00903864 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00903864 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00903864 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00903864 slot 12 address 00485280 */
/* Already included above. */
