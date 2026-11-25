// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Obj_bc6d4_020bc6d4 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual int v10(int);
};
struct Arg_bc6d4_020bc6d4 {
    int f0;
    int f4;
};
extern "C" {
extern void *DAT_0211b3a4;
extern int DAT_0211b3a8;
extern int DAT_0211b3a0;
extern int DAT_0211b3ac;
void FUN_020bc74c(void);
void FUN_0200c594(void *, void *, void *);
Obj_bc6d4_020bc6d4 *FUN_020bcaf0(void *, Arg_bc6d4_020bc6d4 *);
Obj_bc6d4_020bc6d4 *FUN_020bc6d4(Arg_bc6d4_020bc6d4 *a) {
    if (DAT_0211b3a4 == 0) {
        if ((DAT_0211b3a8 & 1) == 0) {
            FUN_0200c594(&DAT_0211b3a0, (void *)FUN_020bc74c, &DAT_0211b3ac);
            DAT_0211b3a8 |= 1;
        }
        DAT_0211b3a4 = &DAT_0211b3a0;
    }
    Obj_bc6d4_020bc6d4 *r4 = FUN_020bcaf0(DAT_0211b3a4, a);
    if (r4 == 0) {
        return 0;
    }
    if (r4->v10(a->f4) == 0) {
        if (r4 != 0) {
            r4->v4();
        }
        return 0;
    }
    return r4;
}
}
