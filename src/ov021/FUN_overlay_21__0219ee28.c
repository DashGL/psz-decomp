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
extern Vec DAT_020fc958;
extern int DAT_021a1880[];
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02037568(void *);
void FUN_overlay_21__0219ee28(char *self) {
    char *owner = *(char **)(self + 4), *state = *(char **)(self + 8), *records = *(char **)(owner + 0xec), *component;
    int i;
    FUN_02043ea4(owner, 0, 0);
    *(Vec *)(owner + 0xf0) = DAT_020fc958;
    FUN_02037568(owner);
    for (i = 0; i < 4; i++) {
        char *record = records + 188 * i;
        *(int *)(record + 0x1c) = 0;
        *(int *)(record + 0x24) = 0;
    }
    *(int *)(owner + 0xd4) = 1;
    *(int *)(owner + 0x10c) = DAT_021a1880[2];
    *(unsigned short *)(owner + 0x108) = 0;
    *(unsigned short *)(owner + 0x44) = *(unsigned short *)(owner + 0x108);
    *(int *)(state + 0x80) = 18;
    component = DAT_02108c84;
    if (component) {
        Comp24 *comp = *(Comp24 **)(component + 0x5c);
        if (comp) {
            comp->v21(2);
            comp->v5(0);
        }
    }
}
}
