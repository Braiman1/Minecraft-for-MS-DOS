/* Candidate RTTI class: GuiSelectWorld
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901030 slot 0 address 00485b34 */

/* ADDRESS: 00485b34 NAME: FUN_00485b34 */

void __fastcall FUN_00485b34(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00901030;
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  puVar1 = (undefined4 *)param_1[0x16];
  for (puVar2 = (undefined4 *)param_1[0x15]; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    _Memory = (void *)*puVar2;
    if (_Memory != (void *)0x0) {
      FUN_0081ffd0();
      FUN_0081ffd0();
      free(_Memory);
    }
  }
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_007eff20();
  FUN_0081ffd0();
  FUN_00485438();
  return;
}



/* vtable 00901030 slot 1 address 00485bb8 */

/* ADDRESS: 00485bb8 NAME: FUN_00485bb8 */

void __fastcall FUN_00485bb8(void *param_1)

{
  FUN_00485b34();
  free(param_1);
  return;
}



/* vtable 00901030 slot 2 address 00486dc0 */

/* ADDRESS: 00486dc0 NAME: FUN_00486dc0 */

void __thiscall FUN_00486dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0048791e(param_2,param_3,param_4);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00901030 slot 3 address 004852d0 */

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



/* vtable 00901030 slot 4 address 0048536a */

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



/* vtable 00901030 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00901030 slot 6 address 004863c4 */

/* ADDRESS: 004863c4 NAME: FUN_004863c4 */

void __thiscall FUN_004863c4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 extraout_ECX;
  undefined1 *extraout_EDX;
  undefined1 *puVar4;
  undefined4 local_c4;
  int local_c0;
  undefined1 local_ac [24];
  undefined1 local_94 [24];
  undefined1 *local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x30)) {
  case 0:
    break;
  case 1:
    FUN_0048626a();
    return;
  case 2:
    puVar3 = (undefined1 *)FUN_00486128(param_1,*(undefined4 *)(param_1 + 0x50));
    puVar4 = puVar3;
    if (local_c0 != 0) {
      *(undefined1 *)(param_1 + 0x94) = 1;
      uVar2 = FUN_004fc82e(puVar3,puVar3);
      FUN_00485ac6("selectWorld.deleteQuestion");
      FUN_004fbdd2(uVar2,local_34);
      FUN_0081ffd0(extraout_ECX,extraout_ECX);
      FUN_00485ac6("selectWorld.deleteWarning");
      FUN_004fbdd2(uVar2,local_4c);
      local_74[0] = 0;
      local_7c = local_74;
      local_78 = 0;
      FUN_00822a40(local_c0 + 1);
      FUN_008216e0(&DAT_0088c9af,1);
      FUN_008216e0(local_c4,local_c0);
      uVar1 = FUN_00821690(&DAT_0088c9b1);
      FUN_00823120(uVar1);
      FUN_00843f58(local_94,local_64,local_34);
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_00485ac6("selectWorld.deleteButton");
      uVar1 = FUN_004fbdd2(uVar2,local_34);
      FUN_0081ffd0(uVar1,uVar1);
      FUN_00485ac6("gui.cancel");
      FUN_004fbdd2(uVar2,local_34);
      FUN_0081ffd0(uVar2,uVar2);
      puVar3 = (undefined1 *)FUN_00846710(0x98);
      puVar4 = local_ac;
      FUN_0048d620(param_1,puVar4,local_94,local_64,local_4c,*(undefined4 *)(param_1 + 0x50));
      FUN_0051d808(puVar3);
      FUN_0081ffd0(puVar3);
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_0081ffd0();
    }
    goto LAB_004866aa;
  case 3:
    FUN_00846710(0x58);
    FUN_0047b488(param_1);
    break;
  default:
    FUN_004876b4();
    return;
  case 6:
    uVar2 = FUN_00846710(0x50);
    FUN_00485fbc(param_1,*(undefined4 *)(param_1 + 0x50));
    FUN_00484ce4(param_1,local_34);
    puVar4 = extraout_EDX;
    puVar3 = (undefined1 *)FUN_0051d808(uVar2);
LAB_004866aa:
    FUN_0081ffd0(puVar3,puVar4);
    return;
  }
  FUN_0051d808();
  return;
}



/* vtable 00901030 slot 7 address 00486c6c */

/* ADDRESS: 00486c6c NAME: FUN_00486c6c */

void __fastcall FUN_00486c6c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  uVar1 = FUN_004fc82e();
  FUN_00485ac6("selectWorld.title");
  uVar2 = FUN_004fbdd2(uVar1,auStack_4c);
  uVar3 = FUN_00485a3e(auStack_34);
  FUN_0081ffd0(uVar3,uVar2);
  FUN_0081ffd0();
  FUN_00485ac6("selectWorld.world");
  uVar2 = FUN_004fbdd2(uVar1,auStack_4c);
  uVar3 = FUN_00485a3e(auStack_34);
  FUN_0081ffd0(uVar3,uVar2);
  FUN_0081ffd0();
  FUN_00485ac6("selectWorld.conversion");
  FUN_004fbdd2(uVar1,auStack_4c);
  uVar1 = extraout_EDX;
  FUN_00485a3e(auStack_34);
  FUN_0081ffd0(extraout_ECX,uVar1);
  FUN_0081ffd0();
  FUN_00485eb0();
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 4))();
  }
  uVar1 = FUN_00846710(0x58);
  FUN_0048d08c(param_1);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_00487658(param_1 + 0x14,4,5);
  FUN_004867c0();
  return;
}



/* vtable 00901030 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00901030 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00901030 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00901030 slot 11 address 00485fea */

/* ADDRESS: 00485fea NAME: FUN_00485fea */

void __thiscall FUN_00485fea(int param_1,char param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (param_2 != '\0') {
    piVar2 = (int *)FUN_0051cf70();
    (**(code **)(*piVar2 + 0x14))();
    pcVar1 = *(code **)(*piVar2 + 0x1c);
    FUN_00485fbc(param_1,param_3);
    uVar3 = extraout_ECX;
    FUN_00823680(auStack_50);
    uStack_20 = 0;
    (*pcVar1)(auStack_38,uVar3);
    FUN_0081ffd0(extraout_EDX);
    FUN_0081ffd0();
    FUN_00485eb0();
  }
  FUN_0051d808(param_1);
  return;
}



/* vtable 00901030 slot 12 address 00485280 */
/* Already included above. */
