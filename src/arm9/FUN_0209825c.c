//cpp
// flags: -O4,s
struct Pair_0209825c {
    short a;
    short b;
    Pair_0209825c() : a(0), b(0) {}
    bool checkA() const { return a >= 0 && a < 5; }
    bool checkB() const { return checkA() && b > 0; }
    bool isValid() const { return checkB() && b <= 24; }
};
extern "C" {
extern void FUN_0209ecc4(void *, void *);
extern void FUN_0209ed00(void *, void *, int);
void FUN_0209825c(char *s, short a, short b, int count) {
    if (*(void **)(s + 0x128) != 0) {
        Pair_0209825c p;
        p.a = a;
        p.b = b;
        if (p.isValid()) {
            if (count <= 0) {
                FUN_0209ecc4(*(void **)(s + 0x128), &p);
            } else {
                FUN_0209ed00(*(void **)(s + 0x128), &p, count);
            }
        }
    }
}
}
