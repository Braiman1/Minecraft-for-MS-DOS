/* Candidate RTTI class: PlayerControllerMP
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903934 slot 0 address 00775b5c */

/* ADDRESS: 00775b5c NAME: FUN_00775b5c */

void FUN_00775b5c(void)

{
  return;
}



/* vtable 00903934 slot 1 address 00775b44 */

/* ADDRESS: 00775b44 NAME: FUN_00775b44 */

void __fastcall FUN_00775b44(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903934 slot 2 address 004bf2e6 */

/* ADDRESS: 004bf2e6 NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* vtable 00903934 slot 3 address 004bf150 */

/* ADDRESS: 004bf150 NAME: FUN_004bf150 */

void __thiscall FUN_004bf150(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (((((char)param_1[10] == '\0') || (param_1[3] != param_2)) || (param_1[4] != param_3)) ||
     (param_1[5] != param_4)) {
    uVar1 = FUN_00846710(0x28);
    FUN_004b9f60(0,param_2,param_3,param_4,param_5);
    FUN_004b02f2(uVar1);
    iVar2 = (**(code **)(**(int **)(param_1[1] + 0x10) + 8))(param_2,param_3,param_4);
    if (0 < iVar2) {
      if ((float)param_1[6] == 0.0) {
        (**(code **)(*(int *)(&DAT_00a07120)[iVar2] + 0xbc))
                  (*(undefined4 *)(param_1[1] + 0x10),param_2,param_3,param_4,
                   *(undefined4 *)(param_1[1] + 0x18));
      }
      fVar3 = (float10)(**(code **)(*(int *)(&DAT_00a07120)[iVar2] + 0x88))
                                 (*(undefined4 *)(param_1[1] + 0x18));
      if (DAT_00890eb4 <= (float)fVar3) {
                    /* WARNING: Could not recover jumptable at 0x004bf2bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x10))();
        return;
      }
    }
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[5] = param_4;
    param_1[3] = param_2;
    param_1[6] = 0;
    param_1[4] = param_3;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}



/* vtable 00903934 slot 4 address 004bf092 */

/* ADDRESS: 004bf092 NAME: FUN_004bf092 */

undefined1 __thiscall
FUN_004bf092(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 8))(param_2,param_3,param_4);
  uVar1 = FUN_004bed36(param_2,param_3,param_4,param_5);
  piVar3 = (int *)FUN_00460bb6();
  if (piVar3 != (int *)0x0) {
    FUN_00498816(uVar2,param_2,param_3,param_4,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
    if (*piVar3 == 0) {
      uVar2 = FUN_004988ca(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
      FUN_00460bc2(uVar2);
    }
  }
  return uVar1;
}



/* vtable 00903934 slot 5 address 004bf7ea */

/* ADDRESS: 004bf7ea NAME: FUN_004bf7ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bf7ea(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_38 [40];
  
  if ((char)param_1[10] != '\0') {
    FUN_004bf4d0();
    if (param_1[9] < 1) {
      if (((param_1[3] != param_2) || (param_1[4] != param_3)) || (param_1[5] != param_4)) {
                    /* WARNING: Could not recover jumptable at 0x004bfa89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xc))();
        return;
      }
      iVar2 = (**(code **)(**(int **)(param_1[1] + 0x10) + 8))(param_2,param_3,param_4);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        piVar1 = (int *)(&DAT_00a07120)[iVar2];
        fVar4 = (float10)(**(code **)(*piVar1 + 0x88))(*(undefined4 *)(param_1[1] + 0x18));
        param_1[6] = (int)((float)fVar4 + (float)param_1[6]);
        fVar4 = (float10)FUN_00766370(param_1[8],0x40800000);
        if ((float)fVar4 == 0.0) {
          fVar4 = (float10)(**(code **)(*(int *)piVar1[0x12] + 0xc))();
          fVar9 = (float)fVar4 * DAT_00890eb8;
          fVar4 = (float10)(**(code **)(*(int *)piVar1[0x12] + 8))();
          fVar5 = ((float)fVar4 + DAT_00890eb4) * _DAT_00890ebc;
          fVar7 = (float)param_3 + DAT_00890eb8;
          fVar8 = (float)param_4 + DAT_00890eb8;
          fVar6 = DAT_00890eb8 + (float)param_2;
          (**(code **)(*(int *)piVar1[0x12] + 0x14))((int *)piVar1[0x12]);
          FUN_004f496a(local_38,fVar6,fVar7,fVar8,fVar5,fVar9);
          FUN_0081ffd0();
        }
        fVar5 = DAT_00890eb4;
        param_1[8] = (int)((float)param_1[8] + DAT_00890eb4);
        if (fVar5 <= (float)param_1[6]) {
          *(undefined1 *)(param_1 + 10) = 0;
          uVar3 = FUN_00846710(0x28);
          FUN_004b9f60(2,param_2,param_3,param_4,param_5);
          FUN_004b02f2(uVar3);
          (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 5;
        }
      }
    }
    else {
      param_1[9] = param_1[9] + -1;
    }
  }
  return;
}



/* vtable 00903934 slot 6 address 004bf07a */

/* ADDRESS: 004bf07a NAME: FUN_004bf07a */

void __fastcall FUN_004bf07a(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* vtable 00903934 slot 7 address 004bf41a */

/* ADDRESS: 004bf41a NAME: FUN_004bf41a */

void __thiscall FUN_004bf41a(int param_1,float param_2)

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



/* vtable 00903934 slot 8 address 004bf086 */

/* ADDRESS: 004bf086 NAME: FUN_004bf086 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bf086(void)

{
  return (float10)_DAT_00890eb0;
}



/* vtable 00903934 slot 9 address 004bf63a */

/* ADDRESS: 004bf63a NAME: FUN_004bf63a */

void FUN_004bf63a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x28);
  uVar2 = FUN_0048e626();
  FUN_004ba17c(0xffffffff,0xffffffff,0xffffffff,0xff,uVar2);
  FUN_004b02f2(uVar1);
  FUN_004bee3e();
  return;
}



/* vtable 00903934 slot 10 address 004bf068 */

/* ADDRESS: 004bf068 NAME: FUN_004bf068 */

void FUN_004bf068(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0xc3340000;
  return;
}



/* vtable 00903934 slot 11 address 004bf53c */

/* ADDRESS: 004bf53c NAME: FUN_004bf53c */

void __fastcall FUN_004bf53c(int param_1)

{
  FUN_004bf4d0();
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  FUN_004f4b76();
  return;
}



/* vtable 00903934 slot 12 address 004bec9e */

/* ADDRESS: 004bec9e NAME: FUN_004bec9e */

undefined1 FUN_004bec9e(void)

{
  return 1;
}



/* vtable 00903934 slot 13 address 004bec88 */

/* ADDRESS: 004bec88 NAME: FUN_004bec88 */

void FUN_004bec88(void)

{
  return;
}



/* vtable 00903934 slot 14 address 004bf564 */

/* ADDRESS: 004bf564 NAME: FUN_004bf564 */

void FUN_004bf564(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x28);
  uVar2 = FUN_0048e626();
  FUN_004ba17c(in_stack_00000010,in_stack_00000014,in_stack_00000018,in_stack_0000001c,uVar2);
  FUN_004b02f2(uVar1);
  FUN_004bee98();
  return;
}



/* vtable 00903934 slot 15 address 004bf2ec */

/* ADDRESS: 004bf2ec NAME: FUN_004bf2ec */

undefined4 __thiscall FUN_004bf2ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x3e0);
  FUN_0044e0f0(*(int *)(param_1 + 4),param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x24),
               *(undefined4 *)(param_1 + 0x2c));
  return uVar1;
}



