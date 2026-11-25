// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020d4d94 @ 0x020d4d94 (0xc, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern void *FUN_020c7bcc(int);
void *FUN_020d4d94(void) { return FUN_020c7bcc(160); }
