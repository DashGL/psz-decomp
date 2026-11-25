// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// Return contract corrected from explicit producer and consumed caller evidence.
// FUN_02053f84 @ 0x02053f84 (0x10, arm) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int FUN_02053f28(void *, int);
int FUN_02053f84(void *a0) { return FUN_02053f28(a0, 1); }
