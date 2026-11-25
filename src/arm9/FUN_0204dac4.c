// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Restored call inputs: notes/reference/zero-call-low-20261113/FUN_0204dac4-proof.json
// FUN_0204dac4 @ 0x0204dac4 (0x12, thumb) - ported from FUN_020686c8 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_0204dac4();
extern int FUN_020855bc(int);


undefined4 FUN_0204dac4(int index)



{

  int iVar1;

  

  iVar1 = FUN_020855bc(index);

  if (iVar1 == 3) {

    return 1;

  }

  return 0;

}
