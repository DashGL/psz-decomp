// FUN_02084c1c @ 0x02084c1c (0xe, thumb) - ported from FUN_0205d4b0 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02084c1c();


undefined4 FUN_02084c1c(int param_1)



{

  if (*(int *)(param_1 + 4) == 2) {

    return 1;

  }

  return 0;

}
