// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets; argument/return contract corrected.
// Explicit extra argument evidence: notes/reference/resume2-root-20261112/extra-input-020d270c.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020d1bd4(int, int, int, int);
extern int *D_0211d094[];

int FUN_020d270c(int *p,int a,int (*fn)(int,int,int),int b,int extra) {
    if (p == 0) {
        p = D_0211d094[4];
    }
    if (p == 0) {
        return b;
    }
    int r = fn(p[3], a, b);
    if (r == 0) {
        r = FUN_020d1bd4(p[3], a, 2, b);
    }
    return r;
}
