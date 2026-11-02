/* Candidate RTTI class: WorldProviderSurface
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009045ac slot 0 address 00776118 */

/* ADDRESS: 00776118 NAME: thunk_FUN_00776120 */

void thunk_FUN_00776120(void)

{
  FUN_00776120();
  return;
}



/* vtable 009045ac slot 1 address 007760f4 */

/* ADDRESS: 007760f4 NAME: FUN_007760f4 */

void __fastcall FUN_007760f4(void *param_1)

{
  FUN_00776120();
  free(param_1);
  return;
}



/* vtable 009045ac slot 2 address 00519ad2 */

/* ADDRESS: 00519ad2 NAME: FUN_00519ad2 */

void __fastcall FUN_00519ad2(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x2040);
  FUN_00513128(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* vtable 009045ac slot 3 address 00519b1c */

/* ADDRESS: 00519b1c NAME: FUN_00519b1c */

undefined4 __fastcall FUN_00519b1c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00846710(0x1150);
  uVar2 = FUN_0050e3d8();
  FUN_0043910a(*(undefined4 *)(param_1 + 4),uVar2);
  return uVar1;
}



/* vtable 009045ac slot 4 address 00519b78 */

/* ADDRESS: 00519b78 NAME: FUN_00519b78 */

bool FUN_00519b78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0050ac3a(param_1,param_2);
  return *(int *)(DAT_00a062f0 + 8) == iVar1;
}



/* vtable 009045ac slot 5 address 00519ba6 */

/* ADDRESS: 00519ba6 NAME: FUN_00519ba6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519ba6(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  iVar1 = FUN_00750ea0(param_1,param_2,24000,0);
  fVar3 = ((float)iVar1 + param_3) / _DAT_00896d48 - _DAT_00896d4c;
  if (0.0 <= fVar3) {
    if (DAT_00896d34 < fVar3) {
      fVar3 = fVar3 - DAT_00896d34;
    }
  }
  else {
    fVar3 = fVar3 + DAT_00896d34;
  }
  fVar2 = (float10)thunk_FUN_00412794((double)fVar3 * _DAT_00896d50);
  return (float10)(((DAT_00896d34 - (float)(((double)fVar2 + _DAT_00896d58) * _DAT_00896d60)) -
                   fVar3) / _DAT_00896d38 + fVar3);
}



/* vtable 009045ac slot 6 address 00519c68 */

/* ADDRESS: 00519c68 NAME: FUN_00519c68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00519c68(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float10)FUN_004a3d60(DAT_00896d68 * param_2 + DAT_00896d68 * param_2);
  fVar3 = (float)fVar2;
  if ((fVar3 < _DAT_00896d6c) || (DAT_00896d70 < fVar3)) {
    iVar1 = 0;
  }
  else {
    fVar3 = (fVar3 / DAT_00896d70) * DAT_00896d74 + DAT_00896d74;
    fVar2 = (float10)FUN_004a3d32(DAT_00896d68 * fVar3);
    iVar1 = param_1 + 0x54;
    fVar5 = DAT_00896d34 - (DAT_00896d34 - (float)fVar2) * _DAT_00896d78;
    fVar6 = DAT_00896d7c * fVar3 + DAT_00896d80;
    fVar4 = fVar3 * fVar3 * DAT_00896d80;
    *(float *)(param_1 + 0x60) = fVar5 * fVar5;
    *(float *)(param_1 + 0x54) = fVar6;
    fVar3 = DAT_00896d84;
    *(float *)(param_1 + 0x5c) = DAT_00896d84;
    *(float *)(param_1 + 0x58) = fVar4 + fVar3;
  }
  return iVar1;
}



/* vtable 009045ac slot 7 address 00519d58 */

/* ADDRESS: 00519d58 NAME: FUN_00519d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519d58(float param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float10)FUN_004a3d60(DAT_00896d68 * param_1 + DAT_00896d68 * param_1);
  fVar2 = 0.0;
  fVar3 = (float)fVar1 + (float)fVar1 + DAT_00896d74;
  if (0.0 <= fVar3) {
    fVar2 = (float)(~-(uint)(DAT_00896d34 < fVar3) & (uint)fVar3 |
                   (uint)DAT_00896d34 & -(uint)(DAT_00896d34 < fVar3));
  }
  fVar3 = DAT_00896d88 * fVar2 + _DAT_00896d8c;
  FUN_00509e86((double)(fVar3 * _DAT_00896d9c),(double)(DAT_00896d98 * fVar3),
               (double)(fVar2 * _DAT_00896d90 + _DAT_00896d94));
  return;
}



/* vtable 009045ac slot 8 address 00519aa2 */

/* ADDRESS: 00519aa2 NAME: FUN_00519aa2 */

undefined1 FUN_00519aa2(void)

{
  return 1;
}



/* vtable 009045ac slot 9 address 00519aa6 */

/* ADDRESS: 00519aa6 NAME: FUN_00519aa6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519aa6(void)

{
  return (float10)_DAT_00896d44;
}



/* vtable 009045ac slot 10 address 00519aa2 */
/* Already included above. */

/* vtable 009045ac slot 11 address 00773f94 */

/* ADDRESS: 00773f94 NAME: FUN_00773f94 */

undefined1 FUN_00773f94(void)

{
  return 1;
}



/* vtable 009045ac slot 12 address 00519a4c */

/* ADDRESS: 00519a4c NAME: FUN_00519a4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00519a4c(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar2 = DAT_00896d34;
  fVar1 = DAT_00896d30;
  iVar3 = 0;
  do {
    fVar4 = fVar2 - (float)iVar3 / fVar1;
    *(float *)(param_1 + 0x10 + iVar3 * 4) =
         ((fVar2 - fVar4) / (fVar4 * _DAT_00896d38 + fVar2)) * _DAT_00896d3c + _DAT_00896d40;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}


