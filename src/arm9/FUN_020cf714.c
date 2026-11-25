// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -O4,p
extern const char DAT_020fe01c[];
extern const char DAT_020fe024[];
extern const char DAT_020fdfb4[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020cf7a8(void *, int, int *);
extern void FUN_020c7228(int, void *);

int FUN_020cf714(int *a, int b) {
    int out;
    int *p = (int *)((char *)*a + 0x5c8);
    if (b <= 0) {
        FUN_02000edc(DAT_020fe01c, DAT_020fe024, DAT_020fdfb4, 0x2c8);
    }
    if (b <= 0) {
        return 0;
    }
    if (FUN_020cf7a8(a, b, &out) != 0) {
        return out;
    }
    {
        int arr[8] = {0};
        arr[0] = b;
        arr[1] = 0;
        arr[4] = 0;
        arr[5] = 0;
        arr[7] = 0;
        arr[6] = 0;
        FUN_020c7228(p[0], arr);
    }
    p[1]++;
    if (FUN_020cf7a8(a, b, &out) != 0) {
        return out;
    }
    return 0;
}
