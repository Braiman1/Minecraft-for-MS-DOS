/* Candidate RTTI class: ChunkProvider
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008feb74 slot 0 address 00436362 */

/* ADDRESS: 00436362 NAME: FUN_00436362 */

void __fastcall FUN_00436362(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  void *_Memory;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_38 = local_20;
  *param_1 = &PTR_FUN_008feb74;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_24 = 0;
  local_20[0] = 0;
  local_34 = 1;
  local_28 = 0x3f800000;
  uVar1 = FUN_00435774();
  local_40 = &local_28;
  local_3c = 0;
  uVar2 = FUN_00435774();
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  uVar6 = FUN_007bd760(uVar1);
  pvVar3 = (void *)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != local_34) {
    pvVar3 = (void *)FUN_004357ba((int)uVar6);
    local_40 = (undefined4 *)0x0;
  }
  FUN_00839250(pvVar3);
  for (puVar5 = (undefined4 *)param_1[0xd]; puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    local_40 = (undefined4 *)puVar5[4];
    if ((local_40 != (undefined4 *)0x0) && (local_40 != (undefined4 *)param_1[8])) {
      pvVar3 = (void *)FUN_007db9f8(&local_40);
    }
  }
  for (puVar5 = local_30; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    _Memory = (void *)puVar5[1];
    if (_Memory != (void *)0x0) {
      FUN_00776efc(pvVar3);
      free(_Memory);
      pvVar3 = _Memory;
    }
  }
  puVar5 = (undefined4 *)param_1[0xd];
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar5;
    free(puVar5);
    puVar5 = puVar4;
  }
  if (param_1[0xc] != 0) {
    puVar4 = (undefined4 *)param_1[0xb];
    puVar5 = puVar4 + param_1[0xc];
    for (; puVar5 != puVar4; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  puVar5 = (undefined4 *)param_1[0x14];
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar5;
    free(puVar5);
    puVar5 = puVar4;
  }
  if (param_1[0x13] != 0) {
    puVar4 = (undefined4 *)param_1[0x12];
    puVar5 = puVar4 + param_1[0x13];
    for (; puVar5 != puVar4; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  }
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (param_1[0x19] != param_1[0x1a]) {
    param_1[0x1a] = param_1[0x19];
  }
  puVar5 = (undefined4 *)param_1[3];
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar5;
    free(puVar5);
    puVar5 = puVar4;
  }
  if (param_1[2] != 0) {
    puVar4 = (undefined4 *)param_1[1];
    puVar5 = puVar4 + param_1[2];
    for (; puVar5 != puVar4; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  }
  param_1[4] = 0;
  param_1[3] = 0;
  pvVar3 = (void *)param_1[8];
  if (pvVar3 != (void *)0x0) {
    FUN_00776efc();
    free(pvVar3);
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x1f] = 0;
  puVar5 = local_30;
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar5;
    free(puVar5);
    puVar5 = puVar4;
  }
  if (local_38 != local_20) {
    free(local_38);
  }
  FUN_007eff80();
  FUN_007dcafc();
  FUN_007dc9a0();
  FUN_007dcbd8();
  return;
}



/* vtable 008feb74 slot 1 address 004365de */

/* ADDRESS: 004365de NAME: FUN_004365de */

void __fastcall FUN_004365de(void *param_1)

{
  FUN_00436362();
  free(param_1);
  return;
}



/* vtable 008feb74 slot 2 address 00436602 */

/* ADDRESS: 00436602 NAME: FUN_00436602 */

