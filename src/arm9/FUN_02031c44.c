//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct S {
    char pad[0x10];
    unsigned short v;
};
extern "C" int FUN_02031c44(S **s) {
    int i;
    for (i = 0; i < 2; i++) {
        S *p = s[i];
        if (p) {
            int ok = (p->v == 0) ? E1 : E0;
            if (!ok) return 0;
        }
    }
    return 1;
}
