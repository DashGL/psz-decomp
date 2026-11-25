//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0206d0d8(void *);
int FUN_0206d124(int *s) {
    if (FUN_0206d0d8(s)) {
        int a = s[0];
        int b = s[1];
        int eq = (a == 0 && b == 1) ? 1 : 0;
        int neq = (!eq) ? 1 : 0;
        if (neq) return 1;
    }
    return 0;
}
}
