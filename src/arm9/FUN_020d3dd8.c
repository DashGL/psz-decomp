// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5a, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020c6eec(void *, int);
extern int FUN_020c6e0c(void *);
extern int *FUN_020c6e10(void *, int);
extern void FUN_020d2b88(void *, int, int);
void FUN_020d3dd8(char *a, int *b, int c) {
    int sp4 = b[0];
    int r7 = b[1];
    int i, r5 = 0;
    int n;
    FUN_020c6eec(*(void **)(a + 0x5c), c);
    n = FUN_020c6e0c(*(void **)(a + 0x5c));
    for (i = r5; i < n; i++) {
        int *p = FUN_020c6e10(*(void **)(a + 0x5c), i);
        if (p[0] > sp4) {
            int v1 = p[0] - r7;
            int end;
            p[0] = v1;
            end = v1 + p[1];
            if (r5 <= end) {
                r5 = end;
            }
        }
    }
    FUN_020d2b88(a + 0x44, sp4, r7);
}
