// FUN_02084c0c @ 0x02084c0c (0xe, thumb) - ported from FUN_0205d4a0 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02084c0c();


undefined4 FUN_02084c0c(int param_1)



{

  if (*(int *)(param_1 + 4) == 1) {

    return 1;

  }

  return 0;

}
