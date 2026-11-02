/* Candidate RTTI class: (anonymous namespace)::VectorOutputBuf
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0088f570 slot 0 address 004a3ef2 */

/* ADDRESS: 004a3ef2 NAME: FUN_004a3ef2 */

void __fastcall FUN_004a3ef2(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0088f570;
  FUN_0080a950();
  return;
}



/* vtable 0088f570 slot 1 address 004a3f22 */

/* ADDRESS: 004a3f22 NAME: FUN_004a3f22 */

void __fastcall FUN_004a3f22(void *param_1)

{
  FUN_004a3ef2();
  free(param_1);
  return;
}



/* vtable 0088f570 slot 2 address 0080a1f0 */

/* ADDRESS: 0080a1f0 NAME: FUN_0080a1f0 */

void FUN_0080a1f0(void)

{
  return;
}



/* vtable 0088f570 slot 3 address 0080a390 */

/* ADDRESS: 0080a390 NAME: FUN_0080a390 */

undefined4 __fastcall FUN_0080a390(undefined4 param_1)

{
  return param_1;
}



/* vtable 0088f570 slot 4 address 0080a660 */

/* ADDRESS: 0080a660 NAME: FUN_0080a660 */

undefined4 * __fastcall FUN_0080a660(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 0088f570 slot 5 address 0080a680 */

/* ADDRESS: 0080a680 NAME: FUN_0080a680 */

undefined4 * __fastcall FUN_0080a680(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 0088f570 slot 6 address 0080a1d0 */

/* ADDRESS: 0080a1d0 NAME: FUN_0080a1d0 */

undefined4 FUN_0080a1d0(void)

{
  return 0;
}



/* vtable 0088f570 slot 7 address 0080a7d0 */

/* ADDRESS: 0080a7d0 NAME: FUN_0080a7d0 */

undefined4 FUN_0080a7d0(void)

{
  return 0;
}



/* vtable 0088f570 slot 8 address 0080a4d0 */

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



/* vtable 0088f570 slot 9 address 0080a820 */

/* ADDRESS: 0080a820 NAME: FUN_0080a820 */

undefined4 FUN_0080a820(void)

{
  return 0xffffffff;
}



/* vtable 0088f570 slot 10 address 0080a2a0 */

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



/* vtable 0088f570 slot 11 address 0080a7a0 */

/* ADDRESS: 0080a7a0 NAME: FUN_0080a7a0 */

undefined4 FUN_0080a7a0(void)

{
  return 0xffffffff;
}



/* vtable 0088f570 slot 12 address 004a4a82 */

/* ADDRESS: 004a4a82 NAME: FUN_004a4a82 */

uint __thiscall FUN_004a4a82(int param_1,undefined1 *param_2,uint param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  void *_Memory;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (0 < (int)param_3) {
    piVar1 = *(int **)(param_1 + 0x20);
    puVar2 = (undefined1 *)piVar1[1];
    _Memory = (void *)*piVar1;
    if ((uint)(piVar1[2] - (int)puVar2) < param_3) {
      uVar6 = (int)puVar2 - (int)_Memory;
      if (0x7fffffff - uVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::_M_range_insert");
      }
      uVar7 = uVar6;
      if (uVar6 <= param_3) {
        uVar7 = param_3;
      }
      uVar7 = uVar7 + uVar6;
      if (0x7fffffff < uVar7) {
        uVar7 = 0x7fffffff;
      }
      iVar3 = FUN_00846710(uVar7);
      puVar4 = (undefined1 *)FUN_0083e4bc(_Memory,puVar2,iVar3);
      for (uVar6 = param_3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar5 = FUN_0083e4bc(puVar2,puVar2,puVar4);
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      piVar1[1] = iVar5;
      *piVar1 = iVar3;
      piVar1[2] = iVar3 + uVar7;
    }
    else {
      puVar4 = puVar2;
      for (uVar6 = param_3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + param_3;
      FUN_0083e4bc(puVar2,puVar2,iVar3 + param_3);
      FUN_004a3f4b();
    }
  }
  return param_3;
}



/* vtable 0088f570 slot 13 address 004a3fa2 */

/* ADDRESS: 004a3fa2 NAME: FUN_004a3fa2 */

int __thiscall FUN_004a3fa2(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *_Memory;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x20);
    puVar3 = (undefined1 *)puVar1[1];
    if (puVar3 == (undefined1 *)puVar1[2]) {
      _Memory = (undefined1 *)*puVar1;
      iVar5 = (int)puVar3 - (int)_Memory;
      if (iVar5 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::_M_realloc_append");
      }
      iVar4 = 1;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      uVar2 = 0x7fffffff;
      if ((uint)(iVar4 + iVar5) < 0x80000000) {
        uVar2 = iVar4 + iVar5;
      }
      puVar3 = (undefined1 *)FUN_00846710(uVar2);
      puVar3[iVar5] = (undefined1)param_2;
      if (iVar5 != 0) {
        puVar6 = _Memory;
        puVar7 = puVar3;
        for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      if (_Memory != (undefined1 *)0x0) {
        free(_Memory);
      }
      *puVar1 = puVar3;
      puVar1[1] = puVar3 + iVar5 + 1;
      puVar1[2] = puVar3 + uVar2;
    }
    else {
      *puVar3 = (undefined1)param_2;
      puVar1[1] = puVar1[1] + 1;
    }
  }
  return param_2;
}


