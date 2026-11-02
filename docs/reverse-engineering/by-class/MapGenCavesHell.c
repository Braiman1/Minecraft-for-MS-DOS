/* Candidate RTTI class: MapGenCavesHell
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009020e8 slot 0 address 004a07e0 */

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



/* vtable 009020e8 slot 1 address 004a1ed8 */

/* ADDRESS: 004a1ed8 NAME: FUN_004a1ed8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1ed8(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  iVar1 = FUN_0040e7b8(10);
  iVar1 = FUN_0040e7b8(iVar1 + 1);
  iVar2 = FUN_0040e7b8(iVar1 + 1);
  iVar3 = FUN_0040e7b8(5);
  iVar1 = 0;
  if (iVar3 == 0) {
    iVar1 = iVar2;
  }
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    iVar3 = FUN_0040e7b8(0x10);
    dVar11 = (double)(iVar3 + param_2 * 0x10);
    iVar3 = FUN_0040e7b8(0x80);
    iVar4 = FUN_0040e7b8(0x10);
    dVar12 = (double)(iVar4 + param_3 * 0x10);
    iVar4 = FUN_0040e7b8(4);
    iVar5 = 1;
    if (iVar4 == 0) {
      FUN_004a1e16(param_4,param_5,param_6,dVar11,(double)iVar3,dVar12);
      iVar5 = FUN_0040e7b8(4);
      iVar5 = iVar5 + 1;
    }
    for (iVar4 = 0; iVar4 < iVar5; iVar4 = iVar4 + 1) {
      fVar6 = (float10)FUN_0040e898();
      fVar10 = (float)fVar6 * _DAT_0088f030;
      fVar6 = (float10)FUN_0040e898();
      fVar8 = (((float)fVar6 - DAT_0088f058) + ((float)fVar6 - DAT_0088f058)) * _DAT_0088f094;
      fVar6 = (float10)FUN_0040e898();
      fVar7 = (float10)FUN_0040e898();
      fVar9 = (float)fVar6 + (float)fVar6 + (float)fVar7;
      FUN_004a159a(param_4,param_5,param_6,dVar11,(double)iVar3,dVar12,fVar9 + fVar9,fVar10 + fVar10
                   ,fVar8,0,0,0,0x3fe00000);
    }
  }
  return;
}


