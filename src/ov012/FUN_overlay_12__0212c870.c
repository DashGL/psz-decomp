//cpp
// flags: -O4,s
struct T { int w[8]; };
extern "C" {
extern T DAT_0213886c;
extern void *FUN_020c3564(void *);
extern void FUN_020c35d4(void *, void *);
extern void FUN_020c38f0(void *, int);
}
extern "C" void *FUN_overlay_12__0212c870(int *p, int mode) {
    p[0] = mode;
    FUN_020c3564(p + 1);
    FUN_020c3564(p + 16);
    int flag = (mode != 0) ? 1 : 0;
    T t = DAT_0213886c;
    t.w[7] = flag;
    FUN_020c35d4(p + 1, &t);
    FUN_020c38f0(p + 1, 0);
    return p;
}
