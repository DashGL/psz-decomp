// FUN_0204770c @ 0x0204770c (0xe, thumb) - ported from FUN_0204e578 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_0204770c();


undefined4 FUN_0204770c(int param_1)



{

  if (*(int *)(param_1 + 4) == 4) {

    return 1;

  }

  return 0;

}
