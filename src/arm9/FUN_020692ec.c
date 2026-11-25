// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020692ec @ 0x020692ec (0x10, arm) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int FUN_020692fc(int);
int FUN_020692ec(void) { return FUN_020692fc(39); }
