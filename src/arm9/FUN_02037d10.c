// FUN_02037d10 @ 0x02037d10 (0xe, thumb) - ported from FUN_020a5868 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02037d10();


undefined4 FUN_02037d10(int param_1)



{

  if (*(int *)(param_1 + 0x8) != 0) {

    return 1;

  }

  return 0;

}
