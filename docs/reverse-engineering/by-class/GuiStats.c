/* Candidate RTTI class: GuiStats
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905cfc slot 0 address 0048a0b8 */

/* ADDRESS: 0048a0b8 NAME: FUN_0048a0b8 */

void __fastcall FUN_0048a0b8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00905cfc;
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))(param_2);
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  FUN_0081ffd0();
  FUN_00485438();
  return;
}



/* vtable 00905cfc slot 1 address 0048a0fc */

/* ADDRESS: 0048a0fc NAME: FUN_0048a0fc */

void __fastcall FUN_0048a0fc(void *param_1)

{
  FUN_0048a0b8();
  free(param_1);
  return;
}



/* vtable 00905cfc slot 2 address 0048abae */

/* ADDRESS: 0048abae NAME: FUN_0048abae */

void __thiscall FUN_0048abae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0048791e(param_2,param_3,param_4);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00905cfc slot 3 address 004852d0 */

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



/* vtable 00905cfc slot 4 address 0048536a */

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



/* vtable 00905cfc slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00905cfc slot 6 address 0048a120 */

/* ADDRESS: 0048a120 NAME: FUN_0048a120 */

void __thiscall FUN_0048a120(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x34) != '\0') {
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      FUN_0051d808();
      return;
    }
    if (iVar1 == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x4c);
    }
    else if (iVar1 == 3) {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
    }
    else {
      if (iVar1 != 2) {
        FUN_004876b4();
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  return;
}



/* vtable 00905cfc slot 7 address 0048a9da */

/* ADDRESS: 0048a9da NAME: FUN_0048a9da */

void __fastcall FUN_0048a9da(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined1 local_4c [24];
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c [7];
  
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 4))();
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 4))();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_0048a176("gui.stats");
  FUN_004f6ab8(&local_34,local_4c);
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  if (local_34 == local_2c) {
    if (local_30 != 0) {
      FUN_008220b0(puVar2,local_34,local_30);
    }
    *(int *)(param_1 + 0x38) = local_30;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + local_30) = 0;
  }
  else {
    if (puVar2 == (undefined4 *)(param_1 + 0x3c)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_50 = *(undefined4 *)(param_1 + 0x3c);
    }
    *(int *)(param_1 + 0x38) = local_30;
    *(undefined4 **)(param_1 + 0x34) = local_34;
    *(undefined4 *)(param_1 + 0x3c) = local_2c[0];
    if (puVar2 == (undefined4 *)0x0) {
      local_34 = local_2c;
    }
    else {
      local_2c[0] = local_50;
      local_34 = puVar2;
    }
  }
  local_30 = 0;
  *(undefined1 *)local_34 = 0;
  FUN_0081ffd0();
  FUN_0081ffd0();
  uVar3 = FUN_00846710(0x58);
  FUN_00489b44(param_1);
  iVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_00487658(iVar1,1,1);
  uVar3 = FUN_00846710(0x80);
  FUN_00489e5c(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  FUN_00487658(iVar1,1,1);
  uVar3 = FUN_00846710(0x80);
  FUN_00489890(param_1);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_00487658(iVar1,1,1);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  FUN_0048a610();
  return;
}



/* vtable 00905cfc slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00905cfc slot 9 address 00485280 */
/* Already included above. */

/* vtable 00905cfc slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00905cfc slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00905cfc slot 12 address 00485280 */
/* Already included above. */
