/* Candidate RTTI class: RenderPainting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901264 slot 0 address 0077472c */

/* ADDRESS: 0077472c NAME: thunk_FUN_00774734 */

void thunk_FUN_00774734(void)

{
  FUN_00774734();
  return;
}



/* vtable 00901264 slot 1 address 00774708 */

/* ADDRESS: 00774708 NAME: FUN_00774708 */

void __fastcall FUN_00774708(void *param_1)

{
  FUN_00774734();
  free(param_1);
  return;
}



/* vtable 00901264 slot 2 address 004e9056 */

/* ADDRESS: 004e9056 NAME: thunk_FUN_004e8592 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004e8592(int param_1,undefined4 param_2,undefined4 param_3,double param_4,
                       double param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  
  (*DAT_0145d020)();
  fVar12 = (float)param_5;
  fVar10 = (float)param_4;
  (*DAT_0145ce94)();
  (*DAT_0145cf88)(param_6,0,0x3f800000,0,fVar10,fVar12);
  (*DAT_0145d248)(0x803a);
  FUN_008220b0();
  FUN_004c4c12();
  FUN_0081ffd0();
  iVar7 = *(int *)(param_1 + 0x1c0);
  if (iVar7 != 0) {
    (*DAT_0145cf80)(DAT_00892f5c,DAT_00892f5c,DAT_00892f5c);
    iVar1 = *(int *)(iVar7 + 0x1c);
    iVar2 = *(int *)(iVar7 + 0x28);
    iVar3 = *(int *)(iVar7 + 0x20);
    fVar10 = (float)-iVar1 * DAT_00892f60;
    fVar12 = (float)-iVar3 * DAT_00892f60;
    iVar7 = iVar1 + *(int *)(iVar7 + 0x24);
    for (iVar4 = 0; iVar4 < iVar1 / 0x10; iVar4 = iVar4 + 1) {
      iVar8 = 0;
      iVar6 = iVar3 + iVar2;
      while (iVar8 < iVar3 / 0x10) {
        iVar8 = iVar8 + 1;
        fVar14 = (float)(iVar4 * 0x10 + 0x10) + fVar10;
        fVar9 = (float)(iVar4 * 0x10) + fVar10;
        fVar11 = (float)(iVar8 * 0x10) + fVar12;
        fVar13 = (float)(iVar8 * 0x10 + -0x10) + fVar12;
        FUN_004e8432(param_1,(fVar14 + fVar9) * DAT_00892f60,(fVar11 + fVar13) * DAT_00892f60);
        fVar17 = (float)iVar7 * _DAT_00892f64;
        fVar23 = (float)iVar6 * _DAT_00892f64;
        fVar18 = (float)(iVar7 + -0x10) * _DAT_00892f64;
        fVar20 = _DAT_00892f64 * (float)(iVar6 + -0x10);
        FUN_004fe3cc();
        FUN_004fe756(0,0,0xbf800000);
        dVar19 = (double)fVar18;
        dVar15 = (double)fVar13;
        dVar16 = (double)fVar14;
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,dVar19,(double)fVar23);
        dVar21 = (double)fVar9;
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,(double)fVar17,(double)fVar23);
        dVar24 = (double)fVar11;
        dVar22 = (double)fVar20;
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,(double)fVar17,dVar22);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,dVar19,dVar22);
        FUN_004fe756(0,0,0x3f800000);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe80000,0,0);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fea0000,0,0);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fea0000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe80000,0,0x3fb00000);
        FUN_004fe756(0,0xbf800000,0);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe756(0,0x3f800000,0);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe756(0xbf800000,0,0);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe81000,0,0);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,0,0x3fe81000,0,0);
        FUN_004fe756(0x3f800000,0,0);
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,0,0x3fe81000,0,0);
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fe81000,0,0);
        FUN_004fe0c4();
        iVar6 = iVar6 + -0x10;
      }
      iVar7 = iVar7 + -0x10;
    }
  }
  uVar5 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar5);
  return;
}


