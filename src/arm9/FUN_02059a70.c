// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct S {
    char pad[0x1c];
    unsigned int f1c;
    char pad2[0xc];
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
};

extern int FUN_02059afc(struct S *);
extern void FUN_02059b98(struct S *);

int FUN_02059a70(struct S *r5) {
    int r4 = 0;
    unsigned int b0 = r5->f1c;
    if (b0 & 2) b0 = 1; else b0 = r4;
    if (b0) {
        int res = FUN_02059afc(r5);
        unsigned int b1 = r5->f1c;
        if (b1 & 4) b1 = 1; else b1 = 0;
        if (b1) {
            r5->f1c &= ~4;
            r4 = r5->f44;
            r5->f44 = 0;
            r5->f2c = r5->f3c;
            r5->f34 = r5->f40;
            r5->f50 = r5->f48;
        }
        if (res != 0) {
            FUN_02059b98(r5);
        }
    }
    return r4;
}
