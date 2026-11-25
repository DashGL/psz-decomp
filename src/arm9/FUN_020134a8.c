// FUN_020134a8 @ 0x020134a8 (0xc, arm) - ported from FUN_02018770 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#include <m2c_prelude.h>
extern unsigned int FUN_020134a8();


undefined4 FUN_020134a8(int param_1,int param_2)



{

  return *(undefined4 *)(param_1 + param_2 * 4 + 8);

}
