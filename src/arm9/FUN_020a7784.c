// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
typedef unsigned int u32;
extern void FUN_020a7790(u32, int, int);

void FUN_020a7784(void *p, int x, int y)
{
    if (p != 0) {
        FUN_020a7790((u32)p, x, y);
    }
}
