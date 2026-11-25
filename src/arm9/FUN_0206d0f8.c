//cpp
// flags: -O4,p
struct S_0206d0f8 {
    int f0;
    int f4;
};
extern "C" int FUN_0206d0d8(S_0206d0f8 *);
extern "C" int FUN_0206d0f8(S_0206d0f8 *s) {
    if (FUN_0206d0d8(s) != 0) {
        int a = s->f0;
        int b = s->f4;
        int ok = (a == 0 && b == 1) ? 1 : 0;
        if (ok != 0) {
            return 1;
        }
    }
    return 0;
}
