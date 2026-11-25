// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x11c, exact bytes and relocation targets.
// FUN_020994ac: full 0x11c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Archive994ac_020994ac {
    virtual ~Archive994ac_020994ac();
};
struct Global994ac_020994ac {
    int f0, f4, f8, fc, f10;
};
extern "C" {
extern Global994ac_020994ac DAT_020f4640;
extern void FUN_0200c938(void *, unsigned int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020c133c(void *, int);
extern Archive994ac_020994ac *FUN_020c3ca0(void *, int);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern char *FUN_020870c4(void *);
extern void FUN_02099620(void *, void *, int);
extern int FUN_020c3d34(void *, int);
extern void *FUN_020c13c8(void *, int, int);
extern void FUN_020c3d58(void *, int, void *);
extern int FUN_020ba440(void *);
extern void FUN_020997b8(void *, int);
extern void FUN_02099920(void *);

void *FUN_020994ac(int *this_ptr) {
    this_ptr[0] = 0;
    this_ptr[1] = 0;
    this_ptr[2] = 0;
    this_ptr[3] = 0;
    this_ptr[4] = 0;
    this_ptr[5] = 0;
    this_ptr[6] = 0;
    this_ptr[7] = 0;
    this_ptr[8] = 0;
    this_ptr[9] = 1;
    FUN_0200c938(&this_ptr[10], 0x14);
    this_ptr[15] = 0;
    this_ptr[16] = 0;
    this_ptr[17] = 0;
    void *p0 = FUN_020ba894(0x20);
    if (p0 != 0) {
        p0 = FUN_020c133c(p0, 0x2800);
    }
    this_ptr[0] = (int)p0;
    Archive994ac_020994ac *arc = (Archive994ac_020994ac *)FUN_020ba894(0x58);
    if (arc != 0) {
        arc = FUN_020c3ca0(arc, DAT_020f4640.f10);
    }
    if (FUN_02087138(FUN_02086e3c()) != 0) {
        this_ptr[9] = *(unsigned char *)(FUN_020870c4(FUN_02086e3c()) + 0x56);
    }
    FUN_02099620(this_ptr, arc, this_ptr[9]);
    int sz = FUN_020c3d34(arc, 0);
    if (sz > 0) {
        this_ptr[1] = (int)FUN_020c13c8((void *)this_ptr[0], sz, 0x10);
        FUN_020c3d58(arc, 0, (void *)this_ptr[1]);
        this_ptr[2] = FUN_020ba440((void *)this_ptr[1]);
    }
    sz = FUN_020c3d34(arc, 3);
    if (sz > 0) {
        this_ptr[3] = (int)FUN_020c13c8((void *)this_ptr[0], sz, 0x10);
        FUN_020c3d58(arc, 3, (void *)this_ptr[3]);
        this_ptr[4] = FUN_020ba440((void *)this_ptr[3]);
    }
    sz = FUN_020c3d34(arc, 4);
    if (sz > 0) {
        this_ptr[5] = (int)FUN_020c13c8((void *)this_ptr[0], sz, 0x10);
        FUN_020c3d58(arc, 4, (void *)this_ptr[5]);
        this_ptr[6] = FUN_020ba440((void *)this_ptr[5]);
    }
    if (arc != 0) {
        delete arc;
    }
    FUN_020997b8(this_ptr, this_ptr[9]);
    FUN_02099920(this_ptr);
    return this_ptr;
}
}
