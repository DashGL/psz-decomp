// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x11c, exact bytes and relocation targets.
// FUN_0206fa64: full 0x11c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Vec3_0206fa64 {
    int x, y, z;
};
struct Obj_0206fa64 {
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
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual void v8c();
    virtual void v90();
    virtual void v94();
    virtual void v98();
    virtual void v9c();
    virtual void va0();
    virtual void va4();
    virtual void va8();
    virtual void vac();
    virtual void vb0();
    virtual void vb4();
    virtual void vb8();
    virtual void vbc();
    virtual void vc0();
    virtual void vc4();
    virtual void vc8();
    virtual void vcc();
    virtual void vd0();
    virtual int vd4(int, int, int);
};

extern "C" {
extern int FUN_020390f4(void *);
extern void FUN_02039108(void *, int, int, int);
extern void FUN_020391a0(void *, int);
extern int FUN_0203bf3c(void *);
extern void FUN_02050018(int, void *, void *, int);
extern void FUN_0206f558(void *);
extern void FUN_02034680(void *, void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern void FUN_0204a88c(int, int, int, int, int);
extern int FUN_020a4354(void);
extern int *FUN_02072af0(void);
extern void FUN_02072c20(void *, int, int);
extern void FUN_02070760(void *);

void FUN_0206fa64(Obj_0206fa64 *this_ptr, int arg1) {
    if (FUN_020390f4(this_ptr) == 0) {
        FUN_02039108(this_ptr, 0xb, *(int *)((char *)this_ptr + 0xd8), 0);
        FUN_020391a0(this_ptr, 0);
        *(int *)((char *)this_ptr + 0xd0) = 0xb;
        if (FUN_0203bf3c(this_ptr) != 0) {
            FUN_02050018(1, (void *)FUN_02070760, this_ptr, 0);
            struct Vec3_0206fa64 pos = *(struct Vec3_0206fa64 *)((char *)this_ptr + 0xb4);
            int s[8];
            pos.y = 0x1000;
            FUN_0206f558(s);
            s[0] = 1;
            s[5] = 0xa;
            s[4] = arg1;
            FUN_02034680(&s[1], &pos);
            FUN_020719d8(FUN_020718e0(), s);
            FUN_0204a88c(1, 0x11, -1, 0, 0);
        }
        *(short *)((char *)this_ptr + 0x14e) = (short)arg1;
        this_ptr->vd4(0x6e, 0, 0);
        *(unsigned int *)((char *)this_ptr + 0xf8) &= ~0x20u;
        *(unsigned int *)((char *)this_ptr + 0xf8) &= ~0x40u;
        *(unsigned int *)((char *)this_ptr + 0xf8) &= ~1u;
        *(unsigned int *)((char *)this_ptr + 0xf8) &= ~4u;
        *(int *)((char *)this_ptr + 0x240) = 0;
        if (FUN_020a4354() == 0) {
            this_ptr->v5c();
        }
        if (FUN_02072af0()[2] == 7) {
            FUN_02072c20(FUN_02072af0(), 0, 1);
        }
    }
}
}
