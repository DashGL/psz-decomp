// FUN_02046aa4 @ 0x02046aa4 (0x14, thumb) - ported from FUN_02070f24 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02046aa4();


undefined4 FUN_02046aa4(int param_1,int param_2)



{

  if (param_2 != 0) {

    *(int *)(param_1 + 0x1c) = param_2;

    *(int *)(param_1 + 0x20) = param_2;

  }

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;

  return 1;

}
