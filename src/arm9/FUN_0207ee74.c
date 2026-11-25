// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern int DAT_020f2a30[];
extern int DAT_020f2a3c[];
extern Vec DAT_020fc958;
extern char DAT_0211c844[];

extern void FUN_020473e8(void *, void *, int);
extern void FUN_02036348(Vec *, Vec *, Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern int FUN_0207efd8(Vec *, Vec *);
extern int FUN_0207b860(void *, int);

#define W(n) (*(int *)(s + (n)))

void FUN_0207ee74(char *s, void *input, int tier, Vec *start, Vec *end) {
    Vec pos, delta, scale, temp, result;
    int low, high, x, y, z, r;

    FUN_020473e8(s, input, 0);
    W(72) = 5 * W(76);
    low = 4096;
    high = 4096;
    if (tier >= 0 && tier < 3) {
        low = (DAT_020f2a30[tier] << 12) / 10;
        high = (DAT_020f2a3c[tier] << 12) / 10;
    }
    scale.x = low;
    scale.y = low;
    scale.z = low;
    *(Vec *)(s + 80) = scale;
    W(260) = (high - low) / 5;
    pos = *(Vec *)(s + 92);
    if (FUN_0207efd8(start, &DAT_020fc958)) pos = *start;
    delta.x = 0;
    delta.y = 0;
    delta.z = 0;
    if (FUN_0207efd8(end, &DAT_020fc958)) {
        FUN_02036348(&temp, end, &pos);
        delta = temp;
    }
    x = *(volatile int *)&delta.x;
    r = FUN_0207b860(DAT_0211c844, 4095);
    if (x) x = (int)(((long long)x * r + 2048) >> 12);
    y = delta.y;
    if (y) y = (int)(((long long)y * FUN_0207b860(DAT_0211c844, 4095) + 2048) >> 12);
    z = delta.z;
    if (z) z = (int)(((long long)z * r + 2048) >> 12);
    FUN_02035408(&result, x + pos.x, y + pos.y, z + pos.z);
    *(Vec *)(s + 92) = result;
}
