// FUN_020b0ed0 @ 0x020b0ed0 (0xe, thumb) - ported from FUN_0205d4b0 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020b0ed0();


undefined4 FUN_020b0ed0(int param_1)



{

  if (*(int *)(param_1 + 112) == 5) {

    return 1;

  }

  return 0;

}
