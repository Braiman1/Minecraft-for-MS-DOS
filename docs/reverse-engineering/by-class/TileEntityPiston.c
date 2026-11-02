/* Candidate RTTI class: TileEntityPiston
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902a44 slot 0 address 007754cc */

/* ADDRESS: 007754cc NAME: FUN_007754cc */

void FUN_007754cc(void)

{
  return;
}



/* vtable 00902a44 slot 1 address 007754b4 */

/* ADDRESS: 007754b4 NAME: FUN_007754b4 */

void __fastcall FUN_007754b4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902a44 slot 2 address 00507a20 */

/* ADDRESS: 00507a20 NAME: FUN_00507a20 */

void __thiscall FUN_00507a20(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar2;
  undefined8 uVar3;
  undefined1 local_38 [40];
  
  FUN_0050538c(param_2);
  FUN_00778584("blockId");
  uVar3 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x18) = (int)uVar3;
  FUN_0081ffd0((int)((ulonglong)uVar3 >> 0x20));
  FUN_00778584("blockData");
  uVar3 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x1c) = (int)uVar3;
  FUN_0081ffd0((int)((ulonglong)uVar3 >> 0x20));
  FUN_00778584("facing");
  uVar3 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x20) = (int)uVar3;
  FUN_0081ffd0((int)((ulonglong)uVar3 >> 0x20));
  FUN_00778584("progress");
  fVar2 = (float10)FUN_004ad9f2(local_38);
  *(float *)(param_1 + 0x28) = (float)fVar2;
  *(float *)(param_1 + 0x2c) = (float)fVar2;
  FUN_0081ffd0(extraout_ECX);
  FUN_00778584("extending");
  uVar1 = FUN_004ad86a(local_38);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  FUN_0081ffd0(extraout_EDX);
  return;
}



/* vtable 00902a44 slot 3 address 00507b20 */

/* ADDRESS: 00507b20 NAME: FUN_00507b20 */

void __thiscall FUN_00507b20(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 auStack_38 [40];
  
  FUN_005054da(param_2);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  FUN_00778584("blockId");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  FUN_00778584("blockData");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_00778584("facing");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  FUN_00778584("progress");
  FUN_004ae49c(auStack_38,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  FUN_00778584("extending");
  uVar2 = FUN_004ae36e(auStack_38,uVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* vtable 00902a44 slot 4 address 00507f20 */

/* ADDRESS: 00507f20 NAME: FUN_00507f20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00507f20(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  fVar5 = DAT_00896620;
  fVar1 = *(float *)(param_1 + 0x28);
  bVar2 = fVar1 < DAT_00896620;
  *(float *)(param_1 + 0x2c) = fVar1;
  if (bVar2) {
    uVar4 = -(uint)(fVar5 <= DAT_00896624 + fVar1);
    fVar5 = (float)(~uVar4 & (uint)(DAT_00896624 + fVar1) | (uint)fVar5 & uVar4);
    *(float *)(param_1 + 0x28) = fVar5;
    if (*(char *)(param_1 + 0x24) != '\0') {
      FUN_00507e2e(fVar5,(fVar5 - fVar1) + _DAT_00896628);
    }
  }
  else {
    FUN_00507e2e(fVar5,0x3e800000);
    FUN_005122e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x14) = 1;
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 8))
                      (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x10));
    if (iVar3 == *(int *)(DAT_00a06290 + 8)) {
      FUN_0050b8ba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x1c));
    }
  }
  return;
}



/* vtable 00902a44 slot 5 address 00507a1c */

/* ADDRESS: 00507a1c NAME: FUN_00507a1c */

undefined4 __fastcall FUN_00507a1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* vtable 00902a44 slot 6 address 0050522c */

/* ADDRESS: 0050522c NAME: FUN_0050522c */

void __fastcall FUN_0050522c(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_0050d8de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_1);
  return;
}


