// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7e, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Obj_020ba678 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int pad[5];
    int f18;
    int f1c;
    int f20;
    int pad2[3];
    int f30;
    int pad3[14];
    int f6c;
    int f70;
    void (*f74)(int);
    int f78;
    int f7c;
    int f80;
    int f84;
};
extern "C" {
extern void FUN_020ba6f8(Obj_020ba678 *);
extern void FUN_020c5158(void *);
extern void FUN_020c5168(void *, int, int, int, int);
extern void FUN_0206740c(int, int);
extern void FUN_020ba768(Obj_020ba678 *);

void FUN_020ba678(Obj_020ba678 *a) {
    int sp4[5];
    switch (a->f20) {
    case 0:
        if (*(Obj_020ba678 **)(a->f18 + 0x1c) == a) {
            FUN_020ba6f8(a);
        }
        break;
    case 1:
        if (!(a->f30 & 1 ? 1 : 0)) {
            a->f20 = 2;
            if (a->f7c != 0) {
                FUN_020c5158(sp4);
                FUN_020c5168(sp4, a->f6c, a->f7c, a->f80, a->f84);
                FUN_0206740c(a->f6c, a->f80);
            }
            if (a->f74 != 0) {
                a->f74(a->f78);
            }
            a->v2();
            FUN_020ba768(a);
        }
        break;
    }
}
}
