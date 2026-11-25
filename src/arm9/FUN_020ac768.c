// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// Concrete player receiver and callback ABI: notes/sessions/matching-continue-2026-11-12-player-abi.md
//cpp
// flags: -O4,s
struct VObj_020ac768 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65();
    char pad[0xf8];
    void *ffc;
    char pad2[0x1a8];
    int f2a8;
};
extern "C" {
int FUN_0203ae60(VObj_020ac768 *);
char *FUN_02086e3c(void);
int FUN_020b00ac(char *, int);
void FUN_02039534(int *, int);
void FUN_020b05bc(char *, int);
void FUN_0204f0c4(void *, int *, int);
void FUN_020ac768(VObj_020ac768 *a, int b) {
    if (FUN_0203ae60(a) == 0) {
        FUN_02039534(&a->f2a8, FUN_020b00ac(FUN_02086e3c() + 0x10, b));
        FUN_020b05bc(FUN_02086e3c(), b);
        a->m65();
        FUN_0204f0c4(a->ffc, &a->f2a8, 1);
    }
}
}
