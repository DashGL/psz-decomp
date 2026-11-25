// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x160, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x160 exact_bytes=0 bad_relocs=0
// ABI/control proof: notes/sessions/matching-resume2-2026-11-12-damage.md
//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0203bf3c(void *);
extern int FUN_0203ae60(void *);
extern int FUN_020390f4(void *);
extern int FUN_0203b41c(void *);
extern void FUN_02034680(void *, const void *);
extern void FUN_0203807c(void *, int, int, int);
extern int FUN_02039108(void *, int, int, int);
extern void FUN_020391cc(void *, int);
extern void *FUN_0204f3b8(void);
extern void FUN_020b5ad8(void *, int);
extern void FUN_0206f558(void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern void FUN_02039050(void *, int);
extern void FUN_02050018(int, void (*)(void), void *, int);
extern void FUN_0203aaf0(void *, int);
extern void FUN_0206f664(void);
extern void FUN_0206f5e4(void);
}

struct Vec3_6f3f4 {
    int x, y, z;
};

struct Sub50_6f3f4 {
    char pad[0xc];
    unsigned short fc;
};

struct S_6f3f4 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
    virtual void va0(); virtual void va4(); virtual void va8(); virtual void vac();
    virtual void vb0(); virtual void vb4(); virtual void vb8(); virtual void vbc();
    virtual void vc0(); virtual void vc4(); virtual void vc8(); virtual void vcc();
    char pad0[0x50 - 4];
    struct Sub50_6f3f4 f50;
    char pad1[0x8c - 0x5e];
    void *f8c;
    char pad2[0x9c - 0x90];
    struct Vec3_6f3f4 f9c;
    char pad3[0xb4 - 0xa8];
    struct Vec3_6f3f4 fb4;
    char pad4[0xd8 - 0xc0];
    int fd8;
    char pad5[0xf8 - 0xdc];
    unsigned int ff8;
    int ffc;
    char pad6[0x14e - 0x100];
    unsigned short f14e;
    char pad7[0x240 - 0x150];
    int f240;
};

struct Sp_6f3f4 {
    int f0;
    struct Vec3_6f3f4 f4;
    int f10;
    int f14;
    int f18;
    int f1c;
};

extern "C" void FUN_0206f3f4(struct S_6f3f4 *p0, int p1, int p2, int p3) {
    struct Sub50_6f3f4 *sub = &p0->f50;
    int hp = p0->f14e + p1;
    if (hp < 0) {
        hp = 0;
    } else if (hp > sub->fc) {
        hp = sub->fc;
    }
    p0->f14e = hp;
    if (FUN_0203bf3c(p0) != 0) {
        if (p2 != 0 && ((p0->ff8 & 0x100) ? 1 : 0) == 0 &&
            FUN_0203ae60(p0) == 0 && FUN_020390f4(p0) == 0 && FUN_0203b41c(p0) == 0) {
            int st = p0->f240;
            if (st == 0xf || st == 0xc) {
                FUN_02034680(&p0->f9c, &p0->fb4);
                if (p0->f8c != 0) {
                    FUN_0203807c(p0->f8c, p0->f9c.x, p0->f9c.y, p0->f9c.z);
                }
            }
            if (FUN_02039108(p0, 7, p0->fd8, 0) != 0) {
                p0->vcc();
                FUN_020391cc(p0, 0);
                p0->f240 = 4;
                FUN_020b5ad8(FUN_0204f3b8(), p0->ffc);
            }
        }
        {
            struct Vec3_6f3f4 v20 = p0->fb4;
            struct Sp_6f3f4 sp0;
            v20.y = 0x1000;
            FUN_0206f558(&sp0);
            sp0.f0 = 0;
            sp0.f14 = 10;
            sp0.f10 = -p1;
            FUN_02034680(&sp0.f4, &v20);
            FUN_020719d8(FUN_020718e0(), &sp0);
        }
        if (p3 != 0) {
            FUN_02039050(p0, 0);
            FUN_02050018(1, FUN_0206f664, p0, 0);
        } else {
            FUN_02039050(p0, 0);
            FUN_02050018(1, FUN_0206f5e4, p0, 0);
        }
        FUN_0203aaf0(p0, 1);
    }
}
