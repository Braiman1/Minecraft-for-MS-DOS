/* Candidate RTTI class: BlockStairs
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fbf18 slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 008fbf18 slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 008fbf18 slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 008fbf18 slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 008fbf18 slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 008fbf18 slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 008fbf18 slot 6 address 0042ec78 */

/* ADDRESS: 0042ec78 NAME: FUN_0042ec78 */

undefined4 FUN_0042ec78(void)

{
  return 0;
}



/* vtable 008fbf18 slot 7 address 0042ec7c */

/* ADDRESS: 0042ec7c NAME: FUN_0042ec7c */

undefined4 FUN_0042ec7c(void)

{
  return 10;
}



/* vtable 008fbf18 slot 8 address 00415f34 */

/* ADDRESS: 00415f34 NAME: FUN_00415f34 */

int __thiscall FUN_00415f34(int param_1,float param_2)

{
  *(float *)(param_1 + 0xc) = param_2;
  param_2 = param_2 * DAT_00886758;
  if (*(float *)(param_1 + 0x10) <= param_2 && param_2 != *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = param_2;
  }
  return param_1;
}



/* vtable 008fbf18 slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 008fbf18 slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 008fbf18 slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 008fbf18 slot 12 address 00415f92 */

/* ADDRESS: 00415f92 NAME: FUN_00415f92 */

void __thiscall
FUN_00415f92(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  *(double *)(param_1 + 0x18) = (double)param_2;
  *(double *)(param_1 + 0x20) = (double)param_3;
  *(double *)(param_1 + 0x28) = (double)param_4;
  *(double *)(param_1 + 0x30) = (double)param_5;
  *(double *)(param_1 + 0x38) = (double)param_6;
  *(double *)(param_1 + 0x40) = (double)param_7;
  return;
}



/* vtable 008fbf18 slot 13 address 0042ec9e */

/* ADDRESS: 0042ec9e NAME: FUN_0042ec9e */

void __fastcall FUN_0042ec9e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x34))();
  return;
}



/* vtable 008fbf18 slot 14 address 0042edd8 */

/* ADDRESS: 0042edd8 NAME: thunk_FUN_0041649c */

void thunk_FUN_0041649c(void)

{
  FUN_0041649c();
  return;
}



/* vtable 008fbf18 slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 008fbf18 slot 16 address 0042ece6 */

/* ADDRESS: 0042ece6 NAME: FUN_0042ece6 */

void __fastcall FUN_0042ece6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x40))();
  return;
}



/* vtable 008fbf18 slot 17 address 0042ecd6 */

/* ADDRESS: 0042ecd6 NAME: FUN_0042ecd6 */

void __fastcall FUN_0042ecd6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x44))();
  return;
}



/* vtable 008fbf18 slot 18 address 0042ecde */

/* ADDRESS: 0042ecde NAME: FUN_0042ecde */

void __fastcall FUN_0042ecde(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ece3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x48))();
  return;
}



/* vtable 008fbf18 slot 19 address 0042ecf6 */

/* ADDRESS: 0042ecf6 NAME: FUN_0042ecf6 */

void __fastcall FUN_0042ecf6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x4c))();
  return;
}



/* vtable 008fbf18 slot 20 address 0042edde */

/* ADDRESS: 0042edde NAME: FUN_0042edde */

