/* Candidate RTTI class: GuiAnimationSettingsOF
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904864 slot 0 address 00776384 */

/* ADDRESS: 00776384 NAME: thunk_FUN_0077638c */

void thunk_FUN_0077638c(void)

{
  FUN_0077638c();
  return;
}



/* vtable 00904864 slot 1 address 00776360 */

/* ADDRESS: 00776360 NAME: FUN_00776360 */

void __fastcall FUN_00776360(void *param_1)

{
  FUN_0077638c();
  free(param_1);
  return;
}



/* vtable 00904864 slot 2 address 00477d72 */

/* ADDRESS: 00477d72 NAME: FUN_00477d72 */

void __fastcall FUN_00477d72(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00904864 slot 3 address 004852d0 */

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



/* vtable 00904864 slot 4 address 0048536a */

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



/* vtable 00904864 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00904864 slot 6 address 00477852 */

/* ADDRESS: 00477852 NAME: FUN_00477852 */

void __thiscall FUN_00477852(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_40;
  undefined4 *local_3c;
  int local_38;
  undefined4 local_34 [9];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_00477977;
    uVar2 = FUN_0048a0b4();
    FUN_0047485a(uVar2,1);
    puVar5 = *(undefined4 **)(param_1 + 0x4c);
    uVar2 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),extraout_ECX);
    FUN_00471dcc(puVar5,uVar2);
    puVar3 = *(undefined4 **)(param_2 + 0x18);
    puVar6 = puVar5;
    if (local_3c == local_34) {
      if (local_38 != 0) {
        puVar6 = local_3c;
        FUN_008220b0(puVar3,local_3c,local_38);
        puVar5 = puVar3;
      }
      *(int *)(param_2 + 0x1c) = local_38;
      *(undefined1 *)(*(int *)(param_2 + 0x18) + local_38) = 0;
    }
    else {
      if (puVar3 == (undefined4 *)(param_2 + 0x20)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        local_40 = *(undefined4 *)(param_2 + 0x20);
      }
      *(int *)(param_2 + 0x1c) = local_38;
      *(undefined4 **)(param_2 + 0x18) = local_3c;
      *(undefined4 *)(param_2 + 0x20) = local_34[0];
      if (puVar3 == (undefined4 *)0x0) {
        local_3c = local_34;
      }
      else {
        local_34[0] = local_40;
        local_3c = puVar3;
      }
    }
    *(undefined1 *)local_3c = 0;
    FUN_0081ffd0(puVar5,puVar6);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
  }
LAB_00477977:
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



/* vtable 00904864 slot 7 address 00477a5c */

/* ADDRESS: 00477a5c NAME: FUN_00477a5c */

void __fastcall FUN_00477a5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  uint uStack_84;
  undefined4 uStack_70;
  undefined1 *apuStack_6c [2];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [24];
  int aiStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_3c[0] = DAT_00a08454;
  aiStack_3c[1] = DAT_00a08450;
  aiStack_3c[2] = DAT_00a0844c;
  aiStack_3c[3] = DAT_00a08448;
  uStack_2c = DAT_00a08434;
  uStack_28 = DAT_00a08430;
  uStack_24 = DAT_00a0842c;
  uStack_20 = DAT_00a08428;
  uVar4 = FUN_004fc82e();
  uStack_84 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_3c[uStack_84];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_84 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + ((int)uStack_84 >> 1) * 0x15;
    if (*(char *)(puVar3 + 8) == '\0') {
      puVar5 = (undefined1 *)FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_54);
      apuStack_6c[0] = puVar5;
      FUN_00477a36(apuStack_6c);
    }
    else {
      puVar5 = (undefined1 *)FUN_00846710(0x44);
      fVar7 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_54,(float)fVar7);
      apuStack_6c[0] = puVar5;
      FUN_00477a36(apuStack_6c);
    }
    FUN_0081ffd0(puVar3);
    uStack_84 = uStack_84 + 1;
  } while (uStack_84 != 8);
  uVar6 = FUN_00846710(0x38);
  apuStack_6c[0] = auStack_64;
  FUN_004777f4("gui.done","");
  FUN_004fbdd2(uVar4,apuStack_6c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_54
              );
  uStack_70 = uVar6;
  uVar4 = FUN_00477a36(&uStack_70);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* vtable 00904864 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00904864 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00904864 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00904864 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00904864 slot 12 address 00485280 */
/* Already included above. */
