/* Candidate RTTI class: JavaNetwork::(anonymous namespace)::SocketOutputBuffer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00883224 slot 0 address 0040d492 */

/* ADDRESS: 0040d492 NAME: FUN_0040d492 */

void __fastcall FUN_0040d492(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00883224;
  FUN_0040d450();
  FUN_0080a950();
  return;
}



/* vtable 00883224 slot 1 address 0040d4d2 */

/* ADDRESS: 0040d4d2 NAME: FUN_0040d4d2 */

void __fastcall FUN_0040d4d2(void *param_1)

{
  FUN_0040d492();
  free(param_1);
  return;
}



/* vtable 00883224 slot 2 address 0080a1f0 */

/* ADDRESS: 0080a1f0 NAME: FUN_0080a1f0 */

void FUN_0080a1f0(void)

{
  return;
}



/* vtable 00883224 slot 3 address 0080a390 */

/* ADDRESS: 0080a390 NAME: FUN_0080a390 */

undefined4 __fastcall FUN_0080a390(undefined4 param_1)

{
  return param_1;
}



/* vtable 00883224 slot 4 address 0080a660 */

/* ADDRESS: 0080a660 NAME: FUN_0080a660 */

undefined4 * __fastcall FUN_0080a660(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 00883224 slot 5 address 0080a680 */

/* ADDRESS: 0080a680 NAME: FUN_0080a680 */

undefined4 * __fastcall FUN_0080a680(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* vtable 00883224 slot 6 address 0040d450 */

/* ADDRESS: 0040d450 NAME: FUN_0040d450 */

int __fastcall FUN_0040d450(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
  return (uVar1 & 0xff) - 1;
}



/* vtable 00883224 slot 7 address 0080a7d0 */

/* ADDRESS: 0080a7d0 NAME: FUN_0080a7d0 */

undefined4 FUN_0080a7d0(void)

{
  return 0;
}



/* vtable 00883224 slot 8 address 0080a4d0 */

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



/* vtable 00883224 slot 9 address 0080a820 */

/* ADDRESS: 0080a820 NAME: FUN_0080a820 */

undefined4 FUN_0080a820(void)

{
  return 0xffffffff;
}



/* vtable 00883224 slot 10 address 0080a2a0 */

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



/* vtable 00883224 slot 11 address 0080a7a0 */

/* ADDRESS: 0080a7a0 NAME: FUN_0080a7a0 */

undefined4 FUN_0080a7a0(void)

{
  return 0xffffffff;
}



/* vtable 00883224 slot 12 address 0040d420 */

/* ADDRESS: 0040d420 NAME: FUN_0040d420 */

undefined4 __thiscall FUN_0040d420(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(param_2,param_3);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = param_3;
  }
  return uVar2;
}



/* vtable 00883224 slot 13 address 0040d6be */

/* ADDRESS: 0040d6be NAME: FUN_0040d6be */

int __thiscall FUN_0040d6be(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_d [5];
  
  iVar2 = 0;
  if (param_2 != -1) {
    auStack_d[0] = (undefined1)param_2;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(auStack_d,1);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = param_2;
    }
  }
  return iVar2;
}


