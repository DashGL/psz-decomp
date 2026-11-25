// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020dd7cc @ 0x020dd7cc (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern unsigned int func_020dd7d4(void *);
unsigned int FUN_020dd7cc(void *a0) { return func_020dd7d4(a0); }
