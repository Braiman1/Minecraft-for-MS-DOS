/* Candidate RTTI class: BiomeGenSky
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb618 slot 0 address 00414d0a */

/* ADDRESS: 00414d0a NAME: FUN_00414d0a */

undefined4 * FUN_00414d0a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0040e7b8(10);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00846710(0x78);
    FUN_00514b1c();
  }
  else {
    puVar2 = (undefined4 *)FUN_00846710(4);
    *puVar2 = &PTR_LAB_008ff580;
  }
  return puVar2;
}



/* vtable 008fb618 slot 1 address 00415bf4 */

/* ADDRESS: 00415bf4 NAME: FUN_00415bf4 */

undefined * FUN_00415bf4(void)

{
  return &DAT_00c0c0ff;
}



/* vtable 008fb618 slot 2 address 00414ce0 */

/* ADDRESS: 00414ce0 NAME: FUN_00414ce0 */

int __thiscall FUN_00414ce0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_1 + 0x2c;
  if (((iVar1 != 0) && (iVar2 = param_1 + 0x38, iVar1 != 1)) && (iVar2 = param_1 + 0x44, iVar1 != 2)
     ) {
    iVar2 = 0;
  }
  return iVar2;
}



/* vtable 008fb618 slot 3 address 00772090 */

/* ADDRESS: 00772090 NAME: thunk_FUN_00772098 */

void thunk_FUN_00772098(void)

{
  FUN_00772098();
  return;
}



/* vtable 008fb618 slot 4 address 0077206c */

/* ADDRESS: 0077206c NAME: FUN_0077206c */

void __fastcall FUN_0077206c(void *param_1)

{
  FUN_00772098();
  free(param_1);
  return;
}


