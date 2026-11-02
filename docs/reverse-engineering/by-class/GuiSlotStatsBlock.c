/* Candidate RTTI class: GuiSlotStatsBlock
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903118 slot 0 address 0077567c */

/* ADDRESS: 0077567c NAME: thunk_FUN_00775684 */

void thunk_FUN_00775684(void)

{
  FUN_00775684();
  return;
}



/* vtable 00903118 slot 1 address 00775658 */

/* ADDRESS: 00775658 NAME: FUN_00775658 */

void __fastcall FUN_00775658(void *param_1)

{
  FUN_00775684();
  free(param_1);
  return;
}



/* vtable 00903118 slot 2 address 00488906 */

/* ADDRESS: 00488906 NAME: FUN_00488906 */

int __fastcall FUN_00488906(int param_1)

{
  return *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2;
}



/* vtable 00903118 slot 3 address 004888f4 */

/* ADDRESS: 004888f4 NAME: FUN_004888f4 */

void FUN_004888f4(void)

{
  return;
}



/* vtable 00903118 slot 4 address 004888f8 */

/* ADDRESS: 004888f8 NAME: FUN_004888f8 */

undefined4 FUN_004888f8(void)

{
  return 0;
}



/* vtable 00903118 slot 5 address 004874e0 */

/* ADDRESS: 004874e0 NAME: FUN_004874e0 */

undefined8 __fastcall FUN_004874e0(int *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return CONCAT44(in_EAX,iVar1 * param_1[6] + param_1[0x13]);
}



/* vtable 00903118 slot 6 address 004888fe */

/* ADDRESS: 004888fe NAME: FUN_004888fe */

void FUN_004888fe(void)

{
  FUN_0048597e();
  return;
}



/* vtable 00903118 slot 7 address 004896c4 */

/* ADDRESS: 004896c4 NAME: FUN_004896c4 */

void __thiscall FUN_004896c4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = ~param_2 & 1;
  uVar3 = FUN_00488fbe(param_2);
  iVar1 = FUN_004f6b64((int)((ulonglong)uVar3 >> 0x20));
  FUN_0048a5ac(*(undefined4 *)(param_1 + 0x78),param_3 + 0x28,param_4,iVar1);
  FUN_00488fce((&DAT_00a50de0)[iVar1],param_3 + 0x73,param_4,uVar2);
  FUN_00488fce((&DAT_00a4ea80)[iVar1],param_3 + 0xa5,param_4,uVar2);
  FUN_00488fce((int)uVar3,param_3 + 0xd7,param_4,uVar2);
  return;
}



/* vtable 00903118 slot 8 address 004895d8 */

/* ADDRESS: 004895d8 NAME: FUN_004895d8 */

void __thiscall FUN_004895d8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_00488910(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar2 = param_3 + 2;
    iVar1 = param_2 + 0x62;
  }
  else {
    iVar2 = param_3 + 1;
    iVar1 = param_2 + 0x61;
  }
  FUN_0048a57e(*(undefined4 *)(param_1 + 0x78),iVar1,iVar2,0x12,0x12);
  if (*(int *)(param_1 + 0x50) == 1) {
    iVar2 = param_3 + 2;
    iVar1 = param_2 + 0x94;
  }
  else {
    iVar2 = param_3 + 1;
    iVar1 = param_2 + 0x93;
  }
  FUN_0048a57e(*(undefined4 *)(param_1 + 0x78),iVar1,iVar2,0x24,0x12);
  if (*(int *)(param_1 + 0x50) == 2) {
    param_3 = param_3 + 2;
    param_2 = param_2 + 0xc6;
  }
  else {
    param_3 = param_3 + 1;
    param_2 = param_2 + 0xc5;
  }
  FUN_0048a57e(*(undefined4 *)(param_1 + 0x78),param_2,param_3,0x36,0x12);
  return;
}



/* vtable 00903118 slot 9 address 0048952c */

/* ADDRESS: 0048952c NAME: FUN_0048952c */

void __thiscall FUN_0048952c(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_28 [24];
  undefined1 uStack_10;
  
  iVar1 = 0;
  if ((0x23 < param_2 - 0x4fU) && (iVar1 = 1, 0x23 < param_2 - 0x81U)) {
    iVar1 = (-(uint)(param_2 - 0xb3U < 0x24) & 3) - 1;
  }
  *(int *)(param_1 + 0x50) = iVar1;
  if (-1 < iVar1) {
    FUN_00489486(iVar1);
    FUN_00488af2("random.click");
    uStack_10 = 0;
    FUN_004f4888(auStack_28,DAT_0088caf0,DAT_0088caf0);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 00903118 slot 10 address 0048924c */

/* ADDRESS: 0048924c NAME: FUN_0048924c */

void __thiscall FUN_0048924c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [40];
  
  if (param_3 < param_1[4]) {
    return;
  }
  if (param_1[5] < param_3) {
    return;
  }
  iVar1 = FUN_004875fc(param_2,param_3);
  iVar2 = *(int *)(param_1[0x1e] + 0xc) / 2;
  if (-1 < iVar1) {
    if (param_2 <= iVar2 + -0x45) {
      return;
    }
    if (iVar2 + -0x30 < param_2) {
      return;
    }
    FUN_004890dc(*(undefined4 *)(param_1[0x15] + iVar1 * 4),param_2,param_3);
    return;
  }
  FUN_00488af2(&DAT_0088cae2);
  if ((iVar2 + -0xc < param_2) && (param_2 <= iVar2 + 7)) {
    iVar1 = *param_1;
    uVar5 = 0;
  }
  else if ((iVar2 + 0x26 < param_2) && (param_2 <= iVar2 + 0x39)) {
    iVar1 = *param_1;
    uVar5 = 1;
  }
  else {
    puVar4 = extraout_ECX;
    if ((param_2 <= iVar2 + 0x58) || (iVar2 + 0x6b < param_2)) goto LAB_00489454;
    iVar1 = *param_1;
    uVar5 = 2;
  }
  uVar5 = (**(code **)(iVar1 + 0x2c))(param_1,uVar5);
  uVar3 = FUN_00488a6a(local_38);
  FUN_0081ffd0(uVar3,uVar5);
  uVar5 = FUN_004fc82e();
  uVar5 = FUN_004fbdd2(uVar5,local_6c);
  uVar3 = FUN_00488a6a(local_38);
  FUN_0081ffd0(uVar3,uVar5);
  FUN_008238d0(local_6c);
  local_3c = 0;
  FUN_00410a19(local_38,local_54);
  FUN_00488a6a(local_38);
  puVar4 = extraout_ECX_00;
  FUN_0081ffd0(extraout_ECX_00);
  FUN_0081ffd0();
  if (local_68 != 0) {
    iVar1 = FUN_0046f612(local_6c);
    FUN_0048a5d4(param_1[0x1e],param_2 + 9,param_3 + -0xf,param_2 + 0xf + iVar1,param_3 + -1,
                 0xc0000000,0xc0000000);
    puVar4 = local_6c;
    FUN_0047046a(puVar4,param_2 + 0xc,param_3 + -0xc,0xffffffff);
  }
LAB_00489454:
  FUN_0081ffd0(puVar4);
  return;
}



/* vtable 00903118 slot 11 address 0048982e */

/* ADDRESS: 0048982e NAME: FUN_0048982e */

undefined4 __thiscall FUN_0048982e(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "stat.crafted";
  }
  else if (param_3 == 1) {
    pcVar1 = "stat.used";
  }
  else {
    pcVar1 = "stat.mined";
  }
  FUN_004897c0(pcVar1);
  return param_1;
}


