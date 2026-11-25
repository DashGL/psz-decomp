// near: len=0xc0/0xb8 diffs=33 badrel=0 — codegen register coloring / scheduling residual
// flags: -O4,p -noThumb

struct Global21904 {
    unsigned char pad0[0x28];
    volatile int f28;
    int f2c;
    volatile int f30;
    unsigned char pad34[0x54 - 0x34];
    int f54;
    unsigned char *f58;
    int f5c;
};

struct Other21904 {
    int f0;
    int f4;
};

extern struct Global21904 DAT_02107054;
extern struct Other21904 DAT_021181a0;
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);

unsigned char *FUN_02021904(int *out_len) {
    int ime = FUN_020683d4();
    unsigned short len;

    while (DAT_02107054.f30 == DAT_02107054.f28) {
        DAT_02107054.f54 = DAT_021181a0.f4;
        FUN_020669dc(0);
        DAT_02107054.f54 = 0;
    }
    FUN_020683e8(ime);
    unsigned char *buf = DAT_02107054.f58;
    do {
        if ((unsigned int)(DAT_02107054.f5c - DAT_02107054.f30) < 2) {
            DAT_02107054.f30 = 0;
        }
        len = *(unsigned short *)(buf + DAT_02107054.f30);
        if (len == 0) {
            DAT_02107054.f30 = 0;
        }
    } while (len == 0);
    *out_len = len - 2;
    return DAT_02107054.f58 + DAT_02107054.f30 + 2;
}
