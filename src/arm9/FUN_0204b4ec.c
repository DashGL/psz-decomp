//cpp
// flags: -O4,s
enum E4b4ec { E0 = 0, E1 = 1 };
struct Key4 { unsigned char b[4]; };
struct V4b4ec {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
extern "C" {
extern void FUN_02045f84(void *), FUN_020ba8c4(void *);
extern int FUN_0203a820(void *, int), FUN_02078188(unsigned int);
void FUN_0204b4ec(char *s);
}

#pragma always_inline on
static inline E4b4ec is_ff(const Key4 &a) {
    unsigned int packed = ((unsigned int)a.b[0] << 24) | ((unsigned int)a.b[1] << 16) | ((unsigned int)a.b[2] << 8) | a.b[3];
    return (packed == ~0u) ? E1 : E0;
}

static inline E4b4ec is_empty_item(const Key4 &a, unsigned int sum) {
    if (is_ff(a) && sum == 0) return E1;
    return E0;
}

void FUN_0204b4ec(char *s) {
    Key4 a, b, c;
    unsigned int sum;
    int i;
    void *p;
    ((V4b4ec *)s)->v4();
    sum = 0;
    for (i = 0; i < 3; i++) sum += ((unsigned int *)(s + 212))[i];
    a = *(Key4 *)(s + 208);
    if (is_empty_item(a, sum)) return;
    FUN_02045f84(s + 52);
    b = *(Key4 *)(s + 208);
    if (FUN_0203a820(&b, 0)) {
        c = *(Key4 *)(s + 208);
        if (!FUN_0203a820(&c, 0) || FUN_02078188(*(unsigned int *)(s + 232))) return;
    }
    for (i = 0; i < 7; i++) {
        p = *(void **)((s + 4 * i) + 20);
        if (p) {
            FUN_020ba8c4(p);
            *(void **)((s + 4 * i) + 20) = 0;
        }
    }
}