void __thiscall
FUN_0042edde(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  pcVar1 = *(code **)(*param_1 + 0x30);
  if (iVar2 == 0) {
    (*pcVar1)(0,0,0,DAT_00886e94,DAT_00886e94,DAT_00886e90);
    FUN_0041a804(param_2,param_3,param_4,param_5,param_6,param_7);
    iVar2 = *param_1;
    uVar5 = DAT_00886e90;
LAB_0042ef79:
    uVar3 = DAT_00886e94;
    uVar4 = 0;
  }
  else {
    if (iVar2 == 1) {
      (*pcVar1)(0,0,0,DAT_00886e94,DAT_00886e90,DAT_00886e90);
      FUN_0041a804(param_2,param_3,param_4,param_5,param_6,param_7);
      iVar2 = *param_1;
      uVar5 = DAT_00886e94;
      goto LAB_0042ef79;
    }
    if (iVar2 == 2) {
      (*pcVar1)(0,0,0,DAT_00886e90,DAT_00886e94,DAT_00886e94);
      FUN_0041a804(param_2,param_3,param_4,param_5,param_6,param_7);
      iVar2 = *param_1;
      uVar5 = DAT_00886e90;
    }
    else {
      if (iVar2 != 3) goto LAB_0042f0f6;
      (*pcVar1)(0,0,0,DAT_00886e90,DAT_00886e90,DAT_00886e94);
      FUN_0041a804(param_2,param_3,param_4,param_5,param_6,param_7);
      iVar2 = *param_1;
      uVar5 = DAT_00886e94;
    }
    uVar3 = 0;
    uVar4 = DAT_00886e94;
  }
  (**(code **)(iVar2 + 0x30))(uVar3,0,uVar4,DAT_00886e90,uVar5,DAT_00886e90);
  FUN_0041a804(param_2,param_3,param_4,param_5,param_6,param_7);
LAB_0042f0f6:
                    /* WARNING: Could not recover jumptable at 0x0042f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* vtable 008fbf18 slot 21 address 0042edd2 */

/* ADDRESS: 0042edd2 NAME: thunk_FUN_0041616e */

void thunk_FUN_0041616e(void)

{
  FUN_0041616e();
  return;
}



/* vtable 008fbf18 slot 22 address 0042ec78 */
/* Already included above. */

/* vtable 008fbf18 slot 23 address 0042ed12 */

/* ADDRESS: 0042ed12 NAME: FUN_0042ed12 */

void __fastcall FUN_0042ed12(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x5c))();
  return;
}



/* vtable 008fbf18 slot 24 address 0042ed0a */

/* ADDRESS: 0042ed0a NAME: FUN_0042ed0a */

void __fastcall FUN_0042ed0a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x60))();
  return;
}



/* vtable 008fbf18 slot 25 address 0042edb2 */

/* ADDRESS: 0042edb2 NAME: FUN_0042edb2 */

void __fastcall FUN_0042edb2(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 100))();
  return;
}



/* vtable 008fbf18 slot 26 address 0042ec82 */

/* ADDRESS: 0042ec82 NAME: FUN_0042ec82 */

void __fastcall FUN_0042ec82(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x68))();
  return;
}



/* vtable 008fbf18 slot 27 address 0042ec96 */

/* ADDRESS: 0042ec96 NAME: FUN_0042ec96 */

void __fastcall FUN_0042ec96(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x6c))();
  return;
}



/* vtable 008fbf18 slot 28 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 008fbf18 slot 29 address 0042ecee */

/* ADDRESS: 0042ecee NAME: FUN_0042ecee */

void __fastcall FUN_0042ecee(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x74))();
  return;
}



/* vtable 008fbf18 slot 30 address 0042ed34 */

/* ADDRESS: 0042ed34 NAME: FUN_0042ed34 */

void __thiscall
FUN_0042ed34(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0x70))(param_2,param_3,param_4,param_5,0);
                    /* WARNING: Could not recover jumptable at 0x0042ed8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x17] + 0x78))();
  return;
}



/* vtable 008fbf18 slot 31 address 0042ed92 */

/* ADDRESS: 0042ed92 NAME: FUN_0042ed92 */

void __fastcall FUN_0042ed92(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x7c))();
  return;
}



/* vtable 008fbf18 slot 32 address 0042ecca */

/* ADDRESS: 0042ecca NAME: FUN_0042ecca */

void __fastcall FUN_0042ecca(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x80))();
  return;
}



/* vtable 008fbf18 slot 33 address 0042ecbe */

/* ADDRESS: 0042ecbe NAME: FUN_0042ecbe */

