// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// Return/argument ABI: notes/reference/resume2-root-20261112/return-020d3828.json
// FUN_020d3828 @ 0x020d3828 (0xc, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020d37d0(void *, int, int);
int FUN_020d3828(void *a0) { return FUN_020d37d0(a0, 7, 2); }
