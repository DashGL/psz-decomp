// FUN_020b3074 @ 0x020b3074 (0x12, thumb) - ported from FUN_020a36d8 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_020b3074();
extern unsigned int FUN_020c1fc8();
extern unsigned int FUN_020c2624();


undefined4 FUN_020b3074(undefined4 param_1)



{

  undefined4 uVar1;

  

  uVar1 = FUN_020c1fc8();

  FUN_020c2624(uVar1,param_1);

  return param_1;

}
