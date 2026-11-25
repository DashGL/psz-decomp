// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Copy4_b73fc {
    char c[4];
};
struct Obj_b73fc {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual int v14(Copy4_b73fc *, unsigned int);
};
extern "C" {
void *FUN_020845fc(Copy4_b73fc *);
int FUN_020b68bc(void *, int);
int FUN_020b73fc(Obj_b73fc *a, int b) {
    Copy4_b73fc sp8[4];
    Copy4_b73fc sp4;
    void *sp0;
    unsigned int r4;
    int r5;
    for (r4 = 0; r4 < 4; r4++) {
        if (a->v14(sp8, r4) != 0) {
            sp4 = sp8[0];
            sp0 = FUN_020845fc(&sp4);
            if (sp0 != 0) {
                for (r5 = 0; r5 < 3; r5++) {
                    { int cur = FUN_020b68bc(sp0, r5); if (cur == b) { return 1; } }
                }
            }
        }
    }
    return 0;
}
}
