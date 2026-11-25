// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
// FUN_0206ef9c: full 0x52 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Sub_0206ef9c {
    int pad[5];
    int f14;
};
struct VObj_0206ef9c {
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
    virtual void m48(int, int);
    char pad[0xbc];
    short fc0;
    char pad2[0xec];
    Sub_0206ef9c *f1b0;
    char pad3[0x8c];
    int f240;
};
extern "C" {
int FUN_0204c5ec(int);
int FUN_020390f4(VObj_0206ef9c *);
void FUN_020391cc(VObj_0206ef9c *, int);
void FUN_0206ef9c(VObj_0206ef9c *a, int b, int c) {
    if (a->f1b0 != 0 && a->f1b0->f14 != 0 && FUN_0204c5ec(a->f1b0->f14) == 0) {
        a->fc0 = b;
        if (a->f240 != 9 && FUN_020390f4(a) == 0) {
            FUN_020391cc(a, 0);
            a->m48(b, c);
        }
    }
}
}
