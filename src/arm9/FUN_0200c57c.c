// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Verified canonical full extent 0x18, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb
extern void (*DAT_020f65c8)(void);void FUN_0200c57c(void){DAT_020f65c8();}
