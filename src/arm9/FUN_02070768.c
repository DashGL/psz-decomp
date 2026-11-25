// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_02070768: full 0x50 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct VObj_02070768 {
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
    virtual void va0(); virtual void va4(unsigned short, int);
};
extern "C" void FUN_02039534(void *, int);
extern "C" void FUN_02050018(int, void (*)(void *), void *, int);
extern "C" void FUN_020707fc(void *);

extern "C" void FUN_02070768(VObj_02070768 *a, int b) {
    int st = *(int *)((char *)a + 0x240);
    if (st == 0x19 || st == 0x17) {
        FUN_02039534((char *)a + 0x190, b);
    } else {
        a->va4(*(unsigned short *)((char *)a + 0xc0), 2);
        FUN_02039534((char *)a + 0x180, b);
        FUN_02050018(1, FUN_020707fc, a, 0);
    }
}
