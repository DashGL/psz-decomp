// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// Verified canonical full extent 0x12, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -O4,p

int FUN_0204ca4c(unsigned char *item,int subtype)
{
    if (item[3]==(unsigned char)subtype)
        return 1;
    return 0;
}
