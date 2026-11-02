/* Candidate RTTI class: ChunkProviderLoadOrGenerate
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904c2c slot 0 address 0043bc20 */

/* ADDRESS: 0043bc20 NAME: FUN_0043bc20 */

void __fastcall FUN_0043bc20(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_00904c2c;
  for (puVar2 = (undefined4 *)param_1[9]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    pvVar1 = (void *)puVar2[4];
    if ((pvVar1 != (void *)0x0) && ((void *)param_1[1] != pvVar1)) {
      FUN_007770bc();
      free(pvVar1);
    }
  }
  puVar2 = (undefined4 *)param_1[9];
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    free(puVar2);
    puVar2 = puVar3;
  }
  if (param_1[8] != 0) {
    puVar3 = (undefined4 *)param_1[7];
    puVar2 = puVar3 + param_1[8];
    for (; puVar2 != puVar3; puVar3 = puVar3 + 1) {
      *puVar3 = 0;
    }
  }
  param_1[10] = 0;
  param_1[9] = 0;
  puVar2 = (undefined4 *)param_1[0x10];
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    free(puVar2);
    puVar2 = puVar3;
  }
  if (param_1[0xf] != 0) {
    puVar3 = (undefined4 *)param_1[0xe];
    puVar2 = puVar3 + param_1[0xf];
    for (; puVar2 != puVar3; puVar3 = puVar3 + 1) {
      *puVar3 = 0;
    }
  }
  pvVar1 = (void *)param_1[1];
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_007770bc();
    free(pvVar1);
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  FUN_007dcb30();
  FUN_007dca08();
  return;
}



/* vtable 00904c2c slot 1 address 0043bd48 */

/* ADDRESS: 0043bd48 NAME: FUN_0043bd48 */

void __fastcall FUN_0043bd48(void *param_1)

{
  FUN_0043bc20();
  free(param_1);
  return;
}



/* vtable 00904c2c slot 2 address 0043bfb4 */

/* ADDRESS: 0043bfb4 NAME: FUN_0043bfb4 */

char __thiscall FUN_0043bfb4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int local_24;
  int local_20;
  
  cVar2 = FUN_0043b816(param_2,param_3);
  if (cVar2 != '\0') {
    if (((*(int *)(param_1 + 0x14) == param_2) && (*(int *)(param_1 + 0x18) == param_3)) &&
       (*(int *)(param_1 + 0x54) != 0)) {
      return cVar2;
    }
    local_24 = param_3;
    local_20 = param_2;
    iVar3 = FUN_007dc870(&local_24);
    if ((iVar3 != 0) && (puVar1 = *(undefined4 **)(iVar3 + 0x10), puVar1 != (undefined4 *)0x0)) {
      if (*(undefined4 **)(param_1 + 4) == puVar1) {
        return cVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0043c029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar2 = (**(code **)*puVar1)();
      return cVar2;
    }
  }
  return '\0';
}



/* vtable 00904c2c slot 3 address 0043c182 */

/* ADDRESS: 0043c182 NAME: FUN_0043c182 */

