/* Candidate RTTI class: NetClientHandler
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902778 slot 0 address 004af380 */

/* ADDRESS: 004af380 NAME: FUN_004af380 */

void __fastcall FUN_004af380(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xc];
  *param_1 = &PTR_FUN_00902778;
  if (pvVar1 != (void *)0x0) {
    FUN_004a2928();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_004b3570();
    free(pvVar1);
  }
  FUN_0081ffd0();
  return;
}



/* vtable 00902778 slot 1 address 004af3da */

/* ADDRESS: 004af3da NAME: FUN_004af3da */

void __fastcall FUN_004af3da(void *param_1)

{
  FUN_004af380();
  free(param_1);
  return;
}



/* vtable 00902778 slot 2 address 004af37c */

/* ADDRESS: 004af37c NAME: FUN_004af37c */

undefined4 FUN_004af37c(void)

{
  return 0;
}



/* vtable 00902778 slot 3 address 004af47e */

/* ADDRESS: 004af47e NAME: FUN_004af47e */

void __thiscall FUN_004af47e(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [36];
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_0051f524(0);
    uVar1 = FUN_00846710(0x60);
    if (*param_3 == param_3[1]) {
      local_4c = local_44;
      local_44[0] = 0;
      local_48 = 0;
    }
    else {
      FUN_00823370(*param_3);
    }
    FUN_004af3fe("disconnect.lost");
    FUN_0047951e(local_34,param_2,&local_4c);
    uVar1 = FUN_0051d808(uVar1);
    FUN_0081ffd0(uVar1);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 00902778 slot 4 address 0077523c */

/* ADDRESS: 0077523c NAME: thunk_FUN_004b18e0 */

void thunk_FUN_004b18e0(void)

{
  FUN_004b18e0();
  return;
}



/* vtable 00902778 slot 5 address 007751c4 */

/* ADDRESS: 007751c4 NAME: thunk_FUN_004af6fa */

void thunk_FUN_004af6fa(void)

{
  FUN_004af6fa();
  return;
}



/* vtable 00902778 slot 6 address 0077527c */

/* ADDRESS: 0077527c NAME: thunk_FUN_004af822 */

void thunk_FUN_004af822(void)

{
  FUN_004af822();
  return;
}



/* vtable 00902778 slot 7 address 007752ac */

/* ADDRESS: 007752ac NAME: thunk_FUN_004b05b8 */

void thunk_FUN_004b05b8(void)

{
  FUN_004b05b8();
  return;
}



/* vtable 00902778 slot 8 address 0077520c */

/* ADDRESS: 0077520c NAME: thunk_FUN_004af97c */

void thunk_FUN_004af97c(void)

{
  FUN_004af97c();
  return;
}



/* vtable 00902778 slot 9 address 007752cc */

/* ADDRESS: 007752cc NAME: thunk_FUN_004afa6a */

void thunk_FUN_004afa6a(void)

{
  FUN_004afa6a();
  return;
}



/* vtable 00902778 slot 10 address 007752dc */

/* ADDRESS: 007752dc NAME: thunk_FUN_004b0ade */

void thunk_FUN_004b0ade(void)

{
  FUN_004b0ade();
  return;
}



/* vtable 00902778 slot 11 address 007752c4 */

/* ADDRESS: 007752c4 NAME: thunk_FUN_004b0fee */

void thunk_FUN_004b0fee(void)

{
  FUN_004b0fee();
  return;
}



/* vtable 00902778 slot 12 address 007752fc */

/* ADDRESS: 007752fc NAME: thunk_FUN_004afb20 */

void thunk_FUN_004afb20(void)

{
  FUN_004afb20();
  return;
}



/* vtable 00902778 slot 13 address 007752d4 */

/* ADDRESS: 007752d4 NAME: thunk_FUN_004b0b40 */

void thunk_FUN_004b0b40(void)

{
  FUN_004b0b40();
  return;
}



/* vtable 00902778 slot 14 address 007751d4 */

/* ADDRESS: 007751d4 NAME: thunk_FUN_004b0c12 */

void thunk_FUN_004b0c12(void)

{
  FUN_004b0c12();
  return;
}



/* vtable 00902778 slot 15 address 007752b4 */

/* ADDRESS: 007752b4 NAME: thunk_FUN_004afd0c */

void thunk_FUN_004afd0c(void)

{
  FUN_004afd0c();
  return;
}



/* vtable 00902778 slot 16 address 007751dc */

/* ADDRESS: 007751dc NAME: thunk_FUN_004afd22 */

void thunk_FUN_004afd22(void)

{
  FUN_004afd22();
  return;
}



/* vtable 00902778 slot 17 address 0077522c */

/* ADDRESS: 0077522c NAME: thunk_FUN_004afea8 */

void thunk_FUN_004afea8(void)

{
  FUN_004afea8();
  return;
}



/* vtable 00902778 slot 18 address 007752f4 */

/* ADDRESS: 007752f4 NAME: thunk_FUN_004afed6 */

void thunk_FUN_004afed6(void)

{
  FUN_004afed6();
  return;
}



/* vtable 00902778 slot 19 address 00775214 */

/* ADDRESS: 00775214 NAME: thunk_FUN_004affec */

void thunk_FUN_004affec(void)

{
  FUN_004affec();
  return;
}



/* vtable 00902778 slot 20 address 0077526c */

/* ADDRESS: 0077526c NAME: thunk_FUN_004b014a */

void thunk_FUN_004b014a(void)

{
  FUN_004b014a();
  return;
}



/* vtable 00902778 slot 21 address 007752e4 */

/* ADDRESS: 007752e4 NAME: thunk_FUN_004b0184 */

void thunk_FUN_004b0184(void)

{
  FUN_004b0184();
  return;
}



/* vtable 00902778 slot 22 address 007751ec */

/* ADDRESS: 007751ec NAME: thunk_FUN_004b0e8c */

void thunk_FUN_004b0e8c(void)

{
  FUN_004b0e8c();
  return;
}



/* vtable 00902778 slot 23 address 007751bc */

/* ADDRESS: 007751bc NAME: thunk_FUN_004b0304 */

void thunk_FUN_004b0304(void)

{
  FUN_004b0304();
  return;
}



/* vtable 00902778 slot 24 address 00775294 */

/* ADDRESS: 00775294 NAME: thunk_FUN_004b0cfa */

void thunk_FUN_004b0cfa(void)

{
  FUN_004b0cfa();
  return;
}



/* vtable 00902778 slot 25 address 007751cc */

/* ADDRESS: 007751cc NAME: thunk_FUN_004b0d9c */

void thunk_FUN_004b0d9c(void)

{
  FUN_004b0d9c();
  return;
}



/* vtable 00902778 slot 26 address 0077521c */

/* ADDRESS: 0077521c NAME: thunk_FUN_004b0396 */

void thunk_FUN_004b0396(void)

{
  FUN_004b0396();
  return;
}



/* vtable 00902778 slot 27 address 00775264 */

/* ADDRESS: 00775264 NAME: thunk_FUN_004b0500 */

void thunk_FUN_004b0500(void)

{
  FUN_004b0500();
  return;
}



/* vtable 00902778 slot 28 address 007752bc */

/* ADDRESS: 007752bc NAME: thunk_FUN_004b0528 */

void thunk_FUN_004b0528(void)

{
  FUN_004b0528();
  return;
}



/* vtable 00902778 slot 29 address 0077529c */

/* ADDRESS: 0077529c NAME: thunk_FUN_004b0df6 */

void thunk_FUN_004b0df6(void)

{
  FUN_004b0df6();
  return;
}



/* vtable 00902778 slot 30 address 007752a4 */

/* ADDRESS: 007752a4 NAME: thunk_FUN_004b0e54 */

void thunk_FUN_004b0e54(void)

{
  FUN_004b0e54();
  return;
}



/* vtable 00902778 slot 31 address 007751e4 */

/* ADDRESS: 007751e4 NAME: thunk_FUN_004b105a */

void thunk_FUN_004b105a(void)

{
  FUN_004b105a();
  return;
}



/* vtable 00902778 slot 32 address 007751fc */

/* ADDRESS: 007751fc NAME: thunk_FUN_004b107a */

void thunk_FUN_004b107a(void)

{
  FUN_004b107a();
  return;
}



/* vtable 00902778 slot 33 address 00775234 */

/* ADDRESS: 00775234 NAME: thunk_FUN_004b1f92 */

void thunk_FUN_004b1f92(void)

{
  FUN_004b1f92();
  return;
}



/* vtable 00902778 slot 34 address 00775254 */

/* ADDRESS: 00775254 NAME: thunk_FUN_004b1184 */

void thunk_FUN_004b1184(void)

{
  FUN_004b1184();
  return;
}



/* vtable 00902778 slot 35 address 00775204 */

/* ADDRESS: 00775204 NAME: thunk_FUN_004b1310 */

void thunk_FUN_004b1310(void)

{
  FUN_004b1310();
  return;
}



/* vtable 00902778 slot 36 address 00775284 */

/* ADDRESS: 00775284 NAME: thunk_FUN_004b1434 */

void thunk_FUN_004b1434(void)

{
  FUN_004b1434();
  return;
}



/* vtable 00902778 slot 37 address 0077528c */

/* ADDRESS: 0077528c NAME: thunk_FUN_004b14ee */

void thunk_FUN_004b14ee(void)

{
  FUN_004b14ee();
  return;
}



/* vtable 00902778 slot 38 address 0077525c */

/* ADDRESS: 0077525c NAME: thunk_FUN_004b15aa */

void thunk_FUN_004b15aa(void)

{
  FUN_004b15aa();
  return;
}



/* vtable 00902778 slot 39 address 00775304 */

/* ADDRESS: 00775304 NAME: thunk_FUN_004b1666 */

void thunk_FUN_004b1666(void)

{
  FUN_004b1666();
  return;
}



/* vtable 00902778 slot 40 address 007752ec */

/* ADDRESS: 007752ec NAME: thunk_FUN_004b16a4 */

void thunk_FUN_004b16a4(void)

{
  FUN_004b16a4();
  return;
}



/* vtable 00902778 slot 41 address 00775224 */

/* ADDRESS: 00775224 NAME: thunk_FUN_004b16fe */

void thunk_FUN_004b16fe(void)

{
  FUN_004b16fe();
  return;
}



/* vtable 00902778 slot 42 address 0077530c */

/* ADDRESS: 0077530c NAME: thunk_FUN_004b173c */

void thunk_FUN_004b173c(void)

{
  FUN_004b173c();
  return;
}



/* vtable 00902778 slot 43 address 007751f4 */

/* ADDRESS: 007751f4 NAME: thunk_FUN_004b17dc */

void thunk_FUN_004b17dc(void)

{
  FUN_004b17dc();
  return;
}



/* vtable 00902778 slot 44 address 0077524c */

/* ADDRESS: 0077524c NAME: thunk_FUN_004b184e */

void thunk_FUN_004b184e(void)

{
  FUN_004b184e();
  return;
}



/* vtable 00902778 slot 45 address 00775244 */

/* ADDRESS: 00775244 NAME: thunk_FUN_004b188c */

void thunk_FUN_004b188c(void)

{
  FUN_004b188c();
  return;
}



/* vtable 00902778 slot 46 address 00775274 */

/* ADDRESS: 00775274 NAME: thunk_FUN_004b16e6 */

void thunk_FUN_004b16e6(void)

{
  FUN_004b16e6();
  return;
}



/* vtable 00902778 slot 47 address 0077147c */

/* ADDRESS: 0077147c NAME: FUN_0077147c */

void FUN_0077147c(void)

{
  return;
}



/* vtable 00902778 slot 48 address 00771474 */

/* ADDRESS: 00771474 NAME: FUN_00771474 */

void FUN_00771474(void)

{
  return;
}



/* vtable 00902778 slot 49 address 00771470 */

/* ADDRESS: 00771470 NAME: FUN_00771470 */

void FUN_00771470(void)

{
  return;
}



/* vtable 00902778 slot 50 address 00771488 */

/* ADDRESS: 00771488 NAME: FUN_00771488 */

void FUN_00771488(void)

{
  return;
}



/* vtable 00902778 slot 51 address 00771478 */

/* ADDRESS: 00771478 NAME: FUN_00771478 */

void FUN_00771478(void)

{
  return;
}



/* vtable 00902778 slot 52 address 00771480 */

/* ADDRESS: 00771480 NAME: FUN_00771480 */

void FUN_00771480(void)

{
  return;
}



/* vtable 00902778 slot 53 address 00771484 */

/* ADDRESS: 00771484 NAME: FUN_00771484 */

void FUN_00771484(void)

{
  return;
}


