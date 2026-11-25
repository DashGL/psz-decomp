// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d4bc0(void *a, int b, unsigned short c);
extern void *FUN_020d4d94(void);
extern void FUN_02001540(void *p, int v, int sz);
extern int FUN_020c7824(void);
extern int FUN_020d2a98(void *a, int b);
extern void *FUN_020c6da8(int a, int b, int c);
extern void FUN_020c7228(int a, void **b);
extern void FUN_020c7bec(void *a);
extern void FUN_020c6de0(void *a);

struct S_020d4da0 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    void *f8;
    unsigned char pad0c[0x10];
    int f1c;
    unsigned char pad20[0x24];
    void *f44;
    unsigned char pad48[0x8];
    void *f50;
    unsigned char pad54[0x8];
    void *f5c;
    void *f60;
    unsigned short f64;
    unsigned short f66;
    unsigned char pad68[0x20];
    int f88;
    unsigned char pad8c[0xc];
    void *f98;
    void *f9c;
};

int FUN_020d4da0(void *p0, int *p1, int p2, unsigned short p3) {
    struct S_020d4da0 *sp0 = 0;
    if (FUN_020d4bc0(p0, p2, p3) != 0) {
        return 5;
    }
    sp0 = (struct S_020d4da0 *)FUN_020d4d94();
    if (sp0 != 0) {
        FUN_02001540(sp0, 0, 0xa0);
        sp0->f0 = p2;
        sp0->f4 = p3;
        sp0->f8 = p0;
        sp0->f1c = FUN_020c7824();
        sp0->f88 = sp0->f1c;
        sp0->f64 = 0;
        sp0->f66 = 0;
        if (FUN_020d2a98(&sp0->f44, *(int *)((char *)p0 + 0x3c)) != 0) {
            if (FUN_020d2a98(&sp0->f50, *(int *)((char *)p0 + 0x38)) != 0) {
                sp0->f5c = FUN_020c6da8(0x10, 0x40, 0);
                if (sp0->f5c != 0) {
                    sp0->f60 = FUN_020c6da8(0x10, 0x40, 0);
                    if (sp0->f60 != 0) {
                        sp0->f98 = FUN_020c6da8(4, 2, 0);
                        if (sp0->f98 != 0) {
                            sp0->f9c = FUN_020c6da8(4, 2, 0);
                            if (sp0->f9c != 0) {
                                FUN_020c7228(*(int *)((char *)p0 + 0xc), (void **)&sp0);
                                *p1 = FUN_020d4bc0(p0, p2, p3);
                                if (*p1 != 0) {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (sp0 != 0) {
        FUN_020c7bec(sp0->f44);
        FUN_020c7bec(sp0->f50);
        if (sp0->f5c != 0) {
            FUN_020c6de0(sp0->f5c);
        }
        if (sp0->f60 != 0) {
            FUN_020c6de0(sp0->f60);
        }
        if (sp0->f98 != 0) {
            FUN_020c6de0(sp0->f98);
        }
        if (sp0->f9c != 0) {
            FUN_020c6de0(sp0->f9c);
        }
        FUN_020c7bec(sp0);
    }
    return 1;
}