int * __thiscall FUN_0043c182(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined8 uVar9;
  undefined8 uVar10;
  char local_25;
  uint local_24;
  int local_20;
  
  if (((param_1[5] == param_2) && (param_1[6] == param_3)) && (param_1[0x15] != 0)) {
    uVar9 = FUN_0043b852();
    local_24 = param_3;
    local_20 = param_2;
    uVar1 = param_1[0xf];
    uVar10 = FUN_0043b47c(param_3 % uVar1,&local_24);
    if (((int *)uVar10 == (int *)0x0) || (iVar4 = *(int *)uVar10, iVar4 == 0)) {
      puVar3 = (undefined4 *)FUN_00846710(0x18,(int)((ulonglong)uVar10 >> 0x20));
      *puVar3 = 0;
      puVar3[3] = param_2;
      puVar3[2] = param_3;
      puVar3[4] = 0;
      puVar3[5] = 0;
      iVar4 = FUN_007dca60(param_3 % uVar1,param_3,puVar3,1);
    }
    piVar6 = (int *)param_1[0x15];
    *(undefined8 *)(iVar4 + 0x10) = uVar9;
    return piVar6;
  }
  if (((param_1[4] != 0) && (*(char *)(param_1[4] + 0x120) == '\0')) &&
     (cVar2 = FUN_0043b816(param_2,param_3), cVar2 == '\0')) {
    return (int *)param_1[1];
  }
  local_20 = param_2;
  local_24 = param_3;
  iVar4 = FUN_007dc870(&local_24);
  if (iVar4 != 0) {
    piVar6 = *(int **)(iVar4 + 0x10);
    if ((piVar6 != (int *)0x0) &&
       (((int *)param_1[1] == piVar6 ||
        (cVar2 = (**(code **)*piVar6)(param_2,param_3), cVar2 != '\0')))) {
      param_1[0x15] = (int)piVar6;
      param_1[5] = param_2;
      param_1[6] = param_3;
      uVar9 = FUN_0043b852();
      puVar5 = (undefined8 *)FUN_008396bc(&local_24);
      *puVar5 = uVar9;
      return piVar6;
    }
    FUN_0043c0e2(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),piVar6);
    FUN_007dc89c(iVar4);
  }
  piVar6 = (int *)FUN_0043b8a0(param_2,param_3,&local_25);
  if (piVar6 == (int *)0x0) {
    if (local_25 == '\0') goto LAB_0043c3a3;
    FUN_0075a3c0("ChunkProviderLoadOrGenerate: refusing to regenerate unreadable chunk %d,%d\n",
                 param_2,param_3);
LAB_0043c3aa:
    piVar6 = (int *)param_1[1];
    if (piVar6 != (int *)0x0) goto LAB_0043c3de;
  }
  else {
    if ((int *)param_1[1] != piVar6) goto LAB_0043c3de;
LAB_0043c3a3:
    if ((int *)param_1[2] == (int *)0x0) goto LAB_0043c3aa;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0xc))(param_2,param_3);
    if (piVar6 != (int *)0x0) {
      if (piVar6 != (int *)param_1[1]) {
        FUN_00432750(iVar4,iVar4);
      }
      goto LAB_0043c3de;
    }
  }
  piVar6 = (int *)param_1[1];
LAB_0043c3de:
  uVar9 = FUN_008395a4(&local_24);
  *(undefined4 *)uVar9 = piVar6;
  uVar9 = FUN_0043b852((int)((ulonglong)uVar9 >> 0x20));
  puVar5 = (undefined8 *)FUN_008396bc(&local_24);
  *puVar5 = uVar9;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x14))(extraout_ECX);
    (**(code **)(*piVar6 + 0x58))();
    if ((int *)param_1[1] != piVar6) {
      if ((char)piVar6[0x79] == '\0') {
        cVar2 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3 + 1);
        if (((cVar2 != '\0') &&
            (cVar2 = (**(code **)(*param_1 + 8))(param_2,param_3 + 1), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3), cVar2 != '\0')) {
          (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3);
        }
      }
      iVar4 = param_2 + -1;
      cVar2 = (**(code **)(*param_1 + 8))(iVar4,param_3);
      if ((cVar2 != '\0') &&
         (iVar7 = (**(code **)(*param_1 + 0xc))(iVar4,param_3), *(char *)(iVar7 + 0x1e4) == '\0')) {
        cVar2 = (**(code **)(*param_1 + 8))(iVar4,param_3 + 1);
        if ((cVar2 != '\0') &&
           ((cVar2 = (**(code **)(*param_1 + 8))(param_2,param_3 + 1), cVar2 != '\0' &&
            (cVar2 = (**(code **)(*param_1 + 8))(iVar4,param_3), cVar2 != '\0')))) {
          (**(code **)(*param_1 + 0x14))(param_1,iVar4,param_3);
        }
      }
      iVar7 = param_3 - 1;
      cVar2 = (**(code **)(*param_1 + 8))(param_2,iVar7);
      if ((cVar2 != '\0') &&
         (iVar8 = (**(code **)(*param_1 + 0xc))(param_2,iVar7), *(char *)(iVar8 + 0x1e4) == '\0')) {
        cVar2 = (**(code **)(*param_1 + 8))(param_2 + 1,iVar7);
        if ((cVar2 != '\0') &&
           ((cVar2 = (**(code **)(*param_1 + 8))(param_2,iVar7), cVar2 != '\0' &&
            (cVar2 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3), cVar2 != '\0')))) {
          (**(code **)(*param_1 + 0x14))(param_1,param_2,iVar7);
        }
      }
      cVar2 = (**(code **)(*param_1 + 8))(iVar4,iVar7);
      if ((((cVar2 != '\0') &&
           (iVar8 = (**(code **)(*param_1 + 0xc))(iVar4,iVar7), *(char *)(iVar8 + 0x1e4) == '\0'))
          && (cVar2 = (**(code **)(*param_1 + 8))(iVar4,iVar7), cVar2 != '\0')) &&
         ((cVar2 = (**(code **)(*param_1 + 8))(param_2,iVar7), cVar2 != '\0' &&
          (cVar2 = (**(code **)(*param_1 + 8))(iVar4,param_3), cVar2 != '\0')))) {
        (**(code **)(*param_1 + 0x14))(param_1,iVar4,iVar7);
      }
    }
  }
  param_1[0x15] = (int)piVar6;
  param_1[5] = param_2;
  param_1[6] = param_3;
  return piVar6;
}



