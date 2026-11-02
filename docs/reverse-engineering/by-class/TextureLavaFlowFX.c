/* Candidate RTTI class: TextureLavaFlowFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903294 slot 0 address 007757d8 */

/* ADDRESS: 007757d8 NAME: FUN_007757d8 */

void FUN_007757d8(void)

{
  return;
}



/* vtable 00903294 slot 1 address 007757c0 */

/* ADDRESS: 007757c0 NAME: FUN_007757c0 */

void __fastcall FUN_007757c0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903294 slot 2 address 004ff38c */

/* ADDRESS: 004ff38c NAME: FUN_004ff38c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ff38c(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_2c;
  uint local_20;
  
  iVar7 = 0;
  *(int *)(param_1 + 0x1418) = *(int *)(param_1 + 0x1418) + 1;
  do {
    iVar8 = param_1 + iVar7 * 4;
    local_20 = 0;
    do {
      fVar9 = (float10)FUN_004a3d32(((float)(int)local_20 * _DAT_00895e3c +
                                    (float)(int)local_20 * _DAT_00895e3c) * _DAT_00895e40);
      fVar10 = DAT_00895e44 * (float)fVar9;
      fVar9 = (float10)FUN_004a3d32(((float)iVar7 * _DAT_00895e3c + (float)iVar7 * _DAT_00895e3c) *
                                    _DAT_00895e40);
      fVar12 = 0.0;
      for (local_2c = iVar7 + -1; local_2c != iVar7 + 2; local_2c = local_2c + 1) {
        for (iVar5 = local_20 - 1; iVar5 != local_20 + 2; iVar5 = iVar5 + 1) {
          fVar12 = fVar12 + *(float *)(param_1 + 8 +
                                      (((int)(DAT_00895e44 * (float)fVar9) + iVar5 & 0xfU) * 0x10 +
                                       0x104 + ((int)fVar10 + local_2c & 0xfU)) * 4);
        }
      }
      local_20 = local_20 + 1;
      iVar5 = (local_20 & 0xf) * 0x10;
      *(float *)(iVar8 + 0x818) =
           (*(float *)(iVar8 + 0xc18 + ((iVar7 + 1U & 0xf) - iVar7) * 4) + *(float *)(iVar8 + 0xc18)
            + *(float *)(param_1 + 8 + (iVar5 + 0x304 + (iVar7 + 1U & 0xf)) * 4) +
           *(float *)(param_1 + 8 + (iVar5 + 0x304 + iVar7) * 4)) * _DAT_00895e48 * _DAT_00895e4c +
           fVar12 / _DAT_00895e50;
      fVar10 = DAT_00895e54 * *(float *)(iVar8 + 0x1018) + *(float *)(iVar8 + 0xc18);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      fVar12 = *(float *)(iVar8 + 0x1018) - _DAT_00895e58;
      *(float *)(iVar8 + 0xc18) = fVar10;
      *(float *)(iVar8 + 0x1018) = fVar12;
      fVar9 = (float10)FUN_0040e620();
      if ((double)fVar9 < DAT_00895e60) {
        *(undefined4 *)(iVar8 + 0x1018) = 0x3fc00000;
      }
      iVar8 = iVar8 + 0x40;
    } while (local_20 != 0x10);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x10);
  iVar7 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar7 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar7 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar7 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar7 * 4) = uVar1;
    fVar10 = DAT_00895e38;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x1418);
  do {
    fVar12 = *(float *)(param_1 + 0x418 + ((iVar7 / 3) * -0x10 + iVar8 & 0xffU) * 4);
    fVar12 = fVar12 + fVar12;
    fVar11 = fVar10;
    if ((fVar12 <= fVar10) && (fVar11 = fVar12, fVar12 < 0.0)) {
      fVar11 = 0.0;
    }
    iVar5 = (int)(DAT_00895e68 * fVar11 + _DAT_00895e6c);
    local_20 = (uint)(DAT_00895e70 * fVar11 * fVar11);
    iVar6 = (int)(fVar11 * fVar11 * fVar11 * fVar11 * _DAT_00895e74);
    if (cVar2 != '\0') {
      iVar3 = iVar5 * 0x1e;
      iVar4 = iVar3 + local_20 * 0x3b;
      iVar5 = (iVar6 * 0xb + iVar4) / 100;
      local_20 = (int)(local_20 * 0xb + iVar4) / 100;
      iVar6 = (iVar6 * 0x46 + iVar3) / 100;
    }
    local_2c._0_1_ = (undefined1)iVar5;
    *(char *)(param_1 + 6 + iVar8 * 4) = (char)iVar6;
    *(undefined1 *)(param_1 + 7 + iVar8 * 4) = 0xff;
    *(undefined1 *)(param_1 + 4 + iVar8 * 4) = (undefined1)local_2c;
    *(undefined1 *)(param_1 + 5 + iVar8 * 4) = (undefined1)local_20;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x100);
  return;
}



/* vtable 00903294 slot 3 address 004fecd8 */

/* ADDRESS: 004fecd8 NAME: FUN_004fecd8 */

void __fastcall FUN_004fecd8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 *local_24 [2];
  undefined1 local_1c [16];
  
  if (*(int *)(param_1 + 0x414) == 0) {
    local_24[0] = local_1c;
    uVar1 = FUN_004fec7a("/terrain.png","");
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  else {
    if (*(int *)(param_1 + 0x414) != 1) {
      return;
    }
    local_24[0] = local_1c;
    FUN_004fec7a("/gui/items.png","");
    uVar1 = extraout_ECX;
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  FUN_0081ffd0();
  return;
}


