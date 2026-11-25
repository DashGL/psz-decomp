// flags: -O4,s
struct Pair02083484 { int x, y; };
struct Table02083484 { struct Pair02083484 p[4]; };
extern const struct Table02083484 DAT_020f2ef8;
int FUN_02083484(int *a, int *b, int index) {
    struct Table02083484 t = DAT_020f2ef8;
    if (index >= 0 && index < 4) {
        *a = t.p[index].x;
        *b = t.p[index].y;
        return 1;
    }
    return 0;
}
