/* Candidate RTTI class: RenderItem
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb554 slot 0 address 007714e8 */

/* ADDRESS: 007714e8 NAME: thunk_FUN_007714f0 */

void thunk_FUN_007714f0(void)

{
  FUN_007714f0();
  return;
}



/* vtable 008fb554 slot 1 address 007714c4 */

/* ADDRESS: 007714c4 NAME: FUN_007714c4 */

void __fastcall FUN_007714c4(void *param_1)

{
  FUN_007714f0();
  free(param_1);
  return;
}



/* vtable 008fb554 slot 2 address 004e433e */

/* ADDRESS: 004e433e NAME: thunk_FUN_004e3be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e3be8(int param_1,int *param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_EDX;
  float10 fVar10;
  float10 extraout_ST0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  int iStack_50;
  undefined1 auStack_34 [36];
  
  FUN_0040e684(0xbb,0);
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar7 = param_2[0x6c];
  if (iVar7 == 0) {
    return;
  }
  cVar4 = FUN_00498352();
  if (cVar4 == '\0') {
    return;
  }
  piVar5 = (int *)FUN_004983a6();
  if (piVar5 == (int *)0x0) {
    return;
  }
  FUN_0076f84c();
  fVar10 = (float10)FUN_004a3d32(((float)param_2[0x6d] + param_7) / DAT_00892ce0 +
                                 (float)param_2[0x6f]);
  fVar14 = (float)param_2[0x6f];
  iVar6 = *(int *)param_2[0x6c];
  iVar1 = param_2[0x6d];
  iStack_50 = 1;
  if (((1 < iVar6) && (iStack_50 = 2, 5 < iVar6)) && (iStack_50 = 4, iVar6 < 0x15)) {
    iStack_50 = 3;
  }
  FUN_0076f818((float)param_3,(float)param_4 + (float)fVar10 * _DAT_00892ce4 + _DAT_00892ce4,
               (float)param_5);
  (*DAT_0145d248)(0x803a);
  if ((*(uint *)(iVar7 + 8) < 0x100) && ((int *)(&DAT_00a07120)[*(uint *)(iVar7 + 8)] != (int *)0x0)
     ) {
    uVar8 = (**(code **)(*(int *)(&DAT_00a07120)[*(uint *)(iVar7 + 8)] + 0x1c))(extraout_EDX);
    cVar4 = FUN_004cdb64(uVar8);
    if (cVar4 != '\0') {
      FUN_0076f4b8((((float)iVar1 + param_7) / _DAT_00892cec + fVar14) * _DAT_00892cf0,0,0x3f800000,
                   0);
      FUN_004e36b4("/terrain.png");
      uVar8 = FUN_004c4c12(auStack_34);
      FUN_0081ffd0(uVar8);
      cVar4 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar7 + 8)] + 0x18))();
      if ((cVar4 == '\0') && (*(int *)(iVar7 + 8) != *(int *)(DAT_00a06270 + 8))) {
        iVar6 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar7 + 8)] + 0x1c))();
        fVar14 = _DAT_00892cdc;
        if (iVar6 == 0x10) goto LAB_004e3e15;
      }
      else {
LAB_004e3e15:
        fVar14 = _DAT_00892cd8;
      }
      iVar6 = 0;
      FUN_0076f484(fVar14,fVar14,fVar14);
      FUN_0076f84c();
      while( true ) {
        iVar6 = iVar6 + 1;
        uVar8 = (**(code **)(*param_2 + 0x50))(param_7);
        uVar8 = FUN_0049870e(uVar8);
        FUN_004ccaf6((&DAT_00a07120)[*(int *)(iVar7 + 8)],uVar8,(float)extraout_ST0);
        FUN_0076f810();
        if (iStack_50 == iVar6) break;
        FUN_0076f84c();
        fVar10 = (float10)FUN_0040e898();
        fVar15 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4;
        fVar10 = (float10)FUN_0040e898();
        fVar16 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4;
        fVar10 = (float10)FUN_0040e898();
        FUN_0076f818(fVar15 / fVar14,fVar16 / fVar14,
                     ((((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4) / fVar14);
      }
      goto LAB_004e4309;
    }
  }
  FUN_0076f484(_DAT_00892cdc,_DAT_00892cdc,_DAT_00892cdc);
  iVar6 = FUN_004983c8();
  if (*(int *)(iVar7 + 8) < 0x100) {
    FUN_004e36b4("/terrain.png");
    FUN_004c4c12(auStack_34);
  }
  else {
    FUN_004e36b4("/gui/items.png");
    FUN_004c4c12(auStack_34);
  }
  FUN_0081ffd0(auStack_34);
  iVar7 = (iVar6 % 0x10) * 0x10;
  fVar14 = (float)iVar7 * _DAT_00892cf8;
  iVar6 = iVar6 - iVar6 % 0x10;
  fVar15 = (float)(iVar7 + 0x10) * _DAT_00892cf8;
  fVar16 = (float)iVar6 * _DAT_00892cf8;
  fVar17 = (float)(iVar6 + 0x10) * _DAT_00892cf8;
  if (*(char *)(param_1 + 0x14) != '\0') {
    pcVar2 = *(code **)(*piVar5 + 0x4c);
    uVar8 = FUN_0049870e();
    uVar9 = (*pcVar2)(uVar8);
    fVar11 = (float)((int)uVar9 >> 0x10 & 0xff) / DAT_00892cfc;
    fVar18 = (float)(uVar9 & 0xff) / DAT_00892cfc;
    fVar12 = (float)(uVar9 >> 8 & 0xff) / DAT_00892cfc;
    fVar10 = (float10)(**(code **)(*param_2 + 0x50))(param_7);
    fVar13 = (float)fVar10;
    FUN_0076f5c8(fVar13 * fVar11,fVar12 * fVar13,fVar18 * fVar13,0x3f800000);
  }
  FUN_0076f84c();
  iVar7 = 0;
  while( true ) {
    iVar7 = iVar7 + 1;
    FUN_0076f4b8(_DAT_00892d00 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
    FUN_004fe3cc();
    FUN_004fe756(0,0x3f800000,0);
    dVar3 = (double)fVar14;
    dVar20 = (double)fVar17;
    FUN_004fe6a6(0,0xbfe00000,0,0xbfd00000,0,0,dVar3,dVar20);
    dVar19 = (double)fVar15;
    FUN_004fe6a6(0,0x3fe00000,0,0xbfd00000,0,0,dVar19,dVar20);
    dVar20 = (double)fVar16;
    FUN_004fe6a6(0,0x3fe00000,0,0x3fe80000,0,0,dVar19,dVar20);
    FUN_004fe6a6(0,0xbfe00000,0,0x3fe80000,0,0,dVar3,dVar20);
    FUN_004fe0c4();
    FUN_0076f810();
    if (iStack_50 == iVar7) break;
    FUN_0076f84c();
    fVar10 = (float10)FUN_0040e898();
    fVar13 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04;
    fVar10 = (float10)FUN_0040e898();
    fVar11 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04;
    fVar10 = (float10)FUN_0040e898();
    FUN_0076f818(fVar13,fVar11,(((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04);
  }
LAB_004e4309:
  uVar8 = (*DAT_0145d26c)(0x803a);
  FUN_0076f810(uVar8);
  return;
}


