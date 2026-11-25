// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
// Concrete player receiver and callback ABI: notes/sessions/matching-continue-2026-11-12-player-abi.md
//cpp
// flags: -O4,p
struct VObj_020ac8b8 {
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
};
extern "C" int FUN_0203ae60(VObj_020ac8b8 *);
extern "C" char *FUN_02086e3c(void);
extern "C" int FUN_020b00ac(void *, int);
extern "C" void FUN_02039534(void *, int);
extern "C" void FUN_020b06d0(void *, int, unsigned int);

extern "C" void FUN_020ac8b8(VObj_020ac8b8 *a, int b, unsigned int c) {
    if (FUN_0203ae60(a) == 0 && c < 0x50) {
        int r = FUN_020b00ac(FUN_02086e3c() + 0x10, b);
        FUN_02039534((char *)a + 0x2b8 + c * 16, r);
        FUN_020b06d0(FUN_02086e3c(), b, c);
        a->v104();
    }
}
