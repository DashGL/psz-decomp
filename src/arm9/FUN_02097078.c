// FUN_02097078 @ 0x02097078 (0xe, thumb) - ported from FUN_0205d47c [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02097078();


undefined4 FUN_02097078(int param_1)



{

  if (*(int *)(param_1 + 48) == 0) {

    return 1;

  }

  return 0;

}
