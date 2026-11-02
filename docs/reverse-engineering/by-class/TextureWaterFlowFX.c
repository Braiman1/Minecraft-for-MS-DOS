/* Candidate RTTI class: TextureWaterFlowFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903a1c slot 0 address 00775b94 */

/* ADDRESS: 00775b94 NAME: FUN_00775b94 */

void FUN_00775b94(void)

{
  return;
}



/* vtable 00903a1c slot 1 address 00775b7c */

/* ADDRESS: 00775b7c NAME: FUN_00775b7c */

void __fastcall FUN_00775b7c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903a1c slot 2 address 00501554 */

/* ADDRESS: 00501554 NAME: FUN_00501554 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00501554(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 uStack_34;
  undefined1 uStack_24;
  
  iVar9 = 0;
  *(int *)(param_1 + 0x1418) = *(int *)(param_1 + 0x1418) + 1;
  do {
    fVar15 = DAT_008960f8;
    uVar10 = 1;
    iVar11 = param_1 + iVar9 * 4;
    do {
      fVar14 = 0.0;
      uVar5 = uVar10 - 3;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
        fVar14 = fVar14 + *(float *)(param_1 + 8 + (iVar9 + 0x104 + (uVar4 & 0xf) * 0x10) * 4);
      } while (uVar5 != uVar10);
      uVar10 = uVar4 + 2;
      *(float *)(iVar11 + 0x818) = fVar14 / fVar15 + DAT_008960f4 * *(float *)(iVar11 + 0xc18);
      iVar11 = iVar11 + 0x40;
    } while (uVar5 != 0x10);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
  iVar9 = 0;
  do {
    iVar11 = param_1 + iVar9 * 4;
    iVar6 = 0;
    do {
      fVar15 = DAT_008960fc * *(float *)(iVar11 + 0x1018) + *(float *)(iVar11 + 0xc18);
      if (fVar15 < 0.0) {
        fVar15 = 0.0;
      }
      fVar14 = *(float *)(iVar11 + 0x1018) - _DAT_00896100;
      *(float *)(iVar11 + 0xc18) = fVar15;
      *(float *)(iVar11 + 0x1018) = fVar14;
      fVar13 = (float10)FUN_0040e620();
      if ((double)fVar13 < DAT_00896108) {
        *(undefined4 *)(iVar11 + 0x1018) = 0x3f000000;
      }
      iVar6 = iVar6 + 1;
      iVar11 = iVar11 + 0x40;
    } while (iVar6 != 0x10);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
  iVar9 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar9 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar9 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar9 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar9 * 4) = uVar1;
    fVar15 = DAT_008960f0;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  iVar11 = 0;
  iVar9 = *(int *)(param_1 + 0x1418);
  do {
    fVar14 = *(float *)(param_1 + 0x418 + (iVar9 * -0x10 + iVar11 & 0xffU) * 4);
    fVar16 = fVar15;
    if ((fVar14 <= fVar15) && (fVar16 = fVar14, fVar14 < 0.0)) {
      fVar16 = 0.0;
    }
    fVar16 = fVar16 * fVar16;
    iVar6 = (int)(fVar16 * DAT_00896110 + DAT_00896110);
    fVar14 = fVar16 * DAT_00896118 + _DAT_0089611c;
    iVar12 = (int)(DAT_00896114 * fVar16 + DAT_00896118);
    uVar3 = 0xff;
    if (cVar2 != '\0') {
      iVar7 = iVar6 * 0x1e;
      iVar8 = iVar7 + iVar12 * 0x3b;
      iVar6 = (iVar8 + 0xaf5) / 100;
      iVar12 = (iVar12 * 0xb + iVar8) / 100;
      uVar3 = (undefined1)((iVar7 + 0x45ba) / 100);
    }
    uStack_24 = (undefined1)iVar6;
    *(undefined1 *)(param_1 + 6 + iVar11 * 4) = uVar3;
    uStack_34 = (undefined1)(int)fVar14;
    *(undefined1 *)(param_1 + 4 + iVar11 * 4) = uStack_24;
    *(undefined1 *)(param_1 + 7 + iVar11 * 4) = uStack_34;
    *(char *)(param_1 + 5 + iVar11 * 4) = (char)iVar12;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x100);
  return;
}



/* vtable 00903a1c slot 3 address 004fecd8 */

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


