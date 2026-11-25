// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
extern const char D_020fdd78[];
extern const char D_020fdd8c[];
extern void FUN_020d1b74(int, const char *);
extern int FUN_020c77cc(int);
extern void FUN_020c6e84(int, int *, void (*)(void));
extern void FUN_020ce12c(void);

int FUN_020ce138(int a, int b, int c, int d) {
    int arr[2];
    if (c == 0) {
        FUN_020d1b74(a, D_020fdd78);
        return 2;
    }
    if (d == 0) {
        FUN_020d1b74(a, D_020fdd8c);
        return 2;
    }
    arr[0] = FUN_020c77cc(c);
    arr[1] = FUN_020c77cc(d);
    FUN_020c6e84(b, arr, FUN_020ce12c);
    return 0;
}