undefined4 __thiscall FUN_00436602(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_18;
  
  uStack_20 = param_2;
  uStack_24 = param_3;
  FUN_0077f5ec(param_1 + 0x2c,&uStack_24);
  iVar1 = 0;
  if (piStack_18 != (int *)0x0) {
    iVar1 = *piStack_18;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
}



/* vtable 008feb74 slot 3 address 00436a74 */

/* ADDRESS: 00436a74 NAME: FUN_00436a74 */

void __thiscall FUN_00436a74(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  int local_24;
  int local_20;
  
  if (((param_1[0x1c] == 0) || (param_1[0x1d] != param_2)) || (param_1[0x1e] != param_3)) {
    local_24 = param_3;
    local_20 = param_2;
    iVar1 = FUN_007dc870(&local_24);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00436ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
    uVar3 = FUN_00435c28(extraout_ECX);
    puVar2 = (undefined8 *)FUN_008396bc(&local_24);
    *puVar2 = uVar3;
    iVar1 = *(int *)(iVar1 + 0x10);
    if ((iVar1 != 0) && (iVar1 != param_1[8])) {
      param_1[0x1c] = iVar1;
      param_1[0x1d] = param_2;
      param_1[0x1e] = param_3;
    }
  }
  return;
}



/* vtable 008feb74 slot 4 address 00436640 */

/* ADDRESS: 00436640 NAME: FUN_00436640 */

int * __thiscall FUN_00436640(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_EDX;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  uint local_38;
  char local_29;
  int *local_28;
  uint local_24;
  uint local_20;
  
  local_24 = param_3;
  local_20 = param_2;
  if (param_1[4] == 0) {
    piVar7 = param_1 + 3;
    do {
      piVar8 = piVar7;
      piVar7 = (int *)*piVar8;
      if (piVar7 == (int *)0x0) goto LAB_004366fa;
    } while ((param_2 != piVar7[3]) || (param_3 != piVar7[2]));
    local_38 = param_3 % (uint)param_1[2];
LAB_004366e2:
    FUN_007dcb64(local_38,piVar8,piVar7);
  }
  else {
    local_38 = param_3 % (uint)param_1[2];
    piVar8 = *(int **)(param_1[1] + local_38 * 4);
    if (piVar8 != (int *)0x0) {
      piVar7 = (int *)*piVar8;
      while ((piVar9 = piVar7, param_2 != piVar9[3] || (param_3 != piVar9[2]))) {
        piVar7 = (int *)*piVar9;
        if ((piVar7 == (int *)0x0) ||
           (piVar8 = piVar9, local_38 != (uint)piVar7[2] % (uint)param_1[2])) goto LAB_004366fa;
      }
      if (piVar8 != (int *)0x0) {
        piVar7 = (int *)*piVar8;
        goto LAB_004366e2;
      }
    }
  }
LAB_004366fa:
  uVar10 = FUN_007dc870(&local_24);
  piVar7 = (int *)((ulonglong)uVar10 >> 0x20);
  if (((int)uVar10 != 0) && (piVar9 = *(int **)((int)uVar10 + 0x10), piVar9 != (int *)0x0))
  goto LAB_00436a41;
  uVar11 = param_3;
  local_28 = (int *)FUN_00435c80(param_2,param_3,&local_29);
  if (local_28 == (int *)0x0) {
    if (local_29 == '\0') {
      if ((int *)param_1[9] == (int *)0x0) goto LAB_0043676c;
      local_28 = (int *)(**(code **)(*(int *)param_1[9] + 0xc))(param_2,param_3);
      uVar11 = 0;
    }
    else {
      uVar11 = param_2;
      FUN_0075a3c0("ChunkProvider: refusing to regenerate unreadable chunk %d,%d\n",param_2,param_3)
      ;
LAB_0043676c:
      local_28 = (int *)param_1[8];
    }
    if (local_28 == (int *)0x0) {
      local_28 = (int *)param_1[8];
    }
  }
  piVar9 = local_28;
  puVar2 = (undefined4 *)FUN_008395a4(&local_24);
  *puVar2 = piVar9;
  puVar2 = (undefined4 *)param_1[0x1a];
  if (puVar2 == (undefined4 *)param_1[0x1b]) {
    FUN_0081cab0(&local_28);
    piVar8 = extraout_ECX;
  }
  else {
    *puVar2 = piVar9;
    param_1[0x1a] = (int)(puVar2 + 1);
  }
  piVar7 = piVar8;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0x14))(piVar8,uVar11);
    (**(code **)(*piVar9 + 0x58))();
    piVar7 = piVar8;
    if ((int *)param_1[8] != piVar9) {
      if ((char)piVar9[0x79] == '\0') {
        cVar1 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3 + 1);
        if (((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*param_1 + 8))(param_2,param_3 + 1), cVar1 != '\0')) &&
           (cVar1 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3), cVar1 != '\0')) {
          (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3);
        }
      }
      iVar3 = param_2 - 1;
      cVar1 = (**(code **)(*param_1 + 8))(iVar3,param_3);
      if ((cVar1 != '\0') &&
         (iVar4 = (**(code **)(*param_1 + 0xc))(iVar3,param_3), *(char *)(iVar4 + 0x1e4) == '\0')) {
        cVar1 = (**(code **)(*param_1 + 8))(iVar3,param_3 + 1);
        if ((cVar1 != '\0') &&
           ((cVar1 = (**(code **)(*param_1 + 8))(param_2,param_3 + 1), cVar1 != '\0' &&
            (cVar1 = (**(code **)(*param_1 + 8))(iVar3,param_3), cVar1 != '\0')))) {
          (**(code **)(*param_1 + 0x14))(param_1,iVar3,param_3);
        }
      }
      iVar4 = param_3 - 1;
      cVar1 = (**(code **)(*param_1 + 8))(param_2,iVar4);
      if ((cVar1 != '\0') &&
         (iVar5 = (**(code **)(*param_1 + 0xc))(param_2,iVar4), *(char *)(iVar5 + 0x1e4) == '\0')) {
        cVar1 = (**(code **)(*param_1 + 8))(param_2 + 1,iVar4);
        if ((cVar1 != '\0') &&
           ((cVar1 = (**(code **)(*param_1 + 8))(param_2,iVar4), cVar1 != '\0' &&
            (cVar1 = (**(code **)(*param_1 + 8))(param_2 + 1,param_3), cVar1 != '\0')))) {
          (**(code **)(*param_1 + 0x14))(param_1,param_2,iVar4);
        }
      }
      cVar1 = (**(code **)(*param_1 + 8))(iVar3,iVar4);
      piVar7 = extraout_ECX_00;
      if (cVar1 != '\0') {
        uVar10 = (**(code **)(*param_1 + 0xc))(iVar3,iVar4);
        piVar7 = (int *)((ulonglong)uVar10 >> 0x20);
        if ((((*(char *)((int)uVar10 + 0x1e4) == '\0') &&
             (cVar1 = (**(code **)(*param_1 + 8))(iVar3,iVar4), piVar7 = extraout_ECX_01,
             cVar1 != '\0')) &&
            (cVar1 = (**(code **)(*param_1 + 8))(param_2,iVar4), piVar7 = extraout_EDX,
            cVar1 != '\0')) &&
           (cVar1 = (**(code **)(*param_1 + 8))(iVar3,param_3), piVar7 = extraout_ECX_02,
           cVar1 != '\0')) {
          (**(code **)(*param_1 + 0x14))(param_1,iVar3,iVar4);
          piVar7 = param_1;
        }
      }
    }
  }
