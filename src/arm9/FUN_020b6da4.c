// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020b6da4 @ 0x020b6da4 (0xc, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020b73fc(void *, int);
int FUN_020b6da4(void *a0) { return FUN_020b73fc(a0, 39); }
