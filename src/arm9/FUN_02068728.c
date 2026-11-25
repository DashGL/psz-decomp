// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// Verified 2026-11-12: full ARM extent 0x10, exact bytes and relocations.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// flags: -noThumb
extern unsigned int FUN_020683d4(void); extern void FUN_02068738(void);
void FUN_02068728(void) {for(;;) {FUN_020683d4();FUN_02068738();}}
