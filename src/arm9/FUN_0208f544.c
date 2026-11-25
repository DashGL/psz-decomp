//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0203a9d4(void *p);
extern void *PTR_02108c64;
extern void FUN_02032dfc(void *dst, void *src);
extern int FUN_0206d36c(void *a, int b);
extern unsigned char *FUN_02084798(int a, int b);
extern int FUN_0203b694(void *a);
extern int FUN_020b6e0c(void *a, int b);
extern int FUN_0203b638(void *a, int b, int c);
extern int FUN_02077930(void);
extern int FUN_02077d50(int a);
extern unsigned char DAT_0211a578[];
extern void FUN_0208d688(void *a, int b, int c, int d, int e, int f);
}

struct Sub_0208f544 {
    virtual void vf0();
    virtual void vf4();
    virtual int vf8(void *p);
};

struct Obj_0208f544 {
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0c();
    virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1c();
    virtual void vf20(); virtual void vf24(); virtual void vf28(); virtual void vf2c();
    virtual void vf30(); virtual void vf34(); virtual void vf38(); virtual void vf3c();
    virtual int vf40(); virtual void vf44(); virtual void vf48(); virtual void vf4c();
    virtual void vf50(unsigned short a, int b);
    unsigned char pad4[0x1c];
    Sub_0208f544 sub20;
};

static inline int is_type3(Obj_0208f544 *p) {
    return (p->vf40() == 3) ? 1 : 0;
}

static inline int in_range1(int v) {
    return (v >= 1 && v <= 7) ? 1 : 0;
}

static inline int in_range2(int v) {
    return (v >= 8 && v <= 13) ? 1 : 0;
}

extern "C" int FUN_0208f544(Obj_0208f544 *p0, int p1, int p2) {
    unsigned char sp20[0x10];
    unsigned char sp0c[0x14];
    int r5;
    int r7;

    if (p0 == 0 || (FUN_0203a9d4(p0) == 0 && *((unsigned char *)p0 + 0x181) != 0)) {
        goto fail;
    }
    FUN_02032dfc(sp0c, PTR_02108c64);
    if (FUN_0206d36c(sp0c, 0) != 0) {
        goto fail;
    }
    {
        int kind = *((unsigned char *)p0 + 0x181);
        r5 = FUN_02084798(kind, FUN_0203a9d4(p0))[2];
    }
    if (*(unsigned short *)((char *)p0 + 0x150) < r5 && !is_type3(p0) && FUN_0203b694(p0) != 0) {
        goto fail;
    }
    r7 = 0;
    if (p0->sub20.vf8(sp20) != 0 && sp20[0] == 0) {
        if (in_range1(sp20[1])) {
            r7 = FUN_020b6e0c(&p0->sub20, 0x29);
        } else if (in_range2(sp20[1])) {
            r7 = FUN_020b6e0c(&p0->sub20, 0x29);
        }
    }
    r5 = FUN_0203b638(p0, r5, r7);
    if (is_type3(p0)) {
        r5 = 1;
    }
    if (r5 == 1) {
        *(int *)((char *)p0 + 0x23c) = FUN_02077d50(FUN_02077930());
        p0->vf50(*(unsigned short *)((char *)p0 + 0x13e), p1);
        FUN_0208d688(DAT_0211a578, *(int *)((char *)p0 + 0xfc), *(unsigned short *)((char *)p0 + 0x13e), 7, p1, p2);
        *(unsigned short *)((char *)p0 + 0x138) = 0;
    }
    return r5;
fail:
    return 0;
}
