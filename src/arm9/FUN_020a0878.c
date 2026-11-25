// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x160, exact bytes and relocation targets.
//cpp
// flags: -O4,s
extern "C" {
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020bc2dc(void *, const void *, int);
extern void *FUN_020bc3c0(void *, const void *, int);
extern int FUN_020bc508(void *, int);
extern unsigned short FUN_02037adc(void *, int, int);
extern unsigned short FUN_02037c88(void *, int, int, int);
extern void *FUN_02033d60(void *, unsigned short, int, unsigned short);
extern void FUN_02033e0c(void *, void *, unsigned short, int);

extern const void *DAT_020fb944[];
extern const void *DAT_020fb94c[];
extern void *DAT_02108c84;

struct S_a0878_020a0878 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    char pad0[0x88 - 4];
    void *f88;
    void *f8c;
    void *f90;
    void *f94;
    unsigned short f98;
    unsigned short f9a;
    void *f9c;
    char pad1[0xb0 - 0xa0];
    int fb0;
};

void FUN_020a0878(struct S_a0878_020a0878 *p0, int p1) {
    void *r4;
    void *tmp;
    p0->v64();
    if (p1 < 0 || p1 >= 12) {
        return;
    }
    tmp = FUN_020ba894(0x84);
    if (tmp != 0) {
        tmp = FUN_020bc2dc(tmp, DAT_020fb944[0], 0);
    }
    p0->f88 = tmp;
    tmp = FUN_020ba894(0x84);
    if (tmp != 0) {
        tmp = FUN_020bc2dc(tmp, DAT_020fb944[1], 0);
    }
    p0->f8c = tmp;
    r4 = DAT_02108c84;
    if (r4 == 0) {
        return;
    }
    if (p0->f98 == 0xffff && p0->f88 != 0) {
        if (p0->f90 == 0) {
            p0->f90 = FUN_020bc3c0(p0->f88, DAT_020fb944[2], 0);
        }
        if (p0->f90 != 0) {
            p0->f98 = FUN_02037adc(r4, FUN_020bc508(p0->f88, 0), 0);
        }
    }
    if (p0->f9a == 0xffff && p0->f8c != 0) {
        if (p0->f94 == 0) {
            p0->f94 = FUN_020bc3c0(p0->f8c, DAT_020fb94c[p1], 0);
        }
        if (p0->f94 != 0) {
            p0->f9a = FUN_02037c88(r4, FUN_020bc508(p0->f8c, 0), 0, 0);
        }
    }
    if (p0->f9c == 0) {
        p0->f9c = FUN_02033d60(r4, p0->f98, 0, p0->f9a);
    }
    FUN_02033e0c(r4, p0->f9c, p0->f9a, 0xffff);
    if (p0->fb0 == 9) {
        p0->fb0 = *(int *)((char *)r4 + 0x64);
    }
    *(int *)((char *)r4 + 0x64) = 6;
}
}
