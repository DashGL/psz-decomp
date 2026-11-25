// FUN_02031c74 @ 0x02031c74 (0x12, thumb) - ported from FUN_0209ad30 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02031c74();


undefined4 FUN_02031c74(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 8) * 4);

  if (iVar1 != 0) {

    return *(undefined4 *)(iVar1 + 0xc);

  }

  return 0;

}
