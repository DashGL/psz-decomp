// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Restored call inputs: notes/reference/zero-call-low-20261113/FUN_02034b14-proof.json
// FUN_02034b14 @ 0x02034b14 (0x12, thumb) - ported from FUN_020686c8 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02034b14();
extern int FUN_02034afc(char *, unsigned int);


undefined4 FUN_02034b14(char *self, unsigned int mask)



{

  int iVar1;

  

  iVar1 = FUN_02034afc(self, mask);

  if (iVar1 == 0) {

    return 1;

  }

  return 0;

}
