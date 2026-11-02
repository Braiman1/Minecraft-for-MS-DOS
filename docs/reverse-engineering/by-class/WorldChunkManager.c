/* Candidate RTTI class: WorldChunkManager
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903344 slot 0 address 00513064 */

/* ADDRESS: 00513064 NAME: FUN_00513064 */

void __fastcall FUN_00513064(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00903344;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(param_2);
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
  }
  FUN_007efd84();
  FUN_007f03f4();
  FUN_007f03f4();
  FUN_007f03f4();
  return;
}



/* vtable 00903344 slot 1 address 005130b8 */

/* ADDRESS: 005130b8 NAME: FUN_005130b8 */

void __fastcall FUN_005130b8(void *param_1)

{
  FUN_00513064();
  free(param_1);
  return;
}



/* vtable 00903344 slot 2 address 00512eac */

/* ADDRESS: 00512eac NAME: FUN_00512eac */

void __thiscall FUN_00512eac(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0xc))(*param_2 << 4,param_2[1] << 4);
  return;
}



/* vtable 00903344 slot 3 address 00512ed6 */

/* ADDRESS: 00512ed6 NAME: FUN_00512ed6 */

undefined4 __thiscall FUN_00512ed6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x14))(param_2,param_3,1,1);
  return *(undefined4 *)*puVar1;
}



/* vtable 00903344 slot 4 address 00512fe8 */

/* ADDRESS: 00512fe8 NAME: FUN_00512fe8 */

float10 __thiscall FUN_00512fe8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4aac(param_1 + 4,(double)param_2,(double)param_3,1,1,DAT_00896a38,DAT_00896a38,0,
                       0x3fe00000);
  FUN_00512f0a(uVar1);
  return (float10)**(double **)(param_1 + 4);
}



/* vtable 00903344 slot 5 address 00513552 */

/* ADDRESS: 00513552 NAME: FUN_00513552 */

int * __thiscall FUN_00513552(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int *local_50;
  undefined1 local_40 [12];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  
  if ((param_4 == 1) && (param_5 == 1)) {
    uVar7 = (param_3 & 0xf) << 4 | param_2 & 0xf;
    if (((char)param_1[uVar7 * 8 + 0x17] == '\0') ||
       ((param_1[uVar7 * 8 + 0x11] != param_2 || (param_1[uVar7 * 8 + 0x10] != param_3)))) {
      pcVar2 = *(code **)(*param_1 + 0x1c);
      FUN_0081baf8(param_1 + 10);
      (*pcVar2)(param_1,local_40,param_2,param_3,1,1);
      local_28 = param_1[10];
      local_20 = param_1[0xc];
      param_1[10] = local_34;
      param_1[0xb] = local_30;
      param_1[0xc] = local_2c;
      local_34 = 0;
      local_2c = 0;
      FUN_007efd84();
      FUN_007efd84();
      FUN_007efd84();
      param_1[uVar7 * 8 + 0x11] = param_2;
      puVar3 = (undefined8 *)param_1[1];
      param_1[uVar7 * 8 + 0x10] = param_3;
      piVar4 = (int *)param_1[10];
      puVar5 = (undefined8 *)param_1[4];
      *(undefined8 *)(param_1 + uVar7 * 8 + 0x12) = *puVar3;
      uVar1 = *puVar5;
      iVar6 = *piVar4;
      *(undefined1 *)(param_1 + uVar7 * 8 + 0x17) = 1;
      param_1[uVar7 * 8 + 0x16] = iVar6;
      *(undefined8 *)(param_1 + uVar7 * 8 + 0x14) = uVar1;
    }
    else {
      if (param_1[0xb] == param_1[10]) {
        FUN_0081babc(1);
      }
      if (param_1[2] == param_1[1]) {
        FUN_0081e520(1);
      }
      if (param_1[5] == param_1[4]) {
        FUN_0081e520(1);
      }
      piVar4 = (int *)param_1[10];
      *(undefined8 *)param_1[1] = *(undefined8 *)(param_1 + uVar7 * 8 + 0x12);
      *(undefined8 *)param_1[4] = *(undefined8 *)(param_1 + uVar7 * 8 + 0x14);
      *piVar4 = param_1[uVar7 * 8 + 0x16];
    }
  }
  else {
    pcVar2 = *(code **)(*param_1 + 0x1c);
    FUN_0081baf8(param_1 + 10);
    (*pcVar2)(param_1,local_40,param_2,param_3,param_4,param_5);
    iVar6 = local_34;
    local_28 = param_1[10];
    local_20 = param_1[0xc];
    local_34 = 0;
    param_1[10] = iVar6;
    param_1[0xb] = local_30;
    param_1[0xc] = local_2c;
    local_2c = 0;
    FUN_007efd84();
    FUN_007efd84();
    FUN_007efd84();
  }
  local_50 = param_1 + 10;
  return local_50;
}



