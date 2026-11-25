// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec3;

#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void *FUN_02034680(void *, void *);
extern char *DAT_02108c84;

int FUN_0204ad14(void *unused, Vec3 *p) {
    Vec3 a, temp;
    char *m;
    int x, z;
    FUN_0200c938(&a, 12);
    m = DAT_02108c84;
    if (m) {
        char *q = *(char **)(m + 64 + 4 * *(int *)(m + 100));
        if (q) {
            temp = *(Vec3 *)(q + 24);
            FUN_02034680(&a, &temp);
        }
    }
    x = *(volatile int *)&a.x - p->x;
    z = a.z - p->z;
    if (x < 0) x *= -1;
    if (z < 0) z *= -1;
    return (x >> 8) * (x >> 8) + (z >> 8) * (z >> 8);
}
