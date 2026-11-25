// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// Verified canonical full extent 0x12, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md

void FUN_0203c15c(int *p, int v1, int v2) {
    *(int *)((char *)p + 0x20c) = v2;
    *(int *)((char *)p + 0x210) = v1;
    *(int *)((char *)p + 0x214) = 0;
}
