// flags: -O4,s
//cpp
extern "C" {
extern void FUN_02098e00(void *), FUN_02096d84(void *), FUN_020ba8ac(void *), FUN_02097884(void *, int, int);
#pragma thumb off
extern void FUN_020654b4(int, void *, int);
#pragma thumb on
extern void *FUN_020ba894(int), *FUN_02098df8(void *, int), *FUN_02096c94(void *, void *, void *, void *), *FUN_02099444(void), *FUN_0209945c(int, int);
extern int FUN_02099de0(void *, int);
}

struct ObjA {
    inline ~ObjA() { FUN_02098e00(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

struct ObjB {
    inline ~ObjB() { FUN_02096d84(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

extern "C" void FUN_02097c78(char *s, int *input) {
    ObjA *oldA;
    ObjB *oldB;
    void *p;
    int length;
    if (input[1] < 0 || input[1] >= 5) return;
    oldA = ((ObjA **)s)[input[1]];
    if (oldA) {
        delete oldA;
        ((void **)s)[input[1]] = 0;
    }
    p = FUN_020ba894(8);
    if (p) p = FUN_02098df8(p, input[0]);
    ((void **)s)[input[1]] = p;
    oldB = ((ObjB **)(s + 20))[input[1]];
    if (oldB) {
        delete oldB;
        ((void **)(s + 20))[input[1]] = 0;
    }
    p = FUN_020ba894(84);
    if (p) p = FUN_02096c94(p, input, s, ((void **)s)[input[1]]);
    ((void **)(s + 20))[input[1]] = p;
    FUN_02097884(((void **)(s + 20))[input[1]], *(int *)(s + 100), 1);
    FUN_02097884(((void **)(s + 20))[input[1]], *(int *)(s + 104), 0);
    if (!((void **)(s + 80))[input[1]]) {
        length = 2 * FUN_02099de0(FUN_02099444(), *(volatile int *)(input + 1));
        p = FUN_0209945c(length, 16);
        ((void **)(s + 80))[input[1]] = p;
        FUN_020654b4(0, ((void **)(s + 80))[input[1]], length);
    }
}
