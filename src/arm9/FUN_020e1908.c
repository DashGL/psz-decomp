// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x100, exact bytes and relocation targets.
extern void FUN_020e4abc(void);
extern void FUN_020e170c(int);
extern int FUN_020e1758(void *, int);
extern void FUN_020e4f6c(void);

struct Se1908 {
    char pad0[0x24];
    int f24;
    char pad28[0x4];
    unsigned char f2c;
    char pad2d[0x37];
    int f64;
    char pad68[0x18];
    void (*f80)(int, int, int);
    int f84;
    void (*f88)(int, int, int, int, int, int);
    int f8c;
    char pad90[0x2f5];
    unsigned char f385;
    char pad386[0x7];
    volatile unsigned char f38d;
    char pad38e[0xde];
    int f46c[43];
    int f518;
    char pad51c[0x12c];
    unsigned char f648[32];
    int f668;
};
extern struct Se1908 *DAT_0211dcbc;

void FUN_020e1908(int a0, int a1, int a2, int a3, int a4) {
    if (a0 == 0 && a1 != 0) {
        if (DAT_0211dcbc->f518 == 0) {
            FUN_020e4abc();
            FUN_020e170c(3);
        }
    } else if (a0 == 0) {
        int i;
        FUN_020e170c(6);
        for (i = 0; i <= DAT_0211dcbc->f385; i++) {
            if (DAT_0211dcbc->f64 == DAT_0211dcbc->f46c[i]) {
                DAT_0211dcbc->f2c = DAT_0211dcbc->f648[i];
                break;
            }
        }
    }
    DAT_0211dcbc->f668 = FUN_020e1758(DAT_0211dcbc->f648, DAT_0211dcbc->f385 + 1);
    FUN_020e4f6c();
    if (DAT_0211dcbc->f38d == 2 || DAT_0211dcbc->f38d == 3) {
        DAT_0211dcbc->f88(a0, a1, a2, a3, a4, DAT_0211dcbc->f8c);
    } else {
        DAT_0211dcbc->f80(a0, a1, DAT_0211dcbc->f84);
    }
    if (a0 != 0 && DAT_0211dcbc != 0 && DAT_0211dcbc->f24 == 5) {
        FUN_020e170c(3);
    }
}
