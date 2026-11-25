// FUN_02046ab8 @ 0x02046ab8 (0xe, thumb) - ported from FUN_02070f38 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02046ab8();


undefined4 FUN_02046ab8(int param_1,int param_2)



{

  if (param_2 != 0) {

    *(int *)(param_1 + 0x20) = param_2;

    return 1;

  }

  return 0;

}
