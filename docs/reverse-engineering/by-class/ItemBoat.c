/* Candidate RTTI class: ItemBoat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905d74 slot 0 address 00778a60 */

/* ADDRESS: 00778a60 NAME: FUN_00778a60 */

void FUN_00778a60(void)

{
  return;
}



/* vtable 00905d74 slot 1 address 00778a48 */

/* ADDRESS: 00778a48 NAME: FUN_00778a48 */

void __fastcall FUN_00778a48(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905d74 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905d74 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905d74 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905d74 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905d74 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 00905d74 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905d74 slot 8 address 00491fbc */

/* ADDRESS: 00491fbc NAME: FUN_00491fbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00491fbc(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *_Memory;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = *(float *)(param_3 + 0x7c);
  fVar14 = *(float *)(param_3 + 0x74);
  fVar12 = *(float *)(param_3 + 0x78);
  fVar1 = *(float *)(param_3 + 0x70);
  uVar5 = FUN_00509e86((*(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28)) +
                       *(double *)(param_3 + 0x28),
                       ((*(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30)) +
                        *(double *)(param_3 + 0x30) + _DAT_0088da70) -
                       (double)*(float *)(param_3 + 0xbc),
                       (*(double *)(param_3 + 0x50) - *(double *)(param_3 + 0x38)) +
                       *(double *)(param_3 + 0x38));
  fVar12 = (float)((uint)((fVar1 - fVar12) + fVar12) ^ _DAT_0088da80) * _DAT_0088da90 -
           _DAT_0088da94;
  fVar9 = (float10)FUN_004a3d60(fVar12);
  fVar10 = (float10)FUN_004a3d32(fVar12);
  fVar13 = (float)((uint)((fVar14 - fVar13) + fVar13) ^ _DAT_0088da80) * _DAT_0088da90;
  fVar11 = (float10)FUN_004a3d60(fVar13);
  fVar14 = (float)((uint)(float)fVar11 ^ _DAT_0088da80);
  fVar11 = (float10)FUN_004a3d32(fVar13);
  uVar6 = FUN_0050a0ce((double)(fVar14 * (float)fVar10) * DAT_0088da98,
                       (double)(float)fVar11 * DAT_0088da98,
                       (double)(fVar14 * (float)fVar9) * DAT_0088da98);
  _Memory = (int *)FUN_0050c59c(uVar5,uVar6,1);
  if (_Memory != (int *)0x0) {
    if (*_Memory == 0) {
      if ((char)param_2[0x5c] == '\0') {
        iVar2 = _Memory[1];
        iVar8 = _Memory[2];
        iVar3 = _Memory[3];
        iVar7 = (**(code **)(*param_2 + 8))(iVar2,iVar8,iVar3);
        if (*(int *)(DAT_00a061e8 + 8) == iVar7) {
          iVar8 = iVar8 + -1;
        }
        pcVar4 = *(code **)(*param_2 + 0x44);
        uVar5 = FUN_00846710(0x200);
        FUN_0044cd96(param_2,(double)((float)iVar2 + DAT_0088daa0),
                     (double)((float)iVar8 + _DAT_0088daa4),(double)((float)iVar3 + DAT_0088daa0));
        (*pcVar4)(uVar5);
      }
      *param_1 = *param_1 + -1;
    }
    free(_Memory);
  }
  return param_1;
}



/* vtable 00905d74 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905d74 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905d74 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905d74 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905d74 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905d74 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905d74 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905d74 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905d74 slot 17 address 0048f1a6 */

/* ADDRESS: 0048f1a6 NAME: FUN_0048f1a6 */

undefined4 __thiscall FUN_0048f1a6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    FUN_0048f138(&DAT_0088d5de);
  }
  else {
    FUN_0048f138("item.");
    uVar2 = FUN_00821690(iVar1);
    FUN_00823120(uVar2);
    FUN_0081ffd0(extraout_ECX);
  }
  return param_1;
}



/* vtable 00905d74 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905d74 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905d74 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905d74 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


