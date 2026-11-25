// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
struct G {
    int f0;
    int f4;
    int f8;
    int fc;
};
extern int D_020fc8d8;
extern struct G D_0211b28c;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02012218(int);
extern int FUN_02012240(int, int);

void FUN_020ba8cc(int *a, int *b, int *c, int *d) {
    int s = FUN_020683d4();
    if (c != 0) {
        *c = D_020fc8d8;
    }
    if (d != 0) {
        *d = D_0211b28c.f8;
    }
    *a = FUN_02012218(D_0211b28c.fc);
    *b = FUN_02012240(D_0211b28c.fc, 0x10);
    FUN_020683e8(s);
}
