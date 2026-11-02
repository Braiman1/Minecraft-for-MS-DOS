/* Candidate RTTI class: MapGenBase
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb440 slot 0 address 004a07e0 */

/* ADDRESS: 004a07e0 NAME: FUN_004a07e0 */

void __thiscall
FUN_004a07e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_44;
  int local_40;
  uint local_20;
  
  uVar1 = param_1[1];
  uVar11 = FUN_0050e3d8();
  FUN_0040e684(uVar11);
  lVar12 = FUN_0040e85a(extraout_EDX,extraout_EDX);
  lVar13 = FUN_0040e85a();
  local_20 = param_4 - uVar1;
  lVar12 = lVar12 + (ulonglong)(uint)-(int)(lVar12 >> 0x3f);
  iVar5 = (int)((ulonglong)lVar12 >> 0x20);
  uVar2 = (uint)lVar12 | 1;
  local_40 = (int)((ulonglong)uVar2 * (ulonglong)local_20 >> 0x20);
  local_40 = local_40 + uVar2 * ((int)local_20 >> 0x1f) + local_20 * iVar5;
  local_44 = (uint)((ulonglong)uVar2 * (ulonglong)local_20);
  lVar13 = lVar13 + (ulonglong)(uint)-(int)(lVar13 >> 0x3f);
  iVar6 = (int)((ulonglong)lVar13 >> 0x20);
  uVar3 = (uint)lVar13 | 1;
  lVar12 = (ulonglong)uVar3 * (ulonglong)(param_5 - uVar1);
  uVar4 = (uint)lVar12;
  for (; (int)local_20 <= (int)(uVar1 + param_4); local_20 = local_20 + 1) {
    uVar8 = local_44 + uVar4;
    uVar9 = local_40 +
            (int)((ulonglong)lVar12 >> 0x20) +
            uVar3 * ((((int)param_5 >> 0x1f) - ((int)uVar1 >> 0x1f)) - (uint)(param_5 < uVar1)) +
            iVar6 * (param_5 - uVar1) + (uint)CARRY4(local_44,uVar4);
    for (iVar7 = param_5 - uVar1; iVar7 <= (int)(uVar1 + param_5); iVar7 = iVar7 + 1) {
      uVar11 = FUN_0050e3d8();
      FUN_0040e684((uint)uVar11 ^ uVar8,(uint)((ulonglong)uVar11 >> 0x20) ^ uVar9);
      (**(code **)(*param_1 + 4))(param_3,local_20,iVar7,param_4,param_5,param_6);
      bVar10 = CARRY4(uVar8,uVar3);
      uVar8 = uVar8 + uVar3;
      uVar9 = uVar9 + iVar6 + (uint)bVar10;
    }
    bVar10 = CARRY4(local_44,uVar2);
    local_44 = local_44 + uVar2;
    local_40 = local_40 + iVar5 + (uint)bVar10;
  }
  return;
}



/* vtable 008fb440 slot 1 address 004a07dc */

/* ADDRESS: 004a07dc NAME: FUN_004a07dc */

void FUN_004a07dc(void)

{
  return;
}


