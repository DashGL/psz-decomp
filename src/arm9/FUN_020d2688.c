// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
typedef int *(*fn_t)(int, int, void *);
extern int *FUN_020d1bd4(int, int, int, void *);
extern struct { char pad[0x10]; int p10; } D_0211d094;

int FUN_020d2688(int a, int b, fn_t c, int d, ...) {
    int *res;
    if (a == 0) {
        a = D_0211d094.p10;
    }
    if (a == 0) {
        res = &d;
    } else {
        res = c(*(int *)(a + 0xc), b, &d);
        if (res == 0) {
            res = FUN_020d1bd4(*(int *)(a + 0xc), b, 0, &d);
        }
    }
    return *res;
}
