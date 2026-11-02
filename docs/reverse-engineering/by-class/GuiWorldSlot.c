/* Candidate RTTI class: GuiWorldSlot
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe044 slot 0 address 00773464 */

/* ADDRESS: 00773464 NAME: FUN_00773464 */

void FUN_00773464(void)

{
  return;
}



/* vtable 008fe044 slot 1 address 0077344c */

/* ADDRESS: 0077344c NAME: FUN_0077344c */

void __fastcall FUN_0077344c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe044 slot 2 address 0048d014 */

/* ADDRESS: 0048d014 NAME: FUN_0048d014 */

int __fastcall FUN_0048d014(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x50) + 0x58) - *(int *)(*(int *)(param_1 + 0x50) + 0x54) >> 2;
}



/* vtable 008fe044 slot 3 address 0048d022 */

/* ADDRESS: 0048d022 NAME: FUN_0048d022 */

void __thiscall FUN_0048d022(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  
  *(int *)(param_1[0x14] + 0x50) = param_2;
  bVar1 = false;
  if (-1 < param_2) {
    iVar2 = (**(code **)(*param_1 + 8))();
    bVar1 = param_2 < iVar2;
  }
  iVar2 = param_1[0x14];
  *(bool *)(*(int *)(iVar2 + 0x9c) + 0x34) = bVar1;
  *(bool *)(*(int *)(iVar2 + 0x98) + 0x34) = bVar1;
  *(bool *)(*(int *)(iVar2 + 0xa0) + 0x34) = bVar1;
  if ((bVar1 != false) && (param_3 != '\0')) {
    FUN_0048626a(param_2);
  }
  return;
}



/* vtable 008fe044 slot 4 address 0048cff0 */

/* ADDRESS: 0048cff0 NAME: FUN_0048cff0 */

undefined4 __thiscall FUN_0048cff0(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x50) >> 8),
                  *(int *)(*(int *)(param_1 + 0x50) + 0x50) == param_2);
}



/* vtable 008fe044 slot 5 address 0048d004 */

/* ADDRESS: 0048d004 NAME: FUN_0048d004 */

int __fastcall FUN_0048d004(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return iVar1 * 0x24;
}



/* vtable 008fe044 slot 6 address 0048d084 */

/* ADDRESS: 0048d084 NAME: FUN_0048d084 */

void FUN_0048d084(void)

{
  FUN_0048597e();
  return;
}



/* vtable 008fe044 slot 7 address 0048d0de */

