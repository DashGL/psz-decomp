// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
// FUN_020836bc: full 0x12c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Obj836bc_020836bc {
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
    virtual void v48(int, int);
};
struct Entry836bc_020836bc {
    void (Obj836bc_020836bc::*enter)();
    void (Obj836bc_020836bc::*update)();
    void (Obj836bc_020836bc::*exit)();
};
extern "C" {
extern void *FUN_020837e8(Obj836bc_020836bc *);
extern int FUN_02198340(void *);
extern int FUN_02198354(void *);
extern int DAT_020f2f2c[];
extern Entry836bc_020836bc DAT_020fa7ac[];

void FUN_020836bc(Obj836bc_020836bc *this_ptr) {
    void *p = FUN_020837e8(this_ptr);
    if (p != 0) {
        int idx = FUN_02198340(p);
        if (idx >= 0 && idx < 4) {
            *(int *)((char *)this_ptr + 0xac) = DAT_020f2f2c[idx];
        }
        if (FUN_02198354(p) != 0) {
            this_ptr->v48(0x3800, 0x16);
        }
    } else {
        *(int *)((char *)this_ptr + 0xac) = 3;
    }
    if (*(int *)((char *)this_ptr + 0xac) != -1) {
        if (*(int *)((char *)this_ptr + 0xa8) != *(int *)((char *)this_ptr + 0xac)) {
            if (*(int *)((char *)this_ptr + 0xa8) != -1) {
                void (Obj836bc_020836bc::*fn)() = DAT_020fa7ac[*(int *)((char *)this_ptr + 0xa8)].exit;
                if (fn != 0) {
                    (this_ptr->*fn)();
                }
            }
            *(int *)((char *)this_ptr + 0xa8) = *(int *)((char *)this_ptr + 0xac);
            {
                void (Obj836bc_020836bc::*fn)() = DAT_020fa7ac[*(int *)((char *)this_ptr + 0xa8)].enter;
                if (fn != 0) {
                    (this_ptr->*fn)();
                }
            }
        }
        *(int *)((char *)this_ptr + 0xac) = -1;
    }
    if (*(int *)((char *)this_ptr + 0xa8) != -1) {
        void (Obj836bc_020836bc::*fn)() = DAT_020fa7ac[*(int *)((char *)this_ptr + 0xa8)].update;
        if (fn != 0) {
            (this_ptr->*fn)();
        }
    }
}
}