LAB_00436a41:
  uVar10 = FUN_00435c28(piVar7);
  puVar6 = (undefined8 *)FUN_008396bc(&local_24);
  *puVar6 = uVar10;
  return piVar9;
}



/* vtable 008feb74 slot 5 address 0043554a */

/* ADDRESS: 0043554a NAME: FUN_0043554a */

void __thiscall FUN_0043554a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xc))(param_3,param_4);
  if (((piVar2 != (int *)0x0) && ((int *)param_1[8] != piVar2)) && ((char)piVar2[0x79] == '\0')) {
    piVar1 = (int *)param_1[9];
    *(undefined1 *)(piVar2 + 0x79) = 1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(param_2,param_3,param_4);
      (**(code **)(*piVar2 + 0x60))();
    }
  }
  return;
}



/* vtable 008feb74 slot 6 address 00435e06 */

/* ADDRESS: 00435e06 NAME: FUN_00435e06 */

undefined1 __thiscall FUN_00435e06(int param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = 0;
  if (param_3 != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x68);
    for (piVar5 = *(int **)(param_1 + 100); piVar1 != piVar5; piVar5 = piVar5 + 1) {
      piVar2 = (int *)*piVar5;
      if ((piVar2 != (int *)0x0) && (*(int **)(param_1 + 0x20) != piVar2)) {
        uVar4 = (**(code **)(*piVar2 + 0x6c))(param_2);
        local_24 = local_24 + (uVar4 & 0xff);
      }
    }
  }
  piVar1 = *(int **)(param_1 + 0x68);
  piVar5 = *(int **)(param_1 + 100);
  local_28 = 0;
  local_2c = 0;
  do {
    if (piVar1 == piVar5) {
      if ((param_2 != '\0') && (*(int **)(param_1 + 0x28) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
      }
      return 1;
    }
    piVar2 = (int *)*piVar5;
    if ((piVar2 != (int *)0x0) && (*(int **)(param_1 + 0x20) != piVar2)) {
      if ((param_2 != '\0') && (*(char *)((int)piVar2 + 0x1e6) == '\0')) {
        FUN_00435d2c(piVar2);
      }
      cVar3 = (**(code **)(*piVar2 + 0x6c))(param_2);
      if (cVar3 != '\0') {
        FUN_00435d8c(piVar2);
        local_2c = local_2c + 1;
        *(undefined1 *)((int)piVar2 + 0x1e5) = 0;
        if (local_2c == 2 && param_2 == '\0') {
          return 0;
        }
        if (param_3 != (int *)0x0 && local_24 != 0) {
          local_28 = local_28 + 1;
          if (local_28 % 10 == 0) {
            (**(code **)(*param_3 + 0x10))((local_28 * 100) / local_24);
          }
        }
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}



/* vtable 008feb74 slot 7 address 00436c56 */

/* ADDRESS: 00436c56 NAME: FUN_00436c56 */

uint __fastcall FUN_00436c56(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  int iStack_44;
  int iStack_40;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  iStack_40 = 0;
  while ((*(int *)(param_1 + 0x10) != 0 && (iStack_40 != 4))) {
    iVar10 = *(int *)(param_1 + 0xc);
    piVar2 = *(int **)(iVar10 + 8);
    uVar3 = *(undefined4 *)(iVar10 + 0xc);
    uVar14 = (uint)piVar2 % *(uint *)(param_1 + 8);
    piVar4 = *(int **)(*(int *)(param_1 + 4) + uVar14 * 4);
    do {
      piVar9 = piVar4;
      piVar4 = (int *)*piVar9;
    } while ((int *)iVar10 != piVar4);
    piStack_2c = piVar2;
    uStack_28 = uVar3;
    FUN_007dcb64(uVar14,piVar9,iVar10);
    iVar10 = FUN_007dc870(&piStack_2c);
    if (iVar10 != 0) {
      iStack_30 = *(int *)(iVar10 + 0x10);
      FUN_00436bbc(piVar2,uVar3,iStack_30);
      FUN_007dc89c(iVar10);
      FUN_00436b12(&piStack_2c);
      uVar3 = *(undefined4 *)(param_1 + 0x68);
      uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
      FUN_004356b0(uVar11,uVar3);
      iStack_40 = iStack_40 + 1;
    }
  }
  puVar12 = *(undefined4 **)(param_1 + 0x34);
  iStack_44 = 0;
  iVar10 = *(int *)(param_1 + 0x8c) * 2 + 1;
  for (; puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)*puVar12) {
    iVar5 = puVar12[4];
    if ((iVar5 != 0) && (*(int *)(param_1 + 0x20) != iVar5)) {
      uVar14 = FUN_00435c3a(*(undefined4 *)(iVar5 + 0x140),*(undefined4 *)(iVar5 + 0x144));
      iStack_44 = iStack_44 + (uVar14 & 0xff);
    }
  }
  bVar15 = *(uint *)(param_1 + 0x38) <= (uint)(iVar10 * iVar10);
  bVar16 = iStack_44 == 0;
  lVar17 = FUN_00435c28();
  uVar14 = (uint)((ulonglong)lVar17 >> 0x20);
  puVar12 = *(undefined4 **)(param_1 + 0x34);
  do {
    while( true ) {
      while( true ) {
        if (((int)((-(uint)(bVar15 || bVar16) & 0xfffffff4) + 0x10) <= iStack_40) ||
           (puVar12 == (undefined4 *)0x0)) goto LAB_00436f42;
        iVar10 = puVar12[4];
        puVar1 = puVar12 + 2;
        iStack_30 = iVar10;
        if ((iVar10 != 0) && (iVar10 != *(int *)(param_1 + 0x20))) break;
        FUN_00436b12(puVar1);
        puVar12 = (undefined4 *)FUN_007dc89c(puVar12);
        uVar3 = *(undefined4 *)(param_1 + 0x68);
        uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
        FUN_004356b0(uVar11,uVar3);
        uVar14 = extraout_EDX;
      }
      FUN_0077f67c(param_1 + 0x48,puVar1);
      if ((piStack_2c == (int *)0x0) || (*piStack_2c == 0)) {
        plVar13 = (longlong *)FUN_008396bc(puVar1);
        *plVar13 = lVar17;
        lVar7 = lVar17;
      }
      else {
        lVar7 = *(longlong *)(*piStack_2c + 0x10);
      }
      cVar8 = FUN_00435c3a(*(undefined4 *)(iVar10 + 0x140),*(undefined4 *)(iVar10 + 0x144));
      uVar14 = extraout_EDX_00;
      if (cVar8 != '\0') break;
LAB_00436ec9:
      puVar12 = (undefined4 *)*puVar12;
    }
    if (bVar15 || bVar16) {
      uVar14 = (uint)((ulonglong)(lVar17 - lVar7) >> 0x20);
      uVar6 = (uint)(199 < (uint)(lVar17 - lVar7));
      if ((SBORROW4(0,uVar14) != SBORROW4(-uVar14,uVar6)) == (int)(-uVar14 - uVar6) < 0)
      goto LAB_00436ec9;
    }
    FUN_00436bbc(puVar12[2],puVar12[3],iVar10);
    puVar12 = (undefined4 *)FUN_007dc89c(puVar12);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
    FUN_004356b0(uVar11,uVar3);
    iStack_40 = iStack_40 + 1;
    iStack_44 = iStack_44 + -1 + (uint)(iStack_44 == 0);
    uVar14 = extraout_EDX_01;
  } while ((iStack_44 != 0) || (bVar15 || bVar16));
LAB_00436f42:
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
    uVar14 = extraout_EDX_02;
  }
  lVar17 = (ulonglong)uVar14 << 0x20;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    lVar17 = (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  }
  return (uint)lVar17 | CONCAT31((int3)((ulonglong)lVar17 >> 0x28),0 < iStack_40);
}



/* vtable 008feb74 slot 8 address 00435510 */

/* ADDRESS: 00435510 NAME: FUN_00435510 */

undefined1 FUN_00435510(void)

{
  return 1;
}



/* vtable 008feb74 slot 9 address 00435874 */

/* ADDRESS: 00435874 NAME: FUN_00435874 */

undefined4 __thiscall FUN_00435874(undefined4 param_1,int param_2)

{
  undefined1 local_134 [28];
  undefined1 local_118 [28];
  undefined1 local_fc [28];
  undefined1 local_e0 [28];
  undefined1 local_c4 [28];
  undefined1 local_a8 [28];
  undefined1 local_8c [28];
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0040f327(local_54,*(undefined4 *)(param_2 + 0x10),10);
  FUN_0040f327(local_8c,*(undefined4 *)(param_2 + 0x8c),10);
  FUN_0040f327(local_e0,*(undefined4 *)(param_2 + 0x88),10);
  FUN_0040f327(local_134,*(undefined4 *)(param_2 + 0x38),10);
  FUN_00435706("ServerChunkCache: ");
  local_20 = 0;
  FUN_00846878(local_118,local_38,local_134);
  FUN_0081ffd0();
  FUN_00846814(local_fc,local_118," Radius: ");
  FUN_00846878(local_c4,local_fc,local_e0);
  FUN_00846814(local_a8,local_c4," UnloadRadius: ");
  FUN_00846878(local_70,local_a8,local_8c);
  FUN_00846814(local_38,local_70," Drop: ");
  FUN_00846878(param_1,local_38,local_54);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}



/* vtable 008feb74 slot 10 address 0077ca0c */

/* ADDRESS: 0077ca0c NAME: FUN_0077ca0c */

undefined4 __fastcall FUN_0077ca0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* vtable 008feb74 slot 11 address 00435514 */

/* ADDRESS: 00435514 NAME: FUN_00435514 */

void __thiscall FUN_00435514(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x34); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    piVar1 = (int *)puVar2[4];
    if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 0x20) != piVar1)) {
      (**(code **)(*piVar1 + 0x3c))(param_2);
    }
  }
  return;
}


