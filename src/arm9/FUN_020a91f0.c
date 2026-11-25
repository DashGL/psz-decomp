// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct VObj_020a91f0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual int m39();
};
extern "C" {
extern void *D_02108c64;
extern VObj_020a91f0 *D_02108d04;
void FUN_02032dfc(void *, void *);
int FUN_0206d36c(void *, int);
int FUN_0203ae60(VObj_020a91f0 *);
int FUN_020a9248(void *);
int FUN_020a91f0(void *a) {
    int buf[5];
    int r4 = 0;
    FUN_02032dfc(buf, D_02108c64);
    if (FUN_0206d36c(buf, r4) == 0) {
        VObj_020a91f0 *r5 = D_02108d04;
        if (r5 != 0) {
            if (r5->m39() != 0 || FUN_0203ae60(r5) != 0) {
                if (FUN_020a9248(a) >= 10) {
                    r4 = 1;
                }
            }
        }
    }
    return r4;
}
}
