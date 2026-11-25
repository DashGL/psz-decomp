// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x100, exact bytes and relocation targets.
// Concrete player receiver and callback ABI: notes/sessions/matching-continue-2026-11-12-player-abi.md
//cpp
// flags: -O4,s
struct Obj_020ad974 {
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
};

extern "C" {
extern unsigned char *FUN_020ac3b4(Obj_020ad974 *, int);
extern void *FUN_02077930(void);
extern int FUN_02077d50(void *);
extern void FUN_02077cb0(void *, int);
extern void *FUN_0204f3b8(void);
extern int FUN_0204f464(void *);
extern int FUN_020b491c(void);
extern int FUN_020ac93c(Obj_020ad974 *, int, int);
extern void FUN_0204f4d4(void *);
extern void FUN_02033400(void *, int);
extern int FUN_0208f2f8(Obj_020ad974 *);
extern void *DAT_02108c68;

int FUN_020ad974(Obj_020ad974 *this_ptr, int arg1) {
    unsigned char *sub = FUN_020ac3b4(this_ptr, 3);
    int v = FUN_02077d50(FUN_02077930());
    FUN_02077cb0(FUN_02077930(), 0);
    if (*((signed char *)this_ptr + 0xd8f) == 0 && *(unsigned int *)((char *)this_ptr + 0x264) > 0xf &&
        ((sub != 0 && sub[0x110] != 0) || FUN_0204f464(FUN_0204f3b8()) != 0 || FUN_020b491c() != 0)) {
        if (v == 1 || (arg1 == 0 && *((signed char *)this_ptr + 0xd8f) != 0)) {
            if (FUN_020ac93c(this_ptr, 0, 0) != 0) {
                return 1;
            }
        } else if (v == 0) {
            if (FUN_0204f464(FUN_0204f3b8()) != 0) {
                FUN_0204f4d4(FUN_0204f3b8());
                *(int *)((char *)this_ptr + 0x250) |= 2;
                *(int *)((char *)this_ptr + 0x264) = 0;
                return 1;
            }
            if (FUN_020b491c() != 0) {
                FUN_02033400(DAT_02108c68, 8);
                return 1;
            }
            if (FUN_0208f2f8(this_ptr) != 0) {
                this_ptr->vc8();
                *(int *)((char *)this_ptr + 0x264) = 0;
                return 1;
            }
        }
    } else if (arg1 == 0) {
        if (FUN_020ac93c(this_ptr, 0, 0) != 0) {
            return 1;
        }
    }
    return 0;
}
}
