// FUN_02011b38 @ 0x02011b38 (0x14, arm) - ported from FUN_02016678 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#include <m2c_prelude.h>
extern unsigned int FUN_02011b38();


undefined4 FUN_02011b38(int param_1,int param_2)



{

  undefined4 uVar1;

  

  if (param_2 == 0) {

    uVar1 = *(undefined4 *)(param_1 + 4);

  }

  else {

    uVar1 = *(undefined4 *)(param_2 + (uint)*(ushort *)(param_1 + 10));

  }

  return uVar1;

}
