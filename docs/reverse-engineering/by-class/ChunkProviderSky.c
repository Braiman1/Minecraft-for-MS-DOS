/* Candidate RTTI class: ChunkProviderSky
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009024fc slot 0 address 0043da6a */

/* ADDRESS: 0043da6a NAME: FUN_0043da6a */

void __fastcall FUN_0043da6a(int param_1)

{
  if (*(void **)(param_1 + 0xf4) != (void *)0x0) {
    free(*(void **)(param_1 + 0xf4));
  }
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007efd64();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_007f03d4();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  FUN_00776270();
  return;
}



/* vtable 009024fc slot 1 address 0043db54 */

/* ADDRESS: 0043db54 NAME: FUN_0043db54 */

void __fastcall FUN_0043db54(void *param_1)

{
  FUN_0043da6a();
  free(param_1);
  return;
}



/* vtable 009024fc slot 2 address 0043c872 */

/* ADDRESS: 0043c872 NAME: FUN_0043c872 */

undefined1 FUN_0043c872(void)

{
  return 1;
}



/* vtable 009024fc slot 3 address 0043e766 */

/* ADDRESS: 0043e766 NAME: FUN_0043e766 */

int * __thiscall FUN_0043e766(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar2 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar3 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  FUN_0040e684(uVar2 + uVar3,
               (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
               ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
               (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
               ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e + (uint)CARRY4(uVar2,uVar3));
  uVar10 = extraout_EDX;
  puVar4 = (undefined4 *)FUN_00846710(0x8000,extraout_EDX);
  puVar9 = puVar4;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  puVar7 = *(undefined1 **)(param_1 + 0xf8);
  pcVar1 = *(code **)(*piVar5 + 0x1c);
  iVar6 = *(int *)(param_1 + 0xfc) - (int)puVar7;
  if (iVar6 == 0) {
    puStack_40 = (undefined1 *)0x0;
  }
  else {
    puStack_40 = (undefined1 *)FUN_00846710(iVar6,uVar10);
  }
  puStack_38 = puStack_40 + iVar6;
  puStack_3c = puStack_40;
  if (iVar6 != 0) {
    puVar8 = puStack_40;
    for (; puStack_3c = puStack_38, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  (*pcVar1)(piVar5,&puStack_40,param_2 << 4,param_3 << 4,0x10,0x10);
  puStack_28 = *(undefined4 **)(param_1 + 0xf8);
  puStack_20 = *(undefined4 **)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = uStack_34;
  *(undefined4 *)(param_1 + 0xfc) = uStack_30;
  uStack_34 = 0;
  *(undefined4 *)(param_1 + 0x100) = uStack_2c;
  uStack_2c = 0;
  FUN_007efd64();
  FUN_007efd64();
  FUN_007efd64();
  iVar6 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  FUN_0043e528(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(iVar6 + 4));
  FUN_0043db78(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xf8));
  (**(code **)**(undefined4 **)(param_1 + 0xf4))
            (param_1,*(undefined4 *)(param_1 + 0xc0),param_2,param_3,puVar4);
  piVar5 = (int *)FUN_00846710(0x210);
  puStack_28 = (undefined4 *)FUN_00846710(0x8000);
  puStack_24 = puStack_28 + 0x2000;
  puVar9 = puStack_28;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puStack_20 = puStack_24;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xc0),&puStack_28,param_2,param_3);
  FUN_007f0274();
  (**(code **)(*piVar5 + 0x10))();
  FUN_007f0274();
  return piVar5;
}



/* vtable 009024fc slot 4 address 0043c86c */

/* ADDRESS: 0043c86c NAME: FUN_0043c86c */

void __fastcall FUN_0043c86c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043c86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 009024fc slot 5 address 0043c9c6 */

/* ADDRESS: 0043c9c6 NAME: FUN_0043c9c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043c9c6(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 extraout_ECX;
  int iVar15;
  float10 fVar16;
  double dVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  int local_50;
  uint local_4c;
  int iStack_48;
  uint local_44;
  
  iVar15 = param_1 + 8;
  DAT_00a07570 = 1;
  iVar4 = param_3 * 0x10;
  iVar5 = param_4 * 0x10;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  uVar18 = (**(code **)(*piVar6 + 0xc))(iVar4 + 0x10,iVar5 + 0x10);
  uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
  puVar7 = (undefined4 *)uVar18;
  uVar18 = FUN_0050e3d8(uVar11,uVar11);
  FUN_0040e684(uVar18);
  lVar19 = FUN_0040e85a(extraout_ECX,extraout_ECX);
  lVar20 = FUN_0040e85a();
  lVar19 = lVar19 + (ulonglong)(uint)-(int)(lVar19 >> 0x3f);
  local_44 = (uint)lVar19 | 1;
  iStack_48 = (int)((ulonglong)local_44 * (ulonglong)param_3 >> 0x20);
  local_4c = (uint)((ulonglong)local_44 * (ulonglong)param_3);
  lVar20 = lVar20 + (ulonglong)(uint)-(int)(lVar20 >> 0x3f);
  uVar8 = (uint)lVar20 | 1;
  lVar2 = (ulonglong)uVar8 * (ulonglong)param_4;
  uVar9 = (uint)lVar2;
  uVar18 = FUN_0050e3d8();
  FUN_0040e684((uint)uVar18 ^ uVar9 + local_4c,
               (uint)((ulonglong)uVar18 >> 0x20) ^
               (int)((ulonglong)lVar2 >> 0x20) +
               (int)((ulonglong)lVar20 >> 0x20) * param_4 + ((int)param_4 >> 0x1f) * uVar8 +
               iStack_48 +
               (int)((ulonglong)lVar19 >> 0x20) * param_3 + ((int)param_3 >> 0x1f) * local_44 +
               (uint)CARRY4(uVar9,local_4c));
  iVar10 = FUN_0040e7b8(4);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00517bf2(*(undefined4 *)(DAT_00a062fc + 8));
    FUN_005174b4(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  iVar10 = FUN_0040e7b8(8);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    iVar12 = FUN_0040e7b8(0x78);
    iVar12 = FUN_0040e7b8(iVar12 + 8);
    iVar13 = FUN_0040e7b8(0x10);
    if (0x3f < iVar12) {
      iVar14 = FUN_0040e7b8(10);
      if (iVar14 != 0) goto LAB_0043cc4c;
    }
    FUN_00517bf2(*(undefined4 *)(DAT_00a062f4 + 8));
    FUN_005174b4(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,iVar12,iVar5 + 8 + iVar13
                );
  }
LAB_0043cc4c:
  iVar10 = 8;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00516368(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar12,uVar11,iVar5 + 8 + iVar13
                );
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 10;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00515e54(0x20);
    FUN_00515a7c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a06314 + 8),0x20);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 10;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062ec + 8),0x20);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e0 + 8),0x10);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x40);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e4 + 8),8);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 2;
  while( true ) {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x20);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e8 + 8),8);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    if (iVar10 == 1) break;
    iVar10 = 1;
  }
  iVar10 = 8;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x10);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a061fc + 8),7);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = FUN_0040e7b8(0x10);
  uVar11 = FUN_0040e7b8(0x10);
  iVar12 = FUN_0040e7b8(0x10);
  FUN_0051823c(*(undefined4 *)(DAT_00a06240 + 8),7);
  FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar10 + iVar4,uVar11,iVar5 + iVar12);
  iVar10 = FUN_0040e7b8(0x10);
  uVar11 = FUN_0040e994(0x10);
  iVar12 = FUN_0040e7b8(0x10);
  FUN_0051823c(*(undefined4 *)(DAT_00a062cc + 8),6);
  FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar10 + iVar4,uVar11,iVar5 + iVar12);
  fVar16 = (float10)FUN_004b4650((double)iVar4 * DAT_00887960,(double)iVar5 * DAT_00887960);
  dVar17 = (double)fVar16 * _DAT_00887968;
  fVar16 = (float10)FUN_0040e8c2();
  iVar12 = (int)(((double)fVar16 * DAT_00887970 + dVar17 + DAT_00887970) / _DAT_00887978);
  iVar10 = FUN_0040e7b8(10);
  uVar8 = (uint)(iVar10 == 0);
  if (DAT_00a06184 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06190 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06188 == puVar7) {
    uVar8 = uVar8 + 2 + iVar12;
  }
  if (DAT_00a06178 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06174 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  if (DAT_00a06168 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  if (DAT_00a06170 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  for (iVar10 = 0; iVar10 < (int)uVar8; iVar10 = iVar10 + 1) {
    iVar12 = FUN_0040e7b8(0x10);
    iVar12 = iVar4 + 8 + iVar12;
    iVar13 = FUN_0040e7b8(0x10);
    iVar13 = iVar5 + 8 + iVar13;
    piVar6 = (int *)(**(code **)*puVar7)(iVar15);
    (**(code **)(*piVar6 + 0xc))(0,0x3ff00000);
    pcVar1 = *(code **)(*piVar6 + 8);
    uVar11 = FUN_0050bdd6(iVar12,iVar13);
    (*pcVar1)(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar12,uVar11,iVar13);
    (**(code **)(*piVar6 + 4))();
  }
  iVar10 = 2;
  while( true ) {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a0628c + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar12,uVar11,iVar5 + 8 + iVar13
                );
    if (iVar10 == 1) break;
    iVar10 = 1;
  }
  iVar10 = FUN_0040e7b8(2);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06288 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  iVar10 = FUN_0040e7b8(4);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06284 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  iVar10 = FUN_0040e7b8(8);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06280 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  iVar10 = 10;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051837c(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar12,uVar11,iVar5 + 8 + iVar13
                );
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = FUN_0040e7b8(0x20);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00518258(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  if (DAT_00a06174 == puVar7) {
    for (iVar10 = 0; iVar10 != 10; iVar10 = iVar10 + 1) {
      iVar12 = FUN_0040e7b8(0x10);
      uVar11 = FUN_0040e7b8(0x80);
      iVar13 = FUN_0040e7b8(0x10);
      FUN_00515968(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar12,uVar11,
                   iVar5 + 8 + iVar13);
    }
  }
  iVar10 = 0x32;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    iVar13 = FUN_0040e7b8(0x78);
    uVar11 = FUN_0040e7b8(iVar13 + 8);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00517e6c(*(undefined4 *)(DAT_00a06300 + 8));
    FUN_00517c08(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar12,uVar11,iVar5 + 8 + iVar13
                );
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_44 = 0x14;
  do {
    iVar10 = FUN_0040e7b8(0x10);
    iVar12 = FUN_0040e7b8(0x70);
    iVar12 = FUN_0040e7b8(iVar12 + 8);
    uVar11 = FUN_0040e7b8(iVar12 + 8);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00517e6c(*(undefined4 *)(DAT_00a062f8 + 8));
    FUN_00517c08(*(undefined4 *)(param_1 + 0xc0),iVar15,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  iVar15 = iVar4 + 8;
  uVar11 = (**(code **)(*piVar6 + 0x18))(param_1 + 0x1140,iVar15,iVar5 + 8,0x10,0x10);
  FUN_0043c8e8(uVar11);
  local_44 = 0;
  for (; iVar15 <= iVar4 + 0x17; iVar15 = iVar15 + 1) {
    local_50 = local_44 << 3;
    for (iVar10 = iVar5 + 8; iVar10 <= iVar5 + 0x17; iVar10 = iVar10 + 1) {
      iVar12 = FUN_0050c8d0(iVar15,iVar10);
      if ((*(double *)(*(int *)(param_1 + 0x1140) + local_50) -
           (double)(iVar12 + -0x40) * _DAT_00887988 * _DAT_00887990 < DAT_00887960) &&
         (uVar8 = iVar12 - 1, uVar8 < 0x7f)) {
        cVar3 = FUN_0050ac0e(iVar15,iVar12,iVar10);
        if (cVar3 != '\0') {
          piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x1c))(iVar15,uVar8,iVar10);
          cVar3 = (**(code **)(*piVar6 + 0x14))();
          if (cVar3 != '\0') {
            iVar13 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x1c))(iVar15,uVar8,iVar10);
            if (DAT_00a0ae04 != iVar13) {
              FUN_0050b858(iVar15,iVar12,iVar10,*(undefined4 *)(DAT_00a061e8 + 8));
            }
          }
        }
      }
      local_50 = local_50 + 8;
    }
    local_44 = local_44 + 0x10;
  }
  DAT_00a07570 = 0;
  return;
}



/* vtable 009024fc slot 6 address 0043c878 */

/* ADDRESS: 0043c878 NAME: FUN_0043c878 */

undefined1 FUN_0043c878(void)

{
  return 1;
}



/* vtable 009024fc slot 7 address 0043c87e */

/* ADDRESS: 0043c87e NAME: FUN_0043c87e */

undefined4 FUN_0043c87e(void)

{
  return 0;
}



/* vtable 009024fc slot 8 address 0043c882 */

/* ADDRESS: 0043c882 NAME: FUN_0043c882 */

undefined1 FUN_0043c882(void)

{
  return 1;
}



/* vtable 009024fc slot 9 address 0043c886 */

/* ADDRESS: 0043c886 NAME: FUN_0043c886 */

int * __fastcall FUN_0043c886(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x11;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"RandomLevelSource",0x11);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* vtable 009024fc slot 10 address 0077ca34 */

/* ADDRESS: 0077ca34 NAME: FUN_0077ca34 */

undefined4 FUN_0077ca34(void)

{
  return 0xffffffff;
}



/* vtable 009024fc slot 11 address 00774350 */

/* ADDRESS: 00774350 NAME: FUN_00774350 */

void FUN_00774350(void)

{
  return;
}


