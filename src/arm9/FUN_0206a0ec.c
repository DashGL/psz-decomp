// flags: -noThumb
typedef struct { int a, b; unsigned char c; unsigned char pad[3]; } E12;
extern E12 DAT_0211a0e0[];
unsigned char FUN_0206a0ec(int idx, int a, int b) {
    E12 *e = &DAT_0211a0e0[idx];
    e->a = a;
    e->b = b;
    return ++e->c;
}
