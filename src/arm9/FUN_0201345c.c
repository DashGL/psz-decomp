// FUN_0201345c @ 0x0201345c (0x8, arm) - ported from FUN_02018724 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#include <m2c_prelude.h>
extern unsigned int FUN_0201345c();


undefined4 FUN_0201345c(int param_1,int param_2)



{

  return *(undefined4 *)(param_1 + param_2 * 4);

}
