// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char UNK_0211c844[];
extern void FUN_020473e8(void *, void *, int);
extern unsigned int FUN_0207b860(void *, unsigned int);
extern void *FUN_0204a580(void);
extern void FUN_0204a9bc(void *, short *, short *);
extern void FUN_0205abac(void *, int, int);
extern void FUN_0204a954(void *, void *, void *, void *);
extern void FUN_02035408(void *, int, int, int);

void FUN_0207ec98(char *s, char *source, int base, int spread, int offset) {
    Vec shift;
    int matrix[9];
    Vec scale;
    Vec position;
    short angles[2];
    int random;

    FUN_020473e8(s, source, 0);
    *(short *)(s + 260) = (FUN_0207b860(UNK_0211c844, 2048) + 2048) / 30;
    if (*(int *)(source + 84) == 40) {
        unsigned int n = FUN_0207b860(UNK_0211c844, 3) + 13;
        *(int *)(s + 72) = n * *(int *)(s + 76);
    }
    random = base + FUN_0207b860(UNK_0211c844, spread);
    scale.x = random;
    scale.y = random;
    scale.z = random;
    *(Vec *)(s + 80) = scale;
    if (offset > 0) {
        int r2;
        random = FUN_0207b860(UNK_0211c844, offset * 2);
        r2 = FUN_0207b860(UNK_0211c844, offset);
        shift.x = offset - random;
        shift.y = r2 + 2048;
        shift.z = 0;
        angles[1] = 0;
        angles[0] = 0;
        FUN_0204a9bc(FUN_0204a580(), angles + 1, angles);
        FUN_0205abac(matrix, angles[1], angles[0]);
        FUN_0204a954(s + 92, s + 92, matrix, &shift);
    } else {
        FUN_02035408(&position, *(int *)(s + 92), *(int *)(s + 96) + 2048, *(int *)(s + 100));
        *(Vec *)(s + 92) = position;
    }
}