/* vtable 00904c2c slot 4 address 0043b3d0 */

/* ADDRESS: 0043b3d0 NAME: FUN_0043b3d0 */

void __fastcall FUN_0043b3d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043b3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 00904c2c slot 5 address 0043b3d6 */

/* ADDRESS: 0043b3d6 NAME: FUN_0043b3d6 */

void __thiscall FUN_0043b3d6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xc))(param_3,param_4);
  if (((piVar2 != (int *)0x0) && ((int *)param_1[1] != piVar2)) && ((char)piVar2[0x79] == '\0')) {
    piVar1 = (int *)param_1[2];
    *(undefined1 *)(piVar2 + 0x79) = 1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(param_2,param_3,param_4);
      (**(code **)(*piVar2 + 0x60))();
    }
  }
  return;
}



/* vtable 00904c2c slot 6 address 0043ba28 */

/* ADDRESS: 0043ba28 NAME: FUN_0043ba28 */

undefined1 __thiscall FUN_0043ba28(int param_1,char param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  
  iVar4 = 0;
  if (param_3 != (int *)0x0) {
    for (puVar5 = *(undefined4 **)(param_1 + 0x24); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      piVar1 = (int *)puVar5[4];
      if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 4) != piVar1)) {
        uVar3 = (**(code **)(*piVar1 + 0x6c))(param_2);
        iVar4 = iVar4 + (uVar3 & 0xff);
      }
    }
  }
  local_24 = *(undefined4 **)(param_1 + 0x24);
  local_28 = 0;
  local_2c = 0;
  do {
    if (local_24 == (undefined4 *)0x0) {
      if ((param_2 != '\0') && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
      }
      return 1;
    }
    piVar1 = (int *)local_24[4];
    if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 4) != piVar1)) {
      if ((param_2 != '\0') && (*(char *)((int)piVar1 + 0x1e6) == '\0')) {
        FUN_0043b94e(piVar1);
      }
      cVar2 = (**(code **)(*piVar1 + 0x6c))(param_2);
      if (cVar2 != '\0') {
        FUN_0043b9ae(piVar1);
        local_2c = local_2c + 1;
        *(undefined1 *)((int)piVar1 + 0x1e5) = 0;
        if (local_2c == 2 && param_2 == '\0') {
          return 0;
        }
        if ((param_3 != (int *)0x0 && iVar4 != 0) && (local_28 = local_28 + 1, local_28 % 10 == 0))
        {
          (**(code **)(*param_3 + 0x10))((local_28 * 100) / iVar4);
        }
      }
    }
    local_24 = (undefined4 *)*local_24;
  } while( true );
}



/* vtable 00904c2c slot 7 address 0043c6aa */

/* ADDRESS: 0043c6aa NAME: FUN_0043c6aa */

