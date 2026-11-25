// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x8, exact bytes and relocations.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_020af5ac @ 0x020af5ac (0x8, thumb)
void FUN_020af5ac(void *unused, char *p)
{
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0x4) = 0;
}
