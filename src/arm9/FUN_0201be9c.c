// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// Verified canonical full extent 0x70, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb

typedef unsigned int u32;
extern void FUN_0201c9d4(int, int *, int);

void FUN_0201be9c(int *a0, int a1) {
    int stk[3];
    if (!(a0[2] & 0x100) && !(a0[2] & 0x200)) {
        if (a1 == 0) {
            stk[0] = stk[1] = stk[2] = a0[0x35];
        } else {
            stk[0] = stk[1] = stk[2] = a0[0x36];
        }
        FUN_0201c9d4(0x1b, stk, 3);
    }
    a0[0]++;
}
