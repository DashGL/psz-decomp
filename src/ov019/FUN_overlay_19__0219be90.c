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
extern int DAT_020fc988;
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_020445a8(void *, int, int);
extern void FUN_overlay_19__02198a80(void *, int);
void FUN_overlay_19__0219be90(char *self) {
    char *owner = *(char **)(self + 4), *component;
    Vec position = *(Vec *)(owner + 0x38);
    position.y = DAT_020fc988;
    *(Vec *)(owner + 0x38) = position;
    FUN_02040c0c(owner, 0, 22, 4096, 0);
    FUN_020445a8(owner, 0, 0);
    FUN_020445a8(owner, 1, 0);
    FUN_020445a8(owner, 2, 0);
    component = DAT_02108c84;
    if (component) {
        Comp24 *comp = *(Comp24 **)(component + 0x58);
        if (comp) {
            unsigned short angle = *(unsigned short *)(owner + 0x44);
            Vec cameraPosition = *(Vec *)(owner + 0x38);
            comp->v22(11);
            comp->v23(&cameraPosition);
            comp->v24(angle);
        }
    }
    FUN_overlay_19__02198a80(owner, 0);
    *(int *)(owner + 0x184) = 0;
    *(int *)(self + 12) = 0;
}
}
