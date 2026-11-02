/* Candidate RTTI class: WorldProviderHell
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903388 slot 0 address 00775874 */

/* ADDRESS: 00775874 NAME: thunk_FUN_0077587c */

void thunk_FUN_0077587c(void)

{
  FUN_0077587c();
  return;
}



/* vtable 00903388 slot 1 address 00775850 */

/* ADDRESS: 00775850 NAME: FUN_00775850 */

void __fastcall FUN_00775850(void *param_1)

{
  FUN_0077587c();
  free(param_1);
  return;
}



/* vtable 00903388 slot 2 address 00519f58 */

/* ADDRESS: 00519f58 NAME: FUN_00519f58 */

void __fastcall FUN_00519f58(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x2058);
  FUN_0051397e(DAT_00a06164,0,0x3ff00000,0,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* vtable 00903388 slot 3 address 0051a000 */

/* ADDRESS: 0051a000 NAME: FUN_0051a000 */

undefined4 __fastcall FUN_0051a000(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00846710(0x120);
  uVar2 = FUN_0050e3d8();
  FUN_0043a86c(*(undefined4 *)(param_1 + 4),uVar2);
  return uVar1;
}



/* vtable 00903388 slot 4 address 0051a05c */

/* ADDRESS: 0051a05c NAME: FUN_0051a05c */

undefined1 FUN_0051a05c(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0050ac3a(param_1,param_2);
  if ((*(int *)(DAT_00a06304 + 8) == iVar2) || (iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (&DAT_00a06f20)[iVar2];
  }
  return uVar1;
}



/* vtable 00903388 slot 5 address 00519f4a */

/* ADDRESS: 00519f4a NAME: FUN_00519f4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519f4a(void)

{
  return (float10)_DAT_00896db4;
}



/* vtable 00903388 slot 6 address 00519c68 */

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



/* vtable 00903388 slot 7 address 00519fce */

/* ADDRESS: 00519fce NAME: FUN_00519fce */

void FUN_00519fce(void)

{
  FUN_00509e86(0xa0000000,0x3fc99999,DAT_00896db8,DAT_00896db8);
  return;
}



/* vtable 00903388 slot 8 address 00519f54 */

/* ADDRESS: 00519f54 NAME: FUN_00519f54 */

undefined4 FUN_00519f54(void)

{
  return 0;
}



/* vtable 00903388 slot 9 address 00519aa6 */

/* ADDRESS: 00519aa6 NAME: FUN_00519aa6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519aa6(void)

{
  return (float10)_DAT_00896d44;
}



/* vtable 00903388 slot 10 address 00519aa2 */

/* ADDRESS: 00519aa2 NAME: FUN_00519aa2 */

undefined1 FUN_00519aa2(void)

{
  return 1;
}



/* vtable 00903388 slot 11 address 00773f94 */

/* ADDRESS: 00773f94 NAME: FUN_00773f94 */

undefined1 FUN_00773f94(void)

{
  return 1;
}



/* vtable 00903388 slot 12 address 00519ef4 */

/* ADDRESS: 00519ef4 NAME: FUN_00519ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00519ef4(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar2 = DAT_00896da4;
  fVar1 = DAT_00896da0;
  iVar3 = 0;
  do {
    fVar4 = fVar2 - (float)iVar3 / fVar1;
    *(float *)(param_1 + 0x10 + iVar3 * 4) =
         ((fVar2 - fVar4) / (fVar4 * _DAT_00896da8 + fVar2)) * _DAT_00896dac + _DAT_00896db0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}


