// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Verified canonical full extent 0x18, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb

typedef unsigned int u32;

extern u32 FUN_02025fa0(u32);
extern int FUN_02026018(u32, u32);

int FUN_020260a8(u32 param_1, u32 argument)
{
    u32 node;

    node = FUN_02025fa0(param_1);
    return FUN_02026018(node, argument);
}
