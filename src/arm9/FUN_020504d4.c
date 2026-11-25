// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets; argument/return contract corrected.
// Restored call inputs: notes/reference/zero-call-low-20261113/FUN_020504d4-proof.json
// FUN_020504d4 @ 0x020504d4 (0x16, thumb) - ported from FUN_02072040 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020504d4();
extern unsigned int FUN_020bc508(unsigned int, unsigned int);


undefined4 FUN_020504d4(int param_1,int param_2)



{

  undefined4 uVar1;

  

  if ((*(int *)(param_1 + 4) != 0) && (param_2 != 0xff)) {

    uVar1 = FUN_020bc508((unsigned int)*(int *)(param_1 + 4), (unsigned int)param_2);

    return uVar1;

  }

  return 0;

}