/* vtable 00903934 slot 16 address 004bf76a */

/* ADDRESS: 004bf76a NAME: FUN_004bf76a */

void FUN_004bf76a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x20);
  FUN_004bd3de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),0);
  FUN_004b02f2(uVar1);
  FUN_00460c0e(param_2);
  return;
}



/* vtable 00903934 slot 17 address 004bf6e8 */

/* ADDRESS: 004bf6e8 NAME: FUN_004bf6e8 */

void FUN_004bf6e8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x20);
  FUN_004bd3de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),1);
  FUN_004b02f2(uVar1);
  FUN_00460c7a(param_2);
  return;
}



/* vtable 00903934 slot 18 address 004bf34e */

/* ADDRESS: 004bf34e NAME: FUN_004bf34e */

undefined4
FUN_004bf34e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int param_5
            )

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sVar1 = FUN_004412fc(*(undefined4 *)(param_5 + 0x2cc));
  uVar2 = FUN_004bf01c(param_1,param_2,param_3,param_4,param_5);
  uVar3 = FUN_00846710(0x28);
  FUN_004b8f58(param_1,param_2,param_3,param_4,uVar2,(int)sVar1);
  FUN_004b02f2(uVar3);
  return uVar2;
}



/* vtable 00903934 slot 19 address 004bf08e */

/* ADDRESS: 004bf08e NAME: FUN_004bf08e */

void FUN_004bf08e(void)

{
  return;
}



/* vtable 00903934 slot 20 address 004bef9e */

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



/* vtable 00903934 slot 21 address 004beca2 */

/* ADDRESS: 004beca2 NAME: FUN_004beca2 */

void FUN_004beca2(undefined4 param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x2d4) + 0x10))(param_2);
  *(undefined4 *)(param_2 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d0);
  return;
}


