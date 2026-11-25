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
extern void *DAT_0210e24c;
extern void FUN_overlay_21__0219afc4(void *, int);
extern void FUN_02036f08(void *, int);
extern void FUN_02037568(void *);
extern void FUN_020510f4(void *);
void FUN_overlay_21__0219d578(char *self) {
    char *owner = *(char **)(self + 4), *records = *(char **)(owner + 0xec), *component;
    int i;
    for (i = 0; i < 4; i++) {
        char *record = records + 188 * i;
        FUN_overlay_21__0219afc4(record, 0);
        *(unsigned short *)(record + 0x54) = 0x4000;
        *(unsigned short *)(record + 0x56) = 0x3c71;
        *(int *)(record + 0x18) = 0;
    }
    component = DAT_02108c84;
    if (component) {
        Comp24 *comp = *(Comp24 **)(component + 0x58);
        if (comp) {
            comp->v22(1);
            comp->v24(*(unsigned short *)(owner + 0x108));
        }
    }
    *(Vec *)(owner + 0x38) = *(Vec *)(owner + 0xfc);
    FUN_02036f08(owner, 1);
    FUN_02037568(owner);
    FUN_020510f4(DAT_0210e24c);
    *(int *)(self + 12) = 0;
    *(int *)(self + 16) = 0;
}
}
