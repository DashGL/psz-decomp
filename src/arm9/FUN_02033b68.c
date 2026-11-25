// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Restored call inputs: notes/reference/zero-call-low-20261113/FUN_02033b68-proof.json
// FUN_02033b68 @ 0x02033b68 (0x12, thumb) - ported from FUN_02070c9c [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern int FUN_0201d764(int);
extern unsigned int FUN_02033b68();


undefined4 FUN_02033b68(int param_1)



{

  undefined4 uVar1;

  

  if (*(int *)(param_1 + 8) != 0) {

    uVar1 = FUN_0201d764(*(int *)(param_1 + 8));

    return uVar1;

  }

  return 0;

}
