// FUN_02084ce8 @ 0x02084ce8 (0x18, thumb) - ported from FUN_0205d598 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02084ce8();
extern unsigned int FUN_02073198();
extern unsigned int FUN_020731d8();


undefined4 FUN_02084ce8(void)



{

  int iVar1;

  int iVar2;

  

  iVar1 = FUN_02073198();

  iVar2 = FUN_020731d8();

  if (iVar2 == iVar1) {

    return 1;

  }

  return 0;

}
