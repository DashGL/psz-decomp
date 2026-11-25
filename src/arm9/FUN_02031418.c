// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets.
// Verified canonical full extent 0xe, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
void FUN_02031418(char *p, int value)
{
    *(int *)(p + 0x0) = 1;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 1;
    *(int *)(p + 0x14) = value;
}