/* vtable 00903344 slot 6 address 00513798 */

/* ADDRESS: 00513798 NAME: FUN_00513798 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_00513798(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  
  if ((*param_2 == param_2[1]) || (param_2[1] - *param_2 >> 3 < param_5 * param_6)) {
    FUN_0081e520(param_5 * param_6);
  }
  uVar3 = FUN_004b4aac(param_2,(double)param_3,(double)param_4,param_5,param_6,DAT_00896a38,
                       DAT_00896a38,0,0x3fd00000);
  FUN_00512f0a(uVar3);
  uVar3 = FUN_004b4aac(param_1 + 0x1c,(double)param_3,(double)param_4,param_5,param_6,0,0x3fd00000,0
                       ,0x3fd00000,0xd2d2d2d3,0x3fe2d2d2);
  FUN_00512f0a(uVar3);
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_5; iVar1 = iVar1 + 1) {
    iVar4 = iVar2 << 3;
    for (iVar5 = 0; iVar5 < param_6; iVar5 = iVar5 + 1) {
      pdVar6 = (double *)(*param_2 + iVar4);
      dVar7 = _DAT_00896a80 -
              ((DAT_00896a48 * *(double *)(*(int *)(param_1 + 0x1c) + iVar4) + _DAT_00896a30) *
               _DAT_00896a78 + (DAT_00896a50 * *pdVar6 + _DAT_00896a68) * _DAT_00896a70);
      dVar7 = _DAT_00896a80 - dVar7 * dVar7;
      if (dVar7 < 0.0) {
        dVar7 = 0.0;
      }
      iVar4 = iVar4 + 8;
      *pdVar6 = dVar7;
    }
    iVar4 = 0;
    if (-1 < param_6) {
      iVar4 = param_6;
    }
    iVar2 = iVar2 + iVar4;
  }
  return param_2;
}



/* vtable 00903344 slot 7 address 0051329c */

/* ADDRESS: 0051329c NAME: FUN_0051329c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_0051329c(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iStack_2c;
  int iStack_24;
  
  if ((*param_3 == param_3[1]) || (param_3[1] - *param_3 >> 2 < param_7 * param_6)) {
    FUN_0081babc(param_7 * param_6);
  }
  dVar8 = (double)param_5;
  dVar7 = (double)param_4;
  uVar3 = FUN_004b4aac(param_2 + 4,dVar7,dVar8,param_6,param_6,DAT_00896a38,DAT_00896a38,0,
                       0x3fd00000);
  FUN_00512f0a(uVar3);
  uVar3 = FUN_004b4aac(param_2 + 0x10,dVar7,dVar8,param_6,param_6,DAT_00896a40,DAT_00896a40,
                       0x55555555,0x3fd55555);
  FUN_00512f0a(uVar3);
  uVar3 = FUN_004b4aac(param_2 + 0x1c,dVar7,dVar8,param_6,param_6,0,0x3fd00000,0,0x3fd00000,
                       0xd2d2d2d3,0x3fe2d2d2);
  FUN_00512f0a(uVar3);
  iStack_24 = 0;
  for (iStack_2c = 0; iStack_2c < param_6; iStack_2c = iStack_2c + 1) {
    iVar6 = iStack_24 * 4;
    for (iVar1 = 0; iVar1 < param_7; iVar1 = iVar1 + 1) {
      iVar2 = iVar6 * 2;
      dVar8 = DAT_00896a48 * *(double *)(*(int *)(param_2 + 0x1c) + iVar2) + _DAT_00896a30;
      pdVar5 = (double *)(*(int *)(param_2 + 4) + iVar2);
      pdVar4 = (double *)(iVar2 + *(int *)(param_2 + 0x10));
      dVar7 = (*pdVar4 * DAT_00896a50 + _DAT_00896a30) * _DAT_00896a58 + DAT_00896a60 * dVar8;
      dVar8 = _DAT_00896a80 -
              ((DAT_00896a50 * *pdVar5 + _DAT_00896a68) * _DAT_00896a70 + dVar8 * _DAT_00896a78);
      dVar8 = _DAT_00896a80 - dVar8 * dVar8;
      if (dVar8 < 0.0) {
        dVar8 = 0.0;
      }
      if (dVar7 < 0.0) {
        dVar7 = 0.0;
      }
      dVar9 = _DAT_00896a80;
      if (dVar7 <= _DAT_00896a80) {
        dVar9 = dVar7;
      }
      *pdVar5 = dVar8;
      *pdVar4 = dVar9;
      uVar3 = FUN_00414f3e(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0),
                           (int)((ulonglong)dVar9 >> 0x20));
      *(undefined4 *)(*param_3 + iVar6) = uVar3;
      iVar6 = iVar6 + 4;
    }
    iVar6 = 0;
    if (-1 < param_7) {
      iVar6 = param_7;
    }
    iStack_24 = iStack_24 + iVar6;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return param_1;
}


