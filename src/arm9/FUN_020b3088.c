// flags: -O4,s
struct Icon { unsigned short id, pad; int f4, x, y; };
extern void FUN_020144f0(void), FUN_02014714(void), FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int);
extern int FUN_02053860(void);
void FUN_020b3088(int *s, unsigned int mode) {
    struct Icon a, b;
    FUN_020144f0();
    if (mode <= 1) {
        FUN_02071d0c(&a);
        FUN_02090b44(&a);
        a.x = 4096;
        a.y = 0x16f000;
        a.id = FUN_02053860();
        if (a.id >= 4) a.id = 3;
        if (mode != 0) a.id += 4;
        FUN_020c32b4(&a, s[0]);
    } else {
        FUN_02071d0c(&b);
        FUN_02090b44(&b);
        b.x = 0xeb000;
        b.y = 0x16a000;
        if (mode == 2) {
            b.id = s[1] / 6 + 11;
            FUN_020c32b4(&b, s[0]);
            ++s[1];
            if (s[1] >= 30) s[1] = 0;
        }
        b.id = 10;
        FUN_020c32b4(&b, s[0]);
    }
    FUN_02014714();
}
