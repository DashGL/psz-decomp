// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets; argument/return contract corrected.
// Return/argument ABI: notes/reference/resume2-root-20261112/return-020c29a4.json
// FUN_020c29a4 @ 0x020c29a4 (0x16, thumb) - auto-matched by tools/templates.py [set_fields] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
char * FUN_020c29a4(char *p)
{
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0x4) = 0;
    *(int *)(p + 0x8) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x50) = 0;
    *(int *)(p + 0x54) = 0;
    *(int *)(p + 0x58) = 0;
    return p;
}
