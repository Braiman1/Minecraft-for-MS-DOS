/* Candidate RTTI class: RenderPlayer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe344 slot 0 address 004e9192 */

/* ADDRESS: 004e9192 NAME: FUN_004e9192 */

void __fastcall FUN_004e9192(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008fe344;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  FUN_004e5392();
  return;
}



/* vtable 008fe344 slot 1 address 004e91cc */

/* ADDRESS: 004e91cc NAME: FUN_004e91cc */

void __fastcall FUN_004e91cc(void *param_1)

{
  FUN_004e9192();
  free(param_1);
  return;
}



/* vtable 008fe344 slot 2 address 004ea492 */

/* ADDRESS: 004ea492 NAME: thunk_FUN_004ea368 */

void thunk_FUN_004ea368(void)

{
  FUN_004ea368();
  return;
}



/* vtable 008fe344 slot 3 address 004ea492 */
/* Already included above. */

/* vtable 008fe344 slot 4 address 004ea498 */

/* ADDRESS: 004ea498 NAME: FUN_004ea498 */

void FUN_004ea498(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x15c))();
  }
  FUN_004e54b2();
  return;
}



/* vtable 008fe344 slot 5 address 004ea546 */

/* ADDRESS: 004ea546 NAME: FUN_004ea546 */

void __thiscall FUN_004ea546(int *param_1,int *param_2)

{
  char cVar1;
  float10 fVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x88))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x15c))();
    if (cVar1 != '\0') {
      fVar2 = (float10)FUN_00461238();
      FUN_0076f4b8((float)fVar2,0,0x3f800000,0);
      fVar2 = (float10)(**(code **)(*param_1 + 0x28))(param_2);
      FUN_0076f4b8((float)fVar2,0,0,0x3f800000);
      FUN_0076f4b8(0x43870000,0,0x3f800000,0);
      return;
    }
  }
  FUN_004e5d00();
  return;
}



/* vtable 008fe344 slot 6 address 004e534c */

/* ADDRESS: 004e534c NAME: FUN_004e534c */

float10 FUN_004e534c(int param_1,float param_2)

{
  return (float10)((float)*(int *)(param_1 + 0x118) + param_2);
}



/* vtable 008fe344 slot 7 address 004e918c */

/* ADDRESS: 004e918c NAME: FUN_004e918c */

void __fastcall FUN_004e918c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e918e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* vtable 008fe344 slot 8 address 004e5370 */

/* ADDRESS: 004e5370 NAME: FUN_004e5370 */

