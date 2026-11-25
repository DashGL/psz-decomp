// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x128, exact bytes and relocation targets.
// FUN_0206f93c: full 0x128 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Vec3_0206f93c {
    int x, y, z;
};
struct Obj_0206f93c {
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
};
extern "C" {
extern void FUN_0203bfb4(void *);
extern void FUN_02080ae0(int, int);
extern void FUN_0203c004(void *);
extern void FUN_02034680(void *, void *);
extern void FUN_0203807c(int, int, int, int);
extern void FUN_02039140(void *, int, int, int);
extern void FUN_02039108(void *, int, int, int);
extern void FUN_020391cc(void *, int);
extern int FUN_02085880(int);
extern void FUN_0206f558(void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern int FUN_020390f4(void *);

void FUN_0206f93c(Obj_0206f93c *this_ptr, int arg1, int arg2) {
    FUN_0203bfb4(this_ptr);
    FUN_02080ae0(*(int *)((char *)this_ptr + 0xfc), 1);
    FUN_0203c004(this_ptr);
    this_ptr->vcc();
    if (*(int *)((char *)this_ptr + 0x240) == 0xf || *(int *)((char *)this_ptr + 0x240) == 0xc) {
        FUN_02034680((char *)this_ptr + 0x9c, (char *)this_ptr + 0xb4);
        if (*(int *)((char *)this_ptr + 0x8c) != 0) {
            FUN_0203807c(*(int *)((char *)this_ptr + 0x8c), *(int *)((char *)this_ptr + 0x9c), *(int *)((char *)this_ptr + 0xa0), *(int *)((char *)this_ptr + 0xa4));
        }
    }
    if (arg2 != 0) {
        FUN_02039140(this_ptr, 0xa, *(int *)((char *)this_ptr + 0xd8), 0);
    } else {
        FUN_02039108(this_ptr, 9, *(int *)((char *)this_ptr + 0xd8), 0);
        FUN_020391cc(this_ptr, 0xa);
    }
    if (FUN_02085880(*(int *)((char *)this_ptr + 0xfc)) != 0 && arg1 != 0 && arg2 == 0) {
        Vec3_0206f93c pos = *(Vec3_0206f93c *)((char *)this_ptr + 0xb4);
        int s[8];
        pos.y = 0x1000;
        FUN_0206f558(s);
        s[0] = 0;
        s[5] = 0xa;
        s[4] = -arg1;
        FUN_02034680(&s[1], &pos);
        FUN_020719d8(FUN_020718e0(), s);
    }
    *(short *)((char *)this_ptr + 0x14e) = 0;
    *(short *)((char *)this_ptr + 0x154) = 0;
    *((char *)this_ptr + 0x14b) = 0;
    *(unsigned int *)((char *)this_ptr + 0xf8) |= 1u;
    *(unsigned int *)((char *)this_ptr + 0xf8) |= 4u;
    if (FUN_020390f4(this_ptr) == 0) {
        *(int *)((char *)this_ptr + 0x240) = 0xe;
    }
}
}
