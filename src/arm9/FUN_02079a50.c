//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern "C" {
extern char DAT_020fa3b4[];
extern char *DAT_02108c64;
void FUN_0207a070(void *);
void FUN_02079f10(void *);
void FUN_02035144(void *, int);
void FUN_020306fc(void *);
void FUN_020ba8ac(void *);
void FUN_020303bc(void *);
void *FUN_02034b78(void);
}
struct Sub {
    inline ~Sub() { FUN_020306fc(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
extern "C" void *FUN_02079a50(char *s) {
    void *p;
    *(void **)s = DAT_020fa3b4;
    *(int *)(DAT_02108c64 + 104) = 0;
    if (((*(unsigned short *)(DAT_02108c64 + 4) & 128) ? E1 : E0) != 0) {
        FUN_0207a070(s);
    }
    FUN_02079f10(s);
    p = FUN_02034b78();
    if (p != 0) {
        FUN_02035144(p, *(int *)(s + 64));
    }
    Sub *sub = *(Sub **)(s + 60);
    if (sub != 0) {
        delete sub;
        *(Sub **)(s + 60) = 0;
    }
    FUN_020303bc(s);
    return s;
}
