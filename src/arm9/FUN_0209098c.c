//cpp
// flags: -O4,s
extern "C" {
extern void *FUN_020c1fc8(void);
#pragma thumb off
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
extern void FUN_0206557c(int, void *, unsigned int);
#pragma thumb on
extern void FUN_020c2624(void *, void *);
extern void FUN_020b3074(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020c212c(void *, int);
extern void FUN_020c2b68(void *);
}

struct ChildA {
    inline ~ChildA() { FUN_020b3074(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

struct ChildB {
    char *inner;
    inline ~ChildB() { FUN_020c2b68(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

struct Obj {
    int handles[4];
    ChildB *b;
    int pad;
    ChildA *a;
};

extern "C" void *FUN_0209098c(Obj *s) {
    for (int i = 0; i < 4; i++) {
        if (s->handles[i] != -1) {
            FUN_020c2624(FUN_020c1fc8(), &s->handles[i]);
        }
    }
    if (s->a != 0) {
        if (s->a != 0) {
            delete s->a;
            s->a = 0;
        }
    }
    FUN_020c212c(FUN_020c1fc8(), 2);
    if (s->b != 0) {
        unsigned int size = ((volatile unsigned int *)s->b->inner)[20];
        FUN_0206557c(0, FUN_0205e260(), size);
        size = ((volatile unsigned int *)s->b->inner)[21];
        FUN_0206557c(0, FUN_0205e464(), size);
        if (s->b != 0) {
            delete s->b;
            s->b = 0;
        }
    }
    return s;
}
