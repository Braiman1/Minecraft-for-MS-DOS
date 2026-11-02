/* Candidate RTTI class: ItemBucket
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb1a0 slot 0 address 00771334 */

/* ADDRESS: 00771334 NAME: FUN_00771334 */

void FUN_00771334(void)

{
  return;
}



/* vtable 008fb1a0 slot 1 address 0077131c */

/* ADDRESS: 0077131c NAME: FUN_0077131c */

void __fastcall FUN_0077131c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fb1a0 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 008fb1a0 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 008fb1a0 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 008fb1a0 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 008fb1a0 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 008fb1a0 slot 8 address 00492400 */

/* ADDRESS: 00492400 NAME: FUN_00492400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00492400(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *_Memory;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  int iStack_58;
  undefined1 auStack_4c [40];
  
  fVar16 = *(float *)(param_4 + 0x7c);
  fVar17 = *(float *)(param_4 + 0x74);
  fVar12 = *(float *)(param_4 + 0x78);
  fVar1 = *(float *)(param_4 + 0x70);
  dVar13 = (*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x28)) + *(double *)(param_4 + 0x28)
  ;
  dVar14 = ((*(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x30)) +
            *(double *)(param_4 + 0x30) + _DAT_0088dae8) - (double)*(float *)(param_4 + 0xbc);
  dVar15 = (*(double *)(param_4 + 0x50) - *(double *)(param_4 + 0x38)) + *(double *)(param_4 + 0x38)
  ;
  uVar3 = FUN_00509e86(dVar13,dVar14,dVar15);
  fVar12 = (float)((uint)((fVar1 - fVar12) + fVar12) ^ _DAT_0088daf0) * _DAT_0088db00 -
           _DAT_0088db04;
  fVar9 = (float10)FUN_004a3d60(fVar12);
  fVar10 = (float10)FUN_004a3d32(fVar12);
  fVar16 = (float)((uint)((fVar17 - fVar16) + fVar16) ^ _DAT_0088daf0) * _DAT_0088db00;
  fVar11 = (float10)FUN_004a3d60(fVar16);
  fVar17 = (float)((uint)(float)fVar11 ^ _DAT_0088daf0);
  fVar11 = (float10)FUN_004a3d32(fVar16);
  uVar4 = FUN_0050a0ce((double)(fVar17 * (float)fVar10) * DAT_0088db08,
                       (double)(float)fVar11 * DAT_0088db08,
                       (double)((float)fVar9 * fVar17) * DAT_0088db08);
  _Memory = (int *)FUN_0050c59c(uVar3,uVar4,*(int *)(param_1 + 0x20) == 0);
  if (_Memory == (int *)0x0) {
    return param_2;
  }
  if (*_Memory == 0) {
    iVar8 = _Memory[1];
    iStack_58 = _Memory[2];
    iVar7 = _Memory[3];
    cVar2 = FUN_0050e476(param_4,iVar8,iStack_58,iVar7);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar5 = (**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
        if ((DAT_00a0ae34 == iVar5) &&
           (iVar5 = (**(code **)(*param_3 + 0x18))(iVar8,iStack_58,iVar7), iVar5 == 0)) {
          FUN_0050b858(iVar8,iStack_58,iVar7,0);
          param_2 = FUN_00846710(0x10);
          FUN_004982b6(DAT_00a0868c);
        }
        else {
          iVar5 = (**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
          if ((DAT_00a0ae30 == iVar5) &&
             (iVar5 = (**(code **)(*param_3 + 0x18))(iVar8,iStack_58,iVar7), iVar5 == 0)) {
            FUN_0050b858(iVar8,iStack_58,iVar7,0);
            param_2 = FUN_00846710(0x10);
            FUN_004982b6(DAT_00a08688);
          }
        }
      }
      else if (*(int *)(param_1 + 0x20) < 0) {
        param_2 = FUN_00846710(0x10);
        FUN_004982b6(DAT_00a08690);
      }
      else {
        iVar5 = _Memory[4];
        if (iVar5 == 0) {
          iStack_58 = iStack_58 + -1;
        }
        else if (iVar5 == 1) {
          iStack_58 = iStack_58 + 1;
        }
        else if (iVar5 == 2) {
          iVar7 = iVar7 + -1;
        }
        else if (iVar5 == 3) {
          iVar7 = iVar7 + 1;
        }
        else if (iVar5 == 4) {
          iVar8 = iVar8 + -1;
        }
        else if (iVar5 == 5) {
          iVar8 = iVar8 + 1;
        }
        cVar2 = FUN_0050ac0e(iVar8,iStack_58,iVar7);
        if (cVar2 == '\0') {
          piVar6 = (int *)(**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
          cVar2 = (**(code **)(*piVar6 + 0xc))();
          if (cVar2 != '\0') goto LAB_004929ef;
        }
        if ((*(char *)(param_3[0x41] + 0xd) == '\0') ||
           (*(int *)(DAT_00a06300 + 8) != *(int *)(param_1 + 0x20))) {
          FUN_0050b8ba(iVar8,iStack_58,iVar7,*(int *)(param_1 + 0x20),0);
        }
        else {
          fVar9 = (float10)FUN_0040e9c4();
          fVar16 = (float)fVar9 * _DAT_0088db10 + _DAT_0088db14;
          FUN_007782ac("random.fizz");
          FUN_0050c650(dVar13 + DAT_0088db18,dVar14 + DAT_0088db18,dVar15 + DAT_0088db18,auStack_4c,
                       0x3f000000,fVar16);
          iVar5 = 8;
          FUN_0081ffd0();
          do {
            fVar9 = (float10)FUN_0040e620();
            fVar10 = (float10)FUN_0040e620();
            fVar11 = (float10)FUN_0040e620();
            FUN_007782ac("largesmoke");
            FUN_0050c738(auStack_4c,(double)fVar9 + (double)iVar8,(double)iStack_58 + (double)fVar10
                         ,(double)iVar7 + (double)fVar11,0,0,0,0,0,0);
            FUN_0081ffd0();
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_2 = FUN_00846710(0x10);
        FUN_004982b6(DAT_00a08690);
      }
    }
  }
  else if (((*(int *)(param_1 + 0x20) == 0) && (_Memory[6] != 0)) &&
          (iVar8 = FUN_00846ef0(_Memory[6],&PTR_PTR_008f19a0,&PTR_PTR_008f1c08,0), iVar8 != 0)) {
    param_2 = FUN_00846710(0x10);
    FUN_004982b6(DAT_00a08668);
  }
LAB_004929ef:
  free(_Memory);
  return param_2;
}



/* vtable 008fb1a0 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 008fb1a0 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 008fb1a0 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 008fb1a0 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 008fb1a0 slot 17 address 0048f1a6 */

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



/* vtable 008fb1a0 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 008fb1a0 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 008fb1a0 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 008fb1a0 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


