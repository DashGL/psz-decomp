// FUN_0204771c @ 0x0204771c (0xe, thumb) - ported from FUN_0204e588 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_0204771c();


undefined4 FUN_0204771c(int param_1)



{

  if (*(int *)(param_1 + 0x44) < 0) {

    return 1;

  }

  return 0;

}
