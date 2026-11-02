/* Candidate RTTI class: TextureLavaFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff54c slot 0 address 00773f58 */

/* ADDRESS: 00773f58 NAME: FUN_00773f58 */

void FUN_00773f58(void)

{
  return;
}



/* vtable 008ff54c slot 1 address 00773f40 */

/* ADDRESS: 00773f40 NAME: FUN_00773f40 */

void __fastcall FUN_00773f40(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008ff54c slot 2 address 004ff074 */

/* ADDRESS: 004ff074 NAME: FUN_004ff074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ff074(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_2c;
  uint local_20;
  
  iVar5 = 0;
  do {
    iVar8 = param_1 + iVar5 * 4;
    local_20 = 0;
    do {
      fVar9 = (float10)FUN_004a3d32(((float)(int)local_20 * _DAT_00895dfc +
                                    (float)(int)local_20 * _DAT_00895dfc) * _DAT_00895e00);
      fVar10 = DAT_00895e04 * (float)fVar9;
      fVar9 = (float10)FUN_004a3d32(((float)iVar5 * _DAT_00895dfc + (float)iVar5 * _DAT_00895dfc) *
                                    _DAT_00895e00);
      fVar12 = 0.0;
      for (local_2c = iVar5 + -1; local_2c != iVar5 + 2; local_2c = local_2c + 1) {
        for (iVar4 = local_20 - 1; iVar4 != local_20 + 2; iVar4 = iVar4 + 1) {
          fVar12 = fVar12 + *(float *)(param_1 + 8 +
                                      (((int)(DAT_00895e04 * (float)fVar9) + iVar4 & 0xfU) * 0x10 +
                                       0x104 + ((int)fVar10 + local_2c & 0xfU)) * 4);
        }
      }
      local_20 = local_20 + 1;
      iVar4 = (local_20 & 0xf) * 0x10;
      *(float *)(iVar8 + 0x818) =
           (*(float *)(iVar8 + 0xc18 + ((iVar5 + 1U & 0xf) - iVar5) * 4) + *(float *)(iVar8 + 0xc18)
            + *(float *)(param_1 + 8 + (iVar4 + 0x304 + (iVar5 + 1U & 0xf)) * 4) +
           *(float *)(param_1 + 8 + (iVar4 + 0x304 + iVar5) * 4)) * _DAT_00895e08 * _DAT_00895e0c +
           fVar12 / _DAT_00895e10;
      fVar10 = DAT_00895e14 * *(float *)(iVar8 + 0x1018) + *(float *)(iVar8 + 0xc18);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      fVar12 = *(float *)(iVar8 + 0x1018) - _DAT_00895e18;
      *(float *)(iVar8 + 0xc18) = fVar10;
      *(float *)(iVar8 + 0x1018) = fVar12;
      fVar9 = (float10)FUN_0040e620();
      if ((double)fVar9 < DAT_00895e20) {
        *(undefined4 *)(iVar8 + 0x1018) = 0x3fc00000;
      }
      iVar8 = iVar8 + 0x40;
    } while (local_20 != 0x10);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x10);
  iVar5 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar5 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar5 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar5 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar5 * 4) = uVar1;
    fVar10 = DAT_00895df8;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  puVar6 = (undefined1 *)(param_1 + 4);
  do {
    fVar11 = *(float *)(puVar6 + 0x414) + *(float *)(puVar6 + 0x414);
    fVar12 = fVar10;
    if ((fVar11 <= fVar10) && (fVar12 = fVar11, fVar11 < 0.0)) {
      fVar12 = 0.0;
    }
    local_20 = (uint)(DAT_00895e28 * fVar12 + _DAT_00895e2c);
    iVar5 = (int)(DAT_00895e30 * fVar12 * fVar12);
    iVar8 = (int)(fVar12 * fVar12 * fVar12 * fVar12 * _DAT_00895e34);
    if (cVar2 != '\0') {
      iVar4 = local_20 * 0x1e;
      iVar3 = iVar4 + iVar5 * 0x3b;
      local_20 = (iVar8 * 0xb + iVar3) / 100;
      iVar5 = (iVar5 * 0xb + iVar3) / 100;
      iVar8 = (iVar8 * 0x46 + iVar4) / 100;
    }
    puVar6[1] = (char)iVar5;
    puVar7 = puVar6 + 4;
    puVar6[2] = (char)iVar8;
    *puVar6 = (undefined1)local_20;
    puVar6[3] = 0xff;
    puVar6 = puVar7;
  } while (puVar7 != (undefined1 *)(param_1 + 0x404));
  return;
}



/* vtable 008ff54c slot 3 address 004fecd8 */

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


