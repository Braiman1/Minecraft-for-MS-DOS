/* Candidate RTTI class: BiomeGenTaiga
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe4a8 slot 0 address 00415d44 */

/* ADDRESS: 00415d44 NAME: FUN_00415d44 */

void FUN_00415d44(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0040e7b8(3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00846710(4);
    *puVar2 = &PTR_LAB_00901370;
  }
  else {
    puVar2 = (undefined4 *)FUN_00846710(4);
    *puVar2 = &PTR_LAB_0090138c;
  }
  return;
}



/* vtable 008fe4a8 slot 1 address 00414d78 */

/* ADDRESS: 00414d78 NAME: FUN_00414d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00414d78(float param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1 = param_1 / _DAT_0088639c;
  fVar5 = DAT_00886394;
  if (DAT_00886394 <= param_1) {
    fVar5 = (float)(~-(uint)(DAT_00886398 < param_1) & (uint)param_1 |
                   (uint)DAT_00886398 & -(uint)(DAT_00886398 < param_1));
  }
  fVar3 = DAT_008863ac - DAT_008863a8 * fVar5;
  fVar6 = DAT_008863a0 * fVar5 + DAT_008863a4;
  fVar2 = (float10)FUN_00766390(fVar3);
  fVar3 = (fVar3 - (float)fVar2) * _DAT_008863b0;
  iVar1 = (int)fVar3;
  fVar3 = fVar3 - (float)iVar1;
  fVar4 = DAT_00886398 - fVar6;
  fVar5 = DAT_00886398 - fVar6 * fVar3;
  fVar3 = DAT_00886398 - fVar6 * (DAT_00886398 - fVar3);
  fVar6 = fVar4;
  switch(iVar1) {
  case 2:
    fVar5 = fVar4;
    fVar6 = fVar3;
  case 1:
    fVar4 = fVar5;
    fVar5 = DAT_00886398;
    goto LAB_00414e87;
  case 3:
    break;
  case 4:
    fVar5 = fVar4;
    fVar4 = fVar3;
    break;
  default:
    fVar3 = fVar4;
    fVar6 = fVar5;
  case 0:
    fVar5 = fVar3;
    fVar4 = DAT_00886398;
    goto LAB_00414e87;
  }
  fVar6 = DAT_00886398;
LAB_00414e87:
  return (int)(fVar4 * DAT_008863b4 + DAT_008863a4) << 0x10 |
         (int)(fVar5 * DAT_008863b4 + DAT_008863a4) << 8 |
         (int)(fVar6 * DAT_008863b4 + DAT_008863a4) | 0xff000000;
}



/* vtable 008fe4a8 slot 2 address 00414ce0 */

/* ADDRESS: 00414ce0 NAME: FUN_00414ce0 */

int __thiscall FUN_00414ce0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_1 + 0x2c;
  if (((iVar1 != 0) && (iVar2 = param_1 + 0x38, iVar1 != 1)) && (iVar2 = param_1 + 0x44, iVar1 != 2)
     ) {
    iVar2 = 0;
  }
  return iVar2;
}



/* vtable 008fe4a8 slot 3 address 00773b1c */

/* ADDRESS: 00773b1c NAME: thunk_FUN_00773b24 */

void thunk_FUN_00773b24(void)

{
  FUN_00773b24();
  return;
}



/* vtable 008fe4a8 slot 4 address 00773af8 */

/* ADDRESS: 00773af8 NAME: FUN_00773af8 */

void __fastcall FUN_00773af8(void *param_1)

{
  FUN_00773b24();
  free(param_1);
  return;
}


