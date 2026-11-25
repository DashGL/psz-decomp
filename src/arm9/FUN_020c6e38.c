// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern void FUN_020c6d74(void *);
extern void *FUN_020c6e10(void *, int);
extern void FUN_020014f4(void *, void *, int);
extern void FUN_020c6d90(void *, int, int);

void FUN_020c6e38(int *a, int b, int c) {
    int n;
    int old;
    if (a[0] == a[1]) {
        FUN_020c6d74(a);
    }
    n = a[0] + 1;
    old = n - 1;
    a[0] = n;
    if (c < old) {
        void *dst = FUN_020c6e10(a, c + 1);
        void *src = FUN_020c6e10(a, c);
        FUN_020014f4(dst, src, a[2] * (old - c));
    }
    FUN_020c6d90(a, b, c);
}
