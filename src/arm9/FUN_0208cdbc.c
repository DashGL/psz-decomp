//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct Vec { int x, y, z; };
struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    virtual void v41(int, int);
};
extern "C" {
extern int FUN_02085880(int), FUN_0203b41c(void *), FUN_0206fdc0(void *, void *, int, int);
extern char *FUN_02085684(int);
extern void FUN_02035408(void *, int, int, int), FUN_02075124(void *, void *), FUN_0206fe30(void *, void *, int, int), FUN_0206ffbc(void *);
}

extern "C" void FUN_0208cdbc(char *s) {
    char *actor;
    Vec p;
    if (FUN_02085880(*(int *)(s + 20)) != 1) return;
    actor = FUN_02085684(*(int *)(s + 20));
    if (!actor) return;
    FUN_02035408(&p, *(int *)(actor + 156), *(int *)(actor + 160), *(int *)(actor + 164));
    switch (*(unsigned char *)(s + 18)) {
    case 0:
        if (*(int *)(actor + 576) == 18) return;
        if (FUN_0203b41c(actor)) return;
        if ((*(int *)(actor + 248) & 0x8000000) ? E1 : E0) return;
        FUN_02075124(actor, actor + 156);
        ((Actor *)actor)->v41(*(unsigned short *)(s + 16), 2);
        if (!FUN_0206fdc0(actor, &p, *(unsigned short *)(s + 16), *(unsigned char *)(s + 19)))
            *(int *)(actor + 248) |= 0x4000000;
        break;
    case 1:
        if (*(int *)(actor + 576) == 18)
            FUN_0206fe30(actor, &p, *(unsigned short *)(s + 16), *(unsigned char *)(s + 19));
        break;
    case 2:
        if (*(int *)(actor + 576) == 18)
            FUN_0206ffbc(actor);
        break;
    }
}
