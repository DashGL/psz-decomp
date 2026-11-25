// FUN_020e5124 @ 0x020e5124 (0x12, thumb) - ported from FUN_020686c8 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020e5124();
extern unsigned int FUN_020e961c();


undefined4 FUN_020e5124(void)



{

  int iVar1;

  

  iVar1 = FUN_020e961c();

  if (iVar1 == 0) {

    return 1;

  }

  return 0;

}
