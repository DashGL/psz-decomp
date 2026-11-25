//cpp
// flags: -O4,p
struct G_02032c10 {
    int f0;
    int f4;
    int f8;
};
extern G_02032c10 DAT_0211a3c4;
extern "C" int FUN_02082efc(void *, void *, int);
extern "C" int FUN_0206d178(void *);
extern "C" int FUN_02032c10(void *a, void **b, int c) {
    int active = (DAT_0211a3c4.f8 >= 0) ? 1 : 0;
    if (active != 0 && *b != 0) {
        return FUN_02082efc(a, *b, c);
    }
    return FUN_0206d178(a);
}
