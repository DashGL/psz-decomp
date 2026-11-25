// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Pkt_bdd60_020bdd60 {
    int f0;
    char f4;
    char f5[3];
};
struct Obj_bdd60_020bdd60 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    char pad[0xf15];
    signed char ff19;
};
extern "C" {
void FUN_020e143c(unsigned char);
void FUN_020bdd0c(Obj_bdd60_020bdd60 *, int);
void FUN_02036094(Pkt_bdd60_020bdd60 *);
void FUN_0200c938(void *, int);
void FUN_020360a4(Pkt_bdd60_020bdd60 *, int, int, int);
void FUN_020bce3c(Pkt_bdd60_020bdd60 *);
void FUN_020bdd60(Obj_bdd60_020bdd60 *a, int b) {
    if (b >= 0 && b < 4) {
        if (b == a->ff19) {
            a->v8();
        } else {
            Pkt_bdd60_020bdd60 sp0;
            FUN_020e143c((unsigned char)b);
            FUN_020bdd0c(a, b);
            FUN_02036094(&sp0);
            sp0.f4 = 0;
            FUN_0200c938(sp0.f5, 3);
            FUN_020360a4(&sp0, 0, 2, 8);
            sp0.f4 = b;
            FUN_020bce3c(&sp0);
        }
    }
}
}
