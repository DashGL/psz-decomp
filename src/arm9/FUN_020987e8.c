// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// FUN_020987e8: full 0x42 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct VObj_020987e8 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual int v9c();
    char pad[0xbe];
    short fc2;
};
struct Obj_020987e8 {
    int f0;
    int f4;
};
extern "C" VObj_020987e8 *FUN_0208555c(int);
extern "C" int FUN_0203ae60(void *);
extern "C" int FUN_020390f4(VObj_020987e8 *);
extern "C" void FUN_02094594(VObj_020987e8 *);

extern "C" void FUN_020987e8(Obj_020987e8 *a, short b) {
    VObj_020987e8 *p = FUN_0208555c(a->f0);
    if (p != 0 && FUN_0203ae60(p) == 0 && p->v9c() != 0 && FUN_020390f4(p) == 0) {
        p->fc2 = b;
        FUN_02094594(p);
        a->f4 = 1;
    }
}
