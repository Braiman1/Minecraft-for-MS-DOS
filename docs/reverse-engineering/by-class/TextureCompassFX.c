/* Candidate RTTI class: TextureCompassFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902a2c slot 0 address 007754b0 */

/* ADDRESS: 007754b0 NAME: FUN_007754b0 */

void FUN_007754b0(void)

{
  return;
}



/* vtable 00902a2c slot 1 address 00775498 */

/* ADDRESS: 00775498 NAME: FUN_00775498 */

void __fastcall FUN_00775498(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902a2c slot 2 address 004fe820 */

/* ADDRESS: 004fe820 NAME: FUN_004fe820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fe820(int param_1)

{
  float fVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float10 fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_54;
  uint local_48;
  undefined1 local_44;
  double local_3c;
  double local_34;
  int local_28;
  int local_20;
  
  cVar2 = *(char *)(param_1 + 0x408);
  puVar10 = (undefined1 *)(param_1 + 4);
  do {
    uVar9 = *(uint *)(puVar10 + 0x418);
    uVar8 = uVar9 >> 8 & 0xff;
    uVar7 = uVar9 & 0xff;
    local_48 = (int)uVar9 >> 0x10 & 0xff;
    if (cVar2 != '\0') {
      iVar5 = local_48 * 0x1e;
      iVar6 = iVar5 + uVar8 * 0x3b;
      local_48 = (uVar7 * 0xb + iVar6) / 100;
      uVar8 = (uVar8 * 0xb + iVar6) / 100;
      uVar7 = (uVar7 * 0x46 + iVar5) / 100;
    }
    puVar10[1] = (char)uVar8;
    puVar11 = puVar10 + 4;
    *puVar10 = (undefined1)local_48;
    local_44 = (undefined1)uVar7;
    puVar10[2] = local_44;
    local_54 = (undefined1)(uVar9 >> 0x18);
    puVar10[3] = local_54;
    puVar10 = puVar11;
  } while ((undefined1 *)(param_1 + 0x404) != puVar11);
  dVar13 = 0.0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x418) + 0x10);
  if ((iVar5 != 0) && (*(int *)(*(int *)(param_1 + 0x418) + 0x18) != 0)) {
    FUN_0050e3f0(iVar5);
    iVar5 = *(int *)(param_1 + 0x418);
    iVar6 = *(int *)(iVar5 + 0x18);
    fVar1 = *(float *)(iVar6 + 0x70);
    fVar12 = (float10)FUN_007670c0((double)local_20 - *(double *)(iVar6 + 0x50),
                                   (double)local_28 - *(double *)(iVar6 + 0x40));
    if (*(char *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x104) + 0xc) == '\0') {
      dVar13 = ((double)(fVar1 - _DAT_00895d30) * _DAT_00895d38) / _DAT_00895d40 - (double)fVar12;
    }
    else {
      fVar12 = (float10)FUN_0040e620();
      dVar13 = (double)fVar12 * _DAT_00895d48 + (double)fVar12 * _DAT_00895d48;
    }
  }
  for (dVar13 = dVar13 - *(double *)(param_1 + 0x820); dVar13 < DAT_00895d58;
      dVar13 = dVar13 + _DAT_00895d50) {
  }
  for (; _DAT_00895d38 <= dVar13; dVar13 = dVar13 - _DAT_00895d50) {
  }
  dVar15 = DAT_00895d28;
  if ((DAT_00895d28 <= dVar13) && (dVar15 = DAT_00895d60, dVar13 <= DAT_00895d60)) {
    dVar15 = dVar13;
  }
  dVar13 = (dVar15 * _DAT_00895d68 + *(double *)(param_1 + 0x828)) * _DAT_00895d70;
  *(double *)(param_1 + 0x828) = dVar13;
  dVar13 = dVar13 + *(double *)(param_1 + 0x820);
  FUN_00766f50(dVar13,&local_34,&local_3c);
  iVar5 = -4;
  *(double *)(param_1 + 0x820) = dVar13;
  dVar13 = DAT_00895d78;
  do {
    dVar4 = _DAT_00895d90;
    dVar3 = DAT_00895d88;
    dVar15 = DAT_00895d80;
    dVar14 = (double)iVar5;
    iVar5 = iVar5 + 1;
    iVar6 = (int)(DAT_00895d88 - dVar14 * local_34 * dVar13 * DAT_00895d80) * 0x10 +
            (int)(dVar14 * local_3c * dVar13 + _DAT_00895d90);
    *(undefined1 *)(param_1 + 4 + iVar6 * 4) = 100;
    *(undefined1 *)(param_1 + 5 + iVar6 * 4) = 100;
    *(undefined1 *)(param_1 + 6 + iVar6 * 4) = 100;
    *(undefined1 *)(param_1 + 7 + iVar6 * 4) = 0xff;
  } while (iVar5 != 5);
  cVar2 = *(char *)(param_1 + 0x408);
  iVar5 = -8;
  do {
    iVar6 = (int)((double)iVar5 * local_3c * dVar13 * dVar15 + dVar3) * 0x10 +
            (int)((double)iVar5 * local_34 * dVar13 + dVar4);
    if (iVar5 < 0) {
      uVar7 = 100;
      uVar9 = 100;
    }
    else {
      uVar7 = 0xff;
      uVar9 = 0x14;
    }
    if (cVar2 != '\0') {
      uVar7 = (uVar7 * 0x1e + uVar9 * 0x46) / 100;
      uVar9 = uVar7;
    }
    iVar5 = iVar5 + 1;
    *(char *)(param_1 + 4 + iVar6 * 4) = (char)uVar7;
    *(char *)(param_1 + 5 + iVar6 * 4) = (char)uVar9;
    *(char *)(param_1 + 6 + iVar6 * 4) = (char)uVar9;
    *(undefined1 *)(param_1 + 7 + iVar6 * 4) = 0xff;
  } while (iVar5 != 0x11);
  return;
}



/* vtable 00902a2c slot 3 address 004fecd8 */

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


