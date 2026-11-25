//cpp
// flags: -O4,s
extern "C" {
extern void *DAT_020fc4e0;
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020aecb8(void *);
extern void FUN_020ba8ac(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, void *);
extern void FUN_020af55c(void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
}

struct Child {
    inline ~Child() {
        FUN_020aecb8(this);
    }
    inline void operator delete(void *p) {
        FUN_020ba8ac(p);
    }
};

struct Obj {
    void *vtbl;
    char pad0[0x10];
    int m14;
    char m18[0x40];
    int handle;
    char pad1[0xc];
    Child *children[4];
};

extern "C" void *FUN_020af0a4(Obj *s) {
    s->vtbl = &DAT_020fc4e0;
    FUN_020c38f0(s->m18, 0);
    FUN_020c3588(s->m18);
    for (int i = 0; i < 4; i++) {
        if (s->children[i] != 0) {
            if (s->children[i] != 0) {
                delete s->children[i];
                s->children[i] = 0;
            }
        }
    }
    if (s->handle != -1) {
        FUN_020c2624(FUN_020c1fc8(), &s->handle);
    }
    FUN_020af55c(s);
    FUN_020c3578(s->m18);
    FUN_020c2b68(&s->m14);
    FUN_020ba8ac(s);
    return s;
}