void __fastcall FUN_0042ecbe(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x84))();
  return;
}



/* vtable 008fbf18 slot 34 address 0041653a */

/* ADDRESS: 0041653a NAME: FUN_0041653a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0041653a(int param_1)

{
  char cVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (0.0 < *(float *)(param_1 + 0xc) || *(float *)(param_1 + 0xc) == 0.0) {
    cVar1 = FUN_00460baa(param_1);
    if (cVar1 == '\0') {
      fVar3 = (DAT_00886770 / *(float *)(param_1 + 0xc)) / _DAT_00886774;
    }
    else {
      fVar2 = (float10)FUN_00460b4a(param_1);
      fVar3 = ((float)fVar2 / *(float *)(param_1 + 0xc)) / _DAT_00886778;
    }
  }
  return (float10)fVar3;
}



/* vtable 008fbf18 slot 35 address 0042ed9a */

/* ADDRESS: 0042ed9a NAME: FUN_0042ed9a */

void __fastcall FUN_0042ed9a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x8c))();
  return;
}



/* vtable 008fbf18 slot 36 address 004162ec */

/* ADDRESS: 004162ec NAME: FUN_004162ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004162ec(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((char)param_1[0x5c] == '\0') {
    fVar3 = (float10)FUN_0040e898();
    dVar4 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    fVar3 = (float10)FUN_0040e898();
    dVar5 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    fVar3 = (float10)FUN_0040e898();
    dVar6 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    iVar2 = FUN_00846710(0x1c8);
    FUN_00456822(param_1,(double)param_2 + dVar4,(double)param_3 + dVar5,(double)param_4 + dVar6,
                 param_5);
    iVar1 = *param_1;
    *(undefined4 *)(iVar2 + 0x1b8) = 10;
    (**(code **)(iVar1 + 0x44))(iVar2);
  }
  return;
}



/* vtable 008fbf18 slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 008fbf18 slot 38 address 0042eca6 */

/* ADDRESS: 0042eca6 NAME: FUN_0042eca6 */

void __fastcall FUN_0042eca6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x98))();
  return;
}



/* vtable 008fbf18 slot 39 address 0041694e */

/* ADDRESS: 0041694e NAME: FUN_0041694e */

