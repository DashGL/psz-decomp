//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020a47bc(void *, int);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020c3578(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020a45f4(void *);
extern void FUN_020c2b68(void *);
}
struct Item {
    inline ~Item() {
        FUN_020c38f0(this, 0);
        FUN_020c3588(this);
        FUN_020c3578(this);
    }
    inline void operator delete(void *p) {
        FUN_020ba8ac(p);
    }
};
struct S {
    int f0, f4, f8;
    Item *items[4];
};
extern "C" S *FUN_020a44dc(S *s) {
    int i;
    for (i = 0; i < 4; i++) {
        FUN_020a47bc(s, i);
        if (s->items[i] != 0) {
            delete s->items[i];
            s->items[i] = 0;
        }
    }
    FUN_020a45f4(s);
    FUN_020c2b68(s);
    return s;
}
