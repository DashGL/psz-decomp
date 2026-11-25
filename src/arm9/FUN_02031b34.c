//cpp
// flags: -O4,s
extern "C" {
extern void *DAT_02108c60;
extern void FUN_0203208c(void *);
extern void FUN_02031ee4(void *);
extern void FUN_0207f1c4(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020797fc(void *);
extern void FUN_020322f8(void *);
extern void FUN_020ba8c4(void *);
extern void FUN_0209cf54(void *);
}
struct T1 {
    inline ~T1() { FUN_0207f1c4(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct T2 {
    inline ~T2() { FUN_020797fc(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct Obj31b34 {
    T2 *f00[2];
    int pad[5];
    unsigned int f1c;
    void *f20;
    T1 *f24;
    T1 *f28;
    int f2c;
};
extern "C" Obj31b34 *FUN_02031b34(Obj31b34 *s) {
    int i;
    DAT_02108c60 = 0;
    FUN_0203208c(s);
    FUN_02031ee4(s);
    if (s->f28) { delete s->f28; s->f28 = 0; }
    if (s->f24) { delete s->f24; s->f24 = 0; }
    for (i = 0; i < 2; i++) {
        if (s->f00[i]) { delete s->f00[i]; s->f00[i] = 0; }
    }
    FUN_020322f8(s);
    s->f1c = 0;
    if (s->f20) { FUN_020ba8c4(s->f20); s->f20 = 0; }
    FUN_0209cf54(&s->f2c);
    return s;
}
