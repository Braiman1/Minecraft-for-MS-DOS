/* Candidate RTTI class: Minecraft
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009077c4 slot 0 address 0051b4ce */

/* ADDRESS: 0051b4ce NAME: FUN_0051b4ce */

void FUN_0051b4ce(int param_1)

{
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0051b460(&DAT_00896ec0);
  if (param_1 == 0) {
    FUN_0051b460("Unknown crash");
    local_20 = 0;
  }
  else {
    FUN_008238d0(param_1);
    local_20 = *(undefined1 *)(param_1 + 0x18);
  }
  FUN_0051b198(local_38,local_50);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return;
}


