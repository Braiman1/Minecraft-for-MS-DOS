/* Candidate RTTI class: TextureWaterFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009012d8 slot 0 address 00774800 */

/* ADDRESS: 00774800 NAME: FUN_00774800 */

void FUN_00774800(void)

{
  return;
}



/* vtable 009012d8 slot 1 address 007747e8 */

/* ADDRESS: 007747e8 NAME: FUN_007747e8 */

void __fastcall FUN_007747e8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009012d8 slot 2 address 00501300 */

/* ADDRESS: 00501300 NAME: FUN_00501300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00501300(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack_30;
  
  iVar4 = 0;
  *(int *)(param_1 + 0x1418) = *(int *)(param_1 + 0x1418) + 1;
  fVar13 = DAT_008960c8;
  do {
    iVar6 = 0;
    iVar8 = param_1 + iVar4 * 4;
    do {
      fVar12 = 0.0;
      for (uVar7 = iVar4 - 1; uVar7 != iVar4 + 2U; uVar7 = uVar7 + 1) {
        fVar12 = fVar12 + *(float *)(param_1 + 8 + (iVar6 + 0x104 + (uVar7 & 0xf)) * 4);
      }
      iVar6 = iVar6 + 0x10;
      *(float *)(iVar8 + 0x818) = fVar12 / fVar13 + DAT_008960c4 * *(float *)(iVar8 + 0xc18);
      iVar8 = iVar8 + 0x40;
    } while (iVar6 != 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 0;
  do {
    iVar8 = param_1 + iVar4 * 4;
    iVar6 = 0;
    do {
      fVar13 = DAT_008960cc * *(float *)(iVar8 + 0x1018) + *(float *)(iVar8 + 0xc18);
      if (fVar13 < 0.0) {
        fVar13 = 0.0;
      }
      fVar12 = *(float *)(iVar8 + 0x1018) - _DAT_008960d0;
      *(float *)(iVar8 + 0xc18) = fVar13;
      *(float *)(iVar8 + 0x1018) = fVar12;
      fVar11 = (float10)FUN_0040e620();
      if ((double)fVar11 < DAT_008960d8) {
        *(undefined4 *)(iVar8 + 0x1018) = 0x3f000000;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x40;
    } while (iVar6 != 0x10);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar4 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar4 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar4 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar4 * 4) = uVar1;
    fVar13 = DAT_008960c0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  puVar9 = (undefined1 *)(param_1 + 4);
  do {
    fVar12 = *(float *)(puVar9 + 0x414);
    fVar14 = fVar13;
    if ((fVar12 <= fVar13) && (fVar14 = fVar12, fVar12 < 0.0)) {
      fVar14 = 0.0;
    }
    fVar14 = fVar14 * fVar14;
    iVar4 = (int)(fVar14 * DAT_008960e0 + DAT_008960e0);
    fVar12 = fVar14 * DAT_008960e8 + _DAT_008960ec;
    iVar8 = (int)(DAT_008960e4 * fVar14 + DAT_008960e8);
    uVar3 = 0xff;
    if (cVar2 != '\0') {
      iVar6 = iVar4 * 0x1e;
      iVar5 = iVar6 + iVar8 * 0x3b;
      iVar4 = (iVar5 + 0xaf5) / 100;
      iVar8 = (iVar8 * 0xb + iVar5) / 100;
      uVar3 = (undefined1)((iVar6 + 0x45ba) / 100);
    }
    puVar9[2] = uVar3;
    uStack_30 = (undefined1)(int)fVar12;
    puVar9[1] = (char)iVar8;
    puVar9[3] = uStack_30;
    puVar10 = puVar9 + 4;
    *puVar9 = (char)iVar4;
    puVar9 = puVar10;
  } while (puVar10 != (undefined1 *)(param_1 + 0x404));
  return;
}



/* vtable 009012d8 slot 3 address 004fecd8 */

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


