// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Verified canonical full extent 0x48, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb

typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32 tok);

void FUN_0205a0f8(u32 *self)
{
    u32 prev = FUN_020683d4();
    u32 flag;

    flag = (self[3] & 1) ? 1 : 0;
    if (flag != 0) {
        self[3] = self[3] | 2;
        ((u32 *)self[2])[7] = ((u32 *)self[2])[7] | 0x20;
    }
    FUN_020683e8(prev);
}
