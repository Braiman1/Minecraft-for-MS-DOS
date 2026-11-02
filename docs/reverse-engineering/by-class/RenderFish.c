/* Candidate RTTI class: RenderFish
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb540 slot 0 address 007714b0 */

/* ADDRESS: 007714b0 NAME: thunk_FUN_007714b8 */

void thunk_FUN_007714b8(void)

{
  FUN_007714b8();
  return;
}



/* vtable 008fb540 slot 1 address 0077148c */

/* ADDRESS: 0077148c NAME: FUN_0077148c */

void __fastcall FUN_0077148c(void *param_1)

{
  FUN_007714b8();
  free(param_1);
  return;
}



/* vtable 008fb540 slot 2 address 004dc3d2 */

/* ADDRESS: 004dc3d2 NAME: thunk_FUN_004dbcd6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004dbcd6(int param_1,int param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double *pdVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(_DAT_008926e0,_DAT_008926e0,_DAT_008926e0);
  puStack_48 = auStack_40;
  FUN_008220b0(puStack_48,"/particles.png",0xe);
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar7 = FUN_004c4c12(&puStack_48);
  FUN_0081ffd0(uVar7);
  (*DAT_0145cf88)(_DAT_008926e4 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_008926f0,0x3f800000,0,0);
  FUN_004fe3cc();
  FUN_004fe756();
  FUN_004fe6a6();
  FUN_004fe6a6();
  FUN_004fe6a6();
  uVar23 = 0;
  uVar21 = 0;
  uVar24 = 0x3fc00000;
  uVar22 = 0x3fb00000;
  uVar19 = 0;
  uVar20 = 0;
  uVar18 = 0x3fe00000;
  uVar17 = 0xbfe00000;
  FUN_004fe6a6();
  FUN_004fe0c4();
  uVar16 = 0x803a;
  uVar7 = (*DAT_0145d26c)();
  (*DAT_0145d034)(uVar7,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24);
  iVar9 = *(int *)(param_2 + 0x1c8);
  if (iVar9 != 0) {
    fVar12 = ((*(float *)(iVar9 + 0x78) +
              (*(float *)(iVar9 + 0x70) - *(float *)(iVar9 + 0x78)) * param_7) * _DAT_00892708) /
             _DAT_008926e4;
    FUN_004a3d32(fVar12);
    FUN_004a3d60(fVar12);
    fVar10 = (float10)FUN_00459a92(param_7);
    fVar10 = (float10)FUN_004a3d96((float)fVar10);
    fVar10 = (float10)FUN_004a3d32(_DAT_00892708 * (float)fVar10);
    pdVar8 = (double *)FUN_00509e86(0,0xbfe00000,0xeb851eb8,0x3f9eb851,0x9999999a,0x3fe99999);
    fVar12 = *(float *)(*(int *)(param_2 + 0x1c8) + 0x7c);
    FUN_00509da4(((float)((uint)((*(float *)(*(int *)(param_2 + 0x1c8) + 0x74) - fVar12) * param_7 +
                                fVar12) ^ _DAT_008926f0) * _DAT_00892708) / _DAT_008926e4);
    fVar12 = *(float *)(*(int *)(param_2 + 0x1c8) + 0x78);
    FUN_00509e16(((float)((uint)((*(float *)(*(int *)(param_2 + 0x1c8) + 0x70) - fVar12) * param_7 +
                                fVar12) ^ _DAT_008926f0) * _DAT_00892708) / _DAT_008926e4);
    FUN_00509e16((float)fVar10 * _DAT_008926e0);
    FUN_00509da4((float)fVar10 * _DAT_00892734);
    dVar15 = (double)param_7;
    iVar9 = *(int *)(param_2 + 0x1c8);
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x34) + 0x8d) == '\0') {
      dVar5 = (*(double *)(iVar9 + 0x40) - *(double *)(iVar9 + 0x28)) * dVar15 +
              *(double *)(iVar9 + 0x28) + *pdVar8;
      dVar14 = (*(double *)(iVar9 + 0x48) - *(double *)(iVar9 + 0x30)) * dVar15 +
               *(double *)(iVar9 + 0x30) + pdVar8[1];
      dVar13 = (*(double *)(iVar9 + 0x50) - *(double *)(iVar9 + 0x38)) * dVar15 +
               *(double *)(iVar9 + 0x38) + pdVar8[2];
    }
    else {
      fVar12 = (((*(float *)(iVar9 + 0x1bc) - *(float *)(iVar9 + 0x1c0)) * param_7 +
                *(float *)(iVar9 + 0x1c0)) * _DAT_00892708) / _DAT_008926e4;
      fVar10 = (float10)FUN_004a3d32(fVar12);
      fVar11 = (float10)FUN_004a3d60(fVar12);
      iVar9 = *(int *)(param_2 + 0x1c8);
      dVar5 = (((*(double *)(iVar9 + 0x40) - *(double *)(iVar9 + 0x28)) * dVar15 +
               *(double *)(iVar9 + 0x28)) - (double)(float)fVar11 * _DAT_00892710) -
              _DAT_00892718 * (double)(float)fVar10;
      dVar14 = ((*(double *)(iVar9 + 0x48) - *(double *)(iVar9 + 0x30)) * dVar15 +
               *(double *)(iVar9 + 0x30)) - _DAT_00892720;
      dVar13 = (((*(double *)(iVar9 + 0x50) - *(double *)(iVar9 + 0x38)) * dVar15 +
                *(double *)(iVar9 + 0x38)) - (double)(float)fVar10 * _DAT_00892710) +
               (double)(float)fVar11 * _DAT_00892718;
    }
    dVar1 = *(double *)(param_2 + 0x28);
    dVar2 = *(double *)(param_2 + 0x40);
    dVar3 = *(double *)(param_2 + 0x38);
    dVar6 = (*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30)) * dVar15 +
            *(double *)(param_2 + 0x30) + _DAT_00892728;
    dVar4 = *(double *)(param_2 + 0x50);
    (*DAT_0145d26c)(0xde1);
    (*DAT_0145d26c)();
    iVar9 = 0;
    FUN_004fe34a(3);
    FUN_004fe6f0(0);
    do {
      fVar12 = (float)iVar9;
      iVar9 = iVar9 + 1;
      fVar12 = fVar12 * _DAT_00892730;
      FUN_004fe534((double)fVar12 * (dVar5 - ((dVar2 - dVar1) * dVar15 + dVar1)) + param_3,
                   (double)(fVar12 * fVar12 + fVar12) * (dVar14 - dVar6) * _DAT_00892700 + param_4 +
                   _DAT_00892728,
                   (dVar13 - ((dVar4 - dVar3) * dVar15 + dVar3)) * (double)fVar12 + param_5);
    } while (iVar9 != 0x11);
    FUN_004fe0c4();
    (*DAT_0145d248)(0xb50);
    (*DAT_0145d248)(0xde1);
  }
  return;
}


