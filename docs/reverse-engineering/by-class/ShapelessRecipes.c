/* Candidate RTTI class: ShapelessRecipes
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009029f8 slot 0 address 004f33e8 */

/* ADDRESS: 004f33e8 NAME: FUN_004f33e8 */

void __fastcall FUN_004f33e8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  for (puVar2 = *(undefined4 **)(param_1 + 8); puVar1 != puVar2; puVar2 = puVar2 + 1) {
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
    }
  }
  FUN_007f00b4();
  return;
}



/* vtable 009029f8 slot 1 address 004f343e */

/* ADDRESS: 004f343e NAME: FUN_004f343e */

void __fastcall FUN_004f343e(void *param_1)

{
  FUN_004f33e8();
  free(param_1);
  return;
}



/* vtable 009029f8 slot 2 address 004f3462 */

/* ADDRESS: 004f3462 NAME: FUN_004f3462 */

bool __fastcall FUN_004f3462(int param_1)

{
  int *_Src;
  int iVar1;
  int iVar2;
  size_t _Size;
  int *_Dst;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_30;
  int *piStack_28;
  int *piStack_24;
  
  FUN_0081d75c(param_1 + 8);
  iStack_30 = 0;
LAB_004f3488:
  iVar3 = 0;
LAB_004f348a:
  uVar5 = FUN_0048e17e(iVar3,iStack_30);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    _Dst = piStack_28;
    uVar7 = uVar6;
    do {
      if (piStack_24 == _Dst) {
        bVar4 = false;
        goto LAB_004f354e;
      }
      if (*(int *)((int)uVar5 + 8) == *(int *)(*_Dst + 8)) {
        iVar1 = FUN_0049870e(uVar6,uVar7);
        if (iVar1 == -1) goto LAB_004f34ca;
        iVar1 = FUN_0049870e();
        iVar2 = FUN_0049870e();
        if (iVar1 == iVar2) goto LAB_004f34ca;
      }
      _Dst = _Dst + 1;
    } while( true );
  }
  goto LAB_004f351d;
LAB_004f34ca:
  _Src = _Dst + 1;
  if (piStack_24 != _Src) {
    _Size = (int)piStack_24 - (int)_Src;
    if ((int)_Size < 5) {
      if (_Size == 4) {
        *_Dst = _Dst[1];
      }
    }
    else {
      memmove(_Dst,_Src,_Size);
    }
  }
  piStack_24 = piStack_24 + -1;
LAB_004f351d:
  iVar3 = iVar3 + 1;
  if (iVar3 == 3) goto code_r0x004f3527;
  goto LAB_004f348a;
code_r0x004f3527:
  iStack_30 = iStack_30 + 1;
  if (iStack_30 == 3) {
    bVar4 = piStack_24 == piStack_28;
LAB_004f354e:
    FUN_007f00b4();
    return bVar4;
  }
  goto LAB_004f3488;
}



/* vtable 009029f8 slot 3 address 004f33d6 */

/* ADDRESS: 004f33d6 NAME: FUN_004f33d6 */

void FUN_004f33d6(void)

{
  FUN_004988fe();
  return;
}



/* vtable 009029f8 slot 4 address 004f33cc */

/* ADDRESS: 004f33cc NAME: FUN_004f33cc */

int __fastcall FUN_004f33cc(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}



/* vtable 009029f8 slot 5 address 004f33c8 */

/* ADDRESS: 004f33c8 NAME: FUN_004f33c8 */

undefined4 __fastcall FUN_004f33c8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


