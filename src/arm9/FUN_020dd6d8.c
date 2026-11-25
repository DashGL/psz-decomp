// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020dd6d8 @ 0x020dd6d8 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern unsigned int FUN_020dd6c4(void *);
unsigned int FUN_020dd6d8(void *a0) { return FUN_020dd6c4(a0); }
