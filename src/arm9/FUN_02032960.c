// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// Verified canonical full extent 0x14, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -O4,s

typedef unsigned int u32;
extern void FUN_02082a3c(u32);
void FUN_02032960(u32 *state)
{
    state[7]=~0u;
    if (state[0]) FUN_02082a3c(state[0]);
}
