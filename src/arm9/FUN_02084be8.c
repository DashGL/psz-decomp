// FUN_02084be8 @ 0x02084be8 (0xe, thumb) - ported from FUN_0205d47c [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02084be8();


undefined4 FUN_02084be8(int param_1)



{

  if (*(int *)(param_1 + 4) == 0) {

    return 1;

  }

  return 0;

}
