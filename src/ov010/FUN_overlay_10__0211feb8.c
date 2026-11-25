// flags: -O4,s
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
struct Desc {
    short a;
    short pad0;
    short b;
    short pad1;
    int x;
    int y;
};
void FUN_overlay_10__0211feb8(int *p, int selected, int count) {
    int i;
    struct Desc t;
    for (i = 0; i < count; i++) {
        FUN_02071d0c(&t);
        FUN_02090b44(&t);
        t.x = 0x4000;
        t.y = (i * 16 + 28) << 12;
        t.b = 2;
        if (i == selected) t.a = 1; else t.a = 0;
        FUN_020c32b4(&t, p[32]);
    }
}
