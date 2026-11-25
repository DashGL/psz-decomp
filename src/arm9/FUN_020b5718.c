// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char *FUN_0204daa8(int);
extern void FUN_020345f0(void *, void *);
#pragma thumb off
extern void FUN_0205aa80(void *);
#pragma thumb reset
extern void FUN_0205abac(void *, int, int);
extern void FUN_0204a954(void *, void *, void *, void *);
extern void FUN_02047ae8(void *);
extern void *FUN_0204fc0c(int, void *, void *, int);
extern void FUN_0204ff00(void *, int, int, int, int);
extern short UNK_020ed83c[];
extern Vec UNK_020f589c;
void FUN_020b5718(void *unused, int actorid, int *data, int divisor) {
    char *actor = FUN_0204daa8(actorid);
    Vec position, offset;
    int matrix[9];
    Vec result;
    int desc[13];
    Vec timing;
    int angle, i;
    void *effect;
    if (!actor)
        return;
    FUN_020345f0(&position, actor + 156);
    offset.x = 0;
    offset.y = 0;
    offset.z = 16384;
    angle = *(unsigned short *)(actor + 192);
    FUN_0205aa80(matrix);
    FUN_0205abac(matrix, UNK_020ed83c[(angle >> 4) * 2], UNK_020ed83c[(angle >> 4) * 2 + 1]);
    FUN_0204a954(&result, &position, matrix, &offset);
    FUN_02047ae8(desc);
    desc[0] = actorid;
    desc[5] = data[0];
    desc[6] = data[2];
    timing = UNK_020f589c;
    for (i = 0; i < 3; i++) {
        desc[3] = i + 8;
        effect = FUN_0204fc0c((((int *)&timing)[i] << 12) / divisor, desc, &result, 16384);
        if (effect)
            FUN_0204ff00(effect, 4, 15, 1228800, 50);
    }
}
