/* Candidate RTTI class: RenderMinecart
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901250 slot 0 address 004e7d44 */

/* ADDRESS: 004e7d44 NAME: FUN_004e7d44 */

void __fastcall FUN_004e7d44(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00901250;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  param_1[5] = 0;
  FUN_004c4bce();
  return;
}



/* vtable 00901250 slot 1 address 004e7d6c */

/* ADDRESS: 004e7d6c NAME: FUN_004e7d6c */

void __fastcall FUN_004e7d6c(void *param_1)

{
  FUN_004e7d44();
  free(param_1);
  return;
}



/* vtable 00901250 slot 2 address 004e8414 */

/* ADDRESS: 004e8414 NAME: thunk_FUN_004e7e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e7e50(int param_1,int *param_2,double param_3,double param_4,double param_5,
                  float param_6,float param_7)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  float10 fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fStack_90;
  float fStack_8c;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [28];
  
  dStack_80 = param_4;
  dStack_78 = param_3;
  dStack_88 = param_5;
  fStack_90 = param_6;
  (*DAT_0145d020)();
  dVar11 = (double)param_7;
  dVar8 = (*(double *)(param_2 + 0x10) - *(double *)(param_2 + 0x36)) * dVar11 +
          *(double *)(param_2 + 0x36);
  dVar9 = (*(double *)(param_2 + 0x12) - *(double *)(param_2 + 0x38)) * dVar11 +
          *(double *)(param_2 + 0x38);
  dVar11 = (*(double *)(param_2 + 0x14) - *(double *)(param_2 + 0x3a)) * dVar11 +
           *(double *)(param_2 + 0x3a);
  pdVar1 = (double *)FUN_0045ba6e(dVar8,dVar9,dVar11);
  fStack_8c = ((float)param_2[0x1d] - (float)param_2[0x1f]) * param_7 + (float)param_2[0x1f];
  if (pdVar1 != (double *)0x0) {
    pdVar2 = (double *)FUN_0045bc92(dVar8,dVar9,dVar11,0x40000000,0x3fd33333);
    pdVar3 = (double *)FUN_0045bc92(dVar8,dVar9,dVar11,0x40000000,0xbfd33333);
    dStack_78 = (*pdVar1 - dVar8) + param_3;
    if (pdVar2 == (double *)0x0) {
      pdVar2 = pdVar1;
    }
    if (pdVar3 == (double *)0x0) {
      pdVar3 = pdVar1;
    }
    dVar8 = pdVar2[1];
    dStack_80 = ((pdVar3[1] + dVar8) * _DAT_00892ef0 - dVar9) + param_4;
    dStack_88 = (pdVar1[2] - dVar11) + param_5;
    FUN_0050a0ce(CONCAT44((uint)((ulonglong)*pdVar2 >> 0x20) ^ _UNK_00892f04,
                          SUB84(*pdVar2,0) ^ _DAT_00892f00),
                 CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ _UNK_00892f04,
                          SUB84(dVar8,0) ^ _DAT_00892f00),
                 CONCAT44((uint)((ulonglong)pdVar2[2] >> 0x20) ^ _UNK_00892f04,
                          SUB84(pdVar2[2],0) ^ _DAT_00892f00));
    fVar6 = (float10)FUN_00509b6c();
    if ((double)fVar6 != 0.0) {
      puVar4 = (undefined8 *)FUN_00509fc8();
      fVar6 = (float10)thunk_FUN_00410bc0(puVar4[2],*puVar4);
      fStack_90 = (float)(((double)fVar6 * _DAT_00892f10) / _DAT_00892f18);
      dVar8 = atan((double)puVar4[1]);
      fStack_8c = (float)(dVar8 * _DAT_00892f20);
    }
  }
  FUN_0076f818((float)dStack_78,(float)dStack_80,(float)dStack_88);
  FUN_0076f4b8(_DAT_00892f28 - fStack_90,0,0x3f800000,0);
  FUN_0076f4b8((uint)fStack_8c ^ _DAT_00892f30,0,0,0x3f800000);
  fVar7 = (float)*(int *)param_2[0x72] - param_7;
  if (0.0 < fVar7) {
    fVar10 = (float)*(int *)param_2[0x71] - param_7;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    fVar6 = (float10)FUN_004a3d32(fVar7);
    FUN_0076f4b8(((fVar7 * (float)fVar6 * fVar10) / _DAT_00892f40) * (float)*(int *)param_2[0x73],
                 0x3f800000,0,0);
  }
  if (param_2[0x75] == 0) goto LAB_004e8357;
  apuStack_48[0] = auStack_40;
  uVar5 = FUN_004e7d90("/terrain.png","");
  uVar5 = FUN_004c4c12(apuStack_48,uVar5);
  FUN_0081ffd0(uVar5);
  FUN_0076f484(_DAT_00892f44,_DAT_00892f44,_DAT_00892f44);
  FUN_0076f818(0,0x3ea00000,0);
  FUN_0076f4b8(0x42b40000,0,0x3f800000,0);
  if (param_2[0x75] == 1) {
    (**(code **)(*param_2 + 0x50))(param_7);
    uVar5 = DAT_00a06248;
LAB_004e82ec:
    FUN_004ccaf6(uVar5,0);
  }
  else if (param_2[0x75] == 2) {
    (**(code **)(*param_2 + 0x50))(param_7);
    uVar5 = DAT_00a0622c;
    goto LAB_004e82ec;
  }
  FUN_0076f4b8(0xc2b40000,0,0x3f800000,0);
  FUN_0076f818(0,0xbea00000,0);
  FUN_0076f484(_DAT_00892f48,_DAT_00892f48,_DAT_00892f48);
LAB_004e8357:
  apuStack_48[0] = auStack_40;
  FUN_004e7d90("/item/cart.png","");
  uVar5 = FUN_004c4c12(apuStack_48,extraout_EDX);
  FUN_0081ffd0(uVar5);
  FUN_0076f484(_DAT_00892f4c,_DAT_00892f4c,0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(0,0,0xbdcccccd,0,0,0x3d800000);
  (*DAT_0145d034)();
  return;
}


