// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
// FUN_020795c8: full 0x12c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
#pragma opt_propagation off
struct Obj795c8_020795c8 {
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
};
extern "C" {
extern int FUN_020bbfa8(int);
extern int FUN_020bbf6c(int);
extern void FUN_0207970c(void *, int, int);
extern void FUN_020796f4(void *, void *);
extern void FUN_0207975c(void *, void *, void *, void *, int);
extern int DAT_0211a444;

void FUN_020795c8(Obj795c8_020795c8 *this_ptr) {
    if (*(int *)((char *)this_ptr + 0xc0) != 0) {
        if (FUN_020bbfa8(0x200) != 0) {
            *(unsigned short *)((char *)this_ptr + 0x82) -= 0x200;
        } else if (FUN_020bbfa8(0x100) != 0) {
            *(unsigned short *)((char *)this_ptr + 0x82) += 0x200;
        }
    }
    switch (*(int *)((char *)this_ptr + 0x8c)) {
    case 0:
        if (*(int *)((char *)this_ptr + 0xc0) != 0 && FUN_020bbf6c(0x400) != 0) {
            if (*(int *)((char *)this_ptr + 0x88) == 0) {
                *(int *)((char *)this_ptr + 0x8c) = 1;
                FUN_0207970c(this_ptr, 2, 0);
                FUN_020796f4((char *)this_ptr + 0xb0, (char *)this_ptr + 0x90);
                DAT_0211a444 = 0;
            } else if (*(int *)((char *)this_ptr + 0x88) == 1) {
                *(int *)((char *)this_ptr + 0x8c) = 2;
                FUN_0207970c(this_ptr, 2, 0);
                FUN_020796f4((char *)this_ptr + 0xb0, (char *)this_ptr + 0xa0);
                DAT_0211a444 = 0;
            }
        }
        break;
    case 1:
    case 2: {
        int a; switch (*(int *)((char *)this_ptr + 0x8c)) { case 1: a = 0; break; default: a = 1; break; }
        int b = *(int *)((char *)this_ptr + 0x8c) == 1;
        DAT_0211a444 += 2;
        FUN_0207975c(this_ptr, (char *)this_ptr + 0xb0, (char *)this_ptr + 0x90 + (a << 4), (char *)this_ptr + 0x90 + (b << 4), DAT_0211a444);
        if (DAT_0211a444 >= 0x10) {
            *(int *)((char *)this_ptr + 0x8c) = 0;
            FUN_0207970c(this_ptr, b, 0);
        }
        break;
    }
    }
    this_ptr->v78();
}
}
