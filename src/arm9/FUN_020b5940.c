// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern short UNK_020ed83c[];
extern Vec UNK_020f58a8;
extern char *FUN_0204daa8(int);
extern int FUN_0204dab0(int);
extern void FUN_0204c4fc(void *, int, int, int);
extern void FUN_020345f0(void *, void *);
#pragma thumb off
extern void FUN_0205aa80(void *);
#pragma thumb reset
extern void FUN_0205abac(void *, int, int);
extern void FUN_0204a954(void *, void *, void *, void *);
extern void FUN_02047ae8(void *);
extern void *FUN_0204fc0c(int, void *, void *, int);
extern void FUN_0204ff00(void *, int, int, int, int);
void FUN_020b5940(void *unused, int id, int parameter, Vec *input, int divisor) {
    char *actor = FUN_0204daa8(id), *component;
    Vec p, offset;
    int matrix[9];
    Vec out;
    int descriptor[13];
    Vec values;
    int angle, i;
    void *effect;
    if (!actor)
        return;
    component = *(char **)(actor + 432);
    if (component && *(void **)(component + 20))
        FUN_0204c4fc(*(void **)(component + 20), 7, parameter, 1);
    if (!FUN_0204dab0(id))
        return;
    FUN_020345f0(&p, actor + 156);
    offset.x = 0;
    offset.y = 0;
    offset.z = 16384;
    angle = *(unsigned short *)(actor + 192);
    FUN_0205aa80(matrix);
    FUN_0205abac(matrix, UNK_020ed83c[2 * (angle >> 4)], UNK_020ed83c[2 * (angle >> 4) + 1]);
    FUN_0204a954(&out, &p, matrix, &offset);
    FUN_02047ae8(descriptor);
    descriptor[0] = id;
    descriptor[5] = input->x;
    descriptor[6] = input->z;
    values = UNK_020f58a8;
    for (i = 0; i < 3; i++) {
        descriptor[3] = i + 8;
        effect = FUN_0204fc0c(((int *)&values)[i] * 4096 / divisor, descriptor, &out, 16384);
        if (effect)
            FUN_0204ff00(effect, 2, 15, 1228800, 15);
    }
}
