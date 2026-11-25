// flags: -O4,s
typedef struct { int x, y, z; } V358;
extern char DAT_0211c844[];
extern int FUN_02033704(void), FUN_0205c520(int, int);
extern unsigned FUN_020938d0(void *, unsigned);
extern void FUN_02035408(void *, int, int, int), FUN_02030658(void *, void *), FUN_02033658(int, int, void *), FUN_0203666c(void *), FUN_02036848(void *, void *), FUN_02046d94(void *, int, int), FUN_02099f50(void *);
void FUN_02093634(char *s, int event) {
    V358 out0, p2, origin, scale, out3, sound3, sound4, sound5, out5, sound6, sound1, b0, a0, offset, b3, a3, b5, a5, p0, p3, p5;
    int effect[25], x, y, z;
    unsigned angle;
    if (event == 0) {
        p0 = *(V358 *)(s + 28);
        a0 = p0;
        b0 = p0;
        FUN_02035408(&out0, b0.x, *(int *)(s + 100) - *(int *)(s + 104), a0.z);
        FUN_02030658(s, &out0);
    } else if (event == 2) {
        if (FUN_02033704()) return;
        p2 = *(V358 *)(s + 28);
        FUN_02033658(4, 0, &p2);
        FUN_0203666c(effect);
        angle = FUN_020938d0(DAT_0211c844, 0);
        x = FUN_0205c520(FUN_020938d0(DAT_0211c844, 4095), 20480) + 5325;
        y = FUN_0205c520(FUN_020938d0(DAT_0211c844, 4095), 20480) + 5325;
        z = FUN_0205c520(FUN_020938d0(DAT_0211c844, 4095), 20480) + 5325;
        effect[21] = 40;
        origin = *(V358 *)(s + 28);
        offset.x = 0;
        offset.y = 4915;
        offset.z = 0;
        FUN_02036848(&origin, &offset);
        *(V358 *)((char *)effect + 32) = origin;
        scale.x = x;
        scale.y = y;
        scale.z = z;
        *(V358 *)((char *)effect + 44) = scale;
        *(unsigned short *)((char *)effect + 60) = angle;
        FUN_02046d94(effect, 0, 0);
        FUN_02099f50(s + 116);
    } else if (event == 3) {
        if (FUN_02033704()) {
            *(int *)(s + 112) = 2;
            p3 = *(V358 *)(s + 28);
            a3 = p3;
            b3 = p3;
            FUN_02035408(&out3, b3.x, *(int *)(s + 100), a3.z);
            FUN_02030658(s, &out3);
        } else {
            sound3 = *(V358 *)(s + 28);
            FUN_02033658(4, 4, &sound3);
            *(int *)(s + 112) = 1;
            *(int *)(s + 96) = 410;
        }
    } else if (event == 4) {
        if (FUN_02033704()) *(int *)(s + 112) = 2;
        else {
            sound4 = *(V358 *)(s + 28);
            FUN_02033658(4, 5, &sound4);
            *(int *)(s + 112) = 1;
            *(int *)(s + 96) = -410;
        }
    } else if (event == 5) {
        if (!FUN_02033704()) {
            sound5 = *(V358 *)(s + 28);
            FUN_02033658(4, 5, &sound5);
            *(int *)(s + 112) = 1;
            *(int *)(s + 96) = -410;
        } else {
            *(int *)(s + 112) = 0;
            p5 = *(V358 *)(s + 28);
            a5 = p5;
            b5 = p5;
            FUN_02035408(&out5, b5.x, *(int *)(s + 100) - *(int *)(s + 104), a5.z);
            FUN_02030658(s, &out5);
        }
    } else if (event == 6) {
        *(int *)(s + 84) = 0;
        if (!FUN_02033704()) {
            sound6 = *(V358 *)(s + 28);
            FUN_02033658(4, 4, &sound6);
            *(int *)(s + 112) = 1;
            *(int *)(s + 96) = 410;
        }
    } else if (event == 1) {
        if (!FUN_02033704()) {
            sound1 = *(V358 *)(s + 28);
            FUN_02033658(4, 12, &sound1);
        }
    }
}
