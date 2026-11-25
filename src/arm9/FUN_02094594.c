// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_02094594: full 0x4c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct VObj_02094594 {
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
    virtual int ve0(); virtual void ve4();
};
extern "C" int FUN_0203bee0(void *);
extern "C" void FUN_0206f0dc(VObj_02094594 *, unsigned short, int);
extern "C" void FUN_0208d4f0(void *, int, char *, unsigned short);
extern "C" int D_0211a5c4;

extern "C" void FUN_02094594(VObj_02094594 *a) {
    if (a != 0) {
        int r = FUN_0203bee0(a);
        FUN_0206f0dc(a, *(unsigned short *)((char *)a + 0xc2), r);
        a->ve4();
        if (a->ve0() != 0) {
            FUN_0208d4f0(&D_0211a5c4, *(int *)((char *)a + 0xfc), (char *)a + 0x9c, *(unsigned short *)((char *)a + 0xc0));
        }
    }
}
