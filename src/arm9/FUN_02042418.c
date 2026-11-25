// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// Verified canonical full extent 0x24, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -O4,p

typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_02046b54(u32 entry);

u32 FUN_02042418(u32 base, int idx)
{
    u32 r0;
    if ((int)idx > -1) {
        if (idx < 5) {
            r0 = *(u32 *)((u8 *)base + (idx << 2) + 0xcc);
            if (r0 != 0) {
                return FUN_02046b54(r0);
            }
        }
    }
    return 1;
}
