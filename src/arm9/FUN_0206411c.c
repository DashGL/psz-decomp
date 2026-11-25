// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
struct Inner {
    char pad[0x50d];
    unsigned char f50d;
    char pad2[0x18];
    unsigned short f526;
    char pad3[0xbc];
    int f5e4;
};

struct G {
    int f0;
    int f4;
    struct Inner *f8;
};

extern struct G DAT_021180a0;
extern void FUN_02064110(void);
extern int FUN_020683d4(void);
extern void FUN_02062970(int);
extern int FUN_02064840(void);
extern void FUN_020649ec(void *);
extern int FUN_020640d8(void);
extern void FUN_020683e8(int);

int FUN_0206411c(void) {
    int r5 = 1;
    int r4 = FUN_020683d4();
    struct Inner *r2 = DAT_021180a0.f8;
    if (r2->f50d == 0) {
        FUN_02062970(0);
    } else if (r2->f526 == 0) {
        r2->f5e4 = 0;
        DAT_021180a0.f8->f526 = r5;
        if (FUN_02064840() != 0) {
            FUN_020649ec((void *)FUN_02064110);
            r5 = 0;
        } else {
            r5 = FUN_020640d8();
        }
    }
    FUN_020683e8(r4);
    return r5;
}
