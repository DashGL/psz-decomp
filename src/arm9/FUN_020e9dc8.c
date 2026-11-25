// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -O4,s
struct Entry {
    int f0, f4, f8, fc, f10, f14, f18;
    unsigned char f1c, f1d;
    unsigned short f1e;
    int f20;
    long long f24;
    int f2c;
};
struct Global {
    struct Entry entries[0x20];
    int f600;
    void (*f604)(int, int, int);
    int f608;
};
extern struct Global *DAT_0211e5e4;
extern int FUN_020e9bf8(int);
extern void FUN_020e056c(int, int);
extern void FUN_02065774(int, int, int);
extern long long FUN_02067e0c(void);

void FUN_020e9dc8(int a, int b, int c) {
    struct Entry *r4 = &DAT_0211e5e4->entries[a];
    if (FUN_020e9bf8(a) == 2) {
        if (r4->f10 + c > r4->f8) {
            FUN_020e056c(6, -0x17d54);
            return;
        }
        FUN_02065774(b, r4->f4 + r4->f10, c);
    }
    r4->f10 += c;
    if (r4->f10 == r4->f18) {
        int len = r4->f18;
        r4->f1d = 1;
        r4->f10 = 0;
        r4->f18 = 0;
        if (DAT_0211e5e4->f604 != 0) {
            DAT_0211e5e4->f604(a, r4->f4, len);
        }
    }
    if (DAT_0211e5e4->f608 != 0 && r4->f2c != 0) {
        r4->f24 = FUN_02067e0c();
    }
}
