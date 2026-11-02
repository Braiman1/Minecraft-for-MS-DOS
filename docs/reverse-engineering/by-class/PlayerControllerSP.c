/* Candidate RTTI class: PlayerControllerSP
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903994 slot 0 address 00775b78 */

/* ADDRESS: 00775b78 NAME: FUN_00775b78 */

void FUN_00775b78(void)

{
  return;
}



/* vtable 00903994 slot 1 address 00775b60 */

/* ADDRESS: 00775b60 NAME: FUN_00775b60 */

void __fastcall FUN_00775b60(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903994 slot 2 address 004bff7a */

/* ADDRESS: 004bff7a NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* vtable 00903994 slot 3 address 004bfc2a */

/* ADDRESS: 004bfc2a NAME: FUN_004bfc2a */

void __thiscall
FUN_004bfc2a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  FUN_0050eff4(*(undefined4 *)(param_1[1] + 0x18),param_2,param_3,param_4,param_5);
  iVar1 = (**(code **)(**(int **)(param_1[1] + 0x10) + 8))(param_2,param_3,param_4);
  if (0 < iVar1) {
    if ((float)param_1[6] == 0.0) {
      (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0xbc))
                (*(undefined4 *)(param_1[1] + 0x10),param_2,param_3,param_4,
                 *(undefined4 *)(param_1[1] + 0x18));
    }
    fVar2 = (float10)(**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0x88))
                               (*(undefined4 *)(param_1[1] + 0x18));
    if (DAT_00890ec4 <= (float)fVar2) {
                    /* WARNING: Could not recover jumptable at 0x004bfd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* vtable 00903994 slot 4 address 004bfae4 */

/* ADDRESS: 004bfae4 NAME: FUN_004bfae4 */

char __thiscall
FUN_004bfae4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 8))(param_2,param_3,param_4);
  uVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x18))(param_2,param_3,param_4);
  cVar1 = FUN_004bed36(param_2,param_3,param_4,param_5);
  piVar5 = (int *)FUN_00460bb6();
  cVar2 = FUN_00460baa((&DAT_00a07120)[iVar3]);
  if (piVar5 != (int *)0x0) {
    FUN_00498816(iVar3,param_2,param_3,param_4,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
    if (*piVar5 == 0) {
      uVar6 = FUN_004988ca(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
      FUN_00460bc2(uVar6);
    }
  }
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    (**(code **)(*(int *)(&DAT_00a07120)[iVar3] + 0xe4))
              (*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x18),param_2,param_3,param_4,uVar4);
  }
  return cVar1;
}



/* vtable 00903994 slot 5 address 004bfd34 */

/* ADDRESS: 004bfd34 NAME: FUN_004bfd34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bfd34(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_38 [40];
  
  if (param_1[9] < 1) {
    if (((param_1[3] == param_2) && (param_1[4] == param_3)) && (param_1[5] == param_4)) {
      iVar2 = (**(code **)(**(int **)(param_1[1] + 0x10) + 8))(param_2,param_3,param_4);
      if (iVar2 != 0) {
        piVar1 = (int *)(&DAT_00a07120)[iVar2];
        fVar3 = (float10)(**(code **)(*piVar1 + 0x88))(*(undefined4 *)(param_1[1] + 0x18));
        param_1[6] = (int)((float)fVar3 + (float)param_1[6]);
        fVar3 = (float10)FUN_00766370(param_1[8],0x40800000);
        if ((float)fVar3 == 0.0) {
          fVar3 = (float10)(**(code **)(*(int *)piVar1[0x12] + 0xc))();
          fVar8 = (float)fVar3 * DAT_00890ec8;
          fVar3 = (float10)(**(code **)(*(int *)piVar1[0x12] + 8))();
          fVar4 = ((float)fVar3 + DAT_00890ec4) * _DAT_00890ecc;
          fVar7 = (float)param_4 + DAT_00890ec8;
          fVar6 = (float)param_3 + DAT_00890ec8;
          fVar5 = DAT_00890ec8 + (float)param_2;
          (**(code **)(*(int *)piVar1[0x12] + 0x14))((int *)piVar1[0x12]);
          FUN_004f496a(local_38,fVar5,fVar6,fVar7,fVar4,fVar8);
          FUN_0081ffd0();
        }
        fVar4 = DAT_00890ec4;
        param_1[8] = (int)((float)param_1[8] + DAT_00890ec4);
        if (fVar4 <= (float)param_1[6]) {
          (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 5;
        }
      }
    }
    else {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = param_3;
      param_1[8] = 0;
      param_1[3] = param_2;
      param_1[5] = param_4;
    }
  }
  else {
    param_1[9] = param_1[9] + -1;
  }
  return;
}



/* vtable 00903994 slot 6 address 004bface */

