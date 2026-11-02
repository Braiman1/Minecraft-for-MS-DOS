/* Candidate RTTI class: WorldProviderSky
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902abc slot 0 address 00775548 */

/* ADDRESS: 00775548 NAME: thunk_FUN_00775550 */

void thunk_FUN_00775550(void)

{
  FUN_00775550();
  return;
}



/* vtable 00902abc slot 1 address 00775524 */

/* ADDRESS: 00775524 NAME: FUN_00775524 */

void __fastcall FUN_00775524(void *param_1)

{
  FUN_00775550();
  free(param_1);
  return;
}



/* vtable 00902abc slot 2 address 0051a0b0 */

/* ADDRESS: 0051a0b0 NAME: FUN_0051a0b0 */

void __fastcall FUN_0051a0b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x2058);
  FUN_0051397e(DAT_00a06160,0,0x3fe00000,0,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}



/* vtable 00902abc slot 3 address 0051a11c */

/* ADDRESS: 0051a11c NAME: FUN_0051a11c */

undefined4 __fastcall FUN_0051a11c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00846710(0x1150);
  uVar2 = FUN_0050e3d8();
  FUN_0043de32(*(undefined4 *)(param_1 + 4),uVar2);
  return uVar1;
}



/* vtable 00902abc slot 4 address 0051a224 */

/* ADDRESS: 0051a224 NAME: FUN_0051a224 */

undefined4 FUN_0051a224(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0050ac3a(param_1,param_2);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if ((int)uVar3 != 0) {
    uVar1 = (**(code **)(**(int **)((&DAT_00a07120)[(int)uVar3] + 0x50) + 0x14))(uVar2,uVar2);
  }
  return uVar1;
}



/* vtable 00902abc slot 5 address 0051a098 */

/* ADDRESS: 0051a098 NAME: FUN_0051a098 */

float10 FUN_0051a098(void)

{
  return (float10)0;
}



/* vtable 00902abc slot 6 address 0051a09e */

/* ADDRESS: 0051a09e NAME: FUN_0051a09e */

undefined4 FUN_0051a09e(void)

{
  return 0;
}



/* vtable 00902abc slot 7 address 0051a178 */

/* ADDRESS: 0051a178 NAME: FUN_0051a178 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a178(float param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = (float10)FUN_004a3d60(DAT_00896dc4 * param_1 + DAT_00896dc4 * param_1);
  fVar2 = 0.0;
  fVar3 = (float)fVar1 + (float)fVar1 + _DAT_00896dc8;
  if (0.0 <= fVar3) {
    fVar2 = (float)(~-(uint)(DAT_00896dcc < fVar3) & (uint)fVar3 |
                   (uint)DAT_00896dcc & -(uint)(DAT_00896dcc < fVar3));
  }
  dVar4 = (double)((DAT_00896dd0 * fVar2 + _DAT_00896dd4) * _DAT_00896dd8);
  FUN_00509e86(dVar4,dVar4,(double)((fVar2 * _DAT_00896ddc + _DAT_00896de0) * _DAT_00896de4));
  return;
}



/* vtable 00902abc slot 8 address 00519aa2 */

/* ADDRESS: 00519aa2 NAME: FUN_00519aa2 */

undefined1 FUN_00519aa2(void)

{
  return 1;
}



/* vtable 00902abc slot 9 address 0051a0a8 */

/* ADDRESS: 0051a0a8 NAME: FUN_0051a0a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0051a0a8(void)

{
  return (float10)_DAT_00896dc0;
}



/* vtable 00902abc slot 10 address 0051a0a4 */

/* ADDRESS: 0051a0a4 NAME: FUN_0051a0a4 */

undefined4 FUN_0051a0a4(void)

{
  return 0;
}



/* vtable 00902abc slot 11 address 00773f94 */

/* ADDRESS: 00773f94 NAME: FUN_00773f94 */

undefined1 FUN_00773f94(void)

{
  return 1;
}



/* vtable 00902abc slot 12 address 00519a4c */

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


