// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
//cpp
extern "C" {
extern int FUN_0205e260(void);
extern void FUN_0206557c(int, int, int);
extern int FUN_0205e464(void);
}

struct Obj_020a49a4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int f1();
    virtual int f2();
};

extern "C" void FUN_020a49a4(Obj_020a49a4 *p) {
    int r1 = p->f1();
    FUN_0206557c(0, FUN_0205e260(), r1);
    int r2 = p->f2();
    FUN_0206557c(0, FUN_0205e464(), r2);
}
