// FUN_02037b78 @ 0x02037b78 (0xe, thumb) - ported from FUN_020a5868 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02037b78();


undefined4 FUN_02037b78(int param_1)



{

  if (*(int *)(param_1 + 0xc) != 0) {

    return 1;

  }

  return 0;

}
