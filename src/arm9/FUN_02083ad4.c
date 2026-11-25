// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;
extern int UNK_020fc988;
extern char *UNK_02108d04;
extern short UNK_020ed83c[];
extern char *FUN_020837e8(void *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020345f0(void *, void *);
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02036368(void *);
extern void FUN_0205abac(void *, int, int);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_02036848(void *, void *);
extern void FUN_02083a70(void *, int);
extern void FUN_0203647c(void *, void *, void *);

void FUN_02083ad4(char *s) {
    char *out = s + 312;
    char *actor;
    char *actor_pos;
    Vec target, diff;
    int matrix[9];
    Vec eye, look, forward;
    Vec a, b, result;
    int angle, index;

    *(int *)out = UNK_020fc988;
    FUN_020345f0(&a, s + 24);
    *(Vec *)(out + 4) = a;
    FUN_020345f0(&b, s + 36);
    *(Vec *)(out + 16) = b;
    actor = FUN_020837e8(s);
    actor_pos = actor + 56;
    if (UNK_02108d04) {
        FUN_020345f0(&target, UNK_02108d04 + 156);
        FUN_02036348(&diff, &target, actor_pos);
        FUN_02036368(&diff);
        angle = FUN_0205cc08(diff.z);
        if (diff.x < 0) {
            angle = (unsigned short)(65536 - angle);
        }
    } else {
        angle = 0;
    }
    index = (angle >> 4) * 2;
    FUN_0205abac(matrix, UNK_020ed83c[index], UNK_020ed83c[index + 1]);
    eye.x = 0;
    eye.y = 7168;
    eye.z = 49152;
    look.x = 0;
    look.y = 12288;
    look.z = 0;
    FUN_0205b0f0(&eye, matrix, &eye);
    FUN_0205b0f0(&look, matrix, &look);
    FUN_02036848(&eye, actor_pos);
    FUN_02036848(&look, actor_pos);
    index = (*(unsigned short *)(actor + 68) >> 4) * 2;
    forward.x = UNK_020ed83c[index];
    forward.y = 0;
    forward.z = UNK_020ed83c[index + 1];
    FUN_02083a70(&forward, 12288);
    *(Vec *)(out + 28) = eye;
    FUN_0203647c(&result, &look, &forward);
    *(Vec *)(out + 40) = result;
}
