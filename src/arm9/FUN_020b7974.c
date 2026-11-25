// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
//cpp
// flags: -O4,s

struct Vec3_B7974_020b7974 {
    int x, y, z;
};

struct SelfB7974_020b7974 {
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
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    unsigned char pad4[0x14];
    unsigned char f18[0xc];
    unsigned char f24[0xc];
    unsigned char f30[0xc];
    unsigned char pad3c[0x90 - 0x3c];
    void *f90;
};

extern const struct Vec3_B7974_020b7974 DAT_020f59bc;
extern const struct Vec3_B7974_020b7974 DAT_020f59c8;
extern "C" {
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_02034680(void *, void *);

void FUN_020b7974(struct SelfB7974_020b7974 *self) {
    if (self->f90 == 0) {
        self->v74();
    } else {
        unsigned char sp78[0x30];
        unsigned char sp54[0x24];
        if (FUN_0204260c(self->f90, 0, sp78, sp54) != 0) {
            struct Vec3_B7974_020b7974 sp48 = {0};
            struct Vec3_B7974_020b7974 sp3c;
            FUN_0205b960(&sp48, sp78, &sp48);
            FUN_020345f0(&sp3c, &sp48);
            struct Vec3_B7974_020b7974 sp30 = DAT_020f59bc;
            struct Vec3_B7974_020b7974 sp24;
            FUN_0205b0f0(&sp30, sp54, &sp30);
            FUN_020345f0(&sp24, &sp30);
            struct Vec3_B7974_020b7974 sp18 = DAT_020f59c8;
            struct Vec3_B7974_020b7974 sp0c;
            struct Vec3_B7974_020b7974 sp00;
            FUN_0205b0f0(&sp18, sp54, &sp18);
            FUN_020345f0(&sp0c, &sp18);
            FUN_02034680(self->f18, &sp3c);
            sp00.x = sp3c.x + sp24.x;
            sp00.y = sp3c.y + sp24.y;
            sp00.z = sp3c.z + sp24.z;
            FUN_02034680(self->f24, &sp00);
            FUN_02034680(self->f30, &sp0c);
        }
    }
}
}
