// FUN_02084bf8 @ 0x02084bf8 (0x12, thumb) - ported from FUN_0205d48c [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02084bf8();


undefined4 FUN_02084bf8(int param_1)



{

  undefined4 uVar1;

  

  uVar1 = 1;

  if ((*(int *)(param_1 + 4) != 1) && (*(int *)(param_1 + 4) != 2)) {

    uVar1 = 0;

  }

  return uVar1;

}