/* ADDRESS: 004bface NAME: FUN_004bface */

void __fastcall FUN_004bface(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* vtable 00903994 slot 7 address 004bff98 */

/* ADDRESS: 004bff98 NAME: FUN_004bff98 */

void __thiscall FUN_004bff98(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  fVar2 = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c)) * param_2 +
          *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = fVar2;
  *(float *)(iVar1 + 0x10) = fVar2;
  return;
}



/* vtable 00903994 slot 8 address 004bfadc */

/* ADDRESS: 004bfadc NAME: FUN_004bfadc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bfadc(void)

{
  return (float10)_DAT_00890ec0;
}



/* vtable 00903994 slot 9 address 004bee3e */

/* ADDRESS: 004bee3e NAME: FUN_004bee3e */

undefined4 FUN_004bee3e(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = *param_3;
  piVar3 = (int *)FUN_004984b6(param_2,param_1);
  if ((param_3 != piVar3) || (uVar4 = 0, *piVar3 != iVar1)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2cc) + 0xc);
    iVar2 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
    *(int **)(iVar2 + iVar1 * 4) = piVar3;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
    }
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar4;
}



/* vtable 00903994 slot 10 address 004bfabc */

/* ADDRESS: 004bfabc NAME: FUN_004bfabc */

void FUN_004bfabc(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0xc3340000;
  return;
}



/* vtable 00903994 slot 11 address 004bff80 */

/* ADDRESS: 004bff80 NAME: FUN_004bff80 */

void __fastcall FUN_004bff80(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  FUN_004f4b76();
  return;
}



/* vtable 00903994 slot 12 address 004bec9e */

/* ADDRESS: 004bec9e NAME: FUN_004bec9e */

undefined1 FUN_004bec9e(void)

{
  return 1;
}



/* vtable 00903994 slot 13 address 004bec88 */

/* ADDRESS: 004bec88 NAME: FUN_004bec88 */

void FUN_004bec88(void)

{
  return;
}



/* vtable 00903994 slot 14 address 004bee98 */

/* ADDRESS: 004bee98 NAME: FUN_004bee98 */

undefined4
FUN_004bee98(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6);
  if ((0 < iVar1) &&
     (uVar2 = (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0xb0))
                        (param_2,param_4,param_5,param_6,param_1), (char)uVar2 != '\0')) {
    return uVar2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = FUN_004983ec(param_1,param_2,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}



/* vtable 00903994 slot 15 address 004bef34 */

/* ADDRESS: 004bef34 NAME: FUN_004bef34 */

undefined4 __thiscall FUN_004bef34(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x3a0);
  FUN_0046262e(*(int *)(param_1 + 4),param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x24),
               *(undefined4 *)(*(int *)(param_2 + 0x104) + 0x50));
  return uVar1;
}



/* vtable 00903994 slot 16 address 004befe8 */

/* ADDRESS: 004befe8 NAME: FUN_004befe8 */

void FUN_004befe8(undefined4 param_1,undefined4 param_2)

{
  FUN_00460c0e(param_2);
  return;
}



/* vtable 00903994 slot 17 address 004bf002 */

/* ADDRESS: 004bf002 NAME: FUN_004bf002 */

void FUN_004bf002(undefined4 param_1,undefined4 param_2)

{
  FUN_00460c7a(param_2);
  return;
}



/* vtable 00903994 slot 18 address 004bf01c */

/* ADDRESS: 004bf01c NAME: FUN_004bf01c */

void FUN_004bf01c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  FUN_00440ea0(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 00903994 slot 19 address 004beca2 */

/* ADDRESS: 004beca2 NAME: FUN_004beca2 */

void FUN_004beca2(undefined4 param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x2d4) + 0x10))(param_2);
  *(undefined4 *)(param_2 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d0);
  return;
}



/* vtable 00903994 slot 20 address 004bef9e */

/* ADDRESS: 004bef9e NAME: FUN_004bef9e */

void __thiscall
FUN_004bef9e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  void *_Memory;
  
  _Memory = (void *)(**(code **)(*param_1 + 0x48))(param_2,param_3,param_4,param_5,param_6);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}



/* vtable 00903994 slot 21 address 004beca2 */
/* Already included above. */
