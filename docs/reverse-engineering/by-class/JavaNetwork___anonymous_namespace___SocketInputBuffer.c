/* Candidate RTTI class: JavaNetwork::(anonymous namespace)::SocketInputBuffer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008831e4 slot 0 address 0040d486 */

/* ADDRESS: 0040d486 NAME: FUN_0040d486 */

void __fastcall FUN_0040d486(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008831e4;
  FUN_0080a950();
  return;
}



/* vtable 008831e4 slot 1 address 0040d4ae */

/* ADDRESS: 0040d4ae NAME: FUN_0040d4ae */

void __fastcall FUN_0040d4ae(void *param_1)

{
  FUN_0040d486();
  free(param_1);
  return;
}



/* vtable 008831e4 slot 2 address 0080a1f0 */

/* ADDRESS: 0080a1f0 NAME: FUN_0080a1f0 */

void FUN_0080a1f0(void)

{
  return;
}



/* vtable 008831e4 slot 3 address 0080a390 */

/* ADDRESS: 0080a390 NAME: FUN_0080a390 */

undefined4 __fastcall FUN_0080a390(undefined4 param_1)

{
  return param_1;
}



/* vtable 008831e4 slot 4 address 0080a660 */

/* ADDRESS: 0080a660 NAME: FUN_0080a660 */

undefined4 * __fastcall FUN_0080a660(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 008831e4 slot 5 address 0080a680 */

/* ADDRESS: 0080a680 NAME: FUN_0080a680 */

undefined4 * __fastcall FUN_0080a680(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 008831e4 slot 6 address 0080a1d0 */

/* ADDRESS: 0080a1d0 NAME: FUN_0080a1d0 */

undefined4 FUN_0080a1d0(void)

{
  return 0;
}



/* vtable 008831e4 slot 7 address 0080a7d0 */

/* ADDRESS: 0080a7d0 NAME: FUN_0080a7d0 */

undefined4 FUN_0080a7d0(void)

{
  return 0;
}



/* vtable 008831e4 slot 8 address 0080a4d0 */

/* ADDRESS: 0080a4d0 NAME: FUN_0080a4d0 */

int __thiscall FUN_0080a4d0(int *param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  
  iVar5 = 0;
LAB_0080a4f0:
  if (param_3 <= iVar5) {
    return iVar5;
  }
  sVar2 = param_1[3] - param_1[2];
  if (sVar2 != 0) goto code_r0x0080a4fe;
  goto LAB_0080a530;
code_r0x0080a4fe:
  _Size = param_3 - iVar5;
  if ((int)sVar2 < param_3 - iVar5) {
    _Size = sVar2;
  }
  memcpy(param_2,(void *)param_1[2],_Size);
  param_1[2] = param_1[2] + _Size;
  iVar5 = iVar5 + _Size;
  param_2 = param_2 + _Size;
  if (iVar5 < param_3) {
LAB_0080a530:
    pcVar1 = *(code **)(*param_1 + 0x28);
    if (pcVar1 == (code *)&LAB_0080a2a0) {
      pcVar1 = *(code **)(*param_1 + 0x24);
      if (pcVar1 == (code *)&LAB_0080a820) {
        return iVar5;
      }
      iVar3 = (*pcVar1)();
      if (iVar3 == -1) {
        return iVar5;
      }
      uVar4 = (uint)*(byte *)param_1[2];
      param_1[2] = (int)((byte *)param_1[2] + 1);
    }
    else {
      uVar4 = (*pcVar1)();
      if (uVar4 == 0xffffffff) {
        return iVar5;
      }
    }
    *param_2 = (char)uVar4;
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_0080a4f0;
}



/* vtable 008831e4 slot 9 address 0040d5c8 */

/* ADDRESS: 0040d5c8 NAME: FUN_0040d5c8 */

uint __fastcall FUN_0040d5c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(byte **)(param_1 + 8) < *(byte **)(param_1 + 0xc)) {
    return (uint)**(byte **)(param_1 + 8);
  }
  iVar1 = param_1 + 0x24;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(iVar1,0x200);
  uVar3 = 0xffffffff;
  if (0 < iVar2) {
    *(int *)(param_1 + 4) = iVar1;
    uVar3 = (uint)*(byte *)(param_1 + 0x24);
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar1 + iVar2;
  }
  return uVar3;
}



/* vtable 008831e4 slot 10 address 0080a2a0 */

/* ADDRESS: 0080a2a0 NAME: FUN_0080a2a0 */

uint __fastcall FUN_0080a2a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_0080a820) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)param_1[2];
  param_1[2] = (int)((byte *)param_1[2] + 1);
  return (uint)bVar1;
}



/* vtable 008831e4 slot 11 address 0080a7a0 */

/* ADDRESS: 0080a7a0 NAME: FUN_0080a7a0 */

undefined4 FUN_0080a7a0(void)

{
  return 0xffffffff;
}



/* vtable 008831e4 slot 12 address 0080a5a0 */

/* ADDRESS: 0080a5a0 NAME: FUN_0080a5a0 */

int __thiscall FUN_0080a5a0(int *param_1,undefined1 *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  undefined1 *puVar4;
  
  iVar3 = 0;
LAB_0080a5c0:
  if (param_3 <= iVar3) {
    return iVar3;
  }
  sVar1 = param_1[6] - param_1[5];
  puVar4 = param_2;
  if (sVar1 != 0) goto code_r0x0080a5ce;
  goto LAB_0080a600;
code_r0x0080a5ce:
  _Size = param_3 - iVar3;
  if ((int)sVar1 < param_3 - iVar3) {
    _Size = sVar1;
  }
  iVar3 = iVar3 + _Size;
  puVar4 = param_2 + _Size;
  memcpy((void *)param_1[5],param_2,_Size);
  param_1[5] = param_1[5] + _Size;
  param_2 = puVar4;
  if (iVar3 < param_3) {
LAB_0080a600:
    if (*(code **)(*param_1 + 0x34) == (code *)&LAB_0080a720) {
      return iVar3;
    }
    iVar2 = (**(code **)(*param_1 + 0x34))(*puVar4);
    if (iVar2 == -1) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_2 = puVar4 + 1;
  }
  goto LAB_0080a5c0;
}



/* vtable 008831e4 slot 13 address 0080a720 */

/* ADDRESS: 0080a720 NAME: FUN_0080a720 */

undefined4 FUN_0080a720(void)

{
  return 0xffffffff;
}


