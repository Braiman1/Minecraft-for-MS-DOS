/* Candidate RTTI class: WorldChunkManagerHell
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090483c slot 0 address 0077634c */

/* ADDRESS: 0077634c NAME: thunk_FUN_00776354 */

void thunk_FUN_00776354(void)

{
  FUN_00776354();
  return;
}



/* vtable 0090483c slot 1 address 00776328 */

/* ADDRESS: 00776328 NAME: FUN_00776328 */

void __fastcall FUN_00776328(void *param_1)

{
  FUN_00776354();
  free(param_1);
  return;
}



/* vtable 0090483c slot 2 address 00513960 */

/* ADDRESS: 00513960 NAME: FUN_00513960 */

undefined4 __fastcall FUN_00513960(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2040);
}



/* vtable 0090483c slot 3 address 0051396a */

/* ADDRESS: 0051396a NAME: FUN_0051396a */

undefined4 __fastcall FUN_0051396a(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2040);
}



/* vtable 0090483c slot 4 address 00513974 */

/* ADDRESS: 00513974 NAME: FUN_00513974 */

float10 __fastcall FUN_00513974(int param_1)

{
  return (float10)*(double *)(param_1 + 0x2048);
}



/* vtable 0090483c slot 5 address 00513552 */

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



/* vtable 0090483c slot 6 address 005139d2 */

/* ADDRESS: 005139d2 NAME: FUN_005139d2 */

int * __thiscall
FUN_005139d2(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((param_2[1] == *param_2) || (param_2[1] - *param_2 >> 3 < param_6 * param_5)) {
    local_24 = 0;
    local_20 = 0;
    FUN_0081e338(param_5 * param_6,&local_24);
  }
  puVar3 = (undefined8 *)*param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x2048);
  puVar1 = puVar3 + param_6 * param_5;
  for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
    *puVar3 = uVar2;
  }
  return param_2;
}



/* vtable 0090483c slot 7 address 00513a42 */

/* ADDRESS: 00513a42 NAME: FUN_00513a42 */

int * __thiscall
FUN_00513a42(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6
            ,int param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((param_3[1] == *param_3) || (param_3[1] - *param_3 >> 2 < param_7 * param_6)) {
    local_24 = 0;
    FUN_0081b8d8(param_6 * param_7,&local_24);
  }
  if ((*(int *)(param_2 + 8) == *(int *)(param_2 + 4)) ||
     (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3 < param_7 * param_6)) {
    local_24 = 0;
    local_20 = 0;
    FUN_0081e338(param_6 * param_7,&local_24);
    local_24 = 0;
    local_20 = 0;
    FUN_0081e338(param_6 * param_7,&local_24);
  }
  param_7 = param_7 * param_6;
  puVar2 = (undefined4 *)*param_3;
  uVar3 = *(undefined4 *)(param_2 + 0x2040);
  for (puVar4 = puVar2; puVar2 + param_7 != puVar4; puVar4 = puVar4 + 1) {
    *puVar4 = uVar3;
  }
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x2050);
  puVar6 = puVar5 + param_7;
  for (; puVar6 != puVar5; puVar5 = puVar5 + 1) {
    *puVar5 = uVar1;
  }
  puVar6 = *(undefined8 **)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 0x2048);
  puVar5 = puVar6 + param_7;
  for (; puVar5 != puVar6; puVar6 = puVar6 + 1) {
    *puVar6 = uVar1;
  }
  *param_1 = (int)puVar2;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return param_1;
}


