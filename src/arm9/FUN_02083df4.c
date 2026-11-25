// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int UNK_020fc988;
extern short UNK_020ed83c[];
extern void FUN_020345f0(void *, void *);
#pragma thumb off
extern void FUN_0205abac(void *, int, int);
extern void FUN_0205b0f0(void *, void *, void *);
#pragma thumb on
extern void FUN_02036848(void *, void *);
extern char *FUN_020837e8(void *);

void FUN_02083df4(char *s) {
    char *out = s + 312, *actor, *pos;
    int matrix[9], angle;
    Vec first, second, a, b;
    *(int *)out = UNK_020fc988;
    FUN_020345f0(&a, s + 24);
    *(Vec *)(out + 4) = a;
    FUN_020345f0(&b, s + 36);
    *(Vec *)(out + 16) = b;
    actor = FUN_020837e8(s);
    angle = *(unsigned short *)(actor + 68);
    pos = actor + 56;
    FUN_0205abac(matrix, UNK_020ed83c[(angle >> 4) * 2], UNK_020ed83c[(angle >> 4) * 2 + 1]);
    first.x = 20480;
    first.y = 32768;
    first.z = 40960;
    second.x = -12288;
    second.y = 14336;
    second.z = -4096;
    FUN_0205b0f0(&first, matrix, &first);
    FUN_0205b0f0(&second, matrix, &second);
    FUN_02036848(&first, pos);
    FUN_02036848(&second, pos);
    *(Vec *)(out + 28) = first;
    *(Vec *)(out + 40) = second;
}
