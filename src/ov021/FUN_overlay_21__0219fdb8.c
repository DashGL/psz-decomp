//cpp
// flags: -O4,s
struct Comp24 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(int); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(int); virtual void v22(int); virtual void v23(void *);
    virtual void v24(int);
};
struct Vec { union { struct { int x, y, z; }; int w[3]; }; };
extern "C" {
extern char *DAT_02108c84;
extern void FUN_02040c0c(void *, int, int, int, int), FUN_02044570(void *, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern char *FUN_02075040(void *, int);
extern void FUN_020c193c(int, int, int, int, int);
void FUN_overlay_21__0219fdb8(char *self) {
    char *owner = *(char **)(self + 4), *records, *effect, *manager;
    Comp24 *component;
    Vec position;
    int i;
    FUN_02040c0c(owner, 0, 21, 4096, 0);
    *(unsigned short *)(owner + 0x10a) = 0;
    records = *(char **)(owner + 0xec);
    for (i = 0; i < 2; i++) *(int *)(records + 188 * i + 24) = 12;
    FUN_02044570(owner, 0, 0);
    FUN_02044570(owner, 1, 0);
    FUN_02044570(owner, 2, 0);
    *(int *)(self + 20) = FUN_02074e9c(owner, 9, 0, 0);
    position = *(Vec *)(owner + 0x38);
    effect = FUN_02075040(owner, *(int *)(self + 20));
    if (effect) {
        *(Vec *)(effect + 0x5c) = position;
        *(unsigned *)(effect + 0xe4) |= 2;
        *(unsigned *)(effect + 0xe4) |= 65536;
    }
    FUN_020c193c(26, 16, 0, 0, 4);
    manager = DAT_02108c84;
    if (manager) {
        component = *(Comp24 **)(manager + 0x5c);
        if (component) component->v21(0);
        component = *(Comp24 **)(manager + 0x58);
        if (component) {
            component->v22(3);
            component->v24(*(unsigned short *)(owner + 0x108));
        }
    }
    *(int *)(self + 12) = 0;
    *(int *)(self + 16) = 0;
}
}
