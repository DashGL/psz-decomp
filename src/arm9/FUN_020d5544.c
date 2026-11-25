// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Return/argument ABI: notes/reference/resume2-root-20261112/return-020d5544.json
// FUN_020d5544 @ 0x020d5544 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020d5360(int,void *);
int FUN_020d5544(int socket,void *state) { return FUN_020d5360(socket,state); }
