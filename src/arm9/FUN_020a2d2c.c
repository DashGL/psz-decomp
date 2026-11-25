// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } V325;
typedef union { int align; unsigned char b[100]; } D325;
extern char DAT_020fbe4c[], DAT_0211c844[];
extern int FUN_02033704(void), FUN_0203068c(void *);
#pragma thumb off
extern int FUN_0205c520(int, int);
#pragma thumb on
extern unsigned FUN_020a2f34(void *, unsigned);
extern void FUN_02030da8(void *, void *), FUN_020a2978(void *, void *, int, int), FUN_020bce3c(void *), FUN_020304b8(void *, void *), FUN_02033658(int, int, void *), FUN_020a3218(void *), FUN_0203666c(void *), FUN_02046d94(void *, int, int), FUN_02099f50(void *);
void FUN_020a2d2c(char *s, int event) {
    unsigned char code[4], packet[12];
    V325 a, b, c, scale, e, f, d;
    D325 effect1, effect2;
    unsigned angle;
    int x, y, z;
    if (event == 0) {
        if (FUN_02033704()) return; if (((**(unsigned char **)(s + 76) & 1) ? E1 : E0) != E0) return; if (*(int *)(s + 312) & 1) return; FUN_02030da8(code, s); FUN_020a2978(packet, code, (signed char)FUN_0203068c(s), 0); FUN_020bce3c(packet); *(int *)(s + 312) |= 1;
    } else if (event == 2) {
        FUN_020304b8(s, DAT_020fbe4c);
        if (FUN_02033704()) return; a = *(V325 *)(s + 28); FUN_02033658(4, 7, &a);
    } else if (event == 3) {
        *(int *)(s + 332) = 0;
        if (FUN_02033704()) return; b = *(V325 *)(s + 28); FUN_02033658(4, 13, &b);
    } else if (event == 4) {
        FUN_020a3218(s);
        if (FUN_02033704()) return;
        c = *(V325 *)(s + 28);
        FUN_02033658(4, 8, &c);
        FUN_0203666c(effect1.b);
        angle = FUN_020a2f34(DAT_0211c844, 0);
        x = FUN_0205c520(FUN_020a2f34(DAT_0211c844, 4095), 20480) + 5325;
        y = FUN_0205c520(FUN_020a2f34(DAT_0211c844, 4095), 20480) + 5325;
        z = FUN_0205c520(FUN_020a2f34(DAT_0211c844, 4095), 20480) + 5325;
        *(int *)(effect1.b + 84) = 40;
        *(V325 *)(effect1.b + 32) = *(V325 *)(s + 28);
        scale.x = x; scale.y = y; scale.z = z;
        *(V325 *)(effect1.b + 44) = scale;
        *(short *)(effect1.b + 60) = angle;
        FUN_02046d94(effect1.b, 0, 0);
        FUN_02099f50(s + 96);
    } else if (event == 5) {
        FUN_020a3218(s);
        if (!FUN_02033704()) {
            d = *(V325 *)(s + 28);
            FUN_02033658(4, 0, &d);
            FUN_0203666c(effect2.b);
            *(int *)(effect2.b + 84) = 38;
            e = *(V325 *)(s + 28);
            e.y += 4096;
            *(V325 *)(effect2.b + 32) = e;
            FUN_02046d94(effect2.b, 0, 0);
        }
    } else if (event == 6) {
        FUN_020a3218(s);
    } else if (event == 1) {
        if (!FUN_02033704()) { f = *(V325 *)(s + 28); FUN_02033658(4, 7, &f); }
    }
}
