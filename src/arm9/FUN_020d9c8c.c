// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
extern int FUN_020d9930(int);
extern int FUN_020d99a8(void *, void *, int);
extern int FUN_020d9958(void *, int);
extern int FUN_020015ac(void *, const void *, int);
extern void FUN_020d9a44(void *, void *, int, int *, unsigned short *);
extern void *FUN_020d8668(void *, int, int);
extern int FUN_020d86e4(void *);
extern int FUN_020d9a88(void *, void *, void *, int, int);
extern void FUN_020d8f18(void *, void *);
extern const unsigned char DAT_02100114[];

int FUN_020d9c8c(void *a0, unsigned char *a1, int a2) {
    int sp04;
    unsigned short sp08;
    int sp0c;
    unsigned char r7;
    void *r7_p;
    int r4;
    if (a2 < 1) {
        return 0;
    }
    r7 = a1[0];
    sp04 = FUN_020d9930(r7);
    if (a2 < sp04) {
        return 0;
    }
    if ((r7 & 0x40) != 0) {
        if (FUN_020d99a8(a0, a1 + sp04, a2 - sp04) == 0) {
            return 0;
        }
    }
    if ((r7 & 0x80) != 0) {
        if (FUN_020d9958(a1 + sp04, a2 - sp04) == 0) {
            return 0;
        }
    }
    if (FUN_020015ac(a1 + 1, DAT_02100114, 4) == 0) {
        return -1;
    }
    FUN_020d9a44(a0, a1, a2, &sp0c, &sp08);
    r7_p = FUN_020d8668(a0, sp0c, sp08);
    if (FUN_020d86e4(r7_p) != 0) {
        return -2;
    }
    r4 = FUN_020d9a88(a0, r7_p, a1, a2, 1);
    FUN_020d8f18(a0, r7_p);
    return r4;
}
