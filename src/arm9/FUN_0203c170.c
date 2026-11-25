// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa, exact bytes and relocation targets.
// Verified canonical full extent 0xa, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -O4,s

typedef unsigned int u32;
void FUN_0203c170(u32 actor)
{
    *(u32 *)(actor+0x208)=1;
}
