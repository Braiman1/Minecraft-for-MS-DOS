/* Candidate RTTI class: TextureWatchFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009012c0 slot 0 address 007747e4 */

/* ADDRESS: 007747e4 NAME: FUN_007747e4 */

void FUN_007747e4(void)

{
  return;
}



/* vtable 009012c0 slot 1 address 007747cc */

/* ADDRESS: 007747cc NAME: FUN_007747cc */

void __fastcall FUN_007747cc(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009012c0 slot 2 address 00500e04 */

/* ADDRESS: 00500e04 NAME: FUN_00500e04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00500e04(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uStack_58;
  uint uStack_4c;
  double dStack_40;
  double adStack_38 [2];
  
  dVar9 = 0.0;
  if ((*(int *)(*(int *)(param_1 + 0x418) + 0x10) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x418) + 0x18) != 0)) {
    fVar8 = (float10)FUN_0050c854(0x3f800000);
    if (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x418) + 0x10) + 0x104) + 0xc) == '\0') {
      dVar9 = (double)((float)fVar8 * _DAT_008960b8 + (float)fVar8 * _DAT_008960b8);
    }
    else {
      fVar8 = (float10)FUN_0040e620(extraout_ECX);
      dVar9 = (double)fVar8 * _DAT_00896058 + (double)fVar8 * _DAT_00896058;
    }
  }
  for (dVar9 = dVar9 - *(double *)(param_1 + 0xc20); dVar9 < DAT_00896068;
      dVar9 = dVar9 + _DAT_00896060) {
  }
  for (; _DAT_00896070 <= dVar9; dVar9 = dVar9 - _DAT_00896060) {
  }
  dVar10 = DAT_00896050;
  if ((DAT_00896050 <= dVar9) && (dVar10 = DAT_00896078, dVar9 <= DAT_00896078)) {
    dVar10 = dVar9;
  }
  dVar9 = (dVar10 * _DAT_00896080 + *(double *)(param_1 + 0xc28)) * _DAT_00896088;
  dVar10 = *(double *)(param_1 + 0xc20) + dVar9;
  *(double *)(param_1 + 0xc28) = dVar9;
  FUN_00766f50(dVar10,adStack_38,&dStack_40);
  dVar9 = DAT_00896090;
  cVar1 = *(char *)(param_1 + 0x408);
  *(double *)(param_1 + 0xc20) = dVar10;
  uVar3 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x41c + uVar3 * 4);
    uStack_58 = (undefined1)(uVar6 >> 0x18);
    uVar7 = (int)uVar6 >> 0x10 & 0xff;
    uStack_4c = uVar6 >> 8 & 0xff;
    uVar6 = uVar6 & 0xff;
    if (((uVar7 == uVar6) && (uStack_4c == 0)) && (uStack_4c = 0, uVar6 != 0)) {
      dVar10 = (double)(uVar3 & 0xf) / dVar9 - DAT_00896098;
      dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ _UNK_008960a4,
                                SUB84(dVar10,0) ^ _DAT_008960a0);
      dVar11 = (double)((int)uVar3 >> 4) / dVar9 - DAT_00896098;
      uVar2 = *(uint *)(param_1 + 0xc +
                       (((int)((dVar10 * dStack_40 + dVar11 * adStack_38[0] + DAT_00896098) *
                              DAT_008960b0) & 0xfU) + 0x204 +
                       ((int)(((dStack_40 * dVar11 - adStack_38[0] * dVar10) + DAT_00896098) *
                             DAT_008960b0) & 0xfU) * 0x10) * 4);
      uStack_58 = (undefined1)(uVar2 >> 0x18);
      uStack_4c = ((uVar2 >> 8 & 0xff) * uVar7) / 0xff;
      uVar6 = ((uVar2 & 0xff) * uVar7) / 0xff;
      uVar7 = (((int)uVar2 >> 0x10 & 0xffU) * uVar7) / 0xff;
    }
    if (cVar1 != '\0') {
      iVar4 = uVar7 * 0x1e;
      iVar5 = uStack_4c * 0x3b + iVar4;
      uVar7 = (uVar6 * 0xb + iVar5) / 100;
      uStack_4c = (uStack_4c * 0xb + iVar5) / 100;
      uVar6 = (uVar6 * 0x46 + iVar4) / 100;
    }
    uVar2 = uVar3 + 1;
    *(char *)(param_1 + 4 + uVar3 * 4) = (char)uVar7;
    *(char *)(param_1 + 6 + uVar3 * 4) = (char)uVar6;
    *(undefined1 *)(param_1 + 5 + uVar3 * 4) = (undefined1)uStack_4c;
    *(undefined1 *)(param_1 + 7 + uVar3 * 4) = uStack_58;
    uVar3 = uVar2;
  } while (uVar2 != 0x100);
  return;
}



/* vtable 009012c0 slot 3 address 004fecd8 */

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