uint __fastcall FUN_0043c6aa(int param_1)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  int extraout_EDX;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_34;
  int local_30;
  int *local_28;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  }
  lVar11 = FUN_0043b852();
  puVar2 = *(uint **)(param_1 + 0x24);
  local_30 = 0;
  iVar1 = *(int *)(param_1 + 100) * 2 + 1;
  for (puVar6 = puVar2; puVar6 != (uint *)0x0; puVar6 = (uint *)*puVar6) {
    uVar5 = puVar6[4];
    if ((uVar5 != 0) && (*(uint *)(param_1 + 4) != uVar5)) {
      uVar5 = FUN_0043b864(*(undefined4 *)(uVar5 + 0x140),*(undefined4 *)(uVar5 + 0x144));
      local_30 = local_30 + (uVar5 & 0xff);
    }
  }
  bVar9 = (uint)(iVar1 * iVar1) < *(uint *)(param_1 + 0x28);
  bVar10 = local_30 != 0;
  uVar12 = ZEXT48(puVar2);
  local_34 = 0;
  while (uVar5 = (uint)(uVar12 >> 0x20), puVar8 = (undefined4 *)uVar12, puVar8 != (undefined4 *)0x0)
  {
    iVar1 = puVar8[4];
    if ((iVar1 == 0) || (*(int *)(param_1 + 4) == iVar1)) {
      FUN_0043c038(puVar8 + 2);
      uVar12 = FUN_007dc89c(puVar8);
    }
    else {
      FUN_0077f67c(param_1 + 0x38,puVar8 + 2);
      if ((local_28 == (int *)0x0) || (*local_28 == 0)) {
        lVar3 = lVar11;
      }
      else {
        lVar3 = *(longlong *)(*local_28 + 0x10);
      }
      cVar4 = FUN_0043b864(*(undefined4 *)(iVar1 + 0x140),*(undefined4 *)(iVar1 + 0x144));
      iVar7 = extraout_EDX;
      if (cVar4 == '\0') {
LAB_0043c7f4:
        uVar12 = CONCAT44(iVar7,*puVar8);
      }
      else {
        if (!bVar9 || !bVar10) {
          iVar7 = (int)((ulonglong)(lVar11 - lVar3) >> 0x20);
          uVar5 = (uint)(199 < (uint)(lVar11 - lVar3));
          if ((SBORROW4(0,iVar7) != SBORROW4(-iVar7,uVar5)) == (int)(-iVar7 - uVar5) < 0)
          goto LAB_0043c7f4;
        }
        FUN_0043c0e2(puVar8[2],puVar8[3],iVar1);
        uVar12 = FUN_007dc89c(puVar8);
        uVar5 = (uint)(uVar12 >> 0x20);
        local_34 = local_34 + 1;
        if (((int)((-(uint)(!bVar9 || !bVar10) & 0xfffffff4) + 0x10) <= local_34) ||
           ((local_30 = local_30 + -1 + (uint)(local_30 == 0), local_30 == 0 && (bVar9 && bVar10))))
        break;
      }
    }
  }
  lVar11 = (ulonglong)uVar5 << 0x20;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    lVar11 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  }
  return (uint)lVar11 | CONCAT31((int3)((ulonglong)lVar11 >> 0x28),local_34 != 0);
}



/* vtable 00904c2c slot 8 address 0043b442 */

/* ADDRESS: 0043b442 NAME: FUN_0043b442 */

undefined1 FUN_0043b442(void)

{
  return 1;
}



/* vtable 00904c2c slot 9 address 0043b59a */

/* ADDRESS: 0043b59a NAME: FUN_0043b59a */

undefined4 __thiscall FUN_0043b59a(undefined4 param_1,int param_2)

{
  undefined1 local_e0 [28];
  undefined1 local_c4 [28];
  undefined1 local_a8 [28];
  undefined1 local_8c [28];
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0040f327(local_54,*(undefined4 *)(param_2 + 100),10);
  FUN_0040f327(local_8c,*(undefined4 *)(param_2 + 0x60),10);
  FUN_0040f327(local_e0,*(undefined4 *)(param_2 + 0x28),10);
  FUN_0043b52c("ChunkCache: ");
  local_20 = 0;
  FUN_00846878(local_c4,local_38,local_e0);
  FUN_0081ffd0();
  FUN_00846814(local_a8,local_c4," Radius: ");
  FUN_00846878(local_70,local_a8,local_8c);
  FUN_00846814(local_38,local_70," UnloadRadius: ");
  FUN_00846878(param_1,local_38,local_54);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}



/* vtable 00904c2c slot 10 address 0077ca5c */

/* ADDRESS: 0077ca5c NAME: FUN_0077ca5c */

undefined4 __fastcall FUN_0077ca5c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* vtable 00904c2c slot 11 address 0043b446 */

/* ADDRESS: 0043b446 NAME: FUN_0043b446 */

void __thiscall FUN_0043b446(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x24); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    piVar1 = (int *)puVar2[4];
    if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 4) != piVar1)) {
      (**(code **)(*piVar1 + 0x3c))(param_2);
    }
  }
  return;
}


