// FUN_02040218 @ 0x02040218 (0xa, thumb) - ported from FUN_0205c484 [banked], verified via tools/match.py (word compare + verify_relocs).
#include <m2c_prelude.h>
extern unsigned int FUN_02040218();


undefined4 FUN_02040218(int param_1,int param_2)



{

  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + param_2 * 4);

}
