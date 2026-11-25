// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// Verified canonical full extent 0x12, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
#include <m2c_prelude.h>
extern unsigned int FUN_0203b3e4();


undefined4 FUN_0203b3e4(int param_1)



{

  if (*(int *)(param_1 + 0x240) == 0x13) {

    return 1;

  }

  return 0;

}
