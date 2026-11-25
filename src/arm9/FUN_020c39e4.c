// FUN_020c39e4 @ 0x020c39e4 (0xe, thumb) - ported from FUN_020a5868 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020c39e4();


undefined4 FUN_020c39e4(int param_1)



{

  if (*(int *)(param_1 + 0x4) != 0) {

    return 1;

  }

  return 0;

}