void __fastcall FUN_004e5370(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e5372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* vtable 008fe344 slot 9 address 004e9ec2 */

/* ADDRESS: 004e9ec2 NAME: thunk_FUN_004e9cd8 */

void thunk_FUN_004e9cd8(void)

{
  FUN_004e9cd8();
  return;
}



/* vtable 008fe344 slot 10 address 004e537c */

/* ADDRESS: 004e537c NAME: FUN_004e537c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e537c(void)

{
  return (float10)_DAT_00892e88;
}



/* vtable 008fe344 slot 11 address 004e5386 */

/* ADDRESS: 004e5386 NAME: FUN_004e5386 */

undefined4 FUN_004e5386(void)

{
  return 0;
}



/* vtable 008fe344 slot 12 address 004e925e */

/* ADDRESS: 004e925e NAME: FUN_004e925e */

void FUN_004e925e(void)

{
  FUN_0076f484(DAT_00892fd0,DAT_00892fd0,DAT_00892fd0);
  return;
}



/* vtable 008fe344 slot 13 address 004ea362 */

/* ADDRESS: 004ea362 NAME: thunk_FUN_004e9f2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e9f2a(int param_1,int *param_2,double param_3,double param_4,double param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 extraout_ST0;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double dStack_58;
  undefined1 auStack_48 [36];
  
  dStack_58 = param_4;
  cVar2 = FUN_0051d01a();
  if ((cVar2 != '\0') && (piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x28), piVar1 != param_2)) {
    uVar3 = FUN_00449ff4(piVar1);
    cVar2 = (**(code **)(*param_2 + 0xcc))(uVar3);
    fVar6 = DAT_00893020;
    if (cVar2 != '\0') {
      fVar6 = DAT_0089300c;
    }
    if ((float)extraout_ST0 < fVar6) {
      piVar1 = param_2 + 0xbc;
      cVar2 = (**(code **)(*param_2 + 0xcc))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_2 + 0x15c))();
        if (cVar2 != '\0') {
          dStack_58 = param_4 - _DAT_00893028;
        }
        FUN_00823370(piVar1);
        FUN_004e5e3e(param_2,auStack_48,param_3,dStack_58,param_5,0x40);
        FUN_0081ffd0();
      }
      else {
        FUN_004c6324();
        FUN_0076f84c();
        FUN_0076f818((float)param_3,(float)param_4 + _DAT_00893030,(float)param_5);
        (*DAT_0145d090)(0,DAT_00892fd8,0);
        FUN_0076f4b8(*(uint *)(*(int *)(param_1 + 0x10) + 0x2c) ^ _DAT_00892ff0,0,DAT_00892fd8,0);
        FUN_0076f4b8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),DAT_00892fd8,0,0);
        FUN_0076f484(DAT_00893034,DAT_00893034,0x3cda7410);
        (*DAT_0145d26c)(0xb50);
        FUN_0076f818(0,0x4115fffe,0);
        (*DAT_0145d274)(0);
        (*DAT_0145d248)(0xbe2);
        uVar3 = (*DAT_0145d34c)(0x302,0x303);
        uVar8 = 0xde1;
        uVar4 = (*DAT_0145d26c)();
        FUN_004fe3cc(uVar4,uVar8,uVar3);
        iVar5 = FUN_0046f612(piVar1);
        FUN_004fe47e(0,0,0,0x3e800000);
        dVar7 = (double)~(iVar5 / 2);
        FUN_004fe534(dVar7,0,0xbff00000,0,0);
        FUN_004fe534(dVar7,0,0x40200000,0,0);
        dVar7 = (double)(int)(iVar5 / 2 + 1);
        FUN_004fe534(dVar7,0,0x40200000,0,0);
        FUN_004fe534(dVar7,0,0xbff00000,0,0);
        FUN_004fe0c4();
        (*DAT_0145d248)(0xde1);
        (*DAT_0145d274)(1);
        iVar5 = FUN_0046f612(piVar1);
        FUN_0046feda(piVar1,-(iVar5 / 2),0,0x20ffffff);
        (*DAT_0145d248)(0xb50);
        (*DAT_0145d26c)(0xbe2);
        (*DAT_0145d2d4)(DAT_00892fd8,DAT_00892fd8,DAT_00892fd8,DAT_00892fd8);
        FUN_0076f810();
      }
    }
  }
  return;
}



/* vtable 008fe344 slot 14 address 004e9286 */

/* ADDRESS: 004e9286 NAME: FUN_004e9286 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9286(int *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined4 extraout_ECX;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 *puVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_48 [36];
  
  fVar8 = param_2;
  piVar7 = param_1;
  puVar20 = &param_1;
  uVar22 = FUN_0048edae(3);
  iVar11 = (int)uVar22;
  if (((iVar11 != 0) && (*(uint *)(iVar11 + 8) < 0x100)) &&
     ((&DAT_00a07120)[*(uint *)(iVar11 + 8)] != 0)) {
    FUN_0076f84c((int)((ulonglong)uVar22 >> 0x20));
    FUN_004a9460(0x3d800000);
    uVar10 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar11 + 8)] + 0x1c))(puVar20);
    cVar9 = FUN_004cdb64(uVar10);
    if (cVar9 != '\0') {
      FUN_0076f818(0,0xbe800000,0);
      FUN_0076f4b8(0x43340000,0,0x3f800000,0);
      FUN_0076f484(DAT_00892fe0,0xbf200000,DAT_00892fe0);
    }
    FUN_004952ac(piVar7,iVar11);
    FUN_0076f810(iVar11,iVar11);
  }
  if ((piVar7[0xbd] == 8) && (iVar11 = memcmp((void *)piVar7[0xbc],"deadmau5",8), iVar11 == 0)) {
    FUN_004e91f0(&DAT_00892f89);
    uVar22 = FUN_004c4c3c(piVar7 + 0x4e,auStack_48);
    uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
    puVar20 = (undefined4 *)uVar22;
    FUN_0081ffd0(uVar10,uVar10);
    if ((char)uVar22 != '\0') {
      iVar11 = -1;
      do {
        puVar20 = (undefined4 *)
                  (((float)piVar7[0x1e] + ((float)piVar7[0x1c] - (float)piVar7[0x1e]) * fVar8) -
                  (((float)piVar7[0x6f] - (float)piVar7[0x70]) * fVar8 + (float)piVar7[0x70]));
        fVar16 = ((float)piVar7[0x1d] - (float)piVar7[0x1f]) * fVar8 + (float)piVar7[0x1f];
        FUN_0076f84c();
        FUN_0076f4b8(puVar20,0,0x3f800000,0);
        FUN_0076f4b8(fVar16,0x3f800000,0,0);
        fVar17 = (float)iVar11;
        iVar11 = iVar11 + 2;
        FUN_0076f818(fVar17 * DAT_00892fe4,0,0);
        FUN_0076f818(0,0xbec00000,0);
        FUN_0076f4b8((uint)fVar16 ^ _DAT_00892ff0,0x3f800000,0,0);
        FUN_0076f4b8((uint)puVar20 ^ _DAT_00892ff0,0,0x3f800000,0);
        FUN_0076f484(DAT_00893000,DAT_00893000,DAT_00893000);
        uVar10 = FUN_004a60da(0x3d800000);
        FUN_0076f810(uVar10);
      } while (iVar11 != 3);
    }
  }
  if (piVar7[0xc5] != 0) {
    FUN_004e91f0(&DAT_00892f89);
    cVar9 = FUN_004c4c3c(piVar7 + 0xc4,auStack_48);
    FUN_0081ffd0(puVar20,puVar20);
    if (cVar9 != '\0') {
      FUN_0076f84c();
      FUN_0076f818(0,0,0x3e000000);
      dVar21 = (double)fVar8;
      dVar1 = *(double *)(piVar7 + 0xc);
      dVar2 = *(double *)(piVar7 + 0xce);
      dVar5 = ((*(double *)(piVar7 + 0xd2) - *(double *)(piVar7 + 0xcc)) * dVar21 +
              *(double *)(piVar7 + 0xcc)) -
              ((*(double *)(piVar7 + 0x10) - *(double *)(piVar7 + 10)) * dVar21 +
              *(double *)(piVar7 + 10));
      dVar3 = *(double *)(piVar7 + 0xd4);
      dVar4 = *(double *)(piVar7 + 0x12);
      dVar6 = ((*(double *)(piVar7 + 0xd6) - *(double *)(piVar7 + 0xd0)) * dVar21 +
              *(double *)(piVar7 + 0xd0)) -
              (dVar21 * (*(double *)(piVar7 + 0x14) - *(double *)(piVar7 + 0xe)) +
              *(double *)(piVar7 + 0xe));
      fVar16 = ((((float)piVar7[0x6f] - (float)piVar7[0x70]) * fVar8 + (float)piVar7[0x70]) *
               _DAT_00893004) / _DAT_00892fdc;
      fVar14 = (float10)FUN_004a3d32(fVar16);
      fVar15 = (float10)FUN_004a3d60(fVar16);
      fVar17 = (float)(((dVar3 - dVar2) * dVar21 + dVar2) - ((dVar4 - dVar1) * dVar21 + dVar1)) *
               _DAT_00893008;
      fVar16 = DAT_00892fd4;
      if (DAT_00892fd4 <= fVar17) {
        fVar16 = (float)(~-(uint)(DAT_0089300c < fVar17) & (uint)fVar17 |
                        (uint)DAT_0089300c & -(uint)(DAT_0089300c < fVar17));
      }
      fVar18 = (float)(dVar5 * (double)(float)((uint)(float)fVar15 ^ _DAT_00892ff0) -
                      dVar6 * (double)(float)fVar14) * DAT_00893010;
      fVar17 = (float)(dVar5 * (double)(float)fVar14 +
                      dVar6 * (double)(float)((uint)(float)fVar15 ^ _DAT_00892ff0)) * DAT_00893010;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      fVar19 = ((float)piVar7[0xb9] - (float)piVar7[0xb8]) * fVar8 + (float)piVar7[0xb8];
      fVar14 = (float10)FUN_004a3d32((((float)piVar7[0x33] - (float)piVar7[0x32]) * fVar8 +
                                     (float)piVar7[0x32]) * _DAT_00893014);
      fVar16 = (float)fVar14 * DAT_0089300c * fVar19 + fVar16;
      cVar9 = (**(code **)(*piVar7 + 0xcc))();
      if (cVar9 != '\0') {
        fVar16 = fVar16 + _DAT_00893018;
      }
      FUN_0076f4b8(fVar17 * _DAT_0089301c + _DAT_00893014 + fVar16,0x3f800000,0,0);
      fVar18 = fVar18 * _DAT_0089301c;
      FUN_0076f4b8(fVar18,0,0,0x3f800000);
      FUN_0076f4b8((uint)fVar18 ^ _DAT_00892ff0,0,0x3f800000,0);
      FUN_0076f4b8(0x43340000,0,0x3f800000,0);
      FUN_004a6108(0x3d800000);
      FUN_0076f810(fVar19);
    }
  }
  puVar12 = (undefined1 *)FUN_0048e626();
  FUN_004982b6(DAT_00a08744);
  if (puVar12 == (undefined1 *)0x0) {
    return;
  }
  if (piVar7[0xe5] != 0) {
    puVar12 = auStack_48;
  }
  cVar9 = FUN_00498352(extraout_ECX);
  if (cVar9 == '\0') {
    return;
  }
  piVar13 = (int *)FUN_004983a6();
  if (piVar13 == (int *)0x0) {
    return;
  }
  FUN_0076f84c();
  FUN_004a9460(0x3d800000);
  FUN_0076f818(0xbd800000,0x3ee00000,0x3d800000);
  if ((*(uint *)(puVar12 + 8) < 0x100) &&
     ((int *)(&DAT_00a07120)[*(uint *)(puVar12 + 8)] != (int *)0x0)) {
    uVar10 = (**(code **)(*(int *)(&DAT_00a07120)[*(uint *)(puVar12 + 8)] + 0x1c))();
    cVar9 = FUN_004cdb64(uVar10);
    if (cVar9 != '\0') {
      FUN_0076f818(0,0x3e400000,0xbea00000);
      FUN_0076f4b8(0x41a00000,0x3f800000,0,0);
      FUN_0076f4b8(0x42340000,0,0x3f800000,0);
      FUN_0076f484(DAT_00892fe4,0xbec00000,DAT_00892fe4);
      goto LAB_004e9bc5;
    }
  }
  cVar9 = (**(code **)(*piVar13 + 0x3c))();
  if (cVar9 == '\0') {
    FUN_0076f818(0x3e800000,0x3e400000,0xbe400000);
    FUN_0076f484(DAT_00892fe4,DAT_00892fe4,DAT_00892fe4);
    FUN_0076f4b8(0x42700000,0,0,0x3f800000);
    FUN_0076f4b8(0xc2b40000,0x3f800000,0,0);
    uVar24 = 0x3f800000;
    uVar23 = 0;
    uVar10 = 0x41a00000;
  }
  else {
    cVar9 = (**(code **)(*piVar13 + 0x40))();
    if (cVar9 != '\0') {
      FUN_0076f4b8(0x43340000,0,0,0x3f800000);
      FUN_0076f818(0,0xbe000000,0);
    }
    FUN_0076f818(0,0x3e400000,0);
    FUN_0076f484(DAT_00892fe0,0xbf200000,DAT_00892fe0);
    FUN_0076f4b8(0xc2c80000,0x3f800000,0,0);
    uVar24 = 0;
    uVar23 = 0x3f800000;
    uVar10 = 0x42340000;
  }
  FUN_0076f4b8(uVar10,0,uVar23,uVar24);
LAB_004e9bc5:
  uVar10 = FUN_004952ac(piVar7,puVar12);
  FUN_0076f810(uVar10,uVar10);
  return;
}


