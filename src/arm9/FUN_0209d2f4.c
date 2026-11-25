// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int x, y, z; } Vec3;
extern void FUN_02033658(int, int, Vec3 *);
extern char *FUN_02085640(void);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
#pragma thumb reset
extern char *DAT_02108c84;

void FUN_0209d2f4(char *param_1, int param_2) {
    if (param_2 == 0) {
        Vec3 v3 = *(Vec3 *)(param_1 + 0x1c);
        char *p;
        FUN_02033658(4, 8, &v3);
        p = FUN_02085640();
        if (p != 0) {
            Vec3 v2 = *(Vec3 *)(p + 0x9c);
            Vec3 v1;
            Vec3 v0 = *(Vec3 *)(param_1 + 0x1c);
            int d, sub, arg1;
            char *g;
            v1.x = v2.x - v0.x;
            v1.y = v2.y - v0.y;
            v1.z = v2.z - v0.z;
            d = FUN_0205c86c(&v1);
            sub = 0;
            if (d > 0x8000) {
                sub = d - 0x8000;
            }
            arg1 = 0x5000 - sub;
            g = DAT_02108c84;
            if (g != 0) {
                int *obj = *(int **)(g + (*(int *)(g + 0x64) << 2) + 0x40);
                if (obj != 0) {
                    ((void (*)(int *, int, int))(*(int *)(*obj + 0x48)))(obj, arg1, 0xf);
                }
            }
        }
    }
}
