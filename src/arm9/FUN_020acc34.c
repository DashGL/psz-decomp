// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// Concrete player receiver and callback ABI: notes/sessions/matching-continue-2026-11-12-player-abi.md
//cpp
// flags: -O4,s
struct VObj_020acc34 {
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
    virtual void m48(); virtual int m49();
    char pad[0xbc];
    unsigned short fc0;
    unsigned short fc2;
    char pad2[0x74];
    unsigned short f138;
    unsigned short f13a;
    unsigned short f13c;
    unsigned short f13e;
    char pad3[0xbc];
    unsigned char f1fc;
};
extern "C" {
unsigned short FUN_0203d388(VObj_020acc34 *, int);
void FUN_020acc34(VObj_020acc34 *a, int b) {
    if (a->m49() == 0) {
        a->f13e = a->fc0;
        a->fc2 = FUN_0203d388(a, b);
        a->f13c = a->fc2;
        return;
    }
    if (a->f1fc == 2) {
        a->f13c = FUN_0203d388(a, b);
    }
}
}
