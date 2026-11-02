/* Candidate RTTI class: StatTypeDistance
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902a18 slot 0 address 00775494 */

/* ADDRESS: 00775494 NAME: FUN_00775494 */

void FUN_00775494(void)

{
  return;
}



/* vtable 00902a18 slot 1 address 0077547c */

/* ADDRESS: 0077547c NAME: FUN_0077547c */

void __fastcall FUN_0077547c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902a18 slot 2 address 004f9de0 */

/* ADDRESS: 004f9de0 NAME: FUN_004f9de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f9de0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  double dVar11;
  double dVar12;
  char local_114;
  char local_f8 [16];
  char local_e8 [216];
  
  dVar11 = (double)(int)param_3 / _DAT_008956f0;
  dVar12 = dVar11 / _DAT_008956f8;
  if (dVar12 <= DAT_00895700) {
    if (dVar11 <= DAT_00895700) {
      iVar7 = 1;
      uVar6 = -param_3;
      uVar9 = param_3;
      uVar4 = param_3;
      if (-1 < (int)uVar6) {
        uVar9 = uVar6;
        uVar4 = uVar6;
      }
      do {
        if (uVar9 < 10) {
LAB_004f9f6b:
          local_f8[0] = '\0';
          uVar9 = -((int)param_3 >> 0x1f) & 0xff;
          iVar1 = -((int)param_3 >> 0x1f) + iVar7;
          FUN_00822a40(iVar1);
          local_f8[0] = '-';
          pcVar8 = 
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          ;
          pcVar10 = local_e8;
          for (iVar5 = 0xc9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
          }
          pcVar8 = local_f8 + uVar9 + iVar7;
          for (; 99 < uVar4; uVar4 = uVar4 / 100) {
            iVar7 = (uVar4 % 100) * 2;
            pcVar8[-1] = local_e8[iVar7 + 1];
            pcVar8[-2] = local_e8[iVar7];
            pcVar8 = pcVar8 + -2;
          }
          local_114 = (char)uVar4;
          local_114 = local_114 + '0';
          if (9 < uVar4) {
            local_f8[uVar9 + 1] = local_e8[uVar4 * 2 + 1];
            local_114 = local_e8[uVar4 * 2];
          }
          local_f8[uVar9] = local_114;
          local_f8[iVar1] = '\0';
          uVar3 = FUN_00821690(&DAT_0089561f);
          FUN_00823120(uVar3);
          FUN_0081ffd0(extraout_ECX);
          return param_1;
        }
        if (uVar9 < 100) {
          iVar7 = iVar7 + 1;
          goto LAB_004f9f6b;
        }
        if (uVar9 < 1000) {
          iVar7 = iVar7 + 2;
          goto LAB_004f9f6b;
        }
        if (uVar9 < 10000) {
          iVar7 = iVar7 + 3;
          goto LAB_004f9f6b;
        }
        iVar7 = iVar7 + 4;
        uVar9 = uVar9 / 10000;
      } while( true );
    }
    FUN_008339d0();
    piVar2 = (int *)FUN_007d79f0(FUN_00841c88);
    *(undefined4 *)((int)piVar2 + *(int *)(*piVar2 + -0xc) + 4) = 2;
    uVar3 = FUN_007d65c0(dVar11);
    FUN_0083eb80(uVar3,&DAT_0089561c,2);
    uVar3 = FUN_0078da80(local_e8 + 4);
  }
  else {
    FUN_008339d0();
    piVar2 = (int *)FUN_007d79f0(FUN_00841c88);
    *(undefined4 *)((int)piVar2 + *(int *)(*piVar2 + -0xc) + 4) = 2;
    uVar3 = FUN_007d65c0(dVar12);
    FUN_0083eb80(uVar3,&DAT_00895618,3);
    uVar3 = FUN_0078da80(local_e8 + 4);
  }
  FUN_00834300(uVar3);
  return param_1;
}