/* ADDRESS: 0048d0de NAME: FUN_0048d0de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048d0de(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  uint uVar4;
  undefined4 ***pppuVar5;
  undefined4 extraout_ECX;
  undefined4 ***extraout_ECX_00;
  int iVar6;
  uint uVar7;
  undefined4 **unaff_EDI;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 **local_e8;
  undefined4 ***local_dc;
  int local_d8;
  undefined4 **local_d4 [4];
  undefined1 local_c4 [24];
  undefined1 local_ac [24];
  undefined1 local_94 [24];
  undefined1 local_7c [24];
  undefined4 ***local_64;
  int local_60;
  undefined4 **local_5c [4];
  undefined1 local_4c [24];
  undefined4 ***local_34;
  int local_30;
  undefined4 **local_2c [7];
  
  uVar2 = FUN_004ed8ba();
  pppuVar3 = (undefined4 ***)FUN_00823370(uVar2);
  if (local_d8 == 0) {
    FUN_00835f50(local_4c,param_2 + 1);
    FUN_008440a4(&local_64,*(int *)(param_1 + 0x50) + 100,&DAT_0088d525);
    pppuVar3 = &local_34;
    FUN_00843f58(pppuVar3,&local_64,local_4c);
    if (local_34 == local_2c) {
      if (local_30 != 0) {
        pppuVar3 = local_dc;
        FUN_008220b0(local_dc,local_34,local_30);
      }
      local_d8 = local_30;
      *(undefined1 *)((int)local_dc + local_30) = 0;
    }
    else {
      if (local_dc == local_d4) {
        pppuVar5 = (undefined4 ***)0x0;
      }
      else {
        pppuVar5 = local_dc;
        unaff_EDI = local_d4[0];
      }
      local_d8 = local_30;
      local_dc = local_34;
      local_d4[0] = local_2c[0];
      if (pppuVar5 == (undefined4 ***)0x0) {
        local_34 = local_2c;
      }
      else {
        local_34 = pppuVar5;
        local_2c[0] = unaff_EDI;
      }
    }
    local_30 = 0;
    *(undefined1 *)local_34 = 0;
    FUN_0081ffd0();
    FUN_0081ffd0();
    FUN_0081ffd0();
  }
  lVar8 = FUN_004ed8be(pppuVar3);
  lVar8 = lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 0x3ff);
  iVar6 = (int)((ulonglong)lVar8 >> 0x20);
  lVar8 = (ulonglong)((uint)lVar8 >> 10 | iVar6 * 0x400000) * 100;
  uVar4 = (uint)lVar8;
  iVar6 = (int)((ulonglong)lVar8 >> 0x20) + (iVar6 >> 10) * 100;
  uVar7 = iVar6 >> 0x1f & 0x3ff;
  iVar6 = iVar6 + (uint)CARRY4(uVar4,uVar7);
  FUN_007796d4(local_4c,&LAB_0076fbc0,0x3a,&DAT_0088d527,
               (double)((float)CONCAT44(iVar6 >> 10,uVar4 + uVar7 >> 10 | iVar6 * 0x400000) /
                       _DAT_0088d538));
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar9 = FUN_004ed8ca();
  FUN_004860a8(uVar2,uVar9);
  uVar2 = FUN_004ed8b6();
  FUN_008440a4(local_ac,uVar2,&DAT_0088d52a);
  FUN_00843f58(local_7c,local_ac,local_94);
  uVar2 = FUN_00821690(&DAT_0088d52d);
  FUN_00823120(uVar2);
  FUN_00843f58(&local_34,&local_64,local_4c);
  uVar2 = FUN_00821690(&DAT_0088d530);
  FUN_00823120(uVar2);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  local_64 = local_5c;
  FUN_008220b0(local_64,&DAT_0088d535,0);
  local_60 = 0;
  *(undefined1 *)local_64 = 0;
  cVar1 = FUN_004ed8c6();
  if (cVar1 != '\0') {
    FUN_008440a4(local_4c,*(int *)(param_1 + 0x50) + 0x7c,&DAT_0088d525);
    uVar2 = FUN_00821710(&local_64);
    FUN_00823120(uVar2);
    pppuVar3 = extraout_ECX_00;
    if (local_34 == local_2c) {
      if (local_30 != 0) {
        pppuVar3 = local_64;
        FUN_008220b0(local_64,local_34,local_30);
      }
      local_60 = local_30;
      *(undefined1 *)((int)local_64 + local_30) = 0;
    }
    else {
      if (local_64 == local_5c) {
        pppuVar5 = (undefined4 ***)0x0;
      }
      else {
        local_e8 = local_5c[0];
        pppuVar5 = local_64;
      }
      local_60 = local_30;
      local_64 = local_34;
      local_5c[0] = local_2c[0];
      if (pppuVar5 == (undefined4 ***)0x0) {
        local_34 = local_2c;
      }
      else {
        local_2c[0] = local_e8;
        local_34 = pppuVar5;
      }
    }
    local_30 = 0;
    *(undefined1 *)local_34 = 0;
    FUN_0081ffd0(pppuVar3);
    FUN_0081ffd0();
  }
  param_3 = param_3 + 2;
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),&local_dc,param_3,param_4 + 1,
               0xffffff);
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),local_c4,param_3,param_4 + 0xc,
               &LAB_00808080);
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),&local_64,param_3,param_4 + 0x16,
               &LAB_00808080);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return;
}



/* vtable 008fe044 slot 8 address 004874f8 */

/* ADDRESS: 004874f8 NAME: FUN_004874f8 */

void FUN_004874f8(void)

{
  return;
}



/* vtable 008fe044 slot 9 address 004874fc */

/* ADDRESS: 004874fc NAME: FUN_004874fc */

void FUN_004874fc(void)

{
  return;
}



/* vtable 008fe044 slot 10 address 004874fc */
/* Already included above. */
