// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Return/argument ABI: notes/reference/resume2-root-20261112/return-020dd2c8.json
// FUN_020dd2c8 @ 0x020dd2c8 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern unsigned int FUN_020dd244(void *);
unsigned int FUN_020dd2c8(void *a0) { return FUN_020dd244(a0); }
