//cpp
// flags: -O4,s
extern "C" {
extern void *FUN_020c2a08(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020ba8c4(void *);
}
struct Sub {
    inline ~Sub() { FUN_020c2a08(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct Singleton {
    inline ~Singleton() {}
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
extern "C" Singleton *DAT_0211c860;
struct S {
    Sub **arr;
};
extern "C" void FUN_020c2090(S *self) {
    for (int i = 0; i < 8; i++) {
        if (self->arr[i] != 0) {
            if (self->arr[i] != 0) {
                delete self->arr[i];
                self->arr[i] = 0;
            }
            self->arr[i] = 0;
        }
    }
    if (self->arr != 0) {
        FUN_020ba8c4(self->arr);
        self->arr = 0;
    }
    if (DAT_0211c860 != 0) {
        delete DAT_0211c860;
        DAT_0211c860 = 0;
    }
}
