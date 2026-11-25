// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
//cpp
extern "C" {
extern int FUN_0205e260(void);
extern void FUN_0206557c(int, int, int);
extern int FUN_0205e464(void);
}

struct Sub_020a4fc8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int f1();
    virtual int f2();
};

struct Obj_020a4fc8 {
    char pad[0x20];
    Sub_020a4fc8 sub;
};

extern "C" void FUN_020a4fc8(Obj_020a4fc8 *p) {
    int r1 = p->sub.f1();
    FUN_0206557c(0, FUN_0205e260(), r1);
    int r2 = p->sub.f2();
    FUN_0206557c(0, FUN_0205e464(), r2);
}
