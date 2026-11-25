// flags: -O4,s
//cpp
extern "C" {
extern char DAT_020f6d44[];
extern unsigned int DAT_02108c74[];
extern void FUN_02050db4(void);
extern void FUN_02034138(void *);
extern void FUN_020c6944(void *);
extern void FUN_02037f8c(void *);
}

struct Child {
    virtual void f0();
    virtual ~Child();
};

static inline void do_del(Child *p) {
    if (p) {
        delete p;
    }
}

struct Obj {
    void *vtable;
    unsigned char pad0[0x3c];
    Child *slots[9];
    unsigned char pad1[0xb8 - 0x64];
    unsigned char tail[4];
};

extern "C" Obj *FUN_02034308(Obj *s) {
    int i;
    s->vtable = DAT_020f6d44;
    for (i = 0; i < 9; i++) {
        if (s->slots[i]) {
            if (s->slots[i]) {
                delete s->slots[i];
                s->slots[i] = 0;
            }
        }
    }
    FUN_02050db4();
    FUN_02034138(s);
    DAT_02108c74[4] = 0;
    FUN_020c6944(s->tail);
    FUN_02037f8c(s);
    return s;
}
