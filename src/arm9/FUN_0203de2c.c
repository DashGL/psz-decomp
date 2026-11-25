// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14c, exact bytes and relocation targets.
//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02094928(void *a, int b);
extern void FUN_020472bc(void *a);
extern void FUN_0203bfb4(void *a);
extern void *FUN_0204a580(void);
extern void FUN_0204a670(void *a, int b);
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *a, int b);
extern void FUN_0203c824(void *a);
extern void *PTR_02108c84;
extern void FUN_0203a9a4(void *a, int b);
extern void FUN_0203a834(void *a);
extern void FUN_02038154(void *a);
extern void *PTR_02108d08;
extern void FUN_0203eee4(void *a, unsigned char b);
}

struct S_0203de2c {
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0c();
    virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1c();
    virtual void vf20(); virtual void vf24(); virtual void vf28(); virtual void vf2c();
    virtual void vf30(); virtual void vf34(); virtual void vf38(); virtual void vf3c();
    virtual void vf40(); virtual void vf44(); virtual void vf48(); virtual void vf4c();
    virtual void vf50(); virtual void vf54(); virtual void vf58(); virtual void vf5c();
    virtual void vf60(); virtual void vf64(); virtual void vf68(); virtual void vf6c();
    virtual void vf70(); virtual void vf74(); virtual void vf78(); virtual void vf7c();
    virtual void vf80(); virtual void vf84(); virtual void vf88(); virtual void vf8c();
    virtual void vf90(); virtual void vf94(); virtual void vf98(); virtual void vf9c();
    virtual void vfa0(); virtual void vfa4(); virtual void vfa8(); virtual void vfac();
    virtual void vfb0(); virtual void vfb4(); virtual void vfb8(); virtual void vfbc();
    virtual void vfc0(); virtual void vfc4(); virtual void vfc8();
    unsigned char pad4[0x94];
    unsigned char f98;
    unsigned char pad99[0x47];
    void *fe0;
    unsigned char pade4[0x14];
    volatile unsigned int ff8;
    int ffc;
    unsigned char pad100[0x43];
    signed char f143;
    unsigned char pad144[0xbb];
    char f1ff;
    unsigned char pad200[0x38];
    int f238;
    int f23c;
    int f240;
    unsigned char pad244[0xc];
    unsigned int f250;
    unsigned char pad254[0x40];
    void *f294;
    void *f298[4];
};

extern "C" void FUN_0203de2c(S_0203de2c *p0) {
    int r4;
    int i;

    if (p0->f240 == 0x12) {
        FUN_02094928(p0, p0->f143);
    }
    p0->f238 = 0;
    p0->f1ff = -1;
    if (p0->fe0 != 0) {
        FUN_020472bc(p0->fe0);
        p0->fe0 = 0;
    }
    p0->vfc8();
    if (p0->f294 != 0) {
        FUN_020472bc(p0->f294);
        p0->f294 = 0;
    }
    FUN_0203bfb4(p0);
    FUN_0204a670(FUN_0204a580(), p0->ffc);
    r4 = *(int *)((char *)p0 + 0xbac);
    if (r4 != -1) {
        FUN_020bed1c(FUN_020be450(), r4);
        *(int *)((char *)p0 + 0xbac) = -1;
    }
    for (i = 0; i < 4; i++) {
        if (p0->f298[i] != 0) {
            FUN_0203c824(p0->f298[i]);
            p0->f298[i] = 0;
        }
    }
    if (PTR_02108c84 != 0) {
        void *v = *(void **)((char *)PTR_02108c84 + *(int *)((char *)PTR_02108c84 + 0x64) * 4 + 0x40);
        if (v != 0) {
            (*(void (**)(void *))(*(int *)v + 0x50))(v);
        }
    }
    FUN_0203a9a4(p0, 0);
    FUN_0203a834(p0);
    p0->f250 |= 4;
    p0->ff8 |= 2;
    p0->ff8 |= 1;
    p0->ff8 |= 0x08000000;
    p0->ff8 &= ~0x40000000;
    FUN_02038154(p0);
    if (PTR_02108d08 != 0) {
        FUN_0203eee4(PTR_02108d08, p0->f98);
    }
}
