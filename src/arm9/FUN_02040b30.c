// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// Verified canonical full extent 0x12, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -O4,s

void FUN_02040b30(unsigned int *state)
{
    state[0]=~0u;state[1]=~0u;
    state[2]=0;state[3]=~0u;state[4]=0;
}
