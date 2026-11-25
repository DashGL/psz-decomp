// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0200d968 @ 0x0200d968 (0x10, arm) - ported from FUN_02027f98 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#include <m2c_prelude.h>

extern unsigned int FUN_020695d0(void *, void *);


undefined4 FUN_0200d968(void *a, void *b)



{

  FUN_020695d0(a, b);

  return 1;

}
