//cpp
// flags: -O4,s
// near: nd=123 bad=0 len=0x16a/tsz=0x16c — logic understood, register coloring / scheduling residual
extern "C" {
struct Sub_b90f4 {
    char pad[0x64];
    unsigned char f64[4];
    unsigned char f68;
    unsigned char f69;
    unsigned char f6a;
    unsigned char f6b;
};

struct Sp_b90f4 {
    int f0;
    int f4;
    int f8;
    int fc;
};

struct Obj_b90f4 {
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
    virtual void vd0(); virtual void vd4(); virtual void vd8(); virtual void vdc();
    virtual void ve0(); virtual void ve4(); virtual void ve8(); virtual void vec();
    virtual void vf0(); virtual void vf4(); virtual void vf8(); virtual void vfc();
    virtual void v100(); virtual void v104();
    virtual int v108(struct Sp_b90f4 *);
    virtual int v10c(struct Sp_b90f4 *);
    virtual void v110();
    virtual int v114(struct Sp_b90f4 *);
    char pad[0x7a - 4];
    unsigned char f7a;
};

struct Out_b90f4 {
    int f0;
    int f4;
    char pad0[0x1c - 8];
    int f1c;
    char pad1[0x3c - 0x20];
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    char pad2[0x80 - 0x60];
    int f80;
    int f84;
    int f88;
    char pad3[0x98 - 0x8c];
    int f98;
    int f9c;
    int fa0;
    int fa4;
};

extern struct Sub_b90f4 *FUN_0209554c(void *);
extern int FUN_0203b820(void *);
extern void FUN_0203955c(void *);
extern int FUN_0208a094(void *);
extern int FUN_0203b874(void *);
extern int FUN_0203a1fc(void *);

void FUN_020b90f4(struct Obj_b90f4 *p0, struct Out_b90f4 *p1, int p2) {
    struct Sp_b90f4 sp28;
    struct Sp_b90f4 sp18;
    struct Sp_b90f4 sp8;
    struct Sub_b90f4 *r6;
    int r7;
    int r4;

    r6 = FUN_0209554c(p0);
    if (r6 == 0) return;
    {
        r7 = 0;
        r4 = FUN_0203b820(p0);
        if (!p0->v114(&sp28)) {
            FUN_0203955c(&sp28);
        }
        if (!p0->v108(&sp18)) {
            FUN_0203955c(&sp18);
        }
        if (!p0->v10c(&sp8)) {
            FUN_0203955c(&sp8);
        }
        p1->f0 = 0;
        p1->f4 = 3;
        p1->f9c = p0->f7a + FUN_0208a094(&sp18);
        p1->fa0 = FUN_0203b874(p0);
        p1->fa4 = r4;
        if (!FUN_0203a1fc(&sp18)) {
            r7 = ((sp18.f4 & (int)0xfe000000) >> 25) & 0x7f;
        }
        switch (p2) {
        case 0x23:
            p1->f80 = 0;
            if (r4 > 0 && r4 <= 4) {
                p1->f84 = r6->f64[r4 - 1];
                p1->f84 = (p1->f84 * r7) / 100;
            } else {
                p1->f84 = 0;
            }
            p1->f88 = 0;
            p1->f1c = 3;
            p1->f98 = 1;
            break;
        case 0x24:
            p1->f3c = 2;
            p1->f40 = 5;
            { int a = r6->f68, b = r6->f69; p1->f48 = a * r4 + b * r7; }
            p1->f44 = 100;
            p1->f4c = 1;
            p1->f1c = 2;
            p1->f98 = 2;
            break;
        case 0x25:
            p1->f50 = -r4;
            p1->f54 = 100;
            p1->f5c = 1;
            { int a = r6->f6a, b = r6->f6b; p1->f58 = a * r4 + b * r7; }
            p1->f98 = 3;
            break;
        }
    }
}
}
