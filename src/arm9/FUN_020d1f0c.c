// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
struct Pair {
    int a;
    int b;
};
extern void FUN_020c7bec(int);
extern int FUN_020c77cc(void *);
extern int FUN_020d1ee8(int);
extern void FUN_020d1f58(void *);

void FUN_020d1f0c(int *a, int *b) {
    int t = a[1];
    if (t == 0) {
        a[3] = b[0];
    } else if (t == 1) {
        *(struct Pair *)(a + 3) = *(struct Pair *)b;
    } else if (t == 2) {
        if (a[3] != 0) {
            FUN_020c7bec(a[3]);
        }
        a[3] = (b == 0) ? 0 : FUN_020d1ee8(FUN_020c77cc(b));
    }
    FUN_020d1f58(a);
}
