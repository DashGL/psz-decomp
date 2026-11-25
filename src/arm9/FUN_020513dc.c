// FUN_020513dc @ 0x020513dc (0xe, thumb) - ported from FUN_020a5868 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020513dc();


undefined4 FUN_020513dc(int param_1)



{

  if (*(int *)(param_1 + 0x64) != 0) {

    return 1;

  }

  return 0;

}
