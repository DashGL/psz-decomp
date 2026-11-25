// FUN_02046bb8 @ 0x02046bb8 (0xe, thumb) - ported from FUN_02071038 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02046bb8();


undefined4 FUN_02046bb8(int param_1)



{

  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {

    return **(undefined4 **)(param_1 + 0x14);

  }

  return 0;

}
