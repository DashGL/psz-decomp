// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_020995c8: full 0x58 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
extern "C" void FUN_02099498(void *, int);
struct V_995c8_020995c8 {
    virtual ~V_995c8_020995c8();
};
struct S_995c8_020995c8 {
    V_995c8_020995c8 *f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24[6];
    int f3c;
    int f40;
    int f44;
};
extern "C" S_995c8_020995c8 *FUN_020995c8(S_995c8_020995c8 *a) {
    FUN_02099498(a, a->f4);
    FUN_02099498(a, a->fc);
    FUN_02099498(a, a->f14);
    FUN_02099498(a, a->f1c);
    FUN_02099498(a, a->f20);
    FUN_02099498(a, a->f3c);
    FUN_02099498(a, a->f40);
    FUN_02099498(a, a->f44);
    if (a->f0 != 0) {
        delete a->f0;
        a->f0 = 0;
    }
    return a;
}
