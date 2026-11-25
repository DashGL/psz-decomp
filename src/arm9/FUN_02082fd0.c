// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
struct Q {
    int *a[4];
    int *b[4];
};
extern int FUN_020834c0(int);
extern void *FUN_02082fac(void *, int);
extern struct Q *FUN_02041b2c(void *);
extern short FUN_0205c9e4(int, int);
extern void *DAT_02108d64;

int FUN_02082fd0(void *param_1, Vec3 *param_2, short *param_3, int param_4, int param_5) {
    int idx = FUN_020834c0(param_5);
    void *p;
    if (idx < 0 || idx >= 4) {
        return 0;
    }
    p = FUN_02082fac(param_1, param_4);
    if (p == 0) {
        return 0;
    }
    idx = (idx + (4 - *(int *)((char *)p + 0x24))) % 4;
    if (DAT_02108d64 != 0) {
        struct Q *q = FUN_02041b2c(DAT_02108d64);
        if (q != 0) {
            int *a = q->a[idx];
            int *b = q->b[idx];
            if (a != 0 && b != 0) {
                Vec3 local_10;
                local_10.x = a[0];
                local_10.y = 0;
                local_10.z = a[1];
                *param_2 = local_10;
                *param_3 = FUN_0205c9e4(a[0] - b[0], a[1] - b[1]);
                return 1;
            }
        }
    }
    return 0;
}
