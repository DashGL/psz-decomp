// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_02099f1c(void *), FUN_02033658(int, int, void *);
extern int FUN_02033704(void);
void FUN_020a36e8(char *s, int state) {
    if (state == 4) {
        *(int *)(s + 328) = 0;
        FUN_02099f1c(s + 76);
    } else if (state == 5) {
        *(int *)(s + 328) = 0;
    } else if (state == 0) {
        *(int *)(s + 328) = 0;
        FUN_02099f1c(s + 76);
        if (!FUN_02033704()) { Vec v = *(Vec *)(s + 28); FUN_02033658(4, 4, &v); }
    } else if (state == 1) {
        if (!FUN_02033704()) { Vec v = *(Vec *)(s + 28); FUN_02033658(4, 5, &v); }
    } else if (state == 2) {
        if (!FUN_02033704()) { Vec v = *(Vec *)(s + 28); FUN_02033658(4, 5, &v); }
    } else if (state == 3) {
        *(int *)(s + 328) = 0;
        FUN_02099f1c(s + 76);
        if (!FUN_02033704()) { Vec v = *(Vec *)(s + 28); FUN_02033658(4, 4, &v); }
    }
}
