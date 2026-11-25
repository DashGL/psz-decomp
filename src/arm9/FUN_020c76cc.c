// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
extern int FUN_02027d48(void);
extern void FUN_02028730(int, void *);
extern int D_020fccf4;
extern struct {
    char pad[0x18];
    void *f18;
    void *f1c;
    unsigned short f20;
    unsigned short f22;
    void *f24;
    int f28;
    char pad2[0x10];
    void *f3c;
    int f40;
} D_0211cef4;
extern int D_0211cf30;
extern int D_0211cf1c;
extern int D_0211cf0c;

void *FUN_020c76cc(void) {
    D_0211cef4.f18 = &D_020fccf4;
    D_0211cef4.f1c = (void *)0x0211cef4;
    D_0211cef4.f20 = 2;
    D_0211cef4.f22 = 0;
    D_0211cef4.f24 = &D_0211cf30;
    D_0211cef4.f28 = 0;
    FUN_02028730(FUN_02027d48(), &D_0211cf1c);
    if (D_0211cef4.f28 == 0) {
        return 0;
    }
    D_0211cef4.f3c = &D_0211cf1c;
    D_0211cef4.f22 = 4;
    D_0211cef4.f40 = 0;
    return &D_0211cf0c;
}