undefined4 __thiscall
FUN_0041694e(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5);
  FUN_0050a0ce((double)-param_3,(double)-param_4,(double)-param_5);
  uVar2 = FUN_0050a0ce((double)-param_3,(double)-param_4,(double)-param_5);
  iVar3 = FUN_0050a10c(uVar2,(int)*(undefined8 *)(param_1 + 6),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20));
  iVar4 = FUN_0050a10c(uVar2,(int)*(undefined8 *)(param_1 + 0xc),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20));
  iVar5 = FUN_0050a1a6(uVar2,(int)*(undefined8 *)(param_1 + 8),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20));
  iVar6 = FUN_0050a1a6(uVar2,(int)*(undefined8 *)(param_1 + 0xe),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20));
  iVar7 = FUN_0050a240(uVar2,(int)*(undefined8 *)(param_1 + 10),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20));
  iVar8 = FUN_0050a240(uVar2,(int)*(undefined8 *)(param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
  cVar1 = FUN_00416886(iVar3);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  cVar1 = FUN_00416886(iVar4);
  if (cVar1 == '\0') {
    iVar4 = 0;
  }
  cVar1 = FUN_004168ca(iVar5);
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  cVar1 = FUN_004168ca(iVar6);
  if (cVar1 == '\0') {
    iVar6 = 0;
  }
  cVar1 = FUN_0041690c(iVar7);
  if (cVar1 == '\0') {
    iVar7 = 0;
  }
  cVar1 = FUN_0041690c(iVar8);
  iVar10 = 0;
  if (cVar1 != '\0') {
    iVar10 = iVar8;
  }
  iVar8 = iVar3;
  if (iVar4 == 0) {
    if (iVar5 != 0) {
      if (iVar3 != 0) goto LAB_00416b72;
LAB_00416d2c:
      iVar8 = iVar5;
      goto LAB_00416d3e;
    }
    if (iVar6 != 0) {
      if (iVar3 != 0) goto LAB_00416bb4;
      goto LAB_00416c24;
    }
LAB_00416be5:
    if (iVar7 == 0) {
LAB_00416c2d:
      if (iVar10 != 0) {
        if (iVar8 != 0) goto LAB_00416c40;
LAB_00416c35:
        iVar8 = iVar10;
        goto LAB_00416c76;
      }
LAB_00416c6c:
      if (iVar8 == 0) {
        return 0;
      }
    }
    else {
      if (iVar8 != 0) goto LAB_00416bef;
      iVar8 = iVar7;
      if (iVar10 != 0) goto LAB_00416c40;
    }
  }
  else {
    if (iVar3 == 0) {
LAB_00416d31:
      iVar8 = iVar4;
    }
    else {
      fVar11 = (float10)FUN_00509a8a(iVar4);
      fVar12 = (float10)FUN_00509a8a(iVar3);
      if ((double)fVar11 < (double)fVar12) goto LAB_00416d31;
    }
    if (iVar5 != 0) {
LAB_00416b72:
      fVar11 = (float10)FUN_00509a8a(iVar5);
      fVar12 = (float10)FUN_00509a8a(iVar8);
      if ((double)fVar11 < (double)fVar12) goto LAB_00416d2c;
    }
LAB_00416d3e:
    if (iVar6 == 0) goto LAB_00416be5;
LAB_00416bb4:
    fVar11 = (float10)FUN_00509a8a(iVar6);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) {
LAB_00416c24:
      iVar8 = iVar6;
    }
    if (iVar7 == 0) goto LAB_00416c2d;
LAB_00416bef:
    fVar11 = (float10)FUN_00509a8a(iVar7);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) {
      iVar8 = iVar7;
    }
    if (iVar10 == 0) goto LAB_00416c6c;
LAB_00416c40:
    fVar11 = (float10)FUN_00509a8a(iVar10);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) goto LAB_00416c35;
  }
LAB_00416c76:
  cVar1 = -1;
  if (iVar3 == iVar8) {
    cVar1 = '\x04';
  }
  if (iVar4 == iVar8) {
    cVar1 = '\x05';
  }
  if (iVar5 == iVar8) {
    cVar1 = '\0';
  }
  if (iVar6 == iVar8) {
    cVar1 = '\x01';
  }
  if (iVar7 == iVar8) {
    cVar1 = '\x02';
  }
  if (iVar10 == iVar8) {
    cVar1 = '\x03';
  }
  uVar2 = FUN_00846710(0x1c);
  uVar9 = FUN_0050a0ce((double)param_3,(double)param_4,(double)param_5);
  FUN_004ac5fc(param_3,param_4,param_5,(int)cVar1,uVar9);
  return uVar2;
}



/* vtable 008fbf18 slot 40 address 0042edc6 */

/* ADDRESS: 0042edc6 NAME: FUN_0042edc6 */

void __fastcall FUN_0042edc6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xa0))();
  return;
}



/* vtable 008fbf18 slot 41 address 0042ecb2 */

/* ADDRESS: 0042ecb2 NAME: FUN_0042ecb2 */

void __fastcall FUN_0042ecb2(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xa4))();
  return;
}



/* vtable 008fbf18 slot 42 address 004160f4 */

/* ADDRESS: 004160f4 NAME: FUN_004160f4 */

void __thiscall
FUN_004160f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 008fbf18 slot 43 address 0042ed28 */

/* ADDRESS: 0042ed28 NAME: FUN_0042ed28 */

void __fastcall FUN_0042ed28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xac))();
  return;
}



/* vtable 008fbf18 slot 44 address 0042edba */

/* ADDRESS: 0042edba NAME: FUN_0042edba */

void __fastcall FUN_0042edba(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xb0))();
  return;
}



