// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Restored call inputs: notes/reference/zero-call-low-20261113/FUN_02032d2c-proof.json
// FUN_02032d2c @ 0x02032d2c (0x12, thumb) - ported from FUN_0209dea8 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02032d2c();
extern int FUN_02082f70(char *, int);


undefined4 FUN_02032d2c(int *param_1, int value)



{

  undefined4 uVar1;

  

  if (*param_1 != 0) {

    uVar1 = FUN_02082f70((char *)*param_1, value);

    return uVar1;

  }

  return 0;

}
