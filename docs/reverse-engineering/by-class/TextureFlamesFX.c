/* Candidate RTTI class: TextureFlamesFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902170 slot 0 address 00774be4 */

/* ADDRESS: 00774be4 NAME: FUN_00774be4 */

void FUN_00774be4(void)

{
  return;
}



/* vtable 00902170 slot 1 address 00774bcc */

/* ADDRESS: 00774bcc NAME: FUN_00774bcc */

void __fastcall FUN_00774bcc(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902170 slot 2 address 004fedc8 */

/* ADDRESS: 004fedc8 NAME: FUN_004fedc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fedc8(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_24;
  
  iVar7 = 0;
  do {
    iVar10 = iVar7;
    iVar11 = 0;
    while( true ) {
      fVar16 = DAT_00895dbc *
               *(float *)(param_1 + 8 + (iVar7 + 0x104 + ((iVar11 + 1) % 0x14) * 0x10) * 4);
      for (uVar6 = iVar7 - 1; uVar6 != iVar7 + 2U; uVar6 = uVar6 + 1) {
        for (iVar4 = iVar11; iVar4 != iVar11 + 2; iVar4 = iVar4 + 1) {
          if (((0x20001U >> (uVar6 + 1 & 0x1f) & 1) == 0) && (iVar4 != 0x14)) {
            fVar16 = fVar16 + *(float *)(param_1 + uVar6 * 4 + 0x418 + iVar4 * 0x40);
          }
        }
      }
      *(float *)(param_1 + 0x918 + iVar10 * 4) = fVar16 / _DAT_00895dc0;
      if (iVar11 == 0x13) break;
      iVar10 = iVar10 + 0x10;
      iVar11 = iVar11 + 1;
    }
    fVar12 = (float10)FUN_0040e620();
    iVar7 = iVar7 + 1;
    fVar13 = (float10)FUN_0040e620();
    fVar14 = (float10)FUN_0040e620();
    fVar15 = (float10)FUN_0040e620();
    *(float *)(param_1 + 0x918 + iVar10 * 4) =
         (float)((double)fVar12 * (double)fVar13 * (double)fVar14 * _DAT_00895dc8 +
                 DAT_00895dd0 * (double)fVar15 + _DAT_00895dd8);
  } while (iVar7 != 0x10);
  iVar7 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar7 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar7 * 4) = *(undefined4 *)(param_1 + 0x918 + iVar7 * 4);
    *(undefined4 *)(param_1 + 0x918 + iVar7 * 4) = uVar1;
    fVar16 = DAT_00895db8;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x140);
  cVar2 = *(char *)(param_1 + 0x408);
  puVar8 = (undefined1 *)(param_1 + 4);
  do {
    fVar17 = DAT_00895de0 * *(float *)(puVar8 + 0x414);
    fVar18 = fVar16;
    if ((fVar17 <= fVar16) && (fVar18 = fVar17, fVar17 < 0.0)) {
      fVar18 = 0.0;
    }
    iVar7 = (int)(DAT_00895de4 * fVar18 + _DAT_00895de8);
    iVar11 = (int)(fVar18 * fVar18 * DAT_00895dec);
    iVar10 = (int)(fVar18 * fVar18 * fVar18 * fVar18 * fVar18 * fVar18 * fVar18 * fVar18 * fVar18 *
                   fVar18 * DAT_00895dec);
    bVar3 = fVar18 < DAT_00895df0;
    if (cVar2 != '\0') {
      iVar4 = iVar7 * 0x1e;
      iVar5 = iVar4 + iVar11 * 0x3b;
      iVar7 = (iVar10 * 0xb + iVar5) / 100;
      iVar11 = (iVar11 * 0xb + iVar5) / 100;
      iVar10 = (iVar10 * 0x46 + iVar4) / 100;
    }
    local_24 = (undefined1)iVar7;
    puVar8[2] = (char)iVar10;
    puVar9 = puVar8 + 4;
    *puVar8 = local_24;
    puVar8[1] = (char)iVar11;
    puVar8[3] = bVar3 + -1;
    puVar8 = puVar9;
  } while (puVar9 != (undefined1 *)(param_1 + 0x404));
  return;
}



/* vtable 00902170 slot 3 address 004fecd8 */

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


