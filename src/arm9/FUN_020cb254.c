// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,p
struct ObjCB254 {
    int f0;
    int f4;
    int f8;
    unsigned short uc;
    unsigned short ue;
    unsigned char pad10[0x1c];
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
};

extern const char DAT_020fd3f0[];
extern const char DAT_020fd388[];
extern const char DAT_020fd350[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020c6e0c(int);
extern unsigned int FUN_020c8824(int, int);
extern void FUN_020c85a0(int, int, int, int, int, int);
extern int FUN_020cb0cc(int *, void *, int, int);

int FUN_020cb254(int *p0, struct ObjCB254 *p1, int p2, int p3) {
    if (p1->f2c == 0) {
        FUN_02000edc(DAT_020fd3f0, DAT_020fd388, DAT_020fd350, 0x11b);
    }
    int r6 = 0;
    int r7 = *p0;
    if (p3 == 0) {
        return r6;
    }
    if (p1->f34 - p1->f38 == 0 && FUN_020c6e0c(p1->f3c) == 0) {
        if (p3 <= (int)(FUN_020c8824(p1->f8, p1->uc) - 0x17)) {
            FUN_020c85a0(p1->f8, p1->uc, r7 + 0x220, p2, p3, 1);
            r6 = p3;
            p3 = 0;
        } else {
            unsigned int avail = FUN_020c8824(p1->f8, p1->uc);
            if (avail > 0x17) {
                r6 = avail - 0x17;
                FUN_020c85a0(p1->f8, p1->uc, r7 + 0x220, p2, r6, 1);
                p3 -= r6;
            }
        }
    }
    if (p3 != 0) {
        int res = FUN_020cb0cc(p0, &p1->f2c, p2 + r6, p3);
        if (res != 0) {
            return res;
        }
    }
    return 0;
}
