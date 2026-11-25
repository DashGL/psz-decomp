//cpp
// flags: -O4,s
struct Actor020a3218 {
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
    virtual void m44(); virtual void m45(); virtual void m46();
};
struct Owner020a3218 {
    char pad[0x13c];
    int f13c[4];
};
extern "C" {
extern void *DAT_02108cf4;
extern char DAT_0211a51c[];
void *FUN_020352a4(void *, int);
Actor020a3218 *FUN_02039200(void *);
int FUN_02084cc0(void *);
void FUN_02033850(int);
void FUN_020a3218(Owner020a3218 *a) {
    int i;
    for (i = 0; i <= 3; i++) {
        if (i < 4 && a->f13c[i] != 0) {
            Actor020a3218 *r7 = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
            if (r7 != 0) {
                if (i == FUN_02084cc0(DAT_0211a51c)) {
                    FUN_02033850(1);
                }
                r7->m46();
                a->f13c[i] = 0;
            }
        }
    }
}
}
