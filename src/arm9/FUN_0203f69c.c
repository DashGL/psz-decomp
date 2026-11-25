//cpp
// flags: -O4,s
struct VirtObj {
    virtual ~VirtObj();
};
struct Rec3f564 {
    void *p0;
    void *p4;
    char pad[100];
};
struct Obj3f564 {
    void *vtable;
    char pad0[436];
    Rec3f564 recs[4];
    char pad1[192];
    VirtObj *p1064;
    VirtObj *p1068[4];
    char pad2[16];
    VirtObj *p1100;
    char pad3[84];
    void *p1188;
    char pad4[36];
    unsigned short ids[2];
    char pad5[32];
    int flags[4];
};
extern "C" {
extern void FUN_02037d20(void *, unsigned int);
extern void FUN_020ba8c4(void *);
extern void FUN_0203e9fc(void *);
extern void FUN_0203eee4(void *, int);
extern void FUN_020bd2fc(int, void *, unsigned int);
extern void FUN_020b9e28(void *);
extern void FUN_020ba940(void *);
extern int DAT_020f8640[];
extern void *DAT_02108c84;

void *FUN_0203f69c(Obj3f564 *s) {
    int i;
    void *manager;
    s->vtable = DAT_020f8640;
    manager = DAT_02108c84;
    if (manager) {
        for (i = 0; i < 2; i++) {
            if (s->ids[i] != 0xffff) {
                FUN_02037d20(manager, s->ids[i]);
                s->ids[i] = 0xffff;
            }
        }
    }
    if (s->p1100) {
        delete s->p1100;
        s->p1100 = 0;
    }
    if (s->p1188) {
        FUN_020ba8c4(s->p1188);
        s->p1188 = 0;
    }
    if (s->p1064) {
        delete s->p1064;
        s->p1064 = 0;
    }
    FUN_0203e9fc(s);
    for (i = 0; i < 4; i++) {
        FUN_0203eee4(s, i);
    }
    for (i = 0; i < 4; i++) {
        if (s->recs[i].p4) {
            FUN_020ba8c4(s->recs[i].p4);
            s->recs[i].p4 = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (s->recs[i].p0) {
            if (s->flags[i] == 1) {
                FUN_020bd2fc(7, s->recs[i].p0, 0x2200);
            } else {
                FUN_020ba8c4(s->recs[i].p0);
            }
            s->recs[i].p0 = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (s->p1068[i]) {
            delete s->p1068[i];
            s->p1068[i] = 0;
        }
    }
    FUN_020b9e28(s);
    FUN_020ba940(s);
    return s;
}
}
