/* Candidate RTTI class: ItemSapling
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc958 slot 0 address 007724b4 */

/* ADDRESS: 007724b4 NAME: FUN_007724b4 */

void FUN_007724b4(void)

{
  return;
}



/* vtable 008fc958 slot 1 address 0077249c */

/* ADDRESS: 0077249c NAME: FUN_0077249c */

void __fastcall FUN_0077249c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fc958 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 008fc958 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 008fc958 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 008fc958 slot 5 address 004979c6 */

/* ADDRESS: 004979c6 NAME: FUN_004979c6 */

void FUN_004979c6(undefined4 param_1)

{
  (**(code **)(*DAT_00a06308 + 0x44))(0,param_1);
  return;
}



/* vtable 008fc958 slot 6 address 00491cf4 */

/* ADDRESS: 00491cf4 NAME: FUN_00491cf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall
FUN_00491cf4(int *param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  char local_41;
  undefined1 local_38 [40];
  
  iVar3 = (**(code **)(*param_4 + 8))(param_5,param_6,param_7);
  if (*(int *)(DAT_00a061e8 + 8) == iVar3) {
    param_8 = 0;
  }
  else if (param_8 == 0) {
    param_6 = param_6 + -1;
  }
  else if (param_8 == 1) {
    param_6 = param_6 + 1;
  }
  else if (param_8 == 2) {
    param_7 = param_7 + -1;
  }
  else if (param_8 == 3) {
    param_7 = param_7 + 1;
  }
  else if (param_8 == 4) {
    param_5 = param_5 + -1;
  }
  else if (param_8 == 5) {
    param_5 = param_5 + 1;
  }
  if ((*param_2 == 0) ||
     (((param_6 == 0x7f &&
       (cVar2 = (**(code **)(**(int **)((&DAT_00a07120)[param_1[8]] + 0x50) + 0xc))(), cVar2 != '\0'
       )) || (local_41 = FUN_0050f676(param_1[8],param_5,param_6,param_7,0,param_8),
             local_41 == '\0')))) {
    local_41 = '\0';
  }
  else {
    iVar3 = (&DAT_00a07120)[param_1[8]];
    pcVar1 = *(code **)(*param_1 + 0x24);
    uVar4 = FUN_0049870e();
    uVar4 = (*pcVar1)(uVar4);
    cVar2 = FUN_0050b8ba(param_5,param_6,param_7,param_1[8],uVar4);
    if (cVar2 != '\0') {
      (**(code **)(*(int *)(&DAT_00a07120)[param_1[8]] + 0xb8))
                (param_4,param_5,param_6,param_7,param_8);
      (**(code **)(*(int *)(&DAT_00a07120)[param_1[8]] + 0xec))
                (param_4,param_5,param_6,param_7,param_3);
      fVar5 = (float10)(**(code **)(**(int **)(iVar3 + 0x48) + 0xc))();
      fVar7 = (float)fVar5 * _DAT_0088da60;
      fVar5 = (float10)(**(code **)(**(int **)(iVar3 + 0x48) + 8))();
      fVar6 = ((float)fVar5 + _DAT_0088da64) * DAT_0088da68;
      (**(code **)(**(int **)(iVar3 + 0x48) + 0x14))();
      FUN_0050c650((double)((float)param_5 + DAT_0088da68),(double)((float)param_6 + DAT_0088da68),
                   (double)((float)param_7 + DAT_0088da68),local_38,fVar6,fVar7);
      FUN_0081ffd0();
      *param_2 = *param_2 + -1;
    }
  }
  return local_41;
}



/* vtable 008fc958 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 008fc958 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 008fc958 slot 9 address 004979bc */

/* ADDRESS: 004979bc NAME: FUN_004979bc */

undefined4 FUN_004979bc(undefined4 param_1)

{
  return param_1;
}



/* vtable 008fc958 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 008fc958 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 008fc958 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 008fc958 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 008fc958 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 008fc958 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 008fc958 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 008fc958 slot 17 address 00491cae */

/* ADDRESS: 00491cae NAME: FUN_00491cae */

undefined4 __thiscall FUN_00491cae(undefined4 param_1,int param_2)

{
  undefined4 extraout_EDX;
  undefined1 local_28 [28];
  
  (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(param_2 + 0x20)] + 0xf8))
            ((int *)(&DAT_00a07120)[*(int *)(param_2 + 0x20)]);
  FUN_00823120(local_28);
  FUN_0081ffd0(extraout_EDX);
  return param_1;
}



/* vtable 008fc958 slot 18 address 00491c68 */

/* ADDRESS: 00491c68 NAME: FUN_00491c68 */

undefined4 __thiscall FUN_00491c68(undefined4 param_1,int param_2)

{
  undefined4 extraout_EDX;
  undefined1 local_28 [28];
  
  (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(param_2 + 0x20)] + 0xf8))
            ((int *)(&DAT_00a07120)[*(int *)(param_2 + 0x20)]);
  FUN_00823120(local_28);
  FUN_0081ffd0(extraout_EDX);
  return param_1;
}



/* vtable 008fc958 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 008fc958 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 008fc958 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