/* vtable 008fbf18 slot 45 address 0042eda6 */

/* ADDRESS: 0042eda6 NAME: FUN_0042eda6 */

void __fastcall FUN_0042eda6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xb4))();
  return;
}



/* vtable 008fbf18 slot 46 address 004160b4 */
/* Already included above. */

/* vtable 008fbf18 slot 47 address 0042ec8a */

/* ADDRESS: 0042ec8a NAME: FUN_0042ec8a */

void __fastcall FUN_0042ec8a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xbc))();
  return;
}



/* vtable 008fbf18 slot 48 address 0042ecfe */

/* ADDRESS: 0042ecfe NAME: FUN_0042ecfe */

void __fastcall FUN_0042ecfe(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc0))();
  return;
}



/* vtable 008fbf18 slot 49 address 0042ec34 */

/* ADDRESS: 0042ec34 NAME: FUN_0042ec34 */

void __fastcall FUN_0042ec34(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(0,0,0,DAT_00886e90,DAT_00886e90,DAT_00886e90);
  return;
}



/* vtable 008fbf18 slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 008fbf18 slot 51 address 00416136 */

/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* vtable 008fbf18 slot 52 address 0041613e */

/* ADDRESS: 0041613e NAME: FUN_0041613e */

undefined4 FUN_0041613e(void)

{
  return 0;
}



/* vtable 008fbf18 slot 53 address 00416144 */

/* ADDRESS: 00416144 NAME: FUN_00416144 */

undefined4 FUN_00416144(void)

{
  return 0;
}



/* vtable 008fbf18 slot 54 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 008fbf18 slot 55 address 0041613e */
/* Already included above. */

/* vtable 008fbf18 slot 56 address 00415eba */
/* Already included above. */

/* vtable 008fbf18 slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 008fbf18 slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 008fbf18 slot 59 address 0042f132 */

/* ADDRESS: 0042f132 NAME: FUN_0042f132 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f132(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a3e0c((double)((DAT_00886e98 * *(float *)(param_5 + 0x70)) / _DAT_00886e9c) +
                       _DAT_00886ea0);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else if (uVar1 == 1) {
    uVar2 = 1;
  }
  else if (uVar1 == 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  FUN_0050b922(param_2,param_3,param_4,uVar2);
  return;
}



/* vtable 008fbf18 slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 008fbf18 slot 61 address 004165a4 */

/* ADDRESS: 004165a4 NAME: FUN_004165a4 */

int __thiscall FUN_004165a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 local_6c [24];
  undefined1 local_54 [28];
  undefined1 local_38 [40];
  
  (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_00846814(local_38,local_54,".name");
  FUN_004f6ab8(local_6c,local_38);
  uVar1 = FUN_00823680(local_6c);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0081ffd0(uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}



/* vtable 008fbf18 slot 62 address 0041663c */

/* ADDRESS: 0041663c NAME: FUN_0041663c */

undefined4 __thiscall FUN_0041663c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_38 [40];
  
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 == 0) {
    FUN_007773dc(&DAT_00886450);
  }
  else {
    FUN_007773dc("tile.");
    FUN_00846814(param_1,local_38,iVar1);
    FUN_0081ffd0();
  }
  return param_1;
}



/* vtable 008fbf18 slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 008fbf18 slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 008fbf18 slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 008fbf18 slot 66 address 00416454 */

/* ADDRESS: 00416454 NAME: FUN_00416454 */

void FUN_00416454(void)

{
  FUN_004a3756();
  return;
}



/* vtable 008fbf18 slot 67 address 0077219c */

/* ADDRESS: 0077219c NAME: FUN_0077219c */

void FUN_0077219c(void)

{
  return;
}



/* vtable 008fbf18 slot 68 address 00772184 */

/* ADDRESS: 00772184 NAME: FUN_00772184 */

void __fastcall FUN_00772184(void *param_1)

{
  free(param_1);
  return;
}


