// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    short f4;
    short f6;
    int f8;
    short fc;
    short fe;
    int f10;
    char f14;
    char f15;
    short f16;
    void *f18;
    int f1c;
    int f20;
    int f24;
    int f28;
} S_d8668;
extern S_d8668 *FUN_020c7bcc(int);
extern void *FUN_020c70b8(int, int, int, void *, void *, void *);
extern void FUN_020c7bec(void *);
extern void FUN_020d864c(void);
extern void FUN_020d8640(void);
extern void FUN_020d8628(void);
S_d8668 *FUN_020d8668(int a, int b, short c) {
    S_d8668 *r4 = FUN_020c7bcc(0x2c);
    if (r4 == 0) {
        return 0;
    }
    r4->f18 = FUN_020c70b8(8, 8, 4, (void *)FUN_020d8640, (void *)FUN_020d864c, (void *)FUN_020d8628);
    if (r4->f18 == 0) {
        FUN_020c7bec(r4);
        return 0;
    }
    r4->f14 = 0;
    r4->f15 = 0;
    r4->f24 = 0;
    r4->f1c = 0;
    r4->f10 = 0;
    r4->f0 = b;
    r4->f4 = c;
    r4->f8 = 0;
    r4->fc = 0;
    return r4;
}
