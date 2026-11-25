// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Return ABI: notes/reference/effect-family-20261113/FUN_02049130-return.json
// FUN_02049130 @ 0x02049130 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020476ac(void *);
int FUN_02049130(void *a0) { return FUN_020476ac(a0); }
