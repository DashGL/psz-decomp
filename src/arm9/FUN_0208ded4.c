// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0208ded4 @ 0x0208ded4 (0xe, thumb) - auto-matched by tools/templates.py [set_fields] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
void *FUN_0208ded4(char *p)
{
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x4) = 0;
    *(int *)(p + 0x8) = 0;
    return p;
}
