// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020c75a8.json
// FUN_020c75a8 @ 0x020c75a8 (0xc, thumb) - auto-matched by tools/templates.py [global_getter] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern int G_0211CEF4[];
#define G G_0211CEF4
int FUN_020c75a8(int handle)
{
    return G[1];
}
